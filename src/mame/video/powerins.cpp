// license:BSD-3-Clause
// copyright-holders:Luca Elia
/***************************************************************************

                          -= Power Instinct =-
                            (C) 1993 Atlus

                driver by   Luca Elia (l.elia@tin.it)


Note:   if MAME_DEBUG is defined, pressing Z with:

        Q           shows layer 1
        W           shows layer 2
        A           shows the sprites

        Keys can be used together!

        [ 2 Scrolling Layers ]

        Each Layer is made of various pages of 256x256 pixels.

            [Layer 0]
                Pages:              16x2
                Tiles:              16x16x4
                Scroll:             X,Y

            [Layer 1]
                Pages:              2x1
                Tiles:              8x8x4
                Scroll:             No

        [ 256 Sprites ]

        Each sprite is made of a variable amount of 16x16 tiles.
        Size can therefore vary from 16x16 (1 tile) to 256x256
        (16x16 tiles)


**************************************************************************/

#include "emu.h"
#include "includes/powerins.h"

#include <algorithm>

/***************************************************************************

                        Hardware registers access

***************************************************************************/


WRITE8_MEMBER(powerins_state::flipscreen_w)
{
	flip_screen_set(data & 1);
	m_spritegen->set_flip_screen(flip_screen());
}

WRITE8_MEMBER(powerins_state::tilebank_w)
{
	if (data != m_tile_bank)
	{
		m_tile_bank = data;     // Tiles Bank (VRAM 0)
		m_tilemap[0]->mark_all_dirty();
	}
}


/***************************************************************************

                        Callbacks for the TileMap code

***************************************************************************/


/***************************************************************************
                          [ Tiles Format VRAM 0]

Offset:

0.w     fedc ---- ---- ----     Color Low  Bits
        ---- b--- ---- ----     Color High Bit
        ---- -a98 7654 3210     Code (Banked)


***************************************************************************/

/* Layers are made of 256x256 pixel pages */
/*
#define TILES_PER_PAGE_X    (0x10)
#define TILES_PER_PAGE_Y    (0x10)
#define TILES_PER_PAGE      (TILES_PER_PAGE_X * TILES_PER_PAGE_Y)

#define DIM_NX_0            (0x100)
#define DIM_NY_0            (0x20)
*/

TILE_GET_INFO_MEMBER(powerins_state::get_tile_info_0)
{
	uint16_t code = m_vram[0][tile_index];
	SET_TILE_INFO_MEMBER(0,
			(code & 0x07ff) | (m_tile_bank << 11),
			((code & 0xf000) >> 12) | ((code & 0x0800) >> 7),
			0);
}

TILEMAP_MAPPER_MEMBER(powerins_state::get_memory_offset_0)
{
	return  (row & 0xf) | ((col & 0xff) << 4) | ((row & 0x10) << 8);
}


/***************************************************************************
                          [ Tiles Format VRAM 1]

Offset:

0.w     fedc ---- ---- ----     Color
        ---- ba98 7654 3210     Code


***************************************************************************/

/*
#define DIM_NX_1    (0x40)
#define DIM_NY_1    (0x20)
*/

TILE_GET_INFO_MEMBER(powerins_state::get_tile_info_1)
{
	uint16_t code = m_vram[1][tile_index];
	SET_TILE_INFO_MEMBER(1,
			code & 0x0fff,
			(code & 0xf000) >> 12,
			0);
}

/***************************************************************************


                                video_start


***************************************************************************/

void powerins_state::video_start()
{
	m_spritebuffer[0] = make_unique_clear<uint16_t[]>(0x1000/2);
	m_spritebuffer[1] = make_unique_clear<uint16_t[]>(0x1000/2);

	m_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(FUNC(powerins_state::get_tile_info_0),this),tilemap_mapper_delegate(FUNC(powerins_state::get_memory_offset_0),this),16,16,256,32);
	m_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(FUNC(powerins_state::get_tile_info_1),this),TILEMAP_SCAN_COLS,8,8,64,32);

	m_tilemap[1]->set_transparent_pen(15);

	save_item(NAME(m_tile_bank));
	save_pointer(NAME(m_spritebuffer[0]), 0x1000/2);
	save_pointer(NAME(m_spritebuffer[1]), 0x1000/2);
}


/***************************************************************************


                                Sprites Drawing


***************************************************************************/



/* --------------------------[ Sprites Format ]----------------------------

Offset:     Format:                 Value:

    00      fedc ba98 7654 321-     -
            ---- ---- ---- ---0     Display this sprite

    02      fed- ---- ---- ----     -
            ---c ---- ---- ----     Flip X
            ---- ba9- ---- ----     -
            ---- ---8 ---- ----     Code High Bit
            ---- ---- 7654 ----     Number of tiles along Y, minus 1 (1-16)
            ---- ---- ---- 3210     Number of tiles along X, minus 1 (1-16)

    04                              Unused?

    06      f--- ---- ---- ----     -
            -edc ba98 7654 3210     Code Low Bits

    08                              X

    0A                              Unused?

    0C                              Y

    0E      fedc ba98 76-- ----     -
            ---- ---- --54 3210     Color


------------------------------------------------------------------------ */


void powerins_state::get_colour_6bit(u32 &colour, u32 &pri_mask)
{
	colour &= 0x3f;
	pri_mask |= GFX_PMASK_2; // under foreground
}

void powerins_state::get_flip_extcode(u16 attr, int &flipx, int &flipy, int &code)
{
	flipx = (attr & 0x1000) >> 12;
	code = (code & 0x7fff) | ((attr & 0x100) << 7);
}


/***************************************************************************


                                Screen Drawing


***************************************************************************/


uint32_t powerins_state::screen_update(screen_device &screen, bitmap_ind16 &bitmap, const rectangle &cliprect)
{
	int layers_ctrl = -1;

	int scrollx = (m_vctrl_0[2/2]&0xff) | ((m_vctrl_0[0/2]&0xff)<<8);
	int scrolly = (m_vctrl_0[6/2]&0xff) | ((m_vctrl_0[4/2]&0xff)<<8);

	m_tilemap[0]->set_scrollx(0, scrollx - 0x20);
	m_tilemap[0]->set_scrolly(0, scrolly );

	m_tilemap[1]->set_scrollx(0, -0x20); // fixed offset

#ifdef MAME_DEBUG
if (machine().input().code_pressed(KEYCODE_Z))
{
	int msk = 0;

	if (machine().input().code_pressed(KEYCODE_Q))  msk |= 1;
	if (machine().input().code_pressed(KEYCODE_W))  msk |= 2;
//  if (machine().input().code_pressed(KEYCODE_E))    msk |= 4;
	if (machine().input().code_pressed(KEYCODE_A))  msk |= 8;
	if (msk != 0) layers_ctrl &= msk;
}
#endif

	screen.priority().fill(0, cliprect);
	if (layers_ctrl&1)      m_tilemap[0]->draw(screen, bitmap, cliprect, 0, 1);
	else                    bitmap.fill(0, cliprect);
	if (layers_ctrl&2)      m_tilemap[1]->draw(screen, bitmap, cliprect, 0, 2);
	if (layers_ctrl&8)      m_spritegen->draw_sprites(screen, bitmap, cliprect, m_gfxdecode->gfx(2), m_spritebuffer[1].get(), 0x1000/2);
	return 0;
}

WRITE_LINE_MEMBER(powerins_state::screen_vblank)
{
	if (state)
	{
		std::copy_n(&m_spritebuffer[0][0], 0x1000/2, &m_spritebuffer[1][0]);
		std::copy_n(&m_spriteram[0x8000/2], 0x1000/2, &m_spritebuffer[0][0]);
		m_maincpu->set_input_line(4, HOLD_LINE);
	}
}

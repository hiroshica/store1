static const uint8_t fs_imgui_latlong_glsl[655] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x11, 0x75, // FSH.o.><.......u
	0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // _imageLodEnabled
	0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x53, 0x02, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, // r......S...varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, // ng highp vec2 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // texcoord0;.unifo
	0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, // rm highp vec4 u_
	0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x3b, // imageLodEnabled;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, // .uniform lowp sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, 0x62, 0x65, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // mplerCube s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, // olor;.void main 
	0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ().{.  highp vec
	0x33, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, // 3 result_1;.  hi
	0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ghp float tmpvar
	0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, // _2;.  tmpvar_2 =
	0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, //  (v_texcoord0.x 
	0x2a, 0x20, 0x36, 0x2e, 0x32, 0x38, 0x33, 0x31, 0x38, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, // * 6.283185);.  h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ighp float tmpva
	0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, // r_3;.  tmpvar_3 
	0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, // = (v_texcoord0.y
	0x20, 0x2a, 0x20, 0x33, 0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * 3.141593);.  
	0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x2d, 0x28, // result_1.x = (-(
	0x73, 0x69, 0x6e, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2a, // sin(tmpvar_3)) *
	0x20, 0x73, 0x69, 0x6e, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x3b, //  sin(tmpvar_2));
	0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, // .  result_1.y = 
	0x63, 0x6f, 0x73, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, // cos(tmpvar_3);. 
	0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x2d, //  result_1.z = (-
	0x28, 0x73, 0x69, 0x6e, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, // (sin(tmpvar_3)) 
	0x2a, 0x20, 0x63, 0x6f, 0x73, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, // * cos(tmpvar_2))
	0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // ;.  lowp vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_4;.  tmpvar
	0x5f, 0x34, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // _4.xyz = texture
	0x43, 0x75, 0x62, 0x65, 0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, // CubeLod    (s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, // xColor, result_1
	0x2c, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, // , u_imageLodEnab
	0x6c, 0x65, 0x64, 0x2e, 0x78, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // led.x).xyz;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x20, // pvar_4.w = (0.2 
	0x2b, 0x20, 0x28, 0x30, 0x2e, 0x38, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, // + (0.8 * u_image
	0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, // LodEnabled.y));.
	0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, //   gl_FragColor =
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       //  tmpvar_4;.}...
};
static const uint8_t fs_imgui_latlong_spv[1691] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x11, 0x75, // FSH.o.><.......u
	0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // _imageLodEnabled
	0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x10, 0x00, 0x40, 0x00, 0x50, 0x00, 0x5c, 0x06, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, // r..@.P.......#..
	0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, // ................
	0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, // LSL.std.450.....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x93, // .......main.....
	0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, // ................
	0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, // ................
	0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, // .......main.....
	0x00, 0x07, 0x00, 0x28, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // ...(...s_texColo
	0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x2b, // rSampler.......+
	0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, // ...s_texColorTex
	0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x77, 0x00, 0x00, 0x00, 0x24, // ture.......w...$
	0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x08, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, // Global.....w....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, // ...u_imageLodEna
	0x62, 0x6c, 0x65, 0x64, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, // bled.......y....
	0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x93, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, // ...........v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x62, // coord0.........b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, // gfx_FragData0..G
	0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...(...".......G
	0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x47, // ...(...!...P...G
	0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...+...".......G
	0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, // ...+...!...@...H
	0x00, 0x05, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, // ...w.......#....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x77, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, // ...G...w.......G
	0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...y...".......G
	0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x47, // ...y...!...0...G
	0x00, 0x04, 0x00, 0x93, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x00, 0x04, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, // ................
	0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, // .......!........
	0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, // ... ............
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, // ................
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0e, // ................
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x19, // ................
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x27, // ........... ...'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x27, // ...........;...'
	0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x2a, // ...(....... ...*
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x2a, // ...........;...*
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x2e, // ...+............
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x2e, // ... .......+....
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x37, // ...3...........7
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x46, // .......+.......F
	0x00, 0x00, 0x00, 0xdb, 0x0f, 0x49, 0x40, 0x15, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x20, // .....I@....L... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4d, // .......+...L...M
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x53, // .......+...L...S
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x77, 0x00, 0x00, 0x00, 0x0e, // ...........w....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x78, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x77, // ... ...x.......w
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x78, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x02, // ...;...x...y....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, // ... ............
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0xcd, // ...+............
	0xcc, 0x4c, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0xcd, // .L>+............
	0xcc, 0x4c, 0x3f, 0x20, 0x00, 0x04, 0x00, 0x92, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x19, // .L? ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x92, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x01, // ...;............
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0e, // ... ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x03, // ...;............
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0a, 0x01, 0x00, 0x00, 0xdb, // ...+............
	0x0f, 0xc9, 0x40, 0x01, 0x00, 0x03, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00, 0x36, // ..@............6
	0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, // ...........=....
	0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, // ...)...(...=....
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x19, // ...,...+...=....
	0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, // ...........Q....
	0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x85, // ................
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, 0x0a, // ................
	0x01, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0x00, 0x94, // ...Q............
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe1, // ................
	0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, // .......F........
	0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe1, // ................
	0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xe3, // ................
	0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, // ................
	0x00, 0x00, 0x00, 0xe7, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00, 0x52, // ...............R
	0x00, 0x06, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x0b, // ................
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xea, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x52, // ...............R
	0x00, 0x06, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0xea, 0x00, 0x00, 0x00, 0x04, // ................
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xed, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x7f, // ................
	0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00, 0x0c, // ................
	0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, // ................
	0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xf1, // ................
	0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x0b, // ...........R....
	0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x7f, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x79, // ...A...........y
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, // ...3...M...=....
	0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x37, // ...........V...7
	0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x58, // .......,...)...X
	0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0x00, 0x08, // ................
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x7f, // ...........A....
	0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x53, // .......y...3...S
	0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc2, // ...=............
	0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x86, // ................
	0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc5, // ................
	0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, // ...........Q....
	0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xfc, // ...Q............
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xcb, // .......P........
	0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xc5, // ................
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xfd, // ...>............
	0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00,                               // ...8.......
};
static const uint8_t fs_imgui_latlong_dx9[552] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x11, // _texColor0......
	0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, // u_imageLodEnable
	0x64, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0xec, 0x01, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, // d...............
	0xff, 0x2e, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, // ...CTAB.........
	0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x84, // ................
	0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x50, // ...D...........P
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, // .......`........
	0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, // ...t.......s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, // Color...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, // .......u_imageLo
	0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x00, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, // dEnabled........
	0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, // ...........ps_3_
	0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, // 0.Microsoft (R) 
	0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, // HLSL Shader Comp
	0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x01, // iler 10.1..Q....
	0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x3f, 0xdb, 0x0f, 0xc9, 0x40, 0xdb, 0x0f, 0x49, 0xc0, 0x00, // ......?...@..I..
	0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x05, 0x02, 0x00, 0x0f, 0xa0, 0xcd, 0xcc, 0x4c, 0x3f, 0xcd, // ...Q.........L?.
	0xcc, 0x4c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x05, // .L>.............
	0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, // ................
	0x08, 0x0f, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0xa0, 0x00, // ................
	0x00, 0x00, 0x90, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x55, 0xa0, 0x01, // .............U..
	0x00, 0xaa, 0xa0, 0x25, 0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, // ...%............
	0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x90, 0x01, 0x00, 0x00, 0xa0, 0x01, // .........U......
	0x00, 0x00, 0xa0, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x55, 0xa0, 0x01, // .............U..
	0x00, 0xaa, 0xa0, 0x25, 0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, // ...%............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x05, 0x80, 0x01, 0x00, 0xc5, 0x80, 0x02, 0x00, 0x55, 0x81, 0x01, // .............U..
	0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x02, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x5f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, // ......._........
	0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, 0x80, 0x00, // ................
	0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x04, // .............U..
	0x00, 0x00, 0x04, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, // .........U......
	0x00, 0x55, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                                 // .U......
};
static const uint8_t fs_imgui_latlong_dx11[623] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x11, 0x75, // FSH.o.><.......u
	0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // _imageLodEnabled
	0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x30, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x8e, // r0.....0...DXBC.
	0x4b, 0x65, 0x9b, 0x2e, 0xce, 0x92, 0x33, 0xf0, 0xfb, 0x9d, 0x50, 0x09, 0x30, 0x0b, 0xf1, 0x01, // Ke....3...P.0...
	0x00, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, // ...0.......,....
	0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, // .......ISGNP....
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // .......8........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, // ...............D
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, // .......SV_POSITI
	0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, // ON.TEXCOORD....O
	0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, // SGN,........... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, // .......SV_TARGET
	0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x70, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x5c, // ...SHDRp...@....
	0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // ...Y...F. ......
	0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, // ...Z....`......X
	0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, // 0...p......UU..b
	0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, // ...2.......e....
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, //  ......h.......8
	0x00, 0x00, 0x0a, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x15, 0x10, 0x00, 0x01, // ...2............
	0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xdb, 0x0f, 0x49, 0x40, 0xdb, 0x0f, 0xc9, 0x40, 0x00, // ....@....I@...@.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x06, 0x42, 0x00, 0x10, 0x00, 0x00, // .......M...B....
	0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, // ...............M
	0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x0a, // ................
	0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x06, 0x00, // ...A.......M....
	0xd0, 0x00, 0x00, 0x62, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x01, 0x10, 0x00, 0x00, // ...b............
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2a, // ...8...........*
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, // .......:.......8
	0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, // ...........:....
	0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, // ...*.......H....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x03, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, // .......F.......F
	0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, // ~.......`.......
	0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, // . .........6...r
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, //  ......F.......2
	0x00, 0x00, 0x0a, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, 0x00, 0x00, // .... ........ ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3f, 0x01, // ........@....L?.
	0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3e, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00,       // @....L>>.......
};
static const uint8_t fs_imgui_latlong_mtl[1102] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x11, 0x75, // FSH.o.><.......u
	0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // _imageLodEnabled
	0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x10, 0x00, 0x40, 0x00, 0x50, 0x00, 0x0f, 0x04, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, // r..@.P.....#incl
	0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, // ude <metal_stdli
	0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, // b>.#include <sim
	0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, // d/simd.h>..using
	0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, //  namespace metal
	0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, // ;..struct _Globa
	0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, // l.{.    float4 u
	0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // _imageLodEnabled
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x66, // ;.};..constant f
	0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x32, 0x36, 0x37, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, // loat3 _267 = {};
	0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // ..struct xlatMtl
	0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // Main_out.{.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // loat4 bgfx_FragD
	0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, // ata0 [[color(0)]
	0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // ];.};..struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, // atMtlMain_in.{. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, //    float2 v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, // oord0 [[user(loc
	0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, // n0)]];.};..fragm
	0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // ent xlatMtlMain_
	0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, // out xlatMtlMain(
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, // xlatMtlMain_in i
	0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, // n [[stage_in]], 
	0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, // constant _Global
	0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, // & _mtl_u [[buffe
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x63, // r(0)]], texturec
	0x75, 0x62, 0x65, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, // ube<float> s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, // Color [[texture(
	0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, // 0)]], sampler s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, // texColorSampler 
	0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, // [[sampler(0)]]).
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // {.    xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, // n_out out = {};.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x32, 0x32, 0x31, 0x20, 0x3d, //     float _221 =
	0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, //  in.v_texcoord0.
	0x78, 0x20, 0x2a, 0x20, 0x36, 0x2e, 0x32, 0x38, 0x33, 0x31, 0x38, 0x35, 0x34, 0x38, 0x32, 0x30, // x * 6.2831854820
	0x32, 0x35, 0x31, 0x34, 0x36, 0x34, 0x38, 0x34, 0x33, 0x37, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, // 25146484375;.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x32, 0x32, 0x35, 0x20, 0x3d, 0x20, 0x69, 0x6e, //  float _225 = in
	0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2a, // .v_texcoord0.y *
	0x20, 0x33, 0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, 0x32, 0x37, 0x34, 0x31, 0x30, 0x31, 0x32, 0x35, //  3.1415927410125
	0x37, 0x33, 0x32, 0x34, 0x32, 0x31, 0x38, 0x37, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // 732421875;.    f
	0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x32, 0x36, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x32, 0x36, // loat3 _260 = _26
	0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x32, 0x36, 0x30, 0x2e, 0x78, 0x20, 0x3d, 0x20, // 7;.    _260.x = 
	0x28, 0x2d, 0x73, 0x69, 0x6e, 0x28, 0x5f, 0x32, 0x32, 0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x73, // (-sin(_225)) * s
	0x69, 0x6e, 0x28, 0x5f, 0x32, 0x32, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // in(_221);.    fl
	0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x32, 0x36, 0x32, 0x20, 0x3d, 0x20, 0x5f, 0x32, 0x36, 0x30, // oat3 _262 = _260
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x32, 0x36, 0x32, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x63, // ;.    _262.y = c
	0x6f, 0x73, 0x28, 0x5f, 0x32, 0x32, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // os(_225);.    fl
	0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x32, 0x36, 0x34, 0x20, 0x3d, 0x20, 0x5f, 0x32, 0x36, 0x32, // oat3 _264 = _262
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x32, 0x36, 0x34, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, // ;.    _264.z = (
	0x2d, 0x73, 0x69, 0x6e, 0x28, 0x5f, 0x32, 0x32, 0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x63, 0x6f, // -sin(_225)) * co
	0x73, 0x28, 0x5f, 0x32, 0x32, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, // s(_221);.    out
	0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, // .bgfx_FragData0 
	0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // = float4(s_texCo
	0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, // lor.sample(s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x32, // ColorSampler, _2
	0x36, 0x34, 0x2c, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, // 64, level(_mtl_u
	0x2e, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, // .u_imageLodEnabl
	0x65, 0x64, 0x2e, 0x78, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x30, // ed.x)).xyz, 0.20
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x32, 0x39, 0x38, 0x30, 0x32, 0x33, 0x32, 0x32, 0x33, 0x38, // 0000002980232238
	0x37, 0x36, 0x39, 0x35, 0x33, 0x31, 0x32, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x38, 0x30, // 76953125 + (0.80
	0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x31, 0x39, 0x32, 0x30, 0x39, 0x32, 0x38, 0x39, 0x35, 0x35, // 0000011920928955
	0x30, 0x37, 0x38, 0x31, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // 078125 * _mtl_u.
	0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, // u_imageLodEnable
	0x64, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // d.y));.    retur
	0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x10, 0x00,             // n out;.}......
};
extern const uint8_t* fs_imgui_latlong_pssl;
extern const uint32_t fs_imgui_latlong_pssl_size;

static const unsigned char pkt_start[503] = {
/*0x00, 0x00, */0xff, 0xff, 0x37, 0x77, 0x7f, 0xff, /* ....7w.. */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* ........ */
0xff, 0xff, 0xff, 0xac, 0xb1, 0xff, 0xb0, 0xb0, /* ........ */
0x2d, 0x00, 0x00, 0x13, 0x11, 0x38, 0x30, 0x32, /* -....802 */
0x31, 0x78, 0x2e, 0x65, 0x78, 0x65, 0x00, 0x00, /* 1x.exe.. */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, /* ........ */
0x02, 0x00, 0x00, 0x00, 0x13, 0x36, 0x65, 0x1a, /* ........ */
0x0c, 0x00, 0x00, 0x13, 0x11, 0x18, 0x06, 0x00, /* ........ */  /*这一段未知*/
0x00, 0x00, 0x00, 0x1a, 0x0e, 0x00, 0x00, 0x13, /* ........ */  /*这一段未知*/
0x11, 0x2d, 0x08, 0xf8, 0xa9, 0x63, 0x32, 0xe5, /* ..-....d */  /*这一段未知*/
0x6e, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x2f, /* ........ */  /*这一段未知*/
0x12, 0x02, 0x1a, 0x0f, 0x00, 0x00, 0x13, 0x11, /* /....... */  
0x76, 0x09, 0x38, 0x2e, 0x38, 0x2e, 0x38, 0x43, /* v.8.8.8. */
0x97, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x35, /* 8......5 */  /* 这里是 ipv6*/
0x03, 0x03, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */  /* 这里是 ipv6*/
0x36, 0x12, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, /* 6....... */  /* 这里是 ipv6*/
0x00, 0x00, 0x5a, 0x69, 0x6c, 0xff, 0xfe, 0x35, /* ........ */  /* 这里是 ipv6*/
0x69, 0x37, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */  /* 这里是 ipv6*/
0x38, 0x12, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, /* 8....... */  /* 这里是 ipv6*/  
0x00, 0x00, 0x44, 0x4f, 0x56, 0x30, 0x95, 0xb5, /* .......d */  /* 这里是 ipv6*/
0xaf, 0x90, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */  /* 这里是 ipv6*/
0x4e, 0x12, 0x20, 0x01, 0x02, 0x50, 0x68, 0x01, /* N....... */  /* 这里是 ipv6*/
0x11, 0x08, 0x44, 0x4f, 0x56, 0x30, 0x95, 0xb5, /* ........ */  /* 这里是 ipv6*/   
0xaf, 0x90, 0x1a, 0x88, 0x00, 0x00, 0x13, 0x11, /* ........ */  /* 这里是 ipv6*/
0x4d, 0x82, 0x62, 0x34, 0x36, 0x34, 0x38, 0x39, /* M.b46489 */
0x36, 0x64, 0x38, 0x31, 0x33, 0x35, 0x65, 0x65, /* 6d8135ee */
0x31, 0x64, 0x61, 0x37, 0x64, 0x64, 0x32, 0x39, /* 1da7dd29 */
0x32, 0x36, 0x62, 0x63, 0x62, 0x62, 0x36, 0x35, /* 26bcbb65 */
0x61, 0x65, 0x34, 0x65, 0x62, 0x37, 0x37, 0x64, /* ae4eb77d */
0x66, 0x36, 0x38, 0x31, 0x30, 0x31, 0x32, 0x61, /* f681012a */
0x38, 0x65, 0x35, 0x32, 0x63, 0x65, 0x38, 0x62, /* 8e52ce8b */
0x66, 0x35, 0x36, 0x36, 0x31, 0x32, 0x35, 0x31, /* f5661251 */
0x39, 0x34, 0x65, 0x64, 0x31, 0x39, 0x37, 0x62, /* 94ed197b */
0x63, 0x66, 0x64, 0x61, 0x38, 0x66, 0x37, 0x32, /* cfda8f72 */
0x39, 0x66, 0x35, 0x38, 0x32, 0x61, 0x31, 0x64, /* 9f582a1d */
0x33, 0x33, 0x30, 0x64, 0x35, 0x66, 0x30, 0x33, /* 330d5f03 */
0x62, 0x61, 0x34, 0x38, 0x32, 0x34, 0x35, 0x61, /* ba48245a */
0x38, 0x33, 0x32, 0x35, 0x66, 0x31, 0x32, 0x31, /* 8325f121 */
0x35, 0x65, 0x62, 0x62, 0x65, 0x34, 0x63, 0x66, /* 5ebbe4cf */
0x39, 0x63, 0x31, 0x63, 0x61, 0x32, 0x35, 0x62, /* 9c1ca25b */
0x30, 0x62, 0x1a, 0x28, 0x00, 0x00, 0x13, 0x11, /* 0b.(.... */
0x39, 0x22, 0xc1, 0xaa, 0xcd, 0xa8, 0xbf, 0xed, /* 9"intern */ /*这里是服务商  */
0xb4, 0xf8, 0xbd, 0xd3, 0xc8, 0xeb, 0x00, 0x00, /* et...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x1a, 0x48, 0x00, 0x00, 0x13, 0x11, /* ...H.... */
0x54, 0x42, 0x32, 0x30, 0x31, 0x35, 0x30, 0x32, /* TB...... */
0x30, 0x39, 0x34, 0x30, 0x31, 0x35, 0x31, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x1a, 0x08, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x55, 0x02, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, /* U....... */
0x62, 0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, /* b....... */
0x11, 0x70, 0x03, 0x40, 0x1a, 0x1d, 0x00, 0x00, /* .p.@.... */
0x13, 0x11, 0x6f, 0x17, 0x52, 0x47, 0x2d, 0x53, /* ..o.RG-S */
0x55, 0x20, 0x46, 0x6f, 0x72, 0x20, 0x4c, 0x69, /* U For Li */
0x6e, 0x75, 0x78, 0x20, 0x56, 0x31, 0x2e, 0x30, /* nux V1.0 */
0x00                                            /* . */
};

static const unsigned char pkt_identity[503] = {
/*0x32, */0xff, 0xff, 0x37, 0x77, 0x7f, 0xff, 0xff, /* 2..7w... */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* ........ */
0xff, 0xff, 0xac, 0xb1, 0xff, 0xb0, 0xb0, 0x2d, /* .......- */
0x00, 0x00, 0x13, 0x11, 0x38, 0x30, 0x32, 0x31, /* ....8021 */
0x78, 0x2e, 0x65, 0x78, 0x65, 0x00, 0x00, 0x00, /* x.exe... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, /* ........ */
0x00, 0x00, 0x00, 0x13, 0x36, 0x65, 0x1a, 0x0c, /* ........ */
0x00, 0x00, 0x13, 0x11, 0x18, 0x06, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x1a, 0x0e, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x2d, 0x08, 0xf8, 0xa9, 0x63, 0x32, 0xe5, 0x6e, /* .-....d. */
0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x2f, 0x12, /* ......./ */
0x02, 0x1a, 0x0f, 0x00, 0x00, 0x13, 0x11, 0x76, /* .......v */
0x09, 0x38, 0x2e, 0x38, 0x2e, 0x38, 0x2e, 0x38, /* .8.8.8.8 */
0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x35, 0x03, /* ......5. */
0x03, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x36, /* .......6 */
0x12, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x5a, 0x69, 0x6c, 0xff, 0xfe, 0x35, 0x69, /* ........ */
0x37, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x38, /* .......8 */
0x12, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x44, 0x4f, 0x56, 0x30, 0x95, 0xb5, 0xaf, /* ......d. */
0x90, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x4e, /* .......N */
0x12, 0x20, 0x01, 0x02, 0x50, 0x68, 0x01, 0x11, /* ........ */
0x08, 0x44, 0x4f, 0x56, 0x30, 0x95, 0xb5, 0xaf, /* ........ */
0x90, 0x1a, 0x88, 0x00, 0x00, 0x13, 0x11, 0x4d, /* .......M */
0x82, 0x62, 0x34, 0x36, 0x34, 0x38, 0x39, 0x36, /* .b464896 */
0x64, 0x38, 0x31, 0x33, 0x35, 0x65, 0x65, 0x31, /* d8135ee1 */
0x64, 0x61, 0x37, 0x64, 0x64, 0x32, 0x39, 0x32, /* da7dd292 */
0x36, 0x62, 0x63, 0x62, 0x62, 0x36, 0x35, 0x61, /* 6bcbb65a */
0x65, 0x34, 0x65, 0x62, 0x37, 0x37, 0x64, 0x66, /* e4eb77df */
0x36, 0x38, 0x31, 0x30, 0x31, 0x32, 0x61, 0x38, /* 681012a8 */
0x65, 0x35, 0x32, 0x63, 0x65, 0x38, 0x62, 0x66, /* e52ce8bf */
0x35, 0x36, 0x36, 0x31, 0x32, 0x35, 0x31, 0x39, /* 56612519 */
0x34, 0x65, 0x64, 0x31, 0x39, 0x37, 0x62, 0x63, /* 4ed197bc */
0x66, 0x64, 0x61, 0x38, 0x66, 0x37, 0x32, 0x39, /* fda8f729 */
0x66, 0x35, 0x38, 0x32, 0x61, 0x31, 0x64, 0x33, /* f582a1d3 */
0x33, 0x30, 0x64, 0x35, 0x66, 0x30, 0x33, 0x62, /* 30d5f03b */
0x61, 0x34, 0x38, 0x32, 0x34, 0x35, 0x61, 0x38, /* a48245a8 */
0x33, 0x32, 0x35, 0x66, 0x31, 0x32, 0x31, 0x35, /* 325f1215 */
0x65, 0x62, 0x62, 0x65, 0x34, 0x63, 0x66, 0x39, /* ebbe4cf9 */
0x63, 0x31, 0x63, 0x61, 0x32, 0x35, 0x62, 0x30, /* c1ca25b0 */
0x62, 0x1a, 0x28, 0x00, 0x00, 0x13, 0x11, 0x39, /* b.(....9 */
0x22, 0xc1, 0xaa, 0xcd, 0xa8, 0xbf, 0xed, 0xb4, /* "interne */
0xf8, 0xbd, 0xd3, 0xc8, 0xeb, 0x00, 0x00, 0x00, /* t....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x1a, 0x48, 0x00, 0x00, 0x13, 0x11, 0x54, /* ..H....T */
0x42, 0x32, 0x30, 0x31, 0x35, 0x30, 0x32, 0x30, /* B....... */
0x39, 0x34, 0x30, 0x31, 0x35, 0x31, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x1a, 0x08, 0x00, 0x00, 0x13, 0x11, 0x55, /* .......U */
0x02, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x62, /* .......b */
0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x70, 0x03, 0x40, 0x1a, 0x1d, 0x00, 0x00, 0x13, /* p.@..... */
0x11, 0x6f, 0x17, 0x52, 0x47, 0x2d, 0x53, 0x55, /* .o.RG-SU */
0x20, 0x46, 0x6f, 0x72, 0x20, 0x4c, 0x69, 0x6e, /*  For Lin */
0x75, 0x78, 0x20, 0x56, 0x31, 0x2e, 0x30, 0x00  /* ux V1.0. */
};

static const unsigned char pkt_md5[519] = {
/*0x32, 0x32, */0xff, 0xff, 0x37, 0x77, 0x7f, 0xff, /* 22..7w.. */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* ........ */
0xff, 0xff, 0xff, 0xac, 0xb1, 0xff, 0xb0, 0xb0, /* ........ */
0x2d, 0x00, 0x00, 0x13, 0x11, 0x38, 0x30, 0x32, /* -....802 */
0x31, 0x78, 0x2e, 0x65, 0x78, 0x65, 0x00, 0x00, /* 1x.exe.. */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, /* ........ */
0x02, 0x00, 0x00, 0x00, 0x13, 0x11, 0x01, 0xc1, /* ........ */
0x1a, 0x0c, 0x00, 0x00, 0x13, 0x11, 0x18, 0x06, /* ........ */
0x00, 0x00, 0x00, 0x01, 0x1a, 0x0e, 0x1a, 0x0c, /* ........ */
0x00, 0x00, 0x13, 0x11, 0x18, 0x06, 0x00, 0x00, /* ..-....d */
0x00, 0x00, 0x1a, 0x0e, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x2d, 0x08, 0xf8, 0xa9, 0x63, 0x32, 0xe5, 0x6e, /* /...o... */
0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x2f, 0x12, /* .KR..qU. */
0xd6, 0xb2, 0x1a, 0x0f, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x76, 0x09, 0x38, 0x2e, 0x38, 0x2e, 0x38, 0x2e, /* v.8.8.8. */
0x38, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x35, /* 8......5 */
0x03, 0x03, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x36, 0x12, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, /* 6....... */
0x00, 0x00, 0x5a, 0x69, 0x6c, 0xff, 0xfe, 0x35, /* ........ */
0x69, 0x37, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x38, 0x12, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, /* 8....... */
0x00, 0x00, 0x44, 0x4f, 0x56, 0x30, 0x95, 0xb5, /* .......d */
0xaf, 0x90, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x4e, 0x12, 0x20, 0x01, 0x02, 0x50, 0x68, 0x01, /* N....... */
0x11, 0x08, 0x44, 0x4f, 0x56, 0x30, 0x95, 0xb5, /* ........ */
0xaf, 0x90, 0x1a, 0x88, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x4d, 0x82, 0x39, 0x36, 0x64, 0x30, 0x37, 0x62, /* M.96d07b */
0x35, 0x63, 0x64, 0x35, 0x38, 0x34, 0x62, 0x36, /* 5cd584b6 */
0x62, 0x62, 0x65, 0x64, 0x32, 0x35, 0x65, 0x64, /* bbed25ed */
0x39, 0x38, 0x38, 0x64, 0x34, 0x32, 0x66, 0x66, /* 988d42ff */
0x30, 0x65, 0x37, 0x39, 0x39, 0x63, 0x33, 0x39, /* 0e799c39 */
0x63, 0x38, 0x64, 0x37, 0x32, 0x31, 0x36, 0x61, /* c8d7216a */
0x38, 0x65, 0x35, 0x66, 0x61, 0x32, 0x66, 0x61, /* 8e5fa2fa */
0x64, 0x37, 0x66, 0x38, 0x64, 0x33, 0x35, 0x37, /* d7f8d357 */
0x61, 0x31, 0x38, 0x62, 0x33, 0x66, 0x66, 0x65, /* a18b3ffe */
0x65, 0x30, 0x64, 0x31, 0x38, 0x34, 0x65, 0x30, /* e0d184e0 */
0x32, 0x65, 0x32, 0x39, 0x31, 0x32, 0x38, 0x64, /* 2e29128d */
0x33, 0x30, 0x63, 0x61, 0x64, 0x33, 0x65, 0x36, /* 30cad3e6 */
0x36, 0x31, 0x38, 0x37, 0x36, 0x32, 0x33, 0x63, /* 6187623c */
0x31, 0x37, 0x31, 0x35, 0x31, 0x63, 0x61, 0x39, /* 17151ca9 */
0x36, 0x65, 0x35, 0x61, 0x32, 0x34, 0x32, 0x31, /* 6e5a2421 */
0x65, 0x39, 0x35, 0x35, 0x37, 0x61, 0x37, 0x38, /* e9557a78 */
0x35, 0x35, 0x1a, 0x28, 0x00, 0x00, 0x13, 0x11, /* 55.(.... */
0x39, 0x22, 0xc1, 0xaa, 0xcd, 0xa8, 0xbf, 0xed, /* 9"intern */
0xb4, 0xf8, 0xbd, 0xd3, 0xc8, 0xeb, 0x00, 0x00, /* et...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x1a, 0x48, 0x00, 0x00, 0x13, 0x11, /* ...H.... */
0x54, 0x42, 0x32, 0x30, 0x31, 0x35, 0x30, 0x32, /* TB...... */
0x30, 0x39, 0x34, 0x30, 0x31, 0x35, 0x31, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x1a, 0x08, 0x00, 0x00, 0x13, 0x11, /* ........ */
0x55, 0x02, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, /* U....... */
0x62, 0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, /* b....... */
0x11, 0x70, 0x03, 0x40, 0x1a, 0x1d, 0x00, 0x00, /* .p.@.... */
0x13, 0x11, 0x6f, 0x17, 0x52, 0x47, 0x2d, 0x53, /* ..o.RG-S */
0x55, 0x20, 0x46, 0x6f, 0x72, 0x20, 0x4c, 0x69, /* U For Li */
0x6e, 0x75, 0x78, 0x20, 0x56, 0x31, 0x2e, 0x30, /* nux V1.0 */
0x00                                            /* . */
};
; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25777 Merger.MergeBoard.Systems.SwapSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A761E4 | public void Tick(TickContext context) { }
; bytes=832 sha256=037cfe8fed37f8362ee302f202841261ad4b95400b42bdedfb3650984e527e0a status=arm64_complete_bound indexed_start=True
0x06A761E4: ff8304d1  sub sp, sp, #0x120
0x06A761E8: fd7b0ea9  stp x29, x30, [sp, #0xe0]
0x06A761EC: f85f0fa9  stp x24, x23, [sp, #0xf0]
0x06A761F0: f65710a9  stp x22, x21, [sp, #0x100]
0x06A761F4: f44f11a9  stp x20, x19, [sp, #0x110]
0x06A761F8: b5950090  adrp x21, #0x7d2a000
0x06A761FC: d46500f0  adrp x20, #0x7731000
0x06A76200: a8165c39  ldrb w8, [x21, #0x705]
0x06A76204: 94a242f9  ldr x20, [x20, #0x540]
0x06A76208: f30301aa  mov x19, x1
0x06A7620C: 68060037  tbnz w8, #0, #0x6a762d8
0x06A76210: c06500f0  adrp x0, #0x7731000
0x06A76214: 00a442f9  ldr x0, [x0, #0x548]
0x06A76218: 002a1c97  bl #0x3180a18
0x06A7621C: c06500b0  adrp x0, #0x772f000
0x06A76220: 002847f9  ldr x0, [x0, #0xe50]
0x06A76224: fd291c97  bl #0x3180a18
0x06A76228: c06500f0  adrp x0, #0x7731000
0x06A7622C: 00a842f9  ldr x0, [x0, #0x550]
0x06A76230: fa291c97  bl #0x3180a18
0x06A76234: c06500d0  adrp x0, #0x7730000
0x06A76238: 008443f9  ldr x0, [x0, #0x708]
0x06A7623C: f7291c97  bl #0x3180a18
0x06A76240: c06500b0  adrp x0, #0x772f000
0x06A76244: 003447f9  ldr x0, [x0, #0xe68]
0x06A76248: f4291c97  bl #0x3180a18
0x06A7624C: c06500f0  adrp x0, #0x7731000
0x06A76250: 004c40f9  ldr x0, [x0, #0x98]
0x06A76254: f1291c97  bl #0x3180a18
0x06A76258: c06500f0  adrp x0, #0x7731000
0x06A7625C: 006c41f9  ldr x0, [x0, #0x2d8]
0x06A76260: ee291c97  bl #0x3180a18
0x06A76264: c06500f0  adrp x0, #0x7731000
0x06A76268: 005440f9  ldr x0, [x0, #0xa8]
0x06A7626C: eb291c97  bl #0x3180a18
0x06A76270: c06500f0  adrp x0, #0x7731000
0x06A76274: 00ac42f9  ldr x0, [x0, #0x558]
0x06A76278: e8291c97  bl #0x3180a18
0x06A7627C: c06500f0  adrp x0, #0x7731000
0x06A76280: 005840f9  ldr x0, [x0, #0xb0]
0x06A76284: e5291c97  bl #0x3180a18
0x06A76288: c06500b0  adrp x0, #0x772f000
0x06A7628C: 005047f9  ldr x0, [x0, #0xea0]
0x06A76290: e2291c97  bl #0x3180a18
0x06A76294: c06500f0  adrp x0, #0x7731000
0x06A76298: 00b042f9  ldr x0, [x0, #0x560]
0x06A7629C: df291c97  bl #0x3180a18
0x06A762A0: c06500f0  adrp x0, #0x7731000
0x06A762A4: 007041f9  ldr x0, [x0, #0x2e0]
0x06A762A8: dc291c97  bl #0x3180a18
0x06A762AC: c06500d0  adrp x0, #0x7730000
0x06A762B0: 009046f9  ldr x0, [x0, #0xd20]
0x06A762B4: d9291c97  bl #0x3180a18
0x06A762B8: c06500f0  adrp x0, #0x7731000
0x06A762BC: 00b442f9  ldr x0, [x0, #0x568]
0x06A762C0: d6291c97  bl #0x3180a18
0x06A762C4: c06500f0  adrp x0, #0x7731000
0x06A762C8: 00a042f9  ldr x0, [x0, #0x540]
0x06A762CC: d3291c97  bl #0x3180a18
0x06A762D0: 28008052  movz w8, #0x1
0x06A762D4: a8161c39  strb w8, [x21, #0x705]
0x06A762D8: 800240f9  ldr x0, [x20]
0x06A762DC: 00e4006f  movi v0.2d, #0000000000000000
0x06A762E0: ff7f09a9  stp xzr, xzr, [sp, #0x90]
0x06A762E4: ff8b00b9  str wzr, [sp, #0x88]
0x06A762E8: e00305ad  stp q0, q0, [sp, #0xa0]
0x06A762EC: e00303ad  stp q0, q0, [sp, #0x60]
0x06A762F0: e00302ad  stp q0, q0, [sp, #0x40]
0x06A762F4: 6b2a1c97  bl #0x3180ca0
0x06A762F8: e1031faa  mov x1, xzr
0x06A762FC: f40300aa  mov x20, x0
0x06A76300: bf90b197  bl #0x56da5fc
0x06A76304: 600640f9  ldr x0, [x19, #8]
0x06A76308: c01000b4  cbz x0, #0x6a76520
0x06A7630C: c86500d0  adrp x8, #0x7730000
0x06A76310: 089146f9  ldr x8, [x8, #0xd20]
0x06A76314: 010140f9  ldr x1, [x8]
0x06A76318: 29394d97  bl #0x3dc47bc
0x06A7631C: 600f0036  tbz w0, #0, #0x6a76508
0x06A76320: c86500f0  adrp x8, #0x7731000
0x06A76324: 600640ad  ldp q0, q1, [x19]
0x06A76328: 08a942f9  ldr x8, [x8, #0x550]
0x06A7632C: e00701ad  stp q0, q1, [sp, #0x20]
0x06A76330: 000140f9  ldr x0, [x8]
0x06A76334: a28e4697  bl #0x3c19dbc
0x06A76338: d76500b0  adrp x23, #0x772f000
0x06A7633C: f73647f9  ldr x23, [x23, #0xe68]
0x06A76340: f50300aa  mov x21, x0
0x06A76344: e80240f9  ldr x8, [x23]
0x06A76348: e00308aa  mov x0, x8
0x06A7634C: 552a1c97  bl #0x3180ca0
0x06A76350: d86500f0  adrp x24, #0x7731000
0x06A76354: 18a742f9  ldr x24, [x24, #0x548]
0x06A76358: e1031faa  mov x1, xzr
0x06A7635C: e3031faa  mov x3, xzr
0x06A76360: f60300aa  mov x22, x0
0x06A76364: 020340f9  ldr x2, [x24]
0x06A76368: 687ed297  bl #0x5f15d08
0x06A7636C: c86500f0  adrp x8, #0x7731000
0x06A76370: 08b142f9  ldr x8, [x8, #0x560]
0x06A76374: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A76378: e0030391  add x0, sp, #0xc0
0x06A7637C: e10315aa  mov x1, x21
0x06A76380: 030140f9  ldr x3, [x8]
0x06A76384: e8830191  add x8, sp, #0x60
0x06A76388: e20316aa  mov x2, x22
0x06A7638C: e00706ad  stp q0, q1, [sp, #0xc0]
0x06A76390: 55ba4b97  bl #0x3d64ce4
0x06A76394: 740c00b4  cbz x20, #0x6a76520
0x06A76398: c86500f0  adrp x8, #0x7731000
0x06A7639C: 08ad42f9  ldr x8, [x8, #0x558]
0x06A763A0: 81420091  add x1, x20, #0x10
0x06A763A4: e0830191  add x0, sp, #0x60
0x06A763A8: 020140f9  ldr x2, [x8]
0x06A763AC: 8c446497  bl #0x43875dc
0x06A763B0: c00a0036  tbz w0, #0, #0x6a76508
0x06A763B4: c86500b0  adrp x8, #0x772f000
0x06A763B8: 600640ad  ldp q0, q1, [x19]
0x06A763BC: 082947f9  ldr x8, [x8, #0xe50]
0x06A763C0: e00700ad  stp q0, q1, [sp]
0x06A763C4: 000140f9  ldr x0, [x8]
0x06A763C8: 298e4697  bl #0x3c19c6c
0x06A763CC: e80240f9  ldr x8, [x23]
0x06A763D0: f50300aa  mov x21, x0
0x06A763D4: e00308aa  mov x0, x8
0x06A763D8: 322a1c97  bl #0x3180ca0
0x06A763DC: 020340f9  ldr x2, [x24]
0x06A763E0: e1031faa  mov x1, xzr
0x06A763E4: e3031faa  mov x3, xzr
0x06A763E8: f60300aa  mov x22, x0
0x06A763EC: 477ed297  bl #0x5f15d08
0x06A763F0: c86500b0  adrp x8, #0x772f000
0x06A763F4: 085147f9  ldr x8, [x8, #0xea0]
0x06A763F8: e00740ad  ldp q0, q1, [sp]
0x06A763FC: e0030391  add x0, sp, #0xc0
0x06A76400: e10315aa  mov x1, x21
0x06A76404: 030140f9  ldr x3, [x8]
0x06A76408: e8030191  add x8, sp, #0x40
0x06A7640C: e20316aa  mov x2, x22
0x06A76410: e00706ad  stp q0, q1, [sp, #0xc0]
0x06A76414: 94b94b97  bl #0x3d64a64
0x06A76418: c86500f0  adrp x8, #0x7731000
0x06A7641C: 084d40f9  ldr x8, [x8, #0x98]
0x06A76420: 000140f9  ldr x0, [x8]
0x06A76424: 1f2a1c97  bl #0x3180ca0
0x06A76428: c86500f0  adrp x8, #0x7731000
0x06A7642C: 08b542f9  ldr x8, [x8, #0x568]
0x06A76430: e10314aa  mov x1, x20
0x06A76434: e3031faa  mov x3, xzr
0x06A76438: f50300aa  mov x21, x0
0x06A7643C: 020140f9  ldr x2, [x8]
0x06A76440: 765e9f97  bl #0x524de18
0x06A76444: c86500f0  adrp x8, #0x7731000
0x06A76448: 085940f9  ldr x8, [x8, #0xb0]
0x06A7644C: e0030191  add x0, sp, #0x40
0x06A76450: e10315aa  mov x1, x21
0x06A76454: 020140f9  ldr x2, [x8]
0x06A76458: e8830291  add x8, sp, #0xa0
0x06A7645C: c53d6497  bl #0x4385b70
0x06A76460: c86500f0  adrp x8, #0x7731000
0x06A76464: 085540f9  ldr x8, [x8, #0xa8]
0x06A76468: e0830291  add x0, sp, #0xa0
0x06A7646C: e1430291  add x1, sp, #0x90
0x06A76470: 020140f9  ldr x2, [x8]
0x06A76474: 2b3e6497  bl #0x4385d20
0x06A76478: 80040036  tbz w0, #0, #0x6a76508
0x06A7647C: 941a40b9  ldr w20, [x20, #0x18]
0x06A76480: f79b40b9  ldr w23, [sp, #0x98]
0x06A76484: e0230291  add x0, sp, #0x88
0x06A76488: e2031faa  mov x2, xzr
0x06A7648C: e103142a  mov w1, w20
0x06A76490: da950094  bl #0x6a9bbf8
0x06A76494: e04b40f9  ldr x0, [sp, #0x90]
0x06A76498: 400400b4  cbz x0, #0x6a76520
0x06A7649C: c86500d0  adrp x8, #0x7730000
0x06A764A0: e18b40b9  ldr w1, [sp, #0x88]
0x06A764A4: 088543f9  ldr x8, [x8, #0x708]
0x06A764A8: 020140f9  ldr x2, [x8]
0x06A764AC: 5b984697  bl #0x3c1c618
0x06A764B0: c86500f0  adrp x8, #0x7731000
0x06A764B4: 730a40f9  ldr x19, [x19, #0x10]
0x06A764B8: 086d41f9  ldr x8, [x8, #0x2d8]
0x06A764BC: 000140f9  ldr x0, [x8]
0x06A764C0: f8291c97  bl #0x3180ca0
0x06A764C4: e1031faa  mov x1, xzr
0x06A764C8: f50300aa  mov x21, x0
0x06A764CC: 04910094  bl #0x6a9a8dc
0x06A764D0: 950200b4  cbz x21, #0x6a76520
0x06A764D4: e14b40f9  ldr x1, [sp, #0x90]
0x06A764D8: f60315aa  mov x22, x21
0x06A764DC: c10e01f8  str x1, [x22, #0x10]!
0x06A764E0: e00316aa  mov x0, x22
0x06A764E4: 38291c97  bl #0x31809c4
0x06A764E8: d7520129  stp w23, w20, [x22, #8]
0x06A764EC: b30100b4  cbz x19, #0x6a76520
0x06A764F0: c86500f0  adrp x8, #0x7731000
0x06A764F4: 087141f9  ldr x8, [x8, #0x2e0]
0x06A764F8: e00313aa  mov x0, x19
0x06A764FC: e10315aa  mov x1, x21
0x06A76500: 020140f9  ldr x2, [x8]
0x06A76504: b8334d97  bl #0x3dc33e4
0x06A76508: f44f51a9  ldp x20, x19, [sp, #0x110]
0x06A7650C: f65750a9  ldp x22, x21, [sp, #0x100]
0x06A76510: f85f4fa9  ldp x24, x23, [sp, #0xf0]
0x06A76514: fd7b4ea9  ldp x29, x30, [sp, #0xe0]
0x06A76518: ff830491  add sp, sp, #0x120
0x06A7651C: c0035fd6  ret
0x06A76520: e3291c97  bl #0x3180cac

; RVA 0x6A7652C | private static bool IsSwappable(ValueTuple<Entity, BoardTilePositionComponent> entity, ValueTuple<Entity, ItemMovedComponent> movedEntity) { }
; bytes=28 sha256=b0076936db943f9786ade91e6f8dfd10de1e5077780cea132e9839d32ce231ec status=arm64_complete_bound indexed_start=True
0x06A7652C: 68fc60d3  lsr x8, x3, #0x20
0x06A76530: 1f0002eb  cmp x0, x2
0x06A76534: e9079f1a  cset w9, ne
0x06A76538: 3f00086b  cmp w1, w8
0x06A7653C: e8179f1a  cset w8, eq
0x06A76540: 2001080a  and w0, w9, w8
0x06A76544: c0035fd6  ret

; RVA 0x6A76548 | public void .ctor() { }
; bytes=8 sha256=76e841b284e8f1ce9ad808a455744547140a013a74994baa9555a8c812be558d status=arm64_complete_bound indexed_start=True
0x06A76548: e1031faa  mov x1, xzr
0x06A7654C: 2c90b117  b #0x56da5fc


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25773 Merger.MergeBoard.Systems.SpawnerSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A743A4 | public void Tick(TickContext context) { }
; bytes=868 sha256=b4a0903ba9af79a16fe3ffb040cb03ee865edc7d1a223449edc23849dc801c27 status=arm64_complete_bound indexed_start=True
0x06A743A4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A743A8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A743AC: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A743B0: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A743B4: f65704a9  stp x22, x21, [sp, #0x40]
0x06A743B8: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A743BC: ff430ad1  sub sp, sp, #0x290
0x06A743C0: 5ad03bd5  mrs x26, tpidr_el0
0x06A743C4: 481740f9  ldr x8, [x26, #0x28]
0x06A743C8: b59500d0  adrp x21, #0x7d2a000
0x06A743CC: f30301aa  mov x19, x1
0x06A743D0: f40300aa  mov x20, x0
0x06A743D4: e84701f9  str x8, [sp, #0x288]
0x06A743D8: a8e25b39  ldrb w8, [x21, #0x6f8]
0x06A743DC: 88040037  tbnz w8, #0, #0x6a7446c
0x06A743E0: e0650090  adrp x0, #0x7730000
0x06A743E4: 005845f9  ldr x0, [x0, #0xab0]
0x06A743E8: 8c311c97  bl #0x3180a18
0x06A743EC: e06500b0  adrp x0, #0x7731000
0x06A743F0: 003042f9  ldr x0, [x0, #0x460]
0x06A743F4: 89311c97  bl #0x3180a18
0x06A743F8: e06500b0  adrp x0, #0x7731000
0x06A743FC: 003442f9  ldr x0, [x0, #0x468]
0x06A74400: 86311c97  bl #0x3180a18
0x06A74404: c06500f0  adrp x0, #0x772f000
0x06A74408: 003447f9  ldr x0, [x0, #0xe68]
0x06A7440C: 83311c97  bl #0x3180a18
0x06A74410: e06500b0  adrp x0, #0x7731000
0x06A74414: 003842f9  ldr x0, [x0, #0x470]
0x06A74418: 80311c97  bl #0x3180a18
0x06A7441C: e06500b0  adrp x0, #0x7731000
0x06A74420: 003c42f9  ldr x0, [x0, #0x478]
0x06A74424: 7d311c97  bl #0x3180a18
0x06A74428: e06500b0  adrp x0, #0x7731000
0x06A7442C: 004042f9  ldr x0, [x0, #0x480]
0x06A74430: 7a311c97  bl #0x3180a18
0x06A74434: e06500b0  adrp x0, #0x7731000
0x06A74438: 004442f9  ldr x0, [x0, #0x488]
0x06A7443C: 77311c97  bl #0x3180a18
0x06A74440: e0650090  adrp x0, #0x7730000
0x06A74444: 00c045f9  ldr x0, [x0, #0xb80]
0x06A74448: 74311c97  bl #0x3180a18
0x06A7444C: e06500b0  adrp x0, #0x7731000
0x06A74450: 004842f9  ldr x0, [x0, #0x490]
0x06A74454: 71311c97  bl #0x3180a18
0x06A74458: e06500b0  adrp x0, #0x7731000
0x06A7445C: 004c42f9  ldr x0, [x0, #0x498]
0x06A74460: 6e311c97  bl #0x3180a18
0x06A74464: 28008052  movz w8, #0x1
0x06A74468: a8e21b39  strb w8, [x21, #0x6f8]
0x06A7446C: 00e4006f  movi v0.2d, #0000000000000000
0x06A74470: e00310ad  stp q0, q0, [sp, #0x200]
0x06A74474: 610240ad  ldp q1, q0, [x19]
0x06A74478: e1030791  add x1, sp, #0x1c0
0x06A7447C: e00314aa  mov x0, x20
0x06A74480: e1030ead  stp q1, q0, [sp, #0x1c0]
0x06A74484: a1000094  bl #0x6a74708
0x06A74488: 600640f9  ldr x0, [x19, #8]
0x06A7448C: a01300b4  cbz x0, #0x6a74700
0x06A74490: e8650090  adrp x8, #0x7730000
0x06A74494: 08c145f9  ldr x8, [x8, #0xb80]
0x06A74498: 010140f9  ldr x1, [x8]
0x06A7449C: 94404d97  bl #0x3dc46ec
0x06A744A0: 60110036  tbz w0, #0, #0x6a746cc
0x06A744A4: e86500b0  adrp x8, #0x7731000
0x06A744A8: 600640ad  ldp q0, q1, [x19]
0x06A744AC: 083142f9  ldr x8, [x8, #0x460]
0x06A744B0: e0070dad  stp q0, q1, [sp, #0x1a0]
0x06A744B4: 000140f9  ldr x0, [x8]
0x06A744B8: f6994697  bl #0x3c1ac90
0x06A744BC: c86500f0  adrp x8, #0x772f000
0x06A744C0: 083547f9  ldr x8, [x8, #0xe68]
0x06A744C4: f50300aa  mov x21, x0
0x06A744C8: 080140f9  ldr x8, [x8]
0x06A744CC: e00308aa  mov x0, x8
0x06A744D0: f4311c97  bl #0x3180ca0
0x06A744D4: e8650090  adrp x8, #0x7730000
0x06A744D8: 085945f9  ldr x8, [x8, #0xab0]
0x06A744DC: e1031faa  mov x1, xzr
0x06A744E0: e3031faa  mov x3, xzr
0x06A744E4: f60300aa  mov x22, x0
0x06A744E8: 020140f9  ldr x2, [x8]
0x06A744EC: 0786d297  bl #0x5f15d08
0x06A744F0: e86500b0  adrp x8, #0x7731000
0x06A744F4: 084542f9  ldr x8, [x8, #0x488]
0x06A744F8: e0074dad  ldp q0, q1, [sp, #0x1a0]
0x06A744FC: e0c30491  add x0, sp, #0x130
0x06A74500: e10315aa  mov x1, x21
0x06A74504: 030140f9  ldr x3, [x8]
0x06A74508: e8030891  add x8, sp, #0x200
0x06A7450C: e20316aa  mov x2, x22
0x06A74510: e08709ad  stp q0, q1, [sp, #0x130]
0x06A74514: 5cc84b97  bl #0x3d66684
0x06A74518: f76500b0  adrp x23, #0x7731000
0x06A7451C: f74e42f9  ldr x23, [x23, #0x498]
0x06A74520: e00240f9  ldr x0, [x23]
0x06A74524: 08e040b9  ldr w8, [x0, #0xe0]
0x06A74528: 68000035  cbnz w8, #0x6a74534
0x06A7452C: 98311c97  bl #0x3180b8c
0x06A74530: e00240f9  ldr x0, [x23]
0x06A74534: 085c40f9  ldr x8, [x0, #0xb8]
0x06A74538: 150540f9  ldr x21, [x8, #8]
0x06A7453C: f50200b5  cbnz x21, #0x6a74598
0x06A74540: 08e040b9  ldr w8, [x0, #0xe0]
0x06A74544: 68000035  cbnz w8, #0x6a74550
0x06A74548: 91311c97  bl #0x3180b8c
0x06A7454C: e00240f9  ldr x0, [x23]
0x06A74550: e96500b0  adrp x9, #0x7731000
0x06A74554: 085c40f9  ldr x8, [x0, #0xb8]
0x06A74558: 293942f9  ldr x9, [x9, #0x470]
0x06A7455C: 160140f9  ldr x22, [x8]
0x06A74560: 200140f9  ldr x0, [x9]
0x06A74564: cf311c97  bl #0x3180ca0
0x06A74568: e86500b0  adrp x8, #0x7731000
0x06A7456C: 084942f9  ldr x8, [x8, #0x490]
0x06A74570: e10316aa  mov x1, x22
0x06A74574: e3031faa  mov x3, xzr
0x06A74578: f50300aa  mov x21, x0
0x06A7457C: 020140f9  ldr x2, [x8]
0x06A74580: 0c779f97  bl #0x52521b0
0x06A74584: e80240f9  ldr x8, [x23]
0x06A74588: e10315aa  mov x1, x21
0x06A7458C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A74590: 158c00f8  str x21, [x0, #8]!
0x06A74594: 0c311c97  bl #0x31809c4
0x06A74598: e86500b0  adrp x8, #0x7731000
0x06A7459C: 084142f9  ldr x8, [x8, #0x480]
0x06A745A0: e0030891  add x0, sp, #0x200
0x06A745A4: e10315aa  mov x1, x21
0x06A745A8: 020140f9  ldr x2, [x8]
0x06A745AC: e8c30491  add x8, sp, #0x130
0x06A745B0: 788d6497  bl #0x4397b90
0x06A745B4: e86500b0  adrp x8, #0x7731000
0x06A745B8: e08749ad  ldp q0, q1, [sp, #0x130]
0x06A745BC: 083d42f9  ldr x8, [x8, #0x478]
0x06A745C0: e0030891  add x0, sp, #0x200
0x06A745C4: e00710ad  stp q0, q1, [sp, #0x200]
0x06A745C8: 010140f9  ldr x1, [x8]
0x06A745CC: 878d6497  bl #0x4397be8
0x06A745D0: e86500b0  adrp x8, #0x7731000
0x06A745D4: 083542f9  ldr x8, [x8, #0x468]
0x06A745D8: 010140f9  ldr x1, [x8]
0x06A745DC: f39b4797  bl #0x3c5b5a8
0x06A745E0: 000900b4  cbz x0, #0x6a74700
0x06A745E4: 080c40f9  ldr x8, [x0, #0x18]
0x06A745E8: f50300aa  mov x21, x0
0x06A745EC: 1f050071  cmp w8, #1
0x06A745F0: eb060054  b.lt #0x6a746cc
0x06A745F4: e9230391  add x9, sp, #0xc8
0x06A745F8: eab30891  add x10, sp, #0x22c
0x06A745FC: fb031faa  mov x27, xzr
0x06A74600: 087d4092  and x8, x8, #0xffffffff
0x06A74604: 36610091  add x22, x9, #0x18
0x06A74608: 5cd10091  add x28, x10, #0x34
0x06A7460C: b7520291  add x23, x21, #0x94
0x06A74610: 7f4328eb  cmp x27, w8, uxtw
0x06A74614: 42070054  b.hs #0x6a746fc
0x06A74618: f8c258f8  ldur x24, [x23, #-0x74]
0x06A7461C: f9c25fb8  ldur w25, [x23, #-4]
0x06A74620: e1b201d1  sub x1, x23, #0x6c
0x06A74624: e0c30491  add x0, sp, #0x130
0x06A74628: 020d8052  movz w2, #0x68
0x06A7462C: d1681d94  bl #0x71ce970
0x06A74630: e042d93c  ldur q0, [x23, #-0x6c]
0x06A74634: e8425af8  ldur x8, [x23, #-0x5c]
0x06A74638: e0230391  add x0, sp, #0xc8
0x06A7463C: e1c30491  add x1, sp, #0x130
0x06A74640: 020d8052  movz w2, #0x68
0x06A74644: e07b803d  str q0, [sp, #0x1e0]
0x06A74648: e8fb00f9  str x8, [sp, #0x1f0]
0x06A7464C: c9681d94  bl #0x71ce970
0x06A74650: e0b30891  add x0, sp, #0x22c
0x06A74654: 820b8052  movz w2, #0x5c
0x06A74658: e10317aa  mov x1, x23
0x06A7465C: c5681d94  bl #0x71ce970
0x06A74660: 600640ad  ldp q0, q1, [x19]
0x06A74664: e27bc03d  ldr q2, [sp, #0x1e0]
0x06A74668: e8fb40f9  ldr x8, [sp, #0x1f0]
0x06A7466C: e0c30091  add x0, sp, #0x30
0x06A74670: 020a8052  movz w2, #0x50
0x06A74674: e10316aa  mov x1, x22
0x06A74678: e00705ad  stp q0, q1, [sp, #0xa0]
0x06A7467C: e223803d  str q2, [sp, #0x80]
0x06A74680: e84b00f9  str x8, [sp, #0x90]
0x06A74684: bb681d94  bl #0x71ce970
0x06A74688: 800740ad  ldp q0, q1, [x28]
0x06A7468C: 881340f9  ldr x8, [x28, #0x20]
0x06A74690: e1830291  add x1, sp, #0xa0
0x06A74694: e3030291  add x3, sp, #0x80
0x06A74698: e4c30091  add x4, sp, #0x30
0x06A7469C: e6030091  mov x6, sp
0x06A746A0: e00314aa  mov x0, x20
0x06A746A4: e20318aa  mov x2, x24
0x06A746A8: e50319aa  mov x5, x25
0x06A746AC: e00700ad  stp q0, q1, [sp]
0x06A746B0: e81300f9  str x8, [sp, #0x20]
0x06A746B4: fc000094  bl #0x6a74aa4
0x06A746B8: a81a40b9  ldr w8, [x21, #0x18]
0x06A746BC: 7b070091  add x27, x27, #1
0x06A746C0: f7420391  add x23, x23, #0xd0
0x06A746C4: 7fc328eb  cmp x27, w8, sxtw
0x06A746C8: 4bfaff54  b.lt #0x6a74610
0x06A746CC: 481740f9  ldr x8, [x26, #0x28]
0x06A746D0: e94741f9  ldr x9, [sp, #0x288]
0x06A746D4: 1f0109eb  cmp x8, x9
0x06A746D8: 61010054  b.ne #0x6a74704
0x06A746DC: ff430a91  add sp, sp, #0x290
0x06A746E0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A746E4: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A746E8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A746EC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A746F0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A746F4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A746F8: c0035fd6  ret
0x06A746FC: 6e311c97  bl #0x3180cb4
0x06A74700: 6b311c97  bl #0x3180cac
0x06A74704: a3681d94  bl #0x71ce990

; RVA 0x6A74708 | private void HandleSpawnByTap(TickContext context) { }
; bytes=924 sha256=2402190a8cb840f156932ec954b9474257488ff1b6b18a13beecfe12f202852f status=arm64_complete_bound indexed_start=True
0x06A74708: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x06A7470C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A74710: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A74714: f65703a9  stp x22, x21, [sp, #0x30]
0x06A74718: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A7471C: ff4313d1  sub sp, sp, #0x4d0
0x06A74720: ba9500d0  adrp x26, #0x7d2a000
0x06A74724: f96500b0  adrp x25, #0x7731000
0x06A74728: d56500f0  adrp x21, #0x772f000
0x06A7472C: d66500f0  adrp x22, #0x772f000
0x06A74730: f86500b0  adrp x24, #0x7731000
0x06A74734: f76500b0  adrp x23, #0x7731000
0x06A74738: 48e75b39  ldrb w8, [x26, #0x6f9]
0x06A7473C: 395342f9  ldr x25, [x25, #0x4a0]
0x06A74740: b53647f9  ldr x21, [x21, #0xe68]
0x06A74744: d62647f9  ldr x22, [x22, #0xe48]
0x06A74748: 185742f9  ldr x24, [x24, #0x4a8]
0x06A7474C: f74e42f9  ldr x23, [x23, #0x498]
0x06A74750: f40301aa  mov x20, x1
0x06A74754: f30300aa  mov x19, x0
0x06A74758: e8040037  tbnz w8, #0, #0x6a747f4
0x06A7475C: e0650090  adrp x0, #0x7730000
0x06A74760: 006046f9  ldr x0, [x0, #0xcc0]
0x06A74764: ad301c97  bl #0x3180a18
0x06A74768: c06500f0  adrp x0, #0x772f000
0x06A7476C: 002447f9  ldr x0, [x0, #0xe48]
0x06A74770: aa301c97  bl #0x3180a18
0x06A74774: e06500b0  adrp x0, #0x7731000
0x06A74778: 005042f9  ldr x0, [x0, #0x4a0]
0x06A7477C: a7301c97  bl #0x3180a18
0x06A74780: e0650090  adrp x0, #0x7730000
0x06A74784: 007445f9  ldr x0, [x0, #0xae8]
0x06A74788: a4301c97  bl #0x3180a18
0x06A7478C: c06500f0  adrp x0, #0x772f000
0x06A74790: 003447f9  ldr x0, [x0, #0xe68]
0x06A74794: a1301c97  bl #0x3180a18
0x06A74798: e06500b0  adrp x0, #0x7731000
0x06A7479C: 005842f9  ldr x0, [x0, #0x4b0]
0x06A747A0: 9e301c97  bl #0x3180a18
0x06A747A4: e06500b0  adrp x0, #0x7731000
0x06A747A8: 005c42f9  ldr x0, [x0, #0x4b8]
0x06A747AC: 9b301c97  bl #0x3180a18
0x06A747B0: e06500b0  adrp x0, #0x7731000
0x06A747B4: 006042f9  ldr x0, [x0, #0x4c0]
0x06A747B8: 98301c97  bl #0x3180a18
0x06A747BC: e06500b0  adrp x0, #0x7731000
0x06A747C0: 005442f9  ldr x0, [x0, #0x4a8]
0x06A747C4: 95301c97  bl #0x3180a18
0x06A747C8: e0650090  adrp x0, #0x7730000
0x06A747CC: 006446f9  ldr x0, [x0, #0xcc8]
0x06A747D0: 92301c97  bl #0x3180a18
0x06A747D4: e06500b0  adrp x0, #0x7731000
0x06A747D8: 006442f9  ldr x0, [x0, #0x4c8]
0x06A747DC: 8f301c97  bl #0x3180a18
0x06A747E0: e06500b0  adrp x0, #0x7731000
0x06A747E4: 004c42f9  ldr x0, [x0, #0x498]
0x06A747E8: 8c301c97  bl #0x3180a18
0x06A747EC: 28008052  movz w8, #0x1
0x06A747F0: 48e71b39  strb w8, [x26, #0x6f9]
0x06A747F4: 00e4006f  movi v0.2d, #0000000000000000
0x06A747F8: e0430f91  add x0, sp, #0x3d0
0x06A747FC: 021c8052  movz w2, #0xe0
0x06A74800: e1031f2a  mov w1, wzr
0x06A74804: e033813d  str q0, [sp, #0x4c0]
0x06A74808: e02f813d  str q0, [sp, #0x4b0]
0x06A7480C: 65681d94  bl #0x71ce9a0
0x06A74810: 00e4006f  movi v0.2d, #0000000000000000
0x06A74814: ffcf03b9  str wzr, [sp, #0x3cc]
0x06A74818: e0031dad  stp q0, q0, [sp, #0x3a0]
0x06A7481C: 810240ad  ldp q1, q0, [x20]
0x06A74820: 200340f9  ldr x0, [x25]
0x06A74824: e1031cad  stp q1, q0, [sp, #0x380]
0x06A74828: 5a994697  bl #0x3c1ad90
0x06A7482C: a80240f9  ldr x8, [x21]
0x06A74830: f50300aa  mov x21, x0
0x06A74834: e00308aa  mov x0, x8
0x06A74838: 1a311c97  bl #0x3180ca0
0x06A7483C: c20240f9  ldr x2, [x22]
0x06A74840: e1031faa  mov x1, xzr
0x06A74844: e3031faa  mov x3, xzr
0x06A74848: f60300aa  mov x22, x0
0x06A7484C: 2f85d297  bl #0x5f15d08
0x06A74850: e0075cad  ldp q0, q1, [sp, #0x380]
0x06A74854: 030340f9  ldr x3, [x24]
0x06A74858: e8830e91  add x8, sp, #0x3a0
0x06A7485C: e0030a91  add x0, sp, #0x280
0x06A74860: e10315aa  mov x1, x21
0x06A74864: e20316aa  mov x2, x22
0x06A74868: e00714ad  stp q0, q1, [sp, #0x280]
0x06A7486C: d6c74b97  bl #0x3d667c4
0x06A74870: e00240f9  ldr x0, [x23]
0x06A74874: 08e040b9  ldr w8, [x0, #0xe0]
0x06A74878: 68000035  cbnz w8, #0x6a74884
0x06A7487C: c4301c97  bl #0x3180b8c
0x06A74880: e00240f9  ldr x0, [x23]
0x06A74884: 085c40f9  ldr x8, [x0, #0xb8]
0x06A74888: f96500b0  adrp x25, #0x7731000
0x06A7488C: f86500b0  adrp x24, #0x7731000
0x06A74890: 150940f9  ldr x21, [x8, #0x10]
0x06A74894: 396342f9  ldr x25, [x25, #0x4c0]
0x06A74898: 185f42f9  ldr x24, [x24, #0x4b8]
0x06A7489C: f50200b5  cbnz x21, #0x6a748f8
0x06A748A0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A748A4: 68000035  cbnz w8, #0x6a748b0
0x06A748A8: b9301c97  bl #0x3180b8c
0x06A748AC: e00240f9  ldr x0, [x23]
0x06A748B0: e96500b0  adrp x9, #0x7731000
0x06A748B4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A748B8: 295942f9  ldr x9, [x9, #0x4b0]
0x06A748BC: 160140f9  ldr x22, [x8]
0x06A748C0: 200140f9  ldr x0, [x9]
0x06A748C4: f7301c97  bl #0x3180ca0
0x06A748C8: e86500b0  adrp x8, #0x7731000
0x06A748CC: 086542f9  ldr x8, [x8, #0x4c8]
0x06A748D0: e10316aa  mov x1, x22
0x06A748D4: e3031faa  mov x3, xzr
0x06A748D8: f50300aa  mov x21, x0
0x06A748DC: 020140f9  ldr x2, [x8]
0x06A748E0: aa769f97  bl #0x5252388
0x06A748E4: e80240f9  ldr x8, [x23]
0x06A748E8: e10315aa  mov x1, x21
0x06A748EC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A748F0: 150c01f8  str x21, [x0, #0x10]!
0x06A748F4: 34301c97  bl #0x31809c4
0x06A748F8: 220340f9  ldr x2, [x25]
0x06A748FC: e8c31291  add x8, sp, #0x4b0
0x06A74900: e0830e91  add x0, sp, #0x3a0
0x06A74904: e10315aa  mov x1, x21
0x06A74908: e08f6497  bl #0x4398888
0x06A7490C: 020340f9  ldr x2, [x24]
0x06A74910: e0c31291  add x0, sp, #0x4b0
0x06A74914: e1430f91  add x1, sp, #0x3d0
0x06A74918: 48906497  bl #0x4398a38
0x06A7491C: 400b0036  tbz w0, #0, #0x6a74a84
0x06A74920: 800640ad  ldp q0, q1, [x20]
0x06A74924: 600e40f9  ldr x0, [x19, #0x18]
0x06A74928: e2db43b9  ldr w2, [sp, #0x3d8]
0x06A7492C: e1830d91  add x1, sp, #0x360
0x06A74930: e3330f91  add x3, sp, #0x3cc
0x06A74934: e4031faa  mov x4, xzr
0x06A74938: e0071bad  stp q0, q1, [sp, #0x360]
0x06A7493C: a8920094  bl #0x6a993dc
0x06A74940: 00080036  tbz w0, #0, #0x6a74a40
0x06A74944: f5eb41f9  ldr x21, [sp, #0x3d0]
0x06A74948: e0030a91  add x0, sp, #0x280
0x06A7494C: e1430f91  add x1, sp, #0x3d0
0x06A74950: 021c8052  movz w2, #0xe0
0x06A74954: f6030391  add x22, sp, #0xc0
0x06A74958: f7430f91  add x23, sp, #0x3d0
0x06A7495C: 05681d94  bl #0x71ce970
0x06A74960: e0a7c03d  ldr q0, [sp, #0x290]
0x06A74964: e85341f9  ldr x8, [sp, #0x2a0]
0x06A74968: e0830691  add x0, sp, #0x1a0
0x06A7496C: e1430f91  add x1, sp, #0x3d0
0x06A74970: 021c8052  movz w2, #0xe0
0x06A74974: e02b803d  str q0, [sp, #0xa0]
0x06A74978: e85b00f9  str x8, [sp, #0xb0]
0x06A7497C: f8830691  add x24, sp, #0x1a0
0x06A74980: fc671d94  bl #0x71ce970
0x06A74984: 01630191  add x1, x24, #0x58
0x06A74988: e0430191  add x0, sp, #0x50
0x06A7498C: 020a8052  movz w2, #0x50
0x06A74990: f8671d94  bl #0x71ce970
0x06A74994: e0030391  add x0, sp, #0xc0
0x06A74998: e1430f91  add x1, sp, #0x3d0
0x06A7499C: 021c8052  movz w2, #0xe0
0x06A749A0: f4671d94  bl #0x71ce970
0x06A749A4: c082ca3c  ldur q0, [x22, #0xa8]
0x06A749A8: c182cb3c  ldur q1, [x22, #0xb8]
0x06A749AC: e8c740f9  ldr x8, [sp, #0x188]
0x06A749B0: e1830291  add x1, sp, #0xa0
0x06A749B4: e2430191  add x2, sp, #0x50
0x06A749B8: e3830091  add x3, sp, #0x20
0x06A749BC: e00315aa  mov x0, x21
0x06A749C0: e4031faa  mov x4, xzr
0x06A749C4: e00701ad  stp q0, q1, [sp, #0x20]
0x06A749C8: e82300f9  str x8, [sp, #0x40]
0x06A749CC: b367ff97  bl #0x6a4e898
0x06A749D0: a00500b4  cbz x0, #0x6a74a84
0x06A749D4: f6eb41f9  ldr x22, [sp, #0x3d0]
0x06A749D8: f50300aa  mov x21, x0
0x06A749DC: e0420391  add x0, x23, #0xd0
0x06A749E0: e1031faa  mov x1, xzr
0x06A749E4: 309e0094  bl #0x6a9c2a4
0x06A749E8: d60500b4  cbz x22, #0x6a74aa0
0x06A749EC: e8650090  adrp x8, #0x7730000
0x06A749F0: 087545f9  ldr x8, [x8, #0xae8]
0x06A749F4: e20300aa  mov x2, x0
0x06A749F8: e40301aa  mov x4, x1
0x06A749FC: e00316aa  mov x0, x22
0x06A74A00: 030140f9  ldr x3, [x8]
0x06A74A04: e10302aa  mov x1, x2
0x06A74A08: e20304aa  mov x2, x4
0x06A74A0C: 78a34697  bl #0x3c1d7ec
0x06A74A10: 800640ad  ldp q0, q1, [x20]
0x06A74A14: e2eb41f9  ldr x2, [sp, #0x3d0]
0x06A74A18: e3db43b9  ldr w3, [sp, #0x3d8]
0x06A74A1C: e5cf43b9  ldr w5, [sp, #0x3cc]
0x06A74A20: e8430f91  add x8, sp, #0x3d0
0x06A74A24: 04610191  add x4, x8, #0x58
0x06A74A28: e1030091  mov x1, sp
0x06A74A2C: e00313aa  mov x0, x19
0x06A74A30: e60315aa  mov x6, x21
0x06A74A34: e00700ad  stp q0, q1, [sp]
0x06A74A38: 7e010094  bl #0x6a75030
0x06A74A3C: 12000014  b #0x6a74a84
0x06A74A40: e8650090  adrp x8, #0x7730000
0x06A74A44: 930a40f9  ldr x19, [x20, #0x10]
0x06A74A48: f5eb41f9  ldr x21, [sp, #0x3d0]
0x06A74A4C: 086146f9  ldr x8, [x8, #0xcc0]
0x06A74A50: 000140f9  ldr x0, [x8]
0x06A74A54: 93301c97  bl #0x3180ca0
0x06A74A58: e10315aa  mov x1, x21
0x06A74A5C: e2031faa  mov x2, xzr
0x06A74A60: f40300aa  mov x20, x0
0x06A74A64: c9950094  bl #0x6a9a188
0x06A74A68: d30100b4  cbz x19, #0x6a74aa0
0x06A74A6C: e8650090  adrp x8, #0x7730000
0x06A74A70: 086546f9  ldr x8, [x8, #0xcc8]
0x06A74A74: e00313aa  mov x0, x19
0x06A74A78: e10314aa  mov x1, x20
0x06A74A7C: 020140f9  ldr x2, [x8]
0x06A74A80: 593a4d97  bl #0x3dc33e4
0x06A74A84: ff431391  add sp, sp, #0x4d0
0x06A74A88: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A74A8C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A74A90: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A74A94: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A74A98: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x06A74A9C: c0035fd6  ret
0x06A74AA0: 83301c97  bl #0x3180cac

; RVA 0x6A74AA4 | private void HandleSpawnByTick(TickContext context, Entity spawnerEntity, SpawnerComponent spawnerComponent, TimeCycleComponent timeCycleComponent, BoardTilePositionComponent spawnerPositionComponent, InteractionComponent interactionComponent) { }
; bytes=1420 sha256=109e5808a98365433e8a8d3d3f1eeb9a59a55f5cdc2540f27d37726b3ea0a5db status=arm64_complete_bound indexed_start=True
0x06A74AA4: ff8307d1  sub sp, sp, #0x1e0
0x06A74AA8: fd7b18a9  stp x29, x30, [sp, #0x180]
0x06A74AAC: fc6f19a9  stp x28, x27, [sp, #0x190]
0x06A74AB0: fa671aa9  stp x26, x25, [sp, #0x1a0]
0x06A74AB4: f85f1ba9  stp x24, x23, [sp, #0x1b0]
0x06A74AB8: f6571ca9  stp x22, x21, [sp, #0x1c0]
0x06A74ABC: f44f1da9  stp x20, x19, [sp, #0x1d0]
0x06A74AC0: e60b00f9  str x6, [sp, #0x10]
0x06A74AC4: e01700f9  str x0, [sp, #0x28]
0x06A74AC8: b59500d0  adrp x21, #0x7d2a000
0x06A74ACC: f46500b0  adrp x20, #0x7731000
0x06A74AD0: a8ea5b39  ldrb w8, [x21, #0x6fa]
0x06A74AD4: 946a42f9  ldr x20, [x20, #0x4d0]
0x06A74AD8: f80305aa  mov x24, x5
0x06A74ADC: f30304aa  mov x19, x4
0x06A74AE0: f90303aa  mov x25, x3
0x06A74AE4: f60302aa  mov x22, x2
0x06A74AE8: f70301aa  mov x23, x1
0x06A74AEC: 28070037  tbnz w8, #0, #0x6a74bd0
0x06A74AF0: 006300b0  adrp x0, #0x76d5000
0x06A74AF4: 00e443f9  ldr x0, [x0, #0x7c8]
0x06A74AF8: c82f1c97  bl #0x3180a18
0x06A74AFC: c06500f0  adrp x0, #0x772f000
0x06A74B00: 002447f9  ldr x0, [x0, #0xe48]
0x06A74B04: c52f1c97  bl #0x3180a18
0x06A74B08: e06500b0  adrp x0, #0x7731000
0x06A74B0C: 006c42f9  ldr x0, [x0, #0x4d8]
0x06A74B10: c22f1c97  bl #0x3180a18
0x06A74B14: e06500b0  adrp x0, #0x7731000
0x06A74B18: 007042f9  ldr x0, [x0, #0x4e0]
0x06A74B1C: bf2f1c97  bl #0x3180a18
0x06A74B20: 606200b0  adrp x0, #0x76c1000
0x06A74B24: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A74B28: bc2f1c97  bl #0x3180a18
0x06A74B2C: 806300b0  adrp x0, #0x76e5000
0x06A74B30: 00c842f9  ldr x0, [x0, #0x590]
0x06A74B34: b92f1c97  bl #0x3180a18
0x06A74B38: c06500f0  adrp x0, #0x772f000
0x06A74B3C: 003447f9  ldr x0, [x0, #0xe68]
0x06A74B40: b62f1c97  bl #0x3180a18
0x06A74B44: 606100f0  adrp x0, #0x76a3000
0x06A74B48: 00c844f9  ldr x0, [x0, #0x990]
0x06A74B4C: b32f1c97  bl #0x3180a18
0x06A74B50: e06500b0  adrp x0, #0x7731000
0x06A74B54: 007442f9  ldr x0, [x0, #0x4e8]
0x06A74B58: b02f1c97  bl #0x3180a18
0x06A74B5C: 606200b0  adrp x0, #0x76c1000
0x06A74B60: 002047f9  ldr x0, [x0, #0xe40]
0x06A74B64: ad2f1c97  bl #0x3180a18
0x06A74B68: 205f00b0  adrp x0, #0x7659000
0x06A74B6C: 005c45f9  ldr x0, [x0, #0xab8]
0x06A74B70: aa2f1c97  bl #0x3180a18
0x06A74B74: 205f00b0  adrp x0, #0x7659000
0x06A74B78: 006045f9  ldr x0, [x0, #0xac0]
0x06A74B7C: a72f1c97  bl #0x3180a18
0x06A74B80: e06500b0  adrp x0, #0x7731000
0x06A74B84: 007842f9  ldr x0, [x0, #0x4f0]
0x06A74B88: a42f1c97  bl #0x3180a18
0x06A74B8C: e06500b0  adrp x0, #0x7731000
0x06A74B90: 007c42f9  ldr x0, [x0, #0x4f8]
0x06A74B94: a12f1c97  bl #0x3180a18
0x06A74B98: e06500b0  adrp x0, #0x7731000
0x06A74B9C: 008042f9  ldr x0, [x0, #0x500]
0x06A74BA0: 9e2f1c97  bl #0x3180a18
0x06A74BA4: e06500b0  adrp x0, #0x7731000
0x06A74BA8: 008442f9  ldr x0, [x0, #0x508]
0x06A74BAC: 9b2f1c97  bl #0x3180a18
0x06A74BB0: e06500b0  adrp x0, #0x7731000
0x06A74BB4: 006842f9  ldr x0, [x0, #0x4d0]
0x06A74BB8: 982f1c97  bl #0x3180a18
0x06A74BBC: e06500b0  adrp x0, #0x7731000
0x06A74BC0: 004c42f9  ldr x0, [x0, #0x498]
0x06A74BC4: 952f1c97  bl #0x3180a18
0x06A74BC8: 28008052  movz w8, #0x1
0x06A74BCC: a8ea1b39  strb w8, [x21, #0x6fa]
0x06A74BD0: 800240f9  ldr x0, [x20]
0x06A74BD4: 00e4006f  movi v0.2d, #0000000000000000
0x06A74BD8: ff5f01b9  str wzr, [sp, #0x15c]
0x06A74BDC: e08309ad  stp q0, q0, [sp, #0x130]
0x06A74BE0: 30301c97  bl #0x3180ca0
0x06A74BE4: e1031faa  mov x1, xzr
0x06A74BE8: fa0300aa  mov x26, x0
0x06A74BEC: 8496b197  bl #0x56da5fc
0x06A74BF0: 683640b9  ldr w8, [x19, #0x34]
0x06A74BF4: 1f050071  cmp w8, #1
0x06A74BF8: ab200054  b.lt #0x6a7500c
0x06A74BFC: f3db01a9  stp x19, x22, [sp, #0x18]
0x06A74C00: e86500b0  adrp x8, #0x7731000
0x06A74C04: 086d42f9  ldr x8, [x8, #0x4d8]
0x06A74C08: f30318aa  mov x19, x24
0x06A74C0C: d46500f0  adrp x20, #0x772f000
0x06A74C10: d86500f0  adrp x24, #0x772f000
0x06A74C14: fd6500b0  adrp x29, #0x7731000
0x06A74C18: f66500b0  adrp x22, #0x7731000
0x06A74C1C: 943647f9  ldr x20, [x20, #0xe68]
0x06A74C20: 182747f9  ldr x24, [x24, #0xe48]
0x06A74C24: bd7f42f9  ldr x29, [x29, #0x4f8]
0x06A74C28: e00640ad  ldp q0, q1, [x23]
0x06A74C2C: d67a42f9  ldr x22, [x22, #0x4f0]
0x06A74C30: 000140f9  ldr x0, [x8]
0x06A74C34: f56500b0  adrp x21, #0x7731000
0x06A74C38: b54e42f9  ldr x21, [x21, #0x498]
0x06A74C3C: e08707ad  stp q0, q1, [sp, #0xf0]
0x06A74C40: c9944697  bl #0x3c19f64
0x06A74C44: 880240f9  ldr x8, [x20]
0x06A74C48: fb0300aa  mov x27, x0
0x06A74C4C: e00308aa  mov x0, x8
0x06A74C50: 14301c97  bl #0x3180ca0
0x06A74C54: 020340f9  ldr x2, [x24]
0x06A74C58: e1031faa  mov x1, xzr
0x06A74C5C: e3031faa  mov x3, xzr
0x06A74C60: fc0300aa  mov x28, x0
0x06A74C64: 2984d297  bl #0x5f15d08
0x06A74C68: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A74C6C: a30340f9  ldr x3, [x29]
0x06A74C70: e8430491  add x8, sp, #0x110
0x06A74C74: e0830591  add x0, sp, #0x160
0x06A74C78: e1031baa  mov x1, x27
0x06A74C7C: e2031caa  mov x2, x28
0x06A74C80: e0070bad  stp q0, q1, [sp, #0x160]
0x06A74C84: b8c04b97  bl #0x3d64f64
0x06A74C88: e08748ad  ldp q0, q1, [sp, #0x110]
0x06A74C8C: c10240f9  ldr x1, [x22]
0x06A74C90: e0c30491  add x0, sp, #0x130
0x06A74C94: e08709ad  stp q0, q1, [sp, #0x130]
0x06A74C98: 3b506497  bl #0x4388d84
0x06A74C9C: a80240f9  ldr x8, [x21]
0x06A74CA0: fb0300aa  mov x27, x0
0x06A74CA4: 09e140b9  ldr w9, [x8, #0xe0]
0x06A74CA8: 89000035  cbnz w9, #0x6a74cb8
0x06A74CAC: e00308aa  mov x0, x8
0x06A74CB0: b72f1c97  bl #0x3180b8c
0x06A74CB4: a80240f9  ldr x8, [x21]
0x06A74CB8: 095d40f9  ldr x9, [x8, #0xb8]
0x06A74CBC: f86500b0  adrp x24, #0x7731000
0x06A74CC0: 746200b0  adrp x20, #0x76c1000
0x06A74CC4: 3c0d40f9  ldr x28, [x9, #0x18]
0x06A74CC8: 187342f9  ldr x24, [x24, #0x4e0]
0x06A74CCC: 947e46f9  ldr x20, [x20, #0xcf8]
0x06A74CD0: 1c0300b5  cbnz x28, #0x6a74d30
0x06A74CD4: 09e140b9  ldr w9, [x8, #0xe0]
0x06A74CD8: 89000035  cbnz w9, #0x6a74ce8
0x06A74CDC: e00308aa  mov x0, x8
0x06A74CE0: ab2f1c97  bl #0x3180b8c
0x06A74CE4: a80240f9  ldr x8, [x21]
0x06A74CE8: e96500b0  adrp x9, #0x7731000
0x06A74CEC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A74CF0: 297542f9  ldr x9, [x9, #0x4e8]
0x06A74CF4: 1d0140f9  ldr x29, [x8]
0x06A74CF8: 200140f9  ldr x0, [x9]
0x06A74CFC: e92f1c97  bl #0x3180ca0
0x06A74D00: e86500b0  adrp x8, #0x7731000
0x06A74D04: 088142f9  ldr x8, [x8, #0x500]
0x06A74D08: e1031daa  mov x1, x29
0x06A74D0C: e3031faa  mov x3, xzr
0x06A74D10: fc0300aa  mov x28, x0
0x06A74D14: 020140f9  ldr x2, [x8]
0x06A74D18: f86b9f97  bl #0x524fcf8
0x06A74D1C: a80240f9  ldr x8, [x21]
0x06A74D20: e1031caa  mov x1, x28
0x06A74D24: 005d40f9  ldr x0, [x8, #0xb8]
0x06A74D28: 1c8c01f8  str x28, [x0, #0x18]!
0x06A74D2C: 262f1c97  bl #0x31809c4
0x06A74D30: 020340f9  ldr x2, [x24]
0x06A74D34: e0031baa  mov x0, x27
0x06A74D38: e1031caa  mov x1, x28
0x06A74D3C: c8644797  bl #0x3c4e05c
0x06A74D40: 810240f9  ldr x1, [x20]
0x06A74D44: 27ac4797  bl #0x3c5fde0
0x06A74D48: 3a1700b4  cbz x26, #0x6a7502c
0x06A74D4C: fb031aaa  mov x27, x26
0x06A74D50: 600f01f8  str x0, [x27, #0x10]!
0x06A74D54: e10300aa  mov x1, x0
0x06A74D58: e0031baa  mov x0, x27
0x06A74D5C: 1a2f1c97  bl #0x31809c4
0x06A74D60: e00319aa  mov x0, x25
0x06A74D64: e1031faa  mov x1, xzr
0x06A74D68: 719d0094  bl #0x6a9c32c
0x06A74D6C: e81740f9  ldr x8, [sp, #0x28]
0x06A74D70: f50313aa  mov x21, x19
0x06A74D74: 1c0d40f9  ldr x28, [x8, #0x18]
0x06A74D78: a0020036  tbz w0, #0, #0x6a74dcc
0x06A74D7C: 9c1500b4  cbz x28, #0x6a7502c
0x06A74D80: 6a6200b0  adrp x10, #0x76c1000
0x06A74D84: 880340f9  ldr x8, [x28]
0x06A74D88: 7a0340f9  ldr x26, [x27]
0x06A74D8C: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A74D90: 095d4279  ldrh w9, [x8, #0x12e]
0x06A74D94: 410140f9  ldr x1, [x10]
0x06A74D98: 290100b4  cbz x9, #0x6a74dbc
0x06A74D9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A74DA0: 4a210091  add x10, x10, #8
0x06A74DA4: 4b815ff8  ldur x11, [x10, #-8]
0x06A74DA8: 7f0101eb  cmp x11, x1
0x06A74DAC: 60030054  b.eq #0x6a74e18
0x06A74DB0: 290500f1  subs x9, x9, #1
0x06A74DB4: 4a410091  add x10, x10, #0x10
0x06A74DB8: 61ffff54  b.ne #0x6a74da4
0x06A74DBC: 62008052  movz w2, #0x3
0x06A74DC0: e0031caa  mov x0, x28
0x06A74DC4: 53871b97  bl #0x3156b10
0x06A74DC8: 18000014  b #0x6a74e28
0x06A74DCC: 1c1300b4  cbz x28, #0x6a7502c
0x06A74DD0: 6a6200b0  adrp x10, #0x76c1000
0x06A74DD4: 880340f9  ldr x8, [x28]
0x06A74DD8: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A74DDC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A74DE0: 410140f9  ldr x1, [x10]
0x06A74DE4: 290100b4  cbz x9, #0x6a74e08
0x06A74DE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A74DEC: 4a210091  add x10, x10, #8
0x06A74DF0: 4b815ff8  ldur x11, [x10, #-8]
0x06A74DF4: 7f0101eb  cmp x11, x1
0x06A74DF8: 20020054  b.eq #0x6a74e3c
0x06A74DFC: 290500f1  subs x9, x9, #1
0x06A74E00: 4a410091  add x10, x10, #0x10
0x06A74E04: 61ffff54  b.ne #0x6a74df0
0x06A74E08: 82008052  movz w2, #0x4
0x06A74E0C: e0031caa  mov x0, x28
0x06A74E10: 40871b97  bl #0x3156b10
0x06A74E14: 0e000014  b #0x6a74e4c
0x06A74E18: 490140b9  ldr w9, [x10]
0x06A74E1C: 290d0011  add w9, w9, #3
0x06A74E20: 08d1298b  add x8, x8, w9, sxtw #4
0x06A74E24: 00e10491  add x0, x8, #0x138
0x06A74E28: 080840a9  ldp x8, x2, [x0]
0x06A74E2C: e0031caa  mov x0, x28
0x06A74E30: e1031aaa  mov x1, x26
0x06A74E34: 00013fd6  blr x8
0x06A74E38: 1c000014  b #0x6a74ea8
0x06A74E3C: 490140b9  ldr w9, [x10]
0x06A74E40: 29110011  add w9, w9, #4
0x06A74E44: 08d1298b  add x8, x8, w9, sxtw #4
0x06A74E48: 00e10491  add x0, x8, #0x138
0x06A74E4C: 080840a9  ldp x8, x2, [x0]
0x06A74E50: e0031caa  mov x0, x28
0x06A74E54: e103152a  mov w1, w21
0x06A74E58: 00013fd6  blr x8
0x06A74E5C: 686100f0  adrp x8, #0x76a3000
0x06A74E60: 08c944f9  ldr x8, [x8, #0x990]
0x06A74E64: fc0300aa  mov x28, x0
0x06A74E68: 080140f9  ldr x8, [x8]
0x06A74E6C: e00308aa  mov x0, x8
0x06A74E70: 8c2f1c97  bl #0x3180ca0
0x06A74E74: e86500b0  adrp x8, #0x7731000
0x06A74E78: 088542f9  ldr x8, [x8, #0x508]
0x06A74E7C: e1031aaa  mov x1, x26
0x06A74E80: e3031faa  mov x3, xzr
0x06A74E84: fd0300aa  mov x29, x0
0x06A74E88: 020140f9  ldr x2, [x8]
0x06A74E8C: a67b9f97  bl #0x5253d24
0x06A74E90: 886300b0  adrp x8, #0x76e5000
0x06A74E94: 08c942f9  ldr x8, [x8, #0x590]
0x06A74E98: e0031caa  mov x0, x28
0x06A74E9C: e1031daa  mov x1, x29
0x06A74EA0: 020140f9  ldr x2, [x8]
0x06A74EA4: 97474897  bl #0x3c86d00
0x06A74EA8: 810240f9  ldr x1, [x20]
0x06A74EAC: 146300b0  adrp x20, #0x76d5000
0x06A74EB0: 94e643f9  ldr x20, [x20, #0x7c8]
0x06A74EB4: cbab4797  bl #0x3c5fde0
0x06A74EB8: 810240f9  ldr x1, [x20]
0x06A74EBC: fa0300aa  mov x26, x0
0x06A74EC0: dacb4597  bl #0x3be7e28
0x06A74EC4: f3d341a9  ldp x19, x20, [sp, #0x18]
0x06A74EC8: 200a0037  tbnz w0, #0, #0x6a7500c
0x06A74ECC: e00319aa  mov x0, x25
0x06A74ED0: e1031faa  mov x1, xzr
0x06A74ED4: 169d0094  bl #0x6a9c32c
0x06A74ED8: e0020036  tbz w0, #0, #0x6a74f34
0x06A74EDC: e81740f9  ldr x8, [sp, #0x28]
0x06A74EE0: 1a0d40f9  ldr x26, [x8, #0x18]
0x06A74EE4: 5a0a00b4  cbz x26, #0x6a7502c
0x06A74EE8: 6a6200b0  adrp x10, #0x76c1000
0x06A74EEC: 480340f9  ldr x8, [x26]
0x06A74EF0: 7b0340f9  ldr x27, [x27]
0x06A74EF4: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A74EF8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A74EFC: 410140f9  ldr x1, [x10]
0x06A74F00: 290100b4  cbz x9, #0x6a74f24
0x06A74F04: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A74F08: 4a210091  add x10, x10, #8
0x06A74F0C: 4b815ff8  ldur x11, [x10, #-8]
0x06A74F10: 7f0101eb  cmp x11, x1
0x06A74F14: a0020054  b.eq #0x6a74f68
0x06A74F18: 290500f1  subs x9, x9, #1
0x06A74F1C: 4a410091  add x10, x10, #0x10
0x06A74F20: 61ffff54  b.ne #0x6a74f0c
0x06A74F24: 42008052  movz w2, #0x2
0x06A74F28: e0031aaa  mov x0, x26
0x06A74F2C: f9861b97  bl #0x3156b10
0x06A74F30: 12000014  b #0x6a74f78
0x06A74F34: da0700b4  cbz x26, #0x6a7502c
0x06A74F38: 411b40b9  ldr w1, [x26, #0x18]
0x06A74F3C: e0031f2a  mov w0, wzr
0x06A74F40: e2031faa  mov x2, xzr
0x06A74F44: 48921194  bl #0x6ed9864
0x06A74F48: 285f00b0  adrp x8, #0x7659000
0x06A74F4C: 086145f9  ldr x8, [x8, #0xac0]
0x06A74F50: e103002a  mov w1, w0
0x06A74F54: e0031aaa  mov x0, x26
0x06A74F58: 020140f9  ldr x2, [x8]
0x06A74F5C: 93925697  bl #0x40199a8
0x06A74F60: e05f01b9  str w0, [sp, #0x15c]
0x06A74F64: 0c000014  b #0x6a74f94
0x06A74F68: 490140b9  ldr w9, [x10]
0x06A74F6C: 29090011  add w9, w9, #2
0x06A74F70: 08d1298b  add x8, x8, w9, sxtw #4
0x06A74F74: 00e10491  add x0, x8, #0x138
0x06A74F78: 081040a9  ldp x8, x4, [x0]
0x06A74F7C: e3730591  add x3, sp, #0x15c
0x06A74F80: e0031aaa  mov x0, x26
0x06A74F84: e1031baa  mov x1, x27
0x06A74F88: e203152a  mov w2, w21
0x06A74F8C: 00013fd6  blr x8
0x06A74F90: e0030036  tbz w0, #0, #0x6a7500c
0x06A74F94: 280b40f9  ldr x8, [x25, #0x10]
0x06A74F98: 2003c03d  ldr q0, [x25]
0x06A74F9C: e0030291  add x0, sp, #0x80
0x06A74FA0: 020a8052  movz w2, #0x50
0x06A74FA4: e10313aa  mov x1, x19
0x06A74FA8: e87300f9  str x8, [sp, #0xe0]
0x06A74FAC: e037803d  str q0, [sp, #0xd0]
0x06A74FB0: 70661d94  bl #0x71ce970
0x06A74FB4: e80b40f9  ldr x8, [sp, #0x10]
0x06A74FB8: e1430391  add x1, sp, #0xd0
0x06A74FBC: e2030291  add x2, sp, #0x80
0x06A74FC0: e3430191  add x3, sp, #0x50
0x06A74FC4: 000540ad  ldp q0, q1, [x8]
0x06A74FC8: 081140f9  ldr x8, [x8, #0x20]
0x06A74FCC: e00314aa  mov x0, x20
0x06A74FD0: e4031faa  mov x4, xzr
0x06A74FD4: e08702ad  stp q0, q1, [sp, #0x50]
0x06A74FD8: e83b00f9  str x8, [sp, #0x70]
0x06A74FDC: 2f66ff97  bl #0x6a4e898
0x06A74FE0: 600100b4  cbz x0, #0x6a7500c
0x06A74FE4: e60300aa  mov x6, x0
0x06A74FE8: e10240ad  ldp q1, q0, [x23]
0x06A74FEC: e55f41b9  ldr w5, [sp, #0x15c]
0x06A74FF0: e01740f9  ldr x0, [sp, #0x28]
0x06A74FF4: a37e4092  and x3, x21, #0xffffffff
0x06A74FF8: e1c30091  add x1, sp, #0x30
0x06A74FFC: e20314aa  mov x2, x20
0x06A75000: e40313aa  mov x4, x19
0x06A75004: e18301ad  stp q1, q0, [sp, #0x30]
0x06A75008: 0a000094  bl #0x6a75030
0x06A7500C: f44f5da9  ldp x20, x19, [sp, #0x1d0]
0x06A75010: f6575ca9  ldp x22, x21, [sp, #0x1c0]
0x06A75014: f85f5ba9  ldp x24, x23, [sp, #0x1b0]
0x06A75018: fa675aa9  ldp x26, x25, [sp, #0x1a0]
0x06A7501C: fc6f59a9  ldp x28, x27, [sp, #0x190]
0x06A75020: fd7b58a9  ldp x29, x30, [sp, #0x180]
0x06A75024: ff830791  add sp, sp, #0x1e0
0x06A75028: c0035fd6  ret
0x06A7502C: 202f1c97  bl #0x3180cac

; RVA 0x6A75030 | private void SpawnItem(TickContext context, Entity entity, BoardTilePositionComponent positionComponent, ref TimeCycleComponent timeCycleComponent, int emptyPosition, ItemSpawnable itemToSpawn) { }
; bytes=756 sha256=f0d3802115a6aac71ec067004e60afdfcfa5390f97a1f3bf2f079e69b6c2bb17 status=arm64_complete_bound indexed_start=True
0x06A75030: ffc302d1  sub sp, sp, #0xb0
0x06A75034: fd7b05a9  stp x29, x30, [sp, #0x50]
0x06A75038: fc6f06a9  stp x28, x27, [sp, #0x60]
0x06A7503C: fa6707a9  stp x26, x25, [sp, #0x70]
0x06A75040: f85f08a9  stp x24, x23, [sp, #0x80]
0x06A75044: f65709a9  stp x22, x21, [sp, #0x90]
0x06A75048: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A7504C: b59500b0  adrp x21, #0x7d2a000
0x06A75050: a8ee5b39  ldrb w8, [x21, #0x6fb]
0x06A75054: f70306aa  mov x23, x6
0x06A75058: f403052a  mov w20, w5
0x06A7505C: f90304aa  mov x25, x4
0x06A75060: fd0303aa  mov x29, x3
0x06A75064: f60302aa  mov x22, x2
0x06A75068: f30301aa  mov x19, x1
0x06A7506C: f80300aa  mov x24, x0
0x06A75070: 08030037  tbnz w8, #0, #0x6a750d0
0x06A75074: 60620090  adrp x0, #0x76c1000
0x06A75078: 005843f9  ldr x0, [x0, #0x6b0]
0x06A7507C: 672e1c97  bl #0x3180a18
0x06A75080: c06500d0  adrp x0, #0x772f000
0x06A75084: 003c47f9  ldr x0, [x0, #0xe78]
0x06A75088: 642e1c97  bl #0x3180a18
0x06A7508C: c06500d0  adrp x0, #0x772f000
0x06A75090: 004047f9  ldr x0, [x0, #0xe80]
0x06A75094: 612e1c97  bl #0x3180a18
0x06A75098: c06500d0  adrp x0, #0x772f000
0x06A7509C: 005447f9  ldr x0, [x0, #0xea8]
0x06A750A0: 5e2e1c97  bl #0x3180a18
0x06A750A4: c06500d0  adrp x0, #0x772f000
0x06A750A8: 005847f9  ldr x0, [x0, #0xeb0]
0x06A750AC: 5b2e1c97  bl #0x3180a18
0x06A750B0: 406000b0  adrp x0, #0x767e000
0x06A750B4: 00a842f9  ldr x0, [x0, #0x550]
0x06A750B8: 582e1c97  bl #0x3180a18
0x06A750BC: c05e00d0  adrp x0, #0x764f000
0x06A750C0: 00ac40f9  ldr x0, [x0, #0x158]
0x06A750C4: 552e1c97  bl #0x3180a18
0x06A750C8: 28008052  movz w8, #0x1
0x06A750CC: a8ee1b39  strb w8, [x21, #0x6fb]
0x06A750D0: 971200b4  cbz x23, #0x6a75320
0x06A750D4: e00a40f9  ldr x0, [x23, #0x10]
0x06A750D8: 401200b4  cbz x0, #0x6a75320
0x06A750DC: 080040f9  ldr x8, [x0]
0x06A750E0: 1a0b40f9  ldr x26, [x24, #0x10]
0x06A750E4: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A750E8: 20013fd6  blr x9
0x06A750EC: ba1100b4  cbz x26, #0x6a75320
0x06A750F0: 6a620090  adrp x10, #0x76c1000
0x06A750F4: 480340f9  ldr x8, [x26]
0x06A750F8: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A750FC: 5c6000b0  adrp x28, #0x767e000
0x06A75100: f5824039  ldrb w21, [x23, #0x20]
0x06A75104: 095d4279  ldrh w9, [x8, #0x12e]
0x06A75108: 410140f9  ldr x1, [x10]
0x06A7510C: 9cab42f9  ldr x28, [x28, #0x550]
0x06A75110: fb0300aa  mov x27, x0
0x06A75114: fd1700f9  str x29, [sp, #0x28]
0x06A75118: 290100b4  cbz x9, #0x6a7513c
0x06A7511C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A75120: 4a210091  add x10, x10, #8
0x06A75124: 4b815ff8  ldur x11, [x10, #-8]
0x06A75128: 7f0101eb  cmp x11, x1
0x06A7512C: 00010054  b.eq #0x6a7514c
0x06A75130: 290500f1  subs x9, x9, #1
0x06A75134: 4a410091  add x10, x10, #0x10
0x06A75138: 61ffff54  b.ne #0x6a75124
0x06A7513C: 22008052  movz w2, #0x1
0x06A75140: e0031aaa  mov x0, x26
0x06A75144: 73861b97  bl #0x3156b10
0x06A75148: 05000014  b #0x6a7515c
0x06A7514C: 490140b9  ldr w9, [x10]
0x06A75150: 29050011  add w9, w9, #1
0x06A75154: 08d1298b  add x8, x8, w9, sxtw #4
0x06A75158: 00e10491  add x0, x8, #0x138
0x06A7515C: 081840a9  ldp x8, x6, [x0]
0x06A75160: dd5e00d0  adrp x29, #0x764f000
0x06A75164: bdaf40f9  ldr x29, [x29, #0x158]
0x06A75168: bf020071  cmp w21, #0
0x06A7516C: e4079f1a  cset w4, ne
0x06A75170: 83008052  movz w3, #0x4
0x06A75174: e0031aaa  mov x0, x26
0x06A75178: e1031baa  mov x1, x27
0x06A7517C: e203142a  mov w2, w20
0x06A75180: e5031faa  mov x5, xzr
0x06A75184: 00013fd6  blr x8
0x06A75188: 600640ad  ldp q0, q1, [x19]
0x06A7518C: fa0300aa  mov x26, x0
0x06A75190: e0c30091  add x0, sp, #0x30
0x06A75194: e1031aaa  mov x1, x26
0x06A75198: e20316aa  mov x2, x22
0x06A7519C: e3031faa  mov x3, xzr
0x06A751A0: e08701ad  stp q0, q1, [sp, #0x30]
0x06A751A4: 2f8f0094  bl #0x6a98e60
0x06A751A8: e00319aa  mov x0, x25
0x06A751AC: e10316aa  mov x1, x22
0x06A751B0: e2031faa  mov x2, xzr
0x06A751B4: f268ff97  bl #0x6a4f57c
0x06A751B8: e90240f9  ldr x9, [x23]
0x06A751BC: 880340f9  ldr x8, [x28]
0x06A751C0: fc031faa  mov x28, xzr
0x06A751C4: 2bc14439  ldrb w11, [x9, #0x130]
0x06A751C8: 0ac14439  ldrb w10, [x8, #0x130]
0x06A751CC: 7f010a6b  cmp w11, w10
0x06A751D0: c3000054  b.lo #0x6a751e8
0x06A751D4: 296540f9  ldr x9, [x9, #0xc8]
0x06A751D8: 290d0a8b  add x9, x9, x10, lsl #3
0x06A751DC: 29815ff8  ldur x9, [x9, #-8]
0x06A751E0: 3f0108eb  cmp x9, x8
0x06A751E4: fc029f9a  csel x28, x23, xzr, eq
0x06A751E8: a20340f9  ldr x2, [x29]
0x06A751EC: 011340f9  ldr x1, [x24, #0x20]
0x06A751F0: e0031aaa  mov x0, x26
0x06A751F4: e5031faa  mov x5, xzr
0x06A751F8: e30302aa  mov x3, x2
0x06A751FC: e40302aa  mov x4, x2
0x06A75200: cdb70094  bl #0x6aa3134
0x06A75204: a20340f9  ldr x2, [x29]
0x06A75208: 011340f9  ldr x1, [x24, #0x20]
0x06A7520C: 790a40f9  ldr x25, [x19, #0x10]
0x06A75210: f80300aa  mov x24, x0
0x06A75214: e00316aa  mov x0, x22
0x06A75218: e30302aa  mov x3, x2
0x06A7521C: e40302aa  mov x4, x2
0x06A75220: e5031faa  mov x5, xzr
0x06A75224: c4b70094  bl #0x6aa3134
0x06A75228: fb0300aa  mov x27, x0
0x06A7522C: 3c0100b4  cbz x28, #0x6a75250
0x06A75230: 88a74039  ldrb w8, [x28, #0x29]
0x06A75234: 89a34039  ldrb w9, [x28, #0x28]
0x06A75238: f503142a  mov w21, w20
0x06A7523C: 1f010071  cmp w8, #0
0x06A75240: fd079f1a  cset w29, ne
0x06A75244: 3f010071  cmp w9, #0
0x06A75248: fc079f1a  cset w28, ne
0x06A7524C: 03000014  b #0x6a75258
0x06A75250: f503142a  mov w21, w20
0x06A75254: fd031f2a  mov w29, wzr
0x06A75258: c86500d0  adrp x8, #0x772f000
0x06A7525C: f48a4039  ldrb w20, [x23, #0x22]
0x06A75260: 084147f9  ldr x8, [x8, #0xe80]
0x06A75264: 000140f9  ldr x0, [x8]
0x06A75268: 8e2e1c97  bl #0x3180ca0
0x06A7526C: 25008052  movz w5, #0x1
0x06A75270: e10316aa  mov x1, x22
0x06A75274: e2031aaa  mov x2, x26
0x06A75278: e31740f9  ldr x3, [sp, #0x28]
0x06A7527C: e403152a  mov w4, w21
0x06A75280: e6031baa  mov x6, x27
0x06A75284: e70318aa  mov x7, x24
0x06A75288: f70300aa  mov x23, x0
0x06A7528C: ff0f00f9  str xzr, [sp, #0x18]
0x06A75290: f4430039  strb w20, [sp, #0x10]
0x06A75294: fd230039  strb w29, [sp, #8]
0x06A75298: fc030039  strb w28, [sp]
0x06A7529C: fd950094  bl #0x6a9aa90
0x06A752A0: 190400b4  cbz x25, #0x6a75320
0x06A752A4: c86500d0  adrp x8, #0x772f000
0x06A752A8: 085947f9  ldr x8, [x8, #0xeb0]
0x06A752AC: d46500d0  adrp x20, #0x772f000
0x06A752B0: e00319aa  mov x0, x25
0x06A752B4: e10317aa  mov x1, x23
0x06A752B8: 020140f9  ldr x2, [x8]
0x06A752BC: 943e47f9  ldr x20, [x20, #0xe78]
0x06A752C0: 49384d97  bl #0x3dc33e4
0x06A752C4: 800240f9  ldr x0, [x20]
0x06A752C8: 730a40f9  ldr x19, [x19, #0x10]
0x06A752CC: 752e1c97  bl #0x3180ca0
0x06A752D0: e1031aaa  mov x1, x26
0x06A752D4: e20318aa  mov x2, x24
0x06A752D8: e3031faa  mov x3, xzr
0x06A752DC: f40300aa  mov x20, x0
0x06A752E0: 52950094  bl #0x6a9a828
0x06A752E4: f30100b4  cbz x19, #0x6a75320
0x06A752E8: c86500d0  adrp x8, #0x772f000
0x06A752EC: 085547f9  ldr x8, [x8, #0xea8]
0x06A752F0: e00313aa  mov x0, x19
0x06A752F4: e10314aa  mov x1, x20
0x06A752F8: 020140f9  ldr x2, [x8]
0x06A752FC: 3a384d97  bl #0x3dc33e4
0x06A75300: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A75304: f65749a9  ldp x22, x21, [sp, #0x90]
0x06A75308: f85f48a9  ldp x24, x23, [sp, #0x80]
0x06A7530C: fa6747a9  ldp x26, x25, [sp, #0x70]
0x06A75310: fc6f46a9  ldp x28, x27, [sp, #0x60]
0x06A75314: fd7b45a9  ldp x29, x30, [sp, #0x50]
0x06A75318: ffc30291  add sp, sp, #0xb0
0x06A7531C: c0035fd6  ret
0x06A75320: 632e1c97  bl #0x3180cac

; RVA 0x6A7532C | public void .ctor() { }
; bytes=8 sha256=6108d497199cca759a1c1a8edcdbf971bb920cf3abeabe48b45a41b082a6b8e9 status=arm64_complete_bound indexed_start=True
0x06A7532C: e1031faa  mov x1, xzr
0x06A75330: b394b117  b #0x56da5fc


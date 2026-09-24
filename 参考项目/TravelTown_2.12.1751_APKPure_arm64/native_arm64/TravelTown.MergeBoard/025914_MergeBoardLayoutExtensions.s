; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25914 Merger.MergeBoard.Extensions.MergeBoardLayoutExtensions
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A99134 | public static BoardItemPosition GetItemPositionForIndex(IMergeBoardLayout layout, int index) { }
; bytes=268 sha256=d98c3c14995fc684cd03d4d00c03fe181a74b3c0412f499b56e5d8d91398562f status=arm64_complete_bound indexed_start=True
0x06A99134: ffc300d1  sub sp, sp, #0x30
0x06A99138: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A9913C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A99140: 959400b0  adrp x21, #0x7d2a000
0x06A99144: a8b66039  ldrb w8, [x21, #0x82d]
0x06A99148: f303012a  mov w19, w1
0x06A9914C: f40300aa  mov x20, x0
0x06A99150: 88010037  tbnz w8, #0, #0x6a99180
0x06A99154: a05d00b0  adrp x0, #0x764e000
0x06A99158: 00cc42f9  ldr x0, [x0, #0x598]
0x06A9915C: 2f9e1b97  bl #0x3180a18
0x06A99160: c06400b0  adrp x0, #0x7732000
0x06A99164: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A99168: 2c9e1b97  bl #0x3180a18
0x06A9916C: c06400b0  adrp x0, #0x7732000
0x06A99170: 00f042f9  ldr x0, [x0, #0x5e0]
0x06A99174: 299e1b97  bl #0x3180a18
0x06A99178: 28008052  movz w8, #0x1
0x06A9917C: a8b62039  strb w8, [x21, #0x82d]
0x06A99180: f40500b4  cbz x20, #0x6a9923c
0x06A99184: c86400b0  adrp x8, #0x7732000
0x06A99188: 08ed42f9  ldr x8, [x8, #0x5d8]
0x06A9918C: 890240f9  ldr x9, [x20]
0x06A99190: 080140f9  ldr x8, [x8]
0x06A99194: 2bc14439  ldrb w11, [x9, #0x130]
0x06A99198: 0ac14439  ldrb w10, [x8, #0x130]
0x06A9919C: 7f010a6b  cmp w11, w10
0x06A991A0: c3000054  b.lo #0x6a991b8
0x06A991A4: 296540f9  ldr x9, [x9, #0xc8]
0x06A991A8: 290d0a8b  add x9, x9, x10, lsl #3
0x06A991AC: 29815ff8  ldur x9, [x9, #-8]
0x06A991B0: 3f0108eb  cmp x9, x8
0x06A991B4: e0020054  b.eq #0x6a99210
0x06A991B8: d36400b0  adrp x19, #0x7732000
0x06A991BC: b55d00b0  adrp x21, #0x764e000
0x06A991C0: 73f242f9  ldr x19, [x19, #0x5e0]
0x06A991C4: b5ce42f9  ldr x21, [x21, #0x598]
0x06A991C8: e00314aa  mov x0, x20
0x06A991CC: e1031faa  mov x1, xzr
0x06A991D0: fd06b197  bl #0x56dadc4
0x06A991D4: 680240f9  ldr x8, [x19]
0x06A991D8: e10300aa  mov x1, x0
0x06A991DC: e2031faa  mov x2, xzr
0x06A991E0: e00308aa  mov x0, x8
0x06A991E4: 3755a997  bl #0x54ee6c0
0x06A991E8: a80240f9  ldr x8, [x21]
0x06A991EC: f30300aa  mov x19, x0
0x06A991F0: 09e140b9  ldr w9, [x8, #0xe0]
0x06A991F4: 69000035  cbnz w9, #0x6a99200
0x06A991F8: e00308aa  mov x0, x8
0x06A991FC: 649e1b97  bl #0x3180b8c
0x06A99200: e00313aa  mov x0, x19
0x06A99204: e1031faa  mov x1, xzr
0x06A99208: 9c431094  bl #0x6eaa078
0x06A9920C: f3031f2a  mov w19, wzr
0x06A99210: e0230091  add x0, sp, #8
0x06A99214: e103132a  mov w1, w19
0x06A99218: e2031f2a  mov w2, wzr
0x06A9921C: e3031faa  mov x3, xzr
0x06A99220: ff0700f9  str xzr, [sp, #8]
0x06A99224: 9c92f997  bl #0x68fdc94
0x06A99228: e00740f9  ldr x0, [sp, #8]
0x06A9922C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A99230: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A99234: ffc30091  add sp, sp, #0x30
0x06A99238: c0035fd6  ret
0x06A9923C: 9c9e1b97  bl #0x3180cac

; RVA 0x6A99240 | public static int GetIndexFromBoardItemPosition(IMergeBoardLayout layout, BoardItemPosition position) { }
; bytes=236 sha256=d10d64d135a5fb58253a93b24b32d9d8149a2b35ab23d8cc512a370b8c1dc894 status=arm64_complete_bound indexed_start=True
0x06A99240: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A99244: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A99248: 959400b0  adrp x21, #0x7d2a000
0x06A9924C: a8ba6039  ldrb w8, [x21, #0x82e]
0x06A99250: f30301aa  mov x19, x1
0x06A99254: f40300aa  mov x20, x0
0x06A99258: 88010037  tbnz w8, #0, #0x6a99288
0x06A9925C: a05d00b0  adrp x0, #0x764e000
0x06A99260: 00cc42f9  ldr x0, [x0, #0x598]
0x06A99264: ed9d1b97  bl #0x3180a18
0x06A99268: c06400b0  adrp x0, #0x7732000
0x06A9926C: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A99270: ea9d1b97  bl #0x3180a18
0x06A99274: c06400b0  adrp x0, #0x7732000
0x06A99278: 00f042f9  ldr x0, [x0, #0x5e0]
0x06A9927C: e79d1b97  bl #0x3180a18
0x06A99280: 28008052  movz w8, #0x1
0x06A99284: a8ba2039  strb w8, [x21, #0x82e]
0x06A99288: 140500b4  cbz x20, #0x6a99328
0x06A9928C: c86400b0  adrp x8, #0x7732000
0x06A99290: 08ed42f9  ldr x8, [x8, #0x5d8]
0x06A99294: 890240f9  ldr x9, [x20]
0x06A99298: 080140f9  ldr x8, [x8]
0x06A9929C: 2bc14439  ldrb w11, [x9, #0x130]
0x06A992A0: 0ac14439  ldrb w10, [x8, #0x130]
0x06A992A4: 7f010a6b  cmp w11, w10
0x06A992A8: c3000054  b.lo #0x6a992c0
0x06A992AC: 296540f9  ldr x9, [x9, #0xc8]
0x06A992B0: 290d0a8b  add x9, x9, x10, lsl #3
0x06A992B4: 29815ff8  ldur x9, [x9, #-8]
0x06A992B8: 3f0108eb  cmp x9, x8
0x06A992BC: e0020054  b.eq #0x6a99318
0x06A992C0: d36400b0  adrp x19, #0x7732000
0x06A992C4: b55d00b0  adrp x21, #0x764e000
0x06A992C8: 73f242f9  ldr x19, [x19, #0x5e0]
0x06A992CC: b5ce42f9  ldr x21, [x21, #0x598]
0x06A992D0: e00314aa  mov x0, x20
0x06A992D4: e1031faa  mov x1, xzr
0x06A992D8: bb06b197  bl #0x56dadc4
0x06A992DC: 680240f9  ldr x8, [x19]
0x06A992E0: e10300aa  mov x1, x0
0x06A992E4: e2031faa  mov x2, xzr
0x06A992E8: e00308aa  mov x0, x8
0x06A992EC: f554a997  bl #0x54ee6c0
0x06A992F0: a80240f9  ldr x8, [x21]
0x06A992F4: f30300aa  mov x19, x0
0x06A992F8: 09e140b9  ldr w9, [x8, #0xe0]
0x06A992FC: 69000035  cbnz w9, #0x6a99308
0x06A99300: e00308aa  mov x0, x8
0x06A99304: 229e1b97  bl #0x3180b8c
0x06A99308: e00313aa  mov x0, x19
0x06A9930C: e1031faa  mov x1, xzr
0x06A99310: 5a431094  bl #0x6eaa078
0x06A99314: 13008012  movn w19, #0
0x06A99318: e003132a  mov w0, w19
0x06A9931C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A99320: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A99324: c0035fd6  ret
0x06A99328: 619e1b97  bl #0x3180cac

; RVA 0x6A9932C | public static Transform GetTransformForPosition(IMergeBoardLayout layout, BoardItemPosition position) { }
; bytes=176 sha256=4a0ac3e6ab8f57e95f7cb64f76eb1f5279e66a7021a8cbb480e6da3ff811bba0 status=arm64_complete_bound indexed_start=True
0x06A9932C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A99330: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A99334: 959400b0  adrp x21, #0x7d2a000
0x06A99338: a8be6039  ldrb w8, [x21, #0x82f]
0x06A9933C: f30301aa  mov x19, x1
0x06A99340: f40300aa  mov x20, x0
0x06A99344: 28010037  tbnz w8, #0, #0x6a99368
0x06A99348: a06400d0  adrp x0, #0x772f000
0x06A9934C: 00c442f9  ldr x0, [x0, #0x588]
0x06A99350: b29d1b97  bl #0x3180a18
0x06A99354: c06400b0  adrp x0, #0x7732000
0x06A99358: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A9935C: af9d1b97  bl #0x3180a18
0x06A99360: 28008052  movz w8, #0x1
0x06A99364: a8be2039  strb w8, [x21, #0x82f]
0x06A99368: f40100b4  cbz x20, #0x6a993a4
0x06A9936C: c86400b0  adrp x8, #0x7732000
0x06A99370: 08ed42f9  ldr x8, [x8, #0x5d8]
0x06A99374: 890240f9  ldr x9, [x20]
0x06A99378: 080140f9  ldr x8, [x8]
0x06A9937C: 2bc14439  ldrb w11, [x9, #0x130]
0x06A99380: 0ac14439  ldrb w10, [x8, #0x130]
0x06A99384: 7f010a6b  cmp w11, w10
0x06A99388: e3000054  b.lo #0x6a993a4
0x06A9938C: 296540f9  ldr x9, [x9, #0xc8]
0x06A99390: 290d0a8b  add x9, x9, x10, lsl #3
0x06A99394: 29815ff8  ldur x9, [x9, #-8]
0x06A99398: 3f0108eb  cmp x9, x8
0x06A9939C: 88029f9a  csel x8, x20, xzr, eq
0x06A993A0: a0000054  b.eq #0x6a993b4
0x06A993A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A993A8: e0031faa  mov x0, xzr
0x06A993AC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A993B0: c0035fd6  ret
0x06A993B4: 280100b4  cbz x8, #0x6a993d8
0x06A993B8: 001940f9  ldr x0, [x8, #0x30]
0x06A993BC: a86400d0  adrp x8, #0x772f000
0x06A993C0: 08c542f9  ldr x8, [x8, #0x588]
0x06A993C4: e103132a  mov w1, w19
0x06A993C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A993CC: 020140f9  ldr x2, [x8]
0x06A993D0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A993D4: 4d234517  b #0x3be2108
0x06A993D8: 359e1b97  bl #0x3180cac

; RVA 0x6A993DC | public static bool TryGetClosestEmptyPositionFromContext(IMergeBoardLayout layout, TickContext context, BoardTilePositionComponent producerPositionComponent, out int emptyPosition) { }
; bytes=680 sha256=6a119a56d59e64efcb21ccdb56b7f60cf6364a867a6b0b1c55003e4481f62ccd status=arm64_complete_bound indexed_start=True
0x06A993DC: ff0303d1  sub sp, sp, #0xc0
0x06A993E0: fd7b06a9  stp x29, x30, [sp, #0x60]
0x06A993E4: fc6f07a9  stp x28, x27, [sp, #0x70]
0x06A993E8: fa6708a9  stp x26, x25, [sp, #0x80]
0x06A993EC: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A993F0: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A993F4: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A993F8: 9d9400b0  adrp x29, #0x7d2a000
0x06A993FC: bc6400d0  adrp x28, #0x772f000
0x06A99400: bb6400d0  adrp x27, #0x772f000
0x06A99404: b76400d0  adrp x23, #0x772f000
0x06A99408: ba6400d0  adrp x26, #0x772f000
0x06A9940C: b86400d0  adrp x24, #0x772f000
0x06A99410: d96400b0  adrp x25, #0x7732000
0x06A99414: 9c2b47f9  ldr x28, [x28, #0xe50]
0x06A99418: a8c36039  ldrb w8, [x29, #0x830]
0x06A9941C: 7b3747f9  ldr x27, [x27, #0xe68]
0x06A99420: f72647f9  ldr x23, [x23, #0xe48]
0x06A99424: 5a5347f9  ldr x26, [x26, #0xea0]
0x06A99428: 184f47f9  ldr x24, [x24, #0xe98]
0x06A9942C: 39f742f9  ldr x25, [x25, #0x5e8]
0x06A99430: f30303aa  mov x19, x3
0x06A99434: f40302aa  mov x20, x2
0x06A99438: f60301aa  mov x22, x1
0x06A9943C: f50300aa  mov x21, x0
0x06A99440: 88040037  tbnz w8, #0, #0x6a994d0
0x06A99444: a06400d0  adrp x0, #0x772f000
0x06A99448: 002447f9  ldr x0, [x0, #0xe48]
0x06A9944C: 739d1b97  bl #0x3180a18
0x06A99450: a06400d0  adrp x0, #0x772f000
0x06A99454: 002847f9  ldr x0, [x0, #0xe50]
0x06A99458: 709d1b97  bl #0x3180a18
0x06A9945C: a06400d0  adrp x0, #0x772f000
0x06A99460: 003047f9  ldr x0, [x0, #0xe60]
0x06A99464: 6d9d1b97  bl #0x3180a18
0x06A99468: 40610090  adrp x0, #0x76c1000
0x06A9946C: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A99470: 6a9d1b97  bl #0x3180a18
0x06A99474: a06400d0  adrp x0, #0x772f000
0x06A99478: 003447f9  ldr x0, [x0, #0xe68]
0x06A9947C: 679d1b97  bl #0x3180a18
0x06A99480: a06400d0  adrp x0, #0x772f000
0x06A99484: 003847f9  ldr x0, [x0, #0xe70]
0x06A99488: 649d1b97  bl #0x3180a18
0x06A9948C: 40610090  adrp x0, #0x76c1000
0x06A99490: 002047f9  ldr x0, [x0, #0xe40]
0x06A99494: 619d1b97  bl #0x3180a18
0x06A99498: a06400d0  adrp x0, #0x772f000
0x06A9949C: 004c47f9  ldr x0, [x0, #0xe98]
0x06A994A0: 5e9d1b97  bl #0x3180a18
0x06A994A4: a06400d0  adrp x0, #0x772f000
0x06A994A8: 005047f9  ldr x0, [x0, #0xea0]
0x06A994AC: 5b9d1b97  bl #0x3180a18
0x06A994B0: c06400b0  adrp x0, #0x7732000
0x06A994B4: 00f842f9  ldr x0, [x0, #0x5f0]
0x06A994B8: 589d1b97  bl #0x3180a18
0x06A994BC: c06400b0  adrp x0, #0x7732000
0x06A994C0: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A994C4: 559d1b97  bl #0x3180a18
0x06A994C8: 28008052  movz w8, #0x1
0x06A994CC: a8c32039  strb w8, [x29, #0x830]
0x06A994D0: 00e4006f  movi v0.2d, #0000000000000000
0x06A994D4: e00301ad  stp q0, q0, [sp, #0x20]
0x06A994D8: c10240ad  ldp q1, q0, [x22]
0x06A994DC: 800340f9  ldr x0, [x28]
0x06A994E0: e10300ad  stp q1, q0, [sp]
0x06A994E4: e2014697  bl #0x3c19c6c
0x06A994E8: 680340f9  ldr x8, [x27]
0x06A994EC: f60300aa  mov x22, x0
0x06A994F0: e00308aa  mov x0, x8
0x06A994F4: eb9d1b97  bl #0x3180ca0
0x06A994F8: e20240f9  ldr x2, [x23]
0x06A994FC: e1031faa  mov x1, xzr
0x06A99500: e3031faa  mov x3, xzr
0x06A99504: f70300aa  mov x23, x0
0x06A99508: 00f2d197  bl #0x5f15d08
0x06A9950C: e00740ad  ldp q0, q1, [sp]
0x06A99510: 430340f9  ldr x3, [x26]
0x06A99514: e8830091  add x8, sp, #0x20
0x06A99518: e0030191  add x0, sp, #0x40
0x06A9951C: e10316aa  mov x1, x22
0x06A99520: e20317aa  mov x2, x23
0x06A99524: e00702ad  stp q0, q1, [sp, #0x40]
0x06A99528: 4f2d4b97  bl #0x3d64a64
0x06A9952C: 010340f9  ldr x1, [x24]
0x06A99530: e0830091  add x0, sp, #0x20
0x06A99534: a5b16397  bl #0x4385bc8
0x06A99538: 280340f9  ldr x8, [x25]
0x06A9953C: f60300aa  mov x22, x0
0x06A99540: 09e140b9  ldr w9, [x8, #0xe0]
0x06A99544: 89000035  cbnz w9, #0x6a99554
0x06A99548: e00308aa  mov x0, x8
0x06A9954C: 909d1b97  bl #0x3180b8c
0x06A99550: 280340f9  ldr x8, [x25]
0x06A99554: 095d40f9  ldr x9, [x8, #0xb8]
0x06A99558: bb6400d0  adrp x27, #0x772f000
0x06A9955C: 5a610090  adrp x26, #0x76c1000
0x06A99560: 370540f9  ldr x23, [x9, #8]
0x06A99564: 7b3347f9  ldr x27, [x27, #0xe60]
0x06A99568: 5a7f46f9  ldr x26, [x26, #0xcf8]
0x06A9956C: 170300b5  cbnz x23, #0x6a995cc
0x06A99570: 09e140b9  ldr w9, [x8, #0xe0]
0x06A99574: 89000035  cbnz w9, #0x6a99584
0x06A99578: e00308aa  mov x0, x8
0x06A9957C: 849d1b97  bl #0x3180b8c
0x06A99580: 280340f9  ldr x8, [x25]
0x06A99584: a96400d0  adrp x9, #0x772f000
0x06A99588: 085d40f9  ldr x8, [x8, #0xb8]
0x06A9958C: 293947f9  ldr x9, [x9, #0xe70]
0x06A99590: 180140f9  ldr x24, [x8]
0x06A99594: 200140f9  ldr x0, [x9]
0x06A99598: c29d1b97  bl #0x3180ca0
0x06A9959C: c86400b0  adrp x8, #0x7732000
0x06A995A0: 08f942f9  ldr x8, [x8, #0x5f0]
0x06A995A4: e10318aa  mov x1, x24
0x06A995A8: e3031faa  mov x3, xzr
0x06A995AC: f70300aa  mov x23, x0
0x06A995B0: 020140f9  ldr x2, [x8]
0x06A995B4: 46d29e97  bl #0x524decc
0x06A995B8: 280340f9  ldr x8, [x25]
0x06A995BC: e10317aa  mov x1, x23
0x06A995C0: 005d40f9  ldr x0, [x8, #0xb8]
0x06A995C4: 178c00f8  str x23, [x0, #8]!
0x06A995C8: ff9c1b97  bl #0x31809c4
0x06A995CC: 620340f9  ldr x2, [x27]
0x06A995D0: e00316aa  mov x0, x22
0x06A995D4: e10317aa  mov x1, x23
0x06A995D8: adcf4697  bl #0x3c4d48c
0x06A995DC: 410340f9  ldr x1, [x26]
0x06A995E0: 001a4797  bl #0x3c5fde0
0x06A995E4: f50400b4  cbz x21, #0x6a99680
0x06A995E8: 4a610090  adrp x10, #0x76c1000
0x06A995EC: a80240f9  ldr x8, [x21]
0x06A995F0: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A995F4: f60300aa  mov x22, x0
0x06A995F8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A995FC: 410140f9  ldr x1, [x10]
0x06A99600: 290100b4  cbz x9, #0x6a99624
0x06A99604: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A99608: 4a210091  add x10, x10, #8
0x06A9960C: 4b815ff8  ldur x11, [x10, #-8]
0x06A99610: 7f0101eb  cmp x11, x1
0x06A99614: 00010054  b.eq #0x6a99634
0x06A99618: 290500f1  subs x9, x9, #1
0x06A9961C: 4a410091  add x10, x10, #0x10
0x06A99620: 61ffff54  b.ne #0x6a9960c
0x06A99624: 42008052  movz w2, #0x2
0x06A99628: e00315aa  mov x0, x21
0x06A9962C: 39f51a97  bl #0x3156b10
0x06A99630: 05000014  b #0x6a99644
0x06A99634: 490140b9  ldr w9, [x10]
0x06A99638: 29090011  add w9, w9, #2
0x06A9963C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A99640: 00e10491  add x0, x8, #0x138
0x06A99644: 081040a9  ldp x8, x4, [x0]
0x06A99648: e00315aa  mov x0, x21
0x06A9964C: e10316aa  mov x1, x22
0x06A99650: e203142a  mov w2, w20
0x06A99654: e30313aa  mov x3, x19
0x06A99658: 00013fd6  blr x8
0x06A9965C: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A99660: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A99664: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A99668: fa6748a9  ldp x26, x25, [sp, #0x80]
0x06A9966C: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x06A99670: fd7b46a9  ldp x29, x30, [sp, #0x60]
0x06A99674: 00000012  and w0, w0, #1
0x06A99678: ff030391  add sp, sp, #0xc0
0x06A9967C: c0035fd6  ret
0x06A99680: 8b9d1b97  bl #0x3180cac

; RVA 0x6A99684 | public static bool TryGetRandomEmptyPositionIncludingDeadPosition(IMergeBoardLayout layout, TickContext context, int deadPosition, out int emptyPosition) { }
; bytes=784 sha256=3503c582e6432fddb948720680c71bb71608579c1e4a6c7a0a3e5126db663f56 status=arm64_complete_bound indexed_start=True
0x06A99684: ff0303d1  sub sp, sp, #0xc0
0x06A99688: fd7b06a9  stp x29, x30, [sp, #0x60]
0x06A9968C: fc6f07a9  stp x28, x27, [sp, #0x70]
0x06A99690: fa6708a9  stp x26, x25, [sp, #0x80]
0x06A99694: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A99698: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A9969C: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A996A0: 9d9400b0  adrp x29, #0x7d2a000
0x06A996A4: bc6400d0  adrp x28, #0x772f000
0x06A996A8: bb6400d0  adrp x27, #0x772f000
0x06A996AC: b76400d0  adrp x23, #0x772f000
0x06A996B0: ba6400d0  adrp x26, #0x772f000
0x06A996B4: b86400d0  adrp x24, #0x772f000
0x06A996B8: d96400b0  adrp x25, #0x7732000
0x06A996BC: 9c2b47f9  ldr x28, [x28, #0xe50]
0x06A996C0: a8c76039  ldrb w8, [x29, #0x831]
0x06A996C4: 7b3747f9  ldr x27, [x27, #0xe68]
0x06A996C8: f72647f9  ldr x23, [x23, #0xe48]
0x06A996CC: 5a5347f9  ldr x26, [x26, #0xea0]
0x06A996D0: 184f47f9  ldr x24, [x24, #0xe98]
0x06A996D4: 39f742f9  ldr x25, [x25, #0x5e8]
0x06A996D8: f30303aa  mov x19, x3
0x06A996DC: f503022a  mov w21, w2
0x06A996E0: f60301aa  mov x22, x1
0x06A996E4: f40300aa  mov x20, x0
0x06A996E8: e8040037  tbnz w8, #0, #0x6a99784
0x06A996EC: a06400d0  adrp x0, #0x772f000
0x06A996F0: 002447f9  ldr x0, [x0, #0xe48]
0x06A996F4: c99c1b97  bl #0x3180a18
0x06A996F8: a06400d0  adrp x0, #0x772f000
0x06A996FC: 002847f9  ldr x0, [x0, #0xe50]
0x06A99700: c69c1b97  bl #0x3180a18
0x06A99704: a06400d0  adrp x0, #0x772f000
0x06A99708: 003047f9  ldr x0, [x0, #0xe60]
0x06A9970C: c39c1b97  bl #0x3180a18
0x06A99710: 40610090  adrp x0, #0x76c1000
0x06A99714: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A99718: c09c1b97  bl #0x3180a18
0x06A9971C: a06400d0  adrp x0, #0x772f000
0x06A99720: 003447f9  ldr x0, [x0, #0xe68]
0x06A99724: bd9c1b97  bl #0x3180a18
0x06A99728: a06400d0  adrp x0, #0x772f000
0x06A9972C: 003847f9  ldr x0, [x0, #0xe70]
0x06A99730: ba9c1b97  bl #0x3180a18
0x06A99734: 40610090  adrp x0, #0x76c1000
0x06A99738: 002047f9  ldr x0, [x0, #0xe40]
0x06A9973C: b79c1b97  bl #0x3180a18
0x06A99740: 005e0090  adrp x0, #0x7659000
0x06A99744: 006445f9  ldr x0, [x0, #0xac8]
0x06A99748: b49c1b97  bl #0x3180a18
0x06A9974C: a06400d0  adrp x0, #0x772f000
0x06A99750: 004c47f9  ldr x0, [x0, #0xe98]
0x06A99754: b19c1b97  bl #0x3180a18
0x06A99758: a06400d0  adrp x0, #0x772f000
0x06A9975C: 005047f9  ldr x0, [x0, #0xea0]
0x06A99760: ae9c1b97  bl #0x3180a18
0x06A99764: c06400b0  adrp x0, #0x7732000
0x06A99768: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06A9976C: ab9c1b97  bl #0x3180a18
0x06A99770: c06400b0  adrp x0, #0x7732000
0x06A99774: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A99778: a89c1b97  bl #0x3180a18
0x06A9977C: 28008052  movz w8, #0x1
0x06A99780: a8c72039  strb w8, [x29, #0x831]
0x06A99784: 00e4006f  movi v0.2d, #0000000000000000
0x06A99788: e00301ad  stp q0, q0, [sp, #0x20]
0x06A9978C: c10240ad  ldp q1, q0, [x22]
0x06A99790: 800340f9  ldr x0, [x28]
0x06A99794: e10300ad  stp q1, q0, [sp]
0x06A99798: 35014697  bl #0x3c19c6c
0x06A9979C: 680340f9  ldr x8, [x27]
0x06A997A0: f60300aa  mov x22, x0
0x06A997A4: e00308aa  mov x0, x8
0x06A997A8: 3e9d1b97  bl #0x3180ca0
0x06A997AC: e20240f9  ldr x2, [x23]
0x06A997B0: e1031faa  mov x1, xzr
0x06A997B4: e3031faa  mov x3, xzr
0x06A997B8: f70300aa  mov x23, x0
0x06A997BC: 53f1d197  bl #0x5f15d08
0x06A997C0: e00740ad  ldp q0, q1, [sp]
0x06A997C4: 430340f9  ldr x3, [x26]
0x06A997C8: e8830091  add x8, sp, #0x20
0x06A997CC: e0030191  add x0, sp, #0x40
0x06A997D0: e10316aa  mov x1, x22
0x06A997D4: e20317aa  mov x2, x23
0x06A997D8: e00702ad  stp q0, q1, [sp, #0x40]
0x06A997DC: a22c4b97  bl #0x3d64a64
0x06A997E0: 010340f9  ldr x1, [x24]
0x06A997E4: e0830091  add x0, sp, #0x20
0x06A997E8: f8b06397  bl #0x4385bc8
0x06A997EC: 280340f9  ldr x8, [x25]
0x06A997F0: f60300aa  mov x22, x0
0x06A997F4: 09e140b9  ldr w9, [x8, #0xe0]
0x06A997F8: 89000035  cbnz w9, #0x6a99808
0x06A997FC: e00308aa  mov x0, x8
0x06A99800: e39c1b97  bl #0x3180b8c
0x06A99804: 280340f9  ldr x8, [x25]
0x06A99808: 095d40f9  ldr x9, [x8, #0xb8]
0x06A9980C: bb6400d0  adrp x27, #0x772f000
0x06A99810: 5a610090  adrp x26, #0x76c1000
0x06A99814: 370940f9  ldr x23, [x9, #0x10]
0x06A99818: 7b3347f9  ldr x27, [x27, #0xe60]
0x06A9981C: 5a7f46f9  ldr x26, [x26, #0xcf8]
0x06A99820: 170300b5  cbnz x23, #0x6a99880
0x06A99824: 09e140b9  ldr w9, [x8, #0xe0]
0x06A99828: 89000035  cbnz w9, #0x6a99838
0x06A9982C: e00308aa  mov x0, x8
0x06A99830: d79c1b97  bl #0x3180b8c
0x06A99834: 280340f9  ldr x8, [x25]
0x06A99838: a96400d0  adrp x9, #0x772f000
0x06A9983C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A99840: 293947f9  ldr x9, [x9, #0xe70]
0x06A99844: 180140f9  ldr x24, [x8]
0x06A99848: 200140f9  ldr x0, [x9]
0x06A9984C: 159d1b97  bl #0x3180ca0
0x06A99850: c86400b0  adrp x8, #0x7732000
0x06A99854: 08fd42f9  ldr x8, [x8, #0x5f8]
0x06A99858: e10318aa  mov x1, x24
0x06A9985C: e3031faa  mov x3, xzr
0x06A99860: f70300aa  mov x23, x0
0x06A99864: 020140f9  ldr x2, [x8]
0x06A99868: 99d19e97  bl #0x524decc
0x06A9986C: 280340f9  ldr x8, [x25]
0x06A99870: e10317aa  mov x1, x23
0x06A99874: 005d40f9  ldr x0, [x8, #0xb8]
0x06A99878: 170c01f8  str x23, [x0, #0x10]!
0x06A9987C: 529c1b97  bl #0x31809c4
0x06A99880: 620340f9  ldr x2, [x27]
0x06A99884: e00316aa  mov x0, x22
0x06A99888: e10317aa  mov x1, x23
0x06A9988C: 00cf4697  bl #0x3c4d48c
0x06A99890: 410340f9  ldr x1, [x26]
0x06A99894: 53194797  bl #0x3c5fde0
0x06A99898: c00700b4  cbz x0, #0x6a99990
0x06A9989C: 095e0090  adrp x9, #0x7659000
0x06A998A0: 296545f9  ldr x9, [x9, #0xac8]
0x06A998A4: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06A998A8: 080840f9  ldr x8, [x0, #0x10]
0x06A998AC: f60300aa  mov x22, x0
0x06A998B0: 290140f9  ldr x9, [x9]
0x06A998B4: 4a050011  add w10, w10, #1
0x06A998B8: 0a1c00b9  str w10, [x0, #0x1c]
0x06A998BC: a80600b4  cbz x8, #0x6a99990
0x06A998C0: ca1a80b9  ldrsw x10, [x22, #0x18]
0x06A998C4: 0b1940b9  ldr w11, [x8, #0x18]
0x06A998C8: 5f010b6b  cmp w10, w11
0x06A998CC: c2000054  b.hs #0x6a998e4
0x06A998D0: 49050011  add w9, w10, #1
0x06A998D4: 08090a8b  add x8, x8, x10, lsl #2
0x06A998D8: c91a00b9  str w9, [x22, #0x18]
0x06A998DC: 152100b9  str w21, [x8, #0x20]
0x06A998E0: 07000014  b #0x6a998fc
0x06A998E4: 281140f9  ldr x8, [x9, #0x20]
0x06A998E8: e00316aa  mov x0, x22
0x06A998EC: e103152a  mov w1, w21
0x06A998F0: 086140f9  ldr x8, [x8, #0xc0]
0x06A998F4: 023940f9  ldr x2, [x8, #0x70]
0x06A998F8: e8005697  bl #0x4019c98
0x06A998FC: b40400b4  cbz x20, #0x6a99990
0x06A99900: 4a610090  adrp x10, #0x76c1000
0x06A99904: 880240f9  ldr x8, [x20]
0x06A99908: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A9990C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A99910: 410140f9  ldr x1, [x10]
0x06A99914: 290100b4  cbz x9, #0x6a99938
0x06A99918: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9991C: 4a210091  add x10, x10, #8
0x06A99920: 4b815ff8  ldur x11, [x10, #-8]
0x06A99924: 7f0101eb  cmp x11, x1
0x06A99928: 00010054  b.eq #0x6a99948
0x06A9992C: 290500f1  subs x9, x9, #1
0x06A99930: 4a410091  add x10, x10, #0x10
0x06A99934: 61ffff54  b.ne #0x6a99920
0x06A99938: 22008052  movz w2, #0x1
0x06A9993C: e00314aa  mov x0, x20
0x06A99940: 74f41a97  bl #0x3156b10
0x06A99944: 05000014  b #0x6a99958
0x06A99948: 490140b9  ldr w9, [x10]
0x06A9994C: 29050011  add w9, w9, #1
0x06A99950: 08d1298b  add x8, x8, w9, sxtw #4
0x06A99954: 00e10491  add x0, x8, #0x138
0x06A99958: 080c40a9  ldp x8, x3, [x0]
0x06A9995C: e00314aa  mov x0, x20
0x06A99960: e10316aa  mov x1, x22
0x06A99964: e20313aa  mov x2, x19
0x06A99968: 00013fd6  blr x8
0x06A9996C: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A99970: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A99974: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A99978: fa6748a9  ldp x26, x25, [sp, #0x80]
0x06A9997C: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x06A99980: fd7b46a9  ldp x29, x30, [sp, #0x60]
0x06A99984: 00000012  and w0, w0, #1
0x06A99988: ff030391  add sp, sp, #0xc0
0x06A9998C: c0035fd6  ret
0x06A99990: c79c1b97  bl #0x3180cac

; RVA 0x6A99994 | public static bool TryGetRandomEmptyPositionFromContext(IMergeBoardLayout layout, TickContext context, out int emptyPosition) { }
; bytes=672 sha256=98cdd7f56d450bb0591448b686a842fcbe9ce51eeae0688f688a691d8f5e20f5 status=arm64_complete_bound indexed_start=True
0x06A99994: ff0303d1  sub sp, sp, #0xc0
0x06A99998: fe3300f9  str x30, [sp, #0x60]
0x06A9999C: fc6f07a9  stp x28, x27, [sp, #0x70]
0x06A999A0: fa6708a9  stp x26, x25, [sp, #0x80]
0x06A999A4: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A999A8: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A999AC: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A999B0: 9c9400b0  adrp x28, #0x7d2a000
0x06A999B4: bb6400d0  adrp x27, #0x772f000
0x06A999B8: ba6400d0  adrp x26, #0x772f000
0x06A999BC: b66400d0  adrp x22, #0x772f000
0x06A999C0: b96400d0  adrp x25, #0x772f000
0x06A999C4: b76400d0  adrp x23, #0x772f000
0x06A999C8: d86400b0  adrp x24, #0x7732000
0x06A999CC: 7b2b47f9  ldr x27, [x27, #0xe50]
0x06A999D0: 88cb6039  ldrb w8, [x28, #0x832]
0x06A999D4: 5a3747f9  ldr x26, [x26, #0xe68]
0x06A999D8: d62647f9  ldr x22, [x22, #0xe48]
0x06A999DC: 395347f9  ldr x25, [x25, #0xea0]
0x06A999E0: f74e47f9  ldr x23, [x23, #0xe98]
0x06A999E4: 18f742f9  ldr x24, [x24, #0x5e8]
0x06A999E8: f30302aa  mov x19, x2
0x06A999EC: f50301aa  mov x21, x1
0x06A999F0: f40300aa  mov x20, x0
0x06A999F4: 88040037  tbnz w8, #0, #0x6a99a84
0x06A999F8: a06400d0  adrp x0, #0x772f000
0x06A999FC: 002447f9  ldr x0, [x0, #0xe48]
0x06A99A00: 069c1b97  bl #0x3180a18
0x06A99A04: a06400d0  adrp x0, #0x772f000
0x06A99A08: 002847f9  ldr x0, [x0, #0xe50]
0x06A99A0C: 039c1b97  bl #0x3180a18
0x06A99A10: a06400d0  adrp x0, #0x772f000
0x06A99A14: 003047f9  ldr x0, [x0, #0xe60]
0x06A99A18: 009c1b97  bl #0x3180a18
0x06A99A1C: 40610090  adrp x0, #0x76c1000
0x06A99A20: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A99A24: fd9b1b97  bl #0x3180a18
0x06A99A28: a06400d0  adrp x0, #0x772f000
0x06A99A2C: 003447f9  ldr x0, [x0, #0xe68]
0x06A99A30: fa9b1b97  bl #0x3180a18
0x06A99A34: a06400d0  adrp x0, #0x772f000
0x06A99A38: 003847f9  ldr x0, [x0, #0xe70]
0x06A99A3C: f79b1b97  bl #0x3180a18
0x06A99A40: 40610090  adrp x0, #0x76c1000
0x06A99A44: 002047f9  ldr x0, [x0, #0xe40]
0x06A99A48: f49b1b97  bl #0x3180a18
0x06A99A4C: a06400d0  adrp x0, #0x772f000
0x06A99A50: 004c47f9  ldr x0, [x0, #0xe98]
0x06A99A54: f19b1b97  bl #0x3180a18
0x06A99A58: a06400d0  adrp x0, #0x772f000
0x06A99A5C: 005047f9  ldr x0, [x0, #0xea0]
0x06A99A60: ee9b1b97  bl #0x3180a18
0x06A99A64: c06400b0  adrp x0, #0x7732000
0x06A99A68: 000043f9  ldr x0, [x0, #0x600]
0x06A99A6C: eb9b1b97  bl #0x3180a18
0x06A99A70: c06400b0  adrp x0, #0x7732000
0x06A99A74: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A99A78: e89b1b97  bl #0x3180a18
0x06A99A7C: 28008052  movz w8, #0x1
0x06A99A80: 88cb2039  strb w8, [x28, #0x832]
0x06A99A84: 00e4006f  movi v0.2d, #0000000000000000
0x06A99A88: e00301ad  stp q0, q0, [sp, #0x20]
0x06A99A8C: a10240ad  ldp q1, q0, [x21]
0x06A99A90: 600340f9  ldr x0, [x27]
0x06A99A94: e10300ad  stp q1, q0, [sp]
0x06A99A98: 75004697  bl #0x3c19c6c
0x06A99A9C: 480340f9  ldr x8, [x26]
0x06A99AA0: f50300aa  mov x21, x0
0x06A99AA4: e00308aa  mov x0, x8
0x06A99AA8: 7e9c1b97  bl #0x3180ca0
0x06A99AAC: c20240f9  ldr x2, [x22]
0x06A99AB0: e1031faa  mov x1, xzr
0x06A99AB4: e3031faa  mov x3, xzr
0x06A99AB8: f60300aa  mov x22, x0
0x06A99ABC: 93f0d197  bl #0x5f15d08
0x06A99AC0: e00740ad  ldp q0, q1, [sp]
0x06A99AC4: 230340f9  ldr x3, [x25]
0x06A99AC8: e8830091  add x8, sp, #0x20
0x06A99ACC: e0030191  add x0, sp, #0x40
0x06A99AD0: e10315aa  mov x1, x21
0x06A99AD4: e20316aa  mov x2, x22
0x06A99AD8: e00702ad  stp q0, q1, [sp, #0x40]
0x06A99ADC: e22b4b97  bl #0x3d64a64
0x06A99AE0: e10240f9  ldr x1, [x23]
0x06A99AE4: e0830091  add x0, sp, #0x20
0x06A99AE8: 38b06397  bl #0x4385bc8
0x06A99AEC: 080340f9  ldr x8, [x24]
0x06A99AF0: f50300aa  mov x21, x0
0x06A99AF4: 09e140b9  ldr w9, [x8, #0xe0]
0x06A99AF8: 89000035  cbnz w9, #0x6a99b08
0x06A99AFC: e00308aa  mov x0, x8
0x06A99B00: 239c1b97  bl #0x3180b8c
0x06A99B04: 080340f9  ldr x8, [x24]
0x06A99B08: 095d40f9  ldr x9, [x8, #0xb8]
0x06A99B0C: ba6400d0  adrp x26, #0x772f000
0x06A99B10: 59610090  adrp x25, #0x76c1000
0x06A99B14: 360d40f9  ldr x22, [x9, #0x18]
0x06A99B18: 5a3347f9  ldr x26, [x26, #0xe60]
0x06A99B1C: 397f46f9  ldr x25, [x25, #0xcf8]
0x06A99B20: 160300b5  cbnz x22, #0x6a99b80
0x06A99B24: 09e140b9  ldr w9, [x8, #0xe0]
0x06A99B28: 89000035  cbnz w9, #0x6a99b38
0x06A99B2C: e00308aa  mov x0, x8
0x06A99B30: 179c1b97  bl #0x3180b8c
0x06A99B34: 080340f9  ldr x8, [x24]
0x06A99B38: a96400d0  adrp x9, #0x772f000
0x06A99B3C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A99B40: 293947f9  ldr x9, [x9, #0xe70]
0x06A99B44: 170140f9  ldr x23, [x8]
0x06A99B48: 200140f9  ldr x0, [x9]
0x06A99B4C: 559c1b97  bl #0x3180ca0
0x06A99B50: c86400b0  adrp x8, #0x7732000
0x06A99B54: 080143f9  ldr x8, [x8, #0x600]
0x06A99B58: e10317aa  mov x1, x23
0x06A99B5C: e3031faa  mov x3, xzr
0x06A99B60: f60300aa  mov x22, x0
0x06A99B64: 020140f9  ldr x2, [x8]
0x06A99B68: d9d09e97  bl #0x524decc
0x06A99B6C: 080340f9  ldr x8, [x24]
0x06A99B70: e10316aa  mov x1, x22
0x06A99B74: 005d40f9  ldr x0, [x8, #0xb8]
0x06A99B78: 168c01f8  str x22, [x0, #0x18]!
0x06A99B7C: 929b1b97  bl #0x31809c4
0x06A99B80: 420340f9  ldr x2, [x26]
0x06A99B84: e00315aa  mov x0, x21
0x06A99B88: e10316aa  mov x1, x22
0x06A99B8C: 40ce4697  bl #0x3c4d48c
0x06A99B90: 210340f9  ldr x1, [x25]
0x06A99B94: 93184797  bl #0x3c5fde0
0x06A99B98: d40400b4  cbz x20, #0x6a99c30
0x06A99B9C: 4a610090  adrp x10, #0x76c1000
0x06A99BA0: 880240f9  ldr x8, [x20]
0x06A99BA4: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A99BA8: f50300aa  mov x21, x0
0x06A99BAC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A99BB0: 410140f9  ldr x1, [x10]
0x06A99BB4: 290100b4  cbz x9, #0x6a99bd8
0x06A99BB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A99BBC: 4a210091  add x10, x10, #8
0x06A99BC0: 4b815ff8  ldur x11, [x10, #-8]
0x06A99BC4: 7f0101eb  cmp x11, x1
0x06A99BC8: 00010054  b.eq #0x6a99be8
0x06A99BCC: 290500f1  subs x9, x9, #1
0x06A99BD0: 4a410091  add x10, x10, #0x10
0x06A99BD4: 61ffff54  b.ne #0x6a99bc0
0x06A99BD8: 22008052  movz w2, #0x1
0x06A99BDC: e00314aa  mov x0, x20
0x06A99BE0: ccf31a97  bl #0x3156b10
0x06A99BE4: 05000014  b #0x6a99bf8
0x06A99BE8: 490140b9  ldr w9, [x10]
0x06A99BEC: 29050011  add w9, w9, #1
0x06A99BF0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A99BF4: 00e10491  add x0, x8, #0x138
0x06A99BF8: 080c40a9  ldp x8, x3, [x0]
0x06A99BFC: e00314aa  mov x0, x20
0x06A99C00: e10315aa  mov x1, x21
0x06A99C04: e20313aa  mov x2, x19
0x06A99C08: 00013fd6  blr x8
0x06A99C0C: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A99C10: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A99C14: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A99C18: fa6748a9  ldp x26, x25, [sp, #0x80]
0x06A99C1C: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x06A99C20: fe3340f9  ldr x30, [sp, #0x60]
0x06A99C24: 00000012  and w0, w0, #1
0x06A99C28: ff030391  add sp, sp, #0xc0
0x06A99C2C: c0035fd6  ret
0x06A99C30: 1f9c1b97  bl #0x3180cac


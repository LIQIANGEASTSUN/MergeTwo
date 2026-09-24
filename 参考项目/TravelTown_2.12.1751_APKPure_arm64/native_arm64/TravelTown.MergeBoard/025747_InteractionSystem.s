; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25747 Merger.MergeBoard.Systems.InteractionSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6B1F8 | public void Tick(TickContext context) { }
; bytes=196 sha256=4664274fe30409e4861ad89c3a04e185b99338f0fc1dd93c8cc8be33d46ae51f status=arm64_complete_bound indexed_start=True
0x06A6B1F8: ffc301d1  sub sp, sp, #0x70
0x06A6B1FC: fe5705a9  stp x30, x21, [sp, #0x50]
0x06A6B200: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A6B204: f59500f0  adrp x21, #0x7d2a000
0x06A6B208: a8125b39  ldrb w8, [x21, #0x6c4]
0x06A6B20C: f40301aa  mov x20, x1
0x06A6B210: f30300aa  mov x19, x0
0x06A6B214: 28010037  tbnz w8, #0, #0x6a6b238
0x06A6B218: 206600b0  adrp x0, #0x7730000
0x06A6B21C: 009046f9  ldr x0, [x0, #0xd20]
0x06A6B220: fe551c97  bl #0x3180a18
0x06A6B224: 206600b0  adrp x0, #0x7730000
0x06A6B228: 008847f9  ldr x0, [x0, #0xf10]
0x06A6B22C: fb551c97  bl #0x3180a18
0x06A6B230: 28008052  movz w8, #0x1
0x06A6B234: a8121b39  strb w8, [x21, #0x6c4]
0x06A6B238: ff2700f9  str xzr, [sp, #0x48]
0x06A6B23C: 800640f9  ldr x0, [x20, #8]
0x06A6B240: c00300b4  cbz x0, #0x6a6b2b8
0x06A6B244: 286600b0  adrp x8, #0x7730000
0x06A6B248: 088947f9  ldr x8, [x8, #0xf10]
0x06A6B24C: e1230191  add x1, sp, #0x48
0x06A6B250: 020140f9  ldr x2, [x8]
0x06A6B254: 73674d97  bl #0x3dc5020
0x06A6B258: 00010036  tbz w0, #0, #0x6a6b278
0x06A6B25C: 810240ad  ldp q1, q0, [x20]
0x06A6B260: e22740f9  ldr x2, [sp, #0x48]
0x06A6B264: e1830091  add x1, sp, #0x20
0x06A6B268: e00313aa  mov x0, x19
0x06A6B26C: e10301ad  stp q1, q0, [sp, #0x20]
0x06A6B270: 13000094  bl #0x6a6b2bc
0x06A6B274: 0d000014  b #0x6a6b2a8
0x06A6B278: 800640f9  ldr x0, [x20, #8]
0x06A6B27C: e00100b4  cbz x0, #0x6a6b2b8
0x06A6B280: 286600b0  adrp x8, #0x7730000
0x06A6B284: 089146f9  ldr x8, [x8, #0xd20]
0x06A6B288: 010140f9  ldr x1, [x8]
0x06A6B28C: 4c654d97  bl #0x3dc47bc
0x06A6B290: c0000036  tbz w0, #0, #0x6a6b2a8
0x06A6B294: 810240ad  ldp q1, q0, [x20]
0x06A6B298: e1030091  mov x1, sp
0x06A6B29C: e00313aa  mov x0, x19
0x06A6B2A0: e10300ad  stp q1, q0, [sp]
0x06A6B2A4: f8000094  bl #0x6a6b684
0x06A6B2A8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A6B2AC: fe5745a9  ldp x30, x21, [sp, #0x50]
0x06A6B2B0: ffc30191  add sp, sp, #0x70
0x06A6B2B4: c0035fd6  ret
0x06A6B2B8: 7d561c97  bl #0x3180cac

; RVA 0x6A6B2BC | private void HandleInteractByTap(TickContext context, TapAction tap) { }
; bytes=968 sha256=fb4344489b817b1ac08218d468da2b64c281d9c6bfa59a7e3f2a3533acd42090 status=arm64_complete_bound indexed_start=True
0x06A6B2BC: ff8306d1  sub sp, sp, #0x1a0
0x06A6B2C0: fd7b14a9  stp x29, x30, [sp, #0x140]
0x06A6B2C4: fc6f15a9  stp x28, x27, [sp, #0x150]
0x06A6B2C8: fa6716a9  stp x26, x25, [sp, #0x160]
0x06A6B2CC: f85f17a9  stp x24, x23, [sp, #0x170]
0x06A6B2D0: f65718a9  stp x22, x21, [sp, #0x180]
0x06A6B2D4: f44f19a9  stp x20, x19, [sp, #0x190]
0x06A6B2D8: f79500f0  adrp x23, #0x7d2a000
0x06A6B2DC: 366600b0  adrp x22, #0x7730000
0x06A6B2E0: e8165b39  ldrb w8, [x23, #0x6c5]
0x06A6B2E4: d68e47f9  ldr x22, [x22, #0xf18]
0x06A6B2E8: f50302aa  mov x21, x2
0x06A6B2EC: f30301aa  mov x19, x1
0x06A6B2F0: f40300aa  mov x20, x0
0x06A6B2F4: 08060037  tbnz w8, #0, #0x6a6b3b4
0x06A6B2F8: 206600b0  adrp x0, #0x7730000
0x06A6B2FC: 009047f9  ldr x0, [x0, #0xf20]
0x06A6B300: c6551c97  bl #0x3180a18
0x06A6B304: c06500f0  adrp x0, #0x7726000
0x06A6B308: 003444f9  ldr x0, [x0, #0x868]
0x06A6B30C: c3551c97  bl #0x3180a18
0x06A6B310: 206600b0  adrp x0, #0x7730000
0x06A6B314: 009447f9  ldr x0, [x0, #0xf28]
0x06A6B318: c0551c97  bl #0x3180a18
0x06A6B31C: 206600b0  adrp x0, #0x7730000
0x06A6B320: 009847f9  ldr x0, [x0, #0xf30]
0x06A6B324: bd551c97  bl #0x3180a18
0x06A6B328: 20630090  adrp x0, #0x76cf000
0x06A6B32C: 008040f9  ldr x0, [x0, #0x100]
0x06A6B330: ba551c97  bl #0x3180a18
0x06A6B334: 20660090  adrp x0, #0x772f000
0x06A6B338: 003447f9  ldr x0, [x0, #0xe68]
0x06A6B33C: b7551c97  bl #0x3180a18
0x06A6B340: 206600b0  adrp x0, #0x7730000
0x06A6B344: 009c47f9  ldr x0, [x0, #0xf38]
0x06A6B348: b4551c97  bl #0x3180a18
0x06A6B34C: 206600b0  adrp x0, #0x7730000
0x06A6B350: 006847f9  ldr x0, [x0, #0xed0]
0x06A6B354: b1551c97  bl #0x3180a18
0x06A6B358: 206600b0  adrp x0, #0x7730000
0x06A6B35C: 00a047f9  ldr x0, [x0, #0xf40]
0x06A6B360: ae551c97  bl #0x3180a18
0x06A6B364: 206600b0  adrp x0, #0x7730000
0x06A6B368: 00a447f9  ldr x0, [x0, #0xf48]
0x06A6B36C: ab551c97  bl #0x3180a18
0x06A6B370: 206600b0  adrp x0, #0x7730000
0x06A6B374: 00a847f9  ldr x0, [x0, #0xf50]
0x06A6B378: a8551c97  bl #0x3180a18
0x06A6B37C: 206600b0  adrp x0, #0x7730000
0x06A6B380: 00ac47f9  ldr x0, [x0, #0xf58]
0x06A6B384: a5551c97  bl #0x3180a18
0x06A6B388: 206600b0  adrp x0, #0x7730000
0x06A6B38C: 00b047f9  ldr x0, [x0, #0xf60]
0x06A6B390: a2551c97  bl #0x3180a18
0x06A6B394: 206600b0  adrp x0, #0x7730000
0x06A6B398: 00b447f9  ldr x0, [x0, #0xf68]
0x06A6B39C: 9f551c97  bl #0x3180a18
0x06A6B3A0: 206600b0  adrp x0, #0x7730000
0x06A6B3A4: 008c47f9  ldr x0, [x0, #0xf18]
0x06A6B3A8: 9c551c97  bl #0x3180a18
0x06A6B3AC: 28008052  movz w8, #0x1
0x06A6B3B0: e8161b39  strb w8, [x23, #0x6c5]
0x06A6B3B4: c00240f9  ldr x0, [x22]
0x06A6B3B8: 00e4006f  movi v0.2d, #0000000000000000
0x06A6B3BC: f40700f9  str x20, [sp, #8]
0x06A6B3C0: ff7b00f9  str xzr, [sp, #0xf0]
0x06A6B3C4: e00308ad  stp q0, q0, [sp, #0x100]
0x06A6B3C8: e08306ad  stp q0, q0, [sp, #0xd0]
0x06A6B3CC: e033803d  str q0, [sp, #0xc0]
0x06A6B3D0: ff7f0ba9  stp xzr, xzr, [sp, #0xb0]
0x06A6B3D4: e08304ad  stp q0, q0, [sp, #0x90]
0x06A6B3D8: 32561c97  bl #0x3180ca0
0x06A6B3DC: e1031faa  mov x1, xzr
0x06A6B3E0: f60300aa  mov x22, x0
0x06A6B3E4: 86bcb197  bl #0x56da5fc
0x06A6B3E8: d61400b4  cbz x22, #0x6a6b680
0x06A6B3EC: 376600b0  adrp x23, #0x7730000
0x06A6B3F0: 3a660090  adrp x26, #0x772f000
0x06A6B3F4: 3b6600b0  adrp x27, #0x7730000
0x06A6B3F8: 3c6600b0  adrp x28, #0x7730000
0x06A6B3FC: 3d6600b0  adrp x29, #0x7730000
0x06A6B400: 346600b0  adrp x20, #0x7730000
0x06A6B404: 396600b0  adrp x25, #0x7730000
0x06A6B408: 386600b0  adrp x24, #0x7730000
0x06A6B40C: f79a47f9  ldr x23, [x23, #0xf30]
0x06A6B410: 5a3747f9  ldr x26, [x26, #0xe68]
0x06A6B414: 7b9747f9  ldr x27, [x27, #0xf28]
0x06A6B418: 9cab47f9  ldr x28, [x28, #0xf50]
0x06A6B41C: bd9f47f9  ldr x29, [x29, #0xf38]
0x06A6B420: 94b647f9  ldr x20, [x20, #0xf68]
0x06A6B424: 39a747f9  ldr x25, [x25, #0xf48]
0x06A6B428: 18a347f9  ldr x24, [x24, #0xf40]
0x06A6B42C: e00316aa  mov x0, x22
0x06A6B430: 150c01f8  str x21, [x0, #0x10]!
0x06A6B434: e10315aa  mov x1, x21
0x06A6B438: 63551c97  bl #0x31809c4
0x06A6B43C: 610240ad  ldp q1, q0, [x19]
0x06A6B440: e00240f9  ldr x0, [x23]
0x06A6B444: e18303ad  stp q1, q0, [sp, #0x70]
0x06A6B448: 5abb4697  bl #0x3c1a1b0
0x06A6B44C: 480340f9  ldr x8, [x26]
0x06A6B450: f50300aa  mov x21, x0
0x06A6B454: e00308aa  mov x0, x8
0x06A6B458: 12561c97  bl #0x3180ca0
0x06A6B45C: 620340f9  ldr x2, [x27]
0x06A6B460: e1031faa  mov x1, xzr
0x06A6B464: e3031faa  mov x3, xzr
0x06A6B468: f70300aa  mov x23, x0
0x06A6B46C: 27aad297  bl #0x5f15d08
0x06A6B470: e08743ad  ldp q0, q1, [sp, #0x70]
0x06A6B474: 830340f9  ldr x3, [x28]
0x06A6B478: e8430291  add x8, sp, #0x90
0x06A6B47C: e0830491  add x0, sp, #0x120
0x06A6B480: e10315aa  mov x1, x21
0x06A6B484: e20317aa  mov x2, x23
0x06A6B488: e00709ad  stp q0, q1, [sp, #0x120]
0x06A6B48C: cee74b97  bl #0x3d653c4
0x06A6B490: a00340f9  ldr x0, [x29]
0x06A6B494: 03561c97  bl #0x3180ca0
0x06A6B498: 820240f9  ldr x2, [x20]
0x06A6B49C: e10316aa  mov x1, x22
0x06A6B4A0: e3031faa  mov x3, xzr
0x06A6B4A4: f50300aa  mov x21, x0
0x06A6B4A8: d6939f97  bl #0x5250400
0x06A6B4AC: 220340f9  ldr x2, [x25]
0x06A6B4B0: e8030491  add x8, sp, #0x100
0x06A6B4B4: e0430291  add x0, sp, #0x90
0x06A6B4B8: e10315aa  mov x1, x21
0x06A6B4BC: 41816497  bl #0x438b9c0
0x06A6B4C0: 020340f9  ldr x2, [x24]
0x06A6B4C4: e0030491  add x0, sp, #0x100
0x06A6B4C8: e1030391  add x1, sp, #0xc0
0x06A6B4CC: aa816497  bl #0x438bb74
0x06A6B4D0: 800c0036  tbz w0, #0, #0x6a6b660
0x06A6B4D4: 610240ad  ldp q1, q0, [x19]
0x06A6B4D8: e26340f9  ldr x2, [sp, #0xc0]
0x06A6B4DC: e1430191  add x1, sp, #0x50
0x06A6B4E0: e18302ad  stp q1, q0, [sp, #0x50]
0x06A6B4E4: 32010094  bl #0x6a6b9ac
0x06A6B4E8: c00b0036  tbz w0, #0, #0x6a6b660
0x06A6B4EC: f40740f9  ldr x20, [sp, #8]
0x06A6B4F0: 950a40f9  ldr x21, [x20, #0x10]
0x06A6B4F4: 750c00b4  cbz x21, #0x6a6b680
0x06A6B4F8: 2a6600b0  adrp x10, #0x7730000
0x06A6B4FC: a80240f9  ldr x8, [x21]
0x06A6B500: f66340f9  ldr x22, [sp, #0xc0]
0x06A6B504: 4a6947f9  ldr x10, [x10, #0xed0]
0x06A6B508: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6B50C: 410140f9  ldr x1, [x10]
0x06A6B510: 290100b4  cbz x9, #0x6a6b534
0x06A6B514: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6B518: 4a210091  add x10, x10, #8
0x06A6B51C: 4b815ff8  ldur x11, [x10, #-8]
0x06A6B520: 7f0101eb  cmp x11, x1
0x06A6B524: 00010054  b.eq #0x6a6b544
0x06A6B528: 290500f1  subs x9, x9, #1
0x06A6B52C: 4a410091  add x10, x10, #0x10
0x06A6B530: 61ffff54  b.ne #0x6a6b51c
0x06A6B534: e00315aa  mov x0, x21
0x06A6B538: e2031f2a  mov w2, wzr
0x06A6B53C: 75ad1b97  bl #0x3156b10
0x06A6B540: 04000014  b #0x6a6b550
0x06A6B544: 490180b9  ldrsw x9, [x10]
0x06A6B548: 0811098b  add x8, x8, x9, lsl #4
0x06A6B54C: 00e10491  add x0, x8, #0x138
0x06A6B550: 080840a9  ldp x8, x2, [x0]
0x06A6B554: e00315aa  mov x0, x21
0x06A6B558: e10316aa  mov x1, x22
0x06A6B55C: 00013fd6  blr x8
0x06A6B560: e0010036  tbz w0, #0, #0x6a6b59c
0x06A6B564: e8834339  ldrb w8, [sp, #0xe0]
0x06A6B568: e3031faa  mov x3, xzr
0x06A6B56C: e2031faa  mov x2, xzr
0x06A6B570: ff7f0ba9  stp xzr, xzr, [sp, #0xb0]
0x06A6B574: 48060036  tbz w8, #0, #0x6a6b63c
0x06A6B578: c86500f0  adrp x8, #0x7726000
0x06A6B57C: e07740f9  ldr x0, [sp, #0xe8]
0x06A6B580: 083544f9  ldr x8, [x8, #0x868]
0x06A6B584: 010140f9  ldr x1, [x8]
0x06A6B588: 94f34597  bl #0x3be83d8
0x06A6B58C: 20030036  tbz w0, #0, #0x6a6b5f0
0x06A6B590: e3031faa  mov x3, xzr
0x06A6B594: e2031faa  mov x2, xzr
0x06A6B598: 29000014  b #0x6a6b63c
0x06A6B59C: 286600b0  adrp x8, #0x7730000
0x06A6B5A0: 730a40f9  ldr x19, [x19, #0x10]
0x06A6B5A4: 089147f9  ldr x8, [x8, #0xf20]
0x06A6B5A8: 000140f9  ldr x0, [x8]
0x06A6B5AC: bd551c97  bl #0x3180ca0
0x06A6B5B0: e1031faa  mov x1, xzr
0x06A6B5B4: f40300aa  mov x20, x0
0x06A6B5B8: 36bb0094  bl #0x6a9a290
0x06A6B5BC: 340600b4  cbz x20, #0x6a6b680
0x06A6B5C0: e16340f9  ldr x1, [sp, #0xc0]
0x06A6B5C4: e00314aa  mov x0, x20
0x06A6B5C8: 010c01f8  str x1, [x0, #0x10]!
0x06A6B5CC: fe541c97  bl #0x31809c4
0x06A6B5D0: 930500b4  cbz x19, #0x6a6b680
0x06A6B5D4: 286600b0  adrp x8, #0x7730000
0x06A6B5D8: 08ad47f9  ldr x8, [x8, #0xf58]
0x06A6B5DC: e00313aa  mov x0, x19
0x06A6B5E0: e10314aa  mov x1, x20
0x06A6B5E4: 020140f9  ldr x2, [x8]
0x06A6B5E8: 7f5f4d97  bl #0x3dc33e4
0x06A6B5EC: 1d000014  b #0x6a6b660
0x06A6B5F0: 28630090  adrp x8, #0x76cf000
0x06A6B5F4: 600640ad  ldp q0, q1, [x19]
0x06A6B5F8: e07740f9  ldr x0, [sp, #0xe8]
0x06A6B5FC: 088140f9  ldr x8, [x8, #0x100]
0x06A6B600: e00709ad  stp q0, q1, [sp, #0x120]
0x06A6B604: 010140f9  ldr x1, [x8]
0x06A6B608: fb544797  bl #0x3c409f4
0x06A6B60C: e00749ad  ldp q0, q1, [sp, #0x120]
0x06A6B610: e20300aa  mov x2, x0
0x06A6B614: e1c30091  add x1, sp, #0x30
0x06A6B618: e00314aa  mov x0, x20
0x06A6B61C: e08701ad  stp q0, q1, [sp, #0x30]
0x06A6B620: 17010094  bl #0x6a6ba7c
0x06A6B624: e8c30291  add x8, sp, #0xb0
0x06A6B628: e10300aa  mov x1, x0
0x06A6B62C: 00210091  add x0, x8, #8
0x06A6B630: e15f00f9  str x1, [sp, #0xb8]
0x06A6B634: e4541c97  bl #0x31809c4
0x06A6B638: e20f4ba9  ldp x2, x3, [sp, #0xb0]
0x06A6B63C: 286600b0  adrp x8, #0x7730000
0x06A6B640: 600640ad  ldp q0, q1, [x19]
0x06A6B644: e16340f9  ldr x1, [sp, #0xc0]
0x06A6B648: 08b147f9  ldr x8, [x8, #0xf60]
0x06A6B64C: e0830491  add x0, sp, #0x120
0x06A6B650: e08700ad  stp q0, q1, [sp, #0x10]
0x06A6B654: e00709ad  stp q0, q1, [sp, #0x120]
0x06A6B658: 040140f9  ldr x4, [x8]
0x06A6B65C: 99694d97  bl #0x3dc5cc0
0x06A6B660: f44f59a9  ldp x20, x19, [sp, #0x190]
0x06A6B664: f65758a9  ldp x22, x21, [sp, #0x180]
0x06A6B668: f85f57a9  ldp x24, x23, [sp, #0x170]
0x06A6B66C: fa6756a9  ldp x26, x25, [sp, #0x160]
0x06A6B670: fc6f55a9  ldp x28, x27, [sp, #0x150]
0x06A6B674: fd7b54a9  ldp x29, x30, [sp, #0x140]
0x06A6B678: ff830691  add sp, sp, #0x1a0
0x06A6B67C: c0035fd6  ret
0x06A6B680: 8b551c97  bl #0x3180cac

; RVA 0x6A6B684 | private void HandleInteractForConsumableItem(TickContext context) { }
; bytes=800 sha256=110b4cdbdad4792f57e1611be10c5862bdb8d10aa3e1a1b9b452c7d1c3f00de3 status=arm64_complete_bound indexed_start=True
0x06A6B684: ffc306d1  sub sp, sp, #0x1b0
0x06A6B688: fd7b16a9  stp x29, x30, [sp, #0x160]
0x06A6B68C: fa6717a9  stp x26, x25, [sp, #0x170]
0x06A6B690: f85f18a9  stp x24, x23, [sp, #0x180]
0x06A6B694: f65719a9  stp x22, x21, [sp, #0x190]
0x06A6B698: f44f1aa9  stp x20, x19, [sp, #0x1a0]
0x06A6B69C: fa9500f0  adrp x26, #0x7d2a000
0x06A6B6A0: 356600b0  adrp x21, #0x7730000
0x06A6B6A4: 366600b0  adrp x22, #0x7730000
0x06A6B6A8: 38660090  adrp x24, #0x772f000
0x06A6B6AC: 37660090  adrp x23, #0x772f000
0x06A6B6B0: 396600b0  adrp x25, #0x7730000
0x06A6B6B4: 481b5b39  ldrb w8, [x26, #0x6c6]
0x06A6B6B8: b5ba47f9  ldr x21, [x21, #0xf70]
0x06A6B6BC: d69646f9  ldr x22, [x22, #0xd28]
0x06A6B6C0: 183747f9  ldr x24, [x24, #0xe68]
0x06A6B6C4: f72647f9  ldr x23, [x23, #0xe48]
0x06A6B6C8: 399b46f9  ldr x25, [x25, #0xd30]
0x06A6B6CC: f30301aa  mov x19, x1
0x06A6B6D0: f40300aa  mov x20, x0
0x06A6B6D4: a8050037  tbnz w8, #0, #0x6a6b788
0x06A6B6D8: 206600b0  adrp x0, #0x7730000
0x06A6B6DC: 00a046f9  ldr x0, [x0, #0xd40]
0x06A6B6E0: ce541c97  bl #0x3180a18
0x06A6B6E4: 20660090  adrp x0, #0x772f000
0x06A6B6E8: 002447f9  ldr x0, [x0, #0xe48]
0x06A6B6EC: cb541c97  bl #0x3180a18
0x06A6B6F0: 206600b0  adrp x0, #0x7730000
0x06A6B6F4: 00bc47f9  ldr x0, [x0, #0xf78]
0x06A6B6F8: c8541c97  bl #0x3180a18
0x06A6B6FC: 206600b0  adrp x0, #0x7730000
0x06A6B700: 009446f9  ldr x0, [x0, #0xd28]
0x06A6B704: c5541c97  bl #0x3180a18
0x06A6B708: 20660090  adrp x0, #0x772f000
0x06A6B70C: 003447f9  ldr x0, [x0, #0xe68]
0x06A6B710: c2541c97  bl #0x3180a18
0x06A6B714: 206600b0  adrp x0, #0x7730000
0x06A6B718: 00c047f9  ldr x0, [x0, #0xf80]
0x06A6B71C: bf541c97  bl #0x3180a18
0x06A6B720: 206600b0  adrp x0, #0x7730000
0x06A6B724: 009c46f9  ldr x0, [x0, #0xd38]
0x06A6B728: bc541c97  bl #0x3180a18
0x06A6B72C: 206600b0  adrp x0, #0x7730000
0x06A6B730: 00c447f9  ldr x0, [x0, #0xf88]
0x06A6B734: b9541c97  bl #0x3180a18
0x06A6B738: 206600b0  adrp x0, #0x7730000
0x06A6B73C: 00c847f9  ldr x0, [x0, #0xf90]
0x06A6B740: b6541c97  bl #0x3180a18
0x06A6B744: 206600b0  adrp x0, #0x7730000
0x06A6B748: 009846f9  ldr x0, [x0, #0xd30]
0x06A6B74C: b3541c97  bl #0x3180a18
0x06A6B750: 206600b0  adrp x0, #0x7730000
0x06A6B754: 00cc47f9  ldr x0, [x0, #0xf98]
0x06A6B758: b0541c97  bl #0x3180a18
0x06A6B75C: 206600b0  adrp x0, #0x7730000
0x06A6B760: 00b047f9  ldr x0, [x0, #0xf60]
0x06A6B764: ad541c97  bl #0x3180a18
0x06A6B768: 206600b0  adrp x0, #0x7730000
0x06A6B76C: 00d047f9  ldr x0, [x0, #0xfa0]
0x06A6B770: aa541c97  bl #0x3180a18
0x06A6B774: 206600b0  adrp x0, #0x7730000
0x06A6B778: 00b847f9  ldr x0, [x0, #0xf70]
0x06A6B77C: a7541c97  bl #0x3180a18
0x06A6B780: 28008052  movz w8, #0x1
0x06A6B784: 481b1b39  strb w8, [x26, #0x6c6]
0x06A6B788: a00240f9  ldr x0, [x21]
0x06A6B78C: 00e4006f  movi v0.2d, #0000000000000000
0x06A6B790: ff8b00f9  str xzr, [sp, #0x110]
0x06A6B794: e00309ad  stp q0, q0, [sp, #0x120]
0x06A6B798: e08307ad  stp q0, q0, [sp, #0xf0]
0x06A6B79C: e08306ad  stp q0, q0, [sp, #0xd0]
0x06A6B7A0: e08305ad  stp q0, q0, [sp, #0xb0]
0x06A6B7A4: e08304ad  stp q0, q0, [sp, #0x90]
0x06A6B7A8: ff7f08a9  stp xzr, xzr, [sp, #0x80]
0x06A6B7AC: 3d551c97  bl #0x3180ca0
0x06A6B7B0: e1031faa  mov x1, xzr
0x06A6B7B4: f50300aa  mov x21, x0
0x06A6B7B8: 91bbb197  bl #0x56da5fc
0x06A6B7BC: 610240ad  ldp q1, q0, [x19]
0x06A6B7C0: c00240f9  ldr x0, [x22]
0x06A6B7C4: e10303ad  stp q1, q0, [sp, #0x60]
0x06A6B7C8: cfba4697  bl #0x3c1a304
0x06A6B7CC: 080340f9  ldr x8, [x24]
0x06A6B7D0: f60300aa  mov x22, x0
0x06A6B7D4: e00308aa  mov x0, x8
0x06A6B7D8: 32551c97  bl #0x3180ca0
0x06A6B7DC: e20240f9  ldr x2, [x23]
0x06A6B7E0: e1031faa  mov x1, xzr
0x06A6B7E4: e3031faa  mov x3, xzr
0x06A6B7E8: f70300aa  mov x23, x0
0x06A6B7EC: 47a9d297  bl #0x5f15d08
0x06A6B7F0: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A6B7F4: 230340f9  ldr x3, [x25]
0x06A6B7F8: e8830491  add x8, sp, #0x120
0x06A6B7FC: e0030591  add x0, sp, #0x140
0x06A6B800: e10316aa  mov x1, x22
0x06A6B804: e20317aa  mov x2, x23
0x06A6B808: e0070aad  stp q0, q1, [sp, #0x140]
0x06A6B80C: 66e74b97  bl #0x3d655a4
0x06A6B810: 950c00b4  cbz x21, #0x6a6b9a0
0x06A6B814: 286600b0  adrp x8, #0x7730000
0x06A6B818: 089d46f9  ldr x8, [x8, #0xd38]
0x06A6B81C: b6420091  add x22, x21, #0x10
0x06A6B820: e0830491  add x0, sp, #0x120
0x06A6B824: e10316aa  mov x1, x22
0x06A6B828: 020140f9  ldr x2, [x8]
0x06A6B82C: ab856497  bl #0x438ced8
0x06A6B830: a00a0036  tbz w0, #0, #0x6a6b984
0x06A6B834: 286600b0  adrp x8, #0x7730000
0x06A6B838: 600640ad  ldp q0, q1, [x19]
0x06A6B83C: 08bd47f9  ldr x8, [x8, #0xf78]
0x06A6B840: e00702ad  stp q0, q1, [sp, #0x40]
0x06A6B844: 000140f9  ldr x0, [x8]
0x06A6B848: 9aba4697  bl #0x3c1a2b0
0x06A6B84C: 080340f9  ldr x8, [x24]
0x06A6B850: f70300aa  mov x23, x0
0x06A6B854: e00308aa  mov x0, x8
0x06A6B858: 12551c97  bl #0x3180ca0
0x06A6B85C: 286600b0  adrp x8, #0x7730000
0x06A6B860: 08a146f9  ldr x8, [x8, #0xd40]
0x06A6B864: e1031faa  mov x1, xzr
0x06A6B868: e3031faa  mov x3, xzr
0x06A6B86C: f80300aa  mov x24, x0
0x06A6B870: 020140f9  ldr x2, [x8]
0x06A6B874: 25a9d297  bl #0x5f15d08
0x06A6B878: 286600b0  adrp x8, #0x7730000
0x06A6B87C: 08cd47f9  ldr x8, [x8, #0xf98]
0x06A6B880: e00742ad  ldp q0, q1, [sp, #0x40]
0x06A6B884: e0030591  add x0, sp, #0x140
0x06A6B888: e10317aa  mov x1, x23
0x06A6B88C: 030140f9  ldr x3, [x8]
0x06A6B890: e8430291  add x8, sp, #0x90
0x06A6B894: e20318aa  mov x2, x24
0x06A6B898: e0070aad  stp q0, q1, [sp, #0x140]
0x06A6B89C: 1ae74b97  bl #0x3d65504
0x06A6B8A0: 286600b0  adrp x8, #0x7730000
0x06A6B8A4: 08c147f9  ldr x8, [x8, #0xf80]
0x06A6B8A8: 000140f9  ldr x0, [x8]
0x06A6B8AC: fd541c97  bl #0x3180ca0
0x06A6B8B0: 286600b0  adrp x8, #0x7730000
0x06A6B8B4: 08d147f9  ldr x8, [x8, #0xfa0]
0x06A6B8B8: e10315aa  mov x1, x21
0x06A6B8BC: e3031faa  mov x3, xzr
0x06A6B8C0: f70300aa  mov x23, x0
0x06A6B8C4: 020140f9  ldr x2, [x8]
0x06A6B8C8: 40939f97  bl #0x52505c8
0x06A6B8CC: 286600b0  adrp x8, #0x7730000
0x06A6B8D0: 08c947f9  ldr x8, [x8, #0xf90]
0x06A6B8D4: e0430291  add x0, sp, #0x90
0x06A6B8D8: e10317aa  mov x1, x23
0x06A6B8DC: 020140f9  ldr x2, [x8]
0x06A6B8E0: e8030591  add x8, sp, #0x140
0x06A6B8E4: 70836497  bl #0x438c6a4
0x06A6B8E8: 286600b0  adrp x8, #0x7730000
0x06A6B8EC: e0074aad  ldp q0, q1, [sp, #0x140]
0x06A6B8F0: 08c547f9  ldr x8, [x8, #0xf88]
0x06A6B8F4: e0430291  add x0, sp, #0x90
0x06A6B8F8: e1c30291  add x1, sp, #0xb0
0x06A6B8FC: e08704ad  stp q0, q1, [sp, #0x90]
0x06A6B900: 020140f9  ldr x2, [x8]
0x06A6B904: d5836497  bl #0x438c858
0x06A6B908: e0030036  tbz w0, #0, #0x6a6b984
0x06A6B90C: 800e40f9  ldr x0, [x20, #0x18]
0x06A6B910: 800400b4  cbz x0, #0x6a6b9a0
0x06A6B914: e25b40f9  ldr x2, [sp, #0xb0]
0x06A6B918: c10240f9  ldr x1, [x22]
0x06A6B91C: e3031faa  mov x3, xzr
0x06A6B920: 576e0094  bl #0x6a8727c
0x06A6B924: 00030036  tbz w0, #0, #0x6a6b984
0x06A6B928: 610240ad  ldp q1, q0, [x19]
0x06A6B92C: e25b40f9  ldr x2, [sp, #0xb0]
0x06A6B930: e1830091  add x1, sp, #0x20
0x06A6B934: e10301ad  stp q1, q0, [sp, #0x20]
0x06A6B938: 1d000094  bl #0x6a6b9ac
0x06A6B93C: 40020036  tbz w0, #0, #0x6a6b984
0x06A6B940: 610240ad  ldp q1, q0, [x19]
0x06A6B944: f35b40f9  ldr x19, [sp, #0xb0]
0x06A6B948: e8030291  add x8, sp, #0x80
0x06A6B94C: 00210091  add x0, x8, #8
0x06A6B950: e10300ad  stp q1, q0, [sp]
0x06A6B954: a11a40f9  ldr x1, [x21, #0x30]
0x06A6B958: ff0708a9  stp xzr, x1, [sp, #0x80]
0x06A6B95C: 1a541c97  bl #0x31809c4
0x06A6B960: 286600b0  adrp x8, #0x7730000
0x06A6B964: e20f48a9  ldp x2, x3, [sp, #0x80]
0x06A6B968: 08b147f9  ldr x8, [x8, #0xf60]
0x06A6B96C: e00740ad  ldp q0, q1, [sp]
0x06A6B970: e0030591  add x0, sp, #0x140
0x06A6B974: e10313aa  mov x1, x19
0x06A6B978: 040140f9  ldr x4, [x8]
0x06A6B97C: e0070aad  stp q0, q1, [sp, #0x140]
0x06A6B980: d0684d97  bl #0x3dc5cc0
0x06A6B984: f44f5aa9  ldp x20, x19, [sp, #0x1a0]
0x06A6B988: f65759a9  ldp x22, x21, [sp, #0x190]
0x06A6B98C: f85f58a9  ldp x24, x23, [sp, #0x180]
0x06A6B990: fa6757a9  ldp x26, x25, [sp, #0x170]
0x06A6B994: fd7b56a9  ldp x29, x30, [sp, #0x160]
0x06A6B998: ffc30691  add sp, sp, #0x1b0
0x06A6B99C: c0035fd6  ret
0x06A6B9A0: c3541c97  bl #0x3180cac

; RVA 0x6A6B9AC | private bool IsInteractionAvailable(TickContext context, Entity interactableEntity) { }
; bytes=208 sha256=2d2dd18439b7826cfa5b7c4c1fd6e0b7817449f2a2f92aaf2f1365c96d793acc status=arm64_complete_bound indexed_start=True
0x06A6B9AC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A6B9B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6B9B4: f59500f0  adrp x21, #0x7d2a000
0x06A6B9B8: a81e5b39  ldrb w8, [x21, #0x6c7]
0x06A6B9BC: f30302aa  mov x19, x2
0x06A6B9C0: f40301aa  mov x20, x1
0x06A6B9C4: 88010037  tbnz w8, #0, #0x6a6b9f4
0x06A6B9C8: 206600b0  adrp x0, #0x7730000
0x06A6B9CC: 00d447f9  ldr x0, [x0, #0xfa8]
0x06A6B9D0: 12541c97  bl #0x3180a18
0x06A6B9D4: 206600b0  adrp x0, #0x7730000
0x06A6B9D8: 00d847f9  ldr x0, [x0, #0xfb0]
0x06A6B9DC: 0f541c97  bl #0x3180a18
0x06A6B9E0: 206600b0  adrp x0, #0x7730000
0x06A6B9E4: 00dc47f9  ldr x0, [x0, #0xfb8]
0x06A6B9E8: 0c541c97  bl #0x3180a18
0x06A6B9EC: 28008052  movz w8, #0x1
0x06A6B9F0: a81e1b39  strb w8, [x21, #0x6c7]
0x06A6B9F4: e00313aa  mov x0, x19
0x06A6B9F8: e1031faa  mov x1, xzr
0x06A6B9FC: ba6b0094  bl #0x6a868e4
0x06A6BA00: 00030037  tbnz w0, #0, #0x6a6ba60
0x06A6BA04: b30300b4  cbz x19, #0x6a6ba78
0x06A6BA08: 286600b0  adrp x8, #0x7730000
0x06A6BA0C: 08d947f9  ldr x8, [x8, #0xfb0]
0x06A6BA10: e00313aa  mov x0, x19
0x06A6BA14: 010140f9  ldr x1, [x8]
0x06A6BA18: 8abf4697  bl #0x3c1b840
0x06A6BA1C: 60020036  tbz w0, #0, #0x6a6ba68
0x06A6BA20: 286600b0  adrp x8, #0x7730000
0x06A6BA24: 940a40f9  ldr x20, [x20, #0x10]
0x06A6BA28: 08d547f9  ldr x8, [x8, #0xfa8]
0x06A6BA2C: 000140f9  ldr x0, [x8]
0x06A6BA30: 9c541c97  bl #0x3180ca0
0x06A6BA34: e10313aa  mov x1, x19
0x06A6BA38: e2031faa  mov x2, xzr
0x06A6BA3C: f50300aa  mov x21, x0
0x06A6BA40: 23ba0094  bl #0x6a9a2cc
0x06A6BA44: b40100b4  cbz x20, #0x6a6ba78
0x06A6BA48: 286600b0  adrp x8, #0x7730000
0x06A6BA4C: 08dd47f9  ldr x8, [x8, #0xfb8]
0x06A6BA50: e00314aa  mov x0, x20
0x06A6BA54: e10315aa  mov x1, x21
0x06A6BA58: 020140f9  ldr x2, [x8]
0x06A6BA5C: 625e4d97  bl #0x3dc33e4
0x06A6BA60: e0031f2a  mov w0, wzr
0x06A6BA64: 02000014  b #0x6a6ba6c
0x06A6BA68: 20008052  movz w0, #0x1
0x06A6BA6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6BA70: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A6BA74: c0035fd6  ret
0x06A6BA78: 8d541c97  bl #0x3180cac

; RVA 0x6A6BA7C | private string GetDefaultEntityUuidToConsume(TickContext context, ItemMultiple itemToConsume) { }
; bytes=320 sha256=0833cec2f82df609d44cc70c23fe8b8e818330038c69b5abf7f35ecae2b06f4e status=arm64_complete_bound indexed_start=True
0x06A6BA7C: ffc301d1  sub sp, sp, #0x70
0x06A6BA80: fe6703a9  stp x30, x25, [sp, #0x30]
0x06A6BA84: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A6BA88: f65705a9  stp x22, x21, [sp, #0x50]
0x06A6BA8C: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A6BA90: f69500f0  adrp x22, #0x7d2a000
0x06A6BA94: 376600b0  adrp x23, #0x7730000
0x06A6BA98: c8225b39  ldrb w8, [x22, #0x6c8]
0x06A6BA9C: f7e247f9  ldr x23, [x23, #0xfc0]
0x06A6BAA0: f40302aa  mov x20, x2
0x06A6BAA4: f30301aa  mov x19, x1
0x06A6BAA8: f50300aa  mov x21, x0
0x06A6BAAC: 48020037  tbnz w8, #0, #0x6a6baf4
0x06A6BAB0: 606000f0  adrp x0, #0x767a000
0x06A6BAB4: 004442f9  ldr x0, [x0, #0x488]
0x06A6BAB8: d8531c97  bl #0x3180a18
0x06A6BABC: 206600b0  adrp x0, #0x7730000
0x06A6BAC0: 007847f9  ldr x0, [x0, #0xef0]
0x06A6BAC4: d5531c97  bl #0x3180a18
0x06A6BAC8: a06200d0  adrp x0, #0x76c1000
0x06A6BACC: 00a046f9  ldr x0, [x0, #0xd40]
0x06A6BAD0: d2531c97  bl #0x3180a18
0x06A6BAD4: 206600b0  adrp x0, #0x7730000
0x06A6BAD8: 00e447f9  ldr x0, [x0, #0xfc8]
0x06A6BADC: cf531c97  bl #0x3180a18
0x06A6BAE0: 206600b0  adrp x0, #0x7730000
0x06A6BAE4: 00e047f9  ldr x0, [x0, #0xfc0]
0x06A6BAE8: cc531c97  bl #0x3180a18
0x06A6BAEC: 28008052  movz w8, #0x1
0x06A6BAF0: c8221b39  strb w8, [x22, #0x6c8]
0x06A6BAF4: e00240f9  ldr x0, [x23]
0x06A6BAF8: 6a541c97  bl #0x3180ca0
0x06A6BAFC: e1031faa  mov x1, xzr
0x06A6BB00: f60300aa  mov x22, x0
0x06A6BB04: bebab197  bl #0x56da5fc
0x06A6BB08: 960500b4  cbz x22, #0x6a6bbb8
0x06A6BB0C: b76200d0  adrp x23, #0x76c1000
0x06A6BB10: 386600b0  adrp x24, #0x7730000
0x06A6BB14: 396600b0  adrp x25, #0x7730000
0x06A6BB18: f7a246f9  ldr x23, [x23, #0xd40]
0x06A6BB1C: 18e747f9  ldr x24, [x24, #0xfc8]
0x06A6BB20: 397b47f9  ldr x25, [x25, #0xef0]
0x06A6BB24: e00316aa  mov x0, x22
0x06A6BB28: 150c01f8  str x21, [x0, #0x10]!
0x06A6BB2C: e10315aa  mov x1, x21
0x06A6BB30: a5531c97  bl #0x31809c4
0x06A6BB34: e00316aa  mov x0, x22
0x06A6BB38: 148c01f8  str x20, [x0, #0x18]!
0x06A6BB3C: e10314aa  mov x1, x20
0x06A6BB40: a1531c97  bl #0x31809c4
0x06A6BB44: e00313aa  mov x0, x19
0x06A6BB48: e1031faa  mov x1, xzr
0x06A6BB4C: cdaad297  bl #0x5f16680
0x06A6BB50: e80240f9  ldr x8, [x23]
0x06A6BB54: f30300aa  mov x19, x0
0x06A6BB58: e00308aa  mov x0, x8
0x06A6BB5C: 51541c97  bl #0x3180ca0
0x06A6BB60: 020340f9  ldr x2, [x24]
0x06A6BB64: e10316aa  mov x1, x22
0x06A6BB68: e3031faa  mov x3, xzr
0x06A6BB6C: f40300aa  mov x20, x0
0x06A6BB70: 13a99f97  bl #0x5255fbc
0x06A6BB74: 220340f9  ldr x2, [x25]
0x06A6BB78: e00313aa  mov x0, x19
0x06A6BB7C: e10314aa  mov x1, x20
0x06A6BB80: 735b4797  bl #0x3c4294c
0x06A6BB84: a00100b4  cbz x0, #0x6a6bbb8
0x06A6BB88: 686000f0  adrp x8, #0x767a000
0x06A6BB8C: 084542f9  ldr x8, [x8, #0x488]
0x06A6BB90: 010140f9  ldr x1, [x8]
0x06A6BB94: e8030091  mov x8, sp
0x06A6BB98: aebd4697  bl #0x3c1b250
0x06A6BB9C: e00740f9  ldr x0, [sp, #8]
0x06A6BBA0: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A6BBA4: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A6BBA8: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A6BBAC: fe6743a9  ldp x30, x25, [sp, #0x30]
0x06A6BBB0: ffc30191  add sp, sp, #0x70
0x06A6BBB4: c0035fd6  ret
0x06A6BBB8: 3d541c97  bl #0x3180cac

; RVA 0x6A6BBCC | private bool IsItemEligibleForConsume(Entity entity, ItemMultiple itemToConsume) { }
; bytes=192 sha256=f0b43be47946e3c3cf125a3e0dfec6192ea50e18c711abba53f33b670b2b0b16 status=arm64_complete_bound indexed_start=True
0x06A6BBCC: ff4301d1  sub sp, sp, #0x50
0x06A6BBD0: fe5703a9  stp x30, x21, [sp, #0x30]
0x06A6BBD4: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A6BBD8: f59500f0  adrp x21, #0x7d2a000
0x06A6BBDC: a8265b39  ldrb w8, [x21, #0x6c9]
0x06A6BBE0: f40302aa  mov x20, x2
0x06A6BBE4: f30301aa  mov x19, x1
0x06A6BBE8: 28010037  tbnz w8, #0, #0x6a6bc0c
0x06A6BBEC: 606000f0  adrp x0, #0x767a000
0x06A6BBF0: 004442f9  ldr x0, [x0, #0x488]
0x06A6BBF4: 89531c97  bl #0x3180a18
0x06A6BBF8: 006300b0  adrp x0, #0x76cc000
0x06A6BBFC: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A6BC00: 86531c97  bl #0x3180a18
0x06A6BC04: 28008052  movz w8, #0x1
0x06A6BC08: a8261b39  strb w8, [x21, #0x6c9]
0x06A6BC0C: f30300b4  cbz x19, #0x6a6bc88
0x06A6BC10: 686000f0  adrp x8, #0x767a000
0x06A6BC14: 084542f9  ldr x8, [x8, #0x488]
0x06A6BC18: e00313aa  mov x0, x19
0x06A6BC1C: 010140f9  ldr x1, [x8]
0x06A6BC20: e8030091  mov x8, sp
0x06A6BC24: 8bbd4697  bl #0x3c1b250
0x06A6BC28: 140300b4  cbz x20, #0x6a6bc88
0x06A6BC2C: 086300b0  adrp x8, #0x76cc000
0x06A6BC30: 08d542f9  ldr x8, [x8, #0x5a8]
0x06A6BC34: f50340f9  ldr x21, [sp]
0x06A6BC38: e00314aa  mov x0, x20
0x06A6BC3C: 010140f9  ldr x1, [x8]
0x06A6BC40: 169ba497  bl #0x5392898
0x06A6BC44: 350200b4  cbz x21, #0x6a6bc88
0x06A6BC48: e10300aa  mov x1, x0
0x06A6BC4C: e00315aa  mov x0, x21
0x06A6BC50: e2031faa  mov x2, xzr
0x06A6BC54: 792baa97  bl #0x54f6a38
0x06A6BC58: c0000036  tbz w0, #0, #0x6a6bc70
0x06A6BC5C: e00313aa  mov x0, x19
0x06A6BC60: e1031faa  mov x1, xzr
0x06A6BC64: 206b0094  bl #0x6a868e4
0x06A6BC68: 08000052  eor w8, w0, #1
0x06A6BC6C: 02000014  b #0x6a6bc74
0x06A6BC70: e8031f2a  mov w8, wzr
0x06A6BC74: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A6BC78: fe5743a9  ldp x30, x21, [sp, #0x30]
0x06A6BC7C: 00010012  and w0, w8, #1
0x06A6BC80: ff430191  add sp, sp, #0x50
0x06A6BC84: c0035fd6  ret
0x06A6BC88: 09541c97  bl #0x3180cac

; RVA 0x6A6BC8C | public void .ctor() { }
; bytes=8 sha256=63c2abe10513e9dd3a6c2b8b3d5263a48b11af8b8b14e81cfc61043fdcab6a07 status=arm64_complete_bound indexed_start=True
0x06A6BC8C: e1031faa  mov x1, xzr
0x06A6BC90: 5bbab117  b #0x56da5fc


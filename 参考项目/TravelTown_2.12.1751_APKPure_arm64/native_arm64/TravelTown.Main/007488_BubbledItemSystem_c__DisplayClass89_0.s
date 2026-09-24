; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7488 .BubbledItemSystem.<>c__DisplayClass89_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6588A2C | public void .ctor() { }
; bytes=8 sha256=4274e8719dda96c9029a919a63420239b6c8543da38845567fec9ef3de82959e status=arm64_complete_bound indexed_start=True
0x06588A2C: e1031faa  mov x1, xzr
0x06588A30: f346c517  b #0x56da5fc

; RVA 0x658A330 | internal void <TryBurstBubble>b__0() { }
; bytes=212 sha256=8fbfb76b26bf5b3fff92224dbf0e1be0dfaaef6aef78a5609c991ac89e3ae258 status=arm64_complete_bound indexed_start=True
0x0658A330: fe0f1ef8  str x30, [sp, #-0x20]!
0x0658A334: f44f01a9  stp x20, x19, [sp, #0x10]
0x0658A338: f4bc00b0  adrp x20, #0x7d27000
0x0658A33C: 88e65a39  ldrb w8, [x20, #0x6b9]
0x0658A340: f30300aa  mov x19, x0
0x0658A344: c8000037  tbnz w8, #0, #0x658a35c
0x0658A348: 208700f0  adrp x0, #0x7671000
0x0658A34C: 006047f9  ldr x0, [x0, #0xec0]
0x0658A350: b2d92f97  bl #0x3180a18
0x0658A354: 28008052  movz w8, #0x1
0x0658A358: 88e61a39  strb w8, [x20, #0x6b9]
0x0658A35C: 600a40f9  ldr x0, [x19, #0x10]
0x0658A360: 000500b4  cbz x0, #0x658a400
0x0658A364: 641643a9  ldp x4, x5, [x19, #0x30]
0x0658A368: 620e42a9  ldp x2, x3, [x19, #0x20]
0x0658A36C: 610e40f9  ldr x1, [x19, #0x18]
0x0658A370: e6031f2a  mov w6, wzr
0x0658A374: b7e3ff97  bl #0x6583250
0x0658A378: 680e40f9  ldr x8, [x19, #0x18]
0x0658A37C: 280400b4  cbz x8, #0x658a400
0x0658A380: 131540f9  ldr x19, [x8, #0x28]
0x0658A384: 730200b4  cbz x19, #0x658a3d0
0x0658A388: 2a8700f0  adrp x10, #0x7671000
0x0658A38C: 680240f9  ldr x8, [x19]
0x0658A390: 4a6147f9  ldr x10, [x10, #0xec0]
0x0658A394: 095d4279  ldrh w9, [x8, #0x12e]
0x0658A398: 410140f9  ldr x1, [x10]
0x0658A39C: 290100b4  cbz x9, #0x658a3c0
0x0658A3A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0658A3A4: 4a210091  add x10, x10, #8
0x0658A3A8: 4b815ff8  ldur x11, [x10, #-8]
0x0658A3AC: 7f0101eb  cmp x11, x1
0x0658A3B0: 60010054  b.eq #0x658a3dc
0x0658A3B4: 290500f1  subs x9, x9, #1
0x0658A3B8: 4a410091  add x10, x10, #0x10
0x0658A3BC: 61ffff54  b.ne #0x658a3a8
0x0658A3C0: 22008052  movz w2, #0x1
0x0658A3C4: e00313aa  mov x0, x19
0x0658A3C8: d2312f97  bl #0x3156b10
0x0658A3CC: 08000014  b #0x658a3ec
0x0658A3D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0658A3D4: fe0742f8  ldr x30, [sp], #0x20
0x0658A3D8: c0035fd6  ret
0x0658A3DC: 490140b9  ldr w9, [x10]
0x0658A3E0: 29050011  add w9, w9, #1
0x0658A3E4: 08d1298b  add x8, x8, w9, sxtw #4
0x0658A3E8: 00e10491  add x0, x8, #0x138
0x0658A3EC: 020440a9  ldp x2, x1, [x0]
0x0658A3F0: e00313aa  mov x0, x19
0x0658A3F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0658A3F8: fe0742f8  ldr x30, [sp], #0x20
0x0658A3FC: 40001fd6  br x2
0x0658A400: 2bda2f97  bl #0x3180cac

; RVA 0x658A404 | internal void <TryBurstBubble>b__1(Exception exception) { }
; bytes=308 sha256=d5ca70888d7912f35a98416158e9ce4482e251724d64b3d4ee1675781508136e status=arm64_complete_bound indexed_start=True
0x0658A404: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0658A408: f44f01a9  stp x20, x19, [sp, #0x10]
0x0658A40C: f5bc00b0  adrp x21, #0x7d27000
0x0658A410: a8ea5a39  ldrb w8, [x21, #0x6ba]
0x0658A414: f40301aa  mov x20, x1
0x0658A418: f30300aa  mov x19, x0
0x0658A41C: e8010037  tbnz w8, #0, #0x658a458
0x0658A420: 208700b0  adrp x0, #0x766f000
0x0658A424: 002441f9  ldr x0, [x0, #0x248]
0x0658A428: 7cd92f97  bl #0x3180a18
0x0658A42C: 208700b0  adrp x0, #0x766f000
0x0658A430: 000c45f9  ldr x0, [x0, #0xa18]
0x0658A434: 79d92f97  bl #0x3180a18
0x0658A438: 208700b0  adrp x0, #0x766f000
0x0658A43C: 001045f9  ldr x0, [x0, #0xa20]
0x0658A440: 76d92f97  bl #0x3180a18
0x0658A444: a08b00d0  adrp x0, #0x7700000
0x0658A448: 008846f9  ldr x0, [x0, #0xd10]
0x0658A44C: 73d92f97  bl #0x3180a18
0x0658A450: 28008052  movz w8, #0x1
0x0658A454: a8ea1a39  strb w8, [x21, #0x6ba]
0x0658A458: 680e40f9  ldr x8, [x19, #0x18]
0x0658A45C: c80600b4  cbz x8, #0x658a534
0x0658A460: 151540f9  ldr x21, [x8, #0x28]
0x0658A464: 750300b4  cbz x21, #0x658a4d0
0x0658A468: 2a8700b0  adrp x10, #0x766f000
0x0658A46C: a80240f9  ldr x8, [x21]
0x0658A470: 4a2541f9  ldr x10, [x10, #0x248]
0x0658A474: 095d4279  ldrh w9, [x8, #0x12e]
0x0658A478: 410140f9  ldr x1, [x10]
0x0658A47C: 290100b4  cbz x9, #0x658a4a0
0x0658A480: 0a5940f9  ldr x10, [x8, #0xb0]
0x0658A484: 4a210091  add x10, x10, #8
0x0658A488: 4b815ff8  ldur x11, [x10, #-8]
0x0658A48C: 7f0101eb  cmp x11, x1
0x0658A490: 00010054  b.eq #0x658a4b0
0x0658A494: 290500f1  subs x9, x9, #1
0x0658A498: 4a410091  add x10, x10, #0x10
0x0658A49C: 61ffff54  b.ne #0x658a488
0x0658A4A0: 82008052  movz w2, #0x4
0x0658A4A4: e00315aa  mov x0, x21
0x0658A4A8: 9a312f97  bl #0x3156b10
0x0658A4AC: 05000014  b #0x658a4c0
0x0658A4B0: 490140b9  ldr w9, [x10]
0x0658A4B4: 29110011  add w9, w9, #4
0x0658A4B8: 08d1298b  add x8, x8, w9, sxtw #4
0x0658A4BC: 00e10491  add x0, x8, #0x138
0x0658A4C0: 080840a9  ldp x8, x2, [x0]
0x0658A4C4: e00315aa  mov x0, x21
0x0658A4C8: e10314aa  mov x1, x20
0x0658A4CC: 00013fd6  blr x8
0x0658A4D0: 680a40f9  ldr x8, [x19, #0x10]
0x0658A4D4: 080300b4  cbz x8, #0x658a534
0x0658A4D8: 298700b0  adrp x9, #0x766f000
0x0658A4DC: 290d45f9  ldr x9, [x9, #0xa18]
0x0658A4E0: b48b00d0  adrp x20, #0x7700000
0x0658A4E4: 131540f9  ldr x19, [x8, #0x28]
0x0658A4E8: 200140f9  ldr x0, [x9]
0x0658A4EC: 948a46f9  ldr x20, [x20, #0xd10]
0x0658A4F0: ecd92f97  bl #0x3180ca0
0x0658A4F4: 810240f9  ldr x1, [x20]
0x0658A4F8: e003271e  fmov s0, wzr
0x0658A4FC: c30f8752  movz w3, #0x387e
0x0658A500: e2031faa  mov x2, xzr
0x0658A504: e4031faa  mov x4, xzr
0x0658A508: f40300aa  mov x20, x0
0x0658A50C: 864f0e94  bl #0x691e324
0x0658A510: 330100b4  cbz x19, #0x658a534
0x0658A514: 288700b0  adrp x8, #0x766f000
0x0658A518: 081145f9  ldr x8, [x8, #0xa20]
0x0658A51C: e00313aa  mov x0, x19
0x0658A520: e10314aa  mov x1, x20
0x0658A524: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0658A528: 020140f9  ldr x2, [x8]
0x0658A52C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0658A530: 0f6a6017  b #0x3da4d6c
0x0658A534: ded92f97  bl #0x3180cac

; RVA 0x658A538 | internal void <TryBurstBubble>b__2() { }
; bytes=28 sha256=703a98910138f855661f877196619c8f31164a7d3d53e81d17b67fa5a6e7e10b status=arm64_complete_bound indexed_start=True
0x0658A538: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A53C: 082040f9  ldr x8, [x0, #0x40]
0x0658A540: 880000b4  cbz x8, #0x658a550
0x0658A544: 1fe10139  strb wzr, [x8, #0x78]
0x0658A548: fe0741f8  ldr x30, [sp], #0x10
0x0658A54C: c0035fd6  ret
0x0658A550: d7d92f97  bl #0x3180cac


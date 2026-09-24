; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8582 .BoardView.<>c__DisplayClass148_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6698944 | public void .ctor() { }
; bytes=8 sha256=30302b1badba3b4a909684aecede7e717953467cc159ff5f877e858ed37a79f8 status=arm64_complete_bound indexed_start=True
0x06698944: e1031faa  mov x1, xzr
0x06698948: 2d07c117  b #0x56da5fc

; RVA 0x669A420 | internal void <SlideBoosterIn>b__0() { }
; bytes=480 sha256=17a5aa78bacf41e97c65c897b6185d5090f029ee602d8c738254cde945a2d002 status=arm64_complete_bound indexed_start=True
0x0669A420: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0669A424: f44f01a9  stp x20, x19, [sp, #0x10]
0x0669A428: 74b400d0  adrp x20, #0x7d28000
0x0669A42C: 88e24b39  ldrb w8, [x20, #0x2f8]
0x0669A430: f30300aa  mov x19, x0
0x0669A434: 28010037  tbnz w8, #0, #0x669a458
0x0669A438: 208100d0  adrp x0, #0x76c0000
0x0669A43C: 002c44f9  ldr x0, [x0, #0x858]
0x0669A440: 76992b97  bl #0x3180a18
0x0669A444: 608300f0  adrp x0, #0x7709000
0x0669A448: 007442f9  ldr x0, [x0, #0x4e8]
0x0669A44C: 73992b97  bl #0x3180a18
0x0669A450: 28008052  movz w8, #0x1
0x0669A454: 88e20b39  strb w8, [x20, #0x2f8]
0x0669A458: 740a40f9  ldr x20, [x19, #0x10]
0x0669A45C: 140d00b4  cbz x20, #0x669a5fc
0x0669A460: 358100d0  adrp x21, #0x76c0000
0x0669A464: 880240f9  ldr x8, [x20]
0x0669A468: b52e44f9  ldr x21, [x21, #0x858]
0x0669A46C: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A470: a10240f9  ldr x1, [x21]
0x0669A474: 290100b4  cbz x9, #0x669a498
0x0669A478: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A47C: 4a210091  add x10, x10, #8
0x0669A480: 4b815ff8  ldur x11, [x10, #-8]
0x0669A484: 7f0101eb  cmp x11, x1
0x0669A488: 00010054  b.eq #0x669a4a8
0x0669A48C: 290500f1  subs x9, x9, #1
0x0669A490: 4a410091  add x10, x10, #0x10
0x0669A494: 61ffff54  b.ne #0x669a480
0x0669A498: 42018052  movz w2, #0xa
0x0669A49C: e00314aa  mov x0, x20
0x0669A4A0: 9cf12a97  bl #0x3156b10
0x0669A4A4: 05000014  b #0x669a4b8
0x0669A4A8: 490140b9  ldr w9, [x10]
0x0669A4AC: 29290011  add w9, w9, #0xa
0x0669A4B0: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A4B4: 00e10491  add x0, x8, #0x138
0x0669A4B8: 080840a9  ldp x8, x2, [x0]
0x0669A4BC: e00314aa  mov x0, x20
0x0669A4C0: e1031faa  mov x1, xzr
0x0669A4C4: 00013fd6  blr x8
0x0669A4C8: 740a40f9  ldr x20, [x19, #0x10]
0x0669A4CC: 940900b4  cbz x20, #0x669a5fc
0x0669A4D0: 880240f9  ldr x8, [x20]
0x0669A4D4: a10240f9  ldr x1, [x21]
0x0669A4D8: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A4DC: 290100b4  cbz x9, #0x669a500
0x0669A4E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A4E4: 4a210091  add x10, x10, #8
0x0669A4E8: 4b815ff8  ldur x11, [x10, #-8]
0x0669A4EC: 7f0101eb  cmp x11, x1
0x0669A4F0: 00010054  b.eq #0x669a510
0x0669A4F4: 290500f1  subs x9, x9, #1
0x0669A4F8: 4a410091  add x10, x10, #0x10
0x0669A4FC: 61ffff54  b.ne #0x669a4e8
0x0669A500: a2008052  movz w2, #0x5
0x0669A504: e00314aa  mov x0, x20
0x0669A508: 82f12a97  bl #0x3156b10
0x0669A50C: 05000014  b #0x669a520
0x0669A510: 490140b9  ldr w9, [x10]
0x0669A514: 29150011  add w9, w9, #5
0x0669A518: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A51C: 00e10491  add x0, x8, #0x138
0x0669A520: 080840a9  ldp x8, x2, [x0]
0x0669A524: e00314aa  mov x0, x20
0x0669A528: e1031f2a  mov w1, wzr
0x0669A52C: 00013fd6  blr x8
0x0669A530: 740a40f9  ldr x20, [x19, #0x10]
0x0669A534: 540600b4  cbz x20, #0x669a5fc
0x0669A538: 880240f9  ldr x8, [x20]
0x0669A53C: a10240f9  ldr x1, [x21]
0x0669A540: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A544: 290100b4  cbz x9, #0x669a568
0x0669A548: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A54C: 4a210091  add x10, x10, #8
0x0669A550: 4b815ff8  ldur x11, [x10, #-8]
0x0669A554: 7f0101eb  cmp x11, x1
0x0669A558: 00010054  b.eq #0x669a578
0x0669A55C: 290500f1  subs x9, x9, #1
0x0669A560: 4a410091  add x10, x10, #0x10
0x0669A564: 61ffff54  b.ne #0x669a550
0x0669A568: e00314aa  mov x0, x20
0x0669A56C: e2031f2a  mov w2, wzr
0x0669A570: 68f12a97  bl #0x3156b10
0x0669A574: 04000014  b #0x669a584
0x0669A578: 490180b9  ldrsw x9, [x10]
0x0669A57C: 0811098b  add x8, x8, x9, lsl #4
0x0669A580: 00e10491  add x0, x8, #0x138
0x0669A584: 080440a9  ldp x8, x1, [x0]
0x0669A588: e00314aa  mov x0, x20
0x0669A58C: 00013fd6  blr x8
0x0669A590: 680e40f9  ldr x8, [x19, #0x18]
0x0669A594: 480300b4  cbz x8, #0x669a5fc
0x0669A598: f40300aa  mov x20, x0
0x0669A59C: 009540f9  ldr x0, [x8, #0x128]
0x0669A5A0: e00200b4  cbz x0, #0x669a5fc
0x0669A5A4: 688300f0  adrp x8, #0x7709000
0x0669A5A8: 087542f9  ldr x8, [x8, #0x4e8]
0x0669A5AC: 611240f9  ldr x1, [x19, #0x20]
0x0669A5B0: 020140f9  ldr x2, [x8]
0x0669A5B4: c1e77e97  bl #0x46544b8
0x0669A5B8: 340200b4  cbz x20, #0x669a5fc
0x0669A5BC: e10300aa  mov x1, x0
0x0669A5C0: 22008052  movz w2, #0x1
0x0669A5C4: e00314aa  mov x0, x20
0x0669A5C8: e3031faa  mov x3, xzr
0x0669A5CC: 3a442194  bl #0x6eeb6b4
0x0669A5D0: 681640f9  ldr x8, [x19, #0x28]
0x0669A5D4: e80000b4  cbz x8, #0x669a5f0
0x0669A5D8: 020d40f9  ldr x2, [x8, #0x18]
0x0669A5DC: 002140f9  ldr x0, [x8, #0x40]
0x0669A5E0: 011540f9  ldr x1, [x8, #0x28]
0x0669A5E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669A5E8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669A5EC: 40001fd6  br x2
0x0669A5F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669A5F4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669A5F8: c0035fd6  ret
0x0669A5FC: ac992b97  bl #0x3180cac


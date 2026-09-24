; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8581 .BoardView.<>c__DisplayClass145_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x669809C | public void .ctor() { }
; bytes=8 sha256=db368a5d28e412db34ef0fb0639e82b04bbb37b225104e02c0b0e42d7f815123 status=arm64_complete_bound indexed_start=True
0x0669809C: e1031faa  mov x1, xzr
0x066980A0: 5709c117  b #0x56da5fc

; RVA 0x669A240 | internal void <SlideItemIn>b__0() { }
; bytes=480 sha256=3f22e51ae8b8ca478076c0722de3baadc5d7a580758cfc57a2c71efd4303eee9 status=arm64_complete_bound indexed_start=True
0x0669A240: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0669A244: f44f01a9  stp x20, x19, [sp, #0x10]
0x0669A248: 74b400d0  adrp x20, #0x7d28000
0x0669A24C: 88de4b39  ldrb w8, [x20, #0x2f7]
0x0669A250: f30300aa  mov x19, x0
0x0669A254: 28010037  tbnz w8, #0, #0x669a278
0x0669A258: 208100d0  adrp x0, #0x76c0000
0x0669A25C: 002c44f9  ldr x0, [x0, #0x858]
0x0669A260: ee992b97  bl #0x3180a18
0x0669A264: 608300f0  adrp x0, #0x7709000
0x0669A268: 007442f9  ldr x0, [x0, #0x4e8]
0x0669A26C: eb992b97  bl #0x3180a18
0x0669A270: 28008052  movz w8, #0x1
0x0669A274: 88de0b39  strb w8, [x20, #0x2f7]
0x0669A278: 740a40f9  ldr x20, [x19, #0x10]
0x0669A27C: 140d00b4  cbz x20, #0x669a41c
0x0669A280: 358100d0  adrp x21, #0x76c0000
0x0669A284: 880240f9  ldr x8, [x20]
0x0669A288: b52e44f9  ldr x21, [x21, #0x858]
0x0669A28C: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A290: a10240f9  ldr x1, [x21]
0x0669A294: 290100b4  cbz x9, #0x669a2b8
0x0669A298: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A29C: 4a210091  add x10, x10, #8
0x0669A2A0: 4b815ff8  ldur x11, [x10, #-8]
0x0669A2A4: 7f0101eb  cmp x11, x1
0x0669A2A8: 00010054  b.eq #0x669a2c8
0x0669A2AC: 290500f1  subs x9, x9, #1
0x0669A2B0: 4a410091  add x10, x10, #0x10
0x0669A2B4: 61ffff54  b.ne #0x669a2a0
0x0669A2B8: 42018052  movz w2, #0xa
0x0669A2BC: e00314aa  mov x0, x20
0x0669A2C0: 14f22a97  bl #0x3156b10
0x0669A2C4: 05000014  b #0x669a2d8
0x0669A2C8: 490140b9  ldr w9, [x10]
0x0669A2CC: 29290011  add w9, w9, #0xa
0x0669A2D0: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A2D4: 00e10491  add x0, x8, #0x138
0x0669A2D8: 080840a9  ldp x8, x2, [x0]
0x0669A2DC: e00314aa  mov x0, x20
0x0669A2E0: e1031faa  mov x1, xzr
0x0669A2E4: 00013fd6  blr x8
0x0669A2E8: 740a40f9  ldr x20, [x19, #0x10]
0x0669A2EC: 940900b4  cbz x20, #0x669a41c
0x0669A2F0: 880240f9  ldr x8, [x20]
0x0669A2F4: a10240f9  ldr x1, [x21]
0x0669A2F8: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A2FC: 290100b4  cbz x9, #0x669a320
0x0669A300: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A304: 4a210091  add x10, x10, #8
0x0669A308: 4b815ff8  ldur x11, [x10, #-8]
0x0669A30C: 7f0101eb  cmp x11, x1
0x0669A310: 00010054  b.eq #0x669a330
0x0669A314: 290500f1  subs x9, x9, #1
0x0669A318: 4a410091  add x10, x10, #0x10
0x0669A31C: 61ffff54  b.ne #0x669a308
0x0669A320: a2008052  movz w2, #0x5
0x0669A324: e00314aa  mov x0, x20
0x0669A328: faf12a97  bl #0x3156b10
0x0669A32C: 05000014  b #0x669a340
0x0669A330: 490140b9  ldr w9, [x10]
0x0669A334: 29150011  add w9, w9, #5
0x0669A338: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A33C: 00e10491  add x0, x8, #0x138
0x0669A340: 080840a9  ldp x8, x2, [x0]
0x0669A344: e00314aa  mov x0, x20
0x0669A348: e1031f2a  mov w1, wzr
0x0669A34C: 00013fd6  blr x8
0x0669A350: 740a40f9  ldr x20, [x19, #0x10]
0x0669A354: 540600b4  cbz x20, #0x669a41c
0x0669A358: 880240f9  ldr x8, [x20]
0x0669A35C: a10240f9  ldr x1, [x21]
0x0669A360: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A364: 290100b4  cbz x9, #0x669a388
0x0669A368: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A36C: 4a210091  add x10, x10, #8
0x0669A370: 4b815ff8  ldur x11, [x10, #-8]
0x0669A374: 7f0101eb  cmp x11, x1
0x0669A378: 00010054  b.eq #0x669a398
0x0669A37C: 290500f1  subs x9, x9, #1
0x0669A380: 4a410091  add x10, x10, #0x10
0x0669A384: 61ffff54  b.ne #0x669a370
0x0669A388: e00314aa  mov x0, x20
0x0669A38C: e2031f2a  mov w2, wzr
0x0669A390: e0f12a97  bl #0x3156b10
0x0669A394: 04000014  b #0x669a3a4
0x0669A398: 490180b9  ldrsw x9, [x10]
0x0669A39C: 0811098b  add x8, x8, x9, lsl #4
0x0669A3A0: 00e10491  add x0, x8, #0x138
0x0669A3A4: 080440a9  ldp x8, x1, [x0]
0x0669A3A8: e00314aa  mov x0, x20
0x0669A3AC: 00013fd6  blr x8
0x0669A3B0: 680e40f9  ldr x8, [x19, #0x18]
0x0669A3B4: 480300b4  cbz x8, #0x669a41c
0x0669A3B8: f40300aa  mov x20, x0
0x0669A3BC: 009540f9  ldr x0, [x8, #0x128]
0x0669A3C0: e00200b4  cbz x0, #0x669a41c
0x0669A3C4: 688300f0  adrp x8, #0x7709000
0x0669A3C8: 087542f9  ldr x8, [x8, #0x4e8]
0x0669A3CC: 611240f9  ldr x1, [x19, #0x20]
0x0669A3D0: 020140f9  ldr x2, [x8]
0x0669A3D4: 39e87e97  bl #0x46544b8
0x0669A3D8: 340200b4  cbz x20, #0x669a41c
0x0669A3DC: e10300aa  mov x1, x0
0x0669A3E0: 22008052  movz w2, #0x1
0x0669A3E4: e00314aa  mov x0, x20
0x0669A3E8: e3031faa  mov x3, xzr
0x0669A3EC: b2442194  bl #0x6eeb6b4
0x0669A3F0: 681640f9  ldr x8, [x19, #0x28]
0x0669A3F4: e80000b4  cbz x8, #0x669a410
0x0669A3F8: 020d40f9  ldr x2, [x8, #0x18]
0x0669A3FC: 002140f9  ldr x0, [x8, #0x40]
0x0669A400: 011540f9  ldr x1, [x8, #0x28]
0x0669A404: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669A408: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669A40C: 40001fd6  br x2
0x0669A410: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669A414: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669A418: c0035fd6  ret
0x0669A41C: 249a2b97  bl #0x3180cac


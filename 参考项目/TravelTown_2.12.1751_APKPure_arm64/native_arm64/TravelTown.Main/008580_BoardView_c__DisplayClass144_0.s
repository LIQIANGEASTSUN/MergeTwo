; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8580 .BoardView.<>c__DisplayClass144_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6697E34 | public void .ctor() { }
; bytes=8 sha256=b597678a139446a0a10091af1c1198b87d495a20233ed49f9cad7faf1b92f973 status=arm64_complete_bound indexed_start=True
0x06697E34: e1031faa  mov x1, xzr
0x06697E38: f109c117  b #0x56da5fc

; RVA 0x669A130 | internal void <SlideItemOut>b__0() { }
; bytes=272 sha256=cd9a209d981937f89682bc779b25b606daf920f3717c8e0746e965e3107c438f status=arm64_complete_bound indexed_start=True
0x0669A130: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0669A134: f44f01a9  stp x20, x19, [sp, #0x10]
0x0669A138: 74b400d0  adrp x20, #0x7d28000
0x0669A13C: 88da4b39  ldrb w8, [x20, #0x2f6]
0x0669A140: f30300aa  mov x19, x0
0x0669A144: 28010037  tbnz w8, #0, #0x669a168
0x0669A148: 608300f0  adrp x0, #0x7709000
0x0669A14C: 005843f9  ldr x0, [x0, #0x6b0]
0x0669A150: 329a2b97  bl #0x3180a18
0x0669A154: 208100d0  adrp x0, #0x76c0000
0x0669A158: 002c44f9  ldr x0, [x0, #0x858]
0x0669A15C: 2f9a2b97  bl #0x3180a18
0x0669A160: 28008052  movz w8, #0x1
0x0669A164: 88da0b39  strb w8, [x20, #0x2f6]
0x0669A168: 680a40f9  ldr x8, [x19, #0x10]
0x0669A16C: 880600b4  cbz x8, #0x669a23c
0x0669A170: 00b540f9  ldr x0, [x8, #0x168]
0x0669A174: 400600b4  cbz x0, #0x669a23c
0x0669A178: 688300f0  adrp x8, #0x7709000
0x0669A17C: 085943f9  ldr x8, [x8, #0x6b0]
0x0669A180: 610e40f9  ldr x1, [x19, #0x18]
0x0669A184: 020140f9  ldr x2, [x8]
0x0669A188: 5e99b097  bl #0x52c0700
0x0669A18C: 600a40f9  ldr x0, [x19, #0x10]
0x0669A190: 600500b4  cbz x0, #0x669a23c
0x0669A194: e8daff97  bl #0x6690d34
0x0669A198: 750e40f9  ldr x21, [x19, #0x18]
0x0669A19C: 150500b4  cbz x21, #0x669a23c
0x0669A1A0: 2a8100d0  adrp x10, #0x76c0000
0x0669A1A4: a80240f9  ldr x8, [x21]
0x0669A1A8: 4a2d44f9  ldr x10, [x10, #0x858]
0x0669A1AC: f40300aa  mov x20, x0
0x0669A1B0: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A1B4: 410140f9  ldr x1, [x10]
0x0669A1B8: 290100b4  cbz x9, #0x669a1dc
0x0669A1BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A1C0: 4a210091  add x10, x10, #8
0x0669A1C4: 4b815ff8  ldur x11, [x10, #-8]
0x0669A1C8: 7f0101eb  cmp x11, x1
0x0669A1CC: 00010054  b.eq #0x669a1ec
0x0669A1D0: 290500f1  subs x9, x9, #1
0x0669A1D4: 4a410091  add x10, x10, #0x10
0x0669A1D8: 61ffff54  b.ne #0x669a1c4
0x0669A1DC: 02018052  movz w2, #0x8
0x0669A1E0: e00315aa  mov x0, x21
0x0669A1E4: 4bf22a97  bl #0x3156b10
0x0669A1E8: 05000014  b #0x669a1fc
0x0669A1EC: 490140b9  ldr w9, [x10]
0x0669A1F0: 29210011  add w9, w9, #8
0x0669A1F4: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A1F8: 00e10491  add x0, x8, #0x138
0x0669A1FC: 080440a9  ldp x8, x1, [x0]
0x0669A200: e00315aa  mov x0, x21
0x0669A204: 00013fd6  blr x8
0x0669A208: b40100b4  cbz x20, #0x669a23c
0x0669A20C: e10300aa  mov x1, x0
0x0669A210: e00314aa  mov x0, x20
0x0669A214: e2031faa  mov x2, xzr
0x0669A218: 9df70694  bl #0x685808c
0x0669A21C: 681240f9  ldr x8, [x19, #0x20]
0x0669A220: e80000b4  cbz x8, #0x669a23c
0x0669A224: 020d40f9  ldr x2, [x8, #0x18]
0x0669A228: 002140f9  ldr x0, [x8, #0x40]
0x0669A22C: 011540f9  ldr x1, [x8, #0x28]
0x0669A230: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669A234: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669A238: 40001fd6  br x2
0x0669A23C: 9c9a2b97  bl #0x3180cac


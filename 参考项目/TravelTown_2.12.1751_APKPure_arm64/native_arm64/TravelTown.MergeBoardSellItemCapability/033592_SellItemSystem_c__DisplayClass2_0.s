; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33592 .SellItemSystem.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A5FE30 | public void .ctor() { }
; bytes=8 sha256=5e646ccd73b129d17bb8123f723bfa99f535ee2e8723ad3bce3cbd5021fb4e4b status=arm64_complete_bound indexed_start=True
0x06A5FE30: e1031faa  mov x1, xzr
0x06A5FE34: f2e9b117  b #0x56da5fc

; RVA 0x6A5FE48 | internal bool <Tick>b__0(ValueTuple<Entity, IdComponent, BoardTilePositionComponent> query) { }
; bytes=220 sha256=715b5b1bfc28c998379ad28452e993f6f98c4db46f6476f6a9bb137957096ea0 status=arm64_complete_bound indexed_start=True
0x06A5FE48: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A5FE4C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A5FE50: 559600f0  adrp x21, #0x7d2a000
0x06A5FE54: a87a5939  ldrb w8, [x21, #0x65e]
0x06A5FE58: f40301aa  mov x20, x1
0x06A5FE5C: f30300aa  mov x19, x0
0x06A5FE60: c8000037  tbnz w8, #0, #0x6a5fe78
0x06A5FE64: 806600b0  adrp x0, #0x7730000
0x06A5FE68: 001443f9  ldr x0, [x0, #0x628]
0x06A5FE6C: eb821c97  bl #0x3180a18
0x06A5FE70: 28008052  movz w8, #0x1
0x06A5FE74: a87a1939  strb w8, [x21, #0x65e]
0x06A5FE78: 680a40f9  ldr x8, [x19, #0x10]
0x06A5FE7C: 280500b4  cbz x8, #0x6a5ff20
0x06A5FE80: 893a40b9  ldr w9, [x20, #0x38]
0x06A5FE84: 081140b9  ldr w8, [x8, #0x10]
0x06A5FE88: 3f01086b  cmp w9, w8
0x06A5FE8C: 01030054  b.ne #0x6a5feec
0x06A5FE90: 680e40f9  ldr x8, [x19, #0x18]
0x06A5FE94: 680400b4  cbz x8, #0x6a5ff20
0x06A5FE98: 130940f9  ldr x19, [x8, #0x10]
0x06A5FE9C: 330400b4  cbz x19, #0x6a5ff20
0x06A5FEA0: 8a6600b0  adrp x10, #0x7730000
0x06A5FEA4: 680240f9  ldr x8, [x19]
0x06A5FEA8: 940240f9  ldr x20, [x20]
0x06A5FEAC: 4a1543f9  ldr x10, [x10, #0x628]
0x06A5FEB0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5FEB4: 410140f9  ldr x1, [x10]
0x06A5FEB8: 290100b4  cbz x9, #0x6a5fedc
0x06A5FEBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A5FEC0: 4a210091  add x10, x10, #8
0x06A5FEC4: 4b815ff8  ldur x11, [x10, #-8]
0x06A5FEC8: 7f0101eb  cmp x11, x1
0x06A5FECC: 80010054  b.eq #0x6a5fefc
0x06A5FED0: 290500f1  subs x9, x9, #1
0x06A5FED4: 4a410091  add x10, x10, #0x10
0x06A5FED8: 61ffff54  b.ne #0x6a5fec4
0x06A5FEDC: e00313aa  mov x0, x19
0x06A5FEE0: e2031f2a  mov w2, wzr
0x06A5FEE4: 0bdb1b97  bl #0x3156b10
0x06A5FEE8: 08000014  b #0x6a5ff08
0x06A5FEEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A5FEF0: e0031f2a  mov w0, wzr
0x06A5FEF4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A5FEF8: c0035fd6  ret
0x06A5FEFC: 490180b9  ldrsw x9, [x10]
0x06A5FF00: 0811098b  add x8, x8, x9, lsl #4
0x06A5FF04: 00e10491  add x0, x8, #0x138
0x06A5FF08: 030840a9  ldp x3, x2, [x0]
0x06A5FF0C: e00313aa  mov x0, x19
0x06A5FF10: e10314aa  mov x1, x20
0x06A5FF14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A5FF18: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A5FF1C: 60001fd6  br x3
0x06A5FF20: 63831c97  bl #0x3180cac


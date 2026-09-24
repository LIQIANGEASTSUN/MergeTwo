; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 624 .HintUtil.<>c__DisplayClass7_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6274AC0 | public void .ctor() { }
; bytes=8 sha256=2cab687724894697090108fcd3c9f815ac8cd7085017d727eb70b34d3c650da0 status=arm64_complete_bound indexed_start=True
0x06274AC0: e1031faa  mov x1, xzr
0x06274AC4: ce96d117  b #0x56da5fc

; RVA 0x6277CB4 | internal int <GetCollectable>b__1(IdComponent idComponent) { }
; bytes=180 sha256=bad8642c3fd809d609d7e07b3a4c0a77065de52fb574d8ed3bc58756d1c33fac status=arm64_complete_bound indexed_start=True
0x06277CB4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06277CB8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06277CBC: 75d500d0  adrp x21, #0x7d25000
0x06277CC0: a8925139  ldrb w8, [x21, #0x464]
0x06277CC4: f40301aa  mov x20, x1
0x06277CC8: f30300aa  mov x19, x0
0x06277CCC: c8000037  tbnz w8, #0, #0x6277ce4
0x06277CD0: 00a000f0  adrp x0, #0x767a000
0x06277CD4: 004c42f9  ldr x0, [x0, #0x498]
0x06277CD8: 50233c97  bl #0x3180a18
0x06277CDC: 28008052  movz w8, #0x1
0x06277CE0: a8921139  strb w8, [x21, #0x464]
0x06277CE4: 140400b4  cbz x20, #0x6277d64
0x06277CE8: 730a40f9  ldr x19, [x19, #0x10]
0x06277CEC: d30300b4  cbz x19, #0x6277d64
0x06277CF0: 0aa000f0  adrp x10, #0x767a000
0x06277CF4: 680240f9  ldr x8, [x19]
0x06277CF8: 4a4d42f9  ldr x10, [x10, #0x498]
0x06277CFC: 941a40f9  ldr x20, [x20, #0x30]
0x06277D00: 095d4279  ldrh w9, [x8, #0x12e]
0x06277D04: 410140f9  ldr x1, [x10]
0x06277D08: 290100b4  cbz x9, #0x6277d2c
0x06277D0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06277D10: 4a210091  add x10, x10, #8
0x06277D14: 4b815ff8  ldur x11, [x10, #-8]
0x06277D18: 7f0101eb  cmp x11, x1
0x06277D1C: 00010054  b.eq #0x6277d3c
0x06277D20: 290500f1  subs x9, x9, #1
0x06277D24: 4a410091  add x10, x10, #0x10
0x06277D28: 61ffff54  b.ne #0x6277d14
0x06277D2C: 22038052  movz w2, #0x19
0x06277D30: e00313aa  mov x0, x19
0x06277D34: 777b3b97  bl #0x3156b10
0x06277D38: 05000014  b #0x6277d4c
0x06277D3C: 490140b9  ldr w9, [x10]
0x06277D40: 29650011  add w9, w9, #0x19
0x06277D44: 08d1298b  add x8, x8, w9, sxtw #4
0x06277D48: 00e10491  add x0, x8, #0x138
0x06277D4C: 030840a9  ldp x3, x2, [x0]
0x06277D50: e00313aa  mov x0, x19
0x06277D54: e10314aa  mov x1, x20
0x06277D58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06277D5C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06277D60: 60001fd6  br x3
0x06277D64: d2233c97  bl #0x3180cac


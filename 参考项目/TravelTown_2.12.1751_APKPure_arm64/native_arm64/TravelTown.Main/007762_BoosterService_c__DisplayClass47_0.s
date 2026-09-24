; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7762 .BoosterService.<>c__DisplayClass47_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C38FC | public void .ctor() { }
; bytes=8 sha256=3686b7d03128c86f99096fb332323f9e65db5c2777b1d7955907fb3e88027386 status=arm64_complete_bound indexed_start=True
0x065C38FC: e1031faa  mov x1, xzr
0x065C3900: 3f5bc417  b #0x56da5fc

; RVA 0x65C4C58 | internal bool <ForceDeactivateBooster>b__0(IBoosterController q) { }
; bytes=304 sha256=f32b56a2adc30d1b948ef21bdc204814c7a53e56421a90a61b94319e162fb842 status=arm64_complete_bound indexed_start=True
0x065C4C58: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C4C5C: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C4C60: 15bb00f0  adrp x21, #0x7d27000
0x065C4C64: a8fe6439  ldrb w8, [x21, #0x93f]
0x065C4C68: f40301aa  mov x20, x1
0x065C4C6C: f30300aa  mov x19, x0
0x065C4C70: 28010037  tbnz w8, #0, #0x65c4c94
0x065C4C74: e08900f0  adrp x0, #0x7703000
0x065C4C78: 00e040f9  ldr x0, [x0, #0x1c0]
0x065C4C7C: 67ef2e97  bl #0x3180a18
0x065C4C80: a08500b0  adrp x0, #0x7679000
0x065C4C84: 00d443f9  ldr x0, [x0, #0x7a8]
0x065C4C88: 64ef2e97  bl #0x3180a18
0x065C4C8C: 28008052  movz w8, #0x1
0x065C4C90: a8fe2439  strb w8, [x21, #0x93f]
0x065C4C94: 940700b4  cbz x20, #0x65c4d84
0x065C4C98: ea8900f0  adrp x10, #0x7703000
0x065C4C9C: 880240f9  ldr x8, [x20]
0x065C4CA0: 4ae140f9  ldr x10, [x10, #0x1c0]
0x065C4CA4: 095d4279  ldrh w9, [x8, #0x12e]
0x065C4CA8: 410140f9  ldr x1, [x10]
0x065C4CAC: 290100b4  cbz x9, #0x65c4cd0
0x065C4CB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C4CB4: 4a210091  add x10, x10, #8
0x065C4CB8: 4b815ff8  ldur x11, [x10, #-8]
0x065C4CBC: 7f0101eb  cmp x11, x1
0x065C4CC0: 00010054  b.eq #0x65c4ce0
0x065C4CC4: 290500f1  subs x9, x9, #1
0x065C4CC8: 4a410091  add x10, x10, #0x10
0x065C4CCC: 61ffff54  b.ne #0x65c4cb8
0x065C4CD0: e00314aa  mov x0, x20
0x065C4CD4: e2031f2a  mov w2, wzr
0x065C4CD8: 8e472e97  bl #0x3156b10
0x065C4CDC: 04000014  b #0x65c4cec
0x065C4CE0: 490180b9  ldrsw x9, [x10]
0x065C4CE4: 0811098b  add x8, x8, x9, lsl #4
0x065C4CE8: 00e10491  add x0, x8, #0x138
0x065C4CEC: 080440a9  ldp x8, x1, [x0]
0x065C4CF0: e00314aa  mov x0, x20
0x065C4CF4: 00013fd6  blr x8
0x065C4CF8: 740a40f9  ldr x20, [x19, #0x10]
0x065C4CFC: 540400b4  cbz x20, #0x65c4d84
0x065C4D00: aa8500b0  adrp x10, #0x7679000
0x065C4D04: 880240f9  ldr x8, [x20]
0x065C4D08: 4ad543f9  ldr x10, [x10, #0x7a8]
0x065C4D0C: f303002a  mov w19, w0
0x065C4D10: 095d4279  ldrh w9, [x8, #0x12e]
0x065C4D14: 410140f9  ldr x1, [x10]
0x065C4D18: 290100b4  cbz x9, #0x65c4d3c
0x065C4D1C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C4D20: 4a210091  add x10, x10, #8
0x065C4D24: 4b815ff8  ldur x11, [x10, #-8]
0x065C4D28: 7f0101eb  cmp x11, x1
0x065C4D2C: 00010054  b.eq #0x65c4d4c
0x065C4D30: 290500f1  subs x9, x9, #1
0x065C4D34: 4a410091  add x10, x10, #0x10
0x065C4D38: 61ffff54  b.ne #0x65c4d24
0x065C4D3C: 22008052  movz w2, #0x1
0x065C4D40: e00314aa  mov x0, x20
0x065C4D44: 73472e97  bl #0x3156b10
0x065C4D48: 05000014  b #0x65c4d5c
0x065C4D4C: 490140b9  ldr w9, [x10]
0x065C4D50: 29050011  add w9, w9, #1
0x065C4D54: 08d1298b  add x8, x8, w9, sxtw #4
0x065C4D58: 00e10491  add x0, x8, #0x138
0x065C4D5C: 080440a9  ldp x8, x1, [x0]
0x065C4D60: e00314aa  mov x0, x20
0x065C4D64: 00013fd6  blr x8
0x065C4D68: e00000b4  cbz x0, #0x65c4d84
0x065C4D6C: 081440b9  ldr w8, [x0, #0x14]
0x065C4D70: 7f02086b  cmp w19, w8
0x065C4D74: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C4D78: e0179f1a  cset w0, eq
0x065C4D7C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C4D80: c0035fd6  ret
0x065C4D84: caef2e97  bl #0x3180cac


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7789 .BoosterActivator.<>c__DisplayClass11_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C8C00 | public void .ctor() { }
; bytes=8 sha256=7d10925d3172c44734be9117a44a5dc107150b7744027003dad900c5487ca652 status=arm64_complete_bound indexed_start=True
0x065C8C00: e1031faa  mov x1, xzr
0x065C8C04: 7e46c417  b #0x56da5fc

; RVA 0x65C8EF8 | internal bool <BoosterActivated>b__0(IBoosterController q) { }
; bytes=184 sha256=7dd2b4f81e85da5bee74fe20334d7764b67b55e519faa133c2c4eb9c2e64e41a status=arm64_complete_bound indexed_start=True
0x065C8EF8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C8EFC: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C8F00: f5ba00f0  adrp x21, #0x7d27000
0x065C8F04: a8ca6539  ldrb w8, [x21, #0x972]
0x065C8F08: f40301aa  mov x20, x1
0x065C8F0C: f30300aa  mov x19, x0
0x065C8F10: c8000037  tbnz w8, #0, #0x65c8f28
0x065C8F14: c08900f0  adrp x0, #0x7703000
0x065C8F18: 00e040f9  ldr x0, [x0, #0x1c0]
0x065C8F1C: bfde2e97  bl #0x3180a18
0x065C8F20: 28008052  movz w8, #0x1
0x065C8F24: a8ca2539  strb w8, [x21, #0x972]
0x065C8F28: 340400b4  cbz x20, #0x65c8fac
0x065C8F2C: ca8900f0  adrp x10, #0x7703000
0x065C8F30: 880240f9  ldr x8, [x20]
0x065C8F34: 4ae140f9  ldr x10, [x10, #0x1c0]
0x065C8F38: 095d4279  ldrh w9, [x8, #0x12e]
0x065C8F3C: 410140f9  ldr x1, [x10]
0x065C8F40: 290100b4  cbz x9, #0x65c8f64
0x065C8F44: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C8F48: 4a210091  add x10, x10, #8
0x065C8F4C: 4b815ff8  ldur x11, [x10, #-8]
0x065C8F50: 7f0101eb  cmp x11, x1
0x065C8F54: 00010054  b.eq #0x65c8f74
0x065C8F58: 290500f1  subs x9, x9, #1
0x065C8F5C: 4a410091  add x10, x10, #0x10
0x065C8F60: 61ffff54  b.ne #0x65c8f4c
0x065C8F64: e00314aa  mov x0, x20
0x065C8F68: e2031f2a  mov w2, wzr
0x065C8F6C: e9362e97  bl #0x3156b10
0x065C8F70: 04000014  b #0x65c8f80
0x065C8F74: 490180b9  ldrsw x9, [x10]
0x065C8F78: 0811098b  add x8, x8, x9, lsl #4
0x065C8F7C: 00e10491  add x0, x8, #0x138
0x065C8F80: 080440a9  ldp x8, x1, [x0]
0x065C8F84: e00314aa  mov x0, x20
0x065C8F88: 00013fd6  blr x8
0x065C8F8C: 680a40f9  ldr x8, [x19, #0x10]
0x065C8F90: e80000b4  cbz x8, #0x65c8fac
0x065C8F94: 083940b9  ldr w8, [x8, #0x38]
0x065C8F98: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C8F9C: 1f00086b  cmp w0, w8
0x065C8FA0: e0179f1a  cset w0, eq
0x065C8FA4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C8FA8: c0035fd6  ret
0x065C8FAC: 40df2e97  bl #0x3180cac

; RVA 0x65C8FB0 | internal bool <BoosterActivated>b__1(RemoteBoosterData a) { }
; bytes=40 sha256=3ba441082a54f24853b39e939dd4cdf9b1dd3da72feb3b0acdb989d1b6da06b0 status=arm64_complete_bound indexed_start=True
0x065C8FB0: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C8FB4: 010100b4  cbz x1, #0x65c8fd4
0x065C8FB8: 080840f9  ldr x8, [x0, #0x10]
0x065C8FBC: c80000b4  cbz x8, #0x65c8fd4
0x065C8FC0: 201840f9  ldr x0, [x1, #0x30]
0x065C8FC4: 011940f9  ldr x1, [x8, #0x30]
0x065C8FC8: e2031faa  mov x2, xzr
0x065C8FCC: fe0741f8  ldr x30, [sp], #0x10
0x065C8FD0: 2886bc17  b #0x54ea870
0x065C8FD4: 36df2e97  bl #0x3180cac


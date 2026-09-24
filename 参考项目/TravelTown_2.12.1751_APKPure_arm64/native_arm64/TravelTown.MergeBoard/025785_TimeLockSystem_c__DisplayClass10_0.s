; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25785 .TimeLockSystem.<>c__DisplayClass10_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A78E1C | public void .ctor() { }
; bytes=8 sha256=462a8848cf8be1b078b13c5ce912bbe8dfb99ea9e3c3737ee4054767bed3d3e0 status=arm64_complete_bound indexed_start=True
0x06A78E1C: e1031faa  mov x1, xzr
0x06A78E20: f785b117  b #0x56da5fc

; RVA 0x6A78EEC | internal bool <HasOtherUnlockInProgress>b__0(ValueTuple<Entity, TimeLockComponent> e) { }
; bytes=188 sha256=d7d8dc1b885d78553b8c41a2d01857fd199568b094712c0915efe2c3d5e9abf6 status=arm64_complete_bound indexed_start=True
0x06A78EEC: ff4301d1  sub sp, sp, #0x50
0x06A78EF0: fe1300f9  str x30, [sp, #0x20]
0x06A78EF4: f65703a9  stp x22, x21, [sp, #0x30]
0x06A78EF8: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A78EFC: 959500d0  adrp x21, #0x7d2a000
0x06A78F00: a86a5c39  ldrb w8, [x21, #0x71a]
0x06A78F04: f30301aa  mov x19, x1
0x06A78F08: f40300aa  mov x20, x0
0x06A78F0C: c8000037  tbnz w8, #0, #0x6a78f24
0x06A78F10: c06500b0  adrp x0, #0x7731000
0x06A78F14: 00c843f9  ldr x0, [x0, #0x790]
0x06A78F18: c01e1c97  bl #0x3180a18
0x06A78F1C: 28008052  movz w8, #0x1
0x06A78F20: a86a1c39  strb w8, [x21, #0x71a]
0x06A78F24: 680240f9  ldr x8, [x19]
0x06A78F28: 890a40f9  ldr x9, [x20, #0x10]
0x06A78F2C: 1f0109eb  cmp x8, x9
0x06A78F30: 00030054  b.eq #0x6a78f90
0x06A78F34: d56500b0  adrp x21, #0x7731000
0x06A78F38: b5ca43f9  ldr x21, [x21, #0x790]
0x06A78F3C: 881a40b9  ldr w8, [x20, #0x18]
0x06A78F40: 761e40b9  ldr w22, [x19, #0x1c]
0x06A78F44: e1b30091  add x1, sp, #0x2c
0x06A78F48: a00240f9  ldr x0, [x21]
0x06A78F4C: e82f00b9  str w8, [sp, #0x2c]
0x06A78F50: 111f1c97  bl #0x3180b94
0x06A78F54: a80240f9  ldr x8, [x21]
0x06A78F58: e10300aa  mov x1, x0
0x06A78F5C: 09008092  movn x9, #0
0x06A78F60: e0230091  add x0, sp, #8
0x06A78F64: e2031faa  mov x2, xzr
0x06A78F68: e8a700a9  stp x8, x9, [sp, #8]
0x06A78F6C: f61b00b9  str w22, [sp, #0x18]
0x06A78F70: da51b197  bl #0x56cd6d8
0x06A78F74: e0000036  tbz w0, #0, #0x6a78f90
0x06A78F78: 68824039  ldrb w8, [x19, #0x20]
0x06A78F7C: a8000034  cbz w8, #0x6a78f90
0x06A78F80: 600640fd  ldr d0, [x19, #8]
0x06A78F84: 0820601e  fcmp d0, #0.0
0x06A78F88: e0d79f1a  cset w0, gt
0x06A78F8C: 02000014  b #0x6a78f94
0x06A78F90: e0031f2a  mov w0, wzr
0x06A78F94: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A78F98: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A78F9C: fe1340f9  ldr x30, [sp, #0x20]
0x06A78FA0: ff430191  add sp, sp, #0x50
0x06A78FA4: c0035fd6  ret


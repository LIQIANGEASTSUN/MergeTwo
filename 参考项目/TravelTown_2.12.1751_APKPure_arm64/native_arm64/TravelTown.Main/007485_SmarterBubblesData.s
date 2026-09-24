; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7485 Merger.Bubbles.Model.Data.SmarterBubblesData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65829D4 | public void .ctor() { }
; bytes=172 sha256=59e65538fd81a65a4a04f630a0dfdc5356496d7b6cc6620644eee0f1c8405a7e status=arm64_complete_bound indexed_start=True
0x065829D4: fe0f1df8  str x30, [sp, #-0x30]!
0x065829D8: f65701a9  stp x22, x21, [sp, #0x10]
0x065829DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x065829E0: 34bd00b0  adrp x20, #0x7d27000
0x065829E4: f68b00d0  adrp x22, #0x7700000
0x065829E8: f58b00d0  adrp x21, #0x7700000
0x065829EC: 88125a39  ldrb w8, [x20, #0x684]
0x065829F0: d6e244f9  ldr x22, [x22, #0x9c0]
0x065829F4: b5e644f9  ldr x21, [x21, #0x9c8]
0x065829F8: f30300aa  mov x19, x0
0x065829FC: 28010037  tbnz w8, #0, #0x6582a20
0x06582A00: e08b00d0  adrp x0, #0x7700000
0x06582A04: 00e444f9  ldr x0, [x0, #0x9c8]
0x06582A08: 04f82f97  bl #0x3180a18
0x06582A0C: e08b00d0  adrp x0, #0x7700000
0x06582A10: 00e044f9  ldr x0, [x0, #0x9c0]
0x06582A14: 01f82f97  bl #0x3180a18
0x06582A18: 28008052  movz w8, #0x1
0x06582A1C: 88121a39  strb w8, [x20, #0x684]
0x06582A20: c00240f9  ldr x0, [x22]
0x06582A24: 9ff82f97  bl #0x3180ca0
0x06582A28: a10240f9  ldr x1, [x21]
0x06582A2C: f40300aa  mov x20, x0
0x06582A30: 82046b97  bl #0x4043c38
0x06582A34: e00313aa  mov x0, x19
0x06582A38: 140c01f8  str x20, [x0, #0x10]!
0x06582A3C: e10314aa  mov x1, x20
0x06582A40: e1f72f97  bl #0x31809c4
0x06582A44: c00240f9  ldr x0, [x22]
0x06582A48: 96f82f97  bl #0x3180ca0
0x06582A4C: a10240f9  ldr x1, [x21]
0x06582A50: f40300aa  mov x20, x0
0x06582A54: 79046b97  bl #0x4043c38
0x06582A58: e00313aa  mov x0, x19
0x06582A5C: 148c01f8  str x20, [x0, #0x18]!
0x06582A60: e10314aa  mov x1, x20
0x06582A64: d8f72f97  bl #0x31809c4
0x06582A68: e00313aa  mov x0, x19
0x06582A6C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06582A70: f65741a9  ldp x22, x21, [sp, #0x10]
0x06582A74: e1031faa  mov x1, xzr
0x06582A78: fe0743f8  ldr x30, [sp], #0x30
0x06582A7C: e05ec517  b #0x56da5fc


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1087 MergeEngine.ECS.Components.Items.SellableComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDCF0 | public void .ctor(SellCapability capability, Entity entity) { }
; bytes=96 sha256=6d89594e20aa770e519997db24cebf67950d8a5569deb89f7ce647c0f3349db5 status=arm64_complete_bound indexed_start=True
0x068FDCF0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDCF4: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDCF8: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDCFC: 76a10090  adrp x22, #0x7d29000
0x068FDD00: 577100b0  adrp x23, #0x7726000
0x068FDD04: c8ea6239  ldrb w8, [x22, #0x8ba]
0x068FDD08: f7d643f9  ldr x23, [x23, #0x7a8]
0x068FDD0C: f30302aa  mov x19, x2
0x068FDD10: f40301aa  mov x20, x1
0x068FDD14: f50300aa  mov x21, x0
0x068FDD18: c8000037  tbnz w8, #0, #0x68fdd30
0x068FDD1C: 407100b0  adrp x0, #0x7726000
0x068FDD20: 00d443f9  ldr x0, [x0, #0x7a8]
0x068FDD24: 3d0b2297  bl #0x3180a18
0x068FDD28: 28008052  movz w8, #0x1
0x068FDD2C: c8ea2239  strb w8, [x22, #0x8ba]
0x068FDD30: e30240f9  ldr x3, [x23]
0x068FDD34: e00315aa  mov x0, x21
0x068FDD38: e10314aa  mov x1, x20
0x068FDD3C: e20313aa  mov x2, x19
0x068FDD40: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDD44: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDD48: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDD4C: 83859117  b #0x4d5f358


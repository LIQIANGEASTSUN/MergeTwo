; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1084 MergeEngine.ECS.Components.Items.OrderSpawnComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDB40 | public string get_OrderTreeId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x068FDB40: 001440f9  ldr x0, [x0, #0x28]
0x068FDB44: c0035fd6  ret

; RVA 0x68FDB48 | public void .ctor(OrderSpawnCapability capability, Entity entity) { }
; bytes=120 sha256=88d36337a6e3db4fa445bbc305a8622968e84b463b3bd3000b1f7dbe883373e3 status=arm64_complete_bound indexed_start=True
0x068FDB48: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDB4C: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDB50: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDB54: 76a10090  adrp x22, #0x7d29000
0x068FDB58: 577100b0  adrp x23, #0x7726000
0x068FDB5C: c8da6239  ldrb w8, [x22, #0x8b6]
0x068FDB60: f7c643f9  ldr x23, [x23, #0x788]
0x068FDB64: f50302aa  mov x21, x2
0x068FDB68: f40301aa  mov x20, x1
0x068FDB6C: f30300aa  mov x19, x0
0x068FDB70: c8000037  tbnz w8, #0, #0x68fdb88
0x068FDB74: 407100b0  adrp x0, #0x7726000
0x068FDB78: 00c443f9  ldr x0, [x0, #0x788]
0x068FDB7C: a70b2297  bl #0x3180a18
0x068FDB80: 28008052  movz w8, #0x1
0x068FDB84: c8da2239  strb w8, [x22, #0x8b6]
0x068FDB88: e30240f9  ldr x3, [x23]
0x068FDB8C: e00313aa  mov x0, x19
0x068FDB90: e10314aa  mov x1, x20
0x068FDB94: e20315aa  mov x2, x21
0x068FDB98: f0859197  bl #0x4d5f358
0x068FDB9C: 140100b4  cbz x20, #0x68fdbbc
0x068FDBA0: 810e40f9  ldr x1, [x20, #0x18]
0x068FDBA4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDBA8: 618e02f8  str x1, [x19, #0x28]!
0x068FDBAC: e00313aa  mov x0, x19
0x068FDBB0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDBB4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDBB8: 830b2217  b #0x31809c4
0x068FDBBC: 3c0c2297  bl #0x3180cac


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1088 MergeEngine.ECS.Components.Items.SplitComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDD50 | public void .ctor(SplitCapability capability, Entity entity) { }
; bytes=96 sha256=77b3eef057e563cd5f777ede486baf98007f9a203d00eca12b7a71cb8e966575 status=arm64_complete_bound indexed_start=True
0x068FDD50: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDD54: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDD58: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDD5C: 76a10090  adrp x22, #0x7d29000
0x068FDD60: 577100b0  adrp x23, #0x7726000
0x068FDD64: c8ee6239  ldrb w8, [x22, #0x8bb]
0x068FDD68: f7da43f9  ldr x23, [x23, #0x7b0]
0x068FDD6C: f30302aa  mov x19, x2
0x068FDD70: f40301aa  mov x20, x1
0x068FDD74: f50300aa  mov x21, x0
0x068FDD78: c8000037  tbnz w8, #0, #0x68fdd90
0x068FDD7C: 407100b0  adrp x0, #0x7726000
0x068FDD80: 00d843f9  ldr x0, [x0, #0x7b0]
0x068FDD84: 250b2297  bl #0x3180a18
0x068FDD88: 28008052  movz w8, #0x1
0x068FDD8C: c8ee2239  strb w8, [x22, #0x8bb]
0x068FDD90: e30240f9  ldr x3, [x23]
0x068FDD94: e00315aa  mov x0, x21
0x068FDD98: e10314aa  mov x1, x20
0x068FDD9C: e20313aa  mov x2, x19
0x068FDDA0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDDA4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDDA8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDDAC: 6b859117  b #0x4d5f358


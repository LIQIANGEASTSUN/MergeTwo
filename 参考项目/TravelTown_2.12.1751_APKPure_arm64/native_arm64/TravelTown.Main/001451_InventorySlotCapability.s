; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1451 MergeEngine.Configuration.Capabilities.InventorySlotCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601085C | public void .ctor(int slotIndex = 0, InventorySlotType slotType = 0, string slotId) { }
; bytes=68 sha256=438ff91d14c3e29f7f3c3dd09a9341f65d3fd5bedff8c2dde6da4cb9b65d7668 status=arm64_complete_bound indexed_start=True
0x0601085C: fe0f1df8  str x30, [sp, #-0x30]!
0x06010860: f65701a9  stp x22, x21, [sp, #0x10]
0x06010864: f44f02a9  stp x20, x19, [sp, #0x20]
0x06010868: f503012a  mov w21, w1
0x0601086C: e1031faa  mov x1, xzr
0x06010870: f30303aa  mov x19, x3
0x06010874: f403022a  mov w20, w2
0x06010878: f60300aa  mov x22, x0
0x0601087C: 6027db97  bl #0x56da5fc
0x06010880: d30e02f8  str x19, [x22, #0x20]!
0x06010884: d5d23e29  stp w21, w20, [x22, #-0xc]
0x06010888: e00316aa  mov x0, x22
0x0601088C: e10313aa  mov x1, x19
0x06010890: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06010894: f65741a9  ldp x22, x21, [sp, #0x10]
0x06010898: fe0743f8  ldr x30, [sp], #0x30
0x0601089C: 4ac04517  b #0x31809c4


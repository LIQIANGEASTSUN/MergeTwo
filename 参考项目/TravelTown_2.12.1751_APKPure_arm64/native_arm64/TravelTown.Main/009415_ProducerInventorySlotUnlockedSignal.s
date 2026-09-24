; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9415 Merger.Game.Signal.ProducerInventorySlotUnlockedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676C2F8 | public void .ctor(string mergeItemUniqueId, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, int numNewProducers, InventorySlotType type) { }
; bytes=64 sha256=f3d5b105757c23f189966c4525aad4f0a6ebe26a8b1f5819021e65ea3c9f15a1 status=arm64_complete_bound indexed_start=True
0x0676C2F8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676C2FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676C300: f30301aa  mov x19, x1
0x0676C304: e103022a  mov w1, w2
0x0676C308: e203032a  mov w2, w3
0x0676C30C: e303042a  mov w3, w4
0x0676C310: e403062a  mov w4, w6
0x0676C314: e6031faa  mov x6, xzr
0x0676C318: f40300aa  mov x20, x0
0x0676C31C: 261fe297  bl #0x5ff3fb4
0x0676C320: 938e02f8  str x19, [x20, #0x28]!
0x0676C324: e00314aa  mov x0, x20
0x0676C328: e10313aa  mov x1, x19
0x0676C32C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676C330: fe0742f8  ldr x30, [sp], #0x20
0x0676C334: a4512817  b #0x31809c4


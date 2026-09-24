; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9429 Merger.Game.Signal.ScheduledItemActivatedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676C854 | public AbstractSchedulerItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676C854: 000840f9  ldr x0, [x0, #0x10]
0x0676C858: c0035fd6  ret

; RVA 0x676C85C | public void .ctor(AbstractSchedulerItem item) { }
; bytes=48 sha256=d4b06fc1c17a442c49f5717d623dd51a71b4ec1fc47d22195ed127e614c55315 status=arm64_complete_bound indexed_start=True
0x0676C85C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676C860: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676C864: f30301aa  mov x19, x1
0x0676C868: e1031faa  mov x1, xzr
0x0676C86C: f40300aa  mov x20, x0
0x0676C870: 63b7bd97  bl #0x56da5fc
0x0676C874: 930e01f8  str x19, [x20, #0x10]!
0x0676C878: e00314aa  mov x0, x20
0x0676C87C: e10313aa  mov x1, x19
0x0676C880: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676C884: fe0742f8  ldr x30, [sp], #0x20
0x0676C888: 4f502817  b #0x31809c4


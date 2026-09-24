; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25919 Merger.MergeBoard.Data.FeedingCombinationConsumedItemSnapshot
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85560 | public void .ctor(ItemPayloadBase itemPayloadBase) { }
; bytes=48 sha256=9f955333cc1a584ee146f3408226c4fbbe336d6c0e6373b5d7b799ec2982c5fb status=arm64_complete_bound indexed_start=True
0x06A85560: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A85564: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85568: f30301aa  mov x19, x1
0x06A8556C: e1031faa  mov x1, xzr
0x06A85570: f40300aa  mov x20, x0
0x06A85574: 2254b197  bl #0x56da5fc
0x06A85578: 930e01f8  str x19, [x20, #0x10]!
0x06A8557C: e00314aa  mov x0, x20
0x06A85580: e10313aa  mov x1, x19
0x06A85584: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85588: fe0742f8  ldr x30, [sp], #0x20
0x06A8558C: 0eed1b17  b #0x31809c4


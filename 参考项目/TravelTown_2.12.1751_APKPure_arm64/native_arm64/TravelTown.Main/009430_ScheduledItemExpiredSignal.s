; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9430 Merger.Game.Signal.ScheduledItemExpiredSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676C88C | public AbstractSchedulerItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676C88C: 000840f9  ldr x0, [x0, #0x10]
0x0676C890: c0035fd6  ret

; RVA 0x676C894 | public void .ctor(AbstractSchedulerItem item) { }
; bytes=48 sha256=643d876e9c49b2fe958a370ca77858306946a39c18b49b168bf8ed8d1ac2b31d status=arm64_complete_bound indexed_start=True
0x0676C894: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676C898: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676C89C: f30301aa  mov x19, x1
0x0676C8A0: e1031faa  mov x1, xzr
0x0676C8A4: f40300aa  mov x20, x0
0x0676C8A8: 55b7bd97  bl #0x56da5fc
0x0676C8AC: 930e01f8  str x19, [x20, #0x10]!
0x0676C8B0: e00314aa  mov x0, x20
0x0676C8B4: e10313aa  mov x1, x19
0x0676C8B8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676C8BC: fe0742f8  ldr x30, [sp], #0x20
0x0676C8C0: 41502817  b #0x31809c4


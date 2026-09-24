; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32861 Merger.TimeLimitedItems.Data.TickResultArgs.TimeLimitedItemsCleanUpTickResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4E16C | public List<Entity> get_CleanedUpEntities() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06B4E16C: 000840f9  ldr x0, [x0, #0x10]
0x06B4E170: c0035fd6  ret

; RVA 0x6B48BF4 | public void .ctor(List<Entity> cleanedUpEntities) { }
; bytes=48 sha256=f7cffc45e06ad62f7907b2b28afe37ef25fcc5c87e5c504358729ee0f1c4eca2 status=arm64_complete_bound indexed_start=True
0x06B48BF4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B48BF8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B48BFC: f30301aa  mov x19, x1
0x06B48C00: e1031faa  mov x1, xzr
0x06B48C04: f40300aa  mov x20, x0
0x06B48C08: 7d46ae97  bl #0x56da5fc
0x06B48C0C: 930e01f8  str x19, [x20, #0x10]!
0x06B48C10: e00314aa  mov x0, x20
0x06B48C14: e10313aa  mov x1, x19
0x06B48C18: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B48C1C: fe0742f8  ldr x30, [sp], #0x20
0x06B48C20: 69df1817  b #0x31809c4


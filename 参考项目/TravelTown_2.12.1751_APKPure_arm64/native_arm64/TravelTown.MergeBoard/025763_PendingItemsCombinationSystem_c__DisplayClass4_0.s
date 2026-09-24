; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25763 .PendingItemsCombinationSystem.<>c__DisplayClass4_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A72A08 | public void .ctor() { }
; bytes=8 sha256=575d4e25bb9635c09eb257f5ae374e7a6713f99ce6076a23e121e3d882f4ab39 status=arm64_complete_bound indexed_start=True
0x06A72A08: e1031faa  mov x1, xzr
0x06A72A0C: fc9eb117  b #0x56da5fc

; RVA 0x6A72C08 | internal bool <FindEntityAtPosition>b__0(ValueTuple<Entity, BoardTilePositionComponent, MergeComponent> entity) { }
; bytes=20 sha256=cee91ec307953d5bb07594ba7c9dc3bbffed69344daa234916e94c090ad8f76d status=arm64_complete_bound indexed_start=True
0x06A72C08: 280840b9  ldr w8, [x1, #8]
0x06A72C0C: 091040b9  ldr w9, [x0, #0x10]
0x06A72C10: 1f01096b  cmp w8, w9
0x06A72C14: e0179f1a  cset w0, eq
0x06A72C18: c0035fd6  ret


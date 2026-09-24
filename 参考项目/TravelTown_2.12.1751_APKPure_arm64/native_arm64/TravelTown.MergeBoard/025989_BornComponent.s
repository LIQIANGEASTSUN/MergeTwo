; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25989 Merger.MergeBoard.Components.BornComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BC10 | public Entity get_SourceEntity() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9BC10: 000040f9  ldr x0, [x0]
0x06A9BC14: c0035fd6  ret

; RVA 0x6A9BC18 | public void set_SourceEntity(Entity value) { }
; bytes=8 sha256=890a5027c03ed06ddbc6599b6d7e00c47c378568013b21490acaeadd7d46773b status=arm64_complete_bound indexed_start=True
0x06A9BC18: 010000f9  str x1, [x0]
0x06A9BC1C: 6a931b17  b #0x31809c4


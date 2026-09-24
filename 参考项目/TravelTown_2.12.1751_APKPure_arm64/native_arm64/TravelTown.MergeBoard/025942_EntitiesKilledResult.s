; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25942 Merger.MergeBoard.Data.TickResultArgs.EntitiesKilledResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A30C | public int get_KilledCount() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9A30C: 001040b9  ldr w0, [x0, #0x10]
0x06A9A310: c0035fd6  ret

; RVA 0x6A9A314 | public void set_KilledCount(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9A314: 011000b9  str w1, [x0, #0x10]
0x06A9A318: c0035fd6  ret

; RVA 0x6A9A31C | public IReadOnlyCollection<Entity> get_KilledEntities() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A31C: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A320: c0035fd6  ret

; RVA 0x6A9A324 | public void set_KilledEntities(IReadOnlyCollection<Entity> value) { }
; bytes=8 sha256=54bbfc26b5f228282a96bee0f9ef2e6d75f756f6caab0be9f618b1d2f922e97e status=arm64_complete_bound indexed_start=True
0x06A9A324: 018c01f8  str x1, [x0, #0x18]!
0x06A9A328: a7991b17  b #0x31809c4

; RVA 0x6A9A32C | public void .ctor() { }
; bytes=8 sha256=7c283fcc5d0754de3845bd0c674edb527b98e4ba00bf17928fa4a14382817739 status=arm64_complete_bound indexed_start=True
0x06A9A32C: e1031faa  mov x1, xzr
0x06A9A330: b300b117  b #0x56da5fc


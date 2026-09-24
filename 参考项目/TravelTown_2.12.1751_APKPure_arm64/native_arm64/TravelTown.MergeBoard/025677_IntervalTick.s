; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25677 Merger.MergeBoard.View.IntervalTick
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A361BC | public float get_DeltaTime() { }
; bytes=8 sha256=23cc889dde763433dceb80832a6a5a1acaf48aca204ef2746a0c276623efe64f status=arm64_complete_bound indexed_start=True
0x06A361BC: 000040bd  ldr s0, [x0]
0x06A361C0: c0035fd6  ret

; RVA 0x6A361C4 | public void .ctor(float deltaTime) { }
; bytes=8 sha256=40c9f00db36978dcfee1314a174df026df4e5a5058cbd8c1aec2ce9049f9e2e6 status=arm64_complete_bound indexed_start=True
0x06A361C4: 000000bd  str s0, [x0]
0x06A361C8: c0035fd6  ret


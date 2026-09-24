; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 890 .BoardIdleHintSystem.<>c__DisplayClass47_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665B1DC | public void .ctor() { }
; bytes=8 sha256=c339fb826fa6641b73afeef4115f5d656c9bdb241b3677b94c49f4b83f3f457d status=arm64_complete_bound indexed_start=True
0x0665B1DC: e1031faa  mov x1, xzr
0x0665B1E0: 07fdc117  b #0x56da5fc

; RVA 0x665B3D4 | internal bool <GetExcludedItemIds>b__2(IMergeItem objectiveItem) { }
; bytes=16 sha256=7aa8fd94a920909345fe943c74e2858b46b35aefa1467d284f8809fba95d0a5b status=arm64_complete_bound indexed_start=True
0x0665B3D4: 080840f9  ldr x8, [x0, #0x10]
0x0665B3D8: 1f0101eb  cmp x8, x1
0x0665B3DC: e0179f1a  cset w0, eq
0x0665B3E0: c0035fd6  ret


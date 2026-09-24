; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 613 .HintUtil.<>c__DisplayClass0_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x62735D4 | public void .ctor() { }
; bytes=8 sha256=593e77ebef94c30d969f810e20b1e73e054cdc524f3e4f29c4c3df8756843ab7 status=arm64_complete_bound indexed_start=True
0x062735D4: e1031faa  mov x1, xzr
0x062735D8: 099cd117  b #0x56da5fc

; RVA 0x6277014 | internal bool <GetHint>b__8(IdComponent item) { }
; bytes=16 sha256=f52f1f64e5fd3227ba5e582aa38a19790bee6b08c910f675b7ff09f41b321e47 status=arm64_complete_bound indexed_start=True
0x06277014: 080840f9  ldr x8, [x0, #0x10]
0x06277018: 3f0008eb  cmp x1, x8
0x0627701C: e0079f1a  cset w0, ne
0x06277020: c0035fd6  ret


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25935 Merger.MergeBoard.Data.TickResultArgs.BoardItemCooldownEndedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A1C8 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A1C8: 000840f9  ldr x0, [x0, #0x10]
0x06A9A1CC: c0035fd6  ret

; RVA 0x6A9A1D0 | public void set_Entity(Entity value) { }
; bytes=8 sha256=94922890f2850a5eea704f295328542a854d9209fa61b253c4e92527ea3f7cad status=arm64_complete_bound indexed_start=True
0x06A9A1D0: 010c01f8  str x1, [x0, #0x10]!
0x06A9A1D4: fc991b17  b #0x31809c4

; RVA 0x6A9A1D8 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A1D8: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A1DC: c0035fd6  ret

; RVA 0x6A9A1E0 | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=2574ffcfc05a7bcebd0b72e90149078843ad946fd319a3eb867aa491c4d3ffb8 status=arm64_complete_bound indexed_start=True
0x06A9A1E0: 018c01f8  str x1, [x0, #0x18]!
0x06A9A1E4: f8991b17  b #0x31809c4

; RVA 0x6A9A1E8 | public void .ctor() { }
; bytes=8 sha256=900849bc7dd95cb77a8485f817e8ad925125460b986149dc395b749d881634fb status=arm64_complete_bound indexed_start=True
0x06A9A1E8: e1031faa  mov x1, xzr
0x06A9A1EC: 0401b117  b #0x56da5fc


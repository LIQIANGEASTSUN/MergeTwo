; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25936 Merger.MergeBoard.Data.TickResultArgs.BoardItemCooldownStartedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A1F0 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A1F0: 000840f9  ldr x0, [x0, #0x10]
0x06A9A1F4: c0035fd6  ret

; RVA 0x6A9A1F8 | public void set_Entity(Entity value) { }
; bytes=8 sha256=fd000c2a1923b02445afbccd2cfab10a1c010b9d144feae4d7420d6f16c22b64 status=arm64_complete_bound indexed_start=True
0x06A9A1F8: 010c01f8  str x1, [x0, #0x10]!
0x06A9A1FC: f2991b17  b #0x31809c4

; RVA 0x6A9A200 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A200: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A204: c0035fd6  ret

; RVA 0x6A9A208 | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=8e9a6d0413f362b0651f0dfa47228703fc711c2f107f57abcf501ccd591d583c status=arm64_complete_bound indexed_start=True
0x06A9A208: 018c01f8  str x1, [x0, #0x18]!
0x06A9A20C: ee991b17  b #0x31809c4

; RVA 0x6A9A210 | public void .ctor() { }
; bytes=8 sha256=f53a0e3bf1847e28e46e4f835a5f33764ba078e35c223286a07989b023bc3b5f status=arm64_complete_bound indexed_start=True
0x06A9A210: e1031faa  mov x1, xzr
0x06A9A214: fa00b117  b #0x56da5fc


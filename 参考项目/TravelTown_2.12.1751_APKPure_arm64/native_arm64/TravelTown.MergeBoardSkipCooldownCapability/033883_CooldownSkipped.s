; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33883 Merger.MergeBoardSkipCooldownCapability.Data.TickResultArgs.CooldownSkipped
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A64354 | public ResourceMultiple get_Price() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A64354: 000840f9  ldr x0, [x0, #0x10]
0x06A64358: c0035fd6  ret

; RVA 0x6A6435C | public void set_Price(ResourceMultiple value) { }
; bytes=8 sha256=2cae3f33580714bbbb2ca406bcc34e592f3a9ee243291bd31cd574807741e035 status=arm64_complete_bound indexed_start=True
0x06A6435C: 010c01f8  str x1, [x0, #0x10]!
0x06A64360: 99711c17  b #0x31809c4

; RVA 0x6A64364 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A64364: 000c40f9  ldr x0, [x0, #0x18]
0x06A64368: c0035fd6  ret

; RVA 0x6A6436C | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=12ee0088ef4d3f4f3e90fd3547eca11dfbf388a8a9654ee4350ad8c8f7199ef0 status=arm64_complete_bound indexed_start=True
0x06A6436C: 018c01f8  str x1, [x0, #0x18]!
0x06A64370: 95711c17  b #0x31809c4

; RVA 0x6A62CC4 | public void .ctor() { }
; bytes=8 sha256=e23e971e2232e7b0604a01c6c7d2e5657abfe9deb791cf9ad97dc0182d96b607 status=arm64_complete_bound indexed_start=True
0x06A62CC4: e1031faa  mov x1, xzr
0x06A62CC8: 4ddeb117  b #0x56da5fc


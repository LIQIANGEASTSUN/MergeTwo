; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25950 Merger.MergeBoard.Data.TickResultArgs.FeedingCombinationItemInsertedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A5A8 | public Entity get_FeedingEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A5A8: 000840f9  ldr x0, [x0, #0x10]
0x06A9A5AC: c0035fd6  ret

; RVA 0x6A9A5B0 | public void set_FeedingEntity(Entity value) { }
; bytes=8 sha256=7d9621cb3a71419293d09b3ee39e071b96bcd55f5d8e9f57838b9689202602c9 status=arm64_complete_bound indexed_start=True
0x06A9A5B0: 010c01f8  str x1, [x0, #0x10]!
0x06A9A5B4: 04991b17  b #0x31809c4

; RVA 0x6A9A5B8 | public Entity get_ConsumedEntity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A5B8: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A5BC: c0035fd6  ret

; RVA 0x6A9A5C0 | public void set_ConsumedEntity(Entity value) { }
; bytes=8 sha256=8c4bdcd76939e633a5184cc2f2f76e99b7b64e36b936c59985167b4a9e57dd01 status=arm64_complete_bound indexed_start=True
0x06A9A5C0: 018c01f8  str x1, [x0, #0x18]!
0x06A9A5C4: 00991b17  b #0x31809c4

; RVA 0x6A9A5C8 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A5C8: 001040f9  ldr x0, [x0, #0x20]
0x06A9A5CC: c0035fd6  ret

; RVA 0x6A9A5D0 | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=d914582832f023b4fcca04e097aaf27b68abdfaacb027c940654f478e4286efc status=arm64_complete_bound indexed_start=True
0x06A9A5D0: 010c02f8  str x1, [x0, #0x20]!
0x06A9A5D4: fc981b17  b #0x31809c4

; RVA 0x6A9A5D8 | public void .ctor() { }
; bytes=8 sha256=c489d1e4cb10090000d1e01af7da4ded5427183fd47772f8560bd23c29b8586f status=arm64_complete_bound indexed_start=True
0x06A9A5D8: e1031faa  mov x1, xzr
0x06A9A5DC: 0800b117  b #0x56da5fc


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25939 Merger.MergeBoard.Data.TickResultArgs.ChargeableChangedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A298 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A298: 000840f9  ldr x0, [x0, #0x10]
0x06A9A29C: c0035fd6  ret

; RVA 0x6A9A2A0 | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=5c85ab4b3620152fad8ce13df0775b7c4f65acf37fd740102c333751fc8a8711 status=arm64_complete_bound indexed_start=True
0x06A9A2A0: 010c01f8  str x1, [x0, #0x10]!
0x06A9A2A4: c8991b17  b #0x31809c4

; RVA 0x6A9A2A8 | public void .ctor() { }
; bytes=8 sha256=6bda01fc547c7f84dd37e25d77cd94316e2e517daf0bdaf054516ee384fb1ef5 status=arm64_complete_bound indexed_start=True
0x06A9A2A8: e1031faa  mov x1, xzr
0x06A9A2AC: d400b117  b #0x56da5fc


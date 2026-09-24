; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25960 Merger.MergeBoard.Data.TickResultArgs.ItemExpiredResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A8A4 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A8A4: 000840f9  ldr x0, [x0, #0x10]
0x06A9A8A8: c0035fd6  ret

; RVA 0x6A9A8AC | public void set_Entity(Entity value) { }
; bytes=8 sha256=a7307c233f59428c96897bb459512d794549f4fb9b5c47237195aecd3e1c5941 status=arm64_complete_bound indexed_start=True
0x06A9A8AC: 010c01f8  str x1, [x0, #0x10]!
0x06A9A8B0: 45981b17  b #0x31809c4

; RVA 0x6A9A8B4 | public string get_Reason() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A8B4: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A8B8: c0035fd6  ret

; RVA 0x6A9A8BC | public void set_Reason(string value) { }
; bytes=8 sha256=cf704ff0fa787cf35c3c92e58076b43634bf8035bec448a358ed3c4d2b32c222 status=arm64_complete_bound indexed_start=True
0x06A9A8BC: 018c01f8  str x1, [x0, #0x18]!
0x06A9A8C0: 41981b17  b #0x31809c4

; RVA 0x6A9A8C4 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A8C4: 001040f9  ldr x0, [x0, #0x20]
0x06A9A8C8: c0035fd6  ret

; RVA 0x6A9A8CC | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=6420db904de004b577953ed484cccd7ef90d716d5dcdbb18188e2b84fb11b914 status=arm64_complete_bound indexed_start=True
0x06A9A8CC: 010c02f8  str x1, [x0, #0x20]!
0x06A9A8D0: 3d981b17  b #0x31809c4

; RVA 0x6A9A8D4 | public void .ctor() { }
; bytes=8 sha256=e9999c43171898c17841ef45fb900bede6b5d047b672032cd8e5311f800885cf status=arm64_complete_bound indexed_start=True
0x06A9A8D4: e1031faa  mov x1, xzr
0x06A9A8D8: 49ffb017  b #0x56da5fc


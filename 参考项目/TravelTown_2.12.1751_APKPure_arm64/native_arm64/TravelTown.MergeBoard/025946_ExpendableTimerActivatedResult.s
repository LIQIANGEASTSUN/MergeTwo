; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25946 Merger.MergeBoard.Data.TickResultArgs.ExpendableTimerActivatedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A42C | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A42C: 000840f9  ldr x0, [x0, #0x10]
0x06A9A430: c0035fd6  ret

; RVA 0x6A9A434 | public void set_Entity(Entity value) { }
; bytes=8 sha256=5e003b2a3446fd27bc6ecc2cd4a91ec2f51d44b3132dbfd1d863a2deda9e847f status=arm64_complete_bound indexed_start=True
0x06A9A434: 010c01f8  str x1, [x0, #0x10]!
0x06A9A438: 63991b17  b #0x31809c4

; RVA 0x6A9A43C | public string get_Reason() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A43C: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A440: c0035fd6  ret

; RVA 0x6A9A444 | public void set_Reason(string value) { }
; bytes=8 sha256=2629f3dccd304ce4bb7f06f495febe80cab96bb77d5f63dbab52ca6a1b497295 status=arm64_complete_bound indexed_start=True
0x06A9A444: 018c01f8  str x1, [x0, #0x18]!
0x06A9A448: 5f991b17  b #0x31809c4

; RVA 0x6A9A44C | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A44C: 001040f9  ldr x0, [x0, #0x20]
0x06A9A450: c0035fd6  ret

; RVA 0x6A9A454 | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=db225fb1e82ab610f51f0a3695633375f2246e77b74b4b2c598038af42b85bd9 status=arm64_complete_bound indexed_start=True
0x06A9A454: 010c02f8  str x1, [x0, #0x20]!
0x06A9A458: 5b991b17  b #0x31809c4

; RVA 0x6A9A45C | public void .ctor() { }
; bytes=8 sha256=28ceeb60ad50fbf6607ea979a955a9a8861f2035dce1dc4ef163053ae3363eb3 status=arm64_complete_bound indexed_start=True
0x06A9A45C: e1031faa  mov x1, xzr
0x06A9A460: 6700b117  b #0x56da5fc


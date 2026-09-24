; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25922 Merger.MergeBoard.Data.FeedingItemCombination
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A0A0 | public List<string> get_ItemsToConsumeIds() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A0A0: 000840f9  ldr x0, [x0, #0x10]
0x06A9A0A4: c0035fd6  ret

; RVA 0x6A9A0A8 | public void set_ItemsToConsumeIds(List<string> value) { }
; bytes=8 sha256=4b0055f86b024f92bb37de43953ef229ca90c1b16a7fffa6128435e61937239b status=arm64_complete_bound indexed_start=True
0x06A9A0A8: 010c01f8  str x1, [x0, #0x10]!
0x06A9A0AC: 469a1b17  b #0x31809c4

; RVA 0x6A9A0B0 | public void .ctor() { }
; bytes=8 sha256=a2cf67a988c77ce14bae9a7d62d1387c623521afa99195956a44bb116b8d94db status=arm64_complete_bound indexed_start=True
0x06A9A0B0: e1031faa  mov x1, xzr
0x06A9A0B4: 5201b117  b #0x56da5fc


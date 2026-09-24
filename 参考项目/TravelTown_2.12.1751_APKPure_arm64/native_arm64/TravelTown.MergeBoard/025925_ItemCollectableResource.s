; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25925 Merger.MergeBoard.Data.ItemCollectableResource
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A0E8 | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9A0E8: 001040b9  ldr w0, [x0, #0x10]
0x06A9A0EC: c0035fd6  ret

; RVA 0x6A9A0F0 | public void set_Resource(PlayerResourceEnum value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9A0F0: 011000b9  str w1, [x0, #0x10]
0x06A9A0F4: c0035fd6  ret

; RVA 0x6A9A0F8 | public int get_Amount() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x06A9A0F8: 001440b9  ldr w0, [x0, #0x14]
0x06A9A0FC: c0035fd6  ret

; RVA 0x6A9A100 | public void set_Amount(int value) { }
; bytes=8 sha256=cf9ba67002cd8d3271068d0d8dcf883aea02f0e4e521c63f5083025bd8dfb1aa status=arm64_complete_bound indexed_start=True
0x06A9A100: 011400b9  str w1, [x0, #0x14]
0x06A9A104: c0035fd6  ret

; RVA 0x6A977A0 | public void .ctor() { }
; bytes=8 sha256=b4d977eabcaa5e51aab49153e26b0d6e818c61bfbc93c06e0398dd8493bee32e status=arm64_complete_bound indexed_start=True
0x06A977A0: e1031faa  mov x1, xzr
0x06A977A4: 960bb117  b #0x56da5fc


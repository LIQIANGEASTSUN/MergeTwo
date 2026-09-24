; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25979 Merger.MergeBoard.Data.TickInputActions.TapAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AE58 | public int get_SelectedEntityPosition() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9AE58: 001040b9  ldr w0, [x0, #0x10]
0x06A9AE5C: c0035fd6  ret

; RVA 0x6A9AE60 | public void set_SelectedEntityPosition(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9AE60: 011000b9  str w1, [x0, #0x10]
0x06A9AE64: c0035fd6  ret

; RVA 0x6A9AE68 | public void .ctor() { }
; bytes=8 sha256=ef6bc77d8167ceae70975b0cf9ffb775da8fd1db4173eb11b80e4413a567b564 status=arm64_complete_bound indexed_start=True
0x06A9AE68: e1031faa  mov x1, xzr
0x06A9AE6C: e4fdb017  b #0x56da5fc


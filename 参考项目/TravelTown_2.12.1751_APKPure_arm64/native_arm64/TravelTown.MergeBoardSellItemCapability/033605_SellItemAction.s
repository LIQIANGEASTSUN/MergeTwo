; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33605 Merger.MergeBoardSellItemCapability.Data.TickInputActions.SellItemAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A613EC | public int get_SelectedEntityPosition() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A613EC: 001040b9  ldr w0, [x0, #0x10]
0x06A613F0: c0035fd6  ret

; RVA 0x6A613F4 | public void set_SelectedEntityPosition(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A613F4: 011000b9  str w1, [x0, #0x10]
0x06A613F8: c0035fd6  ret

; RVA 0x6A5F9E8 | public void .ctor() { }
; bytes=8 sha256=8cc2ffe7f7952567a174b978e8061b781d30a5537158e625eb741235e90722a6 status=arm64_complete_bound indexed_start=True
0x06A5F9E8: e1031faa  mov x1, xzr
0x06A5F9EC: 04ebb117  b #0x56da5fc


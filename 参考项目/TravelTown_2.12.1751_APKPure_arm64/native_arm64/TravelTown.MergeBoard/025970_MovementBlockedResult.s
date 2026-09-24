; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25970 Merger.MergeBoard.Data.TickResultArgs.MovementBlockedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AC40 | public int get_StartingPositionOnBoard() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9AC40: 001040b9  ldr w0, [x0, #0x10]
0x06A9AC44: c0035fd6  ret

; RVA 0x6A9AC48 | public void set_StartingPositionOnBoard(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9AC48: 011000b9  str w1, [x0, #0x10]
0x06A9AC4C: c0035fd6  ret

; RVA 0x6A9AC50 | public Entity get_MovedEntity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9AC50: 000c40f9  ldr x0, [x0, #0x18]
0x06A9AC54: c0035fd6  ret

; RVA 0x6A9AC58 | public void set_MovedEntity(Entity value) { }
; bytes=8 sha256=1b17883e2d4bd079362de9464c523221486f516809e05c901cf5f140eaeccadd status=arm64_complete_bound indexed_start=True
0x06A9AC58: 018c01f8  str x1, [x0, #0x18]!
0x06A9AC5C: 5a971b17  b #0x31809c4

; RVA 0x6A990B4 | public void .ctor() { }
; bytes=8 sha256=b0b3c70295c50424251b19552b9d698f4154f46200ce704c58548f00f4c20ce3 status=arm64_complete_bound indexed_start=True
0x06A990B4: e1031faa  mov x1, xzr
0x06A990B8: 5105b117  b #0x56da5fc


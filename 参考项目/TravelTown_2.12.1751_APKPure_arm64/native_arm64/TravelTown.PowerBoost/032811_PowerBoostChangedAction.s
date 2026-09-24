; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32811 Merger.MergeBoard.PowerBoost.Actions.PowerBoostChangedAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD4BE0 | public int get_BoostMode() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06AD4BE0: 001040b9  ldr w0, [x0, #0x10]
0x06AD4BE4: c0035fd6  ret

; RVA 0x6AD4BE8 | public void set_BoostMode(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06AD4BE8: 011000b9  str w1, [x0, #0x10]
0x06AD4BEC: c0035fd6  ret

; RVA 0x6ACC638 | public void .ctor() { }
; bytes=8 sha256=f158dbd53e4d374714d88758192f52aefdc0167d16c271acbdd5fc734ace291b status=arm64_complete_bound indexed_start=True
0x06ACC638: e1031faa  mov x1, xzr
0x06ACC63C: f037b017  b #0x56da5fc


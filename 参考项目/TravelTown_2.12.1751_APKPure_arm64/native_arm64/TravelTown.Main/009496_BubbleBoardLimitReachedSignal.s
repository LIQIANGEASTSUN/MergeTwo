; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9496 Merger.Game.Signal.Bubbles.BubbleBoardLimitReachedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E618 | public int get_BubblesOnBoard() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0676E618: 001040b9  ldr w0, [x0, #0x10]
0x0676E61C: c0035fd6  ret

; RVA 0x676E620 | public void .ctor(int bubblesOnBoard) { }
; bytes=40 sha256=3b452ad0556baa8ff6de4c49dcdf64bda18bf50a1d529b302a38dc5ef4d26d8a status=arm64_complete_bound indexed_start=True
0x0676E620: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676E624: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676E628: f303012a  mov w19, w1
0x0676E62C: e1031faa  mov x1, xzr
0x0676E630: f40300aa  mov x20, x0
0x0676E634: f2afbd97  bl #0x56da5fc
0x0676E638: 931200b9  str w19, [x20, #0x10]
0x0676E63C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676E640: fe0742f8  ldr x30, [sp], #0x20
0x0676E644: c0035fd6  ret


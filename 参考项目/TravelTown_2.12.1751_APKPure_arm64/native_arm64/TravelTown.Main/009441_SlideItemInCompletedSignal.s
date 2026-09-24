; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9441 Merger.Game.Signal.SlideItemInCompletedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676CAB4 | public void .ctor(BoardItemPosition position) { }
; bytes=40 sha256=25b8cf2376f1f9262f1732c7b35a24e09cd8c9abffb3beb33d5140c5f92722db status=arm64_complete_bound indexed_start=True
0x0676CAB4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676CAB8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676CABC: f30301aa  mov x19, x1
0x0676CAC0: e1031faa  mov x1, xzr
0x0676CAC4: f40300aa  mov x20, x0
0x0676CAC8: cdb6bd97  bl #0x56da5fc
0x0676CACC: 930a00f9  str x19, [x20, #0x10]
0x0676CAD0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676CAD4: fe0742f8  ldr x30, [sp], #0x20
0x0676CAD8: c0035fd6  ret


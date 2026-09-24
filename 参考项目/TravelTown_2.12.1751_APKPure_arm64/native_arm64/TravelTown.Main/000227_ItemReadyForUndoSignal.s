; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 227 MergeEngine.Signal.Items.ItemReadyForUndoSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF39F0 | public void .ctor(IMergeItem item) { }
; bytes=48 sha256=ee60ea2e11f232375b582d3691381589b1860311b76c3c3a4021a05d59e31872 status=arm64_complete_bound indexed_start=True
0x05FF39F0: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF39F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF39F8: f30301aa  mov x19, x1
0x05FF39FC: e1031faa  mov x1, xzr
0x05FF3A00: f40300aa  mov x20, x0
0x05FF3A04: fe9adb97  bl #0x56da5fc
0x05FF3A08: 930e01f8  str x19, [x20, #0x10]!
0x05FF3A0C: e00314aa  mov x0, x20
0x05FF3A10: e10313aa  mov x1, x19
0x05FF3A14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3A18: fe0742f8  ldr x30, [sp], #0x20
0x05FF3A1C: ea334617  b #0x31809c4


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 258 MergeEngine.Signal.Board.CreateBoardSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4504 | public void .ctor(IBoard board) { }
; bytes=48 sha256=beb71caef58c3dc82b90fe5ed97fa40ed8b9fa7975101f2885f352b1d9ba5867 status=arm64_complete_bound indexed_start=True
0x05FF4504: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF4508: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF450C: f30301aa  mov x19, x1
0x05FF4510: e1031faa  mov x1, xzr
0x05FF4514: f40300aa  mov x20, x0
0x05FF4518: 3998db97  bl #0x56da5fc
0x05FF451C: 930e01f8  str x19, [x20, #0x10]!
0x05FF4520: e00314aa  mov x0, x20
0x05FF4524: e10313aa  mov x1, x19
0x05FF4528: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF452C: fe0742f8  ldr x30, [sp], #0x20
0x05FF4530: 25314617  b #0x31809c4


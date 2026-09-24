; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9456 Merger.Game.Signal.UnlockProducerInventoryGrantedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676D10C | public void .ctor(Vector2 position, Func<GameObject> getPrefabInstance) { }
; bytes=68 sha256=f10a7153f6f920b03de328b473e7b863e1b896d421aa09590c1cbd6cbfd8728a status=arm64_complete_bound indexed_start=True
0x0676D10C: e923bd6d  stp d9, d8, [sp, #-0x30]!
0x0676D110: fe0b00f9  str x30, [sp, #0x10]
0x0676D114: f44f02a9  stp x20, x19, [sp, #0x20]
0x0676D118: f30301aa  mov x19, x1
0x0676D11C: e1031faa  mov x1, xzr
0x0676D120: 281ca14e  mov v8.16b, v1.16b
0x0676D124: 091ca04e  mov v9.16b, v0.16b
0x0676D128: f40300aa  mov x20, x0
0x0676D12C: 34b5bd97  bl #0x56da5fc
0x0676D130: 938e01f8  str x19, [x20, #0x18]!
0x0676D134: 89223f2d  stp s9, s8, [x20, #-8]
0x0676D138: e00314aa  mov x0, x20
0x0676D13C: e10313aa  mov x1, x19
0x0676D140: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0676D144: fe0b40f9  ldr x30, [sp, #0x10]
0x0676D148: e923c36c  ldp d9, d8, [sp], #0x30
0x0676D14C: 1e4e2817  b #0x31809c4


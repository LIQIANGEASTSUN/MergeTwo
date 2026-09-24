; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 259 MergeEngine.Signal.Board.DequeueItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4534 | public Vector2 get_QueuePositionInRoot() { }
; bytes=8 sha256=669d7286e5b45e4183bcabf46171af4f3e33f9ce05145fb6f4cea4bb4e20f1fe status=arm64_complete_bound indexed_start=True
0x05FF4534: 0004422d  ldp s0, s1, [x0, #0x10]
0x05FF4538: c0035fd6  ret

; RVA 0x5FF453C | public Vector2 get_QueueWorldPosition() { }
; bytes=8 sha256=2fd2014205e56457b13fe2df93ece194fe202f0bfcf2128bd50e7356d73f9b9e status=arm64_complete_bound indexed_start=True
0x05FF453C: 0004432d  ldp s0, s1, [x0, #0x18]
0x05FF4540: c0035fd6  ret

; RVA 0x5FF4544 | public void .ctor(Vector2 queuePositionInRoot, Vector2 queueWorldPosition) { }
; bytes=64 sha256=52dc9e2ddfee97d622244ec3a9fb4a08284736794711f0068073b5b663860e65 status=arm64_complete_bound indexed_start=True
0x05FF4544: eb2bbd6d  stp d11, d10, [sp, #-0x30]!
0x05FF4548: e923016d  stp d9, d8, [sp, #0x10]
0x05FF454C: fe4f02a9  stp x30, x19, [sp, #0x20]
0x05FF4550: e1031faa  mov x1, xzr
0x05FF4554: 681ca34e  mov v8.16b, v3.16b
0x05FF4558: 491ca24e  mov v9.16b, v2.16b
0x05FF455C: 2a1ca14e  mov v10.16b, v1.16b
0x05FF4560: 0b1ca04e  mov v11.16b, v0.16b
0x05FF4564: f30300aa  mov x19, x0
0x05FF4568: 2598db97  bl #0x56da5fc
0x05FF456C: 6b2a022d  stp s11, s10, [x19, #0x10]
0x05FF4570: 6922032d  stp s9, s8, [x19, #0x18]
0x05FF4574: fe4f42a9  ldp x30, x19, [sp, #0x20]
0x05FF4578: e923416d  ldp d9, d8, [sp, #0x10]
0x05FF457C: eb2bc36c  ldp d11, d10, [sp], #0x30
0x05FF4580: c0035fd6  ret


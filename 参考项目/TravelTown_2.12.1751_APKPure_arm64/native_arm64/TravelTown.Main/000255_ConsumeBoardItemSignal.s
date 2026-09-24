; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 255 MergeEngine.Signal.Board.ConsumeBoardItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4254 | public Action get_CompleteCallback() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF4254: 000c40f9  ldr x0, [x0, #0x18]
0x05FF4258: c0035fd6  ret

; RVA 0x5FF425C | public IMergeItem get_ItemToConsume() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF425C: 001040f9  ldr x0, [x0, #0x20]
0x05FF4260: c0035fd6  ret

; RVA 0x5FF4264 | public BoardItemPosition get_PositionOfItemToConsume() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05FF4264: 001440f9  ldr x0, [x0, #0x28]
0x05FF4268: c0035fd6  ret

; RVA 0x5FF426C | public Entity get_Entity() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x05FF426C: 001840f9  ldr x0, [x0, #0x30]
0x05FF4270: c0035fd6  ret

; RVA 0x5FF4274 | public void .ctor(Entity entity, Vector2 targetPosition, Action completeCallback, IMergeItem itemToConsume, BoardItemPosition positionOfItemToConsume) { }
; bytes=128 sha256=8b8df0764aba149c331d135b4bfd88b0213f13e299a8d4b9bc289be2e39b2f2a status=arm64_complete_bound indexed_start=True
0x05FF4274: e923bc6d  stp d9, d8, [sp, #-0x40]!
0x05FF4278: fe5f01a9  stp x30, x23, [sp, #0x10]
0x05FF427C: f65702a9  stp x22, x21, [sp, #0x20]
0x05FF4280: f44f03a9  stp x20, x19, [sp, #0x30]
0x05FF4284: f60301aa  mov x22, x1
0x05FF4288: e1031faa  mov x1, xzr
0x05FF428C: f30304aa  mov x19, x4
0x05FF4290: f40303aa  mov x20, x3
0x05FF4294: f50302aa  mov x21, x2
0x05FF4298: 281ca14e  mov v8.16b, v1.16b
0x05FF429C: 091ca04e  mov v9.16b, v0.16b
0x05FF42A0: f70300aa  mov x23, x0
0x05FF42A4: d698db97  bl #0x56da5fc
0x05FF42A8: e00317aa  mov x0, x23
0x05FF42AC: 160c03f8  str x22, [x0, #0x30]!
0x05FF42B0: e10316aa  mov x1, x22
0x05FF42B4: c4314697  bl #0x31809c4
0x05FF42B8: e00317aa  mov x0, x23
0x05FF42BC: e922022d  stp s9, s8, [x23, #0x10]
0x05FF42C0: 158c01f8  str x21, [x0, #0x18]!
0x05FF42C4: e10315aa  mov x1, x21
0x05FF42C8: bf314697  bl #0x31809c4
0x05FF42CC: f40e02f8  str x20, [x23, #0x20]!
0x05FF42D0: e00317aa  mov x0, x23
0x05FF42D4: e10314aa  mov x1, x20
0x05FF42D8: bb314697  bl #0x31809c4
0x05FF42DC: f30600f9  str x19, [x23, #8]
0x05FF42E0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05FF42E4: f65742a9  ldp x22, x21, [sp, #0x20]
0x05FF42E8: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x05FF42EC: e923c46c  ldp d9, d8, [sp], #0x40
0x05FF42F0: c0035fd6  ret


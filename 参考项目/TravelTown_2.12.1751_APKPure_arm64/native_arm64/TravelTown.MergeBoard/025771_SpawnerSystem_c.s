; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25771 .SpawnerSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A75334 | private static void .cctor() { }
; bytes=104 sha256=041e2fd4e705dec671e2a34c3dfb057d24f432087d196122f6a64a70db0243d7 status=arm64_complete_bound indexed_start=True
0x06A75334: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A75338: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7533C: b39500b0  adrp x19, #0x7d2a000
0x06A75340: f4650090  adrp x20, #0x7731000
0x06A75344: 68f25b39  ldrb w8, [x19, #0x6fc]
0x06A75348: 944e42f9  ldr x20, [x20, #0x498]
0x06A7534C: c8000037  tbnz w8, #0, #0x6a75364
0x06A75350: e0650090  adrp x0, #0x7731000
0x06A75354: 004c42f9  ldr x0, [x0, #0x498]
0x06A75358: b02d1c97  bl #0x3180a18
0x06A7535C: 28008052  movz w8, #0x1
0x06A75360: 68f21b39  strb w8, [x19, #0x6fc]
0x06A75364: 800240f9  ldr x0, [x20]
0x06A75368: 4e2e1c97  bl #0x3180ca0
0x06A7536C: e1031faa  mov x1, xzr
0x06A75370: f30300aa  mov x19, x0
0x06A75374: a294b197  bl #0x56da5fc
0x06A75378: 880240f9  ldr x8, [x20]
0x06A7537C: e10313aa  mov x1, x19
0x06A75380: 085d40f9  ldr x8, [x8, #0xb8]
0x06A75384: 130100f9  str x19, [x8]
0x06A75388: 880240f9  ldr x8, [x20]
0x06A7538C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A75390: 005d40f9  ldr x0, [x8, #0xb8]
0x06A75394: fe0742f8  ldr x30, [sp], #0x20
0x06A75398: 8b2d1c17  b #0x31809c4

; RVA 0x6A7539C | public void .ctor() { }
; bytes=8 sha256=9538c60ff684f14e7da7daf450528e4fb22de0fb99889fb9ff51ca25e7141829 status=arm64_complete_bound indexed_start=True
0x06A7539C: e1031faa  mov x1, xzr
0x06A753A0: 9794b117  b #0x56da5fc

; RVA 0x6A753A4 | internal bool <Tick>b__3_0(ValueTuple<Entity, SpawnerComponent, TimeCycleComponent, BoardTilePositionComponent, IdComponent, InteractionComponent> entity) { }
; bytes=32 sha256=59a453d83c164adbef00ea554223b482b9f6164e886e913ede02b8febccc7624 status=arm64_complete_bound indexed_start=True
0x06A753A4: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A753A8: 200040f9  ldr x0, [x1]
0x06A753AC: e1031faa  mov x1, xzr
0x06A753B0: 4d450094  bl #0x6a868e4
0x06A753B4: e803202a  mvn w8, w0
0x06A753B8: 00010012  and w0, w8, #1
0x06A753BC: fe0741f8  ldr x30, [sp], #0x10
0x06A753C0: c0035fd6  ret

; RVA 0x6A753C4 | internal bool <HandleSpawnByTap>b__4_0(ValueTuple<Entity, BoardTilePositionComponent, SpawnerComponent, IdComponent, TimeCycleComponent, InteractionComponent, PendingInteractionComponent> entity) { }
; bytes=32 sha256=cc3ff4c03a4fb9ba9db5c62fb87d9ed2528174e576790057981ef63e3c597291 status=arm64_complete_bound indexed_start=True
0x06A753C4: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A753C8: 200040f9  ldr x0, [x1]
0x06A753CC: e1031faa  mov x1, xzr
0x06A753D0: 45450094  bl #0x6a868e4
0x06A753D4: e803202a  mvn w8, w0
0x06A753D8: 00010012  and w0, w8, #1
0x06A753DC: fe0741f8  ldr x30, [sp], #0x10
0x06A753E0: c0035fd6  ret

; RVA 0x6A753E4 | internal int <HandleSpawnByTick>b__5_0(ValueTuple<Entity, BoardTilePositionComponent, IdComponent> e) { }
; bytes=8 sha256=e8be12c93c4563bfc11ce4bc803350301dbb2ee0bf8c398c66d1fd6d9d3666fb status=arm64_complete_bound indexed_start=True
0x06A753E4: 200840b9  ldr w0, [x1, #8]
0x06A753E8: c0035fd6  ret


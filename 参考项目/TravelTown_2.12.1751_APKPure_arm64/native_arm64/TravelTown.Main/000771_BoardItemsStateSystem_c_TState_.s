; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 771 .BoardItemsStateSystem.<>c<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF503C | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c<object>$$.cctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_object____cctor (const MethodInfo_3EF503C* method);
; bytes=188 sha256=eec37739552d6575e886cf84ba8c66b16988210170da56aed0259ca733225517 status=arm64_complete_bound indexed_start=True
0x03EF503C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03EF5040: f44f01a9  stp x20, x19, [sp, #0x10]
0x03EF5044: f30300aa  mov x19, x0
0x03EF5048: 001040f9  ldr x0, [x0, #0x20]
0x03EF504C: 08d44439  ldrb w8, [x0, #0x135]
0x03EF5050: 48000037  tbnz w8, #0, #0x3ef5058
0x03EF5054: f285c997  bl #0x315681c
0x03EF5058: 086040f9  ldr x8, [x0, #0xc0]
0x03EF505C: 000140f9  ldr x0, [x8]
0x03EF5060: 08d44439  ldrb w8, [x0, #0x135]
0x03EF5064: 48000037  tbnz w8, #0, #0x3ef506c
0x03EF5068: ed85c997  bl #0x315681c
0x03EF506C: 0d2fca97  bl #0x3180ca0
0x03EF5070: 681240f9  ldr x8, [x19, #0x20]
0x03EF5074: f40300aa  mov x20, x0
0x03EF5078: 09d54439  ldrb w9, [x8, #0x135]
0x03EF507C: 69000037  tbnz w9, #0, #0x3ef5088
0x03EF5080: e00308aa  mov x0, x8
0x03EF5084: e685c997  bl #0x315681c
0x03EF5088: e00314aa  mov x0, x20
0x03EF508C: e1031faa  mov x1, xzr
0x03EF5090: 5b955f94  bl #0x56da5fc
0x03EF5094: 601240f9  ldr x0, [x19, #0x20]
0x03EF5098: 08d44439  ldrb w8, [x0, #0x135]
0x03EF509C: 48000037  tbnz w8, #0, #0x3ef50a4
0x03EF50A0: df85c997  bl #0x315681c
0x03EF50A4: 086040f9  ldr x8, [x0, #0xc0]
0x03EF50A8: 000940f9  ldr x0, [x8, #0x10]
0x03EF50AC: 08d44439  ldrb w8, [x0, #0x135]
0x03EF50B0: 48000037  tbnz w8, #0, #0x3ef50b8
0x03EF50B4: da85c997  bl #0x315681c
0x03EF50B8: 085c40f9  ldr x8, [x0, #0xb8]
0x03EF50BC: 140100f9  str x20, [x8]
0x03EF50C0: 601240f9  ldr x0, [x19, #0x20]
0x03EF50C4: 08d44439  ldrb w8, [x0, #0x135]
0x03EF50C8: 48000037  tbnz w8, #0, #0x3ef50d0
0x03EF50CC: d485c997  bl #0x315681c
0x03EF50D0: 086040f9  ldr x8, [x0, #0xc0]
0x03EF50D4: 000940f9  ldr x0, [x8, #0x10]
0x03EF50D8: 08d44439  ldrb w8, [x0, #0x135]
0x03EF50DC: 48000037  tbnz w8, #0, #0x3ef50e4
0x03EF50E0: cf85c997  bl #0x315681c
0x03EF50E4: 005c40f9  ldr x0, [x0, #0xb8]
0x03EF50E8: e10314aa  mov x1, x20
0x03EF50EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03EF50F0: fe0742f8  ldr x30, [sp], #0x20
0x03EF50F4: 342eca17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF50F8 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_TState__o* __this, const MethodInfo_3EF50F8* method);
; bytes=8 sha256=1c9ce2a1e819a5271429a1480819173b7ff79be65f18e590327941795f9b4da0 status=arm64_complete_bound indexed_start=True
0x03EF50F8: e1031faa  mov x1, xzr
0x03EF50FC: 40955f14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF5100 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c<object>$$<GetExistingEntityIds>b__5_0
; native signature: MergeEngine_ECS_Components_Items_IdComponent_o* MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_object____GetExistingEntityIds_b__5_0 (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_TState__o* __this, MergeEngine_ECS_Components_Items_PositionComponent_o* items, const MethodInfo_3EF5100* method);
; bytes=80 sha256=ece3cd4a0d08ea78318c734e181e1e02c70f3ac96816ebe22ec6c2b02b5473bc status=arm64_complete_bound indexed_start=True
0x03EF5100: fe0f1ef8  str x30, [sp, #-0x20]!
0x03EF5104: f44f01a9  stp x20, x19, [sp, #0x10]
0x03EF5108: 14f101d0  adrp x20, #0x7d17000
0x03EF510C: 88367839  ldrb w8, [x20, #0xe0d]
0x03EF5110: f30301aa  mov x19, x1
0x03EF5114: c8000037  tbnz w8, #0, #0x3ef512c
0x03EF5118: 20bc01d0  adrp x0, #0x767b000
0x03EF511C: 00cc47f9  ldr x0, [x0, #0xf98]
0x03EF5120: 3e2eca97  bl #0x3180a18
0x03EF5124: 28008052  movz w8, #0x1
0x03EF5128: 88363839  strb w8, [x20, #0xe0d]
0x03EF512C: 130100b4  cbz x19, #0x3ef514c
0x03EF5130: 28bc01d0  adrp x8, #0x767b000
0x03EF5134: 08cd47f9  ldr x8, [x8, #0xf98]
0x03EF5138: e00313aa  mov x0, x19
0x03EF513C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03EF5140: 010140f9  ldr x1, [x8]
0x03EF5144: fe0742f8  ldr x30, [sp], #0x20
0x03EF5148: b5e1f317  b #0x3bed81c
0x03EF514C: d82eca97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF5150 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c<object>$$<HandleDuplicatedEntityPositions>b__9_1
; native signature: bool MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_object____HandleDuplicatedEntityPositions_b__9_1 (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_TState__o* __this, MergeEngine_ECS_Components_Items_PositionComponent_o* item, const MethodInfo_3EF5150* method);
; bytes=92 sha256=54232954c1092f8d4c7e6bc6a1bf0983a56326f82be4d8390b01b8d740392f38 status=arm64_complete_bound indexed_start=True
0x03EF5150: fe0f1ef8  str x30, [sp, #-0x20]!
0x03EF5154: f44f01a9  stp x20, x19, [sp, #0x10]
0x03EF5158: 14f101d0  adrp x20, #0x7d17000
0x03EF515C: 883a7839  ldrb w8, [x20, #0xe0e]
0x03EF5160: f30301aa  mov x19, x1
0x03EF5164: c8000037  tbnz w8, #0, #0x3ef517c
0x03EF5168: 20bc01d0  adrp x0, #0x767b000
0x03EF516C: 00d047f9  ldr x0, [x0, #0xfa0]
0x03EF5170: 2a2eca97  bl #0x3180a18
0x03EF5174: 28008052  movz w8, #0x1
0x03EF5178: 883a3839  strb w8, [x20, #0xe0e]
0x03EF517C: 730100b4  cbz x19, #0x3ef51a8
0x03EF5180: 28bc01d0  adrp x8, #0x767b000
0x03EF5184: 08d147f9  ldr x8, [x8, #0xfa0]
0x03EF5188: e00313aa  mov x0, x19
0x03EF518C: 010140f9  ldr x1, [x8]
0x03EF5190: a3e1f397  bl #0x3bed81c
0x03EF5194: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03EF5198: 1f0000f1  cmp x0, #0
0x03EF519C: e0179f1a  cset w0, eq
0x03EF51A0: fe0742f8  ldr x30, [sp], #0x20
0x03EF51A4: c0035fd6  ret
0x03EF51A8: c12eca97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF51AC | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c<object>$$<HandleDuplicatedEntityPositions>b__9_2
; native signature: MergeEngine_ECS_Entity_o* MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_object____HandleDuplicatedEntityPositions_b__9_2 (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c_TState__o* __this, MergeEngine_ECS_Components_Items_PositionComponent_o* item, const MethodInfo_3EF51AC* method);
; bytes=24 sha256=0182a355315633e784a05005402e28d1defd172a7389d304b3b4b86d685cc83f status=arm64_complete_bound indexed_start=True
0x03EF51AC: fe0f1ff8  str x30, [sp, #-0x10]!
0x03EF51B0: 810000b4  cbz x1, #0x3ef51c0
0x03EF51B4: 200840f9  ldr x0, [x1, #0x10]
0x03EF51B8: fe0741f8  ldr x30, [sp], #0x10
0x03EF51BC: c0035fd6  ret
0x03EF51C0: bb2eca97  bl #0x3180cac


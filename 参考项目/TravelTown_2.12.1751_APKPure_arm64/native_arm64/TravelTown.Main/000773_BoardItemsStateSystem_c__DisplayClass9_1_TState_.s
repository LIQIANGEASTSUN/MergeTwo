; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 773 .BoardItemsStateSystem.<>c__DisplayClass9_1<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B1E72C | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c__DisplayClass9_1<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_1_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_1_TState__o* __this, const MethodInfo_4B1E72C* method);
; bytes=8 sha256=40b0f96cf4f621c8a75693340e090a9cc137d712036b815032bf4d80983194dd status=arm64_complete_bound indexed_start=True
0x04B1E72C: e1031faa  mov x1, xzr
0x04B1E730: b3ef2e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B1E734 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c__DisplayClass9_1<object>$$<HandleDuplicatedEntityPositions>b__3
; native signature: bool MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_1_object____HandleDuplicatedEntityPositions_b__3 (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_1_TState__o* __this, MergeEngine_ECS_Components_Items_PositionComponent_o* positionedItem, const MethodInfo_4B1E734* method);
; bytes=64 sha256=338f1bfb3e898c0e6f17811fd05d8ec5527d74271320ba2e7299954030ccd4b4 status=arm64_complete_bound indexed_start=True
0x04B1E734: fe0f1ff8  str x30, [sp, #-0x10]!
0x04B1E738: 080840f9  ldr x8, [x0, #0x10]
0x04B1E73C: 3f0008eb  cmp x1, x8
0x04B1E740: 20010054  b.eq #0x4b1e764
0x04B1E744: 610100b4  cbz x1, #0x4b1e770
0x04B1E748: 480100b4  cbz x8, #0x4b1e770
0x04B1E74C: 081940f9  ldr x8, [x8, #0x30]
0x04B1E750: 20c00091  add x0, x1, #0x30
0x04B1E754: e2031faa  mov x2, xzr
0x04B1E758: e10308aa  mov x1, x8
0x04B1E75C: fe0741f8  ldr x30, [sp], #0x10
0x04B1E760: e8997714  b #0x6904f00
0x04B1E764: e0031f2a  mov w0, wzr
0x04B1E768: fe0741f8  ldr x30, [sp], #0x10
0x04B1E76C: c0035fd6  ret
0x04B1E770: 4f899997  bl #0x3180cac


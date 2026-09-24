; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 779 .ItemsStateSystemBase.<>c__DisplayClass10_0<TLoadable>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F34FF4 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase.<>c__DisplayClass10_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass10_0_object____ctor (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass10_0_TLoadable__o* __this, const MethodInfo_3F34FF4* method);
; bytes=8 sha256=b401c7ad8eca7d01eafb4d9394a55cb2f2f2a49681b0d53527abcbd97f4082c8 status=arm64_complete_bound indexed_start=True
0x03F34FF4: e1031faa  mov x1, xzr
0x03F34FF8: 81955e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F34FFC | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase.<>c__DisplayClass10_0<object>$$<TryGetExistingItem>b__0
; native signature: bool MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass10_0_object____TryGetExistingItem_b__0 (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass10_0_TLoadable__o* __this, MergeEngine_ECS_Components_Items_IdComponent_o* idComponent, const MethodInfo_3F34FFC* method);
; bytes=36 sha256=d56a3d1497a884db4ed3fcd11d903c3f8aacfe2e88ac3dc0f092732e24cc6af0 status=arm64_complete_bound indexed_start=True
0x03F34FFC: fe0f1ff8  str x30, [sp, #-0x10]!
0x03F35000: e10000b4  cbz x1, #0x3f3501c
0x03F35004: 281c40f9  ldr x8, [x1, #0x38]
0x03F35008: 010840f9  ldr x1, [x0, #0x10]
0x03F3500C: e2031faa  mov x2, xzr
0x03F35010: e00308aa  mov x0, x8
0x03F35014: fe0741f8  ldr x30, [sp], #0x10
0x03F35018: 16d65614  b #0x54ea870
0x03F3501C: 242fc997  bl #0x3180cac


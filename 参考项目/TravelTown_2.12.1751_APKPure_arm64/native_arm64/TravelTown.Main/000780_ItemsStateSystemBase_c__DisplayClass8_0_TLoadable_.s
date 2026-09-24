; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 780 .ItemsStateSystemBase.<>c__DisplayClass8_0<TLoadable>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B1BE58 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase.<>c__DisplayClass8_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass8_0_object____ctor (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass8_0_TLoadable__o* __this, const MethodInfo_4B1BE58* method);
; bytes=8 sha256=e5cb8e28d34dbc59cb1d44553eb2e339e238b0182f7968e0f4c450d99b06d857 status=arm64_complete_bound indexed_start=True
0x04B1BE58: e1031faa  mov x1, xzr
0x04B1BE5C: e8f92e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B1BE60 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase.<>c__DisplayClass8_0<object>$$<HandleExistingEntities>b__0
; native signature: bool MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass8_0_object____HandleExistingEntities_b__0 (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase___c__DisplayClass8_0_TLoadable__o* __this, Merger_Services_Backend_Sync_Data_Payloads_Board_ItemPayloadBase_o* item, const MethodInfo_4B1BE60* method);
; bytes=40 sha256=3cb558e6b3e51df627229c23f7164a944844432ff9e99cb90774e93c434a8e01 status=arm64_complete_bound indexed_start=True
0x04B1BE60: fe0f1ff8  str x30, [sp, #-0x10]!
0x04B1BE64: 010100b4  cbz x1, #0x4b1be84
0x04B1BE68: 080840f9  ldr x8, [x0, #0x10]
0x04B1BE6C: c80000b4  cbz x8, #0x4b1be84
0x04B1BE70: 200c40f9  ldr x0, [x1, #0x18]
0x04B1BE74: 011d40f9  ldr x1, [x8, #0x38]
0x04B1BE78: e2031faa  mov x2, xzr
0x04B1BE7C: fe0741f8  ldr x30, [sp], #0x10
0x04B1BE80: 616c2714  b #0x54f7004
0x04B1BE84: 8a939997  bl #0x3180cac


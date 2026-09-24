; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 769 .BoardInventoryStateSystem.<>c<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF4F08 | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem.<>c<object>$$.cctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_object____cctor (const MethodInfo_3EF4F08* method);
; bytes=188 sha256=4a8aa94bbb922e9587c33671300544b9715c8a2f622f6f759a441bb5efd62ca0 status=arm64_complete_bound indexed_start=True
0x03EF4F08: fe0f1ef8  str x30, [sp, #-0x20]!
0x03EF4F0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03EF4F10: f30300aa  mov x19, x0
0x03EF4F14: 001040f9  ldr x0, [x0, #0x20]
0x03EF4F18: 08d44439  ldrb w8, [x0, #0x135]
0x03EF4F1C: 48000037  tbnz w8, #0, #0x3ef4f24
0x03EF4F20: 3f86c997  bl #0x315681c
0x03EF4F24: 086040f9  ldr x8, [x0, #0xc0]
0x03EF4F28: 000140f9  ldr x0, [x8]
0x03EF4F2C: 08d44439  ldrb w8, [x0, #0x135]
0x03EF4F30: 48000037  tbnz w8, #0, #0x3ef4f38
0x03EF4F34: 3a86c997  bl #0x315681c
0x03EF4F38: 5a2fca97  bl #0x3180ca0
0x03EF4F3C: 681240f9  ldr x8, [x19, #0x20]
0x03EF4F40: f40300aa  mov x20, x0
0x03EF4F44: 09d54439  ldrb w9, [x8, #0x135]
0x03EF4F48: 69000037  tbnz w9, #0, #0x3ef4f54
0x03EF4F4C: e00308aa  mov x0, x8
0x03EF4F50: 3386c997  bl #0x315681c
0x03EF4F54: e00314aa  mov x0, x20
0x03EF4F58: e1031faa  mov x1, xzr
0x03EF4F5C: a8955f94  bl #0x56da5fc
0x03EF4F60: 601240f9  ldr x0, [x19, #0x20]
0x03EF4F64: 08d44439  ldrb w8, [x0, #0x135]
0x03EF4F68: 48000037  tbnz w8, #0, #0x3ef4f70
0x03EF4F6C: 2c86c997  bl #0x315681c
0x03EF4F70: 086040f9  ldr x8, [x0, #0xc0]
0x03EF4F74: 000940f9  ldr x0, [x8, #0x10]
0x03EF4F78: 08d44439  ldrb w8, [x0, #0x135]
0x03EF4F7C: 48000037  tbnz w8, #0, #0x3ef4f84
0x03EF4F80: 2786c997  bl #0x315681c
0x03EF4F84: 085c40f9  ldr x8, [x0, #0xb8]
0x03EF4F88: 140100f9  str x20, [x8]
0x03EF4F8C: 601240f9  ldr x0, [x19, #0x20]
0x03EF4F90: 08d44439  ldrb w8, [x0, #0x135]
0x03EF4F94: 48000037  tbnz w8, #0, #0x3ef4f9c
0x03EF4F98: 2186c997  bl #0x315681c
0x03EF4F9C: 086040f9  ldr x8, [x0, #0xc0]
0x03EF4FA0: 000940f9  ldr x0, [x8, #0x10]
0x03EF4FA4: 08d44439  ldrb w8, [x0, #0x135]
0x03EF4FA8: 48000037  tbnz w8, #0, #0x3ef4fb0
0x03EF4FAC: 1c86c997  bl #0x315681c
0x03EF4FB0: 005c40f9  ldr x0, [x0, #0xb8]
0x03EF4FB4: e10314aa  mov x1, x20
0x03EF4FB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03EF4FBC: fe0742f8  ldr x30, [sp], #0x20
0x03EF4FC0: 812eca17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF4FC4 | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem.<>c<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_TState__o* __this, const MethodInfo_3EF4FC4* method);
; bytes=8 sha256=575ee339262b8ba06709d5c5be72f0e7384e43928468ca23080a3ea29b8849d2 status=arm64_complete_bound indexed_start=True
0x03EF4FC4: e1031faa  mov x1, xzr
0x03EF4FC8: 8d955f14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF4FCC | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem.<>c<object>$$<GetExistingEntityIds>b__2_0
; native signature: bool MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_object____GetExistingEntityIds_b__2_0 (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_TState__o* __this, MergeEngine_ECS_Components_Items_InventorySlotComponent_o* item, const MethodInfo_3EF4FCC* method);
; bytes=32 sha256=b792dbd8f4e2b4dcf991e5bf9c71ead60f4ea2ecf04461043e2b8286fc1ae656 status=arm64_complete_bound indexed_start=True
0x03EF4FCC: fe0f1ff8  str x30, [sp, #-0x10]!
0x03EF4FD0: c10000b4  cbz x1, #0x3ef4fe8
0x03EF4FD4: 282c40b9  ldr w8, [x1, #0x2c]
0x03EF4FD8: 1f010071  cmp w8, #0
0x03EF4FDC: e0179f1a  cset w0, eq
0x03EF4FE0: fe0741f8  ldr x30, [sp], #0x10
0x03EF4FE4: c0035fd6  ret
0x03EF4FE8: 312fca97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF4FEC | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem.<>c<object>$$<GetExistingEntityIds>b__2_1
; native signature: MergeEngine_ECS_Components_Items_IdComponent_o* MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_object____GetExistingEntityIds_b__2_1 (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem___c_TState__o* __this, MergeEngine_ECS_Components_Items_InventorySlotComponent_o* items, const MethodInfo_3EF4FEC* method);
; bytes=80 sha256=a27d6102c28ac83c29f5534d0aa4c4ff0905c19a5c2b80a3fed4ff86b3d4e5a8 status=arm64_complete_bound indexed_start=True
0x03EF4FEC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03EF4FF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03EF4FF4: 14f101f0  adrp x20, #0x7d17000
0x03EF4FF8: 88327839  ldrb w8, [x20, #0xe0c]
0x03EF4FFC: f30301aa  mov x19, x1
0x03EF5000: c8000037  tbnz w8, #0, #0x3ef5018
0x03EF5004: 20bc01d0  adrp x0, #0x767b000
0x03EF5008: 00cc47f9  ldr x0, [x0, #0xf98]
0x03EF500C: 832eca97  bl #0x3180a18
0x03EF5010: 28008052  movz w8, #0x1
0x03EF5014: 88323839  strb w8, [x20, #0xe0c]
0x03EF5018: 130100b4  cbz x19, #0x3ef5038
0x03EF501C: 28bc01d0  adrp x8, #0x767b000
0x03EF5020: 08cd47f9  ldr x8, [x8, #0xf98]
0x03EF5024: e00313aa  mov x0, x19
0x03EF5028: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03EF502C: 010140f9  ldr x1, [x8]
0x03EF5030: fe0742f8  ldr x30, [sp], #0x20
0x03EF5034: fae1f317  b #0x3bed81c
0x03EF5038: 1d2fca97  bl #0x3180cac


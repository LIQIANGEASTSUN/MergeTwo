; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 768 MergeEngine.ECS.Systems.State.Board.BoardInventorySlotsStateSystem<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C17F4C | MergeEngine.ECS.Systems.State.Board.BoardInventorySlotsStateSystem<object>$$LoadState
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventorySlotsStateSystem_object___LoadState (MergeEngine_ECS_Systems_State_Board_BoardInventorySlotsStateSystem_TState__o* __this, Il2CppObject* boardInventorySlots, const MethodInfo_4C17F4C* method);
; bytes=208 sha256=e2bd985a77405d55fbd5338eefacb1c89377b093aa3b32e8e368f6345bac7e38 status=arm64_complete_bound indexed_start=True
0x04C17F4C: fe0f1df8  str x30, [sp, #-0x30]!
0x04C17F50: f65701a9  stp x22, x21, [sp, #0x10]
0x04C17F54: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C17F58: 168801f0  adrp x22, #0x7d1a000
0x04C17F5C: c8fe7b39  ldrb w8, [x22, #0xeff]
0x04C17F60: f50302aa  mov x21, x2
0x04C17F64: f40301aa  mov x20, x1
0x04C17F68: f30300aa  mov x19, x0
0x04C17F6C: 88010037  tbnz w8, #0, #0x4c17f9c
0x04C17F70: 405301b0  adrp x0, #0x7680000
0x04C17F74: 00b441f9  ldr x0, [x0, #0x368]
0x04C17F78: a8a29597  bl #0x3180a18
0x04C17F7C: 405301b0  adrp x0, #0x7680000
0x04C17F80: 00b841f9  ldr x0, [x0, #0x370]
0x04C17F84: a5a29597  bl #0x3180a18
0x04C17F88: 405301b0  adrp x0, #0x7680000
0x04C17F8C: 00bc41f9  ldr x0, [x0, #0x378]
0x04C17F90: a2a29597  bl #0x3180a18
0x04C17F94: 28008052  movz w8, #0x1
0x04C17F98: c8fe3b39  strb w8, [x22, #0xeff]
0x04C17F9C: f30300b4  cbz x19, #0x4c18018
0x04C17FA0: 485301b0  adrp x8, #0x7680000
0x04C17FA4: 08bd41f9  ldr x8, [x8, #0x378]
0x04C17FA8: 565301b0  adrp x22, #0x7680000
0x04C17FAC: e00313aa  mov x0, x19
0x04C17FB0: 010140f9  ldr x1, [x8]
0x04C17FB4: d6b641f9  ldr x22, [x22, #0x368]
0x04C17FB8: 517ac697  bl #0x3db68fc
0x04C17FBC: a81240f9  ldr x8, [x21, #0x20]
0x04C17FC0: e10300aa  mov x1, x0
0x04C17FC4: e00313aa  mov x0, x19
0x04C17FC8: e20314aa  mov x2, x20
0x04C17FCC: 086140f9  ldr x8, [x8, #0xc0]
0x04C17FD0: 030540f9  ldr x3, [x8, #8]
0x04C17FD4: 457cbb97  bl #0x3af70e8
0x04C17FD8: c00240f9  ldr x0, [x22]
0x04C17FDC: 731640f9  ldr x19, [x19, #0x28]
0x04C17FE0: 30a39597  bl #0x3180ca0
0x04C17FE4: e1031faa  mov x1, xzr
0x04C17FE8: f40300aa  mov x20, x0
0x04C17FEC: 3c6d4f94  bl #0x5ff34dc
0x04C17FF0: 530100b4  cbz x19, #0x4c18018
0x04C17FF4: 485301b0  adrp x8, #0x7680000
0x04C17FF8: 08b941f9  ldr x8, [x8, #0x370]
0x04C17FFC: e00313aa  mov x0, x19
0x04C18000: e10314aa  mov x1, x20
0x04C18004: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C18008: 020140f9  ldr x2, [x8]
0x04C1800C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C18010: fe0743f8  ldr x30, [sp], #0x30
0x04C18014: 5633c617  b #0x3da4d6c
0x04C18018: 25a39597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1801C | MergeEngine.ECS.Systems.State.Board.BoardInventorySlotsStateSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventorySlotsStateSystem_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardInventorySlotsStateSystem_TState__o* __this, const MethodInfo_4C1801C* method);
; bytes=16 sha256=f20211d4e6992b6d8c559437c102226d1e736e4d6deb2c54e94c22179deec1e0 status=arm64_complete_bound indexed_start=True
0x04C1801C: 281040f9  ldr x8, [x1, #0x20]
0x04C18020: 086140f9  ldr x8, [x8, #0xc0]
0x04C18024: 010940f9  ldr x1, [x8, #0x10]
0x04C18028: 5cb4e417  b #0x4545198


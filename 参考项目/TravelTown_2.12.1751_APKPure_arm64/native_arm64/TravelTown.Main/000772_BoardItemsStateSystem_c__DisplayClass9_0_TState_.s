; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 772 .BoardItemsStateSystem.<>c__DisplayClass9_0<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B1D590 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c__DisplayClass9_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_0_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_0_TState__o* __this, const MethodInfo_4B1D590* method);
; bytes=8 sha256=3893210032f33b6dd50ecb9a3477e9dc62c576aa6debfa1e67e485eaef1f3472 status=arm64_complete_bound indexed_start=True
0x04B1D590: e1031faa  mov x1, xzr
0x04B1D594: 1af42e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B1D598 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem.<>c__DisplayClass9_0<object>$$<HandleDuplicatedEntityPositions>b__0
; native signature: bool MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_0_object____HandleDuplicatedEntityPositions_b__0 (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem___c__DisplayClass9_0_TState__o* __this, MergeEngine_ECS_Components_Items_PositionComponent_o* item, const MethodInfo_4B1D598* method);
; bytes=236 sha256=18e59faf91409cb3c00db3896cc6402fcec3c3d90f48b15bb3eba1fca64a24e0 status=arm64_complete_bound indexed_start=True
0x04B1D598: fe0f1cf8  str x30, [sp, #-0x40]!
0x04B1D59C: f85f01a9  stp x24, x23, [sp, #0x10]
0x04B1D5A0: f65702a9  stp x22, x21, [sp, #0x20]
0x04B1D5A4: f44f03a9  stp x20, x19, [sp, #0x30]
0x04B1D5A8: f68f01b0  adrp x22, #0x7d1a000
0x04B1D5AC: c8c25539  ldrb w8, [x22, #0x570]
0x04B1D5B0: f30302aa  mov x19, x2
0x04B1D5B4: f40301aa  mov x20, x1
0x04B1D5B8: f50300aa  mov x21, x0
0x04B1D5BC: 28010037  tbnz w8, #0, #0x4b1d5e0
0x04B1D5C0: 005b01d0  adrp x0, #0x767f000
0x04B1D5C4: 008444f9  ldr x0, [x0, #0x908]
0x04B1D5C8: 148d9997  bl #0x3180a18
0x04B1D5CC: 005b01d0  adrp x0, #0x767f000
0x04B1D5D0: 008844f9  ldr x0, [x0, #0x910]
0x04B1D5D4: 118d9997  bl #0x3180a18
0x04B1D5D8: 28008052  movz w8, #0x1
0x04B1D5DC: c8c21539  strb w8, [x22, #0x570]
0x04B1D5E0: 681240f9  ldr x8, [x19, #0x20]
0x04B1D5E4: 086140f9  ldr x8, [x8, #0xc0]
0x04B1D5E8: 000140f9  ldr x0, [x8]
0x04B1D5EC: 08d44439  ldrb w8, [x0, #0x135]
0x04B1D5F0: 48000037  tbnz w8, #0, #0x4b1d5f8
0x04B1D5F4: 8ae49897  bl #0x315681c
0x04B1D5F8: aa8d9997  bl #0x3180ca0
0x04B1D5FC: e1031faa  mov x1, xzr
0x04B1D600: f60300aa  mov x22, x0
0x04B1D604: fef32e94  bl #0x56da5fc
0x04B1D608: d60300b4  cbz x22, #0x4b1d680
0x04B1D60C: 175b01d0  adrp x23, #0x767f000
0x04B1D610: 185b01d0  adrp x24, #0x767f000
0x04B1D614: f78a44f9  ldr x23, [x23, #0x910]
0x04B1D618: 188744f9  ldr x24, [x24, #0x908]
0x04B1D61C: e00316aa  mov x0, x22
0x04B1D620: 140c01f8  str x20, [x0, #0x10]!
0x04B1D624: e10314aa  mov x1, x20
0x04B1D628: e78c9997  bl #0x31809c4
0x04B1D62C: e00240f9  ldr x0, [x23]
0x04B1D630: b40a40f9  ldr x20, [x21, #0x10]
0x04B1D634: 9b8d9997  bl #0x3180ca0
0x04B1D638: 681240f9  ldr x8, [x19, #0x20]
0x04B1D63C: e10316aa  mov x1, x22
0x04B1D640: e3031faa  mov x3, xzr
0x04B1D644: f30300aa  mov x19, x0
0x04B1D648: 086140f9  ldr x8, [x8, #0xc0]
0x04B1D64C: 020d40f9  ldr x2, [x8, #0x18]
0x04B1D650: 5be21c94  bl #0x5255fbc
0x04B1D654: 020340f9  ldr x2, [x24]
0x04B1D658: e00314aa  mov x0, x20
0x04B1D65C: e10313aa  mov x1, x19
0x04B1D660: b49ec497  bl #0x3c45130
0x04B1D664: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04B1D668: f65742a9  ldp x22, x21, [sp, #0x20]
0x04B1D66C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04B1D670: 1f0000f1  cmp x0, #0
0x04B1D674: e0079f1a  cset w0, ne
0x04B1D678: fe0744f8  ldr x30, [sp], #0x40
0x04B1D67C: c0035fd6  ret
0x04B1D680: 8b8d9997  bl #0x3180cac


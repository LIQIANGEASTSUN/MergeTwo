; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 774 MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18A00 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$EntitiesRemovalLogic
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___EntitiesRemovalLogic (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, MergeEngine_ECS_Components_Items_IComponentBase_o* component, const MethodInfo_4C18A00* method);
; bytes=496 sha256=4023fa4b65c926bc3f137f1c5ebcebfa9feeaffb6920976d36cdc126787f4394 status=arm64_complete_bound indexed_start=True
0x04C18A00: fe0f1df8  str x30, [sp, #-0x30]!
0x04C18A04: f65701a9  stp x22, x21, [sp, #0x10]
0x04C18A08: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C18A0C: 158801d0  adrp x21, #0x7d1a000
0x04C18A10: a80e7c39  ldrb w8, [x21, #0xf03]
0x04C18A14: f30301aa  mov x19, x1
0x04C18A18: f40300aa  mov x20, x0
0x04C18A1C: e8010037  tbnz w8, #0, #0x4c18a58
0x04C18A20: 205301d0  adrp x0, #0x767e000
0x04C18A24: 00d842f9  ldr x0, [x0, #0x5b0]
0x04C18A28: fc9f9597  bl #0x3180a18
0x04C18A2C: 205301d0  adrp x0, #0x767e000
0x04C18A30: 004c42f9  ldr x0, [x0, #0x498]
0x04C18A34: f99f9597  bl #0x3180a18
0x04C18A38: 205301d0  adrp x0, #0x767e000
0x04C18A3C: 00e042f9  ldr x0, [x0, #0x5c0]
0x04C18A40: f69f9597  bl #0x3180a18
0x04C18A44: 40530190  adrp x0, #0x7680000
0x04C18A48: 00f041f9  ldr x0, [x0, #0x3e0]
0x04C18A4C: f39f9597  bl #0x3180a18
0x04C18A50: 28008052  movz w8, #0x1
0x04C18A54: a80e3c39  strb w8, [x21, #0xf03]
0x04C18A58: b30c00b4  cbz x19, #0x4c18bec
0x04C18A5C: 295301d0  adrp x9, #0x767e000
0x04C18A60: 29d942f9  ldr x9, [x9, #0x5b0]
0x04C18A64: 680240f9  ldr x8, [x19]
0x04C18A68: 953a40f9  ldr x21, [x20, #0x70]
0x04C18A6C: 360140f9  ldr x22, [x9]
0x04C18A70: 095d4279  ldrh w9, [x8, #0x12e]
0x04C18A74: c11240f9  ldr x1, [x22, #0x20]
0x04C18A78: c2a24079  ldrh w2, [x22, #0x50]
0x04C18A7C: 290100b4  cbz x9, #0x4c18aa0
0x04C18A80: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C18A84: 4a210091  add x10, x10, #8
0x04C18A88: 4b815ff8  ldur x11, [x10, #-8]
0x04C18A8C: 7f0101eb  cmp x11, x1
0x04C18A90: e0000054  b.eq #0x4c18aac
0x04C18A94: 290500f1  subs x9, x9, #1
0x04C18A98: 4a410091  add x10, x10, #0x10
0x04C18A9C: 61ffff54  b.ne #0x4c18a88
0x04C18AA0: e00313aa  mov x0, x19
0x04C18AA4: 1bf89497  bl #0x3156b10
0x04C18AA8: 05000014  b #0x4c18abc
0x04C18AAC: 490140b9  ldr w9, [x10]
0x04C18AB0: 2901020b  add w9, w9, w2
0x04C18AB4: 08d1298b  add x8, x8, w9, sxtw #4
0x04C18AB8: 00e10491  add x0, x8, #0x138
0x04C18ABC: 000440f9  ldr x0, [x0, #8]
0x04C18AC0: e10316aa  mov x1, x22
0x04C18AC4: 31a09597  bl #0x3180b88
0x04C18AC8: 080440f9  ldr x8, [x0, #8]
0x04C18ACC: e10300aa  mov x1, x0
0x04C18AD0: e00313aa  mov x0, x19
0x04C18AD4: 00013fd6  blr x8
0x04C18AD8: b50800b4  cbz x21, #0x4c18bec
0x04C18ADC: 49530190  adrp x9, #0x7680000
0x04C18AE0: a80240f9  ldr x8, [x21]
0x04C18AE4: 29f141f9  ldr x9, [x9, #0x3e0]
0x04C18AE8: e10300aa  mov x1, x0
0x04C18AEC: 24008052  movz w4, #0x1
0x04C18AF0: 051141f9  ldr x5, [x8, #0x220]
0x04C18AF4: 220140f9  ldr x2, [x9]
0x04C18AF8: 090d41f9  ldr x9, [x8, #0x218]
0x04C18AFC: e00315aa  mov x0, x21
0x04C18B00: e3031f2a  mov w3, wzr
0x04C18B04: 20013fd6  blr x9
0x04C18B08: 340700b4  cbz x20, #0x4c18bec
0x04C18B0C: 2a5301d0  adrp x10, #0x767e000
0x04C18B10: 680240f9  ldr x8, [x19]
0x04C18B14: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C18B18: 940a40f9  ldr x20, [x20, #0x10]
0x04C18B1C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C18B20: 410140f9  ldr x1, [x10]
0x04C18B24: 290100b4  cbz x9, #0x4c18b48
0x04C18B28: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C18B2C: 4a210091  add x10, x10, #8
0x04C18B30: 4b815ff8  ldur x11, [x10, #-8]
0x04C18B34: 7f0101eb  cmp x11, x1
0x04C18B38: 00010054  b.eq #0x4c18b58
0x04C18B3C: 290500f1  subs x9, x9, #1
0x04C18B40: 4a410091  add x10, x10, #0x10
0x04C18B44: 61ffff54  b.ne #0x4c18b30
0x04C18B48: e00313aa  mov x0, x19
0x04C18B4C: e2031f2a  mov w2, wzr
0x04C18B50: f0f79497  bl #0x3156b10
0x04C18B54: 04000014  b #0x4c18b64
0x04C18B58: 490180b9  ldrsw x9, [x10]
0x04C18B5C: 0811098b  add x8, x8, x9, lsl #4
0x04C18B60: 00e10491  add x0, x8, #0x138
0x04C18B64: 080440a9  ldp x8, x1, [x0]
0x04C18B68: e00313aa  mov x0, x19
0x04C18B6C: 00013fd6  blr x8
0x04C18B70: f40300b4  cbz x20, #0x4c18bec
0x04C18B74: 2a5301d0  adrp x10, #0x767e000
0x04C18B78: 880240f9  ldr x8, [x20]
0x04C18B7C: 4ae142f9  ldr x10, [x10, #0x5c0]
0x04C18B80: f30300aa  mov x19, x0
0x04C18B84: 095d4279  ldrh w9, [x8, #0x12e]
0x04C18B88: 410140f9  ldr x1, [x10]
0x04C18B8C: 290100b4  cbz x9, #0x4c18bb0
0x04C18B90: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C18B94: 4a210091  add x10, x10, #8
0x04C18B98: 4b815ff8  ldur x11, [x10, #-8]
0x04C18B9C: 7f0101eb  cmp x11, x1
0x04C18BA0: 00010054  b.eq #0x4c18bc0
0x04C18BA4: 290500f1  subs x9, x9, #1
0x04C18BA8: 4a410091  add x10, x10, #0x10
0x04C18BAC: 61ffff54  b.ne #0x4c18b98
0x04C18BB0: c2008052  movz w2, #0x6
0x04C18BB4: e00314aa  mov x0, x20
0x04C18BB8: d6f79497  bl #0x3156b10
0x04C18BBC: 05000014  b #0x4c18bd0
0x04C18BC0: 490140b9  ldr w9, [x10]
0x04C18BC4: 29190011  add w9, w9, #6
0x04C18BC8: 08d1298b  add x8, x8, w9, sxtw #4
0x04C18BCC: 00e10491  add x0, x8, #0x138
0x04C18BD0: 030840a9  ldp x3, x2, [x0]
0x04C18BD4: e00314aa  mov x0, x20
0x04C18BD8: e10313aa  mov x1, x19
0x04C18BDC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C18BE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C18BE4: fe0743f8  ldr x30, [sp], #0x30
0x04C18BE8: 60001fd6  br x3
0x04C18BEC: 30a09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18BF0 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$GetExistingEntityIds
; native signature: System_Collections_Generic_List_IdComponent__o* MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___GetExistingEntityIds (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, const MethodInfo_4C18BF0* method);
; bytes=448 sha256=89daf6d67798902ec6f0cdccc43e67ece11ef7e4bd083082a1309d2454096e66 status=arm64_complete_bound indexed_start=True
0x04C18BF0: fe0f1cf8  str x30, [sp, #-0x40]!
0x04C18BF4: f85f01a9  stp x24, x23, [sp, #0x10]
0x04C18BF8: f65702a9  stp x22, x21, [sp, #0x20]
0x04C18BFC: f44f03a9  stp x20, x19, [sp, #0x30]
0x04C18C00: 158801d0  adrp x21, #0x7d1a000
0x04C18C04: a8127c39  ldrb w8, [x21, #0xf04]
0x04C18C08: f30301aa  mov x19, x1
0x04C18C0C: f40300aa  mov x20, x0
0x04C18C10: e8010037  tbnz w8, #0, #0x4c18c4c
0x04C18C14: 40530190  adrp x0, #0x7680000
0x04C18C18: 00f441f9  ldr x0, [x0, #0x3e8]
0x04C18C1C: 7f9f9597  bl #0x3180a18
0x04C18C20: 40530190  adrp x0, #0x7680000
0x04C18C24: 00c841f9  ldr x0, [x0, #0x390]
0x04C18C28: 7c9f9597  bl #0x3180a18
0x04C18C2C: 40530190  adrp x0, #0x7680000
0x04C18C30: 00f841f9  ldr x0, [x0, #0x3f0]
0x04C18C34: 799f9597  bl #0x3180a18
0x04C18C38: 40530190  adrp x0, #0x7680000
0x04C18C3C: 00fc41f9  ldr x0, [x0, #0x3f8]
0x04C18C40: 769f9597  bl #0x3180a18
0x04C18C44: 28008052  movz w8, #0x1
0x04C18C48: a8123c39  strb w8, [x21, #0xf04]
0x04C18C4C: 140b00b4  cbz x20, #0x4c18dac
0x04C18C50: 48530190  adrp x8, #0x7680000
0x04C18C54: 08fd41f9  ldr x8, [x8, #0x3f8]
0x04C18C58: e00314aa  mov x0, x20
0x04C18C5C: 010140f9  ldr x1, [x8]
0x04C18C60: 9a77c697  bl #0x3db6ac8
0x04C18C64: 681240f9  ldr x8, [x19, #0x20]
0x04C18C68: f40300aa  mov x20, x0
0x04C18C6C: 086140f9  ldr x8, [x8, #0xc0]
0x04C18C70: 080940f9  ldr x8, [x8, #0x10]
0x04C18C74: 09d54439  ldrb w9, [x8, #0x135]
0x04C18C78: 89000037  tbnz w9, #0, #0x4c18c88
0x04C18C7C: e00308aa  mov x0, x8
0x04C18C80: e7f69497  bl #0x315681c
0x04C18C84: e80300aa  mov x8, x0
0x04C18C88: 09e140b9  ldr w9, [x8, #0xe0]
0x04C18C8C: 69000035  cbnz w9, #0x4c18c98
0x04C18C90: e00308aa  mov x0, x8
0x04C18C94: be9f9597  bl #0x3180b8c
0x04C18C98: 681240f9  ldr x8, [x19, #0x20]
0x04C18C9C: 086140f9  ldr x8, [x8, #0xc0]
0x04C18CA0: 000940f9  ldr x0, [x8, #0x10]
0x04C18CA4: 08d44439  ldrb w8, [x0, #0x135]
0x04C18CA8: 48000037  tbnz w8, #0, #0x4c18cb0
0x04C18CAC: dcf69497  bl #0x315681c
0x04C18CB0: 085c40f9  ldr x8, [x0, #0xb8]
0x04C18CB4: 58530190  adrp x24, #0x7680000
0x04C18CB8: 57530190  adrp x23, #0x7680000
0x04C18CBC: 150540f9  ldr x21, [x8, #8]
0x04C18CC0: 18f741f9  ldr x24, [x24, #0x3e8]
0x04C18CC4: f7ca41f9  ldr x23, [x23, #0x390]
0x04C18CC8: f50500b5  cbnz x21, #0x4c18d84
0x04C18CCC: 681240f9  ldr x8, [x19, #0x20]
0x04C18CD0: 086140f9  ldr x8, [x8, #0xc0]
0x04C18CD4: 000940f9  ldr x0, [x8, #0x10]
0x04C18CD8: 08d44439  ldrb w8, [x0, #0x135]
0x04C18CDC: 48000037  tbnz w8, #0, #0x4c18ce4
0x04C18CE0: cff69497  bl #0x315681c
0x04C18CE4: 08e040b9  ldr w8, [x0, #0xe0]
0x04C18CE8: 48000035  cbnz w8, #0x4c18cf0
0x04C18CEC: a89f9597  bl #0x3180b8c
0x04C18CF0: 681240f9  ldr x8, [x19, #0x20]
0x04C18CF4: 086140f9  ldr x8, [x8, #0xc0]
0x04C18CF8: 000940f9  ldr x0, [x8, #0x10]
0x04C18CFC: 08d44439  ldrb w8, [x0, #0x135]
0x04C18D00: 48000037  tbnz w8, #0, #0x4c18d08
0x04C18D04: c6f69497  bl #0x315681c
0x04C18D08: 49530190  adrp x9, #0x7680000
0x04C18D0C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C18D10: 29f941f9  ldr x9, [x9, #0x3f0]
0x04C18D14: 160140f9  ldr x22, [x8]
0x04C18D18: 200140f9  ldr x0, [x9]
0x04C18D1C: e19f9597  bl #0x3180ca0
0x04C18D20: 681240f9  ldr x8, [x19, #0x20]
0x04C18D24: e10316aa  mov x1, x22
0x04C18D28: e3031faa  mov x3, xzr
0x04C18D2C: f50300aa  mov x21, x0
0x04C18D30: 086140f9  ldr x8, [x8, #0xc0]
0x04C18D34: 020d40f9  ldr x2, [x8, #0x18]
0x04C18D38: 20f71894  bl #0x52569b8
0x04C18D3C: 681240f9  ldr x8, [x19, #0x20]
0x04C18D40: 086140f9  ldr x8, [x8, #0xc0]
0x04C18D44: 000940f9  ldr x0, [x8, #0x10]
0x04C18D48: 09d44439  ldrb w9, [x0, #0x135]
0x04C18D4C: 89000037  tbnz w9, #0, #0x4c18d5c
0x04C18D50: b3f69497  bl #0x315681c
0x04C18D54: 681240f9  ldr x8, [x19, #0x20]
0x04C18D58: 086140f9  ldr x8, [x8, #0xc0]
0x04C18D5C: 095c40f9  ldr x9, [x0, #0xb8]
0x04C18D60: 350500f9  str x21, [x9, #8]
0x04C18D64: 000940f9  ldr x0, [x8, #0x10]
0x04C18D68: 08d44439  ldrb w8, [x0, #0x135]
0x04C18D6C: 48000037  tbnz w8, #0, #0x4c18d74
0x04C18D70: abf69497  bl #0x315681c
0x04C18D74: 085c40f9  ldr x8, [x0, #0xb8]
0x04C18D78: e10315aa  mov x1, x21
0x04C18D7C: 00210091  add x0, x8, #8
0x04C18D80: 119f9597  bl #0x31809c4
0x04C18D84: 020340f9  ldr x2, [x24]
0x04C18D88: e00314aa  mov x0, x20
0x04C18D8C: e10315aa  mov x1, x21
0x04C18D90: 41dfc097  bl #0x3c50a94
0x04C18D94: e10240f9  ldr x1, [x23]
0x04C18D98: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04C18D9C: f65742a9  ldp x22, x21, [sp, #0x20]
0x04C18DA0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04C18DA4: fe0744f8  ldr x30, [sp], #0x40
0x04C18DA8: 8a1cc117  b #0x3c5ffd0
0x04C18DAC: c09f9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18DB0 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$ProcessItems
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___ProcessItems (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, Il2CppObject* boardItems, System_Collections_Generic_List_IdComponent__o* existingEntityIds, const MethodInfo_4C18DB0* method);
; bytes=380 sha256=60e4f0e9f4ba5690d591feec634a5875b287594d2e353089f122782e56680201 status=arm64_complete_bound indexed_start=True
0x04C18DB0: ff4301d1  sub sp, sp, #0x50
0x04C18DB4: fe5f02a9  stp x30, x23, [sp, #0x20]
0x04C18DB8: f65703a9  stp x22, x21, [sp, #0x30]
0x04C18DBC: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C18DC0: 178801d0  adrp x23, #0x7d1a000
0x04C18DC4: e8167c39  ldrb w8, [x23, #0xf05]
0x04C18DC8: f30303aa  mov x19, x3
0x04C18DCC: f40302aa  mov x20, x2
0x04C18DD0: f60301aa  mov x22, x1
0x04C18DD4: f50300aa  mov x21, x0
0x04C18DD8: e8010037  tbnz w8, #0, #0x4c18e14
0x04C18DDC: 40530190  adrp x0, #0x7680000
0x04C18DE0: 000042f9  ldr x0, [x0, #0x400]
0x04C18DE4: 0d9f9597  bl #0x3180a18
0x04C18DE8: 40530190  adrp x0, #0x7680000
0x04C18DEC: 000442f9  ldr x0, [x0, #0x408]
0x04C18DF0: 0a9f9597  bl #0x3180a18
0x04C18DF4: 40530190  adrp x0, #0x7680000
0x04C18DF8: 000842f9  ldr x0, [x0, #0x410]
0x04C18DFC: 079f9597  bl #0x3180a18
0x04C18E00: 40530190  adrp x0, #0x7680000
0x04C18E04: 000c42f9  ldr x0, [x0, #0x418]
0x04C18E08: 049f9597  bl #0x3180a18
0x04C18E0C: 28008052  movz w8, #0x1
0x04C18E10: e8163c39  strb w8, [x23, #0xf05]
0x04C18E14: ffff00a9  stp xzr, xzr, [sp, #8]
0x04C18E18: ff0f00f9  str xzr, [sp, #0x18]
0x04C18E1C: 360500b4  cbz x22, #0x4c18ec0
0x04C18E20: 150500b4  cbz x21, #0x4c18ec0
0x04C18E24: 681240f9  ldr x8, [x19, #0x20]
0x04C18E28: c20e40f9  ldr x2, [x22, #0x18]
0x04C18E2C: e00315aa  mov x0, x21
0x04C18E30: e10314aa  mov x1, x20
0x04C18E34: 086140f9  ldr x8, [x8, #0xc0]
0x04C18E38: 031540f9  ldr x3, [x8, #0x28]
0x04C18E3C: 9af91d94  bl #0x53974a4
0x04C18E40: c00e40f9  ldr x0, [x22, #0x18]
0x04C18E44: e00300b4  cbz x0, #0x4c18ec0
0x04C18E48: 48530190  adrp x8, #0x7680000
0x04C18E4C: 080d42f9  ldr x8, [x8, #0x418]
0x04C18E50: 57530190  adrp x23, #0x7680000
0x04C18E54: 56530190  adrp x22, #0x7680000
0x04C18E58: 010140f9  ldr x1, [x8]
0x04C18E5C: f70642f9  ldr x23, [x23, #0x408]
0x04C18E60: d60242f9  ldr x22, [x22, #0x400]
0x04C18E64: e8230091  add x8, sp, #8
0x04C18E68: 80b0d097  bl #0x4045068
0x04C18E6C: e10240f9  ldr x1, [x23]
0x04C18E70: e0230091  add x0, sp, #8
0x04C18E74: d0f20f94  bl #0x50159b4
0x04C18E78: 40010036  tbz w0, #0, #0x4c18ea0
0x04C18E7C: 681240f9  ldr x8, [x19, #0x20]
0x04C18E80: e10f40f9  ldr x1, [sp, #0x18]
0x04C18E84: 086140f9  ldr x8, [x8, #0xc0]
0x04C18E88: 041940f9  ldr x4, [x8, #0x30]
0x04C18E8C: e00315aa  mov x0, x21
0x04C18E90: e20314aa  mov x2, x20
0x04C18E94: e3031f2a  mov w3, wzr
0x04C18E98: 25000094  bl #0x4c18f2c
0x04C18E9C: f4ffff17  b #0x4c18e6c
0x04C18EA0: c10240f9  ldr x1, [x22]
0x04C18EA4: e0230091  add x0, sp, #8
0x04C18EA8: c2f20f94  bl #0x50159b0
0x04C18EAC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C18EB0: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C18EB4: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x04C18EB8: ff430191  add sp, sp, #0x50
0x04C18EBC: c0035fd6  ret
0x04C18EC0: 7b9f9597  bl #0x3180cac
0x04C18EC4: 01000014  b #0x4c18ec8
0x04C18EC8: f40300aa  mov x20, x0
0x04C18ECC: 3f040071  cmp w1, #1
0x04C18ED0: 61010054  b.ne #0x4c18efc
0x04C18ED4: e00314aa  mov x0, x20
0x04C18ED8: 8ed69694  bl #0x71ce910
0x04C18EDC: 130040f9  ldr x19, [x0]
0x04C18EE0: 90d69694  bl #0x71ce920
0x04C18EE4: c10240f9  ldr x1, [x22]
0x04C18EE8: e0230091  add x0, sp, #8
0x04C18EEC: b1f20f94  bl #0x50159b0
0x04C18EF0: f3fdffb4  cbz x19, #0x4c18eac
0x04C18EF4: e00313aa  mov x0, x19
0x04C18EF8: 6b9f9597  bl #0x3180ca4
0x04C18EFC: f3031faa  mov x19, xzr
0x04C18F00: 02000014  b #0x4c18f08
0x04C18F04: f40300aa  mov x20, x0
0x04C18F08: c10240f9  ldr x1, [x22]
0x04C18F0C: e0230091  add x0, sp, #8
0x04C18F10: a8f20f94  bl #0x50159b0
0x04C18F14: 730000b5  cbnz x19, #0x4c18f20
0x04C18F18: e00314aa  mov x0, x20
0x04C18F1C: 8f329997  bl #0x3265958
0x04C18F20: e00313aa  mov x0, x19
0x04C18F24: 609f9597  bl #0x3180ca4
0x04C18F28: 7bc18797  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18F2C | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$ProcessItem
; native signature: MergeEngine_ECS_Entity_o* MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___ProcessItem (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, Merger_Services_Backend_Sync_Data_Payloads_Board_ItemPayloadBase_o* item, System_Collections_Generic_List_IdComponent__o* existingEntityIds, bool transitionInDisabled, const MethodInfo_4C18F2C* method);
; bytes=632 sha256=a750ff7ec382e3f3a84ec9ea04eb36a0abcf50b2e49157f99b506517082b9eca status=arm64_complete_bound indexed_start=True
0x04C18F2C: ff4301d1  sub sp, sp, #0x50
0x04C18F30: fe6701a9  stp x30, x25, [sp, #0x10]
0x04C18F34: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C18F38: f65703a9  stp x22, x21, [sp, #0x30]
0x04C18F3C: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C18F40: 188801d0  adrp x24, #0x7d1a000
0x04C18F44: 081b7c39  ldrb w8, [x24, #0xf06]
0x04C18F48: f30304aa  mov x19, x4
0x04C18F4C: f503032a  mov w21, w3
0x04C18F50: f70302aa  mov x23, x2
0x04C18F54: f60301aa  mov x22, x1
0x04C18F58: f40300aa  mov x20, x0
0x04C18F5C: e8010037  tbnz w8, #0, #0x4c18f98
0x04C18F60: 40530190  adrp x0, #0x7680000
0x04C18F64: 001042f9  ldr x0, [x0, #0x420]
0x04C18F68: ac9e9597  bl #0x3180a18
0x04C18F6C: 005301d0  adrp x0, #0x767a000
0x04C18F70: 00a044f9  ldr x0, [x0, #0x940]
0x04C18F74: a99e9597  bl #0x3180a18
0x04C18F78: 205301d0  adrp x0, #0x767e000
0x04C18F7C: 00d042f9  ldr x0, [x0, #0x5a0]
0x04C18F80: a69e9597  bl #0x3180a18
0x04C18F84: 40530190  adrp x0, #0x7680000
0x04C18F88: 00e841f9  ldr x0, [x0, #0x3d0]
0x04C18F8C: a39e9597  bl #0x3180a18
0x04C18F90: 28008052  movz w8, #0x1
0x04C18F94: 081b3c39  strb w8, [x24, #0xf06]
0x04C18F98: ff0700f9  str xzr, [sp, #8]
0x04C18F9C: 370100b4  cbz x23, #0x4c18fc0
0x04C18FA0: e0031faa  mov x0, xzr
0x04C18FA4: e1031faa  mov x1, xzr
0x04C18FA8: e2031faa  mov x2, xzr
0x04C18FAC: e3031faa  mov x3, xzr
0x04C18FB0: e4031faa  mov x4, xzr
0x04C18FB4: 05eb7394  bl #0x6913bc8
0x04C18FB8: f40100b5  cbnz x20, #0x4c18ff4
0x04C18FBC: 79000014  b #0x4c191a0
0x04C18FC0: 140f00b4  cbz x20, #0x4c191a0
0x04C18FC4: 880240f9  ldr x8, [x20]
0x04C18FC8: e00314aa  mov x0, x20
0x04C18FCC: 091541f9  ldr x9, [x8, #0x228]
0x04C18FD0: 011941f9  ldr x1, [x8, #0x230]
0x04C18FD4: 20013fd6  blr x9
0x04C18FD8: f70300aa  mov x23, x0
0x04C18FDC: e0031faa  mov x0, xzr
0x04C18FE0: e1031faa  mov x1, xzr
0x04C18FE4: e2031faa  mov x2, xzr
0x04C18FE8: e3031faa  mov x3, xzr
0x04C18FEC: e4031faa  mov x4, xzr
0x04C18FF0: f6ea7394  bl #0x6913bc8
0x04C18FF4: 681240f9  ldr x8, [x19, #0x20]
0x04C18FF8: 195301d0  adrp x25, #0x767a000
0x04C18FFC: e30300aa  mov x3, x0
0x04C19000: e4230091  add x4, sp, #8
0x04C19004: 086140f9  ldr x8, [x8, #0xc0]
0x04C19008: e00314aa  mov x0, x20
0x04C1900C: e10317aa  mov x1, x23
0x04C19010: e20316aa  mov x2, x22
0x04C19014: 052540f9  ldr x5, [x8, #0x48]
0x04C19018: 39a344f9  ldr x25, [x25, #0x940]
0x04C1901C: 86f91d94  bl #0x5397634
0x04C19020: f703002a  mov w23, w0
0x04C19024: d60100b4  cbz x22, #0x4c1905c
0x04C19028: 285301f0  adrp x8, #0x7680000
0x04C1902C: 081142f9  ldr x8, [x8, #0x420]
0x04C19030: c90240f9  ldr x9, [x22]
0x04C19034: 080140f9  ldr x8, [x8]
0x04C19038: 2bc14439  ldrb w11, [x9, #0x130]
0x04C1903C: 0ac14439  ldrb w10, [x8, #0x130]
0x04C19040: 7f010a6b  cmp w11, w10
0x04C19044: c3000054  b.lo #0x4c1905c
0x04C19048: 296540f9  ldr x9, [x9, #0xc8]
0x04C1904C: 290d0a8b  add x9, x9, x10, lsl #3
0x04C19050: 29815ff8  ldur x9, [x9, #-8]
0x04C19054: 3f0108eb  cmp x9, x8
0x04C19058: c0080054  b.eq #0x4c19170
0x04C1905C: 803a40f9  ldr x0, [x20, #0x70]
0x04C19060: 000a00b4  cbz x0, #0x4c191a0
0x04C19064: e1031faa  mov x1, xzr
0x04C19068: 062e6994  bl #0x6664880
0x04C1906C: e80740f9  ldr x8, [sp, #8]
0x04C19070: 880900b4  cbz x8, #0x4c191a0
0x04C19074: 210340f9  ldr x1, [x25]
0x04C19078: f80300aa  mov x24, x0
0x04C1907C: e00308aa  mov x0, x8
0x04C19080: 411fc097  bl #0x3c20d84
0x04C19084: e00800b4  cbz x0, #0x4c191a0
0x04C19088: 181800f9  str x24, [x0, #0x30]
0x04C1908C: 982e40f9  ldr x24, [x20, #0x58]
0x04C19090: 980800b4  cbz x24, #0x4c191a0
0x04C19094: 2a5301f0  adrp x10, #0x7680000
0x04C19098: 080340f9  ldr x8, [x24]
0x04C1909C: 4ae941f9  ldr x10, [x10, #0x3d0]
0x04C190A0: f90740f9  ldr x25, [sp, #8]
0x04C190A4: 095d4279  ldrh w9, [x8, #0x12e]
0x04C190A8: 410140f9  ldr x1, [x10]
0x04C190AC: 290100b4  cbz x9, #0x4c190d0
0x04C190B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C190B4: 4a210091  add x10, x10, #8
0x04C190B8: 4b815ff8  ldur x11, [x10, #-8]
0x04C190BC: 7f0101eb  cmp x11, x1
0x04C190C0: 00010054  b.eq #0x4c190e0
0x04C190C4: 290500f1  subs x9, x9, #1
0x04C190C8: 4a410091  add x10, x10, #0x10
0x04C190CC: 61ffff54  b.ne #0x4c190b8
0x04C190D0: e00318aa  mov x0, x24
0x04C190D4: e2031f2a  mov w2, wzr
0x04C190D8: 8ef69497  bl #0x3156b10
0x04C190DC: 04000014  b #0x4c190ec
0x04C190E0: 490180b9  ldrsw x9, [x10]
0x04C190E4: 0811098b  add x8, x8, x9, lsl #4
0x04C190E8: 00e10491  add x0, x8, #0x138
0x04C190EC: 080c40a9  ldp x8, x3, [x0]
0x04C190F0: e00318aa  mov x0, x24
0x04C190F4: e10319aa  mov x1, x25
0x04C190F8: e20316aa  mov x2, x22
0x04C190FC: 00013fd6  blr x8
0x04C19100: e10740f9  ldr x1, [sp, #8]
0x04C19104: 28000094  bl #0x4c191a4
0x04C19108: e10740f9  ldr x1, [sp, #8]
0x04C1910C: e00314aa  mov x0, x20
0x04C19110: 33010094  bl #0x4c195dc
0x04C19114: e00740f9  ldr x0, [sp, #8]
0x04C19118: 400400b4  cbz x0, #0x4c191a0
0x04C1911C: 285301b0  adrp x8, #0x767e000
0x04C19120: 08d142f9  ldr x8, [x8, #0x5a0]
0x04C19124: 010140f9  ldr x1, [x8]
0x04C19128: 171fc097  bl #0x3c20d84
0x04C1912C: 600000b4  cbz x0, #0x4c19138
0x04C19130: a8020012  and w8, w21, #1
0x04C19134: 08e00439  strb w8, [x0, #0x138]
0x04C19138: f7000037  tbnz w23, #0, #0x4c19154
0x04C1913C: 681240f9  ldr x8, [x19, #0x20]
0x04C19140: e10740f9  ldr x1, [sp, #8]
0x04C19144: e00314aa  mov x0, x20
0x04C19148: 086140f9  ldr x8, [x8, #0xc0]
0x04C1914C: 023540f9  ldr x2, [x8, #0x68]
0x04C19150: a9f81d94  bl #0x53973f4
0x04C19154: e00740f9  ldr x0, [sp, #8]
0x04C19158: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C1915C: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C19160: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C19164: fe6741a9  ldp x30, x25, [sp, #0x10]
0x04C19168: ff430191  add sp, sp, #0x50
0x04C1916C: c0035fd6  ret
0x04C19170: e00740f9  ldr x0, [sp, #8]
0x04C19174: 600100b4  cbz x0, #0x4c191a0
0x04C19178: 210340f9  ldr x1, [x25]
0x04C1917C: 021fc097  bl #0x3c20d84
0x04C19180: 681240f9  ldr x8, [x19, #0x20]
0x04C19184: c25640f9  ldr x2, [x22, #0xa8]
0x04C19188: e10300aa  mov x1, x0
0x04C1918C: e00314aa  mov x0, x20
0x04C19190: 086140f9  ldr x8, [x8, #0xc0]
0x04C19194: 032940f9  ldr x3, [x8, #0x50]
0x04C19198: d477bb97  bl #0x3af70e8
0x04C1919C: bcffff17  b #0x4c1908c
0x04C191A0: c39e9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C191A4 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$UpdateTimeLockCapacityState
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___UpdateTimeLockCapacityState (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, MergeEngine_ECS_Entity_o* entity, const MethodInfo_4C191A4* method);
; bytes=164 sha256=4ff939f6365e1840817d708fe7b1f15f4fd348aacf15cebc56f697c63e9a7af6 status=arm64_complete_bound indexed_start=True
0x04C191A4: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C191A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C191AC: 148801b0  adrp x20, #0x7d1a000
0x04C191B0: 881e7c39  ldrb w8, [x20, #0xf07]
0x04C191B4: f30301aa  mov x19, x1
0x04C191B8: e8010037  tbnz w8, #0, #0x4c191f4
0x04C191BC: 205301f0  adrp x0, #0x7680000
0x04C191C0: 001442f9  ldr x0, [x0, #0x428]
0x04C191C4: 159e9597  bl #0x3180a18
0x04C191C8: 005301b0  adrp x0, #0x767a000
0x04C191CC: 00b044f9  ldr x0, [x0, #0x960]
0x04C191D0: 129e9597  bl #0x3180a18
0x04C191D4: 205301f0  adrp x0, #0x7680000
0x04C191D8: 001842f9  ldr x0, [x0, #0x430]
0x04C191DC: 0f9e9597  bl #0x3180a18
0x04C191E0: 205301f0  adrp x0, #0x7680000
0x04C191E4: 001c42f9  ldr x0, [x0, #0x438]
0x04C191E8: 0c9e9597  bl #0x3180a18
0x04C191EC: 28008052  movz w8, #0x1
0x04C191F0: 881e3c39  strb w8, [x20, #0xf07]
0x04C191F4: 930200b4  cbz x19, #0x4c19244
0x04C191F8: 085301b0  adrp x8, #0x767a000
0x04C191FC: 08b144f9  ldr x8, [x8, #0x960]
0x04C19200: e00313aa  mov x0, x19
0x04C19204: 010140f9  ldr x1, [x8]
0x04C19208: df1ec097  bl #0x3c20d84
0x04C1920C: 600100b4  cbz x0, #0x4c19238
0x04C19210: 285301f0  adrp x8, #0x7680000
0x04C19214: 081542f9  ldr x8, [x8, #0x428]
0x04C19218: 010140f9  ldr x1, [x8]
0x04C1921C: 8051bf97  bl #0x3bed81c
0x04C19220: c00000b4  cbz x0, #0x4c19238
0x04C19224: 087440b9  ldr w8, [x0, #0x74]
0x04C19228: 1f050071  cmp w8, #1
0x04C1922C: 6b000054  b.lt #0x4c19238
0x04C19230: 48008052  movz w8, #0x2
0x04C19234: 084400b9  str w8, [x0, #0x44]
0x04C19238: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C1923C: fe0742f8  ldr x30, [sp], #0x20
0x04C19240: c0035fd6  ret
0x04C19244: 9a9e9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C19248 | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$HandleDuplicatedEntityPositions
; native signature: System_Collections_Generic_List_Entity__o* MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___HandleDuplicatedEntityPositions (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, System_Collections_Generic_List_PositionComponent__o* positionedItems, const MethodInfo_4C19248* method);
; bytes=916 sha256=c2327e9b76f2e84c8c2a1f4cc2c5912b36bb885e4281f4f10cf33d91bed077c1 status=arm64_complete_bound indexed_start=True
0x04C19248: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x04C1924C: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C19250: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C19254: f65703a9  stp x22, x21, [sp, #0x30]
0x04C19258: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C1925C: 168801b0  adrp x22, #0x7d1a000
0x04C19260: c8227c39  ldrb w8, [x22, #0xf08]
0x04C19264: f30302aa  mov x19, x2
0x04C19268: f50301aa  mov x21, x1
0x04C1926C: f40300aa  mov x20, x0
0x04C19270: a8020037  tbnz w8, #0, #0x4c192c4
0x04C19274: 205301f0  adrp x0, #0x7680000
0x04C19278: 002042f9  ldr x0, [x0, #0x440]
0x04C1927C: e79d9597  bl #0x3180a18
0x04C19280: 205301f0  adrp x0, #0x7680000
0x04C19284: 002442f9  ldr x0, [x0, #0x448]
0x04C19288: e49d9597  bl #0x3180a18
0x04C1928C: 205301f0  adrp x0, #0x7680000
0x04C19290: 002842f9  ldr x0, [x0, #0x450]
0x04C19294: e19d9597  bl #0x3180a18
0x04C19298: 205301f0  adrp x0, #0x7680000
0x04C1929C: 002c42f9  ldr x0, [x0, #0x458]
0x04C192A0: de9d9597  bl #0x3180a18
0x04C192A4: 205301d0  adrp x0, #0x767f000
0x04C192A8: 008844f9  ldr x0, [x0, #0x910]
0x04C192AC: db9d9597  bl #0x3180a18
0x04C192B0: 205301f0  adrp x0, #0x7680000
0x04C192B4: 003042f9  ldr x0, [x0, #0x460]
0x04C192B8: d89d9597  bl #0x3180a18
0x04C192BC: 28008052  movz w8, #0x1
0x04C192C0: c8223c39  strb w8, [x22, #0xf08]
0x04C192C4: 681240f9  ldr x8, [x19, #0x20]
0x04C192C8: 086140f9  ldr x8, [x8, #0xc0]
0x04C192CC: 003940f9  ldr x0, [x8, #0x70]
0x04C192D0: 08d44439  ldrb w8, [x0, #0x135]
0x04C192D4: 48000037  tbnz w8, #0, #0x4c192dc
0x04C192D8: 51f59497  bl #0x315681c
0x04C192DC: 719e9597  bl #0x3180ca0
0x04C192E0: 681240f9  ldr x8, [x19, #0x20]
0x04C192E4: f70300aa  mov x23, x0
0x04C192E8: 086140f9  ldr x8, [x8, #0xc0]
0x04C192EC: 013d40f9  ldr x1, [x8, #0x78]
0x04C192F0: a810fc97  bl #0x4b1d590
0x04C192F4: 371700b4  cbz x23, #0x4c195d8
0x04C192F8: 3a5301d0  adrp x26, #0x767f000
0x04C192FC: 395301f0  adrp x25, #0x7680000
0x04C19300: 3b5301f0  adrp x27, #0x7680000
0x04C19304: 5a8b44f9  ldr x26, [x26, #0x910]
0x04C19308: 392f42f9  ldr x25, [x25, #0x458]
0x04C1930C: 7b2342f9  ldr x27, [x27, #0x440]
0x04C19310: f60317aa  mov x22, x23
0x04C19314: d50e01f8  str x21, [x22, #0x10]!
0x04C19318: e00316aa  mov x0, x22
0x04C1931C: e10315aa  mov x1, x21
0x04C19320: a99d9597  bl #0x31809c4
0x04C19324: 400340f9  ldr x0, [x26]
0x04C19328: d50240f9  ldr x21, [x22]
0x04C1932C: 5d9e9597  bl #0x3180ca0
0x04C19330: 681240f9  ldr x8, [x19, #0x20]
0x04C19334: e10317aa  mov x1, x23
0x04C19338: e3031faa  mov x3, xzr
0x04C1933C: f80300aa  mov x24, x0
0x04C19340: 086140f9  ldr x8, [x8, #0xc0]
0x04C19344: 024140f9  ldr x2, [x8, #0x80]
0x04C19348: 1df31894  bl #0x5255fbc
0x04C1934C: 220340f9  ldr x2, [x25]
0x04C19350: e00315aa  mov x0, x21
0x04C19354: e10318aa  mov x1, x24
0x04C19358: d4b7c197  bl #0x3c872a8
0x04C1935C: 610340f9  ldr x1, [x27]
0x04C19360: f50300aa  mov x21, x0
0x04C19364: 913bc097  bl #0x3c281a8
0x04C19368: c0000036  tbz w0, #0, #0x4c19380
0x04C1936C: 803a40f9  ldr x0, [x20, #0x70]
0x04C19370: 401300b4  cbz x0, #0x4c195d8
0x04C19374: e10315aa  mov x1, x21
0x04C19378: e2031faa  mov x2, xzr
0x04C1937C: 023f6994  bl #0x6668f84
0x04C19380: 681240f9  ldr x8, [x19, #0x20]
0x04C19384: d40240f9  ldr x20, [x22]
0x04C19388: 086140f9  ldr x8, [x8, #0xc0]
0x04C1938C: 000940f9  ldr x0, [x8, #0x10]
0x04C19390: 08d44439  ldrb w8, [x0, #0x135]
0x04C19394: 48000037  tbnz w8, #0, #0x4c1939c
0x04C19398: 21f59497  bl #0x315681c
0x04C1939C: 08e040b9  ldr w8, [x0, #0xe0]
0x04C193A0: 48000035  cbnz w8, #0x4c193a8
0x04C193A4: fa9d9597  bl #0x3180b8c
0x04C193A8: 681240f9  ldr x8, [x19, #0x20]
0x04C193AC: 086140f9  ldr x8, [x8, #0xc0]
0x04C193B0: 000940f9  ldr x0, [x8, #0x10]
0x04C193B4: 08d44439  ldrb w8, [x0, #0x135]
0x04C193B8: 48000037  tbnz w8, #0, #0x4c193c0
0x04C193BC: 18f59497  bl #0x315681c
0x04C193C0: 085c40f9  ldr x8, [x0, #0xb8]
0x04C193C4: 150940f9  ldr x21, [x8, #0x10]
0x04C193C8: b50500b5  cbnz x21, #0x4c1947c
0x04C193CC: 681240f9  ldr x8, [x19, #0x20]
0x04C193D0: 086140f9  ldr x8, [x8, #0xc0]
0x04C193D4: 000940f9  ldr x0, [x8, #0x10]
0x04C193D8: 08d44439  ldrb w8, [x0, #0x135]
0x04C193DC: 48000037  tbnz w8, #0, #0x4c193e4
0x04C193E0: 0ff59497  bl #0x315681c
0x04C193E4: 08e040b9  ldr w8, [x0, #0xe0]
0x04C193E8: 48000035  cbnz w8, #0x4c193f0
0x04C193EC: e89d9597  bl #0x3180b8c
0x04C193F0: 681240f9  ldr x8, [x19, #0x20]
0x04C193F4: 086140f9  ldr x8, [x8, #0xc0]
0x04C193F8: 000940f9  ldr x0, [x8, #0x10]
0x04C193FC: 08d44439  ldrb w8, [x0, #0x135]
0x04C19400: 48000037  tbnz w8, #0, #0x4c19408
0x04C19404: 06f59497  bl #0x315681c
0x04C19408: 085c40f9  ldr x8, [x0, #0xb8]
0x04C1940C: 400340f9  ldr x0, [x26]
0x04C19410: 160140f9  ldr x22, [x8]
0x04C19414: 239e9597  bl #0x3180ca0
0x04C19418: 681240f9  ldr x8, [x19, #0x20]
0x04C1941C: e10316aa  mov x1, x22
0x04C19420: e3031faa  mov x3, xzr
0x04C19424: f50300aa  mov x21, x0
0x04C19428: 086140f9  ldr x8, [x8, #0xc0]
0x04C1942C: 024540f9  ldr x2, [x8, #0x88]
0x04C19430: e3f21894  bl #0x5255fbc
0x04C19434: 681240f9  ldr x8, [x19, #0x20]
0x04C19438: 086140f9  ldr x8, [x8, #0xc0]
0x04C1943C: 000940f9  ldr x0, [x8, #0x10]
0x04C19440: 09d44439  ldrb w9, [x0, #0x135]
0x04C19444: 89000037  tbnz w9, #0, #0x4c19454
0x04C19448: f5f49497  bl #0x315681c
0x04C1944C: 681240f9  ldr x8, [x19, #0x20]
0x04C19450: 086140f9  ldr x8, [x8, #0xc0]
0x04C19454: 095c40f9  ldr x9, [x0, #0xb8]
0x04C19458: 350900f9  str x21, [x9, #0x10]
0x04C1945C: 000940f9  ldr x0, [x8, #0x10]
0x04C19460: 08d44439  ldrb w8, [x0, #0x135]
0x04C19464: 48000037  tbnz w8, #0, #0x4c1946c
0x04C19468: edf49497  bl #0x315681c
0x04C1946C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C19470: e10315aa  mov x1, x21
0x04C19474: 00410091  add x0, x8, #0x10
0x04C19478: 539d9597  bl #0x31809c4
0x04C1947C: 220340f9  ldr x2, [x25]
0x04C19480: e00314aa  mov x0, x20
0x04C19484: e10315aa  mov x1, x21
0x04C19488: 88b7c197  bl #0x3c872a8
0x04C1948C: 681240f9  ldr x8, [x19, #0x20]
0x04C19490: f40300aa  mov x20, x0
0x04C19494: 086140f9  ldr x8, [x8, #0xc0]
0x04C19498: 080940f9  ldr x8, [x8, #0x10]
0x04C1949C: 09d54439  ldrb w9, [x8, #0x135]
0x04C194A0: 89000037  tbnz w9, #0, #0x4c194b0
0x04C194A4: e00308aa  mov x0, x8
0x04C194A8: ddf49497  bl #0x315681c
0x04C194AC: e80300aa  mov x8, x0
0x04C194B0: 09e140b9  ldr w9, [x8, #0xe0]
0x04C194B4: 69000035  cbnz w9, #0x4c194c0
0x04C194B8: e00308aa  mov x0, x8
0x04C194BC: b49d9597  bl #0x3180b8c
0x04C194C0: 681240f9  ldr x8, [x19, #0x20]
0x04C194C4: 086140f9  ldr x8, [x8, #0xc0]
0x04C194C8: 000940f9  ldr x0, [x8, #0x10]
0x04C194CC: 08d44439  ldrb w8, [x0, #0x135]
0x04C194D0: 48000037  tbnz w8, #0, #0x4c194d8
0x04C194D4: d2f49497  bl #0x315681c
0x04C194D8: 085c40f9  ldr x8, [x0, #0xb8]
0x04C194DC: 385301f0  adrp x24, #0x7680000
0x04C194E0: 375301f0  adrp x23, #0x7680000
0x04C194E4: 150d40f9  ldr x21, [x8, #0x18]
0x04C194E8: 182742f9  ldr x24, [x24, #0x448]
0x04C194EC: f72a42f9  ldr x23, [x23, #0x450]
0x04C194F0: f50500b5  cbnz x21, #0x4c195ac
0x04C194F4: 681240f9  ldr x8, [x19, #0x20]
0x04C194F8: 086140f9  ldr x8, [x8, #0xc0]
0x04C194FC: 000940f9  ldr x0, [x8, #0x10]
0x04C19500: 08d44439  ldrb w8, [x0, #0x135]
0x04C19504: 48000037  tbnz w8, #0, #0x4c1950c
0x04C19508: c5f49497  bl #0x315681c
0x04C1950C: 08e040b9  ldr w8, [x0, #0xe0]
0x04C19510: 48000035  cbnz w8, #0x4c19518
0x04C19514: 9e9d9597  bl #0x3180b8c
0x04C19518: 681240f9  ldr x8, [x19, #0x20]
0x04C1951C: 086140f9  ldr x8, [x8, #0xc0]
0x04C19520: 000940f9  ldr x0, [x8, #0x10]
0x04C19524: 08d44439  ldrb w8, [x0, #0x135]
0x04C19528: 48000037  tbnz w8, #0, #0x4c19530
0x04C1952C: bcf49497  bl #0x315681c
0x04C19530: 295301f0  adrp x9, #0x7680000
0x04C19534: 085c40f9  ldr x8, [x0, #0xb8]
0x04C19538: 293142f9  ldr x9, [x9, #0x460]
0x04C1953C: 160140f9  ldr x22, [x8]
0x04C19540: 200140f9  ldr x0, [x9]
0x04C19544: d79d9597  bl #0x3180ca0
0x04C19548: 681240f9  ldr x8, [x19, #0x20]
0x04C1954C: e10316aa  mov x1, x22
0x04C19550: e3031faa  mov x3, xzr
0x04C19554: f50300aa  mov x21, x0
0x04C19558: 086140f9  ldr x8, [x8, #0xc0]
0x04C1955C: 024940f9  ldr x2, [x8, #0x90]
0x04C19560: 16f51894  bl #0x52569b8
0x04C19564: 681240f9  ldr x8, [x19, #0x20]
0x04C19568: 086140f9  ldr x8, [x8, #0xc0]
0x04C1956C: 000940f9  ldr x0, [x8, #0x10]
0x04C19570: 09d44439  ldrb w9, [x0, #0x135]
0x04C19574: 89000037  tbnz w9, #0, #0x4c19584
0x04C19578: a9f49497  bl #0x315681c
0x04C1957C: 681240f9  ldr x8, [x19, #0x20]
0x04C19580: 086140f9  ldr x8, [x8, #0xc0]
0x04C19584: 095c40f9  ldr x9, [x0, #0xb8]
0x04C19588: 350d00f9  str x21, [x9, #0x18]
0x04C1958C: 000940f9  ldr x0, [x8, #0x10]
0x04C19590: 08d44439  ldrb w8, [x0, #0x135]
0x04C19594: 48000037  tbnz w8, #0, #0x4c1959c
0x04C19598: a1f49497  bl #0x315681c
0x04C1959C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C195A0: e10315aa  mov x1, x21
0x04C195A4: 00610091  add x0, x8, #0x18
0x04C195A8: 079d9597  bl #0x31809c4
0x04C195AC: 020340f9  ldr x2, [x24]
0x04C195B0: e00314aa  mov x0, x20
0x04C195B4: e10315aa  mov x1, x21
0x04C195B8: 37ddc097  bl #0x3c50a94
0x04C195BC: e10240f9  ldr x1, [x23]
0x04C195C0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C195C4: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C195C8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C195CC: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C195D0: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x04C195D4: 7f1ac117  b #0x3c5ffd0
0x04C195D8: b59d9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C195DC | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$ValidateTimeCycleComponent
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___ValidateTimeCycleComponent (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, MergeEngine_ECS_Entity_o* entity, const MethodInfo_4C195DC* method);
; bytes=448 sha256=79412854026b50d423d64230f7d39cdf9b41c8499c686b81cde36fe8e05d53b4 status=arm64_complete_bound indexed_start=True
0x04C195DC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04C195E0: f65701a9  stp x22, x21, [sp, #0x10]
0x04C195E4: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C195E8: 158801b0  adrp x21, #0x7d1a000
0x04C195EC: a8267c39  ldrb w8, [x21, #0xf09]
0x04C195F0: f40301aa  mov x20, x1
0x04C195F4: f30300aa  mov x19, x0
0x04C195F8: 48020037  tbnz w8, #0, #0x4c19640
0x04C195FC: 205301f0  adrp x0, #0x7680000
0x04C19600: 003442f9  ldr x0, [x0, #0x468]
0x04C19604: 059d9597  bl #0x3180a18
0x04C19608: 005301b0  adrp x0, #0x767a000
0x04C1960C: 004c42f9  ldr x0, [x0, #0x498]
0x04C19610: 029d9597  bl #0x3180a18
0x04C19614: 205301b0  adrp x0, #0x767e000
0x04C19618: 005042f9  ldr x0, [x0, #0x4a0]
0x04C1961C: ff9c9597  bl #0x3180a18
0x04C19620: 205301f0  adrp x0, #0x7680000
0x04C19624: 003842f9  ldr x0, [x0, #0x470]
0x04C19628: fc9c9597  bl #0x3180a18
0x04C1962C: e05201f0  adrp x0, #0x7678000
0x04C19630: 00d047f9  ldr x0, [x0, #0xfa0]
0x04C19634: f99c9597  bl #0x3180a18
0x04C19638: 28008052  movz w8, #0x1
0x04C1963C: a8263c39  strb w8, [x21, #0xf09]
0x04C19640: d40a00b4  cbz x20, #0x4c19798
0x04C19644: 285301f0  adrp x8, #0x7680000
0x04C19648: 083542f9  ldr x8, [x8, #0x468]
0x04C1964C: e00314aa  mov x0, x20
0x04C19650: 010140f9  ldr x1, [x8]
0x04C19654: cc1dc097  bl #0x3c20d84
0x04C19658: 000300b4  cbz x0, #0x4c196b8
0x04C1965C: 08944139  ldrb w8, [x0, #0x65]
0x04C19660: f50300aa  mov x21, x0
0x04C19664: a8020034  cbz w8, #0x4c196b8
0x04C19668: 763240f9  ldr x22, [x19, #0x60]
0x04C1966C: 760900b4  cbz x22, #0x4c19798
0x04C19670: 0a5301b0  adrp x10, #0x767a000
0x04C19674: c80240f9  ldr x8, [x22]
0x04C19678: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C1967C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C19680: 410140f9  ldr x1, [x10]
0x04C19684: 290100b4  cbz x9, #0x4c196a8
0x04C19688: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C1968C: 4a210091  add x10, x10, #8
0x04C19690: 4b815ff8  ldur x11, [x10, #-8]
0x04C19694: 7f0101eb  cmp x11, x1
0x04C19698: 80010054  b.eq #0x4c196c8
0x04C1969C: 290500f1  subs x9, x9, #1
0x04C196A0: 4a410091  add x10, x10, #0x10
0x04C196A4: 61ffff54  b.ne #0x4c19690
0x04C196A8: 82028052  movz w2, #0x14
0x04C196AC: e00316aa  mov x0, x22
0x04C196B0: 18f59497  bl #0x3156b10
0x04C196B4: 09000014  b #0x4c196d8
0x04C196B8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C196BC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C196C0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C196C4: c0035fd6  ret
0x04C196C8: 490140b9  ldr w9, [x10]
0x04C196CC: 29510011  add w9, w9, #0x14
0x04C196D0: 08d1298b  add x8, x8, w9, sxtw #4
0x04C196D4: 00e10491  add x0, x8, #0x138
0x04C196D8: 080840a9  ldp x8, x2, [x0]
0x04C196DC: e00316aa  mov x0, x22
0x04C196E0: e10315aa  mov x1, x21
0x04C196E4: 00013fd6  blr x8
0x04C196E8: 763640f9  ldr x22, [x19, #0x68]
0x04C196EC: 760500b4  cbz x22, #0x4c19798
0x04C196F0: 295301b0  adrp x9, #0x767e000
0x04C196F4: c80240f9  ldr x8, [x22]
0x04C196F8: 295142f9  ldr x9, [x9, #0x4a0]
0x04C196FC: ea5201f0  adrp x10, #0x7678000
0x04C19700: f50300aa  mov x21, x0
0x04C19704: 210140f9  ldr x1, [x9]
0x04C19708: 4ad147f9  ldr x10, [x10, #0xfa0]
0x04C1970C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C19710: 570140f9  ldr x23, [x10]
0x04C19714: 290100b4  cbz x9, #0x4c19738
0x04C19718: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C1971C: 4a210091  add x10, x10, #8
0x04C19720: 4b815ff8  ldur x11, [x10, #-8]
0x04C19724: 7f0101eb  cmp x11, x1
0x04C19728: 00010054  b.eq #0x4c19748
0x04C1972C: 290500f1  subs x9, x9, #1
0x04C19730: 4a410091  add x10, x10, #0x10
0x04C19734: 61ffff54  b.ne #0x4c19720
0x04C19738: e00316aa  mov x0, x22
0x04C1973C: e2031f2a  mov w2, wzr
0x04C19740: f4f49497  bl #0x3156b10
0x04C19744: 04000014  b #0x4c19754
0x04C19748: 490180b9  ldrsw x9, [x10]
0x04C1974C: 0811098b  add x8, x8, x9, lsl #4
0x04C19750: 00e10491  add x0, x8, #0x138
0x04C19754: 081440a9  ldp x8, x5, [x0]
0x04C19758: e00316aa  mov x0, x22
0x04C1975C: e10317aa  mov x1, x23
0x04C19760: e20315aa  mov x2, x21
0x04C19764: e30314aa  mov x3, x20
0x04C19768: e4031faa  mov x4, xzr
0x04C1976C: 00013fd6  blr x8
0x04C19770: 683e40f9  ldr x8, [x19, #0x78]
0x04C19774: 280100b4  cbz x8, #0x4c19798
0x04C19778: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C1977C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C19780: e10300aa  mov x1, x0
0x04C19784: e00308aa  mov x0, x8
0x04C19788: e2031faa  mov x2, xzr
0x04C1978C: e3031faa  mov x3, xzr
0x04C19790: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C19794: 437f6e14  b #0x67b94a0
0x04C19798: 459d9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1979C | MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_TState__o* __this, const MethodInfo_4C1979C* method);
; bytes=16 sha256=004f97ac991ccfcef8f54797b1ab47fa667412fe31a66ae358a6cb4a8ed853bf status=arm64_complete_bound indexed_start=True
0x04C1979C: 281040f9  ldr x8, [x1, #0x20]
0x04C197A0: 086140f9  ldr x8, [x8, #0xc0]
0x04C197A4: 014d40f9  ldr x1, [x8, #0x98]
0x04C197A8: 65f81d14  b #0x539793c


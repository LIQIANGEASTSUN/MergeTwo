; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 992 MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4532CCC | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$get_IsRemoteSpawning
; native signature: bool MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___get_IsRemoteSpawning (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, const MethodInfo_4532CCC* method);
; bytes=248 sha256=5a2796db40e3fe864ed68b4b5abcefd7a9b91caeab3e31772361e581517b29ac status=arm64_complete_bound indexed_start=True
0x04532CCC: fe0f1ef8  str x30, [sp, #-0x20]!
0x04532CD0: f44f01a9  stp x20, x19, [sp, #0x10]
0x04532CD4: 34bf01f0  adrp x20, #0x7d19000
0x04532CD8: 88b24439  ldrb w8, [x20, #0x12c]
0x04532CDC: f30300aa  mov x19, x0
0x04532CE0: 88010037  tbnz w8, #0, #0x4532d10
0x04532CE4: 608a0190  adrp x0, #0x767e000
0x04532CE8: 003842f9  ldr x0, [x0, #0x470]
0x04532CEC: 4b37b197  bl #0x3180a18
0x04532CF0: e08801f0  adrp x0, #0x7651000
0x04532CF4: 005441f9  ldr x0, [x0, #0x2a8]
0x04532CF8: 4837b197  bl #0x3180a18
0x04532CFC: e08801f0  adrp x0, #0x7651000
0x04532D00: 001042f9  ldr x0, [x0, #0x420]
0x04532D04: 4537b197  bl #0x3180a18
0x04532D08: 28008052  movz w8, #0x1
0x04532D0C: 88b20439  strb w8, [x20, #0x12c]
0x04532D10: 734240f9  ldr x19, [x19, #0x80]
0x04532D14: 730500b4  cbz x19, #0x4532dc0
0x04532D18: 6a8a0190  adrp x10, #0x767e000
0x04532D1C: 680240f9  ldr x8, [x19]
0x04532D20: 4a3942f9  ldr x10, [x10, #0x470]
0x04532D24: 095d4279  ldrh w9, [x8, #0x12e]
0x04532D28: 410140f9  ldr x1, [x10]
0x04532D2C: 290100b4  cbz x9, #0x4532d50
0x04532D30: 0a5940f9  ldr x10, [x8, #0xb0]
0x04532D34: 4a210091  add x10, x10, #8
0x04532D38: 4b815ff8  ldur x11, [x10, #-8]
0x04532D3C: 7f0101eb  cmp x11, x1
0x04532D40: 00010054  b.eq #0x4532d60
0x04532D44: 290500f1  subs x9, x9, #1
0x04532D48: 4a410091  add x10, x10, #0x10
0x04532D4C: 61ffff54  b.ne #0x4532d38
0x04532D50: e00313aa  mov x0, x19
0x04532D54: e2031f2a  mov w2, wzr
0x04532D58: 6e8fb097  bl #0x3156b10
0x04532D5C: 04000014  b #0x4532d6c
0x04532D60: 490180b9  ldrsw x9, [x10]
0x04532D64: 0811098b  add x8, x8, x9, lsl #4
0x04532D68: 00e10491  add x0, x8, #0x138
0x04532D6C: 080440a9  ldp x8, x1, [x0]
0x04532D70: e00313aa  mov x0, x19
0x04532D74: 00013fd6  blr x8
0x04532D78: e00100b4  cbz x0, #0x4532db4
0x04532D7C: 080840f9  ldr x8, [x0, #0x10]
0x04532D80: 880100b4  cbz x8, #0x4532db0
0x04532D84: 01414039  ldrb w1, [x8, #0x10]
0x04532D88: e88801f0  adrp x8, #0x7651000
0x04532D8C: 081142f9  ldr x8, [x8, #0x420]
0x04532D90: e0330091  add x0, sp, #0xc
0x04532D94: ff1b0079  strh wzr, [sp, #0xc]
0x04532D98: 020140f9  ldr x2, [x8]
0x04532D9C: 1e12f597  bl #0x4277614
0x04532DA0: e81b4079  ldrh w8, [sp, #0xc]
0x04532DA4: 1ffd0371  cmp w8, #0xff
0x04532DA8: e0979f1a  cset w0, hi
0x04532DAC: 02000014  b #0x4532db4
0x04532DB0: e0031f2a  mov w0, wzr
0x04532DB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04532DB8: fe0742f8  ldr x30, [sp], #0x20
0x04532DBC: c0035fd6  ret
0x04532DC0: bb37b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4532DC4 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$InitializeSystem
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___InitializeSystem (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, const MethodInfo_4532DC4* method);
; bytes=96 sha256=8b09755ce361e5a4a91f74779c9aebb3eb4549785f1dfbc8649d3375bd8c3fda status=arm64_complete_bound indexed_start=True
0x04532DC4: fe0f1ef8  str x30, [sp, #-0x20]!
0x04532DC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04532DCC: 34bf01f0  adrp x20, #0x7d19000
0x04532DD0: 88b64439  ldrb w8, [x20, #0x12d]
0x04532DD4: f30300aa  mov x19, x0
0x04532DD8: c8000037  tbnz w8, #0, #0x4532df0
0x04532DDC: 608a0190  adrp x0, #0x767e000
0x04532DE0: 003c42f9  ldr x0, [x0, #0x478]
0x04532DE4: 0d37b197  bl #0x3180a18
0x04532DE8: 28008052  movz w8, #0x1
0x04532DEC: 88b60439  strb w8, [x20, #0x12d]
0x04532DF0: 930100b4  cbz x19, #0x4532e20
0x04532DF4: 688a0190  adrp x8, #0x767e000
0x04532DF8: 083d42f9  ldr x8, [x8, #0x478]
0x04532DFC: e00313aa  mov x0, x19
0x04532E00: 010140f9  ldr x1, [x8]
0x04532E04: 850fe297  bl #0x3db6c18
0x04532E08: 600e09f8  str x0, [x19, #0x90]!
0x04532E0C: e10300aa  mov x1, x0
0x04532E10: e00313aa  mov x0, x19
0x04532E14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04532E18: fe0742f8  ldr x30, [sp], #0x20
0x04532E1C: ea36b117  b #0x31809c4
0x04532E20: a337b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3AF6E54 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$GetUnlockedComponents<object>
; native signature: System_Collections_Generic_List_TComponent__o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetUnlockedComponents_object_ (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, System_Collections_Generic_IList_TComponent__o* components, const MethodInfo_3AF6E54* method);
; bytes=324 sha256=521acaf703bcecfa2cc1ddb471b88a3d07249aa79e6dfee335c4417a3c6328f5 status=arm64_complete_bound indexed_start=True
0x03AF6E54: fe0f1df8  str x30, [sp, #-0x30]!
0x03AF6E58: f65701a9  stp x22, x21, [sp, #0x10]
0x03AF6E5C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03AF6E60: 481c40f9  ldr x8, [x2, #0x38]
0x03AF6E64: f30302aa  mov x19, x2
0x03AF6E68: f40301aa  mov x20, x1
0x03AF6E6C: 880000b5  cbnz x8, #0x3af6e7c
0x03AF6E70: e00313aa  mov x0, x19
0x03AF6E74: 817ed997  bl #0x3156878
0x03AF6E78: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6E7C: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6E80: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6E84: 48000037  tbnz w8, #0, #0x3af6e8c
0x03AF6E88: 657ed997  bl #0x315681c
0x03AF6E8C: 08e040b9  ldr w8, [x0, #0xe0]
0x03AF6E90: 48000035  cbnz w8, #0x3af6e98
0x03AF6E94: 3e27da97  bl #0x3180b8c
0x03AF6E98: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6E9C: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6EA0: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6EA4: 48000037  tbnz w8, #0, #0x3af6eac
0x03AF6EA8: 5d7ed997  bl #0x315681c
0x03AF6EAC: 085c40f9  ldr x8, [x0, #0xb8]
0x03AF6EB0: 150540f9  ldr x21, [x8, #8]
0x03AF6EB4: d50500b5  cbnz x21, #0x3af6f6c
0x03AF6EB8: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6EBC: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6EC0: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6EC4: 48000037  tbnz w8, #0, #0x3af6ecc
0x03AF6EC8: 557ed997  bl #0x315681c
0x03AF6ECC: 08e040b9  ldr w8, [x0, #0xe0]
0x03AF6ED0: 48000035  cbnz w8, #0x3af6ed8
0x03AF6ED4: 2e27da97  bl #0x3180b8c
0x03AF6ED8: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6EDC: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6EE0: 09d44439  ldrb w9, [x0, #0x135]
0x03AF6EE4: 69000037  tbnz w9, #0, #0x3af6ef0
0x03AF6EE8: 4d7ed997  bl #0x315681c
0x03AF6EEC: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6EF0: 080940f9  ldr x8, [x8, #0x10]
0x03AF6EF4: 095c40f9  ldr x9, [x0, #0xb8]
0x03AF6EF8: 0ad54439  ldrb w10, [x8, #0x135]
0x03AF6EFC: 360140f9  ldr x22, [x9]
0x03AF6F00: 8a000037  tbnz w10, #0, #0x3af6f10
0x03AF6F04: e00308aa  mov x0, x8
0x03AF6F08: 457ed997  bl #0x315681c
0x03AF6F0C: e80300aa  mov x8, x0
0x03AF6F10: e00308aa  mov x0, x8
0x03AF6F14: 6327da97  bl #0x3180ca0
0x03AF6F18: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6F1C: e10316aa  mov x1, x22
0x03AF6F20: f50300aa  mov x21, x0
0x03AF6F24: 020d42a9  ldp x2, x3, [x8, #0x20]
0x03AF6F28: 257c5d94  bl #0x5255fbc
0x03AF6F2C: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6F30: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6F34: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6F38: 48000037  tbnz w8, #0, #0x3af6f40
0x03AF6F3C: 387ed997  bl #0x315681c
0x03AF6F40: 085c40f9  ldr x8, [x0, #0xb8]
0x03AF6F44: 150500f9  str x21, [x8, #8]
0x03AF6F48: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6F4C: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6F50: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6F54: 48000037  tbnz w8, #0, #0x3af6f5c
0x03AF6F58: 317ed997  bl #0x315681c
0x03AF6F5C: 085c40f9  ldr x8, [x0, #0xb8]
0x03AF6F60: e10315aa  mov x1, x21
0x03AF6F64: 00210091  add x0, x8, #8
0x03AF6F68: 9726da97  bl #0x31809c4
0x03AF6F6C: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6F70: e00314aa  mov x0, x20
0x03AF6F74: e10315aa  mov x1, x21
0x03AF6F78: 021940f9  ldr x2, [x8, #0x30]
0x03AF6F7C: cb400694  bl #0x3c872a8
0x03AF6F80: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6F84: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03AF6F88: f65741a9  ldp x22, x21, [sp, #0x10]
0x03AF6F8C: 012140f9  ldr x1, [x8, #0x40]
0x03AF6F90: fe0743f8  ldr x30, [sp], #0x30
0x03AF6F94: 0fa40514  b #0x3c5ffd0

; Generic instantiation from Il2CppDumper script.json | RVA 0x3AF6F98 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$GetUnlockedComponents<__Il2CppFullySharedGenericType>
; native signature: System_Collections_Generic_List_TComponent__o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetUnlockedComponents___Il2CppFullySharedGenericType_ (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, System_Collections_Generic_IList_TComponent__o* components, const MethodInfo_3AF6F98* method);
; bytes=336 sha256=4d18bead57a2055d0150761fba693beb4b0fe28477184a4c564a243e99cdea35 status=arm64_complete_bound indexed_start=True
0x03AF6F98: fe0f1df8  str x30, [sp, #-0x30]!
0x03AF6F9C: f65701a9  stp x22, x21, [sp, #0x10]
0x03AF6FA0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03AF6FA4: 481c40f9  ldr x8, [x2, #0x38]
0x03AF6FA8: f30302aa  mov x19, x2
0x03AF6FAC: f40301aa  mov x20, x1
0x03AF6FB0: 880000b5  cbnz x8, #0x3af6fc0
0x03AF6FB4: e00313aa  mov x0, x19
0x03AF6FB8: 307ed997  bl #0x3156878
0x03AF6FBC: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6FC0: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6FC4: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6FC8: 48000037  tbnz w8, #0, #0x3af6fd0
0x03AF6FCC: 147ed997  bl #0x315681c
0x03AF6FD0: 08e040b9  ldr w8, [x0, #0xe0]
0x03AF6FD4: 48000035  cbnz w8, #0x3af6fdc
0x03AF6FD8: ed26da97  bl #0x3180b8c
0x03AF6FDC: 681e40f9  ldr x8, [x19, #0x38]
0x03AF6FE0: 000d40f9  ldr x0, [x8, #0x18]
0x03AF6FE4: 08d44439  ldrb w8, [x0, #0x135]
0x03AF6FE8: 48000037  tbnz w8, #0, #0x3af6ff0
0x03AF6FEC: 0c7ed997  bl #0x315681c
0x03AF6FF0: 085c40f9  ldr x8, [x0, #0xb8]
0x03AF6FF4: 150540f9  ldr x21, [x8, #8]
0x03AF6FF8: f50500b5  cbnz x21, #0x3af70b4
0x03AF6FFC: 681e40f9  ldr x8, [x19, #0x38]
0x03AF7000: 000d40f9  ldr x0, [x8, #0x18]
0x03AF7004: 08d44439  ldrb w8, [x0, #0x135]
0x03AF7008: 48000037  tbnz w8, #0, #0x3af7010
0x03AF700C: 047ed997  bl #0x315681c
0x03AF7010: 08e040b9  ldr w8, [x0, #0xe0]
0x03AF7014: 48000035  cbnz w8, #0x3af701c
0x03AF7018: dd26da97  bl #0x3180b8c
0x03AF701C: 681e40f9  ldr x8, [x19, #0x38]
0x03AF7020: 000d40f9  ldr x0, [x8, #0x18]
0x03AF7024: 09d44439  ldrb w9, [x0, #0x135]
0x03AF7028: 69000037  tbnz w9, #0, #0x3af7034
0x03AF702C: fc7dd997  bl #0x315681c
0x03AF7030: 681e40f9  ldr x8, [x19, #0x38]
0x03AF7034: 080940f9  ldr x8, [x8, #0x10]
0x03AF7038: 095c40f9  ldr x9, [x0, #0xb8]
0x03AF703C: 0ad54439  ldrb w10, [x8, #0x135]
0x03AF7040: 360140f9  ldr x22, [x9]
0x03AF7044: 8a000037  tbnz w10, #0, #0x3af7054
0x03AF7048: e00308aa  mov x0, x8
0x03AF704C: f47dd997  bl #0x315681c
0x03AF7050: e80300aa  mov x8, x0
0x03AF7054: e00308aa  mov x0, x8
0x03AF7058: 1227da97  bl #0x3180ca0
0x03AF705C: 681e40f9  ldr x8, [x19, #0x38]
0x03AF7060: e10316aa  mov x1, x22
0x03AF7064: f50300aa  mov x21, x0
0x03AF7068: 020d42a9  ldp x2, x3, [x8, #0x20]
0x03AF706C: 680040f9  ldr x8, [x3]
0x03AF7070: 00013fd6  blr x8
0x03AF7074: 681e40f9  ldr x8, [x19, #0x38]
0x03AF7078: 000d40f9  ldr x0, [x8, #0x18]
0x03AF707C: 08d44439  ldrb w8, [x0, #0x135]
0x03AF7080: 48000037  tbnz w8, #0, #0x3af7088
0x03AF7084: e67dd997  bl #0x315681c
0x03AF7088: 085c40f9  ldr x8, [x0, #0xb8]
0x03AF708C: 150500f9  str x21, [x8, #8]
0x03AF7090: 681e40f9  ldr x8, [x19, #0x38]
0x03AF7094: 000d40f9  ldr x0, [x8, #0x18]
0x03AF7098: 08d44439  ldrb w8, [x0, #0x135]
0x03AF709C: 48000037  tbnz w8, #0, #0x3af70a4
0x03AF70A0: df7dd997  bl #0x315681c
0x03AF70A4: 085c40f9  ldr x8, [x0, #0xb8]
0x03AF70A8: e10315aa  mov x1, x21
0x03AF70AC: 00210091  add x0, x8, #8
0x03AF70B0: 4526da97  bl #0x31809c4
0x03AF70B4: 681e40f9  ldr x8, [x19, #0x38]
0x03AF70B8: e00314aa  mov x0, x20
0x03AF70BC: e10315aa  mov x1, x21
0x03AF70C0: 021940f9  ldr x2, [x8, #0x30]
0x03AF70C4: 480040f9  ldr x8, [x2]
0x03AF70C8: 00013fd6  blr x8
0x03AF70CC: 681e40f9  ldr x8, [x19, #0x38]
0x03AF70D0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03AF70D4: f65741a9  ldp x22, x21, [sp, #0x10]
0x03AF70D8: 012140f9  ldr x1, [x8, #0x40]
0x03AF70DC: 220040f9  ldr x2, [x1]
0x03AF70E0: fe0743f8  ldr x30, [sp], #0x30
0x03AF70E4: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x4532E24 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$RefillQueueFor
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___RefillQueueFor (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, System_Collections_Generic_List_Combination__o* combinations, const MethodInfo_4532E24* method);
; bytes=688 sha256=1399967f1895294a841efd03694a8f8c392b114aa362082d6eb685828647c1dc status=arm64_complete_bound indexed_start=True
0x04532E24: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04532E28: f65701a9  stp x22, x21, [sp, #0x10]
0x04532E2C: f44f02a9  stp x20, x19, [sp, #0x20]
0x04532E30: 35bf01f0  adrp x21, #0x7d19000
0x04532E34: a8ba4439  ldrb w8, [x21, #0x12e]
0x04532E38: f30302aa  mov x19, x2
0x04532E3C: f40301aa  mov x20, x1
0x04532E40: 28010037  tbnz w8, #0, #0x4532e64
0x04532E44: 408a0190  adrp x0, #0x767a000
0x04532E48: 00bc44f9  ldr x0, [x0, #0x978]
0x04532E4C: f336b197  bl #0x3180a18
0x04532E50: 408a0190  adrp x0, #0x767a000
0x04532E54: 000043f9  ldr x0, [x0, #0x600]
0x04532E58: f036b197  bl #0x3180a18
0x04532E5C: 28008052  movz w8, #0x1
0x04532E60: a8ba0439  strb w8, [x21, #0x12e]
0x04532E64: 741300b4  cbz x20, #0x45330d0
0x04532E68: 568a0190  adrp x22, #0x767a000
0x04532E6C: 880240f9  ldr x8, [x20]
0x04532E70: d60243f9  ldr x22, [x22, #0x600]
0x04532E74: 095d4279  ldrh w9, [x8, #0x12e]
0x04532E78: c10240f9  ldr x1, [x22]
0x04532E7C: 290100b4  cbz x9, #0x4532ea0
0x04532E80: 0a5940f9  ldr x10, [x8, #0xb0]
0x04532E84: 4a210091  add x10, x10, #8
0x04532E88: 4b815ff8  ldur x11, [x10, #-8]
0x04532E8C: 7f0101eb  cmp x11, x1
0x04532E90: 00010054  b.eq #0x4532eb0
0x04532E94: 290500f1  subs x9, x9, #1
0x04532E98: 4a410091  add x10, x10, #0x10
0x04532E9C: 61ffff54  b.ne #0x4532e88
0x04532EA0: 22028052  movz w2, #0x11
0x04532EA4: e00314aa  mov x0, x20
0x04532EA8: 1a8fb097  bl #0x3156b10
0x04532EAC: 05000014  b #0x4532ec0
0x04532EB0: 490140b9  ldr w9, [x10]
0x04532EB4: 29450011  add w9, w9, #0x11
0x04532EB8: 08d1298b  add x8, x8, w9, sxtw #4
0x04532EBC: 00e10491  add x0, x8, #0x138
0x04532EC0: 080440a9  ldp x8, x1, [x0]
0x04532EC4: e00314aa  mov x0, x20
0x04532EC8: 00013fd6  blr x8
0x04532ECC: 880240f9  ldr x8, [x20]
0x04532ED0: c10240f9  ldr x1, [x22]
0x04532ED4: 15040011  add w21, w0, #1
0x04532ED8: 095d4279  ldrh w9, [x8, #0x12e]
0x04532EDC: 290100b4  cbz x9, #0x4532f00
0x04532EE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04532EE4: 4a210091  add x10, x10, #8
0x04532EE8: 4b815ff8  ldur x11, [x10, #-8]
0x04532EEC: 7f0101eb  cmp x11, x1
0x04532EF0: 00010054  b.eq #0x4532f10
0x04532EF4: 290500f1  subs x9, x9, #1
0x04532EF8: 4a410091  add x10, x10, #0x10
0x04532EFC: 61ffff54  b.ne #0x4532ee8
0x04532F00: 42028052  movz w2, #0x12
0x04532F04: e00314aa  mov x0, x20
0x04532F08: 028fb097  bl #0x3156b10
0x04532F0C: 05000014  b #0x4532f20
0x04532F10: 490140b9  ldr w9, [x10]
0x04532F14: 29490011  add w9, w9, #0x12
0x04532F18: 08d1298b  add x8, x8, w9, sxtw #4
0x04532F1C: 00e10491  add x0, x8, #0x138
0x04532F20: 080840a9  ldp x8, x2, [x0]
0x04532F24: 578a0190  adrp x23, #0x767a000
0x04532F28: f7be44f9  ldr x23, [x23, #0x978]
0x04532F2C: e00314aa  mov x0, x20
0x04532F30: e103152a  mov w1, w21
0x04532F34: 00013fd6  blr x8
0x04532F38: 880240f9  ldr x8, [x20]
0x04532F3C: c10240f9  ldr x1, [x22]
0x04532F40: 095d4279  ldrh w9, [x8, #0x12e]
0x04532F44: 290100b4  cbz x9, #0x4532f68
0x04532F48: 0a5940f9  ldr x10, [x8, #0xb0]
0x04532F4C: 4a210091  add x10, x10, #8
0x04532F50: 4b815ff8  ldur x11, [x10, #-8]
0x04532F54: 7f0101eb  cmp x11, x1
0x04532F58: 00010054  b.eq #0x4532f78
0x04532F5C: 290500f1  subs x9, x9, #1
0x04532F60: 4a410091  add x10, x10, #0x10
0x04532F64: 61ffff54  b.ne #0x4532f50
0x04532F68: a2018052  movz w2, #0xd
0x04532F6C: e00314aa  mov x0, x20
0x04532F70: e88eb097  bl #0x3156b10
0x04532F74: 05000014  b #0x4532f88
0x04532F78: 490140b9  ldr w9, [x10]
0x04532F7C: 29350011  add w9, w9, #0xd
0x04532F80: 08d1298b  add x8, x8, w9, sxtw #4
0x04532F84: 00e10491  add x0, x8, #0x138
0x04532F88: 080840a9  ldp x8, x2, [x0]
0x04532F8C: e00314aa  mov x0, x20
0x04532F90: e1031f2a  mov w1, wzr
0x04532F94: 00013fd6  blr x8
0x04532F98: 880240f9  ldr x8, [x20]
0x04532F9C: e10240f9  ldr x1, [x23]
0x04532FA0: 095d4279  ldrh w9, [x8, #0x12e]
0x04532FA4: 290100b4  cbz x9, #0x4532fc8
0x04532FA8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04532FAC: 4a210091  add x10, x10, #8
0x04532FB0: 4b815ff8  ldur x11, [x10, #-8]
0x04532FB4: 7f0101eb  cmp x11, x1
0x04532FB8: 00010054  b.eq #0x4532fd8
0x04532FBC: 290500f1  subs x9, x9, #1
0x04532FC0: 4a410091  add x10, x10, #0x10
0x04532FC4: 61ffff54  b.ne #0x4532fb0
0x04532FC8: e00314aa  mov x0, x20
0x04532FCC: e2031f2a  mov w2, wzr
0x04532FD0: d08eb097  bl #0x3156b10
0x04532FD4: 04000014  b #0x4532fe4
0x04532FD8: 490180b9  ldrsw x9, [x10]
0x04532FDC: 0811098b  add x8, x8, x9, lsl #4
0x04532FE0: 00e10491  add x0, x8, #0x138
0x04532FE4: 080440a9  ldp x8, x1, [x0]
0x04532FE8: e00314aa  mov x0, x20
0x04532FEC: 00013fd6  blr x8
0x04532FF0: 880240f9  ldr x8, [x20]
0x04532FF4: c10240f9  ldr x1, [x22]
0x04532FF8: f503002a  mov w21, w0
0x04532FFC: 095d4279  ldrh w9, [x8, #0x12e]
0x04533000: 290100b4  cbz x9, #0x4533024
0x04533004: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533008: 4a210091  add x10, x10, #8
0x0453300C: 4b815ff8  ldur x11, [x10, #-8]
0x04533010: 7f0101eb  cmp x11, x1
0x04533014: 00010054  b.eq #0x4533034
0x04533018: 290500f1  subs x9, x9, #1
0x0453301C: 4a410091  add x10, x10, #0x10
0x04533020: 61ffff54  b.ne #0x453300c
0x04533024: 22028052  movz w2, #0x11
0x04533028: e00314aa  mov x0, x20
0x0453302C: b98eb097  bl #0x3156b10
0x04533030: 05000014  b #0x4533044
0x04533034: 490140b9  ldr w9, [x10]
0x04533038: 29450011  add w9, w9, #0x11
0x0453303C: 08d1298b  add x8, x8, w9, sxtw #4
0x04533040: 00e10491  add x0, x8, #0x138
0x04533044: 080440a9  ldp x8, x1, [x0]
0x04533048: e00314aa  mov x0, x20
0x0453304C: 00013fd6  blr x8
0x04533050: 880240f9  ldr x8, [x20]
0x04533054: e10240f9  ldr x1, [x23]
0x04533058: f603002a  mov w22, w0
0x0453305C: 095d4279  ldrh w9, [x8, #0x12e]
0x04533060: 290100b4  cbz x9, #0x4533084
0x04533064: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533068: 4a210091  add x10, x10, #8
0x0453306C: 4b815ff8  ldur x11, [x10, #-8]
0x04533070: 7f0101eb  cmp x11, x1
0x04533074: 00010054  b.eq #0x4533094
0x04533078: 290500f1  subs x9, x9, #1
0x0453307C: 4a410091  add x10, x10, #0x10
0x04533080: 61ffff54  b.ne #0x453306c
0x04533084: 22008052  movz w2, #0x1
0x04533088: e00314aa  mov x0, x20
0x0453308C: a18eb097  bl #0x3156b10
0x04533090: 05000014  b #0x45330a4
0x04533094: 490140b9  ldr w9, [x10]
0x04533098: 29050011  add w9, w9, #1
0x0453309C: 08d1298b  add x8, x8, w9, sxtw #4
0x045330A0: 00e10491  add x0, x8, #0x138
0x045330A4: 080440a9  ldp x8, x1, [x0]
0x045330A8: e00314aa  mov x0, x20
0x045330AC: 00013fd6  blr x8
0x045330B0: 000100b4  cbz x0, #0x45330d0
0x045330B4: c102150b  add w1, w22, w21
0x045330B8: e20313aa  mov x2, x19
0x045330BC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x045330C0: f65741a9  ldp x22, x21, [sp, #0x10]
0x045330C4: e3031faa  mov x3, xzr
0x045330C8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x045330CC: 8ed66a14  b #0x5fe8b04
0x045330D0: f736b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45330D4 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$SpawnAt
; native signature: MergeEngine_Configuration_Definitions_ItemSpawnable_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___SpawnAt (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_Data_BoardItemPosition_o position, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, MergeEngine_ECS_Components_Items_InteractionComponent_o* interactionComponent, OperationContext_o* operationContext, bool isSpawner, MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceData_o* lowLevelData, Merger_ProducerExcitement_Compatibility_ProducerExcitementSpawnData_o* excitementData, const MethodInfo_45330D4* method);
; bytes=3580 sha256=832de362ccf30432e89ded4c8c8a09caf5347fa5792279bc6fd1a205d5ea6f30 status=arm64_complete_bound indexed_start=True
0x045330D4: ff8302d1  sub sp, sp, #0xa0
0x045330D8: fd7b04a9  stp x29, x30, [sp, #0x40]
0x045330DC: fc6f05a9  stp x28, x27, [sp, #0x50]
0x045330E0: fa6706a9  stp x26, x25, [sp, #0x60]
0x045330E4: f85f07a9  stp x24, x23, [sp, #0x70]
0x045330E8: f65708a9  stp x22, x21, [sp, #0x80]
0x045330EC: f44f09a9  stp x20, x19, [sp, #0x90]
0x045330F0: 35bf01d0  adrp x21, #0x7d19000
0x045330F4: a8be4439  ldrb w8, [x21, #0x12f]
0x045330F8: f60307aa  mov x22, x7
0x045330FC: f70306aa  mov x23, x6
0x04533100: f803052a  mov w24, w5
0x04533104: fd0304aa  mov x29, x4
0x04533108: fa0303aa  mov x26, x3
0x0453310C: f30302aa  mov x19, x2
0x04533110: fb0301aa  mov x27, x1
0x04533114: f40300aa  mov x20, x0
0x04533118: 48080037  tbnz w8, #0, #0x4533220
0x0453311C: c08901d0  adrp x0, #0x766d000
0x04533120: 006c46f9  ldr x0, [x0, #0xcd8]
0x04533124: 3d36b197  bl #0x3180a18
0x04533128: 208a01f0  adrp x0, #0x767a000
0x0453312C: 004c45f9  ldr x0, [x0, #0xa98]
0x04533130: 3a36b197  bl #0x3180a18
0x04533134: 408a01f0  adrp x0, #0x767e000
0x04533138: 004042f9  ldr x0, [x0, #0x480]
0x0453313C: 3736b197  bl #0x3180a18
0x04533140: 408a01f0  adrp x0, #0x767e000
0x04533144: 004442f9  ldr x0, [x0, #0x488]
0x04533148: 3436b197  bl #0x3180a18
0x0453314C: 408a01f0  adrp x0, #0x767e000
0x04533150: 004842f9  ldr x0, [x0, #0x490]
0x04533154: 3136b197  bl #0x3180a18
0x04533158: 408a01f0  adrp x0, #0x767e000
0x0453315C: 004c42f9  ldr x0, [x0, #0x498]
0x04533160: 2e36b197  bl #0x3180a18
0x04533164: 208a01f0  adrp x0, #0x767a000
0x04533168: 00bc44f9  ldr x0, [x0, #0x978]
0x0453316C: 2b36b197  bl #0x3180a18
0x04533170: 208a01f0  adrp x0, #0x767a000
0x04533174: 004c42f9  ldr x0, [x0, #0x498]
0x04533178: 2836b197  bl #0x3180a18
0x0453317C: 408a01f0  adrp x0, #0x767e000
0x04533180: 005042f9  ldr x0, [x0, #0x4a0]
0x04533184: 2536b197  bl #0x3180a18
0x04533188: 208a01f0  adrp x0, #0x767a000
0x0453318C: 000043f9  ldr x0, [x0, #0x600]
0x04533190: 2236b197  bl #0x3180a18
0x04533194: 408a01f0  adrp x0, #0x767e000
0x04533198: 005442f9  ldr x0, [x0, #0x4a8]
0x0453319C: 1f36b197  bl #0x3180a18
0x045331A0: e08801b0  adrp x0, #0x7650000
0x045331A4: 00d046f9  ldr x0, [x0, #0xda0]
0x045331A8: 1c36b197  bl #0x3180a18
0x045331AC: 408a01f0  adrp x0, #0x767e000
0x045331B0: 005842f9  ldr x0, [x0, #0x4b0]
0x045331B4: 1936b197  bl #0x3180a18
0x045331B8: 208a01d0  adrp x0, #0x7679000
0x045331BC: 007844f9  ldr x0, [x0, #0x8f0]
0x045331C0: 1636b197  bl #0x3180a18
0x045331C4: 408a01f0  adrp x0, #0x767e000
0x045331C8: 005c42f9  ldr x0, [x0, #0x4b8]
0x045331CC: 1336b197  bl #0x3180a18
0x045331D0: 408a01f0  adrp x0, #0x767e000
0x045331D4: 006042f9  ldr x0, [x0, #0x4c0]
0x045331D8: 1036b197  bl #0x3180a18
0x045331DC: c08801f0  adrp x0, #0x764e000
0x045331E0: 00ec42f9  ldr x0, [x0, #0x5d8]
0x045331E4: 0d36b197  bl #0x3180a18
0x045331E8: 408a01f0  adrp x0, #0x767e000
0x045331EC: 006442f9  ldr x0, [x0, #0x4c8]
0x045331F0: 0a36b197  bl #0x3180a18
0x045331F4: 408a01f0  adrp x0, #0x767e000
0x045331F8: 006842f9  ldr x0, [x0, #0x4d0]
0x045331FC: 0736b197  bl #0x3180a18
0x04533200: 408a01f0  adrp x0, #0x767e000
0x04533204: 006c42f9  ldr x0, [x0, #0x4d8]
0x04533208: 0436b197  bl #0x3180a18
0x0453320C: 208a01b0  adrp x0, #0x7678000
0x04533210: 00d047f9  ldr x0, [x0, #0xfa0]
0x04533214: 0136b197  bl #0x3180a18
0x04533218: 28008052  movz w8, #0x1
0x0453321C: a8be0439  strb w8, [x21, #0x12f]
0x04533220: ff1f00f9  str xzr, [sp, #0x38]
0x04533224: 536500b4  cbz x19, #0x4533ecc
0x04533228: 2a8a01f0  adrp x10, #0x767a000
0x0453322C: 680240f9  ldr x8, [x19]
0x04533230: 4abd44f9  ldr x10, [x10, #0x978]
0x04533234: 095d4279  ldrh w9, [x8, #0x12e]
0x04533238: 410140f9  ldr x1, [x10]
0x0453323C: 290100b4  cbz x9, #0x4533260
0x04533240: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533244: 4a210091  add x10, x10, #8
0x04533248: 4b815ff8  ldur x11, [x10, #-8]
0x0453324C: 7f0101eb  cmp x11, x1
0x04533250: 00010054  b.eq #0x4533270
0x04533254: 290500f1  subs x9, x9, #1
0x04533258: 4a410091  add x10, x10, #0x10
0x0453325C: 61ffff54  b.ne #0x4533248
0x04533260: 22008052  movz w2, #0x1
0x04533264: e00313aa  mov x0, x19
0x04533268: 2a8eb097  bl #0x3156b10
0x0453326C: 05000014  b #0x4533280
0x04533270: 490140b9  ldr w9, [x10]
0x04533274: 29050011  add w9, w9, #1
0x04533278: 08d1298b  add x8, x8, w9, sxtw #4
0x0453327C: 00e10491  add x0, x8, #0x138
0x04533280: 080440a9  ldp x8, x1, [x0]
0x04533284: e00313aa  mov x0, x19
0x04533288: 00013fd6  blr x8
0x0453328C: 006200b4  cbz x0, #0x4533ecc
0x04533290: e1031faa  mov x1, xzr
0x04533294: b3d56a94  bl #0x5fe8960
0x04533298: a0000037  tbnz w0, #0, #0x45332ac
0x0453329C: 9a6100b4  cbz x26, #0x4533ecc
0x045332A0: 423b40f9  ldr x2, [x26, #0x70]
0x045332A4: e10313aa  mov x1, x19
0x045332A8: dffeff97  bl #0x4532e24
0x045332AC: 4a8a01f0  adrp x10, #0x767e000
0x045332B0: 680240f9  ldr x8, [x19]
0x045332B4: 4a4d42f9  ldr x10, [x10, #0x498]
0x045332B8: 095d4279  ldrh w9, [x8, #0x12e]
0x045332BC: 410140f9  ldr x1, [x10]
0x045332C0: 290100b4  cbz x9, #0x45332e4
0x045332C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x045332C8: 4a210091  add x10, x10, #8
0x045332CC: 4b815ff8  ldur x11, [x10, #-8]
0x045332D0: 7f0101eb  cmp x11, x1
0x045332D4: 00010054  b.eq #0x45332f4
0x045332D8: 290500f1  subs x9, x9, #1
0x045332DC: 4a410091  add x10, x10, #0x10
0x045332E0: 61ffff54  b.ne #0x45332cc
0x045332E4: e00313aa  mov x0, x19
0x045332E8: e2031f2a  mov w2, wzr
0x045332EC: 098eb097  bl #0x3156b10
0x045332F0: 04000014  b #0x4533300
0x045332F4: 490180b9  ldrsw x9, [x10]
0x045332F8: 0811098b  add x8, x8, x9, lsl #4
0x045332FC: 00e10491  add x0, x8, #0x138
0x04533300: 080440a9  ldp x8, x1, [x0]
0x04533304: e00313aa  mov x0, x19
0x04533308: f81f00b9  str w24, [sp, #0x1c]
0x0453330C: 00013fd6  blr x8
0x04533310: f45d00b4  cbz x20, #0x4533ecc
0x04533314: fc8801b0  adrp x28, #0x7650000
0x04533318: f85340f9  ldr x24, [sp, #0xa0]
0x0453331C: 9cd346f9  ldr x28, [x28, #0xda0]
0x04533320: e10300aa  mov x1, x0
0x04533324: e00314aa  mov x0, x20
0x04533328: e2031faa  mov x2, xzr
0x0453332C: 2cd07994  bl #0x63a73dc
0x04533330: 081340f9  ldr x8, [x24, #0x20]
0x04533334: f503002a  mov w21, w0
0x04533338: e5e30091  add x5, sp, #0x38
0x0453333C: e00314aa  mov x0, x20
0x04533340: 086140f9  ldr x8, [x8, #0xc0]
0x04533344: e1031aaa  mov x1, x26
0x04533348: e20313aa  mov x2, x19
0x0453334C: e30317aa  mov x3, x23
0x04533350: 060940f9  ldr x6, [x8, #0x10]
0x04533354: e40316aa  mov x4, x22
0x04533358: f70b00f9  str x23, [sp, #0x10]
0x0453335C: f8020094  bl #0x4533f3c
0x04533360: f90300aa  mov x25, x0
0x04533364: f60200b4  cbz x22, #0x45333c0
0x04533368: c11a40b9  ldr w1, [x22, #0x18]
0x0453336C: 820340f9  ldr x2, [x28]
0x04533370: f71f40f9  ldr x23, [sp, #0x38]
0x04533374: e0830091  add x0, sp, #0x20
0x04533378: ff1300f9  str xzr, [sp, #0x20]
0x0453337C: d920f597  bl #0x427b6e0
0x04533380: 775a00b4  cbz x23, #0x4533ecc
0x04533384: e81340f9  ldr x8, [sp, #0x20]
0x04533388: e00314aa  mov x0, x20
0x0453338C: e10313aa  mov x1, x19
0x04533390: e82600f9  str x8, [x23, #0x48]
0x04533394: f71f40f9  ldr x23, [sp, #0x38]
0x04533398: 9c040094  bl #0x4534608
0x0453339C: 975900b4  cbz x23, #0x4533ecc
0x045333A0: e00e05f8  str x0, [x23, #0x50]!
0x045333A4: e10300aa  mov x1, x0
0x045333A8: e00317aa  mov x0, x23
0x045333AC: 8635b197  bl #0x31809c4
0x045333B0: c8724039  ldrb w8, [x22, #0x1c]
0x045333B4: 1f010071  cmp w8, #0
0x045333B8: e7179f1a  cset w7, eq
0x045333BC: 02000014  b #0x45333c4
0x045333C0: e7031f2a  mov w7, wzr
0x045333C4: 081340f9  ldr x8, [x24, #0x20]
0x045333C8: e61f40f9  ldr x6, [sp, #0x38]
0x045333CC: 578a01f0  adrp x23, #0x767e000
0x045333D0: e00314aa  mov x0, x20
0x045333D4: 086140f9  ldr x8, [x8, #0xc0]
0x045333D8: e10319aa  mov x1, x25
0x045333DC: e2031baa  mov x2, x27
0x045333E0: e30313aa  mov x3, x19
0x045333E4: 081140f9  ldr x8, [x8, #0x20]
0x045333E8: f74a42f9  ldr x23, [x23, #0x490]
0x045333EC: e4031aaa  mov x4, x26
0x045333F0: e5031daa  mov x5, x29
0x045333F4: e80300f9  str x8, [sp]
0x045333F8: 330a0094  bl #0x4535cc4
0x045333FC: f5120037  tbnz w21, #0, #0x4533658
0x04533400: 680240f9  ldr x8, [x19]
0x04533404: 358a01f0  adrp x21, #0x767a000
0x04533408: 095d4279  ldrh w9, [x8, #0x12e]
0x0453340C: b50243f9  ldr x21, [x21, #0x600]
0x04533410: a10240f9  ldr x1, [x21]
0x04533414: 290100b4  cbz x9, #0x4533438
0x04533418: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453341C: 4a210091  add x10, x10, #8
0x04533420: 4b815ff8  ldur x11, [x10, #-8]
0x04533424: 7f0101eb  cmp x11, x1
0x04533428: 00010054  b.eq #0x4533448
0x0453342C: 290500f1  subs x9, x9, #1
0x04533430: 4a410091  add x10, x10, #0x10
0x04533434: 61ffff54  b.ne #0x4533420
0x04533438: 42018052  movz w2, #0xa
0x0453343C: e00313aa  mov x0, x19
0x04533440: b48db097  bl #0x3156b10
0x04533444: 05000014  b #0x4533458
0x04533448: 490140b9  ldr w9, [x10]
0x0453344C: 29290011  add w9, w9, #0xa
0x04533450: 08d1298b  add x8, x8, w9, sxtw #4
0x04533454: 00e10491  add x0, x8, #0x138
0x04533458: 080440a9  ldp x8, x1, [x0]
0x0453345C: e00313aa  mov x0, x19
0x04533460: 00013fd6  blr x8
0x04533464: 680240f9  ldr x8, [x19]
0x04533468: a10240f9  ldr x1, [x21]
0x0453346C: 15040051  sub w21, w0, #1
0x04533470: 095d4279  ldrh w9, [x8, #0x12e]
0x04533474: 290100b4  cbz x9, #0x4533498
0x04533478: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453347C: 4a210091  add x10, x10, #8
0x04533480: 4b815ff8  ldur x11, [x10, #-8]
0x04533484: 7f0101eb  cmp x11, x1
0x04533488: 00010054  b.eq #0x45334a8
0x0453348C: 290500f1  subs x9, x9, #1
0x04533490: 4a410091  add x10, x10, #0x10
0x04533494: 61ffff54  b.ne #0x4533480
0x04533498: 62018052  movz w2, #0xb
0x0453349C: e00313aa  mov x0, x19
0x045334A0: 9c8db097  bl #0x3156b10
0x045334A4: 05000014  b #0x45334b8
0x045334A8: 490140b9  ldr w9, [x10]
0x045334AC: 292d0011  add w9, w9, #0xb
0x045334B0: 08d1298b  add x8, x8, w9, sxtw #4
0x045334B4: 00e10491  add x0, x8, #0x138
0x045334B8: 080840a9  ldp x8, x2, [x0]
0x045334BC: e00313aa  mov x0, x19
0x045334C0: e103152a  mov w1, w21
0x045334C4: 00013fd6  blr x8
0x045334C8: 680240f9  ldr x8, [x19]
0x045334CC: 358a01f0  adrp x21, #0x767a000
0x045334D0: 095d4279  ldrh w9, [x8, #0x12e]
0x045334D4: b50243f9  ldr x21, [x21, #0x600]
0x045334D8: a10240f9  ldr x1, [x21]
0x045334DC: 290100b4  cbz x9, #0x4533500
0x045334E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045334E4: 4a210091  add x10, x10, #8
0x045334E8: 4b815ff8  ldur x11, [x10, #-8]
0x045334EC: 7f0101eb  cmp x11, x1
0x045334F0: 00010054  b.eq #0x4533510
0x045334F4: 290500f1  subs x9, x9, #1
0x045334F8: 4a410091  add x10, x10, #0x10
0x045334FC: 61ffff54  b.ne #0x45334e8
0x04533500: 82018052  movz w2, #0xc
0x04533504: e00313aa  mov x0, x19
0x04533508: 828db097  bl #0x3156b10
0x0453350C: 05000014  b #0x4533520
0x04533510: 490140b9  ldr w9, [x10]
0x04533514: 29310011  add w9, w9, #0xc
0x04533518: 08d1298b  add x8, x8, w9, sxtw #4
0x0453351C: 00e10491  add x0, x8, #0x138
0x04533520: 080440a9  ldp x8, x1, [x0]
0x04533524: e00313aa  mov x0, x19
0x04533528: 00013fd6  blr x8
0x0453352C: 680240f9  ldr x8, [x19]
0x04533530: a10240f9  ldr x1, [x21]
0x04533534: 15040011  add w21, w0, #1
0x04533538: 095d4279  ldrh w9, [x8, #0x12e]
0x0453353C: 290100b4  cbz x9, #0x4533560
0x04533540: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533544: 4a210091  add x10, x10, #8
0x04533548: 4b815ff8  ldur x11, [x10, #-8]
0x0453354C: 7f0101eb  cmp x11, x1
0x04533550: 00010054  b.eq #0x4533570
0x04533554: 290500f1  subs x9, x9, #1
0x04533558: 4a410091  add x10, x10, #0x10
0x0453355C: 61ffff54  b.ne #0x4533548
0x04533560: a2018052  movz w2, #0xd
0x04533564: e00313aa  mov x0, x19
0x04533568: 6a8db097  bl #0x3156b10
0x0453356C: 05000014  b #0x4533580
0x04533570: 490140b9  ldr w9, [x10]
0x04533574: 29350011  add w9, w9, #0xd
0x04533578: 08d1298b  add x8, x8, w9, sxtw #4
0x0453357C: 00e10491  add x0, x8, #0x138
0x04533580: 080840a9  ldp x8, x2, [x0]
0x04533584: e00313aa  mov x0, x19
0x04533588: e103152a  mov w1, w21
0x0453358C: 00013fd6  blr x8
0x04533590: 680240f9  ldr x8, [x19]
0x04533594: 358a01f0  adrp x21, #0x767a000
0x04533598: 095d4279  ldrh w9, [x8, #0x12e]
0x0453359C: b50243f9  ldr x21, [x21, #0x600]
0x045335A0: a10240f9  ldr x1, [x21]
0x045335A4: 290100b4  cbz x9, #0x45335c8
0x045335A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x045335AC: 4a210091  add x10, x10, #8
0x045335B0: 4b815ff8  ldur x11, [x10, #-8]
0x045335B4: 7f0101eb  cmp x11, x1
0x045335B8: 00010054  b.eq #0x45335d8
0x045335BC: 290500f1  subs x9, x9, #1
0x045335C0: 4a410091  add x10, x10, #0x10
0x045335C4: 61ffff54  b.ne #0x45335b0
0x045335C8: 82028052  movz w2, #0x14
0x045335CC: e00313aa  mov x0, x19
0x045335D0: 508db097  bl #0x3156b10
0x045335D4: 05000014  b #0x45335e8
0x045335D8: 490140b9  ldr w9, [x10]
0x045335DC: 29510011  add w9, w9, #0x14
0x045335E0: 08d1298b  add x8, x8, w9, sxtw #4
0x045335E4: 00e10491  add x0, x8, #0x138
0x045335E8: 080440a9  ldp x8, x1, [x0]
0x045335EC: e00313aa  mov x0, x19
0x045335F0: 00013fd6  blr x8
0x045335F4: 680240f9  ldr x8, [x19]
0x045335F8: a10240f9  ldr x1, [x21]
0x045335FC: 15040011  add w21, w0, #1
0x04533600: 095d4279  ldrh w9, [x8, #0x12e]
0x04533604: 290100b4  cbz x9, #0x4533628
0x04533608: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453360C: 4a210091  add x10, x10, #8
0x04533610: 4b815ff8  ldur x11, [x10, #-8]
0x04533614: 7f0101eb  cmp x11, x1
0x04533618: 00010054  b.eq #0x4533638
0x0453361C: 290500f1  subs x9, x9, #1
0x04533620: 4a410091  add x10, x10, #0x10
0x04533624: 61ffff54  b.ne #0x4533610
0x04533628: a2028052  movz w2, #0x15
0x0453362C: e00313aa  mov x0, x19
0x04533630: 388db097  bl #0x3156b10
0x04533634: 05000014  b #0x4533648
0x04533638: 490140b9  ldr w9, [x10]
0x0453363C: 29550011  add w9, w9, #0x15
0x04533640: 08d1298b  add x8, x8, w9, sxtw #4
0x04533644: 00e10491  add x0, x8, #0x138
0x04533648: 080840a9  ldp x8, x2, [x0]
0x0453364C: e00313aa  mov x0, x19
0x04533650: e103152a  mov w1, w21
0x04533654: 00013fd6  blr x8
0x04533658: f50240f9  ldr x21, [x23]
0x0453365C: 680240f9  ldr x8, [x19]
0x04533660: 578a01f0  adrp x23, #0x767e000
0x04533664: a11240f9  ldr x1, [x21, #0x20]
0x04533668: 095d4279  ldrh w9, [x8, #0x12e]
0x0453366C: a2a24079  ldrh w2, [x21, #0x50]
0x04533670: f74642f9  ldr x23, [x23, #0x488]
0x04533674: f90700f9  str x25, [sp, #8]
0x04533678: 290100b4  cbz x9, #0x453369c
0x0453367C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533680: 4a210091  add x10, x10, #8
0x04533684: 4b815ff8  ldur x11, [x10, #-8]
0x04533688: 7f0101eb  cmp x11, x1
0x0453368C: 00010054  b.eq #0x45336ac
0x04533690: 290500f1  subs x9, x9, #1
0x04533694: 4a410091  add x10, x10, #0x10
0x04533698: 61ffff54  b.ne #0x4533684
0x0453369C: e00313aa  mov x0, x19
0x045336A0: f9031daa  mov x25, x29
0x045336A4: 1b8db097  bl #0x3156b10
0x045336A8: 06000014  b #0x45336c0
0x045336AC: 490140b9  ldr w9, [x10]
0x045336B0: f9031daa  mov x25, x29
0x045336B4: 2901020b  add w9, w9, w2
0x045336B8: 08d1298b  add x8, x8, w9, sxtw #4
0x045336BC: 00e10491  add x0, x8, #0x138
0x045336C0: 000440f9  ldr x0, [x0, #8]
0x045336C4: e10315aa  mov x1, x21
0x045336C8: 3035b197  bl #0x3180b88
0x045336CC: 080440f9  ldr x8, [x0, #8]
0x045336D0: e10300aa  mov x1, x0
0x045336D4: e00313aa  mov x0, x19
0x045336D8: 00013fd6  blr x8
0x045336DC: f50240f9  ldr x21, [x23]
0x045336E0: 680240f9  ldr x8, [x19]
0x045336E4: fd0300aa  mov x29, x0
0x045336E8: a11240f9  ldr x1, [x21, #0x20]
0x045336EC: 095d4279  ldrh w9, [x8, #0x12e]
0x045336F0: a2a24079  ldrh w2, [x21, #0x50]
0x045336F4: 290100b4  cbz x9, #0x4533718
0x045336F8: 0a5940f9  ldr x10, [x8, #0xb0]
0x045336FC: 4a210091  add x10, x10, #8
0x04533700: 4b815ff8  ldur x11, [x10, #-8]
0x04533704: 7f0101eb  cmp x11, x1
0x04533708: e0000054  b.eq #0x4533724
0x0453370C: 290500f1  subs x9, x9, #1
0x04533710: 4a410091  add x10, x10, #0x10
0x04533714: 61ffff54  b.ne #0x4533700
0x04533718: e00313aa  mov x0, x19
0x0453371C: fd8cb097  bl #0x3156b10
0x04533720: 05000014  b #0x4533734
0x04533724: 490140b9  ldr w9, [x10]
0x04533728: 2901020b  add w9, w9, w2
0x0453372C: 08d1298b  add x8, x8, w9, sxtw #4
0x04533730: 00e10491  add x0, x8, #0x138
0x04533734: 000440f9  ldr x0, [x0, #8]
0x04533738: e10315aa  mov x1, x21
0x0453373C: 1335b197  bl #0x3180b88
0x04533740: 080440f9  ldr x8, [x0, #8]
0x04533744: e10300aa  mov x1, x0
0x04533748: e00313aa  mov x0, x19
0x0453374C: 00013fd6  blr x8
0x04533750: fc0300aa  mov x28, x0
0x04533754: 9d0000b4  cbz x29, #0x4533764
0x04533758: 7c0000b4  cbz x28, #0x4533764
0x0453375C: 28008052  movz w8, #0x1
0x04533760: 88c70039  strb w8, [x28, #0x31]
0x04533764: 952640f9  ldr x21, [x20, #0x48]
0x04533768: 353b00b4  cbz x21, #0x4533ecc
0x0453376C: 2a8a01f0  adrp x10, #0x767a000
0x04533770: a80240f9  ldr x8, [x21]
0x04533774: 4a4d42f9  ldr x10, [x10, #0x498]
0x04533778: 095d4279  ldrh w9, [x8, #0x12e]
0x0453377C: 410140f9  ldr x1, [x10]
0x04533780: 290100b4  cbz x9, #0x45337a4
0x04533784: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533788: 4a210091  add x10, x10, #8
0x0453378C: 4b815ff8  ldur x11, [x10, #-8]
0x04533790: 7f0101eb  cmp x11, x1
0x04533794: 00010054  b.eq #0x45337b4
0x04533798: 290500f1  subs x9, x9, #1
0x0453379C: 4a410091  add x10, x10, #0x10
0x045337A0: 61ffff54  b.ne #0x453378c
0x045337A4: 82028052  movz w2, #0x14
0x045337A8: e00315aa  mov x0, x21
0x045337AC: d98cb097  bl #0x3156b10
0x045337B0: 05000014  b #0x45337c4
0x045337B4: 490140b9  ldr w9, [x10]
0x045337B8: 29510011  add w9, w9, #0x14
0x045337BC: 08d1298b  add x8, x8, w9, sxtw #4
0x045337C0: 00e10491  add x0, x8, #0x138
0x045337C4: 080840a9  ldp x8, x2, [x0]
0x045337C8: e00315aa  mov x0, x21
0x045337CC: e10313aa  mov x1, x19
0x045337D0: 00013fd6  blr x8
0x045337D4: fb0300aa  mov x27, x0
0x045337D8: 5d0000b4  cbz x29, #0x45337e0
0x045337DC: bf430139  strb wzr, [x29, #0x50]
0x045337E0: 680240f9  ldr x8, [x19]
0x045337E4: 4a8a01f0  adrp x10, #0x767e000
0x045337E8: 952a40f9  ldr x21, [x20, #0x50]
0x045337EC: 095d4279  ldrh w9, [x8, #0x12e]
0x045337F0: 4a4d42f9  ldr x10, [x10, #0x498]
0x045337F4: 410140f9  ldr x1, [x10]
0x045337F8: 290100b4  cbz x9, #0x453381c
0x045337FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533800: 4a210091  add x10, x10, #8
0x04533804: 4b815ff8  ldur x11, [x10, #-8]
0x04533808: 7f0101eb  cmp x11, x1
0x0453380C: 00010054  b.eq #0x453382c
0x04533810: 290500f1  subs x9, x9, #1
0x04533814: 4a410091  add x10, x10, #0x10
0x04533818: 61ffff54  b.ne #0x4533804
0x0453381C: e00313aa  mov x0, x19
0x04533820: e2031f2a  mov w2, wzr
0x04533824: bb8cb097  bl #0x3156b10
0x04533828: 04000014  b #0x4533838
0x0453382C: 490180b9  ldrsw x9, [x10]
0x04533830: 0811098b  add x8, x8, x9, lsl #4
0x04533834: 00e10491  add x0, x8, #0x138
0x04533838: 080440a9  ldp x8, x1, [x0]
0x0453383C: e00313aa  mov x0, x19
0x04533840: 00013fd6  blr x8
0x04533844: 553400b4  cbz x21, #0x4533ecc
0x04533848: 498a01f0  adrp x9, #0x767e000
0x0453384C: 2a8a01b0  adrp x10, #0x7678000
0x04533850: a80240f9  ldr x8, [x21]
0x04533854: 295142f9  ldr x9, [x9, #0x4a0]
0x04533858: 4ad147f9  ldr x10, [x10, #0xfa0]
0x0453385C: f70300aa  mov x23, x0
0x04533860: 210140f9  ldr x1, [x9]
0x04533864: 095d4279  ldrh w9, [x8, #0x12e]
0x04533868: 5d0140f9  ldr x29, [x10]
0x0453386C: 290100b4  cbz x9, #0x4533890
0x04533870: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533874: 4a210091  add x10, x10, #8
0x04533878: 4b815ff8  ldur x11, [x10, #-8]
0x0453387C: 7f0101eb  cmp x11, x1
0x04533880: 00010054  b.eq #0x45338a0
0x04533884: 290500f1  subs x9, x9, #1
0x04533888: 4a410091  add x10, x10, #0x10
0x0453388C: 61ffff54  b.ne #0x4533878
0x04533890: e00315aa  mov x0, x21
0x04533894: e2031f2a  mov w2, wzr
0x04533898: 9e8cb097  bl #0x3156b10
0x0453389C: 04000014  b #0x45338ac
0x045338A0: 490180b9  ldrsw x9, [x10]
0x045338A4: 0811098b  add x8, x8, x9, lsl #4
0x045338A8: 00e10491  add x0, x8, #0x138
0x045338AC: 081440a9  ldp x8, x5, [x0]
0x045338B0: e00315aa  mov x0, x21
0x045338B4: e1031daa  mov x1, x29
0x045338B8: e2031baa  mov x2, x27
0x045338BC: e30317aa  mov x3, x23
0x045338C0: e4031faa  mov x4, xzr
0x045338C4: 00013fd6  blr x8
0x045338C8: e81f40f9  ldr x8, [sp, #0x38]
0x045338CC: f50300aa  mov x21, x0
0x045338D0: 880c00b4  cbz x8, #0x4533a60
0x045338D4: 288a01f0  adrp x8, #0x767a000
0x045338D8: 084d45f9  ldr x8, [x8, #0xa98]
0x045338DC: 000140f9  ldr x0, [x8]
0x045338E0: f034b197  bl #0x3180ca0
0x045338E4: e1031faa  mov x1, xzr
0x045338E8: f70300aa  mov x23, x0
0x045338EC: 42f58f94  bl #0x6930df4
0x045338F0: e81f40f9  ldr x8, [sp, #0x38]
0x045338F4: c82e00b4  cbz x8, #0x4533ecc
0x045338F8: b72e00b4  cbz x23, #0x4533ecc
0x045338FC: 011140f9  ldr x1, [x8, #0x20]
0x04533900: e00317aa  mov x0, x23
0x04533904: 010c02f8  str x1, [x0, #0x20]!
0x04533908: 2f34b197  bl #0x31809c4
0x0453390C: e81f40f9  ldr x8, [sp, #0x38]
0x04533910: e82d00b4  cbz x8, #0x4533ecc
0x04533914: 010d40f9  ldr x1, [x8, #0x18]
0x04533918: e00317aa  mov x0, x23
0x0453391C: 018c01f8  str x1, [x0, #0x18]!
0x04533920: 2934b197  bl #0x31809c4
0x04533924: e81f40f9  ldr x8, [sp, #0x38]
0x04533928: 282d00b4  cbz x8, #0x4533ecc
0x0453392C: 010940f9  ldr x1, [x8, #0x10]
0x04533930: e00317aa  mov x0, x23
0x04533934: 010c01f8  str x1, [x0, #0x10]!
0x04533938: 2334b197  bl #0x31809c4
0x0453393C: 952c00b4  cbz x21, #0x4533ecc
0x04533940: fd0315aa  mov x29, x21
0x04533944: a80f42f8  ldr x8, [x29, #0x20]!
0x04533948: 680000b4  cbz x8, #0x4533954
0x0453394C: 011540f9  ldr x1, [x8, #0x28]
0x04533950: 02000014  b #0x4533958
0x04533954: e1031faa  mov x1, xzr
0x04533958: e00317aa  mov x0, x23
0x0453395C: 018c02f8  str x1, [x0, #0x28]!
0x04533960: 1934b197  bl #0x31809c4
0x04533964: e0031daa  mov x0, x29
0x04533968: e10317aa  mov x1, x23
0x0453396C: b70300f9  str x23, [x29]
0x04533970: 1534b197  bl #0x31809c4
0x04533974: 7a0000b4  cbz x26, #0x4533980
0x04533978: 415340b9  ldr w1, [x26, #0x50]
0x0453397C: 02000014  b #0x4533984
0x04533980: 21008052  movz w1, #0x1
0x04533984: 803a40f9  ldr x0, [x20, #0x70]
0x04533988: 202a00b4  cbz x0, #0x4533ecc
0x0453398C: e2031baa  mov x2, x27
0x04533990: e3031faa  mov x3, xzr
0x04533994: 070a7294  bl #0x61b61b0
0x04533998: e81f40f9  ldr x8, [sp, #0x38]
0x0453399C: 882900b4  cbz x8, #0x4533ecc
0x045339A0: 090d40f9  ldr x9, [x8, #0x18]
0x045339A4: 492900b4  cbz x9, #0x4533ecc
0x045339A8: 081140f9  ldr x8, [x8, #0x20]
0x045339AC: 210940f9  ldr x1, [x9, #0x10]
0x045339B0: 680000b4  cbz x8, #0x45339bc
0x045339B4: 041140f9  ldr x4, [x8, #0x20]
0x045339B8: c40000b5  cbnz x4, #0x45339d0
0x045339BC: c88801f0  adrp x8, #0x764e000
0x045339C0: 08ed42f9  ldr x8, [x8, #0x5d8]
0x045339C4: 080140f9  ldr x8, [x8]
0x045339C8: 085d40f9  ldr x8, [x8, #0xb8]
0x045339CC: 040140f9  ldr x4, [x8]
0x045339D0: 081340f9  ldr x8, [x24, #0x20]
0x045339D4: 3f0000f1  cmp x1, #0
0x045339D8: e3079f1a  cset w3, ne
0x045339DC: e00314aa  mov x0, x20
0x045339E0: 086140f9  ldr x8, [x8, #0xc0]
0x045339E4: 051540f9  ldr x5, [x8, #0x28]
0x045339E8: 75080094  bl #0x4535bbc
0x045339EC: 1c0100b4  cbz x28, #0x4533a0c
0x045339F0: 88c34039  ldrb w8, [x28, #0x30]
0x045339F4: c8000034  cbz w8, #0x4533a0c
0x045339F8: a00340f9  ldr x0, [x29]
0x045339FC: 802600b4  cbz x0, #0x4533ecc
0x04533A00: 1f8c02f8  str xzr, [x0, #0x28]!
0x04533A04: e1031faa  mov x1, xzr
0x04533A08: ef33b197  bl #0x31809c4
0x04533A0C: b60200b4  cbz x22, #0x4533a60
0x04533A10: e88801b0  adrp x8, #0x7650000
0x04533A14: b70340f9  ldr x23, [x29]
0x04533A18: c11a40b9  ldr w1, [x22, #0x18]
0x04533A1C: 08d146f9  ldr x8, [x8, #0xda0]
0x04533A20: e0830091  add x0, sp, #0x20
0x04533A24: ff1300f9  str xzr, [sp, #0x20]
0x04533A28: 020140f9  ldr x2, [x8]
0x04533A2C: 2d1ff597  bl #0x427b6e0
0x04533A30: f72400b4  cbz x23, #0x4533ecc
0x04533A34: e81340f9  ldr x8, [sp, #0x20]
0x04533A38: e00314aa  mov x0, x20
0x04533A3C: e10313aa  mov x1, x19
0x04533A40: e82600f9  str x8, [x23, #0x48]
0x04533A44: b70340f9  ldr x23, [x29]
0x04533A48: f0020094  bl #0x4534608
0x04533A4C: 172400b4  cbz x23, #0x4533ecc
0x04533A50: e00e05f8  str x0, [x23, #0x50]!
0x04533A54: e10300aa  mov x1, x0
0x04533A58: e00317aa  mov x0, x23
0x04533A5C: da33b197  bl #0x31809c4
0x04533A60: 792300b4  cbz x25, #0x4533ecc
0x04533A64: 200b40f9  ldr x0, [x25, #0x10]
0x04533A68: 202300b4  cbz x0, #0x4533ecc
0x04533A6C: 498a01f0  adrp x9, #0x767e000
0x04533A70: 295542f9  ldr x9, [x9, #0x4a8]
0x04533A74: 0a1c40b9  ldr w10, [x0, #0x1c]
0x04533A78: 080840f9  ldr x8, [x0, #0x10]
0x04533A7C: f90740f9  ldr x25, [sp, #8]
0x04533A80: 290140f9  ldr x9, [x9]
0x04533A84: 4a050011  add w10, w10, #1
0x04533A88: 0a1c00b9  str w10, [x0, #0x1c]
0x04533A8C: 082200b4  cbz x8, #0x4533ecc
0x04533A90: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04533A94: 0b1940b9  ldr w11, [x8, #0x18]
0x04533A98: 5f010b6b  cmp w10, w11
0x04533A9C: 22010054  b.hs #0x4533ac0
0x04533AA0: 49050011  add w9, w10, #1
0x04533AA4: 080d0a8b  add x8, x8, x10, lsl #3
0x04533AA8: 091800b9  str w9, [x0, #0x18]
0x04533AAC: 150d02f8  str x21, [x8, #0x20]!
0x04533AB0: e00308aa  mov x0, x8
0x04533AB4: e10315aa  mov x1, x21
0x04533AB8: c333b197  bl #0x31809c4
0x04533ABC: 06000014  b #0x4533ad4
0x04533AC0: 281140f9  ldr x8, [x9, #0x20]
0x04533AC4: e10315aa  mov x1, x21
0x04533AC8: 086140f9  ldr x8, [x8, #0xc0]
0x04533ACC: 023940f9  ldr x2, [x8, #0x70]
0x04533AD0: 6742ec97  bl #0x404446c
0x04533AD4: 680240f9  ldr x8, [x19]
0x04533AD8: 358a01f0  adrp x21, #0x767a000
0x04533ADC: 095d4279  ldrh w9, [x8, #0x12e]
0x04533AE0: b50243f9  ldr x21, [x21, #0x600]
0x04533AE4: a10240f9  ldr x1, [x21]
0x04533AE8: 290100b4  cbz x9, #0x4533b0c
0x04533AEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533AF0: 4a210091  add x10, x10, #8
0x04533AF4: 4b815ff8  ldur x11, [x10, #-8]
0x04533AF8: 7f0101eb  cmp x11, x1
0x04533AFC: 00010054  b.eq #0x4533b1c
0x04533B00: 290500f1  subs x9, x9, #1
0x04533B04: 4a410091  add x10, x10, #0x10
0x04533B08: 61ffff54  b.ne #0x4533af4
0x04533B0C: e00313aa  mov x0, x19
0x04533B10: e2031f2a  mov w2, wzr
0x04533B14: ff8bb097  bl #0x3156b10
0x04533B18: 04000014  b #0x4533b28
0x04533B1C: 490180b9  ldrsw x9, [x10]
0x04533B20: 0811098b  add x8, x8, x9, lsl #4
0x04533B24: 00e10491  add x0, x8, #0x138
0x04533B28: 080440a9  ldp x8, x1, [x0]
0x04533B2C: 578a01f0  adrp x23, #0x767e000
0x04533B30: f74242f9  ldr x23, [x23, #0x480]
0x04533B34: e00313aa  mov x0, x19
0x04533B38: 00013fd6  blr x8
0x04533B3C: 680240f9  ldr x8, [x19]
0x04533B40: a10240f9  ldr x1, [x21]
0x04533B44: 1f000071  cmp w0, #0
0x04533B48: 095d4279  ldrh w9, [x8, #0x12e]
0x04533B4C: cd010054  b.le #0x4533b84
0x04533B50: 29010034  cbz w9, #0x4533b74
0x04533B54: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533B58: 4a210091  add x10, x10, #8
0x04533B5C: 4b815ff8  ldur x11, [x10, #-8]
0x04533B60: 7f0101eb  cmp x11, x1
0x04533B64: a0020054  b.eq #0x4533bb8
0x04533B68: 290500f1  subs x9, x9, #1
0x04533B6C: 4a410091  add x10, x10, #0x10
0x04533B70: 61ffff54  b.ne #0x4533b5c
0x04533B74: 82018052  movz w2, #0xc
0x04533B78: e00313aa  mov x0, x19
0x04533B7C: e58bb097  bl #0x3156b10
0x04533B80: 12000014  b #0x4533bc8
0x04533B84: 29010034  cbz w9, #0x4533ba8
0x04533B88: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533B8C: 4a210091  add x10, x10, #8
0x04533B90: 4b815ff8  ldur x11, [x10, #-8]
0x04533B94: 7f0101eb  cmp x11, x1
0x04533B98: 60080054  b.eq #0x4533ca4
0x04533B9C: 290500f1  subs x9, x9, #1
0x04533BA0: 4a410091  add x10, x10, #0x10
0x04533BA4: 61ffff54  b.ne #0x4533b90
0x04533BA8: 22018052  movz w2, #0x9
0x04533BAC: e00313aa  mov x0, x19
0x04533BB0: d88bb097  bl #0x3156b10
0x04533BB4: 40000014  b #0x4533cb4
0x04533BB8: 490140b9  ldr w9, [x10]
0x04533BBC: 29310011  add w9, w9, #0xc
0x04533BC0: 08d1298b  add x8, x8, w9, sxtw #4
0x04533BC4: 00e10491  add x0, x8, #0x138
0x04533BC8: 080440a9  ldp x8, x1, [x0]
0x04533BCC: e00313aa  mov x0, x19
0x04533BD0: 00013fd6  blr x8
0x04533BD4: 680240f9  ldr x8, [x19]
0x04533BD8: a10240f9  ldr x1, [x21]
0x04533BDC: f503002a  mov w21, w0
0x04533BE0: 095d4279  ldrh w9, [x8, #0x12e]
0x04533BE4: 290100b4  cbz x9, #0x4533c08
0x04533BE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533BEC: 4a210091  add x10, x10, #8
0x04533BF0: 4b815ff8  ldur x11, [x10, #-8]
0x04533BF4: 7f0101eb  cmp x11, x1
0x04533BF8: 00010054  b.eq #0x4533c18
0x04533BFC: 290500f1  subs x9, x9, #1
0x04533C00: 4a410091  add x10, x10, #0x10
0x04533C04: 61ffff54  b.ne #0x4533bf0
0x04533C08: e00313aa  mov x0, x19
0x04533C0C: e2031f2a  mov w2, wzr
0x04533C10: c08bb097  bl #0x3156b10
0x04533C14: 04000014  b #0x4533c24
0x04533C18: 490180b9  ldrsw x9, [x10]
0x04533C1C: 0811098b  add x8, x8, x9, lsl #4
0x04533C20: 00e10491  add x0, x8, #0x138
0x04533C24: 080440a9  ldp x8, x1, [x0]
0x04533C28: e00313aa  mov x0, x19
0x04533C2C: 00013fd6  blr x8
0x04533C30: 680240f9  ldr x8, [x19]
0x04533C34: 2a8a01f0  adrp x10, #0x767a000
0x04533C38: 095d4279  ldrh w9, [x8, #0x12e]
0x04533C3C: 4a0143f9  ldr x10, [x10, #0x600]
0x04533C40: 410140f9  ldr x1, [x10]
0x04533C44: aa060051  sub w10, w21, #1
0x04533C48: 550dc01a  sdiv w21, w10, w0
0x04533C4C: 290100b4  cbz x9, #0x4533c70
0x04533C50: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533C54: 4a210091  add x10, x10, #8
0x04533C58: 4b815ff8  ldur x11, [x10, #-8]
0x04533C5C: 7f0101eb  cmp x11, x1
0x04533C60: 00010054  b.eq #0x4533c80
0x04533C64: 290500f1  subs x9, x9, #1
0x04533C68: 4a410091  add x10, x10, #0x10
0x04533C6C: 61ffff54  b.ne #0x4533c58
0x04533C70: 22018052  movz w2, #0x9
0x04533C74: e00313aa  mov x0, x19
0x04533C78: a68bb097  bl #0x3156b10
0x04533C7C: 05000014  b #0x4533c90
0x04533C80: 490140b9  ldr w9, [x10]
0x04533C84: 29250011  add w9, w9, #9
0x04533C88: 08d1298b  add x8, x8, w9, sxtw #4
0x04533C8C: 00e10491  add x0, x8, #0x138
0x04533C90: 080840a9  ldp x8, x2, [x0]
0x04533C94: e00313aa  mov x0, x19
0x04533C98: e103152a  mov w1, w21
0x04533C9C: 00013fd6  blr x8
0x04533CA0: 29000014  b #0x4533d44
0x04533CA4: 490140b9  ldr w9, [x10]
0x04533CA8: 29250011  add w9, w9, #9
0x04533CAC: 08d1298b  add x8, x8, w9, sxtw #4
0x04533CB0: 00e10491  add x0, x8, #0x138
0x04533CB4: 080840a9  ldp x8, x2, [x0]
0x04533CB8: e00313aa  mov x0, x19
0x04533CBC: e1031f2a  mov w1, wzr
0x04533CC0: 00013fd6  blr x8
0x04533CC4: 288a01d0  adrp x8, #0x7679000
0x04533CC8: 087944f9  ldr x8, [x8, #0x8f0]
0x04533CCC: 09008092  movn x9, #0
0x04533CD0: 6a028052  movz w10, #0x13
0x04533CD4: e0830091  add x0, sp, #0x20
0x04533CD8: 080140f9  ldr x8, [x8]
0x04533CDC: e1031faa  mov x1, xzr
0x04533CE0: ea3300b9  str w10, [sp, #0x30]
0x04533CE4: e82702a9  stp x8, x9, [sp, #0x20]
0x04533CE8: 7f664694  bl #0x56cd6e4
0x04533CEC: c88901d0  adrp x8, #0x766d000
0x04533CF0: 086d46f9  ldr x8, [x8, #0xcd8]
0x04533CF4: f50300aa  mov x21, x0
0x04533CF8: 080140f9  ldr x8, [x8]
0x04533CFC: 09e140b9  ldr w9, [x8, #0xe0]
0x04533D00: 69000035  cbnz w9, #0x4533d0c
0x04533D04: e00308aa  mov x0, x8
0x04533D08: a133b197  bl #0x3180b8c
0x04533D0C: 488a01f0  adrp x8, #0x767e000
0x04533D10: 498a01f0  adrp x9, #0x767e000
0x04533D14: 4a8a01f0  adrp x10, #0x767e000
0x04533D18: 086d42f9  ldr x8, [x8, #0x4d8]
0x04533D1C: 296542f9  ldr x9, [x9, #0x4c8]
0x04533D20: 4a6942f9  ldr x10, [x10, #0x4d0]
0x04533D24: e10315aa  mov x1, x21
0x04533D28: 000140f9  ldr x0, [x8]
0x04533D2C: 230140f9  ldr x3, [x9]
0x04533D30: 440140f9  ldr x4, [x10]
0x04533D34: e2031faa  mov x2, xzr
0x04533D38: e5031faa  mov x5, xzr
0x04533D3C: e6031faa  mov x6, xzr
0x04533D40: bde13c94  bl #0x546c434
0x04533D44: 081340f9  ldr x8, [x24, #0x20]
0x04533D48: e50b40f9  ldr x5, [sp, #0x10]
0x04533D4C: e00314aa  mov x0, x20
0x04533D50: e10313aa  mov x1, x19
0x04533D54: 086140f9  ldr x8, [x8, #0xc0]
0x04533D58: e2031caa  mov x2, x28
0x04533D5C: e3031baa  mov x3, x27
0x04533D60: e40319aa  mov x4, x25
0x04533D64: 071940f9  ldr x7, [x8, #0x30]
0x04533D68: e60316aa  mov x6, x22
0x04533D6C: 3d050094  bl #0x4535260
0x04533D70: f50240f9  ldr x21, [x23]
0x04533D74: 680240f9  ldr x8, [x19]
0x04533D78: f61f40b9  ldr w22, [sp, #0x1c]
0x04533D7C: a11240f9  ldr x1, [x21, #0x20]
0x04533D80: 095d4279  ldrh w9, [x8, #0x12e]
0x04533D84: a2a24079  ldrh w2, [x21, #0x50]
0x04533D88: 290100b4  cbz x9, #0x4533dac
0x04533D8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04533D90: 4a210091  add x10, x10, #8
0x04533D94: 4b815ff8  ldur x11, [x10, #-8]
0x04533D98: 7f0101eb  cmp x11, x1
0x04533D9C: e0000054  b.eq #0x4533db8
0x04533DA0: 290500f1  subs x9, x9, #1
0x04533DA4: 4a410091  add x10, x10, #0x10
0x04533DA8: 61ffff54  b.ne #0x4533d94
0x04533DAC: e00313aa  mov x0, x19
0x04533DB0: 588bb097  bl #0x3156b10
0x04533DB4: 05000014  b #0x4533dc8
0x04533DB8: 490140b9  ldr w9, [x10]
0x04533DBC: 2901020b  add w9, w9, w2
0x04533DC0: 08d1298b  add x8, x8, w9, sxtw #4
0x04533DC4: 00e10491  add x0, x8, #0x138
0x04533DC8: 000440f9  ldr x0, [x0, #8]
0x04533DCC: e10315aa  mov x1, x21
0x04533DD0: 6e33b197  bl #0x3180b88
0x04533DD4: 080440f9  ldr x8, [x0, #8]
0x04533DD8: e10300aa  mov x1, x0
0x04533DDC: e00313aa  mov x0, x19
0x04533DE0: 00013fd6  blr x8
0x04533DE4: 400100b4  cbz x0, #0x4533e0c
0x04533DE8: e10313aa  mov x1, x19
0x04533DEC: e2031baa  mov x2, x27
0x04533DF0: e30319aa  mov x3, x25
0x04533DF4: f50300aa  mov x21, x0
0x04533DF8: a5060094  bl #0x453588c
0x04533DFC: a08e06f8  str x0, [x21, #0x68]!
0x04533E00: e10300aa  mov x1, x0
0x04533E04: e00315aa  mov x0, x21
0x04533E08: ef32b197  bl #0x31809c4
0x04533E0C: f6040036  tbz w22, #0, #0x4533ea8
0x04533E10: f90500b4  cbz x25, #0x4533ecc
0x04533E14: 200b40f9  ldr x0, [x25, #0x10]
0x04533E18: a00500b4  cbz x0, #0x4533ecc
0x04533E1C: 080040f9  ldr x8, [x0]
0x04533E20: 951640f9  ldr x21, [x20, #0x28]
0x04533E24: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x04533E28: 20013fd6  blr x9
0x04533E2C: 883240f9  ldr x8, [x20, #0x60]
0x04533E30: e80400b4  cbz x8, #0x4533ecc
0x04533E34: f40300aa  mov x20, x0
0x04533E38: e00308aa  mov x0, x8
0x04533E3C: e1031faa  mov x1, xzr
0x04533E40: 39398f94  bl #0x6902324
0x04533E44: 400400b4  cbz x0, #0x4533ecc
0x04533E48: 488a01f0  adrp x8, #0x767e000
0x04533E4C: 085942f9  ldr x8, [x8, #0x4b0]
0x04533E50: 010140f9  ldr x1, [x8]
0x04533E54: be05fb97  bl #0x43f554c
0x04533E58: 488a01f0  adrp x8, #0x767e000
0x04533E5C: 086142f9  ldr x8, [x8, #0x4c0]
0x04533E60: f703002a  mov w23, w0
0x04533E64: 080140f9  ldr x8, [x8]
0x04533E68: e00308aa  mov x0, x8
0x04533E6C: 8d33b197  bl #0x3180ca0
0x04533E70: e10313aa  mov x1, x19
0x04533E74: e2031baa  mov x2, x27
0x04533E78: e30314aa  mov x3, x20
0x04533E7C: e403172a  mov w4, w23
0x04533E80: e5031faa  mov x5, xzr
0x04533E84: f60300aa  mov x22, x0
0x04533E88: c8ff6a94  bl #0x5ff3da8
0x04533E8C: 150200b4  cbz x21, #0x4533ecc
0x04533E90: 488a01f0  adrp x8, #0x767e000
0x04533E94: 085d42f9  ldr x8, [x8, #0x4b8]
0x04533E98: e00315aa  mov x0, x21
0x04533E9C: e10316aa  mov x1, x22
0x04533EA0: 020140f9  ldr x2, [x8]
0x04533EA4: b2c3e197  bl #0x3da4d6c
0x04533EA8: e00319aa  mov x0, x25
0x04533EAC: f44f49a9  ldp x20, x19, [sp, #0x90]
0x04533EB0: f65748a9  ldp x22, x21, [sp, #0x80]
0x04533EB4: f85f47a9  ldp x24, x23, [sp, #0x70]
0x04533EB8: fa6746a9  ldp x26, x25, [sp, #0x60]
0x04533EBC: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x04533EC0: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x04533EC4: ff830291  add sp, sp, #0xa0
0x04533EC8: c0035fd6  ret
0x04533ECC: 7833b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4533ED0 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$CopyTimerItemData
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___CopyTimerItemData (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, Framework_Core_Services_Backend_Data_Payload_TimerItemData_o* from, Framework_Core_Services_Backend_Data_Payload_TimerItemData_o* to, const MethodInfo_4533ED0* method);
; bytes=108 sha256=d9263d144f1704672306cd5484056a20d68289a4b35ade73a295aa3efa22d324 status=arm64_complete_bound indexed_start=True
0x04533ED0: fe0f1ef8  str x30, [sp, #-0x20]!
0x04533ED4: f44f01a9  stp x20, x19, [sp, #0x10]
0x04533ED8: c10200b4  cbz x1, #0x4533f30
0x04533EDC: f30302aa  mov x19, x2
0x04533EE0: 820200b4  cbz x2, #0x4533f30
0x04533EE4: 280840f9  ldr x8, [x1, #0x10]
0x04533EE8: f40301aa  mov x20, x1
0x04533EEC: e00313aa  mov x0, x19
0x04533EF0: 680a00f9  str x8, [x19, #0x10]
0x04533EF4: 28604039  ldrb w8, [x1, #0x18]
0x04533EF8: 68620039  strb w8, [x19, #0x18]
0x04533EFC: 211040f9  ldr x1, [x1, #0x20]
0x04533F00: 010c02f8  str x1, [x0, #0x20]!
0x04533F04: b032b197  bl #0x31809c4
0x04533F08: 811640f9  ldr x1, [x20, #0x28]
0x04533F0C: e00313aa  mov x0, x19
0x04533F10: 018c02f8  str x1, [x0, #0x28]!
0x04533F14: ac32b197  bl #0x31809c4
0x04533F18: 811a40f9  ldr x1, [x20, #0x30]
0x04533F1C: 610e03f8  str x1, [x19, #0x30]!
0x04533F20: e00313aa  mov x0, x19
0x04533F24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04533F28: fe0742f8  ldr x30, [sp], #0x20
0x04533F2C: a632b117  b #0x31809c4
0x04533F30: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04533F34: fe0742f8  ldr x30, [sp], #0x20
0x04533F38: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4533F3C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$GetSpawnableItem
; native signature: MergeEngine_Configuration_Definitions_ItemSpawnable_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetSpawnableItem (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_InteractionComponent_o* interactionComponent, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceData_o* lowLevelData, Merger_ProducerExcitement_Compatibility_ProducerExcitementSpawnData_o* excitementData, Framework_Core_Services_Backend_Data_Payload_ExtraData_o** extraData, const MethodInfo_4533F3C* method);
; bytes=552 sha256=9a84b3d867b4c24f0fc7e70670b0846c7545bb0798c4d049788f605a07a929bc status=arm64_complete_bound indexed_start=True
0x04533F3C: fe0f1af8  str x30, [sp, #-0x60]!
0x04533F40: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04533F44: fa6702a9  stp x26, x25, [sp, #0x20]
0x04533F48: f85f03a9  stp x24, x23, [sp, #0x30]
0x04533F4C: f65704a9  stp x22, x21, [sp, #0x40]
0x04533F50: f44f05a9  stp x20, x19, [sp, #0x50]
0x04533F54: 3abf01d0  adrp x26, #0x7d19000
0x04533F58: 3c8a01f0  adrp x28, #0x767a000
0x04533F5C: 5b8a01f0  adrp x27, #0x767e000
0x04533F60: 48c34439  ldrb w8, [x26, #0x130]
0x04533F64: 9c4f45f9  ldr x28, [x28, #0xa98]
0x04533F68: 7b7342f9  ldr x27, [x27, #0x4e0]
0x04533F6C: f90306aa  mov x25, x6
0x04533F70: f60305aa  mov x22, x5
0x04533F74: f40304aa  mov x20, x4
0x04533F78: f30303aa  mov x19, x3
0x04533F7C: f50302aa  mov x21, x2
0x04533F80: f70301aa  mov x23, x1
0x04533F84: f80300aa  mov x24, x0
0x04533F88: e8010037  tbnz w8, #0, #0x4533fc4
0x04533F8C: 208a01f0  adrp x0, #0x767a000
0x04533F90: 004c45f9  ldr x0, [x0, #0xa98]
0x04533F94: a132b197  bl #0x3180a18
0x04533F98: 408a01f0  adrp x0, #0x767e000
0x04533F9C: 007442f9  ldr x0, [x0, #0x4e8]
0x04533FA0: 9e32b197  bl #0x3180a18
0x04533FA4: 408a01f0  adrp x0, #0x767e000
0x04533FA8: 007842f9  ldr x0, [x0, #0x4f0]
0x04533FAC: 9b32b197  bl #0x3180a18
0x04533FB0: 408a01f0  adrp x0, #0x767e000
0x04533FB4: 007042f9  ldr x0, [x0, #0x4e0]
0x04533FB8: 9832b197  bl #0x3180a18
0x04533FBC: 28008052  movz w8, #0x1
0x04533FC0: 48c30439  strb w8, [x26, #0x130]
0x04533FC4: 800340f9  ldr x0, [x28]
0x04533FC8: 3633b197  bl #0x3180ca0
0x04533FCC: e1031faa  mov x1, xzr
0x04533FD0: fa0300aa  mov x26, x0
0x04533FD4: 88f38f94  bl #0x6930df4
0x04533FD8: 600340f9  ldr x0, [x27]
0x04533FDC: 3133b197  bl #0x3180ca0
0x04533FE0: e1031faa  mov x1, xzr
0x04533FE4: fb0300aa  mov x27, x0
0x04533FE8: cbf38f94  bl #0x6930f14
0x04533FEC: bb0b00b4  cbz x27, #0x4534160
0x04533FF0: fc031baa  mov x28, x27
0x04533FF4: 9f0f01f8  str xzr, [x28, #0x10]!
0x04533FF8: e0031caa  mov x0, x28
0x04533FFC: e1031faa  mov x1, xzr
0x04534000: 7132b197  bl #0x31809c4
0x04534004: 9f0b00b9  str wzr, [x28, #8]
0x04534008: da0a00b4  cbz x26, #0x4534160
0x0453400C: e0031aaa  mov x0, x26
0x04534010: 1b8c01f8  str x27, [x0, #0x18]!
0x04534014: e1031baa  mov x1, x27
0x04534018: 6b32b197  bl #0x31809c4
0x0453401C: e0031aaa  mov x0, x26
0x04534020: 1f0c02f8  str xzr, [x0, #0x20]!
0x04534024: e1031faa  mov x1, xzr
0x04534028: 6732b197  bl #0x31809c4
0x0453402C: e00316aa  mov x0, x22
0x04534030: e1031aaa  mov x1, x26
0x04534034: da0200f9  str x26, [x22]
0x04534038: 6332b197  bl #0x31809c4
0x0453403C: 281340f9  ldr x8, [x25, #0x20]
0x04534040: e00318aa  mov x0, x24
0x04534044: e10317aa  mov x1, x23
0x04534048: e20315aa  mov x2, x21
0x0453404C: 086140f9  ldr x8, [x8, #0xc0]
0x04534050: 032140f9  ldr x3, [x8, #0x40]
0x04534054: 9e000094  bl #0x45342cc
0x04534058: f90300aa  mov x25, x0
0x0453405C: e00318aa  mov x0, x24
0x04534060: 1bfbff97  bl #0x4532ccc
0x04534064: 00010036  tbz w0, #0, #0x4534084
0x04534068: c30240f9  ldr x3, [x22]
0x0453406C: e00318aa  mov x0, x24
0x04534070: e10317aa  mov x1, x23
0x04534074: e20315aa  mov x2, x21
0x04534078: 3b000094  bl #0x4534164
0x0453407C: 1f0000f1  cmp x0, #0
0x04534080: 3903809a  csel x25, x25, x0, eq
0x04534084: 740000b4  cbz x20, #0x4534090
0x04534088: 800a40f9  ldr x0, [x20, #0x10]
0x0453408C: 02000014  b #0x4534094
0x04534090: e0031faa  mov x0, xzr
0x04534094: e1031faa  mov x1, xzr
0x04534098: 850e3f94  bl #0x54f7aac
0x0453409C: 80000036  tbz w0, #0, #0x45340ac
0x045340A0: b30100b4  cbz x19, #0x45340d4
0x045340A4: 600a40f9  ldr x0, [x19, #0x10]
0x045340A8: 0c000014  b #0x45340d8
0x045340AC: 488a01d0  adrp x8, #0x767e000
0x045340B0: 087542f9  ldr x8, [x8, #0x4e8]
0x045340B4: 000140f9  ldr x0, [x8]
0x045340B8: fa32b197  bl #0x3180ca0
0x045340BC: e1031faa  mov x1, xzr
0x045340C0: f50300aa  mov x21, x0
0x045340C4: 78d69394  bl #0x6a29aa4
0x045340C8: d40400b4  cbz x20, #0x4534160
0x045340CC: 940a40f9  ldr x20, [x20, #0x10]
0x045340D0: 0e000014  b #0x4534108
0x045340D4: e0031faa  mov x0, xzr
0x045340D8: e1031faa  mov x1, xzr
0x045340DC: 740e3f94  bl #0x54f7aac
0x045340E0: 00030037  tbnz w0, #0, #0x4534140
0x045340E4: 488a01d0  adrp x8, #0x767e000
0x045340E8: 087542f9  ldr x8, [x8, #0x4e8]
0x045340EC: 000140f9  ldr x0, [x8]
0x045340F0: ec32b197  bl #0x3180ca0
0x045340F4: e1031faa  mov x1, xzr
0x045340F8: f50300aa  mov x21, x0
0x045340FC: 6ad69394  bl #0x6a29aa4
0x04534100: 130300b4  cbz x19, #0x4534160
0x04534104: 740a40f9  ldr x20, [x19, #0x10]
0x04534108: 488a01d0  adrp x8, #0x767e000
0x0453410C: 087942f9  ldr x8, [x8, #0x4f0]
0x04534110: 000140f9  ldr x0, [x8]
0x04534114: e332b197  bl #0x3180ca0
0x04534118: e10314aa  mov x1, x20
0x0453411C: e2031faa  mov x2, xzr
0x04534120: f30300aa  mov x19, x0
0x04534124: 7d416b94  bl #0x6004718
0x04534128: d50100b4  cbz x21, #0x4534160
0x0453412C: f90315aa  mov x25, x21
0x04534130: b30e01f8  str x19, [x21, #0x10]!
0x04534134: e00315aa  mov x0, x21
0x04534138: e10313aa  mov x1, x19
0x0453413C: 2232b197  bl #0x31809c4
0x04534140: e00319aa  mov x0, x25
0x04534144: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04534148: f65744a9  ldp x22, x21, [sp, #0x40]
0x0453414C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04534150: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04534154: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04534158: fe0746f8  ldr x30, [sp], #0x60
0x0453415C: c0035fd6  ret
0x04534160: d332b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4534164 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$TryReplaceWithRemoteSpawnable
; native signature: MergeEngine_Configuration_Definitions_ItemSpawnable_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___TryReplaceWithRemoteSpawnable (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_InteractionComponent_o* interactionComponent, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, Framework_Core_Services_Backend_Data_Payload_ExtraData_o* extraData, const MethodInfo_4534164* method);
; bytes=360 sha256=f183fac1dabe3c0c80acc362bd758db5f88ef6de94933e658996a04cf2bfa6bf status=arm64_complete_bound indexed_start=True
0x04534164: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04534168: f65701a9  stp x22, x21, [sp, #0x10]
0x0453416C: f44f02a9  stp x20, x19, [sp, #0x20]
0x04534170: 37bf01b0  adrp x23, #0x7d19000
0x04534174: e8c64439  ldrb w8, [x23, #0x131]
0x04534178: f30303aa  mov x19, x3
0x0453417C: f50302aa  mov x21, x2
0x04534180: f60301aa  mov x22, x1
0x04534184: f40300aa  mov x20, x0
0x04534188: 28010037  tbnz w8, #0, #0x45341ac
0x0453418C: 208a01d0  adrp x0, #0x767a000
0x04534190: 004c42f9  ldr x0, [x0, #0x498]
0x04534194: 2132b197  bl #0x3180a18
0x04534198: 408a01d0  adrp x0, #0x767e000
0x0453419C: 007c42f9  ldr x0, [x0, #0x4f8]
0x045341A0: 1e32b197  bl #0x3180a18
0x045341A4: 28008052  movz w8, #0x1
0x045341A8: e8c60439  strb w8, [x23, #0x131]
0x045341AC: 972640f9  ldr x23, [x20, #0x48]
0x045341B0: d70800b4  cbz x23, #0x45342c8
0x045341B4: 2a8a01d0  adrp x10, #0x767a000
0x045341B8: e80240f9  ldr x8, [x23]
0x045341BC: 4a4d42f9  ldr x10, [x10, #0x498]
0x045341C0: 095d4279  ldrh w9, [x8, #0x12e]
0x045341C4: 410140f9  ldr x1, [x10]
0x045341C8: 290100b4  cbz x9, #0x45341ec
0x045341CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x045341D0: 4a210091  add x10, x10, #8
0x045341D4: 4b815ff8  ldur x11, [x10, #-8]
0x045341D8: 7f0101eb  cmp x11, x1
0x045341DC: 00010054  b.eq #0x45341fc
0x045341E0: 290500f1  subs x9, x9, #1
0x045341E4: 4a410091  add x10, x10, #0x10
0x045341E8: 61ffff54  b.ne #0x45341d4
0x045341EC: 82028052  movz w2, #0x14
0x045341F0: e00317aa  mov x0, x23
0x045341F4: 478ab097  bl #0x3156b10
0x045341F8: 05000014  b #0x453420c
0x045341FC: 490140b9  ldr w9, [x10]
0x04534200: 29510011  add w9, w9, #0x14
0x04534204: 08d1298b  add x8, x8, w9, sxtw #4
0x04534208: 00e10491  add x0, x8, #0x138
0x0453420C: 080840a9  ldp x8, x2, [x0]
0x04534210: e00317aa  mov x0, x23
0x04534214: e10315aa  mov x1, x21
0x04534218: 00013fd6  blr x8
0x0453421C: f50300aa  mov x21, x0
0x04534220: 760000b4  cbz x22, #0x453422c
0x04534224: c15240b9  ldr w1, [x22, #0x50]
0x04534228: 02000014  b #0x4534230
0x0453422C: 21008052  movz w1, #0x1
0x04534230: 803a40f9  ldr x0, [x20, #0x70]
0x04534234: a00400b4  cbz x0, #0x45342c8
0x04534238: e20315aa  mov x2, x21
0x0453423C: e3031faa  mov x3, xzr
0x04534240: dc077294  bl #0x61b61b0
0x04534244: 963e40f9  ldr x22, [x20, #0x78]
0x04534248: 160400b4  cbz x22, #0x45342c8
0x0453424C: 4a8a01d0  adrp x10, #0x767e000
0x04534250: c80240f9  ldr x8, [x22]
0x04534254: 4a7d42f9  ldr x10, [x10, #0x4f8]
0x04534258: f403002a  mov w20, w0
0x0453425C: 095d4279  ldrh w9, [x8, #0x12e]
0x04534260: 410140f9  ldr x1, [x10]
0x04534264: 290100b4  cbz x9, #0x4534288
0x04534268: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453426C: 4a210091  add x10, x10, #8
0x04534270: 4b815ff8  ldur x11, [x10, #-8]
0x04534274: 7f0101eb  cmp x11, x1
0x04534278: 00010054  b.eq #0x4534298
0x0453427C: 290500f1  subs x9, x9, #1
0x04534280: 4a410091  add x10, x10, #0x10
0x04534284: 61ffff54  b.ne #0x4534270
0x04534288: e00316aa  mov x0, x22
0x0453428C: e2031f2a  mov w2, wzr
0x04534290: 208ab097  bl #0x3156b10
0x04534294: 04000014  b #0x45342a4
0x04534298: 490180b9  ldrsw x9, [x10]
0x0453429C: 0811098b  add x8, x8, x9, lsl #4
0x045342A0: 00e10491  add x0, x8, #0x138
0x045342A4: 051040a9  ldp x5, x4, [x0]
0x045342A8: e00316aa  mov x0, x22
0x045342AC: e10315aa  mov x1, x21
0x045342B0: e203142a  mov w2, w20
0x045342B4: e30313aa  mov x3, x19
0x045342B8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x045342BC: f65741a9  ldp x22, x21, [sp, #0x10]
0x045342C0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x045342C4: a0001fd6  br x5
0x045342C8: 7932b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45342CC | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$GetItemFromDefaultQueue
; native signature: MergeEngine_Configuration_Definitions_ItemSpawnable_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetItemFromDefaultQueue (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_InteractionComponent_o* interactionComponent, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, const MethodInfo_45342CC* method);
; bytes=828 sha256=35b743e2177f59a0b64b4349583b784c69724a4ce9173fbd424ca24053a6f163 status=arm64_complete_bound indexed_start=True
0x045342CC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x045342D0: f85f01a9  stp x24, x23, [sp, #0x10]
0x045342D4: f65702a9  stp x22, x21, [sp, #0x20]
0x045342D8: f44f03a9  stp x20, x19, [sp, #0x30]
0x045342DC: 37bf01b0  adrp x23, #0x7d19000
0x045342E0: e8ca4439  ldrb w8, [x23, #0x132]
0x045342E4: f30303aa  mov x19, x3
0x045342E8: f60302aa  mov x22, x2
0x045342EC: f50301aa  mov x21, x1
0x045342F0: f40300aa  mov x20, x0
0x045342F4: 48020037  tbnz w8, #0, #0x453433c
0x045342F8: 408a01d0  adrp x0, #0x767e000
0x045342FC: 008042f9  ldr x0, [x0, #0x500]
0x04534300: c631b197  bl #0x3180a18
0x04534304: 208a01d0  adrp x0, #0x767a000
0x04534308: 00bc44f9  ldr x0, [x0, #0x978]
0x0453430C: c331b197  bl #0x3180a18
0x04534310: 408a0190  adrp x0, #0x767c000
0x04534314: 002441f9  ldr x0, [x0, #0x248]
0x04534318: c031b197  bl #0x3180a18
0x0453431C: 208a01d0  adrp x0, #0x767a000
0x04534320: 004c42f9  ldr x0, [x0, #0x498]
0x04534324: bd31b197  bl #0x3180a18
0x04534328: 208a01b0  adrp x0, #0x7679000
0x0453432C: 001044f9  ldr x0, [x0, #0x820]
0x04534330: ba31b197  bl #0x3180a18
0x04534334: 28008052  movz w8, #0x1
0x04534338: e8ca0439  strb w8, [x23, #0x132]
0x0453433C: 551600b4  cbz x21, #0x4534604
0x04534340: 488a01d0  adrp x8, #0x767e000
0x04534344: 088142f9  ldr x8, [x8, #0x500]
0x04534348: e00315aa  mov x0, x21
0x0453434C: 010140f9  ldr x1, [x8]
0x04534350: 33e5da97  bl #0x3bed81c
0x04534354: 961500b4  cbz x22, #0x4534604
0x04534358: 2a8a01d0  adrp x10, #0x767a000
0x0453435C: c80240f9  ldr x8, [x22]
0x04534360: 4abd44f9  ldr x10, [x10, #0x978]
0x04534364: f70300aa  mov x23, x0
0x04534368: 095d4279  ldrh w9, [x8, #0x12e]
0x0453436C: 410140f9  ldr x1, [x10]
0x04534370: 290100b4  cbz x9, #0x4534394
0x04534374: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534378: 4a210091  add x10, x10, #8
0x0453437C: 4b815ff8  ldur x11, [x10, #-8]
0x04534380: 7f0101eb  cmp x11, x1
0x04534384: 00010054  b.eq #0x45343a4
0x04534388: 290500f1  subs x9, x9, #1
0x0453438C: 4a410091  add x10, x10, #0x10
0x04534390: 61ffff54  b.ne #0x453437c
0x04534394: 22008052  movz w2, #0x1
0x04534398: e00316aa  mov x0, x22
0x0453439C: dd89b097  bl #0x3156b10
0x045343A0: 05000014  b #0x45343b4
0x045343A4: 490140b9  ldr w9, [x10]
0x045343A8: 29050011  add w9, w9, #1
0x045343AC: 08d1298b  add x8, x8, w9, sxtw #4
0x045343B0: 00e10491  add x0, x8, #0x138
0x045343B4: 080440a9  ldp x8, x1, [x0]
0x045343B8: e00316aa  mov x0, x22
0x045343BC: 00013fd6  blr x8
0x045343C0: 970000b4  cbz x23, #0x45343d0
0x045343C4: e31a40f9  ldr x3, [x23, #0x30]
0x045343C8: 800000b5  cbnz x0, #0x45343d8
0x045343CC: 8e000014  b #0x4534604
0x045343D0: e3031faa  mov x3, xzr
0x045343D4: 801100b4  cbz x0, #0x4534604
0x045343D8: a13240f9  ldr x1, [x21, #0x60]
0x045343DC: a23a40f9  ldr x2, [x21, #0x70]
0x045343E0: e4031faa  mov x4, xzr
0x045343E4: 04d66a94  bl #0x5fe9bf4
0x045343E8: 972640f9  ldr x23, [x20, #0x48]
0x045343EC: d71000b4  cbz x23, #0x4534604
0x045343F0: 398a01d0  adrp x25, #0x767a000
0x045343F4: e80240f9  ldr x8, [x23]
0x045343F8: 394f42f9  ldr x25, [x25, #0x498]
0x045343FC: f50300aa  mov x21, x0
0x04534400: 095d4279  ldrh w9, [x8, #0x12e]
0x04534404: 210340f9  ldr x1, [x25]
0x04534408: 290100b4  cbz x9, #0x453442c
0x0453440C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534410: 4a210091  add x10, x10, #8
0x04534414: 4b815ff8  ldur x11, [x10, #-8]
0x04534418: 7f0101eb  cmp x11, x1
0x0453441C: 00010054  b.eq #0x453443c
0x04534420: 290500f1  subs x9, x9, #1
0x04534424: 4a410091  add x10, x10, #0x10
0x04534428: 61ffff54  b.ne #0x4534414
0x0453442C: 82028052  movz w2, #0x14
0x04534430: e00317aa  mov x0, x23
0x04534434: b789b097  bl #0x3156b10
0x04534438: 05000014  b #0x453444c
0x0453443C: 490140b9  ldr w9, [x10]
0x04534440: 29510011  add w9, w9, #0x14
0x04534444: 08d1298b  add x8, x8, w9, sxtw #4
0x04534448: 00e10491  add x0, x8, #0x138
0x0453444C: 080840a9  ldp x8, x2, [x0]
0x04534450: e00317aa  mov x0, x23
0x04534454: e10316aa  mov x1, x22
0x04534458: 00013fd6  blr x8
0x0453445C: 400d00b4  cbz x0, #0x4534604
0x04534460: 2a8a01b0  adrp x10, #0x7679000
0x04534464: 080040f9  ldr x8, [x0]
0x04534468: 4a1144f9  ldr x10, [x10, #0x820]
0x0453446C: 972640f9  ldr x23, [x20, #0x48]
0x04534470: f60300aa  mov x22, x0
0x04534474: 095d4279  ldrh w9, [x8, #0x12e]
0x04534478: 410140f9  ldr x1, [x10]
0x0453447C: 290100b4  cbz x9, #0x45344a0
0x04534480: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534484: 4a210091  add x10, x10, #8
0x04534488: 4b815ff8  ldur x11, [x10, #-8]
0x0453448C: 7f0101eb  cmp x11, x1
0x04534490: 00010054  b.eq #0x45344b0
0x04534494: 290500f1  subs x9, x9, #1
0x04534498: 4a410091  add x10, x10, #0x10
0x0453449C: 61ffff54  b.ne #0x4534488
0x045344A0: e00316aa  mov x0, x22
0x045344A4: e2031f2a  mov w2, wzr
0x045344A8: 9a89b097  bl #0x3156b10
0x045344AC: 04000014  b #0x45344bc
0x045344B0: 490180b9  ldrsw x9, [x10]
0x045344B4: 0811098b  add x8, x8, x9, lsl #4
0x045344B8: 00e10491  add x0, x8, #0x138
0x045344BC: 080440a9  ldp x8, x1, [x0]
0x045344C0: e00316aa  mov x0, x22
0x045344C4: 00013fd6  blr x8
0x045344C8: f70900b4  cbz x23, #0x4534604
0x045344CC: e80240f9  ldr x8, [x23]
0x045344D0: 210340f9  ldr x1, [x25]
0x045344D4: f80300aa  mov x24, x0
0x045344D8: 095d4279  ldrh w9, [x8, #0x12e]
0x045344DC: 290100b4  cbz x9, #0x4534500
0x045344E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045344E4: 4a210091  add x10, x10, #8
0x045344E8: 4b815ff8  ldur x11, [x10, #-8]
0x045344EC: 7f0101eb  cmp x11, x1
0x045344F0: 00010054  b.eq #0x4534510
0x045344F4: 290500f1  subs x9, x9, #1
0x045344F8: 4a410091  add x10, x10, #0x10
0x045344FC: 61ffff54  b.ne #0x45344e8
0x04534500: 82008052  movz w2, #0x4
0x04534504: e00317aa  mov x0, x23
0x04534508: 8289b097  bl #0x3156b10
0x0453450C: 05000014  b #0x4534520
0x04534510: 490140b9  ldr w9, [x10]
0x04534514: 29110011  add w9, w9, #4
0x04534518: 08d1298b  add x8, x8, w9, sxtw #4
0x0453451C: 00e10491  add x0, x8, #0x138
0x04534520: 080840a9  ldp x8, x2, [x0]
0x04534524: e00317aa  mov x0, x23
0x04534528: e10318aa  mov x1, x24
0x0453452C: 00013fd6  blr x8
0x04534530: 883a40f9  ldr x8, [x20, #0x70]
0x04534534: 880600b4  cbz x8, #0x4534604
0x04534538: f70300aa  mov x23, x0
0x0453453C: e00308aa  mov x0, x8
0x04534540: e1031faa  mov x1, xzr
0x04534544: 9cf47194  bl #0x61b17b4
0x04534548: 20050036  tbz w0, #0, #0x45345ec
0x0453454C: 803a40f9  ldr x0, [x20, #0x70]
0x04534550: a00500b4  cbz x0, #0x4534604
0x04534554: e1031faa  mov x1, xzr
0x04534558: 13f77194  bl #0x61b21a4
0x0453455C: 80040036  tbz w0, #0, #0x45345ec
0x04534560: 370500b4  cbz x23, #0x4534604
0x04534564: 4a8a0190  adrp x10, #0x767c000
0x04534568: e80240f9  ldr x8, [x23]
0x0453456C: 4a2541f9  ldr x10, [x10, #0x248]
0x04534570: 095d4279  ldrh w9, [x8, #0x12e]
0x04534574: 410140f9  ldr x1, [x10]
0x04534578: 290100b4  cbz x9, #0x453459c
0x0453457C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534580: 4a210091  add x10, x10, #8
0x04534584: 4b815ff8  ldur x11, [x10, #-8]
0x04534588: 7f0101eb  cmp x11, x1
0x0453458C: 00010054  b.eq #0x45345ac
0x04534590: 290500f1  subs x9, x9, #1
0x04534594: 4a410091  add x10, x10, #0x10
0x04534598: 61ffff54  b.ne #0x4534584
0x0453459C: 82008052  movz w2, #0x4
0x045345A0: e00317aa  mov x0, x23
0x045345A4: 5b89b097  bl #0x3156b10
0x045345A8: 05000014  b #0x45345bc
0x045345AC: 490140b9  ldr w9, [x10]
0x045345B0: 29110011  add w9, w9, #4
0x045345B4: 08d1298b  add x8, x8, w9, sxtw #4
0x045345B8: 00e10491  add x0, x8, #0x138
0x045345BC: 080440a9  ldp x8, x1, [x0]
0x045345C0: e00317aa  mov x0, x23
0x045345C4: 00013fd6  blr x8
0x045345C8: 20010036  tbz w0, #0, #0x45345ec
0x045345CC: 681240f9  ldr x8, [x19, #0x20]
0x045345D0: e00314aa  mov x0, x20
0x045345D4: e10316aa  mov x1, x22
0x045345D8: e20315aa  mov x2, x21
0x045345DC: 086140f9  ldr x8, [x8, #0xc0]
0x045345E0: 032d40f9  ldr x3, [x8, #0x58]
0x045345E4: 4a010094  bl #0x4534b0c
0x045345E8: 400000b5  cbnz x0, #0x45345f0
0x045345EC: e00315aa  mov x0, x21
0x045345F0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x045345F4: f65742a9  ldp x22, x21, [sp, #0x20]
0x045345F8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x045345FC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x04534600: c0035fd6  ret
0x04534604: aa31b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4534608 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$GetMaxLevelPrimaryProducerIdOnBoard
; native signature: System_String_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetMaxLevelPrimaryProducerIdOnBoard (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, const MethodInfo_4534608* method);
; bytes=1284 sha256=12d92aa6d029965bc254fa3a00f449842720761f1bc5efa2849cfa6c62359031 status=arm64_complete_bound indexed_start=True
0x04534608: fe0f1bf8  str x30, [sp, #-0x50]!
0x0453460C: fa6701a9  stp x26, x25, [sp, #0x10]
0x04534610: f85f02a9  stp x24, x23, [sp, #0x20]
0x04534614: f65703a9  stp x22, x21, [sp, #0x30]
0x04534618: f44f04a9  stp x20, x19, [sp, #0x40]
0x0453461C: 35bf01b0  adrp x21, #0x7d19000
0x04534620: a8ce4439  ldrb w8, [x21, #0x133]
0x04534624: f40301aa  mov x20, x1
0x04534628: f30300aa  mov x19, x0
0x0453462C: a8020037  tbnz w8, #0, #0x4534680
0x04534630: 408a0190  adrp x0, #0x767c000
0x04534634: 002441f9  ldr x0, [x0, #0x248]
0x04534638: f830b197  bl #0x3180a18
0x0453463C: 208a01d0  adrp x0, #0x767a000
0x04534640: 004c42f9  ldr x0, [x0, #0x498]
0x04534644: f530b197  bl #0x3180a18
0x04534648: 208a01b0  adrp x0, #0x7679000
0x0453464C: 001044f9  ldr x0, [x0, #0x820]
0x04534650: f230b197  bl #0x3180a18
0x04534654: 408a01d0  adrp x0, #0x767e000
0x04534658: 008442f9  ldr x0, [x0, #0x508]
0x0453465C: ef30b197  bl #0x3180a18
0x04534660: 408a01d0  adrp x0, #0x767e000
0x04534664: 008842f9  ldr x0, [x0, #0x510]
0x04534668: ec30b197  bl #0x3180a18
0x0453466C: c08801d0  adrp x0, #0x764e000
0x04534670: 00ec42f9  ldr x0, [x0, #0x5d8]
0x04534674: e930b197  bl #0x3180a18
0x04534678: 28008052  movz w8, #0x1
0x0453467C: a8ce0439  strb w8, [x21, #0x133]
0x04534680: 752640f9  ldr x21, [x19, #0x48]
0x04534684: 352400b4  cbz x21, #0x4534b08
0x04534688: 368a01d0  adrp x22, #0x767a000
0x0453468C: a80240f9  ldr x8, [x21]
0x04534690: d64e42f9  ldr x22, [x22, #0x498]
0x04534694: 095d4279  ldrh w9, [x8, #0x12e]
0x04534698: c10240f9  ldr x1, [x22]
0x0453469C: 290100b4  cbz x9, #0x45346c0
0x045346A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045346A4: 4a210091  add x10, x10, #8
0x045346A8: 4b815ff8  ldur x11, [x10, #-8]
0x045346AC: 7f0101eb  cmp x11, x1
0x045346B0: 00010054  b.eq #0x45346d0
0x045346B4: 290500f1  subs x9, x9, #1
0x045346B8: 4a410091  add x10, x10, #0x10
0x045346BC: 61ffff54  b.ne #0x45346a8
0x045346C0: 82028052  movz w2, #0x14
0x045346C4: e00315aa  mov x0, x21
0x045346C8: 1289b097  bl #0x3156b10
0x045346CC: 05000014  b #0x45346e0
0x045346D0: 490140b9  ldr w9, [x10]
0x045346D4: 29510011  add w9, w9, #0x14
0x045346D8: 08d1298b  add x8, x8, w9, sxtw #4
0x045346DC: 00e10491  add x0, x8, #0x138
0x045346E0: 080840a9  ldp x8, x2, [x0]
0x045346E4: e00315aa  mov x0, x21
0x045346E8: e10314aa  mov x1, x20
0x045346EC: 00013fd6  blr x8
0x045346F0: c02000b4  cbz x0, #0x4534b08
0x045346F4: 388a01b0  adrp x24, #0x7679000
0x045346F8: 080040f9  ldr x8, [x0]
0x045346FC: 181344f9  ldr x24, [x24, #0x820]
0x04534700: 742640f9  ldr x20, [x19, #0x48]
0x04534704: f50300aa  mov x21, x0
0x04534708: 095d4279  ldrh w9, [x8, #0x12e]
0x0453470C: 010340f9  ldr x1, [x24]
0x04534710: 290100b4  cbz x9, #0x4534734
0x04534714: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534718: 4a210091  add x10, x10, #8
0x0453471C: 4b815ff8  ldur x11, [x10, #-8]
0x04534720: 7f0101eb  cmp x11, x1
0x04534724: 00010054  b.eq #0x4534744
0x04534728: 290500f1  subs x9, x9, #1
0x0453472C: 4a410091  add x10, x10, #0x10
0x04534730: 61ffff54  b.ne #0x453471c
0x04534734: e00315aa  mov x0, x21
0x04534738: e2031f2a  mov w2, wzr
0x0453473C: f588b097  bl #0x3156b10
0x04534740: 04000014  b #0x4534750
0x04534744: 490180b9  ldrsw x9, [x10]
0x04534748: 0811098b  add x8, x8, x9, lsl #4
0x0453474C: 00e10491  add x0, x8, #0x138
0x04534750: 080440a9  ldp x8, x1, [x0]
0x04534754: e00315aa  mov x0, x21
0x04534758: 00013fd6  blr x8
0x0453475C: 741d00b4  cbz x20, #0x4534b08
0x04534760: 880240f9  ldr x8, [x20]
0x04534764: c10240f9  ldr x1, [x22]
0x04534768: f50300aa  mov x21, x0
0x0453476C: 095d4279  ldrh w9, [x8, #0x12e]
0x04534770: 290100b4  cbz x9, #0x4534794
0x04534774: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534778: 4a210091  add x10, x10, #8
0x0453477C: 4b815ff8  ldur x11, [x10, #-8]
0x04534780: 7f0101eb  cmp x11, x1
0x04534784: 00010054  b.eq #0x45347a4
0x04534788: 290500f1  subs x9, x9, #1
0x0453478C: 4a410091  add x10, x10, #0x10
0x04534790: 61ffff54  b.ne #0x453477c
0x04534794: 82008052  movz w2, #0x4
0x04534798: e00314aa  mov x0, x20
0x0453479C: dd88b097  bl #0x3156b10
0x045347A0: 05000014  b #0x45347b4
0x045347A4: 490140b9  ldr w9, [x10]
0x045347A8: 29110011  add w9, w9, #4
0x045347AC: 08d1298b  add x8, x8, w9, sxtw #4
0x045347B0: 00e10491  add x0, x8, #0x138
0x045347B4: 080840a9  ldp x8, x2, [x0]
0x045347B8: e00314aa  mov x0, x20
0x045347BC: e10315aa  mov x1, x21
0x045347C0: 00013fd6  blr x8
0x045347C4: 752640f9  ldr x21, [x19, #0x48]
0x045347C8: 151a00b4  cbz x21, #0x4534b08
0x045347CC: a80240f9  ldr x8, [x21]
0x045347D0: c10240f9  ldr x1, [x22]
0x045347D4: f40300aa  mov x20, x0
0x045347D8: 095d4279  ldrh w9, [x8, #0x12e]
0x045347DC: 290100b4  cbz x9, #0x4534800
0x045347E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045347E4: 4a210091  add x10, x10, #8
0x045347E8: 4b815ff8  ldur x11, [x10, #-8]
0x045347EC: 7f0101eb  cmp x11, x1
0x045347F0: 00010054  b.eq #0x4534810
0x045347F4: 290500f1  subs x9, x9, #1
0x045347F8: 4a410091  add x10, x10, #0x10
0x045347FC: 61ffff54  b.ne #0x45347e8
0x04534800: 02048052  movz w2, #0x20
0x04534804: e00315aa  mov x0, x21
0x04534808: c288b097  bl #0x3156b10
0x0453480C: 05000014  b #0x4534820
0x04534810: 490140b9  ldr w9, [x10]
0x04534814: 29810011  add w9, w9, #0x20
0x04534818: 08d1298b  add x8, x8, w9, sxtw #4
0x0453481C: 00e10491  add x0, x8, #0x138
0x04534820: 080840a9  ldp x8, x2, [x0]
0x04534824: 598a0190  adrp x25, #0x767c000
0x04534828: 392741f9  ldr x25, [x25, #0x248]
0x0453482C: e00315aa  mov x0, x21
0x04534830: e10314aa  mov x1, x20
0x04534834: 00013fd6  blr x8
0x04534838: 40030037  tbnz w0, #0, #0x45348a0
0x0453483C: 741600b4  cbz x20, #0x4534b08
0x04534840: 880240f9  ldr x8, [x20]
0x04534844: 210340f9  ldr x1, [x25]
0x04534848: 095d4279  ldrh w9, [x8, #0x12e]
0x0453484C: 290100b4  cbz x9, #0x4534870
0x04534850: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534854: 4a210091  add x10, x10, #8
0x04534858: 4b815ff8  ldur x11, [x10, #-8]
0x0453485C: 7f0101eb  cmp x11, x1
0x04534860: 00010054  b.eq #0x4534880
0x04534864: 290500f1  subs x9, x9, #1
0x04534868: 4a410091  add x10, x10, #0x10
0x0453486C: 61ffff54  b.ne #0x4534858
0x04534870: 22028052  movz w2, #0x11
0x04534874: e00314aa  mov x0, x20
0x04534878: a688b097  bl #0x3156b10
0x0453487C: 05000014  b #0x4534890
0x04534880: 490140b9  ldr w9, [x10]
0x04534884: 29450011  add w9, w9, #0x11
0x04534888: 08d1298b  add x8, x8, w9, sxtw #4
0x0453488C: 00e10491  add x0, x8, #0x138
0x04534890: 080440a9  ldp x8, x1, [x0]
0x04534894: e00314aa  mov x0, x20
0x04534898: 00013fd6  blr x8
0x0453489C: f40300aa  mov x20, x0
0x045348A0: 340200b4  cbz x20, #0x45348e4
0x045348A4: 880240f9  ldr x8, [x20]
0x045348A8: 210340f9  ldr x1, [x25]
0x045348AC: 095d4279  ldrh w9, [x8, #0x12e]
0x045348B0: 290100b4  cbz x9, #0x45348d4
0x045348B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x045348B8: 4a210091  add x10, x10, #8
0x045348BC: 4b815ff8  ldur x11, [x10, #-8]
0x045348C0: 7f0101eb  cmp x11, x1
0x045348C4: c0010054  b.eq #0x45348fc
0x045348C8: 290500f1  subs x9, x9, #1
0x045348CC: 4a410091  add x10, x10, #0x10
0x045348D0: 61ffff54  b.ne #0x45348bc
0x045348D4: e00314aa  mov x0, x20
0x045348D8: e2031f2a  mov w2, wzr
0x045348DC: 8d88b097  bl #0x3156b10
0x045348E0: 0a000014  b #0x4534908
0x045348E4: c88801d0  adrp x8, #0x764e000
0x045348E8: 08ed42f9  ldr x8, [x8, #0x5d8]
0x045348EC: 080140f9  ldr x8, [x8]
0x045348F0: 085d40f9  ldr x8, [x8, #0xb8]
0x045348F4: 000140f9  ldr x0, [x8]
0x045348F8: 57000014  b #0x4534a54
0x045348FC: 490180b9  ldrsw x9, [x10]
0x04534900: 0811098b  add x8, x8, x9, lsl #4
0x04534904: 00e10491  add x0, x8, #0x138
0x04534908: 080440a9  ldp x8, x1, [x0]
0x0453490C: e00314aa  mov x0, x20
0x04534910: 00013fd6  blr x8
0x04534914: a00f00b4  cbz x0, #0x4534b08
0x04534918: 5a8a01d0  adrp x26, #0x767e000
0x0453491C: 151840b9  ldr w21, [x0, #0x18]
0x04534920: 5a8b42f9  ldr x26, [x26, #0x510]
0x04534924: b5060071  subs w21, w21, #1
0x04534928: 44090054  b.mi #0x4534a50
0x0453492C: 880240f9  ldr x8, [x20]
0x04534930: 764a40f9  ldr x22, [x19, #0x90]
0x04534934: 210340f9  ldr x1, [x25]
0x04534938: 095d4279  ldrh w9, [x8, #0x12e]
0x0453493C: 290100b4  cbz x9, #0x4534960
0x04534940: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534944: 4a210091  add x10, x10, #8
0x04534948: 4b815ff8  ldur x11, [x10, #-8]
0x0453494C: 7f0101eb  cmp x11, x1
0x04534950: 00010054  b.eq #0x4534970
0x04534954: 290500f1  subs x9, x9, #1
0x04534958: 4a410091  add x10, x10, #0x10
0x0453495C: 61ffff54  b.ne #0x4534948
0x04534960: e00314aa  mov x0, x20
0x04534964: e2031f2a  mov w2, wzr
0x04534968: 6a88b097  bl #0x3156b10
0x0453496C: 04000014  b #0x453497c
0x04534970: 490180b9  ldrsw x9, [x10]
0x04534974: 0811098b  add x8, x8, x9, lsl #4
0x04534978: 00e10491  add x0, x8, #0x138
0x0453497C: 080440a9  ldp x8, x1, [x0]
0x04534980: e00314aa  mov x0, x20
0x04534984: 00013fd6  blr x8
0x04534988: 000c00b4  cbz x0, #0x4534b08
0x0453498C: 420340f9  ldr x2, [x26]
0x04534990: e103152a  mov w1, w21
0x04534994: 023eec97  bl #0x404419c
0x04534998: 800b00b4  cbz x0, #0x4534b08
0x0453499C: 080040f9  ldr x8, [x0]
0x045349A0: 010340f9  ldr x1, [x24]
0x045349A4: f70300aa  mov x23, x0
0x045349A8: 095d4279  ldrh w9, [x8, #0x12e]
0x045349AC: 290100b4  cbz x9, #0x45349d0
0x045349B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045349B4: 4a210091  add x10, x10, #8
0x045349B8: 4b815ff8  ldur x11, [x10, #-8]
0x045349BC: 7f0101eb  cmp x11, x1
0x045349C0: 00010054  b.eq #0x45349e0
0x045349C4: 290500f1  subs x9, x9, #1
0x045349C8: 4a410091  add x10, x10, #0x10
0x045349CC: 61ffff54  b.ne #0x45349b8
0x045349D0: e00317aa  mov x0, x23
0x045349D4: e2031f2a  mov w2, wzr
0x045349D8: 4e88b097  bl #0x3156b10
0x045349DC: 04000014  b #0x45349ec
0x045349E0: 490180b9  ldrsw x9, [x10]
0x045349E4: 0811098b  add x8, x8, x9, lsl #4
0x045349E8: 00e10491  add x0, x8, #0x138
0x045349EC: 080440a9  ldp x8, x1, [x0]
0x045349F0: e00317aa  mov x0, x23
0x045349F4: 00013fd6  blr x8
0x045349F8: 960800b4  cbz x22, #0x4534b08
0x045349FC: e10300aa  mov x1, x0
0x04534A00: e00316aa  mov x0, x22
0x04534A04: e2031faa  mov x2, xzr
0x04534A08: 41d98494  bl #0x666af0c
0x04534A0C: c0f80736  tbz w0, #0, #0x4534924
0x04534A10: 880240f9  ldr x8, [x20]
0x04534A14: 210340f9  ldr x1, [x25]
0x04534A18: 095d4279  ldrh w9, [x8, #0x12e]
0x04534A1C: 290100b4  cbz x9, #0x4534a40
0x04534A20: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534A24: 4a210091  add x10, x10, #8
0x04534A28: 4b815ff8  ldur x11, [x10, #-8]
0x04534A2C: 7f0101eb  cmp x11, x1
0x04534A30: e0010054  b.eq #0x4534a6c
0x04534A34: 290500f1  subs x9, x9, #1
0x04534A38: 4a410091  add x10, x10, #0x10
0x04534A3C: 61ffff54  b.ne #0x4534a28
0x04534A40: e00314aa  mov x0, x20
0x04534A44: e2031f2a  mov w2, wzr
0x04534A48: 3288b097  bl #0x3156b10
0x04534A4C: 0b000014  b #0x4534a78
0x04534A50: e0031faa  mov x0, xzr
0x04534A54: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04534A58: f65743a9  ldp x22, x21, [sp, #0x30]
0x04534A5C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04534A60: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04534A64: fe0745f8  ldr x30, [sp], #0x50
0x04534A68: c0035fd6  ret
0x04534A6C: 490180b9  ldrsw x9, [x10]
0x04534A70: 0811098b  add x8, x8, x9, lsl #4
0x04534A74: 00e10491  add x0, x8, #0x138
0x04534A78: 080440a9  ldp x8, x1, [x0]
0x04534A7C: e00314aa  mov x0, x20
0x04534A80: 00013fd6  blr x8
0x04534A84: 200400b4  cbz x0, #0x4534b08
0x04534A88: 420340f9  ldr x2, [x26]
0x04534A8C: e103152a  mov w1, w21
0x04534A90: c33dec97  bl #0x404419c
0x04534A94: a00300b4  cbz x0, #0x4534b08
0x04534A98: 080040f9  ldr x8, [x0]
0x04534A9C: 010340f9  ldr x1, [x24]
0x04534AA0: f30300aa  mov x19, x0
0x04534AA4: 095d4279  ldrh w9, [x8, #0x12e]
0x04534AA8: 290100b4  cbz x9, #0x4534acc
0x04534AAC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534AB0: 4a210091  add x10, x10, #8
0x04534AB4: 4b815ff8  ldur x11, [x10, #-8]
0x04534AB8: 7f0101eb  cmp x11, x1
0x04534ABC: 00010054  b.eq #0x4534adc
0x04534AC0: 290500f1  subs x9, x9, #1
0x04534AC4: 4a410091  add x10, x10, #0x10
0x04534AC8: 61ffff54  b.ne #0x4534ab4
0x04534ACC: e00313aa  mov x0, x19
0x04534AD0: e2031f2a  mov w2, wzr
0x04534AD4: 0f88b097  bl #0x3156b10
0x04534AD8: 04000014  b #0x4534ae8
0x04534ADC: 490180b9  ldrsw x9, [x10]
0x04534AE0: 0811098b  add x8, x8, x9, lsl #4
0x04534AE4: 00e10491  add x0, x8, #0x138
0x04534AE8: 020440a9  ldp x2, x1, [x0]
0x04534AEC: e00313aa  mov x0, x19
0x04534AF0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04534AF4: f65743a9  ldp x22, x21, [sp, #0x30]
0x04534AF8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04534AFC: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04534B00: fe0745f8  ldr x30, [sp], #0x50
0x04534B04: 40001fd6  br x2
0x04534B08: 6930b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4534B0C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$CreateNewBoostedItem
; native signature: MergeEngine_Configuration_Definitions_ItemSpawnable_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___CreateNewBoostedItem (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_Configuration_IMergeItem_o* producer, MergeEngine_Configuration_Definitions_ItemSpawnable_o* itemSpawnable, const MethodInfo_4534B0C* method);
; bytes=1876 sha256=9d9425766cfed0d3505b93badb4c523e189c3400904a1e715ca9f0580e9d5b60 status=arm64_complete_bound indexed_start=True
0x04534B0C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04534B10: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04534B14: fa6702a9  stp x26, x25, [sp, #0x20]
0x04534B18: f85f03a9  stp x24, x23, [sp, #0x30]
0x04534B1C: f65704a9  stp x22, x21, [sp, #0x40]
0x04534B20: f44f05a9  stp x20, x19, [sp, #0x50]
0x04534B24: 37bf01b0  adrp x23, #0x7d19000
0x04534B28: e8d24439  ldrb w8, [x23, #0x134]
0x04534B2C: f50303aa  mov x21, x3
0x04534B30: f40302aa  mov x20, x2
0x04534B34: f60301aa  mov x22, x1
0x04534B38: f30300aa  mov x19, x0
0x04534B3C: a8050037  tbnz w8, #0, #0x4534bf0
0x04534B40: 008a0190  adrp x0, #0x7674000
0x04534B44: 002445f9  ldr x0, [x0, #0xa48]
0x04534B48: b42fb197  bl #0x3180a18
0x04534B4C: 408a01d0  adrp x0, #0x767e000
0x04534B50: 008c42f9  ldr x0, [x0, #0x518]
0x04534B54: b12fb197  bl #0x3180a18
0x04534B58: 408a01d0  adrp x0, #0x767e000
0x04534B5C: 009042f9  ldr x0, [x0, #0x520]
0x04534B60: ae2fb197  bl #0x3180a18
0x04534B64: c08801d0  adrp x0, #0x764e000
0x04534B68: 002c45f9  ldr x0, [x0, #0xa58]
0x04534B6C: ab2fb197  bl #0x3180a18
0x04534B70: 408a01d0  adrp x0, #0x767e000
0x04534B74: 009442f9  ldr x0, [x0, #0x528]
0x04534B78: a82fb197  bl #0x3180a18
0x04534B7C: 408a01d0  adrp x0, #0x767e000
0x04534B80: 009842f9  ldr x0, [x0, #0x530]
0x04534B84: a52fb197  bl #0x3180a18
0x04534B88: 408a01d0  adrp x0, #0x767e000
0x04534B8C: 009c42f9  ldr x0, [x0, #0x538]
0x04534B90: a22fb197  bl #0x3180a18
0x04534B94: 408a01d0  adrp x0, #0x767e000
0x04534B98: 00a042f9  ldr x0, [x0, #0x540]
0x04534B9C: 9f2fb197  bl #0x3180a18
0x04534BA0: 408a01d0  adrp x0, #0x767e000
0x04534BA4: 00a442f9  ldr x0, [x0, #0x548]
0x04534BA8: 9c2fb197  bl #0x3180a18
0x04534BAC: 208a01d0  adrp x0, #0x767a000
0x04534BB0: 004c42f9  ldr x0, [x0, #0x498]
0x04534BB4: 992fb197  bl #0x3180a18
0x04534BB8: 208a01b0  adrp x0, #0x7679000
0x04534BBC: 001044f9  ldr x0, [x0, #0x820]
0x04534BC0: 962fb197  bl #0x3180a18
0x04534BC4: 408a01d0  adrp x0, #0x767e000
0x04534BC8: 007442f9  ldr x0, [x0, #0x4e8]
0x04534BCC: 932fb197  bl #0x3180a18
0x04534BD0: 408a01d0  adrp x0, #0x767e000
0x04534BD4: 007842f9  ldr x0, [x0, #0x4f0]
0x04534BD8: 902fb197  bl #0x3180a18
0x04534BDC: 408a01d0  adrp x0, #0x767e000
0x04534BE0: 00a842f9  ldr x0, [x0, #0x550]
0x04534BE4: 8d2fb197  bl #0x3180a18
0x04534BE8: 28008052  movz w8, #0x1
0x04534BEC: e8d20439  strb w8, [x23, #0x134]
0x04534BF0: 763300b4  cbz x22, #0x453525c
0x04534BF4: 5a8a01d0  adrp x26, #0x767e000
0x04534BF8: c80240f9  ldr x8, [x22]
0x04534BFC: 5aa742f9  ldr x26, [x26, #0x548]
0x04534C00: 095d4279  ldrh w9, [x8, #0x12e]
0x04534C04: 410340f9  ldr x1, [x26]
0x04534C08: 290100b4  cbz x9, #0x4534c2c
0x04534C0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534C10: 4a210091  add x10, x10, #8
0x04534C14: 4b815ff8  ldur x11, [x10, #-8]
0x04534C18: 7f0101eb  cmp x11, x1
0x04534C1C: 00010054  b.eq #0x4534c3c
0x04534C20: 290500f1  subs x9, x9, #1
0x04534C24: 4a410091  add x10, x10, #0x10
0x04534C28: 61ffff54  b.ne #0x4534c14
0x04534C2C: e00316aa  mov x0, x22
0x04534C30: e2031f2a  mov w2, wzr
0x04534C34: b787b097  bl #0x3156b10
0x04534C38: 04000014  b #0x4534c48
0x04534C3C: 490180b9  ldrsw x9, [x10]
0x04534C40: 0811098b  add x8, x8, x9, lsl #4
0x04534C44: 00e10491  add x0, x8, #0x138
0x04534C48: 080440a9  ldp x8, x1, [x0]
0x04534C4C: e00316aa  mov x0, x22
0x04534C50: 00013fd6  blr x8
0x04534C54: 403000b4  cbz x0, #0x453525c
0x04534C58: a91240f9  ldr x9, [x21, #0x20]
0x04534C5C: e80300aa  mov x8, x0
0x04534C60: 172d40f9  ldr x23, [x8, #0x58]
0x04534C64: 296140f9  ldr x9, [x9, #0xc0]
0x04534C68: 203540f9  ldr x0, [x9, #0x68]
0x04534C6C: 09d44439  ldrb w9, [x0, #0x135]
0x04534C70: 49000037  tbnz w9, #0, #0x4534c78
0x04534C74: ea86b097  bl #0x315681c
0x04534C78: 08e040b9  ldr w8, [x0, #0xe0]
0x04534C7C: 48000035  cbnz w8, #0x4534c84
0x04534C80: c32fb197  bl #0x3180b8c
0x04534C84: a81240f9  ldr x8, [x21, #0x20]
0x04534C88: 086140f9  ldr x8, [x8, #0xc0]
0x04534C8C: 003540f9  ldr x0, [x8, #0x68]
0x04534C90: 08d44439  ldrb w8, [x0, #0x135]
0x04534C94: 48000037  tbnz w8, #0, #0x4534c9c
0x04534C98: e186b097  bl #0x315681c
0x04534C9C: 085c40f9  ldr x8, [x0, #0xb8]
0x04534CA0: 5b8a01d0  adrp x27, #0x767e000
0x04534CA4: 180540f9  ldr x24, [x8, #8]
0x04534CA8: 7b8f42f9  ldr x27, [x27, #0x518]
0x04534CAC: f80500b5  cbnz x24, #0x4534d68
0x04534CB0: a81240f9  ldr x8, [x21, #0x20]
0x04534CB4: 086140f9  ldr x8, [x8, #0xc0]
0x04534CB8: 003540f9  ldr x0, [x8, #0x68]
0x04534CBC: 08d44439  ldrb w8, [x0, #0x135]
0x04534CC0: 48000037  tbnz w8, #0, #0x4534cc8
0x04534CC4: d686b097  bl #0x315681c
0x04534CC8: 08e040b9  ldr w8, [x0, #0xe0]
0x04534CCC: 48000035  cbnz w8, #0x4534cd4
0x04534CD0: af2fb197  bl #0x3180b8c
0x04534CD4: a81240f9  ldr x8, [x21, #0x20]
0x04534CD8: 086140f9  ldr x8, [x8, #0xc0]
0x04534CDC: 003540f9  ldr x0, [x8, #0x68]
0x04534CE0: 08d44439  ldrb w8, [x0, #0x135]
0x04534CE4: 48000037  tbnz w8, #0, #0x4534cec
0x04534CE8: cd86b097  bl #0x315681c
0x04534CEC: 498a01d0  adrp x9, #0x767e000
0x04534CF0: 085c40f9  ldr x8, [x0, #0xb8]
0x04534CF4: 299d42f9  ldr x9, [x9, #0x538]
0x04534CF8: 190140f9  ldr x25, [x8]
0x04534CFC: 200140f9  ldr x0, [x9]
0x04534D00: e82fb197  bl #0x3180ca0
0x04534D04: a81240f9  ldr x8, [x21, #0x20]
0x04534D08: e10319aa  mov x1, x25
0x04534D0C: e3031faa  mov x3, xzr
0x04534D10: f80300aa  mov x24, x0
0x04534D14: 086140f9  ldr x8, [x8, #0xc0]
0x04534D18: 023940f9  ldr x2, [x8, #0x70]
0x04534D1C: 27873494  bl #0x52569b8
0x04534D20: a81240f9  ldr x8, [x21, #0x20]
0x04534D24: 086140f9  ldr x8, [x8, #0xc0]
0x04534D28: 003540f9  ldr x0, [x8, #0x68]
0x04534D2C: 09d44439  ldrb w9, [x0, #0x135]
0x04534D30: 89000037  tbnz w9, #0, #0x4534d40
0x04534D34: ba86b097  bl #0x315681c
0x04534D38: a81240f9  ldr x8, [x21, #0x20]
0x04534D3C: 086140f9  ldr x8, [x8, #0xc0]
0x04534D40: 095c40f9  ldr x9, [x0, #0xb8]
0x04534D44: 380500f9  str x24, [x9, #8]
0x04534D48: 003540f9  ldr x0, [x8, #0x68]
0x04534D4C: 08d44439  ldrb w8, [x0, #0x135]
0x04534D50: 48000037  tbnz w8, #0, #0x4534d58
0x04534D54: b286b097  bl #0x315681c
0x04534D58: 085c40f9  ldr x8, [x0, #0xb8]
0x04534D5C: e10318aa  mov x1, x24
0x04534D60: 00210091  add x0, x8, #8
0x04534D64: 182fb197  bl #0x31809c4
0x04534D68: 620340f9  ldr x2, [x27]
0x04534D6C: e00317aa  mov x0, x23
0x04534D70: e10318aa  mov x1, x24
0x04534D74: 486fdc97  bl #0x3c50a94
0x04534D78: c80240f9  ldr x8, [x22]
0x04534D7C: 410340f9  ldr x1, [x26]
0x04534D80: f70300aa  mov x23, x0
0x04534D84: 095d4279  ldrh w9, [x8, #0x12e]
0x04534D88: 290100b4  cbz x9, #0x4534dac
0x04534D8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534D90: 4a210091  add x10, x10, #8
0x04534D94: 4b815ff8  ldur x11, [x10, #-8]
0x04534D98: 7f0101eb  cmp x11, x1
0x04534D9C: 00010054  b.eq #0x4534dbc
0x04534DA0: 290500f1  subs x9, x9, #1
0x04534DA4: 4a410091  add x10, x10, #0x10
0x04534DA8: 61ffff54  b.ne #0x4534d94
0x04534DAC: e00316aa  mov x0, x22
0x04534DB0: e2031f2a  mov w2, wzr
0x04534DB4: 5787b097  bl #0x3156b10
0x04534DB8: 04000014  b #0x4534dc8
0x04534DBC: 490180b9  ldrsw x9, [x10]
0x04534DC0: 0811098b  add x8, x8, x9, lsl #4
0x04534DC4: 00e10491  add x0, x8, #0x138
0x04534DC8: 080440a9  ldp x8, x1, [x0]
0x04534DCC: e00316aa  mov x0, x22
0x04534DD0: 00013fd6  blr x8
0x04534DD4: 402400b4  cbz x0, #0x453525c
0x04534DD8: a91240f9  ldr x9, [x21, #0x20]
0x04534DDC: e80300aa  mov x8, x0
0x04534DE0: 162940f9  ldr x22, [x8, #0x50]
0x04534DE4: 296140f9  ldr x9, [x9, #0xc0]
0x04534DE8: 203540f9  ldr x0, [x9, #0x68]
0x04534DEC: 09d44439  ldrb w9, [x0, #0x135]
0x04534DF0: 49000037  tbnz w9, #0, #0x4534df8
0x04534DF4: 8a86b097  bl #0x315681c
0x04534DF8: 08e040b9  ldr w8, [x0, #0xe0]
0x04534DFC: 48000035  cbnz w8, #0x4534e04
0x04534E00: 632fb197  bl #0x3180b8c
0x04534E04: a81240f9  ldr x8, [x21, #0x20]
0x04534E08: 086140f9  ldr x8, [x8, #0xc0]
0x04534E0C: 003540f9  ldr x0, [x8, #0x68]
0x04534E10: 08d44439  ldrb w8, [x0, #0x135]
0x04534E14: 48000037  tbnz w8, #0, #0x4534e1c
0x04534E18: 8186b097  bl #0x315681c
0x04534E1C: 085c40f9  ldr x8, [x0, #0xb8]
0x04534E20: 5d8a01d0  adrp x29, #0x767e000
0x04534E24: 5c8a01d0  adrp x28, #0x767e000
0x04534E28: 1b8a0190  adrp x27, #0x7674000
0x04534E2C: da8801d0  adrp x26, #0x764e000
0x04534E30: 180940f9  ldr x24, [x8, #0x10]
0x04534E34: bd9342f9  ldr x29, [x29, #0x520]
0x04534E38: 9c9742f9  ldr x28, [x28, #0x528]
0x04534E3C: 7b2745f9  ldr x27, [x27, #0xa48]
0x04534E40: 5a2f45f9  ldr x26, [x26, #0xa58]
0x04534E44: f80500b5  cbnz x24, #0x4534f00
0x04534E48: a81240f9  ldr x8, [x21, #0x20]
0x04534E4C: 086140f9  ldr x8, [x8, #0xc0]
0x04534E50: 003540f9  ldr x0, [x8, #0x68]
0x04534E54: 08d44439  ldrb w8, [x0, #0x135]
0x04534E58: 48000037  tbnz w8, #0, #0x4534e60
0x04534E5C: 7086b097  bl #0x315681c
0x04534E60: 08e040b9  ldr w8, [x0, #0xe0]
0x04534E64: 48000035  cbnz w8, #0x4534e6c
0x04534E68: 492fb197  bl #0x3180b8c
0x04534E6C: a81240f9  ldr x8, [x21, #0x20]
0x04534E70: 086140f9  ldr x8, [x8, #0xc0]
0x04534E74: 003540f9  ldr x0, [x8, #0x68]
0x04534E78: 08d44439  ldrb w8, [x0, #0x135]
0x04534E7C: 48000037  tbnz w8, #0, #0x4534e84
0x04534E80: 6786b097  bl #0x315681c
0x04534E84: 498a01d0  adrp x9, #0x767e000
0x04534E88: 085c40f9  ldr x8, [x0, #0xb8]
0x04534E8C: 29a142f9  ldr x9, [x9, #0x540]
0x04534E90: 190140f9  ldr x25, [x8]
0x04534E94: 200140f9  ldr x0, [x9]
0x04534E98: 822fb197  bl #0x3180ca0
0x04534E9C: a81240f9  ldr x8, [x21, #0x20]
0x04534EA0: e10319aa  mov x1, x25
0x04534EA4: e3031faa  mov x3, xzr
0x04534EA8: f80300aa  mov x24, x0
0x04534EAC: 086140f9  ldr x8, [x8, #0xc0]
0x04534EB0: 023d40f9  ldr x2, [x8, #0x78]
0x04534EB4: c1863494  bl #0x52569b8
0x04534EB8: a81240f9  ldr x8, [x21, #0x20]
0x04534EBC: 086140f9  ldr x8, [x8, #0xc0]
0x04534EC0: 003540f9  ldr x0, [x8, #0x68]
0x04534EC4: 09d44439  ldrb w9, [x0, #0x135]
0x04534EC8: 89000037  tbnz w9, #0, #0x4534ed8
0x04534ECC: 5486b097  bl #0x315681c
0x04534ED0: a81240f9  ldr x8, [x21, #0x20]
0x04534ED4: 086140f9  ldr x8, [x8, #0xc0]
0x04534ED8: 095c40f9  ldr x9, [x0, #0xb8]
0x04534EDC: 380900f9  str x24, [x9, #0x10]
0x04534EE0: 003540f9  ldr x0, [x8, #0x68]
0x04534EE4: 08d44439  ldrb w8, [x0, #0x135]
0x04534EE8: 48000037  tbnz w8, #0, #0x4534ef0
0x04534EEC: 4c86b097  bl #0x315681c
0x04534EF0: 085c40f9  ldr x8, [x0, #0xb8]
0x04534EF4: e10318aa  mov x1, x24
0x04534EF8: 00410091  add x0, x8, #0x10
0x04534EFC: b22eb197  bl #0x31809c4
0x04534F00: a20340f9  ldr x2, [x29]
0x04534F04: e00316aa  mov x0, x22
0x04534F08: e10318aa  mov x1, x24
0x04534F0C: e26edc97  bl #0x3c50a94
0x04534F10: 820340f9  ldr x2, [x28]
0x04534F14: e10300aa  mov x1, x0
0x04534F18: e00317aa  mov x0, x23
0x04534F1C: 60addc97  bl #0x3c6049c
0x04534F20: 610340f9  ldr x1, [x27]
0x04534F24: cc1ddc97  bl #0x3c3c654
0x04534F28: 410340f9  ldr x1, [x26]
0x04534F2C: 29acdc97  bl #0x3c5ffd0
0x04534F30: 741900b4  cbz x20, #0x453525c
0x04534F34: f50300aa  mov x21, x0
0x04534F38: 800a40f9  ldr x0, [x20, #0x10]
0x04534F3C: 001900b4  cbz x0, #0x453525c
0x04534F40: 080040f9  ldr x8, [x0]
0x04534F44: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x04534F48: 20013fd6  blr x9
0x04534F4C: 683a40f9  ldr x8, [x19, #0x70]
0x04534F50: 681800b4  cbz x8, #0x453525c
0x04534F54: 772640f9  ldr x23, [x19, #0x48]
0x04534F58: f60300aa  mov x22, x0
0x04534F5C: e00308aa  mov x0, x8
0x04534F60: e1031faa  mov x1, xzr
0x04534F64: 19f47194  bl #0x61b1fc8
0x04534F68: b71700b4  cbz x23, #0x453525c
0x04534F6C: 3b8a01d0  adrp x27, #0x767a000
0x04534F70: e80240f9  ldr x8, [x23]
0x04534F74: 7b4f42f9  ldr x27, [x27, #0x498]
0x04534F78: f803002a  mov w24, w0
0x04534F7C: 095d4279  ldrh w9, [x8, #0x12e]
0x04534F80: 610340f9  ldr x1, [x27]
0x04534F84: 290100b4  cbz x9, #0x4534fa8
0x04534F88: 0a5940f9  ldr x10, [x8, #0xb0]
0x04534F8C: 4a210091  add x10, x10, #8
0x04534F90: 4b815ff8  ldur x11, [x10, #-8]
0x04534F94: 7f0101eb  cmp x11, x1
0x04534F98: 00010054  b.eq #0x4534fb8
0x04534F9C: 290500f1  subs x9, x9, #1
0x04534FA0: 4a410091  add x10, x10, #0x10
0x04534FA4: 61ffff54  b.ne #0x4534f90
0x04534FA8: e2018052  movz w2, #0xf
0x04534FAC: e00317aa  mov x0, x23
0x04534FB0: d886b097  bl #0x3156b10
0x04534FB4: 05000014  b #0x4534fc8
0x04534FB8: 490140b9  ldr w9, [x10]
0x04534FBC: 293d0011  add w9, w9, #0xf
0x04534FC0: 08d1298b  add x8, x8, w9, sxtw #4
0x04534FC4: 00e10491  add x0, x8, #0x138
0x04534FC8: 080c40a9  ldp x8, x3, [x0]
0x04534FCC: e00317aa  mov x0, x23
0x04534FD0: e10316aa  mov x1, x22
0x04534FD4: e203182a  mov w2, w24
0x04534FD8: 00013fd6  blr x8
0x04534FDC: 400400b4  cbz x0, #0x4535064
0x04534FE0: 498a01d0  adrp x9, #0x767e000
0x04534FE4: 299942f9  ldr x9, [x9, #0x530]
0x04534FE8: f80300aa  mov x24, x0
0x04534FEC: 880240f9  ldr x8, [x20]
0x04534FF0: 200140f9  ldr x0, [x9]
0x04534FF4: 09c14439  ldrb w9, [x8, #0x130]
0x04534FF8: 0ac04439  ldrb w10, [x0, #0x130]
0x04534FFC: 3f010a6b  cmp w9, w10
0x04535000: c3000054  b.lo #0x4535018
0x04535004: 0b6540f9  ldr x11, [x8, #0xc8]
0x04535008: 6a0d0a8b  add x10, x11, x10, lsl #3
0x0453500C: 4a815ff8  ldur x10, [x10, #-8]
0x04535010: 5f0100eb  cmp x10, x0
0x04535014: c0020054  b.eq #0x453506c
0x04535018: 4a8a01b0  adrp x10, #0x767e000
0x0453501C: 4aa942f9  ldr x10, [x10, #0x550]
0x04535020: 400140f9  ldr x0, [x10]
0x04535024: 0ac04439  ldrb w10, [x0, #0x130]
0x04535028: 3f010a6b  cmp w9, w10
0x0453502C: c3000054  b.lo #0x4535044
0x04535030: 086540f9  ldr x8, [x8, #0xc8]
0x04535034: 080d0a8b  add x8, x8, x10, lsl #3
0x04535038: 08815ff8  ldur x8, [x8, #-8]
0x0453503C: 1f0100eb  cmp x8, x0
0x04535040: 60020054  b.eq #0x453508c
0x04535044: 488a01b0  adrp x8, #0x767e000
0x04535048: 087542f9  ldr x8, [x8, #0x4e8]
0x0453504C: 000140f9  ldr x0, [x8]
0x04535050: 142fb197  bl #0x3180ca0
0x04535054: e1031faa  mov x1, xzr
0x04535058: f70300aa  mov x23, x0
0x0453505C: 92d29394  bl #0x6a29aa4
0x04535060: 16000014  b #0x45350b8
0x04535064: f7031faa  mov x23, xzr
0x04535068: 75000014  b #0x453523c
0x0453506C: 0d2fb197  bl #0x3180ca0
0x04535070: e1031faa  mov x1, xzr
0x04535074: f70300aa  mov x23, x0
0x04535078: 87d29394  bl #0x6a29a94
0x0453507C: 170f00b4  cbz x23, #0x453525c
0x04535080: 882640b9  ldr w8, [x20, #0x24]
0x04535084: e82600b9  str w8, [x23, #0x24]
0x04535088: 0c000014  b #0x45350b8
0x0453508C: 052fb197  bl #0x3180ca0
0x04535090: e1031faa  mov x1, xzr
0x04535094: f70300aa  mov x23, x0
0x04535098: 7bd29394  bl #0x6a29a84
0x0453509C: 170e00b4  cbz x23, #0x453525c
0x045350A0: 882640b9  ldr w8, [x20, #0x24]
0x045350A4: e82600b9  str w8, [x23, #0x24]
0x045350A8: 88a24039  ldrb w8, [x20, #0x28]
0x045350AC: e8a20039  strb w8, [x23, #0x28]
0x045350B0: 88a64039  ldrb w8, [x20, #0x29]
0x045350B4: e8a60039  strb w8, [x23, #0x29]
0x045350B8: 3c8a0190  adrp x28, #0x7679000
0x045350BC: 080340f9  ldr x8, [x24]
0x045350C0: 9c1344f9  ldr x28, [x28, #0x820]
0x045350C4: 598a01b0  adrp x25, #0x767e000
0x045350C8: 095d4279  ldrh w9, [x8, #0x12e]
0x045350CC: 810340f9  ldr x1, [x28]
0x045350D0: 397b42f9  ldr x25, [x25, #0x4f0]
0x045350D4: 290100b4  cbz x9, #0x45350f8
0x045350D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x045350DC: 4a210091  add x10, x10, #8
0x045350E0: 4b815ff8  ldur x11, [x10, #-8]
0x045350E4: 7f0101eb  cmp x11, x1
0x045350E8: 00010054  b.eq #0x4535108
0x045350EC: 290500f1  subs x9, x9, #1
0x045350F0: 4a410091  add x10, x10, #0x10
0x045350F4: 61ffff54  b.ne #0x45350e0
0x045350F8: e00318aa  mov x0, x24
0x045350FC: e2031f2a  mov w2, wzr
0x04535100: 8486b097  bl #0x3156b10
0x04535104: 04000014  b #0x4535114
0x04535108: 490180b9  ldrsw x9, [x10]
0x0453510C: 0811098b  add x8, x8, x9, lsl #4
0x04535110: 00e10491  add x0, x8, #0x138
0x04535114: 080440a9  ldp x8, x1, [x0]
0x04535118: e00318aa  mov x0, x24
0x0453511C: 00013fd6  blr x8
0x04535120: 280340f9  ldr x8, [x25]
0x04535124: fa0300aa  mov x26, x0
0x04535128: e00308aa  mov x0, x8
0x0453512C: dd2eb197  bl #0x3180ca0
0x04535130: e1031aaa  mov x1, x26
0x04535134: e2031faa  mov x2, xzr
0x04535138: f90300aa  mov x25, x0
0x0453513C: 773d6b94  bl #0x6004718
0x04535140: f70800b4  cbz x23, #0x453525c
0x04535144: fa0317aa  mov x26, x23
0x04535148: 590f01f8  str x25, [x26, #0x10]!
0x0453514C: e0031aaa  mov x0, x26
0x04535150: e10319aa  mov x1, x25
0x04535154: 1c2eb197  bl #0x31809c4
0x04535158: 88864039  ldrb w8, [x20, #0x21]
0x0453515C: 48470039  strb w8, [x26, #0x11]
0x04535160: 88824039  ldrb w8, [x20, #0x20]
0x04535164: 48430039  strb w8, [x26, #0x10]
0x04535168: 080340f9  ldr x8, [x24]
0x0453516C: 732640f9  ldr x19, [x19, #0x48]
0x04535170: 810340f9  ldr x1, [x28]
0x04535174: 095d4279  ldrh w9, [x8, #0x12e]
0x04535178: 290100b4  cbz x9, #0x453519c
0x0453517C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535180: 4a210091  add x10, x10, #8
0x04535184: 4b815ff8  ldur x11, [x10, #-8]
0x04535188: 7f0101eb  cmp x11, x1
0x0453518C: 00010054  b.eq #0x45351ac
0x04535190: 290500f1  subs x9, x9, #1
0x04535194: 4a410091  add x10, x10, #0x10
0x04535198: 61ffff54  b.ne #0x4535184
0x0453519C: e00318aa  mov x0, x24
0x045351A0: e2031f2a  mov w2, wzr
0x045351A4: 5b86b097  bl #0x3156b10
0x045351A8: 04000014  b #0x45351b8
0x045351AC: 490180b9  ldrsw x9, [x10]
0x045351B0: 0811098b  add x8, x8, x9, lsl #4
0x045351B4: 00e10491  add x0, x8, #0x138
0x045351B8: 080440a9  ldp x8, x1, [x0]
0x045351BC: e00318aa  mov x0, x24
0x045351C0: 00013fd6  blr x8
0x045351C4: d30400b4  cbz x19, #0x453525c
0x045351C8: 680240f9  ldr x8, [x19]
0x045351CC: 610340f9  ldr x1, [x27]
0x045351D0: f40300aa  mov x20, x0
0x045351D4: 095d4279  ldrh w9, [x8, #0x12e]
0x045351D8: 290100b4  cbz x9, #0x45351fc
0x045351DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x045351E0: 4a210091  add x10, x10, #8
0x045351E4: 4b815ff8  ldur x11, [x10, #-8]
0x045351E8: 7f0101eb  cmp x11, x1
0x045351EC: 00010054  b.eq #0x453520c
0x045351F0: 290500f1  subs x9, x9, #1
0x045351F4: 4a410091  add x10, x10, #0x10
0x045351F8: 61ffff54  b.ne #0x45351e4
0x045351FC: 22048052  movz w2, #0x21
0x04535200: e00313aa  mov x0, x19
0x04535204: 4386b097  bl #0x3156b10
0x04535208: 05000014  b #0x453521c
0x0453520C: 490140b9  ldr w9, [x10]
0x04535210: 29850011  add w9, w9, #0x21
0x04535214: 08d1298b  add x8, x8, w9, sxtw #4
0x04535218: 00e10491  add x0, x8, #0x138
0x0453521C: 081040a9  ldp x8, x4, [x0]
0x04535220: e00313aa  mov x0, x19
0x04535224: e10315aa  mov x1, x21
0x04535228: e20314aa  mov x2, x20
0x0453522C: e30316aa  mov x3, x22
0x04535230: 00013fd6  blr x8
0x04535234: 08000012  and w8, w0, #1
0x04535238: e88a0039  strb w8, [x23, #0x22]
0x0453523C: e00317aa  mov x0, x23
0x04535240: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04535244: f65744a9  ldp x22, x21, [sp, #0x40]
0x04535248: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0453524C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04535250: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04535254: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04535258: c0035fd6  ret
0x0453525C: 942eb197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4535260 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$SetItemSpawningTrackingData
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___SetItemSpawningTrackingData (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, MergeEngine_ECS_Components_Items_TimeDurationComponent_o* timeDurationComponent, MergeEngine_Configuration_IMergeItem_o* spawnerItem, MergeEngine_Configuration_Definitions_ItemSpawnable_o* itemSpawnable, MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceData_o* lowLevelData, Merger_ProducerExcitement_Compatibility_ProducerExcitementSpawnData_o* excitementData, const MethodInfo_4535260* method);
; bytes=1580 sha256=42f393c2964fbc219b36528fdfffbe225a9e5b86681ca14c6ced81e8bc7982ba status=arm64_complete_bound indexed_start=True
0x04535260: fe0f1af8  str x30, [sp, #-0x60]!
0x04535264: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04535268: fa6702a9  stp x26, x25, [sp, #0x20]
0x0453526C: f85f03a9  stp x24, x23, [sp, #0x30]
0x04535270: f65704a9  stp x22, x21, [sp, #0x40]
0x04535274: f44f05a9  stp x20, x19, [sp, #0x50]
0x04535278: 34bf0190  adrp x20, #0x7d19000
0x0453527C: 5c8a01b0  adrp x28, #0x767e000
0x04535280: 88d64439  ldrb w8, [x20, #0x135]
0x04535284: 9caf42f9  ldr x28, [x28, #0x558]
0x04535288: f50307aa  mov x21, x7
0x0453528C: f80306aa  mov x24, x6
0x04535290: f90305aa  mov x25, x5
0x04535294: fb0304aa  mov x27, x4
0x04535298: fa0303aa  mov x26, x3
0x0453529C: f70302aa  mov x23, x2
0x045352A0: f60301aa  mov x22, x1
0x045352A4: f30300aa  mov x19, x0
0x045352A8: c8030037  tbnz w8, #0, #0x4535320
0x045352AC: 408a01b0  adrp x0, #0x767e000
0x045352B0: 00b042f9  ldr x0, [x0, #0x560]
0x045352B4: d92db197  bl #0x3180a18
0x045352B8: 408a01b0  adrp x0, #0x767e000
0x045352BC: 00b442f9  ldr x0, [x0, #0x568]
0x045352C0: d62db197  bl #0x3180a18
0x045352C4: 408a01b0  adrp x0, #0x767e000
0x045352C8: 00b842f9  ldr x0, [x0, #0x570]
0x045352CC: d32db197  bl #0x3180a18
0x045352D0: 208a01b0  adrp x0, #0x767a000
0x045352D4: 000043f9  ldr x0, [x0, #0x600]
0x045352D8: d02db197  bl #0x3180a18
0x045352DC: 408a01b0  adrp x0, #0x767e000
0x045352E0: 00ac42f9  ldr x0, [x0, #0x558]
0x045352E4: cd2db197  bl #0x3180a18
0x045352E8: 408a01b0  adrp x0, #0x767e000
0x045352EC: 00bc42f9  ldr x0, [x0, #0x578]
0x045352F0: ca2db197  bl #0x3180a18
0x045352F4: 408a01b0  adrp x0, #0x767e000
0x045352F8: 00c042f9  ldr x0, [x0, #0x580]
0x045352FC: c72db197  bl #0x3180a18
0x04535300: c08801b0  adrp x0, #0x764e000
0x04535304: 005847f9  ldr x0, [x0, #0xeb0]
0x04535308: c42db197  bl #0x3180a18
0x0453530C: 408a01b0  adrp x0, #0x767e000
0x04535310: 00c442f9  ldr x0, [x0, #0x588]
0x04535314: c12db197  bl #0x3180a18
0x04535318: 28008052  movz w8, #0x1
0x0453531C: 88d60439  strb w8, [x20, #0x135]
0x04535320: 800340f9  ldr x0, [x28]
0x04535324: 5f2eb197  bl #0x3180ca0
0x04535328: e1031faa  mov x1, xzr
0x0453532C: f40300aa  mov x20, x0
0x04535330: f7328f94  bl #0x6901f0c
0x04535334: b62a00b4  cbz x22, #0x4535888
0x04535338: 3c8a01b0  adrp x28, #0x767a000
0x0453533C: c80240f9  ldr x8, [x22]
0x04535340: 9c0343f9  ldr x28, [x28, #0x600]
0x04535344: 095d4279  ldrh w9, [x8, #0x12e]
0x04535348: 810340f9  ldr x1, [x28]
0x0453534C: 290100b4  cbz x9, #0x4535370
0x04535350: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535354: 4a210091  add x10, x10, #8
0x04535358: 4b815ff8  ldur x11, [x10, #-8]
0x0453535C: 7f0101eb  cmp x11, x1
0x04535360: 00010054  b.eq #0x4535380
0x04535364: 290500f1  subs x9, x9, #1
0x04535368: 4a410091  add x10, x10, #0x10
0x0453536C: 61ffff54  b.ne #0x4535358
0x04535370: e00316aa  mov x0, x22
0x04535374: e2031f2a  mov w2, wzr
0x04535378: e685b097  bl #0x3156b10
0x0453537C: 04000014  b #0x453538c
0x04535380: 490180b9  ldrsw x9, [x10]
0x04535384: 0811098b  add x8, x8, x9, lsl #4
0x04535388: 00e10491  add x0, x8, #0x138
0x0453538C: 080440a9  ldp x8, x1, [x0]
0x04535390: e00316aa  mov x0, x22
0x04535394: 00013fd6  blr x8
0x04535398: 942700b4  cbz x20, #0x4535888
0x0453539C: 801200b9  str w0, [x20, #0x10]
0x045353A0: c80240f9  ldr x8, [x22]
0x045353A4: 810340f9  ldr x1, [x28]
0x045353A8: 095d4279  ldrh w9, [x8, #0x12e]
0x045353AC: 290100b4  cbz x9, #0x45353d0
0x045353B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045353B4: 4a210091  add x10, x10, #8
0x045353B8: 4b815ff8  ldur x11, [x10, #-8]
0x045353BC: 7f0101eb  cmp x11, x1
0x045353C0: 00010054  b.eq #0x45353e0
0x045353C4: 290500f1  subs x9, x9, #1
0x045353C8: 4a410091  add x10, x10, #0x10
0x045353CC: 61ffff54  b.ne #0x45353b8
0x045353D0: 42008052  movz w2, #0x2
0x045353D4: e00316aa  mov x0, x22
0x045353D8: ce85b097  bl #0x3156b10
0x045353DC: 05000014  b #0x45353f0
0x045353E0: 490140b9  ldr w9, [x10]
0x045353E4: 29090011  add w9, w9, #2
0x045353E8: 08d1298b  add x8, x8, w9, sxtw #4
0x045353EC: 00e10491  add x0, x8, #0x138
0x045353F0: 080440a9  ldp x8, x1, [x0]
0x045353F4: e00316aa  mov x0, x22
0x045353F8: 00013fd6  blr x8
0x045353FC: 801600b9  str w0, [x20, #0x14]
0x04535400: c80240f9  ldr x8, [x22]
0x04535404: 810340f9  ldr x1, [x28]
0x04535408: 095d4279  ldrh w9, [x8, #0x12e]
0x0453540C: 290100b4  cbz x9, #0x4535430
0x04535410: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535414: 4a210091  add x10, x10, #8
0x04535418: 4b815ff8  ldur x11, [x10, #-8]
0x0453541C: 7f0101eb  cmp x11, x1
0x04535420: 00010054  b.eq #0x4535440
0x04535424: 290500f1  subs x9, x9, #1
0x04535428: 4a410091  add x10, x10, #0x10
0x0453542C: 61ffff54  b.ne #0x4535418
0x04535430: 62008052  movz w2, #0x3
0x04535434: e00316aa  mov x0, x22
0x04535438: b685b097  bl #0x3156b10
0x0453543C: 05000014  b #0x4535450
0x04535440: 490140b9  ldr w9, [x10]
0x04535444: 290d0011  add w9, w9, #3
0x04535448: 08d1298b  add x8, x8, w9, sxtw #4
0x0453544C: 00e10491  add x0, x8, #0x138
0x04535450: 080440a9  ldp x8, x1, [x0]
0x04535454: e00316aa  mov x0, x22
0x04535458: 00013fd6  blr x8
0x0453545C: 801a00b9  str w0, [x20, #0x18]
0x04535460: c80240f9  ldr x8, [x22]
0x04535464: 810340f9  ldr x1, [x28]
0x04535468: 095d4279  ldrh w9, [x8, #0x12e]
0x0453546C: 290100b4  cbz x9, #0x4535490
0x04535470: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535474: 4a210091  add x10, x10, #8
0x04535478: 4b815ff8  ldur x11, [x10, #-8]
0x0453547C: 7f0101eb  cmp x11, x1
0x04535480: 00010054  b.eq #0x45354a0
0x04535484: 290500f1  subs x9, x9, #1
0x04535488: 4a410091  add x10, x10, #0x10
0x0453548C: 61ffff54  b.ne #0x4535478
0x04535490: 22008052  movz w2, #0x1
0x04535494: e00316aa  mov x0, x22
0x04535498: 9e85b097  bl #0x3156b10
0x0453549C: 05000014  b #0x45354b0
0x045354A0: 490140b9  ldr w9, [x10]
0x045354A4: 29050011  add w9, w9, #1
0x045354A8: 08d1298b  add x8, x8, w9, sxtw #4
0x045354AC: 00e10491  add x0, x8, #0x138
0x045354B0: 080440a9  ldp x8, x1, [x0]
0x045354B4: e00316aa  mov x0, x22
0x045354B8: 00013fd6  blr x8
0x045354BC: 801e00b9  str w0, [x20, #0x1c]
0x045354C0: c80240f9  ldr x8, [x22]
0x045354C4: 810340f9  ldr x1, [x28]
0x045354C8: 095d4279  ldrh w9, [x8, #0x12e]
0x045354CC: 290100b4  cbz x9, #0x45354f0
0x045354D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045354D4: 4a210091  add x10, x10, #8
0x045354D8: 4b815ff8  ldur x11, [x10, #-8]
0x045354DC: 7f0101eb  cmp x11, x1
0x045354E0: 00010054  b.eq #0x4535500
0x045354E4: 290500f1  subs x9, x9, #1
0x045354E8: 4a410091  add x10, x10, #0x10
0x045354EC: 61ffff54  b.ne #0x45354d8
0x045354F0: 22028052  movz w2, #0x11
0x045354F4: e00316aa  mov x0, x22
0x045354F8: 8685b097  bl #0x3156b10
0x045354FC: 05000014  b #0x4535510
0x04535500: 490140b9  ldr w9, [x10]
0x04535504: 29450011  add w9, w9, #0x11
0x04535508: 08d1298b  add x8, x8, w9, sxtw #4
0x0453550C: 00e10491  add x0, x8, #0x138
0x04535510: 080440a9  ldp x8, x1, [x0]
0x04535514: e00316aa  mov x0, x22
0x04535518: 00013fd6  blr x8
0x0453551C: 802200b9  str w0, [x20, #0x20]
0x04535520: c80240f9  ldr x8, [x22]
0x04535524: 810340f9  ldr x1, [x28]
0x04535528: 095d4279  ldrh w9, [x8, #0x12e]
0x0453552C: 290100b4  cbz x9, #0x4535550
0x04535530: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535534: 4a210091  add x10, x10, #8
0x04535538: 4b815ff8  ldur x11, [x10, #-8]
0x0453553C: 7f0101eb  cmp x11, x1
0x04535540: 00010054  b.eq #0x4535560
0x04535544: 290500f1  subs x9, x9, #1
0x04535548: 4a410091  add x10, x10, #0x10
0x0453554C: 61ffff54  b.ne #0x4535538
0x04535550: 02018052  movz w2, #0x8
0x04535554: e00316aa  mov x0, x22
0x04535558: 6e85b097  bl #0x3156b10
0x0453555C: 05000014  b #0x4535570
0x04535560: 490140b9  ldr w9, [x10]
0x04535564: 29210011  add w9, w9, #8
0x04535568: 08d1298b  add x8, x8, w9, sxtw #4
0x0453556C: 00e10491  add x0, x8, #0x138
0x04535570: 080440a9  ldp x8, x1, [x0]
0x04535574: e00316aa  mov x0, x22
0x04535578: 00013fd6  blr x8
0x0453557C: 08040011  add w8, w0, #1
0x04535580: e00314aa  mov x0, x20
0x04535584: e10316aa  mov x1, x22
0x04535588: e2031faa  mov x2, xzr
0x0453558C: 882600b9  str w8, [x20, #0x24]
0x04535590: e5318f94  bl #0x6901d24
0x04535594: e80314aa  mov x8, x20
0x04535598: 1a0d04f8  str x26, [x8, #0x40]!
0x0453559C: 00811eb8  stur w0, [x8, #-0x18]
0x045355A0: e00308aa  mov x0, x8
0x045355A4: e1031aaa  mov x1, x26
0x045355A8: 072db197  bl #0x31809c4
0x045355AC: fb1600b4  cbz x27, #0x4535888
0x045355B0: 600b40f9  ldr x0, [x27, #0x10]
0x045355B4: a01600b4  cbz x0, #0x4535888
0x045355B8: 080040f9  ldr x8, [x0]
0x045355BC: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x045355C0: 20013fd6  blr x9
0x045355C4: e10300aa  mov x1, x0
0x045355C8: e00314aa  mov x0, x20
0x045355CC: 018c04f8  str x1, [x0, #0x48]!
0x045355D0: fd2cb197  bl #0x31809c4
0x045355D4: e00314aa  mov x0, x20
0x045355D8: e1031aaa  mov x1, x26
0x045355DC: e20316aa  mov x2, x22
0x045355E0: e3031faa  mov x3, xzr
0x045355E4: 44318f94  bl #0x6901af4
0x045355E8: 802a00f9  str x0, [x20, #0x50]
0x045355EC: 390300b4  cbz x25, #0x4535650
0x045355F0: 488a01b0  adrp x8, #0x767e000
0x045355F4: 08bd42f9  ldr x8, [x8, #0x578]
0x045355F8: 000140f9  ldr x0, [x8]
0x045355FC: a92db197  bl #0x3180ca0
0x04535600: e1031faa  mov x1, xzr
0x04535604: fa0300aa  mov x26, x0
0x04535608: 63328f94  bl #0x6901f94
0x0453560C: fa1300b4  cbz x26, #0x4535888
0x04535610: 211340f9  ldr x1, [x25, #0x20]
0x04535614: e0031aaa  mov x0, x26
0x04535618: 010c01f8  str x1, [x0, #0x10]!
0x0453561C: ea2cb197  bl #0x31809c4
0x04535620: 281b40b9  ldr w8, [x25, #0x18]
0x04535624: e0031aaa  mov x0, x26
0x04535628: 1f050071  cmp w8, #1
0x0453562C: 08c59f1a  csinc w8, w8, wzr, gt
0x04535630: 481b00b9  str w8, [x26, #0x18]
0x04535634: 211740f9  ldr x1, [x25, #0x28]
0x04535638: 010c02f8  str x1, [x0, #0x20]!
0x0453563C: e22cb197  bl #0x31809c4
0x04535640: e00314aa  mov x0, x20
0x04535644: 1a0c06f8  str x26, [x0, #0x60]!
0x04535648: e1031aaa  mov x1, x26
0x0453564C: de2cb197  bl #0x31809c4
0x04535650: 980100b4  cbz x24, #0x4535680
0x04535654: 08734039  ldrb w8, [x24, #0x1c]
0x04535658: 498a01b0  adrp x9, #0x767e000
0x0453565C: 4a8a01b0  adrp x10, #0x767e000
0x04535660: 29c142f9  ldr x9, [x9, #0x580]
0x04535664: 4ac542f9  ldr x10, [x10, #0x588]
0x04535668: 1f010071  cmp w8, #0
0x0453566C: e00314aa  mov x0, x20
0x04535670: 28018a9a  csel x8, x9, x10, eq
0x04535674: 010140f9  ldr x1, [x8]
0x04535678: 018c03f8  str x1, [x0, #0x38]!
0x0453567C: d22cb197  bl #0x31809c4
0x04535680: 488a01b0  adrp x8, #0x767e000
0x04535684: 08b942f9  ldr x8, [x8, #0x570]
0x04535688: 770000b4  cbz x23, #0x4535694
0x0453568C: e01640fd  ldr d0, [x23, #0x28]
0x04535690: 802e00fd  str d0, [x20, #0x58]
0x04535694: 170140f9  ldr x23, [x8]
0x04535698: c80240f9  ldr x8, [x22]
0x0453569C: e11240f9  ldr x1, [x23, #0x20]
0x045356A0: 095d4279  ldrh w9, [x8, #0x12e]
0x045356A4: e2a24079  ldrh w2, [x23, #0x50]
0x045356A8: 290100b4  cbz x9, #0x45356cc
0x045356AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x045356B0: 4a210091  add x10, x10, #8
0x045356B4: 4b815ff8  ldur x11, [x10, #-8]
0x045356B8: 7f0101eb  cmp x11, x1
0x045356BC: e0000054  b.eq #0x45356d8
0x045356C0: 290500f1  subs x9, x9, #1
0x045356C4: 4a410091  add x10, x10, #0x10
0x045356C8: 61ffff54  b.ne #0x45356b4
0x045356CC: e00316aa  mov x0, x22
0x045356D0: 1085b097  bl #0x3156b10
0x045356D4: 05000014  b #0x45356e8
0x045356D8: 490140b9  ldr w9, [x10]
0x045356DC: 2901020b  add w9, w9, w2
0x045356E0: 08d1298b  add x8, x8, w9, sxtw #4
0x045356E4: 00e10491  add x0, x8, #0x138
0x045356E8: 000440f9  ldr x0, [x0, #8]
0x045356EC: e10317aa  mov x1, x23
0x045356F0: 262db197  bl #0x3180b88
0x045356F4: 080440f9  ldr x8, [x0, #8]
0x045356F8: e10300aa  mov x1, x0
0x045356FC: e00316aa  mov x0, x22
0x04535700: 00013fd6  blr x8
0x04535704: 800a00b4  cbz x0, #0x4535854
0x04535708: a91240f9  ldr x9, [x21, #0x20]
0x0453570C: e80300aa  mov x8, x0
0x04535710: 161940f9  ldr x22, [x8, #0x30]
0x04535714: 296140f9  ldr x9, [x9, #0xc0]
0x04535718: 203540f9  ldr x0, [x9, #0x68]
0x0453571C: 09d44439  ldrb w9, [x0, #0x135]
0x04535720: 49000037  tbnz w9, #0, #0x4535728
0x04535724: 3e84b097  bl #0x315681c
0x04535728: 08e040b9  ldr w8, [x0, #0xe0]
0x0453572C: 48000035  cbnz w8, #0x4535734
0x04535730: 172db197  bl #0x3180b8c
0x04535734: a81240f9  ldr x8, [x21, #0x20]
0x04535738: d78801b0  adrp x23, #0x764e000
0x0453573C: 086140f9  ldr x8, [x8, #0xc0]
0x04535740: 003540f9  ldr x0, [x8, #0x68]
0x04535744: 08d44439  ldrb w8, [x0, #0x135]
0x04535748: f75a47f9  ldr x23, [x23, #0xeb0]
0x0453574C: 48000037  tbnz w8, #0, #0x4535754
0x04535750: 3384b097  bl #0x315681c
0x04535754: 085c40f9  ldr x8, [x0, #0xb8]
0x04535758: 5a8a01b0  adrp x26, #0x767e000
0x0453575C: f70240f9  ldr x23, [x23]
0x04535760: 180d40f9  ldr x24, [x8, #0x18]
0x04535764: 5ab342f9  ldr x26, [x26, #0x560]
0x04535768: f80500b5  cbnz x24, #0x4535824
0x0453576C: a81240f9  ldr x8, [x21, #0x20]
0x04535770: 086140f9  ldr x8, [x8, #0xc0]
0x04535774: 003540f9  ldr x0, [x8, #0x68]
0x04535778: 08d44439  ldrb w8, [x0, #0x135]
0x0453577C: 48000037  tbnz w8, #0, #0x4535784
0x04535780: 2784b097  bl #0x315681c
0x04535784: 08e040b9  ldr w8, [x0, #0xe0]
0x04535788: 48000035  cbnz w8, #0x4535790
0x0453578C: 002db197  bl #0x3180b8c
0x04535790: a81240f9  ldr x8, [x21, #0x20]
0x04535794: 086140f9  ldr x8, [x8, #0xc0]
0x04535798: 003540f9  ldr x0, [x8, #0x68]
0x0453579C: 08d44439  ldrb w8, [x0, #0x135]
0x045357A0: 48000037  tbnz w8, #0, #0x45357a8
0x045357A4: 1e84b097  bl #0x315681c
0x045357A8: 498a01b0  adrp x9, #0x767e000
0x045357AC: 085c40f9  ldr x8, [x0, #0xb8]
0x045357B0: 29b542f9  ldr x9, [x9, #0x568]
0x045357B4: 190140f9  ldr x25, [x8]
0x045357B8: 200140f9  ldr x0, [x9]
0x045357BC: 392db197  bl #0x3180ca0
0x045357C0: a81240f9  ldr x8, [x21, #0x20]
0x045357C4: e10319aa  mov x1, x25
0x045357C8: e3031faa  mov x3, xzr
0x045357CC: f80300aa  mov x24, x0
0x045357D0: 086140f9  ldr x8, [x8, #0xc0]
0x045357D4: 024140f9  ldr x2, [x8, #0x80]
0x045357D8: 78843494  bl #0x52569b8
0x045357DC: a81240f9  ldr x8, [x21, #0x20]
0x045357E0: 086140f9  ldr x8, [x8, #0xc0]
0x045357E4: 003540f9  ldr x0, [x8, #0x68]
0x045357E8: 09d44439  ldrb w9, [x0, #0x135]
0x045357EC: 89000037  tbnz w9, #0, #0x45357fc
0x045357F0: 0b84b097  bl #0x315681c
0x045357F4: a81240f9  ldr x8, [x21, #0x20]
0x045357F8: 086140f9  ldr x8, [x8, #0xc0]
0x045357FC: 095c40f9  ldr x9, [x0, #0xb8]
0x04535800: 380d00f9  str x24, [x9, #0x18]
0x04535804: 003540f9  ldr x0, [x8, #0x68]
0x04535808: 08d44439  ldrb w8, [x0, #0x135]
0x0453580C: 48000037  tbnz w8, #0, #0x4535814
0x04535810: 0384b097  bl #0x315681c
0x04535814: 085c40f9  ldr x8, [x0, #0xb8]
0x04535818: e10318aa  mov x1, x24
0x0453581C: 00610091  add x0, x8, #0x18
0x04535820: 692cb197  bl #0x31809c4
0x04535824: 420340f9  ldr x2, [x26]
0x04535828: e00316aa  mov x0, x22
0x0453582C: e10318aa  mov x1, x24
0x04535830: 996cdc97  bl #0x3c50a94
0x04535834: e10300aa  mov x1, x0
0x04535838: e00317aa  mov x0, x23
0x0453583C: e2031faa  mov x2, xzr
0x04535840: 7e0c3f94  bl #0x54f8a38
0x04535844: e10300aa  mov x1, x0
0x04535848: e00314aa  mov x0, x20
0x0453584C: 010c03f8  str x1, [x0, #0x30]!
0x04535850: 5d2cb197  bl #0x31809c4
0x04535854: 683640f9  ldr x8, [x19, #0x68]
0x04535858: 880100b4  cbz x8, #0x4535888
0x0453585C: 001940f9  ldr x0, [x8, #0x30]
0x04535860: 400100b4  cbz x0, #0x4535888
0x04535864: 140c01f8  str x20, [x0, #0x10]!
0x04535868: e10314aa  mov x1, x20
0x0453586C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04535870: f65744a9  ldp x22, x21, [sp, #0x40]
0x04535874: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04535878: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0453587C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04535880: fe0746f8  ldr x30, [sp], #0x60
0x04535884: 502cb117  b #0x31809c4
0x04535888: 092db197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x453588C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$GetItemSpawningTrackingData
; native signature: MergeEngine_ECS_Components_InteractionTracking_ItemSpawningTrackingData_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetItemSpawningTrackingData (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, MergeEngine_Configuration_IMergeItem_o* spawnerItem, MergeEngine_Configuration_Definitions_ItemSpawnable_o* itemSpawnable, const MethodInfo_453588C* method);
; bytes=816 sha256=4feb5c32f081ac4715e160a55fb4734a5b4774f66aaaffc572082fe9879959d4 status=arm64_complete_bound indexed_start=True
0x0453588C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04535890: f65701a9  stp x22, x21, [sp, #0x10]
0x04535894: f44f02a9  stp x20, x19, [sp, #0x20]
0x04535898: 35bf0190  adrp x21, #0x7d19000
0x0453589C: 578a01b0  adrp x23, #0x767e000
0x045358A0: a8da4439  ldrb w8, [x21, #0x136]
0x045358A4: f7ae42f9  ldr x23, [x23, #0x558]
0x045358A8: f60303aa  mov x22, x3
0x045358AC: f40302aa  mov x20, x2
0x045358B0: f30301aa  mov x19, x1
0x045358B4: 28010037  tbnz w8, #0, #0x45358d8
0x045358B8: 208a01b0  adrp x0, #0x767a000
0x045358BC: 000043f9  ldr x0, [x0, #0x600]
0x045358C0: 562cb197  bl #0x3180a18
0x045358C4: 408a01b0  adrp x0, #0x767e000
0x045358C8: 00ac42f9  ldr x0, [x0, #0x558]
0x045358CC: 532cb197  bl #0x3180a18
0x045358D0: 28008052  movz w8, #0x1
0x045358D4: a8da0439  strb w8, [x21, #0x136]
0x045358D8: e00240f9  ldr x0, [x23]
0x045358DC: f12cb197  bl #0x3180ca0
0x045358E0: e1031faa  mov x1, xzr
0x045358E4: f50300aa  mov x21, x0
0x045358E8: 89318f94  bl #0x6901f0c
0x045358EC: 731600b4  cbz x19, #0x4535bb8
0x045358F0: 378a01b0  adrp x23, #0x767a000
0x045358F4: 680240f9  ldr x8, [x19]
0x045358F8: f70243f9  ldr x23, [x23, #0x600]
0x045358FC: 095d4279  ldrh w9, [x8, #0x12e]
0x04535900: e10240f9  ldr x1, [x23]
0x04535904: 290100b4  cbz x9, #0x4535928
0x04535908: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453590C: 4a210091  add x10, x10, #8
0x04535910: 4b815ff8  ldur x11, [x10, #-8]
0x04535914: 7f0101eb  cmp x11, x1
0x04535918: 00010054  b.eq #0x4535938
0x0453591C: 290500f1  subs x9, x9, #1
0x04535920: 4a410091  add x10, x10, #0x10
0x04535924: 61ffff54  b.ne #0x4535910
0x04535928: e00313aa  mov x0, x19
0x0453592C: e2031f2a  mov w2, wzr
0x04535930: 7884b097  bl #0x3156b10
0x04535934: 04000014  b #0x4535944
0x04535938: 490180b9  ldrsw x9, [x10]
0x0453593C: 0811098b  add x8, x8, x9, lsl #4
0x04535940: 00e10491  add x0, x8, #0x138
0x04535944: 080440a9  ldp x8, x1, [x0]
0x04535948: e00313aa  mov x0, x19
0x0453594C: 00013fd6  blr x8
0x04535950: 551300b4  cbz x21, #0x4535bb8
0x04535954: a01200b9  str w0, [x21, #0x10]
0x04535958: 680240f9  ldr x8, [x19]
0x0453595C: e10240f9  ldr x1, [x23]
0x04535960: 095d4279  ldrh w9, [x8, #0x12e]
0x04535964: 290100b4  cbz x9, #0x4535988
0x04535968: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453596C: 4a210091  add x10, x10, #8
0x04535970: 4b815ff8  ldur x11, [x10, #-8]
0x04535974: 7f0101eb  cmp x11, x1
0x04535978: 00010054  b.eq #0x4535998
0x0453597C: 290500f1  subs x9, x9, #1
0x04535980: 4a410091  add x10, x10, #0x10
0x04535984: 61ffff54  b.ne #0x4535970
0x04535988: 42008052  movz w2, #0x2
0x0453598C: e00313aa  mov x0, x19
0x04535990: 6084b097  bl #0x3156b10
0x04535994: 05000014  b #0x45359a8
0x04535998: 490140b9  ldr w9, [x10]
0x0453599C: 29090011  add w9, w9, #2
0x045359A0: 08d1298b  add x8, x8, w9, sxtw #4
0x045359A4: 00e10491  add x0, x8, #0x138
0x045359A8: 080440a9  ldp x8, x1, [x0]
0x045359AC: e00313aa  mov x0, x19
0x045359B0: 00013fd6  blr x8
0x045359B4: a01600b9  str w0, [x21, #0x14]
0x045359B8: 680240f9  ldr x8, [x19]
0x045359BC: e10240f9  ldr x1, [x23]
0x045359C0: 095d4279  ldrh w9, [x8, #0x12e]
0x045359C4: 290100b4  cbz x9, #0x45359e8
0x045359C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x045359CC: 4a210091  add x10, x10, #8
0x045359D0: 4b815ff8  ldur x11, [x10, #-8]
0x045359D4: 7f0101eb  cmp x11, x1
0x045359D8: 00010054  b.eq #0x45359f8
0x045359DC: 290500f1  subs x9, x9, #1
0x045359E0: 4a410091  add x10, x10, #0x10
0x045359E4: 61ffff54  b.ne #0x45359d0
0x045359E8: 62008052  movz w2, #0x3
0x045359EC: e00313aa  mov x0, x19
0x045359F0: 4884b097  bl #0x3156b10
0x045359F4: 05000014  b #0x4535a08
0x045359F8: 490140b9  ldr w9, [x10]
0x045359FC: 290d0011  add w9, w9, #3
0x04535A00: 08d1298b  add x8, x8, w9, sxtw #4
0x04535A04: 00e10491  add x0, x8, #0x138
0x04535A08: 080440a9  ldp x8, x1, [x0]
0x04535A0C: e00313aa  mov x0, x19
0x04535A10: 00013fd6  blr x8
0x04535A14: a01a00b9  str w0, [x21, #0x18]
0x04535A18: 680240f9  ldr x8, [x19]
0x04535A1C: e10240f9  ldr x1, [x23]
0x04535A20: 095d4279  ldrh w9, [x8, #0x12e]
0x04535A24: 290100b4  cbz x9, #0x4535a48
0x04535A28: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535A2C: 4a210091  add x10, x10, #8
0x04535A30: 4b815ff8  ldur x11, [x10, #-8]
0x04535A34: 7f0101eb  cmp x11, x1
0x04535A38: 00010054  b.eq #0x4535a58
0x04535A3C: 290500f1  subs x9, x9, #1
0x04535A40: 4a410091  add x10, x10, #0x10
0x04535A44: 61ffff54  b.ne #0x4535a30
0x04535A48: 22008052  movz w2, #0x1
0x04535A4C: e00313aa  mov x0, x19
0x04535A50: 3084b097  bl #0x3156b10
0x04535A54: 05000014  b #0x4535a68
0x04535A58: 490140b9  ldr w9, [x10]
0x04535A5C: 29050011  add w9, w9, #1
0x04535A60: 08d1298b  add x8, x8, w9, sxtw #4
0x04535A64: 00e10491  add x0, x8, #0x138
0x04535A68: 080440a9  ldp x8, x1, [x0]
0x04535A6C: e00313aa  mov x0, x19
0x04535A70: 00013fd6  blr x8
0x04535A74: a01e00b9  str w0, [x21, #0x1c]
0x04535A78: 680240f9  ldr x8, [x19]
0x04535A7C: e10240f9  ldr x1, [x23]
0x04535A80: 095d4279  ldrh w9, [x8, #0x12e]
0x04535A84: 290100b4  cbz x9, #0x4535aa8
0x04535A88: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535A8C: 4a210091  add x10, x10, #8
0x04535A90: 4b815ff8  ldur x11, [x10, #-8]
0x04535A94: 7f0101eb  cmp x11, x1
0x04535A98: 00010054  b.eq #0x4535ab8
0x04535A9C: 290500f1  subs x9, x9, #1
0x04535AA0: 4a410091  add x10, x10, #0x10
0x04535AA4: 61ffff54  b.ne #0x4535a90
0x04535AA8: 22028052  movz w2, #0x11
0x04535AAC: e00313aa  mov x0, x19
0x04535AB0: 1884b097  bl #0x3156b10
0x04535AB4: 05000014  b #0x4535ac8
0x04535AB8: 490140b9  ldr w9, [x10]
0x04535ABC: 29450011  add w9, w9, #0x11
0x04535AC0: 08d1298b  add x8, x8, w9, sxtw #4
0x04535AC4: 00e10491  add x0, x8, #0x138
0x04535AC8: 080440a9  ldp x8, x1, [x0]
0x04535ACC: e00313aa  mov x0, x19
0x04535AD0: 00013fd6  blr x8
0x04535AD4: a02200b9  str w0, [x21, #0x20]
0x04535AD8: 680240f9  ldr x8, [x19]
0x04535ADC: e10240f9  ldr x1, [x23]
0x04535AE0: 095d4279  ldrh w9, [x8, #0x12e]
0x04535AE4: 290100b4  cbz x9, #0x4535b08
0x04535AE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535AEC: 4a210091  add x10, x10, #8
0x04535AF0: 4b815ff8  ldur x11, [x10, #-8]
0x04535AF4: 7f0101eb  cmp x11, x1
0x04535AF8: 00010054  b.eq #0x4535b18
0x04535AFC: 290500f1  subs x9, x9, #1
0x04535B00: 4a410091  add x10, x10, #0x10
0x04535B04: 61ffff54  b.ne #0x4535af0
0x04535B08: 02018052  movz w2, #0x8
0x04535B0C: e00313aa  mov x0, x19
0x04535B10: 0084b097  bl #0x3156b10
0x04535B14: 05000014  b #0x4535b28
0x04535B18: 490140b9  ldr w9, [x10]
0x04535B1C: 29210011  add w9, w9, #8
0x04535B20: 08d1298b  add x8, x8, w9, sxtw #4
0x04535B24: 00e10491  add x0, x8, #0x138
0x04535B28: 080440a9  ldp x8, x1, [x0]
0x04535B2C: e00313aa  mov x0, x19
0x04535B30: 00013fd6  blr x8
0x04535B34: 08040011  add w8, w0, #1
0x04535B38: e00315aa  mov x0, x21
0x04535B3C: e10313aa  mov x1, x19
0x04535B40: e2031faa  mov x2, xzr
0x04535B44: a82600b9  str w8, [x21, #0x24]
0x04535B48: 77308f94  bl #0x6901d24
0x04535B4C: e80315aa  mov x8, x21
0x04535B50: 140d04f8  str x20, [x8, #0x40]!
0x04535B54: 00811eb8  stur w0, [x8, #-0x18]
0x04535B58: e00308aa  mov x0, x8
0x04535B5C: e10314aa  mov x1, x20
0x04535B60: 992bb197  bl #0x31809c4
0x04535B64: b60200b4  cbz x22, #0x4535bb8
0x04535B68: c00a40f9  ldr x0, [x22, #0x10]
0x04535B6C: 600200b4  cbz x0, #0x4535bb8
0x04535B70: 080040f9  ldr x8, [x0]
0x04535B74: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x04535B78: 20013fd6  blr x9
0x04535B7C: e10300aa  mov x1, x0
0x04535B80: e00315aa  mov x0, x21
0x04535B84: 018c04f8  str x1, [x0, #0x48]!
0x04535B88: 8f2bb197  bl #0x31809c4
0x04535B8C: e00315aa  mov x0, x21
0x04535B90: e10314aa  mov x1, x20
0x04535B94: e20313aa  mov x2, x19
0x04535B98: e3031faa  mov x3, xzr
0x04535B9C: d62f8f94  bl #0x6901af4
0x04535BA0: a02a00f9  str x0, [x21, #0x50]
0x04535BA4: e00315aa  mov x0, x21
0x04535BA8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04535BAC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04535BB0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04535BB4: c0035fd6  ret
0x04535BB8: 3d2cb197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4535BBC | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$SetRemoteItemSpawningTrackingData
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___SetRemoteItemSpawningTrackingData (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, System_String_o* stackId, int32_t bet, bool isFromRemoteQueue, System_String_o* pushedItemSource, const MethodInfo_4535BBC* method);
; bytes=264 sha256=a649f39dde90fb2f147aff3e3a93eb79afbd1dd95f6774348b27950be88765a5 status=arm64_complete_bound indexed_start=True
0x04535BBC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x04535BC0: f85f01a9  stp x24, x23, [sp, #0x10]
0x04535BC4: f65702a9  stp x22, x21, [sp, #0x20]
0x04535BC8: f44f03a9  stp x20, x19, [sp, #0x30]
0x04535BCC: 36bf0190  adrp x22, #0x7d19000
0x04535BD0: c8de4439  ldrb w8, [x22, #0x137]
0x04535BD4: f40304aa  mov x20, x4
0x04535BD8: f503032a  mov w21, w3
0x04535BDC: f30301aa  mov x19, x1
0x04535BE0: f80300aa  mov x24, x0
0x04535BE4: 88010037  tbnz w8, #0, #0x4535c14
0x04535BE8: 408a01b0  adrp x0, #0x767e000
0x04535BEC: 00c842f9  ldr x0, [x0, #0x590]
0x04535BF0: 8a2bb197  bl #0x3180a18
0x04535BF4: 408a01b0  adrp x0, #0x767e000
0x04535BF8: 00cc42f9  ldr x0, [x0, #0x598]
0x04535BFC: 872bb197  bl #0x3180a18
0x04535C00: 208a01b0  adrp x0, #0x767a000
0x04535C04: 009c45f9  ldr x0, [x0, #0xb38]
0x04535C08: 842bb197  bl #0x3180a18
0x04535C0C: 28008052  movz w8, #0x1
0x04535C10: c8de0439  strb w8, [x22, #0x137]
0x04535C14: 083740f9  ldr x8, [x24, #0x68]
0x04535C18: 480500b4  cbz x8, #0x4535cc0
0x04535C1C: 498a01b0  adrp x9, #0x767e000
0x04535C20: 29c942f9  ldr x9, [x9, #0x590]
0x04535C24: 161940f9  ldr x22, [x8, #0x30]
0x04535C28: 200140f9  ldr x0, [x9]
0x04535C2C: 1d2cb197  bl #0x3180ca0
0x04535C30: e1031faa  mov x1, xzr
0x04535C34: f70300aa  mov x23, x0
0x04535C38: d9308f94  bl #0x6901f9c
0x04535C3C: e00318aa  mov x0, x24
0x04535C40: 23f4ff97  bl #0x4532ccc
0x04535C44: f70300b4  cbz x23, #0x4535cc0
0x04535C48: 388a01b0  adrp x24, #0x767a000
0x04535C4C: 598a01b0  adrp x25, #0x767e000
0x04535C50: 189f45f9  ldr x24, [x24, #0xb38]
0x04535C54: 39cf42f9  ldr x25, [x25, #0x598]
0x04535C58: 08000012  and w8, w0, #1
0x04535C5C: e00314aa  mov x0, x20
0x04535C60: e1031faa  mov x1, xzr
0x04535C64: e8820039  strb w8, [x23, #0x20]
0x04535C68: 91073f94  bl #0x54f7aac
0x04535C6C: bf020072  tst w21, #1
0x04535C70: 0813999a  csel x8, x24, x25, ne
0x04535C74: 080140f9  ldr x8, [x8]
0x04535C78: 1f000072  tst w0, #1
0x04535C7C: e00317aa  mov x0, x23
0x04535C80: 0111949a  csel x1, x8, x20, ne
0x04535C84: 018c01f8  str x1, [x0, #0x18]!
0x04535C88: 4f2bb197  bl #0x31809c4
0x04535C8C: e00317aa  mov x0, x23
0x04535C90: 130c01f8  str x19, [x0, #0x10]!
0x04535C94: e10313aa  mov x1, x19
0x04535C98: 4b2bb197  bl #0x31809c4
0x04535C9C: 360100b4  cbz x22, #0x4535cc0
0x04535CA0: d78e01f8  str x23, [x22, #0x18]!
0x04535CA4: e00316aa  mov x0, x22
0x04535CA8: e10317aa  mov x1, x23
0x04535CAC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04535CB0: f65742a9  ldp x22, x21, [sp, #0x20]
0x04535CB4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04535CB8: fe67c4a8  ldp x30, x25, [sp], #0x40
0x04535CBC: 422bb117  b #0x31809c4
0x04535CC0: fb2bb197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4535CC4 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$SpawnItemAt
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___SpawnItemAt (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_Configuration_Definitions_ItemSpawnable_o* item, MergeEngine_Data_BoardItemPosition_o position, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, MergeEngine_ECS_Components_Items_InteractionComponent_o* interactionComponent, OperationContext_o* operationContext, Framework_Core_Services_Backend_Data_Payload_ExtraData_o* extraData, bool isExcitementItem, const MethodInfo_4535CC4* method);
; bytes=2232 sha256=d24585fb783cd8248f65ca6d7f5742634c9443fb696d4eed00147aad8aec7203 status=arm64_complete_bound indexed_start=True
0x04535CC4: ff8302d1  sub sp, sp, #0xa0
0x04535CC8: fd7b04a9  stp x29, x30, [sp, #0x40]
0x04535CCC: fc6f05a9  stp x28, x27, [sp, #0x50]
0x04535CD0: fa6706a9  stp x26, x25, [sp, #0x60]
0x04535CD4: f85f07a9  stp x24, x23, [sp, #0x70]
0x04535CD8: f65708a9  stp x22, x21, [sp, #0x80]
0x04535CDC: f44f09a9  stp x20, x19, [sp, #0x90]
0x04535CE0: 33bf0190  adrp x19, #0x7d19000
0x04535CE4: 68e24439  ldrb w8, [x19, #0x138]
0x04535CE8: fb03072a  mov w27, w7
0x04535CEC: fd0306aa  mov x29, x6
0x04535CF0: f70305aa  mov x23, x5
0x04535CF4: f40304aa  mov x20, x4
0x04535CF8: f80303aa  mov x24, x3
0x04535CFC: f90302aa  mov x25, x2
0x04535D00: fc0301aa  mov x28, x1
0x04535D04: f50300aa  mov x21, x0
0x04535D08: e21f00f9  str x2, [sp, #0x38]
0x04535D0C: a8080037  tbnz w8, #0, #0x4535e20
0x04535D10: 208a01f0  adrp x0, #0x767c000
0x04535D14: 004441f9  ldr x0, [x0, #0x288]
0x04535D18: 402bb197  bl #0x3180a18
0x04535D1C: 208a01b0  adrp x0, #0x767a000
0x04535D20: 009044f9  ldr x0, [x0, #0x920]
0x04535D24: 3d2bb197  bl #0x3180a18
0x04535D28: 208a01b0  adrp x0, #0x767a000
0x04535D2C: 00ac44f9  ldr x0, [x0, #0x958]
0x04535D30: 3a2bb197  bl #0x3180a18
0x04535D34: 408a01b0  adrp x0, #0x767e000
0x04535D38: 00d042f9  ldr x0, [x0, #0x5a0]
0x04535D3C: 372bb197  bl #0x3180a18
0x04535D40: 208a01b0  adrp x0, #0x767a000
0x04535D44: 004c45f9  ldr x0, [x0, #0xa98]
0x04535D48: 342bb197  bl #0x3180a18
0x04535D4C: 408a01b0  adrp x0, #0x767e000
0x04535D50: 00d442f9  ldr x0, [x0, #0x5a8]
0x04535D54: 312bb197  bl #0x3180a18
0x04535D58: 408a01b0  adrp x0, #0x767e000
0x04535D5C: 00d842f9  ldr x0, [x0, #0x5b0]
0x04535D60: 2e2bb197  bl #0x3180a18
0x04535D64: 408a01b0  adrp x0, #0x767e000
0x04535D68: 00dc42f9  ldr x0, [x0, #0x5b8]
0x04535D6C: 2b2bb197  bl #0x3180a18
0x04535D70: 408a01b0  adrp x0, #0x767e000
0x04535D74: 00e042f9  ldr x0, [x0, #0x5c0]
0x04535D78: 282bb197  bl #0x3180a18
0x04535D7C: 208a01b0  adrp x0, #0x767a000
0x04535D80: 004c42f9  ldr x0, [x0, #0x498]
0x04535D84: 252bb197  bl #0x3180a18
0x04535D88: 408a01b0  adrp x0, #0x767e000
0x04535D8C: 005042f9  ldr x0, [x0, #0x4a0]
0x04535D90: 222bb197  bl #0x3180a18
0x04535D94: 408a01b0  adrp x0, #0x767e000
0x04535D98: 005442f9  ldr x0, [x0, #0x4a8]
0x04535D9C: 1f2bb197  bl #0x3180a18
0x04535DA0: 408a01b0  adrp x0, #0x767e000
0x04535DA4: 00e442f9  ldr x0, [x0, #0x5c8]
0x04535DA8: 1c2bb197  bl #0x3180a18
0x04535DAC: 408a01b0  adrp x0, #0x767e000
0x04535DB0: 00e842f9  ldr x0, [x0, #0x5d0]
0x04535DB4: 192bb197  bl #0x3180a18
0x04535DB8: 208a01f0  adrp x0, #0x767c000
0x04535DBC: 004841f9  ldr x0, [x0, #0x290]
0x04535DC0: 162bb197  bl #0x3180a18
0x04535DC4: 408a01b0  adrp x0, #0x767e000
0x04535DC8: 00ec42f9  ldr x0, [x0, #0x5d8]
0x04535DCC: 132bb197  bl #0x3180a18
0x04535DD0: 408a01b0  adrp x0, #0x767e000
0x04535DD4: 00f042f9  ldr x0, [x0, #0x5e0]
0x04535DD8: 102bb197  bl #0x3180a18
0x04535DDC: 408a01b0  adrp x0, #0x767e000
0x04535DE0: 00f442f9  ldr x0, [x0, #0x5e8]
0x04535DE4: 0d2bb197  bl #0x3180a18
0x04535DE8: 408a01b0  adrp x0, #0x767e000
0x04535DEC: 00f842f9  ldr x0, [x0, #0x5f0]
0x04535DF0: 0a2bb197  bl #0x3180a18
0x04535DF4: 408a01b0  adrp x0, #0x767e000
0x04535DF8: 00a842f9  ldr x0, [x0, #0x550]
0x04535DFC: 072bb197  bl #0x3180a18
0x04535E00: 408a01b0  adrp x0, #0x767e000
0x04535E04: 00fc42f9  ldr x0, [x0, #0x5f8]
0x04535E08: 042bb197  bl #0x3180a18
0x04535E0C: 408a01b0  adrp x0, #0x767e000
0x04535E10: 000043f9  ldr x0, [x0, #0x600]
0x04535E14: 012bb197  bl #0x3180a18
0x04535E18: 28008052  movz w8, #0x1
0x04535E1C: 68e20439  strb w8, [x19, #0x138]
0x04535E20: dc3a00b4  cbz x28, #0x4536578
0x04535E24: 568a01b0  adrp x22, #0x767e000
0x04535E28: 89834039  ldrb w9, [x28, #0x20]
0x04535E2C: 88874039  ldrb w8, [x28, #0x21]
0x04535E30: d6ea42f9  ldr x22, [x22, #0x5d0]
0x04535E34: f40f00f9  str x20, [sp, #0x18]
0x04535E38: 69000035  cbnz w9, #0x4535e44
0x04535E3C: 08330034  cbz w8, #0x453649c
0x04535E40: 28008052  movz w8, #0x1
0x04535E44: 4a8a01b0  adrp x10, #0x767e000
0x04535E48: 4ae542f9  ldr x10, [x10, #0x5c8]
0x04535E4C: 3f010071  cmp w9, #0
0x04535E50: f3079f1a  cset w19, ne
0x04535E54: 1f010071  cmp w8, #0
0x04535E58: 400140f9  ldr x0, [x10]
0x04535E5C: f4079f1a  cset w20, ne
0x04535E60: 902bb197  bl #0x3180ca0
0x04535E64: 27008052  movz w7, #0x1
0x04535E68: e103132a  mov w1, w19
0x04535E6C: e2031f2a  mov w2, wzr
0x04535E70: e3031f2a  mov w3, wzr
0x04535E74: e403142a  mov w4, w20
0x04535E78: e5031f2a  mov w5, wzr
0x04535E7C: e6031f2a  mov w6, wzr
0x04535E80: fa0300aa  mov x26, x0
0x04535E84: ff0300f9  str xzr, [sp]
0x04535E88: 516e6b94  bl #0x60117cc
0x04535E8C: a80240f9  ldr x8, [x21]
0x04535E90: e00315aa  mov x0, x21
0x04535E94: 093541f9  ldr x9, [x8, #0x268]
0x04535E98: 013941f9  ldr x1, [x8, #0x270]
0x04535E9C: 20013fd6  blr x9
0x04535EA0: c20240f9  ldr x2, [x22]
0x04535EA4: e103002a  mov w1, w0
0x04535EA8: e0c30091  add x0, sp, #0x30
0x04535EAC: ff1b00f9  str xzr, [sp, #0x30]
0x04535EB0: fb16f597  bl #0x427ba9c
0x04535EB4: e11b40f9  ldr x1, [sp, #0x30]
0x04535EB8: e00319aa  mov x0, x25
0x04535EBC: e2031aaa  mov x2, x26
0x04535EC0: e3031faa  mov x3, xzr
0x04535EC4: e4031faa  mov x4, xzr
0x04535EC8: 40778f94  bl #0x6913bc8
0x04535ECC: 880b40f9  ldr x8, [x28, #0x10]
0x04535ED0: fc1300f9  str x28, [sp, #0x20]
0x04535ED4: 283500b4  cbz x8, #0x4536578
0x04535ED8: 090140f9  ldr x9, [x8]
0x04535EDC: ba0e40f9  ldr x26, [x21, #0x18]
0x04535EE0: f90300aa  mov x25, x0
0x04535EE4: e00308aa  mov x0, x8
0x04535EE8: 2a855ea9  ldp x10, x1, [x9, #0x1e8]
0x04535EEC: 40013fd6  blr x10
0x04535EF0: 5a3400b4  cbz x26, #0x4536578
0x04535EF4: 4a8a01b0  adrp x10, #0x767e000
0x04535EF8: 480340f9  ldr x8, [x26]
0x04535EFC: 4add42f9  ldr x10, [x10, #0x5b8]
0x04535F00: fc0300aa  mov x28, x0
0x04535F04: 095d4279  ldrh w9, [x8, #0x12e]
0x04535F08: 410140f9  ldr x1, [x10]
0x04535F0C: 290100b4  cbz x9, #0x4535f30
0x04535F10: 0a5940f9  ldr x10, [x8, #0xb0]
0x04535F14: 4a210091  add x10, x10, #8
0x04535F18: 4b815ff8  ldur x11, [x10, #-8]
0x04535F1C: 7f0101eb  cmp x11, x1
0x04535F20: 00010054  b.eq #0x4535f40
0x04535F24: 290500f1  subs x9, x9, #1
0x04535F28: 4a410091  add x10, x10, #0x10
0x04535F2C: 61ffff54  b.ne #0x4535f18
0x04535F30: e0031aaa  mov x0, x26
0x04535F34: e2031f2a  mov w2, wzr
0x04535F38: f682b097  bl #0x3156b10
0x04535F3C: 04000014  b #0x4535f4c
0x04535F40: 490180b9  ldrsw x9, [x10]
0x04535F44: 0811098b  add x8, x8, x9, lsl #4
0x04535F48: 00e10491  add x0, x8, #0x138
0x04535F4C: 080c40a9  ldp x8, x3, [x0]
0x04535F50: e0031aaa  mov x0, x26
0x04535F54: e1031caa  mov x1, x28
0x04535F58: e20319aa  mov x2, x25
0x04535F5C: 00013fd6  blr x8
0x04535F60: c03000b4  cbz x0, #0x4536578
0x04535F64: 488a01b0  adrp x8, #0x767e000
0x04535F68: 08d142f9  ldr x8, [x8, #0x5a0]
0x04535F6C: fc0300aa  mov x28, x0
0x04535F70: 010140f9  ldr x1, [x8]
0x04535F74: 84abdb97  bl #0x3c20d84
0x04535F78: 003000b4  cbz x0, #0x4536578
0x04535F7C: 288a01b0  adrp x8, #0x767a000
0x04535F80: 08ad44f9  ldr x8, [x8, #0x958]
0x04535F84: 29008052  movz w9, #0x1
0x04535F88: 6a030012  and w10, w27, #1
0x04535F8C: 09b40139  strb w9, [x0, #0x6d]
0x04535F90: 0a4c0539  strb w10, [x0, #0x153]
0x04535F94: 010140f9  ldr x1, [x8]
0x04535F98: f90300aa  mov x25, x0
0x04535F9C: e0031caa  mov x0, x28
0x04535FA0: 79abdb97  bl #0x3c20d84
0x04535FA4: c00200b4  cbz x0, #0x4535ffc
0x04535FA8: f30300aa  mov x19, x0
0x04535FAC: 608e44f8  ldr x0, [x19, #0x48]!
0x04535FB0: c00100b5  cbnz x0, #0x4535fe8
0x04535FB4: 488a01b0  adrp x8, #0x767e000
0x04535FB8: 08f942f9  ldr x8, [x8, #0x5f0]
0x04535FBC: 000140f9  ldr x0, [x8]
0x04535FC0: 382bb197  bl #0x3180ca0
0x04535FC4: e1031faa  mov x1, xzr
0x04535FC8: f40300aa  mov x20, x0
0x04535FCC: 46208f94  bl #0x68fe0e4
0x04535FD0: e00313aa  mov x0, x19
0x04535FD4: e10314aa  mov x1, x20
0x04535FD8: 740200f9  str x20, [x19]
0x04535FDC: 7a2ab197  bl #0x31809c4
0x04535FE0: 600240f9  ldr x0, [x19]
0x04535FE4: a02c00b4  cbz x0, #0x4536578
0x04535FE8: 488a01b0  adrp x8, #0x767e000
0x04535FEC: 080143f9  ldr x8, [x8, #0x600]
0x04535FF0: 010140f9  ldr x1, [x8]
0x04535FF4: 018c02f8  str x1, [x0, #0x28]!
0x04535FF8: 732ab197  bl #0x31809c4
0x04535FFC: f82b00b4  cbz x24, #0x4536578
0x04536000: 498a0190  adrp x9, #0x767e000
0x04536004: 29d542f9  ldr x9, [x9, #0x5a8]
0x04536008: 080340f9  ldr x8, [x24]
0x0453600C: 338a0190  adrp x19, #0x767a000
0x04536010: 3b0140f9  ldr x27, [x9]
0x04536014: 095d4279  ldrh w9, [x8, #0x12e]
0x04536018: 611340f9  ldr x1, [x27, #0x20]
0x0453601C: 62a34079  ldrh w2, [x27, #0x50]
0x04536020: 739244f9  ldr x19, [x19, #0x920]
0x04536024: 290100b4  cbz x9, #0x4536048
0x04536028: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453602C: 4a210091  add x10, x10, #8
0x04536030: 4b815ff8  ldur x11, [x10, #-8]
0x04536034: 7f0101eb  cmp x11, x1
0x04536038: e0000054  b.eq #0x4536054
0x0453603C: 290500f1  subs x9, x9, #1
0x04536040: 4a410091  add x10, x10, #0x10
0x04536044: 61ffff54  b.ne #0x4536030
0x04536048: e00318aa  mov x0, x24
0x0453604C: b182b097  bl #0x3156b10
0x04536050: 05000014  b #0x4536064
0x04536054: 490140b9  ldr w9, [x10]
0x04536058: 2901020b  add w9, w9, w2
0x0453605C: 08d1298b  add x8, x8, w9, sxtw #4
0x04536060: 00e10491  add x0, x8, #0x138
0x04536064: 000440f9  ldr x0, [x0, #8]
0x04536068: e1031baa  mov x1, x27
0x0453606C: fa031daa  mov x26, x29
0x04536070: c62ab197  bl #0x3180b88
0x04536074: 080440f9  ldr x8, [x0, #8]
0x04536078: e10300aa  mov x1, x0
0x0453607C: e00318aa  mov x0, x24
0x04536080: 00013fd6  blr x8
0x04536084: 610240f9  ldr x1, [x19]
0x04536088: f40300aa  mov x20, x0
0x0453608C: e0031caa  mov x0, x28
0x04536090: fc1700f9  str x28, [sp, #0x28]
0x04536094: 3cabdb97  bl #0x3c20d84
0x04536098: bb1640f9  ldr x27, [x21, #0x28]
0x0453609C: f30300aa  mov x19, x0
0x045360A0: f40000b4  cbz x20, #0x45360bc
0x045360A4: 9c1a40f9  ldr x28, [x20, #0x30]
0x045360A8: e00314aa  mov x0, x20
0x045360AC: e1031faa  mov x1, xzr
0x045360B0: f1188f94  bl #0x68fc474
0x045360B4: fd0300aa  mov x29, x0
0x045360B8: 03000014  b #0x45360c4
0x045360BC: fc031faa  mov x28, xzr
0x045360C0: fd031faa  mov x29, xzr
0x045360C4: f70b00f9  str x23, [sp, #0x10]
0x045360C8: 548a0190  adrp x20, #0x767e000
0x045360CC: 94f642f9  ldr x20, [x20, #0x5e8]
0x045360D0: f30000b4  cbz x19, #0x45360ec
0x045360D4: 771a40f9  ldr x23, [x19, #0x30]
0x045360D8: e00313aa  mov x0, x19
0x045360DC: e1031faa  mov x1, xzr
0x045360E0: e5188f94  bl #0x68fc474
0x045360E4: f30300aa  mov x19, x0
0x045360E8: 02000014  b #0x45360f0
0x045360EC: f7031faa  mov x23, xzr
0x045360F0: e0e30091  add x0, sp, #0x38
0x045360F4: e1031faa  mov x1, xzr
0x045360F8: ba3b8f94  bl #0x6904fe0
0x045360FC: 880240f9  ldr x8, [x20]
0x04536100: f60300aa  mov x22, x0
0x04536104: e00308aa  mov x0, x8
0x04536108: e62ab197  bl #0x3180ca0
0x0453610C: e1031caa  mov x1, x28
0x04536110: e2031daa  mov x2, x29
0x04536114: e30317aa  mov x3, x23
0x04536118: e40313aa  mov x4, x19
0x0453611C: e50316aa  mov x5, x22
0x04536120: e6031faa  mov x6, xzr
0x04536124: f40300aa  mov x20, x0
0x04536128: f4f66a94  bl #0x5ff3cf8
0x0453612C: 7b2200b4  cbz x27, #0x4536578
0x04536130: 488a0190  adrp x8, #0x767e000
0x04536134: 08f142f9  ldr x8, [x8, #0x5e0]
0x04536138: e0031baa  mov x0, x27
0x0453613C: e10314aa  mov x1, x20
0x04536140: 020140f9  ldr x2, [x8]
0x04536144: 0abbe197  bl #0x3da4d6c
0x04536148: bb0a40f9  ldr x27, [x21, #0x10]
0x0453614C: 7b2100b4  cbz x27, #0x4536578
0x04536150: 4a8a0190  adrp x10, #0x767e000
0x04536154: 680340f9  ldr x8, [x27]
0x04536158: 4ae142f9  ldr x10, [x10, #0x5c0]
0x0453615C: 538a0190  adrp x19, #0x767e000
0x04536160: fc031aaa  mov x28, x26
0x04536164: 095d4279  ldrh w9, [x8, #0x12e]
0x04536168: 410140f9  ldr x1, [x10]
0x0453616C: 73da42f9  ldr x19, [x19, #0x5b0]
0x04536170: f40f40f9  ldr x20, [sp, #0x18]
0x04536174: 290100b4  cbz x9, #0x4536198
0x04536178: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453617C: 4a210091  add x10, x10, #8
0x04536180: 4b815ff8  ldur x11, [x10, #-8]
0x04536184: 7f0101eb  cmp x11, x1
0x04536188: 00010054  b.eq #0x45361a8
0x0453618C: 290500f1  subs x9, x9, #1
0x04536190: 4a410091  add x10, x10, #0x10
0x04536194: 61ffff54  b.ne #0x4536180
0x04536198: a2008052  movz w2, #0x5
0x0453619C: e0031baa  mov x0, x27
0x045361A0: 5c82b097  bl #0x3156b10
0x045361A4: 05000014  b #0x45361b8
0x045361A8: 490140b9  ldr w9, [x10]
0x045361AC: 29150011  add w9, w9, #5
0x045361B0: 08d1298b  add x8, x8, w9, sxtw #4
0x045361B4: 00e10491  add x0, x8, #0x138
0x045361B8: 080840a9  ldp x8, x2, [x0]
0x045361BC: e11740f9  ldr x1, [sp, #0x28]
0x045361C0: e0031baa  mov x0, x27
0x045361C4: 00013fd6  blr x8
0x045361C8: 7b0240f9  ldr x27, [x19]
0x045361CC: 080340f9  ldr x8, [x24]
0x045361D0: 611340f9  ldr x1, [x27, #0x20]
0x045361D4: 095d4279  ldrh w9, [x8, #0x12e]
0x045361D8: 62a34079  ldrh w2, [x27, #0x50]
0x045361DC: 290100b4  cbz x9, #0x4536200
0x045361E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x045361E4: 4a210091  add x10, x10, #8
0x045361E8: 4b815ff8  ldur x11, [x10, #-8]
0x045361EC: 7f0101eb  cmp x11, x1
0x045361F0: e0000054  b.eq #0x453620c
0x045361F4: 290500f1  subs x9, x9, #1
0x045361F8: 4a410091  add x10, x10, #0x10
0x045361FC: 61ffff54  b.ne #0x45361e8
0x04536200: e00318aa  mov x0, x24
0x04536204: 4382b097  bl #0x3156b10
0x04536208: 05000014  b #0x453621c
0x0453620C: 490140b9  ldr w9, [x10]
0x04536210: 2901020b  add w9, w9, w2
0x04536214: 08d1298b  add x8, x8, w9, sxtw #4
0x04536218: 00e10491  add x0, x8, #0x138
0x0453621C: 000440f9  ldr x0, [x0, #8]
0x04536220: e1031baa  mov x1, x27
0x04536224: 592ab197  bl #0x3180b88
0x04536228: 080440f9  ldr x8, [x0, #8]
0x0453622C: e10300aa  mov x1, x0
0x04536230: e00318aa  mov x0, x24
0x04536234: 00013fd6  blr x8
0x04536238: 001a00b4  cbz x0, #0x4536578
0x0453623C: a84a40f9  ldr x8, [x21, #0x90]
0x04536240: e11f40f9  ldr x1, [sp, #0x38]
0x04536244: 021840f9  ldr x2, [x0, #0x30]
0x04536248: e30314aa  mov x3, x20
0x0453624C: e00308aa  mov x0, x8
0x04536250: e4031faa  mov x4, xzr
0x04536254: 3ee57494  bl #0x626f74c
0x04536258: a01640f9  ldr x0, [x21, #0x28]
0x0453625C: e01800b4  cbz x0, #0x4536578
0x04536260: 488a0190  adrp x8, #0x767e000
0x04536264: 08ed42f9  ldr x8, [x8, #0x5d8]
0x04536268: 010140f9  ldr x1, [x8]
0x0453626C: a1bae197  bl #0x3da4cf0
0x04536270: e91340f9  ldr x9, [sp, #0x20]
0x04536274: 28894039  ldrb w8, [x9, #0x22]
0x04536278: 48010034  cbz w8, #0x45362a0
0x0453627C: e85340f9  ldr x8, [sp, #0xa0]
0x04536280: e11f40f9  ldr x1, [sp, #0x38]
0x04536284: e00315aa  mov x0, x21
0x04536288: e20319aa  mov x2, x25
0x0453628C: 081140f9  ldr x8, [x8, #0x20]
0x04536290: 086140f9  ldr x8, [x8, #0xc0]
0x04536294: 034940f9  ldr x3, [x8, #0x90]
0x04536298: b9000094  bl #0x453657c
0x0453629C: 2c000014  b #0x453634c
0x045362A0: 488a0190  adrp x8, #0x767e000
0x045362A4: 08a942f9  ldr x8, [x8, #0x550]
0x045362A8: 290140f9  ldr x9, [x9]
0x045362AC: 080140f9  ldr x8, [x8]
0x045362B0: 2bc14439  ldrb w11, [x9, #0x130]
0x045362B4: 0ac14439  ldrb w10, [x8, #0x130]
0x045362B8: 7f010a6b  cmp w11, w10
0x045362BC: 83040054  b.lo #0x453634c
0x045362C0: 296540f9  ldr x9, [x9, #0xc8]
0x045362C4: 290d0a8b  add x9, x9, x10, lsl #3
0x045362C8: 29815ff8  ldur x9, [x9, #-8]
0x045362CC: 3f0108eb  cmp x9, x8
0x045362D0: e1030054  b.ne #0x453634c
0x045362D4: e81340f9  ldr x8, [sp, #0x20]
0x045362D8: 09a14039  ldrb w9, [x8, #0x28]
0x045362DC: 08a54039  ldrb w8, [x8, #0x29]
0x045362E0: 69000035  cbnz w9, #0x45362ec
0x045362E4: 48030034  cbz w8, #0x453634c
0x045362E8: 28008052  movz w8, #0x1
0x045362EC: 298a01d0  adrp x9, #0x767c000
0x045362F0: b61640f9  ldr x22, [x21, #0x28]
0x045362F4: f41f40f9  ldr x20, [sp, #0x38]
0x045362F8: 294541f9  ldr x9, [x9, #0x288]
0x045362FC: 1f010071  cmp w8, #0
0x04536300: e8008052  movz w8, #0x7
0x04536304: 1705881a  cinc w23, w8, ne
0x04536308: 200140f9  ldr x0, [x9]
0x0453630C: 652ab197  bl #0x3180ca0
0x04536310: e10314aa  mov x1, x20
0x04536314: e203172a  mov w2, w23
0x04536318: e3031faa  mov x3, xzr
0x0453631C: e4031f2a  mov w4, wzr
0x04536320: e5031f2a  mov w5, wzr
0x04536324: e6031faa  mov x6, xzr
0x04536328: f30300aa  mov x19, x0
0x0453632C: bfd18894  bl #0x676aa28
0x04536330: 561200b4  cbz x22, #0x4536578
0x04536334: 288a01d0  adrp x8, #0x767c000
0x04536338: 084941f9  ldr x8, [x8, #0x290]
0x0453633C: e00316aa  mov x0, x22
0x04536340: e10313aa  mov x1, x19
0x04536344: 020140f9  ldr x2, [x8]
0x04536348: 89bae197  bl #0x3da4d6c
0x0453634C: b62640f9  ldr x22, [x21, #0x48]
0x04536350: 561100b4  cbz x22, #0x4536578
0x04536354: 2a8a0190  adrp x10, #0x767a000
0x04536358: c80240f9  ldr x8, [x22]
0x0453635C: 4a4d42f9  ldr x10, [x10, #0x498]
0x04536360: 095d4279  ldrh w9, [x8, #0x12e]
0x04536364: 410140f9  ldr x1, [x10]
0x04536368: 290100b4  cbz x9, #0x453638c
0x0453636C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536370: 4a210091  add x10, x10, #8
0x04536374: 4b815ff8  ldur x11, [x10, #-8]
0x04536378: 7f0101eb  cmp x11, x1
0x0453637C: 00010054  b.eq #0x453639c
0x04536380: 290500f1  subs x9, x9, #1
0x04536384: 4a410091  add x10, x10, #0x10
0x04536388: 61ffff54  b.ne #0x4536374
0x0453638C: 82028052  movz w2, #0x14
0x04536390: e00316aa  mov x0, x22
0x04536394: df81b097  bl #0x3156b10
0x04536398: 05000014  b #0x45363ac
0x0453639C: 490140b9  ldr w9, [x10]
0x045363A0: 29510011  add w9, w9, #0x14
0x045363A4: 08d1298b  add x8, x8, w9, sxtw #4
0x045363A8: 00e10491  add x0, x8, #0x138
0x045363AC: 080840a9  ldp x8, x2, [x0]
0x045363B0: e00316aa  mov x0, x22
0x045363B4: e10319aa  mov x1, x25
0x045363B8: 00013fd6  blr x8
0x045363BC: b62a40f9  ldr x22, [x21, #0x50]
0x045363C0: d60d00b4  cbz x22, #0x4536578
0x045363C4: 498a0190  adrp x9, #0x767e000
0x045363C8: 4a8a0190  adrp x10, #0x767e000
0x045363CC: c80240f9  ldr x8, [x22]
0x045363D0: 295142f9  ldr x9, [x9, #0x4a0]
0x045363D4: 4afd42f9  ldr x10, [x10, #0x5f8]
0x045363D8: f50300aa  mov x21, x0
0x045363DC: 210140f9  ldr x1, [x9]
0x045363E0: 095d4279  ldrh w9, [x8, #0x12e]
0x045363E4: 570140f9  ldr x23, [x10]
0x045363E8: 290100b4  cbz x9, #0x453640c
0x045363EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x045363F0: 4a210091  add x10, x10, #8
0x045363F4: 4b815ff8  ldur x11, [x10, #-8]
0x045363F8: 7f0101eb  cmp x11, x1
0x045363FC: 00010054  b.eq #0x453641c
0x04536400: 290500f1  subs x9, x9, #1
0x04536404: 4a410091  add x10, x10, #0x10
0x04536408: 61ffff54  b.ne #0x45363f4
0x0453640C: e00316aa  mov x0, x22
0x04536410: e2031f2a  mov w2, wzr
0x04536414: bf81b097  bl #0x3156b10
0x04536418: 04000014  b #0x4536428
0x0453641C: 490180b9  ldrsw x9, [x10]
0x04536420: 0811098b  add x8, x8, x9, lsl #4
0x04536424: 00e10491  add x0, x8, #0x138
0x04536428: 081440a9  ldp x8, x5, [x0]
0x0453642C: e31740f9  ldr x3, [sp, #0x28]
0x04536430: e00316aa  mov x0, x22
0x04536434: e10317aa  mov x1, x23
0x04536438: e20315aa  mov x2, x21
0x0453643C: e4031faa  mov x4, xzr
0x04536440: 00013fd6  blr x8
0x04536444: a00900b4  cbz x0, #0x4536578
0x04536448: f60300aa  mov x22, x0
0x0453644C: c80e42f8  ldr x8, [x22, #0x20]!
0x04536450: f70b40f9  ldr x23, [sp, #0x10]
0x04536454: f50300aa  mov x21, x0
0x04536458: 9c0000b4  cbz x28, #0x4536468
0x0453645C: c80000b4  cbz x8, #0x4536474
0x04536460: 131540f9  ldr x19, [x8, #0x28]
0x04536464: 05000014  b #0x4536478
0x04536468: e80100b4  cbz x8, #0x45364a4
0x0453646C: 141540f9  ldr x20, [x8, #0x28]
0x04536470: 0e000014  b #0x45364a8
0x04536474: f3031faa  mov x19, xzr
0x04536478: e00316aa  mov x0, x22
0x0453647C: e1031caa  mov x1, x28
0x04536480: dc0200f9  str x28, [x22]
0x04536484: 5029b197  bl #0x31809c4
0x04536488: c00240f9  ldr x0, [x22]
0x0453648C: 600700b4  cbz x0, #0x4536578
0x04536490: 138c02f8  str x19, [x0, #0x28]!
0x04536494: e10313aa  mov x1, x19
0x04536498: 13000014  b #0x45364e4
0x0453649C: fa031faa  mov x26, xzr
0x045364A0: 7bfeff17  b #0x4535e8c
0x045364A4: f4031faa  mov x20, xzr
0x045364A8: 288a0190  adrp x8, #0x767a000
0x045364AC: 084d45f9  ldr x8, [x8, #0xa98]
0x045364B0: 000140f9  ldr x0, [x8]
0x045364B4: fb29b197  bl #0x3180ca0
0x045364B8: e1031faa  mov x1, xzr
0x045364BC: f30300aa  mov x19, x0
0x045364C0: 4dea8f94  bl #0x6930df4
0x045364C4: e00316aa  mov x0, x22
0x045364C8: e10313aa  mov x1, x19
0x045364CC: d30200f9  str x19, [x22]
0x045364D0: 3d29b197  bl #0x31809c4
0x045364D4: c00240f9  ldr x0, [x22]
0x045364D8: 000500b4  cbz x0, #0x4536578
0x045364DC: 148c02f8  str x20, [x0, #0x28]!
0x045364E0: e10314aa  mov x1, x20
0x045364E4: 3829b197  bl #0x31809c4
0x045364E8: 970400b4  cbz x23, #0x4536578
0x045364EC: e00a40f9  ldr x0, [x23, #0x10]
0x045364F0: 400400b4  cbz x0, #0x4536578
0x045364F4: 498a0190  adrp x9, #0x767e000
0x045364F8: 295542f9  ldr x9, [x9, #0x4a8]
0x045364FC: 0a1c40b9  ldr w10, [x0, #0x1c]
0x04536500: 080840f9  ldr x8, [x0, #0x10]
0x04536504: 290140f9  ldr x9, [x9]
0x04536508: 4a050011  add w10, w10, #1
0x0453650C: 0a1c00b9  str w10, [x0, #0x1c]
0x04536510: 480300b4  cbz x8, #0x4536578
0x04536514: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04536518: 0b1940b9  ldr w11, [x8, #0x18]
0x0453651C: 5f010b6b  cmp w10, w11
0x04536520: 22010054  b.hs #0x4536544
0x04536524: 49050011  add w9, w10, #1
0x04536528: 080d0a8b  add x8, x8, x10, lsl #3
0x0453652C: 091800b9  str w9, [x0, #0x18]
0x04536530: 150d02f8  str x21, [x8, #0x20]!
0x04536534: e00308aa  mov x0, x8
0x04536538: e10315aa  mov x1, x21
0x0453653C: 2229b197  bl #0x31809c4
0x04536540: 06000014  b #0x4536558
0x04536544: 281140f9  ldr x8, [x9, #0x20]
0x04536548: e10315aa  mov x1, x21
0x0453654C: 086140f9  ldr x8, [x8, #0xc0]
0x04536550: 023940f9  ldr x2, [x8, #0x70]
0x04536554: c637ec97  bl #0x404446c
0x04536558: f44f49a9  ldp x20, x19, [sp, #0x90]
0x0453655C: f65748a9  ldp x22, x21, [sp, #0x80]
0x04536560: f85f47a9  ldp x24, x23, [sp, #0x70]
0x04536564: fa6746a9  ldp x26, x25, [sp, #0x60]
0x04536568: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x0453656C: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x04536570: ff830291  add sp, sp, #0xa0
0x04536574: c0035fd6  ret
0x04536578: cd29b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x453657C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$OnItemBoosted
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___OnItemBoosted (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_Data_BoardItemPosition_o position, MergeEngine_ECS_Components_Items_VisualComponent_o* visualComponent, const MethodInfo_453657C* method);
; bytes=440 sha256=2f99816d739f2d9aeecbc48a6f082b016a76199cd400c7080b2295ec7fd0c5fb status=arm64_complete_bound indexed_start=True
0x0453657C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04536580: f65701a9  stp x22, x21, [sp, #0x10]
0x04536584: f44f02a9  stp x20, x19, [sp, #0x20]
0x04536588: 14bf01f0  adrp x20, #0x7d19000
0x0453658C: 88e64439  ldrb w8, [x20, #0x139]
0x04536590: f30303aa  mov x19, x3
0x04536594: f60302aa  mov x22, x2
0x04536598: f70301aa  mov x23, x1
0x0453659C: f50300aa  mov x21, x0
0x045365A0: e8010037  tbnz w8, #0, #0x45365dc
0x045365A4: 208a01d0  adrp x0, #0x767c000
0x045365A8: 003c41f9  ldr x0, [x0, #0x278]
0x045365AC: 1b29b197  bl #0x3180a18
0x045365B0: c08901f0  adrp x0, #0x7671000
0x045365B4: 008443f9  ldr x0, [x0, #0x708]
0x045365B8: 1829b197  bl #0x3180a18
0x045365BC: 208a01f0  adrp x0, #0x767d000
0x045365C0: 002c45f9  ldr x0, [x0, #0xa58]
0x045365C4: 1529b197  bl #0x3180a18
0x045365C8: 408a0190  adrp x0, #0x767e000
0x045365CC: 000443f9  ldr x0, [x0, #0x608]
0x045365D0: 1229b197  bl #0x3180a18
0x045365D4: 28008052  movz w8, #0x1
0x045365D8: 88e60439  strb w8, [x20, #0x139]
0x045365DC: 681240f9  ldr x8, [x19, #0x20]
0x045365E0: 086140f9  ldr x8, [x8, #0xc0]
0x045365E4: 004d40f9  ldr x0, [x8, #0x98]
0x045365E8: 08d44439  ldrb w8, [x0, #0x135]
0x045365EC: 48000037  tbnz w8, #0, #0x45365f4
0x045365F0: 8b80b097  bl #0x315681c
0x045365F4: ab29b197  bl #0x3180ca0
0x045365F8: 681240f9  ldr x8, [x19, #0x20]
0x045365FC: f40300aa  mov x20, x0
0x04536600: 086140f9  ldr x8, [x8, #0xc0]
0x04536604: 015140f9  ldr x1, [x8, #0xa0]
0x04536608: 4f60e897  bl #0x3f4e744
0x0453660C: 340900b4  cbz x20, #0x4536730
0x04536610: e00314aa  mov x0, x20
0x04536614: 970a00f9  str x23, [x20, #0x10]
0x04536618: 158c01f8  str x21, [x0, #0x18]!
0x0453661C: e10315aa  mov x1, x21
0x04536620: e928b197  bl #0x31809c4
0x04536624: f70314aa  mov x23, x20
0x04536628: f60e02f8  str x22, [x23, #0x20]!
0x0453662C: e00317aa  mov x0, x23
0x04536630: e10316aa  mov x1, x22
0x04536634: e428b197  bl #0x31809c4
0x04536638: a03a40f9  ldr x0, [x21, #0x70]
0x0453663C: a00700b4  cbz x0, #0x4536730
0x04536640: e1031faa  mov x1, xzr
0x04536644: bcee7194  bl #0x61b2134
0x04536648: e80240f9  ldr x8, [x23]
0x0453664C: 280700b4  cbz x8, #0x4536730
0x04536650: f603002a  mov w22, w0
0x04536654: 09000012  and w9, w0, #1
0x04536658: 09bd0139  strb w9, [x8, #0x6f]
0x0453665C: c0020036  tbz w0, #0, #0x45366b4
0x04536660: 288a01d0  adrp x8, #0x767c000
0x04536664: b51640f9  ldr x21, [x21, #0x28]
0x04536668: 083d41f9  ldr x8, [x8, #0x278]
0x0453666C: 000140f9  ldr x0, [x8]
0x04536670: 8c29b197  bl #0x3180ca0
0x04536674: 681240f9  ldr x8, [x19, #0x20]
0x04536678: e10314aa  mov x1, x20
0x0453667C: e3031faa  mov x3, xzr
0x04536680: f70300aa  mov x23, x0
0x04536684: 086140f9  ldr x8, [x8, #0xc0]
0x04536688: 025540f9  ldr x2, [x8, #0xa8]
0x0453668C: d2ae3794  bl #0x53221d4
0x04536690: 150500b4  cbz x21, #0x4536730
0x04536694: 488a0190  adrp x8, #0x767e000
0x04536698: 080543f9  ldr x8, [x8, #0x608]
0x0453669C: e00315aa  mov x0, x21
0x045366A0: e10317aa  mov x1, x23
0x045366A4: 020140f9  ldr x2, [x8]
0x045366A8: 17bbe197  bl #0x3da5304
0x045366AC: 68038052  movz w8, #0x1b
0x045366B0: 02000014  b #0x45366b8
0x045366B4: 08028052  movz w8, #0x10
0x045366B8: c98901f0  adrp x9, #0x7671000
0x045366BC: 298543f9  ldr x9, [x9, #0x708]
0x045366C0: 882a00b9  str w8, [x20, #0x28]
0x045366C4: 358a01f0  adrp x21, #0x767d000
0x045366C8: 200140f9  ldr x0, [x9]
0x045366CC: b52e45f9  ldr x21, [x21, #0xa58]
0x045366D0: 7429b197  bl #0x3180ca0
0x045366D4: 681240f9  ldr x8, [x19, #0x20]
0x045366D8: e10314aa  mov x1, x20
0x045366DC: e3031faa  mov x3, xzr
0x045366E0: f30300aa  mov x19, x0
0x045366E4: 086140f9  ldr x8, [x8, #0xc0]
0x045366E8: 025940f9  ldr x2, [x8, #0xb0]
0x045366EC: 5ecf8d94  bl #0x68aa464
0x045366F0: a00240f9  ldr x0, [x21]
0x045366F4: 08e040b9  ldr w8, [x0, #0xe0]
0x045366F8: 48000035  cbnz w8, #0x4536700
0x045366FC: 2429b197  bl #0x3180b8c
0x04536700: 488cfe90  adrp x8, #0x16be000
0x04536704: 00a948bd  ldr s0, [x8, #0x8a8]
0x04536708: df020072  tst w22, #1
0x0453670C: e00313aa  mov x0, x19
0x04536710: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04536714: f65741a9  ldp x22, x21, [sp, #0x10]
0x04536718: e103271e  fmov s1, wzr
0x0453671C: 001c211e  fcsel s0, s0, s1, ne
0x04536720: 21008052  movz w1, #0x1
0x04536724: e2031faa  mov x2, xzr
0x04536728: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0453672C: 85cf8d14  b #0x68aa540
0x04536730: 5f29b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4536734 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$TryGetLowLevelProduceData
; native signature: bool MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___TryGetLowLevelProduceData (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceData_o** lowLevelData, const MethodInfo_4536734* method);
; bytes=548 sha256=91d630d7b36bd8921b2526a1ee2cf3329b278a2b6cfc4ad6175332db311dcc44 status=arm64_complete_bound indexed_start=True
0x04536734: ff8301d1  sub sp, sp, #0x60
0x04536738: fe1300f9  str x30, [sp, #0x20]
0x0453673C: f85f03a9  stp x24, x23, [sp, #0x30]
0x04536740: f65704a9  stp x22, x21, [sp, #0x40]
0x04536744: f44f05a9  stp x20, x19, [sp, #0x50]
0x04536748: 16bf01f0  adrp x22, #0x7d19000
0x0453674C: c8ea4439  ldrb w8, [x22, #0x13a]
0x04536750: f30302aa  mov x19, x2
0x04536754: f40301aa  mov x20, x1
0x04536758: f50300aa  mov x21, x0
0x0453675C: 48020037  tbnz w8, #0, #0x45367a4
0x04536760: 408a0190  adrp x0, #0x767e000
0x04536764: 000843f9  ldr x0, [x0, #0x610]
0x04536768: ac28b197  bl #0x3180a18
0x0453676C: 408a0190  adrp x0, #0x767e000
0x04536770: 000c43f9  ldr x0, [x0, #0x618]
0x04536774: a928b197  bl #0x3180a18
0x04536778: 408a0190  adrp x0, #0x767e000
0x0453677C: 001043f9  ldr x0, [x0, #0x620]
0x04536780: a628b197  bl #0x3180a18
0x04536784: 408a0190  adrp x0, #0x767e000
0x04536788: 001443f9  ldr x0, [x0, #0x628]
0x0453678C: a328b197  bl #0x3180a18
0x04536790: 408a0190  adrp x0, #0x767e000
0x04536794: 001843f9  ldr x0, [x0, #0x630]
0x04536798: a028b197  bl #0x3180a18
0x0453679C: 28008052  movz w8, #0x1
0x045367A0: c8ea0439  strb w8, [x22, #0x13a]
0x045367A4: e00313aa  mov x0, x19
0x045367A8: e1031faa  mov x1, xzr
0x045367AC: ffff00a9  stp xzr, xzr, [sp, #8]
0x045367B0: ff0f00f9  str xzr, [sp, #0x18]
0x045367B4: 7f0200f9  str xzr, [x19]
0x045367B8: 8328b197  bl #0x31809c4
0x045367BC: a03a40f9  ldr x0, [x21, #0x70]
0x045367C0: 600800b4  cbz x0, #0x45368cc
0x045367C4: e1031faa  mov x1, xzr
0x045367C8: 77ee7194  bl #0x61b21a4
0x045367CC: c0050036  tbz w0, #0, #0x4536884
0x045367D0: a04640f9  ldr x0, [x21, #0x88]
0x045367D4: c00700b4  cbz x0, #0x45368cc
0x045367D8: 488a0190  adrp x8, #0x767e000
0x045367DC: 081943f9  ldr x8, [x8, #0x630]
0x045367E0: 010140f9  ldr x1, [x8]
0x045367E4: e8230091  add x8, sp, #8
0x045367E8: 203aec97  bl #0x4045068
0x045367EC: 578a0190  adrp x23, #0x767e000
0x045367F0: 588a0190  adrp x24, #0x767e000
0x045367F4: f70e43f9  ldr x23, [x23, #0x618]
0x045367F8: 181743f9  ldr x24, [x24, #0x628]
0x045367FC: e10240f9  ldr x1, [x23]
0x04536800: e0230091  add x0, sp, #8
0x04536804: 6c7c2b94  bl #0x50159b4
0x04536808: f503002a  mov w21, w0
0x0453680C: 00040036  tbz w0, #0, #0x453688c
0x04536810: f60f40f9  ldr x22, [sp, #0x18]
0x04536814: b60500b4  cbz x22, #0x45368c8
0x04536818: c80240f9  ldr x8, [x22]
0x0453681C: 010340f9  ldr x1, [x24]
0x04536820: 095d4279  ldrh w9, [x8, #0x12e]
0x04536824: 290100b4  cbz x9, #0x4536848
0x04536828: 0a5940f9  ldr x10, [x8, #0xb0]
0x0453682C: 4a210091  add x10, x10, #8
0x04536830: 4b815ff8  ldur x11, [x10, #-8]
0x04536834: 7f0101eb  cmp x11, x1
0x04536838: 00010054  b.eq #0x4536858
0x0453683C: 290500f1  subs x9, x9, #1
0x04536840: 4a410091  add x10, x10, #0x10
0x04536844: 61ffff54  b.ne #0x4536830
0x04536848: e00316aa  mov x0, x22
0x0453684C: e2031f2a  mov w2, wzr
0x04536850: b080b097  bl #0x3156b10
0x04536854: 04000014  b #0x4536864
0x04536858: 490180b9  ldrsw x9, [x10]
0x0453685C: 0811098b  add x8, x8, x9, lsl #4
0x04536860: 00e10491  add x0, x8, #0x138
0x04536864: 080c40a9  ldp x8, x3, [x0]
0x04536868: e00316aa  mov x0, x22
0x0453686C: e10314aa  mov x1, x20
0x04536870: e20313aa  mov x2, x19
0x04536874: 00013fd6  blr x8
0x04536878: 20fc0736  tbz w0, #0, #0x45367fc
0x0453687C: b3008052  movz w19, #0x5
0x04536880: 04000014  b #0x4536890
0x04536884: e0031f2a  mov w0, wzr
0x04536888: 0a000014  b #0x45368b0
0x0453688C: d3008052  movz w19, #0x6
0x04536890: 488a0190  adrp x8, #0x767e000
0x04536894: 080943f9  ldr x8, [x8, #0x610]
0x04536898: e0230091  add x0, sp, #8
0x0453689C: 010140f9  ldr x1, [x8]
0x045368A0: 447c2b94  bl #0x50159b0
0x045368A4: 7f160071  cmp w19, #5
0x045368A8: e8179f1a  cset w8, eq
0x045368AC: a002080a  and w0, w21, w8
0x045368B0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x045368B4: f65744a9  ldp x22, x21, [sp, #0x40]
0x045368B8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x045368BC: fe1340f9  ldr x30, [sp, #0x20]
0x045368C0: ff830191  add sp, sp, #0x60
0x045368C4: c0035fd6  ret
0x045368C8: f928b197  bl #0x3180cac
0x045368CC: f828b197  bl #0x3180cac
0x045368D0: 02000014  b #0x45368d8
0x045368D4: 01000014  b #0x45368d8
0x045368D8: f30300aa  mov x19, x0
0x045368DC: 3f040071  cmp w1, #1
0x045368E0: c1010054  b.ne #0x4536918
0x045368E4: e00313aa  mov x0, x19
0x045368E8: 0a60b294  bl #0x71ce910
0x045368EC: 140040f9  ldr x20, [x0]
0x045368F0: 0c60b294  bl #0x71ce920
0x045368F4: 488a0190  adrp x8, #0x767e000
0x045368F8: 080943f9  ldr x8, [x8, #0x610]
0x045368FC: e0230091  add x0, sp, #8
0x04536900: 010140f9  ldr x1, [x8]
0x04536904: 2b7c2b94  bl #0x50159b0
0x04536908: d40000b5  cbnz x20, #0x4536920
0x0453690C: f5031f2a  mov w21, wzr
0x04536910: f3031f2a  mov w19, wzr
0x04536914: e4ffff17  b #0x45368a4
0x04536918: f4031faa  mov x20, xzr
0x0453691C: 04000014  b #0x453692c
0x04536920: e00314aa  mov x0, x20
0x04536924: e028b197  bl #0x3180ca4
0x04536928: f30300aa  mov x19, x0
0x0453692C: 488a0190  adrp x8, #0x767e000
0x04536930: 080943f9  ldr x8, [x8, #0x610]
0x04536934: 010140f9  ldr x1, [x8]
0x04536938: e0230091  add x0, sp, #8
0x0453693C: 1d7c2b94  bl #0x50159b0
0x04536940: 740000b5  cbnz x20, #0x453694c
0x04536944: e00313aa  mov x0, x19
0x04536948: 04bcb497  bl #0x3265958
0x0453694C: e00314aa  mov x0, x20
0x04536950: d528b197  bl #0x3180ca4
0x04536954: f04aa397  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4536958 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$IsLocked
; native signature: bool MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___IsLocked (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, Il2CppObject* component, const MethodInfo_4536958* method);
; bytes=168 sha256=4d10e4a84f4bf5a7747db08e051ce0d1b39a4ec86e9d0ec76b7e38d196388ff9 status=arm64_complete_bound indexed_start=True
0x04536958: fe0f1ef8  str x30, [sp, #-0x20]!
0x0453695C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04536960: 14bf01f0  adrp x20, #0x7d19000
0x04536964: 88ee4439  ldrb w8, [x20, #0x13b]
0x04536968: f30301aa  mov x19, x1
0x0453696C: 28010037  tbnz w8, #0, #0x4536990
0x04536970: 408a0190  adrp x0, #0x767e000
0x04536974: 001c43f9  ldr x0, [x0, #0x638]
0x04536978: 2828b197  bl #0x3180a18
0x0453697C: 408a0190  adrp x0, #0x767e000
0x04536980: 002043f9  ldr x0, [x0, #0x640]
0x04536984: 2528b197  bl #0x3180a18
0x04536988: 28008052  movz w8, #0x1
0x0453698C: 88ee0439  strb w8, [x20, #0x13b]
0x04536990: 730300b4  cbz x19, #0x45369fc
0x04536994: 488a0190  adrp x8, #0x767e000
0x04536998: 082143f9  ldr x8, [x8, #0x640]
0x0453699C: 548a0190  adrp x20, #0x767e000
0x045369A0: e00313aa  mov x0, x19
0x045369A4: 010140f9  ldr x1, [x8]
0x045369A8: 941e43f9  ldr x20, [x20, #0x638]
0x045369AC: 9cdbda97  bl #0x3bed81c
0x045369B0: 810240f9  ldr x1, [x20]
0x045369B4: f40300aa  mov x20, x0
0x045369B8: e00313aa  mov x0, x19
0x045369BC: 98dbda97  bl #0x3bed81c
0x045369C0: f30300aa  mov x19, x0
0x045369C4: b40000b4  cbz x20, #0x45369d8
0x045369C8: e00314aa  mov x0, x20
0x045369CC: e1031faa  mov x1, xzr
0x045369D0: df1d8f94  bl #0x68fe14c
0x045369D4: 80000037  tbnz w0, #0, #0x45369e4
0x045369D8: b30000b4  cbz x19, #0x45369ec
0x045369DC: 68c24039  ldrb w8, [x19, #0x30]
0x045369E0: 68000034  cbz w8, #0x45369ec
0x045369E4: 20008052  movz w0, #0x1
0x045369E8: 02000014  b #0x45369f0
0x045369EC: e0031f2a  mov w0, wzr
0x045369F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x045369F4: fe0742f8  ldr x30, [sp], #0x20
0x045369F8: c0035fd6  ret
0x045369FC: ac28b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4536A00 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$HandleFloatingTexts
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___HandleFloatingTexts (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, const MethodInfo_4536A00* method);
; bytes=200 sha256=c1f6d98dac89f1e789eb61dea3eacc6baba1d9d85d5e3f5cf740011f7cfab4cc status=arm64_complete_bound indexed_start=True
0x04536A00: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04536A04: f44f01a9  stp x20, x19, [sp, #0x10]
0x04536A08: 15bf01f0  adrp x21, #0x7d19000
0x04536A0C: a8f24439  ldrb w8, [x21, #0x13c]
0x04536A10: f30301aa  mov x19, x1
0x04536A14: f40300aa  mov x20, x0
0x04536A18: c8000037  tbnz w8, #0, #0x4536a30
0x04536A1C: 208a0190  adrp x0, #0x767a000
0x04536A20: 000043f9  ldr x0, [x0, #0x600]
0x04536A24: fd27b197  bl #0x3180a18
0x04536A28: 28008052  movz w8, #0x1
0x04536A2C: a8f20439  strb w8, [x21, #0x13c]
0x04536A30: b30400b4  cbz x19, #0x4536ac4
0x04536A34: 2a8a0190  adrp x10, #0x767a000
0x04536A38: 680240f9  ldr x8, [x19]
0x04536A3C: 4a0143f9  ldr x10, [x10, #0x600]
0x04536A40: 095d4279  ldrh w9, [x8, #0x12e]
0x04536A44: 410140f9  ldr x1, [x10]
0x04536A48: 290100b4  cbz x9, #0x4536a6c
0x04536A4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536A50: 4a210091  add x10, x10, #8
0x04536A54: 4b815ff8  ldur x11, [x10, #-8]
0x04536A58: 7f0101eb  cmp x11, x1
0x04536A5C: 00010054  b.eq #0x4536a7c
0x04536A60: 290500f1  subs x9, x9, #1
0x04536A64: 4a410091  add x10, x10, #0x10
0x04536A68: 61ffff54  b.ne #0x4536a54
0x04536A6C: 62028052  movz w2, #0x13
0x04536A70: e00313aa  mov x0, x19
0x04536A74: 2780b097  bl #0x3156b10
0x04536A78: 05000014  b #0x4536a8c
0x04536A7C: 490140b9  ldr w9, [x10]
0x04536A80: 294d0011  add w9, w9, #0x13
0x04536A84: 08d1298b  add x8, x8, w9, sxtw #4
0x04536A88: 00e10491  add x0, x8, #0x138
0x04536A8C: 080440a9  ldp x8, x1, [x0]
0x04536A90: e00313aa  mov x0, x19
0x04536A94: 00013fd6  blr x8
0x04536A98: c0000036  tbz w0, #0, #0x4536ab0
0x04536A9C: e00314aa  mov x0, x20
0x04536AA0: e10313aa  mov x1, x19
0x04536AA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04536AA8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04536AAC: 8b000014  b #0x4536cd8
0x04536AB0: e00314aa  mov x0, x20
0x04536AB4: e10313aa  mov x1, x19
0x04536AB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04536ABC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04536AC0: 02000014  b #0x4536ac8
0x04536AC4: 7a28b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4536AC8 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$HandleFireChargingFloatingText
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___HandleFireChargingFloatingText (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, const MethodInfo_4536AC8* method);
; bytes=528 sha256=438da33adf976b6862bae308a16b92bbdc2972a86752a245a9952bfcf7cca04e status=arm64_complete_bound indexed_start=True
0x04536AC8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04536ACC: f44f01a9  stp x20, x19, [sp, #0x10]
0x04536AD0: 15bf01f0  adrp x21, #0x7d19000
0x04536AD4: a8f64439  ldrb w8, [x21, #0x13d]
0x04536AD8: f40301aa  mov x20, x1
0x04536ADC: f30300aa  mov x19, x0
0x04536AE0: e8010037  tbnz w8, #0, #0x4536b1c
0x04536AE4: 208a01d0  adrp x0, #0x767c000
0x04536AE8: 004441f9  ldr x0, [x0, #0x288]
0x04536AEC: cb27b197  bl #0x3180a18
0x04536AF0: 408a0190  adrp x0, #0x767e000
0x04536AF4: 00d842f9  ldr x0, [x0, #0x5b0]
0x04536AF8: c827b197  bl #0x3180a18
0x04536AFC: 208a0190  adrp x0, #0x767a000
0x04536B00: 000043f9  ldr x0, [x0, #0x600]
0x04536B04: c527b197  bl #0x3180a18
0x04536B08: 208a01d0  adrp x0, #0x767c000
0x04536B0C: 004841f9  ldr x0, [x0, #0x290]
0x04536B10: c227b197  bl #0x3180a18
0x04536B14: 28008052  movz w8, #0x1
0x04536B18: a8f60439  strb w8, [x21, #0x13d]
0x04536B1C: d40d00b4  cbz x20, #0x4536cd4
0x04536B20: 358a0190  adrp x21, #0x767a000
0x04536B24: 880240f9  ldr x8, [x20]
0x04536B28: b50243f9  ldr x21, [x21, #0x600]
0x04536B2C: 095d4279  ldrh w9, [x8, #0x12e]
0x04536B30: a10240f9  ldr x1, [x21]
0x04536B34: 290100b4  cbz x9, #0x4536b58
0x04536B38: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536B3C: 4a210091  add x10, x10, #8
0x04536B40: 4b815ff8  ldur x11, [x10, #-8]
0x04536B44: 7f0101eb  cmp x11, x1
0x04536B48: 00010054  b.eq #0x4536b68
0x04536B4C: 290500f1  subs x9, x9, #1
0x04536B50: 4a410091  add x10, x10, #0x10
0x04536B54: 61ffff54  b.ne #0x4536b40
0x04536B58: e2018052  movz w2, #0xf
0x04536B5C: e00314aa  mov x0, x20
0x04536B60: ec7fb097  bl #0x3156b10
0x04536B64: 05000014  b #0x4536b78
0x04536B68: 490140b9  ldr w9, [x10]
0x04536B6C: 293d0011  add w9, w9, #0xf
0x04536B70: 08d1298b  add x8, x8, w9, sxtw #4
0x04536B74: 00e10491  add x0, x8, #0x138
0x04536B78: 080440a9  ldp x8, x1, [x0]
0x04536B7C: e00314aa  mov x0, x20
0x04536B80: 00013fd6  blr x8
0x04536B84: 40030034  cbz w0, #0x4536bec
0x04536B88: 880240f9  ldr x8, [x20]
0x04536B8C: a10240f9  ldr x1, [x21]
0x04536B90: 095d4279  ldrh w9, [x8, #0x12e]
0x04536B94: 290100b4  cbz x9, #0x4536bb8
0x04536B98: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536B9C: 4a210091  add x10, x10, #8
0x04536BA0: 4b815ff8  ldur x11, [x10, #-8]
0x04536BA4: 7f0101eb  cmp x11, x1
0x04536BA8: 00010054  b.eq #0x4536bc8
0x04536BAC: 290500f1  subs x9, x9, #1
0x04536BB0: 4a410091  add x10, x10, #0x10
0x04536BB4: 61ffff54  b.ne #0x4536ba0
0x04536BB8: e2018052  movz w2, #0xf
0x04536BBC: e00314aa  mov x0, x20
0x04536BC0: d47fb097  bl #0x3156b10
0x04536BC4: 05000014  b #0x4536bd8
0x04536BC8: 490140b9  ldr w9, [x10]
0x04536BCC: 293d0011  add w9, w9, #0xf
0x04536BD0: 08d1298b  add x8, x8, w9, sxtw #4
0x04536BD4: 00e10491  add x0, x8, #0x138
0x04536BD8: 080440a9  ldp x8, x1, [x0]
0x04536BDC: e00314aa  mov x0, x20
0x04536BE0: 00013fd6  blr x8
0x04536BE4: 1f040071  cmp w0, #1
0x04536BE8: 81020054  b.ne #0x4536c38
0x04536BEC: 498a0190  adrp x9, #0x767e000
0x04536BF0: 29d942f9  ldr x9, [x9, #0x5b0]
0x04536BF4: 880240f9  ldr x8, [x20]
0x04536BF8: 350140f9  ldr x21, [x9]
0x04536BFC: 095d4279  ldrh w9, [x8, #0x12e]
0x04536C00: a11240f9  ldr x1, [x21, #0x20]
0x04536C04: a2a24079  ldrh w2, [x21, #0x50]
0x04536C08: 290100b4  cbz x9, #0x4536c2c
0x04536C0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536C10: 4a210091  add x10, x10, #8
0x04536C14: 4b815ff8  ldur x11, [x10, #-8]
0x04536C18: 7f0101eb  cmp x11, x1
0x04536C1C: 40010054  b.eq #0x4536c44
0x04536C20: 290500f1  subs x9, x9, #1
0x04536C24: 4a410091  add x10, x10, #0x10
0x04536C28: 61ffff54  b.ne #0x4536c14
0x04536C2C: e00314aa  mov x0, x20
0x04536C30: b87fb097  bl #0x3156b10
0x04536C34: 08000014  b #0x4536c54
0x04536C38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04536C3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04536C40: c0035fd6  ret
0x04536C44: 490140b9  ldr w9, [x10]
0x04536C48: 2901020b  add w9, w9, w2
0x04536C4C: 08d1298b  add x8, x8, w9, sxtw #4
0x04536C50: 00e10491  add x0, x8, #0x138
0x04536C54: 000440f9  ldr x0, [x0, #8]
0x04536C58: e10315aa  mov x1, x21
0x04536C5C: cb27b197  bl #0x3180b88
0x04536C60: 080440f9  ldr x8, [x0, #8]
0x04536C64: e10300aa  mov x1, x0
0x04536C68: e00314aa  mov x0, x20
0x04536C6C: 00013fd6  blr x8
0x04536C70: 330300b4  cbz x19, #0x4536cd4
0x04536C74: 000300b4  cbz x0, #0x4536cd4
0x04536C78: 288a01d0  adrp x8, #0x767c000
0x04536C7C: 084541f9  ldr x8, [x8, #0x288]
0x04536C80: 151840f9  ldr x21, [x0, #0x30]
0x04536C84: 731640f9  ldr x19, [x19, #0x28]
0x04536C88: 000140f9  ldr x0, [x8]
0x04536C8C: 0528b197  bl #0x3180ca0
0x04536C90: a2008052  movz w2, #0x5
0x04536C94: e10315aa  mov x1, x21
0x04536C98: e3031faa  mov x3, xzr
0x04536C9C: e4031f2a  mov w4, wzr
0x04536CA0: e5031f2a  mov w5, wzr
0x04536CA4: e6031faa  mov x6, xzr
0x04536CA8: f40300aa  mov x20, x0
0x04536CAC: 5fcf8894  bl #0x676aa28
0x04536CB0: 330100b4  cbz x19, #0x4536cd4
0x04536CB4: 288a01d0  adrp x8, #0x767c000
0x04536CB8: 084941f9  ldr x8, [x8, #0x290]
0x04536CBC: e00313aa  mov x0, x19
0x04536CC0: e10314aa  mov x1, x20
0x04536CC4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04536CC8: 020140f9  ldr x2, [x8]
0x04536CCC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04536CD0: 27b8e117  b #0x3da4d6c
0x04536CD4: f627b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4536CD8 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$HandleExpiredFloatingText
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___HandleExpiredFloatingText (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, MergeEngine_ECS_Components_Items_Producers_IItemSpawningComponent_o* itemSpawningComponent, const MethodInfo_4536CD8* method);
; bytes=428 sha256=76e6148755df75bea8a736afd7dd8c8bdb47056db1db76e51c09f96fed172041 status=arm64_complete_bound indexed_start=True
0x04536CD8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04536CDC: f44f01a9  stp x20, x19, [sp, #0x10]
0x04536CE0: 15bf01f0  adrp x21, #0x7d19000
0x04536CE4: a8fa4439  ldrb w8, [x21, #0x13e]
0x04536CE8: f40301aa  mov x20, x1
0x04536CEC: f30300aa  mov x19, x0
0x04536CF0: e8010037  tbnz w8, #0, #0x4536d2c
0x04536CF4: 208a01d0  adrp x0, #0x767c000
0x04536CF8: 004441f9  ldr x0, [x0, #0x288]
0x04536CFC: 4727b197  bl #0x3180a18
0x04536D00: 408a0190  adrp x0, #0x767e000
0x04536D04: 00d842f9  ldr x0, [x0, #0x5b0]
0x04536D08: 4427b197  bl #0x3180a18
0x04536D0C: 208a0190  adrp x0, #0x767a000
0x04536D10: 000043f9  ldr x0, [x0, #0x600]
0x04536D14: 4127b197  bl #0x3180a18
0x04536D18: 208a01d0  adrp x0, #0x767c000
0x04536D1C: 004841f9  ldr x0, [x0, #0x290]
0x04536D20: 3e27b197  bl #0x3180a18
0x04536D24: 28008052  movz w8, #0x1
0x04536D28: a8fa0439  strb w8, [x21, #0x13e]
0x04536D2C: b40a00b4  cbz x20, #0x4536e80
0x04536D30: 2a8a0190  adrp x10, #0x767a000
0x04536D34: 880240f9  ldr x8, [x20]
0x04536D38: 4a0143f9  ldr x10, [x10, #0x600]
0x04536D3C: 095d4279  ldrh w9, [x8, #0x12e]
0x04536D40: 410140f9  ldr x1, [x10]
0x04536D44: 290100b4  cbz x9, #0x4536d68
0x04536D48: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536D4C: 4a210091  add x10, x10, #8
0x04536D50: 4b815ff8  ldur x11, [x10, #-8]
0x04536D54: 7f0101eb  cmp x11, x1
0x04536D58: 00010054  b.eq #0x4536d78
0x04536D5C: 290500f1  subs x9, x9, #1
0x04536D60: 4a410091  add x10, x10, #0x10
0x04536D64: 61ffff54  b.ne #0x4536d50
0x04536D68: 62028052  movz w2, #0x13
0x04536D6C: e00314aa  mov x0, x20
0x04536D70: 687fb097  bl #0x3156b10
0x04536D74: 05000014  b #0x4536d88
0x04536D78: 490140b9  ldr w9, [x10]
0x04536D7C: 294d0011  add w9, w9, #0x13
0x04536D80: 08d1298b  add x8, x8, w9, sxtw #4
0x04536D84: 00e10491  add x0, x8, #0x138
0x04536D88: 080440a9  ldp x8, x1, [x0]
0x04536D8C: e00314aa  mov x0, x20
0x04536D90: 00013fd6  blr x8
0x04536D94: 80020036  tbz w0, #0, #0x4536de4
0x04536D98: 498a0190  adrp x9, #0x767e000
0x04536D9C: 29d942f9  ldr x9, [x9, #0x5b0]
0x04536DA0: 880240f9  ldr x8, [x20]
0x04536DA4: 350140f9  ldr x21, [x9]
0x04536DA8: 095d4279  ldrh w9, [x8, #0x12e]
0x04536DAC: a11240f9  ldr x1, [x21, #0x20]
0x04536DB0: a2a24079  ldrh w2, [x21, #0x50]
0x04536DB4: 290100b4  cbz x9, #0x4536dd8
0x04536DB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04536DBC: 4a210091  add x10, x10, #8
0x04536DC0: 4b815ff8  ldur x11, [x10, #-8]
0x04536DC4: 7f0101eb  cmp x11, x1
0x04536DC8: 40010054  b.eq #0x4536df0
0x04536DCC: 290500f1  subs x9, x9, #1
0x04536DD0: 4a410091  add x10, x10, #0x10
0x04536DD4: 61ffff54  b.ne #0x4536dc0
0x04536DD8: e00314aa  mov x0, x20
0x04536DDC: 4d7fb097  bl #0x3156b10
0x04536DE0: 08000014  b #0x4536e00
0x04536DE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04536DE8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04536DEC: c0035fd6  ret
0x04536DF0: 490140b9  ldr w9, [x10]
0x04536DF4: 2901020b  add w9, w9, w2
0x04536DF8: 08d1298b  add x8, x8, w9, sxtw #4
0x04536DFC: 00e10491  add x0, x8, #0x138
0x04536E00: 000440f9  ldr x0, [x0, #8]
0x04536E04: e10315aa  mov x1, x21
0x04536E08: 6027b197  bl #0x3180b88
0x04536E0C: 080440f9  ldr x8, [x0, #8]
0x04536E10: e10300aa  mov x1, x0
0x04536E14: e00314aa  mov x0, x20
0x04536E18: 00013fd6  blr x8
0x04536E1C: 330300b4  cbz x19, #0x4536e80
0x04536E20: 000300b4  cbz x0, #0x4536e80
0x04536E24: 288a01d0  adrp x8, #0x767c000
0x04536E28: 731640f9  ldr x19, [x19, #0x28]
0x04536E2C: 151840f9  ldr x21, [x0, #0x30]
0x04536E30: 084541f9  ldr x8, [x8, #0x288]
0x04536E34: 000140f9  ldr x0, [x8]
0x04536E38: 9a27b197  bl #0x3180ca0
0x04536E3C: 82018052  movz w2, #0xc
0x04536E40: e10315aa  mov x1, x21
0x04536E44: e3031faa  mov x3, xzr
0x04536E48: e4031f2a  mov w4, wzr
0x04536E4C: e5031f2a  mov w5, wzr
0x04536E50: e6031faa  mov x6, xzr
0x04536E54: f40300aa  mov x20, x0
0x04536E58: f4ce8894  bl #0x676aa28
0x04536E5C: 330100b4  cbz x19, #0x4536e80
0x04536E60: 288a01d0  adrp x8, #0x767c000
0x04536E64: 084941f9  ldr x8, [x8, #0x290]
0x04536E68: e00313aa  mov x0, x19
0x04536E6C: e10314aa  mov x1, x20
0x04536E70: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04536E74: 020140f9  ldr x2, [x8]
0x04536E78: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04536E7C: bcb7e117  b #0x3da4d6c
0x04536E80: 8b27b197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4536E84 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object____ctor (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_T__o* __this, const MethodInfo_4536E84* method);
; bytes=16 sha256=864149787688b4a481ad1bec8af0313818065aa7d60fad7d20ccc58b9bd6de55 status=arm64_complete_bound indexed_start=True
0x04536E84: 281040f9  ldr x8, [x1, #0x20]
0x04536E88: 086140f9  ldr x8, [x8, #0xc0]
0x04536E8C: 016940f9  ldr x1, [x8, #0xd0]
0x04536E90: 28d61a14  b #0x4bec730


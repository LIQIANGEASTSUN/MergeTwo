; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1103 MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<TCapability>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938A8 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$get_Seed
; native signature: int32_t MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___get_Seed (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_53938A8* method);
; bytes=8 sha256=ba575986dc1ab7330916797e2bd959021721fa4f384983e31b268900023397a8 status=arm64_complete_bound indexed_start=True
0x053938A8: 007840b9  ldr w0, [x0, #0x78]
0x053938AC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938B0 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$set_Seed
; native signature: void MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___set_Seed (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, int32_t value, const MethodInfo_53938B0* method);
; bytes=8 sha256=55a8f8d182b035356eb3f8907161a2472f50eece176b5c83052ade897cedc65d status=arm64_complete_bound indexed_start=True
0x053938B0: 017800b9  str w1, [x0, #0x78]
0x053938B4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938B8 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$get_SpawnedItemsLabel
; native signature: System_String_o* MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___get_SpawnedItemsLabel (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_53938B8* method);
; bytes=32 sha256=03dda55eb18737a832aa223b54ec1a7db381312b535065ad94fd89326969f2c0 status=arm64_complete_bound indexed_start=True
0x053938B8: fe0f1ff8  str x30, [sp, #-0x10]!
0x053938BC: c00000b4  cbz x0, #0x53938d4
0x053938C0: 081040f9  ldr x8, [x0, #0x20]
0x053938C4: 880000b4  cbz x8, #0x53938d4
0x053938C8: 001d40f9  ldr x0, [x8, #0x38]
0x053938CC: fe0741f8  ldr x30, [sp], #0x10
0x053938D0: c0035fd6  ret
0x053938D4: f6b47797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938D8 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$get_ItemsQueue
; native signature: MergeEngine_Util_ItemSpawningQueue_o* MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___get_ItemsQueue (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_53938D8* method);
; bytes=8 sha256=509d712a0d747485a74d3684f00fd4941c9c210d3f084bf792b1b75c5e6c3652 status=arm64_complete_bound indexed_start=True
0x053938D8: 004040f9  ldr x0, [x0, #0x80]
0x053938DC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938E0 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$set_ItemsQueue
; native signature: void MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___set_ItemsQueue (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, MergeEngine_Util_ItemSpawningQueue_o* value, const MethodInfo_53938E0* method);
; bytes=8 sha256=ef8bb1721277d1c3b9cdc2e13081097b591afe7a440190051a08eb6394a72d91 status=arm64_complete_bound indexed_start=True
0x053938E0: 010c08f8  str x1, [x0, #0x80]!
0x053938E4: 38b47717  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938E8 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$get_SeedWithOffset
; native signature: int32_t MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___get_SeedWithOffset (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_53938E8* method);
; bytes=16 sha256=110f0814486e329ff909cecf85e50c142eb24df03646c14d9cc0381ad1325307 status=arm64_complete_bound indexed_start=True
0x053938E8: 087840b9  ldr w8, [x0, #0x78]
0x053938EC: 096840b9  ldr w9, [x0, #0x68]
0x053938F0: 2001080b  add w0, w9, w8
0x053938F4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x53938F8 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$get_ConsumedItemsDependant
; native signature: bool MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___get_ConsumedItemsDependant (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_53938F8* method);
; bytes=32 sha256=2d36f09fc59d4a45bff9bd4b9b7b2c713263ae27fe6692b8b71f52c06e1a833e status=arm64_complete_bound indexed_start=True
0x053938F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x053938FC: c00000b4  cbz x0, #0x5393914
0x05393900: 081040f9  ldr x8, [x0, #0x20]
0x05393904: 880000b4  cbz x8, #0x5393914
0x05393908: 00c54039  ldrb w0, [x8, #0x31]
0x0539390C: fe0741f8  ldr x30, [sp], #0x10
0x05393910: c0035fd6  ret
0x05393914: e6b47797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5393918 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$get_SkipCooldownSettings
; native signature: MergeEngine_Data_SkipCooldownSettings_o* MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___get_SkipCooldownSettings (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_5393918* method);
; bytes=40 sha256=752acf5700273276949ce7688c7feda58041b1eaed12482e287065cd7424f085 status=arm64_complete_bound indexed_start=True
0x05393918: fe0f1ff8  str x30, [sp, #-0x10]!
0x0539391C: 000100b4  cbz x0, #0x539393c
0x05393920: 081040f9  ldr x8, [x0, #0x20]
0x05393924: 680000b4  cbz x8, #0x5393930
0x05393928: 003940f9  ldr x0, [x8, #0x70]
0x0539392C: 02000014  b #0x5393934
0x05393930: e0031faa  mov x0, xzr
0x05393934: fe0741f8  ldr x30, [sp], #0x10
0x05393938: c0035fd6  ret
0x0539393C: dcb47797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5393940 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$.ctor
; native signature: void MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object____ctor (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, Il2CppObject* capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_5393940* method);
; bytes=252 sha256=fc90491b11f71874ac0418ae78482c87cc88bf6e1eda29c72376a33f5413da67 status=arm64_complete_bound indexed_start=True
0x05393940: fe0f1cf8  str x30, [sp, #-0x40]!
0x05393944: f85f01a9  stp x24, x23, [sp, #0x10]
0x05393948: f65702a9  stp x22, x21, [sp, #0x20]
0x0539394C: f44f03a9  stp x20, x19, [sp, #0x30]
0x05393950: 584c01b0  adrp x24, #0x7d1c000
0x05393954: d71501f0  adrp x23, #0x764e000
0x05393958: 08934e39  ldrb w8, [x24, #0x3a4]
0x0539395C: f72a43f9  ldr x23, [x23, #0x650]
0x05393960: f60303aa  mov x22, x3
0x05393964: f50302aa  mov x21, x2
0x05393968: f40301aa  mov x20, x1
0x0539396C: f30300aa  mov x19, x0
0x05393970: 28010037  tbnz w8, #0, #0x5393994
0x05393974: c01501f0  adrp x0, #0x764e000
0x05393978: 002843f9  ldr x0, [x0, #0x650]
0x0539397C: 27b47797  bl #0x3180a18
0x05393980: 601701f0  adrp x0, #0x7682000
0x05393984: 009446f9  ldr x0, [x0, #0xd28]
0x05393988: 24b47797  bl #0x3180a18
0x0539398C: 28008052  movz w8, #0x1
0x05393990: 08930e39  strb w8, [x24, #0x3a4]
0x05393994: ff0700f9  str xzr, [sp, #8]
0x05393998: c81240f9  ldr x8, [x22, #0x20]
0x0539399C: 761701f0  adrp x22, #0x7682000
0x053939A0: e00313aa  mov x0, x19
0x053939A4: e10314aa  mov x1, x20
0x053939A8: 086140f9  ldr x8, [x8, #0xc0]
0x053939AC: e20315aa  mov x2, x21
0x053939B0: 031540f9  ldr x3, [x8, #0x28]
0x053939B4: d69646f9  ldr x22, [x22, #0xd28]
0x053939B8: 2b73c997  bl #0x45f0664
0x053939BC: e00240f9  ldr x0, [x23]
0x053939C0: 08e040b9  ldr w8, [x0, #0xe0]
0x053939C4: 48000035  cbnz w8, #0x53939cc
0x053939C8: 71b47797  bl #0x3180b8c
0x053939CC: e0031faa  mov x0, xzr
0x053939D0: dd8b0b94  bl #0x5676944
0x053939D4: e00700f9  str x0, [sp, #8]
0x053939D8: e0230091  add x0, sp, #8
0x053939DC: e1031faa  mov x1, xzr
0x053939E0: f9830b94  bl #0x56749c4
0x053939E4: 083c0012  and w8, w0, #0xffff
0x053939E8: 687a00b9  str w8, [x19, #0x78]
0x053939EC: 696a40b9  ldr w9, [x19, #0x68]
0x053939F0: c80240f9  ldr x8, [x22]
0x053939F4: 3521200b  add w21, w9, w0, uxth
0x053939F8: e00308aa  mov x0, x8
0x053939FC: a9b47797  bl #0x3180ca0
0x05393A00: e10314aa  mov x1, x20
0x05393A04: e203152a  mov w2, w21
0x05393A08: e3031f2a  mov w3, wzr
0x05393A0C: e4031faa  mov x4, xzr
0x05393A10: f60300aa  mov x22, x0
0x05393A14: ed533194  bl #0x5fe89c8
0x05393A18: 760e08f8  str x22, [x19, #0x80]!
0x05393A1C: e00313aa  mov x0, x19
0x05393A20: e10316aa  mov x1, x22
0x05393A24: e8b37797  bl #0x31809c4
0x05393A28: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05393A2C: f65742a9  ldp x22, x21, [sp, #0x20]
0x05393A30: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05393A34: fe0744f8  ldr x30, [sp], #0x40
0x05393A38: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x5393A3C | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$LoadComponent
; native signature: void MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___LoadComponent (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, MergeEngine_ECS_Components_Items_Producers_SerializedItemSpawningComponent_o* componentData, const MethodInfo_5393A3C* method);
; bytes=184 sha256=3f7ef63fa2fe044b87f1bcc61bfd8dbc69e131137440376e9967f55d078b8399 status=arm64_complete_bound indexed_start=True
0x05393A3C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05393A40: f65701a9  stp x22, x21, [sp, #0x10]
0x05393A44: f44f02a9  stp x20, x19, [sp, #0x20]
0x05393A48: 564c01b0  adrp x22, #0x7d1c000
0x05393A4C: c8964e39  ldrb w8, [x22, #0x3a5]
0x05393A50: f50302aa  mov x21, x2
0x05393A54: f40301aa  mov x20, x1
0x05393A58: f30300aa  mov x19, x0
0x05393A5C: c8000037  tbnz w8, #0, #0x5393a74
0x05393A60: 601701f0  adrp x0, #0x7682000
0x05393A64: 009446f9  ldr x0, [x0, #0xd28]
0x05393A68: ecb37797  bl #0x3180a18
0x05393A6C: 28008052  movz w8, #0x1
0x05393A70: c8960e39  strb w8, [x22, #0x3a5]
0x05393A74: f30300b4  cbz x19, #0x5393af0
0x05393A78: a81240f9  ldr x8, [x21, #0x20]
0x05393A7C: e00313aa  mov x0, x19
0x05393A80: e10314aa  mov x1, x20
0x05393A84: 086140f9  ldr x8, [x8, #0xc0]
0x05393A88: 023540f9  ldr x2, [x8, #0x68]
0x05393A8C: 1873c997  bl #0x45f06ec
0x05393A90: 140300b4  cbz x20, #0x5393af0
0x05393A94: 884a40b9  ldr w8, [x20, #0x48]
0x05393A98: 691701f0  adrp x9, #0x7682000
0x05393A9C: 299546f9  ldr x9, [x9, #0xd28]
0x05393AA0: 6a6a40b9  ldr w10, [x19, #0x68]
0x05393AA4: 687a00b9  str w8, [x19, #0x78]
0x05393AA8: 751240f9  ldr x21, [x19, #0x20]
0x05393AAC: 200140f9  ldr x0, [x9]
0x05393AB0: 944e40b9  ldr w20, [x20, #0x4c]
0x05393AB4: 5601080b  add w22, w10, w8
0x05393AB8: 7ab47797  bl #0x3180ca0
0x05393ABC: e10315aa  mov x1, x21
0x05393AC0: e203162a  mov w2, w22
0x05393AC4: e303142a  mov w3, w20
0x05393AC8: e4031faa  mov x4, xzr
0x05393ACC: f70300aa  mov x23, x0
0x05393AD0: be533194  bl #0x5fe89c8
0x05393AD4: 770e08f8  str x23, [x19, #0x80]!
0x05393AD8: e00313aa  mov x0, x19
0x05393ADC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05393AE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x05393AE4: e10317aa  mov x1, x23
0x05393AE8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05393AEC: b6b37717  b #0x31809c4
0x05393AF0: 6fb47797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5393AF4 | MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<object>$$OnBeforeSerialize
; native signature: void MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_object___OnBeforeSerialize (MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability__o* __this, const MethodInfo_5393AF4* method);
; bytes=72 sha256=fc697face4146b57c1f9925ec633e07100bd4318677abb437018b7e92be812bc status=arm64_complete_bound indexed_start=True
0x05393AF4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x05393AF8: 000200b4  cbz x0, #0x5393b38
0x05393AFC: 281040f9  ldr x8, [x1, #0x20]
0x05393B00: f30300aa  mov x19, x0
0x05393B04: 086140f9  ldr x8, [x8, #0xc0]
0x05393B08: 013940f9  ldr x1, [x8, #0x70]
0x05393B0C: 2b73c997  bl #0x45f07b8
0x05393B10: 681640f9  ldr x8, [x19, #0x28]
0x05393B14: 280100b4  cbz x8, #0x5393b38
0x05393B18: 697a40b9  ldr w9, [x19, #0x78]
0x05393B1C: 094900b9  str w9, [x8, #0x48]
0x05393B20: 694240f9  ldr x9, [x19, #0x80]
0x05393B24: a90000b4  cbz x9, #0x5393b38
0x05393B28: 293540b9  ldr w9, [x9, #0x34]
0x05393B2C: 094d00b9  str w9, [x8, #0x4c]
0x05393B30: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x05393B34: c0035fd6  ret
0x05393B38: 5db47797  bl #0x3180cac


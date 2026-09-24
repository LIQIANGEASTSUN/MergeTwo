; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 989 .SpawningItemsSystem.<>c<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF7090 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c<object>$$.cctor
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_object____cctor (const MethodInfo_3EF7090* method);
; bytes=188 sha256=d23f14006ccc144ba4720874e4bfea93224308e0732bbf64c0992390d30a418e status=arm64_complete_bound indexed_start=True
0x03EF7090: fe0f1ef8  str x30, [sp, #-0x20]!
0x03EF7094: f44f01a9  stp x20, x19, [sp, #0x10]
0x03EF7098: f30300aa  mov x19, x0
0x03EF709C: 001040f9  ldr x0, [x0, #0x20]
0x03EF70A0: 08d44439  ldrb w8, [x0, #0x135]
0x03EF70A4: 48000037  tbnz w8, #0, #0x3ef70ac
0x03EF70A8: dd7dc997  bl #0x315681c
0x03EF70AC: 086040f9  ldr x8, [x0, #0xc0]
0x03EF70B0: 000140f9  ldr x0, [x8]
0x03EF70B4: 08d44439  ldrb w8, [x0, #0x135]
0x03EF70B8: 48000037  tbnz w8, #0, #0x3ef70c0
0x03EF70BC: d87dc997  bl #0x315681c
0x03EF70C0: f826ca97  bl #0x3180ca0
0x03EF70C4: 681240f9  ldr x8, [x19, #0x20]
0x03EF70C8: f40300aa  mov x20, x0
0x03EF70CC: 09d54439  ldrb w9, [x8, #0x135]
0x03EF70D0: 69000037  tbnz w9, #0, #0x3ef70dc
0x03EF70D4: e00308aa  mov x0, x8
0x03EF70D8: d17dc997  bl #0x315681c
0x03EF70DC: e00314aa  mov x0, x20
0x03EF70E0: e1031faa  mov x1, xzr
0x03EF70E4: 468d5f94  bl #0x56da5fc
0x03EF70E8: 601240f9  ldr x0, [x19, #0x20]
0x03EF70EC: 08d44439  ldrb w8, [x0, #0x135]
0x03EF70F0: 48000037  tbnz w8, #0, #0x3ef70f8
0x03EF70F4: ca7dc997  bl #0x315681c
0x03EF70F8: 086040f9  ldr x8, [x0, #0xc0]
0x03EF70FC: 000940f9  ldr x0, [x8, #0x10]
0x03EF7100: 08d44439  ldrb w8, [x0, #0x135]
0x03EF7104: 48000037  tbnz w8, #0, #0x3ef710c
0x03EF7108: c57dc997  bl #0x315681c
0x03EF710C: 085c40f9  ldr x8, [x0, #0xb8]
0x03EF7110: 140100f9  str x20, [x8]
0x03EF7114: 601240f9  ldr x0, [x19, #0x20]
0x03EF7118: 08d44439  ldrb w8, [x0, #0x135]
0x03EF711C: 48000037  tbnz w8, #0, #0x3ef7124
0x03EF7120: bf7dc997  bl #0x315681c
0x03EF7124: 086040f9  ldr x8, [x0, #0xc0]
0x03EF7128: 000940f9  ldr x0, [x8, #0x10]
0x03EF712C: 08d44439  ldrb w8, [x0, #0x135]
0x03EF7130: 48000037  tbnz w8, #0, #0x3ef7138
0x03EF7134: ba7dc997  bl #0x315681c
0x03EF7138: 005c40f9  ldr x0, [x0, #0xb8]
0x03EF713C: e10314aa  mov x1, x20
0x03EF7140: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03EF7144: fe0742f8  ldr x30, [sp], #0x20
0x03EF7148: 1f26ca17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF714C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_object____ctor (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_T__o* __this, const MethodInfo_3EF714C* method);
; bytes=8 sha256=ad40fd38260517dcd1b179caa8968fa7f34b7c4f3a30dd070e037899fabfc6ff status=arm64_complete_bound indexed_start=True
0x03EF714C: e1031faa  mov x1, xzr
0x03EF7150: 2b8d5f14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF7154 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c<object>$$<CreateNewBoostedItem>b__24_0
; native signature: System_String_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_object____CreateNewBoostedItem_b__24_0 (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_T__o* __this, MergeEngine_Configuration_Definitions_FixedItemSpawnable_o* spawnable, const MethodInfo_3EF7154* method);
; bytes=36 sha256=330c31bd15e4f8c1655ea4ff3792ca499783342c765907708b57e6fd7cc65ae0 status=arm64_complete_bound indexed_start=True
0x03EF7154: fe0f1ff8  str x30, [sp, #-0x10]!
0x03EF7158: e10000b4  cbz x1, #0x3ef7174
0x03EF715C: 200840f9  ldr x0, [x1, #0x10]
0x03EF7160: a00000b4  cbz x0, #0x3ef7174
0x03EF7164: 080040f9  ldr x8, [x0]
0x03EF7168: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x03EF716C: fe0741f8  ldr x30, [sp], #0x10
0x03EF7170: 40001fd6  br x2
0x03EF7174: ce26ca97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF7178 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c<object>$$<CreateNewBoostedItem>b__24_1
; native signature: System_String_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_object____CreateNewBoostedItem_b__24_1 (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_T__o* __this, MergeEngine_Configuration_Definitions_WeightedItemSpawnable_o* spawnable, const MethodInfo_3EF7178* method);
; bytes=36 sha256=ae1421b0c22231ff08f69fb0d27631fb4eb8d481547ac69c4e8bb1475e6aba20 status=arm64_complete_bound indexed_start=True
0x03EF7178: fe0f1ff8  str x30, [sp, #-0x10]!
0x03EF717C: e10000b4  cbz x1, #0x3ef7198
0x03EF7180: 200840f9  ldr x0, [x1, #0x10]
0x03EF7184: a00000b4  cbz x0, #0x3ef7198
0x03EF7188: 080040f9  ldr x8, [x0]
0x03EF718C: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x03EF7190: fe0741f8  ldr x30, [sp], #0x10
0x03EF7194: 40001fd6  br x2
0x03EF7198: c526ca97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3EF719C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c<object>$$<SetItemSpawningTrackingData>b__25_0
; native signature: System_String_o* MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_object____SetItemSpawningTrackingData_b__25_0 (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c_T__o* __this, Merger_Services_Backend_Sync_Data_Payloads_Board_ItemPayloadBase_o* item, const MethodInfo_3EF719C* method);
; bytes=24 sha256=e947e21067b3eed5959939274fe6f5c75b8e05aecc2a73d41910b2e96f212751 status=arm64_complete_bound indexed_start=True
0x03EF719C: fe0f1ff8  str x30, [sp, #-0x10]!
0x03EF71A0: 810000b4  cbz x1, #0x3ef71b0
0x03EF71A4: 200840f9  ldr x0, [x1, #0x10]
0x03EF71A8: fe0741f8  ldr x30, [sp], #0x10
0x03EF71AC: c0035fd6  ret
0x03EF71B0: bf26ca97  bl #0x3180cac


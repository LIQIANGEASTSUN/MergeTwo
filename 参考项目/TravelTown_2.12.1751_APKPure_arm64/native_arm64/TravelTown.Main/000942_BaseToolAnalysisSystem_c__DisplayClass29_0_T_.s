; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 942 .BaseToolAnalysisSystem.<>c__DisplayClass29_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E58C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass29_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0_object____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0_T__o* __this, const MethodInfo_3F4E58C* method);
; bytes=8 sha256=5ad1a9a685b228075c9bd4caa1d8ddc403d81ef836fb1dba567605204b6215f9 status=arm64_complete_bound indexed_start=True
0x03F4E58C: e1031faa  mov x1, xzr
0x03F4E590: 1b305e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E8CC | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass29_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0_T__o* __this, const MethodInfo_3F4E8CC* method);
; bytes=8 sha256=99dce07ba1e748be1d36b6b50f9e4fcd89696a6b166bcd7877ce98c8dee12902 status=arm64_complete_bound indexed_start=True
0x03F4E8CC: e1031faa  mov x1, xzr
0x03F4E8D0: 4b2f5e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E594 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass29_0<object>$$<FilterToolLevelsByChainProgress>b__0
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0_object____FilterToolLevelsByChainProgress_b__0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0_T__o* __this, MergeEngine_Configuration_Definitions_WeightedToolLevel_o weightedTool, const MethodInfo_3F4E594* method);
; bytes=112 sha256=663314e3dcab814895cf6f5df06fa307c0f0fa59518fc52bbe7a8b66af174af8 status=arm64_complete_bound indexed_start=True
0x03F4E594: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F4E598: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F4E59C: 55ee01d0  adrp x21, #0x7d18000
0x03F4E5A0: a8624039  ldrb w8, [x21, #0x18]
0x03F4E5A4: f40301aa  mov x20, x1
0x03F4E5A8: f30300aa  mov x19, x0
0x03F4E5AC: c8000037  tbnz w8, #0, #0x3f4e5c4
0x03F4E5B0: 60b901d0  adrp x0, #0x767c000
0x03F4E5B4: 002c41f9  ldr x0, [x0, #0x258]
0x03F4E5B8: 18c9c897  bl #0x3180a18
0x03F4E5BC: 28008052  movz w8, #0x1
0x03F4E5C0: a8620039  strb w8, [x21, #0x18]
0x03F4E5C4: 680a40f9  ldr x8, [x19, #0x10]
0x03F4E5C8: c80100b4  cbz x8, #0x3f4e600
0x03F4E5CC: 004540f9  ldr x0, [x8, #0x88]
0x03F4E5D0: 800100b4  cbz x0, #0x3f4e600
0x03F4E5D4: 68b901d0  adrp x8, #0x767c000
0x03F4E5D8: 082d41f9  ldr x8, [x8, #0x258]
0x03F4E5DC: 81fe60d3  lsr x1, x20, #0x20
0x03F4E5E0: 020140f9  ldr x2, [x8]
0x03F4E5E4: 23753b94  bl #0x4e2ba70
0x03F4E5E8: 681a40b9  ldr w8, [x19, #0x18]
0x03F4E5EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F4E5F0: 1f00086b  cmp w0, w8
0x03F4E5F4: e0c79f1a  cset w0, le
0x03F4E5F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F4E5FC: c0035fd6  ret
0x03F4E600: abc9c897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E8D4 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass29_0<__Il2CppFullySharedGenericType>$$<FilterToolLevelsByChainProgress>b__0
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0___Il2CppFullySharedGenericType____FilterToolLevelsByChainProgress_b__0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass29_0_T__o* __this, MergeEngine_Configuration_Definitions_WeightedToolLevel_o weightedTool, const MethodInfo_3F4E8D4* method);
; bytes=112 sha256=16dcb54e0f552e4ae5c9aab55e9545af4659341bb1bcb60d1a643dd0965b7eef status=arm64_complete_bound indexed_start=True
0x03F4E8D4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F4E8D8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F4E8DC: 55ee01d0  adrp x21, #0x7d18000
0x03F4E8E0: a8724039  ldrb w8, [x21, #0x1c]
0x03F4E8E4: f40301aa  mov x20, x1
0x03F4E8E8: f30300aa  mov x19, x0
0x03F4E8EC: c8000037  tbnz w8, #0, #0x3f4e904
0x03F4E8F0: 60b901d0  adrp x0, #0x767c000
0x03F4E8F4: 002c41f9  ldr x0, [x0, #0x258]
0x03F4E8F8: 48c8c897  bl #0x3180a18
0x03F4E8FC: 28008052  movz w8, #0x1
0x03F4E900: a8720039  strb w8, [x21, #0x1c]
0x03F4E904: 680a40f9  ldr x8, [x19, #0x10]
0x03F4E908: c80100b4  cbz x8, #0x3f4e940
0x03F4E90C: 004540f9  ldr x0, [x8, #0x88]
0x03F4E910: 800100b4  cbz x0, #0x3f4e940
0x03F4E914: 68b901d0  adrp x8, #0x767c000
0x03F4E918: 082d41f9  ldr x8, [x8, #0x258]
0x03F4E91C: 81fe60d3  lsr x1, x20, #0x20
0x03F4E920: 020140f9  ldr x2, [x8]
0x03F4E924: 53743b94  bl #0x4e2ba70
0x03F4E928: 681a40b9  ldr w8, [x19, #0x18]
0x03F4E92C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F4E930: 1f00086b  cmp w0, w8
0x03F4E934: e0c79f1a  cset w0, le
0x03F4E938: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F4E93C: c0035fd6  ret
0x03F4E940: dbc8c897  bl #0x3180cac


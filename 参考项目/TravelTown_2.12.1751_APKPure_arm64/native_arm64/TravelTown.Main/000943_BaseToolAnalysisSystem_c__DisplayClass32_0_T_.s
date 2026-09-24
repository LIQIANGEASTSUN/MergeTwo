; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 943 .BaseToolAnalysisSystem.<>c__DisplayClass32_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F54968 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass32_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0_object____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0_T__o* __this, const MethodInfo_3F54968* method);
; bytes=8 sha256=9b34301d92776d5912379adda113dca1ef6ae479e115e4796f3fd0aa8ea8bbe7 status=arm64_complete_bound indexed_start=True
0x03F54968: e1031faa  mov x1, xzr
0x03F5496C: 24175e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F549EC | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass32_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0_T__o* __this, const MethodInfo_3F549EC* method);
; bytes=8 sha256=9fd366c5da2a7d3cf20e6079d78249bbf50836f42557e0f6630b0f326994e3ad status=arm64_complete_bound indexed_start=True
0x03F549EC: e1031faa  mov x1, xzr
0x03F549F0: 03175e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F54970 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass32_0<object>$$<CreateChainBasedFilter>b__0
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0_object____CreateChainBasedFilter_b__0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0_T__o* __this, MergeEngine_Configuration_Definitions_WeightedTool_o weightedTool, const MethodInfo_3F54970* method);
; bytes=124 sha256=3809fa9f1524af65fac32804c2baa366f9315c239323b296c134224d9c44e6c8 status=arm64_complete_bound indexed_start=True
0x03F54970: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F54974: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F54978: 35ee0190  adrp x21, #0x7d18000
0x03F5497C: a8264139  ldrb w8, [x21, #0x49]
0x03F54980: f30301aa  mov x19, x1
0x03F54984: f40300aa  mov x20, x0
0x03F54988: 28010037  tbnz w8, #0, #0x3f549ac
0x03F5498C: 40b90190  adrp x0, #0x767c000
0x03F54990: 006c41f9  ldr x0, [x0, #0x2d8]
0x03F54994: 21b0c897  bl #0x3180a18
0x03F54998: 40b90190  adrp x0, #0x767c000
0x03F5499C: 007041f9  ldr x0, [x0, #0x2e0]
0x03F549A0: 1eb0c897  bl #0x3180a18
0x03F549A4: 28008052  movz w8, #0x1
0x03F549A8: a8260139  strb w8, [x21, #0x49]
0x03F549AC: 800a40f9  ldr x0, [x20, #0x10]
0x03F549B0: c00100b4  cbz x0, #0x3f549e8
0x03F549B4: 49b90190  adrp x9, #0x767c000
0x03F549B8: 081840b9  ldr w8, [x0, #0x18]
0x03F549BC: 296d41f9  ldr x9, [x9, #0x2d8]
0x03F549C0: 61fe60d3  lsr x1, x19, #0x20
0x03F549C4: 1f090071  cmp w8, #2
0x03F549C8: 220140f9  ldr x2, [x9]
0x03F549CC: f3a79f1a  cset w19, lt
0x03F549D0: 18200394  bl #0x401ca30
0x03F549D4: 6802004a  eor w8, w19, w0
0x03F549D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F549DC: 00010012  and w0, w8, #1
0x03F549E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F549E4: c0035fd6  ret
0x03F549E8: b1b0c897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F549F4 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass32_0<__Il2CppFullySharedGenericType>$$<CreateChainBasedFilter>b__0
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0___Il2CppFullySharedGenericType____CreateChainBasedFilter_b__0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass32_0_T__o* __this, MergeEngine_Configuration_Definitions_WeightedTool_o weightedTool, const MethodInfo_3F549F4* method);
; bytes=124 sha256=99d86933a64a2eb0856057cb336edaefaa00c3a38bc792395c04b4a3abbec7e0 status=arm64_complete_bound indexed_start=True
0x03F549F4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F549F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F549FC: 35ee0190  adrp x21, #0x7d18000
0x03F54A00: a82a4139  ldrb w8, [x21, #0x4a]
0x03F54A04: f30301aa  mov x19, x1
0x03F54A08: f40300aa  mov x20, x0
0x03F54A0C: 28010037  tbnz w8, #0, #0x3f54a30
0x03F54A10: 40b90190  adrp x0, #0x767c000
0x03F54A14: 006c41f9  ldr x0, [x0, #0x2d8]
0x03F54A18: 00b0c897  bl #0x3180a18
0x03F54A1C: 40b90190  adrp x0, #0x767c000
0x03F54A20: 007041f9  ldr x0, [x0, #0x2e0]
0x03F54A24: fdafc897  bl #0x3180a18
0x03F54A28: 28008052  movz w8, #0x1
0x03F54A2C: a82a0139  strb w8, [x21, #0x4a]
0x03F54A30: 800a40f9  ldr x0, [x20, #0x10]
0x03F54A34: c00100b4  cbz x0, #0x3f54a6c
0x03F54A38: 49b90190  adrp x9, #0x767c000
0x03F54A3C: 081840b9  ldr w8, [x0, #0x18]
0x03F54A40: 296d41f9  ldr x9, [x9, #0x2d8]
0x03F54A44: 61fe60d3  lsr x1, x19, #0x20
0x03F54A48: 1f090071  cmp w8, #2
0x03F54A4C: 220140f9  ldr x2, [x9]
0x03F54A50: f3a79f1a  cset w19, lt
0x03F54A54: f71f0394  bl #0x401ca30
0x03F54A58: 6802004a  eor w8, w19, w0
0x03F54A5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F54A60: 00010012  and w0, w8, #1
0x03F54A64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F54A68: c0035fd6  ret
0x03F54A6C: 90b0c897  bl #0x3180cac


; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 527 MergeEngine.Model.Configuration.ConfigurationModelBase<TData>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D919B4 | MergeEngine.Model.Configuration.ConfigurationModelBase<object>$$InitializeModel
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase_object___InitializeModel (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, const MethodInfo_4D919B4* method);
; bytes=124 sha256=3530c5af0cb8272d9b4af7668562825a7495be75a7c88ba9733dcd77de2022a3 status=arm64_complete_bound indexed_start=True
0x04D919B4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04D919B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04D919BC: 281040f9  ldr x8, [x1, #0x20]
0x04D919C0: f30301aa  mov x19, x1
0x04D919C4: f40300aa  mov x20, x0
0x04D919C8: 086140f9  ldr x8, [x8, #0xc0]
0x04D919CC: 080540f9  ldr x8, [x8, #8]
0x04D919D0: 09d54439  ldrb w9, [x8, #0x135]
0x04D919D4: 89000037  tbnz w9, #0, #0x4d919e4
0x04D919D8: e00308aa  mov x0, x8
0x04D919DC: 90138f97  bl #0x315681c
0x04D919E0: e80300aa  mov x8, x0
0x04D919E4: e00308aa  mov x0, x8
0x04D919E8: aebc8f97  bl #0x3180ca0
0x04D919EC: 681240f9  ldr x8, [x19, #0x20]
0x04D919F0: e10314aa  mov x1, x20
0x04D919F4: f50300aa  mov x21, x0
0x04D919F8: 086140f9  ldr x8, [x8, #0xc0]
0x04D919FC: 020140f9  ldr x2, [x8]
0x04D91A00: 030940f9  ldr x3, [x8, #0x10]
0x04D91A04: f4411694  bl #0x53221d4
0x04D91A08: 340100b4  cbz x20, #0x4d91a2c
0x04D91A0C: 681240f9  ldr x8, [x19, #0x20]
0x04D91A10: e00314aa  mov x0, x20
0x04D91A14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04D91A18: e10315aa  mov x1, x21
0x04D91A1C: 086140f9  ldr x8, [x8, #0xc0]
0x04D91A20: 020d40f9  ldr x2, [x8, #0x18]
0x04D91A24: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04D91A28: 3ed5b817  b #0x3bc6f20
0x04D91A2C: a0bc8f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91AC4 | MergeEngine.Model.Configuration.ConfigurationModelBase<__Il2CppFullySharedGenericType>$$InitializeModel
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase___Il2CppFullySharedGenericType___InitializeModel (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, const MethodInfo_4D91AC4* method);
; bytes=132 sha256=7dc94b1b76001a441247f32ffec08772e76a239b6131e6daeb4fbe15a8dd5e56 status=arm64_complete_bound indexed_start=True
0x04D91AC4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04D91AC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04D91ACC: 281040f9  ldr x8, [x1, #0x20]
0x04D91AD0: f30301aa  mov x19, x1
0x04D91AD4: f40300aa  mov x20, x0
0x04D91AD8: 086140f9  ldr x8, [x8, #0xc0]
0x04D91ADC: 080540f9  ldr x8, [x8, #8]
0x04D91AE0: 09d54439  ldrb w9, [x8, #0x135]
0x04D91AE4: 89000037  tbnz w9, #0, #0x4d91af4
0x04D91AE8: e00308aa  mov x0, x8
0x04D91AEC: 4c138f97  bl #0x315681c
0x04D91AF0: e80300aa  mov x8, x0
0x04D91AF4: e00308aa  mov x0, x8
0x04D91AF8: 6abc8f97  bl #0x3180ca0
0x04D91AFC: 681240f9  ldr x8, [x19, #0x20]
0x04D91B00: e10314aa  mov x1, x20
0x04D91B04: f50300aa  mov x21, x0
0x04D91B08: 086140f9  ldr x8, [x8, #0xc0]
0x04D91B0C: 030940f9  ldr x3, [x8, #0x10]
0x04D91B10: 020140f9  ldr x2, [x8]
0x04D91B14: 690040f9  ldr x9, [x3]
0x04D91B18: 20013fd6  blr x9
0x04D91B1C: 540100b4  cbz x20, #0x4d91b44
0x04D91B20: 681240f9  ldr x8, [x19, #0x20]
0x04D91B24: e00314aa  mov x0, x20
0x04D91B28: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04D91B2C: e10315aa  mov x1, x21
0x04D91B30: 086140f9  ldr x8, [x8, #0xc0]
0x04D91B34: 020d40f9  ldr x2, [x8, #0x18]
0x04D91B38: 430040f9  ldr x3, [x2]
0x04D91B3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04D91B40: 60001fd6  br x3
0x04D91B44: 5abc8f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91A30 | MergeEngine.Model.Configuration.ConfigurationModelBase<object>$$DataLoaded
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase_object___DataLoaded (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, Il2CppObject* data, const MethodInfo_4D91A30* method);
; bytes=16 sha256=cbc1744ffcdd80c6ac5ca9b71bd56ab21a9cdf5ed96ead38bff9d93c01e7d1ce status=arm64_complete_bound indexed_start=True
0x04D91A30: 080040f9  ldr x8, [x0]
0x04D91A34: 033541f9  ldr x3, [x8, #0x268]
0x04D91A38: 023941f9  ldr x2, [x8, #0x270]
0x04D91A3C: 60001fd6  br x3

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91B48 | MergeEngine.Model.Configuration.ConfigurationModelBase<__Il2CppFullySharedGenericType>$$DataLoaded
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase___Il2CppFullySharedGenericType___DataLoaded (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o data, const MethodInfo_4D91B48* method);
; bytes=192 sha256=2e2f6dfd65cf7a67d6004b7b577816a04a04d70dd3f38351ec643723dc04dd39 status=arm64_complete_bound indexed_start=True
0x04D91B48: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04D91B4C: f65701a9  stp x22, x21, [sp, #0x10]
0x04D91B50: f44f02a9  stp x20, x19, [sp, #0x20]
0x04D91B54: fd030091  mov x29, sp
0x04D91B58: ff8300d1  sub sp, sp, #0x20
0x04D91B5C: 55d03bd5  mrs x21, tpidr_el0
0x04D91B60: a81640f9  ldr x8, [x21, #0x28]
0x04D91B64: e9030091  mov x9, sp
0x04D91B68: f30300aa  mov x19, x0
0x04D91B6C: a8831ff8  stur x8, [x29, #-8]
0x04D91B70: a1831ef8  stur x1, [x29, #-0x18]
0x04D91B74: 561040f9  ldr x22, [x2, #0x20]
0x04D91B78: c86240f9  ldr x8, [x22, #0xc0]
0x04D91B7C: 081140f9  ldr x8, [x8, #0x20]
0x04D91B80: 02fd40b9  ldr w2, [x8, #0xfc]
0x04D91B84: 4a3c0091  add x10, x2, #0xf
0x04D91B88: 4a717c92  and x10, x10, #0x1fffffff0
0x04D91B8C: 34010acb  sub x20, x9, x10
0x04D91B90: 9f020091  mov sp, x20
0x04D91B94: 082940b9  ldr w8, [x8, #0x28]
0x04D91B98: e00314aa  mov x0, x20
0x04D91B9C: 1f010071  cmp w8, #0
0x04D91BA0: a86300d1  sub x8, x29, #0x18
0x04D91BA4: 21b0889a  csel x1, x1, x8, lt
0x04D91BA8: 72f39094  bl #0x71ce970
0x04D91BAC: c86240f9  ldr x8, [x22, #0xc0]
0x04D91BB0: 081140f9  ldr x8, [x8, #0x20]
0x04D91BB4: 082940b9  ldr w8, [x8, #0x28]
0x04D91BB8: 4800f837  tbnz w8, #0x1f, #0x4d91bc0
0x04D91BBC: 940240f9  ldr x20, [x20]
0x04D91BC0: 680240f9  ldr x8, [x19]
0x04D91BC4: b4031ff8  stur x20, [x29, #-0x10]
0x04D91BC8: a34300d1  sub x3, x29, #0x10
0x04D91BCC: e20313aa  mov x2, x19
0x04D91BD0: 013941f9  ldr x1, [x8, #0x270]
0x04D91BD4: e40314aa  mov x4, x20
0x04D91BD8: 20a040a9  ldp x0, x8, [x1, #8]
0x04D91BDC: 00013fd6  blr x8
0x04D91BE0: a81640f9  ldr x8, [x21, #0x28]
0x04D91BE4: a9835ff8  ldur x9, [x29, #-8]
0x04D91BE8: 1f0109eb  cmp x8, x9
0x04D91BEC: c1000054  b.ne #0x4d91c04
0x04D91BF0: bf030091  mov sp, x29
0x04D91BF4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04D91BF8: f65741a9  ldp x22, x21, [sp, #0x10]
0x04D91BFC: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04D91C00: c0035fd6  ret
0x04D91C04: 63f39094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91A40 | MergeEngine.Model.Configuration.ConfigurationModelBase<object>$$DisposeModel
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase_object___DisposeModel (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, const MethodInfo_4D91A40* method);
; bytes=124 sha256=f94a8eb279942752e3ca9cfac1ff86a167ac179b746e78f6f9c3dea8705dd259 status=arm64_complete_bound indexed_start=True
0x04D91A40: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04D91A44: f44f01a9  stp x20, x19, [sp, #0x10]
0x04D91A48: 281040f9  ldr x8, [x1, #0x20]
0x04D91A4C: f30301aa  mov x19, x1
0x04D91A50: f40300aa  mov x20, x0
0x04D91A54: 086140f9  ldr x8, [x8, #0xc0]
0x04D91A58: 080540f9  ldr x8, [x8, #8]
0x04D91A5C: 09d54439  ldrb w9, [x8, #0x135]
0x04D91A60: 89000037  tbnz w9, #0, #0x4d91a70
0x04D91A64: e00308aa  mov x0, x8
0x04D91A68: 6d138f97  bl #0x315681c
0x04D91A6C: e80300aa  mov x8, x0
0x04D91A70: e00308aa  mov x0, x8
0x04D91A74: 8bbc8f97  bl #0x3180ca0
0x04D91A78: 681240f9  ldr x8, [x19, #0x20]
0x04D91A7C: e10314aa  mov x1, x20
0x04D91A80: f50300aa  mov x21, x0
0x04D91A84: 086140f9  ldr x8, [x8, #0xc0]
0x04D91A88: 020140f9  ldr x2, [x8]
0x04D91A8C: 030940f9  ldr x3, [x8, #0x10]
0x04D91A90: d1411694  bl #0x53221d4
0x04D91A94: 340100b4  cbz x20, #0x4d91ab8
0x04D91A98: 681240f9  ldr x8, [x19, #0x20]
0x04D91A9C: e00314aa  mov x0, x20
0x04D91AA0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04D91AA4: e10315aa  mov x1, x21
0x04D91AA8: 086140f9  ldr x8, [x8, #0xc0]
0x04D91AAC: 021d40f9  ldr x2, [x8, #0x38]
0x04D91AB0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04D91AB4: 2cd6b817  b #0x3bc7364
0x04D91AB8: 7dbc8f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91C08 | MergeEngine.Model.Configuration.ConfigurationModelBase<__Il2CppFullySharedGenericType>$$DisposeModel
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase___Il2CppFullySharedGenericType___DisposeModel (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, const MethodInfo_4D91C08* method);
; bytes=132 sha256=83c10d5e6a639b7b6f38c0156d454ce54a0aad0cf0f46d5d76b6a579a6090a60 status=arm64_complete_bound indexed_start=True
0x04D91C08: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04D91C0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04D91C10: 281040f9  ldr x8, [x1, #0x20]
0x04D91C14: f30301aa  mov x19, x1
0x04D91C18: f40300aa  mov x20, x0
0x04D91C1C: 086140f9  ldr x8, [x8, #0xc0]
0x04D91C20: 080540f9  ldr x8, [x8, #8]
0x04D91C24: 09d54439  ldrb w9, [x8, #0x135]
0x04D91C28: 89000037  tbnz w9, #0, #0x4d91c38
0x04D91C2C: e00308aa  mov x0, x8
0x04D91C30: fb128f97  bl #0x315681c
0x04D91C34: e80300aa  mov x8, x0
0x04D91C38: e00308aa  mov x0, x8
0x04D91C3C: 19bc8f97  bl #0x3180ca0
0x04D91C40: 681240f9  ldr x8, [x19, #0x20]
0x04D91C44: e10314aa  mov x1, x20
0x04D91C48: f50300aa  mov x21, x0
0x04D91C4C: 086140f9  ldr x8, [x8, #0xc0]
0x04D91C50: 030940f9  ldr x3, [x8, #0x10]
0x04D91C54: 020140f9  ldr x2, [x8]
0x04D91C58: 690040f9  ldr x9, [x3]
0x04D91C5C: 20013fd6  blr x9
0x04D91C60: 540100b4  cbz x20, #0x4d91c88
0x04D91C64: 681240f9  ldr x8, [x19, #0x20]
0x04D91C68: e00314aa  mov x0, x20
0x04D91C6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04D91C70: e10315aa  mov x1, x21
0x04D91C74: 086140f9  ldr x8, [x8, #0xc0]
0x04D91C78: 021d40f9  ldr x2, [x8, #0x38]
0x04D91C7C: 430040f9  ldr x3, [x2]
0x04D91C80: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04D91C84: 60001fd6  br x3
0x04D91C88: 09bc8f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91ABC | MergeEngine.Model.Configuration.ConfigurationModelBase<object>$$.ctor
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase_object____ctor (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, const MethodInfo_4D91ABC* method);
; bytes=8 sha256=3217c2b9720b9e2aef5d0cdc0a68efb161c32ab0b1f39784e2ff4666a46cb8af status=arm64_complete_bound indexed_start=True
0x04D91ABC: e1031faa  mov x1, xzr
0x04D91AC0: 26e96e14  b #0x694bf58

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D91C8C | MergeEngine.Model.Configuration.ConfigurationModelBase<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_Model_Configuration_ConfigurationModelBase___Il2CppFullySharedGenericType____ctor (MergeEngine_Model_Configuration_ConfigurationModelBase_TData__o* __this, const MethodInfo_4D91C8C* method);
; bytes=8 sha256=8150e2b1f41980ffea22e9729401af8bb06fe6656a270c5ed85ade63f3626112 status=arm64_complete_bound indexed_start=True
0x04D91C8C: e1031faa  mov x1, xzr
0x04D91C90: b2e86e14  b #0x694bf58


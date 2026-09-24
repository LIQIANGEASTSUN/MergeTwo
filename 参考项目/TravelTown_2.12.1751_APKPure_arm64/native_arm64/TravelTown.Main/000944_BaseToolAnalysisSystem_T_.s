; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 944 MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C035F8 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$get_Priority
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___get_Priority (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C035F8* method);
; bytes=8 sha256=fe47d7a16181f369cbe73d0e546796e691abdb56b6757a3ab277e21315425461 status=arm64_complete_bound indexed_start=True
0x04C035F8: e0018052  movz w0, #0xf
0x04C035FC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05708 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$get_Priority
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___get_Priority (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C05708* method);
; bytes=8 sha256=fe47d7a16181f369cbe73d0e546796e691abdb56b6757a3ab277e21315425461 status=arm64_complete_bound indexed_start=True
0x04C05708: e0018052  movz w0, #0xf
0x04C0570C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C03600 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$get_GraphToResource
; native signature: System_Collections_Generic_Dictionary_IMergeGraphItem__PlayerResourceEnum__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___get_GraphToResource (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C03600* method);
; bytes=8 sha256=9f68aa97a5258a1e1fbe41f1226846f8b2e5cde4fa5f5b786f7a74d470a04298 status=arm64_complete_bound indexed_start=True
0x04C03600: 003c40f9  ldr x0, [x0, #0x78]
0x04C03604: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05710 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$get_GraphToResource
; native signature: System_Collections_Generic_Dictionary_IMergeGraphItem__PlayerResourceEnum__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___get_GraphToResource (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C05710* method);
; bytes=8 sha256=9f68aa97a5258a1e1fbe41f1226846f8b2e5cde4fa5f5b786f7a74d470a04298 status=arm64_complete_bound indexed_start=True
0x04C05710: 003c40f9  ldr x0, [x0, #0x78]
0x04C05714: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C03608 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$get_ResourceToGraph
; native signature: System_Collections_Generic_Dictionary_PlayerResourceEnum__IMergeGraphItem__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___get_ResourceToGraph (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C03608* method);
; bytes=8 sha256=509d712a0d747485a74d3684f00fd4941c9c210d3f084bf792b1b75c5e6c3652 status=arm64_complete_bound indexed_start=True
0x04C03608: 004040f9  ldr x0, [x0, #0x80]
0x04C0360C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05718 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$get_ResourceToGraph
; native signature: System_Collections_Generic_Dictionary_PlayerResourceEnum__IMergeGraphItem__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___get_ResourceToGraph (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C05718* method);
; bytes=8 sha256=509d712a0d747485a74d3684f00fd4941c9c210d3f084bf792b1b75c5e6c3652 status=arm64_complete_bound indexed_start=True
0x04C05718: 004040f9  ldr x0, [x0, #0x80]
0x04C0571C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C03610 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$get_ToolsRequiredByMetagameBooster
; native signature: float MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___get_ToolsRequiredByMetagameBooster (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C03610* method);
; bytes=208 sha256=0e70bdf86cf8506aad5e0216783579f214145637c92e71448d356df55c6c3e3d status=arm64_complete_bound indexed_start=True
0x04C03610: e80f1efc  str d8, [sp, #-0x20]!
0x04C03614: fe0700f9  str x30, [sp, #8]
0x04C03618: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C0361C: b48801f0  adrp x20, #0x7d1a000
0x04C03620: 88ba7939  ldrb w8, [x20, #0xe6e]
0x04C03624: f30300aa  mov x19, x0
0x04C03628: c8000037  tbnz w8, #0, #0x4c03640
0x04C0362C: e0530190  adrp x0, #0x767f000
0x04C03630: 00a847f9  ldr x0, [x0, #0xf50]
0x04C03634: f9f49597  bl #0x3180a18
0x04C03638: 28008052  movz w8, #0x1
0x04C0363C: 88ba3939  strb w8, [x20, #0xe6e]
0x04C03640: 742e40f9  ldr x20, [x19, #0x58]
0x04C03644: d40400b4  cbz x20, #0x4c036dc
0x04C03648: ea530190  adrp x10, #0x767f000
0x04C0364C: 880240f9  ldr x8, [x20]
0x04C03650: 4aa947f9  ldr x10, [x10, #0xf50]
0x04C03654: 095d4279  ldrh w9, [x8, #0x12e]
0x04C03658: 410140f9  ldr x1, [x10]
0x04C0365C: 290100b4  cbz x9, #0x4c03680
0x04C03660: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C03664: 4a210091  add x10, x10, #8
0x04C03668: 4b815ff8  ldur x11, [x10, #-8]
0x04C0366C: 7f0101eb  cmp x11, x1
0x04C03670: 00010054  b.eq #0x4c03690
0x04C03674: 290500f1  subs x9, x9, #1
0x04C03678: 4a410091  add x10, x10, #0x10
0x04C0367C: 61ffff54  b.ne #0x4c03668
0x04C03680: 42018052  movz w2, #0xa
0x04C03684: e00314aa  mov x0, x20
0x04C03688: 224d9597  bl #0x3156b10
0x04C0368C: 05000014  b #0x4c036a0
0x04C03690: 490140b9  ldr w9, [x10]
0x04C03694: 29290011  add w9, w9, #0xa
0x04C03698: 08d1298b  add x8, x8, w9, sxtw #4
0x04C0369C: 00e10491  add x0, x8, #0x138
0x04C036A0: 080440a9  ldp x8, x1, [x0]
0x04C036A4: e00314aa  mov x0, x20
0x04C036A8: 00013fd6  blr x8
0x04C036AC: 800100b4  cbz x0, #0x4c036dc
0x04C036B0: 683a40f9  ldr x8, [x19, #0x70]
0x04C036B4: 480100b4  cbz x8, #0x4c036dc
0x04C036B8: 08f040bd  ldr s8, [x0, #0xf0]
0x04C036BC: e00308aa  mov x0, x8
0x04C036C0: e1031faa  mov x1, xzr
0x04C036C4: 72076494  bl #0x650548c
0x04C036C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C036CC: fe0740f9  ldr x30, [sp, #8]
0x04C036D0: 0009201e  fmul s0, s8, s0
0x04C036D4: e80742fc  ldr d8, [sp], #0x20
0x04C036D8: c0035fd6  ret
0x04C036DC: 74f59597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05720 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$get_ToolsRequiredByMetagameBooster
; native signature: float MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___get_ToolsRequiredByMetagameBooster (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C05720* method);
; bytes=208 sha256=56b172f1bc3ef528fc5da845c910fd5940714c4ffc6a61e17cbac9af0ed380a0 status=arm64_complete_bound indexed_start=True
0x04C05720: e80f1efc  str d8, [sp, #-0x20]!
0x04C05724: fe0700f9  str x30, [sp, #8]
0x04C05728: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C0572C: b48801b0  adrp x20, #0x7d1a000
0x04C05730: 880a7a39  ldrb w8, [x20, #0xe82]
0x04C05734: f30300aa  mov x19, x0
0x04C05738: c8000037  tbnz w8, #0, #0x4c05750
0x04C0573C: c05301d0  adrp x0, #0x767f000
0x04C05740: 00a847f9  ldr x0, [x0, #0xf50]
0x04C05744: b5ec9597  bl #0x3180a18
0x04C05748: 28008052  movz w8, #0x1
0x04C0574C: 880a3a39  strb w8, [x20, #0xe82]
0x04C05750: 742e40f9  ldr x20, [x19, #0x58]
0x04C05754: d40400b4  cbz x20, #0x4c057ec
0x04C05758: ca5301d0  adrp x10, #0x767f000
0x04C0575C: 880240f9  ldr x8, [x20]
0x04C05760: 4aa947f9  ldr x10, [x10, #0xf50]
0x04C05764: 095d4279  ldrh w9, [x8, #0x12e]
0x04C05768: 410140f9  ldr x1, [x10]
0x04C0576C: 290100b4  cbz x9, #0x4c05790
0x04C05770: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05774: 4a210091  add x10, x10, #8
0x04C05778: 4b815ff8  ldur x11, [x10, #-8]
0x04C0577C: 7f0101eb  cmp x11, x1
0x04C05780: 00010054  b.eq #0x4c057a0
0x04C05784: 290500f1  subs x9, x9, #1
0x04C05788: 4a410091  add x10, x10, #0x10
0x04C0578C: 61ffff54  b.ne #0x4c05778
0x04C05790: 42018052  movz w2, #0xa
0x04C05794: e00314aa  mov x0, x20
0x04C05798: de449597  bl #0x3156b10
0x04C0579C: 05000014  b #0x4c057b0
0x04C057A0: 490140b9  ldr w9, [x10]
0x04C057A4: 29290011  add w9, w9, #0xa
0x04C057A8: 08d1298b  add x8, x8, w9, sxtw #4
0x04C057AC: 00e10491  add x0, x8, #0x138
0x04C057B0: 080440a9  ldp x8, x1, [x0]
0x04C057B4: e00314aa  mov x0, x20
0x04C057B8: 00013fd6  blr x8
0x04C057BC: 800100b4  cbz x0, #0x4c057ec
0x04C057C0: 683a40f9  ldr x8, [x19, #0x70]
0x04C057C4: 480100b4  cbz x8, #0x4c057ec
0x04C057C8: 08f040bd  ldr s8, [x0, #0xf0]
0x04C057CC: e00308aa  mov x0, x8
0x04C057D0: e1031faa  mov x1, xzr
0x04C057D4: 2eff6394  bl #0x650548c
0x04C057D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C057DC: fe0740f9  ldr x30, [sp, #8]
0x04C057E0: 0009201e  fmul s0, s8, s0
0x04C057E4: e80742fc  ldr d8, [sp], #0x20
0x04C057E8: c0035fd6  ret
0x04C057EC: 30ed9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C036E0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$OnWillProcessComponents
; native signature: System_Collections_Generic_IEnumerable_T__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___OnWillProcessComponents (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_ObjectModel_ReadOnlyCollection_T__o* components, const MethodInfo_4C036E0* method);
; bytes=332 sha256=637bc9857ed3db5df02ca5da151c00887016e71233dd0b284a9b88a20a940196 status=arm64_complete_bound indexed_start=True
0x04C036E0: fe0f1df8  str x30, [sp, #-0x30]!
0x04C036E4: f65701a9  stp x22, x21, [sp, #0x10]
0x04C036E8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C036EC: 481040f9  ldr x8, [x2, #0x20]
0x04C036F0: f30302aa  mov x19, x2
0x04C036F4: f40301aa  mov x20, x1
0x04C036F8: 086140f9  ldr x8, [x8, #0xc0]
0x04C036FC: 001140f9  ldr x0, [x8, #0x20]
0x04C03700: 08d44439  ldrb w8, [x0, #0x135]
0x04C03704: 48000037  tbnz w8, #0, #0x4c0370c
0x04C03708: 454c9597  bl #0x315681c
0x04C0370C: 08e040b9  ldr w8, [x0, #0xe0]
0x04C03710: 48000035  cbnz w8, #0x4c03718
0x04C03714: 1ef59597  bl #0x3180b8c
0x04C03718: 681240f9  ldr x8, [x19, #0x20]
0x04C0371C: 086140f9  ldr x8, [x8, #0xc0]
0x04C03720: 001140f9  ldr x0, [x8, #0x20]
0x04C03724: 08d44439  ldrb w8, [x0, #0x135]
0x04C03728: 48000037  tbnz w8, #0, #0x4c03730
0x04C0372C: 3c4c9597  bl #0x315681c
0x04C03730: 085c40f9  ldr x8, [x0, #0xb8]
0x04C03734: 150540f9  ldr x21, [x8, #8]
0x04C03738: 950600b5  cbnz x21, #0x4c03808
0x04C0373C: 681240f9  ldr x8, [x19, #0x20]
0x04C03740: 086140f9  ldr x8, [x8, #0xc0]
0x04C03744: 001140f9  ldr x0, [x8, #0x20]
0x04C03748: 08d44439  ldrb w8, [x0, #0x135]
0x04C0374C: 48000037  tbnz w8, #0, #0x4c03754
0x04C03750: 334c9597  bl #0x315681c
0x04C03754: 08e040b9  ldr w8, [x0, #0xe0]
0x04C03758: 48000035  cbnz w8, #0x4c03760
0x04C0375C: 0cf59597  bl #0x3180b8c
0x04C03760: 681240f9  ldr x8, [x19, #0x20]
0x04C03764: 086140f9  ldr x8, [x8, #0xc0]
0x04C03768: 001140f9  ldr x0, [x8, #0x20]
0x04C0376C: 09d44439  ldrb w9, [x0, #0x135]
0x04C03770: 89000037  tbnz w9, #0, #0x4c03780
0x04C03774: 2a4c9597  bl #0x315681c
0x04C03778: 681240f9  ldr x8, [x19, #0x20]
0x04C0377C: 086140f9  ldr x8, [x8, #0xc0]
0x04C03780: 080d40f9  ldr x8, [x8, #0x18]
0x04C03784: 095c40f9  ldr x9, [x0, #0xb8]
0x04C03788: 0ad54439  ldrb w10, [x8, #0x135]
0x04C0378C: 360140f9  ldr x22, [x9]
0x04C03790: 8a000037  tbnz w10, #0, #0x4c037a0
0x04C03794: e00308aa  mov x0, x8
0x04C03798: 214c9597  bl #0x315681c
0x04C0379C: e80300aa  mov x8, x0
0x04C037A0: e00308aa  mov x0, x8
0x04C037A4: 3ff59597  bl #0x3180ca0
0x04C037A8: 681240f9  ldr x8, [x19, #0x20]
0x04C037AC: e10316aa  mov x1, x22
0x04C037B0: f50300aa  mov x21, x0
0x04C037B4: 086140f9  ldr x8, [x8, #0xc0]
0x04C037B8: 028d42a9  ldp x2, x3, [x8, #0x28]
0x04C037BC: 004a1994  bl #0x5255fbc
0x04C037C0: 681240f9  ldr x8, [x19, #0x20]
0x04C037C4: 086140f9  ldr x8, [x8, #0xc0]
0x04C037C8: 001140f9  ldr x0, [x8, #0x20]
0x04C037CC: 09d44439  ldrb w9, [x0, #0x135]
0x04C037D0: 89000037  tbnz w9, #0, #0x4c037e0
0x04C037D4: 124c9597  bl #0x315681c
0x04C037D8: 681240f9  ldr x8, [x19, #0x20]
0x04C037DC: 086140f9  ldr x8, [x8, #0xc0]
0x04C037E0: 095c40f9  ldr x9, [x0, #0xb8]
0x04C037E4: 350500f9  str x21, [x9, #8]
0x04C037E8: 001140f9  ldr x0, [x8, #0x20]
0x04C037EC: 08d44439  ldrb w8, [x0, #0x135]
0x04C037F0: 48000037  tbnz w8, #0, #0x4c037f8
0x04C037F4: 0a4c9597  bl #0x315681c
0x04C037F8: 085c40f9  ldr x8, [x0, #0xb8]
0x04C037FC: e10315aa  mov x1, x21
0x04C03800: 00210091  add x0, x8, #8
0x04C03804: 70f49597  bl #0x31809c4
0x04C03808: 681240f9  ldr x8, [x19, #0x20]
0x04C0380C: e00314aa  mov x0, x20
0x04C03810: e10315aa  mov x1, x21
0x04C03814: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C03818: 086140f9  ldr x8, [x8, #0xc0]
0x04C0381C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C03820: 021d40f9  ldr x2, [x8, #0x38]
0x04C03824: fe0743f8  ldr x30, [sp], #0x30
0x04C03828: a00ec217  b #0x3c872a8

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C057F0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$OnWillProcessComponents
; native signature: System_Collections_Generic_IEnumerable_T__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___OnWillProcessComponents (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_ObjectModel_ReadOnlyCollection_T__o* components, const MethodInfo_4C057F0* method);
; bytes=340 sha256=d676c4f131f0363ede92a4e412039a16f31f158316a199b748837f6633fca560 status=arm64_complete_bound indexed_start=True
0x04C057F0: fe0f1df8  str x30, [sp, #-0x30]!
0x04C057F4: f65701a9  stp x22, x21, [sp, #0x10]
0x04C057F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C057FC: 481040f9  ldr x8, [x2, #0x20]
0x04C05800: f30302aa  mov x19, x2
0x04C05804: f40301aa  mov x20, x1
0x04C05808: 086140f9  ldr x8, [x8, #0xc0]
0x04C0580C: 001140f9  ldr x0, [x8, #0x20]
0x04C05810: 08d44439  ldrb w8, [x0, #0x135]
0x04C05814: 48000037  tbnz w8, #0, #0x4c0581c
0x04C05818: 01449597  bl #0x315681c
0x04C0581C: 08e040b9  ldr w8, [x0, #0xe0]
0x04C05820: 48000035  cbnz w8, #0x4c05828
0x04C05824: daec9597  bl #0x3180b8c
0x04C05828: 681240f9  ldr x8, [x19, #0x20]
0x04C0582C: 086140f9  ldr x8, [x8, #0xc0]
0x04C05830: 001140f9  ldr x0, [x8, #0x20]
0x04C05834: 08d44439  ldrb w8, [x0, #0x135]
0x04C05838: 48000037  tbnz w8, #0, #0x4c05840
0x04C0583C: f8439597  bl #0x315681c
0x04C05840: 085c40f9  ldr x8, [x0, #0xb8]
0x04C05844: 150540f9  ldr x21, [x8, #8]
0x04C05848: b50600b5  cbnz x21, #0x4c0591c
0x04C0584C: 681240f9  ldr x8, [x19, #0x20]
0x04C05850: 086140f9  ldr x8, [x8, #0xc0]
0x04C05854: 001140f9  ldr x0, [x8, #0x20]
0x04C05858: 08d44439  ldrb w8, [x0, #0x135]
0x04C0585C: 48000037  tbnz w8, #0, #0x4c05864
0x04C05860: ef439597  bl #0x315681c
0x04C05864: 08e040b9  ldr w8, [x0, #0xe0]
0x04C05868: 48000035  cbnz w8, #0x4c05870
0x04C0586C: c8ec9597  bl #0x3180b8c
0x04C05870: 681240f9  ldr x8, [x19, #0x20]
0x04C05874: 086140f9  ldr x8, [x8, #0xc0]
0x04C05878: 001140f9  ldr x0, [x8, #0x20]
0x04C0587C: 09d44439  ldrb w9, [x0, #0x135]
0x04C05880: 89000037  tbnz w9, #0, #0x4c05890
0x04C05884: e6439597  bl #0x315681c
0x04C05888: 681240f9  ldr x8, [x19, #0x20]
0x04C0588C: 086140f9  ldr x8, [x8, #0xc0]
0x04C05890: 080d40f9  ldr x8, [x8, #0x18]
0x04C05894: 095c40f9  ldr x9, [x0, #0xb8]
0x04C05898: 0ad54439  ldrb w10, [x8, #0x135]
0x04C0589C: 360140f9  ldr x22, [x9]
0x04C058A0: 8a000037  tbnz w10, #0, #0x4c058b0
0x04C058A4: e00308aa  mov x0, x8
0x04C058A8: dd439597  bl #0x315681c
0x04C058AC: e80300aa  mov x8, x0
0x04C058B0: e00308aa  mov x0, x8
0x04C058B4: fbec9597  bl #0x3180ca0
0x04C058B8: 681240f9  ldr x8, [x19, #0x20]
0x04C058BC: e10316aa  mov x1, x22
0x04C058C0: f50300aa  mov x21, x0
0x04C058C4: 086140f9  ldr x8, [x8, #0xc0]
0x04C058C8: 028d42a9  ldp x2, x3, [x8, #0x28]
0x04C058CC: 680040f9  ldr x8, [x3]
0x04C058D0: 00013fd6  blr x8
0x04C058D4: 681240f9  ldr x8, [x19, #0x20]
0x04C058D8: 086140f9  ldr x8, [x8, #0xc0]
0x04C058DC: 001140f9  ldr x0, [x8, #0x20]
0x04C058E0: 09d44439  ldrb w9, [x0, #0x135]
0x04C058E4: 89000037  tbnz w9, #0, #0x4c058f4
0x04C058E8: cd439597  bl #0x315681c
0x04C058EC: 681240f9  ldr x8, [x19, #0x20]
0x04C058F0: 086140f9  ldr x8, [x8, #0xc0]
0x04C058F4: 095c40f9  ldr x9, [x0, #0xb8]
0x04C058F8: 350500f9  str x21, [x9, #8]
0x04C058FC: 001140f9  ldr x0, [x8, #0x20]
0x04C05900: 08d44439  ldrb w8, [x0, #0x135]
0x04C05904: 48000037  tbnz w8, #0, #0x4c0590c
0x04C05908: c5439597  bl #0x315681c
0x04C0590C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C05910: e10315aa  mov x1, x21
0x04C05914: 00210091  add x0, x8, #8
0x04C05918: 2bec9597  bl #0x31809c4
0x04C0591C: 681240f9  ldr x8, [x19, #0x20]
0x04C05920: e00314aa  mov x0, x20
0x04C05924: e10315aa  mov x1, x21
0x04C05928: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C0592C: 086140f9  ldr x8, [x8, #0xc0]
0x04C05930: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C05934: 021d40f9  ldr x2, [x8, #0x38]
0x04C05938: 430040f9  ldr x3, [x2]
0x04C0593C: fe0743f8  ldr x30, [sp], #0x30
0x04C05940: 60001fd6  br x3

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C0382C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$InitializeSystem
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___InitializeSystem (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C0382C* method);
; bytes=684 sha256=bb2ab9e91fe42f1e9baafae1aa1b40d5e5b9e3c4817fe359b0071558860be440 status=arm64_complete_bound indexed_start=True
0x04C0382C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04C03830: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C03834: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C03838: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C0383C: f65704a9  stp x22, x21, [sp, #0x40]
0x04C03840: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C03844: b48801f0  adrp x20, #0x7d1a000
0x04C03848: 88be7939  ldrb w8, [x20, #0xe6f]
0x04C0384C: f30300aa  mov x19, x0
0x04C03850: 68030037  tbnz w8, #0, #0x4c038bc
0x04C03854: e0530190  adrp x0, #0x767f000
0x04C03858: 00ac47f9  ldr x0, [x0, #0xf58]
0x04C0385C: 6ff49597  bl #0x3180a18
0x04C03860: e0530190  adrp x0, #0x767f000
0x04C03864: 00b047f9  ldr x0, [x0, #0xf60]
0x04C03868: 6cf49597  bl #0x3180a18
0x04C0386C: c05301b0  adrp x0, #0x767c000
0x04C03870: 002441f9  ldr x0, [x0, #0x248]
0x04C03874: 69f49597  bl #0x3180a18
0x04C03878: 80530190  adrp x0, #0x7673000
0x04C0387C: 007c40f9  ldr x0, [x0, #0xf8]
0x04C03880: 66f49597  bl #0x3180a18
0x04C03884: a05301d0  adrp x0, #0x7679000
0x04C03888: 000c44f9  ldr x0, [x0, #0x818]
0x04C0388C: 63f49597  bl #0x3180a18
0x04C03890: c05301f0  adrp x0, #0x767e000
0x04C03894: 008442f9  ldr x0, [x0, #0x508]
0x04C03898: 60f49597  bl #0x3180a18
0x04C0389C: 405201f0  adrp x0, #0x764e000
0x04C038A0: 000447f9  ldr x0, [x0, #0xe08]
0x04C038A4: 5df49597  bl #0x3180a18
0x04C038A8: 80530190  adrp x0, #0x7673000
0x04C038AC: 005c40f9  ldr x0, [x0, #0xb8]
0x04C038B0: 5af49597  bl #0x3180a18
0x04C038B4: 28008052  movz w8, #0x1
0x04C038B8: 88be3939  strb w8, [x20, #0xe6f]
0x04C038BC: b95301d0  adrp x25, #0x7679000
0x04C038C0: 9a530190  adrp x26, #0x7673000
0x04C038C4: fb530190  adrp x27, #0x767f000
0x04C038C8: fc530190  adrp x28, #0x767f000
0x04C038CC: dd5301b0  adrp x29, #0x767c000
0x04C038D0: 585201f0  adrp x24, #0x764e000
0x04C038D4: 390f44f9  ldr x25, [x25, #0x818]
0x04C038D8: 5a7f40f9  ldr x26, [x26, #0xf8]
0x04C038DC: 7baf47f9  ldr x27, [x27, #0xf58]
0x04C038E0: 9cb347f9  ldr x28, [x28, #0xf60]
0x04C038E4: bd2741f9  ldr x29, [x29, #0x248]
0x04C038E8: 180747f9  ldr x24, [x24, #0xe08]
0x04C038EC: f4031f2a  mov w20, wzr
0x04C038F0: f5008052  movz w21, #0x7
0x04C038F4: 88530190  adrp x8, #0x7673000
0x04C038F8: 085d40f9  ldr x8, [x8, #0xb8]
0x04C038FC: 762640f9  ldr x22, [x19, #0x48]
0x04C03900: 000140f9  ldr x0, [x8]
0x04C03904: 08e040b9  ldr w8, [x0, #0xe0]
0x04C03908: 48000035  cbnz w8, #0x4c03910
0x04C0390C: a0f49597  bl #0x3180b8c
0x04C03910: e003152a  mov w0, w21
0x04C03914: e1031faa  mov x1, xzr
0x04C03918: 82245594  bl #0x614cb20
0x04C0391C: c00d00b4  cbz x0, #0x4c03ad4
0x04C03920: 080040f9  ldr x8, [x0]
0x04C03924: 210340f9  ldr x1, [x25]
0x04C03928: f70300aa  mov x23, x0
0x04C0392C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C03930: 290100b4  cbz x9, #0x4c03954
0x04C03934: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C03938: 4a210091  add x10, x10, #8
0x04C0393C: 4b815ff8  ldur x11, [x10, #-8]
0x04C03940: 7f0101eb  cmp x11, x1
0x04C03944: 00010054  b.eq #0x4c03964
0x04C03948: 290500f1  subs x9, x9, #1
0x04C0394C: 4a410091  add x10, x10, #0x10
0x04C03950: 61ffff54  b.ne #0x4c0393c
0x04C03954: e00317aa  mov x0, x23
0x04C03958: e2031f2a  mov w2, wzr
0x04C0395C: 6d4c9597  bl #0x3156b10
0x04C03960: 04000014  b #0x4c03970
0x04C03964: 490180b9  ldrsw x9, [x10]
0x04C03968: 0811098b  add x8, x8, x9, lsl #4
0x04C0396C: 00e10491  add x0, x8, #0x138
0x04C03970: 080440a9  ldp x8, x1, [x0]
0x04C03974: e00317aa  mov x0, x23
0x04C03978: 00013fd6  blr x8
0x04C0397C: d60a00b4  cbz x22, #0x4c03ad4
0x04C03980: c80240f9  ldr x8, [x22]
0x04C03984: 410340f9  ldr x1, [x26]
0x04C03988: f70300aa  mov x23, x0
0x04C0398C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C03990: 290100b4  cbz x9, #0x4c039b4
0x04C03994: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C03998: 4a210091  add x10, x10, #8
0x04C0399C: 4b815ff8  ldur x11, [x10, #-8]
0x04C039A0: 7f0101eb  cmp x11, x1
0x04C039A4: 00010054  b.eq #0x4c039c4
0x04C039A8: 290500f1  subs x9, x9, #1
0x04C039AC: 4a410091  add x10, x10, #0x10
0x04C039B0: 61ffff54  b.ne #0x4c0399c
0x04C039B4: e00316aa  mov x0, x22
0x04C039B8: e2031f2a  mov w2, wzr
0x04C039BC: 554c9597  bl #0x3156b10
0x04C039C0: 04000014  b #0x4c039d0
0x04C039C4: 490180b9  ldrsw x9, [x10]
0x04C039C8: 0811098b  add x8, x8, x9, lsl #4
0x04C039CC: 00e10491  add x0, x8, #0x138
0x04C039D0: 080840a9  ldp x8, x2, [x0]
0x04C039D4: e00316aa  mov x0, x22
0x04C039D8: e10317aa  mov x1, x23
0x04C039DC: 00013fd6  blr x8
0x04C039E0: 683e40f9  ldr x8, [x19, #0x78]
0x04C039E4: 880700b4  cbz x8, #0x4c03ad4
0x04C039E8: 630340f9  ldr x3, [x27]
0x04C039EC: f60300aa  mov x22, x0
0x04C039F0: e00308aa  mov x0, x8
0x04C039F4: e10316aa  mov x1, x22
0x04C039F8: e203152a  mov w2, w21
0x04C039FC: 97c80a94  bl #0x4eb5c58
0x04C03A00: 604240f9  ldr x0, [x19, #0x80]
0x04C03A04: 800600b4  cbz x0, #0x4c03ad4
0x04C03A08: 830340f9  ldr x3, [x28]
0x04C03A0C: e103152a  mov w1, w21
0x04C03A10: e20316aa  mov x2, x22
0x04C03A14: 24790994  bl #0x4e61ea4
0x04C03A18: f60500b4  cbz x22, #0x4c03ad4
0x04C03A1C: c80240f9  ldr x8, [x22]
0x04C03A20: a10340f9  ldr x1, [x29]
0x04C03A24: 095d4279  ldrh w9, [x8, #0x12e]
0x04C03A28: 290100b4  cbz x9, #0x4c03a4c
0x04C03A2C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C03A30: 4a210091  add x10, x10, #8
0x04C03A34: 4b815ff8  ldur x11, [x10, #-8]
0x04C03A38: 7f0101eb  cmp x11, x1
0x04C03A3C: 00010054  b.eq #0x4c03a5c
0x04C03A40: 290500f1  subs x9, x9, #1
0x04C03A44: 4a410091  add x10, x10, #0x10
0x04C03A48: 61ffff54  b.ne #0x4c03a34
0x04C03A4C: e00316aa  mov x0, x22
0x04C03A50: e2031f2a  mov w2, wzr
0x04C03A54: 2f4c9597  bl #0x3156b10
0x04C03A58: 04000014  b #0x4c03a68
0x04C03A5C: 490180b9  ldrsw x9, [x10]
0x04C03A60: 0811098b  add x8, x8, x9, lsl #4
0x04C03A64: 00e10491  add x0, x8, #0x138
0x04C03A68: 080440a9  ldp x8, x1, [x0]
0x04C03A6C: e00316aa  mov x0, x22
0x04C03A70: 00013fd6  blr x8
0x04C03A74: 000300b4  cbz x0, #0x4c03ad4
0x04C03A78: 080340f9  ldr x8, [x24]
0x04C03A7C: 161840b9  ldr w22, [x0, #0x18]
0x04C03A80: 09e140b9  ldr w9, [x8, #0xe0]
0x04C03A84: 69000035  cbnz w9, #0x4c03a90
0x04C03A88: e00308aa  mov x0, x8
0x04C03A8C: 40f49597  bl #0x3180b8c
0x04C03A90: e003162a  mov w0, w22
0x04C03A94: e103142a  mov w1, w20
0x04C03A98: e2031faa  mov x2, xzr
0x04C03A9C: 674e2a94  bl #0x5697438
0x04C03AA0: b5060011  add w21, w21, #1
0x04C03AA4: bf460071  cmp w21, #0x11
0x04C03AA8: f403002a  mov w20, w0
0x04C03AAC: 41f2ff54  b.ne #0x4c038f4
0x04C03AB0: e00313aa  mov x0, x19
0x04C03AB4: e103142a  mov w1, w20
0x04C03AB8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C03ABC: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C03AC0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C03AC4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C03AC8: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C03ACC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04C03AD0: 04010014  b #0x4c03ee0
0x04C03AD4: 76f49597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05944 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$InitializeSystem
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___InitializeSystem (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C05944* method);
; bytes=740 sha256=9b17567876101fca5354c5d00ed091d852b8ca469a423aa02235c25925f9ea1a status=arm64_complete_bound indexed_start=True
0x04C05944: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04C05948: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C0594C: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C05950: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C05954: f65704a9  stp x22, x21, [sp, #0x40]
0x04C05958: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C0595C: b58801b0  adrp x21, #0x7d1a000
0x04C05960: a80e7a39  ldrb w8, [x21, #0xe83]
0x04C05964: f40301aa  mov x20, x1
0x04C05968: f30300aa  mov x19, x0
0x04C0596C: 68030037  tbnz w8, #0, #0x4c059d8
0x04C05970: c05301d0  adrp x0, #0x767f000
0x04C05974: 00ac47f9  ldr x0, [x0, #0xf58]
0x04C05978: 28ec9597  bl #0x3180a18
0x04C0597C: c05301d0  adrp x0, #0x767f000
0x04C05980: 00b047f9  ldr x0, [x0, #0xf60]
0x04C05984: 25ec9597  bl #0x3180a18
0x04C05988: a05301f0  adrp x0, #0x767c000
0x04C0598C: 002441f9  ldr x0, [x0, #0x248]
0x04C05990: 22ec9597  bl #0x3180a18
0x04C05994: 605301d0  adrp x0, #0x7673000
0x04C05998: 007c40f9  ldr x0, [x0, #0xf8]
0x04C0599C: 1fec9597  bl #0x3180a18
0x04C059A0: a0530190  adrp x0, #0x7679000
0x04C059A4: 000c44f9  ldr x0, [x0, #0x818]
0x04C059A8: 1cec9597  bl #0x3180a18
0x04C059AC: c05301b0  adrp x0, #0x767e000
0x04C059B0: 008442f9  ldr x0, [x0, #0x508]
0x04C059B4: 19ec9597  bl #0x3180a18
0x04C059B8: 405201b0  adrp x0, #0x764e000
0x04C059BC: 000447f9  ldr x0, [x0, #0xe08]
0x04C059C0: 16ec9597  bl #0x3180a18
0x04C059C4: 605301d0  adrp x0, #0x7673000
0x04C059C8: 005c40f9  ldr x0, [x0, #0xb8]
0x04C059CC: 13ec9597  bl #0x3180a18
0x04C059D0: 28008052  movz w8, #0x1
0x04C059D4: a80e3a39  strb w8, [x21, #0xe83]
0x04C059D8: 7b5301d0  adrp x27, #0x7673000
0x04C059DC: dc5301d0  adrp x28, #0x767f000
0x04C059E0: dd5301d0  adrp x29, #0x767f000
0x04C059E4: b95301f0  adrp x25, #0x767c000
0x04C059E8: 5a5201b0  adrp x26, #0x764e000
0x04C059EC: 7b7f40f9  ldr x27, [x27, #0xf8]
0x04C059F0: 9caf47f9  ldr x28, [x28, #0xf58]
0x04C059F4: bdb347f9  ldr x29, [x29, #0xf60]
0x04C059F8: 392741f9  ldr x25, [x25, #0x248]
0x04C059FC: 5a0747f9  ldr x26, [x26, #0xe08]
0x04C05A00: f5031f2a  mov w21, wzr
0x04C05A04: f6008052  movz w22, #0x7
0x04C05A08: 685301d0  adrp x8, #0x7673000
0x04C05A0C: 085d40f9  ldr x8, [x8, #0xb8]
0x04C05A10: 772640f9  ldr x23, [x19, #0x48]
0x04C05A14: 000140f9  ldr x0, [x8]
0x04C05A18: 08e040b9  ldr w8, [x0, #0xe0]
0x04C05A1C: 48000035  cbnz w8, #0x4c05a24
0x04C05A20: 5bec9597  bl #0x3180b8c
0x04C05A24: e003162a  mov w0, w22
0x04C05A28: e1031faa  mov x1, xzr
0x04C05A2C: 3d1c5594  bl #0x614cb20
0x04C05A30: a00f00b4  cbz x0, #0x4c05c24
0x04C05A34: 080040f9  ldr x8, [x0]
0x04C05A38: aa530190  adrp x10, #0x7679000
0x04C05A3C: f80300aa  mov x24, x0
0x04C05A40: 095d4279  ldrh w9, [x8, #0x12e]
0x04C05A44: 4a0d44f9  ldr x10, [x10, #0x818]
0x04C05A48: 410140f9  ldr x1, [x10]
0x04C05A4C: 290100b4  cbz x9, #0x4c05a70
0x04C05A50: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05A54: 4a210091  add x10, x10, #8
0x04C05A58: 4b815ff8  ldur x11, [x10, #-8]
0x04C05A5C: 7f0101eb  cmp x11, x1
0x04C05A60: 00010054  b.eq #0x4c05a80
0x04C05A64: 290500f1  subs x9, x9, #1
0x04C05A68: 4a410091  add x10, x10, #0x10
0x04C05A6C: 61ffff54  b.ne #0x4c05a58
0x04C05A70: e00318aa  mov x0, x24
0x04C05A74: e2031f2a  mov w2, wzr
0x04C05A78: 26449597  bl #0x3156b10
0x04C05A7C: 04000014  b #0x4c05a8c
0x04C05A80: 490180b9  ldrsw x9, [x10]
0x04C05A84: 0811098b  add x8, x8, x9, lsl #4
0x04C05A88: 00e10491  add x0, x8, #0x138
0x04C05A8C: 080440a9  ldp x8, x1, [x0]
0x04C05A90: e00318aa  mov x0, x24
0x04C05A94: 00013fd6  blr x8
0x04C05A98: 770c00b4  cbz x23, #0x4c05c24
0x04C05A9C: e80240f9  ldr x8, [x23]
0x04C05AA0: 610340f9  ldr x1, [x27]
0x04C05AA4: f80300aa  mov x24, x0
0x04C05AA8: 095d4279  ldrh w9, [x8, #0x12e]
0x04C05AAC: 290100b4  cbz x9, #0x4c05ad0
0x04C05AB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05AB4: 4a210091  add x10, x10, #8
0x04C05AB8: 4b815ff8  ldur x11, [x10, #-8]
0x04C05ABC: 7f0101eb  cmp x11, x1
0x04C05AC0: 00010054  b.eq #0x4c05ae0
0x04C05AC4: 290500f1  subs x9, x9, #1
0x04C05AC8: 4a410091  add x10, x10, #0x10
0x04C05ACC: 61ffff54  b.ne #0x4c05ab8
0x04C05AD0: e00317aa  mov x0, x23
0x04C05AD4: e2031f2a  mov w2, wzr
0x04C05AD8: 0e449597  bl #0x3156b10
0x04C05ADC: 04000014  b #0x4c05aec
0x04C05AE0: 490180b9  ldrsw x9, [x10]
0x04C05AE4: 0811098b  add x8, x8, x9, lsl #4
0x04C05AE8: 00e10491  add x0, x8, #0x138
0x04C05AEC: 080840a9  ldp x8, x2, [x0]
0x04C05AF0: e00317aa  mov x0, x23
0x04C05AF4: e10318aa  mov x1, x24
0x04C05AF8: 00013fd6  blr x8
0x04C05AFC: 881240f9  ldr x8, [x20, #0x20]
0x04C05B00: f70300aa  mov x23, x0
0x04C05B04: e00313aa  mov x0, x19
0x04C05B08: 086140f9  ldr x8, [x8, #0xc0]
0x04C05B0C: 012540f9  ldr x1, [x8, #0x48]
0x04C05B10: 280040f9  ldr x8, [x1]
0x04C05B14: 00013fd6  blr x8
0x04C05B18: 600800b4  cbz x0, #0x4c05c24
0x04C05B1C: 830340f9  ldr x3, [x28]
0x04C05B20: e10317aa  mov x1, x23
0x04C05B24: e203162a  mov w2, w22
0x04C05B28: 4cc00a94  bl #0x4eb5c58
0x04C05B2C: 881240f9  ldr x8, [x20, #0x20]
0x04C05B30: e00313aa  mov x0, x19
0x04C05B34: 086140f9  ldr x8, [x8, #0xc0]
0x04C05B38: 012940f9  ldr x1, [x8, #0x50]
0x04C05B3C: 280040f9  ldr x8, [x1]
0x04C05B40: 00013fd6  blr x8
0x04C05B44: 000700b4  cbz x0, #0x4c05c24
0x04C05B48: a30340f9  ldr x3, [x29]
0x04C05B4C: e103162a  mov w1, w22
0x04C05B50: e20317aa  mov x2, x23
0x04C05B54: d4700994  bl #0x4e61ea4
0x04C05B58: 770600b4  cbz x23, #0x4c05c24
0x04C05B5C: e80240f9  ldr x8, [x23]
0x04C05B60: 210340f9  ldr x1, [x25]
0x04C05B64: 095d4279  ldrh w9, [x8, #0x12e]
0x04C05B68: 290100b4  cbz x9, #0x4c05b8c
0x04C05B6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05B70: 4a210091  add x10, x10, #8
0x04C05B74: 4b815ff8  ldur x11, [x10, #-8]
0x04C05B78: 7f0101eb  cmp x11, x1
0x04C05B7C: 00010054  b.eq #0x4c05b9c
0x04C05B80: 290500f1  subs x9, x9, #1
0x04C05B84: 4a410091  add x10, x10, #0x10
0x04C05B88: 61ffff54  b.ne #0x4c05b74
0x04C05B8C: e00317aa  mov x0, x23
0x04C05B90: e2031f2a  mov w2, wzr
0x04C05B94: df439597  bl #0x3156b10
0x04C05B98: 04000014  b #0x4c05ba8
0x04C05B9C: 490180b9  ldrsw x9, [x10]
0x04C05BA0: 0811098b  add x8, x8, x9, lsl #4
0x04C05BA4: 00e10491  add x0, x8, #0x138
0x04C05BA8: 080440a9  ldp x8, x1, [x0]
0x04C05BAC: e00317aa  mov x0, x23
0x04C05BB0: 00013fd6  blr x8
0x04C05BB4: 800300b4  cbz x0, #0x4c05c24
0x04C05BB8: 480340f9  ldr x8, [x26]
0x04C05BBC: 171840b9  ldr w23, [x0, #0x18]
0x04C05BC0: 09e140b9  ldr w9, [x8, #0xe0]
0x04C05BC4: 69000035  cbnz w9, #0x4c05bd0
0x04C05BC8: e00308aa  mov x0, x8
0x04C05BCC: f0eb9597  bl #0x3180b8c
0x04C05BD0: e003172a  mov w0, w23
0x04C05BD4: e103152a  mov w1, w21
0x04C05BD8: e2031faa  mov x2, xzr
0x04C05BDC: 17462a94  bl #0x5697438
0x04C05BE0: d6060011  add w22, w22, #1
0x04C05BE4: df460071  cmp w22, #0x11
0x04C05BE8: f503002a  mov w21, w0
0x04C05BEC: e1f0ff54  b.ne #0x4c05a08
0x04C05BF0: 881240f9  ldr x8, [x20, #0x20]
0x04C05BF4: e00313aa  mov x0, x19
0x04C05BF8: e103152a  mov w1, w21
0x04C05BFC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C05C00: 086140f9  ldr x8, [x8, #0xc0]
0x04C05C04: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C05C08: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C05C0C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C05C10: 022d40f9  ldr x2, [x8, #0x58]
0x04C05C14: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C05C18: 430040f9  ldr x3, [x2]
0x04C05C1C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04C05C20: 60001fd6  br x3
0x04C05C24: 22ec9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C03AD8 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$AnalyzeBoardToolChains
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___AnalyzeBoardToolChains (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_PlayerResourceEnum__o** unfinishedChains, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o** unfinishedItemLevelSumPerChain, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o** collectableTools, const MethodInfo_4C03AD8* method);
; bytes=1032 sha256=21795e6547a0df2c9f9168aaa119173c3dd3e56e3e108fa3bb670993663749be status=arm64_complete_bound indexed_start=True
0x04C03AD8: ff0303d1  sub sp, sp, #0xc0
0x04C03ADC: fd7b06a9  stp x29, x30, [sp, #0x60]
0x04C03AE0: fc6f07a9  stp x28, x27, [sp, #0x70]
0x04C03AE4: fa6708a9  stp x26, x25, [sp, #0x80]
0x04C03AE8: f85f09a9  stp x24, x23, [sp, #0x90]
0x04C03AEC: f6570aa9  stp x22, x21, [sp, #0xa0]
0x04C03AF0: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x04C03AF4: b88801f0  adrp x24, #0x7d1a000
0x04C03AF8: fb530190  adrp x27, #0x767f000
0x04C03AFC: fd530190  adrp x29, #0x767f000
0x04C03B00: fc530190  adrp x28, #0x767f000
0x04C03B04: 08c37939  ldrb w8, [x24, #0xe70]
0x04C03B08: 7bb747f9  ldr x27, [x27, #0xf68]
0x04C03B0C: bdbb47f9  ldr x29, [x29, #0xf70]
0x04C03B10: 9cbf47f9  ldr x28, [x28, #0xf78]
0x04C03B14: f50304aa  mov x21, x4
0x04C03B18: f60303aa  mov x22, x3
0x04C03B1C: f40302aa  mov x20, x2
0x04C03B20: f30301aa  mov x19, x1
0x04C03B24: f70300aa  mov x23, x0
0x04C03B28: 08060037  tbnz w8, #0, #0x4c03be8
0x04C03B2C: e0530190  adrp x0, #0x767f000
0x04C03B30: 00c047f9  ldr x0, [x0, #0xf80]
0x04C03B34: b9f39597  bl #0x3180a18
0x04C03B38: e0530190  adrp x0, #0x767f000
0x04C03B3C: 00b847f9  ldr x0, [x0, #0xf70]
0x04C03B40: b6f39597  bl #0x3180a18
0x04C03B44: e0530190  adrp x0, #0x767f000
0x04C03B48: 00b447f9  ldr x0, [x0, #0xf68]
0x04C03B4C: b3f39597  bl #0x3180a18
0x04C03B50: e0530190  adrp x0, #0x767f000
0x04C03B54: 00c447f9  ldr x0, [x0, #0xf88]
0x04C03B58: b0f39597  bl #0x3180a18
0x04C03B5C: e0530190  adrp x0, #0x767f000
0x04C03B60: 00c847f9  ldr x0, [x0, #0xf90]
0x04C03B64: adf39597  bl #0x3180a18
0x04C03B68: e0530190  adrp x0, #0x767f000
0x04C03B6C: 00cc47f9  ldr x0, [x0, #0xf98]
0x04C03B70: aaf39597  bl #0x3180a18
0x04C03B74: e0530190  adrp x0, #0x767f000
0x04C03B78: 00d047f9  ldr x0, [x0, #0xfa0]
0x04C03B7C: a7f39597  bl #0x3180a18
0x04C03B80: e0530190  adrp x0, #0x767f000
0x04C03B84: 00d447f9  ldr x0, [x0, #0xfa8]
0x04C03B88: a4f39597  bl #0x3180a18
0x04C03B8C: e0530190  adrp x0, #0x767f000
0x04C03B90: 00d847f9  ldr x0, [x0, #0xfb0]
0x04C03B94: a1f39597  bl #0x3180a18
0x04C03B98: e0530190  adrp x0, #0x767f000
0x04C03B9C: 00dc47f9  ldr x0, [x0, #0xfb8]
0x04C03BA0: 9ef39597  bl #0x3180a18
0x04C03BA4: e0530190  adrp x0, #0x767f000
0x04C03BA8: 00e047f9  ldr x0, [x0, #0xfc0]
0x04C03BAC: 9bf39597  bl #0x3180a18
0x04C03BB0: e0530190  adrp x0, #0x767f000
0x04C03BB4: 00e447f9  ldr x0, [x0, #0xfc8]
0x04C03BB8: 98f39597  bl #0x3180a18
0x04C03BBC: e0530190  adrp x0, #0x767f000
0x04C03BC0: 00e847f9  ldr x0, [x0, #0xfd0]
0x04C03BC4: 95f39597  bl #0x3180a18
0x04C03BC8: e0530190  adrp x0, #0x767f000
0x04C03BCC: 00ec47f9  ldr x0, [x0, #0xfd8]
0x04C03BD0: 92f39597  bl #0x3180a18
0x04C03BD4: e0530190  adrp x0, #0x767f000
0x04C03BD8: 00bc47f9  ldr x0, [x0, #0xf78]
0x04C03BDC: 8ff39597  bl #0x3180a18
0x04C03BE0: 28008052  movz w8, #0x1
0x04C03BE4: 08c33939  strb w8, [x24, #0xe70]
0x04C03BE8: 00e4006f  movi v0.2d, #0000000000000000
0x04C03BEC: ff7f04a9  stp xzr, xzr, [sp, #0x40]
0x04C03BF0: ff2b00f9  str xzr, [sp, #0x50]
0x04C03BF4: e00301ad  stp q0, q0, [sp, #0x20]
0x04C03BF8: a81240f9  ldr x8, [x21, #0x20]
0x04C03BFC: e00317aa  mov x0, x23
0x04C03C00: 086140f9  ldr x8, [x8, #0xc0]
0x04C03C04: 013140f9  ldr x1, [x8, #0x60]
0x04C03C08: ee000094  bl #0x4c03fc0
0x04C03C0C: a81240f9  ldr x8, [x21, #0x20]
0x04C03C10: f80300aa  mov x24, x0
0x04C03C14: e00317aa  mov x0, x23
0x04C03C18: e10318aa  mov x1, x24
0x04C03C1C: 086140f9  ldr x8, [x8, #0xc0]
0x04C03C20: 023540f9  ldr x2, [x8, #0x68]
0x04C03C24: 72010094  bl #0x4c041ec
0x04C03C28: 680340f9  ldr x8, [x27]
0x04C03C2C: f90300aa  mov x25, x0
0x04C03C30: e00308aa  mov x0, x8
0x04C03C34: 1bf49597  bl #0x3180ca0
0x04C03C38: a10340f9  ldr x1, [x29]
0x04C03C3C: fa0300aa  mov x26, x0
0x04C03C40: 9e5a0994  bl #0x4e5a6b8
0x04C03C44: e00314aa  mov x0, x20
0x04C03C48: e1031aaa  mov x1, x26
0x04C03C4C: 9a0200f9  str x26, [x20]
0x04C03C50: 5df39597  bl #0x31809c4
0x04C03C54: 600340f9  ldr x0, [x27]
0x04C03C58: 12f49597  bl #0x3180ca0
0x04C03C5C: a10340f9  ldr x1, [x29]
0x04C03C60: fa0300aa  mov x26, x0
0x04C03C64: 955a0994  bl #0x4e5a6b8
0x04C03C68: e00316aa  mov x0, x22
0x04C03C6C: e1031aaa  mov x1, x26
0x04C03C70: da0200f9  str x26, [x22]
0x04C03C74: 54f39597  bl #0x31809c4
0x04C03C78: 800340f9  ldr x0, [x28]
0x04C03C7C: 09f49597  bl #0x3180ca0
0x04C03C80: e8530190  adrp x8, #0x767f000
0x04C03C84: 08ed47f9  ldr x8, [x8, #0xfd8]
0x04C03C88: fa0300aa  mov x26, x0
0x04C03C8C: 010140f9  ldr x1, [x8]
0x04C03C90: 7560d097  bl #0x401be64
0x04C03C94: e00313aa  mov x0, x19
0x04C03C98: e1031aaa  mov x1, x26
0x04C03C9C: 7a0200f9  str x26, [x19]
0x04C03CA0: 49f39597  bl #0x31809c4
0x04C03CA4: 190b00b4  cbz x25, #0x4c03e04
0x04C03CA8: e8530190  adrp x8, #0x767f000
0x04C03CAC: 08e947f9  ldr x8, [x8, #0xfd0]
0x04C03CB0: fd530190  adrp x29, #0x767f000
0x04C03CB4: fb530190  adrp x27, #0x767f000
0x04C03CB8: bdd347f9  ldr x29, [x29, #0xfa0]
0x04C03CBC: 7bcf47f9  ldr x27, [x27, #0xf98]
0x04C03CC0: 010140f9  ldr x1, [x8]
0x04C03CC4: fc530190  adrp x28, #0x767f000
0x04C03CC8: fa530190  adrp x26, #0x767f000
0x04C03CCC: 9ce747f9  ldr x28, [x28, #0xfc8]
0x04C03CD0: 5acb47f9  ldr x26, [x26, #0xf90]
0x04C03CD4: e8230091  add x8, sp, #8
0x04C03CD8: e00319aa  mov x0, x25
0x04C03CDC: e304d197  bl #0x4045068
0x04C03CE0: e083c03c  ldur q0, [sp, #8]
0x04C03CE4: e80f40f9  ldr x8, [sp, #0x18]
0x04C03CE8: e013803d  str q0, [sp, #0x40]
0x04C03CEC: e82b00f9  str x8, [sp, #0x50]
0x04C03CF0: a10340f9  ldr x1, [x29]
0x04C03CF4: e0030191  add x0, sp, #0x40
0x04C03CF8: 2f471094  bl #0x50159b4
0x04C03CFC: 60010036  tbz w0, #0, #0x4c03d28
0x04C03D00: a81240f9  ldr x8, [x21, #0x20]
0x04C03D04: e12b40f9  ldr x1, [sp, #0x50]
0x04C03D08: 830240f9  ldr x3, [x20]
0x04C03D0C: c40240f9  ldr x4, [x22]
0x04C03D10: 086140f9  ldr x8, [x8, #0xc0]
0x04C03D14: 053940f9  ldr x5, [x8, #0x70]
0x04C03D18: e00317aa  mov x0, x23
0x04C03D1C: e20318aa  mov x2, x24
0x04C03D20: 85010094  bl #0x4c04334
0x04C03D24: f3ffff17  b #0x4c03cf0
0x04C03D28: 410340f9  ldr x1, [x26]
0x04C03D2C: e0030191  add x0, sp, #0x40
0x04C03D30: 20471094  bl #0x50159b0
0x04C03D34: 800240f9  ldr x0, [x20]
0x04C03D38: 600600b4  cbz x0, #0x4c03e04
0x04C03D3C: e8530190  adrp x8, #0x767f000
0x04C03D40: 08c147f9  ldr x8, [x8, #0xf80]
0x04C03D44: 010140f9  ldr x1, [x8]
0x04C03D48: e8830091  add x8, sp, #0x20
0x04C03D4C: ca5e0994  bl #0x4e5b874
0x04C03D50: 610340f9  ldr x1, [x27]
0x04C03D54: e0830091  add x0, sp, #0x20
0x04C03D58: 842b1194  bl #0x504eb68
0x04C03D5C: 60030036  tbz w0, #0, #0x4c03dc8
0x04C03D60: e83740b9  ldr w8, [sp, #0x34]
0x04C03D64: 1f050071  cmp w8, #1
0x04C03D68: 4bffff54  b.lt #0x4c03d50
0x04C03D6C: 600240f9  ldr x0, [x19]
0x04C03D70: 600400b4  cbz x0, #0x4c03dfc
0x04C03D74: 0a1c40b9  ldr w10, [x0, #0x1c]
0x04C03D78: e13340b9  ldr w1, [sp, #0x30]
0x04C03D7C: 080840f9  ldr x8, [x0, #0x10]
0x04C03D80: 890340f9  ldr x9, [x28]
0x04C03D84: 4a050011  add w10, w10, #1
0x04C03D88: 0a1c00b9  str w10, [x0, #0x1c]
0x04C03D8C: a80300b4  cbz x8, #0x4c03e00
0x04C03D90: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04C03D94: 0b1940b9  ldr w11, [x8, #0x18]
0x04C03D98: 5f010b6b  cmp w10, w11
0x04C03D9C: c2000054  b.hs #0x4c03db4
0x04C03DA0: 49050011  add w9, w10, #1
0x04C03DA4: 08090a8b  add x8, x8, x10, lsl #2
0x04C03DA8: 091800b9  str w9, [x0, #0x18]
0x04C03DAC: 012100b9  str w1, [x8, #0x20]
0x04C03DB0: e8ffff17  b #0x4c03d50
0x04C03DB4: 281140f9  ldr x8, [x9, #0x20]
0x04C03DB8: 086140f9  ldr x8, [x8, #0xc0]
0x04C03DBC: 023940f9  ldr x2, [x8, #0x70]
0x04C03DC0: 3e62d097  bl #0x401c6b8
0x04C03DC4: e3ffff17  b #0x4c03d50
0x04C03DC8: e8530190  adrp x8, #0x767f000
0x04C03DCC: 08c547f9  ldr x8, [x8, #0xf88]
0x04C03DD0: e0830091  add x0, sp, #0x20
0x04C03DD4: 010140f9  ldr x1, [x8]
0x04C03DD8: a42b1194  bl #0x504ec68
0x04C03DDC: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x04C03DE0: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x04C03DE4: f85f49a9  ldp x24, x23, [sp, #0x90]
0x04C03DE8: fa6748a9  ldp x26, x25, [sp, #0x80]
0x04C03DEC: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x04C03DF0: fd7b46a9  ldp x29, x30, [sp, #0x60]
0x04C03DF4: ff030391  add sp, sp, #0xc0
0x04C03DF8: c0035fd6  ret
0x04C03DFC: acf39597  bl #0x3180cac
0x04C03E00: abf39597  bl #0x3180cac
0x04C03E04: aaf39597  bl #0x3180cac
0x04C03E08: 19000014  b #0x4c03e6c
0x04C03E0C: 02000014  b #0x4c03e14
0x04C03E10: 17000014  b #0x4c03e6c
0x04C03E14: f50300aa  mov x21, x0
0x04C03E18: 3f040071  cmp w1, #1
0x04C03E1C: 61010054  b.ne #0x4c03e48
0x04C03E20: e00315aa  mov x0, x21
0x04C03E24: bb2a9794  bl #0x71ce910
0x04C03E28: 160040f9  ldr x22, [x0]
0x04C03E2C: bd2a9794  bl #0x71ce920
0x04C03E30: 410340f9  ldr x1, [x26]
0x04C03E34: e0030191  add x0, sp, #0x40
0x04C03E38: de461094  bl #0x50159b0
0x04C03E3C: d6f7ffb4  cbz x22, #0x4c03d34
0x04C03E40: e00316aa  mov x0, x22
0x04C03E44: 98f39597  bl #0x3180ca4
0x04C03E48: f6031faa  mov x22, xzr
0x04C03E4C: 02000014  b #0x4c03e54
0x04C03E50: f50300aa  mov x21, x0
0x04C03E54: 410340f9  ldr x1, [x26]
0x04C03E58: e0030191  add x0, sp, #0x40
0x04C03E5C: d5461094  bl #0x50159b0
0x04C03E60: 760300b4  cbz x22, #0x4c03ecc
0x04C03E64: e00316aa  mov x0, x22
0x04C03E68: 8ff39597  bl #0x3180ca4
0x04C03E6C: f50300aa  mov x21, x0
0x04C03E70: 3f040071  cmp w1, #1
0x04C03E74: a1010054  b.ne #0x4c03ea8
0x04C03E78: e00315aa  mov x0, x21
0x04C03E7C: a52a9794  bl #0x71ce910
0x04C03E80: 130040f9  ldr x19, [x0]
0x04C03E84: a72a9794  bl #0x71ce920
0x04C03E88: e8530190  adrp x8, #0x767f000
0x04C03E8C: 08c547f9  ldr x8, [x8, #0xf88]
0x04C03E90: e0830091  add x0, sp, #0x20
0x04C03E94: 010140f9  ldr x1, [x8]
0x04C03E98: 742b1194  bl #0x504ec68
0x04C03E9C: 13faffb4  cbz x19, #0x4c03ddc
0x04C03EA0: e00313aa  mov x0, x19
0x04C03EA4: 80f39597  bl #0x3180ca4
0x04C03EA8: f3031faa  mov x19, xzr
0x04C03EAC: 02000014  b #0x4c03eb4
0x04C03EB0: f50300aa  mov x21, x0
0x04C03EB4: e8530190  adrp x8, #0x767f000
0x04C03EB8: 08c547f9  ldr x8, [x8, #0xf88]
0x04C03EBC: 010140f9  ldr x1, [x8]
0x04C03EC0: e0830091  add x0, sp, #0x20
0x04C03EC4: 692b1194  bl #0x504ec68
0x04C03EC8: 730000b5  cbnz x19, #0x4c03ed4
0x04C03ECC: e00315aa  mov x0, x21
0x04C03ED0: a2869997  bl #0x3265958
0x04C03ED4: e00313aa  mov x0, x19
0x04C03ED8: 73f39597  bl #0x3180ca4
0x04C03EDC: 8e158897  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05C28 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$AnalyzeBoardToolChains
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___AnalyzeBoardToolChains (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_PlayerResourceEnum__o** unfinishedChains, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o** unfinishedItemLevelSumPerChain, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o** collectableTools, const MethodInfo_4C05C28* method);
; bytes=1044 sha256=392b62f19d2af84a6839256fc184174533747b8403aec6acc4f46ddf1cac4aa7 status=arm64_complete_bound indexed_start=True
0x04C05C28: ff0303d1  sub sp, sp, #0xc0
0x04C05C2C: fd7b06a9  stp x29, x30, [sp, #0x60]
0x04C05C30: fc6f07a9  stp x28, x27, [sp, #0x70]
0x04C05C34: fa6708a9  stp x26, x25, [sp, #0x80]
0x04C05C38: f85f09a9  stp x24, x23, [sp, #0x90]
0x04C05C3C: f6570aa9  stp x22, x21, [sp, #0xa0]
0x04C05C40: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x04C05C44: b88801b0  adrp x24, #0x7d1a000
0x04C05C48: db5301d0  adrp x27, #0x767f000
0x04C05C4C: dd5301d0  adrp x29, #0x767f000
0x04C05C50: dc5301d0  adrp x28, #0x767f000
0x04C05C54: 08137a39  ldrb w8, [x24, #0xe84]
0x04C05C58: 7bb747f9  ldr x27, [x27, #0xf68]
0x04C05C5C: bdbb47f9  ldr x29, [x29, #0xf70]
0x04C05C60: 9cbf47f9  ldr x28, [x28, #0xf78]
0x04C05C64: f50304aa  mov x21, x4
0x04C05C68: f60303aa  mov x22, x3
0x04C05C6C: f40302aa  mov x20, x2
0x04C05C70: f30301aa  mov x19, x1
0x04C05C74: f70300aa  mov x23, x0
0x04C05C78: 08060037  tbnz w8, #0, #0x4c05d38
0x04C05C7C: c05301d0  adrp x0, #0x767f000
0x04C05C80: 00c047f9  ldr x0, [x0, #0xf80]
0x04C05C84: 65eb9597  bl #0x3180a18
0x04C05C88: c05301d0  adrp x0, #0x767f000
0x04C05C8C: 00b847f9  ldr x0, [x0, #0xf70]
0x04C05C90: 62eb9597  bl #0x3180a18
0x04C05C94: c05301d0  adrp x0, #0x767f000
0x04C05C98: 00b447f9  ldr x0, [x0, #0xf68]
0x04C05C9C: 5feb9597  bl #0x3180a18
0x04C05CA0: c05301d0  adrp x0, #0x767f000
0x04C05CA4: 00c447f9  ldr x0, [x0, #0xf88]
0x04C05CA8: 5ceb9597  bl #0x3180a18
0x04C05CAC: c05301d0  adrp x0, #0x767f000
0x04C05CB0: 00c847f9  ldr x0, [x0, #0xf90]
0x04C05CB4: 59eb9597  bl #0x3180a18
0x04C05CB8: c05301d0  adrp x0, #0x767f000
0x04C05CBC: 00cc47f9  ldr x0, [x0, #0xf98]
0x04C05CC0: 56eb9597  bl #0x3180a18
0x04C05CC4: c05301d0  adrp x0, #0x767f000
0x04C05CC8: 00d047f9  ldr x0, [x0, #0xfa0]
0x04C05CCC: 53eb9597  bl #0x3180a18
0x04C05CD0: c05301d0  adrp x0, #0x767f000
0x04C05CD4: 00d447f9  ldr x0, [x0, #0xfa8]
0x04C05CD8: 50eb9597  bl #0x3180a18
0x04C05CDC: c05301d0  adrp x0, #0x767f000
0x04C05CE0: 00d847f9  ldr x0, [x0, #0xfb0]
0x04C05CE4: 4deb9597  bl #0x3180a18
0x04C05CE8: c05301d0  adrp x0, #0x767f000
0x04C05CEC: 00dc47f9  ldr x0, [x0, #0xfb8]
0x04C05CF0: 4aeb9597  bl #0x3180a18
0x04C05CF4: c05301d0  adrp x0, #0x767f000
0x04C05CF8: 00e047f9  ldr x0, [x0, #0xfc0]
0x04C05CFC: 47eb9597  bl #0x3180a18
0x04C05D00: c05301d0  adrp x0, #0x767f000
0x04C05D04: 00e447f9  ldr x0, [x0, #0xfc8]
0x04C05D08: 44eb9597  bl #0x3180a18
0x04C05D0C: c05301d0  adrp x0, #0x767f000
0x04C05D10: 00e847f9  ldr x0, [x0, #0xfd0]
0x04C05D14: 41eb9597  bl #0x3180a18
0x04C05D18: c05301d0  adrp x0, #0x767f000
0x04C05D1C: 00ec47f9  ldr x0, [x0, #0xfd8]
0x04C05D20: 3eeb9597  bl #0x3180a18
0x04C05D24: c05301d0  adrp x0, #0x767f000
0x04C05D28: 00bc47f9  ldr x0, [x0, #0xf78]
0x04C05D2C: 3beb9597  bl #0x3180a18
0x04C05D30: 28008052  movz w8, #0x1
0x04C05D34: 08133a39  strb w8, [x24, #0xe84]
0x04C05D38: 00e4006f  movi v0.2d, #0000000000000000
0x04C05D3C: ff7f04a9  stp xzr, xzr, [sp, #0x40]
0x04C05D40: ff2b00f9  str xzr, [sp, #0x50]
0x04C05D44: e00301ad  stp q0, q0, [sp, #0x20]
0x04C05D48: a81240f9  ldr x8, [x21, #0x20]
0x04C05D4C: e00317aa  mov x0, x23
0x04C05D50: 086140f9  ldr x8, [x8, #0xc0]
0x04C05D54: 013140f9  ldr x1, [x8, #0x60]
0x04C05D58: 280040f9  ldr x8, [x1]
0x04C05D5C: 00013fd6  blr x8
0x04C05D60: a81240f9  ldr x8, [x21, #0x20]
0x04C05D64: f80300aa  mov x24, x0
0x04C05D68: e00317aa  mov x0, x23
0x04C05D6C: e10318aa  mov x1, x24
0x04C05D70: 086140f9  ldr x8, [x8, #0xc0]
0x04C05D74: 023540f9  ldr x2, [x8, #0x68]
0x04C05D78: 480040f9  ldr x8, [x2]
0x04C05D7C: 00013fd6  blr x8
0x04C05D80: 680340f9  ldr x8, [x27]
0x04C05D84: f90300aa  mov x25, x0
0x04C05D88: e00308aa  mov x0, x8
0x04C05D8C: c5eb9597  bl #0x3180ca0
0x04C05D90: a10340f9  ldr x1, [x29]
0x04C05D94: fa0300aa  mov x26, x0
0x04C05D98: 48520994  bl #0x4e5a6b8
0x04C05D9C: e00314aa  mov x0, x20
0x04C05DA0: e1031aaa  mov x1, x26
0x04C05DA4: 9a0200f9  str x26, [x20]
0x04C05DA8: 07eb9597  bl #0x31809c4
0x04C05DAC: 600340f9  ldr x0, [x27]
0x04C05DB0: bceb9597  bl #0x3180ca0
0x04C05DB4: a10340f9  ldr x1, [x29]
0x04C05DB8: fa0300aa  mov x26, x0
0x04C05DBC: 3f520994  bl #0x4e5a6b8
0x04C05DC0: e00316aa  mov x0, x22
0x04C05DC4: e1031aaa  mov x1, x26
0x04C05DC8: da0200f9  str x26, [x22]
0x04C05DCC: feea9597  bl #0x31809c4
0x04C05DD0: 800340f9  ldr x0, [x28]
0x04C05DD4: b3eb9597  bl #0x3180ca0
0x04C05DD8: c85301d0  adrp x8, #0x767f000
0x04C05DDC: 08ed47f9  ldr x8, [x8, #0xfd8]
0x04C05DE0: fa0300aa  mov x26, x0
0x04C05DE4: 010140f9  ldr x1, [x8]
0x04C05DE8: 1f58d097  bl #0x401be64
0x04C05DEC: e00313aa  mov x0, x19
0x04C05DF0: e1031aaa  mov x1, x26
0x04C05DF4: 7a0200f9  str x26, [x19]
0x04C05DF8: f3ea9597  bl #0x31809c4
0x04C05DFC: 390b00b4  cbz x25, #0x4c05f60
0x04C05E00: c85301d0  adrp x8, #0x767f000
0x04C05E04: 08e947f9  ldr x8, [x8, #0xfd0]
0x04C05E08: dd5301d0  adrp x29, #0x767f000
0x04C05E0C: db5301d0  adrp x27, #0x767f000
0x04C05E10: bdd347f9  ldr x29, [x29, #0xfa0]
0x04C05E14: 7bcf47f9  ldr x27, [x27, #0xf98]
0x04C05E18: 010140f9  ldr x1, [x8]
0x04C05E1C: dc5301d0  adrp x28, #0x767f000
0x04C05E20: da5301d0  adrp x26, #0x767f000
0x04C05E24: 9ce747f9  ldr x28, [x28, #0xfc8]
0x04C05E28: 5acb47f9  ldr x26, [x26, #0xf90]
0x04C05E2C: e8230091  add x8, sp, #8
0x04C05E30: e00319aa  mov x0, x25
0x04C05E34: 8dfcd097  bl #0x4045068
0x04C05E38: e083c03c  ldur q0, [sp, #8]
0x04C05E3C: e80f40f9  ldr x8, [sp, #0x18]
0x04C05E40: e013803d  str q0, [sp, #0x40]
0x04C05E44: e82b00f9  str x8, [sp, #0x50]
0x04C05E48: a10340f9  ldr x1, [x29]
0x04C05E4C: e0030191  add x0, sp, #0x40
0x04C05E50: d93e1094  bl #0x50159b4
0x04C05E54: 80010036  tbz w0, #0, #0x4c05e84
0x04C05E58: a81240f9  ldr x8, [x21, #0x20]
0x04C05E5C: e12b40f9  ldr x1, [sp, #0x50]
0x04C05E60: 830240f9  ldr x3, [x20]
0x04C05E64: c40240f9  ldr x4, [x22]
0x04C05E68: 086140f9  ldr x8, [x8, #0xc0]
0x04C05E6C: 053940f9  ldr x5, [x8, #0x70]
0x04C05E70: a80040f9  ldr x8, [x5]
0x04C05E74: e00317aa  mov x0, x23
0x04C05E78: e20318aa  mov x2, x24
0x04C05E7C: 00013fd6  blr x8
0x04C05E80: f2ffff17  b #0x4c05e48
0x04C05E84: 410340f9  ldr x1, [x26]
0x04C05E88: e0030191  add x0, sp, #0x40
0x04C05E8C: c93e1094  bl #0x50159b0
0x04C05E90: 800240f9  ldr x0, [x20]
0x04C05E94: 600600b4  cbz x0, #0x4c05f60
0x04C05E98: c85301d0  adrp x8, #0x767f000
0x04C05E9C: 08c147f9  ldr x8, [x8, #0xf80]
0x04C05EA0: 010140f9  ldr x1, [x8]
0x04C05EA4: e8830091  add x8, sp, #0x20
0x04C05EA8: 73560994  bl #0x4e5b874
0x04C05EAC: 610340f9  ldr x1, [x27]
0x04C05EB0: e0830091  add x0, sp, #0x20
0x04C05EB4: 2d231194  bl #0x504eb68
0x04C05EB8: 60030036  tbz w0, #0, #0x4c05f24
0x04C05EBC: e83740b9  ldr w8, [sp, #0x34]
0x04C05EC0: 1f050071  cmp w8, #1
0x04C05EC4: 4bffff54  b.lt #0x4c05eac
0x04C05EC8: 600240f9  ldr x0, [x19]
0x04C05ECC: 600400b4  cbz x0, #0x4c05f58
0x04C05ED0: 0a1c40b9  ldr w10, [x0, #0x1c]
0x04C05ED4: e13340b9  ldr w1, [sp, #0x30]
0x04C05ED8: 080840f9  ldr x8, [x0, #0x10]
0x04C05EDC: 890340f9  ldr x9, [x28]
0x04C05EE0: 4a050011  add w10, w10, #1
0x04C05EE4: 0a1c00b9  str w10, [x0, #0x1c]
0x04C05EE8: a80300b4  cbz x8, #0x4c05f5c
0x04C05EEC: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04C05EF0: 0b1940b9  ldr w11, [x8, #0x18]
0x04C05EF4: 5f010b6b  cmp w10, w11
0x04C05EF8: c2000054  b.hs #0x4c05f10
0x04C05EFC: 49050011  add w9, w10, #1
0x04C05F00: 08090a8b  add x8, x8, x10, lsl #2
0x04C05F04: 091800b9  str w9, [x0, #0x18]
0x04C05F08: 012100b9  str w1, [x8, #0x20]
0x04C05F0C: e8ffff17  b #0x4c05eac
0x04C05F10: 281140f9  ldr x8, [x9, #0x20]
0x04C05F14: 086140f9  ldr x8, [x8, #0xc0]
0x04C05F18: 023940f9  ldr x2, [x8, #0x70]
0x04C05F1C: e759d097  bl #0x401c6b8
0x04C05F20: e3ffff17  b #0x4c05eac
0x04C05F24: c85301d0  adrp x8, #0x767f000
0x04C05F28: 08c547f9  ldr x8, [x8, #0xf88]
0x04C05F2C: e0830091  add x0, sp, #0x20
0x04C05F30: 010140f9  ldr x1, [x8]
0x04C05F34: 4d231194  bl #0x504ec68
0x04C05F38: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x04C05F3C: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x04C05F40: f85f49a9  ldp x24, x23, [sp, #0x90]
0x04C05F44: fa6748a9  ldp x26, x25, [sp, #0x80]
0x04C05F48: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x04C05F4C: fd7b46a9  ldp x29, x30, [sp, #0x60]
0x04C05F50: ff030391  add sp, sp, #0xc0
0x04C05F54: c0035fd6  ret
0x04C05F58: 55eb9597  bl #0x3180cac
0x04C05F5C: 54eb9597  bl #0x3180cac
0x04C05F60: 53eb9597  bl #0x3180cac
0x04C05F64: 19000014  b #0x4c05fc8
0x04C05F68: 02000014  b #0x4c05f70
0x04C05F6C: 17000014  b #0x4c05fc8
0x04C05F70: f50300aa  mov x21, x0
0x04C05F74: 3f040071  cmp w1, #1
0x04C05F78: 61010054  b.ne #0x4c05fa4
0x04C05F7C: e00315aa  mov x0, x21
0x04C05F80: 64229794  bl #0x71ce910
0x04C05F84: 160040f9  ldr x22, [x0]
0x04C05F88: 66229794  bl #0x71ce920
0x04C05F8C: 410340f9  ldr x1, [x26]
0x04C05F90: e0030191  add x0, sp, #0x40
0x04C05F94: 873e1094  bl #0x50159b0
0x04C05F98: d6f7ffb4  cbz x22, #0x4c05e90
0x04C05F9C: e00316aa  mov x0, x22
0x04C05FA0: 41eb9597  bl #0x3180ca4
0x04C05FA4: f6031faa  mov x22, xzr
0x04C05FA8: 02000014  b #0x4c05fb0
0x04C05FAC: f50300aa  mov x21, x0
0x04C05FB0: 410340f9  ldr x1, [x26]
0x04C05FB4: e0030191  add x0, sp, #0x40
0x04C05FB8: 7e3e1094  bl #0x50159b0
0x04C05FBC: 760300b4  cbz x22, #0x4c06028
0x04C05FC0: e00316aa  mov x0, x22
0x04C05FC4: 38eb9597  bl #0x3180ca4
0x04C05FC8: f50300aa  mov x21, x0
0x04C05FCC: 3f040071  cmp w1, #1
0x04C05FD0: a1010054  b.ne #0x4c06004
0x04C05FD4: e00315aa  mov x0, x21
0x04C05FD8: 4e229794  bl #0x71ce910
0x04C05FDC: 130040f9  ldr x19, [x0]
0x04C05FE0: 50229794  bl #0x71ce920
0x04C05FE4: c85301d0  adrp x8, #0x767f000
0x04C05FE8: 08c547f9  ldr x8, [x8, #0xf88]
0x04C05FEC: e0830091  add x0, sp, #0x20
0x04C05FF0: 010140f9  ldr x1, [x8]
0x04C05FF4: 1d231194  bl #0x504ec68
0x04C05FF8: 13faffb4  cbz x19, #0x4c05f38
0x04C05FFC: e00313aa  mov x0, x19
0x04C06000: 29eb9597  bl #0x3180ca4
0x04C06004: f3031faa  mov x19, xzr
0x04C06008: 02000014  b #0x4c06010
0x04C0600C: f50300aa  mov x21, x0
0x04C06010: c85301b0  adrp x8, #0x767f000
0x04C06014: 08c547f9  ldr x8, [x8, #0xf88]
0x04C06018: 010140f9  ldr x1, [x8]
0x04C0601C: e0830091  add x0, sp, #0x20
0x04C06020: 12231194  bl #0x504ec68
0x04C06024: 730000b5  cbnz x19, #0x4c06030
0x04C06028: e00315aa  mov x0, x21
0x04C0602C: 4b7e9997  bl #0x3265958
0x04C06030: e00313aa  mov x0, x19
0x04C06034: 1ceb9597  bl #0x3180ca4
0x04C06038: 370d8897  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C03EE0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$CreatePowLookup
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___CreatePowLookup (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, int32_t maxLevelItem, const MethodInfo_4C03EE0* method);
; bytes=224 sha256=beb5dcab474d877e41261285220061fa1620caa42bc6d66a645975e17939af4c status=arm64_complete_bound indexed_start=True
0x04C03EE0: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C03EE4: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C03EE8: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C03EEC: f65703a9  stp x22, x21, [sp, #0x30]
0x04C03EF0: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C03EF4: b58801f0  adrp x21, #0x7d1a000
0x04C03EF8: a8c67939  ldrb w8, [x21, #0xe71]
0x04C03EFC: f303012a  mov w19, w1
0x04C03F00: f40300aa  mov x20, x0
0x04C03F04: 28010037  tbnz w8, #0, #0x4c03f28
0x04C03F08: a05301f0  adrp x0, #0x767a000
0x04C03F0C: 000046f9  ldr x0, [x0, #0xc00]
0x04C03F10: c2f29597  bl #0x3180a18
0x04C03F14: 405201f0  adrp x0, #0x764e000
0x04C03F18: 000447f9  ldr x0, [x0, #0xe08]
0x04C03F1C: bff29597  bl #0x3180a18
0x04C03F20: 28008052  movz w8, #0x1
0x04C03F24: a8c63939  strb w8, [x21, #0xe71]
0x04C03F28: 7f060071  cmp w19, #1
0x04C03F2C: cb030054  b.lt #0x4c03fa4
0x04C03F30: 575201f0  adrp x23, #0x764e000
0x04C03F34: b85301f0  adrp x24, #0x767a000
0x04C03F38: f70647f9  ldr x23, [x23, #0xe08]
0x04C03F3C: 180346f9  ldr x24, [x24, #0xc00]
0x04C03F40: 35008052  movz w21, #0x1
0x04C03F44: 19feefd2  movz x25, #0x7ff0, lsl #48
0x04C03F48: 1a00b052  movz w26, #0x8000, lsl #16
0x04C03F4C: e00240f9  ldr x0, [x23]
0x04C03F50: 964640f9  ldr x22, [x20, #0x88]
0x04C03F54: 08e040b9  ldr w8, [x0, #0xe0]
0x04C03F58: 48000035  cbnz w8, #0x4c03f60
0x04C03F5C: 0cf39597  bl #0x3180b8c
0x04C03F60: a8060051  sub w8, w21, #1
0x04C03F64: 0101621e  scvtf d1, w8
0x04C03F68: 0010601e  fmov d0, #2.00000000
0x04C03F6C: e0031faa  mov x0, xzr
0x04C03F70: 224f2a94  bl #0x5697bf8
0x04C03F74: 560200b4  cbz x22, #0x4c03fbc
0x04C03F78: 030340f9  ldr x3, [x24]
0x04C03F7C: 2103679e  fmov d1, x25
0x04C03F80: 0800781e  fcvtzs w8, d0
0x04C03F84: 0020611e  fcmp d0, d1
0x04C03F88: 4203881a  csel w2, w26, w8, eq
0x04C03F8C: e00316aa  mov x0, x22
0x04C03F90: e103152a  mov w1, w21
0x04C03F94: d99e0894  bl #0x4e2baf8
0x04C03F98: b5060011  add w21, w21, #1
0x04C03F9C: bf02136b  cmp w21, w19
0x04C03FA0: 6dfdff54  b.le #0x4c03f4c
0x04C03FA4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C03FA8: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C03FAC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C03FB0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C03FB4: fe0745f8  ldr x30, [sp], #0x50
0x04C03FB8: c0035fd6  ret
0x04C03FBC: 3cf39597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C0603C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$CreatePowLookup
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___CreatePowLookup (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, int32_t maxLevelItem, const MethodInfo_4C0603C* method);
; bytes=224 sha256=287f56f4a53e5fb3fd64f859d676025b50222d605f18375ae7e90272f0ed3491 status=arm64_complete_bound indexed_start=True
0x04C0603C: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C06040: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C06044: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C06048: f65703a9  stp x22, x21, [sp, #0x30]
0x04C0604C: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C06050: b5880190  adrp x21, #0x7d1a000
0x04C06054: a8167a39  ldrb w8, [x21, #0xe85]
0x04C06058: f303012a  mov w19, w1
0x04C0605C: f40300aa  mov x20, x0
0x04C06060: 28010037  tbnz w8, #0, #0x4c06084
0x04C06064: a0530190  adrp x0, #0x767a000
0x04C06068: 000046f9  ldr x0, [x0, #0xc00]
0x04C0606C: 6bea9597  bl #0x3180a18
0x04C06070: 40520190  adrp x0, #0x764e000
0x04C06074: 000447f9  ldr x0, [x0, #0xe08]
0x04C06078: 68ea9597  bl #0x3180a18
0x04C0607C: 28008052  movz w8, #0x1
0x04C06080: a8163a39  strb w8, [x21, #0xe85]
0x04C06084: 7f060071  cmp w19, #1
0x04C06088: cb030054  b.lt #0x4c06100
0x04C0608C: 57520190  adrp x23, #0x764e000
0x04C06090: b8530190  adrp x24, #0x767a000
0x04C06094: f70647f9  ldr x23, [x23, #0xe08]
0x04C06098: 180346f9  ldr x24, [x24, #0xc00]
0x04C0609C: 35008052  movz w21, #0x1
0x04C060A0: 19feefd2  movz x25, #0x7ff0, lsl #48
0x04C060A4: 1a00b052  movz w26, #0x8000, lsl #16
0x04C060A8: e00240f9  ldr x0, [x23]
0x04C060AC: 964640f9  ldr x22, [x20, #0x88]
0x04C060B0: 08e040b9  ldr w8, [x0, #0xe0]
0x04C060B4: 48000035  cbnz w8, #0x4c060bc
0x04C060B8: b5ea9597  bl #0x3180b8c
0x04C060BC: a8060051  sub w8, w21, #1
0x04C060C0: 0101621e  scvtf d1, w8
0x04C060C4: 0010601e  fmov d0, #2.00000000
0x04C060C8: e0031faa  mov x0, xzr
0x04C060CC: cb462a94  bl #0x5697bf8
0x04C060D0: 560200b4  cbz x22, #0x4c06118
0x04C060D4: 030340f9  ldr x3, [x24]
0x04C060D8: 2103679e  fmov d1, x25
0x04C060DC: 0800781e  fcvtzs w8, d0
0x04C060E0: 0020611e  fcmp d0, d1
0x04C060E4: 4203881a  csel w2, w26, w8, eq
0x04C060E8: e00316aa  mov x0, x22
0x04C060EC: e103152a  mov w1, w21
0x04C060F0: 82960894  bl #0x4e2baf8
0x04C060F4: b5060011  add w21, w21, #1
0x04C060F8: bf02136b  cmp w21, w19
0x04C060FC: 6dfdff54  b.le #0x4c060a8
0x04C06100: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C06104: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C06108: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C0610C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C06110: fe0745f8  ldr x30, [sp], #0x50
0x04C06114: c0035fd6  ret
0x04C06118: e5ea9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C03FC0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$GetUnlockedItemsOnBoard
; native signature: System_Collections_Generic_List_IMergeItem__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___GetUnlockedItemsOnBoard (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C03FC0* method);
; bytes=556 sha256=140d42b9a164e4fd219feca80201c00e44cda618b952fd0d8ec4091cfe05bcf5 status=arm64_complete_bound indexed_start=True
0x04C03FC0: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x04C03FC4: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C03FC8: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C03FCC: f65703a9  stp x22, x21, [sp, #0x30]
0x04C03FD0: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C03FD4: b58801f0  adrp x21, #0x7d1a000
0x04C03FD8: a8ca7939  ldrb w8, [x21, #0xe72]
0x04C03FDC: f40301aa  mov x20, x1
0x04C03FE0: f30300aa  mov x19, x0
0x04C03FE4: a8020037  tbnz w8, #0, #0x4c04038
0x04C03FE8: e0530190  adrp x0, #0x767f000
0x04C03FEC: 00f047f9  ldr x0, [x0, #0xfe0]
0x04C03FF0: 8af29597  bl #0x3180a18
0x04C03FF4: e0530190  adrp x0, #0x767f000
0x04C03FF8: 00f447f9  ldr x0, [x0, #0xfe8]
0x04C03FFC: 87f29597  bl #0x3180a18
0x04C04000: c05301f0  adrp x0, #0x767f000
0x04C04004: 00f847f9  ldr x0, [x0, #0xff0]
0x04C04008: 84f29597  bl #0x3180a18
0x04C0400C: c05301f0  adrp x0, #0x767f000
0x04C04010: 00fc47f9  ldr x0, [x0, #0xff8]
0x04C04014: 81f29597  bl #0x3180a18
0x04C04018: e0530190  adrp x0, #0x7680000
0x04C0401C: 000040f9  ldr x0, [x0]
0x04C04020: 7ef29597  bl #0x3180a18
0x04C04024: e0530190  adrp x0, #0x7680000
0x04C04028: 000440f9  ldr x0, [x0, #8]
0x04C0402C: 7bf29597  bl #0x3180a18
0x04C04030: 28008052  movz w8, #0x1
0x04C04034: a8ca3939  strb w8, [x21, #0xe72]
0x04C04038: 930d00b4  cbz x19, #0x4c041e8
0x04C0403C: e8530190  adrp x8, #0x7680000
0x04C04040: 080540f9  ldr x8, [x8, #8]
0x04C04044: e00313aa  mov x0, x19
0x04C04048: 010140f9  ldr x1, [x8]
0x04C0404C: 9fcac697  bl #0x3db6ac8
0x04C04050: 881240f9  ldr x8, [x20, #0x20]
0x04C04054: f50300aa  mov x21, x0
0x04C04058: 086140f9  ldr x8, [x8, #0xc0]
0x04C0405C: 081140f9  ldr x8, [x8, #0x20]
0x04C04060: 09d54439  ldrb w9, [x8, #0x135]
0x04C04064: 89000037  tbnz w9, #0, #0x4c04074
0x04C04068: e00308aa  mov x0, x8
0x04C0406C: ec499597  bl #0x315681c
0x04C04070: e80300aa  mov x8, x0
0x04C04074: 09e140b9  ldr w9, [x8, #0xe0]
0x04C04078: 69000035  cbnz w9, #0x4c04084
0x04C0407C: e00308aa  mov x0, x8
0x04C04080: c3f29597  bl #0x3180b8c
0x04C04084: 881240f9  ldr x8, [x20, #0x20]
0x04C04088: 086140f9  ldr x8, [x8, #0xc0]
0x04C0408C: 001140f9  ldr x0, [x8, #0x20]
0x04C04090: 08d44439  ldrb w8, [x0, #0x135]
0x04C04094: 48000037  tbnz w8, #0, #0x4c0409c
0x04C04098: e1499597  bl #0x315681c
0x04C0409C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C040A0: db5301f0  adrp x27, #0x767f000
0x04C040A4: da5301f0  adrp x26, #0x767f000
0x04C040A8: d95301f0  adrp x25, #0x767f000
0x04C040AC: d85301f0  adrp x24, #0x767f000
0x04C040B0: 160940f9  ldr x22, [x8, #0x10]
0x04C040B4: 7bfb47f9  ldr x27, [x27, #0xff0]
0x04C040B8: 5aff47f9  ldr x26, [x26, #0xff8]
0x04C040BC: 39f347f9  ldr x25, [x25, #0xfe0]
0x04C040C0: 18f747f9  ldr x24, [x24, #0xfe8]
0x04C040C4: f60500b5  cbnz x22, #0x4c04180
0x04C040C8: 881240f9  ldr x8, [x20, #0x20]
0x04C040CC: 086140f9  ldr x8, [x8, #0xc0]
0x04C040D0: 001140f9  ldr x0, [x8, #0x20]
0x04C040D4: 08d44439  ldrb w8, [x0, #0x135]
0x04C040D8: 48000037  tbnz w8, #0, #0x4c040e0
0x04C040DC: d0499597  bl #0x315681c
0x04C040E0: 08e040b9  ldr w8, [x0, #0xe0]
0x04C040E4: 48000035  cbnz w8, #0x4c040ec
0x04C040E8: a9f29597  bl #0x3180b8c
0x04C040EC: 881240f9  ldr x8, [x20, #0x20]
0x04C040F0: 086140f9  ldr x8, [x8, #0xc0]
0x04C040F4: 001140f9  ldr x0, [x8, #0x20]
0x04C040F8: 08d44439  ldrb w8, [x0, #0x135]
0x04C040FC: 48000037  tbnz w8, #0, #0x4c04104
0x04C04100: c7499597  bl #0x315681c
0x04C04104: e9530190  adrp x9, #0x7680000
0x04C04108: 085c40f9  ldr x8, [x0, #0xb8]
0x04C0410C: 290140f9  ldr x9, [x9]
0x04C04110: 170140f9  ldr x23, [x8]
0x04C04114: 200140f9  ldr x0, [x9]
0x04C04118: e2f29597  bl #0x3180ca0
0x04C0411C: 881240f9  ldr x8, [x20, #0x20]
0x04C04120: e10317aa  mov x1, x23
0x04C04124: e3031faa  mov x3, xzr
0x04C04128: f60300aa  mov x22, x0
0x04C0412C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04130: 023d40f9  ldr x2, [x8, #0x78]
0x04C04134: a2471994  bl #0x5255fbc
0x04C04138: 881240f9  ldr x8, [x20, #0x20]
0x04C0413C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04140: 001140f9  ldr x0, [x8, #0x20]
0x04C04144: 09d44439  ldrb w9, [x0, #0x135]
0x04C04148: 89000037  tbnz w9, #0, #0x4c04158
0x04C0414C: b4499597  bl #0x315681c
0x04C04150: 881240f9  ldr x8, [x20, #0x20]
0x04C04154: 086140f9  ldr x8, [x8, #0xc0]
0x04C04158: 095c40f9  ldr x9, [x0, #0xb8]
0x04C0415C: 360900f9  str x22, [x9, #0x10]
0x04C04160: 001140f9  ldr x0, [x8, #0x20]
0x04C04164: 08d44439  ldrb w8, [x0, #0x135]
0x04C04168: 48000037  tbnz w8, #0, #0x4c04170
0x04C0416C: ac499597  bl #0x315681c
0x04C04170: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04174: e10316aa  mov x1, x22
0x04C04178: 00410091  add x0, x8, #0x10
0x04C0417C: 12f29597  bl #0x31809c4
0x04C04180: 620340f9  ldr x2, [x27]
0x04C04184: e00315aa  mov x0, x21
0x04C04188: e10316aa  mov x1, x22
0x04C0418C: 470cc297  bl #0x3c872a8
0x04C04190: 480340f9  ldr x8, [x26]
0x04C04194: f50300aa  mov x21, x0
0x04C04198: e00308aa  mov x0, x8
0x04C0419C: c1f29597  bl #0x3180ca0
0x04C041A0: 881240f9  ldr x8, [x20, #0x20]
0x04C041A4: e10313aa  mov x1, x19
0x04C041A8: e3031faa  mov x3, xzr
0x04C041AC: f40300aa  mov x20, x0
0x04C041B0: 086140f9  ldr x8, [x8, #0xc0]
0x04C041B4: 024140f9  ldr x2, [x8, #0x80]
0x04C041B8: 004a1994  bl #0x52569b8
0x04C041BC: 220340f9  ldr x2, [x25]
0x04C041C0: e00315aa  mov x0, x21
0x04C041C4: e10314aa  mov x1, x20
0x04C041C8: 3332c197  bl #0x3c50a94
0x04C041CC: 010340f9  ldr x1, [x24]
0x04C041D0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C041D4: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C041D8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C041DC: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C041E0: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x04C041E4: 7b6fc117  b #0x3c5ffd0
0x04C041E8: b1f29597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C0611C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$GetUnlockedItemsOnBoard
; native signature: System_Collections_Generic_List_IMergeItem__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___GetUnlockedItemsOnBoard (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C0611C* method);
; bytes=556 sha256=93afb8a420dff0f01e3a1e170d32734820a9f13165cd6b9a8d8c42867207471f status=arm64_complete_bound indexed_start=True
0x04C0611C: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x04C06120: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C06124: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C06128: f65703a9  stp x22, x21, [sp, #0x30]
0x04C0612C: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C06130: b5880190  adrp x21, #0x7d1a000
0x04C06134: a81a7a39  ldrb w8, [x21, #0xe86]
0x04C06138: f40301aa  mov x20, x1
0x04C0613C: f30300aa  mov x19, x0
0x04C06140: a8020037  tbnz w8, #0, #0x4c06194
0x04C06144: c05301b0  adrp x0, #0x767f000
0x04C06148: 00f047f9  ldr x0, [x0, #0xfe0]
0x04C0614C: 33ea9597  bl #0x3180a18
0x04C06150: c05301b0  adrp x0, #0x767f000
0x04C06154: 00f447f9  ldr x0, [x0, #0xfe8]
0x04C06158: 30ea9597  bl #0x3180a18
0x04C0615C: c05301b0  adrp x0, #0x767f000
0x04C06160: 00f847f9  ldr x0, [x0, #0xff0]
0x04C06164: 2dea9597  bl #0x3180a18
0x04C06168: c05301b0  adrp x0, #0x767f000
0x04C0616C: 00fc47f9  ldr x0, [x0, #0xff8]
0x04C06170: 2aea9597  bl #0x3180a18
0x04C06174: c05301d0  adrp x0, #0x7680000
0x04C06178: 000040f9  ldr x0, [x0]
0x04C0617C: 27ea9597  bl #0x3180a18
0x04C06180: c05301d0  adrp x0, #0x7680000
0x04C06184: 000440f9  ldr x0, [x0, #8]
0x04C06188: 24ea9597  bl #0x3180a18
0x04C0618C: 28008052  movz w8, #0x1
0x04C06190: a81a3a39  strb w8, [x21, #0xe86]
0x04C06194: 930d00b4  cbz x19, #0x4c06344
0x04C06198: c85301d0  adrp x8, #0x7680000
0x04C0619C: 080540f9  ldr x8, [x8, #8]
0x04C061A0: e00313aa  mov x0, x19
0x04C061A4: 010140f9  ldr x1, [x8]
0x04C061A8: 48c2c697  bl #0x3db6ac8
0x04C061AC: 881240f9  ldr x8, [x20, #0x20]
0x04C061B0: f50300aa  mov x21, x0
0x04C061B4: 086140f9  ldr x8, [x8, #0xc0]
0x04C061B8: 081140f9  ldr x8, [x8, #0x20]
0x04C061BC: 09d54439  ldrb w9, [x8, #0x135]
0x04C061C0: 89000037  tbnz w9, #0, #0x4c061d0
0x04C061C4: e00308aa  mov x0, x8
0x04C061C8: 95419597  bl #0x315681c
0x04C061CC: e80300aa  mov x8, x0
0x04C061D0: 09e140b9  ldr w9, [x8, #0xe0]
0x04C061D4: 69000035  cbnz w9, #0x4c061e0
0x04C061D8: e00308aa  mov x0, x8
0x04C061DC: 6cea9597  bl #0x3180b8c
0x04C061E0: 881240f9  ldr x8, [x20, #0x20]
0x04C061E4: 086140f9  ldr x8, [x8, #0xc0]
0x04C061E8: 001140f9  ldr x0, [x8, #0x20]
0x04C061EC: 08d44439  ldrb w8, [x0, #0x135]
0x04C061F0: 48000037  tbnz w8, #0, #0x4c061f8
0x04C061F4: 8a419597  bl #0x315681c
0x04C061F8: 085c40f9  ldr x8, [x0, #0xb8]
0x04C061FC: db5301b0  adrp x27, #0x767f000
0x04C06200: da5301b0  adrp x26, #0x767f000
0x04C06204: d95301b0  adrp x25, #0x767f000
0x04C06208: d85301b0  adrp x24, #0x767f000
0x04C0620C: 160940f9  ldr x22, [x8, #0x10]
0x04C06210: 7bfb47f9  ldr x27, [x27, #0xff0]
0x04C06214: 5aff47f9  ldr x26, [x26, #0xff8]
0x04C06218: 39f347f9  ldr x25, [x25, #0xfe0]
0x04C0621C: 18f747f9  ldr x24, [x24, #0xfe8]
0x04C06220: f60500b5  cbnz x22, #0x4c062dc
0x04C06224: 881240f9  ldr x8, [x20, #0x20]
0x04C06228: 086140f9  ldr x8, [x8, #0xc0]
0x04C0622C: 001140f9  ldr x0, [x8, #0x20]
0x04C06230: 08d44439  ldrb w8, [x0, #0x135]
0x04C06234: 48000037  tbnz w8, #0, #0x4c0623c
0x04C06238: 79419597  bl #0x315681c
0x04C0623C: 08e040b9  ldr w8, [x0, #0xe0]
0x04C06240: 48000035  cbnz w8, #0x4c06248
0x04C06244: 52ea9597  bl #0x3180b8c
0x04C06248: 881240f9  ldr x8, [x20, #0x20]
0x04C0624C: 086140f9  ldr x8, [x8, #0xc0]
0x04C06250: 001140f9  ldr x0, [x8, #0x20]
0x04C06254: 08d44439  ldrb w8, [x0, #0x135]
0x04C06258: 48000037  tbnz w8, #0, #0x4c06260
0x04C0625C: 70419597  bl #0x315681c
0x04C06260: c95301d0  adrp x9, #0x7680000
0x04C06264: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06268: 290140f9  ldr x9, [x9]
0x04C0626C: 170140f9  ldr x23, [x8]
0x04C06270: 200140f9  ldr x0, [x9]
0x04C06274: 8bea9597  bl #0x3180ca0
0x04C06278: 881240f9  ldr x8, [x20, #0x20]
0x04C0627C: e10317aa  mov x1, x23
0x04C06280: e3031faa  mov x3, xzr
0x04C06284: f60300aa  mov x22, x0
0x04C06288: 086140f9  ldr x8, [x8, #0xc0]
0x04C0628C: 023d40f9  ldr x2, [x8, #0x78]
0x04C06290: 4b3f1994  bl #0x5255fbc
0x04C06294: 881240f9  ldr x8, [x20, #0x20]
0x04C06298: 086140f9  ldr x8, [x8, #0xc0]
0x04C0629C: 001140f9  ldr x0, [x8, #0x20]
0x04C062A0: 09d44439  ldrb w9, [x0, #0x135]
0x04C062A4: 89000037  tbnz w9, #0, #0x4c062b4
0x04C062A8: 5d419597  bl #0x315681c
0x04C062AC: 881240f9  ldr x8, [x20, #0x20]
0x04C062B0: 086140f9  ldr x8, [x8, #0xc0]
0x04C062B4: 095c40f9  ldr x9, [x0, #0xb8]
0x04C062B8: 360900f9  str x22, [x9, #0x10]
0x04C062BC: 001140f9  ldr x0, [x8, #0x20]
0x04C062C0: 08d44439  ldrb w8, [x0, #0x135]
0x04C062C4: 48000037  tbnz w8, #0, #0x4c062cc
0x04C062C8: 55419597  bl #0x315681c
0x04C062CC: 085c40f9  ldr x8, [x0, #0xb8]
0x04C062D0: e10316aa  mov x1, x22
0x04C062D4: 00410091  add x0, x8, #0x10
0x04C062D8: bbe99597  bl #0x31809c4
0x04C062DC: 620340f9  ldr x2, [x27]
0x04C062E0: e00315aa  mov x0, x21
0x04C062E4: e10316aa  mov x1, x22
0x04C062E8: f003c297  bl #0x3c872a8
0x04C062EC: 480340f9  ldr x8, [x26]
0x04C062F0: f50300aa  mov x21, x0
0x04C062F4: e00308aa  mov x0, x8
0x04C062F8: 6aea9597  bl #0x3180ca0
0x04C062FC: 881240f9  ldr x8, [x20, #0x20]
0x04C06300: e10313aa  mov x1, x19
0x04C06304: e3031faa  mov x3, xzr
0x04C06308: f40300aa  mov x20, x0
0x04C0630C: 086140f9  ldr x8, [x8, #0xc0]
0x04C06310: 024140f9  ldr x2, [x8, #0x80]
0x04C06314: a9411994  bl #0x52569b8
0x04C06318: 220340f9  ldr x2, [x25]
0x04C0631C: e00315aa  mov x0, x21
0x04C06320: e10314aa  mov x1, x20
0x04C06324: dc29c197  bl #0x3c50a94
0x04C06328: 010340f9  ldr x1, [x24]
0x04C0632C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C06330: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C06334: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C06338: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C0633C: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x04C06340: 2467c117  b #0x3c5ffd0
0x04C06344: 5aea9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C041EC | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$GetToolGraphsFromItems
; native signature: System_Collections_Generic_List_IMergeGraphItem__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___GetToolGraphsFromItems (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_IMergeItem__o* items, const MethodInfo_4C041EC* method);
; bytes=328 sha256=be1c76470e1667d1acce7418a7ed4a3cf688fe9421c5a58fad5facf54305658a status=arm64_complete_bound indexed_start=True
0x04C041EC: fe0f1af8  str x30, [sp, #-0x60]!
0x04C041F0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C041F4: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C041F8: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C041FC: f65704a9  stp x22, x21, [sp, #0x40]
0x04C04200: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C04204: b68801d0  adrp x22, #0x7d1a000
0x04C04208: fc530190  adrp x28, #0x7680000
0x04C0420C: fb530190  adrp x27, #0x7680000
0x04C04210: fa530190  adrp x26, #0x7680000
0x04C04214: f9530190  adrp x25, #0x7680000
0x04C04218: f8530190  adrp x24, #0x7680000
0x04C0421C: f7530190  adrp x23, #0x7680000
0x04C04220: 9c0b40f9  ldr x28, [x28, #0x10]
0x04C04224: c8ce7939  ldrb w8, [x22, #0xe73]
0x04C04228: 7b0f40f9  ldr x27, [x27, #0x18]
0x04C0422C: 5a1340f9  ldr x26, [x26, #0x20]
0x04C04230: 391740f9  ldr x25, [x25, #0x28]
0x04C04234: 181b40f9  ldr x24, [x24, #0x30]
0x04C04238: f71e40f9  ldr x23, [x23, #0x38]
0x04C0423C: f40302aa  mov x20, x2
0x04C04240: f50301aa  mov x21, x1
0x04C04244: f30300aa  mov x19, x0
0x04C04248: a8020037  tbnz w8, #0, #0x4c0429c
0x04C0424C: e0530190  adrp x0, #0x7680000
0x04C04250: 001840f9  ldr x0, [x0, #0x30]
0x04C04254: f1f19597  bl #0x3180a18
0x04C04258: e0530190  adrp x0, #0x7680000
0x04C0425C: 000c40f9  ldr x0, [x0, #0x18]
0x04C04260: eef19597  bl #0x3180a18
0x04C04264: e0530190  adrp x0, #0x7680000
0x04C04268: 001c40f9  ldr x0, [x0, #0x38]
0x04C0426C: ebf19597  bl #0x3180a18
0x04C04270: e0530190  adrp x0, #0x7680000
0x04C04274: 001440f9  ldr x0, [x0, #0x28]
0x04C04278: e8f19597  bl #0x3180a18
0x04C0427C: e0530190  adrp x0, #0x7680000
0x04C04280: 000840f9  ldr x0, [x0, #0x10]
0x04C04284: e5f19597  bl #0x3180a18
0x04C04288: e0530190  adrp x0, #0x7680000
0x04C0428C: 001040f9  ldr x0, [x0, #0x20]
0x04C04290: e2f19597  bl #0x3180a18
0x04C04294: 28008052  movz w8, #0x1
0x04C04298: c8ce3939  strb w8, [x22, #0xe73]
0x04C0429C: 800340f9  ldr x0, [x28]
0x04C042A0: 80f29597  bl #0x3180ca0
0x04C042A4: 881240f9  ldr x8, [x20, #0x20]
0x04C042A8: e10313aa  mov x1, x19
0x04C042AC: e3031faa  mov x3, xzr
0x04C042B0: f60300aa  mov x22, x0
0x04C042B4: 086140f9  ldr x8, [x8, #0xc0]
0x04C042B8: 024540f9  ldr x2, [x8, #0x88]
0x04C042BC: bf491994  bl #0x52569b8
0x04C042C0: 620340f9  ldr x2, [x27]
0x04C042C4: e00315aa  mov x0, x21
0x04C042C8: e10316aa  mov x1, x22
0x04C042CC: f231c197  bl #0x3c50a94
0x04C042D0: 480340f9  ldr x8, [x26]
0x04C042D4: f50300aa  mov x21, x0
0x04C042D8: e00308aa  mov x0, x8
0x04C042DC: 71f29597  bl #0x3180ca0
0x04C042E0: 881240f9  ldr x8, [x20, #0x20]
0x04C042E4: e10313aa  mov x1, x19
0x04C042E8: e3031faa  mov x3, xzr
0x04C042EC: f40300aa  mov x20, x0
0x04C042F0: 086140f9  ldr x8, [x8, #0xc0]
0x04C042F4: 024940f9  ldr x2, [x8, #0x90]
0x04C042F8: 31471994  bl #0x5255fbc
0x04C042FC: 220340f9  ldr x2, [x25]
0x04C04300: e00315aa  mov x0, x21
0x04C04304: e10314aa  mov x1, x20
0x04C04308: e80bc297  bl #0x3c872a8
0x04C0430C: 010340f9  ldr x1, [x24]
0x04C04310: d1e0c097  bl #0x3c3c654
0x04C04314: e10240f9  ldr x1, [x23]
0x04C04318: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C0431C: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C04320: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C04324: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C04328: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C0432C: fe0746f8  ldr x30, [sp], #0x60
0x04C04330: 286fc117  b #0x3c5ffd0

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06348 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$GetToolGraphsFromItems
; native signature: System_Collections_Generic_List_IMergeGraphItem__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___GetToolGraphsFromItems (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_IMergeItem__o* items, const MethodInfo_4C06348* method);
; bytes=328 sha256=85cce947e83009dad7183b0eb06ccaa4de951370b2ecbe88841e6c5908c5f10b status=arm64_complete_bound indexed_start=True
0x04C06348: fe0f1af8  str x30, [sp, #-0x60]!
0x04C0634C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C06350: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C06354: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C06358: f65704a9  stp x22, x21, [sp, #0x40]
0x04C0635C: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C06360: b6880190  adrp x22, #0x7d1a000
0x04C06364: dc5301d0  adrp x28, #0x7680000
0x04C06368: db5301d0  adrp x27, #0x7680000
0x04C0636C: da5301d0  adrp x26, #0x7680000
0x04C06370: d95301d0  adrp x25, #0x7680000
0x04C06374: d85301d0  adrp x24, #0x7680000
0x04C06378: d75301d0  adrp x23, #0x7680000
0x04C0637C: 9c0b40f9  ldr x28, [x28, #0x10]
0x04C06380: c81e7a39  ldrb w8, [x22, #0xe87]
0x04C06384: 7b0f40f9  ldr x27, [x27, #0x18]
0x04C06388: 5a1340f9  ldr x26, [x26, #0x20]
0x04C0638C: 391740f9  ldr x25, [x25, #0x28]
0x04C06390: 181b40f9  ldr x24, [x24, #0x30]
0x04C06394: f71e40f9  ldr x23, [x23, #0x38]
0x04C06398: f40302aa  mov x20, x2
0x04C0639C: f50301aa  mov x21, x1
0x04C063A0: f30300aa  mov x19, x0
0x04C063A4: a8020037  tbnz w8, #0, #0x4c063f8
0x04C063A8: c05301d0  adrp x0, #0x7680000
0x04C063AC: 001840f9  ldr x0, [x0, #0x30]
0x04C063B0: 9ae99597  bl #0x3180a18
0x04C063B4: c05301d0  adrp x0, #0x7680000
0x04C063B8: 000c40f9  ldr x0, [x0, #0x18]
0x04C063BC: 97e99597  bl #0x3180a18
0x04C063C0: c05301d0  adrp x0, #0x7680000
0x04C063C4: 001c40f9  ldr x0, [x0, #0x38]
0x04C063C8: 94e99597  bl #0x3180a18
0x04C063CC: c05301d0  adrp x0, #0x7680000
0x04C063D0: 001440f9  ldr x0, [x0, #0x28]
0x04C063D4: 91e99597  bl #0x3180a18
0x04C063D8: c05301d0  adrp x0, #0x7680000
0x04C063DC: 000840f9  ldr x0, [x0, #0x10]
0x04C063E0: 8ee99597  bl #0x3180a18
0x04C063E4: c05301d0  adrp x0, #0x7680000
0x04C063E8: 001040f9  ldr x0, [x0, #0x20]
0x04C063EC: 8be99597  bl #0x3180a18
0x04C063F0: 28008052  movz w8, #0x1
0x04C063F4: c81e3a39  strb w8, [x22, #0xe87]
0x04C063F8: 800340f9  ldr x0, [x28]
0x04C063FC: 29ea9597  bl #0x3180ca0
0x04C06400: 881240f9  ldr x8, [x20, #0x20]
0x04C06404: e10313aa  mov x1, x19
0x04C06408: e3031faa  mov x3, xzr
0x04C0640C: f60300aa  mov x22, x0
0x04C06410: 086140f9  ldr x8, [x8, #0xc0]
0x04C06414: 024540f9  ldr x2, [x8, #0x88]
0x04C06418: 68411994  bl #0x52569b8
0x04C0641C: 620340f9  ldr x2, [x27]
0x04C06420: e00315aa  mov x0, x21
0x04C06424: e10316aa  mov x1, x22
0x04C06428: 9b29c197  bl #0x3c50a94
0x04C0642C: 480340f9  ldr x8, [x26]
0x04C06430: f50300aa  mov x21, x0
0x04C06434: e00308aa  mov x0, x8
0x04C06438: 1aea9597  bl #0x3180ca0
0x04C0643C: 881240f9  ldr x8, [x20, #0x20]
0x04C06440: e10313aa  mov x1, x19
0x04C06444: e3031faa  mov x3, xzr
0x04C06448: f40300aa  mov x20, x0
0x04C0644C: 086140f9  ldr x8, [x8, #0xc0]
0x04C06450: 024940f9  ldr x2, [x8, #0x90]
0x04C06454: da3e1994  bl #0x5255fbc
0x04C06458: 220340f9  ldr x2, [x25]
0x04C0645C: e00315aa  mov x0, x21
0x04C06460: e10314aa  mov x1, x20
0x04C06464: 9103c297  bl #0x3c872a8
0x04C06468: 010340f9  ldr x1, [x24]
0x04C0646C: 7ad8c097  bl #0x3c3c654
0x04C06470: e10240f9  ldr x1, [x23]
0x04C06474: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C06478: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C0647C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C06480: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C06484: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C06488: fe0746f8  ldr x30, [sp], #0x60
0x04C0648C: d166c117  b #0x3c5ffd0

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C04334 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$AnalyzeSingleToolGraph
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___AnalyzeSingleToolGraph (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, System_Collections_Generic_List_IMergeItem__o* boardItems, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* unfinishedItemLevelSumPerChain, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* collectableTools, const MethodInfo_4C04334* method);
; bytes=412 sha256=6c58e3aaba5be15d588ba0a6ddcaa14ffd6ed97ae37116dccf0542008b1734e1 status=arm64_complete_bound indexed_start=True
0x04C04334: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C04338: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C0433C: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C04340: f65703a9  stp x22, x21, [sp, #0x30]
0x04C04344: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C04348: b98801d0  adrp x25, #0x7d1a000
0x04C0434C: 28d37939  ldrb w8, [x25, #0xe74]
0x04C04350: f70305aa  mov x23, x5
0x04C04354: f30304aa  mov x19, x4
0x04C04358: f40303aa  mov x20, x3
0x04C0435C: f50302aa  mov x21, x2
0x04C04360: f60301aa  mov x22, x1
0x04C04364: f80300aa  mov x24, x0
0x04C04368: e8010037  tbnz w8, #0, #0x4c043a4
0x04C0436C: c0530190  adrp x0, #0x767c000
0x04C04370: 002c41f9  ldr x0, [x0, #0x258]
0x04C04374: a9f19597  bl #0x3180a18
0x04C04378: e0530190  adrp x0, #0x7680000
0x04C0437C: 002040f9  ldr x0, [x0, #0x40]
0x04C04380: a6f19597  bl #0x3180a18
0x04C04384: c0530190  adrp x0, #0x767c000
0x04C04388: 002441f9  ldr x0, [x0, #0x248]
0x04C0438C: a3f19597  bl #0x3180a18
0x04C04390: c05301d0  adrp x0, #0x767e000
0x04C04394: 008442f9  ldr x0, [x0, #0x508]
0x04C04398: a0f19597  bl #0x3180a18
0x04C0439C: 28008052  movz w8, #0x1
0x04C043A0: 28d33939  strb w8, [x25, #0xe74]
0x04C043A4: 003f40f9  ldr x0, [x24, #0x78]
0x04C043A8: 200900b4  cbz x0, #0x4c044cc
0x04C043AC: e8530190  adrp x8, #0x7680000
0x04C043B0: 082140f9  ldr x8, [x8, #0x40]
0x04C043B4: e10316aa  mov x1, x22
0x04C043B8: 020140f9  ldr x2, [x8]
0x04C043BC: 07c60a94  bl #0x4eb5bd8
0x04C043C0: 760800b4  cbz x22, #0x4c044cc
0x04C043C4: ca530190  adrp x10, #0x767c000
0x04C043C8: c80240f9  ldr x8, [x22]
0x04C043CC: 4a2541f9  ldr x10, [x10, #0x248]
0x04C043D0: 1a4740f9  ldr x26, [x24, #0x88]
0x04C043D4: f903002a  mov w25, w0
0x04C043D8: 095d4279  ldrh w9, [x8, #0x12e]
0x04C043DC: 410140f9  ldr x1, [x10]
0x04C043E0: 290100b4  cbz x9, #0x4c04404
0x04C043E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C043E8: 4a210091  add x10, x10, #8
0x04C043EC: 4b815ff8  ldur x11, [x10, #-8]
0x04C043F0: 7f0101eb  cmp x11, x1
0x04C043F4: 00010054  b.eq #0x4c04414
0x04C043F8: 290500f1  subs x9, x9, #1
0x04C043FC: 4a410091  add x10, x10, #0x10
0x04C04400: 61ffff54  b.ne #0x4c043ec
0x04C04404: e00316aa  mov x0, x22
0x04C04408: e2031f2a  mov w2, wzr
0x04C0440C: c1499597  bl #0x3156b10
0x04C04410: 04000014  b #0x4c04420
0x04C04414: 490180b9  ldrsw x9, [x10]
0x04C04418: 0811098b  add x8, x8, x9, lsl #4
0x04C0441C: 00e10491  add x0, x8, #0x138
0x04C04420: 080440a9  ldp x8, x1, [x0]
0x04C04424: e00316aa  mov x0, x22
0x04C04428: 00013fd6  blr x8
0x04C0442C: 000500b4  cbz x0, #0x4c044cc
0x04C04430: fa0400b4  cbz x26, #0x4c044cc
0x04C04434: c8530190  adrp x8, #0x767c000
0x04C04438: 082d41f9  ldr x8, [x8, #0x258]
0x04C0443C: 011840b9  ldr w1, [x0, #0x18]
0x04C04440: e0031aaa  mov x0, x26
0x04C04444: 020140f9  ldr x2, [x8]
0x04C04448: 8a9d0894  bl #0x4e2ba70
0x04C0444C: e81240f9  ldr x8, [x23, #0x20]
0x04C04450: f703002a  mov w23, w0
0x04C04454: e00318aa  mov x0, x24
0x04C04458: e10316aa  mov x1, x22
0x04C0445C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04460: e20315aa  mov x2, x21
0x04C04464: 034d40f9  ldr x3, [x8, #0x98]
0x04C04468: 1a000094  bl #0x4c044d0
0x04C0446C: 150cd71a  sdiv w21, w0, w23
0x04C04470: a382171b  msub w3, w21, w23, w0
0x04C04474: 7f040071  cmp w3, #1
0x04C04478: 8b000054  b.lt #0x4c04488
0x04C0447C: e10314aa  mov x1, x20
0x04C04480: e203192a  mov w2, w25
0x04C04484: 6c000094  bl #0x4c04634
0x04C04488: bf060071  cmp w21, #1
0x04C0448C: 4b010054  b.lt #0x4c044b4
0x04C04490: e10313aa  mov x1, x19
0x04C04494: e203192a  mov w2, w25
0x04C04498: e303152a  mov w3, w21
0x04C0449C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C044A0: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C044A4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C044A8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C044AC: fe0745f8  ldr x30, [sp], #0x50
0x04C044B0: 61000014  b #0x4c04634
0x04C044B4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C044B8: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C044BC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C044C0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C044C4: fe0745f8  ldr x30, [sp], #0x50
0x04C044C8: c0035fd6  ret
0x04C044CC: f8f19597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06490 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$AnalyzeSingleToolGraph
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___AnalyzeSingleToolGraph (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, System_Collections_Generic_List_IMergeItem__o* boardItems, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* unfinishedItemLevelSumPerChain, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* collectableTools, const MethodInfo_4C06490* method);
; bytes=476 sha256=f34251357ba433abef770bf1ea7e722e07db354d25076c1e7f7d3ac5f71b7fe2 status=arm64_complete_bound indexed_start=True
0x04C06490: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C06494: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C06498: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C0649C: f65703a9  stp x22, x21, [sp, #0x30]
0x04C064A0: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C064A4: b9880190  adrp x25, #0x7d1a000
0x04C064A8: 28237a39  ldrb w8, [x25, #0xe88]
0x04C064AC: f40305aa  mov x20, x5
0x04C064B0: f30304aa  mov x19, x4
0x04C064B4: f60303aa  mov x22, x3
0x04C064B8: f70302aa  mov x23, x2
0x04C064BC: f80301aa  mov x24, x1
0x04C064C0: f50300aa  mov x21, x0
0x04C064C4: e8010037  tbnz w8, #0, #0x4c06500
0x04C064C8: a05301d0  adrp x0, #0x767c000
0x04C064CC: 002c41f9  ldr x0, [x0, #0x258]
0x04C064D0: 52e99597  bl #0x3180a18
0x04C064D4: c05301d0  adrp x0, #0x7680000
0x04C064D8: 002040f9  ldr x0, [x0, #0x40]
0x04C064DC: 4fe99597  bl #0x3180a18
0x04C064E0: a05301d0  adrp x0, #0x767c000
0x04C064E4: 002441f9  ldr x0, [x0, #0x248]
0x04C064E8: 4ce99597  bl #0x3180a18
0x04C064EC: c0530190  adrp x0, #0x767e000
0x04C064F0: 008442f9  ldr x0, [x0, #0x508]
0x04C064F4: 49e99597  bl #0x3180a18
0x04C064F8: 28008052  movz w8, #0x1
0x04C064FC: 28233a39  strb w8, [x25, #0xe88]
0x04C06500: 881240f9  ldr x8, [x20, #0x20]
0x04C06504: e00315aa  mov x0, x21
0x04C06508: 086140f9  ldr x8, [x8, #0xc0]
0x04C0650C: 012540f9  ldr x1, [x8, #0x48]
0x04C06510: 280040f9  ldr x8, [x1]
0x04C06514: 00013fd6  blr x8
0x04C06518: 800a00b4  cbz x0, #0x4c06668
0x04C0651C: c85301d0  adrp x8, #0x7680000
0x04C06520: 082140f9  ldr x8, [x8, #0x40]
0x04C06524: e10318aa  mov x1, x24
0x04C06528: 020140f9  ldr x2, [x8]
0x04C0652C: abbd0a94  bl #0x4eb5bd8
0x04C06530: d80900b4  cbz x24, #0x4c06668
0x04C06534: aa5301d0  adrp x10, #0x767c000
0x04C06538: 080340f9  ldr x8, [x24]
0x04C0653C: 4a2541f9  ldr x10, [x10, #0x248]
0x04C06540: ba4640f9  ldr x26, [x21, #0x88]
0x04C06544: f903002a  mov w25, w0
0x04C06548: 095d4279  ldrh w9, [x8, #0x12e]
0x04C0654C: 410140f9  ldr x1, [x10]
0x04C06550: 290100b4  cbz x9, #0x4c06574
0x04C06554: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C06558: 4a210091  add x10, x10, #8
0x04C0655C: 4b815ff8  ldur x11, [x10, #-8]
0x04C06560: 7f0101eb  cmp x11, x1
0x04C06564: 00010054  b.eq #0x4c06584
0x04C06568: 290500f1  subs x9, x9, #1
0x04C0656C: 4a410091  add x10, x10, #0x10
0x04C06570: 61ffff54  b.ne #0x4c0655c
0x04C06574: e00318aa  mov x0, x24
0x04C06578: e2031f2a  mov w2, wzr
0x04C0657C: 65419597  bl #0x3156b10
0x04C06580: 04000014  b #0x4c06590
0x04C06584: 490180b9  ldrsw x9, [x10]
0x04C06588: 0811098b  add x8, x8, x9, lsl #4
0x04C0658C: 00e10491  add x0, x8, #0x138
0x04C06590: 080440a9  ldp x8, x1, [x0]
0x04C06594: e00318aa  mov x0, x24
0x04C06598: 00013fd6  blr x8
0x04C0659C: 600600b4  cbz x0, #0x4c06668
0x04C065A0: 5a0600b4  cbz x26, #0x4c06668
0x04C065A4: a85301d0  adrp x8, #0x767c000
0x04C065A8: 082d41f9  ldr x8, [x8, #0x258]
0x04C065AC: 011840b9  ldr w1, [x0, #0x18]
0x04C065B0: e0031aaa  mov x0, x26
0x04C065B4: 020140f9  ldr x2, [x8]
0x04C065B8: 2e950894  bl #0x4e2ba70
0x04C065BC: 881240f9  ldr x8, [x20, #0x20]
0x04C065C0: fa03002a  mov w26, w0
0x04C065C4: e00315aa  mov x0, x21
0x04C065C8: e10318aa  mov x1, x24
0x04C065CC: 086140f9  ldr x8, [x8, #0xc0]
0x04C065D0: e20317aa  mov x2, x23
0x04C065D4: 034d40f9  ldr x3, [x8, #0x98]
0x04C065D8: 680040f9  ldr x8, [x3]
0x04C065DC: 00013fd6  blr x8
0x04C065E0: 170cda1a  sdiv w23, w0, w26
0x04C065E4: e3821a1b  msub w3, w23, w26, w0
0x04C065E8: 7f040071  cmp w3, #1
0x04C065EC: 2b010054  b.lt #0x4c06610
0x04C065F0: 881240f9  ldr x8, [x20, #0x20]
0x04C065F4: e00315aa  mov x0, x21
0x04C065F8: e10316aa  mov x1, x22
0x04C065FC: e203192a  mov w2, w25
0x04C06600: 086140f9  ldr x8, [x8, #0xc0]
0x04C06604: 045140f9  ldr x4, [x8, #0xa0]
0x04C06608: 880040f9  ldr x8, [x4]
0x04C0660C: 00013fd6  blr x8
0x04C06610: ff060071  cmp w23, #1
0x04C06614: eb010054  b.lt #0x4c06650
0x04C06618: 881240f9  ldr x8, [x20, #0x20]
0x04C0661C: e00315aa  mov x0, x21
0x04C06620: e10313aa  mov x1, x19
0x04C06624: e203192a  mov w2, w25
0x04C06628: 086140f9  ldr x8, [x8, #0xc0]
0x04C0662C: e303172a  mov w3, w23
0x04C06630: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C06634: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C06638: 045140f9  ldr x4, [x8, #0xa0]
0x04C0663C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C06640: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C06644: 850040f9  ldr x5, [x4]
0x04C06648: fe0745f8  ldr x30, [sp], #0x50
0x04C0664C: a0001fd6  br x5
0x04C06650: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C06654: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C06658: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C0665C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C06660: fe0745f8  ldr x30, [sp], #0x50
0x04C06664: c0035fd6  ret
0x04C06668: 91e99597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C044D0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$CalculateItemsLevelSum
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___CalculateItemsLevelSum (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, System_Collections_Generic_List_IMergeItem__o* boardItems, const MethodInfo_4C044D0* method);
; bytes=356 sha256=403b9a6029ce68f2e887337a4c8e7b64f006079c3644f591d8eef8f03cd8afa0 status=arm64_complete_bound indexed_start=True
0x04C044D0: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x04C044D4: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C044D8: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C044DC: f65703a9  stp x22, x21, [sp, #0x30]
0x04C044E0: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C044E4: b78801d0  adrp x23, #0x7d1a000
0x04C044E8: e8d67939  ldrb w8, [x23, #0xe75]
0x04C044EC: f30303aa  mov x19, x3
0x04C044F0: f40302aa  mov x20, x2
0x04C044F4: f60301aa  mov x22, x1
0x04C044F8: f50300aa  mov x21, x0
0x04C044FC: e8010037  tbnz w8, #0, #0x4c04538
0x04C04500: e0530190  adrp x0, #0x7680000
0x04C04504: 002440f9  ldr x0, [x0, #0x48]
0x04C04508: 44f19597  bl #0x3180a18
0x04C0450C: e0530190  adrp x0, #0x7680000
0x04C04510: 002840f9  ldr x0, [x0, #0x50]
0x04C04514: 41f19597  bl #0x3180a18
0x04C04518: e0530190  adrp x0, #0x7680000
0x04C0451C: 002c40f9  ldr x0, [x0, #0x58]
0x04C04520: 3ef19597  bl #0x3180a18
0x04C04524: e0530190  adrp x0, #0x7680000
0x04C04528: 003040f9  ldr x0, [x0, #0x60]
0x04C0452C: 3bf19597  bl #0x3180a18
0x04C04530: 28008052  movz w8, #0x1
0x04C04534: e8d63939  strb w8, [x23, #0xe75]
0x04C04538: 681240f9  ldr x8, [x19, #0x20]
0x04C0453C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04540: 005540f9  ldr x0, [x8, #0xa8]
0x04C04544: 08d44439  ldrb w8, [x0, #0x135]
0x04C04548: 48000037  tbnz w8, #0, #0x4c04550
0x04C0454C: b4489597  bl #0x315681c
0x04C04550: d4f19597  bl #0x3180ca0
0x04C04554: 681240f9  ldr x8, [x19, #0x20]
0x04C04558: f70300aa  mov x23, x0
0x04C0455C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04560: 015940f9  ldr x1, [x8, #0xb0]
0x04C04564: 0825cd97  bl #0x3f4d984
0x04C04568: 570600b4  cbz x23, #0x4c04630
0x04C0456C: f8530190  adrp x24, #0x7680000
0x04C04570: f9530190  adrp x25, #0x7680000
0x04C04574: fa530190  adrp x26, #0x7680000
0x04C04578: fb530190  adrp x27, #0x7680000
0x04C0457C: 182f40f9  ldr x24, [x24, #0x58]
0x04C04580: 392b40f9  ldr x25, [x25, #0x50]
0x04C04584: 5a3340f9  ldr x26, [x26, #0x60]
0x04C04588: 7b2740f9  ldr x27, [x27, #0x48]
0x04C0458C: e00317aa  mov x0, x23
0x04C04590: 160c01f8  str x22, [x0, #0x10]!
0x04C04594: e10316aa  mov x1, x22
0x04C04598: 0bf19597  bl #0x31809c4
0x04C0459C: e00317aa  mov x0, x23
0x04C045A0: 158c01f8  str x21, [x0, #0x18]!
0x04C045A4: e10315aa  mov x1, x21
0x04C045A8: 07f19597  bl #0x31809c4
0x04C045AC: 000340f9  ldr x0, [x24]
0x04C045B0: bcf19597  bl #0x3180ca0
0x04C045B4: 681240f9  ldr x8, [x19, #0x20]
0x04C045B8: e10317aa  mov x1, x23
0x04C045BC: e3031faa  mov x3, xzr
0x04C045C0: f50300aa  mov x21, x0
0x04C045C4: 086140f9  ldr x8, [x8, #0xc0]
0x04C045C8: 025d40f9  ldr x2, [x8, #0xb8]
0x04C045CC: 7c461994  bl #0x5255fbc
0x04C045D0: 220340f9  ldr x2, [x25]
0x04C045D4: e00314aa  mov x0, x20
0x04C045D8: e10315aa  mov x1, x21
0x04C045DC: 330bc297  bl #0x3c872a8
0x04C045E0: 480340f9  ldr x8, [x26]
0x04C045E4: f40300aa  mov x20, x0
0x04C045E8: e00308aa  mov x0, x8
0x04C045EC: adf19597  bl #0x3180ca0
0x04C045F0: 681240f9  ldr x8, [x19, #0x20]
0x04C045F4: e10317aa  mov x1, x23
0x04C045F8: e3031faa  mov x3, xzr
0x04C045FC: f30300aa  mov x19, x0
0x04C04600: 086140f9  ldr x8, [x8, #0xc0]
0x04C04604: 026140f9  ldr x2, [x8, #0xc0]
0x04C04608: 17481994  bl #0x5256664
0x04C0460C: 620340f9  ldr x2, [x27]
0x04C04610: e00314aa  mov x0, x20
0x04C04614: e10313aa  mov x1, x19
0x04C04618: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C0461C: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C04620: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C04624: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C04628: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x04C0462C: a954c117  b #0x3c598d0
0x04C04630: 9ff19597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C0666C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$CalculateItemsLevelSum
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___CalculateItemsLevelSum (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, System_Collections_Generic_List_IMergeItem__o* boardItems, const MethodInfo_4C0666C* method);
; bytes=360 sha256=3b47d96f1cfc364e470731269b43a0abbd711163289cced246038d4fe92b6983 status=arm64_complete_bound indexed_start=True
0x04C0666C: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x04C06670: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C06674: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C06678: f65703a9  stp x22, x21, [sp, #0x30]
0x04C0667C: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C06680: b7880190  adrp x23, #0x7d1a000
0x04C06684: e8267a39  ldrb w8, [x23, #0xe89]
0x04C06688: f30303aa  mov x19, x3
0x04C0668C: f40302aa  mov x20, x2
0x04C06690: f60301aa  mov x22, x1
0x04C06694: f50300aa  mov x21, x0
0x04C06698: e8010037  tbnz w8, #0, #0x4c066d4
0x04C0669C: c05301d0  adrp x0, #0x7680000
0x04C066A0: 002440f9  ldr x0, [x0, #0x48]
0x04C066A4: dde89597  bl #0x3180a18
0x04C066A8: c05301d0  adrp x0, #0x7680000
0x04C066AC: 002840f9  ldr x0, [x0, #0x50]
0x04C066B0: dae89597  bl #0x3180a18
0x04C066B4: c05301d0  adrp x0, #0x7680000
0x04C066B8: 002c40f9  ldr x0, [x0, #0x58]
0x04C066BC: d7e89597  bl #0x3180a18
0x04C066C0: c05301d0  adrp x0, #0x7680000
0x04C066C4: 003040f9  ldr x0, [x0, #0x60]
0x04C066C8: d4e89597  bl #0x3180a18
0x04C066CC: 28008052  movz w8, #0x1
0x04C066D0: e8263a39  strb w8, [x23, #0xe89]
0x04C066D4: 681240f9  ldr x8, [x19, #0x20]
0x04C066D8: 086140f9  ldr x8, [x8, #0xc0]
0x04C066DC: 005540f9  ldr x0, [x8, #0xa8]
0x04C066E0: 08d44439  ldrb w8, [x0, #0x135]
0x04C066E4: 48000037  tbnz w8, #0, #0x4c066ec
0x04C066E8: 4d409597  bl #0x315681c
0x04C066EC: 6de99597  bl #0x3180ca0
0x04C066F0: 681240f9  ldr x8, [x19, #0x20]
0x04C066F4: f70300aa  mov x23, x0
0x04C066F8: 086140f9  ldr x8, [x8, #0xc0]
0x04C066FC: 015940f9  ldr x1, [x8, #0xb0]
0x04C06700: 280040f9  ldr x8, [x1]
0x04C06704: 00013fd6  blr x8
0x04C06708: 570600b4  cbz x23, #0x4c067d0
0x04C0670C: d85301d0  adrp x24, #0x7680000
0x04C06710: d95301d0  adrp x25, #0x7680000
0x04C06714: da5301d0  adrp x26, #0x7680000
0x04C06718: db5301d0  adrp x27, #0x7680000
0x04C0671C: 182f40f9  ldr x24, [x24, #0x58]
0x04C06720: 392b40f9  ldr x25, [x25, #0x50]
0x04C06724: 5a3340f9  ldr x26, [x26, #0x60]
0x04C06728: 7b2740f9  ldr x27, [x27, #0x48]
0x04C0672C: e00317aa  mov x0, x23
0x04C06730: 160c01f8  str x22, [x0, #0x10]!
0x04C06734: e10316aa  mov x1, x22
0x04C06738: a3e89597  bl #0x31809c4
0x04C0673C: e00317aa  mov x0, x23
0x04C06740: 158c01f8  str x21, [x0, #0x18]!
0x04C06744: e10315aa  mov x1, x21
0x04C06748: 9fe89597  bl #0x31809c4
0x04C0674C: 000340f9  ldr x0, [x24]
0x04C06750: 54e99597  bl #0x3180ca0
0x04C06754: 681240f9  ldr x8, [x19, #0x20]
0x04C06758: e10317aa  mov x1, x23
0x04C0675C: e3031faa  mov x3, xzr
0x04C06760: f50300aa  mov x21, x0
0x04C06764: 086140f9  ldr x8, [x8, #0xc0]
0x04C06768: 025d40f9  ldr x2, [x8, #0xb8]
0x04C0676C: 143e1994  bl #0x5255fbc
0x04C06770: 220340f9  ldr x2, [x25]
0x04C06774: e00314aa  mov x0, x20
0x04C06778: e10315aa  mov x1, x21
0x04C0677C: cb02c297  bl #0x3c872a8
0x04C06780: 480340f9  ldr x8, [x26]
0x04C06784: f40300aa  mov x20, x0
0x04C06788: e00308aa  mov x0, x8
0x04C0678C: 45e99597  bl #0x3180ca0
0x04C06790: 681240f9  ldr x8, [x19, #0x20]
0x04C06794: e10317aa  mov x1, x23
0x04C06798: e3031faa  mov x3, xzr
0x04C0679C: f30300aa  mov x19, x0
0x04C067A0: 086140f9  ldr x8, [x8, #0xc0]
0x04C067A4: 026140f9  ldr x2, [x8, #0xc0]
0x04C067A8: af3f1994  bl #0x5256664
0x04C067AC: 620340f9  ldr x2, [x27]
0x04C067B0: e00314aa  mov x0, x20
0x04C067B4: e10313aa  mov x1, x19
0x04C067B8: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C067BC: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C067C0: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C067C4: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C067C8: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x04C067CC: 414cc117  b #0x3c598d0
0x04C067D0: 37e99597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C04634 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$AddOrUpdateDictionary
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___AddOrUpdateDictionary (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* dictionary, int32_t key, int32_t value, const MethodInfo_4C04634* method);
; bytes=184 sha256=2d0fcffa54064682201750571afc11dba98534a0a011711bcee0ab29d484ca03 status=arm64_complete_bound indexed_start=True
0x04C04634: fe0f1df8  str x30, [sp, #-0x30]!
0x04C04638: f65701a9  stp x22, x21, [sp, #0x10]
0x04C0463C: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C04640: b68801d0  adrp x22, #0x7d1a000
0x04C04644: c8da7939  ldrb w8, [x22, #0xe76]
0x04C04648: f303032a  mov w19, w3
0x04C0464C: f403022a  mov w20, w2
0x04C04650: f50301aa  mov x21, x1
0x04C04654: 88010037  tbnz w8, #0, #0x4c04684
0x04C04658: e0530190  adrp x0, #0x7680000
0x04C0465C: 003440f9  ldr x0, [x0, #0x68]
0x04C04660: eef09597  bl #0x3180a18
0x04C04664: e0530190  adrp x0, #0x7680000
0x04C04668: 003840f9  ldr x0, [x0, #0x70]
0x04C0466C: ebf09597  bl #0x3180a18
0x04C04670: e0530190  adrp x0, #0x7680000
0x04C04674: 003c40f9  ldr x0, [x0, #0x78]
0x04C04678: e8f09597  bl #0x3180a18
0x04C0467C: 28008052  movz w8, #0x1
0x04C04680: c8da3939  strb w8, [x22, #0xe76]
0x04C04684: 350300b4  cbz x21, #0x4c046e8
0x04C04688: e8530190  adrp x8, #0x7680000
0x04C0468C: 083540f9  ldr x8, [x8, #0x68]
0x04C04690: f6530190  adrp x22, #0x7680000
0x04C04694: e00315aa  mov x0, x21
0x04C04698: e103142a  mov w1, w20
0x04C0469C: 020140f9  ldr x2, [x8]
0x04C046A0: d63e40f9  ldr x22, [x22, #0x78]
0x04C046A4: f95b0994  bl #0x4e5b688
0x04C046A8: 00010036  tbz w0, #0, #0x4c046c8
0x04C046AC: e8530190  adrp x8, #0x7680000
0x04C046B0: 083940f9  ldr x8, [x8, #0x70]
0x04C046B4: e00315aa  mov x0, x21
0x04C046B8: e103142a  mov w1, w20
0x04C046BC: 020140f9  ldr x2, [x8]
0x04C046C0: 505b0994  bl #0x4e5b400
0x04C046C4: 1300130b  add w19, w0, w19
0x04C046C8: c30240f9  ldr x3, [x22]
0x04C046CC: e00315aa  mov x0, x21
0x04C046D0: e103142a  mov w1, w20
0x04C046D4: e203132a  mov w2, w19
0x04C046D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C046DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C046E0: fe0743f8  ldr x30, [sp], #0x30
0x04C046E4: 695b0914  b #0x4e5b488
0x04C046E8: 71f19597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C067D4 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$AddOrUpdateDictionary
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___AddOrUpdateDictionary (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* dictionary, int32_t key, int32_t value, const MethodInfo_4C067D4* method);
; bytes=184 sha256=8e718a60c1f0f7483a082edf7ad45466b17f18357d659845c765d5ff1fb067ff status=arm64_complete_bound indexed_start=True
0x04C067D4: fe0f1df8  str x30, [sp, #-0x30]!
0x04C067D8: f65701a9  stp x22, x21, [sp, #0x10]
0x04C067DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C067E0: b6880190  adrp x22, #0x7d1a000
0x04C067E4: c82a7a39  ldrb w8, [x22, #0xe8a]
0x04C067E8: f303032a  mov w19, w3
0x04C067EC: f403022a  mov w20, w2
0x04C067F0: f50301aa  mov x21, x1
0x04C067F4: 88010037  tbnz w8, #0, #0x4c06824
0x04C067F8: c05301d0  adrp x0, #0x7680000
0x04C067FC: 003440f9  ldr x0, [x0, #0x68]
0x04C06800: 86e89597  bl #0x3180a18
0x04C06804: c05301d0  adrp x0, #0x7680000
0x04C06808: 003840f9  ldr x0, [x0, #0x70]
0x04C0680C: 83e89597  bl #0x3180a18
0x04C06810: c05301d0  adrp x0, #0x7680000
0x04C06814: 003c40f9  ldr x0, [x0, #0x78]
0x04C06818: 80e89597  bl #0x3180a18
0x04C0681C: 28008052  movz w8, #0x1
0x04C06820: c82a3a39  strb w8, [x22, #0xe8a]
0x04C06824: 350300b4  cbz x21, #0x4c06888
0x04C06828: c85301d0  adrp x8, #0x7680000
0x04C0682C: 083540f9  ldr x8, [x8, #0x68]
0x04C06830: d65301d0  adrp x22, #0x7680000
0x04C06834: e00315aa  mov x0, x21
0x04C06838: e103142a  mov w1, w20
0x04C0683C: 020140f9  ldr x2, [x8]
0x04C06840: d63e40f9  ldr x22, [x22, #0x78]
0x04C06844: 91530994  bl #0x4e5b688
0x04C06848: 00010036  tbz w0, #0, #0x4c06868
0x04C0684C: c85301d0  adrp x8, #0x7680000
0x04C06850: 083940f9  ldr x8, [x8, #0x70]
0x04C06854: e00315aa  mov x0, x21
0x04C06858: e103142a  mov w1, w20
0x04C0685C: 020140f9  ldr x2, [x8]
0x04C06860: e8520994  bl #0x4e5b400
0x04C06864: 1300130b  add w19, w0, w19
0x04C06868: c30240f9  ldr x3, [x22]
0x04C0686C: e00315aa  mov x0, x21
0x04C06870: e103142a  mov w1, w20
0x04C06874: e203132a  mov w2, w19
0x04C06878: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C0687C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C06880: fe0743f8  ldr x30, [sp], #0x30
0x04C06884: 01530914  b #0x4e5b488
0x04C06888: 09e99597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C046EC | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$FilterToolLevelsByChainProgress
; native signature: System_Collections_Generic_List_WeightedToolLevel__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___FilterToolLevelsByChainProgress (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedToolLevel__o* originalToolLevels, int32_t currentLevelSum, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, const MethodInfo_4C046EC* method);
; bytes=464 sha256=0c69b0ebcdf211ebf789728e7eeebb93d4893101b646441550953b79bcc365e1 status=arm64_complete_bound indexed_start=True
0x04C046EC: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C046F0: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C046F4: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C046F8: f65703a9  stp x22, x21, [sp, #0x30]
0x04C046FC: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C04700: b78801d0  adrp x23, #0x7d1a000
0x04C04704: e8de7939  ldrb w8, [x23, #0xe77]
0x04C04708: f40304aa  mov x20, x4
0x04C0470C: f60303aa  mov x22, x3
0x04C04710: f503022a  mov w21, w2
0x04C04714: f30301aa  mov x19, x1
0x04C04718: f80300aa  mov x24, x0
0x04C0471C: a8020037  tbnz w8, #0, #0x4c04770
0x04C04720: c0530190  adrp x0, #0x767c000
0x04C04724: 002c41f9  ldr x0, [x0, #0x258]
0x04C04728: bcf09597  bl #0x3180a18
0x04C0472C: e0530190  adrp x0, #0x7680000
0x04C04730: 004040f9  ldr x0, [x0, #0x80]
0x04C04734: b9f09597  bl #0x3180a18
0x04C04738: e0530190  adrp x0, #0x7680000
0x04C0473C: 004440f9  ldr x0, [x0, #0x88]
0x04C04740: b6f09597  bl #0x3180a18
0x04C04744: e0530190  adrp x0, #0x7680000
0x04C04748: 004840f9  ldr x0, [x0, #0x90]
0x04C0474C: b3f09597  bl #0x3180a18
0x04C04750: c0530190  adrp x0, #0x767c000
0x04C04754: 002441f9  ldr x0, [x0, #0x248]
0x04C04758: b0f09597  bl #0x3180a18
0x04C0475C: c05301d0  adrp x0, #0x767e000
0x04C04760: 008442f9  ldr x0, [x0, #0x508]
0x04C04764: adf09597  bl #0x3180a18
0x04C04768: 28008052  movz w8, #0x1
0x04C0476C: e8de3939  strb w8, [x23, #0xe77]
0x04C04770: 881240f9  ldr x8, [x20, #0x20]
0x04C04774: 086140f9  ldr x8, [x8, #0xc0]
0x04C04778: 006540f9  ldr x0, [x8, #0xc8]
0x04C0477C: 08d44439  ldrb w8, [x0, #0x135]
0x04C04780: 48000037  tbnz w8, #0, #0x4c04788
0x04C04784: 26489597  bl #0x315681c
0x04C04788: 46f19597  bl #0x3180ca0
0x04C0478C: 881240f9  ldr x8, [x20, #0x20]
0x04C04790: f70300aa  mov x23, x0
0x04C04794: 086140f9  ldr x8, [x8, #0xc0]
0x04C04798: 016940f9  ldr x1, [x8, #0xd0]
0x04C0479C: 7c27cd97  bl #0x3f4e58c
0x04C047A0: d70800b4  cbz x23, #0x4c048b8
0x04C047A4: e00317aa  mov x0, x23
0x04C047A8: 180c01f8  str x24, [x0, #0x10]!
0x04C047AC: e10318aa  mov x1, x24
0x04C047B0: 85f09597  bl #0x31809c4
0x04C047B4: 360800b4  cbz x22, #0x4c048b8
0x04C047B8: ca530190  adrp x10, #0x767c000
0x04C047BC: c80240f9  ldr x8, [x22]
0x04C047C0: 4a2541f9  ldr x10, [x10, #0x248]
0x04C047C4: 184740f9  ldr x24, [x24, #0x88]
0x04C047C8: 095d4279  ldrh w9, [x8, #0x12e]
0x04C047CC: 410140f9  ldr x1, [x10]
0x04C047D0: 290100b4  cbz x9, #0x4c047f4
0x04C047D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C047D8: 4a210091  add x10, x10, #8
0x04C047DC: 4b815ff8  ldur x11, [x10, #-8]
0x04C047E0: 7f0101eb  cmp x11, x1
0x04C047E4: 00010054  b.eq #0x4c04804
0x04C047E8: 290500f1  subs x9, x9, #1
0x04C047EC: 4a410091  add x10, x10, #0x10
0x04C047F0: 61ffff54  b.ne #0x4c047dc
0x04C047F4: e00316aa  mov x0, x22
0x04C047F8: e2031f2a  mov w2, wzr
0x04C047FC: c5489597  bl #0x3156b10
0x04C04800: 04000014  b #0x4c04810
0x04C04804: 490180b9  ldrsw x9, [x10]
0x04C04808: 0811098b  add x8, x8, x9, lsl #4
0x04C0480C: 00e10491  add x0, x8, #0x138
0x04C04810: 080440a9  ldp x8, x1, [x0]
0x04C04814: e00316aa  mov x0, x22
0x04C04818: 00013fd6  blr x8
0x04C0481C: e00400b4  cbz x0, #0x4c048b8
0x04C04820: d80400b4  cbz x24, #0x4c048b8
0x04C04824: c8530190  adrp x8, #0x767c000
0x04C04828: 082d41f9  ldr x8, [x8, #0x258]
0x04C0482C: 011840b9  ldr w1, [x0, #0x18]
0x04C04830: f6530190  adrp x22, #0x7680000
0x04C04834: f9530190  adrp x25, #0x7680000
0x04C04838: 020140f9  ldr x2, [x8]
0x04C0483C: fa530190  adrp x26, #0x7680000
0x04C04840: d64a40f9  ldr x22, [x22, #0x90]
0x04C04844: 394740f9  ldr x25, [x25, #0x88]
0x04C04848: 5a4340f9  ldr x26, [x26, #0x80]
0x04C0484C: e00318aa  mov x0, x24
0x04C04850: 889c0894  bl #0x4e2ba70
0x04C04854: a80ec01a  sdiv w8, w21, w0
0x04C04858: e903154b  neg w9, w21
0x04C0485C: 0825001b  madd w8, w8, w0, w9
0x04C04860: 0800080b  add w8, w0, w8
0x04C04864: e81a00b9  str w8, [x23, #0x18]
0x04C04868: c00240f9  ldr x0, [x22]
0x04C0486C: 0df19597  bl #0x3180ca0
0x04C04870: 881240f9  ldr x8, [x20, #0x20]
0x04C04874: e10317aa  mov x1, x23
0x04C04878: e3031faa  mov x3, xzr
0x04C0487C: f40300aa  mov x20, x0
0x04C04880: 086140f9  ldr x8, [x8, #0xc0]
0x04C04884: 026d40f9  ldr x2, [x8, #0xd8]
0x04C04888: 0b591994  bl #0x525acb4
0x04C0488C: 220340f9  ldr x2, [x25]
0x04C04890: e00313aa  mov x0, x19
0x04C04894: e10314aa  mov x1, x20
0x04C04898: 740dc297  bl #0x3c87e68
0x04C0489C: 410340f9  ldr x1, [x26]
0x04C048A0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C048A4: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C048A8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C048AC: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C048B0: fe0745f8  ldr x30, [sp], #0x50
0x04C048B4: 626ec117  b #0x3c6023c
0x04C048B8: fdf09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C0688C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$FilterToolLevelsByChainProgress
; native signature: System_Collections_Generic_List_WeightedToolLevel__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___FilterToolLevelsByChainProgress (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedToolLevel__o* originalToolLevels, int32_t currentLevelSum, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, const MethodInfo_4C0688C* method);
; bytes=468 sha256=c469ec29cbe0938dcfa68298dd44f61beff0679d38997df82d15a87966708e2b status=arm64_complete_bound indexed_start=True
0x04C0688C: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C06890: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C06894: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C06898: f65703a9  stp x22, x21, [sp, #0x30]
0x04C0689C: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C068A0: b7880190  adrp x23, #0x7d1a000
0x04C068A4: e82e7a39  ldrb w8, [x23, #0xe8b]
0x04C068A8: f40304aa  mov x20, x4
0x04C068AC: f60303aa  mov x22, x3
0x04C068B0: f503022a  mov w21, w2
0x04C068B4: f30301aa  mov x19, x1
0x04C068B8: f80300aa  mov x24, x0
0x04C068BC: a8020037  tbnz w8, #0, #0x4c06910
0x04C068C0: a05301d0  adrp x0, #0x767c000
0x04C068C4: 002c41f9  ldr x0, [x0, #0x258]
0x04C068C8: 54e89597  bl #0x3180a18
0x04C068CC: c05301d0  adrp x0, #0x7680000
0x04C068D0: 004040f9  ldr x0, [x0, #0x80]
0x04C068D4: 51e89597  bl #0x3180a18
0x04C068D8: c05301d0  adrp x0, #0x7680000
0x04C068DC: 004440f9  ldr x0, [x0, #0x88]
0x04C068E0: 4ee89597  bl #0x3180a18
0x04C068E4: c05301d0  adrp x0, #0x7680000
0x04C068E8: 004840f9  ldr x0, [x0, #0x90]
0x04C068EC: 4be89597  bl #0x3180a18
0x04C068F0: a05301d0  adrp x0, #0x767c000
0x04C068F4: 002441f9  ldr x0, [x0, #0x248]
0x04C068F8: 48e89597  bl #0x3180a18
0x04C068FC: c0530190  adrp x0, #0x767e000
0x04C06900: 008442f9  ldr x0, [x0, #0x508]
0x04C06904: 45e89597  bl #0x3180a18
0x04C06908: 28008052  movz w8, #0x1
0x04C0690C: e82e3a39  strb w8, [x23, #0xe8b]
0x04C06910: 881240f9  ldr x8, [x20, #0x20]
0x04C06914: 086140f9  ldr x8, [x8, #0xc0]
0x04C06918: 006540f9  ldr x0, [x8, #0xc8]
0x04C0691C: 08d44439  ldrb w8, [x0, #0x135]
0x04C06920: 48000037  tbnz w8, #0, #0x4c06928
0x04C06924: be3f9597  bl #0x315681c
0x04C06928: dee89597  bl #0x3180ca0
0x04C0692C: 881240f9  ldr x8, [x20, #0x20]
0x04C06930: f70300aa  mov x23, x0
0x04C06934: 086140f9  ldr x8, [x8, #0xc0]
0x04C06938: 016940f9  ldr x1, [x8, #0xd0]
0x04C0693C: 280040f9  ldr x8, [x1]
0x04C06940: 00013fd6  blr x8
0x04C06944: d70800b4  cbz x23, #0x4c06a5c
0x04C06948: e00317aa  mov x0, x23
0x04C0694C: 180c01f8  str x24, [x0, #0x10]!
0x04C06950: e10318aa  mov x1, x24
0x04C06954: 1ce89597  bl #0x31809c4
0x04C06958: 360800b4  cbz x22, #0x4c06a5c
0x04C0695C: aa5301d0  adrp x10, #0x767c000
0x04C06960: c80240f9  ldr x8, [x22]
0x04C06964: 4a2541f9  ldr x10, [x10, #0x248]
0x04C06968: 184740f9  ldr x24, [x24, #0x88]
0x04C0696C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C06970: 410140f9  ldr x1, [x10]
0x04C06974: 290100b4  cbz x9, #0x4c06998
0x04C06978: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C0697C: 4a210091  add x10, x10, #8
0x04C06980: 4b815ff8  ldur x11, [x10, #-8]
0x04C06984: 7f0101eb  cmp x11, x1
0x04C06988: 00010054  b.eq #0x4c069a8
0x04C0698C: 290500f1  subs x9, x9, #1
0x04C06990: 4a410091  add x10, x10, #0x10
0x04C06994: 61ffff54  b.ne #0x4c06980
0x04C06998: e00316aa  mov x0, x22
0x04C0699C: e2031f2a  mov w2, wzr
0x04C069A0: 5c409597  bl #0x3156b10
0x04C069A4: 04000014  b #0x4c069b4
0x04C069A8: 490180b9  ldrsw x9, [x10]
0x04C069AC: 0811098b  add x8, x8, x9, lsl #4
0x04C069B0: 00e10491  add x0, x8, #0x138
0x04C069B4: 080440a9  ldp x8, x1, [x0]
0x04C069B8: e00316aa  mov x0, x22
0x04C069BC: 00013fd6  blr x8
0x04C069C0: e00400b4  cbz x0, #0x4c06a5c
0x04C069C4: d80400b4  cbz x24, #0x4c06a5c
0x04C069C8: a85301d0  adrp x8, #0x767c000
0x04C069CC: 082d41f9  ldr x8, [x8, #0x258]
0x04C069D0: 011840b9  ldr w1, [x0, #0x18]
0x04C069D4: d65301d0  adrp x22, #0x7680000
0x04C069D8: d95301d0  adrp x25, #0x7680000
0x04C069DC: 020140f9  ldr x2, [x8]
0x04C069E0: da5301d0  adrp x26, #0x7680000
0x04C069E4: d64a40f9  ldr x22, [x22, #0x90]
0x04C069E8: 394740f9  ldr x25, [x25, #0x88]
0x04C069EC: 5a4340f9  ldr x26, [x26, #0x80]
0x04C069F0: e00318aa  mov x0, x24
0x04C069F4: 1f940894  bl #0x4e2ba70
0x04C069F8: a80ec01a  sdiv w8, w21, w0
0x04C069FC: e903154b  neg w9, w21
0x04C06A00: 0825001b  madd w8, w8, w0, w9
0x04C06A04: 0800080b  add w8, w0, w8
0x04C06A08: e81a00b9  str w8, [x23, #0x18]
0x04C06A0C: c00240f9  ldr x0, [x22]
0x04C06A10: a4e89597  bl #0x3180ca0
0x04C06A14: 881240f9  ldr x8, [x20, #0x20]
0x04C06A18: e10317aa  mov x1, x23
0x04C06A1C: e3031faa  mov x3, xzr
0x04C06A20: f40300aa  mov x20, x0
0x04C06A24: 086140f9  ldr x8, [x8, #0xc0]
0x04C06A28: 026d40f9  ldr x2, [x8, #0xd8]
0x04C06A2C: a2501994  bl #0x525acb4
0x04C06A30: 220340f9  ldr x2, [x25]
0x04C06A34: e00313aa  mov x0, x19
0x04C06A38: e10314aa  mov x1, x20
0x04C06A3C: 0b05c297  bl #0x3c87e68
0x04C06A40: 410340f9  ldr x1, [x26]
0x04C06A44: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C06A48: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C06A4C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C06A50: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C06A54: fe0745f8  ldr x30, [sp], #0x50
0x04C06A58: f965c117  b #0x3c6023c
0x04C06A5C: 94e89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C048BC | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$ApplyMetagameWeightBoosts
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___ApplyMetagameWeightBoosts (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* toolWeights, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* collectableTools, const MethodInfo_4C048BC* method);
; bytes=180 sha256=c44f633d7ee187bdff55f196f5c8f86429ca997263430011888738006893ae97 status=arm64_complete_bound indexed_start=True
0x04C048BC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04C048C0: f65701a9  stp x22, x21, [sp, #0x10]
0x04C048C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C048C8: b78801d0  adrp x23, #0x7d1a000
0x04C048CC: e8e27939  ldrb w8, [x23, #0xe78]
0x04C048D0: f40303aa  mov x20, x3
0x04C048D4: f60302aa  mov x22, x2
0x04C048D8: f30301aa  mov x19, x1
0x04C048DC: f50300aa  mov x21, x0
0x04C048E0: c8000037  tbnz w8, #0, #0x4c048f8
0x04C048E4: e0530190  adrp x0, #0x7680000
0x04C048E8: 004c40f9  ldr x0, [x0, #0x98]
0x04C048EC: 4bf09597  bl #0x3180a18
0x04C048F0: 28008052  movz w8, #0x1
0x04C048F4: e8e23939  strb w8, [x23, #0xe78]
0x04C048F8: a03640f9  ldr x0, [x21, #0x68]
0x04C048FC: 800300b4  cbz x0, #0x4c0496c
0x04C04900: b74a40f9  ldr x23, [x21, #0x90]
0x04C04904: e1031faa  mov x1, xzr
0x04C04908: 77285d94  bl #0x634eae4
0x04C0490C: 170300b4  cbz x23, #0x4c0496c
0x04C04910: e10300aa  mov x1, x0
0x04C04914: e00317aa  mov x0, x23
0x04C04918: e20316aa  mov x2, x22
0x04C0491C: e3031faa  mov x3, xzr
0x04C04920: 544d6e94  bl #0x6797e70
0x04C04924: c00100b4  cbz x0, #0x4c0495c
0x04C04928: 082040b9  ldr w8, [x0, #0x20]
0x04C0492C: e20300aa  mov x2, x0
0x04C04930: 1f050071  cmp w8, #1
0x04C04934: 4b010054  b.lt #0x4c0495c
0x04C04938: 881240f9  ldr x8, [x20, #0x20]
0x04C0493C: e00315aa  mov x0, x21
0x04C04940: e10313aa  mov x1, x19
0x04C04944: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C04948: 086140f9  ldr x8, [x8, #0xc0]
0x04C0494C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C04950: 037140f9  ldr x3, [x8, #0xe0]
0x04C04954: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C04958: 2e020014  b #0x4c05210
0x04C0495C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C04960: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C04964: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C04968: c0035fd6  ret
0x04C0496C: d0f09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06A60 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$ApplyMetagameWeightBoosts
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___ApplyMetagameWeightBoosts (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* toolWeights, System_Collections_Generic_Dictionary_PlayerResourceEnum__int__o* collectableTools, const MethodInfo_4C06A60* method);
; bytes=184 sha256=781a6263057adfcfd1d52f6fb82304cfbb74f76999baae9a48f9150ef45d69fc status=arm64_complete_bound indexed_start=True
0x04C06A60: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04C06A64: f65701a9  stp x22, x21, [sp, #0x10]
0x04C06A68: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C06A6C: b7880190  adrp x23, #0x7d1a000
0x04C06A70: e8327a39  ldrb w8, [x23, #0xe8c]
0x04C06A74: f40303aa  mov x20, x3
0x04C06A78: f60302aa  mov x22, x2
0x04C06A7C: f30301aa  mov x19, x1
0x04C06A80: f50300aa  mov x21, x0
0x04C06A84: c8000037  tbnz w8, #0, #0x4c06a9c
0x04C06A88: c05301d0  adrp x0, #0x7680000
0x04C06A8C: 004c40f9  ldr x0, [x0, #0x98]
0x04C06A90: e2e79597  bl #0x3180a18
0x04C06A94: 28008052  movz w8, #0x1
0x04C06A98: e8323a39  strb w8, [x23, #0xe8c]
0x04C06A9C: a03640f9  ldr x0, [x21, #0x68]
0x04C06AA0: a00300b4  cbz x0, #0x4c06b14
0x04C06AA4: b74a40f9  ldr x23, [x21, #0x90]
0x04C06AA8: e1031faa  mov x1, xzr
0x04C06AAC: 0e205d94  bl #0x634eae4
0x04C06AB0: 370300b4  cbz x23, #0x4c06b14
0x04C06AB4: e10300aa  mov x1, x0
0x04C06AB8: e00317aa  mov x0, x23
0x04C06ABC: e20316aa  mov x2, x22
0x04C06AC0: e3031faa  mov x3, xzr
0x04C06AC4: eb446e94  bl #0x6797e70
0x04C06AC8: e00100b4  cbz x0, #0x4c06b04
0x04C06ACC: 082040b9  ldr w8, [x0, #0x20]
0x04C06AD0: e20300aa  mov x2, x0
0x04C06AD4: 1f050071  cmp w8, #1
0x04C06AD8: 6b010054  b.lt #0x4c06b04
0x04C06ADC: 881240f9  ldr x8, [x20, #0x20]
0x04C06AE0: e00315aa  mov x0, x21
0x04C06AE4: e10313aa  mov x1, x19
0x04C06AE8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C06AEC: 086140f9  ldr x8, [x8, #0xc0]
0x04C06AF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C06AF4: 037140f9  ldr x3, [x8, #0xe0]
0x04C06AF8: 640040f9  ldr x4, [x3]
0x04C06AFC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C06B00: 80001fd6  br x4
0x04C06B04: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C06B08: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C06B0C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C06B10: c0035fd6  ret
0x04C06B14: 66e89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C04970 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$ApplyToolFiltering
; native signature: System_Collections_Generic_List_WeightedTool__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___ApplyToolFiltering (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* tools, System_Func_WeightedTool__bool__o* filterPredicate, const MethodInfo_4C04970* method);
; bytes=152 sha256=56a48a1ede643038a0381da3b02f39f1e32e76c4d0d81c47474ae49cd086733e status=arm64_complete_bound indexed_start=True
0x04C04970: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04C04974: f65701a9  stp x22, x21, [sp, #0x10]
0x04C04978: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C0497C: b68801d0  adrp x22, #0x7d1a000
0x04C04980: f7530190  adrp x23, #0x7680000
0x04C04984: f5530190  adrp x21, #0x7680000
0x04C04988: c8e67939  ldrb w8, [x22, #0xe79]
0x04C0498C: f75240f9  ldr x23, [x23, #0xa0]
0x04C04990: b55640f9  ldr x21, [x21, #0xa8]
0x04C04994: f40302aa  mov x20, x2
0x04C04998: f30301aa  mov x19, x1
0x04C0499C: 88010037  tbnz w8, #0, #0x4c049cc
0x04C049A0: e0530190  adrp x0, #0x7680000
0x04C049A4: 005440f9  ldr x0, [x0, #0xa8]
0x04C049A8: 1cf09597  bl #0x3180a18
0x04C049AC: e0530190  adrp x0, #0x7680000
0x04C049B0: 005040f9  ldr x0, [x0, #0xa0]
0x04C049B4: 19f09597  bl #0x3180a18
0x04C049B8: e0530190  adrp x0, #0x7680000
0x04C049BC: 005840f9  ldr x0, [x0, #0xb0]
0x04C049C0: 16f09597  bl #0x3180a18
0x04C049C4: 28008052  movz w8, #0x1
0x04C049C8: c8e63939  strb w8, [x22, #0xe79]
0x04C049CC: e20240f9  ldr x2, [x23]
0x04C049D0: e00313aa  mov x0, x19
0x04C049D4: e10314aa  mov x1, x20
0x04C049D8: 6f0cc297  bl #0x3c87b94
0x04C049DC: a10240f9  ldr x1, [x21]
0x04C049E0: f86dc197  bl #0x3c601c0
0x04C049E4: 000100b4  cbz x0, #0x4c04a04
0x04C049E8: 081840b9  ldr w8, [x0, #0x18]
0x04C049EC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C049F0: 1f010071  cmp w8, #0
0x04C049F4: 6002809a  csel x0, x19, x0, eq
0x04C049F8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C049FC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C04A00: c0035fd6  ret
0x04C04A04: aaf09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06B18 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$ApplyToolFiltering
; native signature: System_Collections_Generic_List_WeightedTool__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___ApplyToolFiltering (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* tools, System_Func_WeightedTool__bool__o* filterPredicate, const MethodInfo_4C06B18* method);
; bytes=152 sha256=799c10d23a5ebfb019b356affe142f425d6411b4563aebf9981974db169efb9a status=arm64_complete_bound indexed_start=True
0x04C06B18: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x04C06B1C: f65701a9  stp x22, x21, [sp, #0x10]
0x04C06B20: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C06B24: b6880190  adrp x22, #0x7d1a000
0x04C06B28: d75301d0  adrp x23, #0x7680000
0x04C06B2C: d55301d0  adrp x21, #0x7680000
0x04C06B30: c8367a39  ldrb w8, [x22, #0xe8d]
0x04C06B34: f75240f9  ldr x23, [x23, #0xa0]
0x04C06B38: b55640f9  ldr x21, [x21, #0xa8]
0x04C06B3C: f40302aa  mov x20, x2
0x04C06B40: f30301aa  mov x19, x1
0x04C06B44: 88010037  tbnz w8, #0, #0x4c06b74
0x04C06B48: c05301d0  adrp x0, #0x7680000
0x04C06B4C: 005440f9  ldr x0, [x0, #0xa8]
0x04C06B50: b2e79597  bl #0x3180a18
0x04C06B54: c05301d0  adrp x0, #0x7680000
0x04C06B58: 005040f9  ldr x0, [x0, #0xa0]
0x04C06B5C: afe79597  bl #0x3180a18
0x04C06B60: c05301d0  adrp x0, #0x7680000
0x04C06B64: 005840f9  ldr x0, [x0, #0xb0]
0x04C06B68: ace79597  bl #0x3180a18
0x04C06B6C: 28008052  movz w8, #0x1
0x04C06B70: c8363a39  strb w8, [x22, #0xe8d]
0x04C06B74: e20240f9  ldr x2, [x23]
0x04C06B78: e00313aa  mov x0, x19
0x04C06B7C: e10314aa  mov x1, x20
0x04C06B80: 0504c297  bl #0x3c87b94
0x04C06B84: a10240f9  ldr x1, [x21]
0x04C06B88: 8e65c197  bl #0x3c601c0
0x04C06B8C: 000100b4  cbz x0, #0x4c06bac
0x04C06B90: 081840b9  ldr w8, [x0, #0x18]
0x04C06B94: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C06B98: 1f010071  cmp w8, #0
0x04C06B9C: 6002809a  csel x0, x19, x0, eq
0x04C06BA0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C06BA4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x04C06BA8: c0035fd6  ret
0x04C06BAC: 40e89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C04A08 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$CreateChainBasedFilter
; native signature: System_Func_WeightedTool__bool__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___CreateChainBasedFilter (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_PlayerResourceEnum__o* unfinishedChains, const MethodInfo_4C04A08* method);
; bytes=188 sha256=f820e3c3255696d3291d6a944a4cf8dbb91120e8080e6ba2e79afa5e5cbdb43d status=arm64_complete_bound indexed_start=True
0x04C04A08: fe0f1df8  str x30, [sp, #-0x30]!
0x04C04A0C: f65701a9  stp x22, x21, [sp, #0x10]
0x04C04A10: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C04A14: b58801d0  adrp x21, #0x7d1a000
0x04C04A18: a8ea7939  ldrb w8, [x21, #0xe7a]
0x04C04A1C: f30302aa  mov x19, x2
0x04C04A20: f40301aa  mov x20, x1
0x04C04A24: c8000037  tbnz w8, #0, #0x4c04a3c
0x04C04A28: e0530190  adrp x0, #0x7680000
0x04C04A2C: 005c40f9  ldr x0, [x0, #0xb8]
0x04C04A30: faef9597  bl #0x3180a18
0x04C04A34: 28008052  movz w8, #0x1
0x04C04A38: a8ea3939  strb w8, [x21, #0xe7a]
0x04C04A3C: 681240f9  ldr x8, [x19, #0x20]
0x04C04A40: 086140f9  ldr x8, [x8, #0xc0]
0x04C04A44: 007540f9  ldr x0, [x8, #0xe8]
0x04C04A48: 08d44439  ldrb w8, [x0, #0x135]
0x04C04A4C: 48000037  tbnz w8, #0, #0x4c04a54
0x04C04A50: 73479597  bl #0x315681c
0x04C04A54: 93f09597  bl #0x3180ca0
0x04C04A58: 681240f9  ldr x8, [x19, #0x20]
0x04C04A5C: f50300aa  mov x21, x0
0x04C04A60: 086140f9  ldr x8, [x8, #0xc0]
0x04C04A64: 017940f9  ldr x1, [x8, #0xf0]
0x04C04A68: c03fcd97  bl #0x3f54968
0x04C04A6C: b50200b4  cbz x21, #0x4c04ac0
0x04C04A70: f6530190  adrp x22, #0x7680000
0x04C04A74: d65e40f9  ldr x22, [x22, #0xb8]
0x04C04A78: e00315aa  mov x0, x21
0x04C04A7C: 140c01f8  str x20, [x0, #0x10]!
0x04C04A80: e10314aa  mov x1, x20
0x04C04A84: d0ef9597  bl #0x31809c4
0x04C04A88: c00240f9  ldr x0, [x22]
0x04C04A8C: 85f09597  bl #0x3180ca0
0x04C04A90: 681240f9  ldr x8, [x19, #0x20]
0x04C04A94: e10315aa  mov x1, x21
0x04C04A98: e3031faa  mov x3, xzr
0x04C04A9C: f30300aa  mov x19, x0
0x04C04AA0: 086140f9  ldr x8, [x8, #0xc0]
0x04C04AA4: 027d40f9  ldr x2, [x8, #0xf8]
0x04C04AA8: fc571994  bl #0x525aa98
0x04C04AAC: e00313aa  mov x0, x19
0x04C04AB0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C04AB4: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C04AB8: fe0743f8  ldr x30, [sp], #0x30
0x04C04ABC: c0035fd6  ret
0x04C04AC0: 7bf09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06BB0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$CreateChainBasedFilter
; native signature: System_Func_WeightedTool__bool__o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___CreateChainBasedFilter (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_PlayerResourceEnum__o* unfinishedChains, const MethodInfo_4C06BB0* method);
; bytes=192 sha256=51eb76f9909ad3878d4d7eebe954785dc5c3227e48ebd70b86f4cdc561792dbf status=arm64_complete_bound indexed_start=True
0x04C06BB0: fe0f1df8  str x30, [sp, #-0x30]!
0x04C06BB4: f65701a9  stp x22, x21, [sp, #0x10]
0x04C06BB8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C06BBC: b5880190  adrp x21, #0x7d1a000
0x04C06BC0: a83a7a39  ldrb w8, [x21, #0xe8e]
0x04C06BC4: f30302aa  mov x19, x2
0x04C06BC8: f40301aa  mov x20, x1
0x04C06BCC: c8000037  tbnz w8, #0, #0x4c06be4
0x04C06BD0: c05301d0  adrp x0, #0x7680000
0x04C06BD4: 005c40f9  ldr x0, [x0, #0xb8]
0x04C06BD8: 90e79597  bl #0x3180a18
0x04C06BDC: 28008052  movz w8, #0x1
0x04C06BE0: a83a3a39  strb w8, [x21, #0xe8e]
0x04C06BE4: 681240f9  ldr x8, [x19, #0x20]
0x04C06BE8: 086140f9  ldr x8, [x8, #0xc0]
0x04C06BEC: 007540f9  ldr x0, [x8, #0xe8]
0x04C06BF0: 08d44439  ldrb w8, [x0, #0x135]
0x04C06BF4: 48000037  tbnz w8, #0, #0x4c06bfc
0x04C06BF8: 093f9597  bl #0x315681c
0x04C06BFC: 29e89597  bl #0x3180ca0
0x04C06C00: 681240f9  ldr x8, [x19, #0x20]
0x04C06C04: f50300aa  mov x21, x0
0x04C06C08: 086140f9  ldr x8, [x8, #0xc0]
0x04C06C0C: 017940f9  ldr x1, [x8, #0xf0]
0x04C06C10: 280040f9  ldr x8, [x1]
0x04C06C14: 00013fd6  blr x8
0x04C06C18: b50200b4  cbz x21, #0x4c06c6c
0x04C06C1C: d65301d0  adrp x22, #0x7680000
0x04C06C20: d65e40f9  ldr x22, [x22, #0xb8]
0x04C06C24: e00315aa  mov x0, x21
0x04C06C28: 140c01f8  str x20, [x0, #0x10]!
0x04C06C2C: e10314aa  mov x1, x20
0x04C06C30: 65e79597  bl #0x31809c4
0x04C06C34: c00240f9  ldr x0, [x22]
0x04C06C38: 1ae89597  bl #0x3180ca0
0x04C06C3C: 681240f9  ldr x8, [x19, #0x20]
0x04C06C40: e10315aa  mov x1, x21
0x04C06C44: e3031faa  mov x3, xzr
0x04C06C48: f30300aa  mov x19, x0
0x04C06C4C: 086140f9  ldr x8, [x8, #0xc0]
0x04C06C50: 027d40f9  ldr x2, [x8, #0xf8]
0x04C06C54: 914f1994  bl #0x525aa98
0x04C06C58: e00313aa  mov x0, x19
0x04C06C5C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C06C60: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C06C64: fe0743f8  ldr x30, [sp], #0x30
0x04C06C68: c0035fd6  ret
0x04C06C6C: 10e89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C04AC4 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$SelectRandomWeightedTool
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___SelectRandomWeightedTool (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* filteredToolWeights, const MethodInfo_4C04AC4* method);
; bytes=804 sha256=34c81bd336439e7cc0f4a5750912b8182ca6b1c1ffae5a8125a51f341ea45a98 status=arm64_complete_bound indexed_start=True
0x04C04AC4: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x04C04AC8: f85f01a9  stp x24, x23, [sp, #0x10]
0x04C04ACC: f65702a9  stp x22, x21, [sp, #0x20]
0x04C04AD0: f44f03a9  stp x20, x19, [sp, #0x30]
0x04C04AD4: b68801d0  adrp x22, #0x7d1a000
0x04C04AD8: c8ee7939  ldrb w8, [x22, #0xe7b]
0x04C04ADC: f50302aa  mov x21, x2
0x04C04AE0: f40301aa  mov x20, x1
0x04C04AE4: f30300aa  mov x19, x0
0x04C04AE8: 48020037  tbnz w8, #0, #0x4c04b30
0x04C04AEC: e0530190  adrp x0, #0x7680000
0x04C04AF0: 006040f9  ldr x0, [x0, #0xc0]
0x04C04AF4: c9ef9597  bl #0x3180a18
0x04C04AF8: e0530190  adrp x0, #0x7680000
0x04C04AFC: 006440f9  ldr x0, [x0, #0xc8]
0x04C04B00: c6ef9597  bl #0x3180a18
0x04C04B04: e0530190  adrp x0, #0x7680000
0x04C04B08: 006840f9  ldr x0, [x0, #0xd0]
0x04C04B0C: c3ef9597  bl #0x3180a18
0x04C04B10: e0530190  adrp x0, #0x7680000
0x04C04B14: 006c40f9  ldr x0, [x0, #0xd8]
0x04C04B18: c0ef9597  bl #0x3180a18
0x04C04B1C: e0530190  adrp x0, #0x7680000
0x04C04B20: 007040f9  ldr x0, [x0, #0xe0]
0x04C04B24: bdef9597  bl #0x3180a18
0x04C04B28: 28008052  movz w8, #0x1
0x04C04B2C: c8ee3939  strb w8, [x22, #0xe7b]
0x04C04B30: a81240f9  ldr x8, [x21, #0x20]
0x04C04B34: 086140f9  ldr x8, [x8, #0xc0]
0x04C04B38: 001140f9  ldr x0, [x8, #0x20]
0x04C04B3C: 08d44439  ldrb w8, [x0, #0x135]
0x04C04B40: 48000037  tbnz w8, #0, #0x4c04b48
0x04C04B44: 36479597  bl #0x315681c
0x04C04B48: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04B4C: 48000035  cbnz w8, #0x4c04b54
0x04C04B50: 0ff09597  bl #0x3180b8c
0x04C04B54: a81240f9  ldr x8, [x21, #0x20]
0x04C04B58: 086140f9  ldr x8, [x8, #0xc0]
0x04C04B5C: 001140f9  ldr x0, [x8, #0x20]
0x04C04B60: 08d44439  ldrb w8, [x0, #0x135]
0x04C04B64: 48000037  tbnz w8, #0, #0x4c04b6c
0x04C04B68: 2d479597  bl #0x315681c
0x04C04B6C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04B70: 160d40f9  ldr x22, [x8, #0x18]
0x04C04B74: f60500b5  cbnz x22, #0x4c04c30
0x04C04B78: a81240f9  ldr x8, [x21, #0x20]
0x04C04B7C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04B80: 001140f9  ldr x0, [x8, #0x20]
0x04C04B84: 08d44439  ldrb w8, [x0, #0x135]
0x04C04B88: 48000037  tbnz w8, #0, #0x4c04b90
0x04C04B8C: 24479597  bl #0x315681c
0x04C04B90: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04B94: 48000035  cbnz w8, #0x4c04b9c
0x04C04B98: fdef9597  bl #0x3180b8c
0x04C04B9C: a81240f9  ldr x8, [x21, #0x20]
0x04C04BA0: 086140f9  ldr x8, [x8, #0xc0]
0x04C04BA4: 001140f9  ldr x0, [x8, #0x20]
0x04C04BA8: 08d44439  ldrb w8, [x0, #0x135]
0x04C04BAC: 48000037  tbnz w8, #0, #0x4c04bb4
0x04C04BB0: 1b479597  bl #0x315681c
0x04C04BB4: e9530190  adrp x9, #0x7680000
0x04C04BB8: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04BBC: 296140f9  ldr x9, [x9, #0xc0]
0x04C04BC0: 170140f9  ldr x23, [x8]
0x04C04BC4: 200140f9  ldr x0, [x9]
0x04C04BC8: 36f09597  bl #0x3180ca0
0x04C04BCC: a81240f9  ldr x8, [x21, #0x20]
0x04C04BD0: e10317aa  mov x1, x23
0x04C04BD4: e3031faa  mov x3, xzr
0x04C04BD8: f60300aa  mov x22, x0
0x04C04BDC: 086140f9  ldr x8, [x8, #0xc0]
0x04C04BE0: 028140f9  ldr x2, [x8, #0x100]
0x04C04BE4: da571994  bl #0x525ab4c
0x04C04BE8: a81240f9  ldr x8, [x21, #0x20]
0x04C04BEC: 086140f9  ldr x8, [x8, #0xc0]
0x04C04BF0: 001140f9  ldr x0, [x8, #0x20]
0x04C04BF4: 09d44439  ldrb w9, [x0, #0x135]
0x04C04BF8: 89000037  tbnz w9, #0, #0x4c04c08
0x04C04BFC: 08479597  bl #0x315681c
0x04C04C00: a81240f9  ldr x8, [x21, #0x20]
0x04C04C04: 086140f9  ldr x8, [x8, #0xc0]
0x04C04C08: 095c40f9  ldr x9, [x0, #0xb8]
0x04C04C0C: 360d00f9  str x22, [x9, #0x18]
0x04C04C10: 001140f9  ldr x0, [x8, #0x20]
0x04C04C14: 08d44439  ldrb w8, [x0, #0x135]
0x04C04C18: 48000037  tbnz w8, #0, #0x4c04c20
0x04C04C1C: 00479597  bl #0x315681c
0x04C04C20: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04C24: e10316aa  mov x1, x22
0x04C04C28: 00610091  add x0, x8, #0x18
0x04C04C2C: 66ef9597  bl #0x31809c4
0x04C04C30: a81240f9  ldr x8, [x21, #0x20]
0x04C04C34: 086140f9  ldr x8, [x8, #0xc0]
0x04C04C38: 001140f9  ldr x0, [x8, #0x20]
0x04C04C3C: 08d44439  ldrb w8, [x0, #0x135]
0x04C04C40: 48000037  tbnz w8, #0, #0x4c04c48
0x04C04C44: f6469597  bl #0x315681c
0x04C04C48: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04C4C: 48000035  cbnz w8, #0x4c04c54
0x04C04C50: cfef9597  bl #0x3180b8c
0x04C04C54: a81240f9  ldr x8, [x21, #0x20]
0x04C04C58: 086140f9  ldr x8, [x8, #0xc0]
0x04C04C5C: 001140f9  ldr x0, [x8, #0x20]
0x04C04C60: 08d44439  ldrb w8, [x0, #0x135]
0x04C04C64: 48000037  tbnz w8, #0, #0x4c04c6c
0x04C04C68: ed469597  bl #0x315681c
0x04C04C6C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04C70: f9530190  adrp x25, #0x7680000
0x04C04C74: 171140f9  ldr x23, [x8, #0x20]
0x04C04C78: 397340f9  ldr x25, [x25, #0xe0]
0x04C04C7C: f70500b5  cbnz x23, #0x4c04d38
0x04C04C80: a81240f9  ldr x8, [x21, #0x20]
0x04C04C84: 086140f9  ldr x8, [x8, #0xc0]
0x04C04C88: 001140f9  ldr x0, [x8, #0x20]
0x04C04C8C: 08d44439  ldrb w8, [x0, #0x135]
0x04C04C90: 48000037  tbnz w8, #0, #0x4c04c98
0x04C04C94: e2469597  bl #0x315681c
0x04C04C98: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04C9C: 48000035  cbnz w8, #0x4c04ca4
0x04C04CA0: bbef9597  bl #0x3180b8c
0x04C04CA4: a81240f9  ldr x8, [x21, #0x20]
0x04C04CA8: 086140f9  ldr x8, [x8, #0xc0]
0x04C04CAC: 001140f9  ldr x0, [x8, #0x20]
0x04C04CB0: 08d44439  ldrb w8, [x0, #0x135]
0x04C04CB4: 48000037  tbnz w8, #0, #0x4c04cbc
0x04C04CB8: d9469597  bl #0x315681c
0x04C04CBC: e9530190  adrp x9, #0x7680000
0x04C04CC0: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04CC4: 296540f9  ldr x9, [x9, #0xc8]
0x04C04CC8: 180140f9  ldr x24, [x8]
0x04C04CCC: 200140f9  ldr x0, [x9]
0x04C04CD0: f4ef9597  bl #0x3180ca0
0x04C04CD4: a81240f9  ldr x8, [x21, #0x20]
0x04C04CD8: e10318aa  mov x1, x24
0x04C04CDC: e3031faa  mov x3, xzr
0x04C04CE0: f70300aa  mov x23, x0
0x04C04CE4: 086140f9  ldr x8, [x8, #0xc0]
0x04C04CE8: 028540f9  ldr x2, [x8, #0x108]
0x04C04CEC: c5571994  bl #0x525ac00
0x04C04CF0: a81240f9  ldr x8, [x21, #0x20]
0x04C04CF4: 086140f9  ldr x8, [x8, #0xc0]
0x04C04CF8: 001140f9  ldr x0, [x8, #0x20]
0x04C04CFC: 09d44439  ldrb w9, [x0, #0x135]
0x04C04D00: 89000037  tbnz w9, #0, #0x4c04d10
0x04C04D04: c6469597  bl #0x315681c
0x04C04D08: a81240f9  ldr x8, [x21, #0x20]
0x04C04D0C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04D10: 095c40f9  ldr x9, [x0, #0xb8]
0x04C04D14: 371100f9  str x23, [x9, #0x20]
0x04C04D18: 001140f9  ldr x0, [x8, #0x20]
0x04C04D1C: 08d44439  ldrb w8, [x0, #0x135]
0x04C04D20: 48000037  tbnz w8, #0, #0x4c04d28
0x04C04D24: be469597  bl #0x315681c
0x04C04D28: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04D2C: e10317aa  mov x1, x23
0x04C04D30: 00810091  add x0, x8, #0x20
0x04C04D34: 24ef9597  bl #0x31809c4
0x04C04D38: 230340f9  ldr x3, [x25]
0x04C04D3C: e00314aa  mov x0, x20
0x04C04D40: e10316aa  mov x1, x22
0x04C04D44: e20317aa  mov x2, x23
0x04C04D48: 50c8c897  bl #0x3e36e88
0x04C04D4C: 743240f9  ldr x20, [x19, #0x60]
0x04C04D50: b40400b4  cbz x20, #0x4c04de4
0x04C04D54: ea530190  adrp x10, #0x7680000
0x04C04D58: 880240f9  ldr x8, [x20]
0x04C04D5C: 4a6940f9  ldr x10, [x10, #0xd0]
0x04C04D60: f30300aa  mov x19, x0
0x04C04D64: 095d4279  ldrh w9, [x8, #0x12e]
0x04C04D68: 410140f9  ldr x1, [x10]
0x04C04D6C: 290100b4  cbz x9, #0x4c04d90
0x04C04D70: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C04D74: 4a210091  add x10, x10, #8
0x04C04D78: 4b815ff8  ldur x11, [x10, #-8]
0x04C04D7C: 7f0101eb  cmp x11, x1
0x04C04D80: 00010054  b.eq #0x4c04da0
0x04C04D84: 290500f1  subs x9, x9, #1
0x04C04D88: 4a410091  add x10, x10, #0x10
0x04C04D8C: 61ffff54  b.ne #0x4c04d78
0x04C04D90: e00314aa  mov x0, x20
0x04C04D94: e2031f2a  mov w2, wzr
0x04C04D98: 5e479597  bl #0x3156b10
0x04C04D9C: 04000014  b #0x4c04dac
0x04C04DA0: 490180b9  ldrsw x9, [x10]
0x04C04DA4: 0811098b  add x8, x8, x9, lsl #4
0x04C04DA8: 00e10491  add x0, x8, #0x138
0x04C04DAC: 080440a9  ldp x8, x1, [x0]
0x04C04DB0: e00314aa  mov x0, x20
0x04C04DB4: 00013fd6  blr x8
0x04C04DB8: 730100b4  cbz x19, #0x4c04de4
0x04C04DBC: e8530190  adrp x8, #0x7680000
0x04C04DC0: 086d40f9  ldr x8, [x8, #0xd8]
0x04C04DC4: e10300aa  mov x1, x0
0x04C04DC8: e00313aa  mov x0, x19
0x04C04DCC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04C04DD0: 020140f9  ldr x2, [x8]
0x04C04DD4: f65742a9  ldp x22, x21, [sp, #0x20]
0x04C04DD8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04C04DDC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x04C04DE0: 16fff417  b #0x4944a38
0x04C04DE4: b2ef9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06C70 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$SelectRandomWeightedTool
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___SelectRandomWeightedTool (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* filteredToolWeights, const MethodInfo_4C06C70* method);
; bytes=804 sha256=21f4fcf0b7255d09780a5f03df6468bf2e1bad62e8cf916d68afe42f39dfdf9a status=arm64_complete_bound indexed_start=True
0x04C06C70: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x04C06C74: f85f01a9  stp x24, x23, [sp, #0x10]
0x04C06C78: f65702a9  stp x22, x21, [sp, #0x20]
0x04C06C7C: f44f03a9  stp x20, x19, [sp, #0x30]
0x04C06C80: b6880190  adrp x22, #0x7d1a000
0x04C06C84: c83e7a39  ldrb w8, [x22, #0xe8f]
0x04C06C88: f50302aa  mov x21, x2
0x04C06C8C: f40301aa  mov x20, x1
0x04C06C90: f30300aa  mov x19, x0
0x04C06C94: 48020037  tbnz w8, #0, #0x4c06cdc
0x04C06C98: c05301d0  adrp x0, #0x7680000
0x04C06C9C: 006040f9  ldr x0, [x0, #0xc0]
0x04C06CA0: 5ee79597  bl #0x3180a18
0x04C06CA4: c05301d0  adrp x0, #0x7680000
0x04C06CA8: 006440f9  ldr x0, [x0, #0xc8]
0x04C06CAC: 5be79597  bl #0x3180a18
0x04C06CB0: c05301d0  adrp x0, #0x7680000
0x04C06CB4: 006840f9  ldr x0, [x0, #0xd0]
0x04C06CB8: 58e79597  bl #0x3180a18
0x04C06CBC: c05301d0  adrp x0, #0x7680000
0x04C06CC0: 006c40f9  ldr x0, [x0, #0xd8]
0x04C06CC4: 55e79597  bl #0x3180a18
0x04C06CC8: c05301d0  adrp x0, #0x7680000
0x04C06CCC: 007040f9  ldr x0, [x0, #0xe0]
0x04C06CD0: 52e79597  bl #0x3180a18
0x04C06CD4: 28008052  movz w8, #0x1
0x04C06CD8: c83e3a39  strb w8, [x22, #0xe8f]
0x04C06CDC: a81240f9  ldr x8, [x21, #0x20]
0x04C06CE0: 086140f9  ldr x8, [x8, #0xc0]
0x04C06CE4: 001140f9  ldr x0, [x8, #0x20]
0x04C06CE8: 08d44439  ldrb w8, [x0, #0x135]
0x04C06CEC: 48000037  tbnz w8, #0, #0x4c06cf4
0x04C06CF0: cb3e9597  bl #0x315681c
0x04C06CF4: 08e040b9  ldr w8, [x0, #0xe0]
0x04C06CF8: 48000035  cbnz w8, #0x4c06d00
0x04C06CFC: a4e79597  bl #0x3180b8c
0x04C06D00: a81240f9  ldr x8, [x21, #0x20]
0x04C06D04: 086140f9  ldr x8, [x8, #0xc0]
0x04C06D08: 001140f9  ldr x0, [x8, #0x20]
0x04C06D0C: 08d44439  ldrb w8, [x0, #0x135]
0x04C06D10: 48000037  tbnz w8, #0, #0x4c06d18
0x04C06D14: c23e9597  bl #0x315681c
0x04C06D18: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06D1C: 160d40f9  ldr x22, [x8, #0x18]
0x04C06D20: f60500b5  cbnz x22, #0x4c06ddc
0x04C06D24: a81240f9  ldr x8, [x21, #0x20]
0x04C06D28: 086140f9  ldr x8, [x8, #0xc0]
0x04C06D2C: 001140f9  ldr x0, [x8, #0x20]
0x04C06D30: 08d44439  ldrb w8, [x0, #0x135]
0x04C06D34: 48000037  tbnz w8, #0, #0x4c06d3c
0x04C06D38: b93e9597  bl #0x315681c
0x04C06D3C: 08e040b9  ldr w8, [x0, #0xe0]
0x04C06D40: 48000035  cbnz w8, #0x4c06d48
0x04C06D44: 92e79597  bl #0x3180b8c
0x04C06D48: a81240f9  ldr x8, [x21, #0x20]
0x04C06D4C: 086140f9  ldr x8, [x8, #0xc0]
0x04C06D50: 001140f9  ldr x0, [x8, #0x20]
0x04C06D54: 08d44439  ldrb w8, [x0, #0x135]
0x04C06D58: 48000037  tbnz w8, #0, #0x4c06d60
0x04C06D5C: b03e9597  bl #0x315681c
0x04C06D60: c95301d0  adrp x9, #0x7680000
0x04C06D64: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06D68: 296140f9  ldr x9, [x9, #0xc0]
0x04C06D6C: 170140f9  ldr x23, [x8]
0x04C06D70: 200140f9  ldr x0, [x9]
0x04C06D74: cbe79597  bl #0x3180ca0
0x04C06D78: a81240f9  ldr x8, [x21, #0x20]
0x04C06D7C: e10317aa  mov x1, x23
0x04C06D80: e3031faa  mov x3, xzr
0x04C06D84: f60300aa  mov x22, x0
0x04C06D88: 086140f9  ldr x8, [x8, #0xc0]
0x04C06D8C: 028140f9  ldr x2, [x8, #0x100]
0x04C06D90: 6f4f1994  bl #0x525ab4c
0x04C06D94: a81240f9  ldr x8, [x21, #0x20]
0x04C06D98: 086140f9  ldr x8, [x8, #0xc0]
0x04C06D9C: 001140f9  ldr x0, [x8, #0x20]
0x04C06DA0: 09d44439  ldrb w9, [x0, #0x135]
0x04C06DA4: 89000037  tbnz w9, #0, #0x4c06db4
0x04C06DA8: 9d3e9597  bl #0x315681c
0x04C06DAC: a81240f9  ldr x8, [x21, #0x20]
0x04C06DB0: 086140f9  ldr x8, [x8, #0xc0]
0x04C06DB4: 095c40f9  ldr x9, [x0, #0xb8]
0x04C06DB8: 360d00f9  str x22, [x9, #0x18]
0x04C06DBC: 001140f9  ldr x0, [x8, #0x20]
0x04C06DC0: 08d44439  ldrb w8, [x0, #0x135]
0x04C06DC4: 48000037  tbnz w8, #0, #0x4c06dcc
0x04C06DC8: 953e9597  bl #0x315681c
0x04C06DCC: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06DD0: e10316aa  mov x1, x22
0x04C06DD4: 00610091  add x0, x8, #0x18
0x04C06DD8: fbe69597  bl #0x31809c4
0x04C06DDC: a81240f9  ldr x8, [x21, #0x20]
0x04C06DE0: 086140f9  ldr x8, [x8, #0xc0]
0x04C06DE4: 001140f9  ldr x0, [x8, #0x20]
0x04C06DE8: 08d44439  ldrb w8, [x0, #0x135]
0x04C06DEC: 48000037  tbnz w8, #0, #0x4c06df4
0x04C06DF0: 8b3e9597  bl #0x315681c
0x04C06DF4: 08e040b9  ldr w8, [x0, #0xe0]
0x04C06DF8: 48000035  cbnz w8, #0x4c06e00
0x04C06DFC: 64e79597  bl #0x3180b8c
0x04C06E00: a81240f9  ldr x8, [x21, #0x20]
0x04C06E04: 086140f9  ldr x8, [x8, #0xc0]
0x04C06E08: 001140f9  ldr x0, [x8, #0x20]
0x04C06E0C: 08d44439  ldrb w8, [x0, #0x135]
0x04C06E10: 48000037  tbnz w8, #0, #0x4c06e18
0x04C06E14: 823e9597  bl #0x315681c
0x04C06E18: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06E1C: d95301d0  adrp x25, #0x7680000
0x04C06E20: 171140f9  ldr x23, [x8, #0x20]
0x04C06E24: 397340f9  ldr x25, [x25, #0xe0]
0x04C06E28: f70500b5  cbnz x23, #0x4c06ee4
0x04C06E2C: a81240f9  ldr x8, [x21, #0x20]
0x04C06E30: 086140f9  ldr x8, [x8, #0xc0]
0x04C06E34: 001140f9  ldr x0, [x8, #0x20]
0x04C06E38: 08d44439  ldrb w8, [x0, #0x135]
0x04C06E3C: 48000037  tbnz w8, #0, #0x4c06e44
0x04C06E40: 773e9597  bl #0x315681c
0x04C06E44: 08e040b9  ldr w8, [x0, #0xe0]
0x04C06E48: 48000035  cbnz w8, #0x4c06e50
0x04C06E4C: 50e79597  bl #0x3180b8c
0x04C06E50: a81240f9  ldr x8, [x21, #0x20]
0x04C06E54: 086140f9  ldr x8, [x8, #0xc0]
0x04C06E58: 001140f9  ldr x0, [x8, #0x20]
0x04C06E5C: 08d44439  ldrb w8, [x0, #0x135]
0x04C06E60: 48000037  tbnz w8, #0, #0x4c06e68
0x04C06E64: 6e3e9597  bl #0x315681c
0x04C06E68: c95301d0  adrp x9, #0x7680000
0x04C06E6C: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06E70: 296540f9  ldr x9, [x9, #0xc8]
0x04C06E74: 180140f9  ldr x24, [x8]
0x04C06E78: 200140f9  ldr x0, [x9]
0x04C06E7C: 89e79597  bl #0x3180ca0
0x04C06E80: a81240f9  ldr x8, [x21, #0x20]
0x04C06E84: e10318aa  mov x1, x24
0x04C06E88: e3031faa  mov x3, xzr
0x04C06E8C: f70300aa  mov x23, x0
0x04C06E90: 086140f9  ldr x8, [x8, #0xc0]
0x04C06E94: 028540f9  ldr x2, [x8, #0x108]
0x04C06E98: 5a4f1994  bl #0x525ac00
0x04C06E9C: a81240f9  ldr x8, [x21, #0x20]
0x04C06EA0: 086140f9  ldr x8, [x8, #0xc0]
0x04C06EA4: 001140f9  ldr x0, [x8, #0x20]
0x04C06EA8: 09d44439  ldrb w9, [x0, #0x135]
0x04C06EAC: 89000037  tbnz w9, #0, #0x4c06ebc
0x04C06EB0: 5b3e9597  bl #0x315681c
0x04C06EB4: a81240f9  ldr x8, [x21, #0x20]
0x04C06EB8: 086140f9  ldr x8, [x8, #0xc0]
0x04C06EBC: 095c40f9  ldr x9, [x0, #0xb8]
0x04C06EC0: 371100f9  str x23, [x9, #0x20]
0x04C06EC4: 001140f9  ldr x0, [x8, #0x20]
0x04C06EC8: 08d44439  ldrb w8, [x0, #0x135]
0x04C06ECC: 48000037  tbnz w8, #0, #0x4c06ed4
0x04C06ED0: 533e9597  bl #0x315681c
0x04C06ED4: 085c40f9  ldr x8, [x0, #0xb8]
0x04C06ED8: e10317aa  mov x1, x23
0x04C06EDC: 00810091  add x0, x8, #0x20
0x04C06EE0: b9e69597  bl #0x31809c4
0x04C06EE4: 230340f9  ldr x3, [x25]
0x04C06EE8: e00314aa  mov x0, x20
0x04C06EEC: e10316aa  mov x1, x22
0x04C06EF0: e20317aa  mov x2, x23
0x04C06EF4: e5bfc897  bl #0x3e36e88
0x04C06EF8: 743240f9  ldr x20, [x19, #0x60]
0x04C06EFC: b40400b4  cbz x20, #0x4c06f90
0x04C06F00: ca5301d0  adrp x10, #0x7680000
0x04C06F04: 880240f9  ldr x8, [x20]
0x04C06F08: 4a6940f9  ldr x10, [x10, #0xd0]
0x04C06F0C: f30300aa  mov x19, x0
0x04C06F10: 095d4279  ldrh w9, [x8, #0x12e]
0x04C06F14: 410140f9  ldr x1, [x10]
0x04C06F18: 290100b4  cbz x9, #0x4c06f3c
0x04C06F1C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C06F20: 4a210091  add x10, x10, #8
0x04C06F24: 4b815ff8  ldur x11, [x10, #-8]
0x04C06F28: 7f0101eb  cmp x11, x1
0x04C06F2C: 00010054  b.eq #0x4c06f4c
0x04C06F30: 290500f1  subs x9, x9, #1
0x04C06F34: 4a410091  add x10, x10, #0x10
0x04C06F38: 61ffff54  b.ne #0x4c06f24
0x04C06F3C: e00314aa  mov x0, x20
0x04C06F40: e2031f2a  mov w2, wzr
0x04C06F44: f33e9597  bl #0x3156b10
0x04C06F48: 04000014  b #0x4c06f58
0x04C06F4C: 490180b9  ldrsw x9, [x10]
0x04C06F50: 0811098b  add x8, x8, x9, lsl #4
0x04C06F54: 00e10491  add x0, x8, #0x138
0x04C06F58: 080440a9  ldp x8, x1, [x0]
0x04C06F5C: e00314aa  mov x0, x20
0x04C06F60: 00013fd6  blr x8
0x04C06F64: 730100b4  cbz x19, #0x4c06f90
0x04C06F68: c85301d0  adrp x8, #0x7680000
0x04C06F6C: 086d40f9  ldr x8, [x8, #0xd8]
0x04C06F70: e10300aa  mov x1, x0
0x04C06F74: e00313aa  mov x0, x19
0x04C06F78: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04C06F7C: 020140f9  ldr x2, [x8]
0x04C06F80: f65742a9  ldp x22, x21, [sp, #0x20]
0x04C06F84: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04C06F88: fe67c4a8  ldp x30, x25, [sp], #0x40
0x04C06F8C: abf6f417  b #0x4944a38
0x04C06F90: 47e79597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C04DE8 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$GenerateRandomToolFromWeights
; native signature: System_ValueTuple_IMergeItem__int__o MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___GenerateRandomToolFromWeights (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedToolLevel__o* toolLevelWeights, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, bool shouldFilterByChain, int32_t currentLevelSum, const MethodInfo_4C04DE8* method);
; bytes=1064 sha256=c37dde8e8ac3c25a4cb7918a690bdc96f9eb68b583b998f738464b6b97e49de8 status=arm64_complete_bound indexed_start=True
0x04C04DE8: ff8301d1  sub sp, sp, #0x60
0x04C04DEC: fe0b00f9  str x30, [sp, #0x10]
0x04C04DF0: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C04DF4: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C04DF8: f65704a9  stp x22, x21, [sp, #0x40]
0x04C04DFC: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C04E00: b98801d0  adrp x25, #0x7d1a000
0x04C04E04: 28f37939  ldrb w8, [x25, #0xe7c]
0x04C04E08: f60305aa  mov x22, x5
0x04C04E0C: f703042a  mov w23, w4
0x04C04E10: f803032a  mov w24, w3
0x04C04E14: f30302aa  mov x19, x2
0x04C04E18: f50301aa  mov x21, x1
0x04C04E1C: f40300aa  mov x20, x0
0x04C04E20: 08030037  tbnz w8, #0, #0x4c04e80
0x04C04E24: e0530190  adrp x0, #0x7680000
0x04C04E28: 007440f9  ldr x0, [x0, #0xe8]
0x04C04E2C: fbee9597  bl #0x3180a18
0x04C04E30: c0530190  adrp x0, #0x767c000
0x04C04E34: 002441f9  ldr x0, [x0, #0x248]
0x04C04E38: f8ee9597  bl #0x3180a18
0x04C04E3C: e0530190  adrp x0, #0x7680000
0x04C04E40: 006840f9  ldr x0, [x0, #0xd0]
0x04C04E44: f5ee9597  bl #0x3180a18
0x04C04E48: c05301d0  adrp x0, #0x767e000
0x04C04E4C: 008842f9  ldr x0, [x0, #0x510]
0x04C04E50: f2ee9597  bl #0x3180a18
0x04C04E54: e0530190  adrp x0, #0x7680000
0x04C04E58: 007840f9  ldr x0, [x0, #0xf0]
0x04C04E5C: efee9597  bl #0x3180a18
0x04C04E60: e0530190  adrp x0, #0x7680000
0x04C04E64: 007c40f9  ldr x0, [x0, #0xf8]
0x04C04E68: ecee9597  bl #0x3180a18
0x04C04E6C: e0530190  adrp x0, #0x7680000
0x04C04E70: 008040f9  ldr x0, [x0, #0x100]
0x04C04E74: e9ee9597  bl #0x3180a18
0x04C04E78: 28008052  movz w8, #0x1
0x04C04E7C: 28f33939  strb w8, [x25, #0xe7c]
0x04C04E80: 58010036  tbz w24, #0, #0x4c04ea8
0x04C04E84: c81240f9  ldr x8, [x22, #0x20]
0x04C04E88: e00314aa  mov x0, x20
0x04C04E8C: e10315aa  mov x1, x21
0x04C04E90: e203172a  mov w2, w23
0x04C04E94: 086140f9  ldr x8, [x8, #0xc0]
0x04C04E98: e30313aa  mov x3, x19
0x04C04E9C: 048940f9  ldr x4, [x8, #0x110]
0x04C04EA0: 13feff97  bl #0x4c046ec
0x04C04EA4: f50300aa  mov x21, x0
0x04C04EA8: c81240f9  ldr x8, [x22, #0x20]
0x04C04EAC: 086140f9  ldr x8, [x8, #0xc0]
0x04C04EB0: 001140f9  ldr x0, [x8, #0x20]
0x04C04EB4: 08d44439  ldrb w8, [x0, #0x135]
0x04C04EB8: 48000037  tbnz w8, #0, #0x4c04ec0
0x04C04EBC: 58469597  bl #0x315681c
0x04C04EC0: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04EC4: 48000035  cbnz w8, #0x4c04ecc
0x04C04EC8: 31ef9597  bl #0x3180b8c
0x04C04ECC: c81240f9  ldr x8, [x22, #0x20]
0x04C04ED0: 086140f9  ldr x8, [x8, #0xc0]
0x04C04ED4: 001140f9  ldr x0, [x8, #0x20]
0x04C04ED8: 08d44439  ldrb w8, [x0, #0x135]
0x04C04EDC: 48000037  tbnz w8, #0, #0x4c04ee4
0x04C04EE0: 4f469597  bl #0x315681c
0x04C04EE4: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04EE8: 171540f9  ldr x23, [x8, #0x28]
0x04C04EEC: f70500b5  cbnz x23, #0x4c04fa8
0x04C04EF0: c81240f9  ldr x8, [x22, #0x20]
0x04C04EF4: 086140f9  ldr x8, [x8, #0xc0]
0x04C04EF8: 001140f9  ldr x0, [x8, #0x20]
0x04C04EFC: 08d44439  ldrb w8, [x0, #0x135]
0x04C04F00: 48000037  tbnz w8, #0, #0x4c04f08
0x04C04F04: 46469597  bl #0x315681c
0x04C04F08: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04F0C: 48000035  cbnz w8, #0x4c04f14
0x04C04F10: 1fef9597  bl #0x3180b8c
0x04C04F14: c81240f9  ldr x8, [x22, #0x20]
0x04C04F18: 086140f9  ldr x8, [x8, #0xc0]
0x04C04F1C: 001140f9  ldr x0, [x8, #0x20]
0x04C04F20: 08d44439  ldrb w8, [x0, #0x135]
0x04C04F24: 48000037  tbnz w8, #0, #0x4c04f2c
0x04C04F28: 3d469597  bl #0x315681c
0x04C04F2C: e9530190  adrp x9, #0x7680000
0x04C04F30: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04F34: 297540f9  ldr x9, [x9, #0xe8]
0x04C04F38: 180140f9  ldr x24, [x8]
0x04C04F3C: 200140f9  ldr x0, [x9]
0x04C04F40: 58ef9597  bl #0x3180ca0
0x04C04F44: c81240f9  ldr x8, [x22, #0x20]
0x04C04F48: e10318aa  mov x1, x24
0x04C04F4C: e3031faa  mov x3, xzr
0x04C04F50: f70300aa  mov x23, x0
0x04C04F54: 086140f9  ldr x8, [x8, #0xc0]
0x04C04F58: 028d40f9  ldr x2, [x8, #0x118]
0x04C04F5C: 83571994  bl #0x525ad68
0x04C04F60: c81240f9  ldr x8, [x22, #0x20]
0x04C04F64: 086140f9  ldr x8, [x8, #0xc0]
0x04C04F68: 001140f9  ldr x0, [x8, #0x20]
0x04C04F6C: 09d44439  ldrb w9, [x0, #0x135]
0x04C04F70: 89000037  tbnz w9, #0, #0x4c04f80
0x04C04F74: 2a469597  bl #0x315681c
0x04C04F78: c81240f9  ldr x8, [x22, #0x20]
0x04C04F7C: 086140f9  ldr x8, [x8, #0xc0]
0x04C04F80: 095c40f9  ldr x9, [x0, #0xb8]
0x04C04F84: 371500f9  str x23, [x9, #0x28]
0x04C04F88: 001140f9  ldr x0, [x8, #0x20]
0x04C04F8C: 08d44439  ldrb w8, [x0, #0x135]
0x04C04F90: 48000037  tbnz w8, #0, #0x4c04f98
0x04C04F94: 22469597  bl #0x315681c
0x04C04F98: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04F9C: e10317aa  mov x1, x23
0x04C04FA0: 00a10091  add x0, x8, #0x28
0x04C04FA4: 88ee9597  bl #0x31809c4
0x04C04FA8: c81240f9  ldr x8, [x22, #0x20]
0x04C04FAC: 086140f9  ldr x8, [x8, #0xc0]
0x04C04FB0: 001140f9  ldr x0, [x8, #0x20]
0x04C04FB4: 08d44439  ldrb w8, [x0, #0x135]
0x04C04FB8: 48000037  tbnz w8, #0, #0x4c04fc0
0x04C04FBC: 18469597  bl #0x315681c
0x04C04FC0: 08e040b9  ldr w8, [x0, #0xe0]
0x04C04FC4: 48000035  cbnz w8, #0x4c04fcc
0x04C04FC8: f1ee9597  bl #0x3180b8c
0x04C04FCC: c81240f9  ldr x8, [x22, #0x20]
0x04C04FD0: 086140f9  ldr x8, [x8, #0xc0]
0x04C04FD4: 001140f9  ldr x0, [x8, #0x20]
0x04C04FD8: 08d44439  ldrb w8, [x0, #0x135]
0x04C04FDC: 48000037  tbnz w8, #0, #0x4c04fe4
0x04C04FE0: 0f469597  bl #0x315681c
0x04C04FE4: 085c40f9  ldr x8, [x0, #0xb8]
0x04C04FE8: fa530190  adrp x26, #0x7680000
0x04C04FEC: 181940f9  ldr x24, [x8, #0x30]
0x04C04FF0: 5a8340f9  ldr x26, [x26, #0x100]
0x04C04FF4: f80500b5  cbnz x24, #0x4c050b0
0x04C04FF8: c81240f9  ldr x8, [x22, #0x20]
0x04C04FFC: 086140f9  ldr x8, [x8, #0xc0]
0x04C05000: 001140f9  ldr x0, [x8, #0x20]
0x04C05004: 08d44439  ldrb w8, [x0, #0x135]
0x04C05008: 48000037  tbnz w8, #0, #0x4c05010
0x04C0500C: 04469597  bl #0x315681c
0x04C05010: 08e040b9  ldr w8, [x0, #0xe0]
0x04C05014: 48000035  cbnz w8, #0x4c0501c
0x04C05018: ddee9597  bl #0x3180b8c
0x04C0501C: c81240f9  ldr x8, [x22, #0x20]
0x04C05020: 086140f9  ldr x8, [x8, #0xc0]
0x04C05024: 001140f9  ldr x0, [x8, #0x20]
0x04C05028: 08d44439  ldrb w8, [x0, #0x135]
0x04C0502C: 48000037  tbnz w8, #0, #0x4c05034
0x04C05030: fb459597  bl #0x315681c
0x04C05034: c95301f0  adrp x9, #0x7680000
0x04C05038: 085c40f9  ldr x8, [x0, #0xb8]
0x04C0503C: 297540f9  ldr x9, [x9, #0xe8]
0x04C05040: 190140f9  ldr x25, [x8]
0x04C05044: 200140f9  ldr x0, [x9]
0x04C05048: 16ef9597  bl #0x3180ca0
0x04C0504C: c81240f9  ldr x8, [x22, #0x20]
0x04C05050: e10319aa  mov x1, x25
0x04C05054: e3031faa  mov x3, xzr
0x04C05058: f80300aa  mov x24, x0
0x04C0505C: 086140f9  ldr x8, [x8, #0xc0]
0x04C05060: 029140f9  ldr x2, [x8, #0x120]
0x04C05064: 41571994  bl #0x525ad68
0x04C05068: c81240f9  ldr x8, [x22, #0x20]
0x04C0506C: 086140f9  ldr x8, [x8, #0xc0]
0x04C05070: 001140f9  ldr x0, [x8, #0x20]
0x04C05074: 09d44439  ldrb w9, [x0, #0x135]
0x04C05078: 89000037  tbnz w9, #0, #0x4c05088
0x04C0507C: e8459597  bl #0x315681c
0x04C05080: c81240f9  ldr x8, [x22, #0x20]
0x04C05084: 086140f9  ldr x8, [x8, #0xc0]
0x04C05088: 095c40f9  ldr x9, [x0, #0xb8]
0x04C0508C: 381900f9  str x24, [x9, #0x30]
0x04C05090: 001140f9  ldr x0, [x8, #0x20]
0x04C05094: 08d44439  ldrb w8, [x0, #0x135]
0x04C05098: 48000037  tbnz w8, #0, #0x4c050a0
0x04C0509C: e0459597  bl #0x315681c
0x04C050A0: 085c40f9  ldr x8, [x0, #0xb8]
0x04C050A4: e10318aa  mov x1, x24
0x04C050A8: 00c10091  add x0, x8, #0x30
0x04C050AC: 46ee9597  bl #0x31809c4
0x04C050B0: 430340f9  ldr x3, [x26]
0x04C050B4: e00315aa  mov x0, x21
0x04C050B8: e10317aa  mov x1, x23
0x04C050BC: e20318aa  mov x2, x24
0x04C050C0: 89c8c897  bl #0x3e372e4
0x04C050C4: 953240f9  ldr x21, [x20, #0x60]
0x04C050C8: 350a00b4  cbz x21, #0x4c0520c
0x04C050CC: ca5301f0  adrp x10, #0x7680000
0x04C050D0: a80240f9  ldr x8, [x21]
0x04C050D4: 4a6940f9  ldr x10, [x10, #0xd0]
0x04C050D8: f40300aa  mov x20, x0
0x04C050DC: 095d4279  ldrh w9, [x8, #0x12e]
0x04C050E0: 410140f9  ldr x1, [x10]
0x04C050E4: 290100b4  cbz x9, #0x4c05108
0x04C050E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C050EC: 4a210091  add x10, x10, #8
0x04C050F0: 4b815ff8  ldur x11, [x10, #-8]
0x04C050F4: 7f0101eb  cmp x11, x1
0x04C050F8: 00010054  b.eq #0x4c05118
0x04C050FC: 290500f1  subs x9, x9, #1
0x04C05100: 4a410091  add x10, x10, #0x10
0x04C05104: 61ffff54  b.ne #0x4c050f0
0x04C05108: e00315aa  mov x0, x21
0x04C0510C: e2031f2a  mov w2, wzr
0x04C05110: 80469597  bl #0x3156b10
0x04C05114: 04000014  b #0x4c05124
0x04C05118: 490180b9  ldrsw x9, [x10]
0x04C0511C: 0811098b  add x8, x8, x9, lsl #4
0x04C05120: 00e10491  add x0, x8, #0x138
0x04C05124: 080440a9  ldp x8, x1, [x0]
0x04C05128: e00315aa  mov x0, x21
0x04C0512C: 00013fd6  blr x8
0x04C05130: f40600b4  cbz x20, #0x4c0520c
0x04C05134: c85301f0  adrp x8, #0x7680000
0x04C05138: 087d40f9  ldr x8, [x8, #0xf8]
0x04C0513C: e10300aa  mov x1, x0
0x04C05140: e00314aa  mov x0, x20
0x04C05144: 020140f9  ldr x2, [x8]
0x04C05148: 43fdf497  bl #0x4944654
0x04C0514C: 130600b4  cbz x19, #0x4c0520c
0x04C05150: aa5301f0  adrp x10, #0x767c000
0x04C05154: 680240f9  ldr x8, [x19]
0x04C05158: 4a2541f9  ldr x10, [x10, #0x248]
0x04C0515C: f403002a  mov w20, w0
0x04C05160: 095d4279  ldrh w9, [x8, #0x12e]
0x04C05164: 410140f9  ldr x1, [x10]
0x04C05168: 290100b4  cbz x9, #0x4c0518c
0x04C0516C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05170: 4a210091  add x10, x10, #8
0x04C05174: 4b815ff8  ldur x11, [x10, #-8]
0x04C05178: 7f0101eb  cmp x11, x1
0x04C0517C: 00010054  b.eq #0x4c0519c
0x04C05180: 290500f1  subs x9, x9, #1
0x04C05184: 4a410091  add x10, x10, #0x10
0x04C05188: 61ffff54  b.ne #0x4c05174
0x04C0518C: e00313aa  mov x0, x19
0x04C05190: e2031f2a  mov w2, wzr
0x04C05194: 5f469597  bl #0x3156b10
0x04C05198: 04000014  b #0x4c051a8
0x04C0519C: 490180b9  ldrsw x9, [x10]
0x04C051A0: 0811098b  add x8, x8, x9, lsl #4
0x04C051A4: 00e10491  add x0, x8, #0x138
0x04C051A8: 080440a9  ldp x8, x1, [x0]
0x04C051AC: e00313aa  mov x0, x19
0x04C051B0: 00013fd6  blr x8
0x04C051B4: c00200b4  cbz x0, #0x4c0520c
0x04C051B8: c85301b0  adrp x8, #0x767e000
0x04C051BC: 088942f9  ldr x8, [x8, #0x510]
0x04C051C0: d35301f0  adrp x19, #0x7680000
0x04C051C4: 81060051  sub w1, w20, #1
0x04C051C8: 020140f9  ldr x2, [x8]
0x04C051CC: 737a40f9  ldr x19, [x19, #0xf0]
0x04C051D0: f3fbd097  bl #0x404419c
0x04C051D4: 630240f9  ldr x3, [x19]
0x04C051D8: e10300aa  mov x1, x0
0x04C051DC: e0030091  mov x0, sp
0x04C051E0: e203142a  mov w2, w20
0x04C051E4: ff7f00a9  stp xzr, xzr, [sp]
0x04C051E8: ed10ef97  bl #0x47c959c
0x04C051EC: e00740a9  ldp x0, x1, [sp]
0x04C051F0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C051F4: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C051F8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C051FC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C05200: fe0b40f9  ldr x30, [sp, #0x10]
0x04C05204: ff830191  add sp, sp, #0x60
0x04C05208: c0035fd6  ret
0x04C0520C: a8ee9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C06F94 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$GenerateRandomToolFromWeights
; native signature: System_ValueTuple_IMergeItem__int__o MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___GenerateRandomToolFromWeights (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedToolLevel__o* toolLevelWeights, MergeEngine_Configuration_IMergeGraphItem_o* toolGraph, bool shouldFilterByChain, int32_t currentLevelSum, const MethodInfo_4C06F94* method);
; bytes=1068 sha256=07843906b99ad3e8057eb6282f0dff24675a5879285ecda9b68fb12422f3b9c6 status=arm64_complete_bound indexed_start=True
0x04C06F94: ff8301d1  sub sp, sp, #0x60
0x04C06F98: fe0b00f9  str x30, [sp, #0x10]
0x04C06F9C: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C06FA0: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C06FA4: f65704a9  stp x22, x21, [sp, #0x40]
0x04C06FA8: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C06FAC: b9880190  adrp x25, #0x7d1a000
0x04C06FB0: 28437a39  ldrb w8, [x25, #0xe90]
0x04C06FB4: f60305aa  mov x22, x5
0x04C06FB8: f703042a  mov w23, w4
0x04C06FBC: f803032a  mov w24, w3
0x04C06FC0: f30302aa  mov x19, x2
0x04C06FC4: f50301aa  mov x21, x1
0x04C06FC8: f40300aa  mov x20, x0
0x04C06FCC: 08030037  tbnz w8, #0, #0x4c0702c
0x04C06FD0: c05301d0  adrp x0, #0x7680000
0x04C06FD4: 007440f9  ldr x0, [x0, #0xe8]
0x04C06FD8: 90e69597  bl #0x3180a18
0x04C06FDC: a05301d0  adrp x0, #0x767c000
0x04C06FE0: 002441f9  ldr x0, [x0, #0x248]
0x04C06FE4: 8de69597  bl #0x3180a18
0x04C06FE8: c05301d0  adrp x0, #0x7680000
0x04C06FEC: 006840f9  ldr x0, [x0, #0xd0]
0x04C06FF0: 8ae69597  bl #0x3180a18
0x04C06FF4: c0530190  adrp x0, #0x767e000
0x04C06FF8: 008842f9  ldr x0, [x0, #0x510]
0x04C06FFC: 87e69597  bl #0x3180a18
0x04C07000: c05301b0  adrp x0, #0x7680000
0x04C07004: 007840f9  ldr x0, [x0, #0xf0]
0x04C07008: 84e69597  bl #0x3180a18
0x04C0700C: c05301b0  adrp x0, #0x7680000
0x04C07010: 007c40f9  ldr x0, [x0, #0xf8]
0x04C07014: 81e69597  bl #0x3180a18
0x04C07018: c05301b0  adrp x0, #0x7680000
0x04C0701C: 008040f9  ldr x0, [x0, #0x100]
0x04C07020: 7ee69597  bl #0x3180a18
0x04C07024: 28008052  movz w8, #0x1
0x04C07028: 28433a39  strb w8, [x25, #0xe90]
0x04C0702C: 78010036  tbz w24, #0, #0x4c07058
0x04C07030: c81240f9  ldr x8, [x22, #0x20]
0x04C07034: e00314aa  mov x0, x20
0x04C07038: e10315aa  mov x1, x21
0x04C0703C: e203172a  mov w2, w23
0x04C07040: 086140f9  ldr x8, [x8, #0xc0]
0x04C07044: e30313aa  mov x3, x19
0x04C07048: 048940f9  ldr x4, [x8, #0x110]
0x04C0704C: 880040f9  ldr x8, [x4]
0x04C07050: 00013fd6  blr x8
0x04C07054: f50300aa  mov x21, x0
0x04C07058: c81240f9  ldr x8, [x22, #0x20]
0x04C0705C: 086140f9  ldr x8, [x8, #0xc0]
0x04C07060: 001140f9  ldr x0, [x8, #0x20]
0x04C07064: 08d44439  ldrb w8, [x0, #0x135]
0x04C07068: 48000037  tbnz w8, #0, #0x4c07070
0x04C0706C: ec3d9597  bl #0x315681c
0x04C07070: 08e040b9  ldr w8, [x0, #0xe0]
0x04C07074: 48000035  cbnz w8, #0x4c0707c
0x04C07078: c5e69597  bl #0x3180b8c
0x04C0707C: c81240f9  ldr x8, [x22, #0x20]
0x04C07080: 086140f9  ldr x8, [x8, #0xc0]
0x04C07084: 001140f9  ldr x0, [x8, #0x20]
0x04C07088: 08d44439  ldrb w8, [x0, #0x135]
0x04C0708C: 48000037  tbnz w8, #0, #0x4c07094
0x04C07090: e33d9597  bl #0x315681c
0x04C07094: 085c40f9  ldr x8, [x0, #0xb8]
0x04C07098: 171540f9  ldr x23, [x8, #0x28]
0x04C0709C: f70500b5  cbnz x23, #0x4c07158
0x04C070A0: c81240f9  ldr x8, [x22, #0x20]
0x04C070A4: 086140f9  ldr x8, [x8, #0xc0]
0x04C070A8: 001140f9  ldr x0, [x8, #0x20]
0x04C070AC: 08d44439  ldrb w8, [x0, #0x135]
0x04C070B0: 48000037  tbnz w8, #0, #0x4c070b8
0x04C070B4: da3d9597  bl #0x315681c
0x04C070B8: 08e040b9  ldr w8, [x0, #0xe0]
0x04C070BC: 48000035  cbnz w8, #0x4c070c4
0x04C070C0: b3e69597  bl #0x3180b8c
0x04C070C4: c81240f9  ldr x8, [x22, #0x20]
0x04C070C8: 086140f9  ldr x8, [x8, #0xc0]
0x04C070CC: 001140f9  ldr x0, [x8, #0x20]
0x04C070D0: 08d44439  ldrb w8, [x0, #0x135]
0x04C070D4: 48000037  tbnz w8, #0, #0x4c070dc
0x04C070D8: d13d9597  bl #0x315681c
0x04C070DC: c95301b0  adrp x9, #0x7680000
0x04C070E0: 085c40f9  ldr x8, [x0, #0xb8]
0x04C070E4: 297540f9  ldr x9, [x9, #0xe8]
0x04C070E8: 180140f9  ldr x24, [x8]
0x04C070EC: 200140f9  ldr x0, [x9]
0x04C070F0: ece69597  bl #0x3180ca0
0x04C070F4: c81240f9  ldr x8, [x22, #0x20]
0x04C070F8: e10318aa  mov x1, x24
0x04C070FC: e3031faa  mov x3, xzr
0x04C07100: f70300aa  mov x23, x0
0x04C07104: 086140f9  ldr x8, [x8, #0xc0]
0x04C07108: 028d40f9  ldr x2, [x8, #0x118]
0x04C0710C: 174f1994  bl #0x525ad68
0x04C07110: c81240f9  ldr x8, [x22, #0x20]
0x04C07114: 086140f9  ldr x8, [x8, #0xc0]
0x04C07118: 001140f9  ldr x0, [x8, #0x20]
0x04C0711C: 09d44439  ldrb w9, [x0, #0x135]
0x04C07120: 89000037  tbnz w9, #0, #0x4c07130
0x04C07124: be3d9597  bl #0x315681c
0x04C07128: c81240f9  ldr x8, [x22, #0x20]
0x04C0712C: 086140f9  ldr x8, [x8, #0xc0]
0x04C07130: 095c40f9  ldr x9, [x0, #0xb8]
0x04C07134: 371500f9  str x23, [x9, #0x28]
0x04C07138: 001140f9  ldr x0, [x8, #0x20]
0x04C0713C: 08d44439  ldrb w8, [x0, #0x135]
0x04C07140: 48000037  tbnz w8, #0, #0x4c07148
0x04C07144: b63d9597  bl #0x315681c
0x04C07148: 085c40f9  ldr x8, [x0, #0xb8]
0x04C0714C: e10317aa  mov x1, x23
0x04C07150: 00a10091  add x0, x8, #0x28
0x04C07154: 1ce69597  bl #0x31809c4
0x04C07158: c81240f9  ldr x8, [x22, #0x20]
0x04C0715C: 086140f9  ldr x8, [x8, #0xc0]
0x04C07160: 001140f9  ldr x0, [x8, #0x20]
0x04C07164: 08d44439  ldrb w8, [x0, #0x135]
0x04C07168: 48000037  tbnz w8, #0, #0x4c07170
0x04C0716C: ac3d9597  bl #0x315681c
0x04C07170: 08e040b9  ldr w8, [x0, #0xe0]
0x04C07174: 48000035  cbnz w8, #0x4c0717c
0x04C07178: 85e69597  bl #0x3180b8c
0x04C0717C: c81240f9  ldr x8, [x22, #0x20]
0x04C07180: 086140f9  ldr x8, [x8, #0xc0]
0x04C07184: 001140f9  ldr x0, [x8, #0x20]
0x04C07188: 08d44439  ldrb w8, [x0, #0x135]
0x04C0718C: 48000037  tbnz w8, #0, #0x4c07194
0x04C07190: a33d9597  bl #0x315681c
0x04C07194: 085c40f9  ldr x8, [x0, #0xb8]
0x04C07198: da5301b0  adrp x26, #0x7680000
0x04C0719C: 181940f9  ldr x24, [x8, #0x30]
0x04C071A0: 5a8340f9  ldr x26, [x26, #0x100]
0x04C071A4: f80500b5  cbnz x24, #0x4c07260
0x04C071A8: c81240f9  ldr x8, [x22, #0x20]
0x04C071AC: 086140f9  ldr x8, [x8, #0xc0]
0x04C071B0: 001140f9  ldr x0, [x8, #0x20]
0x04C071B4: 08d44439  ldrb w8, [x0, #0x135]
0x04C071B8: 48000037  tbnz w8, #0, #0x4c071c0
0x04C071BC: 983d9597  bl #0x315681c
0x04C071C0: 08e040b9  ldr w8, [x0, #0xe0]
0x04C071C4: 48000035  cbnz w8, #0x4c071cc
0x04C071C8: 71e69597  bl #0x3180b8c
0x04C071CC: c81240f9  ldr x8, [x22, #0x20]
0x04C071D0: 086140f9  ldr x8, [x8, #0xc0]
0x04C071D4: 001140f9  ldr x0, [x8, #0x20]
0x04C071D8: 08d44439  ldrb w8, [x0, #0x135]
0x04C071DC: 48000037  tbnz w8, #0, #0x4c071e4
0x04C071E0: 8f3d9597  bl #0x315681c
0x04C071E4: c95301b0  adrp x9, #0x7680000
0x04C071E8: 085c40f9  ldr x8, [x0, #0xb8]
0x04C071EC: 297540f9  ldr x9, [x9, #0xe8]
0x04C071F0: 190140f9  ldr x25, [x8]
0x04C071F4: 200140f9  ldr x0, [x9]
0x04C071F8: aae69597  bl #0x3180ca0
0x04C071FC: c81240f9  ldr x8, [x22, #0x20]
0x04C07200: e10319aa  mov x1, x25
0x04C07204: e3031faa  mov x3, xzr
0x04C07208: f80300aa  mov x24, x0
0x04C0720C: 086140f9  ldr x8, [x8, #0xc0]
0x04C07210: 029140f9  ldr x2, [x8, #0x120]
0x04C07214: d54e1994  bl #0x525ad68
0x04C07218: c81240f9  ldr x8, [x22, #0x20]
0x04C0721C: 086140f9  ldr x8, [x8, #0xc0]
0x04C07220: 001140f9  ldr x0, [x8, #0x20]
0x04C07224: 09d44439  ldrb w9, [x0, #0x135]
0x04C07228: 89000037  tbnz w9, #0, #0x4c07238
0x04C0722C: 7c3d9597  bl #0x315681c
0x04C07230: c81240f9  ldr x8, [x22, #0x20]
0x04C07234: 086140f9  ldr x8, [x8, #0xc0]
0x04C07238: 095c40f9  ldr x9, [x0, #0xb8]
0x04C0723C: 381900f9  str x24, [x9, #0x30]
0x04C07240: 001140f9  ldr x0, [x8, #0x20]
0x04C07244: 08d44439  ldrb w8, [x0, #0x135]
0x04C07248: 48000037  tbnz w8, #0, #0x4c07250
0x04C0724C: 743d9597  bl #0x315681c
0x04C07250: 085c40f9  ldr x8, [x0, #0xb8]
0x04C07254: e10318aa  mov x1, x24
0x04C07258: 00c10091  add x0, x8, #0x30
0x04C0725C: dae59597  bl #0x31809c4
0x04C07260: 430340f9  ldr x3, [x26]
0x04C07264: e00315aa  mov x0, x21
0x04C07268: e10317aa  mov x1, x23
0x04C0726C: e20318aa  mov x2, x24
0x04C07270: 1dc0c897  bl #0x3e372e4
0x04C07274: 953240f9  ldr x21, [x20, #0x60]
0x04C07278: 350a00b4  cbz x21, #0x4c073bc
0x04C0727C: ca5301b0  adrp x10, #0x7680000
0x04C07280: a80240f9  ldr x8, [x21]
0x04C07284: 4a6940f9  ldr x10, [x10, #0xd0]
0x04C07288: f40300aa  mov x20, x0
0x04C0728C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C07290: 410140f9  ldr x1, [x10]
0x04C07294: 290100b4  cbz x9, #0x4c072b8
0x04C07298: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C0729C: 4a210091  add x10, x10, #8
0x04C072A0: 4b815ff8  ldur x11, [x10, #-8]
0x04C072A4: 7f0101eb  cmp x11, x1
0x04C072A8: 00010054  b.eq #0x4c072c8
0x04C072AC: 290500f1  subs x9, x9, #1
0x04C072B0: 4a410091  add x10, x10, #0x10
0x04C072B4: 61ffff54  b.ne #0x4c072a0
0x04C072B8: e00315aa  mov x0, x21
0x04C072BC: e2031f2a  mov w2, wzr
0x04C072C0: 143e9597  bl #0x3156b10
0x04C072C4: 04000014  b #0x4c072d4
0x04C072C8: 490180b9  ldrsw x9, [x10]
0x04C072CC: 0811098b  add x8, x8, x9, lsl #4
0x04C072D0: 00e10491  add x0, x8, #0x138
0x04C072D4: 080440a9  ldp x8, x1, [x0]
0x04C072D8: e00315aa  mov x0, x21
0x04C072DC: 00013fd6  blr x8
0x04C072E0: f40600b4  cbz x20, #0x4c073bc
0x04C072E4: c85301b0  adrp x8, #0x7680000
0x04C072E8: 087d40f9  ldr x8, [x8, #0xf8]
0x04C072EC: e10300aa  mov x1, x0
0x04C072F0: e00314aa  mov x0, x20
0x04C072F4: 020140f9  ldr x2, [x8]
0x04C072F8: d7f4f497  bl #0x4944654
0x04C072FC: 130600b4  cbz x19, #0x4c073bc
0x04C07300: aa5301b0  adrp x10, #0x767c000
0x04C07304: 680240f9  ldr x8, [x19]
0x04C07308: 4a2541f9  ldr x10, [x10, #0x248]
0x04C0730C: f403002a  mov w20, w0
0x04C07310: 095d4279  ldrh w9, [x8, #0x12e]
0x04C07314: 410140f9  ldr x1, [x10]
0x04C07318: 290100b4  cbz x9, #0x4c0733c
0x04C0731C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C07320: 4a210091  add x10, x10, #8
0x04C07324: 4b815ff8  ldur x11, [x10, #-8]
0x04C07328: 7f0101eb  cmp x11, x1
0x04C0732C: 00010054  b.eq #0x4c0734c
0x04C07330: 290500f1  subs x9, x9, #1
0x04C07334: 4a410091  add x10, x10, #0x10
0x04C07338: 61ffff54  b.ne #0x4c07324
0x04C0733C: e00313aa  mov x0, x19
0x04C07340: e2031f2a  mov w2, wzr
0x04C07344: f33d9597  bl #0x3156b10
0x04C07348: 04000014  b #0x4c07358
0x04C0734C: 490180b9  ldrsw x9, [x10]
0x04C07350: 0811098b  add x8, x8, x9, lsl #4
0x04C07354: 00e10491  add x0, x8, #0x138
0x04C07358: 080440a9  ldp x8, x1, [x0]
0x04C0735C: e00313aa  mov x0, x19
0x04C07360: 00013fd6  blr x8
0x04C07364: c00200b4  cbz x0, #0x4c073bc
0x04C07368: a85301f0  adrp x8, #0x767e000
0x04C0736C: 088942f9  ldr x8, [x8, #0x510]
0x04C07370: d35301b0  adrp x19, #0x7680000
0x04C07374: 81060051  sub w1, w20, #1
0x04C07378: 020140f9  ldr x2, [x8]
0x04C0737C: 737a40f9  ldr x19, [x19, #0xf0]
0x04C07380: 87f3d097  bl #0x404419c
0x04C07384: 630240f9  ldr x3, [x19]
0x04C07388: e10300aa  mov x1, x0
0x04C0738C: e0030091  mov x0, sp
0x04C07390: e203142a  mov w2, w20
0x04C07394: ff7f00a9  stp xzr, xzr, [sp]
0x04C07398: 8108ef97  bl #0x47c959c
0x04C0739C: e00740a9  ldp x0, x1, [sp]
0x04C073A0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C073A4: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C073A8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C073AC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C073B0: fe0b40f9  ldr x30, [sp, #0x10]
0x04C073B4: ff830191  add sp, sp, #0x60
0x04C073B8: c0035fd6  ret
0x04C073BC: 3ce69597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05210 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$BoostRequiredToolWeights
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object___BoostRequiredToolWeights (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* toolWeights, System_Collections_Generic_HashSet_PlayerResourceEnum__o* requiredTools, const MethodInfo_4C05210* method);
; bytes=344 sha256=124f028a8a05e8460b06db2073629c235c9555cda67e132c7be118f5ab83640f status=arm64_complete_bound indexed_start=True
0x04C05210: e80f1afc  str d8, [sp, #-0x60]!
0x04C05214: fe0700f9  str x30, [sp, #8]
0x04C05218: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C0521C: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C05220: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C05224: f65704a9  stp x22, x21, [sp, #0x40]
0x04C05228: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C0522C: b68801b0  adrp x22, #0x7d1a000
0x04C05230: c8f67939  ldrb w8, [x22, #0xe7d]
0x04C05234: f30302aa  mov x19, x2
0x04C05238: f40301aa  mov x20, x1
0x04C0523C: f50300aa  mov x21, x0
0x04C05240: e8010037  tbnz w8, #0, #0x4c0527c
0x04C05244: c05301f0  adrp x0, #0x7680000
0x04C05248: 008440f9  ldr x0, [x0, #0x108]
0x04C0524C: f3ed9597  bl #0x3180a18
0x04C05250: c05301f0  adrp x0, #0x7680000
0x04C05254: 005840f9  ldr x0, [x0, #0xb0]
0x04C05258: f0ed9597  bl #0x3180a18
0x04C0525C: c05301f0  adrp x0, #0x7680000
0x04C05260: 008840f9  ldr x0, [x0, #0x110]
0x04C05264: eded9597  bl #0x3180a18
0x04C05268: c05301f0  adrp x0, #0x7680000
0x04C0526C: 008c40f9  ldr x0, [x0, #0x118]
0x04C05270: eaed9597  bl #0x3180a18
0x04C05274: 28008052  movz w8, #0x1
0x04C05278: c8f63939  strb w8, [x22, #0xe7d]
0x04C0527C: 540700b4  cbz x20, #0x4c05364
0x04C05280: 881a40b9  ldr w8, [x20, #0x18]
0x04C05284: 1f050071  cmp w8, #1
0x04C05288: eb050054  b.lt #0x4c05344
0x04C0528C: d75301f0  adrp x23, #0x7680000
0x04C05290: d85301f0  adrp x24, #0x7680000
0x04C05294: d95301f0  adrp x25, #0x7680000
0x04C05298: f78a40f9  ldr x23, [x23, #0x110]
0x04C0529C: 188740f9  ldr x24, [x24, #0x108]
0x04C052A0: 398f40f9  ldr x25, [x25, #0x118]
0x04C052A4: f6031f2a  mov w22, wzr
0x04C052A8: 1af0af52  movz w26, #0x7f80, lsl #16
0x04C052AC: 1b00b052  movz w27, #0x8000, lsl #16
0x04C052B0: e20240f9  ldr x2, [x23]
0x04C052B4: e00314aa  mov x0, x20
0x04C052B8: e103162a  mov w1, w22
0x04C052BC: bf84d397  bl #0x40e65b8
0x04C052C0: 330500b4  cbz x19, #0x4c05364
0x04C052C4: 020340f9  ldr x2, [x24]
0x04C052C8: 01fc60d3  lsr x1, x0, #0x20
0x04C052CC: e00313aa  mov x0, x19
0x04C052D0: 2adb1a94  bl #0x52bbf78
0x04C052D4: 00030036  tbz w0, #0, #0x4c05334
0x04C052D8: e00315aa  mov x0, x21
0x04C052DC: cdf8ff97  bl #0x4c03610
0x04C052E0: e20240f9  ldr x2, [x23]
0x04C052E4: e00314aa  mov x0, x20
0x04C052E8: e103162a  mov w1, w22
0x04C052EC: 081ca04e  mov v8.16b, v0.16b
0x04C052F0: b284d397  bl #0x40e65b8
0x04C052F4: e20240f9  ldr x2, [x23]
0x04C052F8: 0000221e  scvtf s0, w0
0x04C052FC: 0809201e  fmul s8, s8, s0
0x04C05300: e00314aa  mov x0, x20
0x04C05304: e103162a  mov w1, w22
0x04C05308: 1c01381e  fcvtzs w28, s8
0x04C0530C: ab84d397  bl #0x40e65b8
0x04C05310: 4003271e  fmov s0, w26
0x04C05314: 230340f9  ldr x3, [x25]
0x04C05318: 0021201e  fcmp s8, s0
0x04C0531C: 087c6092  and x8, x0, #0xffffffff00000000
0x04C05320: 69039c9a  csel x9, x27, x28, eq
0x04C05324: 220108aa  orr x2, x9, x8
0x04C05328: e00314aa  mov x0, x20
0x04C0532C: e103162a  mov w1, w22
0x04C05330: b784d397  bl #0x40e660c
0x04C05334: 881a40b9  ldr w8, [x20, #0x18]
0x04C05338: d6060011  add w22, w22, #1
0x04C0533C: df02086b  cmp w22, w8
0x04C05340: 8bfbff54  b.lt #0x4c052b0
0x04C05344: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C05348: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C0534C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C05350: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C05354: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C05358: fe0740f9  ldr x30, [sp, #8]
0x04C0535C: e80746fc  ldr d8, [sp], #0x60
0x04C05360: c0035fd6  ret
0x04C05364: 52ee9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C073C0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$BoostRequiredToolWeights
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType___BoostRequiredToolWeights (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, System_Collections_Generic_List_WeightedTool__o* toolWeights, System_Collections_Generic_HashSet_PlayerResourceEnum__o* requiredTools, const MethodInfo_4C073C0* method);
; bytes=364 sha256=b934a8bdd726341120cd9ba4dd7b11890695699868870f333ccfe4113d8971fa status=arm64_complete_bound indexed_start=True
0x04C073C0: e80f19fc  str d8, [sp, #-0x70]!
0x04C073C4: fd7b01a9  stp x29, x30, [sp, #0x10]
0x04C073C8: fc6f02a9  stp x28, x27, [sp, #0x20]
0x04C073CC: fa6703a9  stp x26, x25, [sp, #0x30]
0x04C073D0: f85f04a9  stp x24, x23, [sp, #0x40]
0x04C073D4: f65705a9  stp x22, x21, [sp, #0x50]
0x04C073D8: f44f06a9  stp x20, x19, [sp, #0x60]
0x04C073DC: 978801f0  adrp x23, #0x7d1a000
0x04C073E0: e8467a39  ldrb w8, [x23, #0xe91]
0x04C073E4: f30303aa  mov x19, x3
0x04C073E8: f40302aa  mov x20, x2
0x04C073EC: f50301aa  mov x21, x1
0x04C073F0: f60300aa  mov x22, x0
0x04C073F4: e8010037  tbnz w8, #0, #0x4c07430
0x04C073F8: c05301b0  adrp x0, #0x7680000
0x04C073FC: 008440f9  ldr x0, [x0, #0x108]
0x04C07400: 86e59597  bl #0x3180a18
0x04C07404: c05301b0  adrp x0, #0x7680000
0x04C07408: 005840f9  ldr x0, [x0, #0xb0]
0x04C0740C: 83e59597  bl #0x3180a18
0x04C07410: c05301b0  adrp x0, #0x7680000
0x04C07414: 008840f9  ldr x0, [x0, #0x110]
0x04C07418: 80e59597  bl #0x3180a18
0x04C0741C: c05301b0  adrp x0, #0x7680000
0x04C07420: 008c40f9  ldr x0, [x0, #0x118]
0x04C07424: 7de59597  bl #0x3180a18
0x04C07428: 28008052  movz w8, #0x1
0x04C0742C: e8463a39  strb w8, [x23, #0xe91]
0x04C07430: d50700b4  cbz x21, #0x4c07528
0x04C07434: a81a40b9  ldr w8, [x21, #0x18]
0x04C07438: 1f050071  cmp w8, #1
0x04C0743C: 6b060054  b.lt #0x4c07508
0x04C07440: d85301b0  adrp x24, #0x7680000
0x04C07444: d95301b0  adrp x25, #0x7680000
0x04C07448: da5301b0  adrp x26, #0x7680000
0x04C0744C: 188b40f9  ldr x24, [x24, #0x110]
0x04C07450: 398740f9  ldr x25, [x25, #0x108]
0x04C07454: 5a8f40f9  ldr x26, [x26, #0x118]
0x04C07458: f7031f2a  mov w23, wzr
0x04C0745C: 1bf0af52  movz w27, #0x7f80, lsl #16
0x04C07460: 1c00b052  movz w28, #0x8000, lsl #16
0x04C07464: 020340f9  ldr x2, [x24]
0x04C07468: e00315aa  mov x0, x21
0x04C0746C: e103172a  mov w1, w23
0x04C07470: 527cd397  bl #0x40e65b8
0x04C07474: b40500b4  cbz x20, #0x4c07528
0x04C07478: 220340f9  ldr x2, [x25]
0x04C0747C: 01fc60d3  lsr x1, x0, #0x20
0x04C07480: e00314aa  mov x0, x20
0x04C07484: bdd21a94  bl #0x52bbf78
0x04C07488: 80030036  tbz w0, #0, #0x4c074f8
0x04C0748C: 681240f9  ldr x8, [x19, #0x20]
0x04C07490: e00316aa  mov x0, x22
0x04C07494: 086140f9  ldr x8, [x8, #0xc0]
0x04C07498: 019540f9  ldr x1, [x8, #0x128]
0x04C0749C: 280040f9  ldr x8, [x1]
0x04C074A0: 00013fd6  blr x8
0x04C074A4: 020340f9  ldr x2, [x24]
0x04C074A8: e00315aa  mov x0, x21
0x04C074AC: e103172a  mov w1, w23
0x04C074B0: 081ca04e  mov v8.16b, v0.16b
0x04C074B4: 417cd397  bl #0x40e65b8
0x04C074B8: 020340f9  ldr x2, [x24]
0x04C074BC: 0000221e  scvtf s0, w0
0x04C074C0: 0809201e  fmul s8, s8, s0
0x04C074C4: e00315aa  mov x0, x21
0x04C074C8: e103172a  mov w1, w23
0x04C074CC: 1d01381e  fcvtzs w29, s8
0x04C074D0: 3a7cd397  bl #0x40e65b8
0x04C074D4: 6003271e  fmov s0, w27
0x04C074D8: 430340f9  ldr x3, [x26]
0x04C074DC: 0021201e  fcmp s8, s0
0x04C074E0: 087c6092  and x8, x0, #0xffffffff00000000
0x04C074E4: 89039d9a  csel x9, x28, x29, eq
0x04C074E8: 220108aa  orr x2, x9, x8
0x04C074EC: e00315aa  mov x0, x21
0x04C074F0: e103172a  mov w1, w23
0x04C074F4: 467cd397  bl #0x40e660c
0x04C074F8: a81a40b9  ldr w8, [x21, #0x18]
0x04C074FC: f7060011  add w23, w23, #1
0x04C07500: ff02086b  cmp w23, w8
0x04C07504: 0bfbff54  b.lt #0x4c07464
0x04C07508: f44f46a9  ldp x20, x19, [sp, #0x60]
0x04C0750C: f65745a9  ldp x22, x21, [sp, #0x50]
0x04C07510: f85f44a9  ldp x24, x23, [sp, #0x40]
0x04C07514: fa6743a9  ldp x26, x25, [sp, #0x30]
0x04C07518: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x04C0751C: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x04C07520: e80747fc  ldr d8, [sp], #0x70
0x04C07524: c0035fd6  ret
0x04C07528: e1e59597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05368 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C05368* method);
; bytes=380 sha256=2e05bd961c18def2aec9b6890688ca8ff9886de75dbaf7b4364c5720828ce663 status=arm64_complete_bound indexed_start=True
0x04C05368: fe0f1af8  str x30, [sp, #-0x60]!
0x04C0536C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C05370: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C05374: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C05378: f65704a9  stp x22, x21, [sp, #0x40]
0x04C0537C: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C05380: bb8801b0  adrp x27, #0x7d1a000
0x04C05384: dc5301f0  adrp x28, #0x7680000
0x04C05388: d55301f0  adrp x21, #0x7680000
0x04C0538C: da5301f0  adrp x26, #0x7680000
0x04C05390: d95301f0  adrp x25, #0x7680000
0x04C05394: d85301b0  adrp x24, #0x767e000
0x04C05398: d75301b0  adrp x23, #0x767e000
0x04C0539C: d65301f0  adrp x22, #0x7680000
0x04C053A0: 9c9340f9  ldr x28, [x28, #0x120]
0x04C053A4: b59640f9  ldr x21, [x21, #0x128]
0x04C053A8: 68fb7939  ldrb w8, [x27, #0xe7e]
0x04C053AC: 5a9b40f9  ldr x26, [x26, #0x130]
0x04C053B0: 399f40f9  ldr x25, [x25, #0x138]
0x04C053B4: 18e745f9  ldr x24, [x24, #0xbc8]
0x04C053B8: f7da45f9  ldr x23, [x23, #0xbb0]
0x04C053BC: d6a240f9  ldr x22, [x22, #0x140]
0x04C053C0: f40301aa  mov x20, x1
0x04C053C4: f30300aa  mov x19, x0
0x04C053C8: 08030037  tbnz w8, #0, #0x4c05428
0x04C053CC: c05301f0  adrp x0, #0x7680000
0x04C053D0: 009440f9  ldr x0, [x0, #0x128]
0x04C053D4: 91ed9597  bl #0x3180a18
0x04C053D8: c05301b0  adrp x0, #0x767e000
0x04C053DC: 00d845f9  ldr x0, [x0, #0xbb0]
0x04C053E0: 8eed9597  bl #0x3180a18
0x04C053E4: c05301f0  adrp x0, #0x7680000
0x04C053E8: 009c40f9  ldr x0, [x0, #0x138]
0x04C053EC: 8bed9597  bl #0x3180a18
0x04C053F0: c05301f0  adrp x0, #0x7680000
0x04C053F4: 009840f9  ldr x0, [x0, #0x130]
0x04C053F8: 88ed9597  bl #0x3180a18
0x04C053FC: c05301b0  adrp x0, #0x767e000
0x04C05400: 00e445f9  ldr x0, [x0, #0xbc8]
0x04C05404: 85ed9597  bl #0x3180a18
0x04C05408: c05301f0  adrp x0, #0x7680000
0x04C0540C: 009040f9  ldr x0, [x0, #0x120]
0x04C05410: 82ed9597  bl #0x3180a18
0x04C05414: c05301f0  adrp x0, #0x7680000
0x04C05418: 00a040f9  ldr x0, [x0, #0x140]
0x04C0541C: 7fed9597  bl #0x3180a18
0x04C05420: 28008052  movz w8, #0x1
0x04C05424: 68fb3939  strb w8, [x27, #0xe7e]
0x04C05428: 800340f9  ldr x0, [x28]
0x04C0542C: 1dee9597  bl #0x3180ca0
0x04C05430: a10240f9  ldr x1, [x21]
0x04C05434: f50300aa  mov x21, x0
0x04C05438: 91be0a94  bl #0x4eb4e7c
0x04C0543C: e00313aa  mov x0, x19
0x04C05440: 158c07f8  str x21, [x0, #0x78]!
0x04C05444: e10315aa  mov x1, x21
0x04C05448: 5fed9597  bl #0x31809c4
0x04C0544C: 400340f9  ldr x0, [x26]
0x04C05450: 14ee9597  bl #0x3180ca0
0x04C05454: 210340f9  ldr x1, [x25]
0x04C05458: f50300aa  mov x21, x0
0x04C0545C: 136f0994  bl #0x4e610a8
0x04C05460: e00313aa  mov x0, x19
0x04C05464: 150c08f8  str x21, [x0, #0x80]!
0x04C05468: e10315aa  mov x1, x21
0x04C0546C: 56ed9597  bl #0x31809c4
0x04C05470: 000340f9  ldr x0, [x24]
0x04C05474: 0bee9597  bl #0x3180ca0
0x04C05478: e10240f9  ldr x1, [x23]
0x04C0547C: f50300aa  mov x21, x0
0x04C05480: 2a960894  bl #0x4e2ad28
0x04C05484: e00313aa  mov x0, x19
0x04C05488: 158c08f8  str x21, [x0, #0x88]!
0x04C0548C: e10315aa  mov x1, x21
0x04C05490: 4ded9597  bl #0x31809c4
0x04C05494: c00240f9  ldr x0, [x22]
0x04C05498: 02ee9597  bl #0x3180ca0
0x04C0549C: e1031faa  mov x1, xzr
0x04C054A0: f50300aa  mov x21, x0
0x04C054A4: 714d6e94  bl #0x6798a68
0x04C054A8: e00313aa  mov x0, x19
0x04C054AC: 150c09f8  str x21, [x0, #0x90]!
0x04C054B0: e10315aa  mov x1, x21
0x04C054B4: 44ed9597  bl #0x31809c4
0x04C054B8: 881240f9  ldr x8, [x20, #0x20]
0x04C054BC: e00313aa  mov x0, x19
0x04C054C0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C054C4: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C054C8: 086140f9  ldr x8, [x8, #0xc0]
0x04C054CC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C054D0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C054D4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C054D8: 019940f9  ldr x1, [x8, #0x130]
0x04C054DC: fe0746f8  ldr x30, [sp], #0x60
0x04C054E0: 949cff17  b #0x4bec730

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C0752C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, const MethodInfo_4C0752C* method);
; bytes=384 sha256=167d714c7e795500ae7c30daeabf207943fa2081fb749260635108d4515c9e84 status=arm64_complete_bound indexed_start=True
0x04C0752C: fe0f1af8  str x30, [sp, #-0x60]!
0x04C07530: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04C07534: fa6702a9  stp x26, x25, [sp, #0x20]
0x04C07538: f85f03a9  stp x24, x23, [sp, #0x30]
0x04C0753C: f65704a9  stp x22, x21, [sp, #0x40]
0x04C07540: f44f05a9  stp x20, x19, [sp, #0x50]
0x04C07544: 9b8801f0  adrp x27, #0x7d1a000
0x04C07548: dc5301b0  adrp x28, #0x7680000
0x04C0754C: d55301b0  adrp x21, #0x7680000
0x04C07550: da5301b0  adrp x26, #0x7680000
0x04C07554: d95301b0  adrp x25, #0x7680000
0x04C07558: b85301f0  adrp x24, #0x767e000
0x04C0755C: b75301f0  adrp x23, #0x767e000
0x04C07560: d65301b0  adrp x22, #0x7680000
0x04C07564: 9c9340f9  ldr x28, [x28, #0x120]
0x04C07568: b59640f9  ldr x21, [x21, #0x128]
0x04C0756C: 684b7a39  ldrb w8, [x27, #0xe92]
0x04C07570: 5a9b40f9  ldr x26, [x26, #0x130]
0x04C07574: 399f40f9  ldr x25, [x25, #0x138]
0x04C07578: 18e745f9  ldr x24, [x24, #0xbc8]
0x04C0757C: f7da45f9  ldr x23, [x23, #0xbb0]
0x04C07580: d6a240f9  ldr x22, [x22, #0x140]
0x04C07584: f40301aa  mov x20, x1
0x04C07588: f30300aa  mov x19, x0
0x04C0758C: 08030037  tbnz w8, #0, #0x4c075ec
0x04C07590: c05301b0  adrp x0, #0x7680000
0x04C07594: 009440f9  ldr x0, [x0, #0x128]
0x04C07598: 20e59597  bl #0x3180a18
0x04C0759C: a05301f0  adrp x0, #0x767e000
0x04C075A0: 00d845f9  ldr x0, [x0, #0xbb0]
0x04C075A4: 1de59597  bl #0x3180a18
0x04C075A8: c05301b0  adrp x0, #0x7680000
0x04C075AC: 009c40f9  ldr x0, [x0, #0x138]
0x04C075B0: 1ae59597  bl #0x3180a18
0x04C075B4: c05301b0  adrp x0, #0x7680000
0x04C075B8: 009840f9  ldr x0, [x0, #0x130]
0x04C075BC: 17e59597  bl #0x3180a18
0x04C075C0: a05301f0  adrp x0, #0x767e000
0x04C075C4: 00e445f9  ldr x0, [x0, #0xbc8]
0x04C075C8: 14e59597  bl #0x3180a18
0x04C075CC: c05301b0  adrp x0, #0x7680000
0x04C075D0: 009040f9  ldr x0, [x0, #0x120]
0x04C075D4: 11e59597  bl #0x3180a18
0x04C075D8: c05301b0  adrp x0, #0x7680000
0x04C075DC: 00a040f9  ldr x0, [x0, #0x140]
0x04C075E0: 0ee59597  bl #0x3180a18
0x04C075E4: 28008052  movz w8, #0x1
0x04C075E8: 684b3a39  strb w8, [x27, #0xe92]
0x04C075EC: 800340f9  ldr x0, [x28]
0x04C075F0: ace59597  bl #0x3180ca0
0x04C075F4: a10240f9  ldr x1, [x21]
0x04C075F8: f50300aa  mov x21, x0
0x04C075FC: 20b60a94  bl #0x4eb4e7c
0x04C07600: e00313aa  mov x0, x19
0x04C07604: 158c07f8  str x21, [x0, #0x78]!
0x04C07608: e10315aa  mov x1, x21
0x04C0760C: eee49597  bl #0x31809c4
0x04C07610: 400340f9  ldr x0, [x26]
0x04C07614: a3e59597  bl #0x3180ca0
0x04C07618: 210340f9  ldr x1, [x25]
0x04C0761C: f50300aa  mov x21, x0
0x04C07620: a2660994  bl #0x4e610a8
0x04C07624: e00313aa  mov x0, x19
0x04C07628: 150c08f8  str x21, [x0, #0x80]!
0x04C0762C: e10315aa  mov x1, x21
0x04C07630: e5e49597  bl #0x31809c4
0x04C07634: 000340f9  ldr x0, [x24]
0x04C07638: 9ae59597  bl #0x3180ca0
0x04C0763C: e10240f9  ldr x1, [x23]
0x04C07640: f50300aa  mov x21, x0
0x04C07644: b98d0894  bl #0x4e2ad28
0x04C07648: e00313aa  mov x0, x19
0x04C0764C: 158c08f8  str x21, [x0, #0x88]!
0x04C07650: e10315aa  mov x1, x21
0x04C07654: dce49597  bl #0x31809c4
0x04C07658: c00240f9  ldr x0, [x22]
0x04C0765C: 91e59597  bl #0x3180ca0
0x04C07660: e1031faa  mov x1, xzr
0x04C07664: f50300aa  mov x21, x0
0x04C07668: 00456e94  bl #0x6798a68
0x04C0766C: e00313aa  mov x0, x19
0x04C07670: 150c09f8  str x21, [x0, #0x90]!
0x04C07674: e10315aa  mov x1, x21
0x04C07678: d3e49597  bl #0x31809c4
0x04C0767C: 881240f9  ldr x8, [x20, #0x20]
0x04C07680: e00313aa  mov x0, x19
0x04C07684: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04C07688: f65744a9  ldp x22, x21, [sp, #0x40]
0x04C0768C: 086140f9  ldr x8, [x8, #0xc0]
0x04C07690: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04C07694: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04C07698: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04C0769C: 019940f9  ldr x1, [x8, #0x130]
0x04C076A0: 220040f9  ldr x2, [x1]
0x04C076A4: fe0746f8  ldr x30, [sp], #0x60
0x04C076A8: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C054E4 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$<GetUnlockedItemsOnBoard>b__24_1
; native signature: MergeEngine_Configuration_IMergeItem_o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object____GetUnlockedItemsOnBoard_b__24_1 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_ECS_Components_Items_LockedComponent_o* locked, const MethodInfo_4C054E4* method);
; bytes=172 sha256=793e2ca70ad5823a2185ad39f41e4991e329609ff114e7e24d6f536c69a967d4 status=arm64_complete_bound indexed_start=True
0x04C054E4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04C054E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C054EC: b58801b0  adrp x21, #0x7d1a000
0x04C054F0: a8fe7939  ldrb w8, [x21, #0xe7f]
0x04C054F4: f30301aa  mov x19, x1
0x04C054F8: f40300aa  mov x20, x0
0x04C054FC: c8000037  tbnz w8, #0, #0x4c05514
0x04C05500: a05301b0  adrp x0, #0x767a000
0x04C05504: 004c42f9  ldr x0, [x0, #0x498]
0x04C05508: 44ed9597  bl #0x3180a18
0x04C0550C: 28008052  movz w8, #0x1
0x04C05510: a8fe3939  strb w8, [x21, #0xe7f]
0x04C05514: 942240f9  ldr x20, [x20, #0x40]
0x04C05518: b40300b4  cbz x20, #0x4c0558c
0x04C0551C: aa5301b0  adrp x10, #0x767a000
0x04C05520: 880240f9  ldr x8, [x20]
0x04C05524: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C05528: 095d4279  ldrh w9, [x8, #0x12e]
0x04C0552C: 410140f9  ldr x1, [x10]
0x04C05530: 290100b4  cbz x9, #0x4c05554
0x04C05534: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05538: 4a210091  add x10, x10, #8
0x04C0553C: 4b815ff8  ldur x11, [x10, #-8]
0x04C05540: 7f0101eb  cmp x11, x1
0x04C05544: 00010054  b.eq #0x4c05564
0x04C05548: 290500f1  subs x9, x9, #1
0x04C0554C: 4a410091  add x10, x10, #0x10
0x04C05550: 61ffff54  b.ne #0x4c0553c
0x04C05554: 82028052  movz w2, #0x14
0x04C05558: e00314aa  mov x0, x20
0x04C0555C: 6d459597  bl #0x3156b10
0x04C05560: 05000014  b #0x4c05574
0x04C05564: 490140b9  ldr w9, [x10]
0x04C05568: 29510011  add w9, w9, #0x14
0x04C0556C: 08d1298b  add x8, x8, w9, sxtw #4
0x04C05570: 00e10491  add x0, x8, #0x138
0x04C05574: 030840a9  ldp x3, x2, [x0]
0x04C05578: e00314aa  mov x0, x20
0x04C0557C: e10313aa  mov x1, x19
0x04C05580: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C05584: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04C05588: 60001fd6  br x3
0x04C0558C: c8ed9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C076AC | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$<GetUnlockedItemsOnBoard>b__24_1
; native signature: MergeEngine_Configuration_IMergeItem_o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType____GetUnlockedItemsOnBoard_b__24_1 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_ECS_Components_Items_LockedComponent_o* locked, const MethodInfo_4C076AC* method);
; bytes=172 sha256=2378eccd56d116609cb35bf1378c2f9a5cd8231b5ab641babd5dafdb905e4bb7 status=arm64_complete_bound indexed_start=True
0x04C076AC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04C076B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C076B4: 958801f0  adrp x21, #0x7d1a000
0x04C076B8: a84e7a39  ldrb w8, [x21, #0xe93]
0x04C076BC: f30301aa  mov x19, x1
0x04C076C0: f40300aa  mov x20, x0
0x04C076C4: c8000037  tbnz w8, #0, #0x4c076dc
0x04C076C8: 805301f0  adrp x0, #0x767a000
0x04C076CC: 004c42f9  ldr x0, [x0, #0x498]
0x04C076D0: d2e49597  bl #0x3180a18
0x04C076D4: 28008052  movz w8, #0x1
0x04C076D8: a84e3a39  strb w8, [x21, #0xe93]
0x04C076DC: 942240f9  ldr x20, [x20, #0x40]
0x04C076E0: b40300b4  cbz x20, #0x4c07754
0x04C076E4: 8a5301f0  adrp x10, #0x767a000
0x04C076E8: 880240f9  ldr x8, [x20]
0x04C076EC: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C076F0: 095d4279  ldrh w9, [x8, #0x12e]
0x04C076F4: 410140f9  ldr x1, [x10]
0x04C076F8: 290100b4  cbz x9, #0x4c0771c
0x04C076FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C07700: 4a210091  add x10, x10, #8
0x04C07704: 4b815ff8  ldur x11, [x10, #-8]
0x04C07708: 7f0101eb  cmp x11, x1
0x04C0770C: 00010054  b.eq #0x4c0772c
0x04C07710: 290500f1  subs x9, x9, #1
0x04C07714: 4a410091  add x10, x10, #0x10
0x04C07718: 61ffff54  b.ne #0x4c07704
0x04C0771C: 82028052  movz w2, #0x14
0x04C07720: e00314aa  mov x0, x20
0x04C07724: fb3c9597  bl #0x3156b10
0x04C07728: 05000014  b #0x4c0773c
0x04C0772C: 490140b9  ldr w9, [x10]
0x04C07730: 29510011  add w9, w9, #0x14
0x04C07734: 08d1298b  add x8, x8, w9, sxtw #4
0x04C07738: 00e10491  add x0, x8, #0x138
0x04C0773C: 030840a9  ldp x3, x2, [x0]
0x04C07740: e00314aa  mov x0, x20
0x04C07744: e10313aa  mov x1, x19
0x04C07748: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C0774C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04C07750: 60001fd6  br x3
0x04C07754: 56e59597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C05590 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$<GetToolGraphsFromItems>b__25_0
; native signature: MergeEngine_Configuration_IMergeGraphItem_o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object____GetToolGraphsFromItems_b__25_0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeItem_o* item, const MethodInfo_4C05590* method);
; bytes=288 sha256=c151f5d47dde13a2a4ca0aec9dad02757b7d7f927b5a988e0b526818ae136584 status=arm64_complete_bound indexed_start=True
0x04C05590: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04C05594: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C05598: b58801b0  adrp x21, #0x7d1a000
0x04C0559C: a8027a39  ldrb w8, [x21, #0xe80]
0x04C055A0: f40301aa  mov x20, x1
0x04C055A4: f30300aa  mov x19, x0
0x04C055A8: 28010037  tbnz w8, #0, #0x4c055cc
0x04C055AC: a05301b0  adrp x0, #0x767a000
0x04C055B0: 004c42f9  ldr x0, [x0, #0x498]
0x04C055B4: 19ed9597  bl #0x3180a18
0x04C055B8: a0530190  adrp x0, #0x7679000
0x04C055BC: 001044f9  ldr x0, [x0, #0x820]
0x04C055C0: 16ed9597  bl #0x3180a18
0x04C055C4: 28008052  movz w8, #0x1
0x04C055C8: a8023a39  strb w8, [x21, #0xe80]
0x04C055CC: 140700b4  cbz x20, #0x4c056ac
0x04C055D0: aa530190  adrp x10, #0x7679000
0x04C055D4: 880240f9  ldr x8, [x20]
0x04C055D8: 4a1144f9  ldr x10, [x10, #0x820]
0x04C055DC: 732240f9  ldr x19, [x19, #0x40]
0x04C055E0: 095d4279  ldrh w9, [x8, #0x12e]
0x04C055E4: 410140f9  ldr x1, [x10]
0x04C055E8: 290100b4  cbz x9, #0x4c0560c
0x04C055EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C055F0: 4a210091  add x10, x10, #8
0x04C055F4: 4b815ff8  ldur x11, [x10, #-8]
0x04C055F8: 7f0101eb  cmp x11, x1
0x04C055FC: 00010054  b.eq #0x4c0561c
0x04C05600: 290500f1  subs x9, x9, #1
0x04C05604: 4a410091  add x10, x10, #0x10
0x04C05608: 61ffff54  b.ne #0x4c055f4
0x04C0560C: e00314aa  mov x0, x20
0x04C05610: e2031f2a  mov w2, wzr
0x04C05614: 3f459597  bl #0x3156b10
0x04C05618: 04000014  b #0x4c05628
0x04C0561C: 490180b9  ldrsw x9, [x10]
0x04C05620: 0811098b  add x8, x8, x9, lsl #4
0x04C05624: 00e10491  add x0, x8, #0x138
0x04C05628: 080440a9  ldp x8, x1, [x0]
0x04C0562C: e00314aa  mov x0, x20
0x04C05630: 00013fd6  blr x8
0x04C05634: d30300b4  cbz x19, #0x4c056ac
0x04C05638: aa5301b0  adrp x10, #0x767a000
0x04C0563C: 680240f9  ldr x8, [x19]
0x04C05640: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C05644: f40300aa  mov x20, x0
0x04C05648: 095d4279  ldrh w9, [x8, #0x12e]
0x04C0564C: 410140f9  ldr x1, [x10]
0x04C05650: 290100b4  cbz x9, #0x4c05674
0x04C05654: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C05658: 4a210091  add x10, x10, #8
0x04C0565C: 4b815ff8  ldur x11, [x10, #-8]
0x04C05660: 7f0101eb  cmp x11, x1
0x04C05664: 00010054  b.eq #0x4c05684
0x04C05668: 290500f1  subs x9, x9, #1
0x04C0566C: 4a410091  add x10, x10, #0x10
0x04C05670: 61ffff54  b.ne #0x4c0565c
0x04C05674: 82008052  movz w2, #0x4
0x04C05678: e00313aa  mov x0, x19
0x04C0567C: 25459597  bl #0x3156b10
0x04C05680: 05000014  b #0x4c05694
0x04C05684: 490140b9  ldr w9, [x10]
0x04C05688: 29110011  add w9, w9, #4
0x04C0568C: 08d1298b  add x8, x8, w9, sxtw #4
0x04C05690: 00e10491  add x0, x8, #0x138
0x04C05694: 030840a9  ldp x3, x2, [x0]
0x04C05698: e00313aa  mov x0, x19
0x04C0569C: e10314aa  mov x1, x20
0x04C056A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C056A4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04C056A8: 60001fd6  br x3
0x04C056AC: 80ed9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C07758 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$<GetToolGraphsFromItems>b__25_0
; native signature: MergeEngine_Configuration_IMergeGraphItem_o* MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType____GetToolGraphsFromItems_b__25_0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeItem_o* item, const MethodInfo_4C07758* method);
; bytes=288 sha256=4ab2d66e6832a96c814c3f3aad7ac80f8a11f54e347882d49ae471242701b5de status=arm64_complete_bound indexed_start=True
0x04C07758: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04C0775C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C07760: 958801f0  adrp x21, #0x7d1a000
0x04C07764: a8527a39  ldrb w8, [x21, #0xe94]
0x04C07768: f40301aa  mov x20, x1
0x04C0776C: f30300aa  mov x19, x0
0x04C07770: 28010037  tbnz w8, #0, #0x4c07794
0x04C07774: 805301f0  adrp x0, #0x767a000
0x04C07778: 004c42f9  ldr x0, [x0, #0x498]
0x04C0777C: a7e49597  bl #0x3180a18
0x04C07780: 805301d0  adrp x0, #0x7679000
0x04C07784: 001044f9  ldr x0, [x0, #0x820]
0x04C07788: a4e49597  bl #0x3180a18
0x04C0778C: 28008052  movz w8, #0x1
0x04C07790: a8523a39  strb w8, [x21, #0xe94]
0x04C07794: 140700b4  cbz x20, #0x4c07874
0x04C07798: 8a5301d0  adrp x10, #0x7679000
0x04C0779C: 880240f9  ldr x8, [x20]
0x04C077A0: 4a1144f9  ldr x10, [x10, #0x820]
0x04C077A4: 732240f9  ldr x19, [x19, #0x40]
0x04C077A8: 095d4279  ldrh w9, [x8, #0x12e]
0x04C077AC: 410140f9  ldr x1, [x10]
0x04C077B0: 290100b4  cbz x9, #0x4c077d4
0x04C077B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C077B8: 4a210091  add x10, x10, #8
0x04C077BC: 4b815ff8  ldur x11, [x10, #-8]
0x04C077C0: 7f0101eb  cmp x11, x1
0x04C077C4: 00010054  b.eq #0x4c077e4
0x04C077C8: 290500f1  subs x9, x9, #1
0x04C077CC: 4a410091  add x10, x10, #0x10
0x04C077D0: 61ffff54  b.ne #0x4c077bc
0x04C077D4: e00314aa  mov x0, x20
0x04C077D8: e2031f2a  mov w2, wzr
0x04C077DC: cd3c9597  bl #0x3156b10
0x04C077E0: 04000014  b #0x4c077f0
0x04C077E4: 490180b9  ldrsw x9, [x10]
0x04C077E8: 0811098b  add x8, x8, x9, lsl #4
0x04C077EC: 00e10491  add x0, x8, #0x138
0x04C077F0: 080440a9  ldp x8, x1, [x0]
0x04C077F4: e00314aa  mov x0, x20
0x04C077F8: 00013fd6  blr x8
0x04C077FC: d30300b4  cbz x19, #0x4c07874
0x04C07800: 8a5301f0  adrp x10, #0x767a000
0x04C07804: 680240f9  ldr x8, [x19]
0x04C07808: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C0780C: f40300aa  mov x20, x0
0x04C07810: 095d4279  ldrh w9, [x8, #0x12e]
0x04C07814: 410140f9  ldr x1, [x10]
0x04C07818: 290100b4  cbz x9, #0x4c0783c
0x04C0781C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C07820: 4a210091  add x10, x10, #8
0x04C07824: 4b815ff8  ldur x11, [x10, #-8]
0x04C07828: 7f0101eb  cmp x11, x1
0x04C0782C: 00010054  b.eq #0x4c0784c
0x04C07830: 290500f1  subs x9, x9, #1
0x04C07834: 4a410091  add x10, x10, #0x10
0x04C07838: 61ffff54  b.ne #0x4c07824
0x04C0783C: 82008052  movz w2, #0x4
0x04C07840: e00313aa  mov x0, x19
0x04C07844: b33c9597  bl #0x3156b10
0x04C07848: 05000014  b #0x4c0785c
0x04C0784C: 490140b9  ldr w9, [x10]
0x04C07850: 29110011  add w9, w9, #4
0x04C07854: 08d1298b  add x8, x8, w9, sxtw #4
0x04C07858: 00e10491  add x0, x8, #0x138
0x04C0785C: 030840a9  ldp x3, x2, [x0]
0x04C07860: e00313aa  mov x0, x19
0x04C07864: e10314aa  mov x1, x20
0x04C07868: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C0786C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04C07870: 60001fd6  br x3
0x04C07874: 0ee59597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C056B0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<object>$$<GetToolGraphsFromItems>b__25_1
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_object____GetToolGraphsFromItems_b__25_1 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeGraphItem_o* graph, const MethodInfo_4C056B0* method);
; bytes=88 sha256=dea5315c5dbdd8c097615cb1aa7a38568fa48d7112a166051c02be4a2928a0f4 status=arm64_complete_bound indexed_start=True
0x04C056B0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04C056B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C056B8: b58801b0  adrp x21, #0x7d1a000
0x04C056BC: a8067a39  ldrb w8, [x21, #0xe81]
0x04C056C0: f30301aa  mov x19, x1
0x04C056C4: f40300aa  mov x20, x0
0x04C056C8: c8000037  tbnz w8, #0, #0x4c056e0
0x04C056CC: c05301f0  adrp x0, #0x7680000
0x04C056D0: 00a440f9  ldr x0, [x0, #0x148]
0x04C056D4: d1ec9597  bl #0x3180a18
0x04C056D8: 28008052  movz w8, #0x1
0x04C056DC: a8063a39  strb w8, [x21, #0xe81]
0x04C056E0: 803e40f9  ldr x0, [x20, #0x78]
0x04C056E4: 000100b4  cbz x0, #0x4c05704
0x04C056E8: c85301f0  adrp x8, #0x7680000
0x04C056EC: 08a540f9  ldr x8, [x8, #0x148]
0x04C056F0: e10313aa  mov x1, x19
0x04C056F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C056F8: 020140f9  ldr x2, [x8]
0x04C056FC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04C05700: d3c10a14  b #0x4eb5e4c
0x04C05704: 6aed9597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C07878 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<__Il2CppFullySharedGenericType>$$<GetToolGraphsFromItems>b__25_1
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___Il2CppFullySharedGenericType____GetToolGraphsFromItems_b__25_1 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T__o* __this, MergeEngine_Configuration_IMergeGraphItem_o* graph, const MethodInfo_4C07878* method);
; bytes=120 sha256=9885acf8389bb60fc52b9797f03686a99e74d69c2e15f74893452593684919e8 status=arm64_complete_bound indexed_start=True
0x04C07878: fe0f1df8  str x30, [sp, #-0x30]!
0x04C0787C: f65701a9  stp x22, x21, [sp, #0x10]
0x04C07880: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C07884: 968801f0  adrp x22, #0x7d1a000
0x04C07888: c8567a39  ldrb w8, [x22, #0xe95]
0x04C0788C: f50302aa  mov x21, x2
0x04C07890: f30301aa  mov x19, x1
0x04C07894: f40300aa  mov x20, x0
0x04C07898: c8000037  tbnz w8, #0, #0x4c078b0
0x04C0789C: c05301b0  adrp x0, #0x7680000
0x04C078A0: 00a440f9  ldr x0, [x0, #0x148]
0x04C078A4: 5de49597  bl #0x3180a18
0x04C078A8: 28008052  movz w8, #0x1
0x04C078AC: c8563a39  strb w8, [x22, #0xe95]
0x04C078B0: a81240f9  ldr x8, [x21, #0x20]
0x04C078B4: e00314aa  mov x0, x20
0x04C078B8: 086140f9  ldr x8, [x8, #0xc0]
0x04C078BC: 012540f9  ldr x1, [x8, #0x48]
0x04C078C0: 280040f9  ldr x8, [x1]
0x04C078C4: 00013fd6  blr x8
0x04C078C8: 200100b4  cbz x0, #0x4c078ec
0x04C078CC: c85301b0  adrp x8, #0x7680000
0x04C078D0: 08a540f9  ldr x8, [x8, #0x148]
0x04C078D4: e10313aa  mov x1, x19
0x04C078D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C078DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C078E0: 020140f9  ldr x2, [x8]
0x04C078E4: fe0743f8  ldr x30, [sp], #0x30
0x04C078E8: 59b90a14  b #0x4eb5e4c
0x04C078EC: f0e49597  bl #0x3180cac


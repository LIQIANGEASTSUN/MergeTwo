; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 982 MergeEngine.ECS.Systems.Items.UndoOperationBase<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x466981C | MergeEngine.ECS.Systems.Items.UndoOperationBase<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_UndoOperationBase_object____ctor (MergeEngine_ECS_Systems_Items_UndoOperationBase_T__o* __this, Il2CppObject* data, System_Action_T__o* performUndoCallback, const MethodInfo_466981C* method);
; bytes=68 sha256=d08674dc0ab567c54f554f823648cebe841a5b7b14eb35c978a66376481ea879 status=arm64_complete_bound indexed_start=True
0x0466981C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04669820: f44f01a9  stp x20, x19, [sp, #0x10]
0x04669824: f40301aa  mov x20, x1
0x04669828: e1031faa  mov x1, xzr
0x0466982C: f30302aa  mov x19, x2
0x04669830: f50300aa  mov x21, x0
0x04669834: 72c34194  bl #0x56da5fc
0x04669838: e00315aa  mov x0, x21
0x0466983C: 140c01f8  str x20, [x0, #0x10]!
0x04669840: e10314aa  mov x1, x20
0x04669844: 605cac97  bl #0x31809c4
0x04669848: b38e01f8  str x19, [x21, #0x18]!
0x0466984C: e10313aa  mov x1, x19
0x04669850: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04669854: e00315aa  mov x0, x21
0x04669858: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0466985C: 5a5cac17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4669860 | MergeEngine.ECS.Systems.Items.UndoOperationBase<object>$$PerformUndo
; native signature: void MergeEngine_ECS_Systems_Items_UndoOperationBase_object___PerformUndo (MergeEngine_ECS_Systems_Items_UndoOperationBase_T__o* __this, const MethodInfo_4669860* method);
; bytes=40 sha256=d1b0115475ef727298a43282a6da8c0ed47843a5b0d5dbf44d8c251553a67f7a status=arm64_complete_bound indexed_start=True
0x04669860: fe0f1ff8  str x30, [sp, #-0x10]!
0x04669864: 080c40f9  ldr x8, [x0, #0x18]
0x04669868: e80000b4  cbz x8, #0x4669884
0x0466986C: 010840f9  ldr x1, [x0, #0x10]
0x04669870: 030d40f9  ldr x3, [x8, #0x18]
0x04669874: 002140f9  ldr x0, [x8, #0x40]
0x04669878: 021540f9  ldr x2, [x8, #0x28]
0x0466987C: fe0741f8  ldr x30, [sp], #0x10
0x04669880: 60001fd6  br x3
0x04669884: 0a5dac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4669888 | MergeEngine.ECS.Systems.Items.UndoOperationBase<object>$$GetMergeItem
; native signature: MergeEngine_Configuration_IMergeItem_o* MergeEngine_ECS_Systems_Items_UndoOperationBase_object___GetMergeItem (MergeEngine_ECS_Systems_Items_UndoOperationBase_T__o* __this, const MethodInfo_4669888* method);
; bytes=28 sha256=cad6238c37466fe4589e2e3f0eab7fb14aabf806d19e9a8cfbff7d83d0d9c713 status=arm64_complete_bound indexed_start=True
0x04669888: fe0f1ff8  str x30, [sp, #-0x10]!
0x0466988C: 080840f9  ldr x8, [x0, #0x10]
0x04669890: 880000b4  cbz x8, #0x46698a0
0x04669894: 000d40f9  ldr x0, [x8, #0x18]
0x04669898: fe0741f8  ldr x30, [sp], #0x10
0x0466989C: c0035fd6  ret
0x046698A0: 035dac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x46698A4 | MergeEngine.ECS.Systems.Items.UndoOperationBase<object>$$GetEntity
; native signature: MergeEngine_ECS_Entity_o* MergeEngine_ECS_Systems_Items_UndoOperationBase_object___GetEntity (MergeEngine_ECS_Systems_Items_UndoOperationBase_T__o* __this, const MethodInfo_46698A4* method);
; bytes=28 sha256=5fa8a7d9cd3a2ab9a5290906f6e5a0261a4522f453ad7c3a01fec0de64b2e815 status=arm64_complete_bound indexed_start=True
0x046698A4: fe0f1ff8  str x30, [sp, #-0x10]!
0x046698A8: 080840f9  ldr x8, [x0, #0x10]
0x046698AC: 880000b4  cbz x8, #0x46698bc
0x046698B0: 000940f9  ldr x0, [x8, #0x10]
0x046698B4: fe0741f8  ldr x30, [sp], #0x10
0x046698B8: c0035fd6  ret
0x046698BC: fc5cac97  bl #0x3180cac


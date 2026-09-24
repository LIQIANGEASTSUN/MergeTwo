/* Ghidra 12.1.2 native pseudocode; RVA 0x4D91AC4; MergeEngine.Model.Configuration.ConfigurationModelBase<TData>.InitializeModel; status ok */


void MergeEngine_Model_Configuration_ConfigurationModelBase_TData___InitializeModel
               (long param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long alStack_90 [5];
  undefined8 ****ppppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  uVar3 = func_0x03280ca0(lVar4);
  plVar5 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  lVar4 = *plVar5;
  (**(code **)plVar5[2])(uVar3,param_1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04e91b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18))(param_1,uVar3);
    return;
  }
  auVar10 = func_0x03280cac();
  ppppuStack_68 = auVar10._8_8_;
  plVar5 = auVar10._0_8_;
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(lVar4 + 0x20);
  lVar6 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
  lVar4 = -((ulong)*(uint *)(lVar6 + 0xfc) + 0xf & 0x1fffffff0);
  plVar8 = (long *)((long)alStack_90 + lVar4 + 0x20);
  pppppuVar1 = (undefined8 *****)ppppuStack_68;
  if (-1 < *(int *)(lVar6 + 0x28)) {
    pppppuVar1 = &ppppuStack_68;
  }
  func_0x072ce970(plVar8,pppppuVar1);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x20) + 0x28)) {
    plVar8 = (long *)*plVar8;
  }
  lVar6 = *(long *)(*plVar5 + 0x270);
  lStack_60 = (long)plVar8;
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar5,&lStack_60,plVar8);
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return;
  }
  auVar10 = func_0x072ce990();
  lVar9 = auVar10._8_8_;
  lVar6 = auVar10._0_8_;
  *(code **)((long)alStack_90 + lVar4) =
       MergeEngine_Model_Configuration_ConfigurationModelBase_TData___DisposeModel;
  *(long *)((long)alStack_90 + lVar4 + 8) = lVar2;
  *(long **)((long)alStack_90 + lVar4 + 0x10) = plVar8;
  *(long **)((long)alStack_90 + lVar4 + 0x18) = plVar5;
  lVar4 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  uVar3 = func_0x03280ca0(lVar4);
  puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x20) + 0xc0);
  (**(code **)puVar7[2])(uVar3,lVar6,*puVar7);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04e91c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x38))(lVar6,uVar3);
    return;
  }
  func_0x03280cac();
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x4D91B48; MergeEngine.Model.Configuration.ConfigurationModelBase<TData>.DataLoaded; status ok */


void MergeEngine_Model_Configuration_ConfigurationModelBase_TData___DataLoaded
               (long *param_1,undefined8 *****param_2,long param_3)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long alStack_70 [5];
  undefined8 ****ppppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar5 = tpidr_el0;
  lStack_38 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
  lVar2 = -((ulong)*(uint *)(lVar4 + 0xfc) + 0xf & 0x1fffffff0);
  plVar7 = (long *)((long)alStack_70 + lVar2 + 0x20);
  pppppuVar1 = param_2;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    pppppuVar1 = &ppppuStack_48;
  }
  ppppuStack_48 = param_2;
  func_0x072ce970(plVar7,pppppuVar1);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x20) + 0x28)) {
    plVar7 = (long *)*plVar7;
  }
  lVar4 = *(long *)(*param_1 + 0x270);
  lStack_40 = (long)plVar7;
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,param_1,&lStack_40,plVar7);
  if (*(long *)(lVar5 + 0x28) == lStack_38) {
    return;
  }
  auVar9 = func_0x072ce990();
  lVar8 = auVar9._8_8_;
  lVar4 = auVar9._0_8_;
  *(undefined8 *)((long)alStack_70 + lVar2) = 0x4e91c08;
  *(long *)((long)alStack_70 + lVar2 + 8) = lVar5;
  *(long **)((long)alStack_70 + lVar2 + 0x10) = plVar7;
  *(long **)((long)alStack_70 + lVar2 + 0x18) = param_1;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c(lVar5);
  }
  uVar3 = func_0x03280ca0(lVar5);
  puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x20) + 0xc0);
  (**(code **)puVar6[2])(uVar3,lVar4,*puVar6);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04e91c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x38))(lVar4,uVar3);
    return;
  }
  func_0x03280cac();
  return;
}


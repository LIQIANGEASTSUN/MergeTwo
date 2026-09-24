/* Ghidra 12.1.2 native pseudocode; RVA 0x4D91C08; MergeEngine.Model.Configuration.ConfigurationModelBase<TData>.DisposeModel; status ok */


void MergeEngine_Model_Configuration_ConfigurationModelBase_TData___DisposeModel
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c(lVar2);
  }
  uVar1 = func_0x03280ca0(lVar2);
  puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0);
  (**(code **)puVar3[2])(uVar1,param_1,*puVar3);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04e91c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38))(param_1,uVar1);
    return;
  }
  func_0x03280cac();
  return;
}


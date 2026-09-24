/* Ghidra 12.1.2 native pseudocode; RVA 0x4C057F0; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.OnWillProcessComponents; status ok */


void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___OnWillProcessComponents
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x0325681c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x0325681c();
      lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c(lVar2);
    }
    lVar1 = func_0x03280ca0(lVar2);
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    (*(code *)**(undefined8 **)(lVar2 + 0x30))(lVar1,uVar4,*(undefined8 *)(lVar2 + 0x28));
    lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
      lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar2 + 0xb8) + 8,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x04d05940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38))(param_2,lVar1);
  return;
}


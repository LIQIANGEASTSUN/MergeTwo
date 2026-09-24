/* Ghidra 12.1.2 native pseudocode; RVA 0x68FDEC8; MergeEngine.ECS.Components.Items.StackingComponent.DecrementStackSize; status ok */


void MergeEngine_ECS_Components_Items_StackingComponent__DecrementStackSize
               (long param_1,int param_2)

{
  undefined4 uVar1;
  
  param_2 = *(int *)(param_1 + 0x28) - param_2;
  if ((bRam0000000007e298bd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e298bd = 1;
  }
  if (*(int *)(param_1 + 0x28) != param_2) {
    if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar1 = func_0x05797438(1,param_2,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  return;
}


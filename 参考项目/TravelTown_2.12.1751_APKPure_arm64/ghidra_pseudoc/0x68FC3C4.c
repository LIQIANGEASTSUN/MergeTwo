/* Ghidra 12.1.2 native pseudocode; RVA 0x68FC3C4; MergeEngine.ECS.Components.Items.ExpendableComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_ExpendableComponent__LoadComponent(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  lVar1 = func_0x03280cac();
  if ((bRam0000000007e2989f & 1) == 0) {
    func_0x03280a18(PTR_DAT_078266b8);
    bRam0000000007e2989f = 1;
  }
  if (*(long *)(lVar1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(lVar1 + 0x28) + 0x10) = *(undefined4 *)(lVar1 + 0x30);
    return;
  }
  func_0x03280cac();
  return;
}


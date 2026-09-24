/* Ghidra 12.1.2 native pseudocode; RVA 0x68FC3E0; MergeEngine.ECS.Components.Items.ExpendableComponent.OnBeforeSerialize; status ok */


void MergeEngine_ECS_Components_Items_ExpendableComponent__OnBeforeSerialize(long param_1)

{
  if ((bRam0000000007e2989f & 1) == 0) {
    func_0x03280a18(PTR_DAT_078266b8);
    bRam0000000007e2989f = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10) = *(undefined4 *)(param_1 + 0x30);
    return;
  }
  func_0x03280cac();
  return;
}


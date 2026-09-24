/* Ghidra 12.1.2 native pseudocode; RVA 0x68FB9B8; MergeEngine.ECS.Components.Items.ChargableComponent.OnBeforeSerialize; status ok */


void MergeEngine_ECS_Components_Items_ChargableComponent__OnBeforeSerialize(long param_1)

{
  if ((bRam0000000007e2988c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826648);
    bRam0000000007e2988c = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10) = *(undefined4 *)(param_1 + 0x38);
    return;
  }
  func_0x03280cac();
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x68FDC9C; MergeEngine.ECS.Components.Items.PositionComponent.OnBeforeSerialize; status ok */


void MergeEngine_ECS_Components_Items_PositionComponent__OnBeforeSerialize(long param_1)

{
  if ((bRam0000000007e298b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078267a0);
    bRam0000000007e298b9 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10) = *(undefined8 *)(param_1 + 0x30);
    return;
  }
  func_0x03280cac();
  return;
}


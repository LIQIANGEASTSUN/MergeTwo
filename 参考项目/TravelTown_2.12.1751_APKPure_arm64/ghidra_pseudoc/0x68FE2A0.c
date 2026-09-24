/* Ghidra 12.1.2 native pseudocode; RVA 0x68FE2A0; MergeEngine.ECS.Components.Items.TimeLockComponent.OnBeforeSerialize; status ok */


void MergeEngine_ECS_Components_Items_TimeLockComponent__OnBeforeSerialize(long param_1)

{
  long lVar1;
  
  if ((bRam0000000007e298c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078267d0);
    bRam0000000007e298c1 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(param_1 + 0x44);
    *(undefined1 *)(lVar1 + 0x19) = *(undefined1 *)(param_1 + 0x4d);
    return;
  }
  func_0x03280cac();
  return;
}


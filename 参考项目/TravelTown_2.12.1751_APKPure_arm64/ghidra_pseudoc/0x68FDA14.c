/* Ghidra 12.1.2 native pseudocode; RVA 0x68FDA14; MergeEngine.ECS.Components.Items.LockedComponent.OnBeforeSerialize; status ok */


void MergeEngine_ECS_Components_Items_LockedComponent__OnBeforeSerialize(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000007e298b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826778);
    bRam0000000007e298b4 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x11) = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)(lVar1 + 0x12) = *(undefined1 *)(param_1 + 0x31);
    *(undefined1 *)(lVar1 + 0x10) = *(undefined1 *)(param_1 + 0x33);
    *(undefined1 *)(lVar1 + 0x13) = *(undefined1 *)(param_1 + 0x32);
    *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_1 + 0x44);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(lVar1 + 0x54) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(lVar1 + 0x4c) = uVar2;
    return;
  }
  func_0x03280cac();
  return;
}


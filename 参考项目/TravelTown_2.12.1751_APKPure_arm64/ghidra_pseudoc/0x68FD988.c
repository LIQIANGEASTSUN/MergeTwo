/* Ghidra 12.1.2 native pseudocode; RVA 0x68FD988; MergeEngine.ECS.Components.Items.LockedComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_LockedComponent__LoadComponent(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x12);
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x6c) = 1;
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x34) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x40);
    func_0x032809c4((undefined8 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x13);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x28);
    return;
  }
  lVar1 = func_0x03280cac();
  if ((bRam0000000007e298b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826778);
    bRam0000000007e298b4 = 1;
  }
  lVar2 = *(long *)(lVar1 + 0x28);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x11) = *(undefined1 *)(lVar1 + 0x30);
    *(undefined1 *)(lVar2 + 0x12) = *(undefined1 *)(lVar1 + 0x31);
    *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x33);
    *(undefined1 *)(lVar2 + 0x13) = *(undefined1 *)(lVar1 + 0x32);
    *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar1 + 0x44);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x70);
    uVar3 = *(undefined8 *)(lVar1 + 0x34);
    *(undefined8 *)(lVar2 + 0x54) = *(undefined8 *)(lVar1 + 0x3c);
    *(undefined8 *)(lVar2 + 0x4c) = uVar3;
    return;
  }
  func_0x03280cac();
  return;
}


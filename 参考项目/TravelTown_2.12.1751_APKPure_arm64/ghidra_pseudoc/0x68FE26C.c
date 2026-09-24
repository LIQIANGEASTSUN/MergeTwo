/* Ghidra 12.1.2 native pseudocode; RVA 0x68FE26C; MergeEngine.ECS.Components.Items.TimeLockComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_TimeLockComponent__LoadComponent(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(undefined1 *)(param_1 + 0x44) = uVar1;
    *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x19);
    return;
  }
  lVar2 = func_0x03280cac();
  if ((bRam0000000007e298c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078267d0);
    bRam0000000007e298c1 = 1;
  }
  lVar3 = *(long *)(lVar2 + 0x28);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)(lVar2 + 0x44);
    *(undefined1 *)(lVar3 + 0x19) = *(undefined1 *)(lVar2 + 0x4d);
    return;
  }
  func_0x03280cac();
  return;
}


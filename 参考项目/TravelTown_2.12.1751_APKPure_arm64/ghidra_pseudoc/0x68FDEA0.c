/* Ghidra 12.1.2 native pseudocode; RVA 0x68FDEA0; MergeEngine.ECS.Components.Items.StackingComponent.LoadComponent; status ok */


void MergeEngine_ECS_Components_Items_StackingComponent__LoadComponent(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auVar4 [12];
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  auVar4 = func_0x03280cac();
  lVar3 = auVar4._0_8_;
  iVar1 = *(int *)(lVar3 + 0x28) + auVar4._8_4_;
  if ((bRam0000000007e298bd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e298bd = 1;
  }
  if (*(int *)(lVar3 + 0x28) != iVar1) {
    if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar2 = func_0x05797438(1,iVar1,0);
    *(undefined4 *)(lVar3 + 0x28) = uVar2;
  }
  return;
}


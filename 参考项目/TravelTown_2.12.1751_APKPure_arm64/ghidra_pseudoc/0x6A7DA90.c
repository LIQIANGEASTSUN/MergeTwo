/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7DA90; Merger.MergeBoard.Models.MergeBoardSelectedItemModel.SetSelectedItem; status ok */


long Merger_MergeBoard_Models_MergeBoardSelectedItemModel__SetSelectedItem
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_07831990;
  if ((bRam0000000007e2a744 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831998);
    func_0x03280a18(PTR_DAT_07831990);
    bRam0000000007e2a744 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x048cbf28(&uStack_40,param_2,param_3,*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    lVar5 = func_0x0432154c(lVar5,uStack_40,uStack_38,*(undefined8 *)PTR_DAT_07831998);
    return lVar5;
  }
  lVar3 = func_0x03280cac();
  puVar1 = PTR_DAT_07831990;
  pcStack_60 = Merger_MergeBoard_Models_MergeBoardSelectedItemModel__ClearSelectedItem;
  lStack_58 = lVar5;
  uStack_50 = param_2;
  uStack_48 = param_3;
  if ((bRam0000000007e2a745 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831998);
    func_0x03280a18(PTR_DAT_07831990);
    bRam0000000007e2a745 = 1;
  }
  lVar5 = *(long *)(lVar3 + 0x28);
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x048cbf28(&uStack_70,0,0,*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    lVar5 = func_0x0432154c(lVar5,uStack_70,uStack_68,*(undefined8 *)PTR_DAT_07831998);
    return lVar5;
  }
  lVar5 = func_0x03280cac();
  puVar2 = PTR_DAT_078319a8;
  puVar1 = PTR_DAT_078319a0;
  if ((bRam0000000007e2a746 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078319a8);
    func_0x03280a18(PTR_DAT_078319a0);
    bRam0000000007e2a746 = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04321530(uVar4,0,0,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  func_0x032809c4((undefined8 *)(lVar5 + 0x28),uVar4);
  return lVar5;
}


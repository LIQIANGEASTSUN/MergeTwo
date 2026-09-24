/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7DB30; Merger.MergeBoard.Models.MergeBoardSelectedItemModel.ClearSelectedItem; status ok */


long Merger_MergeBoard_Models_MergeBoardSelectedItemModel__ClearSelectedItem(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_07831990;
  if ((bRam0000000007e2a745 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831998);
    func_0x03280a18(PTR_DAT_07831990);
    bRam0000000007e2a745 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x048cbf28(&uStack_30,0,0,*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    lVar4 = func_0x0432154c(lVar4,uStack_30,uStack_28,*(undefined8 *)PTR_DAT_07831998);
    return lVar4;
  }
  lVar4 = func_0x03280cac();
  puVar2 = PTR_DAT_078319a8;
  puVar1 = PTR_DAT_078319a0;
  if ((bRam0000000007e2a746 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078319a8);
    func_0x03280a18(PTR_DAT_078319a0);
    bRam0000000007e2a746 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04321530(uVar3,0,0,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  func_0x032809c4((undefined8 *)(lVar4 + 0x28),uVar3);
  return lVar4;
}


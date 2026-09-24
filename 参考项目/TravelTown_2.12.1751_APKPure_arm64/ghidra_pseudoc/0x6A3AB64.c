/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3AB64; Merger.MergeBoard.View.MergeBoardView.HandleBoardResult; status ok */


long Merger_MergeBoard_View_MergeBoardView__HandleBoardResult(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0782f768;
  if ((bRam0000000007e2a4f8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f768);
    bRam0000000007e2a4f8 = 1;
  }
  lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x057da5fc(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  func_0x032809c4((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  func_0x032809c4((undefined8 *)(lVar2 + 0x28),param_2);
  return lVar2;
}


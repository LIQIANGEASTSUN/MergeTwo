/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32A60; Merger.MergeBoard.ViewModel.MergeBoardViewModel.TryGetItemCombinerVisualPresentation; status ok */


bool Merger_MergeBoard_ViewModel_MergeBoardViewModel__TryGetItemCombinerVisualPresentation
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0782f418;
  if ((bRam0000000007e2a4a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f418);
    bRam0000000007e2a4a7 = 1;
  }
  lVar2 = func_0x03280b90(param_2,*(undefined8 *)puVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
    *param_3 = 0;
  }
  else {
    *param_3 = lVar2;
    lVar3 = lVar2;
  }
  func_0x032809c4(param_3,lVar3);
  return lVar2 != 0;
}


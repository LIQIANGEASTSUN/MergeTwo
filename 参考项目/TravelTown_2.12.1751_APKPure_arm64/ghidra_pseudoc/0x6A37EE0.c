/* Ghidra 12.1.2 native pseudocode; RVA 0x6A37EE0; Merger.MergeBoard.View.MergeBoardSelectorView.RemoveSelectorFromItem; status ok */


void Merger_MergeBoard_View_MergeBoardSelectorView__RemoveSelectorFromItem
               (long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x40) == param_2) {
    uVar1 = func_0x06b37f3c(param_1,param_2,&uStack_18);
    if ((uVar1 & 1) == 0) {
      Merger_MergeBoard_View_MergeBoardSelectorView__ClearSelection(param_1);
      func_0x06b37c6c(param_1);
    }
    else {
      func_0x06b37cd8(param_1,uStack_18);
      func_0x06b37a78(param_1);
    }
  }
  return;
}


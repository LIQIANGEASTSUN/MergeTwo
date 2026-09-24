/* Ghidra 12.1.2 native pseudocode; RVA 0x6A37A68; Merger.MergeBoard.View.MergeBoardSelectorView.IsItemSelected; status ok */


bool Merger_MergeBoard_View_MergeBoardSelectorView__IsItemSelected(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x40) == param_2;
}


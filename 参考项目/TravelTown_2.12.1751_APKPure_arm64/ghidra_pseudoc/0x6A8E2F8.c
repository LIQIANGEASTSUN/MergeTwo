/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8E2F8; Merger.MergeBoard.Logic.BoardOperations.BoardOperationActionsBuilder.WithExtraData; status ok */


long Merger_MergeBoard_Logic_BoardOperations_BoardOperationActionsBuilder__WithExtraData
               (long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = param_2;
    func_0x032809c4();
  }
  return param_1;
}


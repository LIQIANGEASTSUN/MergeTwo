/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8433C; Merger.MergeBoard.Logic.ToolSpawnHandler.CalculateMergeValue; status ok */


int Merger_MergeBoard_Logic_ToolSpawnHandler__CalculateMergeValue(undefined8 param_1,int param_2)

{
  return 1 << (ulong)(param_2 - 1U & 0x1f);
}


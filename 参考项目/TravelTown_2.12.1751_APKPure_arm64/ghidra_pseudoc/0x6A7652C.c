/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7652C; Merger.MergeBoard.Systems.SwapSystem.IsSwappable; status ok */


bool Merger_MergeBoard_Systems_SwapSystem__IsSwappable
               (long param_1,int param_2,long param_3,undefined8 param_4)

{
  return param_1 != param_3 && param_2 == (int)((ulong)param_4 >> 0x20);
}


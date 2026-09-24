/* Ghidra 12.1.2 native pseudocode; RVA 0x46547F4; MergeEngine.Util.TwoDArray<T>.IsInBounds; status ok */


bool MergeEngine_Util_TwoDArray_T___IsInBounds(long param_1,long param_2)

{
  bool bVar1;
  
  if (-1 < (int)param_2) {
    bVar1 = false;
    if ((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x10))) {
      bVar1 = (int)((ulong)param_2 >> 0x20) < *(int *)(param_1 + 0x14);
    }
    return bVar1;
  }
  return false;
}


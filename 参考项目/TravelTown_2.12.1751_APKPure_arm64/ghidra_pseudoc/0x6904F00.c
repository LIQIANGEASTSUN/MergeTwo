/* Ghidra 12.1.2 native pseudocode; RVA 0x6904F00; MergeEngine.Data.BoardItemPosition.Equals; status ok */


bool MergeEngine_Data_BoardItemPosition__Equals(int *param_1,undefined8 param_2)

{
  if (*param_1 == (int)param_2) {
    return param_1[1] == (int)((ulong)param_2 >> 0x20);
  }
  return false;
}


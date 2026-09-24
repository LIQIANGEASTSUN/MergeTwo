/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9C624; Merger.MergeBoard.Components.TimeLockComponent.get_Locked; status ok */


bool Merger_MergeBoard_Components_TimeLockComponent__get_Locked(double *param_1)

{
  if (0.0 < *param_1) {
    return *(char *)(param_1 + 2) == '\0';
  }
  return false;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78304; Merger.MergeBoard.Systems.TimeLockSystem.CanStartUnlocking; status ok */

bool Merger_MergeBoard_Systems_TimeLockSystem__CanStartUnlocking(undefined8 param_1,double *param_2)

{
  if (0.0 < *param_2) {
    return *(char *)((long)param_2 + 0x19) != '\0';
  }
  return false;
}


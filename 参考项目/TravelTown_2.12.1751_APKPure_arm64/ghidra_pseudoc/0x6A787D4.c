/* Ghidra 12.1.2 native pseudocode; RVA 0x6A787D4; Merger.MergeBoard.Systems.TimeLockSystem.ProcessTime; status ok */

void Merger_MergeBoard_Systems_TimeLockSystem__ProcessTime
               (float param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  
  if ((*(char *)(param_3 + 3) != '\0') &&
     (dVar1 = *param_3, *param_3 = dVar1 - (double)param_1, dVar1 - (double)param_1 <= 0.0)) {
    *param_3 = 0.0;
    *(undefined1 *)(param_3 + 3) = 0;
  }
  return;
}


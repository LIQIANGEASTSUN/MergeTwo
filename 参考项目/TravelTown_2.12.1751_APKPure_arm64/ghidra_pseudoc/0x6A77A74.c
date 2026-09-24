/* Ghidra 12.1.2 native pseudocode; RVA 0x6A77A74; Merger.MergeBoard.Systems.TimeDurationSystem.ProcessTimeDuration; status ok */


void Merger_MergeBoard_Systems_TimeDurationSystem__ProcessTimeDuration
               (double param_1,undefined8 param_2,double *param_3)

{
  float fVar1;
  double dVar2;
  
  dVar2 = *param_3;
  if (*(char *)(param_3 + 3) == '\0') {
    *param_3 = dVar2 - param_1;
  }
  else {
    fVar1 = (float)func_0x06fd6310(0);
    *param_3 = dVar2 - (double)fVar1;
    *(undefined1 *)(param_3 + 3) = 0;
  }
  return;
}


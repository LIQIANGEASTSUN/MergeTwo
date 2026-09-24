/* Ghidra 12.1.2 native pseudocode; RVA 0x6A76BB0; Merger.MergeBoard.Systems.TimeCycleSystem.ProcessTimeCheckIfLocked; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__ProcessTimeCheckIfLocked
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_3 + 0x48) == '\0') {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    uStack_18 = param_2[3];
    uStack_20 = param_2[2];
    func_0x06b76be4(param_1,&uStack_30);
  }
  else {
    *(undefined1 *)(param_3 + 0x48) = 0;
  }
  return;
}


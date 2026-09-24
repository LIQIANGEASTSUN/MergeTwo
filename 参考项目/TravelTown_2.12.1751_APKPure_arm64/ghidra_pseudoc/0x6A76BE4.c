/* Ghidra 12.1.2 native pseudocode; RVA 0x6A76BE4; Merger.MergeBoard.Systems.TimeCycleSystem.ProcessTime; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__ProcessTime
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
               undefined8 param_5)

{
  ulong uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = func_0x06b9c478(param_4,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(param_4 + 0x34) < *(int *)(param_4 + 0x10)) {
      if (*(double *)(param_4 + 0x20) <= 0.0) {
        uStack_68 = param_3[1];
        uStack_70 = *param_3;
        uStack_58 = param_3[3];
        uStack_60 = param_3[2];
        func_0x06b76d50(param_1,param_2,&uStack_70,param_4,param_5);
      }
      else {
        uStack_48 = param_3[1];
        uStack_50 = *param_3;
        uStack_38 = param_3[3];
        uStack_40 = param_3[2];
        func_0x06b76cac(param_1,param_2,&uStack_50,param_4,param_5);
      }
    }
    else {
      *(undefined4 *)(param_4 + 0x3c) = 3;
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined4 *)(param_4 + 0x3c) = 0;
  }
  return;
}


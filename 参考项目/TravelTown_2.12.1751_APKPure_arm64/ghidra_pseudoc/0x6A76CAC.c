/* Ghidra 12.1.2 native pseudocode; RVA 0x6A76CAC; Merger.MergeBoard.Systems.TimeCycleSystem.ProcessDelay; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__ProcessDelay
               (double param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  double dVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  dVar2 = *(double *)(param_4 + 0x20);
  if (dVar2 <= param_1) {
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x38) = 0;
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    func_0x06b76d50(param_1 - dVar2,param_2,&uStack_60,param_4);
  }
  else {
    uVar1 = *(uint *)(param_4 + 0x3c);
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(uint *)(param_4 + 0x3c) = (uint)(0 < *(int *)(param_4 + 0x34)) << 1;
    if (((uVar1 & 0xfffffffe) == 2) && (*(int *)(param_4 + 0x34) < 1)) {
      uStack_38 = param_3[1];
      uStack_40 = *param_3;
      uStack_28 = param_3[3];
      uStack_30 = param_3[2];
      func_0x06b76f04(param_2,&uStack_40,param_4);
      dVar2 = *(double *)(param_4 + 0x20);
    }
    *(double *)(param_4 + 0x20) = dVar2 - param_1;
  }
  return;
}


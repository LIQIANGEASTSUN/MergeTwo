/* Ghidra 12.1.2 native pseudocode; RVA 0x6A76D50; Merger.MergeBoard.Systems.TimeCycleSystem.ProcessCycles; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__ProcessCycles
               (double param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
               undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar3 = 0;
  if (param_4[3] != 0) {
    iVar3 = param_4[0xe] / param_4[3];
  }
  param_4[0xc] = iVar3;
  if ((iVar3 < param_4[1]) || (*param_4 < 1)) {
    dVar4 = *(double *)(param_4 + 10);
    uVar1 = param_4[0xf];
    if (dVar4 <= param_1) {
      param_4[10] = 0;
      param_4[0xb] = 0;
      if (param_4[0xd] == 0) {
        bVar2 = param_4[2] != 0 || *param_4 != 0;
      }
      else {
        bVar2 = false;
      }
      uStack_98 = param_3[1];
      uStack_a0 = *param_3;
      uStack_88 = param_3[3];
      uStack_90 = param_3[2];
      func_0x06b770cc(param_1 - dVar4,param_2,&uStack_a0,param_4,param_5);
      if (bVar2 || uVar1 != 3 && param_4[0xf] == 3) {
        uStack_b8 = param_3[1];
        uStack_c0 = *param_3;
        uStack_a8 = param_3[3];
        uStack_b0 = param_3[2];
        func_0x06b771c4(param_2,&uStack_c0,param_4,param_5);
      }
    }
    else {
      iVar3 = 1;
      if (0 < param_4[0xd]) {
        iVar3 = 2;
      }
      param_4[0xf] = iVar3;
      if (((uVar1 & 0xfffffffe) == 2) && (param_4[0xd] < 1)) {
        uStack_78 = param_3[1];
        uStack_80 = *param_3;
        uStack_68 = param_3[3];
        uStack_70 = param_3[2];
        func_0x06b76f04(param_2,&uStack_80,param_4,param_5);
        dVar4 = *(double *)(param_4 + 10);
      }
      *(double *)(param_4 + 10) = dVar4 - param_1;
    }
  }
  else {
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    *(double *)(param_4 + 8) = (double)*param_4;
    param_4[0x10] = param_4[0x10] + 1;
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    Merger_MergeBoard_Systems_TimeCycleSystem__ProcessDelay
              (param_1,param_2,&uStack_60,param_4,param_5);
  }
  return;
}


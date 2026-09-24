/* Ghidra 12.1.2 native pseudocode; RVA 0x6A770CC; Merger.MergeBoard.Systems.TimeCycleSystem.ProcessCycle; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__ProcessCycle
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000007e2a709 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e2a709 = 1;
  }
  puVar2 = PTR_DAT_0774ee08;
  if ((*(int *)(param_4 + 8) != 0) || (*(int *)(param_4 + 0x34) < 1)) {
    uVar1 = *(undefined4 *)(param_4 + 0x10);
    iVar3 = *(int *)(param_4 + 0xc) + *(int *)(param_4 + 0x34);
    *(int *)(param_4 + 0x34) = iVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    iVar3 = func_0x05797580(iVar3,uVar1,0);
    *(int *)(param_4 + 0x34) = iVar3;
    *(double *)(param_4 + 0x28) = (double)*(int *)(param_4 + 8);
    if (iVar3 < *(int *)(param_4 + 0x10)) {
      uStack_58 = param_3[1];
      uStack_60 = *param_3;
      uStack_48 = param_3[3];
      uStack_50 = param_3[2];
      Merger_MergeBoard_Systems_TimeCycleSystem__ProcessCycles
                (param_1,param_2,&uStack_60,param_4,param_5);
    }
    else {
      *(undefined4 *)(param_4 + 0x3c) = 3;
    }
  }
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78648; Merger.MergeBoard.Systems.TimeLockSystem.ProcessInteractionLockGroup; status ok */

void Merger_MergeBoard_Systems_TimeLockSystem__ProcessInteractionLockGroup
               (undefined8 param_1,undefined8 *param_2,long param_3,double *param_4,long param_5,
               long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  double *extraout_x1;
  double *extraout_x1_00;
  long lVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_3;
  if ((bRam0000000007e2a712 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831740);
    func_0x03280a18(PTR_DAT_07831748);
    bRam0000000007e2a712 = 1;
  }
  if (((*(int *)((long)param_4 + 0x14) == 1) &&
      (uVar1 = func_0x06b9c624(param_4,0), (uVar1 & 1) != 0)) && (*(char *)(param_4 + 3) == '\0')) {
    if ((*(uint *)(param_5 + 0x20) & (*(uint *)((long)param_4 + 0x1c) ^ 0xffffffff)) == 0) {
      if (param_6 == 0) {
        func_0x03280cac();
        if ((bRam0000000007e2a713 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07831748);
          bRam0000000007e2a713 = 1;
        }
        if (lVar3 != 0) {
          uVar1 = func_0x053bbf78(lVar3,*(undefined4 *)((long)extraout_x1 + 0x14),
                                  *(undefined8 *)PTR_DAT_07831748);
          if (((uVar1 & 1) == 0) && (*(char *)(extraout_x1 + 3) == '\0')) {
            bVar4 = 0.0 < *extraout_x1;
          }
          else {
            bVar4 = false;
          }
          *(bool *)((long)extraout_x1 + 0x19) = bVar4;
          return;
        }
        fVar5 = (float)func_0x03280cac();
        if ((*(char *)(extraout_x1_00 + 3) != '\0') &&
           (dVar6 = *extraout_x1_00, *extraout_x1_00 = dVar6 - (double)fVar5,
           dVar6 - (double)fVar5 <= 0.0)) {
          *extraout_x1_00 = 0.0;
          *(undefined1 *)(extraout_x1_00 + 3) = 0;
        }
        return;
      }
      uVar1 = func_0x053bbf78(param_6,*(undefined4 *)((long)param_4 + 0x14),
                              *(undefined8 *)PTR_DAT_07831748);
      if (((uVar1 & 1) == 0) && (0.0 < *param_4)) {
        uVar2 = func_0x053bca88(param_6,*(undefined4 *)((long)param_4 + 0x14),
                                *(undefined8 *)PTR_DAT_07831740);
        uStack_58 = param_2[1];
        uStack_60 = *param_2;
        uStack_48 = param_2[3];
        uStack_50 = param_2[2];
        func_0x06b78508(uVar2,&uStack_60,param_3,param_4);
      }
    }
    else {
      *param_4 = 0.0;
      *(undefined1 *)(param_4 + 3) = 0;
    }
  }
  return;
}


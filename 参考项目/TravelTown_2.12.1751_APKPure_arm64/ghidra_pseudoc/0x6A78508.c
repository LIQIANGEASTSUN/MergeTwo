/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78508; Merger.MergeBoard.Systems.TimeLockSystem.StartUnlocking; status ok */

void Merger_MergeBoard_Systems_TimeLockSystem__StartUnlocking
               (undefined8 param_1,long param_2,long param_3,double *param_4,long param_5,
               long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *extraout_x1;
  double *extraout_x1_00;
  double *extraout_x1_01;
  long lVar5;
  double *pdVar6;
  bool bVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  puVar1 = PTR_DAT_07831718;
  pdVar6 = param_4;
  if ((bRam0000000007e2a717 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831720);
    func_0x03280a18(PTR_DAT_07831728);
    func_0x03280a18(PTR_DAT_07831730);
    func_0x03280a18(PTR_DAT_07831738);
    func_0x03280a18(PTR_DAT_07831718);
    bRam0000000007e2a717 = 1;
  }
  *(undefined1 *)(param_4 + 3) = 1;
  dStack_40 = param_4[4];
  dStack_58 = param_4[1];
  dStack_60 = *param_4;
  dStack_48 = param_4[3];
  dStack_50 = param_4[2];
  lVar5 = *(long *)puVar1;
  func_0x03ec8a38(&dStack_60,param_3);
  puVar1 = PTR_DAT_07831730;
  if (param_3 != 0) {
    uVar2 = func_0x03d1c090(param_3,*(undefined8 *)PTR_DAT_07831720);
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)PTR_DAT_07831728;
      func_0x03d1df48(param_3,0);
    }
    lVar8 = *(long *)(param_2 + 0x10);
    lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x06b9a6f8(lVar3,0);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = param_3;
      func_0x032809c4((long *)(lVar3 + 0x10),param_3);
      if (lVar8 != 0) {
        func_0x03ec33e4(lVar8,lVar3,*(undefined8 *)PTR_DAT_07831738);
        return;
      }
    }
  }
  func_0x03280cac();
  pcStack_d0 = Merger_MergeBoard_Systems_TimeLockSystem__ProcessInteractionLockGroup;
  lVar3 = lVar5;
  if ((bRam0000000007e2a712 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831740);
    func_0x03280a18(PTR_DAT_07831748);
    bRam0000000007e2a712 = 1;
  }
  if (((*(int *)((long)pdVar6 + 0x14) == 1) && (uVar2 = func_0x06b9c624(pdVar6,0), (uVar2 & 1) != 0)
      ) && (*(char *)(pdVar6 + 3) == '\0')) {
    if ((*(uint *)(param_5 + 0x20) & (*(uint *)((long)pdVar6 + 0x1c) ^ 0xffffffff)) == 0) {
      if (param_6 == 0) {
        func_0x03280cac();
        if ((bRam0000000007e2a713 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07831748);
          bRam0000000007e2a713 = 1;
        }
        if (lVar3 != 0) {
          uVar2 = func_0x053bbf78(lVar3,*(undefined4 *)((long)extraout_x1_00 + 0x14),
                                  *(undefined8 *)PTR_DAT_07831748);
          if (((uVar2 & 1) == 0) && (*(char *)(extraout_x1_00 + 3) == '\0')) {
            bVar7 = 0.0 < *extraout_x1_00;
          }
          else {
            bVar7 = false;
          }
          *(bool *)((long)extraout_x1_00 + 0x19) = bVar7;
          return;
        }
        fVar9 = (float)func_0x03280cac();
        if ((*(char *)(extraout_x1_01 + 3) != '\0') &&
           (dVar10 = *extraout_x1_01, *extraout_x1_01 = dVar10 - (double)fVar9,
           dVar10 - (double)fVar9 <= 0.0)) {
          *extraout_x1_01 = 0.0;
          *(undefined1 *)(extraout_x1_01 + 3) = 0;
        }
        return;
      }
      uVar2 = func_0x053bbf78(param_6,*(undefined4 *)((long)pdVar6 + 0x14),
                              *(undefined8 *)PTR_DAT_07831748);
      if (((uVar2 & 1) == 0) && (0.0 < *pdVar6)) {
        uVar4 = func_0x053bca88(param_6,*(undefined4 *)((long)pdVar6 + 0x14),
                                *(undefined8 *)PTR_DAT_07831740);
        uStack_e8 = extraout_x1[1];
        uStack_f0 = *extraout_x1;
        uStack_d8 = extraout_x1[3];
        uStack_e0 = extraout_x1[2];
        Merger_MergeBoard_Systems_TimeLockSystem__StartUnlocking(uVar4,&uStack_f0,lVar5,pdVar6);
      }
    }
    else {
      *pdVar6 = 0.0;
      *(undefined1 *)(pdVar6 + 3) = 0;
    }
  }
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A97304; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateTimeLimitedActivationComponent; status ok */


/* WARNING: Possible PIC construction at 0x06b976d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b97728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b976d8) */
/* WARNING: Removing unreachable block (ram,0x06b976e0) */
/* WARNING: Removing unreachable block (ram,0x06b976e4) */
/* WARNING: Removing unreachable block (ram,0x06b9772c) */
/* WARNING: Removing unreachable block (ram,0x06b97734) */
/* WARNING: Removing unreachable block (ram,0x06b97740) */
/* WARNING: Removing unreachable block (ram,0x06b9774c) */
/* WARNING: Removing unreachable block (ram,0x06b97764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateTimeLimitedActivationComponent
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x1;
  long *extraout_x1_00;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  double *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  double dStack_50;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined3 uStack_43;
  double dStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000007e2a80b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830c10);
    bRam0000000007e2a80b = 1;
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    iVar1 = *(int *)(*(long *)(param_4 + 0x28) + 0x10);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if (param_3 != 0) {
      dStack_50 = (double)iVar1;
      uStack_48 = 0;
      uStack_47 = 0;
      uStack_43 = 0;
      uStack_38 = 0;
      dStack_40 = dStack_50;
      lVar5 = func_0x03d1dda0(param_3,&dStack_50,*(undefined8 *)PTR_DAT_07830c10);
      return lVar5;
    }
  }
  func_0x03280cac();
  uStack_68 = 0;
  uStack_64 = 0;
  pcStack_60 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateMergeComponent;
  if (extraout_x1 == 0) {
    auVar12 = func_0x03280cac();
    uVar4 = _UNK_017806e8;
    lVar5 = auVar12._8_8_;
    if (lVar5 != 0) {
      uVar11 = *(undefined8 *)(lVar5 + 0x1c);
      uVar10 = *(undefined8 *)(lVar5 + 0x14);
      uVar2 = *(undefined4 *)(lVar5 + 0x24);
      uVar3 = *(undefined4 *)(lVar5 + 0x2c);
      *(undefined1 *)((long)extraout_x8 + 0x14) = *(undefined1 *)(lVar5 + 0x28);
      *(undefined1 *)((long)extraout_x8 + 0x17) = 0;
      *(undefined2 *)((long)extraout_x8 + 0x15) = 0;
      extraout_x8[1] = uVar11;
      *extraout_x8 = uVar10;
      extraout_x8[4] = 0;
      extraout_x8[8] = 0;
      *(undefined4 *)((long)extraout_x8 + 0x47) = 0;
      *(undefined4 *)(extraout_x8 + 2) = uVar2;
      *(undefined4 *)(extraout_x8 + 3) = uVar3;
      *(undefined4 *)((long)extraout_x8 + 0x1c) = 0;
      *(undefined4 *)(extraout_x8 + 6) = 0;
      *(undefined4 *)((long)extraout_x8 + 0x34) = uVar2;
      *(undefined1 *)((long)extraout_x8 + 0x4f) = 0;
      extraout_x8[7] = uVar4;
      extraout_x8[5] = (double)(int)uVar11;
      *(undefined4 *)((long)extraout_x8 + 0x4b) = 0;
      return auVar12._0_8_;
    }
    auVar12 = func_0x03280cac();
    uVar4 = _UNK_017806e8;
    lVar5 = auVar12._8_8_;
    if (lVar5 != 0) {
      uVar11 = *(undefined8 *)(lVar5 + 0x1c);
      uVar10 = *(undefined8 *)(lVar5 + 0x14);
      uVar2 = *(undefined4 *)(lVar5 + 0x24);
      uVar3 = *(undefined4 *)(lVar5 + 0x2c);
      *(undefined1 *)((long)extraout_x8_00 + 0x14) = *(undefined1 *)(lVar5 + 0x28);
      *(undefined1 *)((long)extraout_x8_00 + 0x17) = 0;
      *(undefined2 *)((long)extraout_x8_00 + 0x15) = 0;
      extraout_x8_00[1] = uVar11;
      *extraout_x8_00 = uVar10;
      extraout_x8_00[4] = 0;
      extraout_x8_00[8] = 0;
      *(undefined4 *)((long)extraout_x8_00 + 0x47) = 0;
      *(undefined4 *)(extraout_x8_00 + 2) = uVar2;
      *(undefined4 *)(extraout_x8_00 + 3) = uVar3;
      *(undefined4 *)((long)extraout_x8_00 + 0x1c) = 0;
      *(undefined4 *)(extraout_x8_00 + 6) = 0;
      *(undefined4 *)((long)extraout_x8_00 + 0x34) = uVar2;
      *(undefined1 *)((long)extraout_x8_00 + 0x4f) = 0;
      extraout_x8_00[7] = uVar4;
      extraout_x8_00[5] = (double)(int)uVar11;
      *(undefined4 *)((long)extraout_x8_00 + 0x4b) = 0;
      return auVar12._0_8_;
    }
    func_0x03280cac();
    if ((bRam0000000007e2a80c & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e548);
      bRam0000000007e2a80c = 1;
    }
    if (extraout_x1_00 != (long *)0x0) {
      lVar5 = *extraout_x1_00;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_06b97600;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777e548,6);
LAB_06b97600:
      lVar5 = (*(code *)*puVar6)(extraout_x1_00,puVar6[1]);
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x14);
        uVar2 = *(undefined4 *)(lVar5 + 0x18);
        uVar3 = *(undefined4 *)(lVar5 + 0x1c);
        *(undefined1 *)(extraout_x8_01 + 2) = 0;
        *(undefined1 *)((long)extraout_x8_01 + 0x13) = 0;
        *(undefined4 *)((long)extraout_x8_01 + 0x14) = uVar2;
        *(undefined4 *)(extraout_x8_01 + 3) = 0x100;
        *(undefined2 *)((long)extraout_x8_01 + 0x11) = 0;
        *(undefined4 *)((long)extraout_x8_01 + 0x1c) = uVar3;
        *extraout_x8_01 = (double)iVar1;
        extraout_x8_01[1] = (double)iVar1;
        extraout_x8_01[4] = 0.0;
        return lVar5;
      }
    }
    auVar12 = func_0x03280cac();
    lVar7 = auVar12._8_8_;
    lVar5 = auVar12._0_8_;
    if ((bRam0000000007e2a80e & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832570);
      lVar5 = func_0x03280a18(PTR_DAT_07832578);
      bRam0000000007e2a80e = 1;
    }
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
      if (*(char *)(*(long *)(lVar7 + 0x18) + 0x10) != '\0') {
        lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07832570);
        return lVar5;
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        if (*(char *)(*(long *)(lVar7 + 0x20) + 0x10) != '\0') {
          lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07832578);
          return lVar5;
        }
        extraout_x8_02[2] = 0;
        extraout_x8_02[1] = 0;
        *extraout_x8_02 = 0;
        return lVar5;
      }
    }
    lVar5 = func_0x03280cac();
    return lVar5;
  }
  uStack_70 = *(undefined4 *)(extraout_x1 + 0x14);
  switch(uStack_70) {
  case 0:
    uStack_70 = 0;
  case 1:
    break;
  default:
    uStack_70 = 2;
    break;
  case 3:
    uStack_70 = (undefined4)_UNK_01780a48;
    uStack_6c = (undefined4)((ulong)_UNK_01780a48 >> 0x20);
    uStack_68 = (undefined4)*(undefined8 *)(extraout_x1 + 0x18);
    uStack_64 = (undefined4)((ulong)*(undefined8 *)(extraout_x1 + 0x18) >> 0x20);
    func_0x032809c4(&uStack_68);
    goto code_r0x06b97434;
  case 4:
    uStack_70 = 4;
  }
  uStack_6c = 0;
code_r0x06b97434:
  return CONCAT44(uStack_6c,uStack_70);
}


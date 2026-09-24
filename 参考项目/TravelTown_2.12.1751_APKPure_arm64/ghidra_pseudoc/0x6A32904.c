/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32904; Merger.MergeBoard.ViewModel.MergeBoardViewModel.HandleTap; status ok */


/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b838) */
/* WARNING: Removing unreachable block (ram,0x06b9b888) */
/* WARNING: Removing unreachable block (ram,0x06b9b890) */
/* WARNING: Removing unreachable block (ram,0x06b9b8a8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b8d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8bc) */
/* WARNING: Removing unreachable block (ram,0x06b9b8c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8e8) */
/* WARNING: Removing unreachable block (ram,0x06b9b904) */
/* WARNING: Removing unreachable block (ram,0x06b9b928) */
/* WARNING: Removing unreachable block (ram,0x06b9b930) */
/* WARNING: Removing unreachable block (ram,0x06b9b958) */
/* WARNING: Removing unreachable block (ram,0x06b9b93c) */
/* WARNING: Removing unreachable block (ram,0x06b9b948) */
/* WARNING: Removing unreachable block (ram,0x06b9b968) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba5c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */
/* WARNING: Removing unreachable block (ram,0x06b9b560) */
/* WARNING: Removing unreachable block (ram,0x06b9b580) */
/* WARNING: Removing unreachable block (ram,0x06b9b594) */
/* WARNING: Removing unreachable block (ram,0x06b9b5ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b5b4) */
/* WARNING: Removing unreachable block (ram,0x06b9b5d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b5d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b600) */
/* WARNING: Removing unreachable block (ram,0x06b9b5e4) */
/* WARNING: Removing unreachable block (ram,0x06b9b5f0) */
/* WARNING: Removing unreachable block (ram,0x06b9b60c) */
/* WARNING: Removing unreachable block (ram,0x06b9b648) */
/* WARNING: Removing unreachable block (ram,0x06b9b684) */
/* WARNING: Removing unreachable block (ram,0x06b9b6b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b61c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba60) */
/* WARNING: Removing unreachable block (ram,0x06b9ba80) */
/* WARNING: Removing unreachable block (ram,0x06b9ba94) */
/* WARNING: Removing unreachable block (ram,0x06b9ba9c) */
/* WARNING: Removing unreachable block (ram,0x06b9baa8) */
/* WARNING: Removing unreachable block (ram,0x06b9bab4) */
/* WARNING: Removing unreachable block (ram,0x06b9bb44) */
/* WARNING: Removing unreachable block (ram,0x06b9babc) */
/* WARNING: Removing unreachable block (ram,0x06b9bb48) */
/* WARNING: Removing unreachable block (ram,0x06b9bb74) */
/* WARNING: Removing unreachable block (ram,0x06b9bb94) */
/* WARNING: Removing unreachable block (ram,0x06b9bbdc) */
/* WARNING: Removing unreachable block (ram,0x06b9bbac) */
/* WARNING: Removing unreachable block (ram,0x06b9bac8) */
/* WARNING: Removing unreachable block (ram,0x06b9bad8) */
/* WARNING: Removing unreachable block (ram,0x06b9bae0) */
/* WARNING: Removing unreachable block (ram,0x06b9bb08) */
/* WARNING: Removing unreachable block (ram,0x06b9baec) */
/* WARNING: Removing unreachable block (ram,0x06b9baf8) */
/* WARNING: Removing unreachable block (ram,0x06b9bb14) */
/* WARNING: Removing unreachable block (ram,0x06b9bb34) */
/* WARNING: Removing unreachable block (ram,0x06b9b59c) */

undefined1  [16]
Merger_MergeBoard_ViewModel_MergeBoardViewModel__HandleTap
          (long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    if ((bRam0000000007e2a83b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832778,param_2,0,0);
      func_0x03280a18(PTR_DAT_07832780);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83b = 1;
    }
    puVar2 = PTR_DAT_07832778;
    uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
    func_0x060157bc(uVar4,0);
    auVar13._0_8_ = func_0x03280ca0(*(undefined8 *)puVar2);
    auVar13._8_8_ = 0;
    return auVar13;
  }
  auVar13 = func_0x03280cac();
  plVar5 = param_3;
  if ((bRam0000000007e2a4a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f410);
    bRam0000000007e2a4a6 = 1;
  }
  puVar2 = PTR_DAT_0782f410;
  lVar11 = *(long *)(auVar13._0_8_ + 0x70);
  if (lVar11 == 0) {
LAB_06b32a5c:
    func_0x03280cac();
    puVar2 = PTR_DAT_0782f418;
    if ((bRam0000000007e2a4a7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f418);
      bRam0000000007e2a4a7 = 1;
    }
    lVar11 = func_0x03280b90(extraout_x1_00,*(undefined8 *)puVar2);
    if (lVar11 == 0) {
      lVar6 = 0;
      *plVar5 = 0;
    }
    else {
      *plVar5 = lVar11;
      lVar6 = lVar11;
    }
    func_0x032809c4(plVar5,lVar6);
    auVar15._1_7_ = 0;
    auVar15[0] = lVar11 != 0;
    auVar15._8_8_ = extraout_x1_01;
    return auVar15;
  }
  uVar1 = *(uint *)(lVar11 + 0x18);
  uVar10 = (ulong)(0 < (int)uVar1);
  if (0 < (int)uVar1) {
    uVar12 = 0;
    do {
      if (uVar1 <= uVar12) {
        func_0x03280cb4();
        goto LAB_06b32a5c;
      }
      plVar9 = *(long **)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
      if (plVar9 == (long *)0x0) goto LAB_06b32a5c;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b329f0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
LAB_06b329f0:
      plVar5 = param_3;
      uVar7 = (*(code *)*puVar3)(plVar9,auVar13._8_8_,param_3,puVar3[1]);
      if ((uVar7 & 1) != 0) {
        *param_4 = plVar9;
        goto LAB_06b32a38;
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      uVar12 = uVar12 + 1;
      uVar10 = (ulong)((int)uVar12 < (int)uVar1);
    } while ((int)uVar12 < (int)uVar1);
  }
  plVar9 = (long *)0x0;
  *param_4 = 0;
LAB_06b32a38:
  func_0x032809c4(param_4,plVar9);
  auVar14._8_8_ = extraout_x1;
  auVar14._0_8_ = uVar10;
  return auVar14;
}


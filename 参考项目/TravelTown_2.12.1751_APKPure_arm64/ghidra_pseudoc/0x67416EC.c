/* Ghidra 12.1.2 native pseudocode; RVA 0x67416EC; Merger.Game.Views.Board.BoardQueueView.GameStarted; status ok */


/* WARNING: Possible PIC construction at 0x06841714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06841814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068418bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x068418c0) */
/* WARNING: Removing unreachable block (ram,0x068418c8) */
/* WARNING: Removing unreachable block (ram,0x068418ec) */
/* WARNING: Removing unreachable block (ram,0x068418f0) */
/* WARNING: Removing unreachable block (ram,0x06841908) */
/* WARNING: Removing unreachable block (ram,0x06841818) */
/* WARNING: Removing unreachable block (ram,0x06841820) */
/* WARNING: Removing unreachable block (ram,0x06841840) */
/* WARNING: Removing unreachable block (ram,0x06841868) */
/* WARNING: Removing unreachable block (ram,0x0684186c) */
/* WARNING: Removing unreachable block (ram,0x06841918) */
/* WARNING: Removing unreachable block (ram,0x06841880) */
/* WARNING: Removing unreachable block (ram,0x06841888) */
/* WARNING: Removing unreachable block (ram,0x06841898) */
/* WARNING: Removing unreachable block (ram,0x068418ac) */
/* WARNING: Removing unreachable block (ram,0x068418b0) */
/* WARNING: Removing unreachable block (ram,0x06841718) */
/* WARNING: Removing unreachable block (ram,0x06841734) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView__GameStarted
                (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *UNRECOVERED_JUMPTABLE;
  int **ppiVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 unaff_x21;
  ulong unaff_x24;
  undefined8 unaff_x26;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong auStack_2e0 [18];
  undefined1 auStack_250 [8];
  int *piStack_248;
  long alStack_240 [2];
  undefined1 auStack_230 [8];
  long alStack_228 [9];
  int *piStack_1e0;
  long lStack_1d8;
  uint uStack_1cc;
  long lStack_1c8;
  undefined1 auStack_1c0 [8];
  ulong auStack_1b8 [11];
  int *piStack_160;
  long lStack_158;
  int iStack_14c;
  long lStack_148;
  undefined8 uStack_b0;
  undefined8 uStack_80;
  long lStack_60;
  long lStack_58;
  
  lVar9 = func_0x069aaf28(param_3,0);
  if (lVar9 == 0) {
    param_3 = func_0x03280cac();
  }
  else {
    uVar22 = func_0x06fe9880(lVar9,0);
    *(undefined4 *)(param_3 + 0x78) = uVar22;
    *(undefined4 *)(param_3 + 0x7c) = param_2;
  }
  if ((bRam0000000007e28a66 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a5d0);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a66 = 1;
  }
  func_0x068424a8(param_3);
  lVar9 = 0x7e28000;
  if (*(long *)(param_3 + 0x28) != 0) {
    lVar10 = func_0x0674b454(*(long *)(param_3 + 0x28),0);
    lVar9 = *(long *)(param_3 + 0x38);
    if (lVar10 == 0) {
      if (lVar9 != 0) {
        func_0x069b649c(lVar9,0);
        goto LAB_068417f0;
      }
    }
    else if ((*(long *)(param_3 + 0x28) != 0) &&
            (uVar11 = func_0x0674b454(*(long *)(param_3 + 0x28),0), lVar9 != 0)) {
      func_0x069acef8(lVar9,uVar11,0);
LAB_068417f0:
      lVar10 = func_0x06841248(param_3);
      uVar4 = func_0x068412f0(param_3);
      lVar9 = lVar10;
      if (lVar10 != 0) {
        uVar4 = uVar4 & 1;
        goto SUB_06fdf26c;
      }
    }
  }
  uVar12 = func_0x03280cac();
  lStack_60 = 0x684192c;
  lStack_58 = param_3;
  uVar11 = func_0x06fdbed0(uVar12,0);
  ppiVar16 = (int **)0x1;
  func_0x067b2ca0(uVar11,0,0x1f9,1,0);
  if ((*(long *)(uVar12 + 0x58) != 0) &&
     (lVar10 = func_0x06fdbed0(*(long *)(uVar12 + 0x58),0), lVar10 != 0)) {
    uVar4 = 0;
    param_3 = lStack_58;
SUB_06fdf26c:
    lStack_60 = lVar9;
    lStack_58 = param_3;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*pcRam0000000007e2fbf0)(lVar10,uVar4);
    return uVar12;
  }
  uVar11 = func_0x03280cac();
  lVar10 = func_0x06fdbed0(uVar11,0);
  uVar15 = 0;
  uStack_80 = 0x6841978;
  if ((bRam0000000007e283fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809f58);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e283fd = 1;
  }
  lVar13 = *(long *)PTR_DAT_07809138;
  if ((*(long *)(lVar13 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar13 + 0x38) == 0)) {
    func_0x03256878(lVar13);
  }
  if (lVar10 != 0) {
    lVar10 = func_0x03dc9518(lVar10,**(undefined8 **)(lVar13 + 0x38));
    puVar1 = PTR_DAT_0774e4e0;
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
    }
    uVar15 = func_0x06fdeb74(lVar10,0,0);
    if ((uVar15 & 1) == 0) {
      return uVar15;
    }
    plVar2 = &lStack_60;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
      plVar2 = &lStack_60;
    }
SUB_06fe41c8:
    puVar1 = PTR_DAT_0774e4e0;
    *(undefined8 *)((long)plVar2 + -0x20) = uStack_80;
    *(undefined8 *)((long)plVar2 + -0x18) = unaff_x21;
    *(long *)((long)plVar2 + -0x10) = lVar9;
    *(ulong *)((long)plVar2 + -8) = uVar12;
    if ((bRam0000000007e2fdd8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0);
      bRam0000000007e2fdd8 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    if (pcRam0000000007e2fdd0 == (code *)0x0) {
      pcRam0000000007e2fdd0 = (code *)func_0x032809dc(&UNK_017a679f);
    }
                    /* WARNING: Could not recover jumptable at 0x06fe423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*pcRam0000000007e2fdd0)(0,lVar10);
    return uVar12;
  }
  auVar23 = func_0x03280cac();
  lVar9 = auVar23._8_8_;
  uStack_b0 = 0x3e901b8;
  if ((*(long *)(lVar9 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar9 + 0x38) == 0)) {
    func_0x03256878(lVar9);
  }
  if ((auVar23._0_8_ != 0) &&
     (uVar12 = func_0x03dc9f70(auVar23._0_8_,**(undefined8 **)(lVar9 + 0x38)), uVar12 != 0)) {
    if ((int)*(ulong *)(uVar12 + 0x18) < 1) {
      return uVar12;
    }
    unaff_x21 = 0;
    if ((*(ulong *)(uVar12 + 0x18) & 0xffffffff) != 0) {
      lVar10 = *(long *)(uVar12 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uStack_80 = 0x3e90254;
      plVar2 = &uStack_b0;
      lVar9 = lVar10;
      goto SUB_06fe41c8;
    }
    func_0x03280cb4();
  }
  auVar23 = func_0x03280cac();
  lVar9 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar13 = *plVar2;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar12 = uVar12 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar12 != 0);
    }
    uVar15 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar2);
LAB_03e90304:
    iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    if (iVar3 != 0) {
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90378:
      iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      lVar10 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e903f0:
      uVar12 = (*(code *)*puVar5)(plVar2,iVar3 + -1,puVar5[1]);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90468:
      iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      lVar9 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      lVar10 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar9,4);
LAB_03e904e0:
      (*(code *)*puVar5)(plVar2,iVar3 + -1,puVar5[1]);
      return uVar12 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar11 = func_0x03280ca0();
  func_0x05796364(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar9);
  lVar9 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar13 = *plVar2;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar12 = uVar12 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar12 != 0);
    }
    uVar15 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar2);
LAB_03e905b4:
    iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    if (iVar3 != 0) {
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90628:
      iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      lVar10 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e906a0:
      uVar12 = (*(code *)*puVar5)(plVar2,iVar3 + -1,puVar5[1]);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90718:
      iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      lVar9 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      lVar10 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar9,4);
LAB_03e90790:
      (*(code *)*puVar5)(plVar2,iVar3 + -1,puVar5[1]);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar11 = func_0x03280ca0();
  func_0x05796364(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar9);
  uVar11 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  lVar9 = tpidr_el0;
  lStack_148 = *(long *)(lVar9 + 0x28);
  lVar10 = *(long *)(uVar15 + 0x38);
  if (lVar10 == 0) {
    func_0x03256878(uVar15);
    lVar10 = *(long *)(uVar15 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar10 + 0x20) + 0xfc);
  lVar13 = -(uVar12 + 0xf & 0x1fffffff0);
  lVar19 = (long)&piStack_160 + lVar13;
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar11 = func_0x03280ca0();
    func_0x05796364(uVar11,0);
    func_0x03280b7c(uVar11,uVar15);
  }
  else {
    lVar10 = *(long *)(lVar10 + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar17 = *plVar2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e908a4:
    iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    if (iVar3 == 0) goto LAB_03e90ae0;
    lVar10 = *(long *)(*(long *)(uVar15 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar17 = *plVar2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90918:
    uVar4 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    unaff_x24 = (ulong)uVar4;
    lVar10 = **(long **)(uVar15 + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    iStack_14c = uVar4 - 1;
    lVar17 = *plVar2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          lVar10 = lVar17 + (long)*piVar21 * 0x10 + 0x138;
          goto LAB_03e90994;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    lVar10 = func_0x03256b10(plVar2,lVar10,0);
LAB_03e90994:
    piStack_160 = &iStack_14c;
    lVar10 = *(long *)(lVar10 + 8);
    ppiVar16 = &piStack_160;
    lStack_158 = lVar19;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar2,ppiVar16,lVar19);
    lVar10 = *(long *)(*(long *)(uVar15 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar17 = *plVar2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90a18:
    uVar4 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    puVar5 = (undefined8 *)(uVar15 + 0x38);
    uVar15 = (ulong)uVar4;
    lVar10 = *(long *)*puVar5;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar17 = *plVar2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar17 + (long)(*piVar21 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar10,4);
LAB_03e90a90:
    (*(code *)*puVar5)(plVar2,uVar4 - 1,puVar5[1]);
    uVar20 = func_0x072ce970(uVar11,lVar19,uVar12);
    if (*(long *)(lVar9 + 0x28) == lStack_148) {
      return uVar20;
    }
  }
  auVar23 = func_0x072ce990();
  lVar10 = auVar23._8_8_;
  plVar6 = auVar23._0_8_;
  *(undefined8 *)((long)auStack_1b8 + lVar13 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_1b8 + lVar13 + 0x48) = plVar2;
  *(undefined8 *)((long)auStack_1b8 + lVar13 + 0x50) = uVar11;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar18 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar17) {
          puVar5 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,lVar17,0);
LAB_03e90b94:
    iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (iVar3 != 0) {
      lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      lVar13 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,lVar9,0);
LAB_03e90c08:
      iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (iVar3 == 1) {
        lVar9 = **(long **)(lVar10 + 0x38);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar6,lVar9,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        uVar11 = puVar5[1];
        uVar22 = 0;
      }
      else {
        lVar9 = (*(long **)(lVar10 + 0x38))[1];
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        lVar13 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar6,lVar9,0);
LAB_03e90cf0:
        uVar22 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar22 = func_0x06fd9864(0,uVar22,0);
        lVar9 = **(long **)(lVar10 + 0x38);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar6,lVar9,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        uVar11 = puVar5[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*UNRECOVERED_JUMPTABLE)(plVar6,uVar22,uVar11);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar11 = func_0x03280ca0();
  uVar7 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar20 = 0;
  func_0x05791bcc(uVar11,uVar7);
  auVar23 = func_0x03280b7c(uVar11,lVar10);
  uVar7 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  *(undefined1 **)(auStack_1c0 + lVar13) = &stack0xfffffffffffffec0;
  *(undefined8 *)((long)auStack_1b8 + lVar13) = 0x3e90dcc;
  *(ulong *)((long)auStack_1b8 + lVar13 + 8) = unaff_x24;
  *(ulong *)((long)auStack_1b8 + lVar13 + 0x10) = uVar15;
  *(long *)((long)auStack_1b8 + lVar13 + 0x18) = lVar19;
  *(ulong *)((long)auStack_1b8 + lVar13 + 0x20) = uVar12;
  *(long *)((long)auStack_1b8 + lVar13 + 0x28) = lVar10;
  *(undefined8 *)((long)auStack_1b8 + lVar13 + 0x30) = uVar11;
  lVar10 = tpidr_el0;
  *(undefined8 *)((long)&lStack_1c8 + lVar13) = *(undefined8 *)(lVar10 + 0x28);
  lVar19 = *(long *)(uVar20 + 0x38);
  if (lVar19 == 0) {
    func_0x03256878(uVar20);
    lVar19 = *(long *)(uVar20 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar19 + 0x20) + 0xfc);
  lVar17 = (long)&piStack_1e0 + (lVar13 - (uVar12 + 0xf & 0x1fffffff0));
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar19 = *(long *)(lVar19 + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar18 = *plVar2;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar19) {
          puVar5 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar15 = uVar15 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar15 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar19,0);
LAB_03e90e90:
    iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    if (iVar3 != 0) {
      lVar19 = *(long *)(*(long *)(uVar20 + 0x38) + 8);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar18 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar5 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar19,0);
LAB_03e90f04:
      iVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      if (iVar3 == 1) {
        lVar19 = **(long **)(uVar20 + 0x38);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        *(undefined4 *)((long)&uStack_1cc + lVar13) = 0;
        lVar18 = *plVar2;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) goto LAB_03e91044;
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
      }
      else {
        lVar19 = (*(long **)(uVar20 + 0x38))[1];
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        lVar18 = *plVar2;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar5 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar2,lVar19,0);
LAB_03e90fc8:
        uVar22 = (*(code *)*puVar5)(plVar2,puVar5[1]);
        uVar4 = func_0x06fd9864(0,uVar22,0);
        puVar5 = (undefined8 *)(uVar20 + 0x38);
        uVar20 = (ulong)uVar4;
        lVar19 = *(long *)*puVar5;
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        *(uint *)((long)&uStack_1cc + lVar13) = uVar4;
        lVar18 = *plVar2;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) goto LAB_03e91044;
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
      }
      lVar19 = func_0x03256b10(plVar2,lVar19,0);
      goto LAB_03e91050;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar7 = func_0x03280ca0();
  uVar11 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar15 = 0;
  func_0x05791bcc(uVar7,uVar11);
  func_0x03280b7c(uVar7,uVar20);
LAB_03e910e8:
  auVar23 = func_0x072ce990();
  plVar6 = auVar23._0_8_;
  *(undefined1 **)(lVar17 + -0x50) = auStack_1c0 + lVar13;
  *(undefined8 *)(lVar17 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar17 + -0x40) = unaff_x26;
  *(long *)(lVar17 + -0x38) = lVar9;
  *(long *)(lVar17 + -0x30) = lVar10;
  *(ulong *)(lVar17 + -0x28) = uVar20;
  *(long *)(lVar17 + -0x20) = lVar17;
  *(ulong *)(lVar17 + -0x18) = uVar12;
  *(long **)(lVar17 + -0x10) = plVar2;
  *(undefined8 *)(lVar17 + -8) = uVar7;
  lVar9 = tpidr_el0;
  *(undefined8 *)(lVar17 + -0x58) = *(undefined8 *)(lVar9 + 0x28);
  lVar10 = *(long *)(uVar15 + 0x38);
  if (lVar10 == 0) {
    func_0x03256878(uVar15);
    lVar10 = *(long *)(uVar15 + 0x38);
  }
  uVar20 = (ulong)*(uint *)(*(long *)(lVar10 + 0x18) + 0xfc);
  uVar12 = uVar20 + 0xf & 0x1fffffff0;
  lVar13 = (lVar17 + -0x70) - uVar12;
  lVar19 = lVar13 - uVar12;
  func_0x072ce9a0(lVar19,0,uVar20);
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *(long *)(lVar10 + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar18 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar12 = uVar12 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,lVar10,0);
LAB_03e911d0:
    iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (iVar3 == 0) {
      func_0x072ce9a0(lVar19,0,uVar20);
      func_0x072ce970(lVar13,lVar19,uVar20);
    }
    else {
      ppiVar16 = (int **)(lVar17 + -0x68);
      puVar5 = *(undefined8 **)(*(long *)(uVar15 + 0x38) + 0x20);
      uVar11 = *puVar5;
      *(long **)(lVar17 + -0x68) = plVar6;
      *(long *)(lVar17 + -0x60) = lVar13;
      (*(code *)puVar5[2])(uVar11,puVar5,0,ppiVar16,lVar13);
    }
    uVar12 = func_0x072ce970(auVar23._8_8_,lVar13,uVar20);
    if (*(long *)(lVar9 + 0x28) == *(long *)(lVar17 + -0x58)) {
      return uVar12;
    }
  }
  auVar24 = func_0x072ce990();
  lVar9 = auVar24._8_8_;
  *(undefined8 *)(lVar19 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar19 + -0x10) = uVar20;
  *(long *)(lVar19 + -8) = auVar23._8_8_;
  if ((*(long *)(lVar9 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar9 + 0x38) == 0)) {
    func_0x03256878(lVar9);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
  *(undefined8 *)(lVar19 + -0x30) = *(undefined8 *)(lVar19 + -0x20);
  *(ulong *)(lVar19 + -0x20) = uVar15;
  *(long *)(lVar19 + -0x18) = lVar13;
  *(undefined8 *)(lVar19 + -0x10) = *(undefined8 *)(lVar19 + -0x10);
  *(undefined8 *)(lVar19 + -8) = *(undefined8 *)(lVar19 + -8);
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (*(long *)(lVar9 + 0x38) == 0) {
      func_0x03256878(lVar9);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar24._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar10 = func_0x06fe3dd4(auVar24._0_8_,0);
  lVar13 = **(long **)(lVar9 + 0x38);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  if (lVar10 == 0) {
LAB_03e3cc18:
    uVar12 = 0;
  }
  else {
    uVar12 = func_0x03280b90(lVar10,lVar13);
    if (uVar12 == 0) {
      func_0x03281048(lVar10,lVar13);
      goto LAB_03e3cc18;
    }
  }
  uVar15 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar15 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar11 = func_0x03280ca0();
  uVar7 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar14 = 0;
  func_0x06fe0874(uVar11,uVar7,0);
  auVar23 = func_0x03280b7c(uVar11,lVar9);
  *(undefined8 *)(lVar19 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar19 + -0x50) = uVar12;
  *(long *)(lVar19 + -0x48) = lVar10;
  *(undefined8 *)(lVar19 + -0x40) = uVar11;
  *(long *)(lVar19 + -0x38) = lVar9;
  if (ppiVar16[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (ppiVar16[7] == (int *)0x0) {
      func_0x03256878(ppiVar16);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar23._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar9 = func_0x06fe4bb8(auVar23._0_8_,auVar23._8_8_,uVar14,0);
  lVar10 = *(long *)ppiVar16[7];
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c(lVar10);
  }
  if (lVar9 != 0) {
    uVar12 = func_0x03280b90(lVar9,lVar10);
    if (uVar12 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar9,lVar10);
  }
  uVar12 = 0;
LAB_03e3cd58:
  uVar15 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar15 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar11 = func_0x03280ca0();
  uVar7 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar10 = 0;
  func_0x06fe0874(uVar11,uVar7);
  auVar23 = func_0x03280b7c(uVar11,ppiVar16);
  *(undefined8 *)(lVar19 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar19 + -0x78) = lVar9;
  *(undefined8 *)(lVar19 + -0x70) = uVar11;
  *(int ***)(lVar19 + -0x68) = ppiVar16;
  if ((*(long *)(lVar10 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar10 + 0x38) == 0)) {
    func_0x03256878(lVar10);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
  *(undefined8 *)(lVar19 + -0x90) = *(undefined8 *)(lVar19 + -0x80);
  *(ulong *)(lVar19 + -0x80) = uVar12;
  *(undefined8 *)(lVar19 + -0x78) = *(undefined8 *)(lVar19 + -0x78);
  *(undefined8 *)(lVar19 + -0x70) = *(undefined8 *)(lVar19 + -0x70);
  *(undefined8 *)(lVar19 + -0x68) = *(undefined8 *)(lVar19 + -0x68);
  if ((*(long *)(lVar9 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar9 + 0x38) == 0)) {
    func_0x03256878(lVar9);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar10 = func_0x06fe3fe0(auVar23._0_8_,auVar23._8_8_,0,0);
  lVar9 = **(long **)(lVar9 + 0x38);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x0325681c(lVar9);
  }
  if (lVar10 != 0) {
    uVar12 = func_0x03280b90(lVar10,lVar9);
    if (uVar12 != 0) {
      return uVar12;
    }
    func_0x03281048(lVar10,lVar9);
  }
  return 0;
LAB_03e91044:
  lVar19 = lVar18 + (long)*piVar21 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_1e0 + lVar13) = (long)&uStack_1cc + lVar13;
  *(long *)((long)&lStack_1d8 + lVar13) = lVar17;
  lVar19 = *(long *)(lVar19 + 8);
  ppiVar16 = (int **)((long)&piStack_1e0 + lVar13);
  (**(code **)(lVar19 + 0x10))(*(undefined8 *)(lVar19 + 8),lVar19,plVar2,ppiVar16,lVar17);
  uVar15 = uVar12;
  uVar8 = func_0x072ce970(uVar7,lVar17);
  if (*(long *)(lVar10 + 0x28) == *(long *)((long)&lStack_1c8 + lVar13)) {
    return uVar8;
  }
  goto LAB_03e910e8;
}


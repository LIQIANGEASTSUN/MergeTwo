/* Ghidra 12.1.2 native pseudocode; RVA 0x6741750; Merger.Game.Views.Board.BoardQueueView.TryDisplayQueuedItem; status ok */


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
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView__TryDisplayQueuedItem(long param_1)

{
  undefined *puVar1;
  code **ppcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  int **ppiVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_x21;
  ulong unaff_x24;
  undefined8 unaff_x26;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong auStack_2c0 [18];
  undefined1 auStack_230 [8];
  int *piStack_228;
  long alStack_220 [2];
  undefined1 auStack_210 [8];
  long alStack_208 [9];
  int *piStack_1c0;
  long lStack_1b8;
  uint uStack_1ac;
  long lStack_1a8;
  undefined1 auStack_1a0 [8];
  ulong auStack_198 [11];
  int *piStack_140;
  long lStack_138;
  int iStack_12c;
  long lStack_128;
  undefined8 uStack_90;
  code *pcStack_60;
  code *pcStack_40;
  long lStack_38;
  
  if ((bRam0000000007e28a66 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a5d0);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a66 = 1;
  }
  func_0x068424a8(param_1);
  UNRECOVERED_JUMPTABLE = (code *)0x7e28000;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar11 = func_0x0674b454(*(long *)(param_1 + 0x28),0);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
    if (lVar11 == 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        func_0x069b649c(UNRECOVERED_JUMPTABLE,0);
        goto LAB_068417f0;
      }
    }
    else if ((*(long *)(param_1 + 0x28) != 0) &&
            (uVar12 = func_0x0674b454(*(long *)(param_1 + 0x28),0),
            UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      func_0x069acef8(UNRECOVERED_JUMPTABLE,uVar12,0);
LAB_068417f0:
      pcVar13 = (code *)func_0x06841248(param_1);
      uVar5 = func_0x068412f0(param_1);
      UNRECOVERED_JUMPTABLE = pcVar13;
      if (pcVar13 != (code *)0x0) {
        uVar5 = uVar5 & 1;
        goto SUB_06fdf26c;
      }
    }
  }
  uVar14 = func_0x03280cac();
  pcStack_40 = Merger_Game_Views_Board_BoardQueueView__MoveToFront;
  lStack_38 = param_1;
  uVar12 = func_0x06fdbed0(uVar14,0);
  ppiVar18 = (int **)0x1;
  func_0x067b2ca0(uVar12,0,0x1f9,1,0);
  if ((*(long *)(uVar14 + 0x58) != 0) &&
     (pcVar13 = (code *)func_0x06fdbed0(*(long *)(uVar14 + 0x58),0), pcVar13 != (code *)0x0)) {
    uVar5 = 0;
    param_1 = lStack_38;
SUB_06fdf26c:
    pcStack_40 = UNRECOVERED_JUMPTABLE;
    lStack_38 = param_1;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar14 = (*pcRam0000000007e2fbf0)(pcVar13,uVar5);
    return uVar14;
  }
  uVar12 = func_0x03280cac();
  lVar11 = func_0x06fdbed0(uVar12,0);
  uVar17 = 0;
  pcStack_60 = Merger_Game_Views_Board_BoardQueueView__MoveToBack;
  if ((bRam0000000007e283fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809f58);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e283fd = 1;
  }
  lVar15 = *(long *)PTR_DAT_07809138;
  if ((*(long *)(lVar15 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar15 + 0x38) == 0)) {
    func_0x03256878(lVar15);
  }
  if (lVar11 != 0) {
    pcVar13 = (code *)func_0x03dc9518(lVar11,**(undefined8 **)(lVar15 + 0x38));
    puVar1 = PTR_DAT_0774e4e0;
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
    }
    uVar17 = func_0x06fdeb74(pcVar13,0,0);
    if ((uVar17 & 1) == 0) {
      return uVar17;
    }
    ppcVar2 = &pcStack_40;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
      ppcVar2 = &pcStack_40;
    }
SUB_06fe41c8:
    puVar1 = PTR_DAT_0774e4e0;
    *(code **)((long)ppcVar2 + -0x20) = pcStack_60;
    *(undefined8 *)((long)ppcVar2 + -0x18) = unaff_x21;
    *(code **)((long)ppcVar2 + -0x10) = UNRECOVERED_JUMPTABLE;
    *(ulong *)((long)ppcVar2 + -8) = uVar14;
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
    uVar14 = (*pcRam0000000007e2fdd0)(0,pcVar13);
    return uVar14;
  }
  auVar25 = func_0x03280cac();
  lVar11 = auVar25._8_8_;
  uStack_90 = 0x3e901b8;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if ((auVar25._0_8_ != 0) &&
     (uVar14 = func_0x03dc9f70(auVar25._0_8_,**(undefined8 **)(lVar11 + 0x38)), uVar14 != 0)) {
    if ((int)*(ulong *)(uVar14 + 0x18) < 1) {
      return uVar14;
    }
    unaff_x21 = 0;
    if ((*(ulong *)(uVar14 + 0x18) & 0xffffffff) != 0) {
      pcVar13 = *(code **)(uVar14 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      pcStack_60 = (code *)0x3e90254;
      ppcVar2 = (code **)&uStack_90;
      UNRECOVERED_JUMPTABLE = pcVar13;
      goto SUB_06fe41c8;
    }
    func_0x03280cb4();
  }
  auVar25 = func_0x03280cac();
  lVar11 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar19 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar14 != 0) {
      piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar14 = uVar14 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar14 != 0);
    }
    uVar17 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e90304:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 0) {
      lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar19 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar14 = uVar14 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e90378:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar15 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar19 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar14 = uVar14 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e903f0:
      uVar14 = (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar19 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e90468:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar15 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,4);
LAB_03e904e0:
      (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      return uVar14 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar12 = func_0x03280ca0();
  func_0x05796364(uVar12,0);
  auVar25 = func_0x03280b7c(uVar12,lVar11);
  lVar11 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar19 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar14 != 0) {
      piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar14 = uVar14 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar14 != 0);
    }
    uVar17 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e905b4:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 0) {
      lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar19 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar14 = uVar14 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e90628:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar15 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar19 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar14 = uVar14 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e906a0:
      uVar14 = (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      lVar15 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar19 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar15) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e90718:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar15 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,4);
LAB_03e90790:
      (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      return uVar14;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar12 = func_0x03280ca0();
  func_0x05796364(uVar12,0);
  auVar25 = func_0x03280b7c(uVar12,lVar11);
  uVar12 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  lVar11 = tpidr_el0;
  lStack_128 = *(long *)(lVar11 + 0x28);
  lVar15 = *(long *)(uVar17 + 0x38);
  if (lVar15 == 0) {
    func_0x03256878(uVar17);
    lVar15 = *(long *)(uVar17 + 0x38);
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar15 + 0x20) + 0xfc);
  lVar19 = -(uVar14 + 0xf & 0x1fffffff0);
  lVar22 = (long)&piStack_140 + lVar19;
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar12 = func_0x03280ca0();
    func_0x05796364(uVar12,0);
    func_0x03280b7c(uVar12,uVar17);
  }
  else {
    lVar15 = *(long *)(lVar15 + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar20 = *plVar6;
    uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e908a4:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 == 0) goto LAB_03e90ae0;
    lVar15 = *(long *)(*(long *)(uVar17 + 0x38) + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar20 = *plVar6;
    uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e90918:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    unaff_x24 = (ulong)uVar5;
    lVar15 = **(long **)(uVar17 + 0x38);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    iStack_12c = uVar5 - 1;
    lVar20 = *plVar6;
    uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          lVar15 = lVar20 + (long)*piVar24 * 0x10 + 0x138;
          goto LAB_03e90994;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    lVar15 = func_0x03256b10(plVar6,lVar15,0);
LAB_03e90994:
    piStack_140 = &iStack_12c;
    lVar15 = *(long *)(lVar15 + 8);
    ppiVar18 = &piStack_140;
    lStack_138 = lVar22;
    (**(code **)(lVar15 + 0x10))(*(undefined8 *)(lVar15 + 8),lVar15,plVar6,ppiVar18,lVar22);
    lVar15 = *(long *)(*(long *)(uVar17 + 0x38) + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar20 = *plVar6;
    uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,0);
LAB_03e90a18:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar7 = (undefined8 *)(uVar17 + 0x38);
    uVar17 = (ulong)uVar5;
    lVar15 = *(long *)*puVar7;
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar20 = *plVar6;
    uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar20 + (long)(*piVar24 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar15,4);
LAB_03e90a90:
    (*(code *)*puVar7)(plVar6,uVar5 - 1,puVar7[1]);
    uVar23 = func_0x072ce970(uVar12,lVar22,uVar14);
    if (*(long *)(lVar11 + 0x28) == lStack_128) {
      return uVar23;
    }
  }
  auVar25 = func_0x072ce990();
  lVar15 = auVar25._8_8_;
  plVar8 = auVar25._0_8_;
  *(undefined8 *)((long)auStack_198 + lVar19 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_198 + lVar19 + 0x48) = plVar6;
  *(undefined8 *)((long)auStack_198 + lVar19 + 0x50) = uVar12;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar20 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar21 = *plVar8;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar20) {
          puVar7 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar20,0);
LAB_03e90b94:
    iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (iVar3 != 0) {
      lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar19 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar14 = uVar14 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90c08:
      iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (iVar3 == 1) {
        lVar11 = **(long **)(lVar15 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar15 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar14 != 0) {
          piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar14 = uVar14 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        uVar12 = puVar7[1];
        uVar4 = 0;
      }
      else {
        lVar11 = (*(long **)(lVar15 + 0x38))[1];
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar19 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar14 != 0) {
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar14 = uVar14 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90cf0:
        uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar4 = func_0x06fd9864(0,uVar4,0);
        lVar11 = **(long **)(lVar15 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar15 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar14 != 0) {
          piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar14 = uVar14 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        uVar12 = puVar7[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*UNRECOVERED_JUMPTABLE)(plVar8,uVar4,uVar12);
      return uVar14;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar12 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar23 = 0;
  func_0x05791bcc(uVar12,uVar9);
  auVar25 = func_0x03280b7c(uVar12,lVar15);
  uVar9 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  *(undefined1 **)(auStack_1a0 + lVar19) = &stack0xfffffffffffffee0;
  *(undefined8 *)((long)auStack_198 + lVar19) = 0x3e90dcc;
  *(ulong *)((long)auStack_198 + lVar19 + 8) = unaff_x24;
  *(ulong *)((long)auStack_198 + lVar19 + 0x10) = uVar17;
  *(long *)((long)auStack_198 + lVar19 + 0x18) = lVar22;
  *(ulong *)((long)auStack_198 + lVar19 + 0x20) = uVar14;
  *(long *)((long)auStack_198 + lVar19 + 0x28) = lVar15;
  *(undefined8 *)((long)auStack_198 + lVar19 + 0x30) = uVar12;
  lVar15 = tpidr_el0;
  *(undefined8 *)((long)&lStack_1a8 + lVar19) = *(undefined8 *)(lVar15 + 0x28);
  lVar22 = *(long *)(uVar23 + 0x38);
  if (lVar22 == 0) {
    func_0x03256878(uVar23);
    lVar22 = *(long *)(uVar23 + 0x38);
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar22 + 0x20) + 0xfc);
  lVar20 = (long)&piStack_1c0 + (lVar19 - (uVar14 + 0xf & 0x1fffffff0));
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar22 = *(long *)(lVar22 + 8);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar21 = *plVar6;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar22) {
          puVar7 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar17 = uVar17 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar17 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar22,0);
LAB_03e90e90:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 0) {
      lVar22 = *(long *)(*(long *)(uVar23 + 0x38) + 8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar21 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar22) {
            puVar7 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar17 = uVar17 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar22,0);
LAB_03e90f04:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar3 == 1) {
        lVar22 = **(long **)(uVar23 + 0x38);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        *(undefined4 *)((long)&uStack_1ac + lVar19) = 0;
        lVar21 = *plVar6;
        uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar17 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar22) goto LAB_03e91044;
            uVar17 = uVar17 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar17 != 0);
        }
      }
      else {
        lVar22 = (*(long **)(uVar23 + 0x38))[1];
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar21 = *plVar6;
        uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar17 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar22) {
              puVar7 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar17 = uVar17 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar17 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar22,0);
LAB_03e90fc8:
        uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar5 = func_0x06fd9864(0,uVar4,0);
        puVar7 = (undefined8 *)(uVar23 + 0x38);
        uVar23 = (ulong)uVar5;
        lVar22 = *(long *)*puVar7;
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        *(uint *)((long)&uStack_1ac + lVar19) = uVar5;
        lVar21 = *plVar6;
        uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar17 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar22) goto LAB_03e91044;
            uVar17 = uVar17 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar17 != 0);
        }
      }
      lVar22 = func_0x03256b10(plVar6,lVar22,0);
      goto LAB_03e91050;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar9 = func_0x03280ca0();
  uVar12 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar17 = 0;
  func_0x05791bcc(uVar9,uVar12);
  func_0x03280b7c(uVar9,uVar23);
LAB_03e910e8:
  auVar25 = func_0x072ce990();
  plVar8 = auVar25._0_8_;
  *(undefined1 **)(lVar20 + -0x50) = auStack_1a0 + lVar19;
  *(undefined8 *)(lVar20 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar20 + -0x40) = unaff_x26;
  *(long *)(lVar20 + -0x38) = lVar11;
  *(long *)(lVar20 + -0x30) = lVar15;
  *(ulong *)(lVar20 + -0x28) = uVar23;
  *(long *)(lVar20 + -0x20) = lVar20;
  *(ulong *)(lVar20 + -0x18) = uVar14;
  *(long **)(lVar20 + -0x10) = plVar6;
  *(undefined8 *)(lVar20 + -8) = uVar9;
  lVar11 = tpidr_el0;
  *(undefined8 *)(lVar20 + -0x58) = *(undefined8 *)(lVar11 + 0x28);
  lVar15 = *(long *)(uVar17 + 0x38);
  if (lVar15 == 0) {
    func_0x03256878(uVar17);
    lVar15 = *(long *)(uVar17 + 0x38);
  }
  uVar23 = (ulong)*(uint *)(*(long *)(lVar15 + 0x18) + 0xfc);
  uVar14 = uVar23 + 0xf & 0x1fffffff0;
  lVar19 = (lVar20 + -0x70) - uVar14;
  lVar22 = lVar19 - uVar14;
  func_0x072ce9a0(lVar22,0,uVar23);
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar15 = *(long *)(lVar15 + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar21 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar14 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar15) {
          puVar7 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar14 = uVar14 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar15,0);
LAB_03e911d0:
    iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (iVar3 == 0) {
      func_0x072ce9a0(lVar22,0,uVar23);
      func_0x072ce970(lVar19,lVar22,uVar23);
    }
    else {
      ppiVar18 = (int **)(lVar20 + -0x68);
      puVar7 = *(undefined8 **)(*(long *)(uVar17 + 0x38) + 0x20);
      uVar12 = *puVar7;
      *(long **)(lVar20 + -0x68) = plVar8;
      *(long *)(lVar20 + -0x60) = lVar19;
      (*(code *)puVar7[2])(uVar12,puVar7,0,ppiVar18,lVar19);
    }
    uVar14 = func_0x072ce970(auVar25._8_8_,lVar19,uVar23);
    if (*(long *)(lVar11 + 0x28) == *(long *)(lVar20 + -0x58)) {
      return uVar14;
    }
  }
  auVar26 = func_0x072ce990();
  lVar11 = auVar26._8_8_;
  *(undefined8 *)(lVar22 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar22 + -0x10) = uVar23;
  *(long *)(lVar22 + -8) = auVar25._8_8_;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
  *(undefined8 *)(lVar22 + -0x30) = *(undefined8 *)(lVar22 + -0x20);
  *(ulong *)(lVar22 + -0x20) = uVar17;
  *(long *)(lVar22 + -0x18) = lVar19;
  *(undefined8 *)(lVar22 + -0x10) = *(undefined8 *)(lVar22 + -0x10);
  *(undefined8 *)(lVar22 + -8) = *(undefined8 *)(lVar22 + -8);
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (*(long *)(lVar11 + 0x38) == 0) {
      func_0x03256878(lVar11);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar26._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar15 = func_0x06fe3dd4(auVar26._0_8_,0);
  lVar19 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c(lVar19);
  }
  if (lVar15 == 0) {
LAB_03e3cc18:
    uVar14 = 0;
  }
  else {
    uVar14 = func_0x03280b90(lVar15,lVar19);
    if (uVar14 == 0) {
      func_0x03281048(lVar15,lVar19);
      goto LAB_03e3cc18;
    }
  }
  uVar17 = func_0x06fe04ec(uVar14,0,0);
  if ((uVar17 & 1) == 0) {
    return uVar14;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar12 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar16 = 0;
  func_0x06fe0874(uVar12,uVar9,0);
  auVar25 = func_0x03280b7c(uVar12,lVar11);
  *(undefined8 *)(lVar22 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar22 + -0x50) = uVar14;
  *(long *)(lVar22 + -0x48) = lVar15;
  *(undefined8 *)(lVar22 + -0x40) = uVar12;
  *(long *)(lVar22 + -0x38) = lVar11;
  if (ppiVar18[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (ppiVar18[7] == (int *)0x0) {
      func_0x03256878(ppiVar18);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar25._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar11 = func_0x06fe4bb8(auVar25._0_8_,auVar25._8_8_,uVar16,0);
  lVar15 = *(long *)ppiVar18[7];
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  if (lVar11 != 0) {
    uVar14 = func_0x03280b90(lVar11,lVar15);
    if (uVar14 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar11,lVar15);
  }
  uVar14 = 0;
LAB_03e3cd58:
  uVar17 = func_0x06fe04ec(uVar14,0,0);
  if ((uVar17 & 1) == 0) {
    return uVar14;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar12 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar15 = 0;
  func_0x06fe0874(uVar12,uVar9);
  auVar25 = func_0x03280b7c(uVar12,ppiVar18);
  *(undefined8 *)(lVar22 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar22 + -0x78) = lVar11;
  *(undefined8 *)(lVar22 + -0x70) = uVar12;
  *(int ***)(lVar22 + -0x68) = ppiVar18;
  if ((*(long *)(lVar15 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar15 + 0x38) == 0)) {
    func_0x03256878(lVar15);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
  *(undefined8 *)(lVar22 + -0x90) = *(undefined8 *)(lVar22 + -0x80);
  *(ulong *)(lVar22 + -0x80) = uVar14;
  *(undefined8 *)(lVar22 + -0x78) = *(undefined8 *)(lVar22 + -0x78);
  *(undefined8 *)(lVar22 + -0x70) = *(undefined8 *)(lVar22 + -0x70);
  *(undefined8 *)(lVar22 + -0x68) = *(undefined8 *)(lVar22 + -0x68);
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar15 = func_0x06fe3fe0(auVar25._0_8_,auVar25._8_8_,0,0);
  lVar11 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  if (lVar15 != 0) {
    uVar14 = func_0x03280b90(lVar15,lVar11);
    if (uVar14 != 0) {
      return uVar14;
    }
    func_0x03281048(lVar15,lVar11);
  }
  return 0;
LAB_03e91044:
  lVar22 = lVar21 + (long)*piVar24 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_1c0 + lVar19) = (long)&uStack_1ac + lVar19;
  *(long *)((long)&lStack_1b8 + lVar19) = lVar20;
  lVar22 = *(long *)(lVar22 + 8);
  ppiVar18 = (int **)((long)&piStack_1c0 + lVar19);
  (**(code **)(lVar22 + 0x10))(*(undefined8 *)(lVar22 + 8),lVar22,plVar6,ppiVar18,lVar20);
  uVar17 = uVar14;
  uVar10 = func_0x072ce970(uVar9,lVar20);
  if (*(long *)(lVar15 + 0x28) == *(long *)((long)&lStack_1a8 + lVar19)) {
    return uVar10;
  }
  goto LAB_03e910e8;
}


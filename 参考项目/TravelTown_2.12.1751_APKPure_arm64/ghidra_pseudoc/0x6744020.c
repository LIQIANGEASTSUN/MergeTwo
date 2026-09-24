/* Ghidra 12.1.2 native pseudocode; RVA 0x6744020; Merger.Game.Views.Board.BoardQueueView2.TryDisplayQueuedItem; status ok */


/* WARNING: Possible PIC construction at 0x068440c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x068440c4) */
/* WARNING: Removing unreachable block (ram,0x068440cc) */
/* WARNING: Removing unreachable block (ram,0x068440dc) */
/* WARNING: Removing unreachable block (ram,0x068440f4) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView2__TryDisplayQueuedItem(long param_1)

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
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  int **ppiVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar24;
  undefined8 unaff_x21;
  ulong unaff_x24;
  undefined8 unaff_x26;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong auStack_2b0 [18];
  undefined1 auStack_220 [8];
  int *piStack_218;
  long alStack_210 [2];
  undefined1 auStack_200 [8];
  long alStack_1f8 [9];
  int *piStack_1b0;
  long lStack_1a8;
  uint uStack_19c;
  long lStack_198;
  undefined1 auStack_190 [8];
  ulong auStack_188 [11];
  int *piStack_130;
  long lStack_128;
  int iStack_11c;
  long lStack_118;
  undefined8 uStack_80;
  code *pcStack_50;
  code *pcStack_30;
  long lStack_28;
  
  UNRECOVERED_JUMPTABLE = (code *)0x7e28000;
  if ((bRam0000000007e28a7c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0780e008);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a7c = 1;
  }
  func_0x068445c4(param_1);
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar11 = func_0x0674ae44(*(long *)(param_1 + 0x28),0), lVar11 != 0)) &&
     (*(long *)(param_1 + 0x50) != 0)) {
    if (*(long *)(lVar11 + 0x20) == 0) {
      func_0x069b649c();
    }
    else {
      func_0x069acef8(*(long *)(param_1 + 0x50),*(long *)(lVar11 + 0x20),0);
    }
    pcVar24 = *(code **)(param_1 + 0xa8);
    uVar5 = func_0x06842ea0(param_1);
    UNRECOVERED_JUMPTABLE = pcVar24;
    if (pcVar24 != (code *)0x0) {
      uVar5 = uVar5 & 1;
      goto SUB_06fdf26c;
    }
  }
  uVar12 = func_0x03280cac();
  pcStack_30 = Merger_Game_Views_Board_BoardQueueView2__MoveToFront;
  lStack_28 = param_1;
  uVar13 = func_0x06fdbed0(uVar12,0);
  ppiVar17 = (int **)0x1;
  func_0x067b2ca0(uVar13,0,0x1f9,1,0);
  if ((*(long *)(uVar12 + 0x78) != 0) &&
     (pcVar24 = (code *)func_0x06fdbed0(*(long *)(uVar12 + 0x78),0), pcVar24 != (code *)0x0)) {
    uVar5 = 0;
    param_1 = lStack_28;
SUB_06fdf26c:
    pcStack_30 = UNRECOVERED_JUMPTABLE;
    lStack_28 = param_1;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*pcRam0000000007e2fbf0)(pcVar24,uVar5);
    return uVar12;
  }
  uVar13 = func_0x03280cac();
  lVar11 = func_0x06fdbed0(uVar13,0);
  uVar16 = 0;
  pcStack_50 = Merger_Game_Views_Board_BoardQueueView2__MoveToBack;
  if ((bRam0000000007e283fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809f58);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e283fd = 1;
  }
  lVar14 = *(long *)PTR_DAT_07809138;
  if ((*(long *)(lVar14 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar14 + 0x38) == 0)) {
    func_0x03256878(lVar14);
  }
  if (lVar11 != 0) {
    pcVar24 = (code *)func_0x03dc9518(lVar11,**(undefined8 **)(lVar14 + 0x38));
    puVar1 = PTR_DAT_0774e4e0;
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
    }
    uVar16 = func_0x06fdeb74(pcVar24,0,0);
    if ((uVar16 & 1) == 0) {
      return uVar16;
    }
    ppcVar2 = &pcStack_30;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
      ppcVar2 = &pcStack_30;
    }
SUB_06fe41c8:
    puVar1 = PTR_DAT_0774e4e0;
    *(code **)((long)ppcVar2 + -0x20) = pcStack_50;
    *(undefined8 *)((long)ppcVar2 + -0x18) = unaff_x21;
    *(code **)((long)ppcVar2 + -0x10) = UNRECOVERED_JUMPTABLE;
    *(ulong *)((long)ppcVar2 + -8) = uVar12;
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
    uVar12 = (*pcRam0000000007e2fdd0)(0,pcVar24);
    return uVar12;
  }
  auVar25 = func_0x03280cac();
  lVar11 = auVar25._8_8_;
  uStack_80 = 0x3e901b8;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if ((auVar25._0_8_ != 0) &&
     (uVar12 = func_0x03dc9f70(auVar25._0_8_,**(undefined8 **)(lVar11 + 0x38)), uVar12 != 0)) {
    if ((int)*(ulong *)(uVar12 + 0x18) < 1) {
      return uVar12;
    }
    unaff_x21 = 0;
    if ((*(ulong *)(uVar12 + 0x18) & 0xffffffff) != 0) {
      pcVar24 = *(code **)(uVar12 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      pcStack_50 = (code *)0x3e90254;
      ppcVar2 = (code **)&uStack_80;
      UNRECOVERED_JUMPTABLE = pcVar24;
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
    lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar18 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    uVar16 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e90304:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 0) {
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar18 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e90378:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar14 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar18 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e903f0:
      uVar12 = (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar18 = *plVar6;
      uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar16 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar16 = uVar16 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e90468:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar14 = *plVar6;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar23 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar16 = uVar16 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,4);
LAB_03e904e0:
      (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      return uVar12 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar13 = func_0x03280ca0();
  func_0x05796364(uVar13,0);
  auVar25 = func_0x03280b7c(uVar13,lVar11);
  lVar11 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar18 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    uVar16 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e905b4:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 0) {
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar18 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e90628:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar14 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar18 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e906a0:
      uVar12 = (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar18 = *plVar6;
      uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar16 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar16 = uVar16 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e90718:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar14 = *plVar6;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar23 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar16 = uVar16 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,4);
LAB_03e90790:
      (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar13 = func_0x03280ca0();
  func_0x05796364(uVar13,0);
  auVar25 = func_0x03280b7c(uVar13,lVar11);
  uVar13 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  lVar11 = tpidr_el0;
  lStack_118 = *(long *)(lVar11 + 0x28);
  lVar14 = *(long *)(uVar16 + 0x38);
  if (lVar14 == 0) {
    func_0x03256878(uVar16);
    lVar14 = *(long *)(uVar16 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar14 + 0x20) + 0xfc);
  lVar18 = -(uVar12 + 0xf & 0x1fffffff0);
  lVar21 = (long)&piStack_130 + lVar18;
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar13 = func_0x03280ca0();
    func_0x05796364(uVar13,0);
    func_0x03280b7c(uVar13,uVar16);
  }
  else {
    lVar14 = *(long *)(lVar14 + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e908a4:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 == 0) goto LAB_03e90ae0;
    lVar14 = *(long *)(*(long *)(uVar16 + 0x38) + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e90918:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    unaff_x24 = (ulong)uVar5;
    lVar14 = **(long **)(uVar16 + 0x38);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    iStack_11c = uVar5 - 1;
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          lVar14 = lVar19 + (long)*piVar23 * 0x10 + 0x138;
          goto LAB_03e90994;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    lVar14 = func_0x03256b10(plVar6,lVar14,0);
LAB_03e90994:
    piStack_130 = &iStack_11c;
    lVar14 = *(long *)(lVar14 + 8);
    ppiVar17 = &piStack_130;
    lStack_128 = lVar21;
    (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 8),lVar14,plVar6,ppiVar17,lVar21);
    lVar14 = *(long *)(*(long *)(uVar16 + 0x38) + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,0);
LAB_03e90a18:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar7 = (undefined8 *)(uVar16 + 0x38);
    uVar16 = (ulong)uVar5;
    lVar14 = *(long *)*puVar7;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar19 = *plVar6;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar19 + (long)(*piVar23 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar14,4);
LAB_03e90a90:
    (*(code *)*puVar7)(plVar6,uVar5 - 1,puVar7[1]);
    uVar22 = func_0x072ce970(uVar13,lVar21,uVar12);
    if (*(long *)(lVar11 + 0x28) == lStack_118) {
      return uVar22;
    }
  }
  auVar25 = func_0x072ce990();
  lVar14 = auVar25._8_8_;
  plVar8 = auVar25._0_8_;
  *(undefined8 *)((long)auStack_188 + lVar18 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_188 + lVar18 + 0x48) = plVar6;
  *(undefined8 *)((long)auStack_188 + lVar18 + 0x50) = uVar13;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar20 = *plVar8;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar19) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar19,0);
LAB_03e90b94:
    iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (iVar3 != 0) {
      lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar18 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90c08:
      iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (iVar3 == 1) {
        lVar11 = **(long **)(lVar14 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar14 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        uVar13 = puVar7[1];
        uVar4 = 0;
      }
      else {
        lVar11 = (*(long **)(lVar14 + 0x38))[1];
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar18 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90cf0:
        uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar4 = func_0x06fd9864(0,uVar4,0);
        lVar11 = **(long **)(lVar14 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar14 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        uVar13 = puVar7[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*UNRECOVERED_JUMPTABLE)(plVar8,uVar4,uVar13);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar13 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar22 = 0;
  func_0x05791bcc(uVar13,uVar9);
  auVar25 = func_0x03280b7c(uVar13,lVar14);
  uVar9 = auVar25._8_8_;
  plVar6 = auVar25._0_8_;
  *(undefined1 **)(auStack_190 + lVar18) = &stack0xfffffffffffffef0;
  *(undefined8 *)((long)auStack_188 + lVar18) = 0x3e90dcc;
  *(ulong *)((long)auStack_188 + lVar18 + 8) = unaff_x24;
  *(ulong *)((long)auStack_188 + lVar18 + 0x10) = uVar16;
  *(long *)((long)auStack_188 + lVar18 + 0x18) = lVar21;
  *(ulong *)((long)auStack_188 + lVar18 + 0x20) = uVar12;
  *(long *)((long)auStack_188 + lVar18 + 0x28) = lVar14;
  *(undefined8 *)((long)auStack_188 + lVar18 + 0x30) = uVar13;
  lVar14 = tpidr_el0;
  *(undefined8 *)((long)&lStack_198 + lVar18) = *(undefined8 *)(lVar14 + 0x28);
  lVar21 = *(long *)(uVar22 + 0x38);
  if (lVar21 == 0) {
    func_0x03256878(uVar22);
    lVar21 = *(long *)(uVar22 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar21 + 0x20) + 0xfc);
  lVar19 = (long)&piStack_1b0 + (lVar18 - (uVar12 + 0xf & 0x1fffffff0));
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar21 = *(long *)(lVar21 + 8);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar20 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar16 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar21) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar16 = uVar16 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar21,0);
LAB_03e90e90:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 != 0) {
      lVar21 = *(long *)(*(long *)(uVar22 + 0x38) + 8);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      lVar20 = *plVar6;
      uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar16 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar21) {
            puVar7 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar16 = uVar16 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar21,0);
LAB_03e90f04:
      iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar3 == 1) {
        lVar21 = **(long **)(uVar22 + 0x38);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        *(undefined4 *)((long)&uStack_19c + lVar18) = 0;
        lVar20 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar16 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar21) goto LAB_03e91044;
            uVar16 = uVar16 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar16 != 0);
        }
      }
      else {
        lVar21 = (*(long **)(uVar22 + 0x38))[1];
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        lVar20 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar16 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar21) {
              puVar7 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar16 = uVar16 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar21,0);
LAB_03e90fc8:
        uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar5 = func_0x06fd9864(0,uVar4,0);
        puVar7 = (undefined8 *)(uVar22 + 0x38);
        uVar22 = (ulong)uVar5;
        lVar21 = *(long *)*puVar7;
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        *(uint *)((long)&uStack_19c + lVar18) = uVar5;
        lVar20 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar16 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar21) goto LAB_03e91044;
            uVar16 = uVar16 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar16 != 0);
        }
      }
      lVar21 = func_0x03256b10(plVar6,lVar21,0);
      goto LAB_03e91050;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar9 = func_0x03280ca0();
  uVar13 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar16 = 0;
  func_0x05791bcc(uVar9,uVar13);
  func_0x03280b7c(uVar9,uVar22);
LAB_03e910e8:
  auVar25 = func_0x072ce990();
  plVar8 = auVar25._0_8_;
  *(undefined1 **)(lVar19 + -0x50) = auStack_190 + lVar18;
  *(undefined8 *)(lVar19 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar19 + -0x40) = unaff_x26;
  *(long *)(lVar19 + -0x38) = lVar11;
  *(long *)(lVar19 + -0x30) = lVar14;
  *(ulong *)(lVar19 + -0x28) = uVar22;
  *(long *)(lVar19 + -0x20) = lVar19;
  *(ulong *)(lVar19 + -0x18) = uVar12;
  *(long **)(lVar19 + -0x10) = plVar6;
  *(undefined8 *)(lVar19 + -8) = uVar9;
  lVar11 = tpidr_el0;
  *(undefined8 *)(lVar19 + -0x58) = *(undefined8 *)(lVar11 + 0x28);
  lVar14 = *(long *)(uVar16 + 0x38);
  if (lVar14 == 0) {
    func_0x03256878(uVar16);
    lVar14 = *(long *)(uVar16 + 0x38);
  }
  uVar22 = (ulong)*(uint *)(*(long *)(lVar14 + 0x18) + 0xfc);
  uVar12 = uVar22 + 0xf & 0x1fffffff0;
  lVar18 = (lVar19 + -0x70) - uVar12;
  lVar21 = lVar18 - uVar12;
  func_0x072ce9a0(lVar21,0,uVar22);
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar14 = *(long *)(lVar14 + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar20 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar14,0);
LAB_03e911d0:
    iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (iVar3 == 0) {
      func_0x072ce9a0(lVar21,0,uVar22);
      func_0x072ce970(lVar18,lVar21,uVar22);
    }
    else {
      ppiVar17 = (int **)(lVar19 + -0x68);
      puVar7 = *(undefined8 **)(*(long *)(uVar16 + 0x38) + 0x20);
      uVar13 = *puVar7;
      *(long **)(lVar19 + -0x68) = plVar8;
      *(long *)(lVar19 + -0x60) = lVar18;
      (*(code *)puVar7[2])(uVar13,puVar7,0,ppiVar17,lVar18);
    }
    uVar12 = func_0x072ce970(auVar25._8_8_,lVar18,uVar22);
    if (*(long *)(lVar11 + 0x28) == *(long *)(lVar19 + -0x58)) {
      return uVar12;
    }
  }
  auVar26 = func_0x072ce990();
  lVar11 = auVar26._8_8_;
  *(undefined8 *)(lVar21 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar21 + -0x10) = uVar22;
  *(long *)(lVar21 + -8) = auVar25._8_8_;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
  *(undefined8 *)(lVar21 + -0x30) = *(undefined8 *)(lVar21 + -0x20);
  *(ulong *)(lVar21 + -0x20) = uVar16;
  *(long *)(lVar21 + -0x18) = lVar18;
  *(undefined8 *)(lVar21 + -0x10) = *(undefined8 *)(lVar21 + -0x10);
  *(undefined8 *)(lVar21 + -8) = *(undefined8 *)(lVar21 + -8);
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
  lVar14 = func_0x06fe3dd4(auVar26._0_8_,0);
  lVar18 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c(lVar18);
  }
  if (lVar14 == 0) {
LAB_03e3cc18:
    uVar12 = 0;
  }
  else {
    uVar12 = func_0x03280b90(lVar14,lVar18);
    if (uVar12 == 0) {
      func_0x03281048(lVar14,lVar18);
      goto LAB_03e3cc18;
    }
  }
  uVar16 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar16 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar13 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar15 = 0;
  func_0x06fe0874(uVar13,uVar9,0);
  auVar25 = func_0x03280b7c(uVar13,lVar11);
  *(undefined8 *)(lVar21 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar21 + -0x50) = uVar12;
  *(long *)(lVar21 + -0x48) = lVar14;
  *(undefined8 *)(lVar21 + -0x40) = uVar13;
  *(long *)(lVar21 + -0x38) = lVar11;
  if (ppiVar17[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (ppiVar17[7] == (int *)0x0) {
      func_0x03256878(ppiVar17);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar25._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar11 = func_0x06fe4bb8(auVar25._0_8_,auVar25._8_8_,uVar15,0);
  lVar14 = *(long *)ppiVar17[7];
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c(lVar14);
  }
  if (lVar11 != 0) {
    uVar12 = func_0x03280b90(lVar11,lVar14);
    if (uVar12 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar11,lVar14);
  }
  uVar12 = 0;
LAB_03e3cd58:
  uVar16 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar16 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar13 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar14 = 0;
  func_0x06fe0874(uVar13,uVar9);
  auVar25 = func_0x03280b7c(uVar13,ppiVar17);
  *(undefined8 *)(lVar21 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar21 + -0x78) = lVar11;
  *(undefined8 *)(lVar21 + -0x70) = uVar13;
  *(int ***)(lVar21 + -0x68) = ppiVar17;
  if ((*(long *)(lVar14 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar14 + 0x38) == 0)) {
    func_0x03256878(lVar14);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
  *(undefined8 *)(lVar21 + -0x90) = *(undefined8 *)(lVar21 + -0x80);
  *(ulong *)(lVar21 + -0x80) = uVar12;
  *(undefined8 *)(lVar21 + -0x78) = *(undefined8 *)(lVar21 + -0x78);
  *(undefined8 *)(lVar21 + -0x70) = *(undefined8 *)(lVar21 + -0x70);
  *(undefined8 *)(lVar21 + -0x68) = *(undefined8 *)(lVar21 + -0x68);
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar14 = func_0x06fe3fe0(auVar25._0_8_,auVar25._8_8_,0,0);
  lVar11 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  if (lVar14 != 0) {
    uVar12 = func_0x03280b90(lVar14,lVar11);
    if (uVar12 != 0) {
      return uVar12;
    }
    func_0x03281048(lVar14,lVar11);
  }
  return 0;
LAB_03e91044:
  lVar21 = lVar20 + (long)*piVar23 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_1b0 + lVar18) = (long)&uStack_19c + lVar18;
  *(long *)((long)&lStack_1a8 + lVar18) = lVar19;
  lVar21 = *(long *)(lVar21 + 8);
  ppiVar17 = (int **)((long)&piStack_1b0 + lVar18);
  (**(code **)(lVar21 + 0x10))(*(undefined8 *)(lVar21 + 8),lVar21,plVar6,ppiVar17,lVar19);
  uVar16 = uVar12;
  uVar10 = func_0x072ce970(uVar9,lVar19);
  if (*(long *)(lVar14 + 0x28) == *(long *)((long)&lStack_198 + lVar18)) {
    return uVar10;
  }
  goto LAB_03e910e8;
}


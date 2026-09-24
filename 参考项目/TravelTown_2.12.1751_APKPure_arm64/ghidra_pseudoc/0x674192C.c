/* Ghidra 12.1.2 native pseudocode; RVA 0x674192C; Merger.Game.Views.Board.BoardQueueView.MoveToFront; status ok */


/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView__MoveToFront(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  int **ppiVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x24;
  undefined8 unaff_x26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong auStack_290 [18];
  undefined1 auStack_200 [8];
  int *piStack_1f8;
  long alStack_1f0 [2];
  undefined1 auStack_1e0 [8];
  long alStack_1d8 [9];
  int *piStack_190;
  long lStack_188;
  uint uStack_17c;
  long lStack_178;
  undefined1 auStack_170 [8];
  ulong auStack_168 [11];
  int *piStack_110;
  long lStack_108;
  int iStack_fc;
  long lStack_f8;
  undefined8 uStack_60;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar10 = func_0x06fdbed0(param_1,0);
  ppiVar15 = (int **)0x1;
  func_0x067b2ca0(uVar10,0,0x1f9,1,0);
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar11 = func_0x06fdbed0(*(long *)(param_1 + 0x58),0), lVar11 != 0)) {
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*pcRam0000000007e2fbf0)(lVar11,0);
    return uVar12;
  }
  uVar10 = func_0x03280cac();
  UNRECOVERED_JUMPTABLE = Merger_Game_Views_Board_BoardQueueView__MoveToBack;
  lVar11 = func_0x06fdbed0(uVar10,0);
  uVar12 = 0;
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
  if (lVar11 != 0) {
    uVar10 = func_0x03dc9518(lVar11,**(undefined8 **)(lVar13 + 0x38));
    puVar1 = PTR_DAT_0774e4e0;
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
    }
    uVar12 = func_0x06fdeb74(uVar10,0,0);
    if ((uVar12 & 1) == 0) {
      return uVar12;
    }
    puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
      puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
    }
SUB_06fe41c8:
    puVar1 = PTR_DAT_0774e4e0;
    *(code **)((long)puVar6 + -0x20) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)((long)puVar6 + -0x18) = unaff_x21;
    *(undefined8 *)((long)puVar6 + -0x10) = unaff_x20;
    *(ulong *)((long)puVar6 + -8) = param_1;
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
    uVar12 = (*pcRam0000000007e2fdd0)(0,uVar10);
    return uVar12;
  }
  auVar23 = func_0x03280cac();
  lVar11 = auVar23._8_8_;
  uStack_60 = 0x3e901b8;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if ((auVar23._0_8_ != 0) &&
     (param_1 = func_0x03dc9f70(auVar23._0_8_,**(undefined8 **)(lVar11 + 0x38)), param_1 != 0)) {
    if ((int)*(ulong *)(param_1 + 0x18) < 1) {
      return param_1;
    }
    unaff_x21 = 0;
    if ((*(ulong *)(param_1 + 0x18) & 0xffffffff) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      UNRECOVERED_JUMPTABLE = (code *)0x3e90254;
      puVar6 = &uStack_60;
      unaff_x20 = uVar10;
      goto SUB_06fe41c8;
    }
    func_0x03280cb4();
  }
  auVar23 = func_0x03280cac();
  lVar11 = auVar23._8_8_;
  plVar5 = auVar23._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar16 = *plVar5;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    uVar12 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e90304:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 0) {
      lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar16 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90378:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar13 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar16 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e903f0:
      uVar12 = (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar16 = *plVar5;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90468:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar13 = *plVar5;
      uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar22 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar11,4);
LAB_03e904e0:
      (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      return uVar12 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar10 = func_0x03280ca0();
  func_0x05796364(uVar10,0);
  auVar23 = func_0x03280b7c(uVar10,lVar11);
  lVar11 = auVar23._8_8_;
  plVar5 = auVar23._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar16 = *plVar5;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    uVar12 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e905b4:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 0) {
      lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar16 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90628:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar13 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar16 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e906a0:
      uVar12 = (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar16 = *plVar5;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90718:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar13 = *plVar5;
      uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar22 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar11,4);
LAB_03e90790:
      (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar10 = func_0x03280ca0();
  func_0x05796364(uVar10,0);
  auVar23 = func_0x03280b7c(uVar10,lVar11);
  uVar10 = auVar23._8_8_;
  plVar5 = auVar23._0_8_;
  lVar11 = tpidr_el0;
  lStack_f8 = *(long *)(lVar11 + 0x28);
  lVar13 = *(long *)(uVar12 + 0x38);
  if (lVar13 == 0) {
    func_0x03256878(uVar12);
    lVar13 = *(long *)(uVar12 + 0x38);
  }
  uVar20 = (ulong)*(uint *)(*(long *)(lVar13 + 0x20) + 0xfc);
  lVar16 = -(uVar20 + 0xf & 0x1fffffff0);
  lVar19 = (long)&piStack_110 + lVar16;
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar10 = func_0x03280ca0();
    func_0x05796364(uVar10,0);
    func_0x03280b7c(uVar10,uVar12);
  }
  else {
    lVar13 = *(long *)(lVar13 + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar17 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e908a4:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 == 0) goto LAB_03e90ae0;
    lVar13 = *(long *)(*(long *)(uVar12 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar17 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90918:
    uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    unaff_x24 = (ulong)uVar3;
    lVar13 = **(long **)(uVar12 + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    iStack_fc = uVar3 - 1;
    lVar17 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          lVar13 = lVar17 + (long)*piVar22 * 0x10 + 0x138;
          goto LAB_03e90994;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    lVar13 = func_0x03256b10(plVar5,lVar13,0);
LAB_03e90994:
    piStack_110 = &iStack_fc;
    lVar13 = *(long *)(lVar13 + 8);
    ppiVar15 = &piStack_110;
    lStack_108 = lVar19;
    (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8),lVar13,plVar5,ppiVar15,lVar19);
    lVar13 = *(long *)(*(long *)(uVar12 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar17 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90a18:
    uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar6 = (undefined8 *)(uVar12 + 0x38);
    uVar12 = (ulong)uVar3;
    lVar13 = *(long *)*puVar6;
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar17 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar17 + (long)(*piVar22 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,4);
LAB_03e90a90:
    (*(code *)*puVar6)(plVar5,uVar3 - 1,puVar6[1]);
    uVar21 = func_0x072ce970(uVar10,lVar19,uVar20);
    if (*(long *)(lVar11 + 0x28) == lStack_f8) {
      return uVar21;
    }
  }
  auVar23 = func_0x072ce990();
  lVar13 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  *(undefined8 *)((long)auStack_168 + lVar16 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_168 + lVar16 + 0x48) = plVar5;
  *(undefined8 *)((long)auStack_168 + lVar16 + 0x50) = uVar10;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar18 = *plVar7;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar17,0);
LAB_03e90b94:
    iVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (iVar2 != 0) {
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar16 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar11,0);
LAB_03e90c08:
      iVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (iVar2 == 1) {
        lVar11 = **(long **)(lVar13 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar13 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar11,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
        uVar10 = puVar6[1];
        uVar4 = 0;
      }
      else {
        lVar11 = (*(long **)(lVar13 + 0x38))[1];
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar16 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar11,0);
LAB_03e90cf0:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar4 = func_0x06fd9864(0,uVar4,0);
        lVar11 = **(long **)(lVar13 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar13 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar11,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
        uVar10 = puVar6[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*UNRECOVERED_JUMPTABLE)(plVar7,uVar4,uVar10);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar10 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar21 = 0;
  func_0x05791bcc(uVar10,uVar8);
  auVar23 = func_0x03280b7c(uVar10,lVar13);
  uVar8 = auVar23._8_8_;
  plVar5 = auVar23._0_8_;
  *(undefined1 **)(auStack_170 + lVar16) = &stack0xffffffffffffff10;
  *(undefined8 *)((long)auStack_168 + lVar16) = 0x3e90dcc;
  *(ulong *)((long)auStack_168 + lVar16 + 8) = unaff_x24;
  *(ulong *)((long)auStack_168 + lVar16 + 0x10) = uVar12;
  *(long *)((long)auStack_168 + lVar16 + 0x18) = lVar19;
  *(ulong *)((long)auStack_168 + lVar16 + 0x20) = uVar20;
  *(long *)((long)auStack_168 + lVar16 + 0x28) = lVar13;
  *(undefined8 *)((long)auStack_168 + lVar16 + 0x30) = uVar10;
  lVar13 = tpidr_el0;
  *(undefined8 *)((long)&lStack_178 + lVar16) = *(undefined8 *)(lVar13 + 0x28);
  lVar19 = *(long *)(uVar21 + 0x38);
  if (lVar19 == 0) {
    func_0x03256878(uVar21);
    lVar19 = *(long *)(uVar21 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar19 + 0x20) + 0xfc);
  lVar17 = (long)&piStack_190 + (lVar16 - (uVar12 + 0xf & 0x1fffffff0));
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar19 = *(long *)(lVar19 + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar18 = *plVar5;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar19,0);
LAB_03e90e90:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 0) {
      lVar19 = *(long *)(*(long *)(uVar21 + 0x38) + 8);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar18 = *plVar5;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar19) {
            puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar19,0);
LAB_03e90f04:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar2 == 1) {
        lVar19 = **(long **)(uVar21 + 0x38);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        *(undefined4 *)((long)&uStack_17c + lVar16) = 0;
        lVar18 = *plVar5;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar19) goto LAB_03e91044;
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
      }
      else {
        lVar19 = (*(long **)(uVar21 + 0x38))[1];
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        lVar18 = *plVar5;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar19) {
              puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar19,0);
LAB_03e90fc8:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        uVar3 = func_0x06fd9864(0,uVar4,0);
        puVar6 = (undefined8 *)(uVar21 + 0x38);
        uVar21 = (ulong)uVar3;
        lVar19 = *(long *)*puVar6;
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        *(uint *)((long)&uStack_17c + lVar16) = uVar3;
        lVar18 = *plVar5;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar19) goto LAB_03e91044;
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
      }
      lVar19 = func_0x03256b10(plVar5,lVar19,0);
      goto LAB_03e91050;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar8 = func_0x03280ca0();
  uVar10 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar20 = 0;
  func_0x05791bcc(uVar8,uVar10);
  func_0x03280b7c(uVar8,uVar21);
LAB_03e910e8:
  auVar23 = func_0x072ce990();
  plVar7 = auVar23._0_8_;
  *(undefined1 **)(lVar17 + -0x50) = auStack_170 + lVar16;
  *(undefined8 *)(lVar17 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar17 + -0x40) = unaff_x26;
  *(long *)(lVar17 + -0x38) = lVar11;
  *(long *)(lVar17 + -0x30) = lVar13;
  *(ulong *)(lVar17 + -0x28) = uVar21;
  *(long *)(lVar17 + -0x20) = lVar17;
  *(ulong *)(lVar17 + -0x18) = uVar12;
  *(long **)(lVar17 + -0x10) = plVar5;
  *(undefined8 *)(lVar17 + -8) = uVar8;
  lVar11 = tpidr_el0;
  *(undefined8 *)(lVar17 + -0x58) = *(undefined8 *)(lVar11 + 0x28);
  lVar13 = *(long *)(uVar20 + 0x38);
  if (lVar13 == 0) {
    func_0x03256878(uVar20);
    lVar13 = *(long *)(uVar20 + 0x38);
  }
  uVar21 = (ulong)*(uint *)(*(long *)(lVar13 + 0x18) + 0xfc);
  uVar12 = uVar21 + 0xf & 0x1fffffff0;
  lVar16 = (lVar17 + -0x70) - uVar12;
  lVar19 = lVar16 - uVar12;
  func_0x072ce9a0(lVar19,0,uVar21);
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar13 = *(long *)(lVar13 + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar18 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar13,0);
LAB_03e911d0:
    iVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (iVar2 == 0) {
      func_0x072ce9a0(lVar19,0,uVar21);
      func_0x072ce970(lVar16,lVar19,uVar21);
    }
    else {
      ppiVar15 = (int **)(lVar17 + -0x68);
      puVar6 = *(undefined8 **)(*(long *)(uVar20 + 0x38) + 0x20);
      uVar10 = *puVar6;
      *(long **)(lVar17 + -0x68) = plVar7;
      *(long *)(lVar17 + -0x60) = lVar16;
      (*(code *)puVar6[2])(uVar10,puVar6,0,ppiVar15,lVar16);
    }
    uVar12 = func_0x072ce970(auVar23._8_8_,lVar16,uVar21);
    if (*(long *)(lVar11 + 0x28) == *(long *)(lVar17 + -0x58)) {
      return uVar12;
    }
  }
  auVar24 = func_0x072ce990();
  lVar11 = auVar24._8_8_;
  *(undefined8 *)(lVar19 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar19 + -0x10) = uVar21;
  *(long *)(lVar19 + -8) = auVar23._8_8_;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
  *(undefined8 *)(lVar19 + -0x30) = *(undefined8 *)(lVar19 + -0x20);
  *(ulong *)(lVar19 + -0x20) = uVar20;
  *(long *)(lVar19 + -0x18) = lVar16;
  *(undefined8 *)(lVar19 + -0x10) = *(undefined8 *)(lVar19 + -0x10);
  *(undefined8 *)(lVar19 + -8) = *(undefined8 *)(lVar19 + -8);
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
  func_0x06fe39b4(auVar24._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar13 = func_0x06fe3dd4(auVar24._0_8_,0);
  lVar16 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c(lVar16);
  }
  if (lVar13 == 0) {
LAB_03e3cc18:
    uVar12 = 0;
  }
  else {
    uVar12 = func_0x03280b90(lVar13,lVar16);
    if (uVar12 == 0) {
      func_0x03281048(lVar13,lVar16);
      goto LAB_03e3cc18;
    }
  }
  uVar20 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar20 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar10 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar14 = 0;
  func_0x06fe0874(uVar10,uVar8,0);
  auVar23 = func_0x03280b7c(uVar10,lVar11);
  *(undefined8 *)(lVar19 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar19 + -0x50) = uVar12;
  *(long *)(lVar19 + -0x48) = lVar13;
  *(undefined8 *)(lVar19 + -0x40) = uVar10;
  *(long *)(lVar19 + -0x38) = lVar11;
  if (ppiVar15[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (ppiVar15[7] == (int *)0x0) {
      func_0x03256878(ppiVar15);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar23._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar11 = func_0x06fe4bb8(auVar23._0_8_,auVar23._8_8_,uVar14,0);
  lVar13 = *(long *)ppiVar15[7];
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  if (lVar11 != 0) {
    uVar12 = func_0x03280b90(lVar11,lVar13);
    if (uVar12 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar11,lVar13);
  }
  uVar12 = 0;
LAB_03e3cd58:
  uVar20 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar20 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar10 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar13 = 0;
  func_0x06fe0874(uVar10,uVar8);
  auVar23 = func_0x03280b7c(uVar10,ppiVar15);
  *(undefined8 *)(lVar19 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar19 + -0x78) = lVar11;
  *(undefined8 *)(lVar19 + -0x70) = uVar10;
  *(int ***)(lVar19 + -0x68) = ppiVar15;
  if ((*(long *)(lVar13 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar13 + 0x38) == 0)) {
    func_0x03256878(lVar13);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  *(undefined8 *)(lVar19 + -0x90) = *(undefined8 *)(lVar19 + -0x80);
  *(ulong *)(lVar19 + -0x80) = uVar12;
  *(undefined8 *)(lVar19 + -0x78) = *(undefined8 *)(lVar19 + -0x78);
  *(undefined8 *)(lVar19 + -0x70) = *(undefined8 *)(lVar19 + -0x70);
  *(undefined8 *)(lVar19 + -0x68) = *(undefined8 *)(lVar19 + -0x68);
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = func_0x06fe3fe0(auVar23._0_8_,auVar23._8_8_,0,0);
  lVar11 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  if (lVar13 != 0) {
    uVar12 = func_0x03280b90(lVar13,lVar11);
    if (uVar12 != 0) {
      return uVar12;
    }
    func_0x03281048(lVar13,lVar11);
  }
  return 0;
LAB_03e91044:
  lVar19 = lVar18 + (long)*piVar22 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_190 + lVar16) = (long)&uStack_17c + lVar16;
  *(long *)((long)&lStack_188 + lVar16) = lVar17;
  lVar19 = *(long *)(lVar19 + 8);
  ppiVar15 = (int **)((long)&piStack_190 + lVar16);
  (**(code **)(lVar19 + 0x10))(*(undefined8 *)(lVar19 + 8),lVar19,plVar5,ppiVar15,lVar17);
  uVar20 = uVar12;
  uVar9 = func_0x072ce970(uVar8,lVar17);
  if (*(long *)(lVar13 + 0x28) == *(long *)((long)&lStack_178 + lVar16)) {
    return uVar9;
  }
  goto LAB_03e910e8;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6743F34; Merger.Game.Views.Board.BoardQueueView2.GameStarted; status ok */


/* WARNING: Possible PIC construction at 0x06843f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068440c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x068440c4) */
/* WARNING: Removing unreachable block (ram,0x068440cc) */
/* WARNING: Removing unreachable block (ram,0x068440dc) */
/* WARNING: Removing unreachable block (ram,0x068440f4) */
/* WARNING: Removing unreachable block (ram,0x06843f90) */
/* WARNING: Removing unreachable block (ram,0x0684401c) */
/* WARNING: Removing unreachable block (ram,0x06843fac) */
/* WARNING: Removing unreachable block (ram,0x0684400c) */
/* WARNING: Removing unreachable block (ram,0x06843fb8) */
/* WARNING: Removing unreachable block (ram,0x04d0e088) */
/* WARNING: Removing unreachable block (ram,0x04d0e0c8) */
/* WARNING: Removing unreachable block (ram,0x04d0de2c) */
/* WARNING: Removing unreachable block (ram,0x04d0de4c) */
/* WARNING: Removing unreachable block (ram,0x04d0de74) */
/* WARNING: Removing unreachable block (ram,0x04d0de80) */
/* WARNING: Removing unreachable block (ram,0x04d0de9c) */
/* WARNING: Removing unreachable block (ram,0x04d0de84) */
/* WARNING: Removing unreachable block (ram,0x04d0dea0) */
/* WARNING: Removing unreachable block (ram,0x04d0deb8) */
/* WARNING: Removing unreachable block (ram,0x04d0de98) */
/* WARNING: Removing unreachable block (ram,0x04d0decc) */
/* WARNING: Removing unreachable block (ram,0x04d0def8) */
/* WARNING: Removing unreachable block (ram,0x04d0df0c) */
/* WARNING: Removing unreachable block (ram,0x04d0df18) */
/* WARNING: Removing unreachable block (ram,0x04d0df30) */
/* WARNING: Removing unreachable block (ram,0x04d0df6c) */
/* WARNING: Removing unreachable block (ram,0x04d0df94) */
/* WARNING: Removing unreachable block (ram,0x04d0dfa8) */
/* WARNING: Removing unreachable block (ram,0x04d0dfb4) */
/* WARNING: Removing unreachable block (ram,0x04d0dfcc) */
/* WARNING: Removing unreachable block (ram,0x04d0e008) */
/* WARNING: Removing unreachable block (ram,0x04d0dfdc) */
/* WARNING: Removing unreachable block (ram,0x04d0dff8) */
/* WARNING: Removing unreachable block (ram,0x04d0df40) */
/* WARNING: Removing unreachable block (ram,0x04d0df5c) */
/* WARNING: Removing unreachable block (ram,0x04d0e0ac) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView2__GameStarted(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
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
  long lVar22;
  undefined8 unaff_x21;
  ulong unaff_x24;
  undefined8 unaff_x26;
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
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000007e28a79 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f318);
    func_0x03280a18(PTR_DAT_07772820);
    func_0x03280a18(PTR_DAT_0780dff8);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a79 = 1;
  }
  uStack_50 = 0x6843f90;
  uStack_40 = 0x7e28000;
  lVar22 = 0x7e28000;
  lStack_38 = param_1;
  if ((bRam0000000007e28a7c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0780e008);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a7c = 1;
  }
  func_0x068445c4(param_1);
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar10 = func_0x0674ae44(*(long *)(param_1 + 0x28),0), lVar10 != 0)) &&
     (*(long *)(param_1 + 0x50) != 0)) {
    if (*(long *)(lVar10 + 0x20) == 0) {
      func_0x069b649c();
    }
    else {
      func_0x069acef8(*(long *)(param_1 + 0x50),*(long *)(lVar10 + 0x20),0);
    }
    lVar10 = *(long *)(param_1 + 0xa8);
    uVar5 = func_0x06842ea0(param_1);
    lVar22 = lVar10;
    if (lVar10 != 0) {
      uVar5 = uVar5 & 1;
      goto SUB_06fdf26c;
    }
  }
  uVar11 = func_0x03280cac();
  lStack_60 = 0x684411c;
  lStack_58 = param_1;
  uVar12 = func_0x06fdbed0(uVar11,0);
  ppiVar16 = (int **)0x1;
  func_0x067b2ca0(uVar12,0,0x1f9,1,0);
  if ((*(long *)(uVar11 + 0x78) != 0) &&
     (lVar10 = func_0x06fdbed0(*(long *)(uVar11 + 0x78),0), lVar10 != 0)) {
    uVar5 = 0;
    param_1 = lStack_58;
SUB_06fdf26c:
    lStack_60 = lVar22;
    lStack_58 = param_1;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*pcRam0000000007e2fbf0)(lVar10,uVar5);
    return uVar11;
  }
  uVar12 = func_0x03280cac();
  lVar10 = func_0x06fdbed0(uVar12,0);
  uVar15 = 0;
  uStack_80 = 0x6844168;
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
    *(long *)((long)plVar2 + -0x10) = lVar22;
    *(ulong *)((long)plVar2 + -8) = uVar11;
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
    uVar11 = (*pcRam0000000007e2fdd0)(0,lVar10);
    return uVar11;
  }
  auVar23 = func_0x03280cac();
  lVar22 = auVar23._8_8_;
  uStack_b0 = 0x3e901b8;
  if ((*(long *)(lVar22 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar22 + 0x38) == 0)) {
    func_0x03256878(lVar22);
  }
  if ((auVar23._0_8_ != 0) &&
     (uVar11 = func_0x03dc9f70(auVar23._0_8_,**(undefined8 **)(lVar22 + 0x38)), uVar11 != 0)) {
    if ((int)*(ulong *)(uVar11 + 0x18) < 1) {
      return uVar11;
    }
    unaff_x21 = 0;
    if ((*(ulong *)(uVar11 + 0x18) & 0xffffffff) != 0) {
      lVar10 = *(long *)(uVar11 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uStack_80 = 0x3e90254;
      plVar2 = &uStack_b0;
      lVar22 = lVar10;
      goto SUB_06fe41c8;
    }
    func_0x03280cb4();
  }
  auVar23 = func_0x03280cac();
  lVar22 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar13 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar11 = uVar11 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar11 != 0);
    }
    uVar15 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar2);
LAB_03e90304:
    iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
    if (iVar3 != 0) {
      lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90378:
      iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      lVar10 = **(long **)(lVar22 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e903f0:
      uVar11 = (*(code *)*puVar6)(plVar2,iVar3 + -1,puVar6[1]);
      lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90468:
      iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      lVar22 = **(long **)(lVar22 + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar10 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar22) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar22,4);
LAB_03e904e0:
      (*(code *)*puVar6)(plVar2,iVar3 + -1,puVar6[1]);
      return uVar11 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar12 = func_0x03280ca0();
  func_0x05796364(uVar12,0);
  auVar23 = func_0x03280b7c(uVar12,lVar22);
  lVar22 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar13 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar11 = uVar11 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar11 != 0);
    }
    uVar15 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar2);
LAB_03e905b4:
    iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
    if (iVar3 != 0) {
      lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90628:
      iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      lVar10 = **(long **)(lVar22 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e906a0:
      uVar11 = (*(code *)*puVar6)(plVar2,iVar3 + -1,puVar6[1]);
      lVar10 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90718:
      iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      lVar22 = **(long **)(lVar22 + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar10 = *plVar2;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar22) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar22,4);
LAB_03e90790:
      (*(code *)*puVar6)(plVar2,iVar3 + -1,puVar6[1]);
      return uVar11;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar12 = func_0x03280ca0();
  func_0x05796364(uVar12,0);
  auVar23 = func_0x03280b7c(uVar12,lVar22);
  uVar12 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  lVar22 = tpidr_el0;
  lStack_148 = *(long *)(lVar22 + 0x28);
  lVar10 = *(long *)(uVar15 + 0x38);
  if (lVar10 == 0) {
    func_0x03256878(uVar15);
    lVar10 = *(long *)(uVar15 + 0x38);
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar10 + 0x20) + 0xfc);
  lVar13 = -(uVar11 + 0xf & 0x1fffffff0);
  lVar19 = (long)&piStack_160 + lVar13;
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar12 = func_0x03280ca0();
    func_0x05796364(uVar12,0);
    func_0x03280b7c(uVar12,uVar15);
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
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e908a4:
    iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
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
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90918:
    uVar5 = (*(code *)*puVar6)(plVar2,puVar6[1]);
    unaff_x24 = (ulong)uVar5;
    lVar10 = **(long **)(uVar15 + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    iStack_14c = uVar5 - 1;
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
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,0);
LAB_03e90a18:
    uVar5 = (*(code *)*puVar6)(plVar2,puVar6[1]);
    puVar6 = (undefined8 *)(uVar15 + 0x38);
    uVar15 = (ulong)uVar5;
    lVar10 = *(long *)*puVar6;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar17 = *plVar2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar17 + (long)(*piVar21 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar10,4);
LAB_03e90a90:
    (*(code *)*puVar6)(plVar2,uVar5 - 1,puVar6[1]);
    uVar20 = func_0x072ce970(uVar12,lVar19,uVar11);
    if (*(long *)(lVar22 + 0x28) == lStack_148) {
      return uVar20;
    }
  }
  auVar23 = func_0x072ce990();
  lVar10 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  *(undefined8 *)((long)auStack_1b8 + lVar13 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_1b8 + lVar13 + 0x48) = plVar2;
  *(undefined8 *)((long)auStack_1b8 + lVar13 + 0x50) = uVar12;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar18 = *plVar7;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar17,0);
LAB_03e90b94:
    iVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (iVar3 != 0) {
      lVar22 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      lVar13 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar22) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar22,0);
LAB_03e90c08:
      iVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (iVar3 == 1) {
        lVar22 = **(long **)(lVar10 + 0x38);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar22) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar11 = uVar11 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar22,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
        uVar12 = puVar6[1];
        uVar4 = 0;
      }
      else {
        lVar22 = (*(long **)(lVar10 + 0x38))[1];
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar13 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar22) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar11 = uVar11 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar22,0);
LAB_03e90cf0:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar4 = func_0x06fd9864(0,uVar4,0);
        lVar22 = **(long **)(lVar10 + 0x38);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar22) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar11 = uVar11 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar22,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
        uVar12 = puVar6[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*UNRECOVERED_JUMPTABLE)(plVar7,uVar4,uVar12);
      return uVar11;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar12 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar20 = 0;
  func_0x05791bcc(uVar12,uVar8);
  auVar23 = func_0x03280b7c(uVar12,lVar10);
  uVar8 = auVar23._8_8_;
  plVar2 = auVar23._0_8_;
  *(undefined1 **)(auStack_1c0 + lVar13) = &stack0xfffffffffffffec0;
  *(undefined8 *)((long)auStack_1b8 + lVar13) = 0x3e90dcc;
  *(ulong *)((long)auStack_1b8 + lVar13 + 8) = unaff_x24;
  *(ulong *)((long)auStack_1b8 + lVar13 + 0x10) = uVar15;
  *(long *)((long)auStack_1b8 + lVar13 + 0x18) = lVar19;
  *(ulong *)((long)auStack_1b8 + lVar13 + 0x20) = uVar11;
  *(long *)((long)auStack_1b8 + lVar13 + 0x28) = lVar10;
  *(undefined8 *)((long)auStack_1b8 + lVar13 + 0x30) = uVar12;
  lVar10 = tpidr_el0;
  *(undefined8 *)((long)&lStack_1c8 + lVar13) = *(undefined8 *)(lVar10 + 0x28);
  lVar19 = *(long *)(uVar20 + 0x38);
  if (lVar19 == 0) {
    func_0x03256878(uVar20);
    lVar19 = *(long *)(uVar20 + 0x38);
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar19 + 0x20) + 0xfc);
  lVar17 = (long)&piStack_1e0 + (lVar13 - (uVar11 + 0xf & 0x1fffffff0));
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
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar15 = uVar15 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar19,0);
LAB_03e90e90:
    iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
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
            puVar6 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar19,0);
LAB_03e90f04:
      iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
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
              puVar6 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar2,lVar19,0);
LAB_03e90fc8:
        uVar4 = (*(code *)*puVar6)(plVar2,puVar6[1]);
        uVar5 = func_0x06fd9864(0,uVar4,0);
        puVar6 = (undefined8 *)(uVar20 + 0x38);
        uVar20 = (ulong)uVar5;
        lVar19 = *(long *)*puVar6;
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        *(uint *)((long)&uStack_1cc + lVar13) = uVar5;
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
  uVar8 = func_0x03280ca0();
  uVar12 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar15 = 0;
  func_0x05791bcc(uVar8,uVar12);
  func_0x03280b7c(uVar8,uVar20);
LAB_03e910e8:
  auVar23 = func_0x072ce990();
  plVar7 = auVar23._0_8_;
  *(undefined1 **)(lVar17 + -0x50) = auStack_1c0 + lVar13;
  *(undefined8 *)(lVar17 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar17 + -0x40) = unaff_x26;
  *(long *)(lVar17 + -0x38) = lVar22;
  *(long *)(lVar17 + -0x30) = lVar10;
  *(ulong *)(lVar17 + -0x28) = uVar20;
  *(long *)(lVar17 + -0x20) = lVar17;
  *(ulong *)(lVar17 + -0x18) = uVar11;
  *(long **)(lVar17 + -0x10) = plVar2;
  *(undefined8 *)(lVar17 + -8) = uVar8;
  lVar22 = tpidr_el0;
  *(undefined8 *)(lVar17 + -0x58) = *(undefined8 *)(lVar22 + 0x28);
  lVar10 = *(long *)(uVar15 + 0x38);
  if (lVar10 == 0) {
    func_0x03256878(uVar15);
    lVar10 = *(long *)(uVar15 + 0x38);
  }
  uVar20 = (ulong)*(uint *)(*(long *)(lVar10 + 0x18) + 0xfc);
  uVar11 = uVar20 + 0xf & 0x1fffffff0;
  lVar13 = (lVar17 + -0x70) - uVar11;
  lVar19 = lVar13 - uVar11;
  func_0x072ce9a0(lVar19,0,uVar20);
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *(long *)(lVar10 + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar18 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar11 = uVar11 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar10,0);
LAB_03e911d0:
    iVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (iVar3 == 0) {
      func_0x072ce9a0(lVar19,0,uVar20);
      func_0x072ce970(lVar13,lVar19,uVar20);
    }
    else {
      ppiVar16 = (int **)(lVar17 + -0x68);
      puVar6 = *(undefined8 **)(*(long *)(uVar15 + 0x38) + 0x20);
      uVar12 = *puVar6;
      *(long **)(lVar17 + -0x68) = plVar7;
      *(long *)(lVar17 + -0x60) = lVar13;
      (*(code *)puVar6[2])(uVar12,puVar6,0,ppiVar16,lVar13);
    }
    uVar11 = func_0x072ce970(auVar23._8_8_,lVar13,uVar20);
    if (*(long *)(lVar22 + 0x28) == *(long *)(lVar17 + -0x58)) {
      return uVar11;
    }
  }
  auVar24 = func_0x072ce990();
  lVar22 = auVar24._8_8_;
  *(undefined8 *)(lVar19 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar19 + -0x10) = uVar20;
  *(long *)(lVar19 + -8) = auVar23._8_8_;
  if ((*(long *)(lVar22 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar22 + 0x38) == 0)) {
    func_0x03256878(lVar22);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar22 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
  *(undefined8 *)(lVar19 + -0x30) = *(undefined8 *)(lVar19 + -0x20);
  *(ulong *)(lVar19 + -0x20) = uVar15;
  *(long *)(lVar19 + -0x18) = lVar13;
  *(undefined8 *)(lVar19 + -0x10) = *(undefined8 *)(lVar19 + -0x10);
  *(undefined8 *)(lVar19 + -8) = *(undefined8 *)(lVar19 + -8);
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar24._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar10 = func_0x06fe3dd4(auVar24._0_8_,0);
  lVar13 = **(long **)(lVar22 + 0x38);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  if (lVar10 == 0) {
LAB_03e3cc18:
    uVar11 = 0;
  }
  else {
    uVar11 = func_0x03280b90(lVar10,lVar13);
    if (uVar11 == 0) {
      func_0x03281048(lVar10,lVar13);
      goto LAB_03e3cc18;
    }
  }
  uVar15 = func_0x06fe04ec(uVar11,0,0);
  if ((uVar15 & 1) == 0) {
    return uVar11;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar12 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar14 = 0;
  func_0x06fe0874(uVar12,uVar8,0);
  auVar23 = func_0x03280b7c(uVar12,lVar22);
  *(undefined8 *)(lVar19 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar19 + -0x50) = uVar11;
  *(long *)(lVar19 + -0x48) = lVar10;
  *(undefined8 *)(lVar19 + -0x40) = uVar12;
  *(long *)(lVar19 + -0x38) = lVar22;
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
  lVar22 = func_0x06fe4bb8(auVar23._0_8_,auVar23._8_8_,uVar14,0);
  lVar10 = *(long *)ppiVar16[7];
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c(lVar10);
  }
  if (lVar22 != 0) {
    uVar11 = func_0x03280b90(lVar22,lVar10);
    if (uVar11 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar22,lVar10);
  }
  uVar11 = 0;
LAB_03e3cd58:
  uVar15 = func_0x06fe04ec(uVar11,0,0);
  if ((uVar15 & 1) == 0) {
    return uVar11;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar12 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar10 = 0;
  func_0x06fe0874(uVar12,uVar8);
  auVar23 = func_0x03280b7c(uVar12,ppiVar16);
  *(undefined8 *)(lVar19 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar19 + -0x78) = lVar22;
  *(undefined8 *)(lVar19 + -0x70) = uVar12;
  *(int ***)(lVar19 + -0x68) = ppiVar16;
  if ((*(long *)(lVar10 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar10 + 0x38) == 0)) {
    func_0x03256878(lVar10);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar22 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
  *(undefined8 *)(lVar19 + -0x90) = *(undefined8 *)(lVar19 + -0x80);
  *(ulong *)(lVar19 + -0x80) = uVar11;
  *(undefined8 *)(lVar19 + -0x78) = *(undefined8 *)(lVar19 + -0x78);
  *(undefined8 *)(lVar19 + -0x70) = *(undefined8 *)(lVar19 + -0x70);
  *(undefined8 *)(lVar19 + -0x68) = *(undefined8 *)(lVar19 + -0x68);
  if ((*(long *)(lVar22 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar22 + 0x38) == 0)) {
    func_0x03256878(lVar22);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar10 = func_0x06fe3fe0(auVar23._0_8_,auVar23._8_8_,0,0);
  lVar22 = **(long **)(lVar22 + 0x38);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c(lVar22);
  }
  if (lVar10 != 0) {
    uVar11 = func_0x03280b90(lVar10,lVar22);
    if (uVar11 != 0) {
      return uVar11;
    }
    func_0x03281048(lVar10,lVar22);
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
  uVar15 = uVar11;
  uVar9 = func_0x072ce970(uVar8,lVar17);
  if (*(long *)(lVar10 + 0x28) == *(long *)((long)&lStack_1c8 + lVar13)) {
    return uVar9;
  }
  goto LAB_03e910e8;
}


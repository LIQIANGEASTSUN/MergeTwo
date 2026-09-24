/* Ghidra 12.1.2 native pseudocode; RVA 0x6741978; Merger.Game.Views.Board.BoardQueueView.MoveToBack; status ok */


/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView__MoveToBack
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,int **param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x24;
  undefined8 unaff_x26;
  undefined8 unaff_x30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong auStack_280 [18];
  undefined1 auStack_1f0 [8];
  int *piStack_1e8;
  long alStack_1e0 [2];
  undefined1 auStack_1d0 [8];
  long alStack_1c8 [9];
  int *piStack_180;
  long lStack_178;
  uint uStack_16c;
  long lStack_168;
  undefined1 auStack_160 [8];
  ulong auStack_158 [11];
  int *piStack_100;
  long lStack_f8;
  int iStack_ec;
  long lStack_e8;
  undefined8 uStack_50;
  
  lVar11 = func_0x06fdbed0(param_1,0);
  uVar14 = 0;
  if ((bRam0000000007e283fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809f58);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e283fd = 1;
  }
  lVar12 = *(long *)PTR_DAT_07809138;
  if ((*(long *)(lVar12 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar12 + 0x38) == 0)) {
    func_0x03256878(lVar12);
  }
  if (lVar11 != 0) {
    uVar5 = func_0x03dc9518(lVar11,**(undefined8 **)(lVar12 + 0x38));
    puVar1 = PTR_DAT_0774e4e0;
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
    }
    uVar14 = func_0x06fdeb74(uVar5,0,0);
    if ((uVar14 & 1) == 0) {
      return uVar14;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
SUB_06fe41c8:
    puVar1 = PTR_DAT_0774e4e0;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -8) = unaff_x19;
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
    uVar14 = (*pcRam0000000007e2fdd0)(0,uVar5);
    return uVar14;
  }
  auVar22 = func_0x03280cac();
  lVar11 = auVar22._8_8_;
  uStack_50 = 0x3e901b8;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if ((auVar22._0_8_ != 0) &&
     (unaff_x19 = func_0x03dc9f70(auVar22._0_8_,**(undefined8 **)(lVar11 + 0x38)), unaff_x19 != 0))
  {
    if ((int)*(ulong *)(unaff_x19 + 0x18) < 1) {
      return unaff_x19;
    }
    unaff_x21 = 0;
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      unaff_x30 = 0x3e90254;
      register0x00000008 = (BADSPACEBASE *)&uStack_50;
      unaff_x20 = uVar5;
      goto SUB_06fe41c8;
    }
    func_0x03280cb4();
  }
  auVar22 = func_0x03280cac();
  lVar11 = auVar22._8_8_;
  plVar6 = auVar22._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar15 = *plVar6;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    uVar14 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e90304:
    iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar2 != 0) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar14 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar14 = uVar14 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e90378:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar12 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar14 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar14 = uVar14 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e903f0:
      uVar14 = (*(code *)*puVar7)(plVar6,iVar2 + -1,puVar7[1]);
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e90468:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar12 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,4);
LAB_03e904e0:
      (*(code *)*puVar7)(plVar6,iVar2 + -1,puVar7[1]);
      return uVar14 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar5 = func_0x03280ca0();
  func_0x05796364(uVar5,0);
  auVar22 = func_0x03280b7c(uVar5,lVar11);
  lVar11 = auVar22._8_8_;
  plVar6 = auVar22._0_8_;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar15 = *plVar6;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    uVar14 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_03e905b4:
    iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar2 != 0) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar14 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar14 = uVar14 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e90628:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar12 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar14 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar14 = uVar14 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e906a0:
      uVar14 = (*(code *)*puVar7)(plVar6,iVar2 + -1,puVar7[1]);
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar15 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e90718:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = **(long **)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar12 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,4);
LAB_03e90790:
      (*(code *)*puVar7)(plVar6,iVar2 + -1,puVar7[1]);
      return uVar14;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar5 = func_0x03280ca0();
  func_0x05796364(uVar5,0);
  auVar22 = func_0x03280b7c(uVar5,lVar11);
  uVar5 = auVar22._8_8_;
  plVar6 = auVar22._0_8_;
  lVar11 = tpidr_el0;
  lStack_e8 = *(long *)(lVar11 + 0x28);
  lVar12 = *(long *)(uVar14 + 0x38);
  if (lVar12 == 0) {
    func_0x03256878(uVar14);
    lVar12 = *(long *)(uVar14 + 0x38);
  }
  uVar19 = (ulong)*(uint *)(*(long *)(lVar12 + 0x20) + 0xfc);
  lVar15 = -(uVar19 + 0xf & 0x1fffffff0);
  lVar18 = (long)&piStack_100 + lVar15;
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar5 = func_0x03280ca0();
    func_0x05796364(uVar5,0);
    func_0x03280b7c(uVar5,uVar14);
  }
  else {
    lVar12 = *(long *)(lVar12 + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar16 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e908a4:
    iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar2 == 0) goto LAB_03e90ae0;
    lVar12 = *(long *)(*(long *)(uVar14 + 0x38) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar16 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e90918:
    uVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    unaff_x24 = (ulong)uVar3;
    lVar12 = **(long **)(uVar14 + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    iStack_ec = uVar3 - 1;
    lVar16 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          lVar12 = lVar16 + (long)*piVar21 * 0x10 + 0x138;
          goto LAB_03e90994;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    lVar12 = func_0x03256b10(plVar6,lVar12,0);
LAB_03e90994:
    piStack_100 = &iStack_ec;
    lVar12 = *(long *)(lVar12 + 8);
    param_4 = &piStack_100;
    lStack_f8 = lVar18;
    (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar6,param_4,lVar18);
    lVar12 = *(long *)(*(long *)(uVar14 + 0x38) + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar16 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,0);
LAB_03e90a18:
    uVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar7 = (undefined8 *)(uVar14 + 0x38);
    uVar14 = (ulong)uVar3;
    lVar12 = *(long *)*puVar7;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar16 = *plVar6;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar16 + (long)(*piVar21 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar12,4);
LAB_03e90a90:
    (*(code *)*puVar7)(plVar6,uVar3 - 1,puVar7[1]);
    uVar20 = func_0x072ce970(uVar5,lVar18,uVar19);
    if (*(long *)(lVar11 + 0x28) == lStack_e8) {
      return uVar20;
    }
  }
  auVar22 = func_0x072ce990();
  lVar12 = auVar22._8_8_;
  plVar8 = auVar22._0_8_;
  *(undefined8 *)((long)auStack_158 + lVar15 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_158 + lVar15 + 0x48) = plVar6;
  *(undefined8 *)((long)auStack_158 + lVar15 + 0x50) = uVar5;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    lVar17 = *plVar8;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar16) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar16,0);
LAB_03e90b94:
    iVar2 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (iVar2 != 0) {
      lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar15 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar14 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar14 = uVar14 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90c08:
      iVar2 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (iVar2 == 1) {
        lVar11 = **(long **)(lVar12 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar14 = uVar14 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        uVar5 = puVar7[1];
        uVar4 = 0;
      }
      else {
        lVar11 = (*(long **)(lVar12 + 0x38))[1];
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar15 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar14 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar14 = uVar14 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90cf0:
        uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar4 = func_0x06fd9864(0,uVar4,0);
        lVar11 = **(long **)(lVar12 + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar14 = uVar14 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar11,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        uVar5 = puVar7[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*UNRECOVERED_JUMPTABLE)(plVar8,uVar4,uVar5);
      return uVar14;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar5 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar20 = 0;
  func_0x05791bcc(uVar5,uVar9);
  auVar22 = func_0x03280b7c(uVar5,lVar12);
  uVar9 = auVar22._8_8_;
  plVar6 = auVar22._0_8_;
  *(undefined1 **)(auStack_160 + lVar15) = &stack0xffffffffffffff20;
  *(undefined8 *)((long)auStack_158 + lVar15) = 0x3e90dcc;
  *(ulong *)((long)auStack_158 + lVar15 + 8) = unaff_x24;
  *(ulong *)((long)auStack_158 + lVar15 + 0x10) = uVar14;
  *(long *)((long)auStack_158 + lVar15 + 0x18) = lVar18;
  *(ulong *)((long)auStack_158 + lVar15 + 0x20) = uVar19;
  *(long *)((long)auStack_158 + lVar15 + 0x28) = lVar12;
  *(undefined8 *)((long)auStack_158 + lVar15 + 0x30) = uVar5;
  lVar12 = tpidr_el0;
  *(undefined8 *)((long)&lStack_168 + lVar15) = *(undefined8 *)(lVar12 + 0x28);
  lVar18 = *(long *)(uVar20 + 0x38);
  if (lVar18 == 0) {
    func_0x03256878(uVar20);
    lVar18 = *(long *)(uVar20 + 0x38);
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar18 + 0x20) + 0xfc);
  lVar16 = (long)&piStack_180 + (lVar15 - (uVar14 + 0xf & 0x1fffffff0));
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar18 = *(long *)(lVar18 + 8);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar17 = *plVar6;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar18) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar18,0);
LAB_03e90e90:
    iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar2 != 0) {
      lVar18 = *(long *)(*(long *)(uVar20 + 0x38) + 8);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      lVar17 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar18) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar18,0);
LAB_03e90f04:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar2 == 1) {
        lVar18 = **(long **)(uVar20 + 0x38);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        *(undefined4 *)((long)&uStack_16c + lVar15) = 0;
        lVar17 = *plVar6;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar18) goto LAB_03e91044;
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
      }
      else {
        lVar18 = (*(long **)(uVar20 + 0x38))[1];
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        lVar17 = *plVar6;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar18) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar18,0);
LAB_03e90fc8:
        uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar3 = func_0x06fd9864(0,uVar4,0);
        puVar7 = (undefined8 *)(uVar20 + 0x38);
        uVar20 = (ulong)uVar3;
        lVar18 = *(long *)*puVar7;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        *(uint *)((long)&uStack_16c + lVar15) = uVar3;
        lVar17 = *plVar6;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar18) goto LAB_03e91044;
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
      }
      lVar18 = func_0x03256b10(plVar6,lVar18,0);
      goto LAB_03e91050;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar9 = func_0x03280ca0();
  uVar5 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar19 = 0;
  func_0x05791bcc(uVar9,uVar5);
  func_0x03280b7c(uVar9,uVar20);
LAB_03e910e8:
  auVar22 = func_0x072ce990();
  plVar8 = auVar22._0_8_;
  *(undefined1 **)(lVar16 + -0x50) = auStack_160 + lVar15;
  *(undefined8 *)(lVar16 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar16 + -0x40) = unaff_x26;
  *(long *)(lVar16 + -0x38) = lVar11;
  *(long *)(lVar16 + -0x30) = lVar12;
  *(ulong *)(lVar16 + -0x28) = uVar20;
  *(long *)(lVar16 + -0x20) = lVar16;
  *(ulong *)(lVar16 + -0x18) = uVar14;
  *(long **)(lVar16 + -0x10) = plVar6;
  *(undefined8 *)(lVar16 + -8) = uVar9;
  lVar11 = tpidr_el0;
  *(undefined8 *)(lVar16 + -0x58) = *(undefined8 *)(lVar11 + 0x28);
  lVar12 = *(long *)(uVar19 + 0x38);
  if (lVar12 == 0) {
    func_0x03256878(uVar19);
    lVar12 = *(long *)(uVar19 + 0x38);
  }
  uVar20 = (ulong)*(uint *)(*(long *)(lVar12 + 0x18) + 0xfc);
  uVar14 = uVar20 + 0xf & 0x1fffffff0;
  lVar15 = (lVar16 + -0x70) - uVar14;
  lVar18 = lVar15 - uVar14;
  func_0x072ce9a0(lVar18,0,uVar20);
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar12 = *(long *)(lVar12 + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar17 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar14 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar14 = uVar14 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,lVar12,0);
LAB_03e911d0:
    iVar2 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (iVar2 == 0) {
      func_0x072ce9a0(lVar18,0,uVar20);
      func_0x072ce970(lVar15,lVar18,uVar20);
    }
    else {
      param_4 = (int **)(lVar16 + -0x68);
      puVar7 = *(undefined8 **)(*(long *)(uVar19 + 0x38) + 0x20);
      uVar5 = *puVar7;
      *(long **)(lVar16 + -0x68) = plVar8;
      *(long *)(lVar16 + -0x60) = lVar15;
      (*(code *)puVar7[2])(uVar5,puVar7,0,param_4,lVar15);
    }
    uVar14 = func_0x072ce970(auVar22._8_8_,lVar15,uVar20);
    if (*(long *)(lVar11 + 0x28) == *(long *)(lVar16 + -0x58)) {
      return uVar14;
    }
  }
  auVar23 = func_0x072ce990();
  lVar11 = auVar23._8_8_;
  *(undefined8 *)(lVar18 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar18 + -0x10) = uVar20;
  *(long *)(lVar18 + -8) = auVar22._8_8_;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
  *(undefined8 *)(lVar18 + -0x30) = *(undefined8 *)(lVar18 + -0x20);
  *(ulong *)(lVar18 + -0x20) = uVar19;
  *(long *)(lVar18 + -0x18) = lVar15;
  *(undefined8 *)(lVar18 + -0x10) = *(undefined8 *)(lVar18 + -0x10);
  *(undefined8 *)(lVar18 + -8) = *(undefined8 *)(lVar18 + -8);
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
  func_0x06fe39b4(auVar23._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar12 = func_0x06fe3dd4(auVar23._0_8_,0);
  lVar15 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c(lVar15);
  }
  if (lVar12 == 0) {
LAB_03e3cc18:
    uVar14 = 0;
  }
  else {
    uVar14 = func_0x03280b90(lVar12,lVar15);
    if (uVar14 == 0) {
      func_0x03281048(lVar12,lVar15);
      goto LAB_03e3cc18;
    }
  }
  uVar19 = func_0x06fe04ec(uVar14,0,0);
  if ((uVar19 & 1) == 0) {
    return uVar14;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar5 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar13 = 0;
  func_0x06fe0874(uVar5,uVar9,0);
  auVar22 = func_0x03280b7c(uVar5,lVar11);
  *(undefined8 *)(lVar18 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar18 + -0x50) = uVar14;
  *(long *)(lVar18 + -0x48) = lVar12;
  *(undefined8 *)(lVar18 + -0x40) = uVar5;
  *(long *)(lVar18 + -0x38) = lVar11;
  if (param_4[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (param_4[7] == (int *)0x0) {
      func_0x03256878(param_4);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar22._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar11 = func_0x06fe4bb8(auVar22._0_8_,auVar22._8_8_,uVar13,0);
  lVar12 = *(long *)param_4[7];
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  if (lVar11 != 0) {
    uVar14 = func_0x03280b90(lVar11,lVar12);
    if (uVar14 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar11,lVar12);
  }
  uVar14 = 0;
LAB_03e3cd58:
  uVar19 = func_0x06fe04ec(uVar14,0,0);
  if ((uVar19 & 1) == 0) {
    return uVar14;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar5 = func_0x03280ca0();
  uVar9 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar12 = 0;
  func_0x06fe0874(uVar5,uVar9);
  auVar22 = func_0x03280b7c(uVar5,param_4);
  *(undefined8 *)(lVar18 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar18 + -0x78) = lVar11;
  *(undefined8 *)(lVar18 + -0x70) = uVar5;
  *(int ***)(lVar18 + -0x68) = param_4;
  if ((*(long *)(lVar12 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar12 + 0x38) == 0)) {
    func_0x03256878(lVar12);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  *(undefined8 *)(lVar18 + -0x90) = *(undefined8 *)(lVar18 + -0x80);
  *(ulong *)(lVar18 + -0x80) = uVar14;
  *(undefined8 *)(lVar18 + -0x78) = *(undefined8 *)(lVar18 + -0x78);
  *(undefined8 *)(lVar18 + -0x70) = *(undefined8 *)(lVar18 + -0x70);
  *(undefined8 *)(lVar18 + -0x68) = *(undefined8 *)(lVar18 + -0x68);
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = func_0x06fe3fe0(auVar22._0_8_,auVar22._8_8_,0,0);
  lVar11 = **(long **)(lVar11 + 0x38);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c(lVar11);
  }
  if (lVar12 != 0) {
    uVar14 = func_0x03280b90(lVar12,lVar11);
    if (uVar14 != 0) {
      return uVar14;
    }
    func_0x03281048(lVar12,lVar11);
  }
  return 0;
LAB_03e91044:
  lVar18 = lVar17 + (long)*piVar21 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_180 + lVar15) = (long)&uStack_16c + lVar15;
  *(long *)((long)&lStack_178 + lVar15) = lVar16;
  lVar18 = *(long *)(lVar18 + 8);
  param_4 = (int **)((long)&piStack_180 + lVar15);
  (**(code **)(lVar18 + 0x10))(*(undefined8 *)(lVar18 + 8),lVar18,plVar6,param_4,lVar16);
  uVar19 = uVar14;
  uVar10 = func_0x072ce970(uVar9,lVar16);
  if (*(long *)(lVar12 + 0x28) == *(long *)((long)&lStack_168 + lVar15)) {
    return uVar10;
  }
  goto LAB_03e910e8;
}


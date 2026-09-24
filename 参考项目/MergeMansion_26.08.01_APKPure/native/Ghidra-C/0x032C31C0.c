/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Boolean TryToMoveItemFromInventoryToBoard(GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Player.IBoardInventory bi, System.Int32 itemIndex, GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Random.IGenerationContext generationContext, GameLogic.Player.IPlayer player, System.Boolean shouldAddMergeAct = False)
 * Ghidra function entry: 033c31c0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033c3a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c3c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c3ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c48dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033c52c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033c48e0) */
/* WARNING: Removing unreachable block (ram,0x033c3ca4) */
/* WARNING: Removing unreachable block (ram,0x033c3c34) */
/* WARNING: Removing unreachable block (ram,0x033c3a24) */
/* WARNING: Removing unreachable block (ram,0x033c3a28) */
/* WARNING: Removing unreachable block (ram,0x033c3a38) */
/* WARNING: Removing unreachable block (ram,0x033c3a40) */
/* WARNING: Removing unreachable block (ram,0x033c3a68) */
/* WARNING: Removing unreachable block (ram,0x033c3a4c) */
/* WARNING: Removing unreachable block (ram,0x033c3a58) */
/* WARNING: Removing unreachable block (ram,0x033c3a78) */
/* WARNING: Removing unreachable block (ram,0x033c3a88) */
/* WARNING: Removing unreachable block (ram,0x033c3a98) */
/* WARNING: Removing unreachable block (ram,0x033c3aa0) */
/* WARNING: Removing unreachable block (ram,0x033c3ac8) */
/* WARNING: Removing unreachable block (ram,0x033c3aac) */
/* WARNING: Removing unreachable block (ram,0x033c3ab8) */
/* WARNING: Removing unreachable block (ram,0x033c3ad8) */
/* WARNING: Removing unreachable block (ram,0x033c3ae8) */
/* WARNING: Removing unreachable block (ram,0x033c3aec) */
/* WARNING: Removing unreachable block (ram,0x033c3b04) */
/* WARNING: Removing unreachable block (ram,0x033c3b0c) */
/* WARNING: Removing unreachable block (ram,0x033c3b34) */
/* WARNING: Removing unreachable block (ram,0x033c3b18) */
/* WARNING: Removing unreachable block (ram,0x033c3b24) */
/* WARNING: Removing unreachable block (ram,0x033c3b44) */
/* WARNING: Removing unreachable block (ram,0x033c3b64) */
/* WARNING: Removing unreachable block (ram,0x033c3b6c) */
/* WARNING: Removing unreachable block (ram,0x033c3b94) */
/* WARNING: Removing unreachable block (ram,0x033c3b78) */
/* WARNING: Removing unreachable block (ram,0x033c3b84) */
/* WARNING: Removing unreachable block (ram,0x033c3ba4) */
/* WARNING: Removing unreachable block (ram,0x033c3bb4) */
/* WARNING: Removing unreachable block (ram,0x033c3bc8) */
/* WARNING: Removing unreachable block (ram,0x033c3bd8) */
/* WARNING: Removing unreachable block (ram,0x033c3be0) */
/* WARNING: Removing unreachable block (ram,0x033c3c08) */
/* WARNING: Removing unreachable block (ram,0x033c3bec) */
/* WARNING: Removing unreachable block (ram,0x033c3bf8) */
/* WARNING: Removing unreachable block (ram,0x033c3c18) */
/* WARNING: Removing unreachable block (ram,0x033c3c38) */
/* WARNING: Removing unreachable block (ram,0x033c3c48) */
/* WARNING: Removing unreachable block (ram,0x033c3c50) */
/* WARNING: Removing unreachable block (ram,0x033c3c78) */
/* WARNING: Removing unreachable block (ram,0x033c3c5c) */
/* WARNING: Removing unreachable block (ram,0x033c3c68) */
/* WARNING: Removing unreachable block (ram,0x033c3c88) */
/* WARNING: Removing unreachable block (ram,0x033c3ca8) */
/* WARNING: Removing unreachable block (ram,0x033c3c98) */
/* WARNING: Removing unreachable block (ram,0x033c3c28) */
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033c31c0(long param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6,ulong param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  uint uVar4;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  int iVar5;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined *puStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  ulong uStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [80];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  
  uVar24 = param_7 & 0xffffffff;
  uVar28 = (ulong)param_3 & 0xffffffff;
  auVar31._8_8_ = 0x5e2c000;
  auVar31._0_8_ = uVar28;
  plVar19 = param_4;
  plVar13 = param_5;
  plVar11 = param_6;
  if ((bRam0000000005e2c3d2 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_05a192a8);
    func_0x0249f8e4(&DAT_05a192a0);
    func_0x0249f8e4(&DAT_059d0510);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2c3d2 = 1;
  }
  plStack_68 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    lVar20 = *param_2;
    unaff_x27 = &DAT_059defe8;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059defe8) {
          puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x16) * 0x10 + 0x138);
          goto LAB_033c32d8;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059defe8,0x16);
LAB_033c32d8:
    param_3 = (long *)puVar8[1];
    auVar31 = (*(code *)*puVar8)(param_2,uVar28);
    uVar10 = auVar31._8_8_;
    lVar20 = auVar31._0_8_;
    if (lVar20 == 0) {
      return 0;
    }
    unaff_x28 = &DAT_059db250;
    plStack_68 = (long *)func_0x0376eb00(param_1,0);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar28 = func_0x0376edd4(&plStack_68,0);
    if ((uVar28 & 1) != 0) {
      return 0;
    }
    if (param_6 != (long *)0x0) {
      lVar21 = *param_6;
      unaff_x28 = &DAT_059df8e8;
      uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar28 != 0) {
        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 5) * 0x10 + 0x138);
            goto LAB_033c3394;
          }
          uVar28 = uVar28 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c3394:
      uVar9 = (*(code *)*puVar8)(param_6,puVar8[1]);
      param_3 = (long *)0x0;
      uVar28 = func_0x036ec4b4(lVar20,uVar9);
      if ((uVar28 & 1) == 0) {
        if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar10 = func_0x03530158(uVar10,0);
        uVar10 = func_0x03530310(param_4,uVar10,0);
        lVar21 = *param_6;
        uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar28 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059df8e8) {
              puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 5) * 0x10 + 0x138);
              goto LAB_033c343c;
            }
            uVar28 = uVar28 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar28 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c343c:
        param_3 = (long *)(*(code *)*puVar8)(param_6,puVar8[1]);
        plVar19 = (long *)0x0;
        func_0x036e24f4(lVar20,uVar10);
      }
      auVar35._8_8_ = uVar10;
      auVar35._0_8_ = lVar20;
      auVar32._8_8_ = uVar10;
      auVar32._0_8_ = lVar20;
      auVar31._8_8_ = uVar10;
      auVar31._0_8_ = lVar20;
      if (param_1 != 0) {
        func_0x03785f38(param_1,plStack_68,lVar20,param_4,param_5,param_6,0);
        if ((param_7 & 1) == 0) {
          return 1;
        }
        uVar24 = func_0x0249fb80(_DAT_059d0510);
        func_0x0282ee2c(uVar24,_DAT_05a192a0);
        param_5 = plStack_68;
        lVar21 = *param_6;
        uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar28 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059df8e8) {
              puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 5) * 0x10 + 0x138);
              goto LAB_033c34fc;
            }
            uVar28 = uVar28 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar28 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c34fc:
        uVar10 = (*(code *)*puVar8)(param_6,puVar8[1]);
        plVar11 = (long *)func_0x036d3908(lVar20,uVar10,0);
        uStack_120 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        param_3 = param_5;
        plVar19 = param_5;
        plVar13 = param_4;
        func_0x034ba874(&uStack_c0,9);
        auVar31 = auVar32;
        if (uVar24 != 0) {
          func_0x054ed0d0(auStack_110,&uStack_c0,0x50);
          param_3 = _DAT_05a192a8;
          func_0x025a1da8(uVar24,auStack_110);
          lVar20 = *param_6;
          uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar28 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
                puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x17) * 0x10 + 0x138);
                goto LAB_033c35d4;
              }
              uVar28 = uVar28 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar28 != 0);
          }
          param_3 = (long *)0x17;
          puVar8 = (undefined8 *)func_0x024d927c(param_6);
LAB_033c35d4:
          plVar12 = (long *)(*(code *)*puVar8)(param_6,puVar8[1]);
          lVar20 = *param_2;
          uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar28 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _DAT_059defe8) {
                puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_033c3634;
              }
              uVar28 = uVar28 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar28 != 0);
          }
          param_3 = (long *)0x2;
          puVar8 = (undefined8 *)func_0x024d927c(param_2);
LAB_033c3634:
          uVar10 = (*(code *)*puVar8)(param_2,puVar8[1]);
          param_6 = (long *)0x0;
          auVar31 = auVar35;
          if (plVar12 != (long *)0x0) {
            lVar20 = *plVar12;
            uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar28 != 0) {
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == _DAT_059e0280) {
                  puVar8 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_033c369c;
                }
                uVar28 = uVar28 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar28 != 0);
            }
            puVar8 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0280,0);
LAB_033c369c:
            (*(code *)*puVar8)(plVar12,uVar10,uVar24,puVar8[1]);
            return 1;
          }
        }
      }
    }
  }
  lVar20 = auVar31._8_8_;
  auVar32 = func_0x0249fb90();
  puVar25 = auVar32._8_8_;
  puVar26 = auVar32._0_8_;
  uStack_170 = 0x33c36d8;
  puVar29 = (undefined *)0x5e2c000;
  puVar27 = (undefined *)((ulong)plVar19 & 0xffffffff);
  plVar12 = plVar19;
  lStack_150 = param_1;
  plStack_148 = param_5;
  uStack_140 = uVar24;
  plStack_138 = param_4;
  plStack_130 = param_6;
  plStack_128 = param_2;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    lStack_160 = lVar20;
    uStack_158 = auVar31._0_8_;
    func_0x0249f8e4(&DAT_059df8e8);
    auVar31._8_8_ = lStack_160;
    auVar31._0_8_ = uStack_158;
    bRam0000000005e2c3d3 = 1;
  }
  lStack_160 = auVar31._8_8_;
  uStack_158 = auVar31._0_8_;
  if (puVar26 != (undefined *)0x0) {
    uVar10 = func_0x0376e450(puVar26,puVar25,0);
    auVar31._8_8_ = lStack_160;
    auVar31._0_8_ = uStack_158;
    if (plVar11 != (long *)0x0) {
      lVar20 = *plVar11;
      uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 5) * 0x10 + 0x138);
            goto LAB_033c3798;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df8e8,5);
LAB_033c3798:
      uVar9 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      uVar4 = func_0x036edd98(uVar10,uVar9,0);
      if ((uVar4 & 1) != 0) {
        if (((ulong)plVar19 & 1) == 0) {
          func_0x03780be8(puVar26,puVar25,param_3,plVar13,0,plVar11,0);
        }
        else {
          func_0x036eaf0c(uVar10,0);
          func_0x03780be8(puVar26,puVar25,param_3,plVar13,0,plVar11,0);
          func_0x036eadfc(uVar10,0);
        }
      }
      return (ulong)(uVar4 & 1);
    }
  }
  lStack_160 = auVar31._8_8_;
  uStack_158 = auVar31._0_8_;
  lVar21 = func_0x0249fb90();
  puVar8 = &uStack_190;
  uStack_190 = 0x33c383c;
  uVar10 = 0x5e2c000;
  plStack_188 = param_3;
  plStack_180 = plVar13;
  plStack_178 = plVar11;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar21 != 0) {
    param_3 = (long *)func_0x0367613c(lVar21,0);
    iVar5 = func_0x03676288(lVar21,0);
    if ((param_3 != (long *)0x0) && (*(long *)(lVar21 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar21 + 0x338) + 0x10) = *(int *)((long)param_3 + 0x24) * iVar5;
      func_0x03675f48(lVar21,iVar5,0);
      if ((iVar5 != 0) || (*(int *)(lVar21 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar24 = func_0x03633f50(lVar21,0);
        if ((uVar24 & 1) != 0) {
          return uVar24;
        }
      }
      *(undefined4 *)(lVar21 + 0x358) = 0;
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      uVar24 = func_0x028a379c(lVar21,_DAT_05a2aaf0);
      *(ulong *)(lVar21 + 0x340) = uVar24;
      return uVar24;
    }
  }
  uVar9 = 0x33c3914;
  auVar33 = func_0x0249fb90();
  if (auVar33._8_8_ != 0) {
    do {
      *(undefined8 *)((long)puVar8 + -0x20) = uVar9;
      *(long **)((long)puVar8 + -0x18) = param_3;
      *(undefined8 *)((long)puVar8 + -0x10) = uVar10;
      *(long *)((long)puVar8 + -8) = lVar21;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar20 = *(long *)(auVar33._8_8_ + 0x38);
      if (lVar20 != 0) {
        *(int *)((long)puVar8 + -0x24) = auVar33._0_4_;
        uVar4 = func_0x02893128(lVar20,(undefined1 *)((long)puVar8 + -0x24),_DAT_05a2a588);
        return (ulong)(uVar4 & 1);
      }
      auVar31 = func_0x0249fb90();
      plVar19 = auVar31._8_8_;
      *(undefined8 *)((long)puVar8 + -0x50) = 0x387e7ec;
      *(undefined8 *)((long)puVar8 + -0x48) = 0x5e2e000;
      *(long *)((long)puVar8 + -0x40) = auVar33._8_8_;
      *(ulong *)((long)puVar8 + -0x38) = auVar33._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar19 == (long *)0x0) {
        auVar32 = func_0x0249fb90();
        *(undefined8 *)((long)puVar8 + -0x70) = 0x387e89c;
        *(undefined8 *)((long)puVar8 + -0x68) = 0x5e2e000;
        *(undefined8 *)((long)puVar8 + -0x60) = 0;
        *(long *)((long)puVar8 + -0x58) = auVar31._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar20 = *(long *)(auVar32._0_8_ + 0xe8);
        if (lVar20 != 0) {
          *(int *)((long)puVar8 + -0x74) = auVar32._8_4_;
          uVar4 = func_0x02893128(lVar20,(undefined1 *)((long)puVar8 + -0x74),_DAT_05a2a588);
          return (ulong)(uVar4 & 1);
        }
        auVar31 = func_0x0249fb90();
        *(undefined8 *)((long)puVar8 + -0xa0) = 0x387e908;
        *(undefined8 *)((long)puVar8 + -0x98) = 0x5e2e000;
        *(long *)((long)puVar8 + -0x90) = auVar32._0_8_;
        *(ulong *)((long)puVar8 + -0x88) = auVar32._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar20 = *(long *)(auVar31._0_8_ + 0xe8);
        if (lVar20 != 0) {
          *(int *)((long)puVar8 + -0xa4) = auVar31._8_4_;
          uVar24 = func_0x028926c4(lVar20,(undefined1 *)((long)puVar8 + -0xa4),_DAT_05a2a578);
          return uVar24;
        }
        lVar20 = func_0x0249fb90();
        *(undefined8 *)((long)puVar8 + -0xd0) = 0x387e970;
        *(long *)((long)puVar8 + -0xc0) = auVar31._0_8_;
        *(ulong *)((long)puVar8 + -0xb8) = auVar31._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar20 + 0xf0) == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)*(uint *)(*(long *)(lVar20 + 0xf0) + 0x20);
        }
        return uVar24;
      }
      lVar20 = *plVar19;
      uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059dfbc0) {
            puVar17 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar17 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar10 = (*(code *)*puVar17)(plVar19,puVar17[1]);
      auVar33._8_8_ = auVar31._0_8_;
      auVar33._0_8_ = uVar10;
      uVar10 = *(undefined8 *)((long)puVar8 + -0x40);
      lVar21 = *(long *)((long)puVar8 + -0x38);
      uVar9 = *(undefined8 *)((long)puVar8 + -0x50);
      param_3 = *(long **)((long)puVar8 + -0x48);
      puVar8 = (undefined8 *)((long)puVar8 + -0x30);
    } while( true );
  }
  uStack_1a0 = 0x33c3914;
  auVar31 = func_0x0249fb90();
  plVar19 = auVar31._0_8_;
  uStack_1d0 = 0x33c3934;
  uStack_1b0 = 0x5e2c000;
  puStack_1c0 = puVar25;
  plStack_1b8 = param_3;
  lStack_1a8 = lVar21;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar19 == (long *)0x0) {
    puVar30 = (undefined *)0x33c3cc8;
    auVar32 = func_0x0249fb90();
  }
  else {
    lVar21 = *plVar19;
    puVar25 = &DAT_059dfa78;
    uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar24 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar24 = uVar24 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar24 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar21 = (*(code *)*puVar8)(plVar19,puVar8[1]);
    if (lVar21 == 0) {
      return 0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar24 = func_0x035fb854(plVar19,auVar31._8_8_,0);
    if ((uVar24 & 1) == 0) {
      return 0;
    }
    puVar30 = (undefined *)0x33c3a24;
    auVar32 = auVar31;
  }
  plVar13 = auVar32._8_8_;
  plVar19 = auVar32._0_8_;
  uStack_1e8 = 0x5e2c000;
  lVar21 = 0x5e2c000;
  puStack_1f0 = puVar30;
  auStack_1e0 = auVar31;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar19 == (long *)0x0) {
    uVar10 = 0x33c3e04;
    auVar31 = func_0x0249fb90();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = plVar13;
    ppuVar3 = &puStack_1f0;
    auVar32 = auVar2 << 0x40;
SUB_033c3e04:
    plVar19 = auVar31._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0x30) = uVar10;
    *(undefined **)((long)ppuVar3 + -0x28) = puVar26;
    *(undefined **)((long)ppuVar3 + -0x20) = puVar25;
    *(long *)((long)ppuVar3 + -0x18) = lVar21;
    *(undefined1 (*) [16])((long)ppuVar3 + -0x10) = auVar32;
    puVar30 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d7 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a047e8);
      func_0x0249f8e4(&DAT_05a047f0);
      func_0x0249f8e4(&DAT_05a047f8);
      func_0x0249f8e4(&DAT_059dec98);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_05a1a750);
      bRam0000000005e2c3d7 = 1;
    }
    *(undefined8 *)((long)ppuVar3 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x48) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x40) = 0;
    if (plVar19 != (long *)0x0) {
      lVar21 = *plVar19;
      puVar30 = &DAT_059dfa78;
      uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
            puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar24 = (*(code *)*puVar8)(plVar19,puVar8[1]);
      if ((uVar24 & 1) == 0) goto LAB_033c40ec;
      lVar21 = *plVar19;
      uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
            puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar13 = (long *)(*(code *)*puVar8)(plVar19,auVar31._8_8_,puVar8[1]);
      if (plVar13 != (long *)0x0) {
        lVar21 = *plVar13;
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059dec98) {
              puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar24 = uVar24 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar24 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dec98,4);
LAB_033c3fac:
        lVar21 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        plVar19 = plVar13;
        if (lVar21 != 0) {
          func_0x028310e8(lVar21,(undefined1 *)((long)ppuVar3 + -0x50),_DAT_05a1a750);
          puVar25 = &DAT_05a047f0;
          puVar26 = &DAT_05a047f8;
          *(undefined8 *)((long)ppuVar3 + -0x60) = 0;
          *(undefined1 **)((long)ppuVar3 + -0x58) = (undefined1 *)((long)ppuVar3 + -0x50);
LAB_033c3fe8:
          uVar4 = func_0x02a5d2d0((undefined1 *)((long)ppuVar3 + -0x50),_DAT_05a047f0);
          lVar21 = _DAT_05a047f8;
          plVar19 = (long *)(ulong)uVar4;
          if ((uVar4 & 1) == 0) goto LAB_033c4084;
          lVar14 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar1 = *(ushort *)(lVar14 + 0x135);
          lVar16 = lVar14;
          if ((uVar1 & 1) == 0) {
            lVar16 = func_0x024d8f40();
            lVar14 = *(long *)(lVar21 + 0x20);
            uVar1 = *(ushort *)(lVar14 + 0x135);
          }
          puVar30 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar1 & 1) == 0) {
            lVar14 = func_0x024d8f40();
          }
          uVar10 = func_0x0249f90c((undefined1 *)((long)ppuVar3 + -0x50),
                                   *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0((undefined1 *)((long)ppuVar3 + -0x38),uVar10,puVar30);
          plVar13 = *(long **)((long)ppuVar3 + -0x38);
          if (plVar13 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar37 = func_0x0249fb90();
    uVar10 = auVar37._0_8_;
    if (auVar37._8_4_ == 1) {
      plVar13 = (long *)func_0x054ed080(uVar10);
      lVar21 = *plVar13;
      *(long *)((long)ppuVar3 + -0x60) = lVar21;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)((long)ppuVar3 + -0x58),_DAT_05a047e8);
      if (lVar21 == 0) {
LAB_033c40ec:
        uVar4 = 1;
LAB_033c40f0:
        return (ulong)(uVar4 & 1);
      }
      uVar10 = func_0x0249fb88(lVar21);
    }
    func_0x022c29f0((undefined1 *)((long)ppuVar3 + -0x60));
    func_0x0258f7ac(uVar10);
    auVar31 = func_0x022bd790();
    plVar11 = auVar31._8_8_;
    plVar13 = auVar31._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0xa0) = 0x33c4128;
    *(undefined **)((long)ppuVar3 + -0x90) = puVar27;
    *(undefined **)((long)ppuVar3 + -0x88) = puVar26;
    *(undefined **)((long)ppuVar3 + -0x80) = puVar25;
    *(undefined **)((long)ppuVar3 + -0x78) = puVar30;
    *(long **)((long)ppuVar3 + -0x70) = plVar19;
    *(undefined8 *)((long)ppuVar3 + -0x68) = uVar10;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    puVar25 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar3 + -0x98) = 0;
    if ((plVar13 != (long *)0x0) && (plVar11 != (long *)0x0)) {
      lVar21 = *plVar11;
      uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
            puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059e0220,6);
LAB_033c4208:
      lVar21 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      lVar16 = *plVar13;
      puVar25 = &DAT_059dfa78;
      uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar10 = puVar8[1];
      plVar19 = (long *)(*(code *)*puVar8)(plVar13,plVar11);
      if (plVar19 != (long *)0x0) {
        lVar16 = *plVar19;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar24 != 0) {
          piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059ca7c8) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar24 = uVar24 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar24 != 0);
        }
        uVar10 = 0;
        puVar8 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033c42e4:
        plVar11 = (long *)(*(code *)*puVar8)(plVar19,puVar8[1]);
        *(long **)((long)ppuVar3 + -0x98) = plVar11;
        *(undefined8 *)((long)ppuVar3 + -0xb0) = 0;
        *(undefined1 **)((long)ppuVar3 + -0xa8) = (undefined1 *)((long)ppuVar3 + -0x98);
        if (plVar11 != (long *)0x0) {
          puVar26 = &DAT_059df6e0;
          puVar27 = &DAT_059cbb20;
          do {
            lVar16 = *plVar11;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar24 != 0) {
              piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == _DAT_059df6e0) {
                  puVar8 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar24 = uVar24 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar24 != 0);
            }
            uVar10 = 0;
            puVar8 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033c4360:
            uVar24 = (*(code *)*puVar8)(plVar11,puVar8[1]);
            plVar19 = (long *)(uVar24 & 0xffffffff);
            if ((uVar24 & 1) == 0) goto LAB_033c44b8;
            plVar13 = *(long **)((long)ppuVar3 + -0x98);
            if (plVar13 == (long *)0x0) {
              func_0x0249fb90();
              plVar13 = (long *)0x0;
LAB_033c4550:
              auVar34 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar34._0_8_,auVar34._8_8_);
              goto LAB_033c4558;
            }
            lVar16 = *plVar13;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar24 != 0) {
              piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == _DAT_059cbb20) {
                  puVar8 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar24 = uVar24 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar24 != 0);
            }
            uVar10 = 0;
            puVar8 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033c43c8:
            plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
            if (plVar13 == (long *)0x0) goto LAB_033c4550;
            lVar16 = *plVar13;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar24 != 0) {
              piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
                  puVar8 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar24 = uVar24 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar24 != 0);
            }
            uVar10 = 0;
            puVar8 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033c4428:
            iVar5 = (*(code *)*puVar8)(plVar13,puVar8[1]);
            if (iVar5 != 0) {
              lVar16 = *plVar13;
              uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar24 != 0) {
                piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
                    puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar24 = uVar24 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar24 != 0);
              }
              uVar10 = 1;
              puVar8 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033c4488:
              uVar24 = (*(code *)*puVar8)(plVar13,puVar8[1]);
              auVar34._8_8_ = uVar24 & 0xffffffff;
              auVar34._0_8_ = uVar24;
              if (lVar21 == 0) goto LAB_033c4554;
              uVar10 = 0;
              uVar24 = func_0x0387cc50(lVar21);
              if ((uVar24 & 1) == 0) goto LAB_033c44b8;
            }
            plVar11 = *(long **)((long)ppuVar3 + -0x98);
            plVar19 = (long *)0x0;
          } while (plVar11 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar21 = 0;
        puVar25 = (undefined *)(ulong)((uint)plVar19 ^ 1);
        puVar8 = (undefined8 *)((long)ppuVar3 + -0x98);
        do {
          plVar19 = (long *)*puVar8;
          if (plVar19 != (long *)0x0) {
            lVar16 = *plVar19;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar24 != 0) {
              piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == _DAT_059df598) {
                  puVar8 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar24 = uVar24 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar24 != 0);
            }
            uVar10 = 0;
            puVar8 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033c4520:
            (*(code *)*puVar8)(plVar19,puVar8[1]);
          }
          if (lVar21 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar37 = func_0x0249fb88(lVar21);
          uVar9 = auVar37._0_8_;
          if (auVar37._8_4_ != 1) goto LAB_033c45b0;
          plVar19 = (long *)func_0x054ed080(uVar9);
          lVar21 = *plVar19;
          *(long *)((long)ppuVar3 + -0xb0) = lVar21;
          func_0x054ed090();
          puVar8 = *(undefined8 **)((long)ppuVar3 + -0xa8);
          puVar25 = (undefined *)0x1;
        } while( true );
      }
      puVar25 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong)((uint)puVar25 & 1);
  }
  lVar20 = *plVar19;
  uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar24 != 0) {
    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
        puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar24 = uVar24 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar24 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar24 = (*(code *)*puVar8)(plVar19,puVar8[1]);
  if ((uVar24 & 1) != 0) {
    lVar20 = *plVar19;
    uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar24 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
          puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar24 = uVar24 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar24 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar10 = (*(code *)*puVar8)(plVar19,puVar8[1]);
    uVar10 = func_0x033c88e0(uVar10,plVar13,0,0);
    uVar24 = func_0x033c9114(uVar10,plVar13);
    if ((uVar24 & 1) == 0) {
      puStack_1f0 = puVar25;
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar19 != (long *)0x0) {
        lVar20 = *plVar19;
        uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar24 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
              puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar24 = uVar24 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar24 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar10 = (*(code *)*puVar8)(plVar19,puVar8[1]);
        lVar20 = func_0x033c97d4(uVar10,plVar13);
        if (lVar20 != 0) {
          uVar4 = *(uint *)(lVar20 + 0x18);
          if (0 < (int)uVar4) {
            if (plVar13 == (long *)0x0) goto LAB_033ca068;
            uVar24 = 0;
            do {
              lVar21 = *plVar13;
              uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar28 != 0) {
                piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
                    puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar28 = uVar28 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar28 != 0);
              }
              puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059e0220,6);
LAB_033c9f74:
              lVar21 = (*(code *)*puVar8)(plVar13,puVar8[1]);
              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_033ca06c;
              plVar11 = (long *)(lVar20 + uVar24 * 8 + 0x20);
              lVar16 = *plVar11;
              if (lVar16 == 0) goto LAB_033ca068;
              uVar6 = func_0x0353efa0(lVar16,0);
              if (lVar21 == 0) goto LAB_033ca068;
              uVar28 = func_0x0387cc50(lVar21,uVar6,0);
              if ((uVar28 & 1) == 0) {
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_033ca06c;
                lVar20 = *plVar11;
                if (lVar20 == 0) goto LAB_033ca068;
                iVar5 = func_0x0353efa0(lVar20,0);
                lVar20 = *plVar19;
                uVar24 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar24 == 0) goto LAB_033ca020;
                piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar4);
          }
          return 0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar31 = func_0x0249fb98();
      uVar10 = func_0x033c88e0(auVar31._0_8_,auVar31._8_8_,0,0);
      uVar24 = func_0x033c7ab8(uVar10,auVar31._8_8_);
      return uVar24;
    }
  }
  return 1;
code_r0x033c4070:
  uVar24 = (**(code **)(*plVar13 + 0x1b8))(plVar13,auVar31._8_8_,*(undefined8 *)(*plVar13 + 0x1c0));
  if ((uVar24 & 1) == 0) {
LAB_033c4084:
    uVar4 = uVar4 ^ 1;
    func_0x02a5d2cc((undefined1 *)((long)ppuVar3 + -0x50),_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c((undefined1 *)((long)ppuVar3 + -0xb0));
  func_0x0258f7ac(uVar9);
  auVar31 = func_0x022bd790();
  plVar18 = auVar31._8_8_;
  plVar11 = auVar31._0_8_;
  *(undefined8 *)((long)ppuVar3 + -0xe0) = 0x33c45c4;
  *(undefined **)((long)ppuVar3 + -0xd0) = puVar25;
  *(long **)((long)ppuVar3 + -200) = plVar13;
  *(long **)((long)ppuVar3 + -0xc0) = plVar19;
  *(undefined8 *)((long)ppuVar3 + -0xb8) = uVar9;
  uVar9 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar18 != (long *)0x0) {
    lVar21 = *plVar18;
    uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar24 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar24 = uVar24 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar24 != 0);
    }
    uVar10 = 6;
    puVar8 = (undefined8 *)func_0x024d927c(plVar18);
LAB_033c466c:
    lVar21 = (*(code *)*puVar8)(plVar18,puVar8[1]);
    if (plVar11 != (long *)0x0) {
      lVar16 = *plVar11;
      puVar25 = &DAT_059dfa78;
      uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar24 != 0) {
        piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar24 != 0);
      }
      uVar10 = 1;
      puVar8 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033c46d8:
      uVar6 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      uVar9 = 0;
      if (lVar21 != 0) {
        uVar24 = func_0x0387c57c(lVar21,uVar6,0);
        if ((uVar24 & 1) != 0) {
          return 3;
        }
        lVar16 = *plVar11;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar24 != 0) {
          piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
              puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar24 = uVar24 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar24 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar24 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        if ((uVar24 & 1) == 0) {
          lVar16 = *plVar11;
          uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar24 != 0) {
            piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
                puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar24 = uVar24 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar24 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar24 = (*(code *)*puVar8)(plVar11,puVar8[1]);
          if ((uVar24 & 1) == 0) {
            lVar16 = *plVar11;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar24 != 0) {
              piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
                  puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar24 = uVar24 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar24 != 0);
            }
            puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfa78,1);
LAB_033c4814:
            uVar6 = (*(code *)*puVar8)(plVar11,puVar8[1]);
            uVar24 = func_0x0387cc50(lVar21,uVar6,0);
            if ((uVar24 & 1) != 0) {
              return 2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar12 = (long *)0x0;
        uVar24 = func_0x03603060(plVar11,plVar18,1);
        if ((uVar24 & 1) == 0) {
          return 5;
        }
        lVar16 = *plVar11;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar24 != 0) {
          piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
              puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar24 = uVar24 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar24 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar24 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        if ((uVar24 & 1) == 0) {
          uVar4 = func_0x033c4128(plVar11,plVar18);
          return (ulong)((uVar4 ^ 0xffffffff) & 1);
        }
        uVar10 = 0x33c48e0;
        ppuVar3 = (undefined **)((long)ppuVar3 + -0xe0);
        auVar32 = auVar31;
        goto SUB_033c3e04;
      }
    }
  }
  auVar32 = func_0x0249fb90();
  plVar19 = auVar32._8_8_;
  lVar21 = auVar32._0_8_;
  *(undefined8 *)((long)ppuVar3 + -0x100) = 0x33c490c;
  *(undefined8 *)((long)ppuVar3 + -0xf8) = uVar9;
  *(undefined1 (*) [16])((long)ppuVar3 + -0xf0) = auVar31;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar19 == (long *)0x0) goto LAB_033c4a08;
  lVar16 = *plVar19;
  uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar24 == 0) goto LAB_033c4978;
  piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
  goto LAB_033c4960;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar23 = piVar23 + 4;
    if (uVar24 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
      puVar8 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar7 = (*(code *)*puVar8)(plVar19,puVar8[1]);
  return (ulong)(iVar5 == iVar7);
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar23 = piVar23 + 4;
    if (uVar24 == 0) break;
LAB_033c4960:
    if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
      puVar8 = (undefined8 *)(lVar16 + (long)(*piVar23 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar10 = 6;
  puVar8 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033c4998:
  lVar16 = (*(code *)*puVar8)(plVar19,puVar8[1]);
  if ((lVar21 != 0) && (plVar19 = (long *)0x0, lVar16 != 0)) {
    uVar24 = func_0x0387c57c(lVar16,*(undefined4 *)(lVar21 + 0x10),0);
    if ((uVar24 & 1) == 0) {
      uVar24 = 2;
    }
    else {
      uVar24 = func_0x0353f618(lVar21,0);
      if ((uVar24 & 1) == 0) {
        uVar24 = func_0x0387cc50(lVar16,*(undefined4 *)(lVar21 + 0x10),0);
        if ((uVar24 & 1) != 0) {
          return 1;
        }
      }
      uVar24 = 0;
    }
    return uVar24;
  }
LAB_033c4a08:
  auVar31 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar3 + -0x160) = unaff_x29;
  *(undefined8 *)((long)ppuVar3 + -0x158) = 0x33c4a0c;
  *(undefined **)((long)ppuVar3 + -0x150) = unaff_x28;
  *(undefined **)((long)ppuVar3 + -0x148) = unaff_x27;
  *(long *)((long)ppuVar3 + -0x140) = lVar20;
  *(undefined8 *)((long)ppuVar3 + -0x138) = 0x5e2c000;
  *(undefined **)((long)ppuVar3 + -0x130) = puVar27;
  *(undefined **)((long)ppuVar3 + -0x128) = puVar26;
  *(undefined **)((long)ppuVar3 + -0x120) = puVar25;
  *(undefined8 *)((long)ppuVar3 + -0x118) = 0x5e2c000;
  *(long **)((long)ppuVar3 + -0x110) = plVar19;
  *(long *)((long)ppuVar3 + -0x108) = lVar21;
  plVar13 = (long *)0x5e2c000;
  uVar24 = auVar31._0_8_ & 0xffffffff;
  plVar19 = plVar12;
  if ((bRam0000000005e2c3da & 1) == 0) {
    func_0x0249f8e4(&DAT_059f5d10);
    func_0x0249f8e4(&DAT_059f5cd8);
    func_0x0249f8e4(&DAT_059c1e78);
    func_0x0249f8e4(&DAT_059c1eb0);
    func_0x0249f8e4(&DAT_059f5d38);
    func_0x0249f8e4(&DAT_059f5d98);
    func_0x0249f8e4(&DAT_059c1ef8);
    func_0x0249f8e4(&DAT_059c1ed8);
    func_0x0249f8e4(&DAT_059db3a0);
    func_0x0249f8e4(&DAT_05a047e8);
    func_0x0249f8e4(&DAT_05a047f0);
    func_0x0249f8e4(&DAT_05a047f8);
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059cd750);
    func_0x0249f8e4(&DAT_05a1a750);
    func_0x0249f8e4(&DAT_05a1a758);
    func_0x0249f8e4(&DAT_05a2eda0);
    func_0x0249f8e4(&DAT_05a2ed98);
    func_0x0249f8e4(&DAT_05a2f0a8);
    func_0x0249f8e4(&DAT_05a2f0b0);
    bRam0000000005e2c3da = 1;
  }
  *(undefined1 *)((long)ppuVar3 + -0x16c) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x180) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x178) = 0;
  *(undefined8 *)((long)ppuVar3 + -400) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x188) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x1a0) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x198) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x1c0) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x1b8) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x1b0) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x1c8) = 0;
  if (plVar12 == (long *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar10 = func_0x0249fb88(uVar10);
    func_0x022c29f0((undefined1 *)((long)ppuVar3 + -0x1e0));
    func_0x0258f7ac(uVar10);
    uVar9 = 0x33c5404;
    auVar36 = func_0x022bd790();
    puVar26 = puVar27;
  }
  else {
    lVar21 = *plVar12;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar11 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    if (plVar11 == (long *)0x0) goto LAB_033c53e0;
    lVar21 = *plVar11;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059dfe60) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar13 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
    lVar21 = *plVar12;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0220,6);
LAB_033c4cac:
    puVar26 = (undefined *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    if (plVar13 == (long *)0x0) goto LAB_033c53e0;
    lVar21 = *plVar13;
    puVar29 = &DAT_059cd750;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059cd750) {
          puVar8 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059cd750,0);
LAB_033c4d14:
    uVar28 = (*(code *)*puVar8)(plVar13,uVar24,puVar8[1]);
    if ((uVar28 & 1) == 0) {
      return 4;
    }
    puVar27 = puVar26;
    if (puVar26 == (undefined *)0x0) goto LAB_033c53e0;
    uVar28 = func_0x0387c57c(puVar26,uVar24,0);
    if ((uVar28 & 1) == 0) {
      return 1;
    }
    lVar21 = *plVar13;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059cd750) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059cd750,2);
LAB_033c4da0:
    uVar24 = (*(code *)*puVar8)(plVar13,uVar24,puVar8[1]);
    auVar36._8_8_ = plVar12;
    auVar36._0_8_ = uVar24;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar28 = func_0x035fb854(uVar24,plVar12,0);
    if ((uVar28 & 1) == 0) {
      return 3;
    }
    *(undefined1 *)((long)ppuVar3 + -0x16c) = 0;
    if (uVar24 == 0) goto LAB_033c53e0;
    uVar28 = func_0x0353f608(uVar24,0);
    if ((uVar28 & 1) != 0) {
LAB_033c4e0c:
      plVar13 = *(long **)(uVar24 + 0x28);
      if (plVar13 == (long *)0x0) {
LAB_033c52d0:
        uVar4 = 0;
        if (*(char *)((long)ppuVar3 + -0x16c) != '\0') {
          uVar4 = 6;
        }
        return (ulong)uVar4;
      }
      uVar4 = *(uint *)(plVar13 + 3);
      puVar27 = (undefined *)(ulong)uVar4;
      if ((int)uVar4 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar29 = _DAT_059f5cd8;
      lVar21 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x024d8f40();
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
      if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x024d8f40();
      }
      if (*(int *)(lVar21 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar21 = *(long *)(puVar29 + 0x20);
      if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x024d8f40();
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
      if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x024d8f40();
      }
      plVar11 = (long *)**(long **)(lVar21 + 0xb8);
      if (plVar11 != (long *)0x0) {
        puVar29 = (undefined *)
                  (**(code **)(*plVar11 + 0x178))(plVar11,puVar27,*(undefined8 *)(*plVar11 + 0x180))
        ;
        *(undefined **)((long)ppuVar3 + -0x178) = puVar29;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar20 = _DAT_059f5d10;
        lVar21 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40();
        }
        lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40();
        }
        if (*(int *)(lVar21 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar21 = *(long *)(lVar20 + 0x20);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40();
        }
        lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40();
        }
        plVar11 = (long *)**(long **)(lVar21 + 0xb8);
        if (plVar11 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar11 + 0x178))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x180));
          *(undefined8 *)((long)ppuVar3 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar3 + -0x1d8) = (undefined1 *)((long)ppuVar3 + -0x180);
          *(undefined8 *)((long)ppuVar3 + -0x180) = uVar9;
          *(undefined1 **)((long)ppuVar3 + -0x1d0) = (undefined1 *)((long)ppuVar3 + -0x178);
          auVar32 = func_0x028ff200(puVar29,_DAT_05a2eda0);
          auVar35 = func_0x028ff200(*(undefined8 *)((long)ppuVar3 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar5 = func_0x035fdf8c(plVar13,auVar32._0_8_,auVar32._8_8_,auVar35._0_8_,auVar35._8_8_,0)
          ;
          if (0 < iVar5) {
            uVar9 = *(undefined8 *)((long)ppuVar3 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar3 + -400),uVar9,0,iVar5,_DAT_059f5d38);
            uVar9 = *(undefined8 *)((long)ppuVar3 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar3 + -0x1a0),uVar9,0,iVar5,_DAT_059f5d98);
            auVar32 = func_0x028ff244(*(undefined8 *)((long)ppuVar3 + -400),
                                      *(undefined8 *)((long)ppuVar3 + -0x188),_DAT_05a2ed98);
            auVar35 = func_0x028ff244(*(undefined8 *)((long)ppuVar3 + -0x1a0),
                                      *(undefined8 *)((long)ppuVar3 + -0x198),_DAT_05a2f0a8);
            uVar24 = func_0x033bae94(plVar12,auVar31._8_8_,uVar10,auVar32._0_8_,auVar32._8_8_,
                                     auVar35._0_8_,auVar35._8_8_,
                                     (undefined1 *)((long)ppuVar3 + -0x16c));
            if ((uVar24 & 1) == 0) {
              func_0x02408624((undefined1 *)((long)ppuVar3 + -0x1e0));
              return 2;
            }
          }
          func_0x02408624((undefined1 *)((long)ppuVar3 + -0x1e0));
          func_0x028310e8(plVar13,(undefined1 *)((long)ppuVar3 + -0x1e0),_DAT_05a1a750);
          *(undefined8 *)((long)ppuVar3 + -0x1b8) = *(undefined8 *)((long)ppuVar3 + -0x1d8);
          *(undefined8 *)((long)ppuVar3 + -0x1c0) = *(undefined8 *)((long)ppuVar3 + -0x1e0);
          *(undefined8 *)((long)ppuVar3 + -0x1b0) = *(undefined8 *)((long)ppuVar3 + -0x1d0);
          *(undefined8 *)((long)ppuVar3 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar3 + -0x1d8) = (undefined1 *)((long)ppuVar3 + -0x1c0);
          while( true ) {
            uVar24 = func_0x02a5d2d0((undefined1 *)((long)ppuVar3 + -0x1c0),_DAT_05a047f0);
            lVar20 = _DAT_05a047f8;
            if ((uVar24 & 1) == 0) break;
            lVar16 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar1 = *(ushort *)(lVar16 + 0x135);
            lVar21 = lVar16;
            if ((uVar1 & 1) == 0) {
              lVar21 = func_0x024d8f40();
              lVar16 = *(long *)(lVar20 + 0x20);
              uVar1 = *(ushort *)(lVar16 + 0x135);
            }
            uVar6 = *(undefined4 *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x10) + 0xfc);
            if ((uVar1 & 1) == 0) {
              lVar16 = func_0x024d8f40();
            }
            uVar10 = func_0x0249f90c((undefined1 *)((long)ppuVar3 + -0x1c0),
                                     *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0((undefined1 *)((long)ppuVar3 + -0x168),uVar10,uVar6);
            plVar19 = *(long **)((long)ppuVar3 + -0x168);
            if (plVar19 != (long *)0x0) {
              lVar20 = *plVar19;
              if ((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar20 + 0x130)) &&
                 (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                           -8) == _DAT_059db3a0)) {
                uVar24 = (**(code **)(lVar20 + 0x1b8))
                                   (plVar19,plVar12,*(undefined8 *)(lVar20 + 0x1c0));
                if ((uVar24 & 1) == 0) {
                  func_0x02a5d2cc((undefined1 *)((long)ppuVar3 + -0x1c0),_DAT_05a047e8);
                  return 5;
                }
              }
            }
          }
          func_0x02a5d2cc((undefined1 *)((long)ppuVar3 + -0x1c0),_DAT_05a047e8);
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar28 = func_0x0353f618(uVar24,0);
    if ((uVar28 & 1) != 0) goto LAB_033c4e0c;
    uVar28 = func_0x0353f5f8(uVar24,0);
    if ((uVar28 & 1) == 0) {
      uVar28 = func_0x0353f628(uVar24,0);
      if ((uVar28 & 1) != 0) {
        return 3;
      }
      uVar28 = func_0x0353f638(uVar24,0);
      if ((uVar28 & 1) != 0) {
        return 3;
      }
      uVar28 = func_0x0353f648(uVar24,0);
      if ((uVar28 & 1) == 0) {
        uVar28 = func_0x0353f658(uVar24,0);
        if ((uVar28 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar28 = func_0x03600068(uVar24,(undefined1 *)((long)ppuVar3 + -0x1c8),0);
        if ((uVar28 & 1) == 0) goto LAB_033c52d0;
        lVar21 = func_0x022bffa8(6,_DAT_059e0220,plVar12);
        if (*(long *)((long)ppuVar3 + -0x1c8) != 0) {
          uVar9 = func_0x03693f98(*(long *)((long)ppuVar3 + -0x1c8),0);
          uVar10 = 0;
          if (lVar21 != 0) {
            uVar24 = func_0x03887158(lVar21,plVar12,uVar9,0);
            if ((uVar24 & 1) != 0) {
              return 3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar21 = func_0x022bffa8(6,_DAT_059e0220,plVar12);
        if (lVar21 != 0) {
          uVar24 = func_0x03884e60(lVar21,*(undefined4 *)(uVar24 + 0x10),0,0);
          if ((uVar24 & 1) == 0) {
            return 3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar9 = 0x33c52cc;
  }
  plVar18 = auVar36._8_8_;
  plVar11 = auVar36._0_8_;
  *(undefined8 *)((long)ppuVar3 + -0x210) = uVar9;
  *(long *)((long)ppuVar3 + -0x208) = auVar31._8_8_;
  *(undefined8 *)((long)ppuVar3 + -0x200) = uVar10;
  *(long **)((long)ppuVar3 + -0x1f8) = plVar12;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar10 = 0;
  *(undefined8 *)((long)ppuVar3 + -0x220) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x218) = 0;
  uVar28 = func_0x036a531c(plVar11,plVar18);
  if ((uVar28 & 1) == 0) {
    return 0;
  }
  if (plVar11 != (long *)0x0) {
    lVar21 = *plVar11;
    uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059dfa78) {
          puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar10 = puVar8[1];
    plVar12 = (long *)(*(code *)*puVar8)(plVar11,plVar18);
    if (plVar18 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
          (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar11 = (long *)0x0, plVar12 != (long *)0x0)) {
        lVar21 = *plVar12;
        lVar20 = plVar18[0x9c];
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059dec98) {
              puVar8 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar24 = uVar24 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar24 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar31 = (*(code *)*puVar8)(plVar12,plVar18,(char)lVar20 != '\0',puVar8[1]);
        *(undefined1 (*) [16])((long)ppuVar3 + -0x220) = auVar31;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar20 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x024d8f40();
        }
        pcVar15 = (char *)func_0x0249f90c((undefined1 *)((long)ppuVar3 + -0x220),
                                          *(long *)(**(long **)(lVar20 + 0xc0) + 0x80) + 0x20);
        return (ulong)(*pcVar15 == '\0');
      }
    }
  }
  auVar31 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar3 + -0x270) = 0x33c5620;
  *(long *)((long)ppuVar3 + -0x260) = lVar20;
  *(undefined **)((long)ppuVar3 + -600) = puVar29;
  *(undefined **)((long)ppuVar3 + -0x250) = puVar26;
  *(long **)((long)ppuVar3 + -0x248) = plVar13;
  *(ulong *)((long)ppuVar3 + -0x240) = uVar24;
  *(undefined8 *)((long)ppuVar3 + -0x238) = 0x5e2c000;
  *(long **)((long)ppuVar3 + -0x230) = plVar11;
  *(long **)((long)ppuVar3 + -0x228) = plVar18;
  uVar24 = auVar31._0_8_ & 0xffffffff;
  if ((bRam0000000005e2c3db & 1) == 0) {
    func_0x0249f8e4(&DAT_059fa1e8);
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059cd750);
    func_0x0249f8e4(&DAT_059d7518);
    bRam0000000005e2c3db = 1;
  }
  *(undefined1 *)((long)ppuVar3 + -0x268) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x278) = 0;
  if (plVar19 != (long *)0x0) {
    lVar20 = *plVar19;
    uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar28 = uVar28 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059df8e8,5);
LAB_033c5714:
    plVar13 = (long *)(*(code *)*puVar8)(plVar19,puVar8[1]);
    if (plVar13 != (long *)0x0) {
      lVar20 = *plVar13;
      uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar28 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059dfe60) {
            puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar28 = uVar28 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
      lVar20 = *plVar19;
      uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar28 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
            puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar28 = uVar28 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059e0220,6);
LAB_033c57e8:
      lVar20 = (*(code *)*puVar8)(plVar19,puVar8[1]);
      if (plVar13 != (long *)0x0) {
        lVar21 = *plVar13;
        uVar28 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar28 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == _DAT_059cd750) {
              puVar8 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar28 = uVar28 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar28 != 0);
        }
        puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059cd750,0);
LAB_033c5850:
        uVar28 = (*(code *)*puVar8)(plVar13,uVar24,puVar8[1]);
        if ((uVar28 & 1) == 0) {
          return 4;
        }
        if (lVar20 != 0) {
          uVar28 = func_0x0387c57c(lVar20,uVar24,0);
          if ((uVar28 & 1) == 0) {
            return 1;
          }
          lVar20 = *plVar13;
          uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar28 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == _DAT_059cd750) {
                puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar28 = uVar28 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar28 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059cd750,2);
LAB_033c58dc:
          lVar20 = (*(code *)*puVar8)(plVar13,uVar24,puVar8[1]);
          if (lVar20 != 0) {
            uVar28 = func_0x0353f648(lVar20,0);
            if ((uVar28 & 1) == 0) {
              uVar24 = func_0x0353f658(lVar20,0);
              if ((uVar24 & 1) == 0) {
                return 3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar24 = func_0x03600068(lVar20,(undefined1 *)((long)ppuVar3 + -0x278),0);
              if ((uVar24 & 1) == 0) {
                return 3;
              }
              lVar20 = func_0x022bffa8(6,_DAT_059e0220,plVar19);
              if (*(long *)((long)ppuVar3 + -0x278) != 0) {
                uVar9 = func_0x03693f98(*(long *)((long)ppuVar3 + -0x278),0);
                uVar10 = 0;
                if (lVar20 != 0) {
                  func_0x03887758(lVar20,plVar19,uVar9,0);
                  return 3;
                }
              }
            }
            else {
              lVar20 = *plVar19;
              uVar28 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar28 != 0) {
                piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == _DAT_059e0220) {
                    puVar8 = (undefined8 *)(lVar20 + (long)(*piVar23 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar28 = uVar28 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar28 != 0);
              }
              puVar8 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059e0220,6);
LAB_033c59d0:
              lVar20 = (*(code *)*puVar8)(plVar19,puVar8[1]);
              if (lVar20 != 0) {
                lVar20 = func_0x03885c68(lVar20,plVar19,uVar24,0);
                if (lVar20 == 0) {
                  return 3;
                }
                lVar21 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar20 + 0x10) != 0) {
                  plVar13 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar6 = *(undefined4 *)(plVar13[1] + 0xfc);
                  uVar9 = func_0x0249f90c(*(long *)(lVar20 + 0x10),*(undefined8 *)(*plVar13 + 0x80))
                  ;
                  func_0x054ed0d0((undefined1 *)((long)ppuVar3 + -0x264),uVar9,uVar6);
                  uVar9 = _DAT_059d7518;
                  if (lVar21 != 0) {
                    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar21 + 0x20) = *(undefined4 *)((long)ppuVar3 + -0x264);
                    lVar20 = func_0x0249f9d4(uVar9,1);
                    if (lVar20 != 0) {
                      if (*(int *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(lVar20 + 0x20) = 1;
                        uVar24 = func_0x033bacb8(plVar19,auVar31._8_8_,uVar10,lVar21,lVar20,
                                                 (undefined1 *)((long)ppuVar3 + -0x268));
                        if ((uVar24 & 1) == 0) {
                          return 2;
                        }
                        uVar4 = 0;
                        if (*(char *)((long)ppuVar3 + -0x268) != '\0') {
                          uVar4 = 6;
                        }
                        return (ulong)uVar4;
                      }
                      goto LAB_033c5ae4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x0249fb90();
LAB_033c5ae4:
  lVar20 = func_0x0249fb98();
  if (lVar20 != 0) {
    return (ulong)*(byte *)(lVar20 + 0x4e0);
  }
  *(undefined8 *)((long)ppuVar3 + -0x290) = 0x33c5ae8;
  auVar32 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar3 + -0x2b0) = 0x33c5afc;
  *(long *)((long)ppuVar3 + -0x2a8) = auVar31._8_8_;
  *(undefined8 *)((long)ppuVar3 + -0x2a0) = uVar10;
  *(long **)((long)ppuVar3 + -0x298) = plVar19;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)((long)ppuVar3 + -0x2c0) = 0;
  lVar21 = func_0x033c5be8(auVar32._0_8_,auVar32._8_8_);
  lVar20 = _DAT_05a27d90;
  if (lVar21 == 0) {
    uVar10 = 0;
    *(undefined8 *)((long)ppuVar3 + -0x2c0) = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar21 + 0x10);
  }
  *(undefined8 *)((long)ppuVar3 + -0x2c0) = uVar10;
  lVar16 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar1 = *(ushort *)(lVar16 + 0x135);
  lVar21 = lVar16;
  if ((uVar1 & 1) == 0) {
    lVar16 = func_0x024d8f40(lVar16);
    uVar1 = *(ushort *)(*(long *)(lVar20 + 0x20) + 0x135);
    lVar21 = *(long *)(lVar20 + 0x20);
  }
  uVar6 = *(undefined4 *)(**(long **)(lVar16 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar21 = func_0x024d8f40(lVar21);
  }
  uVar10 = func_0x0249f90c((undefined1 *)((long)ppuVar3 + -0x2c0),
                           *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((undefined1 *)((long)ppuVar3 + -0x2b4),uVar10,uVar6);
  return (ulong)*(uint *)((long)ppuVar3 + -0x2b4);
}


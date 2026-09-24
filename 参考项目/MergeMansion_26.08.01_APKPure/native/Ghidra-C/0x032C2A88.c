/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Boolean TryToMoveItemFromBoardToInventory(GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Player.Board.Coordinate coordinate, GameLogic.Player.IBoardInventory inventory, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033c2a88
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033c2b08: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x033c2b0c) */
/* WARNING: Removing unreachable block (ram,0x033c2b14) */
/* WARNING: Removing unreachable block (ram,0x033c2b18) */
/* WARNING: Removing unreachable block (ram,0x033c2be4) */
/* WARNING: Removing unreachable block (ram,0x033c2b2c) */
/* WARNING: Removing unreachable block (ram,0x033c2b48) */
/* WARNING: Removing unreachable block (ram,0x033c2b50) */
/* WARNING: Removing unreachable block (ram,0x033c2b78) */
/* WARNING: Removing unreachable block (ram,0x033c2b5c) */
/* WARNING: Removing unreachable block (ram,0x033c2b68) */
/* WARNING: Removing unreachable block (ram,0x033c2b88) */
/* WARNING: Removing unreachable block (ram,0x033c2bac) */
/* WARNING: Removing unreachable block (ram,0x033c2bc8) */
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033c2a88(long *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                  long *param_6,ulong param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined **ppuVar5;
  uint uVar6;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  int iVar7;
  long lVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long **pplVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  int *piVar29;
  long *plVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  ulong uVar35;
  undefined *unaff_x27;
  long *plVar36;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined *puVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  undefined *puStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long *plStack_268;
  ulong uStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined1 auStack_230 [80];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_188;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e4 [4];
  undefined *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  
  if ((bRam0000000005e2c3d0 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7c0);
    func_0x0249f8e4(&DAT_059defe8);
    bRam0000000005e2c3d0 = 1;
  }
  plVar10 = (long *)func_0x026bf824(param_4,_DAT_05a3c7c0);
  uStack_a0 = 0x33c2b0c;
  puVar33 = (undefined *)0x5e2c000;
  plVar20 = param_3;
  plVar21 = plVar10;
  plVar36 = param_5;
  if ((bRam0000000005e2c3cf & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3cf = 1;
  }
  plStack_98 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar20 = (long *)0x0;
    plVar11 = (long *)func_0x0376e450(param_2,param_3);
    if (plVar11 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto LAB_033c2f48;
    }
    if (plVar10 != (long *)0x0) {
      lVar24 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca768) {
            puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033c2ce4;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar20 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033c2ce4:
      plStack_98 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
      pplStack_a8 = &plStack_98;
      plStack_b0 = (long *)0x0;
      if (plStack_98 != (long *)0x0) {
        puVar33 = &DAT_059df6e0;
        do {
          plVar10 = plStack_98;
          lVar24 = *plStack_98;
          uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c2d68;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          plVar20 = (long *)0x0;
          puVar12 = (undefined8 *)func_0x024d927c(plStack_98);
LAB_033c2d68:
          uVar27 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          plVar23 = plStack_98;
          plVar10 = (long *)(uVar27 & 0xffffffff);
          if ((uVar27 & 1) == 0) goto LAB_033c2ed0;
          if (plStack_98 == (long *)0x0) {
            func_0x0249fb90();
            param_2 = (long *)0x0;
LAB_033c2f74:
            func_0x0249fb90();
            param_3 = plVar11;
            goto LAB_033c2f78;
          }
          lVar24 = *plStack_98;
          uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cbac8) {
                puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c2dd0;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plStack_98,_DAT_059cbac8,0);
LAB_033c2dd0:
          param_2 = (long *)(*(code *)*puVar12)(plVar23,puVar12[1]);
          plVar21 = (long *)0x0;
          plVar20 = param_5;
          uVar27 = func_0x036d05a4(plVar11,param_1);
          if ((uVar27 & 1) != 0) {
            if (param_2 == (long *)0x0) goto LAB_033c2f74;
            lVar24 = *param_2;
            uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                  puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x27) * 0x10 + 0x138);
                  goto LAB_033c2e4c;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            puVar12 = (undefined8 *)func_0x024d927c(param_2,_DAT_059defe8,0x27);
LAB_033c2e4c:
            plVar21 = (long *)puVar12[1];
            plVar20 = param_1;
            uVar27 = (*(code *)*puVar12)(param_2,plVar11);
            if ((uVar27 & 1) != 0) {
              lVar24 = *param_2;
              uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar27 != 0) {
                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                    puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 3) * 0x10 + 0x138);
                    goto LAB_033c2eb4;
                  }
                  uVar27 = uVar27 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar27 != 0);
              }
              plVar20 = (long *)0x3;
              puVar12 = (undefined8 *)func_0x024d927c(param_2);
LAB_033c2eb4:
              uVar27 = (*(code *)*puVar12)(param_2,puVar12[1]);
              if ((uVar27 & 1) == 0) goto LAB_033c2ed8;
            }
          }
        } while (plStack_98 != (long *)0x0);
      }
      func_0x0249fb90();
LAB_033c2ed0:
      plVar10 = (long *)0x0;
LAB_033c2ed8:
      param_5 = (long *)0x0;
      pplVar25 = &plStack_98;
      goto LAB_033c2edc;
    }
  }
LAB_033c2f78:
  func_0x0249fb90();
  plVar11 = param_3;
  do {
    auVar40._8_8_ = plVar10;
    auVar40._0_8_ = plVar11;
    auVar44 = func_0x0249fb88(param_5);
    plStack_b8 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) {
      func_0x022bd79c(&plStack_b0);
      func_0x0258f7ac(plStack_b8);
      auVar38 = func_0x022bd790();
      lVar24 = auVar38._8_8_;
      uVar15 = auVar38._0_8_;
      uStack_f0 = 0x33c2fe4;
      auStack_e4[0] = 0;
      plVar16 = plVar20;
      plVar22 = plVar21;
      plVar23 = plVar36;
      plVar30 = plStack_b8;
      puStack_e0 = puVar33;
      plStack_d8 = param_2;
      plStack_d0 = plVar10;
      plStack_c8 = plVar11;
      plStack_c0 = param_1;
      if (lVar24 != 0) {
        lVar13 = func_0x0376e450(lVar24,plVar20,0);
        if (lVar13 == 0) {
          return 0;
        }
        plVar22 = (long *)0x0;
        plVar16 = plVar36;
        uVar27 = func_0x036d05a4(lVar13,uVar15);
        if ((uVar27 & 1) == 0) {
          return 0;
        }
        plVar30 = plVar36;
        param_1 = plVar20;
        auVar40 = auVar38;
        if (plVar21 != (long *)0x0) {
          uVar27 = func_0x0362cd70(plVar21,0);
          if ((uVar27 & 1) != 0) {
            return 0;
          }
          func_0x0362d1c8(plVar21,uVar15,lVar13,plVar36,auStack_e4,0);
          func_0x037789bc(lVar24,uVar15,plVar20,plVar36,0,0);
          return 1;
        }
      }
      auVar38 = func_0x0249fb90();
      plVar20 = auVar38._0_8_;
      plVar21 = plVar16;
      plStack_100 = param_1;
      plStack_f8 = plVar30;
      if ((bRam0000000005e2c3d1 & 1) == 0) {
        uStack_110 = auVar40._8_8_;
        uStack_108 = auVar40._0_8_;
        func_0x0249f8e4(&DAT_059db250);
        func_0x0249f8e4(&DAT_059defe8);
        auVar40._8_8_ = uStack_110;
        auVar40._0_8_ = uStack_108;
        bRam0000000005e2c3d1 = 1;
      }
      uStack_110 = auVar40._8_8_;
      uStack_108 = auVar40._0_8_;
      uStack_118 = 0;
      if (plVar20 != (long *)0x0) {
        lVar24 = *plVar20;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 == 0) goto LAB_033c3130;
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        goto LAB_033c3118;
      }
      auVar38 = func_0x0249fb90();
      plVar11 = auVar38._8_8_;
      lVar24 = auVar38._0_8_;
      uVar27 = param_7 & 0xffffffff;
      uVar35 = (ulong)plVar21 & 0xffffffff;
      auVar39._8_8_ = 0x5e2c000;
      auVar39._0_8_ = uVar35;
      plVar20 = plVar22;
      plVar36 = plVar23;
      plVar10 = param_6;
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
      plStack_188 = (long *)0x0;
      if (plVar11 == (long *)0x0) goto LAB_033c36d4;
      lVar13 = *plVar11;
      unaff_x27 = &DAT_059defe8;
      uVar28 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar28 == 0) goto LAB_033c32b8;
      piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      goto LAB_033c32a0;
    }
    puVar12 = (undefined8 *)func_0x054ed080(plStack_b8);
    param_5 = (long *)*puVar12;
    plStack_b0 = param_5;
    func_0x054ed090();
    plVar10 = (long *)0x0;
    pplVar25 = pplStack_a8;
LAB_033c2edc:
    param_1 = *pplVar25;
    if (param_1 != (long *)0x0) {
      lVar24 = *param_1;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033c2f38;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar20 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x024d927c(param_1);
LAB_033c2f38:
      (*(code *)*puVar12)(param_1,puVar12[1]);
    }
  } while (param_5 != (long *)0x0);
LAB_033c2f48:
  return (ulong)((uint)plVar10 & 1);
code_r0x033c4070:
  uVar27 = (**(code **)(*plVar20 + 0x1b8))(plVar20,auVar40._8_8_,*(undefined8 *)(*plVar20 + 0x1c0));
  if ((uVar27 & 1) == 0) {
LAB_033c4084:
    uVar6 = uVar6 ^ 1;
    func_0x02a5d2cc((undefined1 *)((long)ppuVar5 + -0x50),_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c((undefined1 *)((long)ppuVar5 + -0xb0));
  func_0x0258f7ac(uVar14);
  auVar40 = func_0x022bd790();
  plVar10 = auVar40._8_8_;
  plVar36 = auVar40._0_8_;
  *(undefined8 *)((long)ppuVar5 + -0xe0) = 0x33c45c4;
  *(undefined **)((long)ppuVar5 + -0xd0) = puVar31;
  *(long **)((long)ppuVar5 + -200) = plVar20;
  *(long **)((long)ppuVar5 + -0xc0) = plVar21;
  *(undefined8 *)((long)ppuVar5 + -0xb8) = uVar14;
  uVar14 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar10 != (long *)0x0) {
    lVar24 = *plVar10;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    uVar15 = 6;
    puVar12 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033c466c:
    lVar24 = (*(code *)*puVar12)(plVar10,puVar12[1]);
    if (plVar36 != (long *)0x0) {
      lVar26 = *plVar36;
      puVar31 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      uVar15 = 1;
      puVar12 = (undefined8 *)func_0x024d927c(plVar36);
LAB_033c46d8:
      uVar8 = (*(code *)*puVar12)(plVar36,puVar12[1]);
      uVar14 = 0;
      if (lVar24 != 0) {
        uVar27 = func_0x0387c57c(lVar24,uVar8,0);
        if ((uVar27 & 1) != 0) {
          return 3;
        }
        lVar26 = *plVar36;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar27 = (*(code *)*puVar12)(plVar36,puVar12[1]);
        if ((uVar27 & 1) == 0) {
          lVar26 = *plVar36;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar27 = (*(code *)*puVar12)(plVar36,puVar12[1]);
          if ((uVar27 & 1) == 0) {
            lVar26 = *plVar36;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                  puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfa78,1);
LAB_033c4814:
            uVar8 = (*(code *)*puVar12)(plVar36,puVar12[1]);
            uVar27 = func_0x0387cc50(lVar24,uVar8,0);
            if ((uVar27 & 1) != 0) {
              return 2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar16 = (long *)0x0;
        uVar27 = func_0x03603060(plVar36,plVar10,1);
        if ((uVar27 & 1) == 0) {
          return 5;
        }
        lVar26 = *plVar36;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar27 = (*(code *)*puVar12)(plVar36,puVar12[1]);
        if ((uVar27 & 1) == 0) {
          uVar6 = func_0x033c4128(plVar36,plVar10);
          return (ulong)((uVar6 ^ 0xffffffff) & 1);
        }
        uVar15 = 0x33c48e0;
        ppuVar5 = (undefined **)((long)ppuVar5 + -0xe0);
        auVar38 = auVar40;
        goto SUB_033c3e04;
      }
    }
  }
  auVar38 = func_0x0249fb90();
  plVar21 = auVar38._8_8_;
  lVar24 = auVar38._0_8_;
  *(undefined8 *)((long)ppuVar5 + -0x100) = 0x33c490c;
  *(undefined8 *)((long)ppuVar5 + -0xf8) = uVar14;
  *(undefined1 (*) [16])((long)ppuVar5 + -0xf0) = auVar40;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar21 == (long *)0x0) goto LAB_033c4a08;
  lVar26 = *plVar21;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 == 0) goto LAB_033c4978;
  piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
  goto LAB_033c4960;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_033c3118:
    if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
      puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059defe8,0xd);
  auVar40._8_8_ = uStack_110;
  auVar40._0_8_ = uStack_108;
LAB_033c3150:
  uStack_110 = auVar40._8_8_;
  uStack_108 = auVar40._0_8_;
  lVar24 = (*(code *)*puVar12)(plVar20,auVar38._8_8_ & 0xffffffff,puVar12[1]);
  if (lVar24 == 0) {
    uVar6 = 0;
  }
  else {
    uStack_118 = func_0x0376eb00(plVar16,0);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar6 = func_0x0376edd4(&uStack_118,0);
    uVar6 = uVar6 ^ 1;
  }
  return (ulong)(uVar6 & 1);
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
      puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar9 = (*(code *)*puVar12)(plVar21,puVar12[1]);
  return (ulong)(iVar7 == iVar9);
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar29 = piVar29 + 4;
    if (uVar28 == 0) break;
LAB_033c32a0:
    if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
      puVar12 = (undefined8 *)(lVar13 + (long)(*piVar29 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar12 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059defe8,0x16);
LAB_033c32d8:
  plVar21 = (long *)puVar12[1];
  auVar39 = (*(code *)*puVar12)(plVar11,uVar35);
  uVar15 = auVar39._8_8_;
  lVar13 = auVar39._0_8_;
  if (lVar13 == 0) {
    return 0;
  }
  unaff_x28 = &DAT_059db250;
  plStack_188 = (long *)func_0x0376eb00(lVar24,0);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar35 = func_0x0376edd4(&plStack_188,0);
  if ((uVar35 & 1) != 0) {
    return 0;
  }
  if (param_6 != (long *)0x0) {
    lVar26 = *param_6;
    unaff_x28 = &DAT_059df8e8;
    uVar35 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c3394;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c3394:
    uVar14 = (*(code *)*puVar12)(param_6,puVar12[1]);
    plVar21 = (long *)0x0;
    uVar35 = func_0x036ec4b4(lVar13,uVar14);
    if ((uVar35 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar15 = func_0x03530158(uVar15,0);
      uVar15 = func_0x03530310(plVar22,uVar15,0);
      lVar26 = *param_6;
      uVar35 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar35 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c343c;
          }
          uVar35 = uVar35 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c343c:
      plVar21 = (long *)(*(code *)*puVar12)(param_6,puVar12[1]);
      plVar20 = (long *)0x0;
      func_0x036e24f4(lVar13,uVar15);
    }
    auVar3._8_8_ = uVar15;
    auVar3._0_8_ = lVar13;
    auVar2._8_8_ = uVar15;
    auVar2._0_8_ = lVar13;
    auVar39._8_8_ = uVar15;
    auVar39._0_8_ = lVar13;
    if (lVar24 != 0) {
      func_0x03785f38(lVar24,plStack_188,lVar13,plVar22,plVar23,param_6,0);
      if ((param_7 & 1) == 0) {
        return 1;
      }
      uVar27 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar27,_DAT_05a192a0);
      plVar23 = plStack_188;
      lVar26 = *param_6;
      uVar35 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar35 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c34fc;
          }
          uVar35 = uVar35 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar15 = (*(code *)*puVar12)(param_6,puVar12[1]);
      plVar10 = (long *)func_0x036d3908(lVar13,uVar15,0);
      uStack_240 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      plVar21 = plVar23;
      plVar20 = plVar23;
      plVar36 = plVar22;
      func_0x034ba874(&uStack_1e0,9);
      auVar39 = auVar2;
      if (uVar27 != 0) {
        func_0x054ed0d0(auStack_230,&uStack_1e0,0x50);
        plVar21 = _DAT_05a192a8;
        func_0x025a1da8(uVar27,auStack_230);
        lVar13 = *param_6;
        uVar35 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar35 != 0) {
          piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar29 + 0x17) * 0x10 + 0x138);
              goto LAB_033c35d4;
            }
            uVar35 = uVar35 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar35 != 0);
        }
        plVar21 = (long *)0x17;
        puVar12 = (undefined8 *)func_0x024d927c(param_6);
LAB_033c35d4:
        plVar16 = (long *)(*(code *)*puVar12)(param_6,puVar12[1]);
        lVar13 = *plVar11;
        uVar35 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar35 != 0) {
          piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar29 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar35 = uVar35 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar35 != 0);
        }
        plVar21 = (long *)0x2;
        puVar12 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033c3634:
        uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        param_6 = (long *)0x0;
        auVar39 = auVar3;
        if (plVar16 != (long *)0x0) {
          lVar24 = *plVar16;
          uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar35 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059e0280) {
                puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar35 = uVar35 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar35 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar12)(plVar16,uVar15,uVar27,puVar12[1]);
          return 1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar13 = auVar39._8_8_;
  auVar40 = func_0x0249fb90();
  puVar31 = auVar40._8_8_;
  puVar32 = auVar40._0_8_;
  uStack_290 = 0x33c36d8;
  puVar33 = (undefined *)0x5e2c000;
  puVar34 = (undefined *)((ulong)plVar20 & 0xffffffff);
  plVar16 = plVar20;
  plStack_268 = plVar23;
  uStack_260 = uVar27;
  plStack_258 = plVar22;
  plStack_250 = param_6;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    lStack_280 = lVar13;
    uStack_278 = auVar39._0_8_;
    lStack_270 = lVar24;
    plStack_248 = plVar11;
    func_0x0249f8e4(&DAT_059df8e8);
    auVar39._8_8_ = lStack_280;
    auVar39._0_8_ = uStack_278;
    auVar38._8_8_ = plStack_248;
    auVar38._0_8_ = lStack_270;
    bRam0000000005e2c3d3 = 1;
  }
  lStack_280 = auVar39._8_8_;
  uStack_278 = auVar39._0_8_;
  plStack_248 = auVar38._8_8_;
  lStack_270 = auVar38._0_8_;
  if (puVar32 != (undefined *)0x0) {
    uVar15 = func_0x0376e450(puVar32,puVar31,0);
    auVar38._8_8_ = plStack_248;
    auVar38._0_8_ = lStack_270;
    auVar39._8_8_ = lStack_280;
    auVar39._0_8_ = uStack_278;
    if (plVar10 != (long *)0x0) {
      lVar24 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c3798;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059df8e8,5);
LAB_033c3798:
      uVar14 = (*(code *)*puVar12)(plVar10,puVar12[1]);
      uVar6 = func_0x036edd98(uVar15,uVar14,0);
      if ((uVar6 & 1) != 0) {
        if (((ulong)plVar20 & 1) == 0) {
          func_0x03780be8(puVar32,puVar31,plVar21,plVar36,0,plVar10,0);
        }
        else {
          func_0x036eaf0c(uVar15,0);
          func_0x03780be8(puVar32,puVar31,plVar21,plVar36,0,plVar10,0);
          func_0x036eadfc(uVar15,0);
        }
      }
      return (ulong)(uVar6 & 1);
    }
  }
  plStack_248 = auVar38._8_8_;
  lStack_270 = auVar38._0_8_;
  lStack_280 = auVar39._8_8_;
  uStack_278 = auVar39._0_8_;
  lVar24 = func_0x0249fb90();
  puVar12 = &uStack_2b0;
  uStack_2b0 = 0x33c383c;
  uVar15 = 0x5e2c000;
  plStack_2a8 = plVar21;
  plStack_2a0 = plVar36;
  plStack_298 = plVar10;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar24 != 0) {
    plVar21 = (long *)func_0x0367613c(lVar24,0);
    iVar7 = func_0x03676288(lVar24,0);
    if ((plVar21 != (long *)0x0) && (*(long *)(lVar24 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar24 + 0x338) + 0x10) = *(int *)((long)plVar21 + 0x24) * iVar7;
      func_0x03675f48(lVar24,iVar7,0);
      if ((iVar7 != 0) || (*(int *)(lVar24 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar27 = func_0x03633f50(lVar24,0);
        if ((uVar27 & 1) != 0) {
          return uVar27;
        }
      }
      *(undefined4 *)(lVar24 + 0x358) = 0;
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      uVar27 = func_0x028a379c(lVar24,_DAT_05a2aaf0);
      *(ulong *)(lVar24 + 0x340) = uVar27;
      return uVar27;
    }
  }
  uVar14 = 0x33c3914;
  auVar41 = func_0x0249fb90();
  if (auVar41._8_8_ != 0) {
    do {
      *(undefined8 *)((long)puVar12 + -0x20) = uVar14;
      *(long **)((long)puVar12 + -0x18) = plVar21;
      *(undefined8 *)((long)puVar12 + -0x10) = uVar15;
      *(long *)((long)puVar12 + -8) = lVar24;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar24 = *(long *)(auVar41._8_8_ + 0x38);
      if (lVar24 != 0) {
        *(int *)((long)puVar12 + -0x24) = auVar41._0_4_;
        uVar6 = func_0x02893128(lVar24,(undefined1 *)((long)puVar12 + -0x24),_DAT_05a2a588);
        return (ulong)(uVar6 & 1);
      }
      auVar40 = func_0x0249fb90();
      plVar21 = auVar40._8_8_;
      *(undefined8 *)((long)puVar12 + -0x50) = 0x387e7ec;
      *(undefined8 *)((long)puVar12 + -0x48) = 0x5e2e000;
      *(long *)((long)puVar12 + -0x40) = auVar41._8_8_;
      *(ulong *)((long)puVar12 + -0x38) = auVar41._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar21 == (long *)0x0) {
        auVar38 = func_0x0249fb90();
        *(undefined8 *)((long)puVar12 + -0x70) = 0x387e89c;
        *(undefined8 *)((long)puVar12 + -0x68) = 0x5e2e000;
        *(undefined8 *)((long)puVar12 + -0x60) = 0;
        *(long *)((long)puVar12 + -0x58) = auVar40._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar24 = *(long *)(auVar38._0_8_ + 0xe8);
        if (lVar24 != 0) {
          *(int *)((long)puVar12 + -0x74) = auVar38._8_4_;
          uVar6 = func_0x02893128(lVar24,(undefined1 *)((long)puVar12 + -0x74),_DAT_05a2a588);
          return (ulong)(uVar6 & 1);
        }
        auVar40 = func_0x0249fb90();
        *(undefined8 *)((long)puVar12 + -0xa0) = 0x387e908;
        *(undefined8 *)((long)puVar12 + -0x98) = 0x5e2e000;
        *(long *)((long)puVar12 + -0x90) = auVar38._0_8_;
        *(ulong *)((long)puVar12 + -0x88) = auVar38._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar24 = *(long *)(auVar40._0_8_ + 0xe8);
        if (lVar24 != 0) {
          *(int *)((long)puVar12 + -0xa4) = auVar40._8_4_;
          uVar27 = func_0x028926c4(lVar24,(undefined1 *)((long)puVar12 + -0xa4),_DAT_05a2a578);
          return uVar27;
        }
        lVar24 = func_0x0249fb90();
        *(undefined8 *)((long)puVar12 + -0xd0) = 0x387e970;
        *(long *)((long)puVar12 + -0xc0) = auVar40._0_8_;
        *(ulong *)((long)puVar12 + -0xb8) = auVar40._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar24 + 0xf0) == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = (ulong)*(uint *)(*(long *)(lVar24 + 0xf0) + 0x20);
        }
        return uVar27;
      }
      lVar24 = *plVar21;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
            puVar19 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar19 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar15 = (*(code *)*puVar19)(plVar21,puVar19[1]);
      auVar41._8_8_ = auVar40._0_8_;
      auVar41._0_8_ = uVar15;
      uVar15 = *(undefined8 *)((long)puVar12 + -0x40);
      lVar24 = *(long *)((long)puVar12 + -0x38);
      uVar14 = *(undefined8 *)((long)puVar12 + -0x50);
      plVar21 = *(long **)((long)puVar12 + -0x48);
      puVar12 = (undefined8 *)((long)puVar12 + -0x30);
    } while( true );
  }
  uStack_2c0 = 0x33c3914;
  auVar40 = func_0x0249fb90();
  plVar20 = auVar40._0_8_;
  uStack_2f0 = 0x33c3934;
  uStack_2d0 = 0x5e2c000;
  puStack_2e0 = puVar31;
  plStack_2d8 = plVar21;
  lStack_2c8 = lVar24;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar20 == (long *)0x0) {
    puVar37 = (undefined *)0x33c3cc8;
    auVar38 = func_0x0249fb90();
  }
  else {
    lVar24 = *plVar20;
    puVar31 = &DAT_059dfa78;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar24 = (*(code *)*puVar12)(plVar20,puVar12[1]);
    if (lVar24 == 0) {
      return 0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar27 = func_0x035fb854(plVar20,auVar40._8_8_,0);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
    puVar37 = (undefined *)0x33c3a24;
    auVar38 = auVar40;
  }
  plVar20 = auVar38._8_8_;
  plVar21 = auVar38._0_8_;
  uStack_308 = 0x5e2c000;
  lVar24 = 0x5e2c000;
  puStack_310 = puVar37;
  auStack_300 = auVar40;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar21 == (long *)0x0) {
    uVar15 = 0x33c3e04;
    auVar40 = func_0x0249fb90();
    auVar4._8_8_ = 0;
    auVar4._0_8_ = plVar20;
    ppuVar5 = &puStack_310;
    auVar38 = auVar4 << 0x40;
SUB_033c3e04:
    plVar21 = auVar40._0_8_;
    *(undefined8 *)((long)ppuVar5 + -0x30) = uVar15;
    *(undefined **)((long)ppuVar5 + -0x28) = puVar32;
    *(undefined **)((long)ppuVar5 + -0x20) = puVar31;
    *(long *)((long)ppuVar5 + -0x18) = lVar24;
    *(undefined1 (*) [16])((long)ppuVar5 + -0x10) = auVar38;
    puVar37 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d7 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a047e8);
      func_0x0249f8e4(&DAT_05a047f0);
      func_0x0249f8e4(&DAT_05a047f8);
      func_0x0249f8e4(&DAT_059dec98);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_05a1a750);
      bRam0000000005e2c3d7 = 1;
    }
    *(undefined8 *)((long)ppuVar5 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x48) = 0;
    *(undefined8 *)((long)ppuVar5 + -0x40) = 0;
    if (plVar21 != (long *)0x0) {
      lVar24 = *plVar21;
      puVar37 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar27 = (*(code *)*puVar12)(plVar21,puVar12[1]);
      if ((uVar27 & 1) == 0) goto LAB_033c40ec;
      lVar24 = *plVar21;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar20 = (long *)(*(code *)*puVar12)(plVar21,auVar40._8_8_,puVar12[1]);
      if (plVar20 != (long *)0x0) {
        lVar24 = *plVar20;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dec98) {
              puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dec98,4);
LAB_033c3fac:
        lVar24 = (*(code *)*puVar12)(plVar20,puVar12[1]);
        plVar21 = plVar20;
        if (lVar24 != 0) {
          func_0x028310e8(lVar24,(undefined1 *)((long)ppuVar5 + -0x50),_DAT_05a1a750);
          puVar31 = &DAT_05a047f0;
          puVar32 = &DAT_05a047f8;
          *(undefined8 *)((long)ppuVar5 + -0x60) = 0;
          *(undefined1 **)((long)ppuVar5 + -0x58) = (undefined1 *)((long)ppuVar5 + -0x50);
LAB_033c3fe8:
          uVar6 = func_0x02a5d2d0((undefined1 *)((long)ppuVar5 + -0x50),_DAT_05a047f0);
          lVar24 = _DAT_05a047f8;
          plVar21 = (long *)(ulong)uVar6;
          if ((uVar6 & 1) == 0) goto LAB_033c4084;
          lVar17 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar1 = *(ushort *)(lVar17 + 0x135);
          lVar26 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar26 = func_0x024d8f40();
            lVar17 = *(long *)(lVar24 + 0x20);
            uVar1 = *(ushort *)(lVar17 + 0x135);
          }
          puVar37 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar1 & 1) == 0) {
            lVar17 = func_0x024d8f40();
          }
          uVar15 = func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x50),
                                   *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x38),uVar15,puVar37);
          plVar20 = *(long **)((long)ppuVar5 + -0x38);
          if (plVar20 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar44 = func_0x0249fb90();
    uVar15 = auVar44._0_8_;
    if (auVar44._8_4_ == 1) {
      plVar20 = (long *)func_0x054ed080(uVar15);
      lVar24 = *plVar20;
      *(long *)((long)ppuVar5 + -0x60) = lVar24;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)((long)ppuVar5 + -0x58),_DAT_05a047e8);
      if (lVar24 == 0) {
LAB_033c40ec:
        uVar6 = 1;
LAB_033c40f0:
        return (ulong)(uVar6 & 1);
      }
      uVar15 = func_0x0249fb88(lVar24);
    }
    func_0x022c29f0((undefined1 *)((long)ppuVar5 + -0x60));
    func_0x0258f7ac(uVar15);
    auVar40 = func_0x022bd790();
    plVar36 = auVar40._8_8_;
    plVar20 = auVar40._0_8_;
    *(undefined8 *)((long)ppuVar5 + -0xa0) = 0x33c4128;
    *(undefined **)((long)ppuVar5 + -0x90) = puVar34;
    *(undefined **)((long)ppuVar5 + -0x88) = puVar32;
    *(undefined **)((long)ppuVar5 + -0x80) = puVar31;
    *(undefined **)((long)ppuVar5 + -0x78) = puVar37;
    *(long **)((long)ppuVar5 + -0x70) = plVar21;
    *(undefined8 *)((long)ppuVar5 + -0x68) = uVar15;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    puVar31 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar5 + -0x98) = 0;
    if ((plVar20 != (long *)0x0) && (plVar36 != (long *)0x0)) {
      lVar24 = *plVar36;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059e0220,6);
LAB_033c4208:
      lVar24 = (*(code *)*puVar12)(plVar36,puVar12[1]);
      lVar26 = *plVar20;
      puVar31 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar15 = puVar12[1];
      plVar21 = (long *)(*(code *)*puVar12)(plVar20,plVar36);
      if (plVar21 != (long *)0x0) {
        lVar26 = *plVar21;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059ca7c8) {
              puVar12 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        uVar15 = 0;
        puVar12 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033c42e4:
        plVar36 = (long *)(*(code *)*puVar12)(plVar21,puVar12[1]);
        *(long **)((long)ppuVar5 + -0x98) = plVar36;
        *(undefined8 *)((long)ppuVar5 + -0xb0) = 0;
        *(undefined1 **)((long)ppuVar5 + -0xa8) = (undefined1 *)((long)ppuVar5 + -0x98);
        if (plVar36 != (long *)0x0) {
          puVar32 = &DAT_059df6e0;
          puVar34 = &DAT_059cbb20;
          do {
            lVar26 = *plVar36;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                  puVar12 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar15 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar36);
LAB_033c4360:
            uVar27 = (*(code *)*puVar12)(plVar36,puVar12[1]);
            plVar21 = (long *)(uVar27 & 0xffffffff);
            if ((uVar27 & 1) == 0) goto LAB_033c44b8;
            plVar20 = *(long **)((long)ppuVar5 + -0x98);
            if (plVar20 == (long *)0x0) {
              func_0x0249fb90();
              plVar20 = (long *)0x0;
LAB_033c4550:
              auVar42 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar42._0_8_,auVar42._8_8_);
              goto LAB_033c4558;
            }
            lVar26 = *plVar20;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059cbb20) {
                  puVar12 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar15 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c43c8:
            plVar20 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
            if (plVar20 == (long *)0x0) goto LAB_033c4550;
            lVar26 = *plVar20;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                  puVar12 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar15 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c4428:
            iVar7 = (*(code *)*puVar12)(plVar20,puVar12[1]);
            if (iVar7 != 0) {
              lVar26 = *plVar20;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar27 != 0) {
                piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                    puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar27 = uVar27 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar27 != 0);
              }
              uVar15 = 1;
              puVar12 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c4488:
              uVar27 = (*(code *)*puVar12)(plVar20,puVar12[1]);
              auVar42._8_8_ = uVar27 & 0xffffffff;
              auVar42._0_8_ = uVar27;
              if (lVar24 == 0) goto LAB_033c4554;
              uVar15 = 0;
              uVar27 = func_0x0387cc50(lVar24);
              if ((uVar27 & 1) == 0) goto LAB_033c44b8;
            }
            plVar36 = *(long **)((long)ppuVar5 + -0x98);
            plVar21 = (long *)0x0;
          } while (plVar36 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar24 = 0;
        puVar31 = (undefined *)(ulong)((uint)plVar21 ^ 1);
        puVar12 = (undefined8 *)((long)ppuVar5 + -0x98);
        do {
          plVar21 = (long *)*puVar12;
          if (plVar21 != (long *)0x0) {
            lVar26 = *plVar21;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059df598) {
                  puVar12 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar15 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033c4520:
            (*(code *)*puVar12)(plVar21,puVar12[1]);
          }
          if (lVar24 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar44 = func_0x0249fb88(lVar24);
          uVar14 = auVar44._0_8_;
          if (auVar44._8_4_ != 1) goto LAB_033c45b0;
          plVar21 = (long *)func_0x054ed080(uVar14);
          lVar24 = *plVar21;
          *(long *)((long)ppuVar5 + -0xb0) = lVar24;
          func_0x054ed090();
          puVar12 = *(undefined8 **)((long)ppuVar5 + -0xa8);
          puVar31 = (undefined *)0x1;
        } while( true );
      }
      puVar31 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong)((uint)puVar31 & 1);
  }
  lVar24 = *plVar21;
  uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar27 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
        puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar27 = uVar27 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar27 != 0);
  }
  puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar27 = (*(code *)*puVar12)(plVar21,puVar12[1]);
  if ((uVar27 & 1) != 0) {
    lVar24 = *plVar21;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar15 = (*(code *)*puVar12)(plVar21,puVar12[1]);
    uVar15 = func_0x033c88e0(uVar15,plVar20,0,0);
    uVar27 = func_0x033c9114(uVar15,plVar20);
    if ((uVar27 & 1) == 0) {
      puStack_310 = puVar31;
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar21 != (long *)0x0) {
        lVar24 = *plVar21;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar15 = (*(code *)*puVar12)(plVar21,puVar12[1]);
        lVar24 = func_0x033c97d4(uVar15,plVar20);
        if (lVar24 != 0) {
          uVar6 = *(uint *)(lVar24 + 0x18);
          if (0 < (int)uVar6) {
            if (plVar20 == (long *)0x0) goto LAB_033ca068;
            uVar27 = 0;
            do {
              lVar13 = *plVar20;
              uVar35 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar35 != 0) {
                piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                    puVar12 = (undefined8 *)(lVar13 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar35 = uVar35 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar35 != 0);
              }
              puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0220,6);
LAB_033c9f74:
              lVar13 = (*(code *)*puVar12)(plVar20,puVar12[1]);
              if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_033ca06c;
              plVar36 = (long *)(lVar24 + uVar27 * 8 + 0x20);
              lVar26 = *plVar36;
              if (lVar26 == 0) goto LAB_033ca068;
              uVar8 = func_0x0353efa0(lVar26,0);
              if (lVar13 == 0) goto LAB_033ca068;
              uVar35 = func_0x0387cc50(lVar13,uVar8,0);
              if ((uVar35 & 1) == 0) {
                if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_033ca06c;
                lVar24 = *plVar36;
                if (lVar24 == 0) goto LAB_033ca068;
                iVar7 = func_0x0353efa0(lVar24,0);
                lVar24 = *plVar21;
                uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar27 == 0) goto LAB_033ca020;
                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar6);
          }
          return 0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar40 = func_0x0249fb98();
      uVar15 = func_0x033c88e0(auVar40._0_8_,auVar40._8_8_,0,0);
      uVar27 = func_0x033c7ab8(uVar15,auVar40._8_8_);
      return uVar27;
    }
  }
  return 1;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_033c4960:
    if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
      puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar15 = 6;
  puVar12 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033c4998:
  lVar26 = (*(code *)*puVar12)(plVar21,puVar12[1]);
  if ((lVar24 != 0) && (plVar21 = (long *)0x0, lVar26 != 0)) {
    uVar27 = func_0x0387c57c(lVar26,*(undefined4 *)(lVar24 + 0x10),0);
    if ((uVar27 & 1) == 0) {
      uVar27 = 2;
    }
    else {
      uVar27 = func_0x0353f618(lVar24,0);
      if ((uVar27 & 1) == 0) {
        uVar27 = func_0x0387cc50(lVar26,*(undefined4 *)(lVar24 + 0x10),0);
        if ((uVar27 & 1) != 0) {
          return 1;
        }
      }
      uVar27 = 0;
    }
    return uVar27;
  }
LAB_033c4a08:
  auVar40 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar5 + -0x160) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -0x158) = 0x33c4a0c;
  *(undefined **)((long)ppuVar5 + -0x150) = unaff_x28;
  *(undefined **)((long)ppuVar5 + -0x148) = unaff_x27;
  *(long *)((long)ppuVar5 + -0x140) = lVar13;
  *(undefined8 *)((long)ppuVar5 + -0x138) = 0x5e2c000;
  *(undefined **)((long)ppuVar5 + -0x130) = puVar34;
  *(undefined **)((long)ppuVar5 + -0x128) = puVar32;
  *(undefined **)((long)ppuVar5 + -0x120) = puVar31;
  *(undefined8 *)((long)ppuVar5 + -0x118) = 0x5e2c000;
  *(long **)((long)ppuVar5 + -0x110) = plVar21;
  *(long *)((long)ppuVar5 + -0x108) = lVar24;
  plVar20 = (long *)0x5e2c000;
  uVar27 = auVar40._0_8_ & 0xffffffff;
  plVar21 = plVar16;
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
  *(undefined1 *)((long)ppuVar5 + -0x16c) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x180) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x178) = 0;
  *(undefined8 *)((long)ppuVar5 + -400) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x188) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x1a0) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x198) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x1c0) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x1b8) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x1b0) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x1c8) = 0;
  if (plVar16 == (long *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar15 = func_0x0249fb88(uVar15);
    func_0x022c29f0((undefined1 *)((long)ppuVar5 + -0x1e0));
    func_0x0258f7ac(uVar15);
    uVar14 = 0x33c5404;
    auVar43 = func_0x022bd790();
    puVar32 = puVar34;
  }
  else {
    lVar24 = *plVar16;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar36 = (long *)(*(code *)*puVar12)(plVar16,puVar12[1]);
    if (plVar36 == (long *)0x0) goto LAB_033c53e0;
    lVar24 = *plVar36;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar20 = (long *)(*(code *)*puVar12)(plVar36,puVar12[1]);
    lVar24 = *plVar16;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0220,6);
LAB_033c4cac:
    puVar32 = (undefined *)(*(code *)*puVar12)(plVar16,puVar12[1]);
    if (plVar20 == (long *)0x0) goto LAB_033c53e0;
    lVar24 = *plVar20;
    puVar33 = &DAT_059cd750;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
          puVar12 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,0);
LAB_033c4d14:
    uVar35 = (*(code *)*puVar12)(plVar20,uVar27,puVar12[1]);
    if ((uVar35 & 1) == 0) {
      return 4;
    }
    puVar34 = puVar32;
    if (puVar32 == (undefined *)0x0) goto LAB_033c53e0;
    uVar35 = func_0x0387c57c(puVar32,uVar27,0);
    if ((uVar35 & 1) == 0) {
      return 1;
    }
    lVar24 = *plVar20;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,2);
LAB_033c4da0:
    uVar27 = (*(code *)*puVar12)(plVar20,uVar27,puVar12[1]);
    auVar43._8_8_ = plVar16;
    auVar43._0_8_ = uVar27;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar35 = func_0x035fb854(uVar27,plVar16,0);
    if ((uVar35 & 1) == 0) {
      return 3;
    }
    *(undefined1 *)((long)ppuVar5 + -0x16c) = 0;
    if (uVar27 == 0) goto LAB_033c53e0;
    uVar35 = func_0x0353f608(uVar27,0);
    if ((uVar35 & 1) != 0) {
LAB_033c4e0c:
      plVar20 = *(long **)(uVar27 + 0x28);
      if (plVar20 == (long *)0x0) {
LAB_033c52d0:
        uVar6 = 0;
        if (*(char *)((long)ppuVar5 + -0x16c) != '\0') {
          uVar6 = 6;
        }
        return (ulong)uVar6;
      }
      uVar6 = *(uint *)(plVar20 + 3);
      puVar34 = (undefined *)(ulong)uVar6;
      if ((int)uVar6 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar33 = _DAT_059f5cd8;
      lVar24 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x024d8f40();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x024d8f40();
      }
      if (*(int *)(lVar24 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar24 = *(long *)(puVar33 + 0x20);
      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x024d8f40();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x024d8f40();
      }
      plVar36 = (long *)**(long **)(lVar24 + 0xb8);
      if (plVar36 != (long *)0x0) {
        puVar33 = (undefined *)
                  (**(code **)(*plVar36 + 0x178))(plVar36,puVar34,*(undefined8 *)(*plVar36 + 0x180))
        ;
        *(undefined **)((long)ppuVar5 + -0x178) = puVar33;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar13 = _DAT_059f5d10;
        lVar24 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        if (*(int *)(lVar24 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar24 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        plVar36 = (long *)**(long **)(lVar24 + 0xb8);
        if (plVar36 != (long *)0x0) {
          uVar14 = (**(code **)(*plVar36 + 0x178))(plVar36,uVar6,*(undefined8 *)(*plVar36 + 0x180));
          *(undefined8 *)((long)ppuVar5 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar5 + -0x1d8) = (undefined1 *)((long)ppuVar5 + -0x180);
          *(undefined8 *)((long)ppuVar5 + -0x180) = uVar14;
          *(undefined1 **)((long)ppuVar5 + -0x1d0) = (undefined1 *)((long)ppuVar5 + -0x178);
          auVar38 = func_0x028ff200(puVar33,_DAT_05a2eda0);
          auVar39 = func_0x028ff200(*(undefined8 *)((long)ppuVar5 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar7 = func_0x035fdf8c(plVar20,auVar38._0_8_,auVar38._8_8_,auVar39._0_8_,auVar39._8_8_,0)
          ;
          if (0 < iVar7) {
            uVar14 = *(undefined8 *)((long)ppuVar5 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar5 + -400),uVar14,0,iVar7,_DAT_059f5d38);
            uVar14 = *(undefined8 *)((long)ppuVar5 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar5 + -0x1a0),uVar14,0,iVar7,_DAT_059f5d98);
            auVar38 = func_0x028ff244(*(undefined8 *)((long)ppuVar5 + -400),
                                      *(undefined8 *)((long)ppuVar5 + -0x188),_DAT_05a2ed98);
            auVar39 = func_0x028ff244(*(undefined8 *)((long)ppuVar5 + -0x1a0),
                                      *(undefined8 *)((long)ppuVar5 + -0x198),_DAT_05a2f0a8);
            uVar27 = func_0x033bae94(plVar16,auVar40._8_8_,uVar15,auVar38._0_8_,auVar38._8_8_,
                                     auVar39._0_8_,auVar39._8_8_,
                                     (undefined1 *)((long)ppuVar5 + -0x16c));
            if ((uVar27 & 1) == 0) {
              func_0x02408624((undefined1 *)((long)ppuVar5 + -0x1e0));
              return 2;
            }
          }
          func_0x02408624((undefined1 *)((long)ppuVar5 + -0x1e0));
          func_0x028310e8(plVar20,(undefined1 *)((long)ppuVar5 + -0x1e0),_DAT_05a1a750);
          *(undefined8 *)((long)ppuVar5 + -0x1b8) = *(undefined8 *)((long)ppuVar5 + -0x1d8);
          *(undefined8 *)((long)ppuVar5 + -0x1c0) = *(undefined8 *)((long)ppuVar5 + -0x1e0);
          *(undefined8 *)((long)ppuVar5 + -0x1b0) = *(undefined8 *)((long)ppuVar5 + -0x1d0);
          *(undefined8 *)((long)ppuVar5 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar5 + -0x1d8) = (undefined1 *)((long)ppuVar5 + -0x1c0);
          while( true ) {
            uVar27 = func_0x02a5d2d0((undefined1 *)((long)ppuVar5 + -0x1c0),_DAT_05a047f0);
            lVar24 = _DAT_05a047f8;
            if ((uVar27 & 1) == 0) break;
            lVar26 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar1 = *(ushort *)(lVar26 + 0x135);
            lVar13 = lVar26;
            if ((uVar1 & 1) == 0) {
              lVar13 = func_0x024d8f40();
              lVar26 = *(long *)(lVar24 + 0x20);
              uVar1 = *(ushort *)(lVar26 + 0x135);
            }
            uVar8 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
            if ((uVar1 & 1) == 0) {
              lVar26 = func_0x024d8f40();
            }
            uVar15 = func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x1c0),
                                     *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x168),uVar15,uVar8);
            plVar21 = *(long **)((long)ppuVar5 + -0x168);
            if (plVar21 != (long *)0x0) {
              lVar24 = *plVar21;
              if ((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar24 + 0x130)) &&
                 (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                           -8) == _DAT_059db3a0)) {
                uVar27 = (**(code **)(lVar24 + 0x1b8))
                                   (plVar21,plVar16,*(undefined8 *)(lVar24 + 0x1c0));
                if ((uVar27 & 1) == 0) {
                  func_0x02a5d2cc((undefined1 *)((long)ppuVar5 + -0x1c0),_DAT_05a047e8);
                  return 5;
                }
              }
            }
          }
          func_0x02a5d2cc((undefined1 *)((long)ppuVar5 + -0x1c0),_DAT_05a047e8);
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar35 = func_0x0353f618(uVar27,0);
    if ((uVar35 & 1) != 0) goto LAB_033c4e0c;
    uVar35 = func_0x0353f5f8(uVar27,0);
    if ((uVar35 & 1) == 0) {
      uVar35 = func_0x0353f628(uVar27,0);
      if ((uVar35 & 1) != 0) {
        return 3;
      }
      uVar35 = func_0x0353f638(uVar27,0);
      if ((uVar35 & 1) != 0) {
        return 3;
      }
      uVar35 = func_0x0353f648(uVar27,0);
      if ((uVar35 & 1) == 0) {
        uVar35 = func_0x0353f658(uVar27,0);
        if ((uVar35 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar35 = func_0x03600068(uVar27,(undefined1 *)((long)ppuVar5 + -0x1c8),0);
        if ((uVar35 & 1) == 0) goto LAB_033c52d0;
        lVar24 = func_0x022bffa8(6,_DAT_059e0220,plVar16);
        if (*(long *)((long)ppuVar5 + -0x1c8) != 0) {
          uVar14 = func_0x03693f98(*(long *)((long)ppuVar5 + -0x1c8),0);
          uVar15 = 0;
          if (lVar24 != 0) {
            uVar27 = func_0x03887158(lVar24,plVar16,uVar14,0);
            if ((uVar27 & 1) != 0) {
              return 3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar24 = func_0x022bffa8(6,_DAT_059e0220,plVar16);
        if (lVar24 != 0) {
          uVar27 = func_0x03884e60(lVar24,*(undefined4 *)(uVar27 + 0x10),0,0);
          if ((uVar27 & 1) == 0) {
            return 3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar14 = 0x33c52cc;
  }
  plVar10 = auVar43._8_8_;
  plVar36 = auVar43._0_8_;
  *(undefined8 *)((long)ppuVar5 + -0x210) = uVar14;
  *(long *)((long)ppuVar5 + -0x208) = auVar40._8_8_;
  *(undefined8 *)((long)ppuVar5 + -0x200) = uVar15;
  *(long **)((long)ppuVar5 + -0x1f8) = plVar16;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar15 = 0;
  *(undefined8 *)((long)ppuVar5 + -0x220) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x218) = 0;
  uVar35 = func_0x036a531c(plVar36,plVar10);
  if ((uVar35 & 1) == 0) {
    return 0;
  }
  if (plVar36 != (long *)0x0) {
    lVar24 = *plVar36;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar15 = puVar12[1];
    plVar11 = (long *)(*(code *)*puVar12)(plVar36,plVar10);
    if (plVar10 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
          (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar36 = (long *)0x0, plVar11 != (long *)0x0)) {
        lVar13 = *plVar11;
        lVar24 = plVar10[0x9c];
        uVar27 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dec98) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar29 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar40 = (*(code *)*puVar12)(plVar11,plVar10,(char)lVar24 != '\0',puVar12[1]);
        *(undefined1 (*) [16])((long)ppuVar5 + -0x220) = auVar40;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar24 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x220),
                                          *(long *)(**(long **)(lVar24 + 0xc0) + 0x80) + 0x20);
        return (ulong)(*pcVar18 == '\0');
      }
    }
  }
  auVar40 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar5 + -0x270) = 0x33c5620;
  *(long *)((long)ppuVar5 + -0x260) = lVar13;
  *(undefined **)((long)ppuVar5 + -600) = puVar33;
  *(undefined **)((long)ppuVar5 + -0x250) = puVar32;
  *(long **)((long)ppuVar5 + -0x248) = plVar20;
  *(ulong *)((long)ppuVar5 + -0x240) = uVar27;
  *(undefined8 *)((long)ppuVar5 + -0x238) = 0x5e2c000;
  *(long **)((long)ppuVar5 + -0x230) = plVar36;
  *(long **)((long)ppuVar5 + -0x228) = plVar10;
  uVar27 = auVar40._0_8_ & 0xffffffff;
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
  *(undefined1 *)((long)ppuVar5 + -0x268) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x278) = 0;
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar35 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar35 = uVar35 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar35 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_033c5714:
    plVar20 = (long *)(*(code *)*puVar12)(plVar21,puVar12[1]);
    if (plVar20 != (long *)0x0) {
      lVar24 = *plVar20;
      uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar35 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar35 = uVar35 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar20 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
      lVar24 = *plVar21;
      uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar35 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar35 = uVar35 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar35 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059e0220,6);
LAB_033c57e8:
      lVar24 = (*(code *)*puVar12)(plVar21,puVar12[1]);
      if (plVar20 != (long *)0x0) {
        lVar13 = *plVar20;
        uVar35 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar35 != 0) {
          piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar35 = uVar35 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar35 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,0);
LAB_033c5850:
        uVar35 = (*(code *)*puVar12)(plVar20,uVar27,puVar12[1]);
        if ((uVar35 & 1) == 0) {
          return 4;
        }
        if (lVar24 != 0) {
          uVar35 = func_0x0387c57c(lVar24,uVar27,0);
          if ((uVar35 & 1) == 0) {
            return 1;
          }
          lVar24 = *plVar20;
          uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar35 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
                puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar35 = uVar35 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar35 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,2);
LAB_033c58dc:
          lVar24 = (*(code *)*puVar12)(plVar20,uVar27,puVar12[1]);
          if (lVar24 != 0) {
            uVar35 = func_0x0353f648(lVar24,0);
            if ((uVar35 & 1) == 0) {
              uVar27 = func_0x0353f658(lVar24,0);
              if ((uVar27 & 1) == 0) {
                return 3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar27 = func_0x03600068(lVar24,(undefined1 *)((long)ppuVar5 + -0x278),0);
              if ((uVar27 & 1) == 0) {
                return 3;
              }
              lVar24 = func_0x022bffa8(6,_DAT_059e0220,plVar21);
              if (*(long *)((long)ppuVar5 + -0x278) != 0) {
                uVar14 = func_0x03693f98(*(long *)((long)ppuVar5 + -0x278),0);
                uVar15 = 0;
                if (lVar24 != 0) {
                  func_0x03887758(lVar24,plVar21,uVar14,0);
                  return 3;
                }
              }
            }
            else {
              lVar24 = *plVar21;
              uVar35 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar35 != 0) {
                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                    puVar12 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar35 = uVar35 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar35 != 0);
              }
              puVar12 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059e0220,6);
LAB_033c59d0:
              lVar24 = (*(code *)*puVar12)(plVar21,puVar12[1]);
              if (lVar24 != 0) {
                lVar24 = func_0x03885c68(lVar24,plVar21,uVar27,0);
                if (lVar24 == 0) {
                  return 3;
                }
                lVar13 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar24 + 0x10) != 0) {
                  plVar20 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar8 = *(undefined4 *)(plVar20[1] + 0xfc);
                  uVar14 = func_0x0249f90c(*(long *)(lVar24 + 0x10),*(undefined8 *)(*plVar20 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x264),uVar14,uVar8);
                  uVar14 = _DAT_059d7518;
                  if (lVar13 != 0) {
                    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)((long)ppuVar5 + -0x264);
                    lVar24 = func_0x0249f9d4(uVar14,1);
                    if (lVar24 != 0) {
                      if (*(int *)(lVar24 + 0x18) != 0) {
                        *(undefined4 *)(lVar24 + 0x20) = 1;
                        uVar27 = func_0x033bacb8(plVar21,auVar40._8_8_,uVar15,lVar13,lVar24,
                                                 (undefined1 *)((long)ppuVar5 + -0x268));
                        if ((uVar27 & 1) == 0) {
                          return 2;
                        }
                        uVar6 = 0;
                        if (*(char *)((long)ppuVar5 + -0x268) != '\0') {
                          uVar6 = 6;
                        }
                        return (ulong)uVar6;
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
  lVar24 = func_0x0249fb98();
  if (lVar24 != 0) {
    return (ulong)*(byte *)(lVar24 + 0x4e0);
  }
  *(undefined8 *)((long)ppuVar5 + -0x290) = 0x33c5ae8;
  auVar38 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar5 + -0x2b0) = 0x33c5afc;
  *(long *)((long)ppuVar5 + -0x2a8) = auVar40._8_8_;
  *(undefined8 *)((long)ppuVar5 + -0x2a0) = uVar15;
  *(long **)((long)ppuVar5 + -0x298) = plVar21;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)((long)ppuVar5 + -0x2c0) = 0;
  lVar13 = func_0x033c5be8(auVar38._0_8_,auVar38._8_8_);
  lVar24 = _DAT_05a27d90;
  if (lVar13 == 0) {
    uVar15 = 0;
    *(undefined8 *)((long)ppuVar5 + -0x2c0) = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar13 + 0x10);
  }
  *(undefined8 *)((long)ppuVar5 + -0x2c0) = uVar15;
  lVar26 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar1 = *(ushort *)(lVar26 + 0x135);
  lVar13 = lVar26;
  if ((uVar1 & 1) == 0) {
    lVar26 = func_0x024d8f40(lVar26);
    uVar1 = *(ushort *)(*(long *)(lVar24 + 0x20) + 0x135);
    lVar13 = *(long *)(lVar24 + 0x20);
  }
  uVar8 = *(undefined4 *)(**(long **)(lVar26 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x024d8f40(lVar13);
  }
  uVar15 = func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x2c0),
                           *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x2b4),uVar15,uVar8);
  return (ulong)*(uint *)((long)ppuVar5 + -0x2b4);
}


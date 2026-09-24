/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Boolean CanItemBeMovedFromBoardToInventory(GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Player.Board.Coordinate coordinate, System.Collections.Generic.IEnumerable`1<GameLogic.Player.IBoardInventory> inventories, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033c2be8
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

ulong FUN_033c2be8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
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
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  int iVar7;
  long lVar16;
  long *plVar17;
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
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  ulong uVar34;
  undefined *unaff_x27;
  long *plVar35;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined *puVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined *puStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long *plStack_218;
  ulong uStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [80];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_138;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_94 [4];
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long **pplStack_58;
  long *plStack_48;
  
  puVar32 = (undefined *)0x5e2c000;
  plVar20 = param_3;
  plVar22 = param_4;
  plVar35 = param_5;
  if ((bRam0000000005e2c3cf & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3cf = 1;
  }
  plStack_48 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar20 = (long *)0x0;
    plVar10 = (long *)func_0x0376e450(param_2,param_3);
    if (plVar10 == (long *)0x0) {
      param_4 = (long *)0x0;
      goto LAB_033c2f48;
    }
    if (param_4 != (long *)0x0) {
      lVar24 = *param_4;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca768) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033c2ce4;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar20 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(param_4);
LAB_033c2ce4:
      plStack_48 = (long *)(*(code *)*puVar11)(param_4,puVar11[1]);
      pplStack_58 = &plStack_48;
      plStack_60 = (long *)0x0;
      if (plStack_48 != (long *)0x0) {
        puVar32 = &DAT_059df6e0;
        do {
          plVar17 = plStack_48;
          lVar24 = *plStack_48;
          uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c2d68;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          plVar20 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x024d927c(plStack_48);
LAB_033c2d68:
          uVar27 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          plVar17 = plStack_48;
          param_4 = (long *)(uVar27 & 0xffffffff);
          if ((uVar27 & 1) == 0) goto LAB_033c2ed0;
          if (plStack_48 == (long *)0x0) {
            func_0x0249fb90();
            param_2 = (long *)0x0;
LAB_033c2f74:
            func_0x0249fb90();
            param_3 = plVar10;
            goto LAB_033c2f78;
          }
          lVar24 = *plStack_48;
          uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cbac8) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c2dd0;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(plStack_48,_DAT_059cbac8,0);
LAB_033c2dd0:
          param_2 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
          plVar22 = (long *)0x0;
          plVar20 = param_5;
          uVar27 = func_0x036d05a4(plVar10,param_1);
          if ((uVar27 & 1) != 0) {
            if (param_2 == (long *)0x0) goto LAB_033c2f74;
            lVar24 = *param_2;
            uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                  puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x27) * 0x10 + 0x138);
                  goto LAB_033c2e4c;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            puVar11 = (undefined8 *)func_0x024d927c(param_2,_DAT_059defe8,0x27);
LAB_033c2e4c:
            plVar22 = (long *)puVar11[1];
            plVar20 = param_1;
            uVar27 = (*(code *)*puVar11)(param_2,plVar10);
            if ((uVar27 & 1) != 0) {
              lVar24 = *param_2;
              uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar27 != 0) {
                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                    puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 3) * 0x10 + 0x138);
                    goto LAB_033c2eb4;
                  }
                  uVar27 = uVar27 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar27 != 0);
              }
              plVar20 = (long *)0x3;
              puVar11 = (undefined8 *)func_0x024d927c(param_2);
LAB_033c2eb4:
              uVar27 = (*(code *)*puVar11)(param_2,puVar11[1]);
              if ((uVar27 & 1) == 0) goto LAB_033c2ed8;
            }
          }
        } while (plStack_48 != (long *)0x0);
      }
      func_0x0249fb90();
LAB_033c2ed0:
      param_4 = (long *)0x0;
LAB_033c2ed8:
      param_5 = (long *)0x0;
      pplVar25 = &plStack_48;
      goto LAB_033c2edc;
    }
  }
LAB_033c2f78:
  func_0x0249fb90();
  plVar10 = param_3;
  do {
    auVar39._8_8_ = param_4;
    auVar39._0_8_ = plVar10;
    auVar43 = func_0x0249fb88(param_5);
    plStack_68 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) {
      func_0x022bd79c(&plStack_60);
      func_0x0258f7ac(plStack_68);
      auVar37 = func_0x022bd790();
      lVar24 = auVar37._8_8_;
      uVar14 = auVar37._0_8_;
      uStack_a0 = 0x33c2fe4;
      auStack_94[0] = 0;
      plVar21 = plVar20;
      plVar23 = plVar22;
      plVar17 = plVar35;
      plVar15 = plStack_68;
      puStack_90 = puVar32;
      plStack_88 = param_2;
      plStack_80 = param_4;
      plStack_78 = plVar10;
      plStack_70 = param_1;
      if (lVar24 != 0) {
        lVar12 = func_0x0376e450(lVar24,plVar20,0);
        if (lVar12 == 0) {
          return 0;
        }
        plVar23 = (long *)0x0;
        plVar21 = plVar35;
        uVar27 = func_0x036d05a4(lVar12,uVar14);
        if ((uVar27 & 1) == 0) {
          return 0;
        }
        plVar15 = plVar35;
        param_1 = plVar20;
        auVar39 = auVar37;
        if (plVar22 != (long *)0x0) {
          uVar27 = func_0x0362cd70(plVar22,0);
          if ((uVar27 & 1) != 0) {
            return 0;
          }
          func_0x0362d1c8(plVar22,uVar14,lVar12,plVar35,auStack_94,0);
          func_0x037789bc(lVar24,uVar14,plVar20,plVar35,0,0);
          return 1;
        }
      }
      auVar37 = func_0x0249fb90();
      plVar20 = auVar37._0_8_;
      plVar22 = plVar21;
      plStack_b0 = param_1;
      plStack_a8 = plVar15;
      if ((bRam0000000005e2c3d1 & 1) == 0) {
        uStack_c0 = auVar39._8_8_;
        uStack_b8 = auVar39._0_8_;
        func_0x0249f8e4(&DAT_059db250);
        func_0x0249f8e4(&DAT_059defe8);
        auVar39._8_8_ = uStack_c0;
        auVar39._0_8_ = uStack_b8;
        bRam0000000005e2c3d1 = 1;
      }
      uStack_c0 = auVar39._8_8_;
      uStack_b8 = auVar39._0_8_;
      uStack_c8 = 0;
      if (plVar20 != (long *)0x0) {
        lVar24 = *plVar20;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 == 0) goto LAB_033c3130;
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        goto LAB_033c3118;
      }
      auVar37 = func_0x0249fb90();
      plVar21 = auVar37._8_8_;
      lVar24 = auVar37._0_8_;
      uVar27 = param_7 & 0xffffffff;
      uVar34 = (ulong)plVar22 & 0xffffffff;
      auVar38._8_8_ = 0x5e2c000;
      auVar38._0_8_ = uVar34;
      plVar20 = plVar23;
      plVar35 = plVar17;
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
      plStack_138 = (long *)0x0;
      if (plVar21 == (long *)0x0) goto LAB_033c36d4;
      lVar12 = *plVar21;
      unaff_x27 = &DAT_059defe8;
      uVar28 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar28 == 0) goto LAB_033c32b8;
      piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_033c32a0;
    }
    puVar11 = (undefined8 *)func_0x054ed080(plStack_68);
    param_5 = (long *)*puVar11;
    plStack_60 = param_5;
    func_0x054ed090();
    param_4 = (long *)0x0;
    pplVar25 = pplStack_58;
LAB_033c2edc:
    param_1 = *pplVar25;
    if (param_1 != (long *)0x0) {
      lVar24 = *param_1;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033c2f38;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar20 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(param_1);
LAB_033c2f38:
      (*(code *)*puVar11)(param_1,puVar11[1]);
    }
  } while (param_5 != (long *)0x0);
LAB_033c2f48:
  return (ulong)((uint)param_4 & 1);
code_r0x033c4070:
  uVar27 = (**(code **)(*plVar20 + 0x1b8))(plVar20,auVar39._8_8_,*(undefined8 *)(*plVar20 + 0x1c0));
  if ((uVar27 & 1) == 0) {
LAB_033c4084:
    uVar6 = uVar6 ^ 1;
    func_0x02a5d2cc((undefined1 *)((long)ppuVar5 + -0x50),_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c((undefined1 *)((long)ppuVar5 + -0xb0));
  func_0x0258f7ac(uVar13);
  auVar39 = func_0x022bd790();
  plVar10 = auVar39._8_8_;
  plVar35 = auVar39._0_8_;
  *(undefined8 *)((long)ppuVar5 + -0xe0) = 0x33c45c4;
  *(undefined **)((long)ppuVar5 + -0xd0) = puVar30;
  *(long **)((long)ppuVar5 + -200) = plVar20;
  *(long **)((long)ppuVar5 + -0xc0) = plVar22;
  *(undefined8 *)((long)ppuVar5 + -0xb8) = uVar13;
  uVar13 = 0x5e2c000;
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
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    uVar14 = 6;
    puVar11 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033c466c:
    lVar24 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar35 != (long *)0x0) {
      lVar26 = *plVar35;
      puVar30 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
            goto LAB_033c46d8;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      uVar14 = 1;
      puVar11 = (undefined8 *)func_0x024d927c(plVar35);
LAB_033c46d8:
      uVar8 = (*(code *)*puVar11)(plVar35,puVar11[1]);
      uVar13 = 0;
      if (lVar24 != 0) {
        uVar27 = func_0x0387c57c(lVar24,uVar8,0);
        if ((uVar27 & 1) != 0) {
          return 3;
        }
        lVar26 = *plVar35;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x25) * 0x10 + 0x138);
              goto LAB_033c4754;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar27 = (*(code *)*puVar11)(plVar35,puVar11[1]);
        if ((uVar27 & 1) == 0) {
          lVar26 = *plVar35;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x2b) * 0x10 + 0x138);
                goto LAB_033c47b4;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar27 = (*(code *)*puVar11)(plVar35,puVar11[1]);
          if ((uVar27 & 1) == 0) {
            lVar26 = *plVar35;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                  puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                  goto LAB_033c4814;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfa78,1);
LAB_033c4814:
            uVar8 = (*(code *)*puVar11)(plVar35,puVar11[1]);
            uVar27 = func_0x0387cc50(lVar24,uVar8,0);
            if ((uVar27 & 1) != 0) {
              return 2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar15 = (long *)0x0;
        uVar27 = func_0x03603060(plVar35,plVar10,1);
        if ((uVar27 & 1) == 0) {
          return 5;
        }
        lVar26 = *plVar35;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x23) * 0x10 + 0x138);
              goto LAB_033c48c4;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar27 = (*(code *)*puVar11)(plVar35,puVar11[1]);
        if ((uVar27 & 1) == 0) {
          uVar6 = func_0x033c4128(plVar35,plVar10);
          return (ulong)((uVar6 ^ 0xffffffff) & 1);
        }
        uVar14 = 0x33c48e0;
        ppuVar5 = (undefined **)((long)ppuVar5 + -0xe0);
        auVar37 = auVar39;
        goto SUB_033c3e04;
      }
    }
  }
  auVar37 = func_0x0249fb90();
  plVar22 = auVar37._8_8_;
  lVar24 = auVar37._0_8_;
  *(undefined8 *)((long)ppuVar5 + -0x100) = 0x33c490c;
  *(undefined8 *)((long)ppuVar5 + -0xf8) = uVar13;
  *(undefined1 (*) [16])((long)ppuVar5 + -0xf0) = auVar39;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar22 == (long *)0x0) goto LAB_033c4a08;
  lVar26 = *plVar22;
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
      puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059defe8,0xd);
  auVar39._8_8_ = uStack_c0;
  auVar39._0_8_ = uStack_b8;
LAB_033c3150:
  uStack_c0 = auVar39._8_8_;
  uStack_b8 = auVar39._0_8_;
  lVar24 = (*(code *)*puVar11)(plVar20,auVar37._8_8_ & 0xffffffff,puVar11[1]);
  if (lVar24 == 0) {
    uVar6 = 0;
  }
  else {
    uStack_c8 = func_0x0376eb00(plVar21,0);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar6 = func_0x0376edd4(&uStack_c8,0);
    uVar6 = uVar6 ^ 1;
  }
  return (ulong)(uVar6 & 1);
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
      puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar9 = (*(code *)*puVar11)(plVar22,puVar11[1]);
  return (ulong)(iVar7 == iVar9);
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar29 = piVar29 + 4;
    if (uVar28 == 0) break;
LAB_033c32a0:
    if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
      puVar11 = (undefined8 *)(lVar12 + (long)(*piVar29 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059defe8,0x16);
LAB_033c32d8:
  plVar22 = (long *)puVar11[1];
  auVar38 = (*(code *)*puVar11)(plVar21,uVar34);
  uVar14 = auVar38._8_8_;
  lVar12 = auVar38._0_8_;
  if (lVar12 == 0) {
    return 0;
  }
  unaff_x28 = &DAT_059db250;
  plStack_138 = (long *)func_0x0376eb00(lVar24,0);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar34 = func_0x0376edd4(&plStack_138,0);
  if ((uVar34 & 1) != 0) {
    return 0;
  }
  if (param_6 != (long *)0x0) {
    lVar26 = *param_6;
    unaff_x28 = &DAT_059df8e8;
    uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c3394;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c3394:
    uVar13 = (*(code *)*puVar11)(param_6,puVar11[1]);
    plVar22 = (long *)0x0;
    uVar34 = func_0x036ec4b4(lVar12,uVar13);
    if ((uVar34 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar14 = func_0x03530158(uVar14,0);
      uVar14 = func_0x03530310(plVar23,uVar14,0);
      lVar26 = *param_6;
      uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar34 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c343c;
          }
          uVar34 = uVar34 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c343c:
      plVar22 = (long *)(*(code *)*puVar11)(param_6,puVar11[1]);
      plVar20 = (long *)0x0;
      func_0x036e24f4(lVar12,uVar14);
    }
    auVar3._8_8_ = uVar14;
    auVar3._0_8_ = lVar12;
    auVar2._8_8_ = uVar14;
    auVar2._0_8_ = lVar12;
    auVar38._8_8_ = uVar14;
    auVar38._0_8_ = lVar12;
    if (lVar24 != 0) {
      func_0x03785f38(lVar24,plStack_138,lVar12,plVar23,plVar17,param_6,0);
      if ((param_7 & 1) == 0) {
        return 1;
      }
      uVar27 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar27,_DAT_05a192a0);
      plVar17 = plStack_138;
      lVar26 = *param_6;
      uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar34 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c34fc;
          }
          uVar34 = uVar34 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar14 = (*(code *)*puVar11)(param_6,puVar11[1]);
      plVar10 = (long *)func_0x036d3908(lVar12,uVar14,0);
      uStack_1f0 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      plVar22 = plVar17;
      plVar20 = plVar17;
      plVar35 = plVar23;
      func_0x034ba874(&uStack_190,9);
      auVar38 = auVar2;
      if (uVar27 != 0) {
        func_0x054ed0d0(auStack_1e0,&uStack_190,0x50);
        plVar22 = _DAT_05a192a8;
        func_0x025a1da8(uVar27,auStack_1e0);
        lVar12 = *param_6;
        uVar34 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar34 != 0) {
          piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
              puVar11 = (undefined8 *)(lVar12 + (long)(*piVar29 + 0x17) * 0x10 + 0x138);
              goto LAB_033c35d4;
            }
            uVar34 = uVar34 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar34 != 0);
        }
        plVar22 = (long *)0x17;
        puVar11 = (undefined8 *)func_0x024d927c(param_6);
LAB_033c35d4:
        plVar15 = (long *)(*(code *)*puVar11)(param_6,puVar11[1]);
        lVar12 = *plVar21;
        uVar34 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar34 != 0) {
          piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
              puVar11 = (undefined8 *)(lVar12 + (long)(*piVar29 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar34 = uVar34 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar34 != 0);
        }
        plVar22 = (long *)0x2;
        puVar11 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033c3634:
        uVar14 = (*(code *)*puVar11)(plVar21,puVar11[1]);
        param_6 = (long *)0x0;
        auVar38 = auVar3;
        if (plVar15 != (long *)0x0) {
          lVar24 = *plVar15;
          uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar34 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059e0280) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar34 = uVar34 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar34 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar11)(plVar15,uVar14,uVar27,puVar11[1]);
          return 1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar12 = auVar38._8_8_;
  auVar39 = func_0x0249fb90();
  puVar30 = auVar39._8_8_;
  puVar31 = auVar39._0_8_;
  uStack_240 = 0x33c36d8;
  puVar32 = (undefined *)0x5e2c000;
  puVar33 = (undefined *)((ulong)plVar20 & 0xffffffff);
  plVar15 = plVar20;
  plStack_218 = plVar17;
  uStack_210 = uVar27;
  plStack_208 = plVar23;
  plStack_200 = param_6;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    lStack_230 = lVar12;
    uStack_228 = auVar38._0_8_;
    lStack_220 = lVar24;
    plStack_1f8 = plVar21;
    func_0x0249f8e4(&DAT_059df8e8);
    auVar38._8_8_ = lStack_230;
    auVar38._0_8_ = uStack_228;
    auVar37._8_8_ = plStack_1f8;
    auVar37._0_8_ = lStack_220;
    bRam0000000005e2c3d3 = 1;
  }
  lStack_230 = auVar38._8_8_;
  uStack_228 = auVar38._0_8_;
  plStack_1f8 = auVar37._8_8_;
  lStack_220 = auVar37._0_8_;
  if (puVar31 != (undefined *)0x0) {
    uVar14 = func_0x0376e450(puVar31,puVar30,0);
    auVar37._8_8_ = plStack_1f8;
    auVar37._0_8_ = lStack_220;
    auVar38._8_8_ = lStack_230;
    auVar38._0_8_ = uStack_228;
    if (plVar10 != (long *)0x0) {
      lVar24 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c3798;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059df8e8,5);
LAB_033c3798:
      uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      uVar6 = func_0x036edd98(uVar14,uVar13,0);
      if ((uVar6 & 1) != 0) {
        if (((ulong)plVar20 & 1) == 0) {
          func_0x03780be8(puVar31,puVar30,plVar22,plVar35,0,plVar10,0);
        }
        else {
          func_0x036eaf0c(uVar14,0);
          func_0x03780be8(puVar31,puVar30,plVar22,plVar35,0,plVar10,0);
          func_0x036eadfc(uVar14,0);
        }
      }
      return (ulong)(uVar6 & 1);
    }
  }
  plStack_1f8 = auVar37._8_8_;
  lStack_220 = auVar37._0_8_;
  lStack_230 = auVar38._8_8_;
  uStack_228 = auVar38._0_8_;
  lVar24 = func_0x0249fb90();
  puVar11 = &uStack_260;
  uStack_260 = 0x33c383c;
  uVar14 = 0x5e2c000;
  plStack_258 = plVar22;
  plStack_250 = plVar35;
  plStack_248 = plVar10;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar24 != 0) {
    plVar22 = (long *)func_0x0367613c(lVar24,0);
    iVar7 = func_0x03676288(lVar24,0);
    if ((plVar22 != (long *)0x0) && (*(long *)(lVar24 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar24 + 0x338) + 0x10) = *(int *)((long)plVar22 + 0x24) * iVar7;
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
  uVar13 = 0x33c3914;
  auVar40 = func_0x0249fb90();
  if (auVar40._8_8_ != 0) {
    do {
      *(undefined8 *)((long)puVar11 + -0x20) = uVar13;
      *(long **)((long)puVar11 + -0x18) = plVar22;
      *(undefined8 *)((long)puVar11 + -0x10) = uVar14;
      *(long *)((long)puVar11 + -8) = lVar24;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar24 = *(long *)(auVar40._8_8_ + 0x38);
      if (lVar24 != 0) {
        *(int *)((long)puVar11 + -0x24) = auVar40._0_4_;
        uVar6 = func_0x02893128(lVar24,(undefined1 *)((long)puVar11 + -0x24),_DAT_05a2a588);
        return (ulong)(uVar6 & 1);
      }
      auVar39 = func_0x0249fb90();
      plVar22 = auVar39._8_8_;
      *(undefined8 *)((long)puVar11 + -0x50) = 0x387e7ec;
      *(undefined8 *)((long)puVar11 + -0x48) = 0x5e2e000;
      *(long *)((long)puVar11 + -0x40) = auVar40._8_8_;
      *(ulong *)((long)puVar11 + -0x38) = auVar40._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar22 == (long *)0x0) {
        auVar37 = func_0x0249fb90();
        *(undefined8 *)((long)puVar11 + -0x70) = 0x387e89c;
        *(undefined8 *)((long)puVar11 + -0x68) = 0x5e2e000;
        *(undefined8 *)((long)puVar11 + -0x60) = 0;
        *(long *)((long)puVar11 + -0x58) = auVar39._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar24 = *(long *)(auVar37._0_8_ + 0xe8);
        if (lVar24 != 0) {
          *(int *)((long)puVar11 + -0x74) = auVar37._8_4_;
          uVar6 = func_0x02893128(lVar24,(undefined1 *)((long)puVar11 + -0x74),_DAT_05a2a588);
          return (ulong)(uVar6 & 1);
        }
        auVar39 = func_0x0249fb90();
        *(undefined8 *)((long)puVar11 + -0xa0) = 0x387e908;
        *(undefined8 *)((long)puVar11 + -0x98) = 0x5e2e000;
        *(long *)((long)puVar11 + -0x90) = auVar37._0_8_;
        *(ulong *)((long)puVar11 + -0x88) = auVar37._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar24 = *(long *)(auVar39._0_8_ + 0xe8);
        if (lVar24 != 0) {
          *(int *)((long)puVar11 + -0xa4) = auVar39._8_4_;
          uVar27 = func_0x028926c4(lVar24,(undefined1 *)((long)puVar11 + -0xa4),_DAT_05a2a578);
          return uVar27;
        }
        lVar24 = func_0x0249fb90();
        *(undefined8 *)((long)puVar11 + -0xd0) = 0x387e970;
        *(long *)((long)puVar11 + -0xc0) = auVar39._0_8_;
        *(ulong *)((long)puVar11 + -0xb8) = auVar39._8_8_ & 0xffffffff;
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
      lVar24 = *plVar22;
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
      puVar19 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar14 = (*(code *)*puVar19)(plVar22,puVar19[1]);
      auVar40._8_8_ = auVar39._0_8_;
      auVar40._0_8_ = uVar14;
      uVar14 = *(undefined8 *)((long)puVar11 + -0x40);
      lVar24 = *(long *)((long)puVar11 + -0x38);
      uVar13 = *(undefined8 *)((long)puVar11 + -0x50);
      plVar22 = *(long **)((long)puVar11 + -0x48);
      puVar11 = (undefined8 *)((long)puVar11 + -0x30);
    } while( true );
  }
  uStack_270 = 0x33c3914;
  auVar39 = func_0x0249fb90();
  plVar20 = auVar39._0_8_;
  uStack_2a0 = 0x33c3934;
  uStack_280 = 0x5e2c000;
  puStack_290 = puVar30;
  plStack_288 = plVar22;
  lStack_278 = lVar24;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar20 == (long *)0x0) {
    puVar36 = (undefined *)0x33c3cc8;
    auVar37 = func_0x0249fb90();
  }
  else {
    lVar24 = *plVar20;
    puVar30 = &DAT_059dfa78;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar24 = (*(code *)*puVar11)(plVar20,puVar11[1]);
    if (lVar24 == 0) {
      return 0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar27 = func_0x035fb854(plVar20,auVar39._8_8_,0);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
    puVar36 = (undefined *)0x33c3a24;
    auVar37 = auVar39;
  }
  plVar20 = auVar37._8_8_;
  plVar22 = auVar37._0_8_;
  uStack_2b8 = 0x5e2c000;
  lVar24 = 0x5e2c000;
  puStack_2c0 = puVar36;
  auStack_2b0 = auVar39;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar22 == (long *)0x0) {
    uVar14 = 0x33c3e04;
    auVar39 = func_0x0249fb90();
    auVar4._8_8_ = 0;
    auVar4._0_8_ = plVar20;
    ppuVar5 = &puStack_2c0;
    auVar37 = auVar4 << 0x40;
SUB_033c3e04:
    plVar22 = auVar39._0_8_;
    *(undefined8 *)((long)ppuVar5 + -0x30) = uVar14;
    *(undefined **)((long)ppuVar5 + -0x28) = puVar31;
    *(undefined **)((long)ppuVar5 + -0x20) = puVar30;
    *(long *)((long)ppuVar5 + -0x18) = lVar24;
    *(undefined1 (*) [16])((long)ppuVar5 + -0x10) = auVar37;
    puVar36 = (undefined *)0x5e2c000;
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
    if (plVar22 != (long *)0x0) {
      lVar24 = *plVar22;
      puVar36 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar27 = (*(code *)*puVar11)(plVar22,puVar11[1]);
      if ((uVar27 & 1) == 0) goto LAB_033c40ec;
      lVar24 = *plVar22;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar20 = (long *)(*(code *)*puVar11)(plVar22,auVar39._8_8_,puVar11[1]);
      if (plVar20 != (long *)0x0) {
        lVar24 = *plVar20;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dec98) {
              puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dec98,4);
LAB_033c3fac:
        lVar24 = (*(code *)*puVar11)(plVar20,puVar11[1]);
        plVar22 = plVar20;
        if (lVar24 != 0) {
          func_0x028310e8(lVar24,(undefined1 *)((long)ppuVar5 + -0x50),_DAT_05a1a750);
          puVar30 = &DAT_05a047f0;
          puVar31 = &DAT_05a047f8;
          *(undefined8 *)((long)ppuVar5 + -0x60) = 0;
          *(undefined1 **)((long)ppuVar5 + -0x58) = (undefined1 *)((long)ppuVar5 + -0x50);
LAB_033c3fe8:
          uVar6 = func_0x02a5d2d0((undefined1 *)((long)ppuVar5 + -0x50),_DAT_05a047f0);
          lVar24 = _DAT_05a047f8;
          plVar22 = (long *)(ulong)uVar6;
          if ((uVar6 & 1) == 0) goto LAB_033c4084;
          lVar16 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar1 = *(ushort *)(lVar16 + 0x135);
          lVar26 = lVar16;
          if ((uVar1 & 1) == 0) {
            lVar26 = func_0x024d8f40();
            lVar16 = *(long *)(lVar24 + 0x20);
            uVar1 = *(ushort *)(lVar16 + 0x135);
          }
          puVar36 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar1 & 1) == 0) {
            lVar16 = func_0x024d8f40();
          }
          uVar14 = func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x50),
                                   *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x38),uVar14,puVar36);
          plVar20 = *(long **)((long)ppuVar5 + -0x38);
          if (plVar20 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar43 = func_0x0249fb90();
    uVar14 = auVar43._0_8_;
    if (auVar43._8_4_ == 1) {
      plVar20 = (long *)func_0x054ed080(uVar14);
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
      uVar14 = func_0x0249fb88(lVar24);
    }
    func_0x022c29f0((undefined1 *)((long)ppuVar5 + -0x60));
    func_0x0258f7ac(uVar14);
    auVar39 = func_0x022bd790();
    plVar35 = auVar39._8_8_;
    plVar20 = auVar39._0_8_;
    *(undefined8 *)((long)ppuVar5 + -0xa0) = 0x33c4128;
    *(undefined **)((long)ppuVar5 + -0x90) = puVar33;
    *(undefined **)((long)ppuVar5 + -0x88) = puVar31;
    *(undefined **)((long)ppuVar5 + -0x80) = puVar30;
    *(undefined **)((long)ppuVar5 + -0x78) = puVar36;
    *(long **)((long)ppuVar5 + -0x70) = plVar22;
    *(undefined8 *)((long)ppuVar5 + -0x68) = uVar14;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    puVar30 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar5 + -0x98) = 0;
    if ((plVar20 != (long *)0x0) && (plVar35 != (long *)0x0)) {
      lVar24 = *plVar35;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
            puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059e0220,6);
LAB_033c4208:
      lVar24 = (*(code *)*puVar11)(plVar35,puVar11[1]);
      lVar26 = *plVar20;
      puVar30 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 0x1e) * 0x10 + 0x138);
            goto LAB_033c4270;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar14 = puVar11[1];
      plVar22 = (long *)(*(code *)*puVar11)(plVar20,plVar35);
      if (plVar22 != (long *)0x0) {
        lVar26 = *plVar22;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059ca7c8) {
              puVar11 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033c42e4;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        uVar14 = 0;
        puVar11 = (undefined8 *)func_0x024d927c(plVar22);
LAB_033c42e4:
        plVar35 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
        *(long **)((long)ppuVar5 + -0x98) = plVar35;
        *(undefined8 *)((long)ppuVar5 + -0xb0) = 0;
        *(undefined1 **)((long)ppuVar5 + -0xa8) = (undefined1 *)((long)ppuVar5 + -0x98);
        if (plVar35 != (long *)0x0) {
          puVar31 = &DAT_059df6e0;
          puVar33 = &DAT_059cbb20;
          do {
            lVar26 = *plVar35;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                  puVar11 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c4360;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar14 = 0;
            puVar11 = (undefined8 *)func_0x024d927c(plVar35);
LAB_033c4360:
            uVar27 = (*(code *)*puVar11)(plVar35,puVar11[1]);
            plVar22 = (long *)(uVar27 & 0xffffffff);
            if ((uVar27 & 1) == 0) goto LAB_033c44b8;
            plVar20 = *(long **)((long)ppuVar5 + -0x98);
            if (plVar20 == (long *)0x0) {
              func_0x0249fb90();
              plVar20 = (long *)0x0;
LAB_033c4550:
              auVar41 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar41._0_8_,auVar41._8_8_);
              goto LAB_033c4558;
            }
            lVar26 = *plVar20;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059cbb20) {
                  puVar11 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c43c8;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar14 = 0;
            puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c43c8:
            plVar20 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
            if (plVar20 == (long *)0x0) goto LAB_033c4550;
            lVar26 = *plVar20;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                  puVar11 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c4428;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar14 = 0;
            puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c4428:
            iVar7 = (*(code *)*puVar11)(plVar20,puVar11[1]);
            if (iVar7 != 0) {
              lVar26 = *plVar20;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar27 != 0) {
                piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
                    puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                    goto LAB_033c4488;
                  }
                  uVar27 = uVar27 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar27 != 0);
              }
              uVar14 = 1;
              puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033c4488:
              uVar27 = (*(code *)*puVar11)(plVar20,puVar11[1]);
              auVar41._8_8_ = uVar27 & 0xffffffff;
              auVar41._0_8_ = uVar27;
              if (lVar24 == 0) goto LAB_033c4554;
              uVar14 = 0;
              uVar27 = func_0x0387cc50(lVar24);
              if ((uVar27 & 1) == 0) goto LAB_033c44b8;
            }
            plVar35 = *(long **)((long)ppuVar5 + -0x98);
            plVar22 = (long *)0x0;
          } while (plVar35 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar24 = 0;
        puVar30 = (undefined *)(ulong)((uint)plVar22 ^ 1);
        puVar11 = (undefined8 *)((long)ppuVar5 + -0x98);
        do {
          plVar22 = (long *)*puVar11;
          if (plVar22 != (long *)0x0) {
            lVar26 = *plVar22;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059df598) {
                  puVar11 = (undefined8 *)(lVar26 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033c4520;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            uVar14 = 0;
            puVar11 = (undefined8 *)func_0x024d927c(plVar22);
LAB_033c4520:
            (*(code *)*puVar11)(plVar22,puVar11[1]);
          }
          if (lVar24 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar43 = func_0x0249fb88(lVar24);
          uVar13 = auVar43._0_8_;
          if (auVar43._8_4_ != 1) goto LAB_033c45b0;
          plVar22 = (long *)func_0x054ed080(uVar13);
          lVar24 = *plVar22;
          *(long *)((long)ppuVar5 + -0xb0) = lVar24;
          func_0x054ed090();
          puVar11 = *(undefined8 **)((long)ppuVar5 + -0xa8);
          puVar30 = (undefined *)0x1;
        } while( true );
      }
      puVar30 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong)((uint)puVar30 & 1);
  }
  lVar24 = *plVar22;
  uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar27 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
        puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar27 = uVar27 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar27 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar27 = (*(code *)*puVar11)(plVar22,puVar11[1]);
  if ((uVar27 & 1) != 0) {
    lVar24 = *plVar22;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar14 = (*(code *)*puVar11)(plVar22,puVar11[1]);
    uVar14 = func_0x033c88e0(uVar14,plVar20,0,0);
    uVar27 = func_0x033c9114(uVar14,plVar20);
    if ((uVar27 & 1) == 0) {
      puStack_2c0 = puVar30;
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar22 != (long *)0x0) {
        lVar24 = *plVar22;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar14 = (*(code *)*puVar11)(plVar22,puVar11[1]);
        lVar24 = func_0x033c97d4(uVar14,plVar20);
        if (lVar24 != 0) {
          uVar6 = *(uint *)(lVar24 + 0x18);
          if (0 < (int)uVar6) {
            if (plVar20 == (long *)0x0) goto LAB_033ca068;
            uVar27 = 0;
            do {
              lVar12 = *plVar20;
              uVar34 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar34 != 0) {
                piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                    puVar11 = (undefined8 *)(lVar12 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar34 = uVar34 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar34 != 0);
              }
              puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0220,6);
LAB_033c9f74:
              lVar12 = (*(code *)*puVar11)(plVar20,puVar11[1]);
              if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_033ca06c;
              plVar35 = (long *)(lVar24 + uVar27 * 8 + 0x20);
              lVar26 = *plVar35;
              if (lVar26 == 0) goto LAB_033ca068;
              uVar8 = func_0x0353efa0(lVar26,0);
              if (lVar12 == 0) goto LAB_033ca068;
              uVar34 = func_0x0387cc50(lVar12,uVar8,0);
              if ((uVar34 & 1) == 0) {
                if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_033ca06c;
                lVar24 = *plVar35;
                if (lVar24 == 0) goto LAB_033ca068;
                iVar7 = func_0x0353efa0(lVar24,0);
                lVar24 = *plVar22;
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
      auVar39 = func_0x0249fb98();
      uVar14 = func_0x033c88e0(auVar39._0_8_,auVar39._8_8_,0,0);
      uVar27 = func_0x033c7ab8(uVar14,auVar39._8_8_);
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
      puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 6) * 0x10 + 0x138);
      goto LAB_033c4998;
    }
  }
LAB_033c4978:
  uVar14 = 6;
  puVar11 = (undefined8 *)func_0x024d927c(plVar22);
LAB_033c4998:
  lVar26 = (*(code *)*puVar11)(plVar22,puVar11[1]);
  if ((lVar24 != 0) && (plVar22 = (long *)0x0, lVar26 != 0)) {
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
  auVar39 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar5 + -0x160) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -0x158) = 0x33c4a0c;
  *(undefined **)((long)ppuVar5 + -0x150) = unaff_x28;
  *(undefined **)((long)ppuVar5 + -0x148) = unaff_x27;
  *(long *)((long)ppuVar5 + -0x140) = lVar12;
  *(undefined8 *)((long)ppuVar5 + -0x138) = 0x5e2c000;
  *(undefined **)((long)ppuVar5 + -0x130) = puVar33;
  *(undefined **)((long)ppuVar5 + -0x128) = puVar31;
  *(undefined **)((long)ppuVar5 + -0x120) = puVar30;
  *(undefined8 *)((long)ppuVar5 + -0x118) = 0x5e2c000;
  *(long **)((long)ppuVar5 + -0x110) = plVar22;
  *(long *)((long)ppuVar5 + -0x108) = lVar24;
  plVar20 = (long *)0x5e2c000;
  uVar27 = auVar39._0_8_ & 0xffffffff;
  plVar22 = plVar15;
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
  if (plVar15 == (long *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar14 = func_0x0249fb88(uVar14);
    func_0x022c29f0((undefined1 *)((long)ppuVar5 + -0x1e0));
    func_0x0258f7ac(uVar14);
    uVar13 = 0x33c5404;
    auVar42 = func_0x022bd790();
    puVar31 = puVar33;
  }
  else {
    lVar24 = *plVar15;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar35 = (long *)(*(code *)*puVar11)(plVar15,puVar11[1]);
    if (plVar35 == (long *)0x0) goto LAB_033c53e0;
    lVar24 = *plVar35;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar20 = (long *)(*(code *)*puVar11)(plVar35,puVar11[1]);
    lVar24 = *plVar15;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059e0220,6);
LAB_033c4cac:
    puVar31 = (undefined *)(*(code *)*puVar11)(plVar15,puVar11[1]);
    if (plVar20 == (long *)0x0) goto LAB_033c53e0;
    lVar24 = *plVar20;
    puVar32 = &DAT_059cd750;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,0);
LAB_033c4d14:
    uVar34 = (*(code *)*puVar11)(plVar20,uVar27,puVar11[1]);
    if ((uVar34 & 1) == 0) {
      return 4;
    }
    puVar33 = puVar31;
    if (puVar31 == (undefined *)0x0) goto LAB_033c53e0;
    uVar34 = func_0x0387c57c(puVar31,uVar27,0);
    if ((uVar34 & 1) == 0) {
      return 1;
    }
    lVar24 = *plVar20;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,2);
LAB_033c4da0:
    uVar27 = (*(code *)*puVar11)(plVar20,uVar27,puVar11[1]);
    auVar42._8_8_ = plVar15;
    auVar42._0_8_ = uVar27;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar34 = func_0x035fb854(uVar27,plVar15,0);
    if ((uVar34 & 1) == 0) {
      return 3;
    }
    *(undefined1 *)((long)ppuVar5 + -0x16c) = 0;
    if (uVar27 == 0) goto LAB_033c53e0;
    uVar34 = func_0x0353f608(uVar27,0);
    if ((uVar34 & 1) != 0) {
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
      puVar33 = (undefined *)(ulong)uVar6;
      if ((int)uVar6 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar32 = _DAT_059f5cd8;
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
      lVar24 = *(long *)(puVar32 + 0x20);
      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x024d8f40();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x024d8f40();
      }
      plVar35 = (long *)**(long **)(lVar24 + 0xb8);
      if (plVar35 != (long *)0x0) {
        puVar32 = (undefined *)
                  (**(code **)(*plVar35 + 0x178))(plVar35,puVar33,*(undefined8 *)(*plVar35 + 0x180))
        ;
        *(undefined **)((long)ppuVar5 + -0x178) = puVar32;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar12 = _DAT_059f5d10;
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
        lVar24 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x024d8f40();
        }
        plVar35 = (long *)**(long **)(lVar24 + 0xb8);
        if (plVar35 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar35 + 0x178))(plVar35,uVar6,*(undefined8 *)(*plVar35 + 0x180));
          *(undefined8 *)((long)ppuVar5 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar5 + -0x1d8) = (undefined1 *)((long)ppuVar5 + -0x180);
          *(undefined8 *)((long)ppuVar5 + -0x180) = uVar13;
          *(undefined1 **)((long)ppuVar5 + -0x1d0) = (undefined1 *)((long)ppuVar5 + -0x178);
          auVar37 = func_0x028ff200(puVar32,_DAT_05a2eda0);
          auVar38 = func_0x028ff200(*(undefined8 *)((long)ppuVar5 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar7 = func_0x035fdf8c(plVar20,auVar37._0_8_,auVar37._8_8_,auVar38._0_8_,auVar38._8_8_,0)
          ;
          if (0 < iVar7) {
            uVar13 = *(undefined8 *)((long)ppuVar5 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar5 + -400),uVar13,0,iVar7,_DAT_059f5d38);
            uVar13 = *(undefined8 *)((long)ppuVar5 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar5 + -0x1a0),uVar13,0,iVar7,_DAT_059f5d98);
            auVar37 = func_0x028ff244(*(undefined8 *)((long)ppuVar5 + -400),
                                      *(undefined8 *)((long)ppuVar5 + -0x188),_DAT_05a2ed98);
            auVar38 = func_0x028ff244(*(undefined8 *)((long)ppuVar5 + -0x1a0),
                                      *(undefined8 *)((long)ppuVar5 + -0x198),_DAT_05a2f0a8);
            uVar27 = func_0x033bae94(plVar15,auVar39._8_8_,uVar14,auVar37._0_8_,auVar37._8_8_,
                                     auVar38._0_8_,auVar38._8_8_,
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
            lVar12 = lVar26;
            if ((uVar1 & 1) == 0) {
              lVar12 = func_0x024d8f40();
              lVar26 = *(long *)(lVar24 + 0x20);
              uVar1 = *(ushort *)(lVar26 + 0x135);
            }
            uVar8 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
            if ((uVar1 & 1) == 0) {
              lVar26 = func_0x024d8f40();
            }
            uVar14 = func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x1c0),
                                     *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x168),uVar14,uVar8);
            plVar22 = *(long **)((long)ppuVar5 + -0x168);
            if (plVar22 != (long *)0x0) {
              lVar24 = *plVar22;
              if ((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar24 + 0x130)) &&
                 (*(long *)(*(long *)(lVar24 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                           -8) == _DAT_059db3a0)) {
                uVar27 = (**(code **)(lVar24 + 0x1b8))
                                   (plVar22,plVar15,*(undefined8 *)(lVar24 + 0x1c0));
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
    uVar34 = func_0x0353f618(uVar27,0);
    if ((uVar34 & 1) != 0) goto LAB_033c4e0c;
    uVar34 = func_0x0353f5f8(uVar27,0);
    if ((uVar34 & 1) == 0) {
      uVar34 = func_0x0353f628(uVar27,0);
      if ((uVar34 & 1) != 0) {
        return 3;
      }
      uVar34 = func_0x0353f638(uVar27,0);
      if ((uVar34 & 1) != 0) {
        return 3;
      }
      uVar34 = func_0x0353f648(uVar27,0);
      if ((uVar34 & 1) == 0) {
        uVar34 = func_0x0353f658(uVar27,0);
        if ((uVar34 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar34 = func_0x03600068(uVar27,(undefined1 *)((long)ppuVar5 + -0x1c8),0);
        if ((uVar34 & 1) == 0) goto LAB_033c52d0;
        lVar24 = func_0x022bffa8(6,_DAT_059e0220,plVar15);
        if (*(long *)((long)ppuVar5 + -0x1c8) != 0) {
          uVar13 = func_0x03693f98(*(long *)((long)ppuVar5 + -0x1c8),0);
          uVar14 = 0;
          if (lVar24 != 0) {
            uVar27 = func_0x03887158(lVar24,plVar15,uVar13,0);
            if ((uVar27 & 1) != 0) {
              return 3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar24 = func_0x022bffa8(6,_DAT_059e0220,plVar15);
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
    uVar13 = 0x33c52cc;
  }
  plVar10 = auVar42._8_8_;
  plVar35 = auVar42._0_8_;
  *(undefined8 *)((long)ppuVar5 + -0x210) = uVar13;
  *(long *)((long)ppuVar5 + -0x208) = auVar39._8_8_;
  *(undefined8 *)((long)ppuVar5 + -0x200) = uVar14;
  *(long **)((long)ppuVar5 + -0x1f8) = plVar15;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar14 = 0;
  *(undefined8 *)((long)ppuVar5 + -0x220) = 0;
  *(undefined8 *)((long)ppuVar5 + -0x218) = 0;
  uVar34 = func_0x036a531c(plVar35,plVar10);
  if ((uVar34 & 1) == 0) {
    return 0;
  }
  if (plVar35 != (long *)0x0) {
    lVar24 = *plVar35;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar14 = puVar11[1];
    plVar17 = (long *)(*(code *)*puVar11)(plVar35,plVar10);
    if (plVar10 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
          (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar35 = (long *)0x0, plVar17 != (long *)0x0)) {
        lVar12 = *plVar17;
        lVar24 = plVar10[0x9c];
        uVar27 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dec98) {
              puVar11 = (undefined8 *)(lVar12 + (long)(*piVar29 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar39 = (*(code *)*puVar11)(plVar17,plVar10,(char)lVar24 != '\0',puVar11[1]);
        *(undefined1 (*) [16])((long)ppuVar5 + -0x220) = auVar39;
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
  auVar39 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar5 + -0x270) = 0x33c5620;
  *(long *)((long)ppuVar5 + -0x260) = lVar12;
  *(undefined **)((long)ppuVar5 + -600) = puVar32;
  *(undefined **)((long)ppuVar5 + -0x250) = puVar31;
  *(long **)((long)ppuVar5 + -0x248) = plVar20;
  *(ulong *)((long)ppuVar5 + -0x240) = uVar27;
  *(undefined8 *)((long)ppuVar5 + -0x238) = 0x5e2c000;
  *(long **)((long)ppuVar5 + -0x230) = plVar35;
  *(long **)((long)ppuVar5 + -0x228) = plVar10;
  uVar27 = auVar39._0_8_ & 0xffffffff;
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
  if (plVar22 != (long *)0x0) {
    lVar24 = *plVar22;
    uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar34 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar34 = uVar34 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059df8e8,5);
LAB_033c5714:
    plVar20 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
    if (plVar20 != (long *)0x0) {
      lVar24 = *plVar20;
      uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar34 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
            puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar34 = uVar34 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar20 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
      lVar24 = *plVar22;
      uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar34 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
            puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar34 = uVar34 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059e0220,6);
LAB_033c57e8:
      lVar24 = (*(code *)*puVar11)(plVar22,puVar11[1]);
      if (plVar20 != (long *)0x0) {
        lVar12 = *plVar20;
        uVar34 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar34 != 0) {
          piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar34 = uVar34 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar34 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,0);
LAB_033c5850:
        uVar34 = (*(code *)*puVar11)(plVar20,uVar27,puVar11[1]);
        if ((uVar34 & 1) == 0) {
          return 4;
        }
        if (lVar24 != 0) {
          uVar34 = func_0x0387c57c(lVar24,uVar27,0);
          if ((uVar34 & 1) == 0) {
            return 1;
          }
          lVar24 = *plVar20;
          uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar34 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
                puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar34 = uVar34 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar34 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,2);
LAB_033c58dc:
          lVar24 = (*(code *)*puVar11)(plVar20,uVar27,puVar11[1]);
          if (lVar24 != 0) {
            uVar34 = func_0x0353f648(lVar24,0);
            if ((uVar34 & 1) == 0) {
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
              lVar24 = func_0x022bffa8(6,_DAT_059e0220,plVar22);
              if (*(long *)((long)ppuVar5 + -0x278) != 0) {
                uVar13 = func_0x03693f98(*(long *)((long)ppuVar5 + -0x278),0);
                uVar14 = 0;
                if (lVar24 != 0) {
                  func_0x03887758(lVar24,plVar22,uVar13,0);
                  return 3;
                }
              }
            }
            else {
              lVar24 = *plVar22;
              uVar34 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar34 != 0) {
                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                    puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar34 = uVar34 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar34 != 0);
              }
              puVar11 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059e0220,6);
LAB_033c59d0:
              lVar24 = (*(code *)*puVar11)(plVar22,puVar11[1]);
              if (lVar24 != 0) {
                lVar24 = func_0x03885c68(lVar24,plVar22,uVar27,0);
                if (lVar24 == 0) {
                  return 3;
                }
                lVar12 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar24 + 0x10) != 0) {
                  plVar20 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar8 = *(undefined4 *)(plVar20[1] + 0xfc);
                  uVar13 = func_0x0249f90c(*(long *)(lVar24 + 0x10),*(undefined8 *)(*plVar20 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x264),uVar13,uVar8);
                  uVar13 = _DAT_059d7518;
                  if (lVar12 != 0) {
                    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)((long)ppuVar5 + -0x264);
                    lVar24 = func_0x0249f9d4(uVar13,1);
                    if (lVar24 != 0) {
                      if (*(int *)(lVar24 + 0x18) != 0) {
                        *(undefined4 *)(lVar24 + 0x20) = 1;
                        uVar27 = func_0x033bacb8(plVar22,auVar39._8_8_,uVar14,lVar12,lVar24,
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
  auVar37 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar5 + -0x2b0) = 0x33c5afc;
  *(long *)((long)ppuVar5 + -0x2a8) = auVar39._8_8_;
  *(undefined8 *)((long)ppuVar5 + -0x2a0) = uVar14;
  *(long **)((long)ppuVar5 + -0x298) = plVar22;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)((long)ppuVar5 + -0x2c0) = 0;
  lVar12 = func_0x033c5be8(auVar37._0_8_,auVar37._8_8_);
  lVar24 = _DAT_05a27d90;
  if (lVar12 == 0) {
    uVar14 = 0;
    *(undefined8 *)((long)ppuVar5 + -0x2c0) = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar12 + 0x10);
  }
  *(undefined8 *)((long)ppuVar5 + -0x2c0) = uVar14;
  lVar26 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar1 = *(ushort *)(lVar26 + 0x135);
  lVar12 = lVar26;
  if ((uVar1 & 1) == 0) {
    lVar26 = func_0x024d8f40(lVar26);
    uVar1 = *(ushort *)(*(long *)(lVar24 + 0x20) + 0x135);
    lVar12 = *(long *)(lVar24 + 0x20);
  }
  uVar8 = *(undefined4 *)(**(long **)(lVar26 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar12 = func_0x024d8f40(lVar12);
  }
  uVar14 = func_0x0249f90c((undefined1 *)((long)ppuVar5 + -0x2c0),
                           *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((undefined1 *)((long)ppuVar5 + -0x2b4),uVar14,uVar8);
  return (ulong)*(uint *)((long)ppuVar5 + -0x2b4);
}


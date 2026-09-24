/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void RemoveItemsFromBoardsAndInventories(GameLogic.Player.IPlayer player, System.Collections.Generic.IReadOnlyCollection`1<GameLogic.Player.Board.MergeBoard> mergeBoards, System.Collections.Generic.IEnumerable`1<GameLogic.Player.IBoardInventory> boardInventories, System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.IItemDefinition>, System.Int32>> quantities, System.Collections.Generic.IComparer`1<GameLogic.Player.Items.MergeItem> preference, GameLogic.Config.Types.MetacoreTime timestamp)
 * Ghidra function entry: 033be0c4
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Removing unreachable block (ram,0x033bf1f8) */
/* WARNING: Removing unreachable block (ram,0x033beb58) */
/* WARNING: Removing unreachable block (ram,0x033bf0c4) */
/* WARNING: Removing unreachable block (ram,0x033bf21c) */
/* WARNING: Removing unreachable block (ram,0x033bf1dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033be0c4(long *param_1,long *param_2,long **param_3,long **param_4,long **param_5,
                  long **param_6)

{
  int iVar1;
  uint uVar2;
  long **pplVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long **pplVar7;
  ulong uVar8;
  long **pplVar9;
  undefined8 uVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *unaff_x21;
  code *pcVar25;
  undefined *unaff_x22;
  long lVar26;
  undefined *puVar27;
  long **unaff_x25;
  long **pplVar28;
  long *unaff_x26;
  long **unaff_x28;
  long **pplVar29;
  long **unaff_x29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  int aiStack_3f8 [3];
  undefined8 uStack_3ec;
  long lStack_3a8;
  long **pplStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  long **pplStack_388;
  undefined *puStack_380;
  long **pplStack_378;
  long lStack_370;
  undefined *puStack_368;
  long **pplStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined1 auStack_340 [80];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  long **pplStack_250;
  undefined8 uStack_248;
  long **pplStack_240;
  undefined1 auStack_238 [16];
  long **pplStack_228;
  long **pplStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long **pplStack_1f8;
  undefined8 uStack_1f0;
  long **pplStack_1d8;
  long *plStack_1d0;
  long **pplStack_1c8;
  long **pplStack_1c0;
  long **pplStack_1b8;
  undefined1 auStack_1b0 [80];
  undefined8 uStack_160;
  long **pplStack_158;
  long lStack_150;
  long **pplStack_148;
  long lStack_140;
  long ***ppplStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  long **pplStack_b8;
  long *aplStack_b0 [10];
  
  puVar23 = (undefined *)0x5e2c000;
  pplVar11 = param_4;
  pplVar13 = param_6;
  pplStack_1d8 = param_3;
  plStack_1d0 = param_2;
  pplStack_1c0 = param_5;
  if ((bRam0000000005e2c3bd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a42a10);
    func_0x0249f8e4(&DAT_05a429f8);
    func_0x0249f8e4(&DAT_05a43a78);
    func_0x0249f8e4(&DAT_05a43a18);
    func_0x0249f8e4(&DAT_059c59c0);
    func_0x0249f8e4(&DAT_059c6b58);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059c9f60);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059ca9d0);
    func_0x0249f8e4(&DAT_059c9f90);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cb2a8);
    func_0x0249f8e4(&DAT_059cbd50);
    func_0x0249f8e4(&DAT_059cb2d8);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059d4870);
    func_0x0249f8e4(&DAT_05a69ea0);
    func_0x0249f8e4(&DAT_05a69ea8);
    func_0x0249f8e4(&DAT_05a69ee0);
    func_0x0249f8e4(&DAT_05a69ee8);
    func_0x0249f8e4(&DAT_059efcb0);
    func_0x0249f8e4(&DAT_059efc88);
    bRam0000000005e2c3bd = 1;
  }
  plStack_c0 = (long *)0x0;
  pplStack_b8 = (long **)0x0;
  plStack_c8 = (long *)0x0;
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  pplVar3 = (long **)0x0;
  if (param_4 != (long **)0x0) {
    plVar15 = *param_4;
    uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(plVar15[0x16] + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059c9f60) {
          plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
          goto LAB_033be2d8;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    param_3 = (long **)0x0;
    plVar15 = (long *)func_0x024d927c(param_4);
LAB_033be2d8:
    unaff_x22 = &DAT_059df6e0;
    unaff_x21 = &DAT_059df8e8;
    puVar23 = &DAT_059cb2d8;
    pplStack_b8 = (long **)(*(code *)*plVar15)(param_4,plVar15[1]);
    ppplStack_138 = &pplStack_b8;
    lStack_140 = 0;
    pplVar7 = unaff_x25;
    do {
      do {
        pplVar3 = pplStack_b8;
        if (pplStack_b8 == (long **)0x0) {
          func_0x0249fb90();
LAB_033bf328:
          unaff_x25 = pplVar7;
          func_0x0249fb90();
LAB_033bf32c:
          func_0x0249fb90();
LAB_033bf330:
          func_0x0249fb90();
          pplVar28 = unaff_x28;
LAB_033bf334:
          func_0x0249fb88();
          goto LAB_033bf338;
        }
        plVar15 = *pplStack_b8;
        uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(plVar15[0x16] + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059df6e0) {
              plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
              goto LAB_033be35c;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        param_3 = (long **)0x0;
        plVar15 = (long *)func_0x024d927c(pplStack_b8);
LAB_033be35c:
        uVar20 = (*(code *)*plVar15)(pplVar3,plVar15[1]);
        auVar30._8_8_ = pplVar13;
        auVar30._0_8_ = param_3;
        if ((uVar20 & 1) == 0) goto LAB_033bf3d0;
        pplVar3 = (long **)func_0x0249fb80(_DAT_059efcb0);
        func_0x03789cdc(pplVar3,0);
        pplVar7 = pplStack_b8;
        unaff_x25 = pplStack_b8;
        if (pplStack_b8 == (long **)0x0) goto LAB_033bf330;
        plVar15 = *pplStack_b8;
        uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(plVar15[0x16] + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059cb2a8) {
              plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
              goto LAB_033be3e4;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        param_3 = (long **)0x0;
        plVar15 = (long *)func_0x024d927c(pplStack_b8);
LAB_033be3e4:
        auVar30 = (*(code *)*plVar15)(pplVar7,plVar15[1]);
        unaff_x25 = auVar30._8_8_;
        if (pplVar3 == (long **)0x0) goto LAB_033bf328;
        pplVar3[2] = auVar30._0_8_;
        func_0x0249f888(pplVar3 + 2,auVar30._0_8_);
        if (plStack_1d0 == (long *)0x0) goto LAB_033bf32c;
        lVar16 = *plStack_1d0;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        pplStack_1b8 = pplVar3;
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059ca9b0) {
              puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_033be470;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        param_3 = (long **)0x0;
        puVar4 = (undefined8 *)func_0x024d927c(plStack_1d0);
LAB_033be470:
        plVar15 = (long *)(*(code *)*puVar4)(plStack_1d0,puVar4[1]);
        pplStack_148 = &plStack_c0;
        lStack_150 = 0;
        pplVar28 = unaff_x25;
joined_r0x033be48c:
        pplVar7 = pplVar28;
        plStack_c0 = plVar15;
        if (plVar15 == (long *)0x0) {
          func_0x0249fb90();
          auVar30._8_8_ = pplVar13;
          auVar30._0_8_ = param_3;
          goto LAB_033bf344;
        }
        lVar16 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059df6e0) {
              puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_033be4dc;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        param_3 = (long **)0x0;
        puVar4 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033be4dc:
        uVar20 = (*(code *)*puVar4)(plVar15,puVar4[1]);
        plVar15 = plStack_c0;
        if ((uVar20 & 1) != 0) {
          if (plStack_c0 == (long *)0x0) {
            func_0x0249fb90();
            auVar30._8_8_ = pplVar13;
            auVar30._0_8_ = param_3;
          }
          else {
            lVar16 = *plStack_c0;
            uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == _DAT_059cbd30) {
                  puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_033be548;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar4 = (undefined8 *)func_0x024d927c(plStack_c0,_DAT_059cbd30,0);
LAB_033be548:
            lVar16 = (*(code *)*puVar4)(plVar15,puVar4[1]);
            uVar5 = func_0x0249fb80(_DAT_059d4870);
            func_0x028b4b8c(uVar5,pplStack_1b8,_DAT_05a69ee8,0);
            uVar5 = func_0x0376f250(lVar16,uVar5,0);
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar4 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            unaff_x28 = (long **)puVar4[5];
            if (unaff_x28 == (long **)0x0) {
              if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
                func_0x0249fa64();
                puVar4 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
              }
              unaff_x29 = (long **)*puVar4;
              unaff_x28 = (long **)func_0x0249fb80(_DAT_059c59c0);
              func_0x02a9aa34(unaff_x28,unaff_x29,_DAT_05a69ea0,0);
              puVar4 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x28);
              *puVar4 = unaff_x28;
              func_0x0249f888(puVar4,unaff_x28);
            }
            pplVar11 = _DAT_05a429f8;
            uVar5 = func_0x026e880c(uVar5,unaff_x28,pplStack_1c0);
            pplVar9 = _DAT_05a43a18;
            plVar15 = (long *)func_0x026eb75c(uVar5,(ulong)pplVar28 & 0xffffffff);
            if (plVar15 == (long *)0x0) {
              func_0x0249fb90();
              auVar30._8_8_ = pplVar13;
              auVar30._0_8_ = pplVar9;
            }
            else {
              lVar17 = *plVar15;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == _DAT_059c9f90) {
                    puVar4 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_033be6bc;
                  }
                  uVar20 = uVar20 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar20 != 0);
              }
              pplVar9 = (long **)0x0;
              puVar4 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033be6bc:
              plStack_c8 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
              pplStack_158 = &plStack_c8;
              uStack_160 = 0;
              pplStack_1c8 = pplVar28;
              if (plStack_c8 != (long *)0x0) {
                do {
                  plVar15 = plStack_c8;
                  lVar17 = *plStack_c8;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == _DAT_059df6e0) {
                        puVar4 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                        param_3 = pplVar9;
                        goto LAB_033be72c;
                      }
                      uVar20 = uVar20 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar20 != 0);
                  }
                  param_3 = (long **)0x0;
                  puVar4 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033be72c:
                  uVar20 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                  plVar6 = plStack_c8;
                  if ((uVar20 & 1) == 0) goto LAB_033be9a8;
                  pplVar7 = pplVar28;
                  if (plStack_c8 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar30._8_8_ = pplVar13;
                    auVar30._0_8_ = param_3;
                    goto LAB_033bf344;
                  }
                  lVar17 = *plStack_c8;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == _DAT_059cb2d8) {
                        puVar4 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_033be790;
                      }
                      uVar20 = uVar20 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar20 != 0);
                  }
                  param_3 = (long **)0x0;
                  puVar4 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033be790:
                  auVar30 = (*(code *)*puVar4)(plVar6,puVar4[1]);
                  pplVar29 = auVar30._8_8_;
                  pplVar9 = auVar30._0_8_;
                  if (param_1 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar30._8_8_ = pplVar13;
                    auVar30._0_8_ = param_3;
                    goto LAB_033bf344;
                  }
                  lVar17 = *param_1;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == _DAT_059df8e8) {
                        puVar4 = (undefined8 *)(lVar17 + (long)(*piVar22 + 5) * 0x10 + 0x138);
                        goto LAB_033be7f8;
                      }
                      uVar20 = uVar20 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059df8e8,5);
LAB_033be7f8:
                  uVar5 = (*(code *)*puVar4)(param_1,puVar4[1]);
                  uVar10 = 0;
                  uVar20 = func_0x036ecab8(pplVar29,uVar5);
                  unaff_x28 = pplVar29;
                  if (((uVar20 & 1) == 0) || (iVar1 = func_0x037286b0(pplVar29,0), iVar1 < 2)) {
                    if (lVar16 == 0) {
                      func_0x0249fb90();
                      auVar30._8_8_ = pplVar13;
                      auVar30._0_8_ = uVar10;
                      goto LAB_033bf344;
                    }
                    param_5 = (long **)0x1;
                    pplVar13 = (long **)0x0;
                    pplVar11 = param_6;
                    func_0x037789bc(lVar16,param_1);
                  }
                  else {
                    func_0x036f9ba0(pplVar29,1,0);
                    uStack_1f0 = 0;
                    param_5 = param_6;
                    func_0x034ba910(&uStack_120,0x17);
                    uVar5 = auVar30._8_8_;
                    lVar17 = *param_1;
                    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar20 != 0) {
                      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == _DAT_059e0220) {
                          puVar4 = (undefined8 *)(lVar17 + (long)(*piVar22 + 0x17) * 0x10 + 0x138);
                          pplVar11 = pplVar9;
                          goto LAB_033be8e0;
                        }
                        uVar20 = uVar20 - 1;
                        piVar22 = piVar22 + 4;
                      } while (uVar20 != 0);
                    }
                    uVar10 = 0x17;
                    puVar4 = (undefined8 *)func_0x024d927c(param_1);
                    auVar30._8_8_ = uVar5;
                    auVar30._0_8_ = uVar10;
                    pplVar11 = pplVar9;
LAB_033be8e0:
                    plVar15 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
                    lVar17 = _DAT_059e0280;
                    pplVar13 = auVar30._8_8_;
                    if (lVar16 == 0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    if (plVar15 == (long *)0x0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    pplVar29 = *(long ***)(lVar16 + 0x30);
                    func_0x054ed0d0(auStack_1b0,&uStack_120,0x50);
                    lVar26 = *plVar15;
                    uVar20 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar20 != 0) {
                      piVar22 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == lVar17) {
                          unaff_x29 = (long **)(lVar26 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                          goto LAB_033be96c;
                        }
                        uVar20 = uVar20 - 1;
                        piVar22 = piVar22 + 4;
                      } while (uVar20 != 0);
                    }
                    unaff_x29 = (long **)func_0x024d927c(plVar15,lVar17,1);
LAB_033be96c:
                    pplVar3 = (long **)*unaff_x29;
                    func_0x054ed0d0(aplStack_b0,auStack_1b0,0x50);
                    pplVar11 = (long **)unaff_x29[1];
                    pplVar9 = aplStack_b0;
                    (*(code *)pplVar3)(plVar15,pplVar29);
                  }
                  pplVar28 = (long **)(ulong)((int)pplVar28 - 1);
                  pplVar7 = pplVar28;
                  unaff_x28 = pplVar29;
                  if (plStack_c8 == (long *)0x0) goto LAB_033be9a0;
                } while( true );
              }
              pplVar7 = (long **)((ulong)pplVar28 & 0xffffffff);
LAB_033be9a0:
              func_0x0249fb90();
              auVar30._8_8_ = pplVar13;
              auVar30._0_8_ = pplVar9;
            }
          }
          goto LAB_033bf344;
        }
        unaff_x25 = (long **)0xb;
        unaff_x26 = *pplStack_148;
        if (unaff_x26 != (long *)0x0) {
          lVar16 = *unaff_x26;
          uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar20 != 0) {
            piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == _DAT_059df598) {
                puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_033beb3c;
              }
              uVar20 = uVar20 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar20 != 0);
          }
          param_3 = (long **)0x0;
          puVar4 = (undefined8 *)func_0x024d927c(unaff_x26);
LAB_033beb3c:
          (*(code *)*puVar4)(unaff_x26,puVar4[1]);
        }
        if (lStack_150 != 0) goto LAB_033bf334;
        pplVar7 = unaff_x25;
        unaff_x28 = pplVar28;
      } while ((int)pplVar28 < 1);
      if (pplStack_1d8 == (long **)0x0) goto LAB_033bf33c;
      plVar15 = *pplStack_1d8;
      uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
      pplVar3 = (long **)&DAT_059cbac8;
      if (uVar20 != 0) {
        piVar22 = (int *)(plVar15[0x16] + 8);
        do {
          if (*(long *)(piVar22 + -2) == _DAT_059ca768) {
            plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
            goto LAB_033bebc8;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      param_3 = (long **)0x0;
      plVar15 = (long *)func_0x024d927c();
LAB_033bebc8:
      unaff_x26 = (long *)(*(code *)*plVar15)(pplStack_1d8,plVar15[1]);
      pplStack_148 = &plStack_128;
      lStack_150 = 0;
joined_r0x033bebe4:
      unaff_x25 = pplVar28;
      pplVar7 = unaff_x25;
      plStack_128 = unaff_x26;
      if (unaff_x26 == (long *)0x0) {
        func_0x0249fb90();
        auVar30._8_8_ = pplVar13;
        auVar30._0_8_ = param_3;
        goto LAB_033bf344;
      }
      lVar16 = *unaff_x26;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == _DAT_059df6e0) {
            puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_033bec34;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      param_3 = (long **)0x0;
      puVar4 = (undefined8 *)func_0x024d927c(unaff_x26);
LAB_033bec34:
      uVar20 = (*(code *)*puVar4)(unaff_x26,puVar4[1]);
      plVar15 = plStack_128;
      if ((uVar20 & 1) != 0) {
        if (plStack_128 == (long *)0x0) {
          func_0x0249fb90();
          auVar30._8_8_ = pplVar13;
          auVar30._0_8_ = param_3;
        }
        else {
          lVar16 = *plStack_128;
          uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar20 != 0) {
            piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == _DAT_059cbac8) {
                puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_033bec98;
              }
              uVar20 = uVar20 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar20 != 0);
          }
          puVar4 = (undefined8 *)func_0x024d927c(plStack_128,_DAT_059cbac8,0);
LAB_033bec98:
          plVar15 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
          uVar5 = func_0x0249fb80(_DAT_059d4870);
          func_0x028b4b8c(uVar5,pplStack_1b8,_DAT_05a69ee8,0);
          uVar5 = func_0x034bc5a4(plVar15,uVar5,0);
          if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puVar4 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
          unaff_x28 = (long **)puVar4[6];
          if (unaff_x28 == (long **)0x0) {
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
              puVar4 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            }
            unaff_x29 = (long **)*puVar4;
            unaff_x28 = (long **)func_0x0249fb80(_DAT_059c6b58);
            func_0x02a9aa34(unaff_x28,unaff_x29,_DAT_05a69ea8,0);
            puVar4 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x30);
            *puVar4 = unaff_x28;
            func_0x0249f888(puVar4,unaff_x28);
          }
          pplVar11 = _DAT_05a42a10;
          uVar5 = func_0x026e880c(uVar5,unaff_x28,pplStack_1c0);
          param_3 = _DAT_05a43a78;
          plVar6 = (long *)func_0x026eb75c(uVar5,(ulong)unaff_x25 & 0xffffffff);
          if (plVar6 == (long *)0x0) {
            func_0x0249fb90();
            auVar30._8_8_ = pplVar13;
            auVar30._0_8_ = param_3;
          }
          else {
            lVar16 = *plVar6;
            uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == _DAT_059ca9d0) {
                  puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_033bee0c;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            param_3 = (long **)0x0;
            puVar4 = (undefined8 *)func_0x024d927c(plVar6);
LAB_033bee0c:
            plStack_130 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
            pplStack_158 = &plStack_130;
            uStack_160 = 0;
            pplVar28 = unaff_x25;
            unaff_x29 = unaff_x25;
            if (plStack_130 != (long *)0x0) {
              do {
                plVar6 = plStack_130;
                lVar16 = *plStack_130;
                uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar20 != 0) {
                  piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == _DAT_059df6e0) {
                      puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                      goto LAB_033bee7c;
                    }
                    uVar20 = uVar20 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar20 != 0);
                }
                param_3 = (long **)0x0;
                puVar4 = (undefined8 *)func_0x024d927c(plStack_130);
LAB_033bee7c:
                uVar20 = (*(code *)*puVar4)(plVar6,puVar4[1]);
                plVar6 = plStack_130;
                if ((uVar20 & 1) == 0) goto LAB_033bf044;
                pplVar7 = pplVar28;
                if (plStack_130 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar30._8_8_ = pplVar13;
                  auVar30._0_8_ = param_3;
                  goto LAB_033bf344;
                }
                lVar16 = *plStack_130;
                uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar20 != 0) {
                  piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == _DAT_059cbd50) {
                      puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                      goto LAB_033beee8;
                    }
                    uVar20 = uVar20 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar20 != 0);
                }
                param_3 = (long **)0x0;
                puVar4 = (undefined8 *)func_0x024d927c(plStack_130);
LAB_033beee8:
                uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
                if (param_1 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar30._8_8_ = pplVar13;
                  auVar30._0_8_ = param_3;
                  goto LAB_033bf344;
                }
                lVar16 = *param_1;
                uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar20 != 0) {
                  piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == _DAT_059df8e8) {
                      puVar4 = (undefined8 *)(lVar16 + (long)(*piVar22 + 5) * 0x10 + 0x138);
                      goto LAB_033bef4c;
                    }
                    uVar20 = uVar20 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar20 != 0);
                }
                puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059df8e8,5);
LAB_033bef4c:
                uVar10 = (*(code *)*puVar4)(param_1,puVar4[1]);
                uVar20 = func_0x036ecab8(uVar5,uVar10,0);
                if (((uVar20 & 1) == 0) || (iVar1 = func_0x037286b0(uVar5,0), iVar1 < 2)) {
                  unaff_x28 = (long **)func_0x0249fb80(_DAT_059d4870);
                  pplVar11 = (long **)0x0;
                  uVar10 = _DAT_05a69ee0;
                  func_0x028b4b8c(unaff_x28,pplStack_1b8);
                  if (plVar15 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar30._8_8_ = pplVar13;
                    auVar30._0_8_ = uVar10;
                    goto LAB_033bf344;
                  }
                  lVar16 = *plVar15;
                  uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar20 != 0) {
                    piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == _DAT_059defe8) {
                        puVar4 = (undefined8 *)(lVar16 + (long)(*piVar22 + 0x1d) * 0x10 + 0x138);
                        goto LAB_033bf01c;
                      }
                      uVar20 = uVar20 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar4 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059defe8,0x1d);
LAB_033bf01c:
                  pplVar11 = (long **)puVar4[1];
                  param_3 = unaff_x28;
                  (*(code *)*puVar4)(plVar15,uVar5);
                }
                else {
                  param_3 = (long **)0x0;
                  func_0x036f9ba0(uVar5,1);
                }
                pplVar28 = (long **)(ulong)((int)pplVar28 - 1);
                if (plStack_130 == (long *)0x0) goto LAB_033bf03c;
              } while( true );
            }
            pplVar28 = (long **)((ulong)unaff_x25 & 0xffffffff);
LAB_033bf03c:
            func_0x0249fb90();
            auVar30._8_8_ = pplVar13;
            auVar30._0_8_ = param_3;
            pplVar7 = pplVar28;
          }
        }
        goto LAB_033bf344;
      }
      unaff_x28 = (long **)0x2;
      pplVar28 = (long **)0x2;
      pplVar3 = (long **)*pplStack_148;
      if (pplVar3 != (long **)0x0) {
        plVar15 = *pplVar3;
        uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(plVar15[0x16] + 8);
          do {
            if (*(long *)(piVar22 + -2) == _DAT_059df598) {
              plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
              goto LAB_033bf1bc;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        param_3 = (long **)0x0;
        plVar15 = (long *)func_0x024d927c(pplVar3);
LAB_033bf1bc:
        (*(code *)*plVar15)(pplVar3,plVar15[1]);
      }
    } while (lStack_150 == 0);
LAB_033bf338:
    func_0x0249fb88();
LAB_033bf33c:
    func_0x0249fb90();
    unaff_x28 = pplVar28;
  }
  func_0x0249fb90();
  auVar30._8_8_ = pplVar13;
  auVar30._0_8_ = param_3;
  pplVar7 = unaff_x25;
LAB_033bf344:
  auVar31 = func_0x022bd790();
  unaff_x26 = auVar31._8_8_;
  func_0x022bd79c(&lStack_150);
  if (auVar31._8_4_ == 1) {
    plVar15 = (long *)func_0x054ed080(auVar31._0_8_);
    lStack_140 = *plVar15;
    func_0x054ed090();
LAB_033bf3d0:
    uVar5 = auVar30._8_8_;
    param_6 = *ppplStack_138;
    if (param_6 != (long **)0x0) {
      plVar15 = *param_6;
      uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(plVar15[0x16] + 8);
        do {
          if (*(long *)(piVar22 + -2) == _DAT_059df598) {
            plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
            goto LAB_033bf430;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      uVar10 = 0;
      plVar15 = (long *)func_0x024d927c(param_6);
      auVar30._8_8_ = uVar5;
      auVar30._0_8_ = uVar10;
LAB_033bf430:
      (*(code *)*plVar15)(param_6,plVar15[1]);
    }
    if (lStack_140 == 0) {
      return 0;
    }
    uVar5 = func_0x0249fb88();
    auVar31._8_8_ = unaff_x26;
    auVar31._0_8_ = uVar5;
  }
  func_0x022bd79c(&lStack_140);
  func_0x0258f7ac(auVar31._0_8_);
  auVar32 = func_0x022bd790();
  uVar20 = auVar30._8_8_;
  pplVar28 = auVar30._0_8_;
  lVar17 = auVar32._8_8_;
  lVar16 = auVar32._0_8_;
  uStack_248 = 0x33bf480;
  lVar26 = 0x5e2c000;
  puVar27 = &DAT_059de230;
  pplVar13 = pplVar11;
  pplStack_250 = unaff_x29;
  pplStack_240 = unaff_x28;
  pplStack_228 = pplVar7;
  pplStack_220 = pplVar3;
  plStack_218 = param_1;
  puStack_210 = unaff_x22;
  puStack_208 = unaff_x21;
  puStack_200 = puVar23;
  pplStack_1f8 = param_6;
  auStack_238 = auVar31;
  if ((bRam0000000005e2c3be & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8a28);
    func_0x0249f8e4(&DAT_059d9e60);
    func_0x0249f8e4(&DAT_059fa1e8);
    func_0x0249f8e4(&DAT_059feee0);
    func_0x0249f8e4(&DAT_059feeb8);
    func_0x0249f8e4(&DAT_059c3d50);
    func_0x0249f8e4(&DAT_059dce58);
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_05a17ac8);
    func_0x0249f8e4(&DAT_05a17ad0);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a2aaf0);
    bRam0000000005e2c3be = 1;
  }
  pplVar7 = (long **)func_0x0249fb80(_DAT_059de230);
  pplVar3 = (long **)0x0;
  func_0x034a1470(pplVar7,lVar17);
  if (lVar17 != 0) {
    puVar27 = (undefined *)func_0x028a379c(lVar17,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    pplVar9 = (long **)func_0x03530158(puVar27,0);
    if (lVar16 != 0) {
      param_5 = (long **)0x1;
      uVar20 = 0;
      pplVar3 = pplVar28;
      func_0x037789bc(lVar16,lVar17);
      pplVar13 = pplVar9;
      if (pplVar11 != (long **)0x0) {
        lVar26 = func_0x036d5f70(pplVar11,0);
        if (lVar26 == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x20);
        }
        uVar5 = func_0x03659ee0(lVar17,0);
        pplVar3 = (long **)0x0;
        plVar15 = (long *)func_0x036d3908(pplVar11,uVar5);
        pplVar13 = pplVar9;
        if (plVar15 != (long *)0x0) {
          lVar18 = *plVar15;
          uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == _DAT_059dfbc0) {
                puVar4 = (undefined8 *)(lVar18 + (long)(*piVar22 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          pplVar3 = (long **)0x6;
          puVar4 = (undefined8 *)func_0x024d927c(plVar15);
          pplVar13 = pplVar9;
LAB_033bf694:
          plVar15 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
          lVar18 = func_0x036d5f70(pplVar11,0);
          if (lVar18 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(lVar18 + 0x28);
          }
          if (plVar15 != (long *)0x0) {
            lVar18 = *plVar15;
            uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == _DAT_059df030) {
                  puVar4 = (undefined8 *)(lVar18 + (long)(*piVar22 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar4 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df030,10);
LAB_033bf720:
            pplVar13 = (long **)(*(code *)*puVar4)(plVar15,lVar17,uVar5,puVar4[1]);
            if (pplVar13 != (long **)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar20 = func_0x03530158(puVar27,0);
              uStack_350 = 0;
              pplVar3 = pplVar28;
              param_5 = pplVar7;
              lVar18 = func_0x03774f00(lVar16,lVar17);
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_033bfa8c;
              plVar15 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              pplVar7 = (long **)(ulong)*(uint *)(plVar15[1] + 0xfc);
              uVar5 = func_0x0249f90c(*(long *)(lVar18 + 0x10),*(undefined8 *)(*plVar15 + 0x80));
              pplVar3 = pplVar7;
              func_0x054ed0d0(&plStack_2a0,uVar5);
              if (*(long *)(lVar17 + 0x220) == 0) goto LAB_033bfa8c;
              pplVar7 = (long **)((ulong)plStack_2a0 & 0xffffffff);
              pplVar3 = (long **)0x0;
              uVar21 = func_0x0387e780(*(long *)(lVar17 + 0x220),pplVar7);
              if ((uVar21 & 1) == 0) {
                if (*(long *)(lVar17 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(lVar17 + 0x220),lVar17,lVar16,pplVar7,0);
              }
            }
            plVar15 = *(long **)(lVar17 + 0x1e0);
            uVar5 = *(undefined8 *)(lVar16 + 0x30);
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            param_5 = (long **)func_0x03530158(puVar27,0);
            uVar20 = 0;
            uStack_350 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            pplVar3 = pplVar28;
            pplVar13 = pplVar28;
            func_0x034ba874(&uStack_2f0,6);
            lVar18 = _DAT_059e0280;
            pplVar7 = (long **)0x0;
            if (plVar15 != (long *)0x0) {
              func_0x054ed0d0(auStack_340,&uStack_2f0,0x50);
              lVar19 = *plVar15;
              uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == lVar18) {
                    puVar4 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar4 = (undefined8 *)func_0x024d927c(plVar15,lVar18,1);
LAB_033bf8d8:
              pcVar25 = (code *)*puVar4;
              func_0x054ed0d0(&plStack_2a0,auStack_340,0x50);
              (*pcVar25)(plVar15,uVar5,&plStack_2a0,puVar4[1]);
              pplVar28 = (long **)func_0x036f10d8(pplVar11,lVar17,0);
              lVar18 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar18,_DAT_059feeb8);
              if ((lVar26 != 0) && (0 < *(int *)(lVar26 + 0x18))) {
                pplVar7 = (long **)0x0;
                unaff_x21 = (undefined *)0xffffffffffffffff;
                do {
                  pplVar3 = &plStack_2a0;
                  pplVar13 = _DAT_05a17ad0;
                  func_0x0282f3c4(lVar26,pplVar7);
                  plVar15 = plStack_2a0;
                  if (plStack_2a0 != (long *)0x0) {
                    if ((*(byte *)(_DAT_059d9e60 + 0x130) <= *(byte *)(*plStack_2a0 + 0x130)) &&
                       (*(long *)(*(long *)(*plStack_2a0 + 200) +
                                  (ulong)*(byte *)(_DAT_059d9e60 + 0x130) * 8 + -8) == _DAT_059d9e60
                       )) {
                      uStack_290 = (undefined4)plStack_2a0[2];
                      plStack_2a0 = _DAT_059dce58;
                      uStack_298 = 0xffffffffffffffff;
                      uVar5 = func_0x045e0acc(&plStack_2a0,0);
                      puVar27 = (undefined *)0x0;
                      if (lVar18 == 0) goto LAB_033bfa8c;
                      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,*(undefined4 *)((long)plVar15 + 0x14));
                      func_0x02a3c128(lVar18,uVar5,&uStack_2f0,_DAT_059feee0);
                    }
                  }
                  uVar2 = (int)pplVar7 + 1;
                  pplVar7 = (long **)(ulong)uVar2;
                } while ((int)uVar2 < *(int *)(lVar26 + 0x18));
              }
              uVar5 = func_0x03659ee0(lVar17,0);
              uVar5 = func_0x036d62d4(pplVar11,uVar5,0);
              uVar24 = *(undefined8 *)(lVar16 + 0x30);
              uVar10 = func_0x0249fb80(_DAT_059d8a28);
              uStack_350 = 0;
              func_0x0385d0a8(uVar10,uVar5,pplVar28,uVar24,lVar18,1,0,0);
              uVar20 = func_0x0366bae8(lVar17,uVar10,0,0);
              return uVar20;
            }
          }
        }
      }
    }
  }
LAB_033bfa8c:
  auVar30 = func_0x0249fb90();
  lVar16 = auVar30._8_8_;
  uVar8 = auVar30._0_8_;
  uStack_390 = 0x33bfa90;
  uVar21 = uVar8;
  pplVar9 = pplVar3;
  pplVar29 = pplVar13;
  pplVar12 = param_5;
  uVar14 = uVar20;
  pplStack_388 = pplVar7;
  puStack_380 = puVar27;
  pplStack_378 = pplVar28;
  lStack_370 = lVar26;
  puStack_368 = unaff_x21;
  pplStack_360 = pplVar11;
  lStack_358 = lVar17;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    uVar21 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  plStack_398 = (long *)0x0;
  if ((uVar20 & 1) == 0) {
    if (uVar8 == 0) goto LAB_033bfd48;
    uVar21 = 0;
    if (*(long *)(uVar8 + 0x2e8) != 0) {
      pplVar12 = (long **)0x0;
      uVar21 = func_0x034ccd58(*(long *)(uVar8 + 0x2e8),uVar8,pplVar3,pplVar13,0);
      pplVar9 = pplVar3;
      pplVar29 = pplVar13;
    }
  }
  if (param_5 == (long **)0x0) {
    return uVar21;
  }
  plVar15 = *param_5;
  uVar20 = (ulong)*(ushort *)((long)plVar15 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(plVar15[0x16] + 8);
    do {
      if (*(long *)(piVar22 + -2) == _DAT_059ca9b8) {
        plVar15 = plVar15 + (long)*piVar22 * 2 + 0x27;
        goto LAB_033bfb80;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  pplVar9 = (long **)0x0;
  plVar15 = (long *)func_0x024d927c(param_5,_DAT_059ca9b8,0);
LAB_033bfb80:
  plVar15 = (long *)(*(code *)*plVar15)(param_5,plVar15[1]);
  pplStack_3a0 = &plStack_398;
  lStack_3a8 = 0;
  while (plStack_398 = plVar15, plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059df6e0) {
          puVar4 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_033bfbfc;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    pplVar9 = (long **)0x0;
    puVar4 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df6e0,0);
LAB_033bfbfc:
    uVar20 = (*(code *)*puVar4)(plVar15,puVar4[1]);
    plVar15 = plStack_398;
    if ((uVar20 & 1) == 0) goto LAB_033bfcac;
    if (plStack_398 == (long *)0x0) {
      func_0x0249fb90();
      goto LAB_033bfd3c;
    }
    lVar17 = *plStack_398;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059cbd38) {
          puVar4 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_033bfc60;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    pplVar9 = (long **)0x0;
    puVar4 = (undefined8 *)func_0x024d927c(plStack_398,_DAT_059cbd38,0);
LAB_033bfc60:
    (*(code *)*puVar4)(aiStack_3f8,plVar15,puVar4[1]);
    plVar15 = plStack_398;
    if (aiStack_3f8[0] == 3) {
      if (lVar16 == 0) {
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      pplVar9 = (long **)0x0;
      lVar17 = func_0x0376e450(lVar16,uStack_3ec,0);
      plVar15 = plStack_398;
      if (lVar17 != 0) {
        pplVar9 = (long **)0x0;
        func_0x036efea8(lVar17,uVar8,0);
        plVar15 = plStack_398;
      }
    }
  }
  uVar20 = func_0x0249fb90();
LAB_033bfcac:
  lVar16 = 0;
  pplVar11 = &plStack_398;
  do {
    plVar15 = *pplVar11;
    if (plVar15 != (long *)0x0) {
      lVar17 = *plVar15;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == _DAT_059df598) {
            puVar4 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      pplVar9 = (long **)0x0;
      puVar4 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df598,0);
LAB_033bfd10:
      uVar20 = (*(code *)*puVar4)(plVar15,puVar4[1]);
    }
    if (lVar16 == 0) {
      return uVar20;
    }
LAB_033bfd40:
    func_0x0249fb88(lVar16);
LAB_033bfd48:
    auVar33 = func_0x0249fb90();
    if (auVar33._8_4_ != 1) {
      func_0x022bd79c(&lStack_3a8);
      func_0x0258f7ac(auVar33._0_8_);
      auVar30 = func_0x022bd790();
      uVar2 = func_0x033bb508();
      if ((uVar2 & 1) != 0) {
        FUN_033be0c4(auVar30._0_8_,auVar30._8_8_,pplVar9,pplVar29,pplVar12,uVar14);
      }
      return (ulong)(uVar2 & 1);
    }
    plVar15 = (long *)func_0x054ed080(auVar33._0_8_);
    lVar16 = *plVar15;
    lStack_3a8 = lVar16;
    uVar20 = func_0x054ed090();
    pplVar11 = pplStack_3a0;
  } while( true );
LAB_033be9a8:
  plVar15 = plStack_c0;
  if (plStack_c8 != (long *)0x0) {
    lVar16 = *plStack_c8;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059df598) {
          puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_033bea0c;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    param_3 = (long **)0x0;
    puVar4 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033bea0c:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar15 = plStack_c0;
  }
  goto joined_r0x033be48c;
LAB_033bf044:
  unaff_x28 = (long **)0xc;
  unaff_x26 = plStack_128;
  if (plStack_130 != (long *)0x0) {
    lVar16 = *plStack_130;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059df598) {
          puVar4 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_033bf0ac;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    param_3 = (long **)0x0;
    puVar4 = (undefined8 *)func_0x024d927c(plStack_130);
LAB_033bf0ac:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
    unaff_x26 = plStack_128;
  }
  goto joined_r0x033bebe4;
}


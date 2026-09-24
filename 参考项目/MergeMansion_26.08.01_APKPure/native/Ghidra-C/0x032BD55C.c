/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void RemoveItemsFromBoardsAndInventories(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<GameLogic.Player.Board.MergeBoard> mergeBoards, System.Collections.Generic.IEnumerable`1<GameLogic.Player.IBoardInventory> boardInventories, System.Int32[] items, System.Int32[] amounts, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033bd55c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033bfdfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033bf1f8) */
/* WARNING: Removing unreachable block (ram,0x033bdc20) */
/* WARNING: Removing unreachable block (ram,0x033beb58) */
/* WARNING: Removing unreachable block (ram,0x033bf21c) */
/* WARNING: Removing unreachable block (ram,0x033bf0c4) */
/* WARNING: Removing unreachable block (ram,0x033bf1dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033bd55c(ulong param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long **pplVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined *puVar26;
  long *plVar27;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puVar28;
  long *unaff_x23;
  undefined *puVar29;
  code *pcVar30;
  long lVar31;
  long *plVar32;
  undefined8 uVar33;
  long *unaff_x27;
  long *plVar34;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined1 auStack_110 [8];
  long *plStack_108;
  long **pplStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e4;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long **pplStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uVar14;
  
  if ((bRam0000000005e2c3ba & 1) == 0) {
    func_0x0249f8e4(&DAT_05a430c8);
    func_0x0249f8e4(&DAT_05a43b40);
    func_0x0249f8e4(&DAT_059c6860);
    func_0x0249f8e4(&DAT_05a69e98);
    func_0x0249f8e4(&DAT_059efc88);
    bRam0000000005e2c3ba = 1;
  }
  if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  puVar19 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
  lVar31 = puVar19[4];
  if (lVar31 == 0) {
    if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
      func_0x0249fa64();
      puVar19 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
    }
    uVar33 = *puVar19;
    lVar31 = func_0x0249fb80(_DAT_059c6860);
    func_0x02a9aa34(lVar31,uVar33,_DAT_05a69e98,0);
    plVar9 = (long *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x20);
    *plVar9 = lVar31;
    func_0x0249f888(plVar9,lVar31);
  }
  uVar33 = func_0x026e8e9c(param_4,lVar31,_DAT_05a430c8);
  plVar10 = (long *)func_0x026ebbf4(uVar33,_DAT_05a43b40);
  puVar26 = (undefined *)0x5e2c000;
  uVar11 = param_1;
  plVar18 = plVar10;
  plVar9 = param_5;
  plVar17 = param_6;
  plStack_90 = param_3;
  plStack_88 = param_2;
  if ((bRam0000000005e2c3bc & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cbac8);
    uVar11 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bc = 1;
  }
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    if ((int)plVar10[3] < 1) {
      return uVar11;
    }
    unaff_x29 = (long *)&DAT_059df6e0;
    unaff_x21 = &DAT_059cbac8;
    puVar26 = &DAT_059defe8;
    unaff_x22 = &DAT_059cbd30;
    unaff_x28 = (long *)0x0;
    plVar20 = (long *)(plVar10[3] & 0xffffffff);
    plVar34 = unaff_x27;
    plStack_a0 = plVar10;
    plStack_98 = param_5;
LAB_033bd790:
    plVar32 = plStack_88;
    param_5 = plStack_98;
    plVar10 = plStack_a0;
    unaff_x27 = plVar34;
    if (unaff_x28 < plVar20) {
      if (plStack_98 == (long *)0x0) goto LAB_033bdce8;
      if ((long *)(ulong)*(uint *)(plStack_98 + 3) <= unaff_x28) goto LAB_033bdcec;
      if (plStack_88 == (long *)0x0) goto LAB_033bdce8;
      lVar31 = *plStack_88;
      param_5 = (long *)plStack_a0[(long)((long)unaff_x28 + 4)];
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      unaff_x23 = (long *)(ulong)*(uint *)((long)plStack_98 + (long)unaff_x28 * 4 + 0x20);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059ca9b0) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bd81c;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      param_3 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plStack_88);
LAB_033bd81c:
      plStack_68 = (long *)(*(code *)*puVar19)(plVar32,puVar19[1]);
      pplStack_78 = &plStack_68;
      uStack_80 = 0;
      if (plStack_68 != (long *)0x0) {
        do {
          plVar10 = plStack_68;
          lVar31 = *plStack_68;
          uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
                puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033bd888;
              }
              uVar11 = uVar11 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar11 != 0);
          }
          param_3 = (long *)0x0;
          puVar19 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd888:
          uVar11 = (*(code *)*puVar19)(plVar10,puVar19[1]);
          unaff_x27 = plStack_68;
          if ((uVar11 & 1) == 0) goto LAB_033bd954;
          if (plStack_68 == (long *)0x0) {
            uStack_a8 = func_0x0249fb90();
            plVar10 = unaff_x27;
            unaff_x27 = plVar34;
            goto LAB_033bdd00;
          }
          lVar31 = *plStack_68;
          uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059cbd30) {
                puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033bd8ec;
              }
              uVar11 = uVar11 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar11 != 0);
          }
          param_3 = (long *)0x0;
          puVar19 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd8ec:
          lVar31 = (*(code *)*puVar19)(unaff_x27,puVar19[1]);
          unaff_x27 = unaff_x23;
          plVar34 = unaff_x23;
          if (0 < (int)unaff_x23) {
            do {
              if (lVar31 == 0) {
                uStack_a8 = func_0x0249fb90();
                plVar10 = (long *)0x0;
                goto LAB_033bdd00;
              }
              plVar9 = (long *)0x0;
              plVar17 = (long *)0x0;
              param_3 = param_5;
              plVar18 = param_6;
              uVar11 = func_0x037878dc(lVar31,param_1);
              iVar7 = (int)unaff_x27;
              plVar34 = unaff_x27;
              if ((uVar11 & 1) == 0) goto LAB_033bd944;
              plVar34 = (long *)(ulong)(iVar7 - 1);
              unaff_x27 = plVar34;
            } while (1 < iVar7);
            unaff_x27 = (long *)0x0;
          }
LAB_033bd944:
          unaff_x23 = unaff_x27;
          if (plStack_68 == (long *)0x0) break;
        } while( true );
      }
      plVar10 = plStack_68;
      uStack_a8 = func_0x0249fb90();
      unaff_x27 = plVar34;
      goto LAB_033bdd00;
    }
    goto LAB_033bdcec;
  }
LAB_033bdce8:
  func_0x0249fb90();
LAB_033bdcec:
  func_0x0249fb98();
  func_0x0249fb88(param_5);
  uStack_a8 = func_0x0249fb88(plVar10);
LAB_033bdd00:
  func_0x022bd79c(&uStack_80);
  func_0x0258f7ac(uStack_a8);
  auVar35 = func_0x022bd790();
  lVar31 = auVar35._8_8_;
  uStack_f0 = 0x33bdd28;
  plVar32 = (long *)0x5e2c000;
  puVar29 = &DAT_05a3c7d8;
  plVar27 = (long *)((ulong)plVar18 & 0xffffffff);
  plVar20 = param_3;
  plVar16 = plVar18;
  plVar34 = plVar9;
  plStack_e0 = plVar10;
  plStack_d8 = param_5;
  uStack_d0 = param_1;
  plStack_c8 = unaff_x23;
  puStack_c0 = unaff_x22;
  puStack_b8 = unaff_x21;
  puStack_b0 = puVar26;
  if ((bRam0000000005e2c3bb & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7d8);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bb = 1;
  }
  plStack_f8 = (long *)0x0;
  plStack_108 = (long *)CONCAT44(plStack_108._4_4_,(int)plVar18);
  plVar12 = (long *)func_0x026bf824(&plStack_108,_DAT_05a3c7d8);
  if (lVar31 != 0) {
    plVar34 = (long *)0x0;
    plVar17 = (long *)0x0;
    plVar16 = plVar9;
    uVar11 = func_0x037878dc(lVar31,auVar35._0_8_);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    plVar20 = plVar12;
    if (param_3 != (long *)0x0) {
      lVar21 = *param_3;
      uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059ca768) {
            puVar19 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bde48;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(param_3);
LAB_033bde48:
      plStack_f8 = (long *)(*(code *)*puVar19)(param_3,puVar19[1]);
      pplStack_100 = &plStack_f8;
      plVar32 = (long *)&DAT_059cbac8;
      plVar10 = (long *)&DAT_059defe8;
      plStack_108 = (long *)0x0;
      do {
        param_3 = plStack_f8;
        auVar35._8_8_ = lVar31;
        auVar35._0_8_ = &DAT_059df6e0;
        if (plStack_f8 == (long *)0x0) {
          func_0x0249fb90();
LAB_033be058:
          func_0x0249fb90();
LAB_033be05c:
          func_0x0249fb90();
          goto LAB_033be060;
        }
        lVar21 = *plStack_f8;
        uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
              puVar19 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033bdecc;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(plStack_f8);
LAB_033bdecc:
        uVar11 = (*(code *)*puVar19)(param_3,puVar19[1]);
        plVar12 = plStack_f8;
        if ((uVar11 & 1) == 0) break;
        param_3 = plStack_f8;
        if (plStack_f8 == (long *)0x0) goto LAB_033be058;
        lVar31 = *plStack_f8;
        uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059cbac8) {
              puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033bdf30;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(plStack_f8);
LAB_033bdf30:
        param_3 = (long *)(*(code *)*puVar19)(plVar12,puVar19[1]);
        uStack_e4 = (int)plVar18;
        lVar31 = func_0x026bf824(&uStack_e4,_DAT_05a3c7d8);
        if (param_3 == (long *)0x0) goto LAB_033be05c;
        lVar21 = *param_3;
        uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059defe8) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar25 + 0x1f) * 0x10 + 0x138);
              goto LAB_033bdfa8;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        puVar19 = (undefined8 *)func_0x024d927c(param_3,_DAT_059defe8,0x1f);
LAB_033bdfa8:
        plVar34 = (long *)puVar19[1];
        plVar16 = (long *)0x0;
        plVar20 = plVar9;
        uVar11 = (*(code *)*puVar19)(param_3,lVar31);
      } while ((uVar11 & 1) == 0);
      auVar35._8_8_ = lVar31;
      auVar35._0_8_ = &DAT_059df6e0;
      plVar9 = (long *)0x0;
      pplVar22 = &plStack_f8;
      goto LAB_033bdfcc;
    }
  }
LAB_033be060:
  func_0x0249fb90();
  while( true ) {
    auVar37._8_8_ = plVar10;
    auVar37._0_8_ = unaff_x27;
    auVar39 = func_0x0249fb88(plVar9);
    plVar9 = auVar39._0_8_;
    if (auVar39._8_4_ != 1) break;
    puVar19 = (undefined8 *)func_0x054ed080(plVar9);
    plVar9 = (long *)*puVar19;
    plStack_108 = plVar9;
    uVar11 = func_0x054ed090();
    pplVar22 = pplStack_100;
LAB_033bdfcc:
    plVar27 = *pplVar22;
    if (plVar27 != (long *)0x0) {
      lVar31 = *plVar27;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df598) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033be028;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plVar27);
LAB_033be028:
      uVar11 = (*(code *)*puVar19)(plVar27,puVar19[1]);
    }
    if (plVar9 == (long *)0x0) {
      return uVar11;
    }
  }
  func_0x022bd79c(&plStack_108);
  func_0x0258f7ac(plVar9);
  uVar33 = 0x33be0c4;
  auVar36 = func_0x022bd790();
  puVar6 = auStack_110;
SUB_033be0c4:
  plVar12 = auVar37._8_8_;
  plVar13 = auVar36._0_8_;
  puVar28 = auVar35._8_8_;
  *(long **)(puVar6 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x58) = uVar33;
  *(long **)(puVar6 + -0x50) = unaff_x28;
  *(undefined1 (*) [16])(puVar6 + -0x48) = auVar37;
  *(long **)(puVar6 + -0x38) = plVar32;
  *(undefined **)(puVar6 + -0x30) = puVar29;
  *(undefined1 (*) [16])(puVar6 + -0x28) = auVar35;
  *(long **)(puVar6 + -0x18) = param_3;
  *(long **)(puVar6 + -0x10) = plVar27;
  *(long **)(puVar6 + -8) = plVar9;
  puVar26 = (undefined *)0x5e2c000;
  *(long **)(puVar6 + -0x1c0) = plVar34;
  *(long **)(puVar6 + -0x1d8) = plVar20;
  *(long *)(puVar6 + -0x1d0) = auVar36._8_8_;
  plVar9 = plVar16;
  plVar10 = plVar34;
  plVar18 = plVar17;
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
    plVar10 = plVar34;
  }
  *(undefined8 *)(puVar6 + -0xc0) = 0;
  *(undefined8 *)(puVar6 + -0xb8) = 0;
  *(undefined8 *)(puVar6 + -200) = 0;
  *(undefined8 *)(puVar6 + -0x130) = 0;
  *(undefined8 *)(puVar6 + -0x128) = 0;
  *(undefined8 *)(puVar6 + -0x108) = 0;
  *(undefined8 *)(puVar6 + -0x110) = 0;
  *(undefined8 *)(puVar6 + -0xf8) = 0;
  *(undefined8 *)(puVar6 + -0x100) = 0;
  *(undefined8 *)(puVar6 + -0xe8) = 0;
  *(undefined8 *)(puVar6 + -0xf0) = 0;
  *(undefined8 *)(puVar6 + -0xd8) = 0;
  *(undefined8 *)(puVar6 + -0xe0) = 0;
  *(undefined8 *)(puVar6 + -0x118) = 0;
  *(undefined8 *)(puVar6 + -0x120) = 0;
  pcVar30 = (code *)0x0;
  if (plVar16 != (long *)0x0) {
    lVar31 = *plVar16;
    uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059c9f60) {
          puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033be2d8;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar11 != 0);
    }
    plVar20 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033be2d8:
    puVar28 = &DAT_059df6e0;
    param_3 = (long *)&DAT_059df8e8;
    puVar26 = &DAT_059cb2d8;
    uVar33 = (*(code *)*puVar19)(plVar16,puVar19[1]);
    *(undefined8 *)(puVar6 + -0xb8) = uVar33;
    *(undefined8 *)(puVar6 + -0x140) = 0;
    *(undefined1 **)(puVar6 + -0x138) = puVar6 + -0xb8;
    plVar34 = plVar32;
    do {
      do {
        pcVar30 = *(code **)(puVar6 + -0xb8);
        if (pcVar30 == (code *)0x0) {
          func_0x0249fb90();
LAB_033bf328:
          plVar32 = plVar34;
          func_0x0249fb90();
LAB_033bf32c:
          func_0x0249fb90();
LAB_033bf330:
          func_0x0249fb90();
          plVar16 = unaff_x28;
LAB_033bf334:
          func_0x0249fb88();
          goto LAB_033bf338;
        }
        lVar31 = *(long *)pcVar30;
        uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
              puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be35c;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(pcVar30);
LAB_033be35c:
        uVar11 = (*(code *)*puVar19)(pcVar30,puVar19[1]);
        auVar36._8_8_ = plVar18;
        auVar36._0_8_ = plVar20;
        if ((uVar11 & 1) == 0) goto LAB_033bf3d0;
        pcVar30 = (code *)func_0x0249fb80(_DAT_059efcb0);
        func_0x03789cdc(pcVar30,0);
        plVar34 = *(long **)(puVar6 + -0xb8);
        plVar32 = plVar34;
        if (plVar34 == (long *)0x0) goto LAB_033bf330;
        lVar31 = *plVar34;
        uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059cb2a8) {
              puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be3e4;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033be3e4:
        auVar35 = (*(code *)*puVar19)(plVar34,puVar19[1]);
        plVar32 = auVar35._8_8_;
        if (pcVar30 == (code *)0x0) goto LAB_033bf328;
        *(long *)(pcVar30 + 0x10) = auVar35._0_8_;
        func_0x0249f888(pcVar30 + 0x10,auVar35._0_8_);
        plVar34 = *(long **)(puVar6 + -0x1d0);
        if (plVar34 == (long *)0x0) goto LAB_033bf32c;
        lVar31 = *plVar34;
        uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
        *(code **)(puVar6 + -0x1b8) = pcVar30;
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059ca9b0) {
              puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be470;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(plVar34);
        plVar34 = *(long **)(puVar6 + -0x1d0);
LAB_033be470:
        plVar27 = (long *)(*(code *)*puVar19)(plVar34,puVar19[1]);
        *(long **)(puVar6 + -0xc0) = plVar27;
        *(undefined8 *)(puVar6 + -0x150) = 0;
        *(undefined1 **)(puVar6 + -0x148) = puVar6 + -0xc0;
        plVar16 = plVar32;
joined_r0x033be48c:
        plVar34 = plVar16;
        if (plVar27 == (long *)0x0) {
          func_0x0249fb90();
          auVar36._8_8_ = plVar18;
          auVar36._0_8_ = plVar20;
          goto LAB_033bf344;
        }
        lVar31 = *plVar27;
        uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
              puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be4dc;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(plVar27);
LAB_033be4dc:
        uVar11 = (*(code *)*puVar19)(plVar27,puVar19[1]);
        if ((uVar11 & 1) != 0) {
          plVar32 = *(long **)(puVar6 + -0xc0);
          if (plVar32 == (long *)0x0) {
            func_0x0249fb90();
            auVar36._8_8_ = plVar18;
            auVar36._0_8_ = plVar20;
          }
          else {
            lVar31 = *plVar32;
            uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar11 != 0) {
              piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059cbd30) {
                  puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_033be548;
                }
                uVar11 = uVar11 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar11 != 0);
            }
            puVar19 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059cbd30,0);
LAB_033be548:
            lVar31 = (*(code *)*puVar19)(plVar32,puVar19[1]);
            uVar33 = func_0x0249fb80(_DAT_059d4870);
            func_0x028b4b8c(uVar33,*(undefined8 *)(puVar6 + -0x1b8),_DAT_05a69ee8,0);
            uVar33 = func_0x0376f250(lVar31,uVar33,0);
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar19 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            unaff_x28 = (long *)puVar19[5];
            if (unaff_x28 == (long *)0x0) {
              if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
                func_0x0249fa64();
                puVar19 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
              }
              unaff_x29 = (long *)*puVar19;
              unaff_x28 = (long *)func_0x0249fb80(_DAT_059c59c0);
              func_0x02a9aa34(unaff_x28,unaff_x29,_DAT_05a69ea0,0);
              puVar19 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x28);
              *puVar19 = unaff_x28;
              func_0x0249f888(puVar19,unaff_x28);
            }
            plVar9 = _DAT_05a429f8;
            uVar33 = func_0x026e880c(uVar33,unaff_x28,*(undefined8 *)(puVar6 + -0x1c0));
            plVar32 = _DAT_05a43a18;
            plVar20 = (long *)func_0x026eb75c(uVar33,(ulong)plVar16 & 0xffffffff);
            if (plVar20 == (long *)0x0) {
              func_0x0249fb90();
              auVar36._8_8_ = plVar18;
              auVar36._0_8_ = plVar32;
            }
            else {
              lVar21 = *plVar20;
              uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar11 != 0) {
                piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == _DAT_059c9f90) {
                    puVar19 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                    goto LAB_033be6bc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar11 != 0);
              }
              plVar32 = (long *)0x0;
              puVar19 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033be6bc:
              plVar34 = (long *)(*(code *)*puVar19)(plVar20,puVar19[1]);
              *(long **)(puVar6 + -200) = plVar34;
              *(long **)(puVar6 + -0x1c8) = plVar16;
              *(undefined8 *)(puVar6 + -0x160) = 0;
              *(undefined1 **)(puVar6 + -0x158) = puVar6 + -200;
              if (plVar34 != (long *)0x0) {
                do {
                  lVar21 = *plVar34;
                  uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar11 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
                        puVar19 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        plVar20 = plVar32;
                        goto LAB_033be72c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar11 != 0);
                  }
                  plVar20 = (long *)0x0;
                  puVar19 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033be72c:
                  uVar11 = (*(code *)*puVar19)(plVar34,puVar19[1]);
                  if ((uVar11 & 1) == 0) goto LAB_033be9a8;
                  plVar32 = *(long **)(puVar6 + -200);
                  plVar34 = plVar16;
                  if (plVar32 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar36._8_8_ = plVar18;
                    auVar36._0_8_ = plVar20;
                    goto LAB_033bf344;
                  }
                  lVar21 = *plVar32;
                  uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar11 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059cb2d8) {
                        puVar19 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_033be790;
                      }
                      uVar11 = uVar11 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar11 != 0);
                  }
                  plVar20 = (long *)0x0;
                  puVar19 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033be790:
                  auVar36 = (*(code *)*puVar19)(plVar32,puVar19[1]);
                  plVar27 = auVar36._8_8_;
                  plVar32 = auVar36._0_8_;
                  if (plVar13 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar36._8_8_ = plVar18;
                    auVar36._0_8_ = plVar20;
                    goto LAB_033bf344;
                  }
                  lVar21 = *plVar13;
                  uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar11 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
                        puVar19 = (undefined8 *)(lVar21 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                        goto LAB_033be7f8;
                      }
                      uVar11 = uVar11 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059df8e8,5);
LAB_033be7f8:
                  uVar33 = (*(code *)*puVar19)(plVar13,puVar19[1]);
                  uVar15 = 0;
                  uVar11 = func_0x036ecab8(plVar27,uVar33);
                  unaff_x28 = plVar27;
                  if (((uVar11 & 1) == 0) || (iVar7 = func_0x037286b0(plVar27,0), iVar7 < 2)) {
                    if (lVar31 == 0) {
                      func_0x0249fb90();
                      auVar36._8_8_ = plVar18;
                      auVar36._0_8_ = uVar15;
                      goto LAB_033bf344;
                    }
                    plVar10 = (long *)0x1;
                    plVar18 = (long *)0x0;
                    plVar9 = plVar17;
                    func_0x037789bc(lVar31,plVar13);
                  }
                  else {
                    func_0x036f9ba0(plVar27,1,0);
                    *(undefined8 *)(puVar6 + -0x1f0) = 0;
                    plVar10 = plVar17;
                    func_0x034ba910(puVar6 + -0x120,0x17);
                    uVar33 = auVar36._8_8_;
                    lVar21 = *plVar13;
                    uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar11 != 0) {
                      piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == _DAT_059e0220) {
                          puVar19 = (undefined8 *)(lVar21 + (long)(*piVar25 + 0x17) * 0x10 + 0x138);
                          plVar9 = plVar32;
                          goto LAB_033be8e0;
                        }
                        uVar11 = uVar11 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar11 != 0);
                    }
                    uVar15 = 0x17;
                    puVar19 = (undefined8 *)func_0x024d927c(plVar13);
                    auVar36._8_8_ = uVar33;
                    auVar36._0_8_ = uVar15;
                    plVar9 = plVar32;
LAB_033be8e0:
                    plVar20 = (long *)(*(code *)*puVar19)(plVar13,puVar19[1]);
                    lVar21 = _DAT_059e0280;
                    plVar18 = auVar36._8_8_;
                    if (lVar31 == 0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    if (plVar20 == (long *)0x0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    plVar27 = *(long **)(lVar31 + 0x30);
                    func_0x054ed0d0(puVar6 + -0x1b0,puVar6 + -0x120,0x50);
                    lVar23 = *plVar20;
                    uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    if (uVar11 != 0) {
                      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == lVar21) {
                          unaff_x29 = (long *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                          goto LAB_033be96c;
                        }
                        uVar11 = uVar11 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar11 != 0);
                    }
                    unaff_x29 = (long *)func_0x024d927c(plVar20,lVar21,1);
LAB_033be96c:
                    pcVar30 = (code *)*unaff_x29;
                    func_0x054ed0d0(puVar6 + -0xb0,puVar6 + -0x1b0,0x50);
                    plVar9 = (long *)unaff_x29[1];
                    plVar32 = (long *)(puVar6 + -0xb0);
                    (*pcVar30)(plVar20,plVar27);
                  }
                  plVar34 = *(long **)(puVar6 + -200);
                  plVar16 = (long *)(ulong)((int)plVar16 - 1);
                  unaff_x28 = plVar27;
                  if (plVar34 == (long *)0x0) goto LAB_033be9a0;
                } while( true );
              }
              plVar16 = (long *)(*(ulong *)(puVar6 + -0x1c8) & 0xffffffff);
LAB_033be9a0:
              func_0x0249fb90();
              auVar36._8_8_ = plVar18;
              auVar36._0_8_ = plVar32;
              plVar34 = plVar16;
            }
          }
          goto LAB_033bf344;
        }
        plVar32 = (long *)0xb;
        plVar12 = (long *)**(undefined8 **)(puVar6 + -0x148);
        if (plVar12 != (long *)0x0) {
          lVar31 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059df598) {
                puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033beb3c;
              }
              uVar11 = uVar11 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar11 != 0);
          }
          plVar20 = (long *)0x0;
          puVar19 = (undefined8 *)func_0x024d927c(plVar12);
LAB_033beb3c:
          (*(code *)*puVar19)(plVar12,puVar19[1]);
        }
        if (*(long *)(puVar6 + -0x150) != 0) goto LAB_033bf334;
        plVar34 = plVar32;
        unaff_x28 = plVar16;
      } while ((int)plVar16 < 1);
      if (*(long **)(puVar6 + -0x1d8) == (long *)0x0) goto LAB_033bf33c;
      lVar31 = **(long **)(puVar6 + -0x1d8);
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      pcVar30 = (code *)&DAT_059cbac8;
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059ca768) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bebc8;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c();
LAB_033bebc8:
      plVar12 = (long *)(*(code *)*puVar19)(*(undefined8 *)(puVar6 + -0x1d8),puVar19[1]);
      *(long **)(puVar6 + -0x128) = plVar12;
      *(undefined8 *)(puVar6 + -0x150) = 0;
      *(undefined1 **)(puVar6 + -0x148) = puVar6 + -0x128;
joined_r0x033bebe4:
      plVar32 = plVar16;
      plVar34 = plVar32;
      if (plVar12 == (long *)0x0) {
        func_0x0249fb90();
        auVar36._8_8_ = plVar18;
        auVar36._0_8_ = plVar20;
        goto LAB_033bf344;
      }
      lVar31 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bec34;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plVar12);
LAB_033bec34:
      uVar11 = (*(code *)*puVar19)(plVar12,puVar19[1]);
      if ((uVar11 & 1) != 0) {
        plVar16 = *(long **)(puVar6 + -0x128);
        if (plVar16 == (long *)0x0) {
          func_0x0249fb90();
          auVar36._8_8_ = plVar18;
          auVar36._0_8_ = plVar20;
        }
        else {
          lVar31 = *plVar16;
          uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059cbac8) {
                puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033bec98;
              }
              uVar11 = uVar11 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar11 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059cbac8,0);
LAB_033bec98:
          plVar27 = (long *)(*(code *)*puVar19)(plVar16,puVar19[1]);
          uVar33 = func_0x0249fb80(_DAT_059d4870);
          func_0x028b4b8c(uVar33,*(undefined8 *)(puVar6 + -0x1b8),_DAT_05a69ee8,0);
          uVar33 = func_0x034bc5a4(plVar27,uVar33,0);
          if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puVar19 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
          unaff_x28 = (long *)puVar19[6];
          if (unaff_x28 == (long *)0x0) {
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
              puVar19 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            }
            unaff_x29 = (long *)*puVar19;
            unaff_x28 = (long *)func_0x0249fb80(_DAT_059c6b58);
            func_0x02a9aa34(unaff_x28,unaff_x29,_DAT_05a69ea8,0);
            puVar19 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x30);
            *puVar19 = unaff_x28;
            func_0x0249f888(puVar19,unaff_x28);
          }
          plVar9 = _DAT_05a42a10;
          uVar33 = func_0x026e880c(uVar33,unaff_x28,*(undefined8 *)(puVar6 + -0x1c0));
          plVar20 = _DAT_05a43a78;
          plVar16 = (long *)func_0x026eb75c(uVar33,(ulong)plVar32 & 0xffffffff);
          if (plVar16 == (long *)0x0) {
            func_0x0249fb90();
            auVar36._8_8_ = plVar18;
            auVar36._0_8_ = plVar20;
          }
          else {
            lVar31 = *plVar16;
            uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar11 != 0) {
              piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059ca9d0) {
                  puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_033bee0c;
                }
                uVar11 = uVar11 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar11 != 0);
            }
            plVar20 = (long *)0x0;
            puVar19 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033bee0c:
            plVar34 = (long *)(*(code *)*puVar19)(plVar16,puVar19[1]);
            *(long **)(puVar6 + -0x130) = plVar34;
            *(undefined8 *)(puVar6 + -0x160) = 0;
            *(undefined1 **)(puVar6 + -0x158) = puVar6 + -0x130;
            plVar16 = plVar32;
            unaff_x29 = plVar32;
            if (plVar34 != (long *)0x0) {
              do {
                lVar31 = *plVar34;
                uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
                if (uVar11 != 0) {
                  piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
                      puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_033bee7c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar11 != 0);
                }
                plVar20 = (long *)0x0;
                puVar19 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033bee7c:
                uVar11 = (*(code *)*puVar19)(plVar34,puVar19[1]);
                if ((uVar11 & 1) == 0) goto LAB_033bf044;
                plVar32 = *(long **)(puVar6 + -0x130);
                plVar34 = plVar16;
                if (plVar32 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar36._8_8_ = plVar18;
                  auVar36._0_8_ = plVar20;
                  goto LAB_033bf344;
                }
                lVar31 = *plVar32;
                uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
                if (uVar11 != 0) {
                  piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059cbd50) {
                      puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_033beee8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar11 != 0);
                }
                plVar20 = (long *)0x0;
                puVar19 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033beee8:
                uVar33 = (*(code *)*puVar19)(plVar32,puVar19[1]);
                if (plVar13 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar36._8_8_ = plVar18;
                  auVar36._0_8_ = plVar20;
                  goto LAB_033bf344;
                }
                lVar31 = *plVar13;
                uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
                if (uVar11 != 0) {
                  piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
                      puVar19 = (undefined8 *)(lVar31 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                      goto LAB_033bef4c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar11 != 0);
                }
                puVar19 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059df8e8,5);
LAB_033bef4c:
                uVar15 = (*(code *)*puVar19)(plVar13,puVar19[1]);
                uVar11 = func_0x036ecab8(uVar33,uVar15,0);
                if (((uVar11 & 1) == 0) || (iVar7 = func_0x037286b0(uVar33,0), iVar7 < 2)) {
                  unaff_x28 = (long *)func_0x0249fb80(_DAT_059d4870);
                  plVar9 = (long *)0x0;
                  uVar15 = _DAT_05a69ee0;
                  func_0x028b4b8c(unaff_x28,*(undefined8 *)(puVar6 + -0x1b8));
                  if (plVar27 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar36._8_8_ = plVar18;
                    auVar36._0_8_ = uVar15;
                    goto LAB_033bf344;
                  }
                  lVar31 = *plVar27;
                  uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
                  if (uVar11 != 0) {
                    piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059defe8) {
                        puVar19 = (undefined8 *)(lVar31 + (long)(*piVar25 + 0x1d) * 0x10 + 0x138);
                        goto LAB_033bf01c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x024d927c(plVar27,_DAT_059defe8,0x1d);
LAB_033bf01c:
                  plVar9 = (long *)puVar19[1];
                  plVar20 = unaff_x28;
                  (*(code *)*puVar19)(plVar27,uVar33);
                }
                else {
                  plVar20 = (long *)0x0;
                  func_0x036f9ba0(uVar33,1);
                }
                plVar34 = *(long **)(puVar6 + -0x130);
                plVar16 = (long *)(ulong)((int)plVar16 - 1);
                if (plVar34 == (long *)0x0) goto LAB_033bf03c;
              } while( true );
            }
            plVar16 = (long *)((ulong)plVar32 & 0xffffffff);
LAB_033bf03c:
            func_0x0249fb90();
            auVar36._8_8_ = plVar18;
            auVar36._0_8_ = plVar20;
            plVar34 = plVar16;
          }
        }
        goto LAB_033bf344;
      }
      unaff_x28 = (long *)0x2;
      plVar16 = (long *)0x2;
      pcVar30 = (code *)**(undefined8 **)(puVar6 + -0x148);
      if (pcVar30 != (code *)0x0) {
        lVar31 = *(long *)pcVar30;
        uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df598) {
              puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033bf1bc;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar11 != 0);
        }
        plVar20 = (long *)0x0;
        puVar19 = (undefined8 *)func_0x024d927c(pcVar30);
LAB_033bf1bc:
        (*(code *)*puVar19)(pcVar30,puVar19[1]);
      }
    } while (*(long *)(puVar6 + -0x150) == 0);
LAB_033bf338:
    func_0x0249fb88();
LAB_033bf33c:
    func_0x0249fb90();
    unaff_x28 = plVar16;
  }
  func_0x0249fb90();
  auVar36._8_8_ = plVar18;
  auVar36._0_8_ = plVar20;
  plVar34 = plVar32;
LAB_033bf344:
  auVar37 = func_0x022bd790();
  plVar12 = auVar37._8_8_;
  func_0x022bd79c(puVar6 + -0x150);
  if (auVar37._8_4_ == 1) {
    puVar19 = (undefined8 *)func_0x054ed080(auVar37._0_8_);
    *(undefined8 *)(puVar6 + -0x140) = *puVar19;
    func_0x054ed090();
LAB_033bf3d0:
    uVar33 = auVar36._8_8_;
    plVar17 = (long *)**(undefined8 **)(puVar6 + -0x138);
    if (plVar17 != (long *)0x0) {
      lVar31 = *plVar17;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df598) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bf430;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      uVar15 = 0;
      puVar19 = (undefined8 *)func_0x024d927c(plVar17);
      auVar36._8_8_ = uVar33;
      auVar36._0_8_ = uVar15;
LAB_033bf430:
      (*(code *)*puVar19)(plVar17,puVar19[1]);
    }
    if (*(long *)(puVar6 + -0x140) == 0) {
      return 0;
    }
    uVar33 = func_0x0249fb88();
    auVar37._8_8_ = plVar12;
    auVar37._0_8_ = uVar33;
  }
  func_0x022bd79c(puVar6 + -0x140);
  func_0x0258f7ac(auVar37._0_8_);
  auVar35 = func_0x022bd790();
  plVar32 = auVar36._8_8_;
  plVar20 = auVar36._0_8_;
  lVar31 = auVar35._8_8_;
  plVar12 = auVar35._0_8_;
  *(long **)(puVar6 + -0x250) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x248) = 0x33bf480;
  *(long **)(puVar6 + -0x240) = unaff_x28;
  *(undefined1 (*) [16])(puVar6 + -0x238) = auVar37;
  *(long **)(puVar6 + -0x228) = plVar34;
  *(code **)(puVar6 + -0x220) = pcVar30;
  *(long **)(puVar6 + -0x218) = plVar13;
  *(undefined **)(puVar6 + -0x210) = puVar28;
  *(long **)(puVar6 + -0x208) = param_3;
  *(undefined **)(puVar6 + -0x200) = puVar26;
  *(long **)(puVar6 + -0x1f8) = plVar17;
  lVar21 = 0x5e2c000;
  puVar26 = &DAT_059de230;
  plVar18 = plVar9;
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
  plVar17 = (long *)func_0x0249fb80(_DAT_059de230);
  plVar27 = (long *)0x0;
  func_0x034a1470(plVar17,lVar31);
  if (lVar31 != 0) {
    unaff_x28 = (long *)&DAT_059e2c00;
    puVar26 = (undefined *)func_0x028a379c(lVar31,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    plVar34 = (long *)func_0x03530158(puVar26,0);
    if (plVar12 != (long *)0x0) {
      plVar10 = (long *)0x1;
      plVar32 = (long *)0x0;
      plVar27 = plVar20;
      func_0x037789bc(plVar12,lVar31);
      plVar18 = plVar34;
      if (plVar9 != (long *)0x0) {
        lVar21 = func_0x036d5f70(plVar9,0);
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x20);
        }
        uVar33 = func_0x03659ee0(lVar31,0);
        plVar27 = (long *)0x0;
        plVar16 = (long *)func_0x036d3908(plVar9,uVar33);
        plVar18 = plVar34;
        if (plVar16 != (long *)0x0) {
          lVar23 = *plVar16;
          uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059dfbc0) {
                puVar19 = (undefined8 *)(lVar23 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar11 = uVar11 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar11 != 0);
          }
          plVar27 = (long *)0x6;
          puVar19 = (undefined8 *)func_0x024d927c(plVar16);
          plVar18 = plVar34;
LAB_033bf694:
          plVar34 = (long *)(*(code *)*puVar19)(plVar16,puVar19[1]);
          lVar23 = func_0x036d5f70(plVar9,0);
          if (lVar23 == 0) {
            uVar33 = 0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = plVar34;
            auVar37 = auVar4 << 0x40;
          }
          else {
            uVar33 = *(undefined8 *)(lVar23 + 0x28);
            auVar37._8_8_ = plVar34;
            auVar37._0_8_ = uVar33;
          }
          if (plVar34 != (long *)0x0) {
            lVar23 = *plVar34;
            uVar11 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar11 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059df030) {
                  puVar19 = (undefined8 *)(lVar23 + (long)(*piVar25 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar11 = uVar11 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar11 != 0);
            }
            puVar19 = (undefined8 *)func_0x024d927c(plVar34,_DAT_059df030,10);
LAB_033bf720:
            plVar18 = (long *)(*(code *)*puVar19)(plVar34,lVar31,uVar33,puVar19[1]);
            auVar3._8_8_ = plVar18;
            auVar3._0_8_ = uVar33;
            auVar2._8_8_ = plVar18;
            auVar2._0_8_ = uVar33;
            auVar1._8_8_ = plVar18;
            auVar1._0_8_ = uVar33;
            auVar37._8_8_ = plVar18;
            auVar37._0_8_ = uVar33;
            if (plVar18 != (long *)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              plVar32 = (long *)func_0x03530158(puVar26,0);
              *(undefined8 *)(puVar6 + -0x350) = 0;
              plVar27 = plVar20;
              plVar10 = plVar17;
              lVar23 = func_0x03774f00(plVar12,lVar31);
              if ((lVar23 == 0) || (auVar37 = auVar1, *(long *)(lVar23 + 0x10) == 0))
              goto LAB_033bfa8c;
              plVar34 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              plVar17 = (long *)(ulong)*(uint *)(plVar34[1] + 0xfc);
              uVar15 = func_0x0249f90c(*(long *)(lVar23 + 0x10),*(undefined8 *)(*plVar34 + 0x80));
              plVar27 = plVar17;
              func_0x054ed0d0(puVar6 + -0x2a0,uVar15);
              auVar37 = auVar2;
              if (*(long *)(lVar31 + 0x220) == 0) goto LAB_033bfa8c;
              plVar17 = (long *)(ulong)*(uint *)(puVar6 + -0x2a0);
              plVar27 = (long *)0x0;
              uVar11 = func_0x0387e780(*(long *)(lVar31 + 0x220),plVar17);
              if ((uVar11 & 1) == 0) {
                auVar37 = auVar3;
                if (*(long *)(lVar31 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(lVar31 + 0x220),lVar31,plVar12,plVar17,0);
              }
            }
            plVar34 = *(long **)(lVar31 + 0x1e0);
            lVar23 = plVar12[6];
            auVar37._8_8_ = lVar23;
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar10 = (long *)func_0x03530158(puVar26,0);
            plVar32 = (long *)0x0;
            *(undefined8 *)(puVar6 + -0x350) = 0;
            *(undefined8 *)(puVar6 + -0x2d8) = 0;
            *(undefined8 *)(puVar6 + -0x2e0) = 0;
            *(undefined8 *)(puVar6 + -0x2c8) = 0;
            *(undefined8 *)(puVar6 + -0x2d0) = 0;
            *(undefined8 *)(puVar6 + -0x2b8) = 0;
            *(undefined8 *)(puVar6 + -0x2c0) = 0;
            *(undefined8 *)(puVar6 + -0x2a8) = 0;
            *(undefined8 *)(puVar6 + -0x2b0) = 0;
            *(undefined8 *)(puVar6 + -0x2e8) = 0;
            *(undefined8 *)(puVar6 + -0x2f0) = 0;
            plVar27 = plVar20;
            plVar18 = plVar20;
            func_0x034ba874(puVar6 + -0x2f0,6);
            lVar5 = _DAT_059e0280;
            plVar17 = (long *)0x0;
            if (plVar34 != (long *)0x0) {
              func_0x054ed0d0(puVar6 + -0x340,puVar6 + -0x2f0,0x50);
              lVar24 = *plVar34;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar5) {
                    puVar19 = (undefined8 *)(lVar24 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar11 != 0);
              }
              puVar19 = (undefined8 *)func_0x024d927c(plVar34,lVar5,1);
LAB_033bf8d8:
              pcVar30 = (code *)*puVar19;
              func_0x054ed0d0(puVar6 + -0x2a0,puVar6 + -0x340,0x50);
              (*pcVar30)(plVar34,lVar23,puVar6 + -0x2a0,puVar19[1]);
              plVar20 = (long *)func_0x036f10d8(plVar9,lVar31,0);
              lVar23 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar23,_DAT_059feeb8);
              if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) < 1)) {
LAB_033bf9f8:
                uVar33 = func_0x03659ee0(lVar31,0);
                uVar33 = func_0x036d62d4(plVar9,uVar33,0);
                lVar21 = plVar12[6];
                uVar15 = func_0x0249fb80(_DAT_059d8a28);
                *(undefined8 *)(puVar6 + -0x350) = 0;
                func_0x0385d0a8(uVar15,uVar33,plVar20,lVar21,lVar23,1,0,0);
                uVar11 = func_0x0366bae8(lVar31,uVar15,0,0);
                return uVar11;
              }
              plVar17 = (long *)0x0;
              auVar37._8_8_ = &DAT_05a17ad0;
              auVar37._0_8_ = &DAT_059d9e60;
              param_3 = (long *)0xffffffffffffffff;
              do {
                plVar27 = (long *)(puVar6 + -0x2a0);
                plVar18 = _DAT_05a17ad0;
                func_0x0282f3c4(lVar21,plVar17);
                unaff_x28 = *(long **)(puVar6 + -0x2a0);
                if (unaff_x28 != (long *)0x0) {
                  if ((*(byte *)(_DAT_059d9e60 + 0x130) <= *(byte *)(*unaff_x28 + 0x130)) &&
                     (*(long *)(*(long *)(*unaff_x28 + 200) +
                                (ulong)*(byte *)(_DAT_059d9e60 + 0x130) * 8 + -8) == _DAT_059d9e60))
                  {
                    *(int *)(puVar6 + -0x290) = (int)unaff_x28[2];
                    *(undefined8 *)(puVar6 + -0x2a0) = _DAT_059dce58;
                    *(undefined8 *)(puVar6 + -0x298) = 0xffffffffffffffff;
                    uVar33 = func_0x045e0acc(puVar6 + -0x2a0,0);
                    puVar26 = (undefined *)0x0;
                    if (lVar23 == 0) break;
                    *(undefined4 *)(puVar6 + -0x2f0) = *(undefined4 *)((long)unaff_x28 + 0x14);
                    func_0x02a3c128(lVar23,uVar33,puVar6 + -0x2f0,_DAT_059feee0);
                  }
                }
                uVar8 = (int)plVar17 + 1;
                plVar17 = (long *)(ulong)uVar8;
                if (*(int *)(lVar21 + 0x18) <= (int)uVar8) goto LAB_033bf9f8;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_033bfa8c:
  auVar38 = func_0x0249fb90();
  uVar14 = auVar38._0_8_;
  *(undefined8 *)(puVar6 + -0x390) = 0x33bfa90;
  *(long **)(puVar6 + -0x388) = plVar17;
  *(undefined **)(puVar6 + -0x380) = puVar26;
  *(long **)(puVar6 + -0x378) = plVar20;
  *(long *)(puVar6 + -0x370) = lVar21;
  *(long **)(puVar6 + -0x368) = param_3;
  *(long **)(puVar6 + -0x360) = plVar9;
  *(long *)(puVar6 + -0x358) = lVar31;
  uVar11 = uVar14;
  plVar20 = plVar27;
  plVar16 = plVar18;
  plVar34 = plVar10;
  plVar17 = plVar32;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    uVar11 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  *(undefined8 *)(puVar6 + -0x398) = 0;
  if (((ulong)plVar32 & 1) == 0) {
    uVar33 = 0;
    if (uVar14 == 0) goto LAB_033bfd48;
    uVar11 = 0;
    if (*(long *)(uVar14 + 0x2e8) != 0) {
      plVar34 = (long *)0x0;
      plVar20 = plVar27;
      plVar16 = plVar18;
      uVar11 = func_0x034ccd58(*(long *)(uVar14 + 0x2e8),uVar14);
    }
  }
  if (plVar10 == (long *)0x0) {
    return uVar11;
  }
  lVar31 = *plVar10;
  uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar11 != 0) {
    piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == _DAT_059ca9b8) {
        puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_033bfb80;
      }
      uVar11 = uVar11 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar11 != 0);
  }
  plVar20 = (long *)0x0;
  puVar19 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bfb80:
  plVar9 = (long *)(*(code *)*puVar19)(plVar10,puVar19[1]);
  *(long **)(puVar6 + -0x398) = plVar9;
  *(undefined8 *)(puVar6 + -0x3a8) = 0;
  *(undefined1 **)(puVar6 + -0x3a0) = puVar6 + -0x398;
  if (plVar9 != (long *)0x0) {
    plVar18 = (long *)&DAT_059df6e0;
    plVar27 = (long *)&DAT_059cbd38;
    plVar10 = plVar9;
    do {
      lVar31 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bfbfc;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bfbfc:
      uVar11 = (*(code *)*puVar19)(plVar10,puVar19[1]);
      if ((uVar11 & 1) == 0) goto LAB_033bfcac;
      plVar10 = *(long **)(puVar6 + -0x398);
      if (plVar10 == (long *)0x0) {
        func_0x0249fb90();
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      lVar31 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059cbd38) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bfc60;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bfc60:
      (*(code *)*puVar19)(puVar6 + -0x3f8,plVar10,puVar19[1]);
      if (*(int *)(puVar6 + -0x3f8) == 3) {
        if (auVar38._8_8_ == 0) goto LAB_033bfd3c;
        plVar20 = (long *)0x0;
        lVar31 = func_0x0376e450(auVar38._8_8_,*(undefined8 *)(puVar6 + -0x3ec));
        if (lVar31 != 0) {
          plVar20 = (long *)0x0;
          func_0x036efea8(lVar31,uVar14);
        }
      }
      plVar10 = *(long **)(puVar6 + -0x398);
    } while (plVar10 != (long *)0x0);
  }
  uVar11 = func_0x0249fb90();
LAB_033bfcac:
  lVar31 = 0;
  puVar19 = (undefined8 *)(puVar6 + -0x398);
  do {
    plVar9 = (long *)*puVar19;
    auVar38._8_8_ = lVar31;
    auVar38._0_8_ = plVar9;
    if (plVar9 != (long *)0x0) {
      lVar21 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df598) {
            puVar19 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      plVar20 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plVar9);
LAB_033bfd10:
      uVar11 = (*(code *)*puVar19)(plVar9,puVar19[1]);
    }
    if (lVar31 == 0) {
      return uVar11;
    }
LAB_033bfd40:
    uVar33 = auVar38._0_8_;
    func_0x0249fb88(auVar38._8_8_);
LAB_033bfd48:
    auVar39 = func_0x0249fb90();
    uVar15 = auVar39._0_8_;
    if (auVar39._8_4_ != 1) goto LAB_033bfd90;
    plVar9 = (long *)func_0x054ed080(uVar15);
    lVar31 = *plVar9;
    *(long *)(puVar6 + -0x3a8) = lVar31;
    uVar11 = func_0x054ed090();
    puVar19 = *(undefined8 **)(puVar6 + -0x3a0);
  } while( true );
LAB_033bd954:
  if (plStack_68 != (long *)0x0) {
    lVar31 = *plStack_68;
    uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bd9b8;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar11 != 0);
    }
    param_3 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd9b8:
    (*(code *)*puVar19)(unaff_x27,puVar19[1]);
  }
  plVar34 = plStack_90;
  plVar10 = (long *)0x0;
  if (plStack_90 == (long *)0x0) goto LAB_033bdce8;
  lVar31 = *plStack_90;
  uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar11 != 0) {
    piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == _DAT_059ca768) {
        puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_033bda24;
      }
      uVar11 = uVar11 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar11 != 0);
  }
  param_3 = (long *)0x0;
  puVar19 = (undefined8 *)func_0x024d927c(plStack_90);
LAB_033bda24:
  plStack_70 = (long *)(*(code *)*puVar19)(plVar34,puVar19[1]);
  pplStack_78 = &plStack_70;
  uStack_80 = 0;
  if (plStack_70 != (long *)0x0) {
    do {
      plVar10 = plStack_70;
      lVar31 = *plStack_70;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bda90;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      param_3 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plStack_70);
LAB_033bda90:
      uVar11 = (*(code *)*puVar19)(plVar10,puVar19[1]);
      plVar10 = plStack_70;
      if ((uVar11 & 1) == 0) goto LAB_033bdb9c;
      if (plStack_70 == (long *)0x0) {
        uStack_a8 = func_0x0249fb90();
        goto LAB_033bdd00;
      }
      lVar31 = *plStack_70;
      uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059cbac8) {
            puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bdaf4;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      param_3 = (long *)0x0;
      puVar19 = (undefined8 *)func_0x024d927c(plStack_70);
LAB_033bdaf4:
      plVar10 = (long *)(*(code *)*puVar19)(plVar10,puVar19[1]);
      if (0 < (int)unaff_x23) {
        if (plVar10 == (long *)0x0) {
          uStack_a8 = func_0x0249fb90();
          plVar10 = (long *)0x0;
          goto LAB_033bdd00;
        }
        do {
          lVar31 = *plVar10;
          uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059defe8) {
                puVar19 = (undefined8 *)(lVar31 + (long)(*piVar25 + 0x1f) * 0x10 + 0x138);
                goto LAB_033bdb60;
              }
              uVar11 = uVar11 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar11 != 0);
          }
          puVar19 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059defe8,0x1f);
LAB_033bdb60:
          plVar9 = (long *)puVar19[1];
          plVar18 = (long *)0x0;
          param_3 = param_6;
          uVar11 = (*(code *)*puVar19)(plVar10,param_5);
          if ((uVar11 & 1) == 0) goto LAB_033bdb8c;
          iVar7 = (int)unaff_x23;
          unaff_x23 = (long *)(ulong)(iVar7 - 1);
        } while (1 < iVar7);
        unaff_x23 = (long *)0x0;
      }
LAB_033bdb8c:
      if (plStack_70 == (long *)0x0) break;
    } while( true );
  }
  plVar10 = plStack_70;
  uStack_a8 = func_0x0249fb90();
  goto LAB_033bdd00;
LAB_033bdb9c:
  unaff_x23 = (long *)0xd;
  if (plStack_70 != (long *)0x0) {
    lVar31 = *plStack_70;
    uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bdc04;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar11 != 0);
    }
    param_3 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x024d927c(plStack_70);
LAB_033bdc04:
    uVar11 = (*(code *)*puVar19)(plVar10,puVar19[1]);
  }
  plVar20 = (long *)(ulong)*(uint *)(plStack_a0 + 3);
  unaff_x28 = (long *)((long)unaff_x28 + 1);
  plVar34 = unaff_x27;
  if ((long)(int)*(uint *)(plStack_a0 + 3) <= (long)unaff_x28) {
    return uVar11;
  }
  goto LAB_033bd790;
LAB_033be9a8:
  plVar34 = *(long **)(puVar6 + -200);
  if (plVar34 != (long *)0x0) {
    lVar31 = *plVar34;
    uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bea0c;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar11 != 0);
    }
    plVar20 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033bea0c:
    (*(code *)*puVar19)(plVar34,puVar19[1]);
  }
  plVar27 = *(long **)(puVar6 + -0xc0);
  goto joined_r0x033be48c;
LAB_033bf044:
  unaff_x28 = (long *)0xc;
  plVar34 = *(long **)(puVar6 + -0x130);
  if (plVar34 != (long *)0x0) {
    lVar31 = *plVar34;
    uVar11 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar19 = (undefined8 *)(lVar31 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bf0ac;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar11 != 0);
    }
    plVar20 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x024d927c(plVar34);
LAB_033bf0ac:
    (*(code *)*puVar19)(plVar34,puVar19[1]);
  }
  plVar12 = *(long **)(puVar6 + -0x128);
  goto joined_r0x033bebe4;
LAB_033bfd90:
  func_0x022bd79c(puVar6 + -0x3a8);
  func_0x0258f7ac(uVar15);
  auVar36 = func_0x022bd790();
  auVar35._8_8_ = plVar20;
  auVar35._0_8_ = auVar36._8_8_;
  puVar29 = auVar36._0_8_;
  *(undefined8 *)(puVar6 + -0x440) = 0x33bfda4;
  *(undefined8 *)(puVar6 + -0x438) = 0x5e2c000;
  *(ulong *)(puVar6 + -0x430) = (ulong)plVar32 & 0xffffffff;
  *(long **)(puVar6 + -0x428) = plVar27;
  *(long **)(puVar6 + -0x420) = plVar18;
  *(long **)(puVar6 + -0x418) = plVar10;
  *(undefined8 *)(puVar6 + -0x410) = uVar33;
  *(undefined8 *)(puVar6 + -0x408) = uVar15;
  puVar6[-0x444] = 0;
  uVar8 = func_0x033bb508();
  plVar32 = (long *)(ulong)uVar8;
  if ((uVar8 & 1) == 0) {
    return (ulong)(uVar8 & 1);
  }
  uVar33 = 0x33bfe00;
  puVar6 = puVar6 + -0x450;
  plVar9 = plVar17;
  plVar27 = plVar34;
  param_3 = plVar16;
  unaff_x29 = plVar12;
  goto SUB_033be0c4;
}


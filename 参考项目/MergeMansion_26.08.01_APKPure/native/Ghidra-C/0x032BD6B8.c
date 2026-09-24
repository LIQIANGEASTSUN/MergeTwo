/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void RemoveItemsFromBoardsAndInventories(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<GameLogic.Player.Board.MergeBoard> mergeBoards, System.Collections.Generic.IEnumerable`1<GameLogic.Player.IBoardInventory> boardInventories, System.Collections.Generic.IEnumerable`1<System.Int32>[] items, System.Int32[] amounts, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033bd6b8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033bfdfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033bf1f8) */
/* WARNING: Removing unreachable block (ram,0x033bdc20) */
/* WARNING: Removing unreachable block (ram,0x033beb58) */
/* WARNING: Removing unreachable block (ram,0x033bf21c) */
/* WARNING: Removing unreachable block (ram,0x033bf0c4) */
/* WARNING: Removing unreachable block (ram,0x033bf1dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033bd6b8(ulong param_1,long *param_2,long *param_3,long *param_4,long *param_5,
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
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
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
  long *plVar31;
  long *unaff_x27;
  long *plVar32;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
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
  ulong uVar12;
  
  puVar26 = (undefined *)0x5e2c000;
  uVar9 = param_1;
  plVar17 = param_4;
  plVar16 = param_5;
  plVar18 = param_6;
  plStack_90 = param_3;
  plStack_88 = param_2;
  if ((bRam0000000005e2c3bc & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cbac8);
    uVar9 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bc = 1;
  }
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  if (param_4 != (long *)0x0) {
    if ((int)param_4[3] < 1) {
      return uVar9;
    }
    unaff_x29 = (long *)&DAT_059df6e0;
    unaff_x21 = &DAT_059cbac8;
    puVar26 = &DAT_059defe8;
    unaff_x22 = &DAT_059cbd30;
    unaff_x28 = (long *)0x0;
    plVar19 = (long *)(param_4[3] & 0xffffffff);
    plVar32 = unaff_x27;
    plStack_a0 = param_4;
    plStack_98 = param_5;
LAB_033bd790:
    plVar31 = plStack_88;
    param_5 = plStack_98;
    param_4 = plStack_a0;
    unaff_x27 = plVar32;
    if (unaff_x28 < plVar19) {
      if (plStack_98 == (long *)0x0) goto LAB_033bdce8;
      if ((long *)(ulong)*(uint *)(plStack_98 + 3) <= unaff_x28) goto LAB_033bdcec;
      if (plStack_88 == (long *)0x0) goto LAB_033bdce8;
      lVar20 = *plStack_88;
      param_5 = (long *)plStack_a0[(long)((long)unaff_x28 + 4)];
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      unaff_x23 = (long *)(ulong)*(uint *)((long)plStack_98 + (long)unaff_x28 * 4 + 0x20);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059ca9b0) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bd81c;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      param_3 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plStack_88);
LAB_033bd81c:
      plStack_68 = (long *)(*(code *)*puVar10)(plVar31,puVar10[1]);
      pplStack_78 = &plStack_68;
      uStack_80 = 0;
      if (plStack_68 != (long *)0x0) {
        do {
          plVar19 = plStack_68;
          lVar20 = *plStack_68;
          uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar9 != 0) {
            piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
                puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033bd888;
              }
              uVar9 = uVar9 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar9 != 0);
          }
          param_3 = (long *)0x0;
          puVar10 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd888:
          uVar9 = (*(code *)*puVar10)(plVar19,puVar10[1]);
          unaff_x27 = plStack_68;
          if ((uVar9 & 1) == 0) goto LAB_033bd954;
          if (plStack_68 == (long *)0x0) {
            uStack_a8 = func_0x0249fb90();
            param_4 = unaff_x27;
            unaff_x27 = plVar32;
            goto LAB_033bdd00;
          }
          lVar20 = *plStack_68;
          uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar9 != 0) {
            piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059cbd30) {
                puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033bd8ec;
              }
              uVar9 = uVar9 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar9 != 0);
          }
          param_3 = (long *)0x0;
          puVar10 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd8ec:
          lVar20 = (*(code *)*puVar10)(unaff_x27,puVar10[1]);
          unaff_x27 = unaff_x23;
          plVar32 = unaff_x23;
          if (0 < (int)unaff_x23) {
            do {
              if (lVar20 == 0) {
                uStack_a8 = func_0x0249fb90();
                param_4 = (long *)0x0;
                goto LAB_033bdd00;
              }
              plVar16 = (long *)0x0;
              plVar18 = (long *)0x0;
              param_3 = param_5;
              plVar17 = param_6;
              uVar9 = func_0x037878dc(lVar20,param_1);
              iVar7 = (int)unaff_x27;
              plVar32 = unaff_x27;
              if ((uVar9 & 1) == 0) goto LAB_033bd944;
              plVar32 = (long *)(ulong)(iVar7 - 1);
              unaff_x27 = plVar32;
            } while (1 < iVar7);
            unaff_x27 = (long *)0x0;
          }
LAB_033bd944:
          unaff_x23 = unaff_x27;
          if (plStack_68 == (long *)0x0) break;
        } while( true );
      }
      param_4 = plStack_68;
      uStack_a8 = func_0x0249fb90();
      unaff_x27 = plVar32;
      goto LAB_033bdd00;
    }
    goto LAB_033bdcec;
  }
LAB_033bdce8:
  func_0x0249fb90();
LAB_033bdcec:
  func_0x0249fb98();
  func_0x0249fb88(param_5);
  uStack_a8 = func_0x0249fb88(param_4);
LAB_033bdd00:
  func_0x022bd79c(&uStack_80);
  func_0x0258f7ac(uStack_a8);
  auVar34 = func_0x022bd790();
  lVar20 = auVar34._8_8_;
  uStack_f0 = 0x33bdd28;
  plVar31 = (long *)0x5e2c000;
  puVar29 = &DAT_05a3c7d8;
  plVar27 = (long *)((ulong)plVar17 & 0xffffffff);
  plVar19 = param_3;
  plVar15 = plVar17;
  plVar32 = plVar16;
  plStack_e0 = param_4;
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
  plStack_108 = (long *)CONCAT44(plStack_108._4_4_,(int)plVar17);
  plVar11 = (long *)func_0x026bf824(&plStack_108,_DAT_05a3c7d8);
  if (lVar20 != 0) {
    plVar32 = (long *)0x0;
    plVar18 = (long *)0x0;
    plVar15 = plVar16;
    uVar9 = func_0x037878dc(lVar20,auVar34._0_8_);
    if ((uVar9 & 1) != 0) {
      return uVar9;
    }
    plVar19 = plVar11;
    if (param_3 != (long *)0x0) {
      lVar21 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059ca768) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bde48;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(param_3);
LAB_033bde48:
      plStack_f8 = (long *)(*(code *)*puVar10)(param_3,puVar10[1]);
      pplStack_100 = &plStack_f8;
      plVar31 = (long *)&DAT_059cbac8;
      param_4 = (long *)&DAT_059defe8;
      plStack_108 = (long *)0x0;
      do {
        param_3 = plStack_f8;
        auVar34._8_8_ = lVar20;
        auVar34._0_8_ = &DAT_059df6e0;
        if (plStack_f8 == (long *)0x0) {
          func_0x0249fb90();
LAB_033be058:
          func_0x0249fb90();
LAB_033be05c:
          func_0x0249fb90();
          goto LAB_033be060;
        }
        lVar21 = *plStack_f8;
        uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
              puVar10 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033bdecc;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(plStack_f8);
LAB_033bdecc:
        uVar9 = (*(code *)*puVar10)(param_3,puVar10[1]);
        plVar11 = plStack_f8;
        if ((uVar9 & 1) == 0) break;
        param_3 = plStack_f8;
        if (plStack_f8 == (long *)0x0) goto LAB_033be058;
        lVar20 = *plStack_f8;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059cbac8) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033bdf30;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(plStack_f8);
LAB_033bdf30:
        param_3 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        uStack_e4 = (int)plVar17;
        lVar20 = func_0x026bf824(&uStack_e4,_DAT_05a3c7d8);
        if (param_3 == (long *)0x0) goto LAB_033be05c;
        lVar21 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059defe8) {
              puVar10 = (undefined8 *)(lVar21 + (long)(*piVar25 + 0x1f) * 0x10 + 0x138);
              goto LAB_033bdfa8;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)func_0x024d927c(param_3,_DAT_059defe8,0x1f);
LAB_033bdfa8:
        plVar32 = (long *)puVar10[1];
        plVar15 = (long *)0x0;
        plVar19 = plVar16;
        uVar9 = (*(code *)*puVar10)(param_3,lVar20);
      } while ((uVar9 & 1) == 0);
      auVar34._8_8_ = lVar20;
      auVar34._0_8_ = &DAT_059df6e0;
      plVar16 = (long *)0x0;
      pplVar22 = &plStack_f8;
      goto LAB_033bdfcc;
    }
  }
LAB_033be060:
  func_0x0249fb90();
  while( true ) {
    auVar36._8_8_ = param_4;
    auVar36._0_8_ = unaff_x27;
    auVar38 = func_0x0249fb88(plVar16);
    plVar16 = auVar38._0_8_;
    if (auVar38._8_4_ != 1) break;
    puVar10 = (undefined8 *)func_0x054ed080(plVar16);
    plVar16 = (long *)*puVar10;
    plStack_108 = plVar16;
    uVar9 = func_0x054ed090();
    pplVar22 = pplStack_100;
LAB_033bdfcc:
    plVar27 = *pplVar22;
    if (plVar27 != (long *)0x0) {
      lVar20 = *plVar27;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df598) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033be028;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar27);
LAB_033be028:
      uVar9 = (*(code *)*puVar10)(plVar27,puVar10[1]);
    }
    if (plVar16 == (long *)0x0) {
      return uVar9;
    }
  }
  func_0x022bd79c(&plStack_108);
  func_0x0258f7ac(plVar16);
  uVar33 = 0x33be0c4;
  auVar35 = func_0x022bd790();
  puVar6 = auStack_110;
SUB_033be0c4:
  plVar11 = auVar36._8_8_;
  plVar14 = auVar35._0_8_;
  puVar28 = auVar34._8_8_;
  *(long **)(puVar6 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x58) = uVar33;
  *(long **)(puVar6 + -0x50) = unaff_x28;
  *(undefined1 (*) [16])(puVar6 + -0x48) = auVar36;
  *(long **)(puVar6 + -0x38) = plVar31;
  *(undefined **)(puVar6 + -0x30) = puVar29;
  *(undefined1 (*) [16])(puVar6 + -0x28) = auVar34;
  *(long **)(puVar6 + -0x18) = param_3;
  *(long **)(puVar6 + -0x10) = plVar27;
  *(long **)(puVar6 + -8) = plVar16;
  puVar26 = (undefined *)0x5e2c000;
  *(long **)(puVar6 + -0x1c0) = plVar32;
  *(long **)(puVar6 + -0x1d8) = plVar19;
  *(long *)(puVar6 + -0x1d0) = auVar35._8_8_;
  plVar16 = plVar15;
  plVar17 = plVar32;
  plVar27 = plVar18;
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
    plVar17 = plVar32;
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
  if (plVar15 != (long *)0x0) {
    lVar20 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar9 != 0) {
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059c9f60) {
          puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033be2d8;
        }
        uVar9 = uVar9 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar9 != 0);
    }
    plVar19 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033be2d8:
    puVar28 = &DAT_059df6e0;
    param_3 = (long *)&DAT_059df8e8;
    puVar26 = &DAT_059cb2d8;
    uVar33 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    *(undefined8 *)(puVar6 + -0xb8) = uVar33;
    *(undefined8 *)(puVar6 + -0x140) = 0;
    *(undefined1 **)(puVar6 + -0x138) = puVar6 + -0xb8;
    plVar32 = plVar31;
    do {
      do {
        pcVar30 = *(code **)(puVar6 + -0xb8);
        if (pcVar30 == (code *)0x0) {
          func_0x0249fb90();
LAB_033bf328:
          plVar31 = plVar32;
          func_0x0249fb90();
LAB_033bf32c:
          func_0x0249fb90();
LAB_033bf330:
          func_0x0249fb90();
          plVar15 = unaff_x28;
LAB_033bf334:
          func_0x0249fb88();
          goto LAB_033bf338;
        }
        lVar20 = *(long *)pcVar30;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be35c;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(pcVar30);
LAB_033be35c:
        uVar9 = (*(code *)*puVar10)(pcVar30,puVar10[1]);
        auVar35._8_8_ = plVar27;
        auVar35._0_8_ = plVar19;
        if ((uVar9 & 1) == 0) goto LAB_033bf3d0;
        pcVar30 = (code *)func_0x0249fb80(_DAT_059efcb0);
        func_0x03789cdc(pcVar30,0);
        plVar32 = *(long **)(puVar6 + -0xb8);
        plVar31 = plVar32;
        if (plVar32 == (long *)0x0) goto LAB_033bf330;
        lVar20 = *plVar32;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059cb2a8) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be3e4;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033be3e4:
        auVar34 = (*(code *)*puVar10)(plVar32,puVar10[1]);
        plVar31 = auVar34._8_8_;
        if (pcVar30 == (code *)0x0) goto LAB_033bf328;
        *(long *)(pcVar30 + 0x10) = auVar34._0_8_;
        func_0x0249f888(pcVar30 + 0x10,auVar34._0_8_);
        plVar32 = *(long **)(puVar6 + -0x1d0);
        if (plVar32 == (long *)0x0) goto LAB_033bf32c;
        lVar20 = *plVar32;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        *(code **)(puVar6 + -0x1b8) = pcVar30;
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059ca9b0) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be470;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(plVar32);
        plVar32 = *(long **)(puVar6 + -0x1d0);
LAB_033be470:
        plVar11 = (long *)(*(code *)*puVar10)(plVar32,puVar10[1]);
        *(long **)(puVar6 + -0xc0) = plVar11;
        *(undefined8 *)(puVar6 + -0x150) = 0;
        *(undefined1 **)(puVar6 + -0x148) = puVar6 + -0xc0;
        plVar15 = plVar31;
joined_r0x033be48c:
        plVar32 = plVar15;
        if (plVar11 == (long *)0x0) {
          func_0x0249fb90();
          auVar35._8_8_ = plVar27;
          auVar35._0_8_ = plVar19;
          goto LAB_033bf344;
        }
        lVar20 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033be4dc;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033be4dc:
        uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar9 & 1) != 0) {
          plVar31 = *(long **)(puVar6 + -0xc0);
          if (plVar31 == (long *)0x0) {
            func_0x0249fb90();
            auVar35._8_8_ = plVar27;
            auVar35._0_8_ = plVar19;
          }
          else {
            lVar20 = *plVar31;
            uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar9 != 0) {
              piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059cbd30) {
                  puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_033be548;
                }
                uVar9 = uVar9 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059cbd30,0);
LAB_033be548:
            lVar20 = (*(code *)*puVar10)(plVar31,puVar10[1]);
            uVar33 = func_0x0249fb80(_DAT_059d4870);
            func_0x028b4b8c(uVar33,*(undefined8 *)(puVar6 + -0x1b8),_DAT_05a69ee8,0);
            uVar33 = func_0x0376f250(lVar20,uVar33,0);
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar10 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            unaff_x28 = (long *)puVar10[5];
            if (unaff_x28 == (long *)0x0) {
              if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
                func_0x0249fa64();
                puVar10 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
              }
              unaff_x29 = (long *)*puVar10;
              unaff_x28 = (long *)func_0x0249fb80(_DAT_059c59c0);
              func_0x02a9aa34(unaff_x28,unaff_x29,_DAT_05a69ea0,0);
              puVar10 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x28);
              *puVar10 = unaff_x28;
              func_0x0249f888(puVar10,unaff_x28);
            }
            plVar16 = _DAT_05a429f8;
            uVar33 = func_0x026e880c(uVar33,unaff_x28,*(undefined8 *)(puVar6 + -0x1c0));
            plVar31 = _DAT_05a43a18;
            plVar19 = (long *)func_0x026eb75c(uVar33,(ulong)plVar15 & 0xffffffff);
            if (plVar19 == (long *)0x0) {
              func_0x0249fb90();
              auVar35._8_8_ = plVar27;
              auVar35._0_8_ = plVar31;
            }
            else {
              lVar21 = *plVar19;
              uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar9 != 0) {
                piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == _DAT_059c9f90) {
                    puVar10 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                    goto LAB_033be6bc;
                  }
                  uVar9 = uVar9 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar9 != 0);
              }
              plVar31 = (long *)0x0;
              puVar10 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033be6bc:
              plVar32 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
              *(long **)(puVar6 + -200) = plVar32;
              *(long **)(puVar6 + -0x1c8) = plVar15;
              *(undefined8 *)(puVar6 + -0x160) = 0;
              *(undefined1 **)(puVar6 + -0x158) = puVar6 + -200;
              if (plVar32 != (long *)0x0) {
                do {
                  lVar21 = *plVar32;
                  uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar9 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
                        puVar10 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        plVar19 = plVar31;
                        goto LAB_033be72c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar9 != 0);
                  }
                  plVar19 = (long *)0x0;
                  puVar10 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033be72c:
                  uVar9 = (*(code *)*puVar10)(plVar32,puVar10[1]);
                  if ((uVar9 & 1) == 0) goto LAB_033be9a8;
                  plVar31 = *(long **)(puVar6 + -200);
                  plVar32 = plVar15;
                  if (plVar31 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar35._8_8_ = plVar27;
                    auVar35._0_8_ = plVar19;
                    goto LAB_033bf344;
                  }
                  lVar21 = *plVar31;
                  uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar9 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059cb2d8) {
                        puVar10 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_033be790;
                      }
                      uVar9 = uVar9 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar9 != 0);
                  }
                  plVar19 = (long *)0x0;
                  puVar10 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033be790:
                  auVar35 = (*(code *)*puVar10)(plVar31,puVar10[1]);
                  plVar11 = auVar35._8_8_;
                  plVar31 = auVar35._0_8_;
                  if (plVar14 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar35._8_8_ = plVar27;
                    auVar35._0_8_ = plVar19;
                    goto LAB_033bf344;
                  }
                  lVar21 = *plVar14;
                  uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar9 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
                        puVar10 = (undefined8 *)(lVar21 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                        goto LAB_033be7f8;
                      }
                      uVar9 = uVar9 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df8e8,5);
LAB_033be7f8:
                  uVar33 = (*(code *)*puVar10)(plVar14,puVar10[1]);
                  uVar13 = 0;
                  uVar9 = func_0x036ecab8(plVar11,uVar33);
                  unaff_x28 = plVar11;
                  if (((uVar9 & 1) == 0) || (iVar7 = func_0x037286b0(plVar11,0), iVar7 < 2)) {
                    if (lVar20 == 0) {
                      func_0x0249fb90();
                      auVar35._8_8_ = plVar27;
                      auVar35._0_8_ = uVar13;
                      goto LAB_033bf344;
                    }
                    plVar17 = (long *)0x1;
                    plVar27 = (long *)0x0;
                    plVar16 = plVar18;
                    func_0x037789bc(lVar20,plVar14);
                  }
                  else {
                    func_0x036f9ba0(plVar11,1,0);
                    *(undefined8 *)(puVar6 + -0x1f0) = 0;
                    plVar17 = plVar18;
                    func_0x034ba910(puVar6 + -0x120,0x17);
                    uVar33 = auVar35._8_8_;
                    lVar21 = *plVar14;
                    uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar9 != 0) {
                      piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == _DAT_059e0220) {
                          puVar10 = (undefined8 *)(lVar21 + (long)(*piVar25 + 0x17) * 0x10 + 0x138);
                          plVar16 = plVar31;
                          goto LAB_033be8e0;
                        }
                        uVar9 = uVar9 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar9 != 0);
                    }
                    uVar13 = 0x17;
                    puVar10 = (undefined8 *)func_0x024d927c(plVar14);
                    auVar35._8_8_ = uVar33;
                    auVar35._0_8_ = uVar13;
                    plVar16 = plVar31;
LAB_033be8e0:
                    plVar19 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
                    lVar21 = _DAT_059e0280;
                    plVar27 = auVar35._8_8_;
                    if (lVar20 == 0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    if (plVar19 == (long *)0x0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    plVar11 = *(long **)(lVar20 + 0x30);
                    func_0x054ed0d0(puVar6 + -0x1b0,puVar6 + -0x120,0x50);
                    lVar23 = *plVar19;
                    uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    if (uVar9 != 0) {
                      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == lVar21) {
                          unaff_x29 = (long *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                          goto LAB_033be96c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar9 != 0);
                    }
                    unaff_x29 = (long *)func_0x024d927c(plVar19,lVar21,1);
LAB_033be96c:
                    pcVar30 = (code *)*unaff_x29;
                    func_0x054ed0d0(puVar6 + -0xb0,puVar6 + -0x1b0,0x50);
                    plVar16 = (long *)unaff_x29[1];
                    plVar31 = (long *)(puVar6 + -0xb0);
                    (*pcVar30)(plVar19,plVar11);
                  }
                  plVar32 = *(long **)(puVar6 + -200);
                  plVar15 = (long *)(ulong)((int)plVar15 - 1);
                  unaff_x28 = plVar11;
                  if (plVar32 == (long *)0x0) goto LAB_033be9a0;
                } while( true );
              }
              plVar15 = (long *)(*(ulong *)(puVar6 + -0x1c8) & 0xffffffff);
LAB_033be9a0:
              func_0x0249fb90();
              auVar35._8_8_ = plVar27;
              auVar35._0_8_ = plVar31;
              plVar32 = plVar15;
            }
          }
          goto LAB_033bf344;
        }
        plVar31 = (long *)0xb;
        plVar11 = (long *)**(undefined8 **)(puVar6 + -0x148);
        if (plVar11 != (long *)0x0) {
          lVar20 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar9 != 0) {
            piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059df598) {
                puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033beb3c;
              }
              uVar9 = uVar9 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar9 != 0);
          }
          plVar19 = (long *)0x0;
          puVar10 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033beb3c:
          (*(code *)*puVar10)(plVar11,puVar10[1]);
        }
        if (*(long *)(puVar6 + -0x150) != 0) goto LAB_033bf334;
        plVar32 = plVar31;
        unaff_x28 = plVar15;
      } while ((int)plVar15 < 1);
      if (*(long **)(puVar6 + -0x1d8) == (long *)0x0) goto LAB_033bf33c;
      lVar20 = **(long **)(puVar6 + -0x1d8);
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      pcVar30 = (code *)&DAT_059cbac8;
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059ca768) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bebc8;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c();
LAB_033bebc8:
      plVar11 = (long *)(*(code *)*puVar10)(*(undefined8 *)(puVar6 + -0x1d8),puVar10[1]);
      *(long **)(puVar6 + -0x128) = plVar11;
      *(undefined8 *)(puVar6 + -0x150) = 0;
      *(undefined1 **)(puVar6 + -0x148) = puVar6 + -0x128;
joined_r0x033bebe4:
      plVar31 = plVar15;
      plVar32 = plVar31;
      if (plVar11 == (long *)0x0) {
        func_0x0249fb90();
        auVar35._8_8_ = plVar27;
        auVar35._0_8_ = plVar19;
        goto LAB_033bf344;
      }
      lVar20 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bec34;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033bec34:
      uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar9 & 1) != 0) {
        plVar15 = *(long **)(puVar6 + -0x128);
        if (plVar15 == (long *)0x0) {
          func_0x0249fb90();
          auVar35._8_8_ = plVar27;
          auVar35._0_8_ = plVar19;
        }
        else {
          lVar20 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar9 != 0) {
            piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059cbac8) {
                puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_033bec98;
              }
              uVar9 = uVar9 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059cbac8,0);
LAB_033bec98:
          plVar11 = (long *)(*(code *)*puVar10)(plVar15,puVar10[1]);
          uVar33 = func_0x0249fb80(_DAT_059d4870);
          func_0x028b4b8c(uVar33,*(undefined8 *)(puVar6 + -0x1b8),_DAT_05a69ee8,0);
          uVar33 = func_0x034bc5a4(plVar11,uVar33,0);
          if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puVar10 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
          unaff_x28 = (long *)puVar10[6];
          if (unaff_x28 == (long *)0x0) {
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
              puVar10 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            }
            unaff_x29 = (long *)*puVar10;
            unaff_x28 = (long *)func_0x0249fb80(_DAT_059c6b58);
            func_0x02a9aa34(unaff_x28,unaff_x29,_DAT_05a69ea8,0);
            puVar10 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x30);
            *puVar10 = unaff_x28;
            func_0x0249f888(puVar10,unaff_x28);
          }
          plVar16 = _DAT_05a42a10;
          uVar33 = func_0x026e880c(uVar33,unaff_x28,*(undefined8 *)(puVar6 + -0x1c0));
          plVar19 = _DAT_05a43a78;
          plVar15 = (long *)func_0x026eb75c(uVar33,(ulong)plVar31 & 0xffffffff);
          if (plVar15 == (long *)0x0) {
            func_0x0249fb90();
            auVar35._8_8_ = plVar27;
            auVar35._0_8_ = plVar19;
          }
          else {
            lVar20 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar9 != 0) {
              piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059ca9d0) {
                  puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_033bee0c;
                }
                uVar9 = uVar9 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar9 != 0);
            }
            plVar19 = (long *)0x0;
            puVar10 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033bee0c:
            plVar32 = (long *)(*(code *)*puVar10)(plVar15,puVar10[1]);
            *(long **)(puVar6 + -0x130) = plVar32;
            *(undefined8 *)(puVar6 + -0x160) = 0;
            *(undefined1 **)(puVar6 + -0x158) = puVar6 + -0x130;
            plVar15 = plVar31;
            unaff_x29 = plVar31;
            if (plVar32 != (long *)0x0) {
              do {
                lVar20 = *plVar32;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar9 != 0) {
                  piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
                      puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_033bee7c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar9 != 0);
                }
                plVar19 = (long *)0x0;
                puVar10 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033bee7c:
                uVar9 = (*(code *)*puVar10)(plVar32,puVar10[1]);
                if ((uVar9 & 1) == 0) goto LAB_033bf044;
                plVar31 = *(long **)(puVar6 + -0x130);
                plVar32 = plVar15;
                if (plVar31 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar35._8_8_ = plVar27;
                  auVar35._0_8_ = plVar19;
                  goto LAB_033bf344;
                }
                lVar20 = *plVar31;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar9 != 0) {
                  piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059cbd50) {
                      puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_033beee8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar9 != 0);
                }
                plVar19 = (long *)0x0;
                puVar10 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033beee8:
                uVar33 = (*(code *)*puVar10)(plVar31,puVar10[1]);
                if (plVar14 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar35._8_8_ = plVar27;
                  auVar35._0_8_ = plVar19;
                  goto LAB_033bf344;
                }
                lVar20 = *plVar14;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar9 != 0) {
                  piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
                      puVar10 = (undefined8 *)(lVar20 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                      goto LAB_033bef4c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar9 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df8e8,5);
LAB_033bef4c:
                uVar13 = (*(code *)*puVar10)(plVar14,puVar10[1]);
                uVar9 = func_0x036ecab8(uVar33,uVar13,0);
                if (((uVar9 & 1) == 0) || (iVar7 = func_0x037286b0(uVar33,0), iVar7 < 2)) {
                  unaff_x28 = (long *)func_0x0249fb80(_DAT_059d4870);
                  plVar16 = (long *)0x0;
                  uVar13 = _DAT_05a69ee0;
                  func_0x028b4b8c(unaff_x28,*(undefined8 *)(puVar6 + -0x1b8));
                  if (plVar11 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar35._8_8_ = plVar27;
                    auVar35._0_8_ = uVar13;
                    goto LAB_033bf344;
                  }
                  lVar20 = *plVar11;
                  uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar9 != 0) {
                    piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059defe8) {
                        puVar10 = (undefined8 *)(lVar20 + (long)(*piVar25 + 0x1d) * 0x10 + 0x138);
                        goto LAB_033bf01c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059defe8,0x1d);
LAB_033bf01c:
                  plVar16 = (long *)puVar10[1];
                  plVar19 = unaff_x28;
                  (*(code *)*puVar10)(plVar11,uVar33);
                }
                else {
                  plVar19 = (long *)0x0;
                  func_0x036f9ba0(uVar33,1);
                }
                plVar32 = *(long **)(puVar6 + -0x130);
                plVar15 = (long *)(ulong)((int)plVar15 - 1);
                if (plVar32 == (long *)0x0) goto LAB_033bf03c;
              } while( true );
            }
            plVar15 = (long *)((ulong)plVar31 & 0xffffffff);
LAB_033bf03c:
            func_0x0249fb90();
            auVar35._8_8_ = plVar27;
            auVar35._0_8_ = plVar19;
            plVar32 = plVar15;
          }
        }
        goto LAB_033bf344;
      }
      unaff_x28 = (long *)0x2;
      plVar15 = (long *)0x2;
      pcVar30 = (code *)**(undefined8 **)(puVar6 + -0x148);
      if (pcVar30 != (code *)0x0) {
        lVar20 = *(long *)pcVar30;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059df598) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_033bf1bc;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        plVar19 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x024d927c(pcVar30);
LAB_033bf1bc:
        (*(code *)*puVar10)(pcVar30,puVar10[1]);
      }
    } while (*(long *)(puVar6 + -0x150) == 0);
LAB_033bf338:
    func_0x0249fb88();
LAB_033bf33c:
    func_0x0249fb90();
    unaff_x28 = plVar15;
  }
  func_0x0249fb90();
  auVar35._8_8_ = plVar27;
  auVar35._0_8_ = plVar19;
  plVar32 = plVar31;
LAB_033bf344:
  auVar36 = func_0x022bd790();
  plVar11 = auVar36._8_8_;
  func_0x022bd79c(puVar6 + -0x150);
  if (auVar36._8_4_ == 1) {
    puVar10 = (undefined8 *)func_0x054ed080(auVar36._0_8_);
    *(undefined8 *)(puVar6 + -0x140) = *puVar10;
    func_0x054ed090();
LAB_033bf3d0:
    uVar33 = auVar35._8_8_;
    plVar18 = (long *)**(undefined8 **)(puVar6 + -0x138);
    if (plVar18 != (long *)0x0) {
      lVar20 = *plVar18;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df598) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bf430;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      uVar13 = 0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar18);
      auVar35._8_8_ = uVar33;
      auVar35._0_8_ = uVar13;
LAB_033bf430:
      (*(code *)*puVar10)(plVar18,puVar10[1]);
    }
    if (*(long *)(puVar6 + -0x140) == 0) {
      return 0;
    }
    uVar33 = func_0x0249fb88();
    auVar36._8_8_ = plVar11;
    auVar36._0_8_ = uVar33;
  }
  func_0x022bd79c(puVar6 + -0x140);
  func_0x0258f7ac(auVar36._0_8_);
  auVar34 = func_0x022bd790();
  plVar27 = auVar35._8_8_;
  plVar19 = auVar35._0_8_;
  lVar20 = auVar34._8_8_;
  plVar11 = auVar34._0_8_;
  *(long **)(puVar6 + -0x250) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x248) = 0x33bf480;
  *(long **)(puVar6 + -0x240) = unaff_x28;
  *(undefined1 (*) [16])(puVar6 + -0x238) = auVar36;
  *(long **)(puVar6 + -0x228) = plVar32;
  *(code **)(puVar6 + -0x220) = pcVar30;
  *(long **)(puVar6 + -0x218) = plVar14;
  *(undefined **)(puVar6 + -0x210) = puVar28;
  *(long **)(puVar6 + -0x208) = param_3;
  *(undefined **)(puVar6 + -0x200) = puVar26;
  *(long **)(puVar6 + -0x1f8) = plVar18;
  lVar21 = 0x5e2c000;
  puVar26 = &DAT_059de230;
  plVar31 = plVar16;
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
  plVar18 = (long *)func_0x0249fb80(_DAT_059de230);
  plVar14 = (long *)0x0;
  func_0x034a1470(plVar18,lVar20);
  if (lVar20 != 0) {
    unaff_x28 = (long *)&DAT_059e2c00;
    puVar26 = (undefined *)func_0x028a379c(lVar20,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    plVar32 = (long *)func_0x03530158(puVar26,0);
    if (plVar11 != (long *)0x0) {
      plVar17 = (long *)0x1;
      plVar27 = (long *)0x0;
      plVar14 = plVar19;
      func_0x037789bc(plVar11,lVar20);
      plVar31 = plVar32;
      if (plVar16 != (long *)0x0) {
        lVar21 = func_0x036d5f70(plVar16,0);
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x20);
        }
        uVar33 = func_0x03659ee0(lVar20,0);
        plVar14 = (long *)0x0;
        plVar15 = (long *)func_0x036d3908(plVar16,uVar33);
        plVar31 = plVar32;
        if (plVar15 != (long *)0x0) {
          lVar23 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar9 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059dfbc0) {
                puVar10 = (undefined8 *)(lVar23 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar9 = uVar9 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar9 != 0);
          }
          plVar14 = (long *)0x6;
          puVar10 = (undefined8 *)func_0x024d927c(plVar15);
          plVar31 = plVar32;
LAB_033bf694:
          plVar32 = (long *)(*(code *)*puVar10)(plVar15,puVar10[1]);
          lVar23 = func_0x036d5f70(plVar16,0);
          if (lVar23 == 0) {
            uVar33 = 0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = plVar32;
            auVar36 = auVar4 << 0x40;
          }
          else {
            uVar33 = *(undefined8 *)(lVar23 + 0x28);
            auVar36._8_8_ = plVar32;
            auVar36._0_8_ = uVar33;
          }
          if (plVar32 != (long *)0x0) {
            lVar23 = *plVar32;
            uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar9 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059df030) {
                  puVar10 = (undefined8 *)(lVar23 + (long)(*piVar25 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar9 = uVar9 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059df030,10);
LAB_033bf720:
            plVar31 = (long *)(*(code *)*puVar10)(plVar32,lVar20,uVar33,puVar10[1]);
            auVar3._8_8_ = plVar31;
            auVar3._0_8_ = uVar33;
            auVar2._8_8_ = plVar31;
            auVar2._0_8_ = uVar33;
            auVar1._8_8_ = plVar31;
            auVar1._0_8_ = uVar33;
            auVar36._8_8_ = plVar31;
            auVar36._0_8_ = uVar33;
            if (plVar31 != (long *)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              plVar27 = (long *)func_0x03530158(puVar26,0);
              *(undefined8 *)(puVar6 + -0x350) = 0;
              plVar14 = plVar19;
              plVar17 = plVar18;
              lVar23 = func_0x03774f00(plVar11,lVar20);
              if ((lVar23 == 0) || (auVar36 = auVar1, *(long *)(lVar23 + 0x10) == 0))
              goto LAB_033bfa8c;
              plVar32 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              plVar18 = (long *)(ulong)*(uint *)(plVar32[1] + 0xfc);
              uVar13 = func_0x0249f90c(*(long *)(lVar23 + 0x10),*(undefined8 *)(*plVar32 + 0x80));
              plVar14 = plVar18;
              func_0x054ed0d0(puVar6 + -0x2a0,uVar13);
              auVar36 = auVar2;
              if (*(long *)(lVar20 + 0x220) == 0) goto LAB_033bfa8c;
              plVar18 = (long *)(ulong)*(uint *)(puVar6 + -0x2a0);
              plVar14 = (long *)0x0;
              uVar9 = func_0x0387e780(*(long *)(lVar20 + 0x220),plVar18);
              if ((uVar9 & 1) == 0) {
                auVar36 = auVar3;
                if (*(long *)(lVar20 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(lVar20 + 0x220),lVar20,plVar11,plVar18,0);
              }
            }
            plVar32 = *(long **)(lVar20 + 0x1e0);
            lVar23 = plVar11[6];
            auVar36._8_8_ = lVar23;
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar17 = (long *)func_0x03530158(puVar26,0);
            plVar27 = (long *)0x0;
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
            plVar14 = plVar19;
            plVar31 = plVar19;
            func_0x034ba874(puVar6 + -0x2f0,6);
            lVar5 = _DAT_059e0280;
            plVar18 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              func_0x054ed0d0(puVar6 + -0x340,puVar6 + -0x2f0,0x50);
              lVar24 = *plVar32;
              uVar9 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar9 != 0) {
                piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar5) {
                    puVar10 = (undefined8 *)(lVar24 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar9 = uVar9 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar9 != 0);
              }
              puVar10 = (undefined8 *)func_0x024d927c(plVar32,lVar5,1);
LAB_033bf8d8:
              pcVar30 = (code *)*puVar10;
              func_0x054ed0d0(puVar6 + -0x2a0,puVar6 + -0x340,0x50);
              (*pcVar30)(plVar32,lVar23,puVar6 + -0x2a0,puVar10[1]);
              plVar19 = (long *)func_0x036f10d8(plVar16,lVar20,0);
              lVar23 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar23,_DAT_059feeb8);
              if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) < 1)) {
LAB_033bf9f8:
                uVar33 = func_0x03659ee0(lVar20,0);
                uVar33 = func_0x036d62d4(plVar16,uVar33,0);
                lVar21 = plVar11[6];
                uVar13 = func_0x0249fb80(_DAT_059d8a28);
                *(undefined8 *)(puVar6 + -0x350) = 0;
                func_0x0385d0a8(uVar13,uVar33,plVar19,lVar21,lVar23,1,0,0);
                uVar9 = func_0x0366bae8(lVar20,uVar13,0,0);
                return uVar9;
              }
              plVar18 = (long *)0x0;
              auVar36._8_8_ = &DAT_05a17ad0;
              auVar36._0_8_ = &DAT_059d9e60;
              param_3 = (long *)0xffffffffffffffff;
              do {
                plVar14 = (long *)(puVar6 + -0x2a0);
                plVar31 = _DAT_05a17ad0;
                func_0x0282f3c4(lVar21,plVar18);
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
                uVar8 = (int)plVar18 + 1;
                plVar18 = (long *)(ulong)uVar8;
                if (*(int *)(lVar21 + 0x18) <= (int)uVar8) goto LAB_033bf9f8;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_033bfa8c:
  auVar37 = func_0x0249fb90();
  uVar12 = auVar37._0_8_;
  *(undefined8 *)(puVar6 + -0x390) = 0x33bfa90;
  *(long **)(puVar6 + -0x388) = plVar18;
  *(undefined **)(puVar6 + -0x380) = puVar26;
  *(long **)(puVar6 + -0x378) = plVar19;
  *(long *)(puVar6 + -0x370) = lVar21;
  *(long **)(puVar6 + -0x368) = param_3;
  *(long **)(puVar6 + -0x360) = plVar16;
  *(long *)(puVar6 + -0x358) = lVar20;
  uVar9 = uVar12;
  plVar19 = plVar14;
  plVar15 = plVar31;
  plVar32 = plVar17;
  plVar18 = plVar27;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    uVar9 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  *(undefined8 *)(puVar6 + -0x398) = 0;
  if (((ulong)plVar27 & 1) == 0) {
    uVar33 = 0;
    if (uVar12 == 0) goto LAB_033bfd48;
    uVar9 = 0;
    if (*(long *)(uVar12 + 0x2e8) != 0) {
      plVar32 = (long *)0x0;
      plVar19 = plVar14;
      plVar15 = plVar31;
      uVar9 = func_0x034ccd58(*(long *)(uVar12 + 0x2e8),uVar12);
    }
  }
  if (plVar17 == (long *)0x0) {
    return uVar9;
  }
  lVar20 = *plVar17;
  uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar9 != 0) {
    piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == _DAT_059ca9b8) {
        puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_033bfb80;
      }
      uVar9 = uVar9 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar9 != 0);
  }
  plVar19 = (long *)0x0;
  puVar10 = (undefined8 *)func_0x024d927c(plVar17);
LAB_033bfb80:
  plVar16 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
  *(long **)(puVar6 + -0x398) = plVar16;
  *(undefined8 *)(puVar6 + -0x3a8) = 0;
  *(undefined1 **)(puVar6 + -0x3a0) = puVar6 + -0x398;
  if (plVar16 != (long *)0x0) {
    plVar31 = (long *)&DAT_059df6e0;
    plVar14 = (long *)&DAT_059cbd38;
    plVar17 = plVar16;
    do {
      lVar20 = *plVar17;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bfbfc;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar17);
LAB_033bfbfc:
      uVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if ((uVar9 & 1) == 0) goto LAB_033bfcac;
      plVar17 = *(long **)(puVar6 + -0x398);
      if (plVar17 == (long *)0x0) {
        func_0x0249fb90();
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      lVar20 = *plVar17;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059cbd38) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bfc60;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar17);
LAB_033bfc60:
      (*(code *)*puVar10)(puVar6 + -0x3f8,plVar17,puVar10[1]);
      if (*(int *)(puVar6 + -0x3f8) == 3) {
        if (auVar37._8_8_ == 0) goto LAB_033bfd3c;
        plVar19 = (long *)0x0;
        lVar20 = func_0x0376e450(auVar37._8_8_,*(undefined8 *)(puVar6 + -0x3ec));
        if (lVar20 != 0) {
          plVar19 = (long *)0x0;
          func_0x036efea8(lVar20,uVar12);
        }
      }
      plVar17 = *(long **)(puVar6 + -0x398);
    } while (plVar17 != (long *)0x0);
  }
  uVar9 = func_0x0249fb90();
LAB_033bfcac:
  lVar20 = 0;
  puVar10 = (undefined8 *)(puVar6 + -0x398);
  do {
    plVar16 = (long *)*puVar10;
    auVar37._8_8_ = lVar20;
    auVar37._0_8_ = plVar16;
    if (plVar16 != (long *)0x0) {
      lVar21 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df598) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      plVar19 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033bfd10:
      uVar9 = (*(code *)*puVar10)(plVar16,puVar10[1]);
    }
    if (lVar20 == 0) {
      return uVar9;
    }
LAB_033bfd40:
    uVar33 = auVar37._0_8_;
    func_0x0249fb88(auVar37._8_8_);
LAB_033bfd48:
    auVar38 = func_0x0249fb90();
    uVar13 = auVar38._0_8_;
    if (auVar38._8_4_ != 1) goto LAB_033bfd90;
    plVar16 = (long *)func_0x054ed080(uVar13);
    lVar20 = *plVar16;
    *(long *)(puVar6 + -0x3a8) = lVar20;
    uVar9 = func_0x054ed090();
    puVar10 = *(undefined8 **)(puVar6 + -0x3a0);
  } while( true );
LAB_033bd954:
  if (plStack_68 != (long *)0x0) {
    lVar20 = *plStack_68;
    uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar9 != 0) {
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bd9b8;
        }
        uVar9 = uVar9 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar9 != 0);
    }
    param_3 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd9b8:
    (*(code *)*puVar10)(unaff_x27,puVar10[1]);
  }
  plVar32 = plStack_90;
  param_4 = (long *)0x0;
  if (plStack_90 == (long *)0x0) goto LAB_033bdce8;
  lVar20 = *plStack_90;
  uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar9 != 0) {
    piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == _DAT_059ca768) {
        puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_033bda24;
      }
      uVar9 = uVar9 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar9 != 0);
  }
  param_3 = (long *)0x0;
  puVar10 = (undefined8 *)func_0x024d927c(plStack_90);
LAB_033bda24:
  plStack_70 = (long *)(*(code *)*puVar10)(plVar32,puVar10[1]);
  pplStack_78 = &plStack_70;
  uStack_80 = 0;
  if (plStack_70 != (long *)0x0) {
    do {
      plVar32 = plStack_70;
      lVar20 = *plStack_70;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059df6e0) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bda90;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      param_3 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plStack_70);
LAB_033bda90:
      uVar9 = (*(code *)*puVar10)(plVar32,puVar10[1]);
      param_4 = plStack_70;
      if ((uVar9 & 1) == 0) goto LAB_033bdb9c;
      if (plStack_70 == (long *)0x0) {
        uStack_a8 = func_0x0249fb90();
        goto LAB_033bdd00;
      }
      lVar20 = *plStack_70;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == _DAT_059cbac8) {
            puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_033bdaf4;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      param_3 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plStack_70);
LAB_033bdaf4:
      plVar32 = (long *)(*(code *)*puVar10)(param_4,puVar10[1]);
      if (0 < (int)unaff_x23) {
        if (plVar32 == (long *)0x0) {
          uStack_a8 = func_0x0249fb90();
          param_4 = (long *)0x0;
          goto LAB_033bdd00;
        }
        do {
          lVar20 = *plVar32;
          uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar9 != 0) {
            piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059defe8) {
                puVar10 = (undefined8 *)(lVar20 + (long)(*piVar25 + 0x1f) * 0x10 + 0x138);
                goto LAB_033bdb60;
              }
              uVar9 = uVar9 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059defe8,0x1f);
LAB_033bdb60:
          plVar16 = (long *)puVar10[1];
          plVar17 = (long *)0x0;
          param_3 = param_6;
          uVar9 = (*(code *)*puVar10)(plVar32,param_5);
          if ((uVar9 & 1) == 0) goto LAB_033bdb8c;
          iVar7 = (int)unaff_x23;
          unaff_x23 = (long *)(ulong)(iVar7 - 1);
        } while (1 < iVar7);
        unaff_x23 = (long *)0x0;
      }
LAB_033bdb8c:
      if (plStack_70 == (long *)0x0) break;
    } while( true );
  }
  param_4 = plStack_70;
  uStack_a8 = func_0x0249fb90();
  goto LAB_033bdd00;
LAB_033bdb9c:
  unaff_x23 = (long *)0xd;
  if (plStack_70 != (long *)0x0) {
    lVar20 = *plStack_70;
    uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar9 != 0) {
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bdc04;
        }
        uVar9 = uVar9 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar9 != 0);
    }
    param_3 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x024d927c(plStack_70);
LAB_033bdc04:
    uVar9 = (*(code *)*puVar10)(param_4,puVar10[1]);
  }
  plVar19 = (long *)(ulong)*(uint *)(plStack_a0 + 3);
  unaff_x28 = (long *)((long)unaff_x28 + 1);
  plVar32 = unaff_x27;
  if ((long)(int)*(uint *)(plStack_a0 + 3) <= (long)unaff_x28) {
    return uVar9;
  }
  goto LAB_033bd790;
LAB_033be9a8:
  plVar32 = *(long **)(puVar6 + -200);
  if (plVar32 != (long *)0x0) {
    lVar20 = *plVar32;
    uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar9 != 0) {
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bea0c;
        }
        uVar9 = uVar9 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar9 != 0);
    }
    plVar19 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033bea0c:
    (*(code *)*puVar10)(plVar32,puVar10[1]);
  }
  plVar11 = *(long **)(puVar6 + -0xc0);
  goto joined_r0x033be48c;
LAB_033bf044:
  unaff_x28 = (long *)0xc;
  plVar32 = *(long **)(puVar6 + -0x130);
  if (plVar32 != (long *)0x0) {
    lVar20 = *plVar32;
    uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar9 != 0) {
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df598) {
          puVar10 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_033bf0ac;
        }
        uVar9 = uVar9 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar9 != 0);
    }
    plVar19 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033bf0ac:
    (*(code *)*puVar10)(plVar32,puVar10[1]);
  }
  plVar11 = *(long **)(puVar6 + -0x128);
  goto joined_r0x033bebe4;
LAB_033bfd90:
  func_0x022bd79c(puVar6 + -0x3a8);
  func_0x0258f7ac(uVar13);
  auVar35 = func_0x022bd790();
  auVar34._8_8_ = plVar19;
  auVar34._0_8_ = auVar35._8_8_;
  puVar29 = auVar35._0_8_;
  *(undefined8 *)(puVar6 + -0x440) = 0x33bfda4;
  *(undefined8 *)(puVar6 + -0x438) = 0x5e2c000;
  *(ulong *)(puVar6 + -0x430) = (ulong)plVar27 & 0xffffffff;
  *(long **)(puVar6 + -0x428) = plVar14;
  *(long **)(puVar6 + -0x420) = plVar31;
  *(long **)(puVar6 + -0x418) = plVar17;
  *(undefined8 *)(puVar6 + -0x410) = uVar33;
  *(undefined8 *)(puVar6 + -0x408) = uVar13;
  puVar6[-0x444] = 0;
  uVar8 = func_0x033bb508();
  plVar31 = (long *)(ulong)uVar8;
  if ((uVar8 & 1) == 0) {
    return (ulong)(uVar8 & 1);
  }
  uVar33 = 0x33bfe00;
  puVar6 = puVar6 + -0x450;
  plVar16 = plVar18;
  plVar27 = plVar32;
  param_3 = plVar15;
  unaff_x29 = plVar11;
  goto SUB_033be0c4;
}


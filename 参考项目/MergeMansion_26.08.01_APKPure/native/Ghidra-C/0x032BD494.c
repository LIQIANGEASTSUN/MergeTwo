/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void RemoveItemsFromBoardsAndInventories(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<GameLogic.Player.Board.MergeBoard> mergeBoards, System.Collections.Generic.IEnumerable`1<GameLogic.Player.IBoardInventory> boardInventories, System.Int32 item, System.Int32 amount, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033bd494
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033bfdfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033bf1f8) */
/* WARNING: Removing unreachable block (ram,0x033bdc20) */
/* WARNING: Removing unreachable block (ram,0x033beb58) */
/* WARNING: Removing unreachable block (ram,0x033bf21c) */
/* WARNING: Removing unreachable block (ram,0x033bf0c4) */
/* WARNING: Removing unreachable block (ram,0x033bf1dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033bd494(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,long *param_5,
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
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  ulong unaff_x19;
  ulong uVar27;
  long *unaff_x20;
  undefined *puVar28;
  long *unaff_x21;
  undefined *puVar29;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar30;
  ulong unaff_x24;
  ulong uVar31;
  code *pcVar32;
  ulong unaff_x25;
  ulong uVar33;
  long lVar34;
  long *plVar35;
  undefined *unaff_x26;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 unaff_x27;
  long *plVar38;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  long *plVar39;
  undefined8 unaff_x30;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  
  auVar41._8_8_ = param_2;
  auVar41._0_8_ = param_1;
  puVar6 = &stack0xffffffffffffffb0;
  puVar36 = &DAT_059d7518;
  uVar27 = (ulong)param_5 & 0xffffffff;
  uVar31 = param_4 & 0xffffffff;
  plVar16 = param_3;
  uVar14 = param_4;
  plVar11 = param_5;
  plVar19 = param_6;
  if ((bRam0000000005e2c3b9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d7518);
    bRam0000000005e2c3b9 = 1;
  }
  uVar9 = func_0x0249f9d4(_DAT_059d7518,1);
  uVar37 = _DAT_059d7518;
  uVar33 = 0x5e2c000;
  if (uVar9 == 0) {
LAB_033bd554:
    plVar10 = plVar11;
    func_0x0249fb90();
    uVar9 = uVar33;
  }
  else {
    plVar10 = plVar11;
    if (*(int *)(uVar9 + 0x18) != 0) {
      *(int *)(uVar9 + 0x20) = (int)param_4;
      plVar10 = (long *)func_0x0249f9d4(uVar37,1);
      uVar33 = uVar9;
      if (plVar10 == (long *)0x0) goto LAB_033bd554;
      if ((int)plVar10[3] != 0) {
        *(int *)(plVar10 + 4) = (int)param_5;
        puVar6 = (undefined1 *)register0x00000008;
        plVar16 = param_3;
        plVar19 = param_6;
        uVar27 = unaff_x19;
        param_6 = unaff_x20;
        param_3 = unaff_x21;
        param_2 = unaff_x22;
        param_1 = unaff_x23;
        uVar31 = unaff_x24;
        puVar36 = unaff_x26;
        goto SUB_033bd55c;
      }
    }
  }
  unaff_x25 = uVar9;
  uVar9 = uVar14;
  unaff_x30 = 0x33bd55c;
  auVar41 = func_0x0249fb98();
SUB_033bd55c:
  uVar14 = auVar41._0_8_;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x30;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x27;
  *(undefined **)(puVar6 + -0x40) = puVar36;
  *(ulong *)(puVar6 + -0x38) = unaff_x25;
  *(ulong *)(puVar6 + -0x30) = uVar31;
  *(undefined8 *)(puVar6 + -0x28) = param_1;
  *(undefined8 *)(puVar6 + -0x20) = param_2;
  *(long **)(puVar6 + -0x18) = param_3;
  *(long **)(puVar6 + -0x10) = param_6;
  *(ulong *)(puVar6 + -8) = uVar27;
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
  puVar21 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
  lVar34 = puVar21[4];
  if (lVar34 == 0) {
    if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
      func_0x0249fa64();
      puVar21 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
    }
    uVar37 = *puVar21;
    lVar34 = func_0x0249fb80(_DAT_059c6860);
    func_0x02a9aa34(lVar34,uVar37,_DAT_05a69e98,0);
    plVar11 = (long *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x20);
    *plVar11 = lVar34;
    func_0x0249f888(plVar11,lVar34);
  }
  uVar37 = func_0x026e8e9c(uVar9,lVar34,_DAT_05a430c8);
  plVar12 = (long *)func_0x026ebbf4(uVar37,_DAT_05a43b40);
  puVar36 = *(undefined **)(puVar6 + -0x20);
  puVar29 = *(undefined **)(puVar6 + -0x18);
  plVar30 = *(long **)(puVar6 + -0x28);
  plVar11 = *(long **)(puVar6 + -0x50);
  plVar38 = *(long **)(puVar6 + -0x48);
  plVar39 = *(long **)(puVar6 + -0x60);
  *(long **)(puVar6 + -0x60) = plVar39;
  *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
  *(long **)(puVar6 + -0x50) = plVar11;
  *(long **)(puVar6 + -0x48) = plVar38;
  *(undefined8 *)(puVar6 + -0x40) = *(undefined8 *)(puVar6 + -0x40);
  *(undefined8 *)(puVar6 + -0x38) = *(undefined8 *)(puVar6 + -0x38);
  *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
  *(long **)(puVar6 + -0x28) = plVar30;
  *(undefined **)(puVar6 + -0x20) = puVar36;
  *(undefined **)(puVar6 + -0x18) = puVar29;
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  puVar28 = (undefined *)0x5e2c000;
  *(long **)(puVar6 + -0x90) = plVar16;
  *(long *)(puVar6 + -0x88) = auVar41._8_8_;
  uVar27 = uVar14;
  plVar15 = plVar12;
  plVar18 = plVar10;
  plVar20 = plVar19;
  if ((bRam0000000005e2c3bc & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cbac8);
    uVar27 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bc = 1;
  }
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  plVar35 = plVar10;
  if (plVar12 != (long *)0x0) {
    if ((int)plVar12[3] < 1) {
      return uVar27;
    }
    plVar39 = (long *)&DAT_059df6e0;
    puVar29 = &DAT_059cbac8;
    puVar28 = &DAT_059defe8;
    puVar36 = &DAT_059cbd30;
    plVar11 = (long *)0x0;
    plVar22 = (long *)(plVar12[3] & 0xffffffff);
    *(long **)(puVar6 + -0xa0) = plVar12;
    *(long **)(puVar6 + -0x98) = plVar10;
LAB_033bd790:
    plVar35 = plVar10;
    if (plVar11 < plVar22) {
      if (plVar10 == (long *)0x0) goto LAB_033bdce8;
      if ((long *)(ulong)*(uint *)(plVar10 + 3) <= plVar11) goto LAB_033bdcec;
      if (*(long **)(puVar6 + -0x88) == (long *)0x0) goto LAB_033bdce8;
      lVar34 = **(long **)(puVar6 + -0x88);
      plVar35 = (long *)plVar12[(long)((long)plVar11 + 4)];
      uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
      plVar30 = (long *)(ulong)*(uint *)((long)plVar10 + (long)plVar11 * 4 + 0x20);
      if (uVar27 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059ca9b0) {
            uVar37 = *(undefined8 *)(puVar6 + -0x88);
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bd81c;
          }
          uVar27 = uVar27 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar27 != 0);
      }
      uVar37 = *(undefined8 *)(puVar6 + -0x88);
      plVar16 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(uVar37);
LAB_033bd81c:
      plVar10 = (long *)(*(code *)*puVar21)(uVar37,puVar21[1]);
      *(long **)(puVar6 + -0x68) = plVar10;
      *(undefined8 *)(puVar6 + -0x80) = 0;
      *(undefined1 **)(puVar6 + -0x78) = puVar6 + -0x68;
      if (plVar10 != (long *)0x0) {
        do {
          lVar34 = *plVar10;
          uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar27 != 0) {
            piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
                puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_033bd888;
              }
              uVar27 = uVar27 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar27 != 0);
          }
          plVar16 = (long *)0x0;
          puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bd888:
          uVar27 = (*(code *)*puVar21)(plVar10,puVar21[1]);
          if ((uVar27 & 1) == 0) goto LAB_033bd954;
          plVar10 = *(long **)(puVar6 + -0x68);
          if (plVar10 == (long *)0x0) {
            uVar37 = func_0x0249fb90();
            plVar12 = (long *)0x0;
            goto LAB_033bdd00;
          }
          lVar34 = *plVar10;
          uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar27 != 0) {
            piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059cbd30) {
                puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_033bd8ec;
              }
              uVar27 = uVar27 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar27 != 0);
          }
          plVar16 = (long *)0x0;
          puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bd8ec:
          lVar34 = (*(code *)*puVar21)(plVar10,puVar21[1]);
          plVar12 = plVar30;
          plVar38 = plVar30;
          if (0 < (int)plVar30) {
            do {
              plVar38 = plVar12;
              if (lVar34 == 0) {
                uVar37 = func_0x0249fb90();
                plVar12 = (long *)0x0;
                goto LAB_033bdd00;
              }
              plVar18 = (long *)0x0;
              plVar20 = (long *)0x0;
              plVar16 = plVar35;
              plVar15 = plVar19;
              uVar27 = func_0x037878dc(lVar34,uVar14);
              iVar7 = (int)plVar12;
              if ((uVar27 & 1) == 0) goto LAB_033bd944;
              plVar38 = (long *)(ulong)(iVar7 - 1);
              plVar12 = plVar38;
            } while (1 < iVar7);
            plVar12 = (long *)0x0;
          }
LAB_033bd944:
          plVar10 = *(long **)(puVar6 + -0x68);
          plVar30 = plVar12;
          if (plVar10 == (long *)0x0) break;
        } while( true );
      }
      plVar12 = (long *)0x0;
      uVar37 = func_0x0249fb90();
      goto LAB_033bdd00;
    }
    goto LAB_033bdcec;
  }
LAB_033bdce8:
  func_0x0249fb90();
LAB_033bdcec:
  func_0x0249fb98();
  func_0x0249fb88(plVar35);
  uVar37 = func_0x0249fb88(plVar12);
LAB_033bdd00:
  func_0x022bd79c(puVar6 + -0x80);
  func_0x0258f7ac(uVar37);
  auVar40 = func_0x022bd790();
  lVar34 = auVar40._8_8_;
  *(undefined8 *)(puVar6 + -0xf0) = 0x33bdd28;
  *(long **)(puVar6 + -0xe0) = plVar12;
  *(long **)(puVar6 + -0xd8) = plVar35;
  *(ulong *)(puVar6 + -0xd0) = uVar14;
  *(long **)(puVar6 + -200) = plVar30;
  *(undefined **)(puVar6 + -0xc0) = puVar36;
  *(undefined **)(puVar6 + -0xb8) = puVar29;
  *(undefined **)(puVar6 + -0xb0) = puVar28;
  *(undefined8 *)(puVar6 + -0xa8) = uVar37;
  plVar30 = (long *)0x5e2c000;
  puVar36 = &DAT_05a3c7d8;
  plVar22 = (long *)((ulong)plVar15 & 0xffffffff);
  plVar10 = plVar16;
  plVar35 = plVar15;
  plVar19 = plVar18;
  if ((bRam0000000005e2c3bb & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7d8);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bb = 1;
  }
  *(undefined8 *)(puVar6 + -0xf8) = 0;
  *(int *)(puVar6 + -0x108) = (int)plVar15;
  plVar13 = (long *)func_0x026bf824(puVar6 + -0x108,_DAT_05a3c7d8);
  if (lVar34 != 0) {
    plVar19 = (long *)0x0;
    plVar20 = (long *)0x0;
    plVar35 = plVar18;
    uVar14 = func_0x037878dc(lVar34,auVar40._0_8_);
    if ((uVar14 & 1) != 0) {
      return uVar14;
    }
    plVar10 = plVar13;
    if (plVar16 != (long *)0x0) {
      lVar23 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059ca768) {
            puVar21 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bde48;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033bde48:
      uVar37 = (*(code *)*puVar21)(plVar16,puVar21[1]);
      *(undefined8 *)(puVar6 + -0xf8) = uVar37;
      plVar30 = (long *)&DAT_059cbac8;
      plVar12 = (long *)&DAT_059defe8;
      *(undefined8 *)(puVar6 + -0x108) = 0;
      *(undefined1 **)(puVar6 + -0x100) = puVar6 + -0xf8;
      do {
        auVar40._8_8_ = lVar34;
        auVar40._0_8_ = &DAT_059df6e0;
        plVar16 = *(long **)(puVar6 + -0xf8);
        if (plVar16 == (long *)0x0) {
          func_0x0249fb90();
LAB_033be058:
          func_0x0249fb90();
LAB_033be05c:
          func_0x0249fb90();
          goto LAB_033be060;
        }
        lVar23 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
              puVar21 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033bdecc;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033bdecc:
        uVar14 = (*(code *)*puVar21)(plVar16,puVar21[1]);
        if ((uVar14 & 1) == 0) break;
        plVar13 = *(long **)(puVar6 + -0xf8);
        plVar16 = (long *)0x0;
        if (plVar13 == (long *)0x0) goto LAB_033be058;
        lVar34 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059cbac8) {
              puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033bdf30;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bdf30:
        plVar16 = (long *)(*(code *)*puVar21)(plVar13,puVar21[1]);
        *(int *)(puVar6 + -0xe4) = (int)plVar15;
        lVar34 = func_0x026bf824(puVar6 + -0xe4,_DAT_05a3c7d8);
        if (plVar16 == (long *)0x0) goto LAB_033be05c;
        lVar23 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059defe8) {
              puVar21 = (undefined8 *)(lVar23 + (long)(*piVar26 + 0x1f) * 0x10 + 0x138);
              goto LAB_033bdfa8;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        puVar21 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059defe8,0x1f);
LAB_033bdfa8:
        plVar19 = (long *)puVar21[1];
        plVar35 = (long *)0x0;
        plVar10 = plVar18;
        uVar14 = (*(code *)*puVar21)(plVar16,lVar34);
      } while ((uVar14 & 1) == 0);
      auVar40._8_8_ = lVar34;
      auVar40._0_8_ = &DAT_059df6e0;
      plVar18 = (long *)0x0;
      puVar21 = (undefined8 *)(puVar6 + -0xf8);
      goto LAB_033bdfcc;
    }
  }
LAB_033be060:
  func_0x0249fb90();
  while( true ) {
    auVar43._8_8_ = plVar12;
    auVar43._0_8_ = plVar38;
    auVar45 = func_0x0249fb88(plVar18);
    plVar18 = auVar45._0_8_;
    if (auVar45._8_4_ != 1) break;
    puVar21 = (undefined8 *)func_0x054ed080(plVar18);
    plVar18 = (long *)*puVar21;
    *(long **)(puVar6 + -0x108) = plVar18;
    uVar14 = func_0x054ed090();
    puVar21 = *(undefined8 **)(puVar6 + -0x100);
LAB_033bdfcc:
    plVar22 = (long *)*puVar21;
    if (plVar22 != (long *)0x0) {
      lVar34 = *plVar22;
      uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df598) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033be028;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar22);
LAB_033be028:
      uVar14 = (*(code *)*puVar21)(plVar22,puVar21[1]);
    }
    if (plVar18 == (long *)0x0) {
      return uVar14;
    }
  }
  func_0x022bd79c(puVar6 + -0x108);
  func_0x0258f7ac(plVar18);
  uVar37 = 0x33be0c4;
  auVar41 = func_0x022bd790();
  puVar6 = puVar6 + -0x110;
SUB_033be0c4:
  plVar15 = auVar43._8_8_;
  plVar13 = auVar41._0_8_;
  puVar29 = auVar40._8_8_;
  *(long **)(puVar6 + -0x60) = plVar39;
  *(undefined8 *)(puVar6 + -0x58) = uVar37;
  *(long **)(puVar6 + -0x50) = plVar11;
  *(undefined1 (*) [16])(puVar6 + -0x48) = auVar43;
  *(long **)(puVar6 + -0x38) = plVar30;
  *(undefined **)(puVar6 + -0x30) = puVar36;
  *(undefined1 (*) [16])(puVar6 + -0x28) = auVar40;
  *(long **)(puVar6 + -0x18) = plVar16;
  *(long **)(puVar6 + -0x10) = plVar22;
  *(long **)(puVar6 + -8) = plVar18;
  puVar36 = (undefined *)0x5e2c000;
  *(long **)(puVar6 + -0x1c0) = plVar19;
  *(long **)(puVar6 + -0x1d8) = plVar10;
  *(long *)(puVar6 + -0x1d0) = auVar41._8_8_;
  plVar12 = plVar35;
  plVar38 = plVar19;
  plVar18 = plVar20;
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
    plVar38 = plVar19;
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
  pcVar32 = (code *)0x0;
  if (plVar35 != (long *)0x0) {
    lVar34 = *plVar35;
    uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar14 != 0) {
      piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059c9f60) {
          puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033be2d8;
        }
        uVar14 = uVar14 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar14 != 0);
    }
    plVar10 = (long *)0x0;
    puVar21 = (undefined8 *)func_0x024d927c(plVar35);
LAB_033be2d8:
    puVar29 = &DAT_059df6e0;
    plVar16 = (long *)&DAT_059df8e8;
    puVar36 = &DAT_059cb2d8;
    uVar37 = (*(code *)*puVar21)(plVar35,puVar21[1]);
    *(undefined8 *)(puVar6 + -0xb8) = uVar37;
    *(undefined8 *)(puVar6 + -0x140) = 0;
    *(undefined1 **)(puVar6 + -0x138) = puVar6 + -0xb8;
    plVar19 = plVar30;
    do {
      do {
        pcVar32 = *(code **)(puVar6 + -0xb8);
        if (pcVar32 == (code *)0x0) {
          func_0x0249fb90();
LAB_033bf328:
          plVar30 = plVar19;
          func_0x0249fb90();
LAB_033bf32c:
          func_0x0249fb90();
LAB_033bf330:
          func_0x0249fb90();
          plVar35 = plVar11;
LAB_033bf334:
          func_0x0249fb88();
          goto LAB_033bf338;
        }
        lVar34 = *(long *)pcVar32;
        uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
              puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033be35c;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(pcVar32);
LAB_033be35c:
        uVar14 = (*(code *)*puVar21)(pcVar32,puVar21[1]);
        auVar42._8_8_ = plVar18;
        auVar42._0_8_ = plVar10;
        if ((uVar14 & 1) == 0) goto LAB_033bf3d0;
        pcVar32 = (code *)func_0x0249fb80(_DAT_059efcb0);
        func_0x03789cdc(pcVar32,0);
        plVar19 = *(long **)(puVar6 + -0xb8);
        plVar30 = plVar19;
        if (plVar19 == (long *)0x0) goto LAB_033bf330;
        lVar34 = *plVar19;
        uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059cb2a8) {
              puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033be3e4;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033be3e4:
        auVar41 = (*(code *)*puVar21)(plVar19,puVar21[1]);
        plVar30 = auVar41._8_8_;
        if (pcVar32 == (code *)0x0) goto LAB_033bf328;
        *(long *)(pcVar32 + 0x10) = auVar41._0_8_;
        func_0x0249f888(pcVar32 + 0x10,auVar41._0_8_);
        plVar19 = *(long **)(puVar6 + -0x1d0);
        if (plVar19 == (long *)0x0) goto LAB_033bf32c;
        lVar34 = *plVar19;
        uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
        *(code **)(puVar6 + -0x1b8) = pcVar32;
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059ca9b0) {
              puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033be470;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(plVar19);
        plVar19 = *(long **)(puVar6 + -0x1d0);
LAB_033be470:
        plVar15 = (long *)(*(code *)*puVar21)(plVar19,puVar21[1]);
        *(long **)(puVar6 + -0xc0) = plVar15;
        *(undefined8 *)(puVar6 + -0x150) = 0;
        *(undefined1 **)(puVar6 + -0x148) = puVar6 + -0xc0;
        plVar35 = plVar30;
joined_r0x033be48c:
        plVar19 = plVar35;
        if (plVar15 == (long *)0x0) {
          func_0x0249fb90();
          auVar42._8_8_ = plVar18;
          auVar42._0_8_ = plVar10;
          goto LAB_033bf344;
        }
        lVar34 = *plVar15;
        uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
              puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033be4dc;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033be4dc:
        uVar14 = (*(code *)*puVar21)(plVar15,puVar21[1]);
        if ((uVar14 & 1) != 0) {
          plVar30 = *(long **)(puVar6 + -0xc0);
          if (plVar30 == (long *)0x0) {
            func_0x0249fb90();
            auVar42._8_8_ = plVar18;
            auVar42._0_8_ = plVar10;
          }
          else {
            lVar34 = *plVar30;
            uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
            if (uVar14 != 0) {
              piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == _DAT_059cbd30) {
                  puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_033be548;
                }
                uVar14 = uVar14 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar14 != 0);
            }
            puVar21 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059cbd30,0);
LAB_033be548:
            lVar34 = (*(code *)*puVar21)(plVar30,puVar21[1]);
            uVar37 = func_0x0249fb80(_DAT_059d4870);
            func_0x028b4b8c(uVar37,*(undefined8 *)(puVar6 + -0x1b8),_DAT_05a69ee8,0);
            uVar37 = func_0x0376f250(lVar34,uVar37,0);
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar21 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            plVar11 = (long *)puVar21[5];
            if (plVar11 == (long *)0x0) {
              if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
                func_0x0249fa64();
                puVar21 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
              }
              plVar39 = (long *)*puVar21;
              plVar11 = (long *)func_0x0249fb80(_DAT_059c59c0);
              func_0x02a9aa34(plVar11,plVar39,_DAT_05a69ea0,0);
              puVar21 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x28);
              *puVar21 = plVar11;
              func_0x0249f888(puVar21,plVar11);
            }
            plVar12 = _DAT_05a429f8;
            uVar37 = func_0x026e880c(uVar37,plVar11,*(undefined8 *)(puVar6 + -0x1c0));
            plVar30 = _DAT_05a43a18;
            plVar10 = (long *)func_0x026eb75c(uVar37,(ulong)plVar35 & 0xffffffff);
            if (plVar10 == (long *)0x0) {
              func_0x0249fb90();
              auVar42._8_8_ = plVar18;
              auVar42._0_8_ = plVar30;
            }
            else {
              lVar23 = *plVar10;
              uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar14 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == _DAT_059c9f90) {
                    puVar21 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_033be6bc;
                  }
                  uVar14 = uVar14 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar14 != 0);
              }
              plVar30 = (long *)0x0;
              puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033be6bc:
              plVar19 = (long *)(*(code *)*puVar21)(plVar10,puVar21[1]);
              *(long **)(puVar6 + -200) = plVar19;
              *(long **)(puVar6 + -0x1c8) = plVar35;
              *(undefined8 *)(puVar6 + -0x160) = 0;
              *(undefined1 **)(puVar6 + -0x158) = puVar6 + -200;
              if (plVar19 != (long *)0x0) {
                do {
                  lVar23 = *plVar19;
                  uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar14 != 0) {
                    piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
                        puVar21 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
                        plVar10 = plVar30;
                        goto LAB_033be72c;
                      }
                      uVar14 = uVar14 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar14 != 0);
                  }
                  plVar10 = (long *)0x0;
                  puVar21 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033be72c:
                  uVar14 = (*(code *)*puVar21)(plVar19,puVar21[1]);
                  if ((uVar14 & 1) == 0) goto LAB_033be9a8;
                  plVar30 = *(long **)(puVar6 + -200);
                  plVar19 = plVar35;
                  if (plVar30 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar42._8_8_ = plVar18;
                    auVar42._0_8_ = plVar10;
                    goto LAB_033bf344;
                  }
                  lVar23 = *plVar30;
                  uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar14 != 0) {
                    piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == _DAT_059cb2d8) {
                        puVar21 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_033be790;
                      }
                      uVar14 = uVar14 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar14 != 0);
                  }
                  plVar10 = (long *)0x0;
                  puVar21 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033be790:
                  auVar42 = (*(code *)*puVar21)(plVar30,puVar21[1]);
                  plVar15 = auVar42._8_8_;
                  plVar30 = auVar42._0_8_;
                  if (plVar13 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar42._8_8_ = plVar18;
                    auVar42._0_8_ = plVar10;
                    goto LAB_033bf344;
                  }
                  lVar23 = *plVar13;
                  uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar14 != 0) {
                    piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == _DAT_059df8e8) {
                        puVar21 = (undefined8 *)(lVar23 + (long)(*piVar26 + 5) * 0x10 + 0x138);
                        goto LAB_033be7f8;
                      }
                      uVar14 = uVar14 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar21 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059df8e8,5);
LAB_033be7f8:
                  uVar37 = (*(code *)*puVar21)(plVar13,puVar21[1]);
                  uVar17 = 0;
                  uVar14 = func_0x036ecab8(plVar15,uVar37);
                  plVar11 = plVar15;
                  if (((uVar14 & 1) == 0) || (iVar7 = func_0x037286b0(plVar15,0), iVar7 < 2)) {
                    if (lVar34 == 0) {
                      func_0x0249fb90();
                      auVar42._8_8_ = plVar18;
                      auVar42._0_8_ = uVar17;
                      goto LAB_033bf344;
                    }
                    plVar38 = (long *)0x1;
                    plVar18 = (long *)0x0;
                    plVar12 = plVar20;
                    func_0x037789bc(lVar34,plVar13);
                  }
                  else {
                    func_0x036f9ba0(plVar15,1,0);
                    *(undefined8 *)(puVar6 + -0x1f0) = 0;
                    plVar38 = plVar20;
                    func_0x034ba910(puVar6 + -0x120,0x17);
                    uVar37 = auVar42._8_8_;
                    lVar23 = *plVar13;
                    uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    if (uVar14 != 0) {
                      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == _DAT_059e0220) {
                          puVar21 = (undefined8 *)(lVar23 + (long)(*piVar26 + 0x17) * 0x10 + 0x138);
                          plVar12 = plVar30;
                          goto LAB_033be8e0;
                        }
                        uVar14 = uVar14 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar14 != 0);
                    }
                    uVar17 = 0x17;
                    puVar21 = (undefined8 *)func_0x024d927c(plVar13);
                    auVar42._8_8_ = uVar37;
                    auVar42._0_8_ = uVar17;
                    plVar12 = plVar30;
LAB_033be8e0:
                    plVar10 = (long *)(*(code *)*puVar21)(plVar13,puVar21[1]);
                    lVar23 = _DAT_059e0280;
                    plVar18 = auVar42._8_8_;
                    if (lVar34 == 0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    if (plVar10 == (long *)0x0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    plVar15 = *(long **)(lVar34 + 0x30);
                    func_0x054ed0d0(puVar6 + -0x1b0,puVar6 + -0x120,0x50);
                    lVar24 = *plVar10;
                    uVar14 = (ulong)*(ushort *)(lVar24 + 0x12e);
                    if (uVar14 != 0) {
                      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == lVar23) {
                          plVar39 = (long *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                          goto LAB_033be96c;
                        }
                        uVar14 = uVar14 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar14 != 0);
                    }
                    plVar39 = (long *)func_0x024d927c(plVar10,lVar23,1);
LAB_033be96c:
                    pcVar32 = (code *)*plVar39;
                    func_0x054ed0d0(puVar6 + -0xb0,puVar6 + -0x1b0,0x50);
                    plVar12 = (long *)plVar39[1];
                    plVar30 = (long *)(puVar6 + -0xb0);
                    (*pcVar32)(plVar10,plVar15);
                  }
                  plVar19 = *(long **)(puVar6 + -200);
                  plVar35 = (long *)(ulong)((int)plVar35 - 1);
                  plVar11 = plVar15;
                  if (plVar19 == (long *)0x0) goto LAB_033be9a0;
                } while( true );
              }
              plVar35 = (long *)(*(ulong *)(puVar6 + -0x1c8) & 0xffffffff);
LAB_033be9a0:
              func_0x0249fb90();
              auVar42._8_8_ = plVar18;
              auVar42._0_8_ = plVar30;
              plVar19 = plVar35;
            }
          }
          goto LAB_033bf344;
        }
        plVar30 = (long *)0xb;
        plVar15 = (long *)**(undefined8 **)(puVar6 + -0x148);
        if (plVar15 != (long *)0x0) {
          lVar34 = *plVar15;
          uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar14 != 0) {
            piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059df598) {
                puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_033beb3c;
              }
              uVar14 = uVar14 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar14 != 0);
          }
          plVar10 = (long *)0x0;
          puVar21 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033beb3c:
          (*(code *)*puVar21)(plVar15,puVar21[1]);
        }
        if (*(long *)(puVar6 + -0x150) != 0) goto LAB_033bf334;
        plVar19 = plVar30;
        plVar11 = plVar35;
      } while ((int)plVar35 < 1);
      if (*(long **)(puVar6 + -0x1d8) == (long *)0x0) goto LAB_033bf33c;
      lVar34 = **(long **)(puVar6 + -0x1d8);
      uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
      pcVar32 = (code *)&DAT_059cbac8;
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059ca768) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bebc8;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c();
LAB_033bebc8:
      plVar15 = (long *)(*(code *)*puVar21)(*(undefined8 *)(puVar6 + -0x1d8),puVar21[1]);
      *(long **)(puVar6 + -0x128) = plVar15;
      *(undefined8 *)(puVar6 + -0x150) = 0;
      *(undefined1 **)(puVar6 + -0x148) = puVar6 + -0x128;
joined_r0x033bebe4:
      plVar30 = plVar35;
      plVar19 = plVar30;
      if (plVar15 == (long *)0x0) {
        func_0x0249fb90();
        auVar42._8_8_ = plVar18;
        auVar42._0_8_ = plVar10;
        goto LAB_033bf344;
      }
      lVar34 = *plVar15;
      uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bec34;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033bec34:
      uVar14 = (*(code *)*puVar21)(plVar15,puVar21[1]);
      if ((uVar14 & 1) != 0) {
        plVar15 = *(long **)(puVar6 + -0x128);
        if (plVar15 == (long *)0x0) {
          func_0x0249fb90();
          auVar42._8_8_ = plVar18;
          auVar42._0_8_ = plVar10;
        }
        else {
          lVar34 = *plVar15;
          uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar14 != 0) {
            piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059cbac8) {
                puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_033bec98;
              }
              uVar14 = uVar14 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar14 != 0);
          }
          puVar21 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059cbac8,0);
LAB_033bec98:
          plVar15 = (long *)(*(code *)*puVar21)(plVar15,puVar21[1]);
          uVar37 = func_0x0249fb80(_DAT_059d4870);
          func_0x028b4b8c(uVar37,*(undefined8 *)(puVar6 + -0x1b8),_DAT_05a69ee8,0);
          uVar37 = func_0x034bc5a4(plVar15,uVar37,0);
          if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puVar21 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
          plVar11 = (long *)puVar21[6];
          if (plVar11 == (long *)0x0) {
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
              puVar21 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            }
            plVar39 = (long *)*puVar21;
            plVar11 = (long *)func_0x0249fb80(_DAT_059c6b58);
            func_0x02a9aa34(plVar11,plVar39,_DAT_05a69ea8,0);
            puVar21 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x30);
            *puVar21 = plVar11;
            func_0x0249f888(puVar21,plVar11);
          }
          plVar12 = _DAT_05a42a10;
          uVar37 = func_0x026e880c(uVar37,plVar11,*(undefined8 *)(puVar6 + -0x1c0));
          plVar10 = _DAT_05a43a78;
          plVar35 = (long *)func_0x026eb75c(uVar37,(ulong)plVar30 & 0xffffffff);
          if (plVar35 == (long *)0x0) {
            func_0x0249fb90();
            auVar42._8_8_ = plVar18;
            auVar42._0_8_ = plVar10;
          }
          else {
            lVar34 = *plVar35;
            uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
            if (uVar14 != 0) {
              piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == _DAT_059ca9d0) {
                  puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_033bee0c;
                }
                uVar14 = uVar14 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar14 != 0);
            }
            plVar10 = (long *)0x0;
            puVar21 = (undefined8 *)func_0x024d927c(plVar35);
LAB_033bee0c:
            plVar19 = (long *)(*(code *)*puVar21)(plVar35,puVar21[1]);
            *(long **)(puVar6 + -0x130) = plVar19;
            *(undefined8 *)(puVar6 + -0x160) = 0;
            *(undefined1 **)(puVar6 + -0x158) = puVar6 + -0x130;
            plVar35 = plVar30;
            plVar39 = plVar30;
            if (plVar19 != (long *)0x0) {
              do {
                lVar34 = *plVar19;
                uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
                if (uVar14 != 0) {
                  piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
                      puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                      goto LAB_033bee7c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar14 != 0);
                }
                plVar10 = (long *)0x0;
                puVar21 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bee7c:
                uVar14 = (*(code *)*puVar21)(plVar19,puVar21[1]);
                if ((uVar14 & 1) == 0) goto LAB_033bf044;
                plVar30 = *(long **)(puVar6 + -0x130);
                plVar19 = plVar35;
                if (plVar30 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar42._8_8_ = plVar18;
                  auVar42._0_8_ = plVar10;
                  goto LAB_033bf344;
                }
                lVar34 = *plVar30;
                uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
                if (uVar14 != 0) {
                  piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == _DAT_059cbd50) {
                      puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
                      goto LAB_033beee8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar14 != 0);
                }
                plVar10 = (long *)0x0;
                puVar21 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033beee8:
                uVar37 = (*(code *)*puVar21)(plVar30,puVar21[1]);
                if (plVar13 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar42._8_8_ = plVar18;
                  auVar42._0_8_ = plVar10;
                  goto LAB_033bf344;
                }
                lVar34 = *plVar13;
                uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
                if (uVar14 != 0) {
                  piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == _DAT_059df8e8) {
                      puVar21 = (undefined8 *)(lVar34 + (long)(*piVar26 + 5) * 0x10 + 0x138);
                      goto LAB_033bef4c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar14 != 0);
                }
                puVar21 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059df8e8,5);
LAB_033bef4c:
                uVar17 = (*(code *)*puVar21)(plVar13,puVar21[1]);
                uVar14 = func_0x036ecab8(uVar37,uVar17,0);
                if (((uVar14 & 1) == 0) || (iVar7 = func_0x037286b0(uVar37,0), iVar7 < 2)) {
                  plVar11 = (long *)func_0x0249fb80(_DAT_059d4870);
                  plVar12 = (long *)0x0;
                  uVar17 = _DAT_05a69ee0;
                  func_0x028b4b8c(plVar11,*(undefined8 *)(puVar6 + -0x1b8));
                  if (plVar15 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar42._8_8_ = plVar18;
                    auVar42._0_8_ = uVar17;
                    goto LAB_033bf344;
                  }
                  lVar34 = *plVar15;
                  uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
                  if (uVar14 != 0) {
                    piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == _DAT_059defe8) {
                        puVar21 = (undefined8 *)(lVar34 + (long)(*piVar26 + 0x1d) * 0x10 + 0x138);
                        goto LAB_033bf01c;
                      }
                      uVar14 = uVar14 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar21 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059defe8,0x1d);
LAB_033bf01c:
                  plVar12 = (long *)puVar21[1];
                  plVar10 = plVar11;
                  (*(code *)*puVar21)(plVar15,uVar37);
                }
                else {
                  plVar10 = (long *)0x0;
                  func_0x036f9ba0(uVar37,1);
                }
                plVar19 = *(long **)(puVar6 + -0x130);
                plVar35 = (long *)(ulong)((int)plVar35 - 1);
                if (plVar19 == (long *)0x0) goto LAB_033bf03c;
              } while( true );
            }
            plVar35 = (long *)((ulong)plVar30 & 0xffffffff);
LAB_033bf03c:
            func_0x0249fb90();
            auVar42._8_8_ = plVar18;
            auVar42._0_8_ = plVar10;
            plVar19 = plVar35;
          }
        }
        goto LAB_033bf344;
      }
      plVar11 = (long *)0x2;
      plVar35 = (long *)0x2;
      pcVar32 = (code *)**(undefined8 **)(puVar6 + -0x148);
      if (pcVar32 != (code *)0x0) {
        lVar34 = *(long *)pcVar32;
        uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar14 != 0) {
          piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df598) {
              puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033bf1bc;
            }
            uVar14 = uVar14 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar14 != 0);
        }
        plVar10 = (long *)0x0;
        puVar21 = (undefined8 *)func_0x024d927c(pcVar32);
LAB_033bf1bc:
        (*(code *)*puVar21)(pcVar32,puVar21[1]);
      }
    } while (*(long *)(puVar6 + -0x150) == 0);
LAB_033bf338:
    func_0x0249fb88();
LAB_033bf33c:
    func_0x0249fb90();
    plVar11 = plVar35;
  }
  func_0x0249fb90();
  auVar42._8_8_ = plVar18;
  auVar42._0_8_ = plVar10;
  plVar19 = plVar30;
LAB_033bf344:
  auVar43 = func_0x022bd790();
  plVar15 = auVar43._8_8_;
  func_0x022bd79c(puVar6 + -0x150);
  if (auVar43._8_4_ == 1) {
    puVar21 = (undefined8 *)func_0x054ed080(auVar43._0_8_);
    *(undefined8 *)(puVar6 + -0x140) = *puVar21;
    func_0x054ed090();
LAB_033bf3d0:
    uVar37 = auVar42._8_8_;
    plVar20 = (long *)**(undefined8 **)(puVar6 + -0x138);
    if (plVar20 != (long *)0x0) {
      lVar34 = *plVar20;
      uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df598) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bf430;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      uVar17 = 0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar20);
      auVar42._8_8_ = uVar37;
      auVar42._0_8_ = uVar17;
LAB_033bf430:
      (*(code *)*puVar21)(plVar20,puVar21[1]);
    }
    if (*(long *)(puVar6 + -0x140) == 0) {
      return 0;
    }
    uVar37 = func_0x0249fb88();
    auVar43._8_8_ = plVar15;
    auVar43._0_8_ = uVar37;
  }
  func_0x022bd79c(puVar6 + -0x140);
  func_0x0258f7ac(auVar43._0_8_);
  auVar41 = func_0x022bd790();
  plVar30 = auVar42._8_8_;
  plVar10 = auVar42._0_8_;
  lVar34 = auVar41._8_8_;
  plVar15 = auVar41._0_8_;
  *(long **)(puVar6 + -0x250) = plVar39;
  *(undefined8 *)(puVar6 + -0x248) = 0x33bf480;
  *(long **)(puVar6 + -0x240) = plVar11;
  *(undefined1 (*) [16])(puVar6 + -0x238) = auVar43;
  *(long **)(puVar6 + -0x228) = plVar19;
  *(code **)(puVar6 + -0x220) = pcVar32;
  *(long **)(puVar6 + -0x218) = plVar13;
  *(undefined **)(puVar6 + -0x210) = puVar29;
  *(long **)(puVar6 + -0x208) = plVar16;
  *(undefined **)(puVar6 + -0x200) = puVar36;
  *(long **)(puVar6 + -0x1f8) = plVar20;
  lVar23 = 0x5e2c000;
  puVar36 = &DAT_059de230;
  plVar39 = plVar12;
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
  plVar19 = (long *)func_0x0249fb80(_DAT_059de230);
  plVar18 = (long *)0x0;
  func_0x034a1470(plVar19,lVar34);
  if (lVar34 != 0) {
    plVar11 = (long *)&DAT_059e2c00;
    puVar36 = (undefined *)func_0x028a379c(lVar34,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    plVar20 = (long *)func_0x03530158(puVar36,0);
    if (plVar15 != (long *)0x0) {
      plVar38 = (long *)0x1;
      plVar30 = (long *)0x0;
      plVar18 = plVar10;
      func_0x037789bc(plVar15,lVar34);
      plVar39 = plVar20;
      if (plVar12 != (long *)0x0) {
        lVar23 = func_0x036d5f70(plVar12,0);
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = *(long *)(lVar23 + 0x20);
        }
        uVar37 = func_0x03659ee0(lVar34,0);
        plVar18 = (long *)0x0;
        plVar35 = (long *)func_0x036d3908(plVar12,uVar37);
        plVar39 = plVar20;
        if (plVar35 != (long *)0x0) {
          lVar24 = *plVar35;
          uVar14 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar14 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059dfbc0) {
                puVar21 = (undefined8 *)(lVar24 + (long)(*piVar26 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar14 = uVar14 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar14 != 0);
          }
          plVar18 = (long *)0x6;
          puVar21 = (undefined8 *)func_0x024d927c(plVar35);
          plVar39 = plVar20;
LAB_033bf694:
          plVar20 = (long *)(*(code *)*puVar21)(plVar35,puVar21[1]);
          lVar24 = func_0x036d5f70(plVar12,0);
          if (lVar24 == 0) {
            uVar37 = 0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = plVar20;
            auVar43 = auVar4 << 0x40;
          }
          else {
            uVar37 = *(undefined8 *)(lVar24 + 0x28);
            auVar43._8_8_ = plVar20;
            auVar43._0_8_ = uVar37;
          }
          if (plVar20 != (long *)0x0) {
            lVar24 = *plVar20;
            uVar14 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar14 != 0) {
              piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == _DAT_059df030) {
                  puVar21 = (undefined8 *)(lVar24 + (long)(*piVar26 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar14 = uVar14 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar14 != 0);
            }
            puVar21 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059df030,10);
LAB_033bf720:
            plVar39 = (long *)(*(code *)*puVar21)(plVar20,lVar34,uVar37,puVar21[1]);
            auVar3._8_8_ = plVar39;
            auVar3._0_8_ = uVar37;
            auVar2._8_8_ = plVar39;
            auVar2._0_8_ = uVar37;
            auVar1._8_8_ = plVar39;
            auVar1._0_8_ = uVar37;
            auVar43._8_8_ = plVar39;
            auVar43._0_8_ = uVar37;
            if (plVar39 != (long *)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              plVar30 = (long *)func_0x03530158(puVar36,0);
              *(undefined8 *)(puVar6 + -0x350) = 0;
              plVar18 = plVar10;
              plVar38 = plVar19;
              lVar24 = func_0x03774f00(plVar15,lVar34);
              if ((lVar24 == 0) || (auVar43 = auVar1, *(long *)(lVar24 + 0x10) == 0))
              goto LAB_033bfa8c;
              plVar18 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              plVar19 = (long *)(ulong)*(uint *)(plVar18[1] + 0xfc);
              uVar17 = func_0x0249f90c(*(long *)(lVar24 + 0x10),*(undefined8 *)(*plVar18 + 0x80));
              plVar18 = plVar19;
              func_0x054ed0d0(puVar6 + -0x2a0,uVar17);
              auVar43 = auVar2;
              if (*(long *)(lVar34 + 0x220) == 0) goto LAB_033bfa8c;
              plVar19 = (long *)(ulong)*(uint *)(puVar6 + -0x2a0);
              plVar18 = (long *)0x0;
              uVar14 = func_0x0387e780(*(long *)(lVar34 + 0x220),plVar19);
              if ((uVar14 & 1) == 0) {
                auVar43 = auVar3;
                if (*(long *)(lVar34 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(lVar34 + 0x220),lVar34,plVar15,plVar19,0);
              }
            }
            plVar20 = *(long **)(lVar34 + 0x1e0);
            lVar24 = plVar15[6];
            auVar43._8_8_ = lVar24;
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar38 = (long *)func_0x03530158(puVar36,0);
            plVar30 = (long *)0x0;
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
            plVar18 = plVar10;
            plVar39 = plVar10;
            func_0x034ba874(puVar6 + -0x2f0,6);
            lVar5 = _DAT_059e0280;
            plVar19 = (long *)0x0;
            if (plVar20 != (long *)0x0) {
              func_0x054ed0d0(puVar6 + -0x340,puVar6 + -0x2f0,0x50);
              lVar25 = *plVar20;
              uVar14 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar14 != 0) {
                piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == lVar5) {
                    puVar21 = (undefined8 *)(lVar25 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar14 != 0);
              }
              puVar21 = (undefined8 *)func_0x024d927c(plVar20,lVar5,1);
LAB_033bf8d8:
              pcVar32 = (code *)*puVar21;
              func_0x054ed0d0(puVar6 + -0x2a0,puVar6 + -0x340,0x50);
              (*pcVar32)(plVar20,lVar24,puVar6 + -0x2a0,puVar21[1]);
              plVar10 = (long *)func_0x036f10d8(plVar12,lVar34,0);
              lVar24 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar24,_DAT_059feeb8);
              if ((lVar23 == 0) || (*(int *)(lVar23 + 0x18) < 1)) {
LAB_033bf9f8:
                uVar37 = func_0x03659ee0(lVar34,0);
                uVar37 = func_0x036d62d4(plVar12,uVar37,0);
                lVar23 = plVar15[6];
                uVar17 = func_0x0249fb80(_DAT_059d8a28);
                *(undefined8 *)(puVar6 + -0x350) = 0;
                func_0x0385d0a8(uVar17,uVar37,plVar10,lVar23,lVar24,1,0,0);
                uVar14 = func_0x0366bae8(lVar34,uVar17,0,0);
                return uVar14;
              }
              plVar19 = (long *)0x0;
              auVar43._8_8_ = &DAT_05a17ad0;
              auVar43._0_8_ = &DAT_059d9e60;
              plVar16 = (long *)0xffffffffffffffff;
              do {
                plVar18 = (long *)(puVar6 + -0x2a0);
                plVar39 = _DAT_05a17ad0;
                func_0x0282f3c4(lVar23,plVar19);
                plVar11 = *(long **)(puVar6 + -0x2a0);
                if (plVar11 != (long *)0x0) {
                  if ((*(byte *)(_DAT_059d9e60 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar11 + 200) +
                                (ulong)*(byte *)(_DAT_059d9e60 + 0x130) * 8 + -8) == _DAT_059d9e60))
                  {
                    *(int *)(puVar6 + -0x290) = (int)plVar11[2];
                    *(undefined8 *)(puVar6 + -0x2a0) = _DAT_059dce58;
                    *(undefined8 *)(puVar6 + -0x298) = 0xffffffffffffffff;
                    uVar37 = func_0x045e0acc(puVar6 + -0x2a0,0);
                    puVar36 = (undefined *)0x0;
                    if (lVar24 == 0) break;
                    *(undefined4 *)(puVar6 + -0x2f0) = *(undefined4 *)((long)plVar11 + 0x14);
                    func_0x02a3c128(lVar24,uVar37,puVar6 + -0x2f0,_DAT_059feee0);
                  }
                }
                uVar8 = (int)plVar19 + 1;
                plVar19 = (long *)(ulong)uVar8;
                if (*(int *)(lVar23 + 0x18) <= (int)uVar8) goto LAB_033bf9f8;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_033bfa8c:
  auVar44 = func_0x0249fb90();
  uVar27 = auVar44._0_8_;
  *(undefined8 *)(puVar6 + -0x390) = 0x33bfa90;
  *(long **)(puVar6 + -0x388) = plVar19;
  *(undefined **)(puVar6 + -0x380) = puVar36;
  *(long **)(puVar6 + -0x378) = plVar10;
  *(long *)(puVar6 + -0x370) = lVar23;
  *(long **)(puVar6 + -0x368) = plVar16;
  *(long **)(puVar6 + -0x360) = plVar12;
  *(long *)(puVar6 + -0x358) = lVar34;
  uVar14 = uVar27;
  plVar10 = plVar18;
  plVar35 = plVar39;
  plVar19 = plVar38;
  plVar20 = plVar30;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    uVar14 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  *(undefined8 *)(puVar6 + -0x398) = 0;
  if (((ulong)plVar30 & 1) == 0) {
    uVar37 = 0;
    if (uVar27 == 0) goto LAB_033bfd48;
    uVar14 = 0;
    if (*(long *)(uVar27 + 0x2e8) != 0) {
      plVar19 = (long *)0x0;
      plVar10 = plVar18;
      plVar35 = plVar39;
      uVar14 = func_0x034ccd58(*(long *)(uVar27 + 0x2e8),uVar27);
    }
  }
  if (plVar38 == (long *)0x0) {
    return uVar14;
  }
  lVar34 = *plVar38;
  uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
  if (uVar14 != 0) {
    piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == _DAT_059ca9b8) {
        puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_033bfb80;
      }
      uVar14 = uVar14 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar14 != 0);
  }
  plVar10 = (long *)0x0;
  puVar21 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033bfb80:
  plVar16 = (long *)(*(code *)*puVar21)(plVar38,puVar21[1]);
  *(long **)(puVar6 + -0x398) = plVar16;
  *(undefined8 *)(puVar6 + -0x3a8) = 0;
  *(undefined1 **)(puVar6 + -0x3a0) = puVar6 + -0x398;
  if (plVar16 != (long *)0x0) {
    plVar39 = (long *)&DAT_059df6e0;
    plVar18 = (long *)&DAT_059cbd38;
    plVar38 = plVar16;
    do {
      lVar34 = *plVar38;
      uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bfbfc;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033bfbfc:
      uVar14 = (*(code *)*puVar21)(plVar38,puVar21[1]);
      if ((uVar14 & 1) == 0) goto LAB_033bfcac;
      plVar38 = *(long **)(puVar6 + -0x398);
      if (plVar38 == (long *)0x0) {
        func_0x0249fb90();
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      lVar34 = *plVar38;
      uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059cbd38) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bfc60;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033bfc60:
      (*(code *)*puVar21)(puVar6 + -0x3f8,plVar38,puVar21[1]);
      if (*(int *)(puVar6 + -0x3f8) == 3) {
        if (auVar44._8_8_ == 0) goto LAB_033bfd3c;
        plVar10 = (long *)0x0;
        lVar34 = func_0x0376e450(auVar44._8_8_,*(undefined8 *)(puVar6 + -0x3ec));
        if (lVar34 != 0) {
          plVar10 = (long *)0x0;
          func_0x036efea8(lVar34,uVar27);
        }
      }
      plVar38 = *(long **)(puVar6 + -0x398);
    } while (plVar38 != (long *)0x0);
  }
  uVar14 = func_0x0249fb90();
LAB_033bfcac:
  lVar34 = 0;
  puVar21 = (undefined8 *)(puVar6 + -0x398);
  do {
    plVar16 = (long *)*puVar21;
    auVar44._8_8_ = lVar34;
    auVar44._0_8_ = plVar16;
    if (plVar16 != (long *)0x0) {
      lVar23 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar14 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df598) {
            puVar21 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar14 = uVar14 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar14 != 0);
      }
      plVar10 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar16);
LAB_033bfd10:
      uVar14 = (*(code *)*puVar21)(plVar16,puVar21[1]);
    }
    if (lVar34 == 0) {
      return uVar14;
    }
LAB_033bfd40:
    uVar37 = auVar44._0_8_;
    func_0x0249fb88(auVar44._8_8_);
LAB_033bfd48:
    auVar45 = func_0x0249fb90();
    uVar17 = auVar45._0_8_;
    if (auVar45._8_4_ != 1) goto LAB_033bfd90;
    plVar16 = (long *)func_0x054ed080(uVar17);
    lVar34 = *plVar16;
    *(long *)(puVar6 + -0x3a8) = lVar34;
    uVar14 = func_0x054ed090();
    puVar21 = *(undefined8 **)(puVar6 + -0x3a0);
  } while( true );
LAB_033bd954:
  plVar38 = *(long **)(puVar6 + -0x68);
  if (plVar38 != (long *)0x0) {
    lVar34 = *plVar38;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059df598) {
          puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033bd9b8;
        }
        uVar27 = uVar27 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar27 != 0);
    }
    plVar16 = (long *)0x0;
    puVar21 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033bd9b8:
    (*(code *)*puVar21)(plVar38,puVar21[1]);
  }
  plVar10 = *(long **)(puVar6 + -0x90);
  plVar12 = (long *)0x0;
  if (plVar10 == (long *)0x0) goto LAB_033bdce8;
  lVar34 = *plVar10;
  uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
  if (uVar27 != 0) {
    piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == _DAT_059ca768) {
        puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_033bda24;
      }
      uVar27 = uVar27 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar27 != 0);
  }
  plVar16 = (long *)0x0;
  puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bda24:
  plVar10 = (long *)(*(code *)*puVar21)(plVar10,puVar21[1]);
  *(long **)(puVar6 + -0x70) = plVar10;
  *(undefined8 *)(puVar6 + -0x80) = 0;
  *(undefined1 **)(puVar6 + -0x78) = puVar6 + -0x70;
  if (plVar10 != (long *)0x0) {
    do {
      lVar34 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar27 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bda90;
          }
          uVar27 = uVar27 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar27 != 0);
      }
      plVar16 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bda90:
      uVar27 = (*(code *)*puVar21)(plVar10,puVar21[1]);
      if ((uVar27 & 1) == 0) goto LAB_033bdb9c;
      plVar10 = *(long **)(puVar6 + -0x70);
      if (plVar10 == (long *)0x0) {
        uVar37 = func_0x0249fb90();
        plVar12 = (long *)0x0;
        goto LAB_033bdd00;
      }
      lVar34 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar27 != 0) {
        piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059cbac8) {
            puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033bdaf4;
          }
          uVar27 = uVar27 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar27 != 0);
      }
      plVar16 = (long *)0x0;
      puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bdaf4:
      plVar10 = (long *)(*(code *)*puVar21)(plVar10,puVar21[1]);
      if (0 < (int)plVar30) {
        if (plVar10 == (long *)0x0) {
          uVar37 = func_0x0249fb90();
          plVar12 = (long *)0x0;
          goto LAB_033bdd00;
        }
        do {
          lVar34 = *plVar10;
          uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar27 != 0) {
            piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059defe8) {
                puVar21 = (undefined8 *)(lVar34 + (long)(*piVar26 + 0x1f) * 0x10 + 0x138);
                goto LAB_033bdb60;
              }
              uVar27 = uVar27 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar27 != 0);
          }
          puVar21 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059defe8,0x1f);
LAB_033bdb60:
          plVar18 = (long *)puVar21[1];
          plVar15 = (long *)0x0;
          plVar16 = plVar19;
          uVar27 = (*(code *)*puVar21)(plVar10,plVar35);
          if ((uVar27 & 1) == 0) goto LAB_033bdb8c;
          iVar7 = (int)plVar30;
          plVar30 = (long *)(ulong)(iVar7 - 1);
        } while (1 < iVar7);
        plVar30 = (long *)0x0;
      }
LAB_033bdb8c:
      plVar10 = *(long **)(puVar6 + -0x70);
      if (plVar10 == (long *)0x0) break;
    } while( true );
  }
  plVar12 = (long *)0x0;
  uVar37 = func_0x0249fb90();
  goto LAB_033bdd00;
LAB_033bdb9c:
  plVar30 = (long *)0xd;
  plVar10 = *(long **)(puVar6 + -0x70);
  if (plVar10 != (long *)0x0) {
    lVar34 = *plVar10;
    uVar27 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar27 != 0) {
      piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059df598) {
          puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033bdc04;
        }
        uVar27 = uVar27 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar27 != 0);
    }
    plVar16 = (long *)0x0;
    puVar21 = (undefined8 *)func_0x024d927c(plVar10);
LAB_033bdc04:
    uVar27 = (*(code *)*puVar21)(plVar10,puVar21[1]);
  }
  plVar12 = *(long **)(puVar6 + -0xa0);
  plVar10 = *(long **)(puVar6 + -0x98);
  plVar22 = (long *)(ulong)*(uint *)(plVar12 + 3);
  plVar11 = (long *)((long)plVar11 + 1);
  if ((long)(int)*(uint *)(plVar12 + 3) <= (long)plVar11) {
    return uVar27;
  }
  goto LAB_033bd790;
LAB_033be9a8:
  plVar19 = *(long **)(puVar6 + -200);
  if (plVar19 != (long *)0x0) {
    lVar34 = *plVar19;
    uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar14 != 0) {
      piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059df598) {
          puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033bea0c;
        }
        uVar14 = uVar14 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar14 != 0);
    }
    plVar10 = (long *)0x0;
    puVar21 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bea0c:
    (*(code *)*puVar21)(plVar19,puVar21[1]);
  }
  plVar15 = *(long **)(puVar6 + -0xc0);
  goto joined_r0x033be48c;
LAB_033bf044:
  plVar11 = (long *)0xc;
  plVar19 = *(long **)(puVar6 + -0x130);
  if (plVar19 != (long *)0x0) {
    lVar34 = *plVar19;
    uVar14 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar14 != 0) {
      piVar26 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059df598) {
          puVar21 = (undefined8 *)(lVar34 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033bf0ac;
        }
        uVar14 = uVar14 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar14 != 0);
    }
    plVar10 = (long *)0x0;
    puVar21 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bf0ac:
    (*(code *)*puVar21)(plVar19,puVar21[1]);
  }
  plVar15 = *(long **)(puVar6 + -0x128);
  goto joined_r0x033bebe4;
LAB_033bfd90:
  func_0x022bd79c(puVar6 + -0x3a8);
  func_0x0258f7ac(uVar17);
  auVar41 = func_0x022bd790();
  auVar40._8_8_ = plVar10;
  auVar40._0_8_ = auVar41._8_8_;
  puVar36 = auVar41._0_8_;
  *(undefined8 *)(puVar6 + -0x440) = 0x33bfda4;
  *(undefined8 *)(puVar6 + -0x438) = 0x5e2c000;
  *(ulong *)(puVar6 + -0x430) = (ulong)plVar30 & 0xffffffff;
  *(long **)(puVar6 + -0x428) = plVar18;
  *(long **)(puVar6 + -0x420) = plVar39;
  *(long **)(puVar6 + -0x418) = plVar38;
  *(undefined8 *)(puVar6 + -0x410) = uVar37;
  *(undefined8 *)(puVar6 + -0x408) = uVar17;
  puVar6[-0x444] = 0;
  uVar8 = func_0x033bb508();
  plVar30 = (long *)(ulong)uVar8;
  if ((uVar8 & 1) == 0) {
    return (ulong)(uVar8 & 1);
  }
  uVar37 = 0x33bfe00;
  puVar6 = puVar6 + -0x450;
  plVar18 = plVar20;
  plVar22 = plVar19;
  plVar16 = plVar35;
  plVar39 = plVar15;
  goto SUB_033be0c4;
}


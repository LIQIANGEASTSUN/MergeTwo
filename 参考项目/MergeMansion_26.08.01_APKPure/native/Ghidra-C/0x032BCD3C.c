/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void RemoveItemsFromBoards(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<GameLogic.Player.Board.MergeBoard> mergeBoards, System.Collections.Generic.IEnumerable`1<System.Int32>[] items, System.Int32[] amounts, Metaplay.Core.MetaTime currentTime)
 * Ghidra function entry: 033bcd3c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033bfdfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033bf1f8) */
/* WARNING: Removing unreachable block (ram,0x033bdc20) */
/* WARNING: Removing unreachable block (ram,0x033beb58) */
/* WARNING: Removing unreachable block (ram,0x033bf21c) */
/* WARNING: Removing unreachable block (ram,0x033bf0c4) */
/* WARNING: Removing unreachable block (ram,0x033bf1dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_033bcd3c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                   long *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long **pplVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  undefined *puVar33;
  code *pcVar34;
  long *unaff_x25;
  long *plVar35;
  undefined *unaff_x26;
  undefined *puVar36;
  undefined8 uVar37;
  long *plVar38;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined8 auStack_130 [2];
  undefined *puStack_120;
  long *plStack_118;
  undefined *puStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long **pplStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  long *plStack_68;
  
  uVar32 = 0x5e2c000;
  plVar10 = param_1;
  plVar16 = param_3;
  plVar21 = param_4;
  plVar20 = param_5;
  if ((bRam0000000005e2c3b7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059df6e0);
    plVar10 = (long *)func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2c3b7 = 1;
  }
  plStack_68 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    if ((int)param_3[3] < 1) {
      return plVar10;
    }
    unaff_x29 = &DAT_059df6e0;
    unaff_x28 = &DAT_059cbd30;
    unaff_x27 = &DAT_059e2c00;
    unaff_x26 = (undefined *)0x0;
    puVar23 = (undefined *)(param_3[3] & 0xffffffff);
    plStack_80 = param_3;
LAB_033bcdf4:
    param_3 = plStack_80;
    if (unaff_x26 < puVar23) {
      if (param_4 == (long *)0x0) goto LAB_033bd0bc;
      if ((undefined *)(ulong)*(uint *)(param_4 + 3) <= unaff_x26) goto LAB_033bd0c0;
      if (param_2 == (long *)0x0) goto LAB_033bd0bc;
      lVar24 = *param_2;
      plVar10 = (long *)plStack_80[(long)(unaff_x26 + 4)];
      uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
      uVar32 = (ulong)*(uint *)((long)param_4 + (long)unaff_x26 * 4 + 0x20);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca9b0) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            plVar12 = plVar21;
            goto LAB_033bce74;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      plVar16 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(param_2);
      plVar12 = plVar21;
LAB_033bce74:
      plStack_68 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
      pplStack_70 = &plStack_68;
      uStack_78 = 0;
      plVar21 = plVar12;
      if (plStack_68 != (long *)0x0) {
        do {
          plVar31 = plStack_68;
          lVar24 = *plStack_68;
          uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                plVar21 = plVar12;
                goto LAB_033bcee0;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          plVar16 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x024d927c(plStack_68);
          plVar21 = plVar12;
LAB_033bcee0:
          plVar12 = (long *)(*(code *)*puVar11)(plVar31,puVar11[1]);
          unaff_x25 = plStack_68;
          if (((ulong)plVar12 & 1) == 0) goto LAB_033bcfbc;
          if (plStack_68 == (long *)0x0) {
            puVar23 = (undefined *)func_0x0249fb90();
            goto LAB_033bd0cc;
          }
          lVar24 = *plStack_68;
          uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cbd30) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                plVar12 = plVar21;
                goto LAB_033bcf44;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          plVar16 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x024d927c(plStack_68);
          plVar12 = plVar21;
LAB_033bcf44:
          lVar24 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
          if (0 < (int)uVar32) {
            do {
              plVar21 = plVar12;
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
                plVar21 = plVar12;
              }
              plVar12 = (long *)func_0x03530158(param_5,0);
              if (lVar24 == 0) {
                puVar23 = (undefined *)func_0x0249fb90();
                unaff_x25 = (long *)0x0;
                goto LAB_033bd0cc;
              }
              plVar20 = (long *)0x0;
              param_6 = (long *)0x0;
              plVar16 = plVar10;
              uVar28 = func_0x037878dc(lVar24,param_1);
              if ((uVar28 & 1) == 0) goto LAB_033bcfac;
              iVar8 = (int)uVar32;
              uVar32 = (ulong)(iVar8 - 1);
            } while (1 < iVar8);
            uVar32 = 0;
          }
LAB_033bcfac:
          plVar21 = plVar12;
          unaff_x25 = plStack_68;
          if (plStack_68 == (long *)0x0) break;
        } while( true );
      }
      puVar23 = (undefined *)func_0x0249fb90();
      goto LAB_033bd0cc;
    }
    goto LAB_033bd0c0;
  }
LAB_033bd0bc:
  func_0x0249fb90();
LAB_033bd0c0:
  func_0x0249fb98();
  puVar23 = (undefined *)func_0x0249fb88(param_3);
LAB_033bd0cc:
  func_0x022bd79c(&uStack_78);
  func_0x0258f7ac(puVar23);
  auVar39 = func_0x022bd790();
  plVar31 = auVar39._8_8_;
  plVar12 = auVar39._0_8_;
  uStack_d0 = 0x33bd0e4;
  plVar10 = (long *)0x5e2c000;
  plVar30 = (long *)((ulong)plVar16 & 0xffffffff);
  puStack_c0 = unaff_x26;
  plStack_b8 = unaff_x25;
  puStack_b0 = puVar23;
  plStack_a8 = param_1;
  plStack_a0 = param_2;
  uStack_98 = uVar32;
  plStack_90 = param_4;
  plStack_88 = param_5;
  if ((bRam0000000005e2c3b8 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3b8 = 1;
  }
  plStack_c8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    lVar24 = *plVar12;
    puVar23 = &DAT_059e0220;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x57) * 0x10 + 0x138);
          goto LAB_033bd1b8;
        }
        uVar32 = uVar32 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar32 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0220,0x57);
LAB_033bd1b8:
    plVar16 = (long *)puVar11[1];
    plVar13 = (long *)(*(code *)*puVar11)(plVar12,1);
    if (plVar13 != (long *)0x0) {
      lVar24 = *plVar13;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca9b0) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            plVar17 = plVar16;
            goto LAB_033bd224;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar17 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bd224:
      unaff_x25 = (long *)&DAT_059df6e0;
      unaff_x26 = &DAT_059cbd30;
      param_1 = (long *)&DAT_059df598;
      plStack_c8 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
      pplStack_d8 = &plStack_c8;
      plStack_e0 = (long *)0x0;
      while (plVar10 = plStack_c8, plStack_c8 != (long *)0x0) {
        lVar24 = *plStack_c8;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              plVar16 = plVar17;
              goto LAB_033bd2a8;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar16 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033bd2a8:
        plVar17 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        plVar13 = plStack_c8;
        if (((ulong)plVar17 & 1) == 0) {
          plVar30 = (long *)0x0;
          pplVar6 = &plStack_c8;
          goto LAB_033bd3a4;
        }
        plVar10 = plStack_c8;
        if (plStack_c8 == (long *)0x0) goto LAB_033bd428;
        lVar24 = *plStack_c8;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059cbd30) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033bd30c;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar16 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033bd30c:
        lVar24 = (*(code *)*puVar11)(plVar13,puVar11[1]);
        lVar25 = *plVar12;
        uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
              puVar11 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0xc) * 0x10 + 0x138);
              goto LAB_033bd36c;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar16 = (long *)0xc;
        puVar11 = (undefined8 *)func_0x024d927c(plVar12);
LAB_033bd36c:
        plVar17 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
        plVar10 = (long *)0x0;
        if (lVar24 == 0) goto LAB_033bd42c;
        param_6 = (long *)0x0;
        plVar21 = plVar31;
        plVar20 = plVar30;
        func_0x03781b10(lVar24,plVar12);
      }
      func_0x0249fb90();
      plVar16 = plVar17;
LAB_033bd428:
      func_0x0249fb90();
LAB_033bd42c:
      func_0x0249fb90();
    }
  }
  func_0x0249fb90();
  while( true ) {
    auVar44 = func_0x0249fb88(plVar30);
    uStack_e8 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) break;
    puVar11 = (undefined8 *)func_0x054ed080(uStack_e8);
    plVar30 = (long *)*puVar11;
    plStack_e0 = plVar30;
    plVar17 = (long *)func_0x054ed090();
    pplVar6 = pplStack_d8;
LAB_033bd3a4:
    plVar31 = *pplVar6;
    if (plVar31 != (long *)0x0) {
      lVar24 = *plVar31;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *param_1) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bd3f8;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar16 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033bd3f8:
      plVar17 = (long *)(*(code *)*puVar11)(plVar31,puVar11[1]);
    }
    if (plVar30 == (long *)0x0) {
      return plVar17;
    }
  }
  func_0x022bd79c(&plStack_e0);
  func_0x0258f7ac(uStack_e8);
  auVar39 = func_0x022bd790();
  pplVar6 = (long **)auStack_130;
  auStack_130[0] = 0x33bd494;
  puVar36 = &DAT_059d7518;
  uVar32 = (ulong)plVar20 & 0xffffffff;
  puVar33 = (undefined *)((ulong)plVar21 & 0xffffffff);
  plVar30 = plVar16;
  plVar13 = plVar21;
  plVar17 = plVar20;
  plVar19 = param_6;
  puStack_120 = unaff_x26;
  plStack_118 = unaff_x25;
  puStack_110 = puVar23;
  plStack_108 = param_1;
  plStack_100 = plVar10;
  plStack_f8 = plVar12;
  plStack_f0 = plVar31;
  if ((bRam0000000005e2c3b9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d7518);
    bRam0000000005e2c3b9 = 1;
  }
  plVar12 = (long *)func_0x0249f9d4(_DAT_059d7518,1);
  uVar37 = _DAT_059d7518;
  plVar10 = (long *)0x5e2c000;
  if (plVar12 == (long *)0x0) {
LAB_033bd554:
    plVar31 = plVar17;
    func_0x0249fb90();
  }
  else {
    plVar31 = plVar17;
    plVar10 = plVar12;
    if ((int)plVar12[3] != 0) {
      *(int *)(plVar12 + 4) = (int)plVar21;
      plVar31 = (long *)func_0x0249f9d4(uVar37,1);
      auVar40._8_8_ = plStack_100;
      auVar40._0_8_ = plStack_108;
      if (plVar31 == (long *)0x0) goto LAB_033bd554;
      if ((int)plVar31[3] != 0) {
        *(int *)(plVar31 + 4) = (int)plVar20;
        pplVar6 = &plStack_e0;
        plVar30 = plVar16;
        plVar19 = param_6;
        uVar32 = uStack_e8;
        param_6 = plStack_f0;
        plVar16 = plStack_f8;
        puVar33 = puStack_110;
        plVar10 = plStack_118;
        puVar36 = puStack_120;
        uVar37 = auStack_130[0];
        auVar42 = auVar39;
        auVar39 = auVar40;
        goto SUB_033bd55c;
      }
    }
  }
  plVar12 = plVar13;
  uVar37 = 0x33bd55c;
  auVar42 = func_0x0249fb98();
SUB_033bd55c:
  plVar21 = auVar42._0_8_;
  *(undefined **)((long)pplVar6 + -0x60) = unaff_x29;
  *(undefined8 *)((long)pplVar6 + -0x58) = uVar37;
  *(undefined **)((long)pplVar6 + -0x50) = unaff_x28;
  *(undefined **)((long)pplVar6 + -0x48) = unaff_x27;
  *(undefined **)((long)pplVar6 + -0x40) = puVar36;
  *(long **)((long)pplVar6 + -0x38) = plVar10;
  *(undefined **)((long)pplVar6 + -0x30) = puVar33;
  *(undefined1 (*) [16])((long)pplVar6 + -0x28) = auVar39;
  *(long **)((long)pplVar6 + -0x18) = plVar16;
  *(long **)((long)pplVar6 + -0x10) = param_6;
  *(ulong *)((long)pplVar6 + -8) = uVar32;
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
  puVar11 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
  lVar24 = puVar11[4];
  if (lVar24 == 0) {
    if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
      func_0x0249fa64();
      puVar11 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
    }
    uVar37 = *puVar11;
    lVar24 = func_0x0249fb80(_DAT_059c6860);
    func_0x02a9aa34(lVar24,uVar37,_DAT_05a69e98,0);
    plVar16 = (long *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x20);
    *plVar16 = lVar24;
    func_0x0249f888(plVar16,lVar24);
  }
  uVar37 = func_0x026e8e9c(plVar12,lVar24,_DAT_05a430c8);
  plVar20 = (long *)func_0x026ebbf4(uVar37,_DAT_05a43b40);
  puVar23 = *(undefined **)((long)pplVar6 + -0x20);
  puVar33 = *(undefined **)((long)pplVar6 + -0x18);
  plVar12 = *(long **)((long)pplVar6 + -0x28);
  plVar16 = *(long **)((long)pplVar6 + -0x50);
  plVar13 = *(long **)((long)pplVar6 + -0x48);
  plVar10 = *(long **)((long)pplVar6 + -0x60);
  *(long **)((long)pplVar6 + -0x60) = plVar10;
  *(undefined8 *)((long)pplVar6 + -0x58) = *(undefined8 *)((long)pplVar6 + -0x58);
  *(long **)((long)pplVar6 + -0x50) = plVar16;
  *(long **)((long)pplVar6 + -0x48) = plVar13;
  *(undefined8 *)((long)pplVar6 + -0x40) = *(undefined8 *)((long)pplVar6 + -0x40);
  *(undefined8 *)((long)pplVar6 + -0x38) = *(undefined8 *)((long)pplVar6 + -0x38);
  *(undefined8 *)((long)pplVar6 + -0x30) = *(undefined8 *)((long)pplVar6 + -0x30);
  *(long **)((long)pplVar6 + -0x28) = plVar12;
  *(undefined **)((long)pplVar6 + -0x20) = puVar23;
  *(undefined **)((long)pplVar6 + -0x18) = puVar33;
  *(undefined8 *)((long)pplVar6 + -0x10) = *(undefined8 *)((long)pplVar6 + -0x10);
  *(undefined8 *)((long)pplVar6 + -8) = *(undefined8 *)((long)pplVar6 + -8);
  puVar36 = (undefined *)0x5e2c000;
  *(long **)((long)pplVar6 + -0x90) = plVar30;
  *(long *)((long)pplVar6 + -0x88) = auVar42._8_8_;
  plVar14 = plVar21;
  plVar38 = plVar20;
  plVar17 = plVar31;
  plVar22 = plVar19;
  if ((bRam0000000005e2c3bc & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cbac8);
    plVar14 = (long *)func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bc = 1;
  }
  *(undefined8 *)((long)pplVar6 + -0x70) = 0;
  *(undefined8 *)((long)pplVar6 + -0x68) = 0;
  plVar35 = plVar31;
  if (plVar20 != (long *)0x0) {
    if ((int)plVar20[3] < 1) {
      return plVar14;
    }
    plVar10 = (long *)&DAT_059df6e0;
    puVar33 = &DAT_059cbac8;
    puVar36 = &DAT_059defe8;
    puVar23 = &DAT_059cbd30;
    plVar16 = (long *)0x0;
    plVar14 = (long *)(plVar20[3] & 0xffffffff);
    *(long **)((long)pplVar6 + -0xa0) = plVar20;
    *(long **)((long)pplVar6 + -0x98) = plVar31;
LAB_033bd790:
    plVar35 = plVar31;
    if (plVar16 < plVar14) {
      if (plVar31 == (long *)0x0) goto LAB_033bdce8;
      if ((long *)(ulong)*(uint *)(plVar31 + 3) <= plVar16) goto LAB_033bdcec;
      if (*(long **)((long)pplVar6 + -0x88) == (long *)0x0) goto LAB_033bdce8;
      lVar24 = **(long **)((long)pplVar6 + -0x88);
      plVar35 = (long *)plVar20[(long)((long)plVar16 + 4)];
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      plVar12 = (long *)(ulong)*(uint *)((long)plVar31 + (long)plVar16 * 4 + 0x20);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca9b0) {
            uVar37 = *(undefined8 *)((long)pplVar6 + -0x88);
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bd81c;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      uVar37 = *(undefined8 *)((long)pplVar6 + -0x88);
      plVar30 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(uVar37);
LAB_033bd81c:
      plVar20 = (long *)(*(code *)*puVar11)(uVar37,puVar11[1]);
      *(long **)((long)pplVar6 + -0x68) = plVar20;
      *(undefined8 *)((long)pplVar6 + -0x80) = 0;
      *(undefined1 **)((long)pplVar6 + -0x78) = (undefined1 *)((long)pplVar6 + -0x68);
      if (plVar20 != (long *)0x0) {
        do {
          lVar24 = *plVar20;
          uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar32 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033bd888;
              }
              uVar32 = uVar32 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar32 != 0);
          }
          plVar30 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bd888:
          uVar32 = (*(code *)*puVar11)(plVar20,puVar11[1]);
          if ((uVar32 & 1) == 0) goto LAB_033bd954;
          plVar20 = *(long **)((long)pplVar6 + -0x68);
          if (plVar20 == (long *)0x0) {
            uVar37 = func_0x0249fb90();
            plVar20 = (long *)0x0;
            goto LAB_033bdd00;
          }
          lVar24 = *plVar20;
          uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar32 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cbd30) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033bd8ec;
              }
              uVar32 = uVar32 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar32 != 0);
          }
          plVar30 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bd8ec:
          lVar24 = (*(code *)*puVar11)(plVar20,puVar11[1]);
          plVar31 = plVar12;
          plVar13 = plVar12;
          if (0 < (int)plVar12) {
            do {
              plVar13 = plVar31;
              if (lVar24 == 0) {
                uVar37 = func_0x0249fb90();
                plVar20 = (long *)0x0;
                goto LAB_033bdd00;
              }
              plVar17 = (long *)0x0;
              plVar22 = (long *)0x0;
              plVar30 = plVar35;
              plVar38 = plVar19;
              uVar32 = func_0x037878dc(lVar24,plVar21);
              iVar8 = (int)plVar31;
              if ((uVar32 & 1) == 0) goto LAB_033bd944;
              plVar13 = (long *)(ulong)(iVar8 - 1);
              plVar31 = plVar13;
            } while (1 < iVar8);
            plVar31 = (long *)0x0;
          }
LAB_033bd944:
          plVar20 = *(long **)((long)pplVar6 + -0x68);
          plVar12 = plVar31;
          if (plVar20 == (long *)0x0) break;
        } while( true );
      }
      plVar20 = (long *)0x0;
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
  uVar37 = func_0x0249fb88(plVar20);
LAB_033bdd00:
  func_0x022bd79c((undefined1 *)((long)pplVar6 + -0x80));
  func_0x0258f7ac(uVar37);
  auVar39 = func_0x022bd790();
  lVar24 = auVar39._8_8_;
  *(undefined8 *)((long)pplVar6 + -0xf0) = 0x33bdd28;
  *(long **)((long)pplVar6 + -0xe0) = plVar20;
  *(long **)((long)pplVar6 + -0xd8) = plVar35;
  *(long **)((long)pplVar6 + -0xd0) = plVar21;
  *(long **)((long)pplVar6 + -200) = plVar12;
  *(undefined **)((long)pplVar6 + -0xc0) = puVar23;
  *(undefined **)((long)pplVar6 + -0xb8) = puVar33;
  *(undefined **)((long)pplVar6 + -0xb0) = puVar36;
  *(undefined8 *)((long)pplVar6 + -0xa8) = uVar37;
  plVar31 = (long *)0x5e2c000;
  puVar23 = &DAT_05a3c7d8;
  plVar14 = (long *)((ulong)plVar38 & 0xffffffff);
  plVar12 = plVar30;
  plVar19 = plVar38;
  plVar21 = plVar17;
  if ((bRam0000000005e2c3bb & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7d8);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bb = 1;
  }
  *(undefined8 *)((long)pplVar6 + -0xf8) = 0;
  *(int *)((long)pplVar6 + -0x108) = (int)plVar38;
  plVar35 = (long *)func_0x026bf824((undefined1 *)((long)pplVar6 + -0x108),_DAT_05a3c7d8);
  if (lVar24 != 0) {
    plVar21 = (long *)0x0;
    plVar22 = (long *)0x0;
    plVar19 = plVar17;
    plVar12 = (long *)func_0x037878dc(lVar24,auVar39._0_8_);
    if (((ulong)plVar12 & 1) != 0) {
      return plVar12;
    }
    plVar12 = plVar35;
    if (plVar30 != (long *)0x0) {
      lVar25 = *plVar30;
      uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca768) {
            puVar11 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bde48;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033bde48:
      uVar37 = (*(code *)*puVar11)(plVar30,puVar11[1]);
      *(undefined8 *)((long)pplVar6 + -0xf8) = uVar37;
      plVar31 = (long *)&DAT_059cbac8;
      plVar20 = (long *)&DAT_059defe8;
      *(undefined8 *)((long)pplVar6 + -0x108) = 0;
      *(undefined1 **)((long)pplVar6 + -0x100) = (undefined1 *)((long)pplVar6 + -0xf8);
      do {
        auVar39._8_8_ = lVar24;
        auVar39._0_8_ = &DAT_059df6e0;
        plVar30 = *(long **)((long)pplVar6 + -0xf8);
        if (plVar30 == (long *)0x0) {
          func_0x0249fb90();
LAB_033be058:
          func_0x0249fb90();
LAB_033be05c:
          func_0x0249fb90();
          goto LAB_033be060;
        }
        lVar25 = *plVar30;
        uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar11 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033bdecc;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033bdecc:
        plVar35 = (long *)(*(code *)*puVar11)(plVar30,puVar11[1]);
        if (((ulong)plVar35 & 1) == 0) break;
        plVar35 = *(long **)((long)pplVar6 + -0xf8);
        plVar30 = (long *)0x0;
        if (plVar35 == (long *)0x0) goto LAB_033be058;
        lVar24 = *plVar35;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059cbac8) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033bdf30;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plVar35);
LAB_033bdf30:
        plVar30 = (long *)(*(code *)*puVar11)(plVar35,puVar11[1]);
        *(int *)((long)pplVar6 + -0xe4) = (int)plVar38;
        lVar24 = func_0x026bf824((undefined1 *)((long)pplVar6 + -0xe4),_DAT_05a3c7d8);
        if (plVar30 == (long *)0x0) goto LAB_033be05c;
        lVar25 = *plVar30;
        uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
              puVar11 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0x1f) * 0x10 + 0x138);
              goto LAB_033bdfa8;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059defe8,0x1f);
LAB_033bdfa8:
        plVar21 = (long *)puVar11[1];
        plVar19 = (long *)0x0;
        plVar12 = plVar17;
        plVar35 = (long *)(*(code *)*puVar11)(plVar30,lVar24);
      } while (((ulong)plVar35 & 1) == 0);
      auVar39._8_8_ = lVar24;
      auVar39._0_8_ = &DAT_059df6e0;
      plVar17 = (long *)0x0;
      puVar11 = (undefined8 *)((long)pplVar6 + -0xf8);
      goto LAB_033bdfcc;
    }
  }
LAB_033be060:
  func_0x0249fb90();
  while( true ) {
    auVar42._8_8_ = plVar20;
    auVar42._0_8_ = plVar13;
    auVar44 = func_0x0249fb88(plVar17);
    plVar17 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) break;
    puVar11 = (undefined8 *)func_0x054ed080(plVar17);
    plVar17 = (long *)*puVar11;
    *(long **)((long)pplVar6 + -0x108) = plVar17;
    plVar35 = (long *)func_0x054ed090();
    puVar11 = *(undefined8 **)((long)pplVar6 + -0x100);
LAB_033bdfcc:
    plVar14 = (long *)*puVar11;
    if (plVar14 != (long *)0x0) {
      lVar24 = *plVar14;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033be028;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar14);
LAB_033be028:
      plVar35 = (long *)(*(code *)*puVar11)(plVar14,puVar11[1]);
    }
    if (plVar17 == (long *)0x0) {
      return plVar35;
    }
  }
  func_0x022bd79c((undefined1 *)((long)pplVar6 + -0x108));
  func_0x0258f7ac(plVar17);
  uVar37 = 0x33be0c4;
  auVar40 = func_0x022bd790();
  puVar7 = (undefined1 *)((long)pplVar6 + -0x110);
SUB_033be0c4:
  plVar38 = auVar42._8_8_;
  plVar35 = auVar40._0_8_;
  puVar33 = auVar39._8_8_;
  *(long **)(puVar7 + -0x60) = plVar10;
  *(undefined8 *)(puVar7 + -0x58) = uVar37;
  *(long **)(puVar7 + -0x50) = plVar16;
  *(undefined1 (*) [16])(puVar7 + -0x48) = auVar42;
  *(long **)(puVar7 + -0x38) = plVar31;
  *(undefined **)(puVar7 + -0x30) = puVar23;
  *(undefined1 (*) [16])(puVar7 + -0x28) = auVar39;
  *(long **)(puVar7 + -0x18) = plVar30;
  *(long **)(puVar7 + -0x10) = plVar14;
  *(long **)(puVar7 + -8) = plVar17;
  puVar23 = (undefined *)0x5e2c000;
  *(long **)(puVar7 + -0x1c0) = plVar21;
  *(long **)(puVar7 + -0x1d8) = plVar12;
  *(long *)(puVar7 + -0x1d0) = auVar40._8_8_;
  plVar20 = plVar19;
  plVar13 = plVar21;
  plVar17 = plVar22;
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
    plVar13 = plVar21;
  }
  *(undefined8 *)(puVar7 + -0xc0) = 0;
  *(undefined8 *)(puVar7 + -0xb8) = 0;
  *(undefined8 *)(puVar7 + -200) = 0;
  *(undefined8 *)(puVar7 + -0x130) = 0;
  *(undefined8 *)(puVar7 + -0x128) = 0;
  *(undefined8 *)(puVar7 + -0x108) = 0;
  *(undefined8 *)(puVar7 + -0x110) = 0;
  *(undefined8 *)(puVar7 + -0xf8) = 0;
  *(undefined8 *)(puVar7 + -0x100) = 0;
  *(undefined8 *)(puVar7 + -0xe8) = 0;
  *(undefined8 *)(puVar7 + -0xf0) = 0;
  *(undefined8 *)(puVar7 + -0xd8) = 0;
  *(undefined8 *)(puVar7 + -0xe0) = 0;
  *(undefined8 *)(puVar7 + -0x118) = 0;
  *(undefined8 *)(puVar7 + -0x120) = 0;
  pcVar34 = (code *)0x0;
  if (plVar19 != (long *)0x0) {
    lVar24 = *plVar19;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059c9f60) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033be2d8;
        }
        uVar32 = uVar32 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar32 != 0);
    }
    plVar12 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033be2d8:
    puVar33 = &DAT_059df6e0;
    plVar30 = (long *)&DAT_059df8e8;
    puVar23 = &DAT_059cb2d8;
    uVar37 = (*(code *)*puVar11)(plVar19,puVar11[1]);
    *(undefined8 *)(puVar7 + -0xb8) = uVar37;
    *(undefined8 *)(puVar7 + -0x140) = 0;
    *(undefined1 **)(puVar7 + -0x138) = puVar7 + -0xb8;
    plVar21 = plVar31;
    do {
      do {
        pcVar34 = *(code **)(puVar7 + -0xb8);
        if (pcVar34 == (code *)0x0) {
          func_0x0249fb90();
LAB_033bf328:
          plVar31 = plVar21;
          func_0x0249fb90();
LAB_033bf32c:
          func_0x0249fb90();
LAB_033bf330:
          func_0x0249fb90();
          plVar19 = plVar16;
LAB_033bf334:
          func_0x0249fb88();
          goto LAB_033bf338;
        }
        lVar24 = *(long *)pcVar34;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033be35c;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(pcVar34);
LAB_033be35c:
        uVar32 = (*(code *)*puVar11)(pcVar34,puVar11[1]);
        auVar41._8_8_ = plVar17;
        auVar41._0_8_ = plVar12;
        if ((uVar32 & 1) == 0) goto LAB_033bf3d0;
        pcVar34 = (code *)func_0x0249fb80(_DAT_059efcb0);
        func_0x03789cdc(pcVar34,0);
        plVar21 = *(long **)(puVar7 + -0xb8);
        plVar31 = plVar21;
        if (plVar21 == (long *)0x0) goto LAB_033bf330;
        lVar24 = *plVar21;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059cb2a8) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033be3e4;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033be3e4:
        auVar39 = (*(code *)*puVar11)(plVar21,puVar11[1]);
        plVar31 = auVar39._8_8_;
        if (pcVar34 == (code *)0x0) goto LAB_033bf328;
        *(long *)(pcVar34 + 0x10) = auVar39._0_8_;
        func_0x0249f888(pcVar34 + 0x10,auVar39._0_8_);
        plVar21 = *(long **)(puVar7 + -0x1d0);
        if (plVar21 == (long *)0x0) goto LAB_033bf32c;
        lVar24 = *plVar21;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        *(code **)(puVar7 + -0x1b8) = pcVar34;
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059ca9b0) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033be470;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plVar21);
        plVar21 = *(long **)(puVar7 + -0x1d0);
LAB_033be470:
        plVar14 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
        *(long **)(puVar7 + -0xc0) = plVar14;
        *(undefined8 *)(puVar7 + -0x150) = 0;
        *(undefined1 **)(puVar7 + -0x148) = puVar7 + -0xc0;
        plVar19 = plVar31;
joined_r0x033be48c:
        plVar21 = plVar19;
        if (plVar14 == (long *)0x0) {
          func_0x0249fb90();
          auVar41._8_8_ = plVar17;
          auVar41._0_8_ = plVar12;
          goto LAB_033bf344;
        }
        lVar24 = *plVar14;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033be4dc;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plVar14);
LAB_033be4dc:
        uVar32 = (*(code *)*puVar11)(plVar14,puVar11[1]);
        if ((uVar32 & 1) != 0) {
          plVar31 = *(long **)(puVar7 + -0xc0);
          if (plVar31 == (long *)0x0) {
            func_0x0249fb90();
            auVar41._8_8_ = plVar17;
            auVar41._0_8_ = plVar12;
          }
          else {
            lVar24 = *plVar31;
            uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar32 != 0) {
              piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059cbd30) {
                  puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033be548;
                }
                uVar32 = uVar32 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar32 != 0);
            }
            puVar11 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059cbd30,0);
LAB_033be548:
            lVar24 = (*(code *)*puVar11)(plVar31,puVar11[1]);
            uVar37 = func_0x0249fb80(_DAT_059d4870);
            func_0x028b4b8c(uVar37,*(undefined8 *)(puVar7 + -0x1b8),_DAT_05a69ee8,0);
            uVar37 = func_0x0376f250(lVar24,uVar37,0);
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar11 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            plVar16 = (long *)puVar11[5];
            if (plVar16 == (long *)0x0) {
              if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
                func_0x0249fa64();
                puVar11 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
              }
              plVar10 = (long *)*puVar11;
              plVar16 = (long *)func_0x0249fb80(_DAT_059c59c0);
              func_0x02a9aa34(plVar16,plVar10,_DAT_05a69ea0,0);
              puVar11 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x28);
              *puVar11 = plVar16;
              func_0x0249f888(puVar11,plVar16);
            }
            plVar20 = _DAT_05a429f8;
            uVar37 = func_0x026e880c(uVar37,plVar16,*(undefined8 *)(puVar7 + -0x1c0));
            plVar31 = _DAT_05a43a18;
            plVar12 = (long *)func_0x026eb75c(uVar37,(ulong)plVar19 & 0xffffffff);
            if (plVar12 == (long *)0x0) {
              func_0x0249fb90();
              auVar41._8_8_ = plVar17;
              auVar41._0_8_ = plVar31;
            }
            else {
              lVar25 = *plVar12;
              uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar32 != 0) {
                piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059c9f90) {
                    puVar11 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
                    goto LAB_033be6bc;
                  }
                  uVar32 = uVar32 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar32 != 0);
              }
              plVar31 = (long *)0x0;
              puVar11 = (undefined8 *)func_0x024d927c(plVar12);
LAB_033be6bc:
              plVar21 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
              *(long **)(puVar7 + -200) = plVar21;
              *(long **)(puVar7 + -0x1c8) = plVar19;
              *(undefined8 *)(puVar7 + -0x160) = 0;
              *(undefined1 **)(puVar7 + -0x158) = puVar7 + -200;
              if (plVar21 != (long *)0x0) {
                do {
                  lVar25 = *plVar21;
                  uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar32 != 0) {
                    piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                        puVar11 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
                        plVar12 = plVar31;
                        goto LAB_033be72c;
                      }
                      uVar32 = uVar32 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar32 != 0);
                  }
                  plVar12 = (long *)0x0;
                  puVar11 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033be72c:
                  uVar32 = (*(code *)*puVar11)(plVar21,puVar11[1]);
                  if ((uVar32 & 1) == 0) goto LAB_033be9a8;
                  plVar31 = *(long **)(puVar7 + -200);
                  plVar21 = plVar19;
                  if (plVar31 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar41._8_8_ = plVar17;
                    auVar41._0_8_ = plVar12;
                    goto LAB_033bf344;
                  }
                  lVar25 = *plVar31;
                  uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar32 != 0) {
                    piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == _DAT_059cb2d8) {
                        puVar11 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
                        goto LAB_033be790;
                      }
                      uVar32 = uVar32 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar32 != 0);
                  }
                  plVar12 = (long *)0x0;
                  puVar11 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033be790:
                  auVar41 = (*(code *)*puVar11)(plVar31,puVar11[1]);
                  plVar14 = auVar41._8_8_;
                  plVar31 = auVar41._0_8_;
                  if (plVar35 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar41._8_8_ = plVar17;
                    auVar41._0_8_ = plVar12;
                    goto LAB_033bf344;
                  }
                  lVar25 = *plVar35;
                  uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar32 != 0) {
                    piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                        puVar11 = (undefined8 *)(lVar25 + (long)(*piVar29 + 5) * 0x10 + 0x138);
                        goto LAB_033be7f8;
                      }
                      uVar32 = uVar32 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar32 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059df8e8,5);
LAB_033be7f8:
                  uVar37 = (*(code *)*puVar11)(plVar35,puVar11[1]);
                  uVar18 = 0;
                  uVar32 = func_0x036ecab8(plVar14,uVar37);
                  plVar16 = plVar14;
                  if (((uVar32 & 1) == 0) || (iVar8 = func_0x037286b0(plVar14,0), iVar8 < 2)) {
                    if (lVar24 == 0) {
                      func_0x0249fb90();
                      auVar41._8_8_ = plVar17;
                      auVar41._0_8_ = uVar18;
                      goto LAB_033bf344;
                    }
                    plVar13 = (long *)0x1;
                    plVar17 = (long *)0x0;
                    plVar20 = plVar22;
                    func_0x037789bc(lVar24,plVar35);
                  }
                  else {
                    func_0x036f9ba0(plVar14,1,0);
                    *(undefined8 *)(puVar7 + -0x1f0) = 0;
                    plVar13 = plVar22;
                    func_0x034ba910(puVar7 + -0x120,0x17);
                    uVar37 = auVar41._8_8_;
                    lVar25 = *plVar35;
                    uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
                    if (uVar32 != 0) {
                      piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                          puVar11 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0x17) * 0x10 + 0x138);
                          plVar20 = plVar31;
                          goto LAB_033be8e0;
                        }
                        uVar32 = uVar32 - 1;
                        piVar29 = piVar29 + 4;
                      } while (uVar32 != 0);
                    }
                    uVar18 = 0x17;
                    puVar11 = (undefined8 *)func_0x024d927c(plVar35);
                    auVar41._8_8_ = uVar37;
                    auVar41._0_8_ = uVar18;
                    plVar20 = plVar31;
LAB_033be8e0:
                    plVar12 = (long *)(*(code *)*puVar11)(plVar35,puVar11[1]);
                    lVar25 = _DAT_059e0280;
                    plVar17 = auVar41._8_8_;
                    if (lVar24 == 0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    if (plVar12 == (long *)0x0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    plVar14 = *(long **)(lVar24 + 0x30);
                    func_0x054ed0d0(puVar7 + -0x1b0,puVar7 + -0x120,0x50);
                    lVar26 = *plVar12;
                    uVar32 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar32 != 0) {
                      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == lVar25) {
                          plVar10 = (long *)(lVar26 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                          goto LAB_033be96c;
                        }
                        uVar32 = uVar32 - 1;
                        piVar29 = piVar29 + 4;
                      } while (uVar32 != 0);
                    }
                    plVar10 = (long *)func_0x024d927c(plVar12,lVar25,1);
LAB_033be96c:
                    pcVar34 = (code *)*plVar10;
                    func_0x054ed0d0(puVar7 + -0xb0,puVar7 + -0x1b0,0x50);
                    plVar20 = (long *)plVar10[1];
                    plVar31 = (long *)(puVar7 + -0xb0);
                    (*pcVar34)(plVar12,plVar14);
                  }
                  plVar21 = *(long **)(puVar7 + -200);
                  plVar19 = (long *)(ulong)((int)plVar19 - 1);
                  plVar16 = plVar14;
                  if (plVar21 == (long *)0x0) goto LAB_033be9a0;
                } while( true );
              }
              plVar19 = (long *)(*(ulong *)(puVar7 + -0x1c8) & 0xffffffff);
LAB_033be9a0:
              func_0x0249fb90();
              auVar41._8_8_ = plVar17;
              auVar41._0_8_ = plVar31;
              plVar21 = plVar19;
            }
          }
          goto LAB_033bf344;
        }
        plVar31 = (long *)0xb;
        plVar38 = (long *)**(undefined8 **)(puVar7 + -0x148);
        if (plVar38 != (long *)0x0) {
          lVar24 = *plVar38;
          uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar32 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059df598) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033beb3c;
              }
              uVar32 = uVar32 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar32 != 0);
          }
          plVar12 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033beb3c:
          (*(code *)*puVar11)(plVar38,puVar11[1]);
        }
        if (*(long *)(puVar7 + -0x150) != 0) goto LAB_033bf334;
        plVar21 = plVar31;
        plVar16 = plVar19;
      } while ((int)plVar19 < 1);
      if (*(long **)(puVar7 + -0x1d8) == (long *)0x0) goto LAB_033bf33c;
      lVar24 = **(long **)(puVar7 + -0x1d8);
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      pcVar34 = (code *)&DAT_059cbac8;
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca768) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bebc8;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c();
LAB_033bebc8:
      plVar38 = (long *)(*(code *)*puVar11)(*(undefined8 *)(puVar7 + -0x1d8),puVar11[1]);
      *(long **)(puVar7 + -0x128) = plVar38;
      *(undefined8 *)(puVar7 + -0x150) = 0;
      *(undefined1 **)(puVar7 + -0x148) = puVar7 + -0x128;
joined_r0x033bebe4:
      plVar31 = plVar19;
      plVar21 = plVar31;
      if (plVar38 == (long *)0x0) {
        func_0x0249fb90();
        auVar41._8_8_ = plVar17;
        auVar41._0_8_ = plVar12;
        goto LAB_033bf344;
      }
      lVar24 = *plVar38;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bec34;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033bec34:
      uVar32 = (*(code *)*puVar11)(plVar38,puVar11[1]);
      if ((uVar32 & 1) != 0) {
        plVar19 = *(long **)(puVar7 + -0x128);
        if (plVar19 == (long *)0x0) {
          func_0x0249fb90();
          auVar41._8_8_ = plVar17;
          auVar41._0_8_ = plVar12;
        }
        else {
          lVar24 = *plVar19;
          uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar32 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cbac8) {
                puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033bec98;
              }
              uVar32 = uVar32 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar32 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059cbac8,0);
LAB_033bec98:
          plVar14 = (long *)(*(code *)*puVar11)(plVar19,puVar11[1]);
          uVar37 = func_0x0249fb80(_DAT_059d4870);
          func_0x028b4b8c(uVar37,*(undefined8 *)(puVar7 + -0x1b8),_DAT_05a69ee8,0);
          uVar37 = func_0x034bc5a4(plVar14,uVar37,0);
          if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puVar11 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
          plVar16 = (long *)puVar11[6];
          if (plVar16 == (long *)0x0) {
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
              puVar11 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            }
            plVar10 = (long *)*puVar11;
            plVar16 = (long *)func_0x0249fb80(_DAT_059c6b58);
            func_0x02a9aa34(plVar16,plVar10,_DAT_05a69ea8,0);
            puVar11 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x30);
            *puVar11 = plVar16;
            func_0x0249f888(puVar11,plVar16);
          }
          plVar20 = _DAT_05a42a10;
          uVar37 = func_0x026e880c(uVar37,plVar16,*(undefined8 *)(puVar7 + -0x1c0));
          plVar12 = _DAT_05a43a78;
          plVar19 = (long *)func_0x026eb75c(uVar37,(ulong)plVar31 & 0xffffffff);
          if (plVar19 == (long *)0x0) {
            func_0x0249fb90();
            auVar41._8_8_ = plVar17;
            auVar41._0_8_ = plVar12;
          }
          else {
            lVar24 = *plVar19;
            uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar32 != 0) {
              piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059ca9d0) {
                  puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                  goto LAB_033bee0c;
                }
                uVar32 = uVar32 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar32 != 0);
            }
            plVar12 = (long *)0x0;
            puVar11 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bee0c:
            plVar21 = (long *)(*(code *)*puVar11)(plVar19,puVar11[1]);
            *(long **)(puVar7 + -0x130) = plVar21;
            *(undefined8 *)(puVar7 + -0x160) = 0;
            *(undefined1 **)(puVar7 + -0x158) = puVar7 + -0x130;
            plVar19 = plVar31;
            plVar10 = plVar31;
            if (plVar21 != (long *)0x0) {
              do {
                lVar24 = *plVar21;
                uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar32 != 0) {
                  piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                      puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                      goto LAB_033bee7c;
                    }
                    uVar32 = uVar32 - 1;
                    piVar29 = piVar29 + 4;
                  } while (uVar32 != 0);
                }
                plVar12 = (long *)0x0;
                puVar11 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033bee7c:
                uVar32 = (*(code *)*puVar11)(plVar21,puVar11[1]);
                if ((uVar32 & 1) == 0) goto LAB_033bf044;
                plVar31 = *(long **)(puVar7 + -0x130);
                plVar21 = plVar19;
                if (plVar31 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar41._8_8_ = plVar17;
                  auVar41._0_8_ = plVar12;
                  goto LAB_033bf344;
                }
                lVar24 = *plVar31;
                uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar32 != 0) {
                  piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == _DAT_059cbd50) {
                      puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                      goto LAB_033beee8;
                    }
                    uVar32 = uVar32 - 1;
                    piVar29 = piVar29 + 4;
                  } while (uVar32 != 0);
                }
                plVar12 = (long *)0x0;
                puVar11 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033beee8:
                uVar37 = (*(code *)*puVar11)(plVar31,puVar11[1]);
                if (plVar35 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar41._8_8_ = plVar17;
                  auVar41._0_8_ = plVar12;
                  goto LAB_033bf344;
                }
                lVar24 = *plVar35;
                uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar32 != 0) {
                  piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                      puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
                      goto LAB_033bef4c;
                    }
                    uVar32 = uVar32 - 1;
                    piVar29 = piVar29 + 4;
                  } while (uVar32 != 0);
                }
                puVar11 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059df8e8,5);
LAB_033bef4c:
                uVar18 = (*(code *)*puVar11)(plVar35,puVar11[1]);
                uVar32 = func_0x036ecab8(uVar37,uVar18,0);
                if (((uVar32 & 1) == 0) || (iVar8 = func_0x037286b0(uVar37,0), iVar8 < 2)) {
                  plVar16 = (long *)func_0x0249fb80(_DAT_059d4870);
                  plVar20 = (long *)0x0;
                  uVar18 = _DAT_05a69ee0;
                  func_0x028b4b8c(plVar16,*(undefined8 *)(puVar7 + -0x1b8));
                  if (plVar14 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar41._8_8_ = plVar17;
                    auVar41._0_8_ = uVar18;
                    goto LAB_033bf344;
                  }
                  lVar24 = *plVar14;
                  uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar32 != 0) {
                    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                        puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x1d) * 0x10 + 0x138);
                        goto LAB_033bf01c;
                      }
                      uVar32 = uVar32 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar32 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059defe8,0x1d);
LAB_033bf01c:
                  plVar20 = (long *)puVar11[1];
                  plVar12 = plVar16;
                  (*(code *)*puVar11)(plVar14,uVar37);
                }
                else {
                  plVar12 = (long *)0x0;
                  func_0x036f9ba0(uVar37,1);
                }
                plVar21 = *(long **)(puVar7 + -0x130);
                plVar19 = (long *)(ulong)((int)plVar19 - 1);
                if (plVar21 == (long *)0x0) goto LAB_033bf03c;
              } while( true );
            }
            plVar19 = (long *)((ulong)plVar31 & 0xffffffff);
LAB_033bf03c:
            func_0x0249fb90();
            auVar41._8_8_ = plVar17;
            auVar41._0_8_ = plVar12;
            plVar21 = plVar19;
          }
        }
        goto LAB_033bf344;
      }
      plVar16 = (long *)0x2;
      plVar19 = (long *)0x2;
      pcVar34 = (code *)**(undefined8 **)(puVar7 + -0x148);
      if (pcVar34 != (code *)0x0) {
        lVar24 = *(long *)pcVar34;
        uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar32 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df598) {
              puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033bf1bc;
            }
            uVar32 = uVar32 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar32 != 0);
        }
        plVar12 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x024d927c(pcVar34);
LAB_033bf1bc:
        (*(code *)*puVar11)(pcVar34,puVar11[1]);
      }
    } while (*(long *)(puVar7 + -0x150) == 0);
LAB_033bf338:
    func_0x0249fb88();
LAB_033bf33c:
    func_0x0249fb90();
    plVar16 = plVar19;
  }
  func_0x0249fb90();
  auVar41._8_8_ = plVar17;
  auVar41._0_8_ = plVar12;
  plVar21 = plVar31;
LAB_033bf344:
  auVar42 = func_0x022bd790();
  plVar38 = auVar42._8_8_;
  func_0x022bd79c(puVar7 + -0x150);
  if (auVar42._8_4_ == 1) {
    puVar11 = (undefined8 *)func_0x054ed080(auVar42._0_8_);
    *(undefined8 *)(puVar7 + -0x140) = *puVar11;
    func_0x054ed090();
LAB_033bf3d0:
    uVar37 = auVar41._8_8_;
    plVar22 = (long *)**(undefined8 **)(puVar7 + -0x138);
    if (plVar22 != (long *)0x0) {
      lVar24 = *plVar22;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bf430;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      uVar18 = 0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar22);
      auVar41._8_8_ = uVar37;
      auVar41._0_8_ = uVar18;
LAB_033bf430:
      (*(code *)*puVar11)(plVar22,puVar11[1]);
    }
    if (*(long *)(puVar7 + -0x140) == 0) {
      return (long *)0x0;
    }
    uVar37 = func_0x0249fb88();
    auVar42._8_8_ = plVar38;
    auVar42._0_8_ = uVar37;
  }
  func_0x022bd79c(puVar7 + -0x140);
  func_0x0258f7ac(auVar42._0_8_);
  auVar39 = func_0x022bd790();
  plVar31 = auVar41._8_8_;
  plVar12 = auVar41._0_8_;
  lVar24 = auVar39._8_8_;
  plVar38 = auVar39._0_8_;
  *(long **)(puVar7 + -0x250) = plVar10;
  *(undefined8 *)(puVar7 + -0x248) = 0x33bf480;
  *(long **)(puVar7 + -0x240) = plVar16;
  *(undefined1 (*) [16])(puVar7 + -0x238) = auVar42;
  *(long **)(puVar7 + -0x228) = plVar21;
  *(code **)(puVar7 + -0x220) = pcVar34;
  *(long **)(puVar7 + -0x218) = plVar35;
  *(undefined **)(puVar7 + -0x210) = puVar33;
  *(long **)(puVar7 + -0x208) = plVar30;
  *(undefined **)(puVar7 + -0x200) = puVar23;
  *(long **)(puVar7 + -0x1f8) = plVar22;
  lVar25 = 0x5e2c000;
  puVar23 = &DAT_059de230;
  plVar10 = plVar20;
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
  plVar21 = (long *)func_0x0249fb80(_DAT_059de230);
  plVar17 = (long *)0x0;
  func_0x034a1470(plVar21,lVar24);
  if (lVar24 != 0) {
    plVar16 = (long *)&DAT_059e2c00;
    puVar23 = (undefined *)func_0x028a379c(lVar24,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    plVar19 = (long *)func_0x03530158(puVar23,0);
    if (plVar38 != (long *)0x0) {
      plVar13 = (long *)0x1;
      plVar31 = (long *)0x0;
      plVar17 = plVar12;
      func_0x037789bc(plVar38,lVar24);
      plVar10 = plVar19;
      if (plVar20 != (long *)0x0) {
        lVar25 = func_0x036d5f70(plVar20,0);
        if (lVar25 == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = *(long *)(lVar25 + 0x20);
        }
        uVar37 = func_0x03659ee0(lVar24,0);
        plVar17 = (long *)0x0;
        plVar14 = (long *)func_0x036d3908(plVar20,uVar37);
        plVar10 = plVar19;
        if (plVar14 != (long *)0x0) {
          lVar26 = *plVar14;
          uVar32 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar32 != 0) {
            piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar32 = uVar32 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar32 != 0);
          }
          plVar17 = (long *)0x6;
          puVar11 = (undefined8 *)func_0x024d927c(plVar14);
          plVar10 = plVar19;
LAB_033bf694:
          plVar19 = (long *)(*(code *)*puVar11)(plVar14,puVar11[1]);
          lVar26 = func_0x036d5f70(plVar20,0);
          if (lVar26 == 0) {
            uVar37 = 0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = plVar19;
            auVar42 = auVar4 << 0x40;
          }
          else {
            uVar37 = *(undefined8 *)(lVar26 + 0x28);
            auVar42._8_8_ = plVar19;
            auVar42._0_8_ = uVar37;
          }
          if (plVar19 != (long *)0x0) {
            lVar26 = *plVar19;
            uVar32 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar32 != 0) {
              piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059df030) {
                  puVar11 = (undefined8 *)(lVar26 + (long)(*piVar29 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar32 = uVar32 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar32 != 0);
            }
            puVar11 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059df030,10);
LAB_033bf720:
            plVar10 = (long *)(*(code *)*puVar11)(plVar19,lVar24,uVar37,puVar11[1]);
            auVar3._8_8_ = plVar10;
            auVar3._0_8_ = uVar37;
            auVar2._8_8_ = plVar10;
            auVar2._0_8_ = uVar37;
            auVar1._8_8_ = plVar10;
            auVar1._0_8_ = uVar37;
            auVar42._8_8_ = plVar10;
            auVar42._0_8_ = uVar37;
            if (plVar10 != (long *)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              plVar31 = (long *)func_0x03530158(puVar23,0);
              *(undefined8 *)(puVar7 + -0x350) = 0;
              plVar17 = plVar12;
              plVar13 = plVar21;
              lVar26 = func_0x03774f00(plVar38,lVar24);
              if ((lVar26 == 0) || (auVar42 = auVar1, *(long *)(lVar26 + 0x10) == 0))
              goto LAB_033bfa8c;
              plVar17 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              plVar21 = (long *)(ulong)*(uint *)(plVar17[1] + 0xfc);
              uVar18 = func_0x0249f90c(*(long *)(lVar26 + 0x10),*(undefined8 *)(*plVar17 + 0x80));
              plVar17 = plVar21;
              func_0x054ed0d0(puVar7 + -0x2a0,uVar18);
              auVar42 = auVar2;
              if (*(long *)(lVar24 + 0x220) == 0) goto LAB_033bfa8c;
              plVar21 = (long *)(ulong)*(uint *)(puVar7 + -0x2a0);
              plVar17 = (long *)0x0;
              uVar32 = func_0x0387e780(*(long *)(lVar24 + 0x220),plVar21);
              if ((uVar32 & 1) == 0) {
                auVar42 = auVar3;
                if (*(long *)(lVar24 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(lVar24 + 0x220),lVar24,plVar38,plVar21,0);
              }
            }
            plVar19 = *(long **)(lVar24 + 0x1e0);
            lVar26 = plVar38[6];
            auVar42._8_8_ = lVar26;
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar13 = (long *)func_0x03530158(puVar23,0);
            plVar31 = (long *)0x0;
            *(undefined8 *)(puVar7 + -0x350) = 0;
            *(undefined8 *)(puVar7 + -0x2d8) = 0;
            *(undefined8 *)(puVar7 + -0x2e0) = 0;
            *(undefined8 *)(puVar7 + -0x2c8) = 0;
            *(undefined8 *)(puVar7 + -0x2d0) = 0;
            *(undefined8 *)(puVar7 + -0x2b8) = 0;
            *(undefined8 *)(puVar7 + -0x2c0) = 0;
            *(undefined8 *)(puVar7 + -0x2a8) = 0;
            *(undefined8 *)(puVar7 + -0x2b0) = 0;
            *(undefined8 *)(puVar7 + -0x2e8) = 0;
            *(undefined8 *)(puVar7 + -0x2f0) = 0;
            plVar17 = plVar12;
            plVar10 = plVar12;
            func_0x034ba874(puVar7 + -0x2f0,6);
            lVar5 = _DAT_059e0280;
            plVar21 = (long *)0x0;
            if (plVar19 != (long *)0x0) {
              func_0x054ed0d0(puVar7 + -0x340,puVar7 + -0x2f0,0x50);
              lVar27 = *plVar19;
              uVar32 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar32 != 0) {
                piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar5) {
                    puVar11 = (undefined8 *)(lVar27 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar32 = uVar32 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar32 != 0);
              }
              puVar11 = (undefined8 *)func_0x024d927c(plVar19,lVar5,1);
LAB_033bf8d8:
              pcVar34 = (code *)*puVar11;
              func_0x054ed0d0(puVar7 + -0x2a0,puVar7 + -0x340,0x50);
              (*pcVar34)(plVar19,lVar26,puVar7 + -0x2a0,puVar11[1]);
              plVar12 = (long *)func_0x036f10d8(plVar20,lVar24,0);
              lVar26 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar26,_DAT_059feeb8);
              if ((lVar25 == 0) || (*(int *)(lVar25 + 0x18) < 1)) {
LAB_033bf9f8:
                uVar37 = func_0x03659ee0(lVar24,0);
                uVar37 = func_0x036d62d4(plVar20,uVar37,0);
                lVar25 = plVar38[6];
                uVar18 = func_0x0249fb80(_DAT_059d8a28);
                *(undefined8 *)(puVar7 + -0x350) = 0;
                func_0x0385d0a8(uVar18,uVar37,plVar12,lVar25,lVar26,1,0,0);
                plVar16 = (long *)func_0x0366bae8(lVar24,uVar18,0,0);
                return plVar16;
              }
              plVar21 = (long *)0x0;
              auVar42._8_8_ = &DAT_05a17ad0;
              auVar42._0_8_ = &DAT_059d9e60;
              plVar30 = (long *)0xffffffffffffffff;
              do {
                plVar17 = (long *)(puVar7 + -0x2a0);
                plVar10 = _DAT_05a17ad0;
                func_0x0282f3c4(lVar25,plVar21);
                plVar16 = *(long **)(puVar7 + -0x2a0);
                if (plVar16 != (long *)0x0) {
                  if ((*(byte *)(_DAT_059d9e60 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar16 + 200) +
                                (ulong)*(byte *)(_DAT_059d9e60 + 0x130) * 8 + -8) == _DAT_059d9e60))
                  {
                    *(int *)(puVar7 + -0x290) = (int)plVar16[2];
                    *(undefined8 *)(puVar7 + -0x2a0) = _DAT_059dce58;
                    *(undefined8 *)(puVar7 + -0x298) = 0xffffffffffffffff;
                    uVar37 = func_0x045e0acc(puVar7 + -0x2a0,0);
                    puVar23 = (undefined *)0x0;
                    if (lVar26 == 0) break;
                    *(undefined4 *)(puVar7 + -0x2f0) = *(undefined4 *)((long)plVar16 + 0x14);
                    func_0x02a3c128(lVar26,uVar37,puVar7 + -0x2f0,_DAT_059feee0);
                  }
                }
                uVar9 = (int)plVar21 + 1;
                plVar21 = (long *)(ulong)uVar9;
                if (*(int *)(lVar25 + 0x18) <= (int)uVar9) goto LAB_033bf9f8;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_033bfa8c:
  auVar43 = func_0x0249fb90();
  plVar14 = auVar43._0_8_;
  *(undefined8 *)(puVar7 + -0x390) = 0x33bfa90;
  *(long **)(puVar7 + -0x388) = plVar21;
  *(undefined **)(puVar7 + -0x380) = puVar23;
  *(long **)(puVar7 + -0x378) = plVar12;
  *(long *)(puVar7 + -0x370) = lVar25;
  *(long **)(puVar7 + -0x368) = plVar30;
  *(long **)(puVar7 + -0x360) = plVar20;
  *(long *)(puVar7 + -0x358) = lVar24;
  plVar20 = plVar14;
  plVar12 = plVar17;
  plVar19 = plVar10;
  plVar21 = plVar13;
  plVar22 = plVar31;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    plVar20 = (long *)func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  *(undefined8 *)(puVar7 + -0x398) = 0;
  if (((ulong)plVar31 & 1) == 0) {
    uVar37 = 0;
    if (plVar14 == (long *)0x0) goto LAB_033bfd48;
    plVar20 = (long *)0x0;
    if (plVar14[0x5d] != 0) {
      plVar21 = (long *)0x0;
      plVar12 = plVar17;
      plVar19 = plVar10;
      plVar20 = (long *)func_0x034ccd58(plVar14[0x5d],plVar14);
    }
  }
  if (plVar13 == (long *)0x0) {
    return plVar20;
  }
  lVar24 = *plVar13;
  uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar32 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059ca9b8) {
        puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
        goto LAB_033bfb80;
      }
      uVar32 = uVar32 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar32 != 0);
  }
  plVar12 = (long *)0x0;
  puVar11 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bfb80:
  plVar20 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
  *(long **)(puVar7 + -0x398) = plVar20;
  *(undefined8 *)(puVar7 + -0x3a8) = 0;
  *(undefined1 **)(puVar7 + -0x3a0) = puVar7 + -0x398;
  if (plVar20 != (long *)0x0) {
    plVar10 = (long *)&DAT_059df6e0;
    plVar17 = (long *)&DAT_059cbd38;
    plVar13 = plVar20;
    do {
      lVar24 = *plVar13;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bfbfc;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bfbfc:
      plVar20 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
      if (((ulong)plVar20 & 1) == 0) goto LAB_033bfcac;
      plVar13 = *(long **)(puVar7 + -0x398);
      if (plVar13 == (long *)0x0) {
        func_0x0249fb90();
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      lVar24 = *plVar13;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059cbd38) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bfc60;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bfc60:
      (*(code *)*puVar11)(puVar7 + -0x3f8,plVar13,puVar11[1]);
      if (*(int *)(puVar7 + -0x3f8) == 3) {
        if (auVar43._8_8_ == 0) goto LAB_033bfd3c;
        plVar12 = (long *)0x0;
        lVar24 = func_0x0376e450(auVar43._8_8_,*(undefined8 *)(puVar7 + -0x3ec));
        if (lVar24 != 0) {
          plVar12 = (long *)0x0;
          func_0x036efea8(lVar24,plVar14);
        }
      }
      plVar13 = *(long **)(puVar7 + -0x398);
    } while (plVar13 != (long *)0x0);
  }
  plVar20 = (long *)func_0x0249fb90();
LAB_033bfcac:
  lVar24 = 0;
  puVar11 = (undefined8 *)(puVar7 + -0x398);
  do {
    plVar30 = (long *)*puVar11;
    auVar43._8_8_ = lVar24;
    auVar43._0_8_ = plVar30;
    if (plVar30 != (long *)0x0) {
      lVar25 = *plVar30;
      uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar11 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar12 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033bfd10:
      plVar20 = (long *)(*(code *)*puVar11)(plVar30,puVar11[1]);
    }
    if (lVar24 == 0) {
      return plVar20;
    }
LAB_033bfd40:
    uVar37 = auVar43._0_8_;
    func_0x0249fb88(auVar43._8_8_);
LAB_033bfd48:
    auVar44 = func_0x0249fb90();
    uVar18 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) goto LAB_033bfd90;
    plVar20 = (long *)func_0x054ed080(uVar18);
    lVar24 = *plVar20;
    *(long *)(puVar7 + -0x3a8) = lVar24;
    plVar20 = (long *)func_0x054ed090();
    puVar11 = *(undefined8 **)(puVar7 + -0x3a0);
  } while( true );
LAB_033bcfbc:
  if (plStack_68 != (long *)0x0) {
    lVar24 = *plStack_68;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df598) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033bd020;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    plVar16 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd020:
    plVar12 = (long *)(*(code *)*puVar11)(unaff_x25,puVar11[1]);
  }
  unaff_x26 = unaff_x26 + 1;
  puVar23 = (undefined *)(ulong)*(uint *)(plStack_80 + 3);
  if ((long)(int)*(uint *)(plStack_80 + 3) <= (long)unaff_x26) {
    return plVar12;
  }
  goto LAB_033bcdf4;
LAB_033bd954:
  plVar13 = *(long **)((long)pplVar6 + -0x68);
  if (plVar13 != (long *)0x0) {
    lVar24 = *plVar13;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df598) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033bd9b8;
        }
        uVar32 = uVar32 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar32 != 0);
    }
    plVar30 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bd9b8:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
  plVar31 = *(long **)((long)pplVar6 + -0x90);
  plVar20 = (long *)0x0;
  if (plVar31 == (long *)0x0) goto LAB_033bdce8;
  lVar24 = *plVar31;
  uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar32 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059ca768) {
        puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
        goto LAB_033bda24;
      }
      uVar32 = uVar32 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar32 != 0);
  }
  plVar30 = (long *)0x0;
  puVar11 = (undefined8 *)func_0x024d927c(plVar31);
LAB_033bda24:
  plVar20 = (long *)(*(code *)*puVar11)(plVar31,puVar11[1]);
  *(long **)((long)pplVar6 + -0x70) = plVar20;
  *(undefined8 *)((long)pplVar6 + -0x80) = 0;
  *(undefined1 **)((long)pplVar6 + -0x78) = (undefined1 *)((long)pplVar6 + -0x70);
  if (plVar20 != (long *)0x0) {
    do {
      lVar24 = *plVar20;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bda90;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar30 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bda90:
      plVar15 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
      if (((ulong)plVar15 & 1) == 0) goto LAB_033bdb9c;
      plVar20 = *(long **)((long)pplVar6 + -0x70);
      if (plVar20 == (long *)0x0) {
        uVar37 = func_0x0249fb90();
        plVar20 = (long *)0x0;
        goto LAB_033bdd00;
      }
      lVar24 = *plVar20;
      uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar32 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059cbac8) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033bdaf4;
          }
          uVar32 = uVar32 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar32 != 0);
      }
      plVar30 = (long *)0x0;
      puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bdaf4:
      plVar20 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
      if (0 < (int)plVar12) {
        if (plVar20 == (long *)0x0) {
          uVar37 = func_0x0249fb90();
          plVar20 = (long *)0x0;
          goto LAB_033bdd00;
        }
        do {
          lVar24 = *plVar20;
          uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar32 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                puVar11 = (undefined8 *)(lVar24 + (long)(*piVar29 + 0x1f) * 0x10 + 0x138);
                goto LAB_033bdb60;
              }
              uVar32 = uVar32 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar32 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059defe8,0x1f);
LAB_033bdb60:
          plVar17 = (long *)puVar11[1];
          plVar38 = (long *)0x0;
          plVar30 = plVar19;
          uVar32 = (*(code *)*puVar11)(plVar20,plVar35);
          if ((uVar32 & 1) == 0) goto LAB_033bdb8c;
          iVar8 = (int)plVar12;
          plVar12 = (long *)(ulong)(iVar8 - 1);
        } while (1 < iVar8);
        plVar12 = (long *)0x0;
      }
LAB_033bdb8c:
      plVar20 = *(long **)((long)pplVar6 + -0x70);
      if (plVar20 == (long *)0x0) break;
    } while( true );
  }
  plVar20 = (long *)0x0;
  uVar37 = func_0x0249fb90();
  goto LAB_033bdd00;
LAB_033bdb9c:
  plVar12 = (long *)0xd;
  plVar20 = *(long **)((long)pplVar6 + -0x70);
  if (plVar20 != (long *)0x0) {
    lVar24 = *plVar20;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df598) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033bdc04;
        }
        uVar32 = uVar32 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar32 != 0);
    }
    plVar30 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bdc04:
    plVar15 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
  }
  plVar20 = *(long **)((long)pplVar6 + -0xa0);
  plVar31 = *(long **)((long)pplVar6 + -0x98);
  plVar14 = (long *)(ulong)*(uint *)(plVar20 + 3);
  plVar16 = (long *)((long)plVar16 + 1);
  if ((long)(int)*(uint *)(plVar20 + 3) <= (long)plVar16) {
    return plVar15;
  }
  goto LAB_033bd790;
LAB_033be9a8:
  plVar21 = *(long **)(puVar7 + -200);
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df598) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033bea0c;
        }
        uVar32 = uVar32 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar32 != 0);
    }
    plVar12 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033bea0c:
    (*(code *)*puVar11)(plVar21,puVar11[1]);
  }
  plVar14 = *(long **)(puVar7 + -0xc0);
  goto joined_r0x033be48c;
LAB_033bf044:
  plVar16 = (long *)0xc;
  plVar21 = *(long **)(puVar7 + -0x130);
  if (plVar21 != (long *)0x0) {
    lVar24 = *plVar21;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df598) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033bf0ac;
        }
        uVar32 = uVar32 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar32 != 0);
    }
    plVar12 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plVar21);
LAB_033bf0ac:
    (*(code *)*puVar11)(plVar21,puVar11[1]);
  }
  plVar38 = *(long **)(puVar7 + -0x128);
  goto joined_r0x033bebe4;
LAB_033bfd90:
  func_0x022bd79c(puVar7 + -0x3a8);
  func_0x0258f7ac(uVar18);
  auVar40 = func_0x022bd790();
  auVar39._8_8_ = plVar12;
  auVar39._0_8_ = auVar40._8_8_;
  puVar23 = auVar40._0_8_;
  *(undefined8 *)(puVar7 + -0x440) = 0x33bfda4;
  *(undefined8 *)(puVar7 + -0x438) = 0x5e2c000;
  *(ulong *)(puVar7 + -0x430) = (ulong)plVar31 & 0xffffffff;
  *(long **)(puVar7 + -0x428) = plVar17;
  *(long **)(puVar7 + -0x420) = plVar10;
  *(long **)(puVar7 + -0x418) = plVar13;
  *(undefined8 *)(puVar7 + -0x410) = uVar37;
  *(undefined8 *)(puVar7 + -0x408) = uVar18;
  puVar7[-0x444] = 0;
  uVar9 = func_0x033bb508();
  plVar31 = (long *)(ulong)uVar9;
  if ((uVar9 & 1) == 0) {
    return (long *)(ulong)(uVar9 & 1);
  }
  uVar37 = 0x33bfe00;
  puVar7 = puVar7 + -0x450;
  plVar17 = plVar22;
  plVar14 = plVar21;
  plVar30 = plVar19;
  plVar10 = plVar38;
  goto SUB_033be0c4;
}


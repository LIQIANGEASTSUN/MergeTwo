/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void RemoveItemsFromBoards(GameLogic.Player.IPlayer player, System.Collections.Generic.IEnumerable`1<GameLogic.Player.Board.MergeBoard> mergeBoards, System.Int32[] items, System.Int32[] amounts, Metaplay.Core.MetaTime currentTime)
 * Ghidra function entry: 033bcbe8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033bfdfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033bf1f8) */
/* WARNING: Removing unreachable block (ram,0x033bdc20) */
/* WARNING: Removing unreachable block (ram,0x033beb58) */
/* WARNING: Removing unreachable block (ram,0x033bf21c) */
/* WARNING: Removing unreachable block (ram,0x033bf0c4) */
/* WARNING: Removing unreachable block (ram,0x033bf1dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_033bcbe8(long *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  long *plVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  undefined *puVar33;
  code *pcVar34;
  long *unaff_x25;
  undefined8 uVar35;
  long *plVar36;
  undefined *unaff_x26;
  undefined *puVar37;
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
  
  if ((bRam0000000005e2c3b6 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a430c8);
    func_0x0249f8e4(&DAT_05a43b40);
    func_0x0249f8e4(&DAT_059c6860);
    func_0x0249f8e4(&DAT_05a69e90);
    func_0x0249f8e4(&DAT_059efc88);
    bRam0000000005e2c3b6 = 1;
  }
  if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
  lVar32 = puVar22[3];
  if (lVar32 == 0) {
    if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
      func_0x0249fa64();
      puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
    }
    uVar35 = *puVar22;
    lVar32 = func_0x0249fb80(_DAT_059c6860);
    func_0x02a9aa34(lVar32,uVar35,_DAT_05a69e90,0);
    plVar10 = (long *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x18);
    *plVar10 = lVar32;
    func_0x0249f888(plVar10,lVar32);
  }
  uVar35 = func_0x026e8e9c(param_3,lVar32,_DAT_05a430c8);
  plVar11 = (long *)func_0x026ebbf4(uVar35,_DAT_05a43b40);
  uVar31 = 0x5e2c000;
  plVar12 = param_1;
  plVar10 = plVar11;
  plVar20 = param_4;
  plVar19 = param_5;
  if ((bRam0000000005e2c3b7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059df6e0);
    plVar12 = (long *)func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2c3b7 = 1;
  }
  plStack_68 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    if ((int)plVar11[3] < 1) {
      return plVar12;
    }
    unaff_x29 = &DAT_059df6e0;
    unaff_x28 = &DAT_059cbd30;
    unaff_x27 = &DAT_059e2c00;
    unaff_x26 = (undefined *)0x0;
    puVar23 = (undefined *)(plVar11[3] & 0xffffffff);
    plStack_80 = plVar11;
LAB_033bcdf4:
    plVar11 = plStack_80;
    if (unaff_x26 < puVar23) {
      if (param_4 == (long *)0x0) goto LAB_033bd0bc;
      if ((undefined *)(ulong)*(uint *)(param_4 + 3) <= unaff_x26) goto LAB_033bd0c0;
      if (param_2 == (long *)0x0) goto LAB_033bd0bc;
      lVar32 = *param_2;
      plVar12 = (long *)plStack_80[(long)(unaff_x26 + 4)];
      uVar27 = (ulong)*(ushort *)(lVar32 + 0x12e);
      uVar31 = (ulong)*(uint *)((long)param_4 + (long)unaff_x26 * 4 + 0x20);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059ca9b0) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            plVar11 = plVar20;
            goto LAB_033bce74;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      plVar10 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(param_2);
      plVar11 = plVar20;
LAB_033bce74:
      plStack_68 = (long *)(*(code *)*puVar22)(param_2,puVar22[1]);
      pplStack_70 = &plStack_68;
      uStack_78 = 0;
      plVar20 = plVar11;
      if (plStack_68 != (long *)0x0) {
        do {
          plVar30 = plStack_68;
          lVar32 = *plStack_68;
          uVar27 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                plVar20 = plVar11;
                goto LAB_033bcee0;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          plVar10 = (long *)0x0;
          puVar22 = (undefined8 *)func_0x024d927c(plStack_68);
          plVar20 = plVar11;
LAB_033bcee0:
          plVar11 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
          unaff_x25 = plStack_68;
          if (((ulong)plVar11 & 1) == 0) goto LAB_033bcfbc;
          if (plStack_68 == (long *)0x0) {
            puVar23 = (undefined *)func_0x0249fb90();
            goto LAB_033bd0cc;
          }
          lVar32 = *plStack_68;
          uVar27 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059cbd30) {
                puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                plVar11 = plVar20;
                goto LAB_033bcf44;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          plVar10 = (long *)0x0;
          puVar22 = (undefined8 *)func_0x024d927c(plStack_68);
          plVar11 = plVar20;
LAB_033bcf44:
          lVar32 = (*(code *)*puVar22)(unaff_x25,puVar22[1]);
          if (0 < (int)uVar31) {
            do {
              plVar20 = plVar11;
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
                plVar20 = plVar11;
              }
              plVar11 = (long *)func_0x03530158(param_5,0);
              if (lVar32 == 0) {
                puVar23 = (undefined *)func_0x0249fb90();
                unaff_x25 = (long *)0x0;
                goto LAB_033bd0cc;
              }
              plVar19 = (long *)0x0;
              param_6 = (long *)0x0;
              plVar10 = plVar12;
              uVar27 = func_0x037878dc(lVar32,param_1);
              if ((uVar27 & 1) == 0) goto LAB_033bcfac;
              iVar8 = (int)uVar31;
              uVar31 = (ulong)(iVar8 - 1);
            } while (1 < iVar8);
            uVar31 = 0;
          }
LAB_033bcfac:
          plVar20 = plVar11;
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
  puVar23 = (undefined *)func_0x0249fb88(plVar11);
LAB_033bd0cc:
  func_0x022bd79c(&uStack_78);
  func_0x0258f7ac(puVar23);
  auVar39 = func_0x022bd790();
  plVar30 = auVar39._8_8_;
  plVar11 = auVar39._0_8_;
  uStack_d0 = 0x33bd0e4;
  plVar12 = (long *)0x5e2c000;
  plVar29 = (long *)((ulong)plVar10 & 0xffffffff);
  puStack_c0 = unaff_x26;
  plStack_b8 = unaff_x25;
  puStack_b0 = puVar23;
  plStack_a8 = param_1;
  plStack_a0 = param_2;
  uStack_98 = uVar31;
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
  if (plVar11 != (long *)0x0) {
    lVar32 = *plVar11;
    puVar23 = &DAT_059e0220;
    uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar31 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
          puVar22 = (undefined8 *)(lVar32 + (long)(*piVar28 + 0x57) * 0x10 + 0x138);
          goto LAB_033bd1b8;
        }
        uVar31 = uVar31 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar31 != 0);
    }
    puVar22 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059e0220,0x57);
LAB_033bd1b8:
    plVar10 = (long *)puVar22[1];
    plVar13 = (long *)(*(code *)*puVar22)(plVar11,1);
    if (plVar13 != (long *)0x0) {
      lVar32 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059ca9b0) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            plVar16 = plVar10;
            goto LAB_033bd224;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar16 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bd224:
      unaff_x25 = (long *)&DAT_059df6e0;
      unaff_x26 = &DAT_059cbd30;
      param_1 = (long *)&DAT_059df598;
      plStack_c8 = (long *)(*(code *)*puVar22)(plVar13,puVar22[1]);
      pplStack_d8 = &plStack_c8;
      plStack_e0 = (long *)0x0;
      while (plVar12 = plStack_c8, plStack_c8 != (long *)0x0) {
        lVar32 = *plStack_c8;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              plVar10 = plVar16;
              goto LAB_033bd2a8;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar10 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033bd2a8:
        plVar16 = (long *)(*(code *)*puVar22)(plVar12,puVar22[1]);
        plVar13 = plStack_c8;
        if (((ulong)plVar16 & 1) == 0) {
          plVar29 = (long *)0x0;
          pplVar6 = &plStack_c8;
          goto LAB_033bd3a4;
        }
        plVar12 = plStack_c8;
        if (plStack_c8 == (long *)0x0) goto LAB_033bd428;
        lVar32 = *plStack_c8;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059cbd30) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033bd30c;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar10 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plStack_c8);
LAB_033bd30c:
        lVar32 = (*(code *)*puVar22)(plVar13,puVar22[1]);
        lVar24 = *plVar11;
        uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
              puVar22 = (undefined8 *)(lVar24 + (long)(*piVar28 + 0xc) * 0x10 + 0x138);
              goto LAB_033bd36c;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar10 = (long *)0xc;
        puVar22 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033bd36c:
        plVar16 = (long *)(*(code *)*puVar22)(plVar11,puVar22[1]);
        plVar12 = (long *)0x0;
        if (lVar32 == 0) goto LAB_033bd42c;
        param_6 = (long *)0x0;
        plVar20 = plVar30;
        plVar19 = plVar29;
        func_0x03781b10(lVar32,plVar11);
      }
      func_0x0249fb90();
      plVar10 = plVar16;
LAB_033bd428:
      func_0x0249fb90();
LAB_033bd42c:
      func_0x0249fb90();
    }
  }
  func_0x0249fb90();
  while( true ) {
    auVar44 = func_0x0249fb88(plVar29);
    uStack_e8 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) break;
    puVar22 = (undefined8 *)func_0x054ed080(uStack_e8);
    plVar29 = (long *)*puVar22;
    plStack_e0 = plVar29;
    plVar16 = (long *)func_0x054ed090();
    pplVar6 = pplStack_d8;
LAB_033bd3a4:
    plVar30 = *pplVar6;
    if (plVar30 != (long *)0x0) {
      lVar32 = *plVar30;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *param_1) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bd3f8;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar10 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033bd3f8:
      plVar16 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
    }
    if (plVar29 == (long *)0x0) {
      return plVar16;
    }
  }
  func_0x022bd79c(&plStack_e0);
  func_0x0258f7ac(uStack_e8);
  auVar39 = func_0x022bd790();
  pplVar6 = (long **)auStack_130;
  auStack_130[0] = 0x33bd494;
  puVar37 = &DAT_059d7518;
  uVar31 = (ulong)plVar19 & 0xffffffff;
  puVar33 = (undefined *)((ulong)plVar20 & 0xffffffff);
  plVar29 = plVar10;
  plVar13 = plVar20;
  plVar16 = plVar19;
  plVar18 = param_6;
  puStack_120 = unaff_x26;
  plStack_118 = unaff_x25;
  puStack_110 = puVar23;
  plStack_108 = param_1;
  plStack_100 = plVar12;
  plStack_f8 = plVar11;
  plStack_f0 = plVar30;
  if ((bRam0000000005e2c3b9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d7518);
    bRam0000000005e2c3b9 = 1;
  }
  plVar11 = (long *)func_0x0249f9d4(_DAT_059d7518,1);
  uVar35 = _DAT_059d7518;
  plVar12 = (long *)0x5e2c000;
  if (plVar11 == (long *)0x0) {
LAB_033bd554:
    plVar30 = plVar16;
    func_0x0249fb90();
  }
  else {
    plVar30 = plVar16;
    plVar12 = plVar11;
    if ((int)plVar11[3] != 0) {
      *(int *)(plVar11 + 4) = (int)plVar20;
      plVar30 = (long *)func_0x0249f9d4(uVar35,1);
      auVar40._8_8_ = plStack_100;
      auVar40._0_8_ = plStack_108;
      if (plVar30 == (long *)0x0) goto LAB_033bd554;
      if ((int)plVar30[3] != 0) {
        *(int *)(plVar30 + 4) = (int)plVar19;
        pplVar6 = &plStack_e0;
        plVar29 = plVar10;
        plVar18 = param_6;
        uVar31 = uStack_e8;
        param_6 = plStack_f0;
        plVar10 = plStack_f8;
        puVar33 = puStack_110;
        plVar12 = plStack_118;
        puVar37 = puStack_120;
        uVar35 = auStack_130[0];
        auVar42 = auVar39;
        auVar39 = auVar40;
        goto SUB_033bd55c;
      }
    }
  }
  plVar11 = plVar13;
  uVar35 = 0x33bd55c;
  auVar42 = func_0x0249fb98();
SUB_033bd55c:
  plVar20 = auVar42._0_8_;
  *(undefined **)((long)pplVar6 + -0x60) = unaff_x29;
  *(undefined8 *)((long)pplVar6 + -0x58) = uVar35;
  *(undefined **)((long)pplVar6 + -0x50) = unaff_x28;
  *(undefined **)((long)pplVar6 + -0x48) = unaff_x27;
  *(undefined **)((long)pplVar6 + -0x40) = puVar37;
  *(long **)((long)pplVar6 + -0x38) = plVar12;
  *(undefined **)((long)pplVar6 + -0x30) = puVar33;
  *(undefined1 (*) [16])((long)pplVar6 + -0x28) = auVar39;
  *(long **)((long)pplVar6 + -0x18) = plVar10;
  *(long **)((long)pplVar6 + -0x10) = param_6;
  *(ulong *)((long)pplVar6 + -8) = uVar31;
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
  puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
  lVar32 = puVar22[4];
  if (lVar32 == 0) {
    if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
      func_0x0249fa64();
      puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
    }
    uVar35 = *puVar22;
    lVar32 = func_0x0249fb80(_DAT_059c6860);
    func_0x02a9aa34(lVar32,uVar35,_DAT_05a69e98,0);
    plVar10 = (long *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x20);
    *plVar10 = lVar32;
    func_0x0249f888(plVar10,lVar32);
  }
  uVar35 = func_0x026e8e9c(plVar11,lVar32,_DAT_05a430c8);
  plVar19 = (long *)func_0x026ebbf4(uVar35,_DAT_05a43b40);
  puVar23 = *(undefined **)((long)pplVar6 + -0x20);
  puVar33 = *(undefined **)((long)pplVar6 + -0x18);
  plVar11 = *(long **)((long)pplVar6 + -0x28);
  plVar10 = *(long **)((long)pplVar6 + -0x50);
  plVar13 = *(long **)((long)pplVar6 + -0x48);
  plVar12 = *(long **)((long)pplVar6 + -0x60);
  *(long **)((long)pplVar6 + -0x60) = plVar12;
  *(undefined8 *)((long)pplVar6 + -0x58) = *(undefined8 *)((long)pplVar6 + -0x58);
  *(long **)((long)pplVar6 + -0x50) = plVar10;
  *(long **)((long)pplVar6 + -0x48) = plVar13;
  *(undefined8 *)((long)pplVar6 + -0x40) = *(undefined8 *)((long)pplVar6 + -0x40);
  *(undefined8 *)((long)pplVar6 + -0x38) = *(undefined8 *)((long)pplVar6 + -0x38);
  *(undefined8 *)((long)pplVar6 + -0x30) = *(undefined8 *)((long)pplVar6 + -0x30);
  *(long **)((long)pplVar6 + -0x28) = plVar11;
  *(undefined **)((long)pplVar6 + -0x20) = puVar23;
  *(undefined **)((long)pplVar6 + -0x18) = puVar33;
  *(undefined8 *)((long)pplVar6 + -0x10) = *(undefined8 *)((long)pplVar6 + -0x10);
  *(undefined8 *)((long)pplVar6 + -8) = *(undefined8 *)((long)pplVar6 + -8);
  puVar37 = (undefined *)0x5e2c000;
  *(long **)((long)pplVar6 + -0x90) = plVar29;
  *(long *)((long)pplVar6 + -0x88) = auVar42._8_8_;
  plVar14 = plVar20;
  plVar38 = plVar19;
  plVar16 = plVar30;
  plVar21 = plVar18;
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
  plVar36 = plVar30;
  if (plVar19 != (long *)0x0) {
    if ((int)plVar19[3] < 1) {
      return plVar14;
    }
    plVar12 = (long *)&DAT_059df6e0;
    puVar33 = &DAT_059cbac8;
    puVar37 = &DAT_059defe8;
    puVar23 = &DAT_059cbd30;
    plVar10 = (long *)0x0;
    plVar14 = (long *)(plVar19[3] & 0xffffffff);
    *(long **)((long)pplVar6 + -0xa0) = plVar19;
    *(long **)((long)pplVar6 + -0x98) = plVar30;
LAB_033bd790:
    plVar36 = plVar30;
    if (plVar10 < plVar14) {
      if (plVar30 == (long *)0x0) goto LAB_033bdce8;
      if ((long *)(ulong)*(uint *)(plVar30 + 3) <= plVar10) goto LAB_033bdcec;
      if (*(long **)((long)pplVar6 + -0x88) == (long *)0x0) goto LAB_033bdce8;
      lVar32 = **(long **)((long)pplVar6 + -0x88);
      plVar36 = (long *)plVar19[(long)((long)plVar10 + 4)];
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      plVar11 = (long *)(ulong)*(uint *)((long)plVar30 + (long)plVar10 * 4 + 0x20);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059ca9b0) {
            uVar35 = *(undefined8 *)((long)pplVar6 + -0x88);
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bd81c;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      uVar35 = *(undefined8 *)((long)pplVar6 + -0x88);
      plVar29 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(uVar35);
LAB_033bd81c:
      plVar19 = (long *)(*(code *)*puVar22)(uVar35,puVar22[1]);
      *(long **)((long)pplVar6 + -0x68) = plVar19;
      *(undefined8 *)((long)pplVar6 + -0x80) = 0;
      *(undefined1 **)((long)pplVar6 + -0x78) = (undefined1 *)((long)pplVar6 + -0x68);
      if (plVar19 != (long *)0x0) {
        do {
          lVar32 = *plVar19;
          uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar31 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033bd888;
              }
              uVar31 = uVar31 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
          }
          plVar29 = (long *)0x0;
          puVar22 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bd888:
          uVar31 = (*(code *)*puVar22)(plVar19,puVar22[1]);
          if ((uVar31 & 1) == 0) goto LAB_033bd954;
          plVar19 = *(long **)((long)pplVar6 + -0x68);
          if (plVar19 == (long *)0x0) {
            uVar35 = func_0x0249fb90();
            plVar19 = (long *)0x0;
            goto LAB_033bdd00;
          }
          lVar32 = *plVar19;
          uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar31 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059cbd30) {
                puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033bd8ec;
              }
              uVar31 = uVar31 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
          }
          plVar29 = (long *)0x0;
          puVar22 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bd8ec:
          lVar32 = (*(code *)*puVar22)(plVar19,puVar22[1]);
          plVar30 = plVar11;
          plVar13 = plVar11;
          if (0 < (int)plVar11) {
            do {
              plVar13 = plVar30;
              if (lVar32 == 0) {
                uVar35 = func_0x0249fb90();
                plVar19 = (long *)0x0;
                goto LAB_033bdd00;
              }
              plVar16 = (long *)0x0;
              plVar21 = (long *)0x0;
              plVar29 = plVar36;
              plVar38 = plVar18;
              uVar31 = func_0x037878dc(lVar32,plVar20);
              iVar8 = (int)plVar30;
              if ((uVar31 & 1) == 0) goto LAB_033bd944;
              plVar13 = (long *)(ulong)(iVar8 - 1);
              plVar30 = plVar13;
            } while (1 < iVar8);
            plVar30 = (long *)0x0;
          }
LAB_033bd944:
          plVar19 = *(long **)((long)pplVar6 + -0x68);
          plVar11 = plVar30;
          if (plVar19 == (long *)0x0) break;
        } while( true );
      }
      plVar19 = (long *)0x0;
      uVar35 = func_0x0249fb90();
      goto LAB_033bdd00;
    }
    goto LAB_033bdcec;
  }
LAB_033bdce8:
  func_0x0249fb90();
LAB_033bdcec:
  func_0x0249fb98();
  func_0x0249fb88(plVar36);
  uVar35 = func_0x0249fb88(plVar19);
LAB_033bdd00:
  func_0x022bd79c((undefined1 *)((long)pplVar6 + -0x80));
  func_0x0258f7ac(uVar35);
  auVar39 = func_0x022bd790();
  lVar32 = auVar39._8_8_;
  *(undefined8 *)((long)pplVar6 + -0xf0) = 0x33bdd28;
  *(long **)((long)pplVar6 + -0xe0) = plVar19;
  *(long **)((long)pplVar6 + -0xd8) = plVar36;
  *(long **)((long)pplVar6 + -0xd0) = plVar20;
  *(long **)((long)pplVar6 + -200) = plVar11;
  *(undefined **)((long)pplVar6 + -0xc0) = puVar23;
  *(undefined **)((long)pplVar6 + -0xb8) = puVar33;
  *(undefined **)((long)pplVar6 + -0xb0) = puVar37;
  *(undefined8 *)((long)pplVar6 + -0xa8) = uVar35;
  plVar30 = (long *)0x5e2c000;
  puVar23 = &DAT_05a3c7d8;
  plVar14 = (long *)((ulong)plVar38 & 0xffffffff);
  plVar11 = plVar29;
  plVar18 = plVar38;
  plVar20 = plVar16;
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
  plVar36 = (long *)func_0x026bf824((undefined1 *)((long)pplVar6 + -0x108),_DAT_05a3c7d8);
  if (lVar32 != 0) {
    plVar20 = (long *)0x0;
    plVar21 = (long *)0x0;
    plVar18 = plVar16;
    plVar11 = (long *)func_0x037878dc(lVar32,auVar39._0_8_);
    if (((ulong)plVar11 & 1) != 0) {
      return plVar11;
    }
    plVar11 = plVar36;
    if (plVar29 != (long *)0x0) {
      lVar24 = *plVar29;
      uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059ca768) {
            puVar22 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bde48;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033bde48:
      uVar35 = (*(code *)*puVar22)(plVar29,puVar22[1]);
      *(undefined8 *)((long)pplVar6 + -0xf8) = uVar35;
      plVar30 = (long *)&DAT_059cbac8;
      plVar19 = (long *)&DAT_059defe8;
      *(undefined8 *)((long)pplVar6 + -0x108) = 0;
      *(undefined1 **)((long)pplVar6 + -0x100) = (undefined1 *)((long)pplVar6 + -0xf8);
      do {
        auVar39._8_8_ = lVar32;
        auVar39._0_8_ = &DAT_059df6e0;
        plVar29 = *(long **)((long)pplVar6 + -0xf8);
        if (plVar29 == (long *)0x0) {
          func_0x0249fb90();
LAB_033be058:
          func_0x0249fb90();
LAB_033be05c:
          func_0x0249fb90();
          goto LAB_033be060;
        }
        lVar24 = *plVar29;
        uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
              puVar22 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033bdecc;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033bdecc:
        plVar36 = (long *)(*(code *)*puVar22)(plVar29,puVar22[1]);
        if (((ulong)plVar36 & 1) == 0) break;
        plVar36 = *(long **)((long)pplVar6 + -0xf8);
        plVar29 = (long *)0x0;
        if (plVar36 == (long *)0x0) goto LAB_033be058;
        lVar32 = *plVar36;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059cbac8) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033bdf30;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plVar36);
LAB_033bdf30:
        plVar29 = (long *)(*(code *)*puVar22)(plVar36,puVar22[1]);
        *(int *)((long)pplVar6 + -0xe4) = (int)plVar38;
        lVar32 = func_0x026bf824((undefined1 *)((long)pplVar6 + -0xe4),_DAT_05a3c7d8);
        if (plVar29 == (long *)0x0) goto LAB_033be05c;
        lVar24 = *plVar29;
        uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
              puVar22 = (undefined8 *)(lVar24 + (long)(*piVar28 + 0x1f) * 0x10 + 0x138);
              goto LAB_033bdfa8;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        puVar22 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059defe8,0x1f);
LAB_033bdfa8:
        plVar20 = (long *)puVar22[1];
        plVar18 = (long *)0x0;
        plVar11 = plVar16;
        plVar36 = (long *)(*(code *)*puVar22)(plVar29,lVar32);
      } while (((ulong)plVar36 & 1) == 0);
      auVar39._8_8_ = lVar32;
      auVar39._0_8_ = &DAT_059df6e0;
      plVar16 = (long *)0x0;
      puVar22 = (undefined8 *)((long)pplVar6 + -0xf8);
      goto LAB_033bdfcc;
    }
  }
LAB_033be060:
  func_0x0249fb90();
  while( true ) {
    auVar42._8_8_ = plVar19;
    auVar42._0_8_ = plVar13;
    auVar44 = func_0x0249fb88(plVar16);
    plVar16 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) break;
    puVar22 = (undefined8 *)func_0x054ed080(plVar16);
    plVar16 = (long *)*puVar22;
    *(long **)((long)pplVar6 + -0x108) = plVar16;
    plVar36 = (long *)func_0x054ed090();
    puVar22 = *(undefined8 **)((long)pplVar6 + -0x100);
LAB_033bdfcc:
    plVar14 = (long *)*puVar22;
    if (plVar14 != (long *)0x0) {
      lVar32 = *plVar14;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df598) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033be028;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar14);
LAB_033be028:
      plVar36 = (long *)(*(code *)*puVar22)(plVar14,puVar22[1]);
    }
    if (plVar16 == (long *)0x0) {
      return plVar36;
    }
  }
  func_0x022bd79c((undefined1 *)((long)pplVar6 + -0x108));
  func_0x0258f7ac(plVar16);
  uVar35 = 0x33be0c4;
  auVar40 = func_0x022bd790();
  puVar7 = (undefined1 *)((long)pplVar6 + -0x110);
SUB_033be0c4:
  plVar38 = auVar42._8_8_;
  plVar36 = auVar40._0_8_;
  puVar33 = auVar39._8_8_;
  *(long **)(puVar7 + -0x60) = plVar12;
  *(undefined8 *)(puVar7 + -0x58) = uVar35;
  *(long **)(puVar7 + -0x50) = plVar10;
  *(undefined1 (*) [16])(puVar7 + -0x48) = auVar42;
  *(long **)(puVar7 + -0x38) = plVar30;
  *(undefined **)(puVar7 + -0x30) = puVar23;
  *(undefined1 (*) [16])(puVar7 + -0x28) = auVar39;
  *(long **)(puVar7 + -0x18) = plVar29;
  *(long **)(puVar7 + -0x10) = plVar14;
  *(long **)(puVar7 + -8) = plVar16;
  puVar23 = (undefined *)0x5e2c000;
  *(long **)(puVar7 + -0x1c0) = plVar20;
  *(long **)(puVar7 + -0x1d8) = plVar11;
  *(long *)(puVar7 + -0x1d0) = auVar40._8_8_;
  plVar19 = plVar18;
  plVar13 = plVar20;
  plVar16 = plVar21;
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
    plVar13 = plVar20;
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
  if (plVar18 != (long *)0x0) {
    lVar32 = *plVar18;
    uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar31 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059c9f60) {
          puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033be2d8;
        }
        uVar31 = uVar31 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar31 != 0);
    }
    plVar11 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(plVar18);
LAB_033be2d8:
    puVar33 = &DAT_059df6e0;
    plVar29 = (long *)&DAT_059df8e8;
    puVar23 = &DAT_059cb2d8;
    uVar35 = (*(code *)*puVar22)(plVar18,puVar22[1]);
    *(undefined8 *)(puVar7 + -0xb8) = uVar35;
    *(undefined8 *)(puVar7 + -0x140) = 0;
    *(undefined1 **)(puVar7 + -0x138) = puVar7 + -0xb8;
    plVar20 = plVar30;
    do {
      do {
        pcVar34 = *(code **)(puVar7 + -0xb8);
        if (pcVar34 == (code *)0x0) {
          func_0x0249fb90();
LAB_033bf328:
          plVar30 = plVar20;
          func_0x0249fb90();
LAB_033bf32c:
          func_0x0249fb90();
LAB_033bf330:
          func_0x0249fb90();
          plVar18 = plVar10;
LAB_033bf334:
          func_0x0249fb88();
          goto LAB_033bf338;
        }
        lVar32 = *(long *)pcVar34;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033be35c;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(pcVar34);
LAB_033be35c:
        uVar31 = (*(code *)*puVar22)(pcVar34,puVar22[1]);
        auVar41._8_8_ = plVar16;
        auVar41._0_8_ = plVar11;
        if ((uVar31 & 1) == 0) goto LAB_033bf3d0;
        pcVar34 = (code *)func_0x0249fb80(_DAT_059efcb0);
        func_0x03789cdc(pcVar34,0);
        plVar20 = *(long **)(puVar7 + -0xb8);
        plVar30 = plVar20;
        if (plVar20 == (long *)0x0) goto LAB_033bf330;
        lVar32 = *plVar20;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059cb2a8) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033be3e4;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033be3e4:
        auVar39 = (*(code *)*puVar22)(plVar20,puVar22[1]);
        plVar30 = auVar39._8_8_;
        if (pcVar34 == (code *)0x0) goto LAB_033bf328;
        *(long *)(pcVar34 + 0x10) = auVar39._0_8_;
        func_0x0249f888(pcVar34 + 0x10,auVar39._0_8_);
        plVar20 = *(long **)(puVar7 + -0x1d0);
        if (plVar20 == (long *)0x0) goto LAB_033bf32c;
        lVar32 = *plVar20;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        *(code **)(puVar7 + -0x1b8) = pcVar34;
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059ca9b0) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033be470;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plVar20);
        plVar20 = *(long **)(puVar7 + -0x1d0);
LAB_033be470:
        plVar14 = (long *)(*(code *)*puVar22)(plVar20,puVar22[1]);
        *(long **)(puVar7 + -0xc0) = plVar14;
        *(undefined8 *)(puVar7 + -0x150) = 0;
        *(undefined1 **)(puVar7 + -0x148) = puVar7 + -0xc0;
        plVar18 = plVar30;
joined_r0x033be48c:
        plVar20 = plVar18;
        if (plVar14 == (long *)0x0) {
          func_0x0249fb90();
          auVar41._8_8_ = plVar16;
          auVar41._0_8_ = plVar11;
          goto LAB_033bf344;
        }
        lVar32 = *plVar14;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033be4dc;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(plVar14);
LAB_033be4dc:
        uVar31 = (*(code *)*puVar22)(plVar14,puVar22[1]);
        if ((uVar31 & 1) != 0) {
          plVar30 = *(long **)(puVar7 + -0xc0);
          if (plVar30 == (long *)0x0) {
            func_0x0249fb90();
            auVar41._8_8_ = plVar16;
            auVar41._0_8_ = plVar11;
          }
          else {
            lVar32 = *plVar30;
            uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
            if (uVar31 != 0) {
              piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059cbd30) {
                  puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_033be548;
                }
                uVar31 = uVar31 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
            }
            puVar22 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059cbd30,0);
LAB_033be548:
            lVar32 = (*(code *)*puVar22)(plVar30,puVar22[1]);
            uVar35 = func_0x0249fb80(_DAT_059d4870);
            func_0x028b4b8c(uVar35,*(undefined8 *)(puVar7 + -0x1b8),_DAT_05a69ee8,0);
            uVar35 = func_0x0376f250(lVar32,uVar35,0);
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            plVar10 = (long *)puVar22[5];
            if (plVar10 == (long *)0x0) {
              if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
                func_0x0249fa64();
                puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
              }
              plVar12 = (long *)*puVar22;
              plVar10 = (long *)func_0x0249fb80(_DAT_059c59c0);
              func_0x02a9aa34(plVar10,plVar12,_DAT_05a69ea0,0);
              puVar22 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x28);
              *puVar22 = plVar10;
              func_0x0249f888(puVar22,plVar10);
            }
            plVar19 = _DAT_05a429f8;
            uVar35 = func_0x026e880c(uVar35,plVar10,*(undefined8 *)(puVar7 + -0x1c0));
            plVar30 = _DAT_05a43a18;
            plVar11 = (long *)func_0x026eb75c(uVar35,(ulong)plVar18 & 0xffffffff);
            if (plVar11 == (long *)0x0) {
              func_0x0249fb90();
              auVar41._8_8_ = plVar16;
              auVar41._0_8_ = plVar30;
            }
            else {
              lVar24 = *plVar11;
              uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar31 != 0) {
                piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059c9f90) {
                    puVar22 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_033be6bc;
                  }
                  uVar31 = uVar31 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar31 != 0);
              }
              plVar30 = (long *)0x0;
              puVar22 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033be6bc:
              plVar20 = (long *)(*(code *)*puVar22)(plVar11,puVar22[1]);
              *(long **)(puVar7 + -200) = plVar20;
              *(long **)(puVar7 + -0x1c8) = plVar18;
              *(undefined8 *)(puVar7 + -0x160) = 0;
              *(undefined1 **)(puVar7 + -0x158) = puVar7 + -200;
              if (plVar20 != (long *)0x0) {
                do {
                  lVar24 = *plVar20;
                  uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar31 != 0) {
                    piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                        puVar22 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                        plVar11 = plVar30;
                        goto LAB_033be72c;
                      }
                      uVar31 = uVar31 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar31 != 0);
                  }
                  plVar11 = (long *)0x0;
                  puVar22 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033be72c:
                  uVar31 = (*(code *)*puVar22)(plVar20,puVar22[1]);
                  if ((uVar31 & 1) == 0) goto LAB_033be9a8;
                  plVar30 = *(long **)(puVar7 + -200);
                  plVar20 = plVar18;
                  if (plVar30 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar41._8_8_ = plVar16;
                    auVar41._0_8_ = plVar11;
                    goto LAB_033bf344;
                  }
                  lVar24 = *plVar30;
                  uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar31 != 0) {
                    piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == _DAT_059cb2d8) {
                        puVar22 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                        goto LAB_033be790;
                      }
                      uVar31 = uVar31 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar31 != 0);
                  }
                  plVar11 = (long *)0x0;
                  puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033be790:
                  auVar41 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                  plVar14 = auVar41._8_8_;
                  plVar30 = auVar41._0_8_;
                  if (plVar36 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar41._8_8_ = plVar16;
                    auVar41._0_8_ = plVar11;
                    goto LAB_033bf344;
                  }
                  lVar24 = *plVar36;
                  uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar31 != 0) {
                    piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
                        puVar22 = (undefined8 *)(lVar24 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                        goto LAB_033be7f8;
                      }
                      uVar31 = uVar31 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar31 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059df8e8,5);
LAB_033be7f8:
                  uVar35 = (*(code *)*puVar22)(plVar36,puVar22[1]);
                  uVar17 = 0;
                  uVar31 = func_0x036ecab8(plVar14,uVar35);
                  plVar10 = plVar14;
                  if (((uVar31 & 1) == 0) || (iVar8 = func_0x037286b0(plVar14,0), iVar8 < 2)) {
                    if (lVar32 == 0) {
                      func_0x0249fb90();
                      auVar41._8_8_ = plVar16;
                      auVar41._0_8_ = uVar17;
                      goto LAB_033bf344;
                    }
                    plVar13 = (long *)0x1;
                    plVar16 = (long *)0x0;
                    plVar19 = plVar21;
                    func_0x037789bc(lVar32,plVar36);
                  }
                  else {
                    func_0x036f9ba0(plVar14,1,0);
                    *(undefined8 *)(puVar7 + -0x1f0) = 0;
                    plVar13 = plVar21;
                    func_0x034ba910(puVar7 + -0x120,0x17);
                    uVar35 = auVar41._8_8_;
                    lVar24 = *plVar36;
                    uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
                    if (uVar31 != 0) {
                      piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
                          puVar22 = (undefined8 *)(lVar24 + (long)(*piVar28 + 0x17) * 0x10 + 0x138);
                          plVar19 = plVar30;
                          goto LAB_033be8e0;
                        }
                        uVar31 = uVar31 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar31 != 0);
                    }
                    uVar17 = 0x17;
                    puVar22 = (undefined8 *)func_0x024d927c(plVar36);
                    auVar41._8_8_ = uVar35;
                    auVar41._0_8_ = uVar17;
                    plVar19 = plVar30;
LAB_033be8e0:
                    plVar11 = (long *)(*(code *)*puVar22)(plVar36,puVar22[1]);
                    lVar24 = _DAT_059e0280;
                    plVar16 = auVar41._8_8_;
                    if (lVar32 == 0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    if (plVar11 == (long *)0x0) {
                      func_0x0249fb90();
                      goto LAB_033bf344;
                    }
                    plVar14 = *(long **)(lVar32 + 0x30);
                    func_0x054ed0d0(puVar7 + -0x1b0,puVar7 + -0x120,0x50);
                    lVar25 = *plVar11;
                    uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
                    if (uVar31 != 0) {
                      piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == lVar24) {
                          plVar12 = (long *)(lVar25 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                          goto LAB_033be96c;
                        }
                        uVar31 = uVar31 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar31 != 0);
                    }
                    plVar12 = (long *)func_0x024d927c(plVar11,lVar24,1);
LAB_033be96c:
                    pcVar34 = (code *)*plVar12;
                    func_0x054ed0d0(puVar7 + -0xb0,puVar7 + -0x1b0,0x50);
                    plVar19 = (long *)plVar12[1];
                    plVar30 = (long *)(puVar7 + -0xb0);
                    (*pcVar34)(plVar11,plVar14);
                  }
                  plVar20 = *(long **)(puVar7 + -200);
                  plVar18 = (long *)(ulong)((int)plVar18 - 1);
                  plVar10 = plVar14;
                  if (plVar20 == (long *)0x0) goto LAB_033be9a0;
                } while( true );
              }
              plVar18 = (long *)(*(ulong *)(puVar7 + -0x1c8) & 0xffffffff);
LAB_033be9a0:
              func_0x0249fb90();
              auVar41._8_8_ = plVar16;
              auVar41._0_8_ = plVar30;
              plVar20 = plVar18;
            }
          }
          goto LAB_033bf344;
        }
        plVar30 = (long *)0xb;
        plVar38 = (long *)**(undefined8 **)(puVar7 + -0x148);
        if (plVar38 != (long *)0x0) {
          lVar32 = *plVar38;
          uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar31 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059df598) {
                puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033beb3c;
              }
              uVar31 = uVar31 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
          }
          plVar11 = (long *)0x0;
          puVar22 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033beb3c:
          (*(code *)*puVar22)(plVar38,puVar22[1]);
        }
        if (*(long *)(puVar7 + -0x150) != 0) goto LAB_033bf334;
        plVar20 = plVar30;
        plVar10 = plVar18;
      } while ((int)plVar18 < 1);
      if (*(long **)(puVar7 + -0x1d8) == (long *)0x0) goto LAB_033bf33c;
      lVar32 = **(long **)(puVar7 + -0x1d8);
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      pcVar34 = (code *)&DAT_059cbac8;
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059ca768) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bebc8;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c();
LAB_033bebc8:
      plVar38 = (long *)(*(code *)*puVar22)(*(undefined8 *)(puVar7 + -0x1d8),puVar22[1]);
      *(long **)(puVar7 + -0x128) = plVar38;
      *(undefined8 *)(puVar7 + -0x150) = 0;
      *(undefined1 **)(puVar7 + -0x148) = puVar7 + -0x128;
joined_r0x033bebe4:
      plVar30 = plVar18;
      plVar20 = plVar30;
      if (plVar38 == (long *)0x0) {
        func_0x0249fb90();
        auVar41._8_8_ = plVar16;
        auVar41._0_8_ = plVar11;
        goto LAB_033bf344;
      }
      lVar32 = *plVar38;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bec34;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar38);
LAB_033bec34:
      uVar31 = (*(code *)*puVar22)(plVar38,puVar22[1]);
      if ((uVar31 & 1) != 0) {
        plVar18 = *(long **)(puVar7 + -0x128);
        if (plVar18 == (long *)0x0) {
          func_0x0249fb90();
          auVar41._8_8_ = plVar16;
          auVar41._0_8_ = plVar11;
        }
        else {
          lVar32 = *plVar18;
          uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar31 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059cbac8) {
                puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_033bec98;
              }
              uVar31 = uVar31 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059cbac8,0);
LAB_033bec98:
          plVar14 = (long *)(*(code *)*puVar22)(plVar18,puVar22[1]);
          uVar35 = func_0x0249fb80(_DAT_059d4870);
          func_0x028b4b8c(uVar35,*(undefined8 *)(puVar7 + -0x1b8),_DAT_05a69ee8,0);
          uVar35 = func_0x034bc5a4(plVar14,uVar35,0);
          if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
          plVar10 = (long *)puVar22[6];
          if (plVar10 == (long *)0x0) {
            if (*(int *)(_DAT_059efc88 + 0xe4) == 0) {
              func_0x0249fa64();
              puVar22 = *(undefined8 **)(_DAT_059efc88 + 0xb8);
            }
            plVar12 = (long *)*puVar22;
            plVar10 = (long *)func_0x0249fb80(_DAT_059c6b58);
            func_0x02a9aa34(plVar10,plVar12,_DAT_05a69ea8,0);
            puVar22 = (undefined8 *)(*(long *)(_DAT_059efc88 + 0xb8) + 0x30);
            *puVar22 = plVar10;
            func_0x0249f888(puVar22,plVar10);
          }
          plVar19 = _DAT_05a42a10;
          uVar35 = func_0x026e880c(uVar35,plVar10,*(undefined8 *)(puVar7 + -0x1c0));
          plVar11 = _DAT_05a43a78;
          plVar18 = (long *)func_0x026eb75c(uVar35,(ulong)plVar30 & 0xffffffff);
          if (plVar18 == (long *)0x0) {
            func_0x0249fb90();
            auVar41._8_8_ = plVar16;
            auVar41._0_8_ = plVar11;
          }
          else {
            lVar32 = *plVar18;
            uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
            if (uVar31 != 0) {
              piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059ca9d0) {
                  puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_033bee0c;
                }
                uVar31 = uVar31 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
            }
            plVar11 = (long *)0x0;
            puVar22 = (undefined8 *)func_0x024d927c(plVar18);
LAB_033bee0c:
            plVar20 = (long *)(*(code *)*puVar22)(plVar18,puVar22[1]);
            *(long **)(puVar7 + -0x130) = plVar20;
            *(undefined8 *)(puVar7 + -0x160) = 0;
            *(undefined1 **)(puVar7 + -0x158) = puVar7 + -0x130;
            plVar18 = plVar30;
            plVar12 = plVar30;
            if (plVar20 != (long *)0x0) {
              do {
                lVar32 = *plVar20;
                uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar31 != 0) {
                  piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                      puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_033bee7c;
                    }
                    uVar31 = uVar31 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar31 != 0);
                }
                plVar11 = (long *)0x0;
                puVar22 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bee7c:
                uVar31 = (*(code *)*puVar22)(plVar20,puVar22[1]);
                if ((uVar31 & 1) == 0) goto LAB_033bf044;
                plVar30 = *(long **)(puVar7 + -0x130);
                plVar20 = plVar18;
                if (plVar30 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar41._8_8_ = plVar16;
                  auVar41._0_8_ = plVar11;
                  goto LAB_033bf344;
                }
                lVar32 = *plVar30;
                uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar31 != 0) {
                  piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059cbd50) {
                      puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_033beee8;
                    }
                    uVar31 = uVar31 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar31 != 0);
                }
                plVar11 = (long *)0x0;
                puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033beee8:
                uVar35 = (*(code *)*puVar22)(plVar30,puVar22[1]);
                if (plVar36 == (long *)0x0) {
                  func_0x0249fb90();
                  auVar41._8_8_ = plVar16;
                  auVar41._0_8_ = plVar11;
                  goto LAB_033bf344;
                }
                lVar32 = *plVar36;
                uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar31 != 0) {
                  piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059df8e8) {
                      puVar22 = (undefined8 *)(lVar32 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                      goto LAB_033bef4c;
                    }
                    uVar31 = uVar31 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar31 != 0);
                }
                puVar22 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059df8e8,5);
LAB_033bef4c:
                uVar17 = (*(code *)*puVar22)(plVar36,puVar22[1]);
                uVar31 = func_0x036ecab8(uVar35,uVar17,0);
                if (((uVar31 & 1) == 0) || (iVar8 = func_0x037286b0(uVar35,0), iVar8 < 2)) {
                  plVar10 = (long *)func_0x0249fb80(_DAT_059d4870);
                  plVar19 = (long *)0x0;
                  uVar17 = _DAT_05a69ee0;
                  func_0x028b4b8c(plVar10,*(undefined8 *)(puVar7 + -0x1b8));
                  if (plVar14 == (long *)0x0) {
                    func_0x0249fb90();
                    auVar41._8_8_ = plVar16;
                    auVar41._0_8_ = uVar17;
                    goto LAB_033bf344;
                  }
                  lVar32 = *plVar14;
                  uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
                  if (uVar31 != 0) {
                    piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
                        puVar22 = (undefined8 *)(lVar32 + (long)(*piVar28 + 0x1d) * 0x10 + 0x138);
                        goto LAB_033bf01c;
                      }
                      uVar31 = uVar31 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar31 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059defe8,0x1d);
LAB_033bf01c:
                  plVar19 = (long *)puVar22[1];
                  plVar11 = plVar10;
                  (*(code *)*puVar22)(plVar14,uVar35);
                }
                else {
                  plVar11 = (long *)0x0;
                  func_0x036f9ba0(uVar35,1);
                }
                plVar20 = *(long **)(puVar7 + -0x130);
                plVar18 = (long *)(ulong)((int)plVar18 - 1);
                if (plVar20 == (long *)0x0) goto LAB_033bf03c;
              } while( true );
            }
            plVar18 = (long *)((ulong)plVar30 & 0xffffffff);
LAB_033bf03c:
            func_0x0249fb90();
            auVar41._8_8_ = plVar16;
            auVar41._0_8_ = plVar11;
            plVar20 = plVar18;
          }
        }
        goto LAB_033bf344;
      }
      plVar10 = (long *)0x2;
      plVar18 = (long *)0x2;
      pcVar34 = (code *)**(undefined8 **)(puVar7 + -0x148);
      if (pcVar34 != (code *)0x0) {
        lVar32 = *(long *)pcVar34;
        uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar31 != 0) {
          piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059df598) {
              puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_033bf1bc;
            }
            uVar31 = uVar31 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar31 != 0);
        }
        plVar11 = (long *)0x0;
        puVar22 = (undefined8 *)func_0x024d927c(pcVar34);
LAB_033bf1bc:
        (*(code *)*puVar22)(pcVar34,puVar22[1]);
      }
    } while (*(long *)(puVar7 + -0x150) == 0);
LAB_033bf338:
    func_0x0249fb88();
LAB_033bf33c:
    func_0x0249fb90();
    plVar10 = plVar18;
  }
  func_0x0249fb90();
  auVar41._8_8_ = plVar16;
  auVar41._0_8_ = plVar11;
  plVar20 = plVar30;
LAB_033bf344:
  auVar42 = func_0x022bd790();
  plVar38 = auVar42._8_8_;
  func_0x022bd79c(puVar7 + -0x150);
  if (auVar42._8_4_ == 1) {
    puVar22 = (undefined8 *)func_0x054ed080(auVar42._0_8_);
    *(undefined8 *)(puVar7 + -0x140) = *puVar22;
    func_0x054ed090();
LAB_033bf3d0:
    uVar35 = auVar41._8_8_;
    plVar21 = (long *)**(undefined8 **)(puVar7 + -0x138);
    if (plVar21 != (long *)0x0) {
      lVar32 = *plVar21;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df598) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bf430;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      uVar17 = 0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar21);
      auVar41._8_8_ = uVar35;
      auVar41._0_8_ = uVar17;
LAB_033bf430:
      (*(code *)*puVar22)(plVar21,puVar22[1]);
    }
    if (*(long *)(puVar7 + -0x140) == 0) {
      return (long *)0x0;
    }
    uVar35 = func_0x0249fb88();
    auVar42._8_8_ = plVar38;
    auVar42._0_8_ = uVar35;
  }
  func_0x022bd79c(puVar7 + -0x140);
  func_0x0258f7ac(auVar42._0_8_);
  auVar39 = func_0x022bd790();
  plVar30 = auVar41._8_8_;
  plVar11 = auVar41._0_8_;
  lVar32 = auVar39._8_8_;
  plVar38 = auVar39._0_8_;
  *(long **)(puVar7 + -0x250) = plVar12;
  *(undefined8 *)(puVar7 + -0x248) = 0x33bf480;
  *(long **)(puVar7 + -0x240) = plVar10;
  *(undefined1 (*) [16])(puVar7 + -0x238) = auVar42;
  *(long **)(puVar7 + -0x228) = plVar20;
  *(code **)(puVar7 + -0x220) = pcVar34;
  *(long **)(puVar7 + -0x218) = plVar36;
  *(undefined **)(puVar7 + -0x210) = puVar33;
  *(long **)(puVar7 + -0x208) = plVar29;
  *(undefined **)(puVar7 + -0x200) = puVar23;
  *(long **)(puVar7 + -0x1f8) = plVar21;
  lVar24 = 0x5e2c000;
  puVar23 = &DAT_059de230;
  plVar12 = plVar19;
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
  plVar20 = (long *)func_0x0249fb80(_DAT_059de230);
  plVar16 = (long *)0x0;
  func_0x034a1470(plVar20,lVar32);
  if (lVar32 != 0) {
    plVar10 = (long *)&DAT_059e2c00;
    puVar23 = (undefined *)func_0x028a379c(lVar32,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    plVar18 = (long *)func_0x03530158(puVar23,0);
    if (plVar38 != (long *)0x0) {
      plVar13 = (long *)0x1;
      plVar30 = (long *)0x0;
      plVar16 = plVar11;
      func_0x037789bc(plVar38,lVar32);
      plVar12 = plVar18;
      if (plVar19 != (long *)0x0) {
        lVar24 = func_0x036d5f70(plVar19,0);
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          lVar24 = *(long *)(lVar24 + 0x20);
        }
        uVar35 = func_0x03659ee0(lVar32,0);
        plVar16 = (long *)0x0;
        plVar14 = (long *)func_0x036d3908(plVar19,uVar35);
        plVar12 = plVar18;
        if (plVar14 != (long *)0x0) {
          lVar25 = *plVar14;
          uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar31 != 0) {
            piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059dfbc0) {
                puVar22 = (undefined8 *)(lVar25 + (long)(*piVar28 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar31 = uVar31 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
          }
          plVar16 = (long *)0x6;
          puVar22 = (undefined8 *)func_0x024d927c(plVar14);
          plVar12 = plVar18;
LAB_033bf694:
          plVar18 = (long *)(*(code *)*puVar22)(plVar14,puVar22[1]);
          lVar25 = func_0x036d5f70(plVar19,0);
          if (lVar25 == 0) {
            uVar35 = 0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = plVar18;
            auVar42 = auVar4 << 0x40;
          }
          else {
            uVar35 = *(undefined8 *)(lVar25 + 0x28);
            auVar42._8_8_ = plVar18;
            auVar42._0_8_ = uVar35;
          }
          if (plVar18 != (long *)0x0) {
            lVar25 = *plVar18;
            uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar31 != 0) {
              piVar28 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059df030) {
                  puVar22 = (undefined8 *)(lVar25 + (long)(*piVar28 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar31 = uVar31 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
            }
            puVar22 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059df030,10);
LAB_033bf720:
            plVar12 = (long *)(*(code *)*puVar22)(plVar18,lVar32,uVar35,puVar22[1]);
            auVar3._8_8_ = plVar12;
            auVar3._0_8_ = uVar35;
            auVar2._8_8_ = plVar12;
            auVar2._0_8_ = uVar35;
            auVar1._8_8_ = plVar12;
            auVar1._0_8_ = uVar35;
            auVar42._8_8_ = plVar12;
            auVar42._0_8_ = uVar35;
            if (plVar12 != (long *)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              plVar30 = (long *)func_0x03530158(puVar23,0);
              *(undefined8 *)(puVar7 + -0x350) = 0;
              plVar16 = plVar11;
              plVar13 = plVar20;
              lVar25 = func_0x03774f00(plVar38,lVar32);
              if ((lVar25 == 0) || (auVar42 = auVar1, *(long *)(lVar25 + 0x10) == 0))
              goto LAB_033bfa8c;
              plVar16 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              plVar20 = (long *)(ulong)*(uint *)(plVar16[1] + 0xfc);
              uVar17 = func_0x0249f90c(*(long *)(lVar25 + 0x10),*(undefined8 *)(*plVar16 + 0x80));
              plVar16 = plVar20;
              func_0x054ed0d0(puVar7 + -0x2a0,uVar17);
              auVar42 = auVar2;
              if (*(long *)(lVar32 + 0x220) == 0) goto LAB_033bfa8c;
              plVar20 = (long *)(ulong)*(uint *)(puVar7 + -0x2a0);
              plVar16 = (long *)0x0;
              uVar31 = func_0x0387e780(*(long *)(lVar32 + 0x220),plVar20);
              if ((uVar31 & 1) == 0) {
                auVar42 = auVar3;
                if (*(long *)(lVar32 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(lVar32 + 0x220),lVar32,plVar38,plVar20,0);
              }
            }
            plVar18 = *(long **)(lVar32 + 0x1e0);
            lVar25 = plVar38[6];
            auVar42._8_8_ = lVar25;
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            plVar13 = (long *)func_0x03530158(puVar23,0);
            plVar30 = (long *)0x0;
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
            plVar16 = plVar11;
            plVar12 = plVar11;
            func_0x034ba874(puVar7 + -0x2f0,6);
            lVar5 = _DAT_059e0280;
            plVar20 = (long *)0x0;
            if (plVar18 != (long *)0x0) {
              func_0x054ed0d0(puVar7 + -0x340,puVar7 + -0x2f0,0x50);
              lVar26 = *plVar18;
              uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar31 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar5) {
                    puVar22 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar31 = uVar31 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar31 != 0);
              }
              puVar22 = (undefined8 *)func_0x024d927c(plVar18,lVar5,1);
LAB_033bf8d8:
              pcVar34 = (code *)*puVar22;
              func_0x054ed0d0(puVar7 + -0x2a0,puVar7 + -0x340,0x50);
              (*pcVar34)(plVar18,lVar25,puVar7 + -0x2a0,puVar22[1]);
              plVar11 = (long *)func_0x036f10d8(plVar19,lVar32,0);
              lVar25 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar25,_DAT_059feeb8);
              if ((lVar24 == 0) || (*(int *)(lVar24 + 0x18) < 1)) {
LAB_033bf9f8:
                uVar35 = func_0x03659ee0(lVar32,0);
                uVar35 = func_0x036d62d4(plVar19,uVar35,0);
                lVar24 = plVar38[6];
                uVar17 = func_0x0249fb80(_DAT_059d8a28);
                *(undefined8 *)(puVar7 + -0x350) = 0;
                func_0x0385d0a8(uVar17,uVar35,plVar11,lVar24,lVar25,1,0,0);
                plVar10 = (long *)func_0x0366bae8(lVar32,uVar17,0,0);
                return plVar10;
              }
              plVar20 = (long *)0x0;
              auVar42._8_8_ = &DAT_05a17ad0;
              auVar42._0_8_ = &DAT_059d9e60;
              plVar29 = (long *)0xffffffffffffffff;
              do {
                plVar16 = (long *)(puVar7 + -0x2a0);
                plVar12 = _DAT_05a17ad0;
                func_0x0282f3c4(lVar24,plVar20);
                plVar10 = *(long **)(puVar7 + -0x2a0);
                if (plVar10 != (long *)0x0) {
                  if ((*(byte *)(_DAT_059d9e60 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar10 + 200) +
                                (ulong)*(byte *)(_DAT_059d9e60 + 0x130) * 8 + -8) == _DAT_059d9e60))
                  {
                    *(int *)(puVar7 + -0x290) = (int)plVar10[2];
                    *(undefined8 *)(puVar7 + -0x2a0) = _DAT_059dce58;
                    *(undefined8 *)(puVar7 + -0x298) = 0xffffffffffffffff;
                    uVar35 = func_0x045e0acc(puVar7 + -0x2a0,0);
                    puVar23 = (undefined *)0x0;
                    if (lVar25 == 0) break;
                    *(undefined4 *)(puVar7 + -0x2f0) = *(undefined4 *)((long)plVar10 + 0x14);
                    func_0x02a3c128(lVar25,uVar35,puVar7 + -0x2f0,_DAT_059feee0);
                  }
                }
                uVar9 = (int)plVar20 + 1;
                plVar20 = (long *)(ulong)uVar9;
                if (*(int *)(lVar24 + 0x18) <= (int)uVar9) goto LAB_033bf9f8;
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
  *(long **)(puVar7 + -0x388) = plVar20;
  *(undefined **)(puVar7 + -0x380) = puVar23;
  *(long **)(puVar7 + -0x378) = plVar11;
  *(long *)(puVar7 + -0x370) = lVar24;
  *(long **)(puVar7 + -0x368) = plVar29;
  *(long **)(puVar7 + -0x360) = plVar19;
  *(long *)(puVar7 + -0x358) = lVar32;
  plVar19 = plVar14;
  plVar11 = plVar16;
  plVar18 = plVar12;
  plVar20 = plVar13;
  plVar21 = plVar30;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    plVar19 = (long *)func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  *(undefined8 *)(puVar7 + -0x398) = 0;
  if (((ulong)plVar30 & 1) == 0) {
    uVar35 = 0;
    if (plVar14 == (long *)0x0) goto LAB_033bfd48;
    plVar19 = (long *)0x0;
    if (plVar14[0x5d] != 0) {
      plVar20 = (long *)0x0;
      plVar11 = plVar16;
      plVar18 = plVar12;
      plVar19 = (long *)func_0x034ccd58(plVar14[0x5d],plVar14);
    }
  }
  if (plVar13 == (long *)0x0) {
    return plVar19;
  }
  lVar32 = *plVar13;
  uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar31 != 0) {
    piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059ca9b8) {
        puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_033bfb80;
      }
      uVar31 = uVar31 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar31 != 0);
  }
  plVar11 = (long *)0x0;
  puVar22 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bfb80:
  plVar19 = (long *)(*(code *)*puVar22)(plVar13,puVar22[1]);
  *(long **)(puVar7 + -0x398) = plVar19;
  *(undefined8 *)(puVar7 + -0x3a8) = 0;
  *(undefined1 **)(puVar7 + -0x3a0) = puVar7 + -0x398;
  if (plVar19 != (long *)0x0) {
    plVar12 = (long *)&DAT_059df6e0;
    plVar16 = (long *)&DAT_059cbd38;
    plVar13 = plVar19;
    do {
      lVar32 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bfbfc;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bfbfc:
      plVar19 = (long *)(*(code *)*puVar22)(plVar13,puVar22[1]);
      if (((ulong)plVar19 & 1) == 0) goto LAB_033bfcac;
      plVar13 = *(long **)(puVar7 + -0x398);
      if (plVar13 == (long *)0x0) {
        func_0x0249fb90();
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      lVar32 = *plVar13;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059cbd38) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bfc60;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bfc60:
      (*(code *)*puVar22)(puVar7 + -0x3f8,plVar13,puVar22[1]);
      if (*(int *)(puVar7 + -0x3f8) == 3) {
        if (auVar43._8_8_ == 0) goto LAB_033bfd3c;
        plVar11 = (long *)0x0;
        lVar32 = func_0x0376e450(auVar43._8_8_,*(undefined8 *)(puVar7 + -0x3ec));
        if (lVar32 != 0) {
          plVar11 = (long *)0x0;
          func_0x036efea8(lVar32,plVar14);
        }
      }
      plVar13 = *(long **)(puVar7 + -0x398);
    } while (plVar13 != (long *)0x0);
  }
  plVar19 = (long *)func_0x0249fb90();
LAB_033bfcac:
  lVar32 = 0;
  puVar22 = (undefined8 *)(puVar7 + -0x398);
  do {
    plVar29 = (long *)*puVar22;
    auVar43._8_8_ = lVar32;
    auVar43._0_8_ = plVar29;
    if (plVar29 != (long *)0x0) {
      lVar24 = *plVar29;
      uVar31 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df598) {
            puVar22 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar11 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar29);
LAB_033bfd10:
      plVar19 = (long *)(*(code *)*puVar22)(plVar29,puVar22[1]);
    }
    if (lVar32 == 0) {
      return plVar19;
    }
LAB_033bfd40:
    uVar35 = auVar43._0_8_;
    func_0x0249fb88(auVar43._8_8_);
LAB_033bfd48:
    auVar44 = func_0x0249fb90();
    uVar17 = auVar44._0_8_;
    if (auVar44._8_4_ != 1) goto LAB_033bfd90;
    plVar19 = (long *)func_0x054ed080(uVar17);
    lVar32 = *plVar19;
    *(long *)(puVar7 + -0x3a8) = lVar32;
    plVar19 = (long *)func_0x054ed090();
    puVar22 = *(undefined8 **)(puVar7 + -0x3a0);
  } while( true );
LAB_033bcfbc:
  if (plStack_68 != (long *)0x0) {
    lVar32 = *plStack_68;
    uVar27 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df598) {
          puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033bd020;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    plVar10 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(plStack_68);
LAB_033bd020:
    plVar11 = (long *)(*(code *)*puVar22)(unaff_x25,puVar22[1]);
  }
  unaff_x26 = unaff_x26 + 1;
  puVar23 = (undefined *)(ulong)*(uint *)(plStack_80 + 3);
  if ((long)(int)*(uint *)(plStack_80 + 3) <= (long)unaff_x26) {
    return plVar11;
  }
  goto LAB_033bcdf4;
LAB_033bd954:
  plVar13 = *(long **)((long)pplVar6 + -0x68);
  if (plVar13 != (long *)0x0) {
    lVar32 = *plVar13;
    uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar31 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df598) {
          puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033bd9b8;
        }
        uVar31 = uVar31 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar31 != 0);
    }
    plVar29 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(plVar13);
LAB_033bd9b8:
    (*(code *)*puVar22)(plVar13,puVar22[1]);
  }
  plVar30 = *(long **)((long)pplVar6 + -0x90);
  plVar19 = (long *)0x0;
  if (plVar30 == (long *)0x0) goto LAB_033bdce8;
  lVar32 = *plVar30;
  uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar31 != 0) {
    piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059ca768) {
        puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_033bda24;
      }
      uVar31 = uVar31 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar31 != 0);
  }
  plVar29 = (long *)0x0;
  puVar22 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033bda24:
  plVar19 = (long *)(*(code *)*puVar22)(plVar30,puVar22[1]);
  *(long **)((long)pplVar6 + -0x70) = plVar19;
  *(undefined8 *)((long)pplVar6 + -0x80) = 0;
  *(undefined1 **)((long)pplVar6 + -0x78) = (undefined1 *)((long)pplVar6 + -0x70);
  if (plVar19 != (long *)0x0) {
    do {
      lVar32 = *plVar19;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bda90;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar29 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bda90:
      plVar15 = (long *)(*(code *)*puVar22)(plVar19,puVar22[1]);
      if (((ulong)plVar15 & 1) == 0) goto LAB_033bdb9c;
      plVar19 = *(long **)((long)pplVar6 + -0x70);
      if (plVar19 == (long *)0x0) {
        uVar35 = func_0x0249fb90();
        plVar19 = (long *)0x0;
        goto LAB_033bdd00;
      }
      lVar32 = *plVar19;
      uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar31 != 0) {
        piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059cbac8) {
            puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_033bdaf4;
          }
          uVar31 = uVar31 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar31 != 0);
      }
      plVar29 = (long *)0x0;
      puVar22 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bdaf4:
      plVar19 = (long *)(*(code *)*puVar22)(plVar19,puVar22[1]);
      if (0 < (int)plVar11) {
        if (plVar19 == (long *)0x0) {
          uVar35 = func_0x0249fb90();
          plVar19 = (long *)0x0;
          goto LAB_033bdd00;
        }
        do {
          lVar32 = *plVar19;
          uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar31 != 0) {
            piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059defe8) {
                puVar22 = (undefined8 *)(lVar32 + (long)(*piVar28 + 0x1f) * 0x10 + 0x138);
                goto LAB_033bdb60;
              }
              uVar31 = uVar31 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
          }
          puVar22 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059defe8,0x1f);
LAB_033bdb60:
          plVar16 = (long *)puVar22[1];
          plVar38 = (long *)0x0;
          plVar29 = plVar18;
          uVar31 = (*(code *)*puVar22)(plVar19,plVar36);
          if ((uVar31 & 1) == 0) goto LAB_033bdb8c;
          iVar8 = (int)plVar11;
          plVar11 = (long *)(ulong)(iVar8 - 1);
        } while (1 < iVar8);
        plVar11 = (long *)0x0;
      }
LAB_033bdb8c:
      plVar19 = *(long **)((long)pplVar6 + -0x70);
      if (plVar19 == (long *)0x0) break;
    } while( true );
  }
  plVar19 = (long *)0x0;
  uVar35 = func_0x0249fb90();
  goto LAB_033bdd00;
LAB_033bdb9c:
  plVar11 = (long *)0xd;
  plVar19 = *(long **)((long)pplVar6 + -0x70);
  if (plVar19 != (long *)0x0) {
    lVar32 = *plVar19;
    uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar31 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df598) {
          puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033bdc04;
        }
        uVar31 = uVar31 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar31 != 0);
    }
    plVar29 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(plVar19);
LAB_033bdc04:
    plVar15 = (long *)(*(code *)*puVar22)(plVar19,puVar22[1]);
  }
  plVar19 = *(long **)((long)pplVar6 + -0xa0);
  plVar30 = *(long **)((long)pplVar6 + -0x98);
  plVar14 = (long *)(ulong)*(uint *)(plVar19 + 3);
  plVar10 = (long *)((long)plVar10 + 1);
  if ((long)(int)*(uint *)(plVar19 + 3) <= (long)plVar10) {
    return plVar15;
  }
  goto LAB_033bd790;
LAB_033be9a8:
  plVar20 = *(long **)(puVar7 + -200);
  if (plVar20 != (long *)0x0) {
    lVar32 = *plVar20;
    uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar31 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df598) {
          puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033bea0c;
        }
        uVar31 = uVar31 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar31 != 0);
    }
    plVar11 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bea0c:
    (*(code *)*puVar22)(plVar20,puVar22[1]);
  }
  plVar14 = *(long **)(puVar7 + -0xc0);
  goto joined_r0x033be48c;
LAB_033bf044:
  plVar10 = (long *)0xc;
  plVar20 = *(long **)(puVar7 + -0x130);
  if (plVar20 != (long *)0x0) {
    lVar32 = *plVar20;
    uVar31 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar31 != 0) {
      piVar28 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df598) {
          puVar22 = (undefined8 *)(lVar32 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_033bf0ac;
        }
        uVar31 = uVar31 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar31 != 0);
    }
    plVar11 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x024d927c(plVar20);
LAB_033bf0ac:
    (*(code *)*puVar22)(plVar20,puVar22[1]);
  }
  plVar38 = *(long **)(puVar7 + -0x128);
  goto joined_r0x033bebe4;
LAB_033bfd90:
  func_0x022bd79c(puVar7 + -0x3a8);
  func_0x0258f7ac(uVar17);
  auVar40 = func_0x022bd790();
  auVar39._8_8_ = plVar11;
  auVar39._0_8_ = auVar40._8_8_;
  puVar23 = auVar40._0_8_;
  *(undefined8 *)(puVar7 + -0x440) = 0x33bfda4;
  *(undefined8 *)(puVar7 + -0x438) = 0x5e2c000;
  *(ulong *)(puVar7 + -0x430) = (ulong)plVar30 & 0xffffffff;
  *(long **)(puVar7 + -0x428) = plVar16;
  *(long **)(puVar7 + -0x420) = plVar12;
  *(long **)(puVar7 + -0x418) = plVar13;
  *(undefined8 *)(puVar7 + -0x410) = uVar35;
  *(undefined8 *)(puVar7 + -0x408) = uVar17;
  puVar7[-0x444] = 0;
  uVar9 = func_0x033bb508();
  plVar30 = (long *)(ulong)uVar9;
  if ((uVar9 & 1) == 0) {
    return (long *)(ulong)(uVar9 & 1);
  }
  uVar35 = 0x33bfe00;
  puVar7 = puVar7 + -0x450;
  plVar16 = plVar21;
  plVar14 = plVar20;
  plVar29 = plVar18;
  plVar12 = plVar38;
  goto SUB_033be0c4;
}


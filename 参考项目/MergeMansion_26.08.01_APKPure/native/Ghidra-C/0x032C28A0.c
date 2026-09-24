/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Boolean TryToMoveStackItemFromBoardToInventory(GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard mergeBoard, GameLogic.Player.Board.Coordinate coordinate, GameLogic.Player.IBoardInventory[] boardInventories, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 033c28a0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033c2a3c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x033c2a40) */
/* WARNING: Removing unreachable block (ram,0x033c52cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033c28a0(undefined8 param_1,long param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6,ulong param_7)

{
  bool bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  int iVar8;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long **pplVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  int *piVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  long *unaff_x25;
  long *plVar36;
  undefined *puVar37;
  ulong uVar38;
  undefined *unaff_x26;
  uint uVar39;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined8 uVar40;
  undefined *puVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [12];
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [16];
  undefined8 uStack_360;
  undefined *puStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long *plStack_2d8;
  ulong uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [80];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined1 auStack_154 [4];
  undefined *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long **pplStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [16];
  long *plStack_d0;
  long *plStack_c8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 auStack_70 [16];
  
  auVar43._8_8_ = param_2;
  auVar43._0_8_ = param_1;
  plVar20 = param_3;
  plVar15 = param_4;
  plVar30 = param_5;
  if ((bRam0000000005e2c3ce & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_05a29a88);
    func_0x0249f8e4(&DAT_059d4060);
    bRam0000000005e2c3ce = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  plVar32 = (long *)0x5e2c000;
  auVar42 = ZEXT816(0);
  if (param_2 == 0) {
LAB_033c2a80:
    plVar11 = plVar32;
    plVar36 = plVar15;
    auStack_70 = auVar42;
    func_0x0249fb90();
  }
  else {
    plVar20 = (long *)0x0;
    plVar11 = (long *)func_0x0376e450(param_2,param_3);
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    auVar42 = auStack_70;
    if (param_4 == (long *)0x0) goto LAB_033c2a80;
    uVar7 = *(uint *)(param_4 + 3);
    bVar1 = 0 < (int)uVar7;
    if ((int)uVar7 < 1) {
      return 0;
    }
    unaff_x28 = &DAT_059d4060;
    unaff_x29 = &DAT_05a29a88;
    unaff_x27 = (undefined *)0x0;
    while( true ) {
      unaff_x26 = (undefined *)(ulong)bVar1;
      uVar39 = (uint)unaff_x27;
      plVar36 = plVar15;
      if (uVar7 <= uVar39) break;
      plVar36 = (long *)param_4[(long)(int)uVar39 + 4];
      plVar32 = plVar11;
      unaff_x25 = plVar36;
      auVar42 = auStack_70;
      if (plVar36 == (long *)0x0) goto LAB_033c2a80;
      lVar23 = *plVar36;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x28) * 0x10 + 0x138);
            goto LAB_033c29c0;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059defe8,0x28);
LAB_033c29c0:
      plVar30 = (long *)puVar12[1];
      plVar20 = plVar11;
      plVar15 = param_5;
      auVar42 = (*(code *)*puVar12)(plVar36,param_1);
      auStack_70 = auVar42;
      if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar23 = *(long *)(_DAT_05a29a88 + 0x20);
      if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x024d8f40();
      }
      pcVar13 = (char *)func_0x0249f90c(auStack_70,
                                        *(long *)(**(long **)(lVar23 + 0xc0) + 0x80) + 0x20);
      if (*pcVar13 != '\0') {
        uVar40 = 0x33c2a40;
        plVar20 = param_3;
        plVar30 = param_5;
        goto SUB_033c2a88;
      }
      uVar7 = *(uint *)(param_4 + 3);
      uVar39 = uVar39 + 1;
      unaff_x27 = (undefined *)(ulong)uVar39;
      bVar1 = (int)uVar39 < (int)uVar7;
      if ((int)uVar7 <= (int)uVar39) {
        return 0;
      }
    }
  }
  uVar40 = 0x33c2a88;
  auVar43 = func_0x0249fb98();
SUB_033c2a88:
  plVar15 = auVar43._8_8_;
  plVar32 = auVar43._0_8_;
  puVar37 = (undefined *)0x5e2c000;
  uStack_b0 = uVar40;
  plStack_a8 = unaff_x25;
  plStack_a0 = plVar11;
  uStack_98 = param_1;
  lStack_90 = param_2;
  plStack_88 = param_3;
  plStack_80 = param_4;
  plStack_78 = param_5;
  if ((bRam0000000005e2c3d0 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c7c0);
    func_0x0249f8e4(&DAT_059defe8);
    bRam0000000005e2c3d0 = 1;
  }
  uStack_b4 = 0;
  plVar14 = (long *)func_0x026bf824(plVar36,_DAT_05a3c7c0);
  uStack_110 = 0x33c2b0c;
  uStack_f8 = 0x5e2c000;
  puStack_f0 = &DAT_05a3c7c0;
  puVar35 = (undefined *)0x5e2c000;
  plVar21 = plVar20;
  plVar11 = plVar14;
  plVar17 = plVar30;
  puStack_100 = unaff_x26;
  plStack_e8 = plVar36;
  plStack_d0 = plVar20;
  plStack_c8 = plVar30;
  auStack_e0 = auVar43;
  if ((bRam0000000005e2c3cf & 1) == 0) {
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3cf = 1;
  }
  plStack_108 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar21 = (long *)0x0;
    plVar36 = (long *)func_0x0376e450(plVar15,plVar20);
    if (plVar36 == (long *)0x0) {
      plVar14 = (long *)0x0;
      goto LAB_033c2f48;
    }
    if (plVar14 != (long *)0x0) {
      lVar23 = *plVar14;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059ca768) {
            puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033c2ce4;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar21 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x024d927c(plVar14);
LAB_033c2ce4:
      plStack_108 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
      pplStack_118 = &plStack_108;
      plStack_120 = (long *)0x0;
      if (plStack_108 != (long *)0x0) {
        puVar35 = &DAT_059df6e0;
        puVar37 = &DAT_059cbac8;
        unaff_x26 = &DAT_059defe8;
        do {
          plVar20 = plStack_108;
          lVar23 = *plStack_108;
          uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
                puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c2d68;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          plVar21 = (long *)0x0;
          puVar12 = (undefined8 *)func_0x024d927c(plStack_108);
LAB_033c2d68:
          uVar27 = (*(code *)*puVar12)(plVar20,puVar12[1]);
          plVar20 = plStack_108;
          plVar14 = (long *)(uVar27 & 0xffffffff);
          if ((uVar27 & 1) == 0) goto LAB_033c2ed0;
          if (plStack_108 == (long *)0x0) {
            func_0x0249fb90();
            plVar15 = (long *)0x0;
LAB_033c2f74:
            func_0x0249fb90();
            plVar20 = plVar36;
            goto LAB_033c2f78;
          }
          lVar23 = *plStack_108;
          uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cbac8) {
                puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c2dd0;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plStack_108,_DAT_059cbac8,0);
LAB_033c2dd0:
          plVar15 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
          plVar11 = (long *)0x0;
          plVar21 = plVar30;
          uVar27 = func_0x036d05a4(plVar36,plVar32);
          if ((uVar27 & 1) != 0) {
            if (plVar15 == (long *)0x0) goto LAB_033c2f74;
            lVar23 = *plVar15;
            uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar27 != 0) {
              piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                  puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x27) * 0x10 + 0x138);
                  goto LAB_033c2e4c;
                }
                uVar27 = uVar27 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar27 != 0);
            }
            puVar12 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059defe8,0x27);
LAB_033c2e4c:
            plVar11 = (long *)puVar12[1];
            plVar21 = plVar32;
            uVar27 = (*(code *)*puVar12)(plVar15,plVar36);
            if ((uVar27 & 1) != 0) {
              lVar23 = *plVar15;
              uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar27 != 0) {
                piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
                    puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 3) * 0x10 + 0x138);
                    goto LAB_033c2eb4;
                  }
                  uVar27 = uVar27 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar27 != 0);
              }
              plVar21 = (long *)0x3;
              puVar12 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c2eb4:
              uVar27 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              if ((uVar27 & 1) == 0) goto LAB_033c2ed8;
            }
          }
        } while (plStack_108 != (long *)0x0);
      }
      func_0x0249fb90();
LAB_033c2ed0:
      plVar14 = (long *)0x0;
LAB_033c2ed8:
      plVar30 = (long *)0x0;
      pplVar24 = &plStack_108;
      goto LAB_033c2edc;
    }
  }
LAB_033c2f78:
  func_0x0249fb90();
  plVar36 = plVar20;
  do {
    auVar42._8_8_ = plVar14;
    auVar42._0_8_ = plVar36;
    auVar49 = func_0x0249fb88(plVar30);
    plStack_128 = auVar49._0_8_;
    if (auVar49._8_4_ != 1) {
      func_0x022bd79c(&plStack_120);
      func_0x0258f7ac(plStack_128);
      auVar43 = func_0x022bd790();
      lVar23 = auVar43._8_8_;
      uVar40 = auVar43._0_8_;
      uStack_160 = 0x33c2fe4;
      auStack_154[0] = 0;
      plVar20 = plVar21;
      plVar22 = plVar11;
      plVar30 = plVar17;
      plVar31 = plStack_128;
      puStack_150 = puVar35;
      plStack_148 = plVar15;
      plStack_140 = plVar14;
      plStack_138 = plVar36;
      plStack_130 = plVar32;
      if (lVar23 != 0) {
        puVar35 = (undefined *)func_0x0376e450(lVar23,plVar21,0);
        if (puVar35 == (undefined *)0x0) {
          return 0;
        }
        plVar22 = (long *)0x0;
        plVar20 = plVar17;
        uVar27 = func_0x036d05a4(puVar35,uVar40);
        if ((uVar27 & 1) == 0) {
          return 0;
        }
        plVar15 = (long *)0x0;
        plVar31 = plVar17;
        plVar32 = plVar21;
        auVar42 = auVar43;
        if (plVar11 != (long *)0x0) {
          uVar27 = func_0x0362cd70(plVar11,0);
          if ((uVar27 & 1) != 0) {
            return 0;
          }
          func_0x0362d1c8(plVar11,uVar40,puVar35,plVar17,auStack_154,0);
          func_0x037789bc(lVar23,uVar40,plVar21,plVar17,0,0);
          return 1;
        }
      }
      auVar43 = func_0x0249fb90();
      plVar36 = auVar43._0_8_;
      uStack_190 = 0x33c30ac;
      uVar27 = auVar43._8_8_ & 0xffffffff;
      plVar11 = plVar20;
      plStack_170 = plVar32;
      plStack_168 = plVar31;
      if ((bRam0000000005e2c3d1 & 1) == 0) {
        uStack_180 = auVar42._8_8_;
        uStack_178 = auVar42._0_8_;
        func_0x0249f8e4(&DAT_059db250);
        func_0x0249f8e4(&DAT_059defe8);
        auVar42._8_8_ = uStack_180;
        auVar42._0_8_ = uStack_178;
        bRam0000000005e2c3d1 = 1;
      }
      uStack_180 = auVar42._8_8_;
      uStack_178 = auVar42._0_8_;
      uStack_188 = 0;
      if (plVar36 != (long *)0x0) {
        lVar23 = *plVar36;
        uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar28 == 0) goto LAB_033c3130;
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        goto LAB_033c3118;
      }
      auVar44 = func_0x0249fb90();
      plVar14 = auVar44._8_8_;
      lVar23 = auVar44._0_8_;
      uStack_1e8 = 0x33c31c0;
      uStack_1b0 = 0x5e2c000;
      uVar28 = param_7 & 0xffffffff;
      uVar38 = (ulong)plVar11 & 0xffffffff;
      auVar45._8_8_ = 0x5e2c000;
      auVar45._0_8_ = uVar38;
      plVar32 = plVar22;
      plVar21 = plVar30;
      plVar17 = param_6;
      puStack_1f0 = unaff_x29;
      puStack_1e0 = unaff_x28;
      puStack_1d8 = unaff_x27;
      puStack_1d0 = unaff_x26;
      puStack_1c8 = puVar37;
      puStack_1c0 = puVar35;
      plStack_1b8 = plVar15;
      plStack_1a8 = plVar36;
      uStack_1a0 = uVar27;
      plStack_198 = plVar20;
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
      plStack_1f8 = (long *)0x0;
      if (plVar14 == (long *)0x0) goto LAB_033c36d4;
      lVar25 = *plVar14;
      unaff_x27 = &DAT_059defe8;
      uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar27 == 0) goto LAB_033c32b8;
      piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      goto LAB_033c32a0;
    }
    puVar12 = (undefined8 *)func_0x054ed080(plStack_128);
    plVar30 = (long *)*puVar12;
    plStack_120 = plVar30;
    func_0x054ed090();
    plVar14 = (long *)0x0;
    pplVar24 = pplStack_118;
LAB_033c2edc:
    plVar32 = *pplVar24;
    if (plVar32 != (long *)0x0) {
      lVar23 = *plVar32;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_033c2f38;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar21 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033c2f38:
      (*(code *)*puVar12)(plVar32,puVar12[1]);
    }
  } while (plVar30 != (long *)0x0);
LAB_033c2f48:
  return (ulong)((uint)plVar14 & 1);
code_r0x033c4070:
  uVar27 = (**(code **)(*plVar15 + 0x1b8))(plVar15,auVar43._8_8_,*(undefined8 *)(*plVar15 + 0x1c0));
  if ((uVar27 & 1) == 0) {
LAB_033c4084:
    uVar7 = uVar7 ^ 1;
    func_0x02a5d2cc((undefined1 *)((long)ppuVar6 + -0x50),_DAT_05a047e8);
    goto LAB_033c40f0;
  }
  goto LAB_033c3fe8;
LAB_033c45b0:
  func_0x022bd79c((undefined1 *)((long)ppuVar6 + -0xb0));
  func_0x0258f7ac(uVar16);
  auVar43 = func_0x022bd790();
  plVar11 = auVar43._8_8_;
  plVar32 = auVar43._0_8_;
  *(undefined8 *)((long)ppuVar6 + -0xe0) = 0x33c45c4;
  *(undefined **)((long)ppuVar6 + -0xd0) = puVar33;
  *(long **)((long)ppuVar6 + -200) = plVar15;
  *(long **)((long)ppuVar6 + -0xc0) = plVar30;
  *(undefined8 *)((long)ppuVar6 + -0xb8) = uVar16;
  uVar16 = 0x5e2c000;
  if ((bRam0000000005e2c3d6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d6 = 1;
  }
  if (plVar11 != (long *)0x0) {
    lVar23 = *plVar11;
    uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 6) * 0x10 + 0x138);
          goto LAB_033c466c;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    uVar40 = 6;
    puVar12 = (undefined8 *)func_0x024d927c(plVar11);
LAB_033c466c:
    lVar23 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar32 != (long *)0x0) {
      lVar26 = *plVar32;
      puVar33 = &DAT_059dfa78;
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
      uVar40 = 1;
      puVar12 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033c46d8:
      uVar9 = (*(code *)*puVar12)(plVar32,puVar12[1]);
      uVar16 = 0;
      if (lVar23 != 0) {
        uVar27 = func_0x0387c57c(lVar23,uVar9,0);
        if ((uVar27 & 1) != 0) {
          return 3;
        }
        lVar26 = *plVar32;
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
        puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x25);
LAB_033c4754:
        uVar27 = (*(code *)*puVar12)(plVar32,puVar12[1]);
        if ((uVar27 & 1) == 0) {
          lVar26 = *plVar32;
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
          puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x2b);
LAB_033c47b4:
          uVar27 = (*(code *)*puVar12)(plVar32,puVar12[1]);
          if ((uVar27 & 1) == 0) {
            lVar26 = *plVar32;
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
            puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,1);
LAB_033c4814:
            uVar9 = (*(code *)*puVar12)(plVar32,puVar12[1]);
            uVar27 = func_0x0387cc50(lVar23,uVar9,0);
            if ((uVar27 & 1) != 0) {
              return 2;
            }
          }
        }
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar20 = (long *)0x0;
        uVar27 = func_0x03603060(plVar32,plVar11,1);
        if ((uVar27 & 1) == 0) {
          return 5;
        }
        lVar26 = *plVar32;
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
        puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x23);
LAB_033c48c4:
        uVar27 = (*(code *)*puVar12)(plVar32,puVar12[1]);
        if ((uVar27 & 1) == 0) {
          uVar7 = func_0x033c4128(plVar32,plVar11);
          return (ulong)((uVar7 ^ 0xffffffff) & 1);
        }
        uVar40 = 0x33c48e0;
        ppuVar6 = (undefined **)((long)ppuVar6 + -0xe0);
        auVar42 = auVar43;
        goto SUB_033c3e04;
      }
    }
  }
  auVar42 = func_0x0249fb90();
  plVar30 = auVar42._8_8_;
  lVar23 = auVar42._0_8_;
  *(undefined8 *)((long)ppuVar6 + -0x100) = 0x33c490c;
  *(undefined8 *)((long)ppuVar6 + -0xf8) = uVar16;
  *(undefined1 (*) [16])((long)ppuVar6 + -0xf0) = auVar43;
  if ((bRam0000000005e2c3d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d9 = 1;
  }
  if (plVar30 == (long *)0x0) goto LAB_033c4a08;
  lVar26 = *plVar30;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 == 0) goto LAB_033c4978;
  piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
  goto LAB_033c4960;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar29 = piVar29 + 4;
    if (uVar28 == 0) break;
LAB_033c3118:
    if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
      puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0xd) * 0x10 + 0x138);
      goto LAB_033c3150;
    }
  }
LAB_033c3130:
  puVar12 = (undefined8 *)func_0x024d927c(plVar36,_DAT_059defe8,0xd);
  auVar42._8_8_ = uStack_180;
  auVar42._0_8_ = uStack_178;
LAB_033c3150:
  uStack_180 = auVar42._8_8_;
  uStack_178 = auVar42._0_8_;
  lVar23 = (*(code *)*puVar12)(plVar36,uVar27,puVar12[1]);
  if (lVar23 == 0) {
    uVar7 = 0;
  }
  else {
    uStack_188 = func_0x0376eb00(plVar20,0);
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059db250);
    }
    uVar7 = func_0x0376edd4(&uStack_188,0);
    uVar7 = uVar7 ^ 1;
  }
  return (ulong)(uVar7 & 1);
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_033ca008:
    if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
      puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_033ca03c;
    }
  }
LAB_033ca020:
  puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0);
LAB_033ca03c:
  iVar10 = (*(code *)*puVar12)(plVar30,puVar12[1]);
  return (ulong)(iVar8 == iVar10);
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_033c32a0:
    if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
      puVar12 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0x16) * 0x10 + 0x138);
      goto LAB_033c32d8;
    }
  }
LAB_033c32b8:
  puVar12 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059defe8,0x16);
LAB_033c32d8:
  plVar11 = (long *)puVar12[1];
  auVar45 = (*(code *)*puVar12)(plVar14,uVar38);
  uVar40 = auVar45._8_8_;
  lVar25 = auVar45._0_8_;
  if (lVar25 == 0) {
    return 0;
  }
  unaff_x28 = &DAT_059db250;
  plStack_1f8 = (long *)func_0x0376eb00(lVar23,0);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059db250);
  }
  uVar27 = func_0x0376edd4(&plStack_1f8,0);
  if ((uVar27 & 1) != 0) {
    return 0;
  }
  if (param_6 != (long *)0x0) {
    lVar26 = *param_6;
    unaff_x28 = &DAT_059df8e8;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c3394;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c3394:
    uVar16 = (*(code *)*puVar12)(param_6,puVar12[1]);
    plVar11 = (long *)0x0;
    uVar27 = func_0x036ec4b4(lVar25,uVar16);
    if ((uVar27 & 1) == 0) {
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar40 = func_0x03530158(uVar40,0);
      uVar40 = func_0x03530310(plVar22,uVar40,0);
      lVar26 = *param_6;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c343c;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c343c:
      plVar11 = (long *)(*(code *)*puVar12)(param_6,puVar12[1]);
      plVar32 = (long *)0x0;
      func_0x036e24f4(lVar25,uVar40);
    }
    auVar4._8_8_ = uVar40;
    auVar4._0_8_ = lVar25;
    auVar3._8_8_ = uVar40;
    auVar3._0_8_ = lVar25;
    auVar45._8_8_ = uVar40;
    auVar45._0_8_ = lVar25;
    if (lVar23 != 0) {
      func_0x03785f38(lVar23,plStack_1f8,lVar25,plVar22,plVar30,param_6,0);
      if ((param_7 & 1) == 0) {
        return 1;
      }
      uVar28 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(uVar28,_DAT_05a192a0);
      plVar30 = plStack_1f8;
      lVar26 = *param_6;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar12 = (undefined8 *)(lVar26 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c34fc;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(param_6,_DAT_059df8e8,5);
LAB_033c34fc:
      uVar40 = (*(code *)*puVar12)(param_6,puVar12[1]);
      plVar17 = (long *)func_0x036d3908(lVar25,uVar40,0);
      uStack_2b0 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      plVar11 = plVar30;
      plVar32 = plVar30;
      plVar21 = plVar22;
      func_0x034ba874(&uStack_250,9);
      auVar45 = auVar3;
      if (uVar28 != 0) {
        func_0x054ed0d0(auStack_2a0,&uStack_250,0x50);
        plVar11 = _DAT_05a192a8;
        func_0x025a1da8(uVar28,auStack_2a0);
        lVar25 = *param_6;
        uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
              puVar12 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0x17) * 0x10 + 0x138);
              goto LAB_033c35d4;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        plVar11 = (long *)0x17;
        puVar12 = (undefined8 *)func_0x024d927c(param_6);
LAB_033c35d4:
        plVar20 = (long *)(*(code *)*puVar12)(param_6,puVar12[1]);
        lVar25 = *plVar14;
        uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059defe8) {
              puVar12 = (undefined8 *)(lVar25 + (long)(*piVar29 + 2) * 0x10 + 0x138);
              goto LAB_033c3634;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        plVar11 = (long *)0x2;
        puVar12 = (undefined8 *)func_0x024d927c(plVar14);
LAB_033c3634:
        uVar40 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        param_6 = (long *)0x0;
        auVar45 = auVar4;
        if (plVar20 != (long *)0x0) {
          lVar23 = *plVar20;
          uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059e0280) {
                puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_033c369c;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0280,0);
LAB_033c369c:
          (*(code *)*puVar12)(plVar20,uVar40,uVar28,puVar12[1]);
          return 1;
        }
      }
    }
  }
LAB_033c36d4:
  lVar25 = auVar45._8_8_;
  auVar43 = func_0x0249fb90();
  puVar33 = auVar43._8_8_;
  puVar34 = auVar43._0_8_;
  uStack_300 = 0x33c36d8;
  puVar37 = (undefined *)0x5e2c000;
  puVar35 = (undefined *)((ulong)plVar32 & 0xffffffff);
  plVar20 = plVar32;
  plStack_2d8 = plVar30;
  uStack_2d0 = uVar28;
  plStack_2c8 = plVar22;
  plStack_2c0 = param_6;
  if ((bRam0000000005e2c3d3 & 1) == 0) {
    lStack_2f0 = lVar25;
    uStack_2e8 = auVar45._0_8_;
    lStack_2e0 = lVar23;
    plStack_2b8 = plVar14;
    func_0x0249f8e4(&DAT_059df8e8);
    auVar45._8_8_ = lStack_2f0;
    auVar45._0_8_ = uStack_2e8;
    auVar44._8_8_ = plStack_2b8;
    auVar44._0_8_ = lStack_2e0;
    bRam0000000005e2c3d3 = 1;
  }
  lStack_2f0 = auVar45._8_8_;
  uStack_2e8 = auVar45._0_8_;
  plStack_2b8 = auVar44._8_8_;
  lStack_2e0 = auVar44._0_8_;
  if (puVar34 != (undefined *)0x0) {
    uVar40 = func_0x0376e450(puVar34,puVar33,0);
    auVar44._8_8_ = plStack_2b8;
    auVar44._0_8_ = lStack_2e0;
    auVar45._8_8_ = lStack_2f0;
    auVar45._0_8_ = uStack_2e8;
    if (plVar17 != (long *)0x0) {
      lVar23 = *plVar17;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_033c3798;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059df8e8,5);
LAB_033c3798:
      uVar16 = (*(code *)*puVar12)(plVar17,puVar12[1]);
      uVar7 = func_0x036edd98(uVar40,uVar16,0);
      if ((uVar7 & 1) != 0) {
        if (((ulong)plVar32 & 1) == 0) {
          func_0x03780be8(puVar34,puVar33,plVar11,plVar21,0,plVar17,0);
        }
        else {
          func_0x036eaf0c(uVar40,0);
          func_0x03780be8(puVar34,puVar33,plVar11,plVar21,0,plVar17,0);
          func_0x036eadfc(uVar40,0);
        }
      }
      return (ulong)(uVar7 & 1);
    }
  }
  plStack_2b8 = auVar44._8_8_;
  lStack_2e0 = auVar44._0_8_;
  lStack_2f0 = auVar45._8_8_;
  uStack_2e8 = auVar45._0_8_;
  lVar23 = func_0x0249fb90();
  puVar12 = &uStack_320;
  uStack_320 = 0x33c383c;
  uVar40 = 0x5e2c000;
  plStack_318 = plVar11;
  plStack_310 = plVar21;
  plStack_308 = plVar17;
  if ((bRam0000000005e2c3d4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2c3d4 = 1;
  }
  if (lVar23 != 0) {
    plVar11 = (long *)func_0x0367613c(lVar23,0);
    iVar8 = func_0x03676288(lVar23,0);
    if ((plVar11 != (long *)0x0) && (*(long *)(lVar23 + 0x338) != 0)) {
      *(int *)(*(long *)(lVar23 + 0x338) + 0x10) = *(int *)((long)plVar11 + 0x24) * iVar8;
      func_0x03675f48(lVar23,iVar8,0);
      if ((iVar8 != 0) || (*(int *)(lVar23 + 0x358) != 2)) {
        if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar27 = func_0x03633f50(lVar23,0);
        if ((uVar27 & 1) != 0) {
          return uVar27;
        }
      }
      *(undefined4 *)(lVar23 + 0x358) = 0;
      if ((bRam0000000005e2d6bf & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2aaf0,0);
        bRam0000000005e2d6bf = 1;
      }
      uVar27 = func_0x028a379c(lVar23,_DAT_05a2aaf0);
      *(ulong *)(lVar23 + 0x340) = uVar27;
      return uVar27;
    }
  }
  uVar16 = 0x33c3914;
  auVar46 = func_0x0249fb90();
  if (auVar46._8_8_ != 0) {
    do {
      *(undefined8 *)((long)puVar12 + -0x20) = uVar16;
      *(long **)((long)puVar12 + -0x18) = plVar11;
      *(undefined8 *)((long)puVar12 + -0x10) = uVar40;
      *(long *)((long)puVar12 + -8) = lVar23;
      if ((bRam0000000005e2eb12 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a2a588);
        bRam0000000005e2eb12 = 1;
      }
      lVar23 = *(long *)(auVar46._8_8_ + 0x38);
      if (lVar23 != 0) {
        *(int *)((long)puVar12 + -0x24) = auVar46._0_4_;
        uVar7 = func_0x02893128(lVar23,(undefined1 *)((long)puVar12 + -0x24),_DAT_05a2a588);
        return (ulong)(uVar7 & 1);
      }
      auVar43 = func_0x0249fb90();
      plVar30 = auVar43._8_8_;
      *(undefined8 *)((long)puVar12 + -0x50) = 0x387e7ec;
      *(undefined8 *)((long)puVar12 + -0x48) = 0x5e2e000;
      *(long *)((long)puVar12 + -0x40) = auVar46._8_8_;
      *(ulong *)((long)puVar12 + -0x38) = auVar46._0_8_ & 0xffffffff;
      if ((bRam0000000005e2eb13 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfbc0);
        bRam0000000005e2eb13 = 1;
      }
      if (plVar30 == (long *)0x0) {
        auVar42 = func_0x0249fb90();
        *(undefined8 *)((long)puVar12 + -0x70) = 0x387e89c;
        *(undefined8 *)((long)puVar12 + -0x68) = 0x5e2e000;
        *(undefined8 *)((long)puVar12 + -0x60) = 0;
        *(long *)((long)puVar12 + -0x58) = auVar43._0_8_;
        if ((bRam0000000005e2eb14 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a588);
          bRam0000000005e2eb14 = 1;
        }
        lVar23 = *(long *)(auVar42._0_8_ + 0xe8);
        if (lVar23 != 0) {
          *(int *)((long)puVar12 + -0x74) = auVar42._8_4_;
          uVar7 = func_0x02893128(lVar23,(undefined1 *)((long)puVar12 + -0x74),_DAT_05a2a588);
          return (ulong)(uVar7 & 1);
        }
        auVar43 = func_0x0249fb90();
        *(undefined8 *)((long)puVar12 + -0xa0) = 0x387e908;
        *(undefined8 *)((long)puVar12 + -0x98) = 0x5e2e000;
        *(long *)((long)puVar12 + -0x90) = auVar42._0_8_;
        *(ulong *)((long)puVar12 + -0x88) = auVar42._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb15 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a578);
          bRam0000000005e2eb15 = 1;
        }
        lVar23 = *(long *)(auVar43._0_8_ + 0xe8);
        if (lVar23 != 0) {
          *(int *)((long)puVar12 + -0xa4) = auVar43._8_4_;
          uVar27 = func_0x028926c4(lVar23,(undefined1 *)((long)puVar12 + -0xa4),_DAT_05a2a578);
          return uVar27;
        }
        lVar23 = func_0x0249fb90();
        *(undefined8 *)((long)puVar12 + -0xd0) = 0x387e970;
        *(long *)((long)puVar12 + -0xc0) = auVar43._0_8_;
        *(ulong *)((long)puVar12 + -0xb8) = auVar43._8_8_ & 0xffffffff;
        if ((bRam0000000005e2eb16 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a2a620);
          bRam0000000005e2eb16 = 1;
        }
        if (*(long *)(lVar23 + 0xf0) == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = (ulong)*(uint *)(*(long *)(lVar23 + 0xf0) + 0x20);
        }
        return uVar27;
      }
      lVar23 = *plVar30;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
            puVar19 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x1f) * 0x10 + 0x138);
            goto LAB_0387e878;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar19 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,0x1f);
LAB_0387e878:
      uVar40 = (*(code *)*puVar19)(plVar30,puVar19[1]);
      auVar46._8_8_ = auVar43._0_8_;
      auVar46._0_8_ = uVar40;
      uVar40 = *(undefined8 *)((long)puVar12 + -0x40);
      lVar23 = *(long *)((long)puVar12 + -0x38);
      uVar16 = *(undefined8 *)((long)puVar12 + -0x50);
      plVar11 = *(long **)((long)puVar12 + -0x48);
      puVar12 = (undefined8 *)((long)puVar12 + -0x30);
    } while( true );
  }
  uStack_330 = 0x33c3914;
  auVar43 = func_0x0249fb90();
  plVar30 = auVar43._0_8_;
  uStack_360 = 0x33c3934;
  uStack_340 = 0x5e2c000;
  puStack_350 = puVar33;
  plStack_348 = plVar11;
  lStack_338 = lVar23;
  if ((bRam0000000005e2c3d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059de9c8);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2c3d5 = 1;
  }
  if (plVar30 == (long *)0x0) {
    puVar41 = (undefined *)0x33c3cc8;
    auVar42 = func_0x0249fb90();
  }
  else {
    lVar23 = *plVar30;
    puVar33 = &DAT_059dfa78;
    uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x2f) * 0x10 + 0x138);
          goto LAB_033c39dc;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0x2f);
LAB_033c39dc:
    lVar23 = (*(code *)*puVar12)(plVar30,puVar12[1]);
    if (lVar23 == 0) {
      return 0;
    }
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar27 = func_0x035fb854(plVar30,auVar43._8_8_,0);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
    puVar41 = (undefined *)0x33c3a24;
    auVar42 = auVar43;
  }
  plVar15 = auVar42._8_8_;
  plVar30 = auVar42._0_8_;
  uStack_378 = 0x5e2c000;
  lVar23 = 0x5e2c000;
  puStack_380 = puVar41;
  auStack_370 = auVar43;
  if ((bRam0000000005e2c3ee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfa78);
    bRam0000000005e2c3ee = 1;
  }
  if (plVar30 == (long *)0x0) {
    uVar40 = 0x33c3e04;
    auVar43 = func_0x0249fb90();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = plVar15;
    ppuVar6 = &puStack_380;
    auVar42 = auVar5 << 0x40;
SUB_033c3e04:
    plVar30 = auVar43._0_8_;
    *(undefined8 *)((long)ppuVar6 + -0x30) = uVar40;
    *(undefined **)((long)ppuVar6 + -0x28) = puVar34;
    *(undefined **)((long)ppuVar6 + -0x20) = puVar33;
    *(long *)((long)ppuVar6 + -0x18) = lVar23;
    *(undefined1 (*) [16])((long)ppuVar6 + -0x10) = auVar42;
    puVar41 = (undefined *)0x5e2c000;
    if ((bRam0000000005e2c3d7 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a047e8);
      func_0x0249f8e4(&DAT_05a047f0);
      func_0x0249f8e4(&DAT_05a047f8);
      func_0x0249f8e4(&DAT_059dec98);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_05a1a750);
      bRam0000000005e2c3d7 = 1;
    }
    *(undefined8 *)((long)ppuVar6 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x48) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x40) = 0;
    if (plVar30 != (long *)0x0) {
      lVar23 = *plVar30;
      puVar41 = &DAT_059dfa78;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x23) * 0x10 + 0x138);
            goto LAB_033c3edc;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0x23);
LAB_033c3edc:
      uVar27 = (*(code *)*puVar12)(plVar30,puVar12[1]);
      if ((uVar27 & 1) == 0) goto LAB_033c40ec;
      lVar23 = *plVar30;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x22) * 0x10 + 0x138);
            goto LAB_033c3f3c;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0x22);
LAB_033c3f3c:
      plVar15 = (long *)(*(code *)*puVar12)(plVar30,auVar43._8_8_,puVar12[1]);
      if (plVar15 != (long *)0x0) {
        lVar23 = *plVar15;
        uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dec98) {
              puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 4) * 0x10 + 0x138);
              goto LAB_033c3fac;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dec98,4);
LAB_033c3fac:
        lVar23 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        plVar30 = plVar15;
        if (lVar23 != 0) {
          func_0x028310e8(lVar23,(undefined1 *)((long)ppuVar6 + -0x50),_DAT_05a1a750);
          puVar33 = &DAT_05a047f0;
          puVar34 = &DAT_05a047f8;
          *(undefined8 *)((long)ppuVar6 + -0x60) = 0;
          *(undefined1 **)((long)ppuVar6 + -0x58) = (undefined1 *)((long)ppuVar6 + -0x50);
LAB_033c3fe8:
          uVar7 = func_0x02a5d2d0((undefined1 *)((long)ppuVar6 + -0x50),_DAT_05a047f0);
          lVar23 = _DAT_05a047f8;
          plVar30 = (long *)(ulong)uVar7;
          if ((uVar7 & 1) == 0) goto LAB_033c4084;
          lVar18 = *(long *)(_DAT_05a047f8 + 0x20);
          uVar2 = *(ushort *)(lVar18 + 0x135);
          lVar26 = lVar18;
          if ((uVar2 & 1) == 0) {
            lVar26 = func_0x024d8f40();
            lVar18 = *(long *)(lVar23 + 0x20);
            uVar2 = *(ushort *)(lVar18 + 0x135);
          }
          puVar41 = (undefined *)(ulong)*(uint *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x10) + 0xfc)
          ;
          if ((uVar2 & 1) == 0) {
            lVar18 = func_0x024d8f40();
          }
          uVar40 = func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x50),
                                   *(long *)(*(long *)(*(long *)(lVar18 + 0xc0) + 8) + 0x80) + 0x60)
          ;
          func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x38),uVar40,puVar41);
          plVar15 = *(long **)((long)ppuVar6 + -0x38);
          if (plVar15 != (long *)0x0) goto code_r0x033c4070;
          func_0x0249fb90();
        }
      }
    }
    auVar49 = func_0x0249fb90();
    uVar40 = auVar49._0_8_;
    if (auVar49._8_4_ == 1) {
      plVar15 = (long *)func_0x054ed080(uVar40);
      lVar23 = *plVar15;
      *(long *)((long)ppuVar6 + -0x60) = lVar23;
      func_0x054ed090();
      func_0x02a5d2cc(*(undefined8 *)((long)ppuVar6 + -0x58),_DAT_05a047e8);
      if (lVar23 == 0) {
LAB_033c40ec:
        uVar7 = 1;
LAB_033c40f0:
        return (ulong)(uVar7 & 1);
      }
      uVar40 = func_0x0249fb88(lVar23);
    }
    func_0x022c29f0((undefined1 *)((long)ppuVar6 + -0x60));
    func_0x0258f7ac(uVar40);
    auVar43 = func_0x022bd790();
    plVar32 = auVar43._8_8_;
    plVar15 = auVar43._0_8_;
    *(undefined8 *)((long)ppuVar6 + -0xa0) = 0x33c4128;
    *(undefined **)((long)ppuVar6 + -0x90) = puVar35;
    *(undefined **)((long)ppuVar6 + -0x88) = puVar34;
    *(undefined **)((long)ppuVar6 + -0x80) = puVar33;
    *(undefined **)((long)ppuVar6 + -0x78) = puVar41;
    *(long **)((long)ppuVar6 + -0x70) = plVar30;
    *(undefined8 *)((long)ppuVar6 + -0x68) = uVar40;
    if ((bRam0000000005e2c3d8 & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca7c8);
      func_0x0249f8e4(&DAT_059cbb20);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfa78);
      func_0x0249f8e4(&DAT_059e0220);
      bRam0000000005e2c3d8 = 1;
    }
    puVar33 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar6 + -0x98) = 0;
    if ((plVar15 != (long *)0x0) && (plVar32 != (long *)0x0)) {
      lVar23 = *plVar32;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 6) * 0x10 + 0x138);
            goto LAB_033c4208;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059e0220,6);
LAB_033c4208:
      lVar23 = (*(code *)*puVar12)(plVar32,puVar12[1]);
      lVar26 = *plVar15;
      puVar33 = &DAT_059dfa78;
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
      puVar12 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dfa78,0x1e);
LAB_033c4270:
      uVar40 = puVar12[1];
      plVar30 = (long *)(*(code *)*puVar12)(plVar15,plVar32);
      if (plVar30 != (long *)0x0) {
        lVar26 = *plVar30;
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
        uVar40 = 0;
        puVar12 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c42e4:
        plVar32 = (long *)(*(code *)*puVar12)(plVar30,puVar12[1]);
        *(long **)((long)ppuVar6 + -0x98) = plVar32;
        *(undefined8 *)((long)ppuVar6 + -0xb0) = 0;
        *(undefined1 **)((long)ppuVar6 + -0xa8) = (undefined1 *)((long)ppuVar6 + -0x98);
        if (plVar32 != (long *)0x0) {
          puVar34 = &DAT_059df6e0;
          puVar35 = &DAT_059cbb20;
          do {
            lVar26 = *plVar32;
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
            uVar40 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar32);
LAB_033c4360:
            uVar27 = (*(code *)*puVar12)(plVar32,puVar12[1]);
            plVar30 = (long *)(uVar27 & 0xffffffff);
            if ((uVar27 & 1) == 0) goto LAB_033c44b8;
            plVar15 = *(long **)((long)ppuVar6 + -0x98);
            if (plVar15 == (long *)0x0) {
              func_0x0249fb90();
              plVar15 = (long *)0x0;
LAB_033c4550:
              auVar47 = func_0x0249fb90();
LAB_033c4554:
              func_0x0249fb90(auVar47._0_8_,auVar47._8_8_);
              goto LAB_033c4558;
            }
            lVar26 = *plVar15;
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
            uVar40 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c43c8:
            plVar15 = (long *)(*(code *)*puVar12)(plVar15,puVar12[1]);
            if (plVar15 == (long *)0x0) goto LAB_033c4550;
            lVar26 = *plVar15;
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
            uVar40 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c4428:
            iVar8 = (*(code *)*puVar12)(plVar15,puVar12[1]);
            if (iVar8 != 0) {
              lVar26 = *plVar15;
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
              uVar40 = 1;
              puVar12 = (undefined8 *)func_0x024d927c(plVar15);
LAB_033c4488:
              uVar27 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              auVar47._8_8_ = uVar27 & 0xffffffff;
              auVar47._0_8_ = uVar27;
              if (lVar23 == 0) goto LAB_033c4554;
              uVar40 = 0;
              uVar27 = func_0x0387cc50(lVar23);
              if ((uVar27 & 1) == 0) goto LAB_033c44b8;
            }
            plVar32 = *(long **)((long)ppuVar6 + -0x98);
            plVar30 = (long *)0x0;
          } while (plVar32 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_033c44b8:
        lVar23 = 0;
        puVar33 = (undefined *)(ulong)((uint)plVar30 ^ 1);
        puVar12 = (undefined8 *)((long)ppuVar6 + -0x98);
        do {
          plVar30 = (long *)*puVar12;
          if (plVar30 != (long *)0x0) {
            lVar26 = *plVar30;
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
            uVar40 = 0;
            puVar12 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c4520:
            (*(code *)*puVar12)(plVar30,puVar12[1]);
          }
          if (lVar23 == 0) goto LAB_033c4530;
LAB_033c4558:
          auVar49 = func_0x0249fb88(lVar23);
          uVar16 = auVar49._0_8_;
          if (auVar49._8_4_ != 1) goto LAB_033c45b0;
          plVar30 = (long *)func_0x054ed080(uVar16);
          lVar23 = *plVar30;
          *(long *)((long)ppuVar6 + -0xb0) = lVar23;
          func_0x054ed090();
          puVar12 = *(undefined8 **)((long)ppuVar6 + -0xa8);
          puVar33 = (undefined *)0x1;
        } while( true );
      }
      puVar33 = (undefined *)0x1;
    }
LAB_033c4530:
    return (ulong)((uint)puVar33 & 1);
  }
  lVar23 = *plVar30;
  uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar27 != 0) {
    piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
        puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x36) * 0x10 + 0x138);
        goto LAB_033c3d54;
      }
      uVar27 = uVar27 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar27 != 0);
  }
  puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0x36);
LAB_033c3d54:
  uVar27 = (*(code *)*puVar12)(plVar30,puVar12[1]);
  if ((uVar27 & 1) != 0) {
    lVar23 = *plVar30;
    uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0xf) * 0x10 + 0x138);
          goto LAB_033c3db4;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0xf);
LAB_033c3db4:
    uVar40 = (*(code *)*puVar12)(plVar30,puVar12[1]);
    uVar40 = func_0x033c88e0(uVar40,plVar15,0,0);
    uVar27 = func_0x033c9114(uVar40,plVar15);
    if ((uVar27 & 1) == 0) {
      puStack_380 = puVar33;
      if ((bRam0000000005e2c3ef & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfa78);
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2c3ef = 1;
      }
      if (plVar30 != (long *)0x0) {
        lVar23 = *plVar30;
        uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
              puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0xf) * 0x10 + 0x138);
              goto LAB_033c9eec;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfa78,0xf);
LAB_033c9eec:
        uVar40 = (*(code *)*puVar12)(plVar30,puVar12[1]);
        lVar23 = func_0x033c97d4(uVar40,plVar15);
        if (lVar23 != 0) {
          uVar7 = *(uint *)(lVar23 + 0x18);
          if (0 < (int)uVar7) {
            if (plVar15 == (long *)0x0) goto LAB_033ca068;
            uVar27 = 0;
            do {
              lVar25 = *plVar15;
              uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar28 != 0) {
                piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                    puVar12 = (undefined8 *)(lVar25 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                    goto LAB_033c9f74;
                  }
                  uVar28 = uVar28 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar28 != 0);
              }
              puVar12 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059e0220,6);
LAB_033c9f74:
              lVar25 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              if (*(uint *)(lVar23 + 0x18) <= uVar27) goto LAB_033ca06c;
              plVar20 = (long *)(lVar23 + uVar27 * 8 + 0x20);
              lVar26 = *plVar20;
              if (lVar26 == 0) goto LAB_033ca068;
              uVar9 = func_0x0353efa0(lVar26,0);
              if (lVar25 == 0) goto LAB_033ca068;
              uVar28 = func_0x0387cc50(lVar25,uVar9,0);
              if ((uVar28 & 1) == 0) {
                if (*(uint *)(lVar23 + 0x18) <= uVar27) goto LAB_033ca06c;
                lVar23 = *plVar20;
                if (lVar23 == 0) goto LAB_033ca068;
                iVar8 = func_0x0353efa0(lVar23,0);
                lVar23 = *plVar30;
                uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
                if (uVar27 == 0) goto LAB_033ca020;
                piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                goto LAB_033ca008;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar7);
          }
          return 0;
        }
      }
LAB_033ca068:
      func_0x0249fb90();
LAB_033ca06c:
      auVar43 = func_0x0249fb98();
      uVar40 = func_0x033c88e0(auVar43._0_8_,auVar43._8_8_,0,0);
      uVar27 = func_0x033c7ab8(uVar40,auVar43._8_8_);
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
  uVar40 = 6;
  puVar12 = (undefined8 *)func_0x024d927c(plVar30);
LAB_033c4998:
  lVar26 = (*(code *)*puVar12)(plVar30,puVar12[1]);
  if ((lVar23 != 0) && (plVar30 = (long *)0x0, lVar26 != 0)) {
    uVar27 = func_0x0387c57c(lVar26,*(undefined4 *)(lVar23 + 0x10),0);
    if ((uVar27 & 1) == 0) {
      uVar27 = 2;
    }
    else {
      uVar27 = func_0x0353f618(lVar23,0);
      if ((uVar27 & 1) == 0) {
        uVar27 = func_0x0387cc50(lVar26,*(undefined4 *)(lVar23 + 0x10),0);
        if ((uVar27 & 1) != 0) {
          return 1;
        }
      }
      uVar27 = 0;
    }
    return uVar27;
  }
LAB_033c4a08:
  auVar43 = func_0x0249fb90();
  *(undefined **)((long)ppuVar6 + -0x160) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -0x158) = 0x33c4a0c;
  *(undefined **)((long)ppuVar6 + -0x150) = unaff_x28;
  *(undefined **)((long)ppuVar6 + -0x148) = unaff_x27;
  *(long *)((long)ppuVar6 + -0x140) = lVar25;
  *(undefined8 *)((long)ppuVar6 + -0x138) = 0x5e2c000;
  *(undefined **)((long)ppuVar6 + -0x130) = puVar35;
  *(undefined **)((long)ppuVar6 + -0x128) = puVar34;
  *(undefined **)((long)ppuVar6 + -0x120) = puVar33;
  *(undefined8 *)((long)ppuVar6 + -0x118) = 0x5e2c000;
  *(long **)((long)ppuVar6 + -0x110) = plVar30;
  *(long *)((long)ppuVar6 + -0x108) = lVar23;
  plVar15 = (long *)0x5e2c000;
  uVar27 = auVar43._0_8_ & 0xffffffff;
  plVar30 = plVar20;
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
  *(undefined1 *)((long)ppuVar6 + -0x16c) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x180) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x178) = 0;
  *(undefined8 *)((long)ppuVar6 + -400) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x188) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1a0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x198) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1c0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1b8) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1b0) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x1c8) = 0;
  if (plVar20 == (long *)0x0) {
LAB_033c53e0:
    func_0x0249fb90();
    uVar40 = func_0x0249fb88(uVar40);
    func_0x022c29f0((undefined1 *)((long)ppuVar6 + -0x1e0));
    func_0x0258f7ac(uVar40);
    uVar16 = 0x33c5404;
    auVar48 = func_0x022bd790();
    puVar34 = puVar35;
  }
  else {
    lVar23 = *plVar20;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c4bd8;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059df8e8,5);
LAB_033c4bd8:
    plVar32 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
    if (plVar32 == (long *)0x0) goto LAB_033c53e0;
    lVar23 = *plVar32;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x3b) * 0x10 + 0x138);
          goto LAB_033c4c4c;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfe60,0x3b);
LAB_033c4c4c:
    plVar15 = (long *)(*(code *)*puVar12)(plVar32,puVar12[1]);
    lVar23 = *plVar20;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 6) * 0x10 + 0x138);
          goto LAB_033c4cac;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0220,6);
LAB_033c4cac:
    puVar34 = (undefined *)(*(code *)*puVar12)(plVar20,puVar12[1]);
    if (plVar15 == (long *)0x0) goto LAB_033c53e0;
    lVar23 = *plVar15;
    puVar37 = &DAT_059cd750;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
          puVar12 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_033c4d14;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059cd750,0);
LAB_033c4d14:
    uVar28 = (*(code *)*puVar12)(plVar15,uVar27,puVar12[1]);
    if ((uVar28 & 1) == 0) {
      return 4;
    }
    puVar35 = puVar34;
    if (puVar34 == (undefined *)0x0) goto LAB_033c53e0;
    uVar28 = func_0x0387c57c(puVar34,uVar27,0);
    if ((uVar28 & 1) == 0) {
      return 1;
    }
    lVar23 = *plVar15;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 2) * 0x10 + 0x138);
          goto LAB_033c4da0;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059cd750,2);
LAB_033c4da0:
    uVar27 = (*(code *)*puVar12)(plVar15,uVar27,puVar12[1]);
    auVar48._8_8_ = plVar20;
    auVar48._0_8_ = uVar27;
    if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059de9c8);
    }
    uVar28 = func_0x035fb854(uVar27,plVar20,0);
    if ((uVar28 & 1) == 0) {
      return 3;
    }
    *(undefined1 *)((long)ppuVar6 + -0x16c) = 0;
    if (uVar27 == 0) goto LAB_033c53e0;
    uVar28 = func_0x0353f608(uVar27,0);
    if ((uVar28 & 1) != 0) {
LAB_033c4e0c:
      plVar15 = *(long **)(uVar27 + 0x28);
      if (plVar15 == (long *)0x0) {
LAB_033c52d0:
        uVar7 = 0;
        if (*(char *)((long)ppuVar6 + -0x16c) != '\0') {
          uVar7 = 6;
        }
        return (ulong)uVar7;
      }
      uVar7 = *(uint *)(plVar15 + 3);
      puVar35 = (undefined *)(ulong)uVar7;
      if ((int)uVar7 < 1) goto LAB_033c52d0;
      if (*(int *)(_DAT_059c1e78 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar37 = _DAT_059f5cd8;
      lVar23 = *(long *)(_DAT_059f5cd8 + 0x20);
      if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x024d8f40();
      }
      lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
      if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x024d8f40();
      }
      if (*(int *)(lVar23 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar23 = *(long *)(puVar37 + 0x20);
      if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x024d8f40();
      }
      lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
      if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x024d8f40();
      }
      plVar32 = (long *)**(long **)(lVar23 + 0xb8);
      if (plVar32 != (long *)0x0) {
        puVar37 = (undefined *)
                  (**(code **)(*plVar32 + 0x178))(plVar32,puVar35,*(undefined8 *)(*plVar32 + 0x180))
        ;
        *(undefined **)((long)ppuVar6 + -0x178) = puVar37;
        if (*(int *)(_DAT_059c1eb0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059c1eb0);
        }
        lVar25 = _DAT_059f5d10;
        lVar23 = *(long *)(_DAT_059f5d10 + 0x20);
        if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x024d8f40();
        }
        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
        if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x024d8f40();
        }
        if (*(int *)(lVar23 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar23 = *(long *)(lVar25 + 0x20);
        if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x024d8f40();
        }
        lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
        if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x024d8f40();
        }
        plVar32 = (long *)**(long **)(lVar23 + 0xb8);
        if (plVar32 != (long *)0x0) {
          uVar16 = (**(code **)(*plVar32 + 0x178))(plVar32,uVar7,*(undefined8 *)(*plVar32 + 0x180));
          *(undefined8 *)((long)ppuVar6 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar6 + -0x1d8) = (undefined1 *)((long)ppuVar6 + -0x180);
          *(undefined8 *)((long)ppuVar6 + -0x180) = uVar16;
          *(undefined1 **)((long)ppuVar6 + -0x1d0) = (undefined1 *)((long)ppuVar6 + -0x178);
          auVar42 = func_0x028ff200(puVar37,_DAT_05a2eda0);
          auVar44 = func_0x028ff200(*(undefined8 *)((long)ppuVar6 + -0x180),_DAT_05a2f0b0);
          if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          iVar8 = func_0x035fdf8c(plVar15,auVar42._0_8_,auVar42._8_8_,auVar44._0_8_,auVar44._8_8_,0)
          ;
          if (0 < iVar8) {
            uVar16 = *(undefined8 *)((long)ppuVar6 + -0x178);
            if (*(int *)(_DAT_059c1ed8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar6 + -400),uVar16,0,iVar8,_DAT_059f5d38);
            uVar16 = *(undefined8 *)((long)ppuVar6 + -0x180);
            if (*(int *)(_DAT_059c1ef8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            func_0x029bffdc((undefined1 *)((long)ppuVar6 + -0x1a0),uVar16,0,iVar8,_DAT_059f5d98);
            auVar42 = func_0x028ff244(*(undefined8 *)((long)ppuVar6 + -400),
                                      *(undefined8 *)((long)ppuVar6 + -0x188),_DAT_05a2ed98);
            auVar44 = func_0x028ff244(*(undefined8 *)((long)ppuVar6 + -0x1a0),
                                      *(undefined8 *)((long)ppuVar6 + -0x198),_DAT_05a2f0a8);
            uVar27 = func_0x033bae94(plVar20,auVar43._8_8_,uVar40,auVar42._0_8_,auVar42._8_8_,
                                     auVar44._0_8_,auVar44._8_8_,
                                     (undefined1 *)((long)ppuVar6 + -0x16c));
            if ((uVar27 & 1) == 0) {
              func_0x02408624((undefined1 *)((long)ppuVar6 + -0x1e0));
              return 2;
            }
          }
          func_0x02408624((undefined1 *)((long)ppuVar6 + -0x1e0));
          func_0x028310e8(plVar15,(undefined1 *)((long)ppuVar6 + -0x1e0),_DAT_05a1a750);
          *(undefined8 *)((long)ppuVar6 + -0x1b8) = *(undefined8 *)((long)ppuVar6 + -0x1d8);
          *(undefined8 *)((long)ppuVar6 + -0x1c0) = *(undefined8 *)((long)ppuVar6 + -0x1e0);
          *(undefined8 *)((long)ppuVar6 + -0x1b0) = *(undefined8 *)((long)ppuVar6 + -0x1d0);
          *(undefined8 *)((long)ppuVar6 + -0x1e0) = 0;
          *(undefined1 **)((long)ppuVar6 + -0x1d8) = (undefined1 *)((long)ppuVar6 + -0x1c0);
          while( true ) {
            uVar27 = func_0x02a5d2d0((undefined1 *)((long)ppuVar6 + -0x1c0),_DAT_05a047f0);
            lVar23 = _DAT_05a047f8;
            if ((uVar27 & 1) == 0) break;
            lVar26 = *(long *)(_DAT_05a047f8 + 0x20);
            uVar2 = *(ushort *)(lVar26 + 0x135);
            lVar25 = lVar26;
            if ((uVar2 & 1) == 0) {
              lVar25 = func_0x024d8f40();
              lVar26 = *(long *)(lVar23 + 0x20);
              uVar2 = *(ushort *)(lVar26 + 0x135);
            }
            uVar9 = *(undefined4 *)(*(long *)(*(long *)(lVar25 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar26 = func_0x024d8f40();
            }
            uVar40 = func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x1c0),
                                     *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x168),uVar40,uVar9);
            plVar30 = *(long **)((long)ppuVar6 + -0x168);
            if (plVar30 != (long *)0x0) {
              lVar23 = *plVar30;
              if ((*(byte *)(_DAT_059db3a0 + 0x130) <= *(byte *)(lVar23 + 0x130)) &&
                 (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(_DAT_059db3a0 + 0x130) * 8 +
                           -8) == _DAT_059db3a0)) {
                uVar27 = (**(code **)(lVar23 + 0x1b8))
                                   (plVar30,plVar20,*(undefined8 *)(lVar23 + 0x1c0));
                if ((uVar27 & 1) == 0) {
                  func_0x02a5d2cc((undefined1 *)((long)ppuVar6 + -0x1c0),_DAT_05a047e8);
                  return 5;
                }
              }
            }
          }
          func_0x02a5d2cc((undefined1 *)((long)ppuVar6 + -0x1c0),_DAT_05a047e8);
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar28 = func_0x0353f618(uVar27,0);
    if ((uVar28 & 1) != 0) goto LAB_033c4e0c;
    uVar28 = func_0x0353f5f8(uVar27,0);
    if ((uVar28 & 1) == 0) {
      uVar28 = func_0x0353f628(uVar27,0);
      if ((uVar28 & 1) != 0) {
        return 3;
      }
      uVar28 = func_0x0353f638(uVar27,0);
      if ((uVar28 & 1) != 0) {
        return 3;
      }
      uVar28 = func_0x0353f648(uVar27,0);
      if ((uVar28 & 1) == 0) {
        uVar28 = func_0x0353f658(uVar27,0);
        if ((uVar28 & 1) == 0) goto LAB_033c52d0;
        if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar28 = func_0x03600068(uVar27,(undefined1 *)((long)ppuVar6 + -0x1c8),0);
        if ((uVar28 & 1) == 0) goto LAB_033c52d0;
        lVar23 = func_0x022bffa8(6,_DAT_059e0220,plVar20);
        if (*(long *)((long)ppuVar6 + -0x1c8) != 0) {
          uVar16 = func_0x03693f98(*(long *)((long)ppuVar6 + -0x1c8),0);
          uVar40 = 0;
          if (lVar23 != 0) {
            uVar27 = func_0x03887158(lVar23,plVar20,uVar16,0);
            if ((uVar27 & 1) != 0) {
              return 3;
            }
            goto LAB_033c52d0;
          }
        }
      }
      else {
        lVar23 = func_0x022bffa8(6,_DAT_059e0220,plVar20);
        if (lVar23 != 0) {
          uVar27 = func_0x03884e60(lVar23,*(undefined4 *)(uVar27 + 0x10),0,0);
          if ((uVar27 & 1) == 0) {
            return 3;
          }
          goto LAB_033c52d0;
        }
      }
      goto LAB_033c53e0;
    }
    uVar16 = 0x33c52cc;
  }
  plVar11 = auVar48._8_8_;
  plVar32 = auVar48._0_8_;
  *(undefined8 *)((long)ppuVar6 + -0x210) = uVar16;
  *(long *)((long)ppuVar6 + -0x208) = auVar43._8_8_;
  *(undefined8 *)((long)ppuVar6 + -0x200) = uVar40;
  *(long **)((long)ppuVar6 + -0x1f8) = plVar20;
  if ((bRam0000000005e2c3dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_05a29e10);
    func_0x0249f8e4(&DAT_059d4230);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2c3dc = 1;
  }
  uVar40 = 0;
  *(undefined8 *)((long)ppuVar6 + -0x220) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x218) = 0;
  uVar28 = func_0x036a531c(plVar32,plVar11);
  if ((uVar28 & 1) == 0) {
    return 0;
  }
  if (plVar32 != (long *)0x0) {
    lVar23 = *plVar32;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfa78) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x22) * 0x10 + 0x138);
          goto LAB_033c54e4;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar32,_DAT_059dfa78,0x22);
LAB_033c54e4:
    uVar40 = puVar12[1];
    plVar20 = (long *)(*(code *)*puVar12)(plVar32,plVar11);
    if (plVar11 != (long *)0x0) {
      if (((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
          (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8)
           == _DAT_059e48c8)) && (plVar32 = (long *)0x0, plVar20 != (long *)0x0)) {
        lVar25 = *plVar20;
        lVar23 = plVar11[0x9c];
        uVar27 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dec98) {
              puVar12 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0x1b) * 0x10 + 0x138);
              goto LAB_033c5590;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dec98,0x1b);
LAB_033c5590:
        auVar43 = (*(code *)*puVar12)(plVar20,plVar11,(char)lVar23 != '\0',puVar12[1]);
        *(undefined1 (*) [16])((long)ppuVar6 + -0x220) = auVar43;
        if (*(int *)(_DAT_059d4230 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar23 = *(long *)(_DAT_05a29e10 + 0x20);
        if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x024d8f40();
        }
        pcVar13 = (char *)func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x220),
                                          *(long *)(**(long **)(lVar23 + 0xc0) + 0x80) + 0x20);
        return (ulong)(*pcVar13 == '\0');
      }
    }
  }
  auVar43 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar6 + -0x270) = 0x33c5620;
  *(long *)((long)ppuVar6 + -0x260) = lVar25;
  *(undefined **)((long)ppuVar6 + -600) = puVar37;
  *(undefined **)((long)ppuVar6 + -0x250) = puVar34;
  *(long **)((long)ppuVar6 + -0x248) = plVar15;
  *(ulong *)((long)ppuVar6 + -0x240) = uVar27;
  *(undefined8 *)((long)ppuVar6 + -0x238) = 0x5e2c000;
  *(long **)((long)ppuVar6 + -0x230) = plVar32;
  *(long **)((long)ppuVar6 + -0x228) = plVar11;
  uVar27 = auVar43._0_8_ & 0xffffffff;
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
  *(undefined1 *)((long)ppuVar6 + -0x268) = 0;
  *(undefined8 *)((long)ppuVar6 + -0x278) = 0;
  if (plVar30 != (long *)0x0) {
    lVar23 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_033c5714;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_033c5714:
    plVar20 = (long *)(*(code *)*puVar12)(plVar30,puVar12[1]);
    if (plVar20 != (long *)0x0) {
      lVar23 = *plVar20;
      uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 0x3b) * 0x10 + 0x138);
            goto LAB_033c5788;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfe60,0x3b);
LAB_033c5788:
      plVar20 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
      lVar23 = *plVar30;
      uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
            puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 6) * 0x10 + 0x138);
            goto LAB_033c57e8;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0220,6);
LAB_033c57e8:
      lVar23 = (*(code *)*puVar12)(plVar30,puVar12[1]);
      if (plVar20 != (long *)0x0) {
        lVar25 = *plVar20;
        uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
              puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_033c5850;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,0);
LAB_033c5850:
        uVar28 = (*(code *)*puVar12)(plVar20,uVar27,puVar12[1]);
        if ((uVar28 & 1) == 0) {
          return 4;
        }
        if (lVar23 != 0) {
          uVar28 = func_0x0387c57c(lVar23,uVar27,0);
          if ((uVar28 & 1) == 0) {
            return 1;
          }
          lVar23 = *plVar20;
          uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059cd750) {
                puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 2) * 0x10 + 0x138);
                goto LAB_033c58dc;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059cd750,2);
LAB_033c58dc:
          lVar23 = (*(code *)*puVar12)(plVar20,uVar27,puVar12[1]);
          if (lVar23 != 0) {
            uVar28 = func_0x0353f648(lVar23,0);
            if ((uVar28 & 1) == 0) {
              uVar27 = func_0x0353f658(lVar23,0);
              if ((uVar27 & 1) == 0) {
                return 3;
              }
              if (*(int *)(_DAT_059de9c8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uVar27 = func_0x03600068(lVar23,(undefined1 *)((long)ppuVar6 + -0x278),0);
              if ((uVar27 & 1) == 0) {
                return 3;
              }
              lVar23 = func_0x022bffa8(6,_DAT_059e0220,plVar30);
              if (*(long *)((long)ppuVar6 + -0x278) != 0) {
                uVar16 = func_0x03693f98(*(long *)((long)ppuVar6 + -0x278),0);
                uVar40 = 0;
                if (lVar23 != 0) {
                  func_0x03887758(lVar23,plVar30,uVar16,0);
                  return 3;
                }
              }
            }
            else {
              lVar23 = *plVar30;
              uVar28 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar28 != 0) {
                piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                    puVar12 = (undefined8 *)(lVar23 + (long)(*piVar29 + 6) * 0x10 + 0x138);
                    goto LAB_033c59d0;
                  }
                  uVar28 = uVar28 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar28 != 0);
              }
              puVar12 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0220,6);
LAB_033c59d0:
              lVar23 = (*(code *)*puVar12)(plVar30,puVar12[1]);
              if (lVar23 != 0) {
                lVar23 = func_0x03885c68(lVar23,plVar30,uVar27,0);
                if (lVar23 == 0) {
                  return 3;
                }
                lVar25 = func_0x0249f9d4(_DAT_059d7518,1);
                if (*(long *)(lVar23 + 0x10) != 0) {
                  plVar20 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
                  uVar9 = *(undefined4 *)(plVar20[1] + 0xfc);
                  uVar16 = func_0x0249f90c(*(long *)(lVar23 + 0x10),*(undefined8 *)(*plVar20 + 0x80)
                                          );
                  func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x264),uVar16,uVar9);
                  uVar16 = _DAT_059d7518;
                  if (lVar25 != 0) {
                    if (*(int *)(lVar25 + 0x18) == 0) goto LAB_033c5ae4;
                    *(undefined4 *)(lVar25 + 0x20) = *(undefined4 *)((long)ppuVar6 + -0x264);
                    lVar23 = func_0x0249f9d4(uVar16,1);
                    if (lVar23 != 0) {
                      if (*(int *)(lVar23 + 0x18) != 0) {
                        *(undefined4 *)(lVar23 + 0x20) = 1;
                        uVar27 = func_0x033bacb8(plVar30,auVar43._8_8_,uVar40,lVar25,lVar23,
                                                 (undefined1 *)((long)ppuVar6 + -0x268));
                        if ((uVar27 & 1) == 0) {
                          return 2;
                        }
                        uVar7 = 0;
                        if (*(char *)((long)ppuVar6 + -0x268) != '\0') {
                          uVar7 = 6;
                        }
                        return (ulong)uVar7;
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
  lVar23 = func_0x0249fb98();
  if (lVar23 != 0) {
    return (ulong)*(byte *)(lVar23 + 0x4e0);
  }
  *(undefined8 *)((long)ppuVar6 + -0x290) = 0x33c5ae8;
  auVar42 = func_0x0249fb90();
  *(undefined8 *)((long)ppuVar6 + -0x2b0) = 0x33c5afc;
  *(long *)((long)ppuVar6 + -0x2a8) = auVar43._8_8_;
  *(undefined8 *)((long)ppuVar6 + -0x2a0) = uVar40;
  *(long **)((long)ppuVar6 + -0x298) = plVar30;
  if ((bRam0000000005e2c3dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a27d90);
    bRam0000000005e2c3dd = 1;
  }
  *(undefined8 *)((long)ppuVar6 + -0x2c0) = 0;
  lVar25 = func_0x033c5be8(auVar42._0_8_,auVar42._8_8_);
  lVar23 = _DAT_05a27d90;
  if (lVar25 == 0) {
    uVar40 = 0;
    *(undefined8 *)((long)ppuVar6 + -0x2c0) = 0;
  }
  else {
    uVar40 = *(undefined8 *)(lVar25 + 0x10);
  }
  *(undefined8 *)((long)ppuVar6 + -0x2c0) = uVar40;
  lVar26 = *(long *)(_DAT_05a27d90 + 0x20);
  uVar2 = *(ushort *)(lVar26 + 0x135);
  lVar25 = lVar26;
  if ((uVar2 & 1) == 0) {
    lVar26 = func_0x024d8f40(lVar26);
    uVar2 = *(ushort *)(*(long *)(lVar23 + 0x20) + 0x135);
    lVar25 = *(long *)(lVar23 + 0x20);
  }
  uVar9 = *(undefined4 *)(**(long **)(lVar26 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar25 = func_0x024d8f40(lVar25);
  }
  uVar40 = func_0x0249f90c((undefined1 *)((long)ppuVar6 + -0x2c0),
                           *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((undefined1 *)((long)ppuVar6 + -0x2b4),uVar40,uVar9);
  return (ulong)*(uint *)((long)ppuVar6 + -0x2b4);
}


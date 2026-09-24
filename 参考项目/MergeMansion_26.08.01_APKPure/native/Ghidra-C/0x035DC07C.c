/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean TryToFillActivationStorage(GameLogic.Player.IPlayer player, GameLogic.Config.Types.MetacoreTime timestamp, System.Boolean boardHasCooldownRemoverState = False, System.Boolean boardHasOnFireState = False)
 * Ghidra function entry: 036dc07c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036dc07c(long param_1,long *param_2,long param_3,long *param_4,ulong param_5,
                   long *param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  undefined4 uVar24;
  int iVar22;
  uint uVar23;
  ulong uVar25;
  long lVar26;
  char *pcVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 uVar31;
  long *plVar32;
  long lVar33;
  long *extraout_x1;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  int *piVar43;
  ulong uVar44;
  ulong uVar45;
  long *unaff_x25;
  long *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  ulong uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  uVar44 = param_5 & 0xffffffff;
  uVar45 = (ulong)param_4 & 0xffffffff;
  plVar37 = param_4;
  uVar42 = param_5;
  if ((bRam0000000005e2da33 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a27fb0);
    func_0x0249f8e4(&DAT_05a28018);
    func_0x0249f8e4(&DAT_05a27fa0);
    func_0x0249f8e4(&DAT_05a27fc8);
    func_0x0249f8e4(&DAT_05a27fd0);
    bRam0000000005e2da33 = 1;
  }
  plVar35 = (long *)0x0;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  auStack_88._0_8_ = 0;
  auStack_88._8_8_ = 0;
  auStack_98._0_8_ = 0;
  auStack_98._8_8_ = 0;
  auStack_a8._0_8_ = 0;
  auStack_a8._8_8_ = 0;
  uVar25 = func_0x036fa5f8(param_1,param_2);
  if ((uVar25 & 1) != 0) {
    return (char *)0x0;
  }
  lVar26 = func_0x036d5e58(param_1);
  auVar14._8_8_ = auStack_a8._8_8_;
  auVar14._0_8_ = auStack_a8._0_8_;
  auVar8._8_8_ = auStack_98._8_8_;
  auVar8._0_8_ = auStack_98._0_8_;
  auVar2._8_8_ = auStack_88._8_8_;
  auVar2._0_8_ = auStack_88._0_8_;
  auVar48._8_8_ = auStack_78._8_8_;
  auVar48._0_8_ = auStack_78._0_8_;
  plVar30 = (long *)0x5e2d000;
  if ((lVar26 != 0) &&
     (auStack_78 = auVar48, auStack_88 = auVar2, auStack_98 = auVar8, auStack_a8 = auVar14,
     *(long *)(lVar26 + 0x18) != 0)) {
    auStack_78 = func_0x03753e70(*(long *)(lVar26 + 0x18),0);
    unaff_x28 = (long *)&DAT_05a27fc8;
    lVar26 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x024d8f40();
    }
    pcVar27 = (char *)func_0x0249f90c(auStack_78,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80));
    if (*pcVar27 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844(auStack_78,&plStack_b8,_DAT_05a27fd0);
    plVar30 = plStack_b8;
    unaff_x27 = &DAT_059e2c00;
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar28 = func_0x03530158(plVar30,0);
    plVar35 = (long *)0x0;
    uVar25 = func_0x0352ff64(uVar28,param_3);
    if ((uVar25 & 1) != 0) {
      return (char *)0x0;
    }
    if (param_2 != (long *)0x0) {
      lVar26 = *param_2;
      unaff_x26 = (long *)&DAT_059df8e8;
      uVar25 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar25 != 0) {
        piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar43 + -2) == _DAT_059df8e8) {
            puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar25 = uVar25 - 1;
          piVar43 = piVar43 + 4;
        } while (uVar25 != 0);
      }
      plVar35 = (long *)0x5;
      puVar29 = (undefined8 *)func_0x024d927c(param_2);
LAB_036dc294:
      uVar28 = (*(code *)*puVar29)(param_2,puVar29[1]);
      plVar39 = *(long **)(param_1 + 0x10);
      if (plVar39 != (long *)0x0) {
        plVar35 = *(long **)(*plVar39 + 0x1d0);
        plVar39 = (long *)(**(code **)(*plVar39 + 0x1c8))(plVar39,uVar28);
        if (plVar39 != (long *)0x0) {
          lVar26 = *plVar39;
          uVar25 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar25 != 0) {
            piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar43 + -2) == _DAT_059dfbc0) {
                puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar25 = uVar25 - 1;
              piVar43 = piVar43 + 4;
            } while (uVar25 != 0);
          }
          plVar35 = (long *)0x3;
          puVar29 = (undefined8 *)func_0x024d927c(plVar39);
LAB_036dc31c:
          plVar30 = (long *)(*(code *)*puVar29)(plVar39,puVar29[1]);
          lVar26 = func_0x036d5e58(param_1);
          auVar15._8_8_ = auStack_a8._8_8_;
          auVar15._0_8_ = auStack_a8._0_8_;
          auVar9._8_8_ = auStack_98._8_8_;
          auVar9._0_8_ = auStack_98._0_8_;
          auVar3._8_8_ = auStack_88._8_8_;
          auVar3._0_8_ = auStack_88._0_8_;
          if ((lVar26 != 0) &&
             (auStack_88 = auVar3, auStack_98 = auVar9, auStack_a8 = auVar15,
             *(long *)(lVar26 + 0x18) != 0)) {
            uVar23 = *(uint *)(*(long *)(lVar26 + 0x18) + 0x38);
            unaff_x25 = (long *)(ulong)uVar23;
            if ((int)uVar23 < 1) {
              lVar26 = *param_2;
              uVar25 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar25 != 0) {
                piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == _DAT_059df8e8) {
                    puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar25 = uVar25 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar25 != 0);
              }
              puVar29 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar28 = (*(code *)*puVar29)(param_2,puVar29[1]);
              plVar39 = (long *)0x0;
              uVar25 = func_0x036f2f04(param_1,uVar28);
              if ((uVar25 & 1) == 0) {
                plVar39 = (long *)0x0;
                uVar25 = func_0x036f2fec(param_1,param_2);
                plVar35 = plVar39;
                if ((uVar25 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (plVar30 != (long *)0x0) {
                  plVar35 = plVar30;
                  plVar39 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar26 = func_0x036d5ec8(param_1);
                  unaff_x25 = plVar39;
                  if (lVar26 != 0) {
                    auVar48 = func_0x037537dc(lVar26,0);
                    plVar36 = auVar48._0_8_;
                    if (plVar39 != (long *)0x0) {
                      uVar42 = auVar48._8_8_ & 0xffffffff;
                      uVar25 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      unaff_x25 = (long *)(uVar25 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar26 = func_0x036d5e58(param_1);
                auVar19._8_8_ = auStack_a8._8_8_;
                auVar19._0_8_ = auStack_a8._0_8_;
                auVar12._8_8_ = auStack_98._8_8_;
                auVar12._0_8_ = auStack_98._0_8_;
                auVar6._8_8_ = auStack_88._8_8_;
                auVar6._0_8_ = auStack_88._0_8_;
                plVar35 = plVar39;
                if ((lVar26 != 0) &&
                   (auStack_88 = auVar6, auStack_98 = auVar12, auStack_a8 = auVar19,
                   *(long *)(lVar26 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar26 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  unaff_x25 = (long *)0x0;
                  plVar36 = plVar37;
LAB_036dc558:
                  lVar26 = *param_2;
                  uVar25 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar25 != 0) {
                    piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar43 + -2) == _DAT_059df8e8) {
                        puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 5) * 0x10 + 0x138);
                        plVar37 = plVar36;
                        goto LAB_036dc5a8;
                      }
                      uVar25 = uVar25 - 1;
                      piVar43 = piVar43 + 4;
                    } while (uVar25 != 0);
                  }
                  plVar39 = (long *)0x5;
                  puVar29 = (undefined8 *)func_0x024d927c(param_2);
                  plVar37 = plVar36;
LAB_036dc5a8:
                  uVar28 = (*(code *)*puVar29)(param_2,puVar29[1]);
                  plVar36 = *(long **)(param_1 + 0x10);
                  plVar35 = plVar39;
                  if (plVar36 != (long *)0x0) {
                    plVar35 = *(long **)(*plVar36 + 0x1d0);
                    uVar28 = (**(code **)(*plVar36 + 0x1c8))(plVar36,uVar28);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar25 = func_0x036c47c0(uVar28,param_2);
                    unaff_x26 = (long *)(uVar25 & 0xffffffff);
                    lVar26 = func_0x036d5e58(param_1);
                    auVar20._8_8_ = auStack_a8._8_8_;
                    auVar20._0_8_ = auStack_a8._0_8_;
                    auVar13._8_8_ = auStack_98._8_8_;
                    auVar13._0_8_ = auStack_98._0_8_;
                    auVar7._8_8_ = auStack_88._8_8_;
                    auVar7._0_8_ = auStack_88._0_8_;
                    if ((lVar26 != 0) &&
                       (auStack_88 = auVar7, auStack_98 = auVar13, auStack_a8 = auVar20,
                       *(long *)(lVar26 + 0x28) != 0)) {
                      plVar37 = (long *)0x0;
                      plVar35 = unaff_x26;
                      iVar22 = func_0x03700d78(*(long *)(lVar26 + 0x28),unaff_x25);
                      uVar23 = (int)unaff_x25 - iVar22;
                      unaff_x25 = (long *)(ulong)uVar23;
                      if (uVar23 == 0) {
                        if (plVar30 != (long *)0x0) {
                          plVar39 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                          unaff_x25 = (long *)func_0x036d5ec8(param_1);
                          plVar36 = (long *)func_0x03530c84(param_3,0);
                          plVar35 = plVar30;
                          plVar30 = plVar39;
                          if (plVar39 != (long *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,plVar39,unaff_x25,param_2);
                            func_0x037275b8(param_1,param_3,1,0);
                            func_0x03727828(param_1,param_2,param_3,0);
                            plVar35 = (long *)(ulong)((uint)param_4 & 1);
                            plVar37 = (long *)(ulong)((uint)param_5 & 1);
                            uVar42 = 0;
                            uVar23 = func_0x036fa00c(param_1,param_2);
                            param_2 = (long *)(ulong)uVar23;
                            lVar26 = func_0x036d5ec8(param_1);
                            param_6 = plVar36;
                            if (lVar26 != 0) {
                              auStack_a8 = func_0x03753e70(lVar26,0);
                              uVar21 = func_0x022bf4f8(auStack_a8,_DAT_05a27fc8);
                              uVar31 = auStack_a8._8_8_;
                              uVar28 = auStack_a8._0_8_;
                              if ((uVar23 & uVar21 & 1) == 0) {
                                uStack_68 = func_0x03530c84(param_3,0);
                                plStack_b8 = (long *)0x0;
                                plStack_b0 = (long *)0x0;
                                func_0x028866e4(&plStack_b8,&uStack_68,_DAT_05a27fa0);
                                uVar42 = 0;
                                plVar37 = plStack_b0;
                                auVar47 = func_0x03489150(uVar28,uVar31,plStack_b8);
                                param_6 = plVar36;
                                uVar44 = uVar31;
                              }
                              else {
                                uStack_68 = func_0x03530c84(param_3,0);
                                plStack_b8 = (long *)0x0;
                                plStack_b0 = (long *)0x0;
                                func_0x028866e4(&plStack_b8,&uStack_68,_DAT_05a27fa0);
                                auVar47._8_8_ = plStack_b0;
                                auVar47._0_8_ = plStack_b8;
                                param_6 = plVar36;
                              }
                              param_2 = auVar47._8_8_;
                              param_3 = auVar47._0_8_;
                              lVar26 = func_0x036d5ec8(param_1);
                              auStack_98 = auVar47;
                              uVar25 = func_0x022bf4f8(auStack_98,_DAT_05a27fc8);
                              if ((uVar25 & 1) == 0) {
                                plVar35 = (long *)0x0;
                                plVar39 = (long *)0x0;
                              }
                              else {
                                param_3 = func_0x023f3ca0(auStack_98,_DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uStack_68 = func_0x03530158(param_3,0);
                                plStack_b8 = (long *)0x0;
                                plStack_b0 = (long *)0x0;
                                func_0x028866e4(&plStack_b8,&uStack_68,_DAT_05a28018);
                                plVar39 = plStack_b8;
                                plVar35 = plStack_b0;
                              }
                              param_1 = 0;
                              if (lVar26 != 0) {
                                func_0x03753f18(lVar26,plVar39,plVar35,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar22 < 1) {
                          return (char *)0x0;
                        }
                        lVar26 = func_0x036d5ec8(param_1);
                        if (lVar26 != 0) {
                          *(uint *)(lVar26 + 0x38) = uVar23;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar26 = func_0x036d5e58(param_1);
              auVar16._8_8_ = auStack_a8._8_8_;
              auVar16._0_8_ = auStack_a8._0_8_;
              auVar10._8_8_ = auStack_98._8_8_;
              auVar10._0_8_ = auStack_98._0_8_;
              auVar4._8_8_ = auStack_88._8_8_;
              auVar4._0_8_ = auStack_88._0_8_;
              if ((lVar26 != 0) &&
                 (auStack_88 = auVar4, auStack_98 = auVar10, auStack_a8 = auVar16,
                 plVar30 != (long *)0x0)) {
                lVar40 = *plVar30;
                unaff_x26 = *(long **)(lVar26 + 0x28);
                uVar25 = (ulong)*(ushort *)(lVar40 + 0x12e);
                if (uVar25 != 0) {
                  piVar43 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar43 + -2) == _DAT_059deb70) {
                      puVar29 = (undefined8 *)(lVar40 + (long)(*piVar43 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar25 = uVar25 - 1;
                    piVar43 = piVar43 + 4;
                  } while (uVar25 != 0);
                }
                plVar35 = (long *)0x3;
                puVar29 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dc3f8:
                uVar25 = (*(code *)*puVar29)(plVar30,puVar29[1]);
                if (unaff_x26 != (long *)0x0) {
                  plVar35 = (long *)(uVar25 & 0xffffffff);
                  plVar37 = (long *)0x0;
                  uVar21 = func_0x03700d78(unaff_x26,unaff_x25);
                  if (uVar21 == uVar23) {
                    lVar26 = *plVar30;
                    uVar25 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar25 != 0) {
                      piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar43 + -2) == _DAT_059deb70) {
                          puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar25 = uVar25 - 1;
                        piVar43 = piVar43 + 4;
                      } while (uVar25 != 0);
                    }
                    plVar35 = (long *)0x2;
                    puVar29 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dc760:
                    plVar30 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
                    lVar26 = func_0x036d5e58(param_1);
                    if (lVar26 != 0) {
                      unaff_x25 = *(long **)(lVar26 + 0x18);
                      plVar39 = (long *)func_0x03530c84(param_3,0);
                      if (plVar30 != (long *)0x0) {
                        lVar26 = *plVar30;
                        uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
                        if (uVar42 != 0) {
                          piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar43 + -2) == _DAT_059deb60) {
                              puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar42 = uVar42 - 1;
                            piVar43 = piVar43 + 4;
                          } while (uVar42 != 0);
                        }
                        puVar29 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar29)(plVar30,unaff_x25,param_2,plVar39,puVar29[1]);
                        func_0x037275b8(param_1,param_3,1,0);
                        func_0x03727828(param_1,param_2,param_3,0);
                        plVar35 = (long *)(ulong)((uint)param_4 & 1);
                        plVar37 = (long *)(ulong)((uint)param_5 & 1);
                        uVar42 = 0;
                        uVar23 = func_0x036fa00c(param_1,param_2);
                        param_2 = (long *)(ulong)uVar23;
                        lVar26 = func_0x036d5e58(param_1);
                        auVar17._8_8_ = auStack_a8._8_8_;
                        auVar17._0_8_ = auStack_a8._0_8_;
                        auVar11._8_8_ = auStack_98._8_8_;
                        auVar11._0_8_ = auStack_98._0_8_;
                        auVar5._8_8_ = auStack_88._8_8_;
                        auVar5._0_8_ = auStack_88._0_8_;
                        unaff_x26 = plVar39;
                        if ((lVar26 != 0) &&
                           (auStack_88 = auVar5, auStack_98 = auVar11, auStack_a8 = auVar17,
                           *(long *)(lVar26 + 0x18) != 0)) {
                          auStack_88 = func_0x03753e70(*(long *)(lVar26 + 0x18),0);
                          lVar26 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                            lVar26 = func_0x024d8f40();
                          }
                          pcVar27 = (char *)func_0x0249f90c(auStack_88,
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar26 + 0xc0) + 8
                                                                       ) + 0x80));
                          uVar31 = auStack_88._8_8_;
                          uVar28 = auStack_88._0_8_;
                          if ((uVar23 & *pcVar27 != '\0') == 0) {
                            uStack_68 = func_0x03530c84(param_3,0);
                            plStack_b8 = (long *)0x0;
                            plStack_b0 = (long *)0x0;
                            func_0x028866e4(&plStack_b8,&uStack_68,_DAT_05a27fa0);
                            uVar42 = 0;
                            plVar35 = plStack_b8;
                            plVar37 = plStack_b0;
                            auVar46 = func_0x03489150(uVar28,uVar31);
                          }
                          else {
                            uStack_68 = func_0x03530c84(param_3,0);
                            plStack_b8 = (long *)0x0;
                            plStack_b0 = (long *)0x0;
                            plVar35 = _DAT_05a27fa0;
                            func_0x028866e4(&plStack_b8,&uStack_68);
                            auVar46._8_8_ = plStack_b0;
                            auVar46._0_8_ = plStack_b8;
                          }
                          uVar44 = auVar46._8_8_;
                          param_2 = auVar46._0_8_;
                          lVar26 = func_0x036d5e58(param_1);
                          if (lVar26 != 0) {
                            param_3 = *(long *)(lVar26 + 0x18);
                            lVar26 = *(long *)(_DAT_05a27fc8 + 0x20);
                            auStack_98 = auVar46;
                            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                              lVar26 = func_0x024d8f40();
                            }
                            pcVar27 = (char *)func_0x0249f90c(auStack_98,
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar26 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar27 == '\0') {
                              plVar35 = (long *)0x0;
                              plVar39 = (long *)0x0;
                            }
                            else {
                              param_2 = (long *)func_0x023f3ca0(auStack_98,_DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uStack_68 = func_0x03530158(param_2,0);
                              plStack_b8 = (long *)0x0;
                              plStack_b0 = (long *)0x0;
                              func_0x028866e4(&plStack_b8,&uStack_68,_DAT_05a28018);
                              plVar39 = plStack_b8;
                              plVar35 = plStack_b0;
                            }
                            if (param_3 != 0) {
                              plVar37 = (long *)0x0;
                              func_0x03753f18(param_3,plVar39);
                              lVar26 = func_0x036d5e58(param_1);
                              auVar18._8_8_ = auStack_a8._8_8_;
                              auVar18._0_8_ = auStack_a8._0_8_;
                              if ((lVar26 != 0) &&
                                 (auStack_a8 = auVar18, *(long *)(lVar26 + 0x18) != 0)) {
                                func_0x03754328(*(long *)(lVar26 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    unaff_x26 = (long *)(ulong)uVar21;
                    if ((int)uVar21 < 1) {
                      return (char *)0x0;
                    }
                    lVar26 = func_0x036d5ec8(param_1);
                    if (lVar26 != 0) {
                      func_0x03754330(lVar26,unaff_x26,0);
                      return (char *)0x1;
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
  lStack_d0 = 0x36dcaf8;
  lVar26 = func_0x036d5e58();
  if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x18), lVar26 != 0)) {
    uStack_f0 = lStack_d0;
    uStack_e0 = uVar44;
    plStack_d8 = param_2;
    lStack_d0 = param_3;
    lStack_c8 = param_1;
    if ((bRam0000000005e2de5c & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de5c = 1;
    }
    lVar40 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar40 + 0x135) & 1) == 0) {
      lVar40 = func_0x024d8f40();
    }
    pcVar27 = (char *)func_0x0249f90c(lVar26 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80));
    if (*pcVar27 != '\0') {
      func_0x02886844(lVar26 + 0x50,&pcStack_e8,_DAT_05a27fd0);
      pcVar27 = pcStack_e8;
      uVar28 = *(undefined8 *)(lVar26 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar42 = func_0x0430deb0(pcVar27,uVar28,0);
      if ((uVar42 & 1) != 0) {
        func_0x02886844(lVar26 + 0x50,&pcStack_e8,_DAT_05a27fd0);
        return pcStack_e8;
      }
    }
    return *(char **)(lVar26 + 0x28);
  }
  auVar48 = func_0x0249fb90();
  pcStack_e8 = auVar48._8_8_;
  uVar28 = auVar48._0_8_;
  uStack_f0 = 0x36dcb1c;
  uStack_e0 = param_3;
  plStack_d8 = (long *)param_1;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar26 = func_0x036d5e58(uVar28);
  if (lVar26 != 0) {
    lVar26 = *(long *)(lVar26 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar31 = func_0x0352eeec(&pcStack_e8,0);
    uVar28 = 0;
    if (lVar26 != 0) {
      pcVar27 = (char *)func_0x03753bf0(lVar26,uVar31,0);
      return pcVar27;
    }
  }
  func_0x0249fb90();
  uStack_100 = 0x36dcba8;
  uStack_f8 = uVar28;
  lVar26 = func_0x036d5e58();
  if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x18), lVar26 != 0)) {
    plStack_130 = (long *)uStack_100;
    uStack_100 = 0x5e2d000;
    plStack_140 = extraout_x1;
    plStack_128 = unaff_x25;
    plStack_120 = plVar30;
    plStack_118 = (long *)uVar45;
    uStack_110 = uVar44;
    plStack_108 = param_2;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    plStack_150 = (long *)0x0;
    plStack_148 = (long *)0x0;
    uVar42 = func_0x0375309c(lVar26);
    if ((uVar42 & 1) != 0) {
      plStack_148 = *(long **)(lVar26 + 0x68);
      plStack_150 = *(long **)(lVar26 + 0x60);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar28 = func_0x0352eeec(&plStack_140,0);
      lVar40 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar40 + 0x135) & 1) == 0) {
        lVar40 = func_0x024d8f40(lVar40);
      }
      pcVar27 = (char *)func_0x0249f90c(&plStack_150,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80));
      lVar40 = _DAT_05a27fb0;
      if (*pcVar27 == '\0') {
        plVar37 = (long *)0x0;
        plVar35 = (long *)0x0;
      }
      else {
        lVar41 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar41 + 0x135);
        lVar33 = lVar41;
        if ((uVar1 & 1) == 0) {
          lVar41 = func_0x024d8f40(lVar41);
          uVar1 = *(ushort *)(*(long *)(lVar40 + 0x20) + 0x135);
          lVar33 = *(long *)(lVar40 + 0x20);
        }
        uVar24 = *(undefined4 *)(**(long **)(lVar41 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar33 = func_0x024d8f40(lVar33);
        }
        uVar31 = func_0x0249f90c(&plStack_150,
                                 *(long *)(*(long *)(*(long *)(lVar33 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&plStack_160,uVar31,uVar24);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plStack_138 = (long *)func_0x0430d994(plStack_160,uVar28,0);
        plStack_160 = (long *)0x0;
        plStack_158 = (long *)0x0;
        func_0x028866e4(&plStack_160,&plStack_138,_DAT_05a27fa0);
        plVar37 = plStack_160;
        plVar35 = plStack_158;
      }
      *(long **)(lVar26 + 0x68) = plVar35;
      *(long **)(lVar26 + 0x60) = plVar37;
    }
    lVar40 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar40 + 0x135) & 1) == 0) {
      lVar40 = func_0x024d8f40();
    }
    pcVar27 = (char *)func_0x0249f90c(lVar26 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80));
    if (*pcVar27 != '\0') {
      func_0x02886844(lVar26 + 0x18,&plStack_160,_DAT_05a27fd0);
      plVar37 = plStack_160;
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar28 = func_0x0352eeec(&plStack_140,0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      plStack_138 = (long *)func_0x0430d994(plVar37,uVar28,0);
      plStack_160 = (long *)0x0;
      plStack_158 = (long *)0x0;
      pcVar27 = (char *)func_0x028866e4(&plStack_160,&plStack_138,_DAT_05a27fa0);
      *(long **)(lVar26 + 0x20) = plStack_158;
      *(long **)(lVar26 + 0x18) = plStack_160;
    }
    return pcVar27;
  }
  auVar48 = func_0x0249fb90();
  plVar34 = auVar48._8_8_;
  lVar26 = auVar48._0_8_;
  plStack_160 = (long *)0x36dcbd4;
  uStack_110 = 0x5e2d000;
  plVar36 = plVar35;
  plVar39 = plVar37;
  uVar25 = uVar42;
  plVar38 = param_6;
  plStack_150 = unaff_x28;
  plStack_148 = (long *)unaff_x27;
  plStack_140 = unaff_x26;
  plStack_138 = unaff_x25;
  plStack_130 = plVar30;
  plStack_128 = (long *)uVar45;
  plStack_120 = (long *)uVar44;
  plStack_118 = param_2;
  plStack_108 = extraout_x1;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar34 != (long *)0x0) {
    lVar40 = *plVar34;
    uVar44 = (ulong)*(ushort *)(lVar40 + 0x12e);
    if (uVar44 != 0) {
      piVar43 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
      do {
        if (*(long *)(piVar43 + -2) == _DAT_059df8e8) {
          puVar29 = (undefined8 *)(lVar40 + (long)(*piVar43 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar44 = uVar44 - 1;
        piVar43 = piVar43 + 4;
      } while (uVar44 != 0);
    }
    plVar36 = (long *)0x5;
    puVar29 = (undefined8 *)func_0x024d927c(plVar34);
LAB_036dccc4:
    uVar28 = (*(code *)*puVar29)(plVar34,puVar29[1]);
    plVar30 = *(long **)(lVar26 + 0x10);
    if (plVar30 != (long *)0x0) {
      plVar30 = (long *)(**(code **)(*plVar30 + 0x1c8))
                                  (plVar30,uVar28,*(undefined8 *)(*plVar30 + 0x1d0));
      pcVar27 = (char *)0x0;
      if (plVar30 != (long *)0x0) {
        plVar36 = (long *)0x0;
        uVar44 = func_0x036edd98(lVar26,uVar28);
        if ((uVar44 & 1) != 0) {
          lVar26 = *plVar30;
          uVar44 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar44 != 0) {
            piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar43 + -2) == _DAT_059dfbc0) {
                puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar44 = uVar44 - 1;
              piVar43 = piVar43 + 4;
            } while (uVar44 != 0);
          }
          plVar36 = (long *)0x19;
          puVar29 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dce14:
          plVar32 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
          if (plVar32 != (long *)0x0) {
            lVar26 = *plVar32;
            uVar44 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar44 != 0) {
              piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar43 + -2) == _DAT_059e0150) {
                  puVar29 = (undefined8 *)(lVar26 + (long)*piVar43 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar44 = uVar44 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar44 != 0);
            }
            plVar36 = (long *)0x0;
            puVar29 = (undefined8 *)func_0x024d927c(plVar32);
LAB_036dce7c:
            uVar44 = (*(code *)*puVar29)(plVar32,puVar29[1]);
            if ((uVar44 & 1) == 0) {
LAB_036dcf40:
              lVar26 = *plVar30;
              uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar42 != 0) {
                piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == _DAT_059dfbc0) {
                    puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar42 = uVar42 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar42 != 0);
              }
              puVar29 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar30 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
              plStack_140 = plStack_160;
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar30 == (long *)0x0) {
                lVar26 = func_0x0249fb90();
                return *(char **)(lVar26 + 0x10);
              }
              lVar26 = *plVar30;
              uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar42 != 0) {
                piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == _DAT_059deb70) {
                    puVar29 = (undefined8 *)(lVar26 + (long)*piVar43 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar42 = uVar42 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar42 != 0);
              }
              puVar29 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059deb70,0);
LAB_03751b38:
              uVar28 = (*(code *)*puVar29)(plVar30,puVar29[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              plStack_150 = plVar35;
              plStack_148 = plVar37;
              func_0x0288f218(&plStack_150,&plStack_168,_DAT_05a29e48);
              plStack_178 = plStack_160;
              plStack_180 = plStack_168;
              plStack_170 = plStack_158;
              pcVar27 = (char *)func_0x0371f1bc(uVar28,plVar34,&plStack_180,param_7,0);
              return pcVar27;
            }
            if (plVar35 != (long *)0x0) {
              lVar26 = *plVar35;
              uVar44 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar44 != 0) {
                piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == _DAT_059defb8) {
                    puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar44 = uVar44 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar44 != 0);
              }
              puVar29 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059defb8,0xb);
LAB_036dcee8:
              plVar39 = (long *)puVar29[1];
              uVar42 = (*(code *)*puVar29)(plVar35,uVar42);
              if ((uVar42 & 1) == 0) goto LAB_036dcf40;
              lVar26 = *plVar30;
              uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar42 != 0) {
                piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == _DAT_059dfbc0) {
                    puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 0x19) * 0x10 + 0x138);
                    plVar36 = param_6;
                    goto LAB_036dcfe0;
                  }
                  uVar42 = uVar42 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar42 != 0);
              }
              plVar36 = (long *)0x19;
              puVar29 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dcfe0:
              plVar30 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
              if (plVar30 != (long *)0x0) {
                lVar26 = *plVar30;
                uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar42 != 0) {
                  piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar43 + -2) == _DAT_059e0150) {
                      puVar29 = (undefined8 *)(lVar26 + (long)(*piVar43 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar42 = uVar42 - 1;
                    piVar43 = piVar43 + 4;
                  } while (uVar42 != 0);
                }
                puVar29 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar27 = (char *)(*(code *)*puVar29)(plVar30,plVar34,plVar35,plVar37,param_7,
                                                      puVar29[1]);
                return pcVar27;
              }
            }
          }
          goto LAB_036dd07c;
        }
        plVar36 = (long *)0x0;
        uVar42 = func_0x036edf9c(lVar26,uVar28);
        pcVar27 = (char *)0x0;
        if ((uVar42 & 1) != 0) {
          lVar26 = func_0x036d5e58(lVar26);
          if ((lVar26 == 0) || (*(long *)(lVar26 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar28 = *(undefined8 *)(*(long *)(lVar26 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          plStack_170 = plVar35;
          plStack_168 = plVar37;
          func_0x0288f218(&plStack_170,&uStack_188,_DAT_05a29e48);
          plStack_198 = plStack_180;
          uStack_1a0 = uStack_188;
          uStack_190 = plStack_178;
          pcVar27 = (char *)func_0x0371f1bc(uVar28,plVar34,&uStack_1a0,param_7,0);
        }
      }
      return pcVar27;
    }
  }
LAB_036dd07c:
  auVar48 = func_0x0249fb90();
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar27 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar27,0);
  pcVar27[0x10] = -2;
  pcVar27[0x11] = -1;
  pcVar27[0x12] = -1;
  pcVar27[0x13] = -1;
  uVar24 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar27 + 0x20) = uVar24;
  *(long *)(pcVar27 + 0x28) = auVar48._0_8_;
  func_0x0249f888(pcVar27 + 0x28,auVar48._0_8_);
  *(long *)(pcVar27 + 0x78) = auVar48._8_8_;
  func_0x0249f888(pcVar27 + 0x78,auVar48._8_8_);
  *(long **)(pcVar27 + 0x38) = plVar36;
  func_0x0249f888(pcVar27 + 0x38,plVar36);
  *(long **)(pcVar27 + 0x68) = plVar39;
  *(ulong *)(pcVar27 + 0x50) = uVar25;
  *(long **)(pcVar27 + 0x58) = plVar38;
  func_0x0249f888(pcVar27 + 0x50,0);
  return pcVar27;
}


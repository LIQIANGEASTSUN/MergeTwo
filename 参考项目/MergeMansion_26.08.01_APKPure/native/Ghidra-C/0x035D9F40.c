/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean CanBeMergedWithItem(GameLogic.Player.IPlayer player, GameLogic.Player.Items.MergeItem otherItem, GameLogic.Config.Types.MetacoreTime checkTimestamp)
 * Ghidra function entry: 036d9f40
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036d9f40(long *param_1,long *param_2,long *param_3,long *param_4,ulong param_5,
                   long *param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  uint uVar8;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar9;
  int iVar10;
  ulong uVar22;
  undefined *extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  int *piVar35;
  undefined *puVar36;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  undefined *unaff_x28;
  long *plVar37;
  undefined *unaff_x29;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 auStack_1d0 [2];
  long *plStack_1c0;
  long *plStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 auStack_190 [2];
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long alStack_160 [4];
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  plVar23 = param_3;
  plVar24 = param_4;
  if ((bRam0000000005e2da2c & 1) == 0) {
    func_0x0249f8e4(&DAT_059df188);
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2da2c = 1;
  }
  uStack_68 = 0;
  plVar16 = (long *)0x5e2d000;
  if (param_2 != (long *)0x0) {
    lVar27 = *param_2;
    uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_036da040;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    plVar23 = (long *)0x5;
    puVar13 = (undefined8 *)func_0x024d927c(param_2);
LAB_036da040:
    plVar14 = (long *)(*(code *)*puVar13)(param_2,puVar13[1]);
    plVar28 = (long *)param_1[2];
    if (plVar28 != (long *)0x0) {
      plVar23 = *(long **)(*plVar28 + 0x1d0);
      plVar28 = (long *)(**(code **)(*plVar28 + 0x1c8))(plVar28,plVar14);
      plVar16 = plVar14;
      if ((param_3 != (long *)0x0) &&
         (plVar15 = (long *)param_3[2], unaff_x23 = plVar28, plVar15 != (long *)0x0)) {
        plVar23 = *(long **)(*plVar15 + 0x1d0);
        plVar15 = (long *)(**(code **)(*plVar15 + 0x1c8))(plVar15,plVar14);
        if (plVar28 != (long *)0x0) {
          lVar27 = *plVar28;
          unaff_x29 = &DAT_059dfbc0;
          uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 2) * 0x10 + 0x138);
                goto LAB_036da0ec;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar13 = (undefined8 *)func_0x024d927c(plVar28,_DAT_059dfbc0,2);
LAB_036da0ec:
          unaff_x27 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
          plVar23 = (long *)0x0;
          uVar34 = func_0x036eb114(param_1,plVar14);
          unaff_x24 = plVar15;
          if ((uVar34 & 1) == 0) {
            uStack_6c = 0;
          }
          else {
            lVar27 = func_0x036d5e58(param_1);
            if ((lVar27 == 0) || (unaff_x25 = *(long **)(lVar27 + 0x38), unaff_x25 == (long *)0x0))
            goto LAB_036da728;
            lVar27 = *unaff_x25;
            uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar34 != 0) {
              piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == _DAT_059df188) {
                  puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
                  goto LAB_036da184;
                }
                uVar34 = uVar34 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar34 != 0);
            }
            puVar13 = (undefined8 *)func_0x024d927c(unaff_x25,_DAT_059df188,5);
LAB_036da184:
            uStack_6c = (*(code *)*puVar13)(unaff_x25,param_4,puVar13[1]);
          }
          plVar23 = (long *)0x0;
          uVar34 = func_0x036eb114(param_3,plVar14);
          if ((uVar34 & 1) == 0) {
            param_4 = (long *)0x0;
LAB_036da234:
            if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            unaff_x25 = (long *)&DAT_059dfe38;
            uVar8 = func_0x036c0cb8(plVar15);
            unaff_x28 = (undefined *)(ulong)uVar8;
            if (unaff_x27 != (long *)0x0) {
              lVar27 = *unaff_x27;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfe38) {
                    puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                    goto LAB_036da2b0;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar23 = (long *)0x0;
              puVar13 = (undefined8 *)func_0x024d927c(unaff_x27);
LAB_036da2b0:
              plVar37 = (long *)(*(code *)*puVar13)(unaff_x27,puVar13[1]);
              if (plVar37 == (long *)0x0) goto LAB_036da728;
              lVar27 = *plVar37;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfe68) {
                    puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                    goto LAB_036da318;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar37,_DAT_059dfe68,0);
LAB_036da318:
              param_5 = puVar13[1];
              plVar23 = param_3;
              plVar24 = plVar14;
              uVar34 = (*(code *)*puVar13)(plVar37,param_1,param_3,plVar14);
              if ((uVar34 & 1) == 0) {
                unaff_x27 = (long *)0x0;
              }
              else {
                unaff_x27 = (long *)(ulong)(uStack_6c & (uint)param_4 ^ 1);
              }
            }
            if ((uVar8 & ((uint)unaff_x27 ^ 0xffffffff) & 1) == 0) {
LAB_036da49c:
              lVar27 = *plVar28;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0x12) * 0x10 + 0x138);
                    goto LAB_036da4ec;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar23 = (long *)0x12;
              puVar13 = (undefined8 *)func_0x024d927c(plVar28);
LAB_036da4ec:
              plVar37 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
              unaff_x24 = plVar15;
              if (plVar37 != (long *)0x0) {
                lVar27 = *plVar37;
                unaff_x25 = (long *)&DAT_059df2a8;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059df2a8) {
                      puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                      goto LAB_036da554;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                plVar23 = (long *)0x0;
                puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036da554:
                uVar34 = (*(code *)*puVar13)(plVar37,puVar13[1]);
                if ((uVar34 & 1) == 0) {
joined_r0x036da5a4:
                  if (((ulong)unaff_x27 & 1) == 0) {
                    uVar8 = 0;
                  }
                  else {
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64();
                    }
                    uVar34 = func_0x036c69cc(plVar28,plVar14,&uStack_68);
                    uVar18 = uStack_68;
                    if ((uVar34 & 1) == 0) {
                      uVar8 = 1;
                    }
                    else {
                      if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                        func_0x0249fa64();
                      }
                      uVar8 = func_0x036c0a40(uVar18,param_2,0);
                    }
                  }
                  return (char *)(ulong)(uVar8 & 1);
                }
                lVar27 = *plVar28;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0x12) * 0x10 + 0x138);
                      goto LAB_036da614;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                plVar23 = (long *)0x12;
                puVar13 = (undefined8 *)func_0x024d927c(plVar28);
LAB_036da614:
                plVar15 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
                unaff_x24 = plVar37;
                if (plVar15 != (long *)0x0) {
                  lVar27 = *plVar15;
                  uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059df2a8) {
                        puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 1) * 0x10 + 0x138);
                        goto LAB_036da678;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  plVar23 = (long *)0x1;
                  puVar13 = (undefined8 *)func_0x024d927c(plVar15);
LAB_036da678:
                  plVar37 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
                  unaff_x24 = plVar15;
                  if (plVar37 != (long *)0x0) {
                    lVar27 = *plVar37;
                    uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar34 != 0) {
                      piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar35 + -2) == _DAT_059df2c0) {
                          puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 1) * 0x10 + 0x138);
                          goto LAB_036da6e4;
                        }
                        uVar34 = uVar34 - 1;
                        piVar35 = piVar35 + 4;
                      } while (uVar34 != 0);
                    }
                    puVar13 = (undefined8 *)func_0x024d927c(plVar37,_DAT_059df2c0,1);
LAB_036da6e4:
                    unaff_x27 = (long *)(*(code *)*puVar13)(plVar37,param_1,param_3,param_2,
                                                            puVar13[1]);
                    goto joined_r0x036da5a4;
                  }
                }
              }
            }
            else if (plVar15 != (long *)0x0) {
              lVar27 = *plVar15;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 2) * 0x10 + 0x138);
                    goto LAB_036da3a4;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar23 = (long *)0x2;
              puVar13 = (undefined8 *)func_0x024d927c(plVar15);
LAB_036da3a4:
              plVar37 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
              if (plVar37 != (long *)0x0) {
                lVar27 = *plVar37;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059dfe38) {
                      puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                      goto LAB_036da404;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                plVar23 = (long *)0x0;
                puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036da404:
                plVar15 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
                unaff_x24 = plVar37;
                if (plVar15 != (long *)0x0) {
                  lVar27 = *plVar15;
                  uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059dfe68) {
                        puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                        goto LAB_036da46c;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059dfe68,0);
LAB_036da46c:
                  param_5 = puVar13[1];
                  plVar23 = param_1;
                  plVar24 = plVar14;
                  uVar34 = (*(code *)*puVar13)(plVar15,param_3,param_1,plVar14);
                  if ((uVar34 & 1) == 0) {
                    unaff_x27 = (long *)0x0;
                  }
                  else {
                    unaff_x27 = (long *)(ulong)(uStack_6c & (uint)param_4 ^ 1);
                  }
                  goto LAB_036da49c;
                }
              }
            }
          }
          else {
            lVar27 = func_0x036d5e58(param_3);
            if (lVar27 != 0) {
              plVar37 = *(long **)(lVar27 + 0x38);
              unaff_x28 = (undefined *)0x0;
              if (plVar37 != (long *)0x0) {
                lVar27 = *plVar37;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059df188) {
                      puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
                      goto LAB_036da220;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar37,_DAT_059df188,5);
LAB_036da220:
                plVar23 = (long *)puVar13[1];
                uVar34 = (*(code *)*puVar13)(plVar37,param_4);
                param_4 = (long *)(uVar34 & 0xffffffff);
                goto LAB_036da234;
              }
            }
          }
        }
      }
    }
  }
LAB_036da728:
  auVar40 = func_0x0249fb90();
  plVar15 = auVar40._8_8_;
  plVar28 = auVar40._0_8_;
  uStack_b0 = 0x36da72c;
  puVar36 = (undefined *)0x5e2d000;
  plVar14 = plVar23;
  plStack_a0 = unaff_x24;
  plStack_98 = unaff_x23;
  plStack_90 = plVar16;
  plStack_88 = param_1;
  plStack_80 = param_3;
  plStack_78 = param_2;
  if ((bRam0000000005e2da2e & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df498);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da2e = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (plVar15 != (long *)0x0) {
    lVar27 = *plVar15;
    uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_036da820;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar13 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_036da820:
    puVar36 = (undefined *)(*(code *)*puVar13)(plVar15,puVar13[1]);
    plVar24 = (long *)0x0;
    plVar14 = plVar23;
    func_0x0371f100(&uStack_d0,plVar28,plVar23,0);
    plVar16 = (long *)plVar28[2];
    if (plVar16 != (long *)0x0) {
      plVar23 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                  (plVar16,puVar36,*(undefined8 *)(*plVar16 + 0x1d0));
      plVar14 = (long *)0x0;
      uVar34 = func_0x036ecc48(plVar28,puVar36);
      if ((uVar34 & 1) == 0) {
        if (plVar23 != (long *)0x0) {
          lVar27 = *plVar23;
          puVar36 = &DAT_059dfbc0;
          uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 1) * 0x10 + 0x138);
                goto LAB_036da988;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          plVar14 = (long *)0x1;
          puVar13 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036da988:
          plVar16 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
          if (plVar16 != (long *)0x0) {
            lVar27 = *plVar16;
            uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar34 != 0) {
              piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == _DAT_059df498) {
                  puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 2) * 0x10 + 0x138);
                  goto LAB_036daa84;
                }
                uVar34 = uVar34 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar34 != 0);
            }
            puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df498,2);
LAB_036daa84:
            plVar28 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
            unaff_x23 = (long *)&DAT_059d4248;
            uStack_c0 = uStack_d0;
            uStack_b8 = uStack_c8;
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              uStack_168 = uStack_c8;
              uStack_170 = uStack_d0;
              func_0x0249fa64(_DAT_059d4248);
              uStack_c0 = uStack_170;
              uStack_b8 = uStack_168;
            }
            unaff_x24 = (long *)&DAT_05a29e48;
            func_0x0288f218(&uStack_c0,&lStack_e8,_DAT_05a29e48);
            plVar14 = &lStack_120;
            plVar24 = (long *)0x0;
            param_5 = 0;
            uStack_118 = uStack_e0;
            lStack_120 = lStack_e8;
            uStack_110 = uStack_d8;
            pcVar17 = (char *)func_0x0371f1bc(plVar28,plVar15,plVar14,0);
            if (pcVar17 != (char *)0x0) {
              return pcVar17;
            }
            lVar27 = *plVar23;
            uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar34 != 0) {
              piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                  puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                  goto LAB_036dab68;
                }
                uVar34 = uVar34 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar34 != 0);
            }
            plVar14 = (long *)0x0;
            puVar13 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dab68:
            plVar16 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
            if (plVar16 != (long *)0x0) {
              lVar27 = *plVar16;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059e0788) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 4) * 0x10 + 0x138);
                    goto LAB_036dabd4;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar14 = (long *)0x4;
              puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dabd4:
              plVar37 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
              plVar28 = plVar16;
              if (plVar37 != (long *)0x0) {
                uVar18 = uStack_d0;
                uVar38 = uStack_c8;
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_168 = uStack_c8;
                  uStack_170 = uStack_d0;
                  func_0x0249fa64();
                  uVar18 = uStack_170;
                  uVar38 = uStack_168;
                }
                uStack_c0 = uVar18;
                uStack_b8 = uVar38;
                func_0x0288f218(&uStack_c0,&lStack_e8,_DAT_05a29e48);
                plVar14 = &lStack_140;
                plVar24 = (long *)0x0;
                param_5 = 0;
                uStack_138 = uStack_e0;
                lStack_140 = lStack_e8;
                uStack_130 = uStack_d8;
                pcVar17 = (char *)func_0x0371f1bc(plVar37,plVar15,plVar14,0);
                plVar28 = plVar37;
                if (pcVar17 != (char *)0x0) {
                  return pcVar17;
                }
              }
              lVar27 = *plVar23;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                    goto LAB_036dac94;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar14 = (long *)0x3;
              puVar13 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dac94:
              plVar16 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
              if (plVar16 != (long *)0x0) {
                lVar27 = *plVar16;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                      puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 4) * 0x10 + 0x138);
                      goto LAB_036dad00;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb70,4);
LAB_036dad00:
                lVar27 = (*(code *)*puVar13)(plVar16,puVar13[1]);
                if (lVar27 == 0) {
                  return (char *)0x0;
                }
                uVar18 = uStack_d0;
                uVar38 = uStack_c8;
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_168 = uStack_c8;
                  uStack_170 = uStack_d0;
                  func_0x0249fa64();
                  uVar18 = uStack_170;
                  uVar38 = uStack_168;
                }
                uStack_c0 = uVar18;
                uStack_b8 = uVar38;
                func_0x0288f218(&uStack_c0,&lStack_e8,_DAT_05a29e48);
                plVar23 = alStack_160;
                goto LAB_036daa5c;
              }
            }
          }
        }
      }
      else if (plVar23 != (long *)0x0) {
        lVar27 = *plVar23;
        uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar34 != 0) {
          piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
              puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 9) * 0x10 + 0x138);
              goto LAB_036da91c;
            }
            uVar34 = uVar34 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar34 != 0);
        }
        plVar14 = (long *)0x9;
        puVar13 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036da91c:
        plVar16 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
        if (plVar16 != (long *)0x0) {
          lVar27 = *plVar16;
          uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059e0158) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 4) * 0x10 + 0x138);
                goto LAB_036da9f4;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0158,4);
LAB_036da9f4:
          lVar27 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          if (lVar27 == 0) {
            return (char *)0x0;
          }
          uStack_c0 = uStack_d0;
          uStack_b8 = uStack_c8;
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            uStack_168 = uStack_c8;
            uStack_170 = uStack_d0;
            func_0x0249fa64();
            uStack_c0 = uStack_170;
            uStack_b8 = uStack_168;
          }
          func_0x0288f218(&uStack_c0,&lStack_e8,_DAT_05a29e48);
          plVar23 = &lStack_100;
          uStack_f8 = uStack_e0;
          lStack_100 = lStack_e8;
          uStack_f0 = uStack_d8;
LAB_036daa5c:
          pcVar17 = (char *)func_0x0371f1bc(lVar27,plVar15,plVar23,0,0);
          return pcVar17;
        }
      }
    }
  }
  plVar16 = (long *)func_0x0249fb90();
  auStack_190[0] = 0x36dad60;
  plStack_180 = plVar23;
  plStack_178 = plVar15;
  if ((bRam0000000005e2da4a & 1) == 0) {
    func_0x0249f8e4(&DAT_059dd500);
    bRam0000000005e2da4a = 1;
  }
  lVar27 = func_0x036d5e58(plVar16);
  if (lVar27 != 0) {
    if (*(long *)(lVar27 + 0x40) == 0) {
      if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      if (cRam0000000005e27391 == '\0') {
        func_0x0249f8e4(&DAT_059dd500);
        cRam0000000005e27391 = '\x01';
      }
      if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      pcVar17 = (char *)0x10000;
    }
    else {
      pcVar17 = (char *)(ulong)*(uint *)(*(long *)(lVar27 + 0x40) + 0x10);
    }
    return pcVar17;
  }
  auVar40 = func_0x0249fb90();
  plVar23 = auVar40._0_8_;
  puStack_1b0 = (undefined *)0x36dae04;
  plStack_1a0 = (long *)0x5e2d000;
  plStack_1a8 = plVar28;
  plStack_198 = plVar16;
  plVar16 = (long *)func_0x03530c84(auVar40._8_8_,0);
  puVar7 = auStack_1d0;
  auStack_1d0[0] = puStack_1b0;
  plVar28 = (long *)0x5e2d000;
  plStack_1c0 = unaff_x24;
  plStack_1b8 = unaff_x23;
  puStack_1b0 = puVar36;
  if ((bRam0000000005e2da30 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2da30 = 1;
  }
  plVar15 = (long *)&DAT_059e2c00;
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar37 = plVar23;
  func_0x0364aa28(plVar14,plVar24,plVar23,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar18 = func_0x03530158(plVar16,0);
  auVar40._8_8_ = uVar18;
  auVar40._0_8_ = plVar23;
  if (extraout_x1 == (undefined *)0x0) {
    uVar34 = 1;
    if (plVar23 == (long *)0x0) goto LAB_036daf14;
LAB_036daef0:
    puVar7 = auStack_190;
    plVar37 = plVar14;
    plVar14 = plStack_198;
    plVar23 = plStack_1a0;
    plVar16 = plStack_1a8;
    puVar36 = puStack_1b0;
    plVar15 = plStack_1b8;
    plVar28 = plStack_1c0;
    uVar18 = auStack_1d0[0];
  }
  else {
    uVar34 = (ulong)*(uint *)(extraout_x1 + 0x1c);
    if (plVar23 != (long *)0x0) goto LAB_036daef0;
LAB_036daf14:
    uVar18 = 0x36daf18;
    auVar40 = func_0x0249fb90();
    puVar36 = extraout_x1;
  }
  plVar31 = auVar40._8_8_;
  lVar27 = auVar40._0_8_;
  *(undefined8 *)((long)puVar7 + -0x50) = uVar18;
  *(long **)((long)puVar7 + -0x40) = param_4;
  *(long **)((long)puVar7 + -0x38) = unaff_x25;
  *(long **)((long)puVar7 + -0x30) = plVar28;
  *(long **)((long)puVar7 + -0x28) = plVar15;
  *(undefined **)((long)puVar7 + -0x20) = puVar36;
  *(long **)((long)puVar7 + -0x18) = plVar16;
  *(long **)((long)puVar7 + -0x10) = plVar23;
  *(long **)((long)puVar7 + -8) = plVar14;
  plVar24 = (long *)(uVar34 & 0xffffffff);
  plVar23 = plVar37;
  if ((bRam0000000005e2da31 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_05a27ed8);
    func_0x0249f8e4(&DAT_05a27fa0);
    func_0x0249f8e4(&DAT_05a27ee0);
    func_0x0249f8e4(&DAT_05a29960);
    func_0x0249f8e4(&DAT_059d3fd0);
    bRam0000000005e2da31 = 1;
  }
  *(undefined8 *)((long)puVar7 + -0x60) = 0;
  *(undefined8 *)((long)puVar7 + -0x58) = 0;
  *(undefined8 *)((long)puVar7 + -0x70) = 0;
  *(undefined8 *)((long)puVar7 + -0x68) = 0;
  *(undefined8 *)((long)puVar7 + -0x78) = 0;
  uVar19 = 0x5e2d000;
  if (plVar37 != (long *)0x0) {
    lVar29 = *plVar37;
    uVar34 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_036db040;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar13 = (undefined8 *)func_0x024d927c(plVar37,_DAT_059df8e8,5);
LAB_036db040:
    uVar19 = (*(code *)*puVar13)(plVar37,puVar13[1]);
    uVar34 = 0;
    uVar20 = func_0x036ee328(lVar27,plVar37,plVar24);
    if ((uVar20 & 1) == 0) {
      return (char *)0x0;
    }
    uVar20 = func_0x036ed7f4(lVar27,uVar19,0);
    if ((uVar20 & 1) != 0) {
      return (char *)0x2;
    }
    plVar23 = (long *)0x0;
    uVar20 = func_0x036edd98(lVar27,uVar19);
    if ((uVar20 & 1) == 0) {
      plVar23 = (long *)0x0;
      uVar20 = func_0x036edf9c(lVar27,uVar19);
      if ((uVar20 & 1) == 0) {
        return (char *)0x0;
      }
      lVar27 = func_0x036d5e58(lVar27);
      if ((lVar27 != 0) && (*(long *)(lVar27 + 0xa8) != 0)) {
        plVar16 = *(long **)(*(long *)(lVar27 + 0xa8) + 0x10);
        auVar41._8_8_ = 0;
        auVar41._0_8_ = plVar31;
        auVar40 = auVar41 << 0x40;
        if (plVar16 != (long *)0x0) {
          lVar27 = *plVar16;
          uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059e0170) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 4) * 0x10 + 0x138);
                goto LAB_036db338;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0170,4);
LAB_036db338:
          uVar34 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          uVar8 = 1;
          if ((uVar34 & 1) != 0) {
            uVar8 = 2;
          }
          return (char *)(ulong)uVar8;
        }
      }
    }
    else {
      plVar16 = *(long **)(lVar27 + 0x10);
      if (plVar16 != (long *)0x0) {
        plVar37 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                    (plVar16,uVar19,*(undefined8 *)(*plVar16 + 0x1d0));
        plVar23 = (long *)0x0;
        uVar34 = 0;
        func_0x037275b8(lVar27,plVar31);
        lVar29 = func_0x036d5e58(lVar27);
        if ((lVar29 != 0) && (*(long *)(lVar29 + 0x28) != 0)) {
          plVar23 = (long *)0x0;
          func_0x03700cf4(*(long *)(lVar29 + 0x28),plVar24);
          if (plVar37 != (long *)0x0) {
            lVar29 = *plVar37;
            plVar28 = (long *)&DAT_059dfbc0;
            uVar20 = (ulong)*(ushort *)(lVar29 + 0x12e);
            if (uVar20 != 0) {
              piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                  puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                  goto LAB_036db1dc;
                }
                uVar20 = uVar20 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar20 != 0);
            }
            plVar23 = (long *)0x3;
            puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036db1dc:
            plVar16 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
            if (plVar16 != (long *)0x0) {
              lVar29 = *plVar16;
              unaff_x25 = (long *)&DAT_059deb70;
              uVar20 = (ulong)*(ushort *)(lVar29 + 0x12e);
              if (uVar20 != 0) {
                piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                    puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 2) * 0x10 + 0x138);
                    goto LAB_036db248;
                  }
                  uVar20 = uVar20 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar20 != 0);
              }
              plVar23 = (long *)0x2;
              puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036db248:
              plVar24 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
              lVar29 = func_0x036d5e58(lVar27);
              if (((lVar29 != 0) && (*(long *)(lVar29 + 0x18) != 0)) &&
                 (uVar20 = func_0x037537dc(*(long *)(lVar29 + 0x18),0), plVar24 != (long *)0x0)) {
                lVar29 = *plVar24;
                param_4 = (long *)&DAT_059deb60;
                uVar19 = (ulong)*(ushort *)(lVar29 + 0x12e);
                if (uVar19 != 0) {
                  piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059deb60) {
                      puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 0x12) * 0x10 + 0x138);
                      goto LAB_036db2d4;
                    }
                    uVar19 = uVar19 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar19 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059deb60,0x12);
LAB_036db2d4:
                plVar23 = (long *)puVar13[1];
                uVar21 = (*(code *)*puVar13)(plVar24,uVar20 & 0xffffffff);
                uVar19 = uVar20;
                if ((uVar21 & 1) != 0) {
                  lVar29 = *plVar24;
                  uVar20 = (ulong)*(ushort *)(lVar29 + 0x12e);
                  if (uVar20 != 0) {
                    piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059deb60) {
                        puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                        goto LAB_036db364;
                      }
                      uVar20 = uVar20 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059deb60,3);
LAB_036db364:
                  auVar41 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                  *(undefined1 (*) [16])((long)puVar7 + -0x68) = auVar41;
                  if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                    func_0x0249fa64();
                  }
                  plVar23 = _DAT_05a29960;
                  uVar20 = func_0x0288eda8((undefined1 *)((long)puVar7 + -0x68),
                                           (undefined1 *)((long)puVar7 + -0x58));
                  if ((uVar20 & 1) != 0) {
                    lVar29 = func_0x036d5e58(lVar27);
                    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x18) == 0)) goto LAB_036db604;
                    uVar34 = 0;
                    plVar23 = plVar31;
                    func_0x03754988(*(long *)(lVar29 + 0x18),*(undefined8 *)((long)puVar7 + -0x58));
                  }
                }
                iVar9 = func_0x036fa7dc(lVar27,0);
                if (0 < iVar9) {
                  return (char *)0x1;
                }
                lVar29 = *plVar37;
                uVar20 = (ulong)*(ushort *)(lVar29 + 0x12e);
                if (uVar20 != 0) {
                  piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                      goto LAB_036db434;
                    }
                    uVar20 = uVar20 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar20 != 0);
                }
                plVar23 = (long *)0x3;
                puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036db434:
                plVar16 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
                if (plVar16 != (long *)0x0) {
                  lVar29 = *plVar16;
                  uVar20 = (ulong)*(ushort *)(lVar29 + 0x12e);
                  if (uVar20 != 0) {
                    piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                        puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 0xe) * 0x10 + 0x138);
                        goto LAB_036db498;
                      }
                      uVar20 = uVar20 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb70,0xe);
LAB_036db498:
                  uVar20 = (*(code *)*puVar13)(plVar16,puVar13[1]);
                  if ((uVar20 & 1) == 0) {
                    return (char *)0x1;
                  }
                  plVar23 = plVar37;
                  plVar14 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                  plVar24 = plVar16;
                  if ((plVar14 != (long *)0x0) &&
                     (plVar16 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar23 = plVar14,
                     plVar16 != (long *)0x0)) {
                    uVar20 = func_0x022bffa8(0,_DAT_059deb60);
                    plVar24 = (long *)(uVar20 & 0xffffffff);
                    lVar29 = func_0x036d5ec8(lVar27);
                    plVar23 = plVar16;
                    if (lVar29 != 0) {
                      uVar20 = func_0x0375380c(lVar29,plVar24,0);
                      if ((uVar20 & 1) != 0) {
                        return (char *)0x1;
                      }
                      plVar23 = plVar37;
                      lVar29 = func_0x022bffa8(3,_DAT_059dfbc0);
                      if (lVar29 != 0) {
                        uVar20 = func_0x022bffa8(0x10,_DAT_059deb70,lVar29);
                        if ((uVar20 & 1) == 0) {
                          return (char *)0x2;
                        }
                        lVar27 = func_0x036d5ec8(lVar27);
                        uVar18 = func_0x03530c84(plVar31,0);
                        auVar2._8_8_ = uVar18;
                        auVar2._0_8_ = lVar27;
                        auVar40._8_8_ = uVar18;
                        auVar40._0_8_ = lVar27;
                        plVar23 = plVar37;
                        plVar16 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                        if (plVar16 != (long *)0x0) {
                          auVar40 = func_0x022bffa8(0xc,_DAT_059deb70);
                          *(undefined1 (*) [16])((long)puVar7 + -0x78) = auVar40;
                          uVar20 = func_0x022bf4f8((undefined1 *)((long)puVar7 + -0x78),
                                                   _DAT_05a27ee0);
                          uVar38 = 0;
                          uVar39 = 0;
                          if ((uVar20 & 1) != 0) {
                            plVar37 = (long *)func_0x023f3ca0((undefined1 *)((long)puVar7 + -0x78),
                                                              _DAT_05a27ed8);
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64(_DAT_059e2ba0);
                            }
                            uVar18 = func_0x0430d994(uVar18,plVar37,0);
                            *(undefined8 *)((long)puVar7 + -0x48) = uVar18;
                            *(undefined8 *)((long)puVar7 + -0x90) = 0;
                            *(undefined8 *)((long)puVar7 + -0x88) = 0;
                            plVar16 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)puVar7 + -0x90),
                                            (undefined1 *)((long)puVar7 + -0x48));
                            uVar39 = *(undefined8 *)((long)puVar7 + -0x88);
                            uVar38 = *(undefined8 *)((long)puVar7 + -0x90);
                          }
                          plVar23 = plVar16;
                          auVar40 = auVar2;
                          if (lVar27 != 0) {
                            *(undefined8 *)(lVar27 + 0x68) = uVar39;
                            *(undefined8 *)(lVar27 + 0x60) = uVar38;
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
      }
    }
  }
LAB_036db604:
  auVar41 = func_0x0249fb90();
  lVar27 = auVar41._0_8_;
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x36db608;
  *(long **)((long)puVar7 + -0xd0) = param_4;
  *(long **)((long)puVar7 + -200) = unaff_x25;
  *(long **)((long)puVar7 + -0xc0) = plVar28;
  *(ulong *)((long)puVar7 + -0xb8) = uVar19;
  *(long **)((long)puVar7 + -0xb0) = plVar24;
  *(long **)((long)puVar7 + -0xa8) = plVar37;
  *(long *)((long)puVar7 + -0xa0) = auVar40._8_8_;
  *(long *)((long)puVar7 + -0x98) = auVar40._0_8_;
  plVar15 = (long *)0x5e2d000;
  plVar28 = (long *)(param_5 & 0xffffffff);
  puVar36 = (undefined *)(uVar34 & 0xffffffff);
  plVar24 = (long *)(auVar41._8_8_ & 0xffffffff);
  plVar16 = plVar23;
  uVar19 = uVar34;
  uVar20 = param_5;
  plVar14 = param_6;
  if ((bRam0000000005e2da32 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e2548);
    bRam0000000005e2da32 = 1;
  }
  *(int *)param_6 = 0;
  plVar37 = plVar23;
  if (plVar23 == (long *)0x0) {
LAB_036dbb68:
    uVar18 = 0x36dbb6c;
    auVar42 = func_0x0249fb90();
    plVar23 = plVar16;
  }
  else {
    lVar29 = *plVar23;
    uVar19 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar19 != 0) {
      piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar19 = uVar19 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df8e8,5);
LAB_036db6f0:
    plVar15 = (long *)(*(code *)*puVar13)(plVar23,puVar13[1]);
    uVar19 = func_0x036edd98(lVar27,plVar15,0);
    if (((uVar19 & 1) == 0) && (uVar19 = func_0x036edf9c(lVar27,plVar15,0), (uVar19 & 1) == 0)) {
      return (char *)0x0;
    }
    iVar9 = (int)uVar34;
    uVar8 = iVar9 * auVar41._8_4_;
    param_4 = (long *)(ulong)uVar8;
    uVar19 = 0;
    plVar16 = param_4;
    uVar21 = func_0x036ee328(lVar27,plVar23);
    if ((uVar21 & 1) == 0) {
      return (char *)0x0;
    }
    lVar29 = func_0x036d5e58(lVar27);
    if (lVar29 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar29 + 0x50)) {
      lVar29 = func_0x036d5e58();
      if (lVar29 != 0) {
        if ((int)uVar8 < *(int *)(lVar29 + 0x50)) {
          *(int *)param_6 = auVar41._8_4_;
          lVar29 = func_0x036d5e58(lVar27);
          if (lVar29 != 0) {
            *(uint *)(lVar29 + 0x50) = *(int *)(lVar29 + 0x50) - uVar8;
            return (char *)0x1;
          }
        }
        else {
          plVar23 = *(long **)(lVar27 + 0x10);
          if (plVar23 != (long *)0x0) {
            plVar37 = (long *)(**(code **)(*plVar23 + 0x1c8))
                                        (plVar23,plVar15,*(undefined8 *)(*plVar23 + 0x1d0));
            plVar16 = (long *)0x0;
            uVar34 = func_0x036edd98(lVar27,plVar15);
            if (((uVar34 & 1) == 0) || (iVar9 = func_0x036fa7dc(lVar27,0), 0 < iVar9)) {
LAB_036dbaac:
              plVar16 = (long *)0x0;
              uVar34 = func_0x036edf9c(lVar27,plVar15);
              if ((uVar34 & 1) == 0) {
                return (char *)0x1;
              }
              lVar29 = func_0x036d5e58(lVar27);
              if ((lVar29 != 0) && (*(long *)(lVar29 + 0xa8) != 0)) {
                plVar23 = *(long **)(*(long *)(lVar29 + 0xa8) + 0x10);
                lVar27 = 0;
                if (plVar23 != (long *)0x0) {
                  lVar27 = *plVar23;
                  uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059e0170) {
                        puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 1) * 0x10 + 0x138);
                        goto LAB_036dbb34;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059e0170,1);
LAB_036dbb34:
                  uVar34 = (*(code *)*puVar13)(plVar23,puVar13[1]);
                  if ((uVar34 & 1) != 0) {
                    return (char *)0x1;
                  }
                  return (char *)0x2;
                }
              }
            }
            else if (plVar37 != (long *)0x0) {
              lVar29 = *plVar37;
              param_6 = (long *)&DAT_059dfbc0;
              uVar34 = (ulong)*(ushort *)(lVar29 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                    goto LAB_036db9cc;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar16 = (long *)0x3;
              puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036db9cc:
              plVar23 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
              if (plVar23 != (long *)0x0) {
                lVar29 = *plVar23;
                puVar36 = &DAT_059deb70;
                uVar34 = (ulong)*(ushort *)(lVar29 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                      puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 0xe) * 0x10 + 0x138);
                      goto LAB_036dba38;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059deb70,0xe);
LAB_036dba38:
                uVar34 = (*(code *)*puVar13)(plVar23,puVar13[1]);
                plVar28 = plVar23;
                if ((uVar34 & 1) == 0) goto LAB_036dbaac;
                plVar16 = plVar37;
                plVar23 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                if ((plVar23 != (long *)0x0) &&
                   (plVar31 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar16 = plVar23,
                   plVar31 != (long *)0x0)) {
                  uVar34 = func_0x022bffa8(0,_DAT_059deb60);
                  lVar29 = func_0x036d5ec8(lVar27);
                  plVar16 = plVar31;
                  plVar37 = (long *)(uVar34 & 0xffffffff);
                  if (lVar29 != 0) {
                    uVar34 = func_0x0375380c(lVar29,(long *)(uVar34 & 0xffffffff),0);
                    if ((uVar34 & 1) == 0) {
                      return (char *)0x2;
                    }
                    return (char *)0x1;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_036dbb68;
    }
    plVar16 = (long *)0x0;
    uVar21 = func_0x036edd98(lVar27,plVar15);
    if ((uVar21 & 1) == 0) {
      plVar16 = (long *)0x0;
      uVar34 = func_0x036edf9c(lVar27,plVar15);
      if ((uVar34 & 1) == 0) {
        return (char *)0x1;
      }
      lVar29 = func_0x036d5e58(lVar27);
      if (((lVar29 == 0) || (*(long *)(lVar29 + 0xa8) == 0)) ||
         (plVar15 = *(long **)(*(long *)(lVar29 + 0xa8) + 0x10), plVar15 == (long *)0x0))
      goto LAB_036dbb68;
      lVar29 = *plVar15;
      uVar34 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar34 != 0) {
        piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059e0170) {
            puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar34 = uVar34 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar34 != 0);
      }
      puVar13 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059e0170,5);
LAB_036db928:
      iVar10 = (*(code *)*puVar13)(plVar15,puVar13[1]);
      iVar26 = iVar10;
      if (iVar9 < iVar10) {
        iVar33 = (int)*param_6;
        do {
          iVar26 = iVar26 - iVar9;
          iVar33 = iVar33 + 1;
        } while (iVar9 < iVar26);
        *(int *)param_6 = iVar33;
      }
      uVar8 = iVar26 - iVar10;
    }
    else {
      lVar29 = func_0x036d5e58(lVar27);
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x28) == 0)) goto LAB_036dbb68;
      uVar8 = *(uint *)(*(long *)(lVar29 + 0x28) + 0x10);
      plVar15 = (long *)(ulong)uVar8;
      plVar24 = plVar15;
      uVar11 = uVar8;
      while (iVar9 < (int)uVar11) {
        lVar29 = func_0x036d5e58(lVar27);
        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x28) == 0)) goto LAB_036dbb68;
        plVar16 = (long *)0x0;
        func_0x03700cf4(*(long *)(lVar29 + 0x28),uVar34 & 0xffffffff);
        uVar11 = (int)plVar24 - iVar9;
        plVar24 = (long *)(ulong)uVar11;
        *(int *)param_6 = (int)*param_6 + 1;
      }
      uVar8 = (int)plVar24 - uVar8;
    }
    puVar36 = (undefined *)(ulong)uVar8;
    param_6 = (long *)func_0x036d5e58(lVar27);
    auVar42._8_4_ = (uint)param_5 & 1;
    auVar42._0_8_ = lVar27;
    auVar42._12_4_ = 0;
    uVar18 = 0x36db980;
  }
  lVar29 = auVar42._0_8_;
  *(undefined8 *)((long)puVar7 + -0x120) = uVar18;
  *(long **)((long)puVar7 + -0x110) = plVar15;
  *(undefined **)((long)puVar7 + -0x108) = puVar36;
  *(long **)((long)puVar7 + -0x100) = param_6;
  *(long **)((long)puVar7 + -0xf8) = plVar28;
  *(long **)((long)puVar7 + -0xf0) = plVar37;
  *(long *)((long)puVar7 + -0xe8) = lVar27;
  plVar37 = (long *)0x5e2d000;
  plVar28 = (long *)(auVar42._8_8_ & 0xffffffff);
  plVar16 = plVar23;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar27 = func_0x036d5e58(lVar29);
  if (lVar27 != 0) {
    if (*(int *)(lVar27 + 0x50) < 1) {
      if (plVar23 != (long *)0x0) {
        lVar27 = *plVar23;
        plVar37 = (long *)&DAT_059df8e8;
        uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar34 != 0) {
          piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
              puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar34 = uVar34 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar34 != 0);
        }
        puVar13 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar18 = (*(code *)*puVar13)(plVar23,puVar13[1]);
        plVar16 = (long *)0x0;
        uVar21 = func_0x036edd98(lVar29,uVar18);
        lVar27 = *plVar23;
        uVar1 = *(ushort *)(lVar27 + 0x12e);
        uVar34 = (ulong)uVar1;
        if ((uVar21 & 1) == 0) {
          if (uVar1 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar13 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar18 = (*(code *)*puVar13)(plVar23,puVar13[1]);
          plVar16 = (long *)0x0;
          uVar34 = func_0x036edf9c(lVar29,uVar18);
          if ((uVar34 & 1) == 0) {
            uVar8 = 0;
            goto LAB_036dbc00;
          }
          lVar27 = func_0x036d5e58(lVar29);
          if ((lVar27 != 0) && (*(long *)(lVar27 + 0xa8) != 0)) {
            plVar31 = *(long **)(*(long *)(lVar27 + 0xa8) + 0x10);
            lVar29 = 0;
            if (plVar31 != (long *)0x0) {
              lVar27 = *plVar31;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059e0170) {
                    iVar9 = *piVar35 + 6;
                    goto LAB_036dbfbc;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              uVar18 = 6;
              lVar27 = _DAT_059e0170;
              goto LAB_036dbfac;
            }
          }
        }
        else {
          if (uVar1 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          plVar16 = (long *)0x5;
          puVar13 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036dbd14:
          uVar18 = (*(code *)*puVar13)(plVar23,puVar13[1]);
          plVar31 = *(long **)(lVar29 + 0x10);
          if (plVar31 != (long *)0x0) {
            plVar16 = *(long **)(*plVar31 + 0x1d0);
            plVar37 = (long *)(**(code **)(*plVar31 + 0x1c8))(plVar31,uVar18);
            if ((auVar42._8_8_ & 1) == 0) {
LAB_036dbefc:
              if (plVar37 != (long *)0x0) {
                lVar27 = *plVar37;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                plVar16 = (long *)0x3;
                puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036dbf58:
                plVar31 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
                if (plVar31 != (long *)0x0) {
                  lVar27 = *plVar31;
                  uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                        iVar9 = *piVar35 + 0x14;
LAB_036dbfbc:
                        puVar13 = (undefined8 *)(lVar27 + (long)iVar9 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  uVar18 = 0x14;
                  lVar27 = _DAT_059deb70;
LAB_036dbfac:
                  puVar13 = (undefined8 *)func_0x024d927c(plVar31,lVar27,uVar18);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar17 = (char *)(*(code *)*puVar13)(plVar31,puVar13[1]);
                  return pcVar17;
                }
              }
            }
            else if (plVar37 != (long *)0x0) {
              lVar27 = *plVar37;
              puVar36 = &DAT_059dfbc0;
              uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              plVar16 = (long *)0x19;
              puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036dbe38:
              plVar31 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
              if (plVar31 != (long *)0x0) {
                lVar27 = *plVar31;
                plVar15 = (long *)&DAT_059e0150;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059e0150) {
                      puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                plVar16 = (long *)0x0;
                puVar13 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dbeac:
                uVar34 = (*(code *)*puVar13)(plVar31,puVar13[1]);
                plVar28 = plVar31;
                if ((uVar34 & 1) == 0) goto LAB_036dbefc;
                lVar27 = *plVar37;
                uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                plVar16 = (long *)0x19;
                puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036dbff0:
                plVar31 = (long *)(*(code *)*puVar13)(plVar37,puVar13[1]);
                if (plVar31 != (long *)0x0) {
                  lVar27 = *plVar31;
                  uVar34 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059e0150) {
                        puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar17 = (char *)(*(code *)*puVar13)(plVar31,lVar29,plVar23,puVar13[1]);
                  return pcVar17;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar27 = func_0x036d5e58(lVar29);
      if (lVar27 != 0) {
        uVar8 = *(uint *)(lVar27 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar8;
      }
    }
  }
  auVar43 = func_0x0249fb90();
  plVar31 = auVar43._8_8_;
  lVar27 = auVar43._0_8_;
  *(undefined **)((long)puVar7 + -0x180) = unaff_x29;
  *(undefined8 *)((long)puVar7 + -0x178) = 0x36dc07c;
  *(undefined **)((long)puVar7 + -0x170) = unaff_x28;
  *(long **)((long)puVar7 + -0x168) = unaff_x27;
  *(long **)((long)puVar7 + -0x160) = param_4;
  *(long **)((long)puVar7 + -0x158) = plVar24;
  *(long **)((long)puVar7 + -0x150) = plVar15;
  *(undefined **)((long)puVar7 + -0x148) = puVar36;
  *(long **)((long)puVar7 + -0x140) = plVar28;
  *(long **)((long)puVar7 + -0x138) = plVar37;
  *(long **)((long)puVar7 + -0x130) = plVar23;
  *(long *)((long)puVar7 + -0x128) = lVar29;
  uVar21 = uVar20 & 0xffffffff;
  uVar34 = uVar19;
  uVar25 = uVar20;
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
  plVar23 = (long *)0x0;
  *(undefined8 *)((long)puVar7 + -0x198) = 0;
  *(undefined8 *)((long)puVar7 + -400) = 0;
  *(undefined8 *)((long)puVar7 + -0x1a8) = 0;
  *(undefined8 *)((long)puVar7 + -0x1a0) = 0;
  *(undefined8 *)((long)puVar7 + -0x1b8) = 0;
  *(undefined8 *)((long)puVar7 + -0x1b0) = 0;
  *(undefined8 *)((long)puVar7 + -0x1c8) = 0;
  *(undefined8 *)((long)puVar7 + -0x1c0) = 0;
  uVar22 = func_0x036fa5f8(lVar27,plVar31);
  if ((uVar22 & 1) != 0) {
    return (char *)0x0;
  }
  lVar29 = func_0x036d5e58(lVar27);
  plVar28 = (long *)0x5e2d000;
  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x18) != 0)) {
    auVar40 = func_0x03753e70(*(long *)(lVar29 + 0x18),0);
    unaff_x28 = &DAT_05a27fc8;
    *(undefined1 (*) [16])((long)puVar7 + -0x198) = auVar40;
    lVar29 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x024d8f40();
    }
    pcVar17 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x198),
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar29 + 0xc0) + 8) + 0x80));
    if (*pcVar17 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844((undefined1 *)((long)puVar7 + -0x198),(undefined1 *)((long)puVar7 + -0x1d8),
                    _DAT_05a27fd0);
    unaff_x27 = (long *)&DAT_059e2c00;
    plVar28 = *(long **)((long)puVar7 + -0x1d8);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar18 = func_0x03530158(plVar28,0);
    plVar23 = (long *)0x0;
    uVar22 = func_0x0352ff64(uVar18,plVar16);
    if ((uVar22 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar31 != (long *)0x0) {
      lVar29 = *plVar31;
      param_4 = (long *)&DAT_059df8e8;
      uVar22 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar22 != 0) {
        piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
            puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar22 = uVar22 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar22 != 0);
      }
      plVar23 = (long *)0x5;
      puVar13 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dc294:
      uVar18 = (*(code *)*puVar13)(plVar31,puVar13[1]);
      plVar15 = *(long **)(lVar27 + 0x10);
      if (plVar15 != (long *)0x0) {
        plVar23 = *(long **)(*plVar15 + 0x1d0);
        plVar15 = (long *)(**(code **)(*plVar15 + 0x1c8))(plVar15,uVar18);
        if (plVar15 != (long *)0x0) {
          lVar29 = *plVar15;
          uVar22 = (ulong)*(ushort *)(lVar29 + 0x12e);
          if (uVar22 != 0) {
            piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar22 = uVar22 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar22 != 0);
          }
          plVar23 = (long *)0x3;
          puVar13 = (undefined8 *)func_0x024d927c(plVar15);
LAB_036dc31c:
          plVar28 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
          lVar29 = func_0x036d5e58(lVar27);
          if ((lVar29 != 0) && (*(long *)(lVar29 + 0x18) != 0)) {
            uVar8 = *(uint *)(*(long *)(lVar29 + 0x18) + 0x38);
            plVar24 = (long *)(ulong)uVar8;
            if ((int)uVar8 < 1) {
              lVar29 = *plVar31;
              uVar22 = (ulong)*(ushort *)(lVar29 + 0x12e);
              if (uVar22 != 0) {
                piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                    puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar22 = uVar22 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar22 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar18 = (*(code *)*puVar13)(plVar31,puVar13[1]);
              plVar15 = (long *)0x0;
              uVar22 = func_0x036f2f04(lVar27,uVar18);
              if ((uVar22 & 1) == 0) {
                plVar15 = (long *)0x0;
                uVar22 = func_0x036f2fec(lVar27,plVar31);
                plVar23 = plVar15;
                if ((uVar22 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (plVar28 != (long *)0x0) {
                  plVar23 = plVar28;
                  plVar15 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar29 = func_0x036d5ec8(lVar27);
                  plVar24 = plVar15;
                  if (lVar29 != 0) {
                    auVar40 = func_0x037537dc(lVar29,0);
                    uVar22 = auVar40._0_8_;
                    if (plVar15 != (long *)0x0) {
                      uVar25 = auVar40._8_8_ & 0xffffffff;
                      uVar34 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      plVar24 = (long *)(uVar34 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar29 = func_0x036d5e58(lVar27);
                plVar23 = plVar15;
                if ((lVar29 != 0) && (*(long *)(lVar29 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar29 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  plVar24 = (long *)0x0;
                  uVar22 = uVar34;
LAB_036dc558:
                  lVar29 = *plVar31;
                  uVar34 = (ulong)*(ushort *)(lVar29 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                        puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138);
                        uVar34 = uVar22;
                        goto LAB_036dc5a8;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  plVar15 = (long *)0x5;
                  puVar13 = (undefined8 *)func_0x024d927c(plVar31);
                  uVar34 = uVar22;
LAB_036dc5a8:
                  uVar18 = (*(code *)*puVar13)(plVar31,puVar13[1]);
                  plVar37 = *(long **)(lVar27 + 0x10);
                  plVar23 = plVar15;
                  if (plVar37 != (long *)0x0) {
                    plVar23 = *(long **)(*plVar37 + 0x1d0);
                    uVar18 = (**(code **)(*plVar37 + 0x1c8))(plVar37,uVar18);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar22 = func_0x036c47c0(uVar18,plVar31);
                    param_4 = (long *)(uVar22 & 0xffffffff);
                    lVar29 = func_0x036d5e58(lVar27);
                    if ((lVar29 != 0) && (*(long *)(lVar29 + 0x28) != 0)) {
                      uVar34 = 0;
                      plVar23 = param_4;
                      iVar9 = func_0x03700d78(*(long *)(lVar29 + 0x28),plVar24);
                      uVar8 = (int)plVar24 - iVar9;
                      plVar24 = (long *)(ulong)uVar8;
                      if (uVar8 == 0) {
                        if (plVar28 != (long *)0x0) {
                          plVar15 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                          plVar24 = (long *)func_0x036d5ec8(lVar27);
                          plVar37 = (long *)func_0x03530c84(plVar16,0);
                          plVar23 = plVar28;
                          plVar28 = plVar15;
                          if (plVar15 != (long *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,plVar15,plVar24,plVar31);
                            func_0x037275b8(lVar27,plVar16,1,0);
                            func_0x03727828(lVar27,plVar31,plVar16,0);
                            plVar23 = (long *)(ulong)((uint)uVar19 & 1);
                            uVar34 = (ulong)((uint)uVar20 & 1);
                            uVar25 = 0;
                            uVar8 = func_0x036fa00c(lVar27,plVar31);
                            auVar43._8_4_ = uVar8;
                            auVar43._0_8_ = lVar27;
                            auVar43._12_4_ = 0;
                            lVar29 = func_0x036d5ec8(lVar27);
                            plVar14 = plVar37;
                            if (lVar29 != 0) {
                              auVar40 = func_0x03753e70(lVar29,0);
                              *(undefined1 (*) [16])((long)puVar7 + -0x1c8) = auVar40;
                              uVar11 = func_0x022bf4f8((undefined1 *)((long)puVar7 + -0x1c8),
                                                       _DAT_05a27fc8);
                              if ((uVar8 & uVar11 & 1) == 0) {
                                uVar18 = *(undefined8 *)((long)puVar7 + -0x1c8);
                                uVar21 = *(ulong *)((long)puVar7 + -0x1c0);
                                uVar38 = func_0x03530c84(plVar16,0);
                                *(undefined8 *)((long)puVar7 + -0x188) = uVar38;
                                *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                                (undefined1 *)((long)puVar7 + -0x188),_DAT_05a27fa0)
                                ;
                                uVar34 = *(ulong *)((long)puVar7 + -0x1d0);
                                uVar25 = 0;
                                auVar40 = func_0x03489150(uVar18,uVar21,
                                                          *(undefined8 *)((long)puVar7 + -0x1d8));
                                plVar14 = plVar37;
                              }
                              else {
                                uVar18 = func_0x03530c84(plVar16,0);
                                *(undefined8 *)((long)puVar7 + -0x188) = uVar18;
                                *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                                (undefined1 *)((long)puVar7 + -0x188),_DAT_05a27fa0)
                                ;
                                auVar40 = *(undefined1 (*) [16])((long)puVar7 + -0x1d8);
                                plVar14 = plVar37;
                              }
                              plVar16 = auVar40._0_8_;
                              lVar27 = func_0x036d5ec8(lVar27);
                              *(undefined1 (*) [16])((long)puVar7 + -0x1b8) = auVar40;
                              uVar20 = func_0x022bf4f8((undefined1 *)((long)puVar7 + -0x1b8),
                                                       _DAT_05a27fc8);
                              if ((uVar20 & 1) == 0) {
                                plVar23 = (long *)0x0;
                                uVar18 = 0;
                              }
                              else {
                                plVar16 = (long *)func_0x023f3ca0((undefined1 *)
                                                                  ((long)puVar7 + -0x1b8),
                                                                  _DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uVar18 = func_0x03530158(plVar16,0);
                                *(undefined8 *)((long)puVar7 + -0x188) = uVar18;
                                *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                                (undefined1 *)((long)puVar7 + -0x188),_DAT_05a28018)
                                ;
                                uVar18 = *(undefined8 *)((long)puVar7 + -0x1d8);
                                plVar23 = *(long **)((long)puVar7 + -0x1d0);
                              }
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = auVar40._8_8_;
                              auVar43 = auVar6 << 0x40;
                              if (lVar27 != 0) {
                                func_0x03753f18(lVar27,uVar18,plVar23,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar9 < 1) {
                          return (char *)0x0;
                        }
                        lVar27 = func_0x036d5ec8(lVar27);
                        if (lVar27 != 0) {
                          *(uint *)(lVar27 + 0x38) = uVar8;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar29 = func_0x036d5e58(lVar27);
              if ((lVar29 != 0) && (plVar28 != (long *)0x0)) {
                lVar30 = *plVar28;
                param_4 = *(long **)(lVar29 + 0x28);
                uVar22 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar22 != 0) {
                  piVar35 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                      puVar13 = (undefined8 *)(lVar30 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar22 = uVar22 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar22 != 0);
                }
                plVar23 = (long *)0x3;
                puVar13 = (undefined8 *)func_0x024d927c(plVar28);
LAB_036dc3f8:
                uVar22 = (*(code *)*puVar13)(plVar28,puVar13[1]);
                if (param_4 != (long *)0x0) {
                  plVar23 = (long *)(uVar22 & 0xffffffff);
                  uVar34 = 0;
                  uVar11 = func_0x03700d78(param_4,plVar24);
                  if (uVar11 == uVar8) {
                    lVar29 = *plVar28;
                    uVar22 = (ulong)*(ushort *)(lVar29 + 0x12e);
                    if (uVar22 != 0) {
                      piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                          puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar22 = uVar22 - 1;
                        piVar35 = piVar35 + 4;
                      } while (uVar22 != 0);
                    }
                    plVar23 = (long *)0x2;
                    puVar13 = (undefined8 *)func_0x024d927c(plVar28);
LAB_036dc760:
                    plVar28 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
                    lVar29 = func_0x036d5e58(lVar27);
                    if (lVar29 != 0) {
                      plVar24 = *(long **)(lVar29 + 0x18);
                      plVar15 = (long *)func_0x03530c84(plVar16,0);
                      if (plVar28 != (long *)0x0) {
                        lVar29 = *plVar28;
                        uVar34 = (ulong)*(ushort *)(lVar29 + 0x12e);
                        if (uVar34 != 0) {
                          piVar35 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar35 + -2) == _DAT_059deb60) {
                              puVar13 = (undefined8 *)(lVar29 + (long)(*piVar35 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar34 = uVar34 - 1;
                            piVar35 = piVar35 + 4;
                          } while (uVar34 != 0);
                        }
                        puVar13 = (undefined8 *)func_0x024d927c(plVar28,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar13)(plVar28,plVar24,plVar31,plVar15,puVar13[1]);
                        func_0x037275b8(lVar27,plVar16,1,0);
                        func_0x03727828(lVar27,plVar31,plVar16,0);
                        plVar23 = (long *)(ulong)((uint)uVar19 & 1);
                        uVar34 = (ulong)((uint)uVar20 & 1);
                        uVar25 = 0;
                        uVar8 = func_0x036fa00c(lVar27,plVar31);
                        auVar3._8_4_ = uVar8;
                        auVar3._0_8_ = lVar27;
                        auVar3._12_4_ = 0;
                        auVar43._8_4_ = uVar8;
                        auVar43._0_8_ = lVar27;
                        auVar43._12_4_ = 0;
                        lVar29 = func_0x036d5e58(lVar27);
                        param_4 = plVar15;
                        if ((lVar29 != 0) && (auVar43 = auVar3, *(long *)(lVar29 + 0x18) != 0)) {
                          auVar40 = func_0x03753e70(*(long *)(lVar29 + 0x18),0);
                          *(undefined1 (*) [16])((long)puVar7 + -0x1a8) = auVar40;
                          lVar29 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                            lVar29 = func_0x024d8f40();
                          }
                          pcVar17 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x1a8),
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar29 + 0xc0) + 8
                                                                       ) + 0x80));
                          if ((uVar8 & *pcVar17 != '\0') == 0) {
                            uVar18 = *(undefined8 *)((long)puVar7 + -0x1a8);
                            uVar38 = *(undefined8 *)((long)puVar7 + -0x1a0);
                            uVar39 = func_0x03530c84(plVar16,0);
                            *(undefined8 *)((long)puVar7 + -0x188) = uVar39;
                            *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                            *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                            func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                            (undefined1 *)((long)puVar7 + -0x188),_DAT_05a27fa0);
                            plVar23 = *(long **)((long)puVar7 + -0x1d8);
                            uVar34 = *(ulong *)((long)puVar7 + -0x1d0);
                            uVar25 = 0;
                            auVar40 = func_0x03489150(uVar18,uVar38);
                          }
                          else {
                            uVar18 = func_0x03530c84(plVar16,0);
                            *(undefined8 *)((long)puVar7 + -0x188) = uVar18;
                            *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                            *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                            plVar23 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                            (undefined1 *)((long)puVar7 + -0x188));
                            auVar40 = *(undefined1 (*) [16])((long)puVar7 + -0x1d8);
                          }
                          uVar21 = auVar40._8_8_;
                          uVar18 = auVar40._0_8_;
                          auVar43._8_8_ = uVar18;
                          lVar29 = func_0x036d5e58(lVar27);
                          if (lVar29 != 0) {
                            *(undefined1 (*) [16])((long)puVar7 + -0x1b8) = auVar40;
                            plVar16 = *(long **)(lVar29 + 0x18);
                            lVar29 = *(long *)(_DAT_05a27fc8 + 0x20);
                            if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                              lVar29 = func_0x024d8f40();
                            }
                            pcVar17 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x1b8),
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar29 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar17 == '\0') {
                              plVar23 = (long *)0x0;
                              uVar38 = 0;
                            }
                            else {
                              uVar18 = func_0x023f3ca0((undefined1 *)((long)puVar7 + -0x1b8),
                                                       _DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uVar38 = func_0x03530158(uVar18,0);
                              *(undefined8 *)((long)puVar7 + -0x188) = uVar38;
                              *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                              *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                              func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                              (undefined1 *)((long)puVar7 + -0x188),_DAT_05a28018);
                              uVar38 = *(undefined8 *)((long)puVar7 + -0x1d8);
                              plVar23 = *(long **)((long)puVar7 + -0x1d0);
                            }
                            auVar5._8_8_ = uVar18;
                            auVar5._0_8_ = lVar27;
                            auVar4._8_8_ = uVar18;
                            auVar4._0_8_ = lVar27;
                            auVar43._8_8_ = uVar18;
                            if (plVar16 != (long *)0x0) {
                              uVar34 = 0;
                              func_0x03753f18(plVar16,uVar38);
                              lVar27 = func_0x036d5e58(lVar27);
                              auVar43 = auVar4;
                              if ((lVar27 != 0) && (auVar43 = auVar5, *(long *)(lVar27 + 0x18) != 0)
                                 ) {
                                func_0x03754328(*(long *)(lVar27 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    param_4 = (long *)(ulong)uVar11;
                    if ((int)uVar11 < 1) {
                      return (char *)0x0;
                    }
                    lVar27 = func_0x036d5ec8(lVar27);
                    if (lVar27 != 0) {
                      func_0x03754330(lVar27,param_4,0);
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
  uVar18 = auVar43._8_8_;
  func_0x0249fb90();
  *(undefined8 *)((long)puVar7 + -0x1f0) = 0x36dcaf8;
  lVar27 = func_0x036d5e58();
  if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x18), lVar27 != 0)) {
    *(undefined8 *)((long)puVar7 + -0x210) = *(undefined8 *)((long)puVar7 + -0x1f0);
    *(ulong *)((long)puVar7 + -0x200) = uVar21;
    *(undefined8 *)((long)puVar7 + -0x1f8) = uVar18;
    *(long **)((long)puVar7 + -0x1f0) = plVar16;
    *(long *)((long)puVar7 + -0x1e8) = auVar43._0_8_;
    if ((bRam0000000005e2de5c & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de5c = 1;
    }
    lVar29 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x024d8f40();
    }
    pcVar17 = (char *)func_0x0249f90c(lVar27 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar29 + 0xc0) + 8) + 0x80));
    if (*pcVar17 != '\0') {
      func_0x02886844(lVar27 + 0x50,(undefined1 *)((long)puVar7 + -0x208),_DAT_05a27fd0);
      uVar18 = *(undefined8 *)((long)puVar7 + -0x208);
      uVar38 = *(undefined8 *)(lVar27 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar34 = func_0x0430deb0(uVar18,uVar38,0);
      if ((uVar34 & 1) != 0) {
        func_0x02886844(lVar27 + 0x50,(undefined1 *)((long)puVar7 + -0x208),_DAT_05a27fd0);
        return *(char **)((long)puVar7 + -0x208);
      }
    }
    return *(char **)(lVar27 + 0x28);
  }
  auVar40 = func_0x0249fb90();
  uVar38 = auVar40._0_8_;
  *(undefined8 *)((long)puVar7 + -0x210) = 0x36dcb1c;
  *(long **)((long)puVar7 + -0x200) = plVar16;
  *(long *)((long)puVar7 + -0x1f8) = auVar43._0_8_;
  *(long *)((long)puVar7 + -0x208) = auVar40._8_8_;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar27 = func_0x036d5e58(uVar38);
  if (lVar27 != 0) {
    lVar27 = *(long *)(lVar27 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar39 = func_0x0352eeec((undefined1 *)((long)puVar7 + -0x208),0);
    uVar38 = 0;
    if (lVar27 != 0) {
      pcVar17 = (char *)func_0x03753bf0(lVar27,uVar39,0);
      return pcVar17;
    }
  }
  func_0x0249fb90();
  *(undefined8 *)((long)puVar7 + -0x220) = 0x36dcba8;
  *(undefined8 *)((long)puVar7 + -0x218) = uVar38;
  lVar27 = func_0x036d5e58();
  if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x18), lVar27 != 0)) {
    *(undefined8 *)((long)puVar7 + -0x250) = *(undefined8 *)((long)puVar7 + -0x220);
    *(long **)((long)puVar7 + -0x248) = plVar24;
    *(long **)((long)puVar7 + -0x240) = plVar28;
    *(ulong *)((long)puVar7 + -0x238) = uVar19 & 0xffffffff;
    *(ulong *)((long)puVar7 + -0x230) = uVar21;
    *(undefined8 *)((long)puVar7 + -0x228) = uVar18;
    *(undefined8 *)((long)puVar7 + -0x220) = 0x5e2d000;
    *(undefined8 *)((long)puVar7 + -0x218) = *(undefined8 *)((long)puVar7 + -0x218);
    *(undefined8 *)((long)puVar7 + -0x260) = extraout_x1_00;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1_00,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    *(undefined8 *)((long)puVar7 + -0x270) = 0;
    *(undefined8 *)((long)puVar7 + -0x268) = 0;
    uVar34 = func_0x0375309c(lVar27);
    if ((uVar34 & 1) != 0) {
      uVar18 = *(undefined8 *)(lVar27 + 0x60);
      iVar9 = *(int *)(_DAT_059e2be8 + 0xe4);
      *(undefined8 *)((long)puVar7 + -0x268) = *(undefined8 *)(lVar27 + 0x68);
      *(undefined8 *)((long)puVar7 + -0x270) = uVar18;
      if (iVar9 == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0352eeec((undefined1 *)((long)puVar7 + -0x260),0);
      lVar29 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x024d8f40(lVar29);
      }
      pcVar17 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x270),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar29 + 0xc0) + 8) + 0x80));
      lVar29 = _DAT_05a27fb0;
      if (*pcVar17 == '\0') {
        uVar18 = 0;
        uVar38 = 0;
      }
      else {
        lVar32 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar32 + 0x135);
        lVar30 = lVar32;
        if ((uVar1 & 1) == 0) {
          lVar32 = func_0x024d8f40(lVar32);
          uVar1 = *(ushort *)(*(long *)(lVar29 + 0x20) + 0x135);
          lVar30 = *(long *)(lVar29 + 0x20);
        }
        uVar12 = *(undefined4 *)(**(long **)(lVar32 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar30 = func_0x024d8f40(lVar30);
        }
        uVar38 = func_0x0249f90c((undefined1 *)((long)puVar7 + -0x270),
                                 *(long *)(*(long *)(*(long *)(lVar30 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0((undefined1 *)((long)puVar7 + -0x280),uVar38,uVar12);
        uVar38 = *(undefined8 *)((long)puVar7 + -0x280);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar18 = func_0x0430d994(uVar38,uVar18,0);
        *(undefined8 *)((long)puVar7 + -600) = uVar18;
        *(undefined8 *)((long)puVar7 + -0x280) = 0;
        *(undefined8 *)((long)puVar7 + -0x278) = 0;
        func_0x028866e4((undefined1 *)((long)puVar7 + -0x280),(undefined1 *)((long)puVar7 + -600),
                        _DAT_05a27fa0);
        uVar38 = *(undefined8 *)((long)puVar7 + -0x278);
        uVar18 = *(undefined8 *)((long)puVar7 + -0x280);
      }
      *(undefined8 *)(lVar27 + 0x68) = uVar38;
      *(undefined8 *)(lVar27 + 0x60) = uVar18;
    }
    lVar29 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x024d8f40();
    }
    pcVar17 = (char *)func_0x0249f90c(lVar27 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar29 + 0xc0) + 8) + 0x80));
    if (*pcVar17 != '\0') {
      func_0x02886844(lVar27 + 0x18,(undefined1 *)((long)puVar7 + -0x280),_DAT_05a27fd0);
      uVar18 = *(undefined8 *)((long)puVar7 + -0x280);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar38 = func_0x0352eeec((undefined1 *)((long)puVar7 + -0x260),0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      uVar18 = func_0x0430d994(uVar18,uVar38,0);
      *(undefined8 *)((long)puVar7 + -600) = uVar18;
      *(undefined8 *)((long)puVar7 + -0x280) = 0;
      *(undefined8 *)((long)puVar7 + -0x278) = 0;
      pcVar17 = (char *)func_0x028866e4((undefined1 *)((long)puVar7 + -0x280),
                                        (undefined1 *)((long)puVar7 + -600),_DAT_05a27fa0);
      uVar18 = *(undefined8 *)((long)puVar7 + -0x280);
      *(undefined8 *)(lVar27 + 0x20) = *(undefined8 *)((long)puVar7 + -0x278);
      *(undefined8 *)(lVar27 + 0x18) = uVar18;
    }
    return pcVar17;
  }
  auVar40 = func_0x0249fb90();
  plVar37 = auVar40._8_8_;
  plVar15 = auVar40._0_8_;
  *(undefined8 *)((long)puVar7 + -0x280) = 0x36dcbd4;
  *(undefined **)((long)puVar7 + -0x270) = unaff_x28;
  *(long **)((long)puVar7 + -0x268) = unaff_x27;
  *(long **)((long)puVar7 + -0x260) = param_4;
  *(long **)((long)puVar7 + -600) = plVar24;
  *(long **)((long)puVar7 + -0x250) = plVar28;
  *(ulong *)((long)puVar7 + -0x248) = uVar19 & 0xffffffff;
  *(ulong *)((long)puVar7 + -0x240) = uVar21;
  *(undefined8 *)((long)puVar7 + -0x238) = uVar18;
  *(undefined8 *)((long)puVar7 + -0x230) = 0x5e2d000;
  *(undefined8 *)((long)puVar7 + -0x228) = extraout_x1_00;
  plVar28 = (long *)0x5e2d000;
  plVar24 = plVar23;
  uVar19 = uVar34;
  uVar20 = uVar25;
  plVar16 = plVar14;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar37 != (long *)0x0) {
    lVar27 = *plVar37;
    uVar21 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar21 != 0) {
      piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar21 = uVar21 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar21 != 0);
    }
    plVar24 = (long *)0x5;
    puVar13 = (undefined8 *)func_0x024d927c(plVar37);
LAB_036dccc4:
    uVar18 = (*(code *)*puVar13)(plVar37,puVar13[1]);
    plVar31 = (long *)plVar15[2];
    if (plVar31 != (long *)0x0) {
      plVar28 = (long *)(**(code **)(*plVar31 + 0x1c8))
                                  (plVar31,uVar18,*(undefined8 *)(*plVar31 + 0x1d0));
      pcVar17 = (char *)0x0;
      if (plVar28 != (long *)0x0) {
        plVar24 = (long *)0x0;
        uVar21 = func_0x036edd98(plVar15,uVar18);
        if ((uVar21 & 1) != 0) {
          lVar27 = *plVar28;
          uVar21 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar21 != 0) {
            piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar21 = uVar21 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar21 != 0);
          }
          plVar24 = (long *)0x19;
          puVar13 = (undefined8 *)func_0x024d927c(plVar28);
LAB_036dce14:
          plVar31 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
          if (plVar31 != (long *)0x0) {
            lVar27 = *plVar31;
            uVar21 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar21 != 0) {
              piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == _DAT_059e0150) {
                  puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar21 = uVar21 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar21 != 0);
            }
            plVar24 = (long *)0x0;
            puVar13 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dce7c:
            uVar21 = (*(code *)*puVar13)(plVar31,puVar13[1]);
            if ((uVar21 & 1) == 0) {
LAB_036dcf40:
              lVar27 = *plVar28;
              uVar19 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar19 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar19 = uVar19 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar28,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar24 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
              *(undefined8 *)((long)puVar7 + -0x260) = *(undefined8 *)((long)puVar7 + -0x280);
              *(undefined8 *)((long)puVar7 + -600) = *(undefined8 *)((long)puVar7 + -600);
              *(undefined8 *)((long)puVar7 + -0x250) = *(undefined8 *)((long)puVar7 + -0x250);
              *(undefined8 *)((long)puVar7 + -0x248) = *(undefined8 *)((long)puVar7 + -0x248);
              *(undefined8 *)((long)puVar7 + -0x240) = *(undefined8 *)((long)puVar7 + -0x240);
              *(undefined8 *)((long)puVar7 + -0x238) = *(undefined8 *)((long)puVar7 + -0x238);
              *(undefined8 *)((long)puVar7 + -0x230) = *(undefined8 *)((long)puVar7 + -0x230);
              *(undefined8 *)((long)puVar7 + -0x228) = *(undefined8 *)((long)puVar7 + -0x228);
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar24 == (long *)0x0) {
                lVar27 = func_0x0249fb90();
                return *(char **)(lVar27 + 0x10);
              }
              lVar27 = *plVar24;
              uVar19 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar19 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
                    puVar13 = (undefined8 *)(lVar27 + (long)*piVar35 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar19 = uVar19 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059deb70,0);
LAB_03751b38:
              uVar18 = (*(code *)*puVar13)(plVar24,puVar13[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              *(long **)((long)puVar7 + -0x270) = plVar23;
              *(ulong *)((long)puVar7 + -0x268) = uVar34;
              func_0x0288f218((undefined1 *)((long)puVar7 + -0x270),
                              (undefined1 *)((long)puVar7 + -0x288),_DAT_05a29e48);
              *(undefined8 *)((long)puVar7 + -0x298) = *(undefined8 *)((long)puVar7 + -0x280);
              *(undefined8 *)((long)puVar7 + -0x2a0) = *(undefined8 *)((long)puVar7 + -0x288);
              *(undefined8 *)((long)puVar7 + -0x290) = *(undefined8 *)((long)puVar7 + -0x278);
              pcVar17 = (char *)func_0x0371f1bc(uVar18,plVar37,(undefined1 *)((long)puVar7 + -0x2a0)
                                                ,param_7,0);
              return pcVar17;
            }
            plVar15 = plVar31;
            if (plVar23 != (long *)0x0) {
              lVar27 = *plVar23;
              uVar19 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar19 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059defb8) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar19 = uVar19 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059defb8,0xb);
LAB_036dcee8:
              uVar19 = puVar13[1];
              plVar24 = plVar14;
              uVar21 = (*(code *)*puVar13)(plVar23,uVar25);
              if ((uVar21 & 1) == 0) goto LAB_036dcf40;
              lVar27 = *plVar28;
              uVar21 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar21 != 0) {
                piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dcfe0;
                  }
                  uVar21 = uVar21 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar21 != 0);
              }
              plVar24 = (long *)0x19;
              puVar13 = (undefined8 *)func_0x024d927c(plVar28);
LAB_036dcfe0:
              plVar31 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
              if (plVar31 != (long *)0x0) {
                lVar27 = *plVar31;
                uVar19 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar19 != 0) {
                  piVar35 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059e0150) {
                      puVar13 = (undefined8 *)(lVar27 + (long)(*piVar35 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar19 = uVar19 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar19 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar17 = (char *)(*(code *)*puVar13)(plVar31,plVar37,plVar23,uVar34,param_7,
                                                      puVar13[1]);
                return pcVar17;
              }
            }
          }
          goto LAB_036dd07c;
        }
        plVar24 = (long *)0x0;
        uVar21 = func_0x036edf9c(plVar15,uVar18);
        pcVar17 = (char *)0x0;
        if ((uVar21 & 1) != 0) {
          lVar27 = func_0x036d5e58(plVar15);
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          *(long **)((long)puVar7 + -0x290) = plVar23;
          *(ulong *)((long)puVar7 + -0x288) = uVar34;
          func_0x0288f218((undefined1 *)((long)puVar7 + -0x290),
                          (undefined1 *)((long)puVar7 + -0x2a8),_DAT_05a29e48);
          *(undefined8 *)((long)puVar7 + -0x2b8) = *(undefined8 *)((long)puVar7 + -0x2a0);
          *(undefined8 *)((long)puVar7 + -0x2c0) = *(undefined8 *)((long)puVar7 + -0x2a8);
          *(undefined8 *)((long)puVar7 + -0x2b0) = *(undefined8 *)((long)puVar7 + -0x298);
          pcVar17 = (char *)func_0x0371f1bc(uVar18,plVar37,(undefined1 *)((long)puVar7 + -0x2c0),
                                            param_7,0);
        }
      }
      return pcVar17;
    }
  }
LAB_036dd07c:
  auVar40 = func_0x0249fb90();
  *(undefined8 *)((long)puVar7 + -0x310) = 0x36dd080;
  *(long **)((long)puVar7 + -0x300) = plVar15;
  *(long **)((long)puVar7 + -0x2f8) = plVar28;
  *(ulong *)((long)puVar7 + -0x2f0) = uVar25;
  *(long **)((long)puVar7 + -0x2e8) = plVar14;
  *(long **)((long)puVar7 + -0x2e0) = plVar23;
  *(ulong *)((long)puVar7 + -0x2d8) = uVar34;
  *(long **)((long)puVar7 + -0x2d0) = plVar37;
  *(undefined8 *)((long)puVar7 + -0x2c8) = param_7;
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar17 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar17,0);
  pcVar17[0x10] = -2;
  pcVar17[0x11] = -1;
  pcVar17[0x12] = -1;
  pcVar17[0x13] = -1;
  uVar12 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar17 + 0x20) = uVar12;
  *(long *)(pcVar17 + 0x28) = auVar40._0_8_;
  func_0x0249f888(pcVar17 + 0x28,auVar40._0_8_);
  *(long *)(pcVar17 + 0x78) = auVar40._8_8_;
  func_0x0249f888(pcVar17 + 0x78,auVar40._8_8_);
  *(long **)(pcVar17 + 0x38) = plVar24;
  func_0x0249f888(pcVar17 + 0x38,plVar24);
  *(ulong *)(pcVar17 + 0x68) = uVar19;
  *(ulong *)(pcVar17 + 0x50) = uVar20;
  *(long **)(pcVar17 + 0x58) = plVar16;
  func_0x0249f888(pcVar17 + 0x50,0);
  return pcVar17;
}


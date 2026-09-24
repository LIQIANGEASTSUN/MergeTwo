/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean CanBeMergedWithItem(GameLogic.Player.IPlayer player, GameLogic.Player.Items.MergeItem otherItem, Metaplay.Core.MetaTime checkTimestamp)
 * Ghidra function entry: 036d9f04
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036d9f04(long *param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5,
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
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar9;
  int iVar10;
  ulong uVar23;
  undefined *extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  int *piVar36;
  undefined *puVar37;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  undefined *unaff_x28;
  long *plVar38;
  undefined *unaff_x29;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  
  plVar13 = (long *)func_0x03530bf4(param_4,0);
  plVar24 = param_3;
  plVar25 = plVar13;
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
  plVar17 = (long *)0x5e2d000;
  if (param_2 != (long *)0x0) {
    lVar28 = *param_2;
    uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar35 != 0) {
      piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
          goto LAB_036da040;
        }
        uVar35 = uVar35 - 1;
        piVar36 = piVar36 + 4;
      } while (uVar35 != 0);
    }
    plVar24 = (long *)0x5;
    puVar14 = (undefined8 *)func_0x024d927c(param_2);
LAB_036da040:
    plVar15 = (long *)(*(code *)*puVar14)(param_2,puVar14[1]);
    plVar29 = (long *)param_1[2];
    if (plVar29 != (long *)0x0) {
      plVar24 = *(long **)(*plVar29 + 0x1d0);
      plVar29 = (long *)(**(code **)(*plVar29 + 0x1c8))(plVar29,plVar15);
      plVar17 = plVar15;
      if ((param_3 != (long *)0x0) &&
         (plVar16 = (long *)param_3[2], unaff_x23 = plVar29, plVar16 != (long *)0x0)) {
        plVar24 = *(long **)(*plVar16 + 0x1d0);
        plVar16 = (long *)(**(code **)(*plVar16 + 0x1c8))(plVar16,plVar15);
        if (plVar29 != (long *)0x0) {
          lVar28 = *plVar29;
          unaff_x29 = &DAT_059dfbc0;
          uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar35 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 2) * 0x10 + 0x138);
                goto LAB_036da0ec;
              }
              uVar35 = uVar35 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar35 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,2);
LAB_036da0ec:
          unaff_x27 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
          plVar24 = (long *)0x0;
          uVar35 = func_0x036eb114(param_1,plVar15);
          unaff_x24 = plVar16;
          if ((uVar35 & 1) == 0) {
            uStack_6c = 0;
          }
          else {
            lVar28 = func_0x036d5e58(param_1);
            if ((lVar28 == 0) || (unaff_x25 = *(long **)(lVar28 + 0x38), unaff_x25 == (long *)0x0))
            goto LAB_036da728;
            lVar28 = *unaff_x25;
            uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar35 != 0) {
              piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar36 + -2) == _DAT_059df188) {
                  puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
                  goto LAB_036da184;
                }
                uVar35 = uVar35 - 1;
                piVar36 = piVar36 + 4;
              } while (uVar35 != 0);
            }
            puVar14 = (undefined8 *)func_0x024d927c(unaff_x25,_DAT_059df188,5);
LAB_036da184:
            uStack_6c = (*(code *)*puVar14)(unaff_x25,plVar13,puVar14[1]);
          }
          plVar24 = (long *)0x0;
          uVar35 = func_0x036eb114(param_3,plVar15);
          if ((uVar35 & 1) == 0) {
            plVar13 = (long *)0x0;
LAB_036da234:
            if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            unaff_x25 = (long *)&DAT_059dfe38;
            uVar8 = func_0x036c0cb8(plVar16);
            unaff_x28 = (undefined *)(ulong)uVar8;
            if (unaff_x27 != (long *)0x0) {
              lVar28 = *unaff_x27;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfe38) {
                    puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                    goto LAB_036da2b0;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar24 = (long *)0x0;
              puVar14 = (undefined8 *)func_0x024d927c(unaff_x27);
LAB_036da2b0:
              plVar38 = (long *)(*(code *)*puVar14)(unaff_x27,puVar14[1]);
              if (plVar38 == (long *)0x0) goto LAB_036da728;
              lVar28 = *plVar38;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfe68) {
                    puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                    goto LAB_036da318;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar38,_DAT_059dfe68,0);
LAB_036da318:
              param_5 = puVar14[1];
              plVar24 = param_3;
              plVar25 = plVar15;
              uVar35 = (*(code *)*puVar14)(plVar38,param_1,param_3,plVar15);
              if ((uVar35 & 1) == 0) {
                unaff_x27 = (long *)0x0;
              }
              else {
                unaff_x27 = (long *)(ulong)(uStack_6c & (uint)plVar13 ^ 1);
              }
            }
            if ((uVar8 & ((uint)unaff_x27 ^ 0xffffffff) & 1) == 0) {
LAB_036da49c:
              lVar28 = *plVar29;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0x12) * 0x10 + 0x138);
                    goto LAB_036da4ec;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar24 = (long *)0x12;
              puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036da4ec:
              plVar38 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
              unaff_x24 = plVar16;
              if (plVar38 != (long *)0x0) {
                lVar28 = *plVar38;
                unaff_x25 = (long *)&DAT_059df2a8;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059df2a8) {
                      puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                      goto LAB_036da554;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                plVar24 = (long *)0x0;
                puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036da554:
                uVar35 = (*(code *)*puVar14)(plVar38,puVar14[1]);
                if ((uVar35 & 1) == 0) {
joined_r0x036da5a4:
                  if (((ulong)unaff_x27 & 1) == 0) {
                    uVar8 = 0;
                  }
                  else {
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64();
                    }
                    uVar35 = func_0x036c69cc(plVar29,plVar15,&uStack_68);
                    uVar19 = uStack_68;
                    if ((uVar35 & 1) == 0) {
                      uVar8 = 1;
                    }
                    else {
                      if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                        func_0x0249fa64();
                      }
                      uVar8 = func_0x036c0a40(uVar19,param_2,0);
                    }
                  }
                  return (char *)(ulong)(uVar8 & 1);
                }
                lVar28 = *plVar29;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                      puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0x12) * 0x10 + 0x138);
                      goto LAB_036da614;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                plVar24 = (long *)0x12;
                puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036da614:
                plVar16 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
                unaff_x24 = plVar38;
                if (plVar16 != (long *)0x0) {
                  lVar28 = *plVar16;
                  uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar35 != 0) {
                    piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059df2a8) {
                        puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 1) * 0x10 + 0x138);
                        goto LAB_036da678;
                      }
                      uVar35 = uVar35 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar35 != 0);
                  }
                  plVar24 = (long *)0x1;
                  puVar14 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036da678:
                  plVar38 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
                  unaff_x24 = plVar16;
                  if (plVar38 != (long *)0x0) {
                    lVar28 = *plVar38;
                    uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                    if (uVar35 != 0) {
                      piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar36 + -2) == _DAT_059df2c0) {
                          puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 1) * 0x10 + 0x138);
                          goto LAB_036da6e4;
                        }
                        uVar35 = uVar35 - 1;
                        piVar36 = piVar36 + 4;
                      } while (uVar35 != 0);
                    }
                    puVar14 = (undefined8 *)func_0x024d927c(plVar38,_DAT_059df2c0,1);
LAB_036da6e4:
                    unaff_x27 = (long *)(*(code *)*puVar14)(plVar38,param_1,param_3,param_2,
                                                            puVar14[1]);
                    goto joined_r0x036da5a4;
                  }
                }
              }
            }
            else if (plVar16 != (long *)0x0) {
              lVar28 = *plVar16;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 2) * 0x10 + 0x138);
                    goto LAB_036da3a4;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar24 = (long *)0x2;
              puVar14 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036da3a4:
              plVar38 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
              if (plVar38 != (long *)0x0) {
                lVar28 = *plVar38;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059dfe38) {
                      puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                      goto LAB_036da404;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                plVar24 = (long *)0x0;
                puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036da404:
                plVar16 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
                unaff_x24 = plVar38;
                if (plVar16 != (long *)0x0) {
                  lVar28 = *plVar16;
                  uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar35 != 0) {
                    piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059dfe68) {
                        puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                        goto LAB_036da46c;
                      }
                      uVar35 = uVar35 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar35 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfe68,0);
LAB_036da46c:
                  param_5 = puVar14[1];
                  plVar24 = param_1;
                  plVar25 = plVar15;
                  uVar35 = (*(code *)*puVar14)(plVar16,param_3,param_1,plVar15);
                  if ((uVar35 & 1) == 0) {
                    unaff_x27 = (long *)0x0;
                  }
                  else {
                    unaff_x27 = (long *)(ulong)(uStack_6c & (uint)plVar13 ^ 1);
                  }
                  goto LAB_036da49c;
                }
              }
            }
          }
          else {
            lVar28 = func_0x036d5e58(param_3);
            if (lVar28 != 0) {
              plVar38 = *(long **)(lVar28 + 0x38);
              unaff_x28 = (undefined *)0x0;
              if (plVar38 != (long *)0x0) {
                lVar28 = *plVar38;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059df188) {
                      puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
                      goto LAB_036da220;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                puVar14 = (undefined8 *)func_0x024d927c(plVar38,_DAT_059df188,5);
LAB_036da220:
                plVar24 = (long *)puVar14[1];
                uVar35 = (*(code *)*puVar14)(plVar38,plVar13);
                plVar13 = (long *)(uVar35 & 0xffffffff);
                goto LAB_036da234;
              }
            }
          }
        }
      }
    }
  }
LAB_036da728:
  auVar41 = func_0x0249fb90();
  plVar16 = auVar41._8_8_;
  plVar29 = auVar41._0_8_;
  uStack_b0 = 0x36da72c;
  puVar37 = (undefined *)0x5e2d000;
  plVar15 = plVar24;
  plStack_a0 = unaff_x24;
  plStack_98 = unaff_x23;
  plStack_90 = plVar17;
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
  if (plVar16 != (long *)0x0) {
    lVar28 = *plVar16;
    uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar35 != 0) {
      piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
          goto LAB_036da820;
        }
        uVar35 = uVar35 - 1;
        piVar36 = piVar36 + 4;
      } while (uVar35 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_036da820:
    puVar37 = (undefined *)(*(code *)*puVar14)(plVar16,puVar14[1]);
    plVar25 = (long *)0x0;
    plVar15 = plVar24;
    func_0x0371f100(&uStack_d0,plVar29,plVar24,0);
    plVar17 = (long *)plVar29[2];
    if (plVar17 != (long *)0x0) {
      plVar24 = (long *)(**(code **)(*plVar17 + 0x1c8))
                                  (plVar17,puVar37,*(undefined8 *)(*plVar17 + 0x1d0));
      plVar15 = (long *)0x0;
      uVar35 = func_0x036ecc48(plVar29,puVar37);
      if ((uVar35 & 1) == 0) {
        if (plVar24 != (long *)0x0) {
          lVar28 = *plVar24;
          puVar37 = &DAT_059dfbc0;
          uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar35 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 1) * 0x10 + 0x138);
                goto LAB_036da988;
              }
              uVar35 = uVar35 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar35 != 0);
          }
          plVar15 = (long *)0x1;
          puVar14 = (undefined8 *)func_0x024d927c(plVar24);
LAB_036da988:
          plVar17 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
          if (plVar17 != (long *)0x0) {
            lVar28 = *plVar17;
            uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar35 != 0) {
              piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar36 + -2) == _DAT_059df498) {
                  puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 2) * 0x10 + 0x138);
                  goto LAB_036daa84;
                }
                uVar35 = uVar35 - 1;
                piVar36 = piVar36 + 4;
              } while (uVar35 != 0);
            }
            puVar14 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059df498,2);
LAB_036daa84:
            plVar29 = (long *)(*(code *)*puVar14)(plVar17,puVar14[1]);
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
            plVar15 = &lStack_120;
            plVar25 = (long *)0x0;
            param_5 = 0;
            uStack_118 = uStack_e0;
            lStack_120 = lStack_e8;
            uStack_110 = uStack_d8;
            pcVar18 = (char *)func_0x0371f1bc(plVar29,plVar16,plVar15,0);
            if (pcVar18 != (char *)0x0) {
              return pcVar18;
            }
            lVar28 = *plVar24;
            uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar35 != 0) {
              piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                  puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                  goto LAB_036dab68;
                }
                uVar35 = uVar35 - 1;
                piVar36 = piVar36 + 4;
              } while (uVar35 != 0);
            }
            plVar15 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x024d927c(plVar24);
LAB_036dab68:
            plVar17 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
            if (plVar17 != (long *)0x0) {
              lVar28 = *plVar17;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059e0788) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 4) * 0x10 + 0x138);
                    goto LAB_036dabd4;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar15 = (long *)0x4;
              puVar14 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036dabd4:
              plVar38 = (long *)(*(code *)*puVar14)(plVar17,puVar14[1]);
              plVar29 = plVar17;
              if (plVar38 != (long *)0x0) {
                uVar19 = uStack_d0;
                uVar39 = uStack_c8;
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_168 = uStack_c8;
                  uStack_170 = uStack_d0;
                  func_0x0249fa64();
                  uVar19 = uStack_170;
                  uVar39 = uStack_168;
                }
                uStack_c0 = uVar19;
                uStack_b8 = uVar39;
                func_0x0288f218(&uStack_c0,&lStack_e8,_DAT_05a29e48);
                plVar15 = &lStack_140;
                plVar25 = (long *)0x0;
                param_5 = 0;
                uStack_138 = uStack_e0;
                lStack_140 = lStack_e8;
                uStack_130 = uStack_d8;
                pcVar18 = (char *)func_0x0371f1bc(plVar38,plVar16,plVar15,0);
                plVar29 = plVar38;
                if (pcVar18 != (char *)0x0) {
                  return pcVar18;
                }
              }
              lVar28 = *plVar24;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                    goto LAB_036dac94;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar15 = (long *)0x3;
              puVar14 = (undefined8 *)func_0x024d927c(plVar24);
LAB_036dac94:
              plVar17 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
              if (plVar17 != (long *)0x0) {
                lVar28 = *plVar17;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                      puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 4) * 0x10 + 0x138);
                      goto LAB_036dad00;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                puVar14 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059deb70,4);
LAB_036dad00:
                lVar28 = (*(code *)*puVar14)(plVar17,puVar14[1]);
                if (lVar28 == 0) {
                  return (char *)0x0;
                }
                uVar19 = uStack_d0;
                uVar39 = uStack_c8;
                if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                  uStack_168 = uStack_c8;
                  uStack_170 = uStack_d0;
                  func_0x0249fa64();
                  uVar19 = uStack_170;
                  uVar39 = uStack_168;
                }
                uStack_c0 = uVar19;
                uStack_b8 = uVar39;
                func_0x0288f218(&uStack_c0,&lStack_e8,_DAT_05a29e48);
                plVar24 = alStack_160;
                goto LAB_036daa5c;
              }
            }
          }
        }
      }
      else if (plVar24 != (long *)0x0) {
        lVar28 = *plVar24;
        uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar35 != 0) {
          piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
              puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 9) * 0x10 + 0x138);
              goto LAB_036da91c;
            }
            uVar35 = uVar35 - 1;
            piVar36 = piVar36 + 4;
          } while (uVar35 != 0);
        }
        plVar15 = (long *)0x9;
        puVar14 = (undefined8 *)func_0x024d927c(plVar24);
LAB_036da91c:
        plVar17 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
        if (plVar17 != (long *)0x0) {
          lVar28 = *plVar17;
          uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar35 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059e0158) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 4) * 0x10 + 0x138);
                goto LAB_036da9f4;
              }
              uVar35 = uVar35 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar35 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059e0158,4);
LAB_036da9f4:
          lVar28 = (*(code *)*puVar14)(plVar17,puVar14[1]);
          if (lVar28 == 0) {
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
          plVar24 = &lStack_100;
          uStack_f8 = uStack_e0;
          lStack_100 = lStack_e8;
          uStack_f0 = uStack_d8;
LAB_036daa5c:
          pcVar18 = (char *)func_0x0371f1bc(lVar28,plVar16,plVar24,0,0);
          return pcVar18;
        }
      }
    }
  }
  plVar17 = (long *)func_0x0249fb90();
  auStack_190[0] = 0x36dad60;
  plStack_180 = plVar24;
  plStack_178 = plVar16;
  if ((bRam0000000005e2da4a & 1) == 0) {
    func_0x0249f8e4(&DAT_059dd500);
    bRam0000000005e2da4a = 1;
  }
  lVar28 = func_0x036d5e58(plVar17);
  if (lVar28 != 0) {
    if (*(long *)(lVar28 + 0x40) == 0) {
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
      pcVar18 = (char *)0x10000;
    }
    else {
      pcVar18 = (char *)(ulong)*(uint *)(*(long *)(lVar28 + 0x40) + 0x10);
    }
    return pcVar18;
  }
  auVar41 = func_0x0249fb90();
  plVar24 = auVar41._0_8_;
  puStack_1b0 = (undefined *)0x36dae04;
  plStack_1a0 = (long *)0x5e2d000;
  plStack_1a8 = plVar29;
  plStack_198 = plVar17;
  plVar17 = (long *)func_0x03530c84(auVar41._8_8_,0);
  puVar7 = auStack_1d0;
  auStack_1d0[0] = puStack_1b0;
  plVar29 = (long *)0x5e2d000;
  plStack_1c0 = unaff_x24;
  plStack_1b8 = unaff_x23;
  puStack_1b0 = puVar37;
  if ((bRam0000000005e2da30 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2da30 = 1;
  }
  plVar16 = (long *)&DAT_059e2c00;
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar38 = plVar24;
  func_0x0364aa28(plVar15,plVar25,plVar24,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar19 = func_0x03530158(plVar17,0);
  auVar41._8_8_ = uVar19;
  auVar41._0_8_ = plVar24;
  if (extraout_x1 == (undefined *)0x0) {
    uVar35 = 1;
    if (plVar24 == (long *)0x0) goto LAB_036daf14;
LAB_036daef0:
    puVar7 = auStack_190;
    plVar38 = plVar15;
    plVar15 = plStack_198;
    plVar24 = plStack_1a0;
    plVar17 = plStack_1a8;
    puVar37 = puStack_1b0;
    plVar16 = plStack_1b8;
    plVar29 = plStack_1c0;
    uVar19 = auStack_1d0[0];
  }
  else {
    uVar35 = (ulong)*(uint *)(extraout_x1 + 0x1c);
    if (plVar24 != (long *)0x0) goto LAB_036daef0;
LAB_036daf14:
    uVar19 = 0x36daf18;
    auVar41 = func_0x0249fb90();
    puVar37 = extraout_x1;
  }
  plVar31 = auVar41._8_8_;
  lVar28 = auVar41._0_8_;
  *(undefined8 *)((long)puVar7 + -0x50) = uVar19;
  *(long **)((long)puVar7 + -0x40) = plVar13;
  *(long **)((long)puVar7 + -0x38) = unaff_x25;
  *(long **)((long)puVar7 + -0x30) = plVar29;
  *(long **)((long)puVar7 + -0x28) = plVar16;
  *(undefined **)((long)puVar7 + -0x20) = puVar37;
  *(long **)((long)puVar7 + -0x18) = plVar17;
  *(long **)((long)puVar7 + -0x10) = plVar24;
  *(long **)((long)puVar7 + -8) = plVar15;
  plVar25 = (long *)(uVar35 & 0xffffffff);
  plVar24 = plVar38;
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
  uVar20 = 0x5e2d000;
  if (plVar38 != (long *)0x0) {
    lVar30 = *plVar38;
    uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar35 != 0) {
      piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138);
          goto LAB_036db040;
        }
        uVar35 = uVar35 - 1;
        piVar36 = piVar36 + 4;
      } while (uVar35 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar38,_DAT_059df8e8,5);
LAB_036db040:
    uVar20 = (*(code *)*puVar14)(plVar38,puVar14[1]);
    uVar35 = 0;
    uVar21 = func_0x036ee328(lVar28,plVar38,plVar25);
    if ((uVar21 & 1) == 0) {
      return (char *)0x0;
    }
    uVar21 = func_0x036ed7f4(lVar28,uVar20,0);
    if ((uVar21 & 1) != 0) {
      return (char *)0x2;
    }
    plVar24 = (long *)0x0;
    uVar21 = func_0x036edd98(lVar28,uVar20);
    if ((uVar21 & 1) == 0) {
      plVar24 = (long *)0x0;
      uVar21 = func_0x036edf9c(lVar28,uVar20);
      if ((uVar21 & 1) == 0) {
        return (char *)0x0;
      }
      lVar28 = func_0x036d5e58(lVar28);
      if ((lVar28 != 0) && (*(long *)(lVar28 + 0xa8) != 0)) {
        plVar17 = *(long **)(*(long *)(lVar28 + 0xa8) + 0x10);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = plVar31;
        auVar41 = auVar42 << 0x40;
        if (plVar17 != (long *)0x0) {
          lVar28 = *plVar17;
          uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar35 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059e0170) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 4) * 0x10 + 0x138);
                goto LAB_036db338;
              }
              uVar35 = uVar35 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar35 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059e0170,4);
LAB_036db338:
          uVar35 = (*(code *)*puVar14)(plVar17,puVar14[1]);
          uVar8 = 1;
          if ((uVar35 & 1) != 0) {
            uVar8 = 2;
          }
          return (char *)(ulong)uVar8;
        }
      }
    }
    else {
      plVar17 = *(long **)(lVar28 + 0x10);
      if (plVar17 != (long *)0x0) {
        plVar38 = (long *)(**(code **)(*plVar17 + 0x1c8))
                                    (plVar17,uVar20,*(undefined8 *)(*plVar17 + 0x1d0));
        plVar24 = (long *)0x0;
        uVar35 = 0;
        func_0x037275b8(lVar28,plVar31);
        lVar30 = func_0x036d5e58(lVar28);
        if ((lVar30 != 0) && (*(long *)(lVar30 + 0x28) != 0)) {
          plVar24 = (long *)0x0;
          func_0x03700cf4(*(long *)(lVar30 + 0x28),plVar25);
          if (plVar38 != (long *)0x0) {
            lVar30 = *plVar38;
            plVar29 = (long *)&DAT_059dfbc0;
            uVar21 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar21 != 0) {
              piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                  puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                  goto LAB_036db1dc;
                }
                uVar21 = uVar21 - 1;
                piVar36 = piVar36 + 4;
              } while (uVar21 != 0);
            }
            plVar24 = (long *)0x3;
            puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036db1dc:
            plVar17 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
            if (plVar17 != (long *)0x0) {
              lVar30 = *plVar17;
              unaff_x25 = (long *)&DAT_059deb70;
              uVar21 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar21 != 0) {
                piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                    puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 2) * 0x10 + 0x138);
                    goto LAB_036db248;
                  }
                  uVar21 = uVar21 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar21 != 0);
              }
              plVar24 = (long *)0x2;
              puVar14 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036db248:
              plVar25 = (long *)(*(code *)*puVar14)(plVar17,puVar14[1]);
              lVar30 = func_0x036d5e58(lVar28);
              if (((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) &&
                 (uVar21 = func_0x037537dc(*(long *)(lVar30 + 0x18),0), plVar25 != (long *)0x0)) {
                lVar30 = *plVar25;
                plVar13 = (long *)&DAT_059deb60;
                uVar20 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar20 != 0) {
                  piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059deb60) {
                      puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 0x12) * 0x10 + 0x138);
                      goto LAB_036db2d4;
                    }
                    uVar20 = uVar20 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar20 != 0);
                }
                puVar14 = (undefined8 *)func_0x024d927c(plVar25,_DAT_059deb60,0x12);
LAB_036db2d4:
                plVar24 = (long *)puVar14[1];
                uVar22 = (*(code *)*puVar14)(plVar25,uVar21 & 0xffffffff);
                uVar20 = uVar21;
                if ((uVar22 & 1) != 0) {
                  lVar30 = *plVar25;
                  uVar21 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar21 != 0) {
                    piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059deb60) {
                        puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                        goto LAB_036db364;
                      }
                      uVar21 = uVar21 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x024d927c(plVar25,_DAT_059deb60,3);
LAB_036db364:
                  auVar42 = (*(code *)*puVar14)(plVar25,puVar14[1]);
                  *(undefined1 (*) [16])((long)puVar7 + -0x68) = auVar42;
                  if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                    func_0x0249fa64();
                  }
                  plVar24 = _DAT_05a29960;
                  uVar21 = func_0x0288eda8((undefined1 *)((long)puVar7 + -0x68),
                                           (undefined1 *)((long)puVar7 + -0x58));
                  if ((uVar21 & 1) != 0) {
                    lVar30 = func_0x036d5e58(lVar28);
                    if ((lVar30 == 0) || (*(long *)(lVar30 + 0x18) == 0)) goto LAB_036db604;
                    uVar35 = 0;
                    plVar24 = plVar31;
                    func_0x03754988(*(long *)(lVar30 + 0x18),*(undefined8 *)((long)puVar7 + -0x58));
                  }
                }
                iVar9 = func_0x036fa7dc(lVar28,0);
                if (0 < iVar9) {
                  return (char *)0x1;
                }
                lVar30 = *plVar38;
                uVar21 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar21 != 0) {
                  piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                      puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                      goto LAB_036db434;
                    }
                    uVar21 = uVar21 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar21 != 0);
                }
                plVar24 = (long *)0x3;
                puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036db434:
                plVar17 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
                if (plVar17 != (long *)0x0) {
                  lVar30 = *plVar17;
                  uVar21 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar21 != 0) {
                    piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                        puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 0xe) * 0x10 + 0x138);
                        goto LAB_036db498;
                      }
                      uVar21 = uVar21 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059deb70,0xe);
LAB_036db498:
                  uVar21 = (*(code *)*puVar14)(plVar17,puVar14[1]);
                  if ((uVar21 & 1) == 0) {
                    return (char *)0x1;
                  }
                  plVar24 = plVar38;
                  plVar15 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                  plVar25 = plVar17;
                  if ((plVar15 != (long *)0x0) &&
                     (plVar17 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar24 = plVar15,
                     plVar17 != (long *)0x0)) {
                    uVar21 = func_0x022bffa8(0,_DAT_059deb60);
                    plVar25 = (long *)(uVar21 & 0xffffffff);
                    lVar30 = func_0x036d5ec8(lVar28);
                    plVar24 = plVar17;
                    if (lVar30 != 0) {
                      uVar21 = func_0x0375380c(lVar30,plVar25,0);
                      if ((uVar21 & 1) != 0) {
                        return (char *)0x1;
                      }
                      plVar24 = plVar38;
                      lVar30 = func_0x022bffa8(3,_DAT_059dfbc0);
                      if (lVar30 != 0) {
                        uVar21 = func_0x022bffa8(0x10,_DAT_059deb70,lVar30);
                        if ((uVar21 & 1) == 0) {
                          return (char *)0x2;
                        }
                        lVar28 = func_0x036d5ec8(lVar28);
                        uVar19 = func_0x03530c84(plVar31,0);
                        auVar2._8_8_ = uVar19;
                        auVar2._0_8_ = lVar28;
                        auVar41._8_8_ = uVar19;
                        auVar41._0_8_ = lVar28;
                        plVar24 = plVar38;
                        plVar17 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                        if (plVar17 != (long *)0x0) {
                          auVar41 = func_0x022bffa8(0xc,_DAT_059deb70);
                          *(undefined1 (*) [16])((long)puVar7 + -0x78) = auVar41;
                          uVar21 = func_0x022bf4f8((undefined1 *)((long)puVar7 + -0x78),
                                                   _DAT_05a27ee0);
                          uVar39 = 0;
                          uVar40 = 0;
                          if ((uVar21 & 1) != 0) {
                            plVar38 = (long *)func_0x023f3ca0((undefined1 *)((long)puVar7 + -0x78),
                                                              _DAT_05a27ed8);
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64(_DAT_059e2ba0);
                            }
                            uVar19 = func_0x0430d994(uVar19,plVar38,0);
                            *(undefined8 *)((long)puVar7 + -0x48) = uVar19;
                            *(undefined8 *)((long)puVar7 + -0x90) = 0;
                            *(undefined8 *)((long)puVar7 + -0x88) = 0;
                            plVar17 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)puVar7 + -0x90),
                                            (undefined1 *)((long)puVar7 + -0x48));
                            uVar40 = *(undefined8 *)((long)puVar7 + -0x88);
                            uVar39 = *(undefined8 *)((long)puVar7 + -0x90);
                          }
                          plVar24 = plVar17;
                          auVar41 = auVar2;
                          if (lVar28 != 0) {
                            *(undefined8 *)(lVar28 + 0x68) = uVar40;
                            *(undefined8 *)(lVar28 + 0x60) = uVar39;
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
  auVar42 = func_0x0249fb90();
  lVar28 = auVar42._0_8_;
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x36db608;
  *(long **)((long)puVar7 + -0xd0) = plVar13;
  *(long **)((long)puVar7 + -200) = unaff_x25;
  *(long **)((long)puVar7 + -0xc0) = plVar29;
  *(ulong *)((long)puVar7 + -0xb8) = uVar20;
  *(long **)((long)puVar7 + -0xb0) = plVar25;
  *(long **)((long)puVar7 + -0xa8) = plVar38;
  *(long *)((long)puVar7 + -0xa0) = auVar41._8_8_;
  *(long *)((long)puVar7 + -0x98) = auVar41._0_8_;
  plVar16 = (long *)0x5e2d000;
  plVar29 = (long *)(param_5 & 0xffffffff);
  puVar37 = (undefined *)(uVar35 & 0xffffffff);
  plVar25 = (long *)(auVar42._8_8_ & 0xffffffff);
  plVar17 = plVar24;
  uVar20 = uVar35;
  uVar21 = param_5;
  plVar15 = param_6;
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
  plVar38 = plVar24;
  if (plVar24 == (long *)0x0) {
LAB_036dbb68:
    uVar19 = 0x36dbb6c;
    auVar43 = func_0x0249fb90();
    plVar24 = plVar17;
  }
  else {
    lVar30 = *plVar24;
    uVar20 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar20 != 0) {
      piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar20 = uVar20 - 1;
        piVar36 = piVar36 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059df8e8,5);
LAB_036db6f0:
    plVar16 = (long *)(*(code *)*puVar14)(plVar24,puVar14[1]);
    uVar20 = func_0x036edd98(lVar28,plVar16,0);
    if (((uVar20 & 1) == 0) && (uVar20 = func_0x036edf9c(lVar28,plVar16,0), (uVar20 & 1) == 0)) {
      return (char *)0x0;
    }
    iVar9 = (int)uVar35;
    uVar8 = iVar9 * auVar42._8_4_;
    plVar13 = (long *)(ulong)uVar8;
    uVar20 = 0;
    plVar17 = plVar13;
    uVar22 = func_0x036ee328(lVar28,plVar24);
    if ((uVar22 & 1) == 0) {
      return (char *)0x0;
    }
    lVar30 = func_0x036d5e58(lVar28);
    if (lVar30 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar30 + 0x50)) {
      lVar30 = func_0x036d5e58();
      if (lVar30 != 0) {
        if ((int)uVar8 < *(int *)(lVar30 + 0x50)) {
          *(int *)param_6 = auVar42._8_4_;
          lVar30 = func_0x036d5e58(lVar28);
          if (lVar30 != 0) {
            *(uint *)(lVar30 + 0x50) = *(int *)(lVar30 + 0x50) - uVar8;
            return (char *)0x1;
          }
        }
        else {
          plVar24 = *(long **)(lVar28 + 0x10);
          if (plVar24 != (long *)0x0) {
            plVar38 = (long *)(**(code **)(*plVar24 + 0x1c8))
                                        (plVar24,plVar16,*(undefined8 *)(*plVar24 + 0x1d0));
            plVar17 = (long *)0x0;
            uVar35 = func_0x036edd98(lVar28,plVar16);
            if (((uVar35 & 1) == 0) || (iVar9 = func_0x036fa7dc(lVar28,0), 0 < iVar9)) {
LAB_036dbaac:
              plVar17 = (long *)0x0;
              uVar35 = func_0x036edf9c(lVar28,plVar16);
              if ((uVar35 & 1) == 0) {
                return (char *)0x1;
              }
              lVar30 = func_0x036d5e58(lVar28);
              if ((lVar30 != 0) && (*(long *)(lVar30 + 0xa8) != 0)) {
                plVar24 = *(long **)(*(long *)(lVar30 + 0xa8) + 0x10);
                lVar28 = 0;
                if (plVar24 != (long *)0x0) {
                  lVar28 = *plVar24;
                  uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar35 != 0) {
                    piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059e0170) {
                        puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 1) * 0x10 + 0x138);
                        goto LAB_036dbb34;
                      }
                      uVar35 = uVar35 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar35 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059e0170,1);
LAB_036dbb34:
                  uVar35 = (*(code *)*puVar14)(plVar24,puVar14[1]);
                  if ((uVar35 & 1) != 0) {
                    return (char *)0x1;
                  }
                  return (char *)0x2;
                }
              }
            }
            else if (plVar38 != (long *)0x0) {
              lVar30 = *plVar38;
              param_6 = (long *)&DAT_059dfbc0;
              uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                    goto LAB_036db9cc;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar17 = (long *)0x3;
              puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036db9cc:
              plVar24 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
              if (plVar24 != (long *)0x0) {
                lVar30 = *plVar24;
                puVar37 = &DAT_059deb70;
                uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                      puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 0xe) * 0x10 + 0x138);
                      goto LAB_036dba38;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                puVar14 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059deb70,0xe);
LAB_036dba38:
                uVar35 = (*(code *)*puVar14)(plVar24,puVar14[1]);
                plVar29 = plVar24;
                if ((uVar35 & 1) == 0) goto LAB_036dbaac;
                plVar17 = plVar38;
                plVar24 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                if ((plVar24 != (long *)0x0) &&
                   (plVar31 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar17 = plVar24,
                   plVar31 != (long *)0x0)) {
                  uVar35 = func_0x022bffa8(0,_DAT_059deb60);
                  lVar30 = func_0x036d5ec8(lVar28);
                  plVar17 = plVar31;
                  plVar38 = (long *)(uVar35 & 0xffffffff);
                  if (lVar30 != 0) {
                    uVar35 = func_0x0375380c(lVar30,(long *)(uVar35 & 0xffffffff),0);
                    if ((uVar35 & 1) == 0) {
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
    plVar17 = (long *)0x0;
    uVar22 = func_0x036edd98(lVar28,plVar16);
    if ((uVar22 & 1) == 0) {
      plVar17 = (long *)0x0;
      uVar35 = func_0x036edf9c(lVar28,plVar16);
      if ((uVar35 & 1) == 0) {
        return (char *)0x1;
      }
      lVar30 = func_0x036d5e58(lVar28);
      if (((lVar30 == 0) || (*(long *)(lVar30 + 0xa8) == 0)) ||
         (plVar16 = *(long **)(*(long *)(lVar30 + 0xa8) + 0x10), plVar16 == (long *)0x0))
      goto LAB_036dbb68;
      lVar30 = *plVar16;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar36 + -2) == _DAT_059e0170) {
            puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar35 = uVar35 - 1;
          piVar36 = piVar36 + 4;
        } while (uVar35 != 0);
      }
      puVar14 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0170,5);
LAB_036db928:
      iVar10 = (*(code *)*puVar14)(plVar16,puVar14[1]);
      iVar27 = iVar10;
      if (iVar9 < iVar10) {
        iVar34 = (int)*param_6;
        do {
          iVar27 = iVar27 - iVar9;
          iVar34 = iVar34 + 1;
        } while (iVar9 < iVar27);
        *(int *)param_6 = iVar34;
      }
      uVar8 = iVar27 - iVar10;
    }
    else {
      lVar30 = func_0x036d5e58(lVar28);
      if ((lVar30 == 0) || (*(long *)(lVar30 + 0x28) == 0)) goto LAB_036dbb68;
      uVar8 = *(uint *)(*(long *)(lVar30 + 0x28) + 0x10);
      plVar16 = (long *)(ulong)uVar8;
      plVar25 = plVar16;
      uVar11 = uVar8;
      while (iVar9 < (int)uVar11) {
        lVar30 = func_0x036d5e58(lVar28);
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x28) == 0)) goto LAB_036dbb68;
        plVar17 = (long *)0x0;
        func_0x03700cf4(*(long *)(lVar30 + 0x28),uVar35 & 0xffffffff);
        uVar11 = (int)plVar25 - iVar9;
        plVar25 = (long *)(ulong)uVar11;
        *(int *)param_6 = (int)*param_6 + 1;
      }
      uVar8 = (int)plVar25 - uVar8;
    }
    puVar37 = (undefined *)(ulong)uVar8;
    param_6 = (long *)func_0x036d5e58(lVar28);
    auVar43._8_4_ = (uint)param_5 & 1;
    auVar43._0_8_ = lVar28;
    auVar43._12_4_ = 0;
    uVar19 = 0x36db980;
  }
  lVar30 = auVar43._0_8_;
  *(undefined8 *)((long)puVar7 + -0x120) = uVar19;
  *(long **)((long)puVar7 + -0x110) = plVar16;
  *(undefined **)((long)puVar7 + -0x108) = puVar37;
  *(long **)((long)puVar7 + -0x100) = param_6;
  *(long **)((long)puVar7 + -0xf8) = plVar29;
  *(long **)((long)puVar7 + -0xf0) = plVar38;
  *(long *)((long)puVar7 + -0xe8) = lVar28;
  plVar38 = (long *)0x5e2d000;
  plVar29 = (long *)(auVar43._8_8_ & 0xffffffff);
  plVar17 = plVar24;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar28 = func_0x036d5e58(lVar30);
  if (lVar28 != 0) {
    if (*(int *)(lVar28 + 0x50) < 1) {
      if (plVar24 != (long *)0x0) {
        lVar28 = *plVar24;
        plVar38 = (long *)&DAT_059df8e8;
        uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar35 != 0) {
          piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
              puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar35 = uVar35 - 1;
            piVar36 = piVar36 + 4;
          } while (uVar35 != 0);
        }
        puVar14 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar19 = (*(code *)*puVar14)(plVar24,puVar14[1]);
        plVar17 = (long *)0x0;
        uVar22 = func_0x036edd98(lVar30,uVar19);
        lVar28 = *plVar24;
        uVar1 = *(ushort *)(lVar28 + 0x12e);
        uVar35 = (ulong)uVar1;
        if ((uVar22 & 1) == 0) {
          if (uVar1 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar35 = uVar35 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar35 != 0);
          }
          puVar14 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar19 = (*(code *)*puVar14)(plVar24,puVar14[1]);
          plVar17 = (long *)0x0;
          uVar35 = func_0x036edf9c(lVar30,uVar19);
          if ((uVar35 & 1) == 0) {
            uVar8 = 0;
            goto LAB_036dbc00;
          }
          lVar28 = func_0x036d5e58(lVar30);
          if ((lVar28 != 0) && (*(long *)(lVar28 + 0xa8) != 0)) {
            plVar31 = *(long **)(*(long *)(lVar28 + 0xa8) + 0x10);
            lVar30 = 0;
            if (plVar31 != (long *)0x0) {
              lVar28 = *plVar31;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059e0170) {
                    iVar9 = *piVar36 + 6;
                    goto LAB_036dbfbc;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              uVar19 = 6;
              lVar28 = _DAT_059e0170;
              goto LAB_036dbfac;
            }
          }
        }
        else {
          if (uVar1 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar35 = uVar35 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar35 != 0);
          }
          plVar17 = (long *)0x5;
          puVar14 = (undefined8 *)func_0x024d927c(plVar24);
LAB_036dbd14:
          uVar19 = (*(code *)*puVar14)(plVar24,puVar14[1]);
          plVar31 = *(long **)(lVar30 + 0x10);
          if (plVar31 != (long *)0x0) {
            plVar17 = *(long **)(*plVar31 + 0x1d0);
            plVar38 = (long *)(**(code **)(*plVar31 + 0x1c8))(plVar31,uVar19);
            if ((auVar43._8_8_ & 1) == 0) {
LAB_036dbefc:
              if (plVar38 != (long *)0x0) {
                lVar28 = *plVar38;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                      puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                plVar17 = (long *)0x3;
                puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036dbf58:
                plVar31 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
                if (plVar31 != (long *)0x0) {
                  lVar28 = *plVar31;
                  uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar35 != 0) {
                    piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                        iVar9 = *piVar36 + 0x14;
LAB_036dbfbc:
                        puVar14 = (undefined8 *)(lVar28 + (long)iVar9 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar35 = uVar35 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar35 != 0);
                  }
                  uVar19 = 0x14;
                  lVar28 = _DAT_059deb70;
LAB_036dbfac:
                  puVar14 = (undefined8 *)func_0x024d927c(plVar31,lVar28,uVar19);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar18 = (char *)(*(code *)*puVar14)(plVar31,puVar14[1]);
                  return pcVar18;
                }
              }
            }
            else if (plVar38 != (long *)0x0) {
              lVar28 = *plVar38;
              puVar37 = &DAT_059dfbc0;
              uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar35 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar35 = uVar35 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar35 != 0);
              }
              plVar17 = (long *)0x19;
              puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036dbe38:
              plVar31 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
              if (plVar31 != (long *)0x0) {
                lVar28 = *plVar31;
                plVar16 = (long *)&DAT_059e0150;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059e0150) {
                      puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                plVar17 = (long *)0x0;
                puVar14 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dbeac:
                uVar35 = (*(code *)*puVar14)(plVar31,puVar14[1]);
                plVar29 = plVar31;
                if ((uVar35 & 1) == 0) goto LAB_036dbefc;
                lVar28 = *plVar38;
                uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar35 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                      puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar35 = uVar35 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar35 != 0);
                }
                plVar17 = (long *)0x19;
                puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036dbff0:
                plVar31 = (long *)(*(code *)*puVar14)(plVar38,puVar14[1]);
                if (plVar31 != (long *)0x0) {
                  lVar28 = *plVar31;
                  uVar35 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar35 != 0) {
                    piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059e0150) {
                        puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar35 = uVar35 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar35 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar18 = (char *)(*(code *)*puVar14)(plVar31,lVar30,plVar24,puVar14[1]);
                  return pcVar18;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar28 = func_0x036d5e58(lVar30);
      if (lVar28 != 0) {
        uVar8 = *(uint *)(lVar28 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar8;
      }
    }
  }
  auVar44 = func_0x0249fb90();
  plVar31 = auVar44._8_8_;
  lVar28 = auVar44._0_8_;
  *(undefined **)((long)puVar7 + -0x180) = unaff_x29;
  *(undefined8 *)((long)puVar7 + -0x178) = 0x36dc07c;
  *(undefined **)((long)puVar7 + -0x170) = unaff_x28;
  *(long **)((long)puVar7 + -0x168) = unaff_x27;
  *(long **)((long)puVar7 + -0x160) = plVar13;
  *(long **)((long)puVar7 + -0x158) = plVar25;
  *(long **)((long)puVar7 + -0x150) = plVar16;
  *(undefined **)((long)puVar7 + -0x148) = puVar37;
  *(long **)((long)puVar7 + -0x140) = plVar29;
  *(long **)((long)puVar7 + -0x138) = plVar38;
  *(long **)((long)puVar7 + -0x130) = plVar24;
  *(long *)((long)puVar7 + -0x128) = lVar30;
  uVar22 = uVar21 & 0xffffffff;
  uVar35 = uVar20;
  uVar26 = uVar21;
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
  plVar24 = (long *)0x0;
  *(undefined8 *)((long)puVar7 + -0x198) = 0;
  *(undefined8 *)((long)puVar7 + -400) = 0;
  *(undefined8 *)((long)puVar7 + -0x1a8) = 0;
  *(undefined8 *)((long)puVar7 + -0x1a0) = 0;
  *(undefined8 *)((long)puVar7 + -0x1b8) = 0;
  *(undefined8 *)((long)puVar7 + -0x1b0) = 0;
  *(undefined8 *)((long)puVar7 + -0x1c8) = 0;
  *(undefined8 *)((long)puVar7 + -0x1c0) = 0;
  uVar23 = func_0x036fa5f8(lVar28,plVar31);
  if ((uVar23 & 1) != 0) {
    return (char *)0x0;
  }
  lVar30 = func_0x036d5e58(lVar28);
  plVar29 = (long *)0x5e2d000;
  if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
    auVar41 = func_0x03753e70(*(long *)(lVar30 + 0x18),0);
    unaff_x28 = &DAT_05a27fc8;
    *(undefined1 (*) [16])((long)puVar7 + -0x198) = auVar41;
    lVar30 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x024d8f40();
    }
    pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x198),
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar30 + 0xc0) + 8) + 0x80));
    if (*pcVar18 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844((undefined1 *)((long)puVar7 + -0x198),(undefined1 *)((long)puVar7 + -0x1d8),
                    _DAT_05a27fd0);
    unaff_x27 = (long *)&DAT_059e2c00;
    plVar29 = *(long **)((long)puVar7 + -0x1d8);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar19 = func_0x03530158(plVar29,0);
    plVar24 = (long *)0x0;
    uVar23 = func_0x0352ff64(uVar19,plVar17);
    if ((uVar23 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar31 != (long *)0x0) {
      lVar30 = *plVar31;
      plVar13 = (long *)&DAT_059df8e8;
      uVar23 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar23 != 0) {
        piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
            puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar23 = uVar23 - 1;
          piVar36 = piVar36 + 4;
        } while (uVar23 != 0);
      }
      plVar24 = (long *)0x5;
      puVar14 = (undefined8 *)func_0x024d927c(plVar31);
LAB_036dc294:
      uVar19 = (*(code *)*puVar14)(plVar31,puVar14[1]);
      plVar16 = *(long **)(lVar28 + 0x10);
      if (plVar16 != (long *)0x0) {
        plVar24 = *(long **)(*plVar16 + 0x1d0);
        plVar16 = (long *)(**(code **)(*plVar16 + 0x1c8))(plVar16,uVar19);
        if (plVar16 != (long *)0x0) {
          lVar30 = *plVar16;
          uVar23 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar23 != 0) {
            piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar23 = uVar23 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar23 != 0);
          }
          plVar24 = (long *)0x3;
          puVar14 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dc31c:
          plVar29 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
          lVar30 = func_0x036d5e58(lVar28);
          if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
            uVar8 = *(uint *)(*(long *)(lVar30 + 0x18) + 0x38);
            plVar25 = (long *)(ulong)uVar8;
            if ((int)uVar8 < 1) {
              lVar30 = *plVar31;
              uVar23 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar23 != 0) {
                piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
                    puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar23 = uVar23 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar23 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar31,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar19 = (*(code *)*puVar14)(plVar31,puVar14[1]);
              plVar16 = (long *)0x0;
              uVar23 = func_0x036f2f04(lVar28,uVar19);
              if ((uVar23 & 1) == 0) {
                plVar16 = (long *)0x0;
                uVar23 = func_0x036f2fec(lVar28,plVar31);
                plVar24 = plVar16;
                if ((uVar23 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (plVar29 != (long *)0x0) {
                  plVar24 = plVar29;
                  plVar16 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar30 = func_0x036d5ec8(lVar28);
                  plVar25 = plVar16;
                  if (lVar30 != 0) {
                    auVar41 = func_0x037537dc(lVar30,0);
                    uVar23 = auVar41._0_8_;
                    if (plVar16 != (long *)0x0) {
                      uVar26 = auVar41._8_8_ & 0xffffffff;
                      uVar35 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      plVar25 = (long *)(uVar35 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar30 = func_0x036d5e58(lVar28);
                plVar24 = plVar16;
                if ((lVar30 != 0) && (*(long *)(lVar30 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar30 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  plVar25 = (long *)0x0;
                  uVar23 = uVar35;
LAB_036dc558:
                  lVar30 = *plVar31;
                  uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar35 != 0) {
                    piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
                        puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138);
                        uVar35 = uVar23;
                        goto LAB_036dc5a8;
                      }
                      uVar35 = uVar35 - 1;
                      piVar36 = piVar36 + 4;
                    } while (uVar35 != 0);
                  }
                  plVar16 = (long *)0x5;
                  puVar14 = (undefined8 *)func_0x024d927c(plVar31);
                  uVar35 = uVar23;
LAB_036dc5a8:
                  uVar19 = (*(code *)*puVar14)(plVar31,puVar14[1]);
                  plVar38 = *(long **)(lVar28 + 0x10);
                  plVar24 = plVar16;
                  if (plVar38 != (long *)0x0) {
                    plVar24 = *(long **)(*plVar38 + 0x1d0);
                    uVar19 = (**(code **)(*plVar38 + 0x1c8))(plVar38,uVar19);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar23 = func_0x036c47c0(uVar19,plVar31);
                    plVar13 = (long *)(uVar23 & 0xffffffff);
                    lVar30 = func_0x036d5e58(lVar28);
                    if ((lVar30 != 0) && (*(long *)(lVar30 + 0x28) != 0)) {
                      uVar35 = 0;
                      plVar24 = plVar13;
                      iVar9 = func_0x03700d78(*(long *)(lVar30 + 0x28),plVar25);
                      uVar8 = (int)plVar25 - iVar9;
                      plVar25 = (long *)(ulong)uVar8;
                      if (uVar8 == 0) {
                        if (plVar29 != (long *)0x0) {
                          plVar16 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                          plVar25 = (long *)func_0x036d5ec8(lVar28);
                          plVar38 = (long *)func_0x03530c84(plVar17,0);
                          plVar24 = plVar29;
                          plVar29 = plVar16;
                          if (plVar16 != (long *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,plVar16,plVar25,plVar31);
                            func_0x037275b8(lVar28,plVar17,1,0);
                            func_0x03727828(lVar28,plVar31,plVar17,0);
                            plVar24 = (long *)(ulong)((uint)uVar20 & 1);
                            uVar35 = (ulong)((uint)uVar21 & 1);
                            uVar26 = 0;
                            uVar8 = func_0x036fa00c(lVar28,plVar31);
                            auVar44._8_4_ = uVar8;
                            auVar44._0_8_ = lVar28;
                            auVar44._12_4_ = 0;
                            lVar30 = func_0x036d5ec8(lVar28);
                            plVar15 = plVar38;
                            if (lVar30 != 0) {
                              auVar41 = func_0x03753e70(lVar30,0);
                              *(undefined1 (*) [16])((long)puVar7 + -0x1c8) = auVar41;
                              uVar11 = func_0x022bf4f8((undefined1 *)((long)puVar7 + -0x1c8),
                                                       _DAT_05a27fc8);
                              if ((uVar8 & uVar11 & 1) == 0) {
                                uVar19 = *(undefined8 *)((long)puVar7 + -0x1c8);
                                uVar22 = *(ulong *)((long)puVar7 + -0x1c0);
                                uVar39 = func_0x03530c84(plVar17,0);
                                *(undefined8 *)((long)puVar7 + -0x188) = uVar39;
                                *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                                (undefined1 *)((long)puVar7 + -0x188),_DAT_05a27fa0)
                                ;
                                uVar35 = *(ulong *)((long)puVar7 + -0x1d0);
                                uVar26 = 0;
                                auVar41 = func_0x03489150(uVar19,uVar22,
                                                          *(undefined8 *)((long)puVar7 + -0x1d8));
                                plVar15 = plVar38;
                              }
                              else {
                                uVar19 = func_0x03530c84(plVar17,0);
                                *(undefined8 *)((long)puVar7 + -0x188) = uVar19;
                                *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                                (undefined1 *)((long)puVar7 + -0x188),_DAT_05a27fa0)
                                ;
                                auVar41 = *(undefined1 (*) [16])((long)puVar7 + -0x1d8);
                                plVar15 = plVar38;
                              }
                              plVar17 = auVar41._0_8_;
                              lVar28 = func_0x036d5ec8(lVar28);
                              *(undefined1 (*) [16])((long)puVar7 + -0x1b8) = auVar41;
                              uVar21 = func_0x022bf4f8((undefined1 *)((long)puVar7 + -0x1b8),
                                                       _DAT_05a27fc8);
                              if ((uVar21 & 1) == 0) {
                                plVar24 = (long *)0x0;
                                uVar19 = 0;
                              }
                              else {
                                plVar17 = (long *)func_0x023f3ca0((undefined1 *)
                                                                  ((long)puVar7 + -0x1b8),
                                                                  _DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uVar19 = func_0x03530158(plVar17,0);
                                *(undefined8 *)((long)puVar7 + -0x188) = uVar19;
                                *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                                *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                                (undefined1 *)((long)puVar7 + -0x188),_DAT_05a28018)
                                ;
                                uVar19 = *(undefined8 *)((long)puVar7 + -0x1d8);
                                plVar24 = *(long **)((long)puVar7 + -0x1d0);
                              }
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = auVar41._8_8_;
                              auVar44 = auVar6 << 0x40;
                              if (lVar28 != 0) {
                                func_0x03753f18(lVar28,uVar19,plVar24,0);
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
                        lVar28 = func_0x036d5ec8(lVar28);
                        if (lVar28 != 0) {
                          *(uint *)(lVar28 + 0x38) = uVar8;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar30 = func_0x036d5e58(lVar28);
              if ((lVar30 != 0) && (plVar29 != (long *)0x0)) {
                lVar32 = *plVar29;
                plVar13 = *(long **)(lVar30 + 0x28);
                uVar23 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar23 != 0) {
                  piVar36 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                      puVar14 = (undefined8 *)(lVar32 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar23 = uVar23 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar23 != 0);
                }
                plVar24 = (long *)0x3;
                puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036dc3f8:
                uVar23 = (*(code *)*puVar14)(plVar29,puVar14[1]);
                if (plVar13 != (long *)0x0) {
                  plVar24 = (long *)(uVar23 & 0xffffffff);
                  uVar35 = 0;
                  uVar11 = func_0x03700d78(plVar13,plVar25);
                  if (uVar11 == uVar8) {
                    lVar30 = *plVar29;
                    uVar23 = (ulong)*(ushort *)(lVar30 + 0x12e);
                    if (uVar23 != 0) {
                      piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                          puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar23 = uVar23 - 1;
                        piVar36 = piVar36 + 4;
                      } while (uVar23 != 0);
                    }
                    plVar24 = (long *)0x2;
                    puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036dc760:
                    plVar29 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
                    lVar30 = func_0x036d5e58(lVar28);
                    if (lVar30 != 0) {
                      plVar25 = *(long **)(lVar30 + 0x18);
                      plVar16 = (long *)func_0x03530c84(plVar17,0);
                      if (plVar29 != (long *)0x0) {
                        lVar30 = *plVar29;
                        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
                        if (uVar35 != 0) {
                          piVar36 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar36 + -2) == _DAT_059deb60) {
                              puVar14 = (undefined8 *)(lVar30 + (long)(*piVar36 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar35 = uVar35 - 1;
                            piVar36 = piVar36 + 4;
                          } while (uVar35 != 0);
                        }
                        puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar14)(plVar29,plVar25,plVar31,plVar16,puVar14[1]);
                        func_0x037275b8(lVar28,plVar17,1,0);
                        func_0x03727828(lVar28,plVar31,plVar17,0);
                        plVar24 = (long *)(ulong)((uint)uVar20 & 1);
                        uVar35 = (ulong)((uint)uVar21 & 1);
                        uVar26 = 0;
                        uVar8 = func_0x036fa00c(lVar28,plVar31);
                        auVar3._8_4_ = uVar8;
                        auVar3._0_8_ = lVar28;
                        auVar3._12_4_ = 0;
                        auVar44._8_4_ = uVar8;
                        auVar44._0_8_ = lVar28;
                        auVar44._12_4_ = 0;
                        lVar30 = func_0x036d5e58(lVar28);
                        plVar13 = plVar16;
                        if ((lVar30 != 0) && (auVar44 = auVar3, *(long *)(lVar30 + 0x18) != 0)) {
                          auVar41 = func_0x03753e70(*(long *)(lVar30 + 0x18),0);
                          *(undefined1 (*) [16])((long)puVar7 + -0x1a8) = auVar41;
                          lVar30 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                            lVar30 = func_0x024d8f40();
                          }
                          pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x1a8),
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar30 + 0xc0) + 8
                                                                       ) + 0x80));
                          if ((uVar8 & *pcVar18 != '\0') == 0) {
                            uVar19 = *(undefined8 *)((long)puVar7 + -0x1a8);
                            uVar39 = *(undefined8 *)((long)puVar7 + -0x1a0);
                            uVar40 = func_0x03530c84(plVar17,0);
                            *(undefined8 *)((long)puVar7 + -0x188) = uVar40;
                            *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                            *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                            func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                            (undefined1 *)((long)puVar7 + -0x188),_DAT_05a27fa0);
                            plVar24 = *(long **)((long)puVar7 + -0x1d8);
                            uVar35 = *(ulong *)((long)puVar7 + -0x1d0);
                            uVar26 = 0;
                            auVar41 = func_0x03489150(uVar19,uVar39);
                          }
                          else {
                            uVar19 = func_0x03530c84(plVar17,0);
                            *(undefined8 *)((long)puVar7 + -0x188) = uVar19;
                            *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                            *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                            plVar24 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                            (undefined1 *)((long)puVar7 + -0x188));
                            auVar41 = *(undefined1 (*) [16])((long)puVar7 + -0x1d8);
                          }
                          uVar22 = auVar41._8_8_;
                          uVar19 = auVar41._0_8_;
                          auVar44._8_8_ = uVar19;
                          lVar30 = func_0x036d5e58(lVar28);
                          if (lVar30 != 0) {
                            *(undefined1 (*) [16])((long)puVar7 + -0x1b8) = auVar41;
                            plVar17 = *(long **)(lVar30 + 0x18);
                            lVar30 = *(long *)(_DAT_05a27fc8 + 0x20);
                            if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                              lVar30 = func_0x024d8f40();
                            }
                            pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x1b8),
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar30 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar18 == '\0') {
                              plVar24 = (long *)0x0;
                              uVar39 = 0;
                            }
                            else {
                              uVar19 = func_0x023f3ca0((undefined1 *)((long)puVar7 + -0x1b8),
                                                       _DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uVar39 = func_0x03530158(uVar19,0);
                              *(undefined8 *)((long)puVar7 + -0x188) = uVar39;
                              *(undefined8 *)((long)puVar7 + -0x1d8) = 0;
                              *(undefined8 *)((long)puVar7 + -0x1d0) = 0;
                              func_0x028866e4((undefined1 *)((long)puVar7 + -0x1d8),
                                              (undefined1 *)((long)puVar7 + -0x188),_DAT_05a28018);
                              uVar39 = *(undefined8 *)((long)puVar7 + -0x1d8);
                              plVar24 = *(long **)((long)puVar7 + -0x1d0);
                            }
                            auVar5._8_8_ = uVar19;
                            auVar5._0_8_ = lVar28;
                            auVar4._8_8_ = uVar19;
                            auVar4._0_8_ = lVar28;
                            auVar44._8_8_ = uVar19;
                            if (plVar17 != (long *)0x0) {
                              uVar35 = 0;
                              func_0x03753f18(plVar17,uVar39);
                              lVar28 = func_0x036d5e58(lVar28);
                              auVar44 = auVar4;
                              if ((lVar28 != 0) && (auVar44 = auVar5, *(long *)(lVar28 + 0x18) != 0)
                                 ) {
                                func_0x03754328(*(long *)(lVar28 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    plVar13 = (long *)(ulong)uVar11;
                    if ((int)uVar11 < 1) {
                      return (char *)0x0;
                    }
                    lVar28 = func_0x036d5ec8(lVar28);
                    if (lVar28 != 0) {
                      func_0x03754330(lVar28,plVar13,0);
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
  uVar19 = auVar44._8_8_;
  func_0x0249fb90();
  *(undefined8 *)((long)puVar7 + -0x1f0) = 0x36dcaf8;
  lVar28 = func_0x036d5e58();
  if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x18), lVar28 != 0)) {
    *(undefined8 *)((long)puVar7 + -0x210) = *(undefined8 *)((long)puVar7 + -0x1f0);
    *(ulong *)((long)puVar7 + -0x200) = uVar22;
    *(undefined8 *)((long)puVar7 + -0x1f8) = uVar19;
    *(long **)((long)puVar7 + -0x1f0) = plVar17;
    *(long *)((long)puVar7 + -0x1e8) = auVar44._0_8_;
    if ((bRam0000000005e2de5c & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de5c = 1;
    }
    lVar30 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x024d8f40();
    }
    pcVar18 = (char *)func_0x0249f90c(lVar28 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar30 + 0xc0) + 8) + 0x80));
    if (*pcVar18 != '\0') {
      func_0x02886844(lVar28 + 0x50,(undefined1 *)((long)puVar7 + -0x208),_DAT_05a27fd0);
      uVar19 = *(undefined8 *)((long)puVar7 + -0x208);
      uVar39 = *(undefined8 *)(lVar28 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar35 = func_0x0430deb0(uVar19,uVar39,0);
      if ((uVar35 & 1) != 0) {
        func_0x02886844(lVar28 + 0x50,(undefined1 *)((long)puVar7 + -0x208),_DAT_05a27fd0);
        return *(char **)((long)puVar7 + -0x208);
      }
    }
    return *(char **)(lVar28 + 0x28);
  }
  auVar41 = func_0x0249fb90();
  uVar39 = auVar41._0_8_;
  *(undefined8 *)((long)puVar7 + -0x210) = 0x36dcb1c;
  *(long **)((long)puVar7 + -0x200) = plVar17;
  *(long *)((long)puVar7 + -0x1f8) = auVar44._0_8_;
  *(long *)((long)puVar7 + -0x208) = auVar41._8_8_;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar28 = func_0x036d5e58(uVar39);
  if (lVar28 != 0) {
    lVar28 = *(long *)(lVar28 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar40 = func_0x0352eeec((undefined1 *)((long)puVar7 + -0x208),0);
    uVar39 = 0;
    if (lVar28 != 0) {
      pcVar18 = (char *)func_0x03753bf0(lVar28,uVar40,0);
      return pcVar18;
    }
  }
  func_0x0249fb90();
  *(undefined8 *)((long)puVar7 + -0x220) = 0x36dcba8;
  *(undefined8 *)((long)puVar7 + -0x218) = uVar39;
  lVar28 = func_0x036d5e58();
  if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x18), lVar28 != 0)) {
    *(undefined8 *)((long)puVar7 + -0x250) = *(undefined8 *)((long)puVar7 + -0x220);
    *(long **)((long)puVar7 + -0x248) = plVar25;
    *(long **)((long)puVar7 + -0x240) = plVar29;
    *(ulong *)((long)puVar7 + -0x238) = uVar20 & 0xffffffff;
    *(ulong *)((long)puVar7 + -0x230) = uVar22;
    *(undefined8 *)((long)puVar7 + -0x228) = uVar19;
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
    uVar35 = func_0x0375309c(lVar28);
    if ((uVar35 & 1) != 0) {
      uVar19 = *(undefined8 *)(lVar28 + 0x60);
      iVar9 = *(int *)(_DAT_059e2be8 + 0xe4);
      *(undefined8 *)((long)puVar7 + -0x268) = *(undefined8 *)(lVar28 + 0x68);
      *(undefined8 *)((long)puVar7 + -0x270) = uVar19;
      if (iVar9 == 0) {
        func_0x0249fa64();
      }
      uVar19 = func_0x0352eeec((undefined1 *)((long)puVar7 + -0x260),0);
      lVar30 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x024d8f40(lVar30);
      }
      pcVar18 = (char *)func_0x0249f90c((undefined1 *)((long)puVar7 + -0x270),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar30 + 0xc0) + 8) + 0x80));
      lVar30 = _DAT_05a27fb0;
      if (*pcVar18 == '\0') {
        uVar19 = 0;
        uVar39 = 0;
      }
      else {
        lVar33 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar33 + 0x135);
        lVar32 = lVar33;
        if ((uVar1 & 1) == 0) {
          lVar33 = func_0x024d8f40(lVar33);
          uVar1 = *(ushort *)(*(long *)(lVar30 + 0x20) + 0x135);
          lVar32 = *(long *)(lVar30 + 0x20);
        }
        uVar12 = *(undefined4 *)(**(long **)(lVar33 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar32 = func_0x024d8f40(lVar32);
        }
        uVar39 = func_0x0249f90c((undefined1 *)((long)puVar7 + -0x270),
                                 *(long *)(*(long *)(*(long *)(lVar32 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0((undefined1 *)((long)puVar7 + -0x280),uVar39,uVar12);
        uVar39 = *(undefined8 *)((long)puVar7 + -0x280);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar19 = func_0x0430d994(uVar39,uVar19,0);
        *(undefined8 *)((long)puVar7 + -600) = uVar19;
        *(undefined8 *)((long)puVar7 + -0x280) = 0;
        *(undefined8 *)((long)puVar7 + -0x278) = 0;
        func_0x028866e4((undefined1 *)((long)puVar7 + -0x280),(undefined1 *)((long)puVar7 + -600),
                        _DAT_05a27fa0);
        uVar39 = *(undefined8 *)((long)puVar7 + -0x278);
        uVar19 = *(undefined8 *)((long)puVar7 + -0x280);
      }
      *(undefined8 *)(lVar28 + 0x68) = uVar39;
      *(undefined8 *)(lVar28 + 0x60) = uVar19;
    }
    lVar30 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x024d8f40();
    }
    pcVar18 = (char *)func_0x0249f90c(lVar28 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar30 + 0xc0) + 8) + 0x80));
    if (*pcVar18 != '\0') {
      func_0x02886844(lVar28 + 0x18,(undefined1 *)((long)puVar7 + -0x280),_DAT_05a27fd0);
      uVar19 = *(undefined8 *)((long)puVar7 + -0x280);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar39 = func_0x0352eeec((undefined1 *)((long)puVar7 + -0x260),0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      uVar19 = func_0x0430d994(uVar19,uVar39,0);
      *(undefined8 *)((long)puVar7 + -600) = uVar19;
      *(undefined8 *)((long)puVar7 + -0x280) = 0;
      *(undefined8 *)((long)puVar7 + -0x278) = 0;
      pcVar18 = (char *)func_0x028866e4((undefined1 *)((long)puVar7 + -0x280),
                                        (undefined1 *)((long)puVar7 + -600),_DAT_05a27fa0);
      uVar19 = *(undefined8 *)((long)puVar7 + -0x280);
      *(undefined8 *)(lVar28 + 0x20) = *(undefined8 *)((long)puVar7 + -0x278);
      *(undefined8 *)(lVar28 + 0x18) = uVar19;
    }
    return pcVar18;
  }
  auVar41 = func_0x0249fb90();
  plVar16 = auVar41._8_8_;
  plVar17 = auVar41._0_8_;
  *(undefined8 *)((long)puVar7 + -0x280) = 0x36dcbd4;
  *(undefined **)((long)puVar7 + -0x270) = unaff_x28;
  *(long **)((long)puVar7 + -0x268) = unaff_x27;
  *(long **)((long)puVar7 + -0x260) = plVar13;
  *(long **)((long)puVar7 + -600) = plVar25;
  *(long **)((long)puVar7 + -0x250) = plVar29;
  *(ulong *)((long)puVar7 + -0x248) = uVar20 & 0xffffffff;
  *(ulong *)((long)puVar7 + -0x240) = uVar22;
  *(undefined8 *)((long)puVar7 + -0x238) = uVar19;
  *(undefined8 *)((long)puVar7 + -0x230) = 0x5e2d000;
  *(undefined8 *)((long)puVar7 + -0x228) = extraout_x1_00;
  plVar29 = (long *)0x5e2d000;
  plVar25 = plVar24;
  uVar20 = uVar35;
  uVar21 = uVar26;
  plVar13 = plVar15;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar16 != (long *)0x0) {
    lVar28 = *plVar16;
    uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar22 != 0) {
      piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar36 + -2) == _DAT_059df8e8) {
          puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar22 = uVar22 - 1;
        piVar36 = piVar36 + 4;
      } while (uVar22 != 0);
    }
    plVar25 = (long *)0x5;
    puVar14 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dccc4:
    uVar19 = (*(code *)*puVar14)(plVar16,puVar14[1]);
    plVar38 = (long *)plVar17[2];
    if (plVar38 != (long *)0x0) {
      plVar29 = (long *)(**(code **)(*plVar38 + 0x1c8))
                                  (plVar38,uVar19,*(undefined8 *)(*plVar38 + 0x1d0));
      pcVar18 = (char *)0x0;
      if (plVar29 != (long *)0x0) {
        plVar25 = (long *)0x0;
        uVar22 = func_0x036edd98(plVar17,uVar19);
        if ((uVar22 & 1) != 0) {
          lVar28 = *plVar29;
          uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar22 != 0) {
            piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar22 = uVar22 - 1;
              piVar36 = piVar36 + 4;
            } while (uVar22 != 0);
          }
          plVar25 = (long *)0x19;
          puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036dce14:
          plVar38 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
          if (plVar38 != (long *)0x0) {
            lVar28 = *plVar38;
            uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar22 != 0) {
              piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar36 + -2) == _DAT_059e0150) {
                  puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar22 = uVar22 - 1;
                piVar36 = piVar36 + 4;
              } while (uVar22 != 0);
            }
            plVar25 = (long *)0x0;
            puVar14 = (undefined8 *)func_0x024d927c(plVar38);
LAB_036dce7c:
            uVar22 = (*(code *)*puVar14)(plVar38,puVar14[1]);
            if ((uVar22 & 1) == 0) {
LAB_036dcf40:
              lVar28 = *plVar29;
              uVar20 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar20 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar20 = uVar20 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar20 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar25 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
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
              if (plVar25 == (long *)0x0) {
                lVar28 = func_0x0249fb90();
                return *(char **)(lVar28 + 0x10);
              }
              lVar28 = *plVar25;
              uVar20 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar20 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059deb70) {
                    puVar14 = (undefined8 *)(lVar28 + (long)*piVar36 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar20 = uVar20 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar20 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar25,_DAT_059deb70,0);
LAB_03751b38:
              uVar19 = (*(code *)*puVar14)(plVar25,puVar14[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              *(long **)((long)puVar7 + -0x270) = plVar24;
              *(ulong *)((long)puVar7 + -0x268) = uVar35;
              func_0x0288f218((undefined1 *)((long)puVar7 + -0x270),
                              (undefined1 *)((long)puVar7 + -0x288),_DAT_05a29e48);
              *(undefined8 *)((long)puVar7 + -0x298) = *(undefined8 *)((long)puVar7 + -0x280);
              *(undefined8 *)((long)puVar7 + -0x2a0) = *(undefined8 *)((long)puVar7 + -0x288);
              *(undefined8 *)((long)puVar7 + -0x290) = *(undefined8 *)((long)puVar7 + -0x278);
              pcVar18 = (char *)func_0x0371f1bc(uVar19,plVar16,(undefined1 *)((long)puVar7 + -0x2a0)
                                                ,param_7,0);
              return pcVar18;
            }
            plVar17 = plVar38;
            if (plVar24 != (long *)0x0) {
              lVar28 = *plVar24;
              uVar20 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar20 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059defb8) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar20 = uVar20 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar20 != 0);
              }
              puVar14 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059defb8,0xb);
LAB_036dcee8:
              uVar20 = puVar14[1];
              plVar25 = plVar15;
              uVar22 = (*(code *)*puVar14)(plVar24,uVar26);
              if ((uVar22 & 1) == 0) goto LAB_036dcf40;
              lVar28 = *plVar29;
              uVar22 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar22 != 0) {
                piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == _DAT_059dfbc0) {
                    puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dcfe0;
                  }
                  uVar22 = uVar22 - 1;
                  piVar36 = piVar36 + 4;
                } while (uVar22 != 0);
              }
              plVar25 = (long *)0x19;
              puVar14 = (undefined8 *)func_0x024d927c(plVar29);
LAB_036dcfe0:
              plVar38 = (long *)(*(code *)*puVar14)(plVar29,puVar14[1]);
              if (plVar38 != (long *)0x0) {
                lVar28 = *plVar38;
                uVar20 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar20 != 0) {
                  piVar36 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == _DAT_059e0150) {
                      puVar14 = (undefined8 *)(lVar28 + (long)(*piVar36 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar20 = uVar20 - 1;
                    piVar36 = piVar36 + 4;
                  } while (uVar20 != 0);
                }
                puVar14 = (undefined8 *)func_0x024d927c(plVar38,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar18 = (char *)(*(code *)*puVar14)(plVar38,plVar16,plVar24,uVar35,param_7,
                                                      puVar14[1]);
                return pcVar18;
              }
            }
          }
          goto LAB_036dd07c;
        }
        plVar25 = (long *)0x0;
        uVar22 = func_0x036edf9c(plVar17,uVar19);
        pcVar18 = (char *)0x0;
        if ((uVar22 & 1) != 0) {
          lVar28 = func_0x036d5e58(plVar17);
          if ((lVar28 == 0) || (*(long *)(lVar28 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar19 = *(undefined8 *)(*(long *)(lVar28 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          *(long **)((long)puVar7 + -0x290) = plVar24;
          *(ulong *)((long)puVar7 + -0x288) = uVar35;
          func_0x0288f218((undefined1 *)((long)puVar7 + -0x290),
                          (undefined1 *)((long)puVar7 + -0x2a8),_DAT_05a29e48);
          *(undefined8 *)((long)puVar7 + -0x2b8) = *(undefined8 *)((long)puVar7 + -0x2a0);
          *(undefined8 *)((long)puVar7 + -0x2c0) = *(undefined8 *)((long)puVar7 + -0x2a8);
          *(undefined8 *)((long)puVar7 + -0x2b0) = *(undefined8 *)((long)puVar7 + -0x298);
          pcVar18 = (char *)func_0x0371f1bc(uVar19,plVar16,(undefined1 *)((long)puVar7 + -0x2c0),
                                            param_7,0);
        }
      }
      return pcVar18;
    }
  }
LAB_036dd07c:
  auVar41 = func_0x0249fb90();
  *(undefined8 *)((long)puVar7 + -0x310) = 0x36dd080;
  *(long **)((long)puVar7 + -0x300) = plVar17;
  *(long **)((long)puVar7 + -0x2f8) = plVar29;
  *(ulong *)((long)puVar7 + -0x2f0) = uVar26;
  *(long **)((long)puVar7 + -0x2e8) = plVar15;
  *(long **)((long)puVar7 + -0x2e0) = plVar24;
  *(ulong *)((long)puVar7 + -0x2d8) = uVar35;
  *(long **)((long)puVar7 + -0x2d0) = plVar16;
  *(undefined8 *)((long)puVar7 + -0x2c8) = param_7;
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar18 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar18,0);
  pcVar18[0x10] = -2;
  pcVar18[0x11] = -1;
  pcVar18[0x12] = -1;
  pcVar18[0x13] = -1;
  uVar12 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar18 + 0x20) = uVar12;
  *(long *)(pcVar18 + 0x28) = auVar41._0_8_;
  func_0x0249f888(pcVar18 + 0x28,auVar41._0_8_);
  *(long *)(pcVar18 + 0x78) = auVar41._8_8_;
  func_0x0249f888(pcVar18 + 0x78,auVar41._8_8_);
  *(long **)(pcVar18 + 0x38) = plVar25;
  func_0x0249f888(pcVar18 + 0x38,plVar25);
  *(ulong *)(pcVar18 + 0x68) = uVar20;
  *(ulong *)(pcVar18 + 0x50) = uVar21;
  *(long **)(pcVar18 + 0x58) = plVar13;
  func_0x0249f888(pcVar18 + 0x50,0);
  return pcVar18;
}


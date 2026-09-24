/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Void StartNextSpawnStorageFill(GameLogic.Player.IPlayer player, Metaplay.Core.MetaTime timestamp)
 * Ghidra function entry: 036de3d0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036de3d0(long *param_1,long *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 extraout_x1;
  long *extraout_x1_00;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined2 uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong in_stack_ffffffffffffff88;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  plVar17 = (long *)0x5e2d000;
  if ((bRam0000000005e2da41 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    bRam0000000005e2da41 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _DAT_059df8e8) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 5) * 0x10 + 0x138);
          goto LAB_036de488;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar4 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036de488:
    uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    plVar10 = (long *)param_1[2];
    if ((plVar10 != (long *)0x0) &&
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x1c8))
                                    (plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x1d0)),
       plVar10 != (long *)0x0)) {
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_036de50c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar4 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfbc0,0);
LAB_036de50c:
      plVar6 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
      plVar17 = plVar10;
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059e0788) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_036de578;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059e0788,2);
LAB_036de578:
        plVar17 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
        lVar9 = func_0x036d5e58(param_1);
        if ((lVar9 != 0) && (plVar17 != (long *)0x0)) {
          lVar11 = *plVar17;
          uVar5 = *(undefined8 *)(lVar9 + 0x20);
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _DAT_059e0780) {
                puVar4 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_036de5f4;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar4 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059e0780,1);
LAB_036de5f4:
          (*(code *)*puVar4)(plVar17,uVar5,puVar4[1]);
          uVar5 = func_0x03530bf4(param_3,0);
          func_0x03727e60(param_1,uVar5,0);
          uVar5 = func_0x03530bf4(param_3,0);
          if ((bRam0000000005e2dcc2 & 1) == 0) {
            func_0x0249f8e4(&DAT_059df8e8,param_2,uVar5,0);
            func_0x0249f8e4(&DAT_059dfbc0);
            func_0x0249f8e4(&DAT_059dfe48);
            func_0x0249f8e4(&DAT_059e0780);
            func_0x0249f8e4(&DAT_059e0788);
            func_0x0249f8e4(&DAT_05a27fc8);
            bRam0000000005e2dcc2 = 1;
          }
          auStack_70 = (undefined1  [8])0x0;
          uStack_68 = (long *)0x0;
          plVar17 = (long *)0x5e2d000;
          auVar21 = ZEXT816(0);
          if (param_2 != (long *)0x0) {
            lVar9 = *param_2;
            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == _DAT_059df8e8) {
                  puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                  goto LAB_037280d4;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar4 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_037280d4:
            plVar10 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
            auVar21._8_8_ = uStack_68;
            auVar21._0_8_ = auStack_70;
            if (param_1 != (long *)0x0) {
              lVar9 = *param_1;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0372813c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,0);
LAB_0372813c:
              plVar6 = (long *)(*(code *)*puVar4)(param_1,plVar10,puVar4[1]);
              auVar21._8_8_ = uStack_68;
              auVar21._0_8_ = auStack_70;
              plVar17 = plVar10;
              if (plVar6 != (long *)0x0) {
                lVar9 = *plVar6;
                uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
                      puVar4 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_037281a8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar4 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059dfbc0,0);
LAB_037281a8:
                plVar10 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
                auVar21._8_8_ = uStack_68;
                auVar21._0_8_ = auStack_70;
                plVar17 = plVar6;
                if (plVar10 != (long *)0x0) {
                  lVar9 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == _DAT_059e0788) {
                        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                        goto LAB_03728214;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar4 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059e0788,2);
LAB_03728214:
                  plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
                  lVar9 = *param_1;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                        goto LAB_03728274;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,6);
LAB_03728274:
                  lVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
                  auVar21._8_8_ = uStack_68;
                  auVar21._0_8_ = auStack_70;
                  if (lVar9 != 0) {
                    lVar11 = *param_1;
                    uVar18 = *(undefined8 *)(lVar9 + 0x28);
                    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar14 != 0) {
                      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                          goto LAB_037282d8;
                        }
                        uVar14 = uVar14 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,6);
LAB_037282d8:
                    lVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
                    auVar21._8_8_ = uStack_68;
                    auVar21._0_8_ = auStack_70;
                    if (lVar9 != 0) {
                      lVar11 = *param_1;
                      uVar19 = *(undefined8 *)(lVar9 + 0x30);
                      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar14 != 0) {
                        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x24) * 0x10 + 0x138)
                            ;
                            goto LAB_0372833c;
                          }
                          uVar14 = uVar14 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,0x24);
LAB_0372833c:
                      uVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
                      lVar9 = *param_1;
                      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar14 != 0) {
                        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                            goto LAB_0372839c;
                          }
                          uVar14 = uVar14 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,6);
LAB_0372839c:
                      uVar7 = (*(code *)*puVar4)(param_1,puVar4[1]);
                      uVar5 = func_0x03530c84(uVar5,0);
                      auVar21._8_8_ = uStack_68;
                      auVar21._0_8_ = auStack_70;
                      if (plVar10 != (long *)0x0) {
                        lVar9 = *plVar10;
                        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        if (uVar14 != 0) {
                          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == _DAT_059e0780) {
                              puVar4 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                              goto LAB_03728418;
                            }
                            uVar14 = uVar14 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar4 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059e0780,0);
LAB_03728418:
                        uStack_80 = puVar4[1];
                        auVar20 = (*(code *)*puVar4)(plVar10,param_2,plVar6,uVar18,uVar19,uVar7,
                                                     uVar2,uVar5);
                        lVar9 = *param_1;
                        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        _auStack_70 = auVar20;
                        if (uVar14 != 0) {
                          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                              goto LAB_037284a0;
                            }
                            uVar14 = uVar14 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,6);
LAB_037284a0:
                        lVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
                        auVar21 = _auStack_70;
                        if (lVar9 != 0) {
                          *(undefined1 (*) [16])(lVar9 + 0x18) = auVar20;
                          lVar9 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                            lVar9 = func_0x024d8f40();
                          }
                          pcVar8 = (char *)func_0x0249f90c(auStack_70,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8)
                                                            + 0x80));
                          if (*pcVar8 != '\0') {
                            return pcVar8;
                          }
                          lVar9 = *plVar6;
                          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                          if (uVar14 != 0) {
                            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
                                puVar4 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                                goto LAB_0372853c;
                              }
                              uVar14 = uVar14 - 1;
                              piVar16 = piVar16 + 4;
                            } while (uVar14 != 0);
                          }
                          puVar4 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059dfbc0,0);
LAB_0372853c:
                          plVar10 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
                          auVar21 = _auStack_70;
                          if (plVar10 != (long *)0x0) {
                            lVar9 = *plVar10;
                            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar14 != 0) {
                              piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar16 + -2) == _DAT_059e0788) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                                  goto LAB_037285a8;
                                }
                                uVar14 = uVar14 - 1;
                                piVar16 = piVar16 + 4;
                              } while (uVar14 != 0);
                            }
                            puVar4 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059e0788,7);
LAB_037285a8:
                            pcVar8 = (char *)(*(code *)*puVar4)(plVar10,puVar4[1]);
                            if (((ulong)pcVar8 & 1) == 0) {
                              return pcVar8;
                            }
                            lVar9 = *param_1;
                            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar14 != 0) {
                              piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                                  goto LAB_03728608;
                                }
                                uVar14 = uVar14 - 1;
                                piVar16 = piVar16 + 4;
                              } while (uVar14 != 0);
                            }
                            puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,6);
LAB_03728608:
                            plVar17 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
                            lVar9 = *param_1;
                            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar14 != 0) {
                              piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                                  goto LAB_03728668;
                                }
                                uVar14 = uVar14 - 1;
                                piVar16 = piVar16 + 4;
                              } while (uVar14 != 0);
                            }
                            puVar4 = (undefined8 *)func_0x024d927c(param_1,_DAT_059dfe48,6);
LAB_03728668:
                            lVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
                            auVar21 = _auStack_70;
                            if ((lVar9 != 0) && (plVar17 != (long *)0x0)) {
                              pcVar8 = (char *)func_0x03704874(plVar17,*(undefined8 *)(lVar9 + 0x28)
                                                               ,0);
                              return pcVar8;
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
          _auStack_70 = auVar21;
          plVar10 = (long *)func_0x0249fb90();
          uStack_a0 = 0x37286b0;
          plStack_90 = plVar17;
          uStack_88 = param_1;
          if ((bRam0000000005e2dcc1 & 1) == 0) {
            func_0x0249f8e4(&DAT_059dfe48);
            func_0x0249f8e4(&DAT_05a27d90);
            func_0x0249f8e4(&DAT_05a27d88);
            bRam0000000005e2dcc1 = 1;
          }
          uStack_a8 = 0;
          if (plVar10 != (long *)0x0) {
            lVar9 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == _DAT_059dfe48) {
                  puVar4 = (undefined8 *)(lVar9 + (long)(*piVar16 + 0x22) * 0x10 + 0x138);
                  goto LAB_03728758;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar4 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfe48,0x22);
LAB_03728758:
            lVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) {
              uStack_a8 = 0;
            }
            else {
              uStack_b0 = 0;
              uStack_98 = CONCAT44(*(undefined4 *)(*(long *)(lVar9 + 0x68) + 0x10),
                                   (undefined4)uStack_98);
              func_0x028866e4(&uStack_b0,(long)&uStack_98 + 4,_DAT_05a27d88);
              uStack_a8 = uStack_b0;
            }
            lVar9 = _DAT_05a27d90;
            lVar13 = *(long *)(_DAT_05a27d90 + 0x20);
            uVar1 = *(ushort *)(lVar13 + 0x135);
            lVar11 = lVar13;
            if ((uVar1 & 1) == 0) {
              lVar13 = func_0x024d8f40(lVar13);
              uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
              lVar11 = *(long *)(lVar9 + 0x20);
            }
            uVar2 = *(undefined4 *)(**(long **)(lVar13 + 0xc0) + 0xfc);
            if ((uVar1 & 1) == 0) {
              lVar11 = func_0x024d8f40(lVar11);
            }
            uVar5 = func_0x0249f90c(&uStack_a8,
                                    *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20
                                   );
            func_0x054ed0d0(&uStack_b0,uVar5,uVar2);
            return (char *)(uStack_b0 & 0xffffffff);
          }
          auVar21 = func_0x0249fb90();
          lVar9 = auVar21._8_8_;
          uStack_c0 = 0x372883c;
          if (lVar9 != 0) {
            if (*(int *)(auVar21._0_8_ + 0x10) < *(int *)(lVar9 + 0x18)) {
              uVar3 = 0;
LAB_03728870:
              return (char *)(ulong)(uVar3 & 1);
            }
            lVar11 = *(long *)(auVar21._0_8_ + 0x18);
            if (lVar11 != 0) {
              uVar3 = func_0x0387f210(lVar11,lVar9,0);
              uVar3 = uVar3 ^ 1;
              goto LAB_03728870;
            }
          }
          auVar21 = func_0x0249fb90();
          lVar9 = auVar21._8_8_;
          uStack_d0 = 0x3728880;
          if (lVar9 != 0) {
            if (*(int *)(auVar21._0_8_ + 0x10) < *(int *)(lVar9 + 0x18)) {
              lVar11 = *(long *)(auVar21._0_8_ + 0x18);
              if (lVar11 == 0) goto LAB_037288c0;
              uVar3 = func_0x0387f210(lVar11,lVar9,0);
              uVar3 = uVar3 ^ 1;
            }
            else {
              uVar3 = 0;
            }
            return (char *)(ulong)(uVar3 & 1);
          }
LAB_037288c0:
          lVar9 = func_0x0249fb90();
          return *(char **)(lVar9 + 0x10);
        }
      }
    }
  }
  func_0x0249fb90();
  lVar9 = func_0x036d5e58();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    return *(char **)(*(long *)(lVar9 + 0x20) + 0x28);
  }
  func_0x0249fb90();
  lVar9 = func_0x036d5e58();
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
    uStack_68 = (long *)extraout_x1;
    if ((bRam0000000005e2db52 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1,0);
      func_0x0249f8e4(&DAT_059e2be8);
      bRam0000000005e2db52 = 1;
    }
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar18 = func_0x0352eeec(auStack_70 + 8,0);
    if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2ba0);
    }
    pcVar8 = (char *)func_0x0430d994(uVar5,uVar18,0);
    *(char **)(lVar9 + 0x28) = pcVar8;
    return pcVar8;
  }
  func_0x0249fb90();
  lVar9 = func_0x036d5e58();
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
    uStack_80 = 0x36de6a0;
    plStack_90 = extraout_x1_00;
    auStack_70 = (undefined1  [8])plVar17;
    uStack_68 = (long *)param_3;
    if ((bRam0000000005e2db59 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1_00,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      bRam0000000005e2db59 = 1;
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    lVar11 = *(long *)(_DAT_05a27fc8 + 0x20);
    uStack_c0 = 0;
    uStack_b8 = 0;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x024d8f40();
    }
    pcVar8 = (char *)func_0x0249f90c(lVar9 + 0x18,
                                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80)
                                    );
    if (*pcVar8 != '\0') {
      uStack_98 = *(undefined8 *)(lVar9 + 0x20);
      uStack_a0 = *(undefined8 *)(lVar9 + 0x18);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar5 = func_0x0352eeec(&plStack_90,0);
      lVar11 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40(lVar11);
      }
      pcVar8 = (char *)func_0x0249f90c(&uStack_a0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
      lVar11 = _DAT_05a27fb0;
      if (*pcVar8 == '\0') {
        uStack_b0 = 0;
        uStack_a8 = 0;
      }
      else {
        lVar12 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
        lVar13 = lVar12;
        if ((uVar1 & 1) == 0) {
          lVar12 = func_0x024d8f40(lVar12);
          uVar1 = *(ushort *)(*(long *)(lVar11 + 0x20) + 0x135);
          lVar13 = *(long *)(lVar11 + 0x20);
        }
        uVar2 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar13 = func_0x024d8f40(lVar13);
        }
        uVar18 = func_0x0249f90c(&uStack_a0,
                                 *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&uStack_d0,uVar18,uVar2);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uStack_88 = (long *)func_0x0430d994(uStack_d0,uVar5,0);
        uStack_d0 = 0;
        uStack_c8 = 0;
        func_0x028866e4(&uStack_d0,&uStack_88,_DAT_05a27fa0);
        uStack_a8 = uStack_c8;
        uStack_b0 = uStack_d0;
      }
      *(ulong *)(lVar9 + 0x20) = uStack_a8;
      *(ulong *)(lVar9 + 0x18) = uStack_b0;
    }
    lVar11 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x024d8f40();
    }
    pcVar8 = (char *)func_0x0249f90c(lVar9 + 0x58,
                                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80)
                                    );
    if (*pcVar8 != '\0') {
      uStack_98 = *(undefined8 *)(lVar9 + 0x60);
      uStack_a0 = *(undefined8 *)(lVar9 + 0x58);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar5 = func_0x0352eeec(&plStack_90,0);
      lVar11 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40(lVar11);
      }
      pcVar8 = (char *)func_0x0249f90c(&uStack_a0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
      lVar11 = _DAT_05a27fb0;
      if (*pcVar8 == '\0') {
        uStack_c0 = 0;
        uStack_b8 = 0;
      }
      else {
        lVar12 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
        lVar13 = lVar12;
        if ((uVar1 & 1) == 0) {
          lVar12 = func_0x024d8f40(lVar12);
          uVar1 = *(ushort *)(*(long *)(lVar11 + 0x20) + 0x135);
          lVar13 = *(long *)(lVar11 + 0x20);
        }
        uVar2 = *(undefined4 *)(**(long **)(lVar12 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar13 = func_0x024d8f40(lVar13);
        }
        uVar18 = func_0x0249f90c(&uStack_a0,
                                 *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&uStack_d0,uVar18,uVar2);
        uVar14 = uStack_d0;
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uStack_88 = (long *)func_0x0430d994(uVar14,uVar5,0);
        uStack_d0 = 0;
        uStack_c8 = 0;
        pcVar8 = (char *)func_0x028866e4(&uStack_d0,&uStack_88,_DAT_05a27fa0);
        uStack_b8 = uStack_c8;
        uStack_c0 = uStack_d0;
      }
      *(undefined8 *)(lVar9 + 0x60) = uStack_b8;
      *(ulong *)(lVar9 + 0x58) = uStack_c0;
    }
    return pcVar8;
  }
  lVar9 = func_0x0249fb90();
  uStack_80 = 0x36de6cc;
  auStack_70 = (undefined1  [8])param_1;
  uStack_68 = extraout_x1_00;
  if ((bRam0000000005e2da42 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a277a8);
    func_0x0249f8e4(&DAT_05a277a0);
    bRam0000000005e2da42 = 1;
  }
  uStack_88._0_6_ = (uint6)(uint)uStack_88;
  if ((*(long *)(lVar9 + 0x20) == 0) || (*(long *)(*(long *)(lVar9 + 0x20) + 0x38) == 0)) {
    uVar15 = 0;
  }
  else {
    uStack_88 = (long *)((ulong)uStack_88 & 0xffffffffffff0000);
    in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
    func_0x028866e4(&uStack_88,&stack0xffffffffffffff88,_DAT_05a277a0);
    uVar15 = (undefined2)uStack_88;
  }
  lVar9 = _DAT_05a277a8;
  uStack_88._0_6_ = CONCAT24(uVar15,(uint)uStack_88);
  lVar13 = *(long *)(_DAT_05a277a8 + 0x20);
  uVar1 = *(ushort *)(lVar13 + 0x135);
  lVar11 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = func_0x024d8f40(lVar13);
    uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    lVar11 = *(long *)(lVar9 + 0x20);
  }
  uVar2 = *(undefined4 *)(**(long **)(lVar13 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar11 = func_0x024d8f40(lVar11);
  }
  uVar5 = func_0x0249f90c((long)&uStack_88 + 4,
                          *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0(&stack0xffffffffffffff8c,uVar5,uVar2);
  return (char *)(in_stack_ffffffffffffff88 >> 0x20 & 0xff);
}


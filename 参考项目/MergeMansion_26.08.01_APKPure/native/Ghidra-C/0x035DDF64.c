/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: GameLogic.Merge.SpawnReaction TryToFillSpawnStorageOrSpawn(GameLogic.Player.IPlayer player, Metaplay.Core.MetaTime timestamp, System.Boolean hasEmptySpaceNear)
 * Ghidra function entry: 036ddf64
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036de0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036de368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036de318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036de36c) */
/* WARNING: Removing unreachable block (ram,0x036de378) */
/* WARNING: Removing unreachable block (ram,0x036de0b4) */
/* WARNING: Removing unreachable block (ram,0x036de31c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036ddf64(long param_1,long *param_2,long *param_3,ulong param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar7;
  uint uVar8;
  uint uVar6;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 extraout_x1;
  long *extraout_x1_00;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined2 uVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_50 [16];
  ulong uStack_38;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  if ((bRam0000000005e2da40 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_05a27fc8);
    func_0x0249f8e4(&DAT_05a27fd0);
    bRam0000000005e2da40 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_50 = func_0x036d62a4(param_1);
  lVar9 = *(long *)(_DAT_05a27fc8 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = func_0x024d8f40();
  }
  pcVar10 = (char *)func_0x0249f90c(auStack_50,
                                    *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
  if (*pcVar10 == '\0') {
    return (char *)0x0;
  }
  func_0x02886844(auStack_50,&uStack_38,_DAT_05a27fd0);
  if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar17 = (long *)0x0;
  uVar11 = func_0x0430deb0(uStack_38,param_3);
  if ((uVar11 & 1) != 0) {
    return (char *)0x0;
  }
  uVar11 = uStack_38;
  if ((param_4 & 1) != 0) goto SUB_036de3d0;
  if (param_2 == (long *)0x0) {
LAB_036de3cc:
    auVar28 = func_0x0249fb90();
    param_3 = plVar17;
  }
  else {
    lVar9 = *param_2;
    uVar23 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 5) * 0x10 + 0x138);
          goto LAB_036de118;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    plVar17 = (long *)0x5;
    puVar12 = (undefined8 *)func_0x024d927c(param_2);
LAB_036de118:
    uVar13 = (*(code *)*puVar12)(param_2,puVar12[1]);
    uVar23 = func_0x036d9b78(param_1,uVar13);
    if ((uVar23 & 1) != 0) {
      return (char *)0x0;
    }
    lVar9 = *param_2;
    uVar23 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 5) * 0x10 + 0x138);
          goto LAB_036de184;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    plVar17 = (long *)0x5;
    puVar12 = (undefined8 *)func_0x024d927c(param_2);
LAB_036de184:
    uVar13 = (*(code *)*puVar12)(param_2,puVar12[1]);
    plVar18 = *(long **)(param_1 + 0x10);
    if (plVar18 == (long *)0x0) goto LAB_036de3cc;
    plVar17 = *(long **)(*plVar18 + 0x1d0);
    plVar18 = (long *)(**(code **)(*plVar18 + 0x1c8))(plVar18,uVar13);
    if (plVar18 == (long *)0x0) goto LAB_036de3cc;
    lVar9 = *plVar18;
    uVar23 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059dfbc0) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_036de208;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    plVar17 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x024d927c(plVar18);
LAB_036de208:
    plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
    lVar9 = func_0x036d5e58(param_1);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_036de3cc;
    uVar8 = *(uint *)(*(long *)(lVar9 + 0x20) + 0x38);
    uVar11 = (ulong)uVar8;
    if ((int)uVar8 < 1) {
      if (plVar18 != (long *)0x0) {
        plVar17 = plVar18;
        lVar9 = func_0x022bffa8(2,_DAT_059e0788);
        if (lVar9 != 0) {
          uVar8 = func_0x022bffa8(7,_DAT_059e0780,lVar9);
          uVar11 = (ulong)uVar8;
          lVar9 = func_0x036d5f1c(param_1);
          uVar23 = func_0x022bffa8(3,_DAT_059e0788);
          plVar17 = plVar18;
          if (lVar9 != 0) {
            plVar17 = (long *)(uVar23 & 0xffffffff);
            iVar5 = func_0x03700d78(lVar9,uVar11,plVar17,0);
            auVar28 = auVar2;
            if (uVar8 - iVar5 == 0) goto SUB_036de3d0;
            if (iVar5 < 1) {
              return (char *)0x0;
            }
            lVar9 = func_0x036d5ee4(param_1);
            if (lVar9 != 0) {
              *(uint *)(lVar9 + 0x38) = uVar8 - iVar5;
              return (char *)0x2;
            }
          }
        }
      }
      goto LAB_036de3cc;
    }
    lVar9 = func_0x036d5e58(param_1);
    if ((lVar9 == 0) || (plVar18 == (long *)0x0)) goto LAB_036de3cc;
    lVar19 = *plVar18;
    lVar9 = *(long *)(lVar9 + 0x30);
    uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059e0788) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar25 + 3) * 0x10 + 0x138);
          goto LAB_036de330;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    plVar17 = (long *)0x3;
    puVar12 = (undefined8 *)func_0x024d927c(plVar18);
LAB_036de330:
    uVar23 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    if (lVar9 == 0) goto LAB_036de3cc;
    plVar17 = (long *)(uVar23 & 0xffffffff);
    uVar6 = func_0x03700d78(lVar9,uVar11,plVar17,0);
    auVar28 = auVar3;
    if (uVar6 != uVar8) {
      if ((int)uVar6 < 1) {
        return (char *)0x0;
      }
      lVar9 = func_0x036d5ee4(param_1);
      if (lVar9 != 0) {
        func_0x03704858(lVar9,uVar6,0);
        return (char *)0x2;
      }
      goto LAB_036de3cc;
    }
  }
SUB_036de3d0:
  plVar16 = auVar28._8_8_;
  plVar18 = auVar28._0_8_;
  plVar17 = (long *)0x5e2d000;
  if ((bRam0000000005e2da41 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0780);
    func_0x0249f8e4(&DAT_059e0788);
    bRam0000000005e2da41 = 1;
  }
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar23 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 5) * 0x10 + 0x138);
          goto LAB_036de488;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_036de488:
    uVar13 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    plVar20 = (long *)plVar18[2];
    if (plVar20 != (long *)0x0) {
      plVar20 = (long *)(**(code **)(*plVar20 + 0x1c8))
                                  (plVar20,uVar13,*(undefined8 *)(*plVar20 + 0x1d0));
      if (plVar20 != (long *)0x0) {
        lVar9 = *plVar20;
        uVar23 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar23 != 0) {
          piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == _DAT_059dfbc0) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_036de50c;
            }
            uVar23 = uVar23 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar23 != 0);
        }
        puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059dfbc0,0);
LAB_036de50c:
        plVar14 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
        plVar17 = plVar20;
        if (plVar14 != (long *)0x0) {
          lVar9 = *plVar14;
          uVar23 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar23 != 0) {
            piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == _DAT_059e0788) {
                puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 2) * 0x10 + 0x138);
                goto LAB_036de578;
              }
              uVar23 = uVar23 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar23 != 0);
          }
          puVar12 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059e0788,2);
LAB_036de578:
          plVar17 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
          lVar9 = func_0x036d5e58(plVar18);
          if ((lVar9 != 0) && (plVar17 != (long *)0x0)) {
            lVar19 = *plVar17;
            uVar13 = *(undefined8 *)(lVar9 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar11 != 0) {
              piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == _DAT_059e0780) {
                  puVar12 = (undefined8 *)(lVar19 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                  goto LAB_036de5f4;
                }
                uVar11 = uVar11 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059e0780,1);
LAB_036de5f4:
            (*(code *)*puVar12)(plVar17,uVar13,puVar12[1]);
            uVar13 = func_0x03530bf4(param_3,0);
            func_0x03727e60(plVar18,uVar13,0);
            uVar13 = func_0x03530bf4(param_3,0);
            if ((bRam0000000005e2dcc2 & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8,plVar16,uVar13,0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059dfe48);
              func_0x0249f8e4(&DAT_059e0780);
              func_0x0249f8e4(&DAT_059e0788);
              func_0x0249f8e4(&DAT_05a27fc8);
              bRam0000000005e2dcc2 = 1;
            }
            auStack_c0 = (undefined1  [8])0x0;
            uStack_b8 = (long *)0x0;
            plVar17 = (long *)0x5e2d000;
            auVar4 = ZEXT816(0);
            if (plVar16 != (long *)0x0) {
              lVar9 = *plVar16;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == _DAT_059df8e8) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                    goto LAB_037280d4;
                  }
                  uVar11 = uVar11 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059df8e8,5);
LAB_037280d4:
              plVar20 = (long *)(*(code *)*puVar12)(plVar16,puVar12[1]);
              auVar4._8_8_ = uStack_b8;
              auVar4._0_8_ = auStack_c0;
              if (plVar18 != (long *)0x0) {
                lVar9 = *plVar18;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                      puVar12 = (undefined8 *)(lVar9 + (long)*piVar25 * 0x10 + 0x138);
                      goto LAB_0372813c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar11 != 0);
                }
                puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,0);
LAB_0372813c:
                plVar14 = (long *)(*(code *)*puVar12)(plVar18,plVar20,puVar12[1]);
                auVar4._8_8_ = uStack_b8;
                auVar4._0_8_ = auStack_c0;
                plVar17 = plVar20;
                if (plVar14 != (long *)0x0) {
                  lVar9 = *plVar14;
                  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar11 != 0) {
                    piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == _DAT_059dfbc0) {
                        puVar12 = (undefined8 *)(lVar9 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_037281a8;
                      }
                      uVar11 = uVar11 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfbc0,0);
LAB_037281a8:
                  plVar20 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
                  auVar4._8_8_ = uStack_b8;
                  auVar4._0_8_ = auStack_c0;
                  plVar17 = plVar14;
                  if (plVar20 != (long *)0x0) {
                    lVar9 = *plVar20;
                    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar11 != 0) {
                      piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == _DAT_059e0788) {
                          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 2) * 0x10 + 0x138);
                          goto LAB_03728214;
                        }
                        uVar11 = uVar11 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0788,2);
LAB_03728214:
                    plVar20 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
                    lVar9 = *plVar18;
                    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar11 != 0) {
                      piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                          goto LAB_03728274;
                        }
                        uVar11 = uVar11 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,6);
LAB_03728274:
                    lVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                    auVar4._8_8_ = uStack_b8;
                    auVar4._0_8_ = auStack_c0;
                    if (lVar9 != 0) {
                      lVar19 = *plVar18;
                      uVar26 = *(undefined8 *)(lVar9 + 0x28);
                      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
                      if (uVar11 != 0) {
                        piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                            puVar12 = (undefined8 *)(lVar19 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                            goto LAB_037282d8;
                          }
                          uVar11 = uVar11 - 1;
                          piVar25 = piVar25 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,6);
LAB_037282d8:
                      lVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                      auVar4._8_8_ = uStack_b8;
                      auVar4._0_8_ = auStack_c0;
                      if (lVar9 != 0) {
                        lVar19 = *plVar18;
                        uVar27 = *(undefined8 *)(lVar9 + 0x30);
                        uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
                        if (uVar11 != 0) {
                          piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                              puVar12 = (undefined8 *)
                                        (lVar19 + (long)(*piVar25 + 0x24) * 0x10 + 0x138);
                              goto LAB_0372833c;
                            }
                            uVar11 = uVar11 - 1;
                            piVar25 = piVar25 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,0x24);
LAB_0372833c:
                        uVar7 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                        lVar9 = *plVar18;
                        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        if (uVar11 != 0) {
                          piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                              puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                              goto LAB_0372839c;
                            }
                            uVar11 = uVar11 - 1;
                            piVar25 = piVar25 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,6);
LAB_0372839c:
                        uVar15 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                        uVar13 = func_0x03530c84(uVar13,0);
                        auVar4._8_8_ = uStack_b8;
                        auVar4._0_8_ = auStack_c0;
                        if (plVar20 != (long *)0x0) {
                          lVar9 = *plVar20;
                          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                          if (uVar11 != 0) {
                            piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar25 + -2) == _DAT_059e0780) {
                                puVar12 = (undefined8 *)(lVar9 + (long)*piVar25 * 0x10 + 0x138);
                                goto LAB_03728418;
                              }
                              uVar11 = uVar11 - 1;
                              piVar25 = piVar25 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar12 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059e0780,0);
LAB_03728418:
                          uStack_d0 = puVar12[1];
                          auVar28 = (*(code *)*puVar12)(plVar20,plVar16,plVar14,uVar26,uVar27,uVar15
                                                        ,uVar7,uVar13);
                          lVar9 = *plVar18;
                          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                          _auStack_c0 = auVar28;
                          if (uVar11 != 0) {
                            piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                                puVar12 = (undefined8 *)
                                          (lVar9 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                                goto LAB_037284a0;
                              }
                              uVar11 = uVar11 - 1;
                              piVar25 = piVar25 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,6);
LAB_037284a0:
                          lVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                          auVar4 = _auStack_c0;
                          if (lVar9 != 0) {
                            *(undefined1 (*) [16])(lVar9 + 0x18) = auVar28;
                            lVar9 = *(long *)(_DAT_05a27fc8 + 0x20);
                            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                              lVar9 = func_0x024d8f40();
                            }
                            pcVar10 = (char *)func_0x0249f90c(auStack_c0,
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar9 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar10 != '\0') {
                              return pcVar10;
                            }
                            lVar9 = *plVar14;
                            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar11 != 0) {
                              piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar25 + -2) == _DAT_059dfbc0) {
                                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar25 * 0x10 + 0x138);
                                  goto LAB_0372853c;
                                }
                                uVar11 = uVar11 - 1;
                                piVar25 = piVar25 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar12 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfbc0,0);
LAB_0372853c:
                            plVar16 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
                            auVar4 = _auStack_c0;
                            if (plVar16 != (long *)0x0) {
                              lVar9 = *plVar16;
                              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                              if (uVar11 != 0) {
                                piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar25 + -2) == _DAT_059e0788) {
                                    puVar12 = (undefined8 *)
                                              (lVar9 + (long)(*piVar25 + 7) * 0x10 + 0x138);
                                    goto LAB_037285a8;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar25 = piVar25 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0788,7);
LAB_037285a8:
                              pcVar10 = (char *)(*(code *)*puVar12)(plVar16,puVar12[1]);
                              if (((ulong)pcVar10 & 1) == 0) {
                                return pcVar10;
                              }
                              lVar9 = *plVar18;
                              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                              if (uVar11 != 0) {
                                piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                                    puVar12 = (undefined8 *)
                                              (lVar9 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                                    goto LAB_03728608;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar25 = piVar25 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,6);
LAB_03728608:
                              plVar17 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
                              lVar9 = *plVar18;
                              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                              if (uVar11 != 0) {
                                piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                                    puVar12 = (undefined8 *)
                                              (lVar9 + (long)(*piVar25 + 6) * 0x10 + 0x138);
                                    goto LAB_03728668;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar25 = piVar25 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar12 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfe48,6);
LAB_03728668:
                              lVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                              auVar4 = _auStack_c0;
                              if ((lVar9 != 0) && (plVar17 != (long *)0x0)) {
                                pcVar10 = (char *)func_0x03704874(plVar17,*(undefined8 *)
                                                                           (lVar9 + 0x28),0);
                                return pcVar10;
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
            _auStack_c0 = auVar4;
            plVar16 = (long *)func_0x0249fb90();
            uStack_f0 = 0x37286b0;
            plStack_e0 = plVar17;
            uStack_d8 = plVar18;
            if ((bRam0000000005e2dcc1 & 1) == 0) {
              func_0x0249f8e4(&DAT_059dfe48);
              func_0x0249f8e4(&DAT_05a27d90);
              func_0x0249f8e4(&DAT_05a27d88);
              bRam0000000005e2dcc1 = 1;
            }
            uStack_f8 = 0;
            if (plVar16 != (long *)0x0) {
              lVar9 = *plVar16;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar25 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == _DAT_059dfe48) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar25 + 0x22) * 0x10 + 0x138);
                    goto LAB_03728758;
                  }
                  uVar11 = uVar11 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfe48,0x22);
LAB_03728758:
              lVar9 = (*(code *)*puVar12)(plVar16,puVar12[1]);
              if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) {
                uStack_f8 = 0;
              }
              else {
                uStack_100 = 0;
                uStack_e8 = CONCAT44(*(undefined4 *)(*(long *)(lVar9 + 0x68) + 0x10),
                                     (undefined4)uStack_e8);
                func_0x028866e4(&uStack_100,(long)&uStack_e8 + 4,_DAT_05a27d88);
                uStack_f8 = uStack_100;
              }
              lVar9 = _DAT_05a27d90;
              lVar22 = *(long *)(_DAT_05a27d90 + 0x20);
              uVar1 = *(ushort *)(lVar22 + 0x135);
              lVar19 = lVar22;
              if ((uVar1 & 1) == 0) {
                lVar22 = func_0x024d8f40(lVar22);
                uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
                lVar19 = *(long *)(lVar9 + 0x20);
              }
              uVar7 = *(undefined4 *)(**(long **)(lVar22 + 0xc0) + 0xfc);
              if ((uVar1 & 1) == 0) {
                lVar19 = func_0x024d8f40(lVar19);
              }
              uVar13 = func_0x0249f90c(&uStack_f8,
                                       *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80) +
                                       0x20);
              func_0x054ed0d0(&uStack_100,uVar13,uVar7);
              return (char *)(uStack_100 & 0xffffffff);
            }
            auVar28 = func_0x0249fb90();
            lVar9 = auVar28._8_8_;
            uStack_110 = 0x372883c;
            if (lVar9 != 0) {
              if (*(int *)(auVar28._0_8_ + 0x10) < *(int *)(lVar9 + 0x18)) {
                uVar8 = 0;
LAB_03728870:
                return (char *)(ulong)(uVar8 & 1);
              }
              lVar19 = *(long *)(auVar28._0_8_ + 0x18);
              if (lVar19 != 0) {
                uVar8 = func_0x0387f210(lVar19,lVar9,0);
                uVar8 = uVar8 ^ 1;
                goto LAB_03728870;
              }
            }
            auVar28 = func_0x0249fb90();
            lVar9 = auVar28._8_8_;
            uStack_120 = 0x3728880;
            if (lVar9 == 0) {
LAB_037288c0:
              lVar9 = func_0x0249fb90();
              return *(char **)(lVar9 + 0x10);
            }
            if (*(int *)(auVar28._0_8_ + 0x10) < *(int *)(lVar9 + 0x18)) {
              lVar19 = *(long *)(auVar28._0_8_ + 0x18);
              if (lVar19 == 0) goto LAB_037288c0;
              uVar8 = func_0x0387f210(lVar19,lVar9,0);
              uVar8 = uVar8 ^ 1;
            }
            else {
              uVar8 = 0;
            }
            return (char *)(ulong)(uVar8 & 1);
          }
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
    uStack_b8 = (long *)extraout_x1;
    if ((bRam0000000005e2db52 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1,0);
      func_0x0249f8e4(&DAT_059e2be8);
      bRam0000000005e2db52 = 1;
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar26 = func_0x0352eeec(&uStack_b8,0);
    if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2ba0);
    }
    pcVar10 = (char *)func_0x0430d994(uVar13,uVar26,0);
    *(char **)(lVar9 + 0x28) = pcVar10;
    return pcVar10;
  }
  func_0x0249fb90();
  lVar9 = func_0x036d5e58();
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
    uStack_d0 = 0x36de6a0;
    plStack_e0 = extraout_x1_00;
    uStack_c8 = uVar11;
    auStack_c0 = (undefined1  [8])plVar17;
    uStack_b8 = param_3;
    if ((bRam0000000005e2db59 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1_00,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      bRam0000000005e2db59 = 1;
    }
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
    uStack_110 = 0;
    uStack_108 = 0;
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x024d8f40();
    }
    pcVar10 = (char *)func_0x0249f90c(lVar9 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
    if (*pcVar10 != '\0') {
      uStack_e8 = *(undefined8 *)(lVar9 + 0x20);
      uStack_f0 = *(undefined8 *)(lVar9 + 0x18);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar13 = func_0x0352eeec(&plStack_e0,0);
      lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x024d8f40(lVar19);
      }
      pcVar10 = (char *)func_0x0249f90c(&uStack_f0,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
      lVar19 = _DAT_05a27fb0;
      if (*pcVar10 == '\0') {
        uStack_100 = 0;
        uStack_f8 = 0;
      }
      else {
        lVar21 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar21 + 0x135);
        lVar22 = lVar21;
        if ((uVar1 & 1) == 0) {
          lVar21 = func_0x024d8f40(lVar21);
          uVar1 = *(ushort *)(*(long *)(lVar19 + 0x20) + 0x135);
          lVar22 = *(long *)(lVar19 + 0x20);
        }
        uVar7 = *(undefined4 *)(**(long **)(lVar21 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar22 = func_0x024d8f40(lVar22);
        }
        uVar26 = func_0x0249f90c(&uStack_f0,
                                 *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&uStack_120,uVar26,uVar7);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uStack_d8 = (long *)func_0x0430d994(uStack_120,uVar13,0);
        uStack_120 = 0;
        uStack_118 = 0;
        func_0x028866e4(&uStack_120,&uStack_d8,_DAT_05a27fa0);
        uStack_f8 = uStack_118;
        uStack_100 = uStack_120;
      }
      *(ulong *)(lVar9 + 0x20) = uStack_f8;
      *(ulong *)(lVar9 + 0x18) = uStack_100;
    }
    lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x024d8f40();
    }
    pcVar10 = (char *)func_0x0249f90c(lVar9 + 0x58,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
    if (*pcVar10 != '\0') {
      uStack_e8 = *(undefined8 *)(lVar9 + 0x60);
      uStack_f0 = *(undefined8 *)(lVar9 + 0x58);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar13 = func_0x0352eeec(&plStack_e0,0);
      lVar19 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x024d8f40(lVar19);
      }
      pcVar10 = (char *)func_0x0249f90c(&uStack_f0,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80));
      lVar19 = _DAT_05a27fb0;
      if (*pcVar10 == '\0') {
        uStack_110 = 0;
        uStack_108 = 0;
      }
      else {
        lVar21 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar21 + 0x135);
        lVar22 = lVar21;
        if ((uVar1 & 1) == 0) {
          lVar21 = func_0x024d8f40(lVar21);
          uVar1 = *(ushort *)(*(long *)(lVar19 + 0x20) + 0x135);
          lVar22 = *(long *)(lVar19 + 0x20);
        }
        uVar7 = *(undefined4 *)(**(long **)(lVar21 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar22 = func_0x024d8f40(lVar22);
        }
        uVar26 = func_0x0249f90c(&uStack_f0,
                                 *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&uStack_120,uVar26,uVar7);
        uVar11 = uStack_120;
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uStack_d8 = (long *)func_0x0430d994(uVar11,uVar13,0);
        uStack_120 = 0;
        uStack_118 = 0;
        pcVar10 = (char *)func_0x028866e4(&uStack_120,&uStack_d8,_DAT_05a27fa0);
        uStack_108 = uStack_118;
        uStack_110 = uStack_120;
      }
      *(undefined8 *)(lVar9 + 0x60) = uStack_108;
      *(ulong *)(lVar9 + 0x58) = uStack_110;
    }
    return pcVar10;
  }
  lVar9 = func_0x0249fb90();
  uStack_d0 = 0x36de6cc;
  auStack_c0 = (undefined1  [8])plVar18;
  uStack_b8 = extraout_x1_00;
  if ((bRam0000000005e2da42 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a277a8);
    func_0x0249f8e4(&DAT_05a277a0);
    bRam0000000005e2da42 = 1;
  }
  uStack_d8._0_6_ = (uint6)(uint)uStack_d8;
  if ((*(long *)(lVar9 + 0x20) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x38), lVar9 == 0)) {
    uVar24 = 0;
  }
  else {
    uStack_d8 = (long *)((ulong)uStack_d8 & 0xffffffffffff0000);
    uStack_c8 = CONCAT71(uStack_c8._1_7_,*(undefined1 *)(lVar9 + 0x30));
    func_0x028866e4(&uStack_d8,&uStack_c8,_DAT_05a277a0);
    uVar24 = (undefined2)uStack_d8;
  }
  lVar9 = _DAT_05a277a8;
  uStack_d8._0_6_ = CONCAT24(uVar24,(uint)uStack_d8);
  lVar22 = *(long *)(_DAT_05a277a8 + 0x20);
  uVar1 = *(ushort *)(lVar22 + 0x135);
  lVar19 = lVar22;
  if ((uVar1 & 1) == 0) {
    lVar22 = func_0x024d8f40(lVar22);
    uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    lVar19 = *(long *)(lVar9 + 0x20);
  }
  uVar7 = *(undefined4 *)(**(long **)(lVar22 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar19 = func_0x024d8f40(lVar19);
  }
  uVar13 = func_0x0249f90c((long)&uStack_d8 + 4,
                           *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x054ed0d0((long)&uStack_c8 + 4,uVar13,uVar7);
  return (char *)(uStack_c8 >> 0x20 & 0xff);
}


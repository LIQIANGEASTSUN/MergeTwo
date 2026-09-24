/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Items.Consumption.IConsumptionCheckResult WouldBeValidConsumeAttempt(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime currentTime)
 * Ghidra function entry: 03783a44
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036f9ee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036f9eec) */
/* WARNING: Removing unreachable block (ram,0x036f9ef0) */
/* WARNING: Removing unreachable block (ram,0x036f9ef4) */
/* WARNING: Removing unreachable block (ram,0x036f9f0c) */
/* WARNING: Removing unreachable block (ram,0x036f9f14) */
/* WARNING: Removing unreachable block (ram,0x036f9f3c) */
/* WARNING: Removing unreachable block (ram,0x036f9f20) */
/* WARNING: Removing unreachable block (ram,0x036f9f2c) */
/* WARNING: Removing unreachable block (ram,0x036f9f4c) */
/* WARNING: Removing unreachable block (ram,0x036f9f74) */
/* WARNING: Removing unreachable block (ram,0x036f9f7c) */
/* WARNING: Removing unreachable block (ram,0x036f9fa4) */
/* WARNING: Removing unreachable block (ram,0x036f9f88) */
/* WARNING: Removing unreachable block (ram,0x036f9f94) */
/* WARNING: Removing unreachable block (ram,0x036f9fb4) */
/* WARNING: Removing unreachable block (ram,0x036f9fe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_03783a44(undefined *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined *puStack_140;
  long *plStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  
  if ((bRam0000000005e2dfa1 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e3790);
    bRam0000000005e2dfa1 = 1;
  }
  uVar13 = func_0x037839a8(param_1,param_3,param_4);
  if ((uVar13 & 1) != 0) {
LAB_03783aa4:
    if (*(int *)(_DAT_059e3790 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    return (undefined8 *)**(undefined8 **)(_DAT_059e3790 + 0xb8);
  }
  plVar14 = (long *)func_0x0376e450(param_1,param_3);
  puVar15 = (undefined *)func_0x0376e450(param_1,param_4);
  if (((plVar14 == (long *)0x0) || (puVar15 == (undefined *)0x0)) ||
     (uVar13 = func_0x036e15dc(plVar14,param_2,0), (uVar13 & 1) == 0)) goto LAB_03783aa4;
  uVar18 = 0;
  puVar16 = puVar15;
  puVar22 = param_1;
  uVar12 = param_5;
  if ((bRam0000000005e2dae7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    bRam0000000005e2dae7 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar19 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_036f8f6c;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined *)0x5;
    puVar5 = (undefined8 *)func_0x024d927c(param_2);
LAB_036f8f6c:
    uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (plVar14 != (long *)0x0) {
      lVar19 = *plVar14;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
            puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_036f8fd4;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0);
LAB_036f8fd4:
      puVar16 = (undefined *)puVar5[1];
      plVar14 = (long *)(*(code *)*puVar5)(plVar14,uVar6);
      if (plVar14 != (long *)0x0) {
        lVar19 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x12) * 0x10 + 0x138);
              goto LAB_036f9044;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar16 = (undefined *)0x12;
        puVar5 = (undefined8 *)func_0x024d927c(plVar14);
LAB_036f9044:
        plVar14 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
        if (plVar14 != (long *)0x0) {
          lVar19 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059df2a8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_036f90b0;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar16 = (undefined *)0x1;
          puVar5 = (undefined8 *)func_0x024d927c(plVar14);
LAB_036f90b0:
          plVar14 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
          if (plVar14 != (long *)0x0) {
            lVar19 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == _DAT_059df2c0) {
                  puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_036f9118;
                }
                uVar13 = uVar13 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df2c0,0);
LAB_036f9118:
                    /* WARNING: Could not recover jumptable at 0x036f9140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar5 = (undefined8 *)
                     (*(code *)*puVar5)(plVar14,param_2,puVar15,param_1,param_5,puVar5[1]);
            return puVar5;
          }
        }
      }
    }
  }
  auVar23 = func_0x0249fb90();
  plVar10 = auVar23._8_8_;
  plVar14 = auVar23._0_8_;
  uStack_90 = 0x36f9148;
  puVar15 = puVar16;
  puVar17 = puVar22;
  if ((bRam0000000005e2dae8 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e2700);
    bRam0000000005e2dae8 = 1;
  }
  if (plVar10 == (long *)0x0) {
LAB_036f9444:
    func_0x0249fb90();
  }
  else {
    lVar19 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_036f9234;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined *)0x5;
    puVar5 = (undefined8 *)func_0x024d927c(plVar10);
LAB_036f9234:
    uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (plVar14 == (long *)0x0) goto LAB_036f9444;
    lVar19 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_036f929c;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0);
LAB_036f929c:
    puVar15 = (undefined *)puVar5[1];
    plVar7 = (long *)(*(code *)*puVar5)(plVar14,uVar6);
    if (plVar7 == (long *)0x0) goto LAB_036f9444;
    lVar19 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x12) * 0x10 + 0x138);
          goto LAB_036f930c;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined *)0x12;
    puVar5 = (undefined8 *)func_0x024d927c(plVar7);
LAB_036f930c:
    plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
    if (plVar7 == (long *)0x0) goto LAB_036f9444;
    lVar19 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df2a8) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_036f9378;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined *)0x1;
    puVar5 = (undefined8 *)func_0x024d927c(plVar7);
LAB_036f9378:
    plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
    if (plVar7 == (long *)0x0) goto LAB_036f9444;
    if (*plVar14 == _DAT_059e2700) {
      lVar19 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059df2c0) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 3) * 0x10 + 0x138);
            goto LAB_036f93fc;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059df2c0,3);
LAB_036f93fc:
      uStack_a0 = puVar5[1];
      puVar5 = (undefined8 *)
               (*(code *)*puVar5)(plVar7,plVar10,plVar14,puVar22,puVar16,uVar12,uVar18,param_7);
      return puVar5;
    }
  }
  auVar23 = func_0x0249ff10(plVar14);
  plVar10 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  uStack_e0 = 0x36f9450;
  plStack_d0 = plVar14;
  puStack_c8 = puVar22;
  puStack_c0 = puVar16;
  uStack_b8 = uVar12;
  uStack_b0 = uVar18;
  uStack_a8 = param_7;
  if ((bRam0000000005e2dae9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df498);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    bRam0000000005e2dae9 = 1;
  }
  plVar14 = (long *)0x5e2d000;
  if (plVar7 != (long *)0x0) {
    lVar19 = *plVar7;
    puVar16 = &DAT_059dfe48;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_036f94f8;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059dfe48,0);
LAB_036f94f8:
    puVar15 = (undefined *)puVar5[1];
    plVar8 = (long *)(*(code *)*puVar5)(plVar7,plVar10);
    if (plVar8 != (long *)0x0) {
      lVar19 = *plVar8;
      puVar22 = &DAT_059dfbc0;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_036f9568;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined *)0x1;
      puVar5 = (undefined8 *)func_0x024d927c(plVar8);
LAB_036f9568:
      plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
      plVar14 = plVar8;
      if (plVar9 != (long *)0x0) {
        lVar19 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059df498) {
              puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_036f95d0;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df498,0);
LAB_036f95d0:
        uVar13 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if ((uVar13 & 1) == 0) {
          return (undefined8 *)0x0;
        }
        lVar19 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
              puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_036f9644;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059dfe48,0);
LAB_036f9644:
        puVar15 = (undefined *)puVar5[1];
        plVar8 = (long *)(*(code *)*puVar5)(plVar7,plVar10);
        plVar14 = plVar9;
        if (plVar8 != (long *)0x0) {
          lVar19 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_036f96ac;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined *)0x1;
          puVar5 = (undefined8 *)func_0x024d927c(plVar8);
LAB_036f96ac:
          plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
          plVar10 = plVar8;
          if (plVar9 != (long *)0x0) {
            lVar19 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == _DAT_059df498) {
                  puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                  goto LAB_036f9710;
                }
                uVar13 = uVar13 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df498,4);
LAB_036f9710:
                    /* WARNING: Could not recover jumptable at 0x036f9728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar9,puVar5[1]);
            return puVar5;
          }
        }
      }
    }
  }
  auVar23 = func_0x0249fb90();
  plVar8 = auVar23._8_8_;
  plVar9 = auVar23._0_8_;
  uStack_100 = 0x36f9730;
  plStack_f8 = plVar14;
  plStack_f0 = plVar7;
  plStack_e8 = plVar10;
  if ((bRam0000000005e2daea & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e0980);
    bRam0000000005e2daea = 1;
  }
  if (plVar9 != (long *)0x0) {
    lVar19 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_036f97d0;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe48,0);
LAB_036f97d0:
    puVar15 = (undefined *)puVar5[1];
    plVar14 = (long *)(*(code *)*puVar5)(plVar9,plVar8);
    if (plVar14 != (long *)0x0) {
      lVar19 = *plVar14;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xd) * 0x10 + 0x138);
            goto LAB_036f9840;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined *)0xd;
      puVar5 = (undefined8 *)func_0x024d927c(plVar14);
LAB_036f9840:
      plVar10 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
      plVar8 = plVar14;
      if (plVar10 != (long *)0x0) {
        lVar19 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059e0980) {
              puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_036f98a8;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059e0980,0);
LAB_036f98a8:
                    /* WARNING: Could not recover jumptable at 0x036f98b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar10,puVar5[1]);
        return puVar5;
      }
    }
  }
  auVar23 = func_0x0249fb90();
  uVar12 = auVar23._8_8_;
  plVar14 = auVar23._0_8_;
  uStack_120 = 0x36f98c0;
  uStack_118 = 0x5e2d000;
  plStack_110 = plVar9;
  plStack_108 = plVar8;
  if ((bRam0000000005e2daeb & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e0158);
    bRam0000000005e2daeb = 1;
  }
  plVar10 = (long *)0x5e2d000;
  if (plVar14 != (long *)0x0) {
    lVar19 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_036f9960;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0);
LAB_036f9960:
    puVar15 = (undefined *)puVar5[1];
    plVar7 = (long *)(*(code *)*puVar5)(plVar14,uVar12);
    if (plVar7 != (long *)0x0) {
      lVar19 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 9) * 0x10 + 0x138);
            goto LAB_036f99d0;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined *)0x9;
      puVar5 = (undefined8 *)func_0x024d927c(plVar7);
LAB_036f99d0:
      plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
      plVar10 = plVar7;
      if (plVar8 != (long *)0x0) {
        lVar19 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059e0158) {
              puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_036f9a38;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059e0158,0);
LAB_036f9a38:
        uVar13 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if ((uVar13 & 1) == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          uVar13 = func_0x036edf9c(plVar14,uVar12);
          if ((uVar13 & 1) == 0) {
            uVar13 = func_0x036ee9e0(plVar14,uVar12);
            if ((uVar13 & 1) == 0) {
              uVar13 = func_0x036f8034(plVar14,uVar12);
              if ((uVar13 & 1) == 0) {
                uVar13 = func_0x036ecc48(plVar14,uVar12);
                uVar4 = 3;
                if ((uVar13 & 1) == 0) {
                  uVar4 = 0;
                }
                puVar5 = (undefined8 *)(ulong)uVar4;
              }
              else {
                puVar5 = (undefined8 *)0x2;
              }
            }
            else {
              puVar5 = (undefined8 *)0x4;
            }
          }
          else {
            puVar5 = (undefined8 *)0x1;
          }
        }
        return puVar5;
      }
    }
  }
  auVar24 = func_0x0249fb90();
  plVar14 = auVar24._0_8_;
  puStack_140 = (undefined *)0x36f9ac0;
  plStack_138 = plVar10;
  auStack_130 = auVar23;
  if ((bRam0000000005e2daec & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2daec = 1;
  }
  if (plVar14 != (long *)0x0) {
    lVar19 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 3) * 0x10 + 0x138);
          goto LAB_036f9b60;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,3);
LAB_036f9b60:
    lVar19 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    auStack_150._0_8_ = puStack_140;
    puStack_140 = puVar16;
    if ((bRam0000000005e2cdcb & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2c00,lVar19,0);
      bRam0000000005e2cdcb = 1;
    }
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    return (undefined8 *)(auVar24._8_8_ - lVar19);
  }
  auVar23 = func_0x0249fb90();
  plVar14 = auVar23._0_8_;
  uStack_160 = 0x36f9ba0;
  uStack_158 = 0x5e2d000;
  plVar10 = (long *)(auVar23._8_8_ & 0xffffffff);
  auStack_150 = auVar24;
  if ((bRam0000000005e2daed & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfe48);
    bRam0000000005e2daed = 1;
  }
  if (plVar14 != (long *)0x0) {
    lVar19 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
          goto LAB_036f9c2c;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined *)0x22;
    puVar5 = (undefined8 *)func_0x024d927c(plVar14);
LAB_036f9c2c:
    lVar19 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x68), lVar19 != 0)) {
      *(int *)(lVar19 + 0x10) = *(int *)(lVar19 + 0x10) - auVar23._8_4_;
      if ((bRam0000000005e2dcc1 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfe48,0);
        func_0x0249f8e4(&DAT_05a27d90);
        func_0x0249f8e4(&DAT_05a27d88);
        bRam0000000005e2dcc1 = 1;
      }
      plStack_168 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar19 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
              goto LAB_03728758;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0x22);
LAB_03728758:
        lVar19 = (*(code *)*puVar5)(plVar14,puVar5[1]);
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x68) == 0)) {
          plStack_168 = (long *)0x0;
        }
        else {
          plStack_170 = (long *)0x0;
          uStack_158 = CONCAT44(*(undefined4 *)(*(long *)(lVar19 + 0x68) + 0x10),
                                (undefined4)uStack_158);
          func_0x028866e4(&plStack_170,(long)&uStack_158 + 4,_DAT_05a27d88);
          plStack_168 = plStack_170;
        }
        lVar19 = _DAT_05a27d90;
        lVar20 = *(long *)(_DAT_05a27d90 + 0x20);
        uVar2 = *(ushort *)(lVar20 + 0x135);
        lVar11 = lVar20;
        if ((uVar2 & 1) == 0) {
          lVar20 = func_0x024d8f40(lVar20);
          uVar2 = *(ushort *)(*(long *)(lVar19 + 0x20) + 0x135);
          lVar11 = *(long *)(lVar19 + 0x20);
        }
        uVar1 = *(undefined4 *)(**(long **)(lVar20 + 0xc0) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar11 = func_0x024d8f40(lVar11);
        }
        uVar12 = func_0x0249f90c(&plStack_168,
                                 *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&plStack_170,uVar12,uVar1);
        return (undefined8 *)((ulong)plStack_170 & 0xffffffff);
      }
      auVar23 = func_0x0249fb90();
      lVar19 = auVar23._8_8_;
      puStack_180 = (undefined *)0x372883c;
      if (lVar19 != 0) {
        if (*(int *)(auVar23._0_8_ + 0x10) < *(int *)(lVar19 + 0x18)) {
          uVar4 = 0;
LAB_03728870:
          return (undefined8 *)(ulong)(uVar4 & 1);
        }
        lVar11 = *(long *)(auVar23._0_8_ + 0x18);
        if (lVar11 != 0) {
          uVar4 = func_0x0387f210(lVar11,lVar19,0);
          uVar4 = uVar4 ^ 1;
          goto LAB_03728870;
        }
      }
      auVar23 = func_0x0249fb90();
      lVar19 = auVar23._8_8_;
      uStack_190 = 0x3728880;
      if (lVar19 == 0) {
LAB_037288c0:
        lVar19 = func_0x0249fb90();
        return *(undefined8 **)(lVar19 + 0x10);
      }
      if (*(int *)(auVar23._0_8_ + 0x10) < *(int *)(lVar19 + 0x18)) {
        lVar11 = *(long *)(auVar23._0_8_ + 0x18);
        if (lVar11 == 0) goto LAB_037288c0;
        uVar4 = func_0x0387f210(lVar11,lVar19,0);
        uVar4 = uVar4 ^ 1;
      }
      else {
        uVar4 = 0;
      }
      return (undefined8 *)(ulong)(uVar4 & 1);
    }
  }
  auVar23 = func_0x0249fb90();
  uStack_198 = auVar23._8_8_;
  plVar7 = auVar23._0_8_;
  uStack_190 = 0x36f9c68;
  uStack_178 = 0x5e2d000;
  puStack_188 = puVar22;
  puStack_180 = puVar16;
  plStack_170 = plVar14;
  plStack_168 = plVar10;
  if ((bRam0000000005e2daee & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2daee = 1;
  }
  if (plVar7 != (long *)0x0) {
    lVar19 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
          goto LAB_036f9d14;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined *)0x22;
    puVar5 = (undefined8 *)func_0x024d927c(plVar7);
LAB_036f9d14:
    lVar19 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x60), lVar19 != 0)) {
      uVar12 = *(undefined8 *)(lVar19 + 0x10);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar18 = func_0x0352eeec(&uStack_198,0);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e29f8);
      }
      uVar12 = func_0x0425442c(uVar12,uVar18,0);
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
      lVar19 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x1d) * 0x10 + 0x138);
            goto LAB_036f9dd8;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059dfe48,0x1d);
LAB_036f9dd8:
      puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar7,puVar5[1]);
      return puVar5;
    }
  }
  auVar23 = func_0x0249fb90();
  plVar14 = auVar23._8_8_;
  puVar16 = puVar15;
  puVar22 = puVar17;
  if ((bRam0000000005e2daef & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_05a28018);
    bRam0000000005e2daef = 1;
  }
  if (plVar14 == (long *)0x0) {
    auVar23 = func_0x0249fb90();
  }
  else {
    lVar19 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_036f9ebc;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df8e8,5);
LAB_036f9ebc:
    uVar12 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    puVar5 = (undefined8 *)func_0x036edd98(auVar23._0_8_,uVar12);
    if (((ulong)puVar5 & 1) == 0) {
      return puVar5;
    }
    puVar16 = (undefined *)(ulong)((uint)puVar15 & 1);
    puVar22 = (undefined *)(ulong)((uint)puVar17 & 1);
  }
  plVar10 = auVar23._8_8_;
  plVar14 = auVar23._0_8_;
  if (((ulong)puVar16 & 1) == 0) {
    if (((ulong)puVar22 & 1) != 0) goto LAB_036fa040;
    uVar4 = 0;
  }
  else {
    puVar15 = puVar22;
    uVar4 = func_0x036fa068(plVar14,plVar10);
    if (((uVar4 & 1) == 0) && (uVar13 = (ulong)puVar22 & 1, puVar22 = puVar15, uVar13 != 0)) {
LAB_036fa040:
      if ((bRam0000000005e2daf1 & 1) == 0) {
        func_0x0249f8e4(&DAT_059df8e8);
        func_0x0249f8e4(&DAT_059dfbc0);
        func_0x0249f8e4(&DAT_059dfe48);
        func_0x0249f8e4(&DAT_059e0150);
        bRam0000000005e2daf1 = 1;
      }
      if (plVar10 != (long *)0x0) {
        lVar19 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 5) * 0x10 + 0x138);
              goto LAB_036fa324;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar16 = (undefined *)0x5;
        puVar5 = (undefined8 *)func_0x024d927c(plVar10);
LAB_036fa324:
        uVar12 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if (plVar14 != (long *)0x0) {
          lVar19 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
                puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_036fa38c;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0);
LAB_036fa38c:
          puVar16 = (undefined *)puVar5[1];
          plVar14 = (long *)(*(code *)*puVar5)(plVar14,uVar12);
          if (plVar14 != (long *)0x0) {
            lVar19 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
                  puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x19) * 0x10 + 0x138);
                  goto LAB_036fa3fc;
                }
                uVar13 = uVar13 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined *)0x19;
            puVar5 = (undefined8 *)func_0x024d927c(plVar14);
LAB_036fa3fc:
            plVar14 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
            if (plVar14 != (long *)0x0) {
              lVar19 = *plVar14;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar13 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == _DAT_059e0150) {
                    puVar5 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_036fa464;
                  }
                  uVar13 = uVar13 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059e0150,0);
LAB_036fa464:
                    /* WARNING: Could not recover jumptable at 0x036fa474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar14,puVar5[1]);
              return puVar5;
            }
          }
        }
      }
      auVar23 = func_0x0249fb90();
      plVar14 = auVar23._0_8_;
      if ((bRam0000000005e2daf2 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfe48);
        func_0x0249f8e4(&DAT_059e9c88);
        bRam0000000005e2daf2 = 1;
      }
      if (plVar14 != (long *)0x0) {
        lVar19 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
              goto LAB_036fa520;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0x22);
LAB_036fa520:
        puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar14,puVar5[1]);
        if (puVar5 != (undefined8 *)0x0) {
          if (puVar5[0x13] != 0) {
            return puVar5;
          }
          lVar19 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
                goto LAB_036fa598;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0x22);
LAB_036fa598:
          lVar19 = (*(code *)*puVar5)(plVar14,puVar5[1]);
          uVar12 = func_0x0249fb80(_DAT_059e9c88);
          func_0x0372f460(uVar12,auVar23._8_8_ & 0xffffffff,(ulong)puVar16 & 0xffffffff,
                          (ulong)puVar22 & 0xffffffff,0);
          if (lVar19 != 0) {
            puVar5 = (undefined8 *)(lVar19 + 0x98);
            *puVar5 = uVar12;
            if (iRam0000000006058428 != 0) {
              puVar5 = (undefined8 *)
                       func_0x0258f520(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                                       ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
            }
            return puVar5;
          }
        }
      }
      auVar23 = func_0x0249fb90();
      plVar10 = auVar23._8_8_;
      plVar14 = auVar23._0_8_;
      if ((bRam0000000005e2daf3 & 1) == 0) {
        func_0x0249f8e4(&DAT_059df8e8);
        func_0x0249f8e4(&DAT_059dfe48);
        func_0x0249f8e4(&DAT_059e1498);
        bRam0000000005e2daf3 = 1;
      }
      if (plVar14 != (long *)0x0) {
        lVar19 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_036fa6a0;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,7);
LAB_036fa6a0:
        lVar19 = (*(code *)*puVar5)(plVar14,puVar5[1]);
        if (plVar10 != (long *)0x0) {
          lVar11 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar21 + 5) * 0x10 + 0x138);
                goto LAB_036fa70c;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059df8e8,5);
LAB_036fa70c:
          uVar12 = (*(code *)*puVar5)(plVar10,puVar5[1]);
          lVar11 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059dfe48) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_036fa770;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfe48,0);
LAB_036fa770:
          uVar12 = (*(code *)*puVar5)(plVar14,uVar12,puVar5[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          iVar3 = func_0x036c47c0(uVar12,plVar10,0);
          if (lVar19 != 0) {
            return (undefined8 *)(ulong)(iVar3 <= *(int *)(lVar19 + 0x10));
          }
        }
      }
      auVar25 = func_0x0249fb90();
      return (undefined8 *)(ulong)(auVar25._8_4_ <= *(int *)(auVar25._0_8_ + 0x10));
    }
  }
  return (undefined8 *)(ulong)(uVar4 & 1);
}


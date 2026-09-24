/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void ProcessConsumeIn(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime timeForConsume, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs, GameLogic.Player.Items.Bubble.IBubbleSpawner bubbleSpawner, GameLogic.Config.Types.MetacoreTime timeForConsumeIn)
 * Ghidra function entry: 03784f98
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
FUN_03784f98(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            long *param_6,long *param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  code *pcVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auStack_200 [80];
  undefined1 auStack_1b0 [80];
  undefined1 auStack_160 [80];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [80];
  
  if ((bRam0000000005e2dfa9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8b40);
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059df040);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a29b18);
    func_0x0249f8e4(&DAT_05aad4e0);
    bRam0000000005e2dfa9 = 1;
  }
  uStack_b8 = 0;
  lVar4 = func_0x0376e450(param_1,param_3);
  puVar5 = (undefined8 *)func_0x0376e450(param_1,param_4);
  if (lVar4 == 0) {
    return puVar5;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  func_0x036f9148(lVar4,param_2,param_1,puVar5,param_4,param_5,param_6,0);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar7 = param_4;
  func_0x034ba874(&uStack_110,6,param_4,param_4,param_5,0,0,0,0);
  lVar15 = _DAT_059c9978;
  if (param_6 != (long *)0x0) {
    func_0x054ed0d0(auStack_160,&uStack_110,0x50);
    lVar14 = *param_6;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_0378516c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)func_0x024d927c(param_6,lVar15,2);
LAB_0378516c:
    pcVar19 = (code *)*puVar6;
    func_0x054ed0d0(auStack_b0,auStack_160,0x50);
    (*pcVar19)(param_6,auStack_b0,puVar6[1]);
    uVar17 = func_0x036e2788(lVar4,0);
    if ((uVar17 & 1) != 0) {
      func_0x037789bc(param_1,param_2,param_3,param_5,1);
    }
    uVar7 = func_0x03530c84(param_5,0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    uVar7 = func_0x03530158(uVar7,0);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    func_0x034ba910(&uStack_110,0x10,param_3,param_4,uVar7,0,0,0,0);
    lVar15 = _DAT_059c9978;
    func_0x054ed0d0(auStack_1b0,&uStack_110,0x50);
    lVar14 = *param_6;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_03785298;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)func_0x024d927c(param_6,lVar15,2);
LAB_03785298:
    pcVar19 = (code *)*puVar6;
    func_0x054ed0d0(auStack_b0,auStack_1b0,0x50);
    uVar7 = puVar6[1];
    (*pcVar19)(param_6,auStack_b0);
    if (param_2 != (long *)0x0) {
      lVar15 = *param_2;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == _DAT_059df8e8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
            goto LAB_03785318;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar6 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03785318:
      uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      uVar7 = 0;
      plVar9 = (long *)func_0x036d3908(lVar4,uVar8);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == _DAT_059dfbc0) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar18 + 0x12) * 0x10 + 0x138);
              goto LAB_03785394;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        uVar7 = 0x12;
        puVar6 = (undefined8 *)func_0x024d927c(plVar9);
LAB_03785394:
        plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
        if (plVar9 != (long *)0x0) {
          lVar4 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == _DAT_059df2a8) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto LAB_03785400;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar6 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df2a8,5);
LAB_03785400:
          uVar17 = (*(code *)*puVar6)(plVar9,puVar6[1]);
          if ((uVar17 & 1) == 0) {
LAB_03785668:
            puVar5 = (undefined8 *)func_0x03530c84(param_5,0);
            *(undefined8 **)(param_1 + 0x20) = puVar5;
            return puVar5;
          }
          lVar4 = func_0x0376e450(param_1,param_4);
          uStack_b8 = func_0x0376eb00(param_1);
          if (lVar4 == 0) goto LAB_03785668;
          if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar17 = func_0x0376edd4(&uStack_b8);
          if ((uVar17 & 1) != 0) goto LAB_03785668;
          lVar15 = *param_2;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == _DAT_059df8e8) {
                puVar6 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto LAB_037854a4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar6 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_037854a4:
          uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
          uVar7 = 0;
          uVar8 = func_0x036d3908(lVar4,uVar8);
          if (param_7 != (long *)0x0) {
            lVar15 = *param_7;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == _DAT_059df040) {
                  puVar6 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0378551c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar6 = (undefined8 *)func_0x024d927c(param_7,_DAT_059df040,0);
LAB_0378551c:
            lVar15 = (*(code *)*puVar6)(param_7,uVar8,param_8,puVar6[1]);
            if (lVar15 != 0) {
              uVar7 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
              uVar7 = func_0x036d3908(lVar4,uVar7,0);
              func_0x03780064(auStack_b0,param_1,param_2,uVar7,param_4,param_8,1,param_2,2);
              lVar15 = _DAT_059c9978;
              func_0x054ed0d0(auStack_200,auStack_b0,0x50);
              func_0x0240cde0(2,lVar15,param_6,auStack_200);
              uVar7 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
              uVar7 = func_0x036d62d4(lVar4,uVar7,0);
              uVar8 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
              uVar8 = func_0x036d62d4(puVar5,uVar8,0);
              uStack_110 = 0;
              uStack_108 = 0;
              func_0x0288eb6c(&uStack_110,param_2,_DAT_05a29b18);
              uVar10 = func_0x0249fb80(_DAT_059d8b40);
              func_0x038653bc(uVar10,uVar7,_DAT_05aad4e0,uVar8,1,uStack_110,uStack_108,0);
              func_0x02403244(0x65,_DAT_059e0220,param_2,uVar10,0);
            }
            goto LAB_03785668;
          }
        }
      }
    }
  }
  auVar21 = func_0x0249fb90();
  plVar9 = auVar21._8_8_;
  auVar20._8_8_ = plVar9;
  auVar20._0_8_ = uVar7;
  uVar2 = func_0x03778aa0(auVar21._0_8_,plVar9,1);
  uVar3 = func_0x03778bf0(auVar21._0_8_,plVar9);
  uVar17 = (ulong)(uVar2 & 1);
  uVar13 = (ulong)(uVar3 & 1);
  uVar16 = uVar17;
  uVar12 = uVar13;
  if ((bRam0000000005e2daef & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfe48);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_05a28018);
    bRam0000000005e2daef = 1;
  }
  if (plVar9 == (long *)0x0) {
    auVar20 = func_0x0249fb90();
    uVar17 = uVar16;
    uVar13 = uVar12;
  }
  else {
    lVar4 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar18 + 5) * 0x10 + 0x138);
          goto LAB_036f9ebc;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df8e8,5);
LAB_036f9ebc:
    uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    puVar5 = (undefined8 *)func_0x036edd98(uVar7,uVar8);
    if (((ulong)puVar5 & 1) == 0) {
      return puVar5;
    }
  }
  plVar11 = auVar20._8_8_;
  plVar9 = auVar20._0_8_;
  if ((uVar17 & 1) == 0) {
    if ((uVar13 & 1) != 0) goto LAB_036fa040;
    uVar2 = 0;
  }
  else {
    uVar16 = uVar13;
    uVar2 = func_0x036fa068(plVar9,plVar11);
    if (((uVar2 & 1) == 0) && (uVar12 = uVar13 & 1, uVar13 = uVar16, uVar12 != 0)) {
LAB_036fa040:
      if ((bRam0000000005e2daf1 & 1) == 0) {
        func_0x0249f8e4(&DAT_059df8e8);
        func_0x0249f8e4(&DAT_059dfbc0);
        func_0x0249f8e4(&DAT_059dfe48);
        func_0x0249f8e4(&DAT_059e0150);
        bRam0000000005e2daf1 = 1;
      }
      if (plVar11 != (long *)0x0) {
        lVar4 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == _DAT_059df8e8) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar18 + 5) * 0x10 + 0x138);
              goto LAB_036fa324;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        uVar17 = 5;
        puVar5 = (undefined8 *)func_0x024d927c(plVar11);
LAB_036fa324:
        uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar9 != (long *)0x0) {
          lVar4 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == _DAT_059dfe48) {
                puVar5 = (undefined8 *)(lVar4 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_036fa38c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe48,0);
LAB_036fa38c:
          uVar17 = puVar5[1];
          plVar9 = (long *)(*(code *)*puVar5)(plVar9,uVar7);
          if (plVar9 != (long *)0x0) {
            lVar4 = *plVar9;
            uVar16 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == _DAT_059dfbc0) {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar18 + 0x19) * 0x10 + 0x138);
                  goto LAB_036fa3fc;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            uVar17 = 0x19;
            puVar5 = (undefined8 *)func_0x024d927c(plVar9);
LAB_036fa3fc:
            plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
            if (plVar9 != (long *)0x0) {
              lVar4 = *plVar9;
              uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == _DAT_059e0150) {
                    puVar5 = (undefined8 *)(lVar4 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_036fa464;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0150,0);
LAB_036fa464:
                    /* WARNING: Could not recover jumptable at 0x036fa474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar9,puVar5[1]);
              return puVar5;
            }
          }
        }
      }
      auVar20 = func_0x0249fb90();
      plVar9 = auVar20._0_8_;
      if ((bRam0000000005e2daf2 & 1) == 0) {
        func_0x0249f8e4(&DAT_059dfe48);
        func_0x0249f8e4(&DAT_059e9c88);
        bRam0000000005e2daf2 = 1;
      }
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == _DAT_059dfe48) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar18 + 0x22) * 0x10 + 0x138);
              goto LAB_036fa520;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe48,0x22);
LAB_036fa520:
        puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        if (puVar5 != (undefined8 *)0x0) {
          if (puVar5[0x13] != 0) {
            return puVar5;
          }
          lVar4 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == _DAT_059dfe48) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar18 + 0x22) * 0x10 + 0x138);
                goto LAB_036fa598;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe48,0x22);
LAB_036fa598:
          lVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          uVar7 = func_0x0249fb80(_DAT_059e9c88);
          func_0x0372f460(uVar7,auVar20._8_8_ & 0xffffffff,uVar17 & 0xffffffff,uVar13 & 0xffffffff,0
                         );
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)(lVar4 + 0x98);
            *puVar5 = uVar7;
            if (iRam0000000006058428 != 0) {
              puVar5 = (undefined8 *)
                       func_0x0258f520(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                                       ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
            }
            return puVar5;
          }
        }
      }
      auVar20 = func_0x0249fb90();
      plVar11 = auVar20._8_8_;
      plVar9 = auVar20._0_8_;
      if ((bRam0000000005e2daf3 & 1) == 0) {
        func_0x0249f8e4(&DAT_059df8e8);
        func_0x0249f8e4(&DAT_059dfe48);
        func_0x0249f8e4(&DAT_059e1498);
        bRam0000000005e2daf3 = 1;
      }
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == _DAT_059dfe48) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_036fa6a0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe48,7);
LAB_036fa6a0:
        lVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == _DAT_059df8e8) {
                puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto LAB_036fa70c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df8e8,5);
LAB_036fa70c:
          uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          lVar15 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == _DAT_059dfe48) {
                puVar5 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_036fa770;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe48,0);
LAB_036fa770:
          uVar7 = (*(code *)*puVar5)(plVar9,uVar7,puVar5[1]);
          if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
            func_0x0249fa64(_DAT_059e1498);
          }
          iVar1 = func_0x036c47c0(uVar7,plVar11,0);
          if (lVar4 != 0) {
            return (undefined8 *)(ulong)(iVar1 <= *(int *)(lVar4 + 0x10));
          }
        }
      }
      auVar22 = func_0x0249fb90();
      return (undefined8 *)(ulong)(auVar22._8_4_ <= *(int *)(auVar22._0_8_ + 0x10));
    }
  }
  return (undefined8 *)(ulong)(uVar2 & 1);
}


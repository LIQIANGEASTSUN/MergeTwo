/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: ActivationResult Activate(GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Player.IPlayer player, GameLogic.Player.Board.IBoard board)
 * Ghidra function entry: 036dae04
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036dae04(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,ulong param_5,
                   long *param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  int iVar7;
  long *plVar19;
  ulong uVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  int iVar32;
  int *piVar33;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar34;
  long unaff_x22;
  long *plVar35;
  undefined *unaff_x23;
  undefined *puVar36;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  long lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 auStack_40 [2];
  
  uVar11 = func_0x03530c84(param_2,0);
  auStack_40[0] = unaff_x30;
  if ((bRam0000000005e2da30 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2da30 = 1;
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar24 = param_1;
  func_0x0364aa28(param_3,param_4,param_1,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar12 = (long *)func_0x03530158(uVar11,0);
  if (extraout_x1 == 0) {
    uVar25 = 1;
  }
  else {
    uVar25 = (ulong)*(uint *)(extraout_x1 + 0x1c);
  }
  plVar17 = param_3;
  if (param_1 == (long *)0x0) {
    auVar38 = func_0x0249fb90();
    plVar12 = auVar38._8_8_;
    param_1 = auVar38._0_8_;
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    plVar17 = plVar24;
    unaff_x19 = param_3;
    unaff_x21 = uVar11;
    unaff_x22 = extraout_x1;
    unaff_x23 = &DAT_059e2c00;
    unaff_x24 = (undefined *)0x5e2d000;
    auStack_40[0] = 0x36daf18;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = auStack_40[0];
  *(long **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long **)((long)register0x00000008 + -8) = unaff_x19;
  plVar35 = (long *)(uVar25 & 0xffffffff);
  plVar24 = plVar17;
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
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  uVar14 = 0x5e2d000;
  if (plVar17 != (long *)0x0) {
    lVar28 = *plVar17;
    uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar25 != 0) {
      piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 5) * 0x10 + 0x138);
          goto LAB_036db040;
        }
        uVar25 = uVar25 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059df8e8,5);
LAB_036db040:
    uVar14 = (*(code *)*puVar13)(plVar17,puVar13[1]);
    uVar25 = 0;
    uVar15 = func_0x036ee328(param_1,plVar17,plVar35);
    if ((uVar15 & 1) == 0) {
      return (char *)0x0;
    }
    uVar15 = func_0x036ed7f4(param_1,uVar14,0);
    if ((uVar15 & 1) != 0) {
      return (char *)0x2;
    }
    plVar24 = (long *)0x0;
    uVar15 = func_0x036edd98(param_1,uVar14);
    if ((uVar15 & 1) == 0) {
      plVar24 = (long *)0x0;
      uVar15 = func_0x036edf9c(param_1,uVar14);
      if ((uVar15 & 1) == 0) {
        return (char *)0x0;
      }
      lVar28 = func_0x036d5e58(param_1);
      if ((lVar28 != 0) && (*(long *)(lVar28 + 0xa8) != 0)) {
        plVar16 = *(long **)(*(long *)(lVar28 + 0xa8) + 0x10);
        param_1 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          lVar28 = *plVar16;
          uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar25 != 0) {
            piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059e0170) {
                puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 4) * 0x10 + 0x138);
                goto LAB_036db338;
              }
              uVar25 = uVar25 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar25 != 0);
          }
          puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059e0170,4);
LAB_036db338:
          uVar25 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          uVar9 = 1;
          if ((uVar25 & 1) != 0) {
            uVar9 = 2;
          }
          return (char *)(ulong)uVar9;
        }
      }
    }
    else {
      plVar16 = (long *)param_1[2];
      if (plVar16 != (long *)0x0) {
        plVar17 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                    (plVar16,uVar14,*(undefined8 *)(*plVar16 + 0x1d0));
        plVar24 = (long *)0x0;
        uVar25 = 0;
        func_0x037275b8(param_1,plVar12);
        lVar28 = func_0x036d5e58(param_1);
        if ((lVar28 != 0) && (*(long *)(lVar28 + 0x28) != 0)) {
          plVar24 = (long *)0x0;
          func_0x03700cf4(*(long *)(lVar28 + 0x28),plVar35);
          if (plVar17 != (long *)0x0) {
            lVar28 = *plVar17;
            unaff_x24 = &DAT_059dfbc0;
            uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar15 != 0) {
              piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                  puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                  goto LAB_036db1dc;
                }
                uVar15 = uVar15 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar15 != 0);
            }
            plVar24 = (long *)0x3;
            puVar13 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036db1dc:
            plVar16 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
            if (plVar16 != (long *)0x0) {
              lVar28 = *plVar16;
              unaff_x25 = &DAT_059deb70;
              uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar15 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                    puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 2) * 0x10 + 0x138);
                    goto LAB_036db248;
                  }
                  uVar15 = uVar15 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar15 != 0);
              }
              plVar24 = (long *)0x2;
              puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036db248:
              plVar35 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
              lVar28 = func_0x036d5e58(param_1);
              if (((lVar28 != 0) && (*(long *)(lVar28 + 0x18) != 0)) &&
                 (uVar15 = func_0x037537dc(*(long *)(lVar28 + 0x18),0), plVar35 != (long *)0x0)) {
                lVar28 = *plVar35;
                unaff_x26 = (long *)&DAT_059deb60;
                uVar14 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar14 != 0) {
                  piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059deb60) {
                      puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0x12) * 0x10 + 0x138);
                      goto LAB_036db2d4;
                    }
                    uVar14 = uVar14 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar14 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb60,0x12);
LAB_036db2d4:
                plVar24 = (long *)puVar13[1];
                uVar18 = (*(code *)*puVar13)(plVar35,uVar15 & 0xffffffff);
                uVar14 = uVar15;
                if ((uVar18 & 1) != 0) {
                  lVar28 = *plVar35;
                  uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar15 != 0) {
                    piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059deb60) {
                        puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                        goto LAB_036db364;
                      }
                      uVar15 = uVar15 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar35,_DAT_059deb60,3);
LAB_036db364:
                  auVar38 = (*(code *)*puVar13)(plVar35,puVar13[1]);
                  *(undefined1 (*) [16])((long)register0x00000008 + -0x68) = auVar38;
                  if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                    func_0x0249fa64();
                  }
                  plVar24 = _DAT_05a29960;
                  uVar15 = func_0x0288eda8((undefined1 *)((long)register0x00000008 + -0x68),
                                           (undefined1 *)((long)register0x00000008 + -0x58));
                  if ((uVar15 & 1) != 0) {
                    lVar28 = func_0x036d5e58(param_1);
                    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x18) == 0)) goto LAB_036db604;
                    uVar25 = 0;
                    plVar24 = plVar12;
                    func_0x03754988(*(long *)(lVar28 + 0x18),
                                    *(undefined8 *)((long)register0x00000008 + -0x58));
                  }
                }
                iVar6 = func_0x036fa7dc(param_1,0);
                if (0 < iVar6) {
                  return (char *)0x1;
                }
                lVar28 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar15 != 0) {
                  piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                      goto LAB_036db434;
                    }
                    uVar15 = uVar15 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar15 != 0);
                }
                plVar24 = (long *)0x3;
                puVar13 = (undefined8 *)func_0x024d927c(plVar17);
LAB_036db434:
                plVar16 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
                if (plVar16 != (long *)0x0) {
                  lVar28 = *plVar16;
                  uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar15 != 0) {
                    piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                        puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0xe) * 0x10 + 0x138);
                        goto LAB_036db498;
                      }
                      uVar15 = uVar15 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb70,0xe);
LAB_036db498:
                  uVar15 = (*(code *)*puVar13)(plVar16,puVar13[1]);
                  if ((uVar15 & 1) == 0) {
                    return (char *)0x1;
                  }
                  plVar24 = plVar17;
                  plVar19 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                  plVar35 = plVar16;
                  if ((plVar19 != (long *)0x0) &&
                     (plVar16 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar24 = plVar19,
                     plVar16 != (long *)0x0)) {
                    uVar15 = func_0x022bffa8(0,_DAT_059deb60);
                    plVar35 = (long *)(uVar15 & 0xffffffff);
                    lVar28 = func_0x036d5ec8(param_1);
                    plVar24 = plVar16;
                    if (lVar28 != 0) {
                      uVar15 = func_0x0375380c(lVar28,plVar35,0);
                      if ((uVar15 & 1) != 0) {
                        return (char *)0x1;
                      }
                      plVar24 = plVar17;
                      lVar28 = func_0x022bffa8(3,_DAT_059dfbc0);
                      if (lVar28 != 0) {
                        uVar15 = func_0x022bffa8(0x10,_DAT_059deb70,lVar28);
                        if ((uVar15 & 1) == 0) {
                          return (char *)0x2;
                        }
                        param_1 = (long *)func_0x036d5ec8(param_1);
                        plVar12 = (long *)func_0x03530c84(plVar12,0);
                        plVar24 = plVar17;
                        plVar16 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                        if (plVar16 != (long *)0x0) {
                          auVar38 = func_0x022bffa8(0xc,_DAT_059deb70);
                          *(undefined1 (*) [16])((long)register0x00000008 + -0x78) = auVar38;
                          uVar15 = func_0x022bf4f8((undefined1 *)((long)register0x00000008 + -0x78),
                                                   _DAT_05a27ee0);
                          lVar28 = 0;
                          lVar37 = 0;
                          if ((uVar15 & 1) != 0) {
                            plVar17 = (long *)func_0x023f3ca0((undefined1 *)
                                                              ((long)register0x00000008 + -0x78),
                                                              _DAT_05a27ed8);
                            if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                              func_0x0249fa64(_DAT_059e2ba0);
                            }
                            uVar11 = func_0x0430d994(plVar12,plVar17,0);
                            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar11;
                            *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
                            *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
                            plVar16 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x90),
                                            (undefined1 *)((long)register0x00000008 + -0x48));
                            lVar37 = *(long *)((long)register0x00000008 + -0x88);
                            lVar28 = *(long *)((long)register0x00000008 + -0x90);
                          }
                          plVar24 = plVar16;
                          if (param_1 != (long *)0x0) {
                            param_1[0xd] = lVar37;
                            param_1[0xc] = lVar28;
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
  auVar38 = func_0x0249fb90();
  lVar28 = auVar38._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x36db608;
  *(long **)((long)register0x00000008 + -0xd0) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -200) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar14;
  *(long **)((long)register0x00000008 + -0xb0) = plVar35;
  *(long **)((long)register0x00000008 + -0xa8) = plVar17;
  *(long **)((long)register0x00000008 + -0xa0) = plVar12;
  *(long **)((long)register0x00000008 + -0x98) = param_1;
  plVar19 = (long *)0x5e2d000;
  plVar16 = (long *)(param_5 & 0xffffffff);
  puVar36 = (undefined *)(uVar25 & 0xffffffff);
  plVar12 = (long *)(auVar38._8_8_ & 0xffffffff);
  plVar17 = plVar24;
  uVar14 = uVar25;
  uVar15 = param_5;
  plVar35 = param_6;
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
  plVar34 = plVar24;
  if (plVar24 == (long *)0x0) {
LAB_036dbb68:
    uVar11 = 0x36dbb6c;
    auVar38 = func_0x0249fb90();
    plVar24 = plVar17;
  }
  else {
    lVar37 = *plVar24;
    uVar14 = (ulong)*(ushort *)(lVar37 + 0x12e);
    if (uVar14 != 0) {
      piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar14 = uVar14 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059df8e8,5);
LAB_036db6f0:
    plVar19 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
    uVar14 = func_0x036edd98(lVar28,plVar19,0);
    if (((uVar14 & 1) == 0) && (uVar14 = func_0x036edf9c(lVar28,plVar19,0), (uVar14 & 1) == 0)) {
      return (char *)0x0;
    }
    iVar6 = (int)uVar25;
    uVar9 = iVar6 * auVar38._8_4_;
    unaff_x26 = (long *)(ulong)uVar9;
    uVar14 = 0;
    plVar17 = unaff_x26;
    uVar18 = func_0x036ee328(lVar28,plVar24);
    if ((uVar18 & 1) == 0) {
      return (char *)0x0;
    }
    lVar37 = func_0x036d5e58(lVar28);
    if (lVar37 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar37 + 0x50)) {
      lVar37 = func_0x036d5e58();
      if (lVar37 != 0) {
        if ((int)uVar9 < *(int *)(lVar37 + 0x50)) {
          *(int *)param_6 = auVar38._8_4_;
          lVar37 = func_0x036d5e58(lVar28);
          if (lVar37 != 0) {
            *(uint *)(lVar37 + 0x50) = *(int *)(lVar37 + 0x50) - uVar9;
            return (char *)0x1;
          }
        }
        else {
          plVar24 = *(long **)(lVar28 + 0x10);
          if (plVar24 != (long *)0x0) {
            plVar34 = (long *)(**(code **)(*plVar24 + 0x1c8))
                                        (plVar24,plVar19,*(undefined8 *)(*plVar24 + 0x1d0));
            plVar17 = (long *)0x0;
            uVar25 = func_0x036edd98(lVar28,plVar19);
            if (((uVar25 & 1) == 0) || (iVar6 = func_0x036fa7dc(lVar28,0), 0 < iVar6)) {
LAB_036dbaac:
              plVar17 = (long *)0x0;
              uVar25 = func_0x036edf9c(lVar28,plVar19);
              if ((uVar25 & 1) == 0) {
                return (char *)0x1;
              }
              lVar37 = func_0x036d5e58(lVar28);
              if ((lVar37 != 0) && (*(long *)(lVar37 + 0xa8) != 0)) {
                plVar24 = *(long **)(*(long *)(lVar37 + 0xa8) + 0x10);
                lVar28 = 0;
                if (plVar24 != (long *)0x0) {
                  lVar28 = *plVar24;
                  uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar25 != 0) {
                    piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059e0170) {
                        puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 1) * 0x10 + 0x138);
                        goto LAB_036dbb34;
                      }
                      uVar25 = uVar25 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059e0170,1);
LAB_036dbb34:
                  uVar25 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                  if ((uVar25 & 1) != 0) {
                    return (char *)0x1;
                  }
                  return (char *)0x2;
                }
              }
            }
            else if (plVar34 != (long *)0x0) {
              lVar37 = *plVar34;
              param_6 = (long *)&DAT_059dfbc0;
              uVar25 = (ulong)*(ushort *)(lVar37 + 0x12e);
              if (uVar25 != 0) {
                piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                    goto LAB_036db9cc;
                  }
                  uVar25 = uVar25 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar25 != 0);
              }
              plVar17 = (long *)0x3;
              puVar13 = (undefined8 *)func_0x024d927c(plVar34);
LAB_036db9cc:
              plVar24 = (long *)(*(code *)*puVar13)(plVar34,puVar13[1]);
              if (plVar24 != (long *)0x0) {
                lVar37 = *plVar24;
                puVar36 = &DAT_059deb70;
                uVar25 = (ulong)*(ushort *)(lVar37 + 0x12e);
                if (uVar25 != 0) {
                  piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                      puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 0xe) * 0x10 + 0x138);
                      goto LAB_036dba38;
                    }
                    uVar25 = uVar25 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar25 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059deb70,0xe);
LAB_036dba38:
                uVar25 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                plVar16 = plVar24;
                if ((uVar25 & 1) == 0) goto LAB_036dbaac;
                plVar17 = plVar34;
                plVar24 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                if ((plVar24 != (long *)0x0) &&
                   (plVar30 = (long *)func_0x022bffa8(2,_DAT_059deb70), plVar17 = plVar24,
                   plVar30 != (long *)0x0)) {
                  uVar25 = func_0x022bffa8(0,_DAT_059deb60);
                  lVar37 = func_0x036d5ec8(lVar28);
                  plVar17 = plVar30;
                  plVar34 = (long *)(uVar25 & 0xffffffff);
                  if (lVar37 != 0) {
                    uVar25 = func_0x0375380c(lVar37,(long *)(uVar25 & 0xffffffff),0);
                    if ((uVar25 & 1) == 0) {
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
    uVar18 = func_0x036edd98(lVar28,plVar19);
    if ((uVar18 & 1) == 0) {
      plVar17 = (long *)0x0;
      uVar25 = func_0x036edf9c(lVar28,plVar19);
      if ((uVar25 & 1) == 0) {
        return (char *)0x1;
      }
      lVar37 = func_0x036d5e58(lVar28);
      if (((lVar37 == 0) || (*(long *)(lVar37 + 0xa8) == 0)) ||
         (plVar19 = *(long **)(*(long *)(lVar37 + 0xa8) + 0x10), plVar19 == (long *)0x0))
      goto LAB_036dbb68;
      lVar37 = *plVar19;
      uVar25 = (ulong)*(ushort *)(lVar37 + 0x12e);
      if (uVar25 != 0) {
        piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == _DAT_059e0170) {
            puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar25 = uVar25 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059e0170,5);
LAB_036db928:
      iVar7 = (*(code *)*puVar13)(plVar19,puVar13[1]);
      iVar27 = iVar7;
      if (iVar6 < iVar7) {
        iVar32 = (int)*param_6;
        do {
          iVar27 = iVar27 - iVar6;
          iVar32 = iVar32 + 1;
        } while (iVar6 < iVar27);
        *(int *)param_6 = iVar32;
      }
      uVar9 = iVar27 - iVar7;
    }
    else {
      lVar37 = func_0x036d5e58(lVar28);
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x28) == 0)) goto LAB_036dbb68;
      uVar9 = *(uint *)(*(long *)(lVar37 + 0x28) + 0x10);
      plVar19 = (long *)(ulong)uVar9;
      plVar12 = plVar19;
      uVar8 = uVar9;
      while (iVar6 < (int)uVar8) {
        lVar37 = func_0x036d5e58(lVar28);
        if ((lVar37 == 0) || (*(long *)(lVar37 + 0x28) == 0)) goto LAB_036dbb68;
        plVar17 = (long *)0x0;
        func_0x03700cf4(*(long *)(lVar37 + 0x28),uVar25 & 0xffffffff);
        uVar8 = (int)plVar12 - iVar6;
        plVar12 = (long *)(ulong)uVar8;
        *(int *)param_6 = (int)*param_6 + 1;
      }
      uVar9 = (int)plVar12 - uVar9;
    }
    puVar36 = (undefined *)(ulong)uVar9;
    param_6 = (long *)func_0x036d5e58(lVar28);
    auVar38._8_4_ = (uint)param_5 & 1;
    auVar38._0_8_ = lVar28;
    auVar38._12_4_ = 0;
    uVar11 = 0x36db980;
  }
  lVar37 = auVar38._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x120) = uVar11;
  *(long **)((long)register0x00000008 + -0x110) = plVar19;
  *(undefined **)((long)register0x00000008 + -0x108) = puVar36;
  *(long **)((long)register0x00000008 + -0x100) = param_6;
  *(long **)((long)register0x00000008 + -0xf8) = plVar16;
  *(long **)((long)register0x00000008 + -0xf0) = plVar34;
  *(long *)((long)register0x00000008 + -0xe8) = lVar28;
  plVar34 = (long *)0x5e2d000;
  plVar16 = (long *)(auVar38._8_8_ & 0xffffffff);
  plVar17 = plVar24;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar28 = func_0x036d5e58(lVar37);
  if (lVar28 != 0) {
    if (*(int *)(lVar28 + 0x50) < 1) {
      if (plVar24 != (long *)0x0) {
        lVar28 = *plVar24;
        plVar34 = (long *)&DAT_059df8e8;
        uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar25 != 0) {
          piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
              puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar25 = uVar25 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar11 = (*(code *)*puVar13)(plVar24,puVar13[1]);
        plVar17 = (long *)0x0;
        uVar18 = func_0x036edd98(lVar37,uVar11);
        lVar28 = *plVar24;
        uVar1 = *(ushort *)(lVar28 + 0x12e);
        uVar25 = (ulong)uVar1;
        if ((uVar18 & 1) == 0) {
          if (uVar1 != 0) {
            piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar25 = uVar25 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar25 != 0);
          }
          puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar11 = (*(code *)*puVar13)(plVar24,puVar13[1]);
          plVar17 = (long *)0x0;
          uVar25 = func_0x036edf9c(lVar37,uVar11);
          if ((uVar25 & 1) == 0) {
            uVar9 = 0;
            goto LAB_036dbc00;
          }
          lVar28 = func_0x036d5e58(lVar37);
          if ((lVar28 != 0) && (*(long *)(lVar28 + 0xa8) != 0)) {
            plVar30 = *(long **)(*(long *)(lVar28 + 0xa8) + 0x10);
            lVar37 = 0;
            if (plVar30 != (long *)0x0) {
              lVar28 = *plVar30;
              uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar25 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059e0170) {
                    iVar6 = *piVar33 + 6;
                    goto LAB_036dbfbc;
                  }
                  uVar25 = uVar25 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar25 != 0);
              }
              uVar11 = 6;
              lVar28 = _DAT_059e0170;
              goto LAB_036dbfac;
            }
          }
        }
        else {
          if (uVar1 != 0) {
            piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar25 = uVar25 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar25 != 0);
          }
          plVar17 = (long *)0x5;
          puVar13 = (undefined8 *)func_0x024d927c(plVar24);
LAB_036dbd14:
          uVar11 = (*(code *)*puVar13)(plVar24,puVar13[1]);
          plVar30 = *(long **)(lVar37 + 0x10);
          if (plVar30 != (long *)0x0) {
            plVar17 = *(long **)(*plVar30 + 0x1d0);
            plVar34 = (long *)(**(code **)(*plVar30 + 0x1c8))(plVar30,uVar11);
            if ((auVar38._8_8_ & 1) == 0) {
LAB_036dbefc:
              if (plVar34 != (long *)0x0) {
                lVar28 = *plVar34;
                uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar25 != 0) {
                  piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar25 = uVar25 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar25 != 0);
                }
                plVar17 = (long *)0x3;
                puVar13 = (undefined8 *)func_0x024d927c(plVar34);
LAB_036dbf58:
                plVar30 = (long *)(*(code *)*puVar13)(plVar34,puVar13[1]);
                if (plVar30 != (long *)0x0) {
                  lVar28 = *plVar30;
                  uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar25 != 0) {
                    piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                        iVar6 = *piVar33 + 0x14;
LAB_036dbfbc:
                        puVar13 = (undefined8 *)(lVar28 + (long)iVar6 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar25 = uVar25 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar25 != 0);
                  }
                  uVar11 = 0x14;
                  lVar28 = _DAT_059deb70;
LAB_036dbfac:
                  puVar13 = (undefined8 *)func_0x024d927c(plVar30,lVar28,uVar11);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar21 = (char *)(*(code *)*puVar13)(plVar30,puVar13[1]);
                  return pcVar21;
                }
              }
            }
            else if (plVar34 != (long *)0x0) {
              lVar28 = *plVar34;
              puVar36 = &DAT_059dfbc0;
              uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar25 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar25 = uVar25 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar25 != 0);
              }
              plVar17 = (long *)0x19;
              puVar13 = (undefined8 *)func_0x024d927c(plVar34);
LAB_036dbe38:
              plVar30 = (long *)(*(code *)*puVar13)(plVar34,puVar13[1]);
              if (plVar30 != (long *)0x0) {
                lVar28 = *plVar30;
                plVar19 = (long *)&DAT_059e0150;
                uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar25 != 0) {
                  piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059e0150) {
                      puVar13 = (undefined8 *)(lVar28 + (long)*piVar33 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar25 = uVar25 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar25 != 0);
                }
                plVar17 = (long *)0x0;
                puVar13 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dbeac:
                uVar25 = (*(code *)*puVar13)(plVar30,puVar13[1]);
                plVar16 = plVar30;
                if ((uVar25 & 1) == 0) goto LAB_036dbefc;
                lVar28 = *plVar34;
                uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar25 != 0) {
                  piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                      puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar25 = uVar25 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar25 != 0);
                }
                plVar17 = (long *)0x19;
                puVar13 = (undefined8 *)func_0x024d927c(plVar34);
LAB_036dbff0:
                plVar30 = (long *)(*(code *)*puVar13)(plVar34,puVar13[1]);
                if (plVar30 != (long *)0x0) {
                  lVar28 = *plVar30;
                  uVar25 = (ulong)*(ushort *)(lVar28 + 0x12e);
                  if (uVar25 != 0) {
                    piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059e0150) {
                        puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar25 = uVar25 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar25 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar21 = (char *)(*(code *)*puVar13)(plVar30,lVar37,plVar24,puVar13[1]);
                  return pcVar21;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar28 = func_0x036d5e58(lVar37);
      if (lVar28 != 0) {
        uVar9 = *(uint *)(lVar28 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar9;
      }
    }
  }
  auVar39 = func_0x0249fb90();
  plVar30 = auVar39._8_8_;
  lVar28 = auVar39._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x36dc07c;
  *(undefined **)((long)register0x00000008 + -0x170) = unaff_x28;
  *(undefined **)((long)register0x00000008 + -0x168) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x160) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x158) = plVar12;
  *(long **)((long)register0x00000008 + -0x150) = plVar19;
  *(undefined **)((long)register0x00000008 + -0x148) = puVar36;
  *(long **)((long)register0x00000008 + -0x140) = plVar16;
  *(long **)((long)register0x00000008 + -0x138) = plVar34;
  *(long **)((long)register0x00000008 + -0x130) = plVar24;
  *(long *)((long)register0x00000008 + -0x128) = lVar37;
  uVar18 = uVar15 & 0xffffffff;
  uVar25 = uVar14;
  uVar26 = uVar15;
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
  *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
  *(undefined8 *)((long)register0x00000008 + -400) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
  uVar20 = func_0x036fa5f8(lVar28,plVar30);
  if ((uVar20 & 1) != 0) {
    return (char *)0x0;
  }
  lVar37 = func_0x036d5e58(lVar28);
  plVar16 = (long *)0x5e2d000;
  if ((lVar37 != 0) && (*(long *)(lVar37 + 0x18) != 0)) {
    auVar38 = func_0x03753e70(*(long *)(lVar37 + 0x18),0);
    unaff_x28 = &DAT_05a27fc8;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x198) = auVar38;
    lVar37 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
      lVar37 = func_0x024d8f40();
    }
    pcVar21 = (char *)func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x198),
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar37 + 0xc0) + 8) + 0x80));
    if (*pcVar21 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844((undefined1 *)((long)register0x00000008 + -0x198),
                    (undefined1 *)((long)register0x00000008 + -0x1d8),_DAT_05a27fd0);
    unaff_x27 = &DAT_059e2c00;
    plVar16 = *(long **)((long)register0x00000008 + -0x1d8);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar11 = func_0x03530158(plVar16,0);
    plVar24 = (long *)0x0;
    uVar20 = func_0x0352ff64(uVar11,plVar17);
    if ((uVar20 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar30 != (long *)0x0) {
      lVar37 = *plVar30;
      unaff_x26 = (long *)&DAT_059df8e8;
      uVar20 = (ulong)*(ushort *)(lVar37 + 0x12e);
      if (uVar20 != 0) {
        piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
            puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar20 = uVar20 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar20 != 0);
      }
      plVar24 = (long *)0x5;
      puVar13 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dc294:
      uVar11 = (*(code *)*puVar13)(plVar30,puVar13[1]);
      plVar19 = *(long **)(lVar28 + 0x10);
      if (plVar19 != (long *)0x0) {
        plVar24 = *(long **)(*plVar19 + 0x1d0);
        plVar19 = (long *)(**(code **)(*plVar19 + 0x1c8))(plVar19,uVar11);
        if (plVar19 != (long *)0x0) {
          lVar37 = *plVar19;
          uVar20 = (ulong)*(ushort *)(lVar37 + 0x12e);
          if (uVar20 != 0) {
            piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar20 = uVar20 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar20 != 0);
          }
          plVar24 = (long *)0x3;
          puVar13 = (undefined8 *)func_0x024d927c(plVar19);
LAB_036dc31c:
          plVar16 = (long *)(*(code *)*puVar13)(plVar19,puVar13[1]);
          lVar37 = func_0x036d5e58(lVar28);
          if ((lVar37 != 0) && (*(long *)(lVar37 + 0x18) != 0)) {
            uVar9 = *(uint *)(*(long *)(lVar37 + 0x18) + 0x38);
            plVar12 = (long *)(ulong)uVar9;
            if ((int)uVar9 < 1) {
              lVar37 = *plVar30;
              uVar20 = (ulong)*(ushort *)(lVar37 + 0x12e);
              if (uVar20 != 0) {
                piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                    puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar20 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar11 = (*(code *)*puVar13)(plVar30,puVar13[1]);
              plVar19 = (long *)0x0;
              uVar20 = func_0x036f2f04(lVar28,uVar11);
              if ((uVar20 & 1) == 0) {
                plVar19 = (long *)0x0;
                uVar20 = func_0x036f2fec(lVar28,plVar30);
                plVar24 = plVar19;
                if ((uVar20 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (plVar16 != (long *)0x0) {
                  plVar24 = plVar16;
                  plVar19 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar37 = func_0x036d5ec8(lVar28);
                  plVar12 = plVar19;
                  if (lVar37 != 0) {
                    auVar38 = func_0x037537dc(lVar37,0);
                    uVar20 = auVar38._0_8_;
                    if (plVar19 != (long *)0x0) {
                      uVar26 = auVar38._8_8_ & 0xffffffff;
                      uVar25 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      plVar12 = (long *)(uVar25 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar37 = func_0x036d5e58(lVar28);
                plVar24 = plVar19;
                if ((lVar37 != 0) && (*(long *)(lVar37 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar37 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  plVar12 = (long *)0x0;
                  uVar20 = uVar25;
LAB_036dc558:
                  lVar37 = *plVar30;
                  uVar25 = (ulong)*(ushort *)(lVar37 + 0x12e);
                  if (uVar25 != 0) {
                    piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                        puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                        uVar25 = uVar20;
                        goto LAB_036dc5a8;
                      }
                      uVar25 = uVar25 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar25 != 0);
                  }
                  plVar19 = (long *)0x5;
                  puVar13 = (undefined8 *)func_0x024d927c(plVar30);
                  uVar25 = uVar20;
LAB_036dc5a8:
                  uVar11 = (*(code *)*puVar13)(plVar30,puVar13[1]);
                  plVar34 = *(long **)(lVar28 + 0x10);
                  plVar24 = plVar19;
                  if (plVar34 != (long *)0x0) {
                    plVar24 = *(long **)(*plVar34 + 0x1d0);
                    uVar11 = (**(code **)(*plVar34 + 0x1c8))(plVar34,uVar11);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar20 = func_0x036c47c0(uVar11,plVar30);
                    unaff_x26 = (long *)(uVar20 & 0xffffffff);
                    lVar37 = func_0x036d5e58(lVar28);
                    if ((lVar37 != 0) && (*(long *)(lVar37 + 0x28) != 0)) {
                      uVar25 = 0;
                      plVar24 = unaff_x26;
                      iVar6 = func_0x03700d78(*(long *)(lVar37 + 0x28),plVar12);
                      uVar9 = (int)plVar12 - iVar6;
                      plVar12 = (long *)(ulong)uVar9;
                      if (uVar9 == 0) {
                        if (plVar16 != (long *)0x0) {
                          plVar19 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                          plVar12 = (long *)func_0x036d5ec8(lVar28);
                          plVar34 = (long *)func_0x03530c84(plVar17,0);
                          plVar24 = plVar16;
                          plVar16 = plVar19;
                          if (plVar19 != (long *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,plVar19,plVar12,plVar30);
                            func_0x037275b8(lVar28,plVar17,1,0);
                            func_0x03727828(lVar28,plVar30,plVar17,0);
                            plVar24 = (long *)(ulong)((uint)uVar14 & 1);
                            uVar25 = (ulong)((uint)uVar15 & 1);
                            uVar26 = 0;
                            uVar9 = func_0x036fa00c(lVar28,plVar30);
                            auVar39._8_4_ = uVar9;
                            auVar39._0_8_ = lVar28;
                            auVar39._12_4_ = 0;
                            lVar37 = func_0x036d5ec8(lVar28);
                            plVar35 = plVar34;
                            if (lVar37 != 0) {
                              auVar38 = func_0x03753e70(lVar37,0);
                              *(undefined1 (*) [16])((long)register0x00000008 + -0x1c8) = auVar38;
                              uVar8 = func_0x022bf4f8((undefined1 *)
                                                      ((long)register0x00000008 + -0x1c8),
                                                      _DAT_05a27fc8);
                              if ((uVar9 & uVar8 & 1) == 0) {
                                uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1c8);
                                uVar18 = *(ulong *)((long)register0x00000008 + -0x1c0);
                                uVar22 = func_0x03530c84(plVar17,0);
                                *(undefined8 *)((long)register0x00000008 + -0x188) = uVar22;
                                *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x1d8),
                                                (undefined1 *)((long)register0x00000008 + -0x188),
                                                _DAT_05a27fa0);
                                uVar25 = *(ulong *)((long)register0x00000008 + -0x1d0);
                                uVar26 = 0;
                                auVar38 = func_0x03489150(uVar11,uVar18,
                                                          *(undefined8 *)
                                                           ((long)register0x00000008 + -0x1d8));
                                plVar35 = plVar34;
                              }
                              else {
                                uVar11 = func_0x03530c84(plVar17,0);
                                *(undefined8 *)((long)register0x00000008 + -0x188) = uVar11;
                                *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x1d8),
                                                (undefined1 *)((long)register0x00000008 + -0x188),
                                                _DAT_05a27fa0);
                                auVar38 = *(undefined1 (*) [16])((long)register0x00000008 + -0x1d8);
                                plVar35 = plVar34;
                              }
                              plVar17 = auVar38._0_8_;
                              lVar28 = func_0x036d5ec8(lVar28);
                              *(undefined1 (*) [16])((long)register0x00000008 + -0x1b8) = auVar38;
                              uVar15 = func_0x022bf4f8((undefined1 *)
                                                       ((long)register0x00000008 + -0x1b8),
                                                       _DAT_05a27fc8);
                              if ((uVar15 & 1) == 0) {
                                plVar24 = (long *)0x0;
                                uVar11 = 0;
                              }
                              else {
                                plVar17 = (long *)func_0x023f3ca0((undefined1 *)
                                                                  ((long)register0x00000008 + -0x1b8
                                                                  ),_DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uVar11 = func_0x03530158(plVar17,0);
                                *(undefined8 *)((long)register0x00000008 + -0x188) = uVar11;
                                *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
                                func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x1d8),
                                                (undefined1 *)((long)register0x00000008 + -0x188),
                                                _DAT_05a28018);
                                uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
                                plVar24 = *(long **)((long)register0x00000008 + -0x1d0);
                              }
                              auVar5._8_8_ = 0;
                              auVar5._0_8_ = auVar38._8_8_;
                              auVar39 = auVar5 << 0x40;
                              if (lVar28 != 0) {
                                func_0x03753f18(lVar28,uVar11,plVar24,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar6 < 1) {
                          return (char *)0x0;
                        }
                        lVar28 = func_0x036d5ec8(lVar28);
                        if (lVar28 != 0) {
                          *(uint *)(lVar28 + 0x38) = uVar9;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar37 = func_0x036d5e58(lVar28);
              if ((lVar37 != 0) && (plVar16 != (long *)0x0)) {
                lVar29 = *plVar16;
                unaff_x26 = *(long **)(lVar37 + 0x28);
                uVar20 = (ulong)*(ushort *)(lVar29 + 0x12e);
                if (uVar20 != 0) {
                  piVar33 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                      puVar13 = (undefined8 *)(lVar29 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar20 = uVar20 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar20 != 0);
                }
                plVar24 = (long *)0x3;
                puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dc3f8:
                uVar20 = (*(code *)*puVar13)(plVar16,puVar13[1]);
                if (unaff_x26 != (long *)0x0) {
                  plVar24 = (long *)(uVar20 & 0xffffffff);
                  uVar25 = 0;
                  uVar8 = func_0x03700d78(unaff_x26,plVar12);
                  if (uVar8 == uVar9) {
                    lVar37 = *plVar16;
                    uVar20 = (ulong)*(ushort *)(lVar37 + 0x12e);
                    if (uVar20 != 0) {
                      piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                          puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar20 = uVar20 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar20 != 0);
                    }
                    plVar24 = (long *)0x2;
                    puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dc760:
                    plVar16 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
                    lVar37 = func_0x036d5e58(lVar28);
                    if (lVar37 != 0) {
                      plVar12 = *(long **)(lVar37 + 0x18);
                      plVar19 = (long *)func_0x03530c84(plVar17,0);
                      if (plVar16 != (long *)0x0) {
                        lVar37 = *plVar16;
                        uVar25 = (ulong)*(ushort *)(lVar37 + 0x12e);
                        if (uVar25 != 0) {
                          piVar33 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar33 + -2) == _DAT_059deb60) {
                              puVar13 = (undefined8 *)(lVar37 + (long)(*piVar33 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar25 = uVar25 - 1;
                            piVar33 = piVar33 + 4;
                          } while (uVar25 != 0);
                        }
                        puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar13)(plVar16,plVar12,plVar30,plVar19,puVar13[1]);
                        func_0x037275b8(lVar28,plVar17,1,0);
                        func_0x03727828(lVar28,plVar30,plVar17,0);
                        plVar24 = (long *)(ulong)((uint)uVar14 & 1);
                        uVar25 = (ulong)((uint)uVar15 & 1);
                        uVar26 = 0;
                        uVar9 = func_0x036fa00c(lVar28,plVar30);
                        auVar2._8_4_ = uVar9;
                        auVar2._0_8_ = lVar28;
                        auVar2._12_4_ = 0;
                        auVar39._8_4_ = uVar9;
                        auVar39._0_8_ = lVar28;
                        auVar39._12_4_ = 0;
                        lVar37 = func_0x036d5e58(lVar28);
                        unaff_x26 = plVar19;
                        if ((lVar37 != 0) && (auVar39 = auVar2, *(long *)(lVar37 + 0x18) != 0)) {
                          auVar38 = func_0x03753e70(*(long *)(lVar37 + 0x18),0);
                          *(undefined1 (*) [16])((long)register0x00000008 + -0x1a8) = auVar38;
                          lVar37 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
                            lVar37 = func_0x024d8f40();
                          }
                          pcVar21 = (char *)func_0x0249f90c((undefined1 *)
                                                            ((long)register0x00000008 + -0x1a8),
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar37 + 0xc0) + 8
                                                                       ) + 0x80));
                          if ((uVar9 & *pcVar21 != '\0') == 0) {
                            uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
                            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
                            uVar23 = func_0x03530c84(plVar17,0);
                            *(undefined8 *)((long)register0x00000008 + -0x188) = uVar23;
                            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
                            *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
                            func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x1d8),
                                            (undefined1 *)((long)register0x00000008 + -0x188),
                                            _DAT_05a27fa0);
                            plVar24 = *(long **)((long)register0x00000008 + -0x1d8);
                            uVar25 = *(ulong *)((long)register0x00000008 + -0x1d0);
                            uVar26 = 0;
                            auVar38 = func_0x03489150(uVar11,uVar22);
                          }
                          else {
                            uVar11 = func_0x03530c84(plVar17,0);
                            *(undefined8 *)((long)register0x00000008 + -0x188) = uVar11;
                            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
                            *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
                            plVar24 = _DAT_05a27fa0;
                            func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x1d8),
                                            (undefined1 *)((long)register0x00000008 + -0x188));
                            auVar38 = *(undefined1 (*) [16])((long)register0x00000008 + -0x1d8);
                          }
                          uVar18 = auVar38._8_8_;
                          uVar11 = auVar38._0_8_;
                          auVar39._8_8_ = uVar11;
                          lVar37 = func_0x036d5e58(lVar28);
                          if (lVar37 != 0) {
                            *(undefined1 (*) [16])((long)register0x00000008 + -0x1b8) = auVar38;
                            plVar17 = *(long **)(lVar37 + 0x18);
                            lVar37 = *(long *)(_DAT_05a27fc8 + 0x20);
                            if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
                              lVar37 = func_0x024d8f40();
                            }
                            pcVar21 = (char *)func_0x0249f90c((undefined1 *)
                                                              ((long)register0x00000008 + -0x1b8),
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar37 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar21 == '\0') {
                              plVar24 = (long *)0x0;
                              uVar22 = 0;
                            }
                            else {
                              uVar11 = func_0x023f3ca0((undefined1 *)
                                                       ((long)register0x00000008 + -0x1b8),
                                                       _DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uVar22 = func_0x03530158(uVar11,0);
                              *(undefined8 *)((long)register0x00000008 + -0x188) = uVar22;
                              *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
                              *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
                              func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x1d8),
                                              (undefined1 *)((long)register0x00000008 + -0x188),
                                              _DAT_05a28018);
                              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
                              plVar24 = *(long **)((long)register0x00000008 + -0x1d0);
                            }
                            auVar4._8_8_ = uVar11;
                            auVar4._0_8_ = lVar28;
                            auVar3._8_8_ = uVar11;
                            auVar3._0_8_ = lVar28;
                            auVar39._8_8_ = uVar11;
                            if (plVar17 != (long *)0x0) {
                              uVar25 = 0;
                              func_0x03753f18(plVar17,uVar22);
                              lVar28 = func_0x036d5e58(lVar28);
                              auVar39 = auVar3;
                              if ((lVar28 != 0) && (auVar39 = auVar4, *(long *)(lVar28 + 0x18) != 0)
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
                    unaff_x26 = (long *)(ulong)uVar8;
                    if ((int)uVar8 < 1) {
                      return (char *)0x0;
                    }
                    lVar28 = func_0x036d5ec8(lVar28);
                    if (lVar28 != 0) {
                      func_0x03754330(lVar28,unaff_x26,0);
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
  uVar11 = auVar39._8_8_;
  func_0x0249fb90();
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x36dcaf8;
  lVar28 = func_0x036d5e58();
  if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x18), lVar28 != 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x210) =
         *(undefined8 *)((long)register0x00000008 + -0x1f0);
    *(ulong *)((long)register0x00000008 + -0x200) = uVar18;
    *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar11;
    *(long **)((long)register0x00000008 + -0x1f0) = plVar17;
    *(long *)((long)register0x00000008 + -0x1e8) = auVar39._0_8_;
    if ((bRam0000000005e2de5c & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de5c = 1;
    }
    lVar37 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar37 + 0x135) & 1) == 0) {
      lVar37 = func_0x024d8f40();
    }
    pcVar21 = (char *)func_0x0249f90c(lVar28 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar37 + 0xc0) + 8) + 0x80));
    if (*pcVar21 != '\0') {
      func_0x02886844(lVar28 + 0x50,(undefined1 *)((long)register0x00000008 + -0x208),_DAT_05a27fd0)
      ;
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x208);
      uVar22 = *(undefined8 *)(lVar28 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar25 = func_0x0430deb0(uVar11,uVar22,0);
      if ((uVar25 & 1) != 0) {
        func_0x02886844(lVar28 + 0x50,(undefined1 *)((long)register0x00000008 + -0x208),
                        _DAT_05a27fd0);
        return *(char **)((long)register0x00000008 + -0x208);
      }
    }
    return *(char **)(lVar28 + 0x28);
  }
  auVar38 = func_0x0249fb90();
  uVar22 = auVar38._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x36dcb1c;
  *(long **)((long)register0x00000008 + -0x200) = plVar17;
  *(long *)((long)register0x00000008 + -0x1f8) = auVar39._0_8_;
  *(long *)((long)register0x00000008 + -0x208) = auVar38._8_8_;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar28 = func_0x036d5e58(uVar22);
  if (lVar28 != 0) {
    lVar28 = *(long *)(lVar28 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar23 = func_0x0352eeec((undefined1 *)((long)register0x00000008 + -0x208),0);
    uVar22 = 0;
    if (lVar28 != 0) {
      pcVar21 = (char *)func_0x03753bf0(lVar28,uVar23,0);
      return pcVar21;
    }
  }
  func_0x0249fb90();
  *(undefined8 *)((long)register0x00000008 + -0x220) = 0x36dcba8;
  *(undefined8 *)((long)register0x00000008 + -0x218) = uVar22;
  lVar28 = func_0x036d5e58();
  if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x18), lVar28 != 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x250) =
         *(undefined8 *)((long)register0x00000008 + -0x220);
    *(long **)((long)register0x00000008 + -0x248) = plVar12;
    *(long **)((long)register0x00000008 + -0x240) = plVar16;
    *(ulong *)((long)register0x00000008 + -0x238) = uVar14 & 0xffffffff;
    *(ulong *)((long)register0x00000008 + -0x230) = uVar18;
    *(undefined8 *)((long)register0x00000008 + -0x228) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x220) = 0x5e2d000;
    *(undefined8 *)((long)register0x00000008 + -0x218) =
         *(undefined8 *)((long)register0x00000008 + -0x218);
    *(undefined8 *)((long)register0x00000008 + -0x260) = extraout_x1_00;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1_00,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
    uVar25 = func_0x0375309c(lVar28);
    if ((uVar25 & 1) != 0) {
      uVar11 = *(undefined8 *)(lVar28 + 0x60);
      iVar6 = *(int *)(_DAT_059e2be8 + 0xe4);
      *(undefined8 *)((long)register0x00000008 + -0x268) = *(undefined8 *)(lVar28 + 0x68);
      *(undefined8 *)((long)register0x00000008 + -0x270) = uVar11;
      if (iVar6 == 0) {
        func_0x0249fa64();
      }
      uVar11 = func_0x0352eeec((undefined1 *)((long)register0x00000008 + -0x260),0);
      lVar37 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar37 + 0x135) & 1) == 0) {
        lVar37 = func_0x024d8f40(lVar37);
      }
      pcVar21 = (char *)func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x270),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar37 + 0xc0) + 8) + 0x80));
      lVar37 = _DAT_05a27fb0;
      if (*pcVar21 == '\0') {
        uVar11 = 0;
        uVar22 = 0;
      }
      else {
        lVar31 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar31 + 0x135);
        lVar29 = lVar31;
        if ((uVar1 & 1) == 0) {
          lVar31 = func_0x024d8f40(lVar31);
          uVar1 = *(ushort *)(*(long *)(lVar37 + 0x20) + 0x135);
          lVar29 = *(long *)(lVar37 + 0x20);
        }
        uVar10 = *(undefined4 *)(**(long **)(lVar31 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar29 = func_0x024d8f40(lVar29);
        }
        uVar22 = func_0x0249f90c((undefined1 *)((long)register0x00000008 + -0x270),
                                 *(long *)(*(long *)(*(long *)(lVar29 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0((undefined1 *)((long)register0x00000008 + -0x280),uVar22,uVar10);
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x280);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar11 = func_0x0430d994(uVar22,uVar11,0);
        *(undefined8 *)((long)register0x00000008 + -600) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
        func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x280),
                        (undefined1 *)((long)register0x00000008 + -600),_DAT_05a27fa0);
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x278);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x280);
      }
      *(undefined8 *)(lVar28 + 0x68) = uVar22;
      *(undefined8 *)(lVar28 + 0x60) = uVar11;
    }
    lVar37 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar37 + 0x135) & 1) == 0) {
      lVar37 = func_0x024d8f40();
    }
    pcVar21 = (char *)func_0x0249f90c(lVar28 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar37 + 0xc0) + 8) + 0x80));
    if (*pcVar21 != '\0') {
      func_0x02886844(lVar28 + 0x18,(undefined1 *)((long)register0x00000008 + -0x280),_DAT_05a27fd0)
      ;
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x280);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar22 = func_0x0352eeec((undefined1 *)((long)register0x00000008 + -0x260),0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      uVar11 = func_0x0430d994(uVar11,uVar22,0);
      *(undefined8 *)((long)register0x00000008 + -600) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
      pcVar21 = (char *)func_0x028866e4((undefined1 *)((long)register0x00000008 + -0x280),
                                        (undefined1 *)((long)register0x00000008 + -600),
                                        _DAT_05a27fa0);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x280);
      *(undefined8 *)(lVar28 + 0x20) = *(undefined8 *)((long)register0x00000008 + -0x278);
      *(undefined8 *)(lVar28 + 0x18) = uVar11;
    }
    return pcVar21;
  }
  auVar38 = func_0x0249fb90();
  plVar34 = auVar38._8_8_;
  plVar19 = auVar38._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x280) = 0x36dcbd4;
  *(undefined **)((long)register0x00000008 + -0x270) = unaff_x28;
  *(undefined **)((long)register0x00000008 + -0x268) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x260) = unaff_x26;
  *(long **)((long)register0x00000008 + -600) = plVar12;
  *(long **)((long)register0x00000008 + -0x250) = plVar16;
  *(ulong *)((long)register0x00000008 + -0x248) = uVar14 & 0xffffffff;
  *(ulong *)((long)register0x00000008 + -0x240) = uVar18;
  *(undefined8 *)((long)register0x00000008 + -0x238) = uVar11;
  *(undefined8 *)((long)register0x00000008 + -0x230) = 0x5e2d000;
  *(undefined8 *)((long)register0x00000008 + -0x228) = extraout_x1_00;
  plVar16 = (long *)0x5e2d000;
  plVar12 = plVar24;
  uVar14 = uVar25;
  uVar15 = uVar26;
  plVar17 = plVar35;
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
    lVar28 = *plVar34;
    uVar18 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar18 != 0) {
      piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
          puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar18 = uVar18 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar18 != 0);
    }
    plVar12 = (long *)0x5;
    puVar13 = (undefined8 *)func_0x024d927c(plVar34);
LAB_036dccc4:
    uVar11 = (*(code *)*puVar13)(plVar34,puVar13[1]);
    plVar30 = (long *)plVar19[2];
    if (plVar30 != (long *)0x0) {
      plVar16 = (long *)(**(code **)(*plVar30 + 0x1c8))
                                  (plVar30,uVar11,*(undefined8 *)(*plVar30 + 0x1d0));
      pcVar21 = (char *)0x0;
      if (plVar16 != (long *)0x0) {
        plVar12 = (long *)0x0;
        uVar18 = func_0x036edd98(plVar19,uVar11);
        if ((uVar18 & 1) != 0) {
          lVar28 = *plVar16;
          uVar18 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar18 != 0) {
            piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar18 = uVar18 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar18 != 0);
          }
          plVar12 = (long *)0x19;
          puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dce14:
          plVar30 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
          if (plVar30 != (long *)0x0) {
            lVar28 = *plVar30;
            uVar18 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar18 != 0) {
              piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == _DAT_059e0150) {
                  puVar13 = (undefined8 *)(lVar28 + (long)*piVar33 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar18 = uVar18 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar18 != 0);
            }
            plVar12 = (long *)0x0;
            puVar13 = (undefined8 *)func_0x024d927c(plVar30);
LAB_036dce7c:
            uVar18 = (*(code *)*puVar13)(plVar30,puVar13[1]);
            if ((uVar18 & 1) == 0) {
LAB_036dcf40:
              lVar28 = *plVar16;
              uVar14 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar14 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar14 = uVar14 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar14 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar12 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
              *(undefined8 *)((long)register0x00000008 + -0x260) =
                   *(undefined8 *)((long)register0x00000008 + -0x280);
              *(undefined8 *)((long)register0x00000008 + -600) =
                   *(undefined8 *)((long)register0x00000008 + -600);
              *(undefined8 *)((long)register0x00000008 + -0x250) =
                   *(undefined8 *)((long)register0x00000008 + -0x250);
              *(undefined8 *)((long)register0x00000008 + -0x248) =
                   *(undefined8 *)((long)register0x00000008 + -0x248);
              *(undefined8 *)((long)register0x00000008 + -0x240) =
                   *(undefined8 *)((long)register0x00000008 + -0x240);
              *(undefined8 *)((long)register0x00000008 + -0x238) =
                   *(undefined8 *)((long)register0x00000008 + -0x238);
              *(undefined8 *)((long)register0x00000008 + -0x230) =
                   *(undefined8 *)((long)register0x00000008 + -0x230);
              *(undefined8 *)((long)register0x00000008 + -0x228) =
                   *(undefined8 *)((long)register0x00000008 + -0x228);
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar12 == (long *)0x0) {
                lVar28 = func_0x0249fb90();
                return *(char **)(lVar28 + 0x10);
              }
              lVar28 = *plVar12;
              uVar14 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar14 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059deb70) {
                    puVar13 = (undefined8 *)(lVar28 + (long)*piVar33 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar14 = uVar14 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar14 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059deb70,0);
LAB_03751b38:
              uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              *(long **)((long)register0x00000008 + -0x270) = plVar24;
              *(ulong *)((long)register0x00000008 + -0x268) = uVar25;
              func_0x0288f218((undefined1 *)((long)register0x00000008 + -0x270),
                              (undefined1 *)((long)register0x00000008 + -0x288),_DAT_05a29e48);
              *(undefined8 *)((long)register0x00000008 + -0x298) =
                   *(undefined8 *)((long)register0x00000008 + -0x280);
              *(undefined8 *)((long)register0x00000008 + -0x2a0) =
                   *(undefined8 *)((long)register0x00000008 + -0x288);
              *(undefined8 *)((long)register0x00000008 + -0x290) =
                   *(undefined8 *)((long)register0x00000008 + -0x278);
              pcVar21 = (char *)func_0x0371f1bc(uVar11,plVar34,
                                                (undefined1 *)((long)register0x00000008 + -0x2a0),
                                                param_7,0);
              return pcVar21;
            }
            plVar19 = plVar30;
            if (plVar24 != (long *)0x0) {
              lVar28 = *plVar24;
              uVar14 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar14 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059defb8) {
                    puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar14 != 0);
              }
              puVar13 = (undefined8 *)func_0x024d927c(plVar24,_DAT_059defb8,0xb);
LAB_036dcee8:
              uVar14 = puVar13[1];
              plVar12 = plVar35;
              uVar18 = (*(code *)*puVar13)(plVar24,uVar26);
              if ((uVar18 & 1) == 0) goto LAB_036dcf40;
              lVar28 = *plVar16;
              uVar18 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar18 != 0) {
                piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059dfbc0) {
                    puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dcfe0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar18 != 0);
              }
              plVar12 = (long *)0x19;
              puVar13 = (undefined8 *)func_0x024d927c(plVar16);
LAB_036dcfe0:
              plVar30 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
              if (plVar30 != (long *)0x0) {
                lVar28 = *plVar30;
                uVar14 = (ulong)*(ushort *)(lVar28 + 0x12e);
                if (uVar14 != 0) {
                  piVar33 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059e0150) {
                      puVar13 = (undefined8 *)(lVar28 + (long)(*piVar33 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar14 = uVar14 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar14 != 0);
                }
                puVar13 = (undefined8 *)func_0x024d927c(plVar30,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar21 = (char *)(*(code *)*puVar13)(plVar30,plVar34,plVar24,uVar25,param_7,
                                                      puVar13[1]);
                return pcVar21;
              }
            }
          }
          goto LAB_036dd07c;
        }
        plVar12 = (long *)0x0;
        uVar18 = func_0x036edf9c(plVar19,uVar11);
        pcVar21 = (char *)0x0;
        if ((uVar18 & 1) != 0) {
          lVar28 = func_0x036d5e58(plVar19);
          if ((lVar28 == 0) || (*(long *)(lVar28 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar11 = *(undefined8 *)(*(long *)(lVar28 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          *(long **)((long)register0x00000008 + -0x290) = plVar24;
          *(ulong *)((long)register0x00000008 + -0x288) = uVar25;
          func_0x0288f218((undefined1 *)((long)register0x00000008 + -0x290),
                          (undefined1 *)((long)register0x00000008 + -0x2a8),_DAT_05a29e48);
          *(undefined8 *)((long)register0x00000008 + -0x2b8) =
               *(undefined8 *)((long)register0x00000008 + -0x2a0);
          *(undefined8 *)((long)register0x00000008 + -0x2c0) =
               *(undefined8 *)((long)register0x00000008 + -0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0x2b0) =
               *(undefined8 *)((long)register0x00000008 + -0x298);
          pcVar21 = (char *)func_0x0371f1bc(uVar11,plVar34,
                                            (undefined1 *)((long)register0x00000008 + -0x2c0),
                                            param_7,0);
        }
      }
      return pcVar21;
    }
  }
LAB_036dd07c:
  auVar38 = func_0x0249fb90();
  *(undefined8 *)((long)register0x00000008 + -0x310) = 0x36dd080;
  *(long **)((long)register0x00000008 + -0x300) = plVar19;
  *(long **)((long)register0x00000008 + -0x2f8) = plVar16;
  *(ulong *)((long)register0x00000008 + -0x2f0) = uVar26;
  *(long **)((long)register0x00000008 + -0x2e8) = plVar35;
  *(long **)((long)register0x00000008 + -0x2e0) = plVar24;
  *(ulong *)((long)register0x00000008 + -0x2d8) = uVar25;
  *(long **)((long)register0x00000008 + -0x2d0) = plVar34;
  *(undefined8 *)((long)register0x00000008 + -0x2c8) = param_7;
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar21 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar21,0);
  pcVar21[0x10] = -2;
  pcVar21[0x11] = -1;
  pcVar21[0x12] = -1;
  pcVar21[0x13] = -1;
  uVar10 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar21 + 0x20) = uVar10;
  *(long *)(pcVar21 + 0x28) = auVar38._0_8_;
  func_0x0249f888(pcVar21 + 0x28,auVar38._0_8_);
  *(long *)(pcVar21 + 0x78) = auVar38._8_8_;
  func_0x0249f888(pcVar21 + 0x78,auVar38._8_8_);
  *(long **)(pcVar21 + 0x38) = plVar12;
  func_0x0249f888(pcVar21 + 0x38,plVar12);
  *(ulong *)(pcVar21 + 0x68) = uVar14;
  *(ulong *)(pcVar21 + 0x50) = uVar15;
  *(long **)(pcVar21 + 0x58) = plVar17;
  func_0x0249f888(pcVar21 + 0x50,0);
  return pcVar21;
}


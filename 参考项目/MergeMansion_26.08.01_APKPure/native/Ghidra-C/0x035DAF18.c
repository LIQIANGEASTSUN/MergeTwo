/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: ActivationResult Activate(GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Player.IPlayer player, System.Int32 capacityConsumptionMultiplier)
 * Ghidra function entry: 036daf18
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036daf18(long param_1,long *param_2,long *param_3,long *param_4,ulong param_5,
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  int iVar38;
  undefined8 *puVar42;
  undefined8 uVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  undefined8 uVar47;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar48;
  char *pcVar49;
  long *plVar50;
  long *extraout_x1;
  long *plVar51;
  long *plVar52;
  long *plVar53;
  long lVar54;
  long lVar55;
  long *plVar56;
  long *plVar57;
  long lVar58;
  long *plVar59;
  long lVar60;
  int iVar61;
  ulong uVar62;
  int *piVar63;
  undefined8 uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  long *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  ulong uStack_238;
  ulong uStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  char *pcStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar65 = (ulong)param_4 & 0xffffffff;
  plVar51 = param_3;
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
  auStack_68._8_8_ = 0;
  uStack_58 = 0;
  auStack_78._8_8_ = 0;
  auStack_68._0_8_ = 0;
  auStack_78._0_8_ = 0;
  auVar68 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if (param_3 != (long *)0x0) {
    lVar54 = *param_3;
    uVar62 = (ulong)*(ushort *)(lVar54 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_036db040;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar42 = (undefined8 *)func_0x024d927c(param_3,_DAT_059df8e8,5);
LAB_036db040:
    uVar43 = (*(code *)*puVar42)(param_3,puVar42[1]);
    param_4 = (long *)0x0;
    uVar62 = func_0x036ee328(param_1,param_3,uVar65);
    if ((uVar62 & 1) == 0) {
      return (char *)0x0;
    }
    uVar62 = func_0x036ed7f4(param_1,uVar43,0);
    if ((uVar62 & 1) != 0) {
      return (char *)0x2;
    }
    plVar51 = (long *)0x0;
    uVar62 = func_0x036edd98(param_1,uVar43);
    auVar6._8_8_ = auStack_78._8_8_;
    auVar6._0_8_ = auStack_78._0_8_;
    auVar68._8_8_ = auStack_68._8_8_;
    auVar68._0_8_ = auStack_68._0_8_;
    if ((uVar62 & 1) == 0) {
      plVar51 = (long *)0x0;
      uVar65 = func_0x036edf9c(param_1,uVar43);
      if ((uVar65 & 1) == 0) {
        return (char *)0x0;
      }
      lVar54 = func_0x036d5e58(param_1);
      auVar11._8_8_ = auStack_78._8_8_;
      auVar11._0_8_ = auStack_78._0_8_;
      auVar10._8_8_ = auStack_78._8_8_;
      auVar10._0_8_ = auStack_78._0_8_;
      auVar6._8_8_ = auStack_78._8_8_;
      auVar6._0_8_ = auStack_78._0_8_;
      auVar5._8_8_ = auStack_68._8_8_;
      auVar5._0_8_ = auStack_68._0_8_;
      auVar4._8_8_ = auStack_68._8_8_;
      auVar4._0_8_ = auStack_68._0_8_;
      auVar68._8_8_ = auStack_68._8_8_;
      auVar68._0_8_ = auStack_68._0_8_;
      if (((lVar54 != 0) && (auVar68 = auVar4, auVar6 = auVar10, *(long *)(lVar54 + 0xa8) != 0)) &&
         (plVar44 = *(long **)(*(long *)(lVar54 + 0xa8) + 0x10), auVar68 = auVar5, auVar6 = auVar11,
         plVar44 != (long *)0x0)) {
        lVar54 = *plVar44;
        uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
        if (uVar65 != 0) {
          piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059e0170) {
              puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 4) * 0x10 + 0x138);
              goto LAB_036db338;
            }
            uVar65 = uVar65 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar65 != 0);
        }
        puVar42 = (undefined8 *)func_0x024d927c(plVar44,_DAT_059e0170,4);
LAB_036db338:
        uVar65 = (*(code *)*puVar42)(plVar44,puVar42[1]);
        uVar41 = 1;
        if ((uVar65 & 1) != 0) {
          uVar41 = 2;
        }
        return (char *)(ulong)uVar41;
      }
    }
    else {
      plVar44 = *(long **)(param_1 + 0x10);
      if (plVar44 != (long *)0x0) {
        plVar44 = (long *)(**(code **)(*plVar44 + 0x1c8))
                                    (plVar44,uVar43,*(undefined8 *)(*plVar44 + 0x1d0));
        plVar51 = (long *)0x0;
        param_4 = (long *)0x0;
        func_0x037275b8(param_1,param_2);
        lVar54 = func_0x036d5e58(param_1);
        auVar7._8_8_ = auStack_78._8_8_;
        auVar7._0_8_ = auStack_78._0_8_;
        auVar6._8_8_ = auStack_78._8_8_;
        auVar6._0_8_ = auStack_78._0_8_;
        auVar2._8_8_ = auStack_68._8_8_;
        auVar2._0_8_ = auStack_68._0_8_;
        auVar68._8_8_ = auStack_68._8_8_;
        auVar68._0_8_ = auStack_68._0_8_;
        if ((lVar54 != 0) && (auVar68 = auVar2, auVar6 = auVar7, *(long *)(lVar54 + 0x28) != 0)) {
          plVar51 = (long *)0x0;
          func_0x03700cf4(*(long *)(lVar54 + 0x28),uVar65);
          auVar6._8_8_ = auStack_78._8_8_;
          auVar6._0_8_ = auStack_78._0_8_;
          auVar68._8_8_ = auStack_68._8_8_;
          auVar68._0_8_ = auStack_68._0_8_;
          if (plVar44 != (long *)0x0) {
            lVar54 = *plVar44;
            uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
            if (uVar65 != 0) {
              piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                  puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                  goto LAB_036db1dc;
                }
                uVar65 = uVar65 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar65 != 0);
            }
            plVar51 = (long *)0x3;
            puVar42 = (undefined8 *)func_0x024d927c(plVar44);
LAB_036db1dc:
            plVar45 = (long *)(*(code *)*puVar42)(plVar44,puVar42[1]);
            auVar6._8_8_ = auStack_78._8_8_;
            auVar6._0_8_ = auStack_78._0_8_;
            auVar68._8_8_ = auStack_68._8_8_;
            auVar68._0_8_ = auStack_68._0_8_;
            if (plVar45 != (long *)0x0) {
              lVar54 = *plVar45;
              uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
              if (uVar65 != 0) {
                piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                    puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                    goto LAB_036db248;
                  }
                  uVar65 = uVar65 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar65 != 0);
              }
              plVar51 = (long *)0x2;
              puVar42 = (undefined8 *)func_0x024d927c(plVar45);
LAB_036db248:
              plVar45 = (long *)(*(code *)*puVar42)(plVar45,puVar42[1]);
              lVar54 = func_0x036d5e58(param_1);
              auVar8._8_8_ = auStack_78._8_8_;
              auVar8._0_8_ = auStack_78._0_8_;
              auVar6._8_8_ = auStack_78._8_8_;
              auVar6._0_8_ = auStack_78._0_8_;
              auVar3._8_8_ = auStack_68._8_8_;
              auVar3._0_8_ = auStack_68._0_8_;
              auVar68._8_8_ = auStack_68._8_8_;
              auVar68._0_8_ = auStack_68._0_8_;
              if ((lVar54 != 0) &&
                 (auVar68 = auVar3, auVar6 = auVar8, *(long *)(lVar54 + 0x18) != 0)) {
                uVar37 = func_0x037537dc(*(long *)(lVar54 + 0x18),0);
                auVar6._8_8_ = auStack_78._8_8_;
                auVar6._0_8_ = auStack_78._0_8_;
                auVar68._8_8_ = auStack_68._8_8_;
                auVar68._0_8_ = auStack_68._0_8_;
                if (plVar45 != (long *)0x0) {
                  lVar54 = *plVar45;
                  unaff_x26 = (long *)&DAT_059deb60;
                  uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
                  if (uVar65 != 0) {
                    piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059deb60) {
                        puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 0x12) * 0x10 + 0x138);
                        goto LAB_036db2d4;
                      }
                      uVar65 = uVar65 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar65 != 0);
                  }
                  puVar42 = (undefined8 *)func_0x024d927c(plVar45,_DAT_059deb60,0x12);
LAB_036db2d4:
                  plVar51 = (long *)puVar42[1];
                  uVar65 = (*(code *)*puVar42)(plVar45,uVar37);
                  if ((uVar65 & 1) != 0) {
                    lVar54 = *plVar45;
                    uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
                    if (uVar65 != 0) {
                      piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb60) {
                          puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                          goto LAB_036db364;
                        }
                        uVar65 = uVar65 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar65 != 0);
                    }
                    puVar42 = (undefined8 *)func_0x024d927c(plVar45,_DAT_059deb60,3);
LAB_036db364:
                    auStack_68 = (*(code *)*puVar42)(plVar45,puVar42[1]);
                    if (*(int *)(_DAT_059d3fd0 + 0xe4) == 0) {
                      func_0x0249fa64();
                    }
                    plVar51 = _DAT_05a29960;
                    uVar65 = func_0x0288eda8(auStack_68,&uStack_58);
                    if ((uVar65 & 1) != 0) {
                      lVar54 = func_0x036d5e58(param_1);
                      auVar9._8_8_ = auStack_78._8_8_;
                      auVar9._0_8_ = auStack_78._0_8_;
                      auVar6._8_8_ = auStack_78._8_8_;
                      auVar6._0_8_ = auStack_78._0_8_;
                      auVar68 = auStack_68;
                      if ((lVar54 == 0) || (auVar6 = auVar9, *(long *)(lVar54 + 0x18) == 0))
                      goto LAB_036db604;
                      param_4 = (long *)0x0;
                      plVar51 = param_2;
                      func_0x03754988(*(long *)(lVar54 + 0x18),uStack_58);
                    }
                  }
                  iVar38 = func_0x036fa7dc(param_1,0);
                  if (0 < iVar38) {
                    return (char *)0x1;
                  }
                  lVar54 = *plVar44;
                  uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
                  if (uVar65 != 0) {
                    piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                        puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                        goto LAB_036db434;
                      }
                      uVar65 = uVar65 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar65 != 0);
                  }
                  plVar51 = (long *)0x3;
                  puVar42 = (undefined8 *)func_0x024d927c(plVar44);
LAB_036db434:
                  plVar45 = (long *)(*(code *)*puVar42)(plVar44,puVar42[1]);
                  auVar6._8_8_ = auStack_78._8_8_;
                  auVar6._0_8_ = auStack_78._0_8_;
                  auVar68 = auStack_68;
                  if (plVar45 != (long *)0x0) {
                    lVar54 = *plVar45;
                    uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
                    if (uVar65 != 0) {
                      piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                          puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 0xe) * 0x10 + 0x138);
                          goto LAB_036db498;
                        }
                        uVar65 = uVar65 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar65 != 0);
                    }
                    puVar42 = (undefined8 *)func_0x024d927c(plVar45,_DAT_059deb70,0xe);
LAB_036db498:
                    uVar65 = (*(code *)*puVar42)(plVar45,puVar42[1]);
                    if ((uVar65 & 1) == 0) {
                      return (char *)0x1;
                    }
                    plVar51 = plVar44;
                    plVar45 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                    auVar6._8_8_ = auStack_78._8_8_;
                    auVar6._0_8_ = auStack_78._0_8_;
                    auVar68 = auStack_68;
                    if (plVar45 != (long *)0x0) {
                      plVar46 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                      auVar6._8_8_ = auStack_78._8_8_;
                      auVar6._0_8_ = auStack_78._0_8_;
                      plVar51 = plVar45;
                      auVar68 = auStack_68;
                      if (plVar46 != (long *)0x0) {
                        uVar37 = func_0x022bffa8(0,_DAT_059deb60);
                        lVar54 = func_0x036d5ec8(param_1);
                        auVar6._8_8_ = auStack_78._8_8_;
                        auVar6._0_8_ = auStack_78._0_8_;
                        plVar51 = plVar46;
                        auVar68 = auStack_68;
                        if (lVar54 != 0) {
                          uVar65 = func_0x0375380c(lVar54,uVar37,0);
                          if ((uVar65 & 1) != 0) {
                            return (char *)0x1;
                          }
                          plVar51 = plVar44;
                          lVar54 = func_0x022bffa8(3,_DAT_059dfbc0);
                          auVar6._8_8_ = auStack_78._8_8_;
                          auVar6._0_8_ = auStack_78._0_8_;
                          auVar68 = auStack_68;
                          if (lVar54 != 0) {
                            uVar65 = func_0x022bffa8(0x10,_DAT_059deb70,lVar54);
                            if ((uVar65 & 1) == 0) {
                              return (char *)0x2;
                            }
                            lVar54 = func_0x036d5ec8(param_1);
                            uVar43 = func_0x03530c84(param_2,0);
                            plVar45 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                            auVar6._8_8_ = auStack_78._8_8_;
                            auVar6._0_8_ = auStack_78._0_8_;
                            plVar51 = plVar44;
                            auVar68 = auStack_68;
                            if (plVar45 != (long *)0x0) {
                              auStack_78 = func_0x022bffa8(0xc,_DAT_059deb70);
                              uVar65 = func_0x022bf4f8(auStack_78,_DAT_05a27ee0);
                              uVar47 = 0;
                              uVar64 = 0;
                              if ((uVar65 & 1) != 0) {
                                uVar47 = func_0x023f3ca0(auStack_78,_DAT_05a27ed8);
                                if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2ba0);
                                }
                                uStack_48 = func_0x0430d994(uVar43,uVar47,0);
                                uStack_90 = 0;
                                uStack_88 = 0;
                                plVar45 = _DAT_05a27fa0;
                                func_0x028866e4(&uStack_90,&uStack_48);
                                uVar47 = uStack_90;
                                uVar64 = uStack_88;
                              }
                              plVar51 = plVar45;
                              auVar68 = auStack_68;
                              auVar6 = auStack_78;
                              if (lVar54 != 0) {
                                *(undefined8 *)(lVar54 + 0x68) = uVar64;
                                *(undefined8 *)(lVar54 + 0x60) = uVar47;
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
    }
  }
LAB_036db604:
  auStack_78 = auVar6;
  auStack_68 = auVar68;
  auVar68 = func_0x0249fb90();
  lVar54 = auVar68._0_8_;
  plVar44 = (long *)(auVar68._8_8_ & 0xffffffff);
  plVar45 = plVar51;
  plVar46 = param_4;
  uVar65 = param_5;
  plVar53 = param_6;
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
  if (plVar51 == (long *)0x0) {
LAB_036dbb68:
    auVar69 = func_0x0249fb90();
    plVar51 = plVar45;
  }
  else {
    lVar55 = *plVar51;
    uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
    if (uVar62 != 0) {
      piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar62 = uVar62 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar62 != 0);
    }
    puVar42 = (undefined8 *)func_0x024d927c(plVar51,_DAT_059df8e8,5);
LAB_036db6f0:
    uVar43 = (*(code *)*puVar42)(plVar51,puVar42[1]);
    uVar62 = func_0x036edd98(lVar54,uVar43,0);
    if ((uVar62 & 1) == 0) {
      uVar62 = func_0x036edf9c(lVar54,uVar43,0);
      if ((uVar62 & 1) == 0) {
        return (char *)0x0;
      }
    }
    iVar38 = (int)param_4;
    uVar41 = iVar38 * auVar68._8_4_;
    unaff_x26 = (long *)(ulong)uVar41;
    plVar46 = (long *)0x0;
    plVar45 = unaff_x26;
    uVar62 = func_0x036ee328(lVar54,plVar51);
    if ((uVar62 & 1) == 0) {
      return (char *)0x0;
    }
    lVar55 = func_0x036d5e58(lVar54);
    if (lVar55 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar55 + 0x50)) {
      lVar55 = func_0x036d5e58();
      if (lVar55 != 0) {
        if ((int)uVar41 < *(int *)(lVar55 + 0x50)) {
          *(int *)param_6 = auVar68._8_4_;
          lVar54 = func_0x036d5e58(lVar54);
          if (lVar54 != 0) {
            *(uint *)(lVar54 + 0x50) = *(int *)(lVar54 + 0x50) - uVar41;
            return (char *)0x1;
          }
        }
        else {
          plVar51 = *(long **)(lVar54 + 0x10);
          if (plVar51 != (long *)0x0) {
            plVar51 = (long *)(**(code **)(*plVar51 + 0x1c8))
                                        (plVar51,uVar43,*(undefined8 *)(*plVar51 + 0x1d0));
            plVar45 = (long *)0x0;
            uVar62 = func_0x036edd98(lVar54,uVar43);
            if ((uVar62 & 1) != 0) {
              iVar38 = func_0x036fa7dc(lVar54,0);
              if (iVar38 < 1) {
                if (plVar51 != (long *)0x0) {
                  lVar55 = *plVar51;
                  uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
                  if (uVar62 != 0) {
                    piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                        puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                        goto LAB_036db9cc;
                      }
                      uVar62 = uVar62 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar62 != 0);
                  }
                  plVar45 = (long *)0x3;
                  puVar42 = (undefined8 *)func_0x024d927c(plVar51);
LAB_036db9cc:
                  plVar56 = (long *)(*(code *)*puVar42)(plVar51,puVar42[1]);
                  if (plVar56 != (long *)0x0) {
                    lVar55 = *plVar56;
                    uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
                    if (uVar62 != 0) {
                      piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                          puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 0xe) * 0x10 + 0x138);
                          goto LAB_036dba38;
                        }
                        uVar62 = uVar62 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar62 != 0);
                    }
                    puVar42 = (undefined8 *)func_0x024d927c(plVar56,_DAT_059deb70,0xe);
LAB_036dba38:
                    uVar62 = (*(code *)*puVar42)(plVar56,puVar42[1]);
                    if ((uVar62 & 1) == 0) goto LAB_036dbaac;
                    plVar56 = (long *)func_0x022bffa8(3,_DAT_059dfbc0);
                    plVar45 = plVar51;
                    if (plVar56 != (long *)0x0) {
                      plVar51 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                      plVar45 = plVar56;
                      if (plVar51 != (long *)0x0) {
                        uVar37 = func_0x022bffa8(0,_DAT_059deb60);
                        lVar54 = func_0x036d5ec8(lVar54);
                        plVar45 = plVar51;
                        if (lVar54 != 0) {
                          uVar65 = func_0x0375380c(lVar54,uVar37,0);
                          if ((uVar65 & 1) == 0) {
                            return (char *)0x2;
                          }
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
                goto LAB_036dbb68;
              }
            }
LAB_036dbaac:
            plVar45 = (long *)0x0;
            uVar62 = func_0x036edf9c(lVar54,uVar43);
            if ((uVar62 & 1) == 0) {
              return (char *)0x1;
            }
            lVar54 = func_0x036d5e58(lVar54);
            if (((lVar54 != 0) && (*(long *)(lVar54 + 0xa8) != 0)) &&
               (plVar51 = *(long **)(*(long *)(lVar54 + 0xa8) + 0x10), plVar51 != (long *)0x0)) {
              lVar54 = *plVar51;
              uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
              if (uVar65 != 0) {
                piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059e0170) {
                    puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                    goto LAB_036dbb34;
                  }
                  uVar65 = uVar65 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar65 != 0);
              }
              puVar42 = (undefined8 *)func_0x024d927c(plVar51,_DAT_059e0170,1);
LAB_036dbb34:
              uVar65 = (*(code *)*puVar42)(plVar51,puVar42[1]);
              if ((uVar65 & 1) != 0) {
                return (char *)0x1;
              }
              return (char *)0x2;
            }
          }
        }
      }
      goto LAB_036dbb68;
    }
    plVar45 = (long *)0x0;
    uVar62 = func_0x036edd98(lVar54,uVar43);
    if ((uVar62 & 1) == 0) {
      plVar45 = (long *)0x0;
      uVar62 = func_0x036edf9c(lVar54,uVar43);
      if ((uVar62 & 1) == 0) {
        return (char *)0x1;
      }
      lVar55 = func_0x036d5e58(lVar54);
      if (((lVar55 == 0) || (*(long *)(lVar55 + 0xa8) == 0)) ||
         (plVar56 = *(long **)(*(long *)(lVar55 + 0xa8) + 0x10), plVar56 == (long *)0x0))
      goto LAB_036dbb68;
      lVar55 = *plVar56;
      uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
      if (uVar62 != 0) {
        piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059e0170) {
            puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar62 = uVar62 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar62 != 0);
      }
      puVar42 = (undefined8 *)func_0x024d927c(plVar56,_DAT_059e0170,5);
LAB_036db928:
      iVar39 = (*(code *)*puVar42)(plVar56,puVar42[1]);
      if (iVar38 < iVar39) {
        iVar61 = (int)*param_6;
        do {
          iVar39 = iVar39 - iVar38;
          iVar61 = iVar61 + 1;
        } while (iVar38 < iVar39);
        *(int *)param_6 = iVar61;
      }
    }
    else {
      lVar55 = func_0x036d5e58(lVar54);
      if ((lVar55 == 0) || (*(long *)(lVar55 + 0x28) == 0)) goto LAB_036dbb68;
      for (uVar41 = *(uint *)(*(long *)(lVar55 + 0x28) + 0x10); plVar44 = (long *)(ulong)uVar41,
          iVar38 < (int)uVar41; uVar41 = uVar41 - iVar38) {
        lVar55 = func_0x036d5e58(lVar54);
        if ((lVar55 == 0) || (*(long *)(lVar55 + 0x28) == 0)) goto LAB_036dbb68;
        plVar45 = (long *)0x0;
        func_0x03700cf4(*(long *)(lVar55 + 0x28),(ulong)param_4 & 0xffffffff);
        *(int *)param_6 = (int)*param_6 + 1;
      }
    }
    func_0x036d5e58(lVar54);
    auVar69._8_4_ = (uint)param_5 & 1;
    auVar69._0_8_ = lVar54;
    auVar69._12_4_ = 0;
  }
  lVar54 = auVar69._0_8_;
  plVar45 = plVar51;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar55 = func_0x036d5e58(lVar54);
  if (lVar55 != 0) {
    if (*(int *)(lVar55 + 0x50) < 1) {
      if (plVar51 != (long *)0x0) {
        lVar55 = *plVar51;
        uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
        if (uVar62 != 0) {
          piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
          do {
            if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
              puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar62 = uVar62 - 1;
            piVar63 = piVar63 + 4;
          } while (uVar62 != 0);
        }
        puVar42 = (undefined8 *)func_0x024d927c(plVar51,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar43 = (*(code *)*puVar42)(plVar51,puVar42[1]);
        plVar45 = (long *)0x0;
        uVar66 = func_0x036edd98(lVar54,uVar43);
        lVar55 = *plVar51;
        uVar1 = *(ushort *)(lVar55 + 0x12e);
        uVar62 = (ulong)uVar1;
        if ((uVar66 & 1) == 0) {
          if (uVar1 != 0) {
            piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          puVar42 = (undefined8 *)func_0x024d927c(plVar51,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar43 = (*(code *)*puVar42)(plVar51,puVar42[1]);
          plVar45 = (long *)0x0;
          uVar62 = func_0x036edf9c(lVar54,uVar43);
          if ((uVar62 & 1) == 0) {
            uVar41 = 0;
            goto LAB_036dbc00;
          }
          lVar54 = func_0x036d5e58(lVar54);
          if (((lVar54 != 0) && (*(long *)(lVar54 + 0xa8) != 0)) &&
             (plVar51 = *(long **)(*(long *)(lVar54 + 0xa8) + 0x10), plVar51 != (long *)0x0)) {
            lVar54 = *plVar51;
            uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
            if (uVar65 != 0) {
              piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059e0170) {
                  iVar38 = *piVar63 + 6;
                  goto LAB_036dbfbc;
                }
                uVar65 = uVar65 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar65 != 0);
            }
            uVar43 = 6;
            lVar54 = _DAT_059e0170;
            goto LAB_036dbfac;
          }
        }
        else {
          if (uVar1 != 0) {
            piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar62 = uVar62 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar62 != 0);
          }
          plVar45 = (long *)0x5;
          puVar42 = (undefined8 *)func_0x024d927c(plVar51);
LAB_036dbd14:
          uVar43 = (*(code *)*puVar42)(plVar51,puVar42[1]);
          plVar56 = *(long **)(lVar54 + 0x10);
          if (plVar56 != (long *)0x0) {
            plVar45 = *(long **)(*plVar56 + 0x1d0);
            plVar56 = (long *)(**(code **)(*plVar56 + 0x1c8))(plVar56,uVar43);
            if ((auVar69._8_8_ & 1) == 0) {
LAB_036dbefc:
              if (plVar56 != (long *)0x0) {
                lVar54 = *plVar56;
                uVar62 = (ulong)*(ushort *)(lVar54 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                plVar45 = (long *)0x3;
                puVar42 = (undefined8 *)func_0x024d927c(plVar56);
LAB_036dbf58:
                plVar51 = (long *)(*(code *)*puVar42)(plVar56,puVar42[1]);
                if (plVar51 != (long *)0x0) {
                  lVar54 = *plVar51;
                  uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
                  if (uVar65 != 0) {
                    piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                        iVar38 = *piVar63 + 0x14;
LAB_036dbfbc:
                        puVar42 = (undefined8 *)(lVar54 + (long)iVar38 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar65 = uVar65 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar65 != 0);
                  }
                  uVar43 = 0x14;
                  lVar54 = _DAT_059deb70;
LAB_036dbfac:
                  puVar42 = (undefined8 *)func_0x024d927c(plVar51,lVar54,uVar43);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar49 = (char *)(*(code *)*puVar42)(plVar51,puVar42[1]);
                  return pcVar49;
                }
              }
            }
            else if (plVar56 != (long *)0x0) {
              lVar55 = *plVar56;
              uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                    puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              plVar45 = (long *)0x19;
              puVar42 = (undefined8 *)func_0x024d927c(plVar56);
LAB_036dbe38:
              plVar52 = (long *)(*(code *)*puVar42)(plVar56,puVar42[1]);
              if (plVar52 != (long *)0x0) {
                lVar55 = *plVar52;
                uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059e0150) {
                      puVar42 = (undefined8 *)(lVar55 + (long)*piVar63 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                plVar45 = (long *)0x0;
                puVar42 = (undefined8 *)func_0x024d927c(plVar52);
LAB_036dbeac:
                uVar62 = (*(code *)*puVar42)(plVar52,puVar42[1]);
                if ((uVar62 & 1) == 0) goto LAB_036dbefc;
                lVar55 = *plVar56;
                uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
                if (uVar62 != 0) {
                  piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                      puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar62 = uVar62 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar62 != 0);
                }
                plVar45 = (long *)0x19;
                puVar42 = (undefined8 *)func_0x024d927c(plVar56);
LAB_036dbff0:
                plVar56 = (long *)(*(code *)*puVar42)(plVar56,puVar42[1]);
                if (plVar56 != (long *)0x0) {
                  lVar55 = *plVar56;
                  uVar65 = (ulong)*(ushort *)(lVar55 + 0x12e);
                  if (uVar65 != 0) {
                    piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059e0150) {
                        puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar65 = uVar65 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar65 != 0);
                  }
                  puVar42 = (undefined8 *)func_0x024d927c(plVar56,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar49 = (char *)(*(code *)*puVar42)(plVar56,lVar54,plVar51,puVar42[1]);
                  return pcVar49;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar54 = func_0x036d5e58(lVar54);
      if (lVar54 != 0) {
        uVar41 = *(uint *)(lVar54 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar41;
      }
    }
  }
  auVar70 = func_0x0249fb90();
  plVar56 = auVar70._8_8_;
  lVar54 = auVar70._0_8_;
  uVar66 = uVar65 & 0xffffffff;
  uVar67 = (ulong)plVar46 & 0xffffffff;
  plVar51 = plVar46;
  uVar62 = uVar65;
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
  plVar52 = (long *)0x0;
  auStack_198._0_8_ = 0;
  auStack_198._8_8_ = 0;
  auStack_1a8._0_8_ = 0;
  auStack_1a8._8_8_ = 0;
  auStack_1b8._0_8_ = 0;
  auStack_1b8._8_8_ = 0;
  auStack_1c8._0_8_ = 0;
  auStack_1c8._8_8_ = 0;
  uVar48 = func_0x036fa5f8(lVar54,plVar56);
  if ((uVar48 & 1) != 0) {
    return (char *)0x0;
  }
  lVar55 = func_0x036d5e58(lVar54);
  auVar29._8_8_ = auStack_1b8._8_8_;
  auVar29._0_8_ = auStack_1b8._0_8_;
  auVar22._8_8_ = auStack_1c8._8_8_;
  auVar22._0_8_ = auStack_1c8._0_8_;
  auVar16._8_8_ = auStack_1a8._8_8_;
  auVar16._0_8_ = auStack_1a8._0_8_;
  auVar15._8_8_ = auStack_198._8_8_;
  auVar15._0_8_ = auStack_198._0_8_;
  plVar50 = (long *)0x5e2d000;
  if ((lVar55 != 0) &&
     (auStack_198 = auVar15, auStack_1a8 = auVar16, auStack_1c8 = auVar22, auStack_1b8 = auVar29,
     *(long *)(lVar55 + 0x18) != 0)) {
    auStack_198 = func_0x03753e70(*(long *)(lVar55 + 0x18),0);
    unaff_x28 = (long *)&DAT_05a27fc8;
    lVar55 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar55 + 0x135) & 1) == 0) {
      lVar55 = func_0x024d8f40();
    }
    pcVar49 = (char *)func_0x0249f90c(auStack_198,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar55 + 0xc0) + 8) + 0x80));
    if (*pcVar49 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844(auStack_198,&plStack_1d8,_DAT_05a27fd0);
    plVar50 = plStack_1d8;
    unaff_x27 = &DAT_059e2c00;
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar43 = func_0x03530158(plVar50,0);
    plVar52 = (long *)0x0;
    uVar48 = func_0x0352ff64(uVar43,plVar45);
    if ((uVar48 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar56 != (long *)0x0) {
      lVar55 = *plVar56;
      unaff_x26 = (long *)&DAT_059df8e8;
      uVar48 = (ulong)*(ushort *)(lVar55 + 0x12e);
      if (uVar48 != 0) {
        piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
        do {
          if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
            puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar48 = uVar48 - 1;
          piVar63 = piVar63 + 4;
        } while (uVar48 != 0);
      }
      plVar52 = (long *)0x5;
      puVar42 = (undefined8 *)func_0x024d927c(plVar56);
LAB_036dc294:
      uVar43 = (*(code *)*puVar42)(plVar56,puVar42[1]);
      plVar57 = *(long **)(lVar54 + 0x10);
      if (plVar57 != (long *)0x0) {
        plVar52 = *(long **)(*plVar57 + 0x1d0);
        plVar57 = (long *)(**(code **)(*plVar57 + 0x1c8))(plVar57,uVar43);
        if (plVar57 != (long *)0x0) {
          lVar55 = *plVar57;
          uVar48 = (ulong)*(ushort *)(lVar55 + 0x12e);
          if (uVar48 != 0) {
            piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar48 = uVar48 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar48 != 0);
          }
          plVar52 = (long *)0x3;
          puVar42 = (undefined8 *)func_0x024d927c(plVar57);
LAB_036dc31c:
          plVar50 = (long *)(*(code *)*puVar42)(plVar57,puVar42[1]);
          lVar55 = func_0x036d5e58(lVar54);
          auVar30._8_8_ = auStack_1b8._8_8_;
          auVar30._0_8_ = auStack_1b8._0_8_;
          auVar23._8_8_ = auStack_1c8._8_8_;
          auVar23._0_8_ = auStack_1c8._0_8_;
          auVar17._8_8_ = auStack_1a8._8_8_;
          auVar17._0_8_ = auStack_1a8._0_8_;
          if ((lVar55 != 0) &&
             (auStack_1a8 = auVar17, auStack_1c8 = auVar23, auStack_1b8 = auVar30,
             *(long *)(lVar55 + 0x18) != 0)) {
            uVar41 = *(uint *)(*(long *)(lVar55 + 0x18) + 0x38);
            plVar44 = (long *)(ulong)uVar41;
            if ((int)uVar41 < 1) {
              lVar55 = *plVar56;
              uVar48 = (ulong)*(ushort *)(lVar55 + 0x12e);
              if (uVar48 != 0) {
                piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                    puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar48 = uVar48 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar48 != 0);
              }
              puVar42 = (undefined8 *)func_0x024d927c(plVar56,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar43 = (*(code *)*puVar42)(plVar56,puVar42[1]);
              plVar57 = (long *)0x0;
              uVar48 = func_0x036f2f04(lVar54,uVar43);
              if ((uVar48 & 1) == 0) {
                plVar57 = (long *)0x0;
                uVar48 = func_0x036f2fec(lVar54,plVar56);
                plVar52 = plVar57;
                if ((uVar48 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (plVar50 != (long *)0x0) {
                  plVar52 = plVar50;
                  plVar57 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar55 = func_0x036d5ec8(lVar54);
                  plVar44 = plVar57;
                  if (lVar55 != 0) {
                    auVar68 = func_0x037537dc(lVar55,0);
                    plVar59 = auVar68._0_8_;
                    if (plVar57 != (long *)0x0) {
                      uVar62 = auVar68._8_8_ & 0xffffffff;
                      uVar48 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      plVar44 = (long *)(uVar48 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar55 = func_0x036d5e58(lVar54);
                auVar34._8_8_ = auStack_1b8._8_8_;
                auVar34._0_8_ = auStack_1b8._0_8_;
                auVar27._8_8_ = auStack_1c8._8_8_;
                auVar27._0_8_ = auStack_1c8._0_8_;
                auVar20._8_8_ = auStack_1a8._8_8_;
                auVar20._0_8_ = auStack_1a8._0_8_;
                plVar52 = plVar57;
                if ((lVar55 != 0) &&
                   (auStack_1a8 = auVar20, auStack_1c8 = auVar27, auStack_1b8 = auVar34,
                   *(long *)(lVar55 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar55 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  plVar44 = (long *)0x0;
                  plVar59 = plVar51;
LAB_036dc558:
                  lVar55 = *plVar56;
                  uVar48 = (ulong)*(ushort *)(lVar55 + 0x12e);
                  if (uVar48 != 0) {
                    piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
                        puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
                        plVar51 = plVar59;
                        goto LAB_036dc5a8;
                      }
                      uVar48 = uVar48 - 1;
                      piVar63 = piVar63 + 4;
                    } while (uVar48 != 0);
                  }
                  plVar57 = (long *)0x5;
                  puVar42 = (undefined8 *)func_0x024d927c(plVar56);
                  plVar51 = plVar59;
LAB_036dc5a8:
                  uVar43 = (*(code *)*puVar42)(plVar56,puVar42[1]);
                  plVar59 = *(long **)(lVar54 + 0x10);
                  plVar52 = plVar57;
                  if (plVar59 != (long *)0x0) {
                    plVar52 = *(long **)(*plVar59 + 0x1d0);
                    uVar43 = (**(code **)(*plVar59 + 0x1c8))(plVar59,uVar43);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar48 = func_0x036c47c0(uVar43,plVar56);
                    unaff_x26 = (long *)(uVar48 & 0xffffffff);
                    lVar55 = func_0x036d5e58(lVar54);
                    auVar35._8_8_ = auStack_1b8._8_8_;
                    auVar35._0_8_ = auStack_1b8._0_8_;
                    auVar28._8_8_ = auStack_1c8._8_8_;
                    auVar28._0_8_ = auStack_1c8._0_8_;
                    auVar21._8_8_ = auStack_1a8._8_8_;
                    auVar21._0_8_ = auStack_1a8._0_8_;
                    if ((lVar55 != 0) &&
                       (auStack_1a8 = auVar21, auStack_1c8 = auVar28, auStack_1b8 = auVar35,
                       *(long *)(lVar55 + 0x28) != 0)) {
                      plVar51 = (long *)0x0;
                      plVar52 = unaff_x26;
                      iVar38 = func_0x03700d78(*(long *)(lVar55 + 0x28),plVar44);
                      uVar41 = (int)plVar44 - iVar38;
                      plVar44 = (long *)(ulong)uVar41;
                      if (uVar41 == 0) {
                        if (plVar50 != (long *)0x0) {
                          plVar57 = (long *)func_0x022bffa8(2,_DAT_059deb70);
                          plVar44 = (long *)func_0x036d5ec8(lVar54);
                          plVar59 = (long *)func_0x03530c84(plVar45,0);
                          plVar52 = plVar50;
                          plVar50 = plVar57;
                          if (plVar57 != (long *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,plVar57,plVar44,plVar56);
                            func_0x037275b8(lVar54,plVar45,1,0);
                            func_0x03727828(lVar54,plVar56,plVar45,0);
                            plVar52 = (long *)(ulong)((uint)plVar46 & 1);
                            plVar51 = (long *)(ulong)((uint)uVar65 & 1);
                            uVar62 = 0;
                            uVar41 = func_0x036fa00c(lVar54,plVar56);
                            auVar70._8_4_ = uVar41;
                            auVar70._0_8_ = lVar54;
                            auVar70._12_4_ = 0;
                            lVar55 = func_0x036d5ec8(lVar54);
                            plVar53 = plVar59;
                            if (lVar55 != 0) {
                              auStack_1c8 = func_0x03753e70(lVar55,0);
                              uVar40 = func_0x022bf4f8(auStack_1c8,_DAT_05a27fc8);
                              uVar47 = auStack_1c8._8_8_;
                              uVar43 = auStack_1c8._0_8_;
                              if ((uVar41 & uVar40 & 1) == 0) {
                                uStack_188 = func_0x03530c84(plVar45,0);
                                plStack_1d8 = (long *)0x0;
                                plStack_1d0 = (long *)0x0;
                                func_0x028866e4(&plStack_1d8,&uStack_188,_DAT_05a27fa0);
                                uVar62 = 0;
                                plVar51 = plStack_1d0;
                                auVar72 = func_0x03489150(uVar43,uVar47,plStack_1d8);
                                plVar53 = plVar59;
                                uVar66 = uVar47;
                              }
                              else {
                                uStack_188 = func_0x03530c84(plVar45,0);
                                plStack_1d8 = (long *)0x0;
                                plStack_1d0 = (long *)0x0;
                                func_0x028866e4(&plStack_1d8,&uStack_188,_DAT_05a27fa0);
                                auVar72._8_8_ = plStack_1d0;
                                auVar72._0_8_ = plStack_1d8;
                                plVar53 = plVar59;
                              }
                              plVar45 = auVar72._0_8_;
                              lVar54 = func_0x036d5ec8(lVar54);
                              auStack_1b8 = auVar72;
                              uVar65 = func_0x022bf4f8(auStack_1b8,_DAT_05a27fc8);
                              if ((uVar65 & 1) == 0) {
                                plVar52 = (long *)0x0;
                                plVar46 = (long *)0x0;
                              }
                              else {
                                plVar45 = (long *)func_0x023f3ca0(auStack_1b8,_DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uStack_188 = func_0x03530158(plVar45,0);
                                plStack_1d8 = (long *)0x0;
                                plStack_1d0 = (long *)0x0;
                                func_0x028866e4(&plStack_1d8,&uStack_188,_DAT_05a28018);
                                plVar46 = plStack_1d8;
                                plVar52 = plStack_1d0;
                              }
                              auVar36._8_8_ = 0;
                              auVar36._0_8_ = auVar72._8_8_;
                              auVar70 = auVar36 << 0x40;
                              if (lVar54 != 0) {
                                func_0x03753f18(lVar54,plVar46,plVar52,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar38 < 1) {
                          return (char *)0x0;
                        }
                        lVar54 = func_0x036d5ec8(lVar54);
                        if (lVar54 != 0) {
                          *(uint *)(lVar54 + 0x38) = uVar41;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar55 = func_0x036d5e58(lVar54);
              auVar31._8_8_ = auStack_1b8._8_8_;
              auVar31._0_8_ = auStack_1b8._0_8_;
              auVar24._8_8_ = auStack_1c8._8_8_;
              auVar24._0_8_ = auStack_1c8._0_8_;
              auVar18._8_8_ = auStack_1a8._8_8_;
              auVar18._0_8_ = auStack_1a8._0_8_;
              if ((lVar55 != 0) &&
                 (auStack_1a8 = auVar18, auStack_1c8 = auVar24, auStack_1b8 = auVar31,
                 plVar50 != (long *)0x0)) {
                lVar58 = *plVar50;
                unaff_x26 = *(long **)(lVar55 + 0x28);
                uVar48 = (ulong)*(ushort *)(lVar58 + 0x12e);
                if (uVar48 != 0) {
                  piVar63 = (int *)(*(long *)(lVar58 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                      puVar42 = (undefined8 *)(lVar58 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar48 = uVar48 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar48 != 0);
                }
                plVar52 = (long *)0x3;
                puVar42 = (undefined8 *)func_0x024d927c(plVar50);
LAB_036dc3f8:
                uVar48 = (*(code *)*puVar42)(plVar50,puVar42[1]);
                if (unaff_x26 != (long *)0x0) {
                  plVar52 = (long *)(uVar48 & 0xffffffff);
                  plVar51 = (long *)0x0;
                  uVar40 = func_0x03700d78(unaff_x26,plVar44);
                  if (uVar40 == uVar41) {
                    lVar55 = *plVar50;
                    uVar48 = (ulong)*(ushort *)(lVar55 + 0x12e);
                    if (uVar48 != 0) {
                      piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                          puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar48 = uVar48 - 1;
                        piVar63 = piVar63 + 4;
                      } while (uVar48 != 0);
                    }
                    plVar52 = (long *)0x2;
                    puVar42 = (undefined8 *)func_0x024d927c(plVar50);
LAB_036dc760:
                    plVar50 = (long *)(*(code *)*puVar42)(plVar50,puVar42[1]);
                    lVar55 = func_0x036d5e58(lVar54);
                    if (lVar55 != 0) {
                      plVar44 = *(long **)(lVar55 + 0x18);
                      plVar57 = (long *)func_0x03530c84(plVar45,0);
                      if (plVar50 != (long *)0x0) {
                        lVar55 = *plVar50;
                        uVar62 = (ulong)*(ushort *)(lVar55 + 0x12e);
                        if (uVar62 != 0) {
                          piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar63 + -2) == _DAT_059deb60) {
                              puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar62 = uVar62 - 1;
                            piVar63 = piVar63 + 4;
                          } while (uVar62 != 0);
                        }
                        puVar42 = (undefined8 *)func_0x024d927c(plVar50,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar42)(plVar50,plVar44,plVar56,plVar57,puVar42[1]);
                        func_0x037275b8(lVar54,plVar45,1,0);
                        func_0x03727828(lVar54,plVar56,plVar45,0);
                        plVar52 = (long *)(ulong)((uint)plVar46 & 1);
                        plVar51 = (long *)(ulong)((uint)uVar65 & 1);
                        uVar62 = 0;
                        uVar41 = func_0x036fa00c(lVar54,plVar56);
                        auVar12._8_4_ = uVar41;
                        auVar12._0_8_ = lVar54;
                        auVar12._12_4_ = 0;
                        auVar70._8_4_ = uVar41;
                        auVar70._0_8_ = lVar54;
                        auVar70._12_4_ = 0;
                        lVar55 = func_0x036d5e58(lVar54);
                        auVar32._8_8_ = auStack_1b8._8_8_;
                        auVar32._0_8_ = auStack_1b8._0_8_;
                        auVar25._8_8_ = auStack_1c8._8_8_;
                        auVar25._0_8_ = auStack_1c8._0_8_;
                        auVar19._8_8_ = auStack_1a8._8_8_;
                        auVar19._0_8_ = auStack_1a8._0_8_;
                        unaff_x26 = plVar57;
                        if ((lVar55 != 0) &&
                           (auVar70 = auVar12, auStack_1a8 = auVar19, auStack_1c8 = auVar25,
                           auStack_1b8 = auVar32, *(long *)(lVar55 + 0x18) != 0)) {
                          auStack_1a8 = func_0x03753e70(*(long *)(lVar55 + 0x18),0);
                          lVar55 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar55 + 0x135) & 1) == 0) {
                            lVar55 = func_0x024d8f40();
                          }
                          pcVar49 = (char *)func_0x0249f90c(auStack_1a8,
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar55 + 0xc0) + 8
                                                                       ) + 0x80));
                          uVar47 = auStack_1a8._8_8_;
                          uVar43 = auStack_1a8._0_8_;
                          if ((uVar41 & *pcVar49 != '\0') == 0) {
                            uStack_188 = func_0x03530c84(plVar45,0);
                            plStack_1d8 = (long *)0x0;
                            plStack_1d0 = (long *)0x0;
                            func_0x028866e4(&plStack_1d8,&uStack_188,_DAT_05a27fa0);
                            uVar62 = 0;
                            plVar52 = plStack_1d8;
                            plVar51 = plStack_1d0;
                            auVar71 = func_0x03489150(uVar43,uVar47);
                          }
                          else {
                            uStack_188 = func_0x03530c84(plVar45,0);
                            plStack_1d8 = (long *)0x0;
                            plStack_1d0 = (long *)0x0;
                            plVar52 = _DAT_05a27fa0;
                            func_0x028866e4(&plStack_1d8,&uStack_188);
                            auVar71._8_8_ = plStack_1d0;
                            auVar71._0_8_ = plStack_1d8;
                          }
                          uVar66 = auVar71._8_8_;
                          uVar43 = auVar71._0_8_;
                          auVar70._8_8_ = uVar43;
                          lVar55 = func_0x036d5e58(lVar54);
                          if (lVar55 != 0) {
                            plVar45 = *(long **)(lVar55 + 0x18);
                            lVar55 = *(long *)(_DAT_05a27fc8 + 0x20);
                            auStack_1b8._0_8_ = uVar43;
                            auStack_1b8._8_8_ = uVar66;
                            if ((*(byte *)(lVar55 + 0x135) & 1) == 0) {
                              lVar55 = func_0x024d8f40();
                            }
                            pcVar49 = (char *)func_0x0249f90c(auStack_1b8,
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar55 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar49 == '\0') {
                              plVar52 = (long *)0x0;
                              plVar46 = (long *)0x0;
                            }
                            else {
                              uVar43 = func_0x023f3ca0(auStack_1b8,_DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uStack_188 = func_0x03530158(uVar43,0);
                              plStack_1d8 = (long *)0x0;
                              plStack_1d0 = (long *)0x0;
                              func_0x028866e4(&plStack_1d8,&uStack_188,_DAT_05a28018);
                              plVar46 = plStack_1d8;
                              plVar52 = plStack_1d0;
                            }
                            auVar14._8_8_ = uVar43;
                            auVar14._0_8_ = lVar54;
                            auVar13._8_8_ = uVar43;
                            auVar13._0_8_ = lVar54;
                            auVar70._8_8_ = uVar43;
                            if (plVar45 != (long *)0x0) {
                              plVar51 = (long *)0x0;
                              func_0x03753f18(plVar45,plVar46);
                              lVar54 = func_0x036d5e58(lVar54);
                              auVar33._8_8_ = auStack_1b8._8_8_;
                              auVar33._0_8_ = auStack_1b8._0_8_;
                              auVar26._8_8_ = auStack_1c8._8_8_;
                              auVar26._0_8_ = auStack_1c8._0_8_;
                              auVar70 = auVar13;
                              if ((lVar54 != 0) &&
                                 (auVar70 = auVar14, auStack_1c8 = auVar26, auStack_1b8 = auVar33,
                                 *(long *)(lVar54 + 0x18) != 0)) {
                                func_0x03754328(*(long *)(lVar54 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    unaff_x26 = (long *)(ulong)uVar40;
                    if ((int)uVar40 < 1) {
                      return (char *)0x0;
                    }
                    lVar54 = func_0x036d5ec8(lVar54);
                    if (lVar54 != 0) {
                      func_0x03754330(lVar54,unaff_x26,0);
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
  uVar47 = auVar70._8_8_;
  uVar43 = auVar70._0_8_;
  func_0x0249fb90();
  plStack_1f0 = (long *)0x36dcaf8;
  lVar54 = func_0x036d5e58();
  if ((lVar54 != 0) && (lVar54 = *(long *)(lVar54 + 0x18), lVar54 != 0)) {
    uStack_210 = plStack_1f0;
    plStack_200 = (long *)uVar66;
    plStack_1f0 = plVar45;
    if ((bRam0000000005e2de5c & 1) == 0) {
      uStack_1f8 = uVar47;
      uStack_1e8 = uVar43;
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      auVar70._8_8_ = uStack_1f8;
      auVar70._0_8_ = uStack_1e8;
      bRam0000000005e2de5c = 1;
    }
    uStack_1f8 = auVar70._8_8_;
    uStack_1e8 = auVar70._0_8_;
    lVar55 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar55 + 0x135) & 1) == 0) {
      lVar55 = func_0x024d8f40();
      auVar70._8_8_ = uStack_1f8;
      auVar70._0_8_ = uStack_1e8;
    }
    uStack_1f8 = auVar70._8_8_;
    uStack_1e8 = auVar70._0_8_;
    pcVar49 = (char *)func_0x0249f90c(lVar54 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar55 + 0xc0) + 8) + 0x80));
    if (*pcVar49 != '\0') {
      func_0x02886844(lVar54 + 0x50,&pcStack_208,_DAT_05a27fd0);
      pcVar49 = pcStack_208;
      uVar43 = *(undefined8 *)(lVar54 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar65 = func_0x0430deb0(pcVar49,uVar43,0);
      if ((uVar65 & 1) != 0) {
        func_0x02886844(lVar54 + 0x50,&pcStack_208,_DAT_05a27fd0);
        return pcStack_208;
      }
    }
    return *(char **)(lVar54 + 0x28);
  }
  auVar68 = func_0x0249fb90();
  pcStack_208 = auVar68._8_8_;
  uVar64 = auVar68._0_8_;
  uStack_210 = 0x36dcb1c;
  plStack_200 = plVar45;
  uStack_1f8 = uVar43;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar54 = func_0x036d5e58(uVar64);
  if (lVar54 != 0) {
    lVar54 = *(long *)(lVar54 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar43 = func_0x0352eeec(&pcStack_208,0);
    uVar64 = 0;
    if (lVar54 != 0) {
      pcVar49 = (char *)func_0x03753bf0(lVar54,uVar43,0);
      return pcVar49;
    }
  }
  func_0x0249fb90();
  uStack_220 = 0x36dcba8;
  uStack_218 = uVar64;
  lVar54 = func_0x036d5e58();
  if ((lVar54 != 0) && (lVar54 = *(long *)(lVar54 + 0x18), lVar54 != 0)) {
    plStack_250 = (long *)uStack_220;
    uStack_220 = 0x5e2d000;
    plStack_260 = extraout_x1;
    plStack_248 = plVar44;
    plStack_240 = plVar50;
    uStack_238 = uVar67;
    uStack_230 = uVar66;
    plStack_228 = (long *)uVar47;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    plStack_270 = (long *)0x0;
    plStack_268 = (long *)0x0;
    uVar65 = func_0x0375309c(lVar54);
    if ((uVar65 & 1) != 0) {
      plStack_268 = *(long **)(lVar54 + 0x68);
      plStack_270 = *(long **)(lVar54 + 0x60);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar43 = func_0x0352eeec(&plStack_260,0);
      lVar55 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar55 + 0x135) & 1) == 0) {
        lVar55 = func_0x024d8f40(lVar55);
      }
      pcVar49 = (char *)func_0x0249f90c(&plStack_270,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar55 + 0xc0) + 8) + 0x80));
      lVar55 = _DAT_05a27fb0;
      if (*pcVar49 == '\0') {
        plVar51 = (long *)0x0;
        plVar44 = (long *)0x0;
      }
      else {
        lVar60 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar60 + 0x135);
        lVar58 = lVar60;
        if ((uVar1 & 1) == 0) {
          lVar60 = func_0x024d8f40(lVar60);
          uVar1 = *(ushort *)(*(long *)(lVar55 + 0x20) + 0x135);
          lVar58 = *(long *)(lVar55 + 0x20);
        }
        uVar37 = *(undefined4 *)(**(long **)(lVar60 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar58 = func_0x024d8f40(lVar58);
        }
        uVar47 = func_0x0249f90c(&plStack_270,
                                 *(long *)(*(long *)(*(long *)(lVar58 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&plStack_280,uVar47,uVar37);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plStack_258 = (long *)func_0x0430d994(plStack_280,uVar43,0);
        plStack_280 = (long *)0x0;
        plStack_278 = (long *)0x0;
        func_0x028866e4(&plStack_280,&plStack_258,_DAT_05a27fa0);
        plVar51 = plStack_280;
        plVar44 = plStack_278;
      }
      *(long **)(lVar54 + 0x68) = plVar44;
      *(long **)(lVar54 + 0x60) = plVar51;
    }
    lVar55 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar55 + 0x135) & 1) == 0) {
      lVar55 = func_0x024d8f40();
    }
    pcVar49 = (char *)func_0x0249f90c(lVar54 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar55 + 0xc0) + 8) + 0x80));
    if (*pcVar49 != '\0') {
      func_0x02886844(lVar54 + 0x18,&plStack_280,_DAT_05a27fd0);
      plVar51 = plStack_280;
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar43 = func_0x0352eeec(&plStack_260,0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      plStack_258 = (long *)func_0x0430d994(plVar51,uVar43,0);
      plStack_280 = (long *)0x0;
      plStack_278 = (long *)0x0;
      pcVar49 = (char *)func_0x028866e4(&plStack_280,&plStack_258,_DAT_05a27fa0);
      *(long **)(lVar54 + 0x20) = plStack_278;
      *(long **)(lVar54 + 0x18) = plStack_280;
    }
    return pcVar49;
  }
  auVar68 = func_0x0249fb90();
  plVar57 = auVar68._8_8_;
  lVar54 = auVar68._0_8_;
  plStack_280 = (long *)0x36dcbd4;
  uStack_230 = 0x5e2d000;
  plVar46 = plVar52;
  plVar45 = plVar51;
  uVar65 = uVar62;
  plVar56 = plVar53;
  plStack_270 = unaff_x28;
  plStack_268 = (long *)unaff_x27;
  plStack_260 = unaff_x26;
  plStack_258 = plVar44;
  plStack_250 = plVar50;
  plStack_248 = (long *)uVar67;
  plStack_240 = (long *)uVar66;
  uStack_238 = uVar47;
  plStack_228 = extraout_x1;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar57 != (long *)0x0) {
    lVar55 = *plVar57;
    uVar66 = (ulong)*(ushort *)(lVar55 + 0x12e);
    if (uVar66 != 0) {
      piVar63 = (int *)(*(long *)(lVar55 + 0xb0) + 8);
      do {
        if (*(long *)(piVar63 + -2) == _DAT_059df8e8) {
          puVar42 = (undefined8 *)(lVar55 + (long)(*piVar63 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar66 = uVar66 - 1;
        piVar63 = piVar63 + 4;
      } while (uVar66 != 0);
    }
    plVar46 = (long *)0x5;
    puVar42 = (undefined8 *)func_0x024d927c(plVar57);
LAB_036dccc4:
    uVar43 = (*(code *)*puVar42)(plVar57,puVar42[1]);
    plVar44 = *(long **)(lVar54 + 0x10);
    if (plVar44 != (long *)0x0) {
      plVar44 = (long *)(**(code **)(*plVar44 + 0x1c8))
                                  (plVar44,uVar43,*(undefined8 *)(*plVar44 + 0x1d0));
      pcVar49 = (char *)0x0;
      if (plVar44 != (long *)0x0) {
        plVar46 = (long *)0x0;
        uVar66 = func_0x036edd98(lVar54,uVar43);
        if ((uVar66 & 1) != 0) {
          lVar54 = *plVar44;
          uVar66 = (ulong)*(ushort *)(lVar54 + 0x12e);
          if (uVar66 != 0) {
            piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
            do {
              if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar66 = uVar66 - 1;
              piVar63 = piVar63 + 4;
            } while (uVar66 != 0);
          }
          plVar46 = (long *)0x19;
          puVar42 = (undefined8 *)func_0x024d927c(plVar44);
LAB_036dce14:
          plVar50 = (long *)(*(code *)*puVar42)(plVar44,puVar42[1]);
          if (plVar50 != (long *)0x0) {
            lVar54 = *plVar50;
            uVar66 = (ulong)*(ushort *)(lVar54 + 0x12e);
            if (uVar66 != 0) {
              piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
              do {
                if (*(long *)(piVar63 + -2) == _DAT_059e0150) {
                  puVar42 = (undefined8 *)(lVar54 + (long)*piVar63 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar66 = uVar66 - 1;
                piVar63 = piVar63 + 4;
              } while (uVar66 != 0);
            }
            plVar46 = (long *)0x0;
            puVar42 = (undefined8 *)func_0x024d927c(plVar50);
LAB_036dce7c:
            uVar66 = (*(code *)*puVar42)(plVar50,puVar42[1]);
            if ((uVar66 & 1) == 0) {
LAB_036dcf40:
              lVar54 = *plVar44;
              uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
              if (uVar65 != 0) {
                piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                    puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar65 = uVar65 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar65 != 0);
              }
              puVar42 = (undefined8 *)func_0x024d927c(plVar44,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar44 = (long *)(*(code *)*puVar42)(plVar44,puVar42[1]);
              plStack_260 = plStack_280;
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar44 == (long *)0x0) {
                lVar54 = func_0x0249fb90();
                return *(char **)(lVar54 + 0x10);
              }
              lVar54 = *plVar44;
              uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
              if (uVar65 != 0) {
                piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059deb70) {
                    puVar42 = (undefined8 *)(lVar54 + (long)*piVar63 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar65 = uVar65 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar65 != 0);
              }
              puVar42 = (undefined8 *)func_0x024d927c(plVar44,_DAT_059deb70,0);
LAB_03751b38:
              uVar43 = (*(code *)*puVar42)(plVar44,puVar42[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              plStack_270 = plVar52;
              plStack_268 = plVar51;
              func_0x0288f218(&plStack_270,&plStack_288,_DAT_05a29e48);
              plStack_298 = plStack_280;
              plStack_2a0 = plStack_288;
              plStack_290 = plStack_278;
              pcVar49 = (char *)func_0x0371f1bc(uVar43,plVar57,&plStack_2a0,param_7,0);
              return pcVar49;
            }
            if (plVar52 != (long *)0x0) {
              lVar54 = *plVar52;
              uVar66 = (ulong)*(ushort *)(lVar54 + 0x12e);
              if (uVar66 != 0) {
                piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059defb8) {
                    puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar66 = uVar66 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar66 != 0);
              }
              puVar42 = (undefined8 *)func_0x024d927c(plVar52,_DAT_059defb8,0xb);
LAB_036dcee8:
              plVar45 = (long *)puVar42[1];
              uVar62 = (*(code *)*puVar42)(plVar52,uVar62);
              if ((uVar62 & 1) == 0) goto LAB_036dcf40;
              lVar54 = *plVar44;
              uVar62 = (ulong)*(ushort *)(lVar54 + 0x12e);
              if (uVar62 != 0) {
                piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar63 + -2) == _DAT_059dfbc0) {
                    puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 0x19) * 0x10 + 0x138);
                    plVar46 = plVar53;
                    goto LAB_036dcfe0;
                  }
                  uVar62 = uVar62 - 1;
                  piVar63 = piVar63 + 4;
                } while (uVar62 != 0);
              }
              plVar46 = (long *)0x19;
              puVar42 = (undefined8 *)func_0x024d927c(plVar44);
LAB_036dcfe0:
              plVar44 = (long *)(*(code *)*puVar42)(plVar44,puVar42[1]);
              if (plVar44 != (long *)0x0) {
                lVar54 = *plVar44;
                uVar65 = (ulong)*(ushort *)(lVar54 + 0x12e);
                if (uVar65 != 0) {
                  piVar63 = (int *)(*(long *)(lVar54 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar63 + -2) == _DAT_059e0150) {
                      puVar42 = (undefined8 *)(lVar54 + (long)(*piVar63 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar65 = uVar65 - 1;
                    piVar63 = piVar63 + 4;
                  } while (uVar65 != 0);
                }
                puVar42 = (undefined8 *)func_0x024d927c(plVar44,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar49 = (char *)(*(code *)*puVar42)(plVar44,plVar57,plVar52,plVar51,param_7,
                                                      puVar42[1]);
                return pcVar49;
              }
            }
          }
          goto LAB_036dd07c;
        }
        plVar46 = (long *)0x0;
        uVar62 = func_0x036edf9c(lVar54,uVar43);
        pcVar49 = (char *)0x0;
        if ((uVar62 & 1) != 0) {
          lVar54 = func_0x036d5e58(lVar54);
          if ((lVar54 == 0) || (*(long *)(lVar54 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar43 = *(undefined8 *)(*(long *)(lVar54 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          plStack_290 = plVar52;
          plStack_288 = plVar51;
          func_0x0288f218(&plStack_290,&uStack_2a8,_DAT_05a29e48);
          plStack_2b8 = plStack_2a0;
          uStack_2c0 = uStack_2a8;
          uStack_2b0 = plStack_298;
          pcVar49 = (char *)func_0x0371f1bc(uVar43,plVar57,&uStack_2c0,param_7,0);
        }
      }
      return pcVar49;
    }
  }
LAB_036dd07c:
  auVar68 = func_0x0249fb90();
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar49 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar49,0);
  pcVar49[0x10] = -2;
  pcVar49[0x11] = -1;
  pcVar49[0x12] = -1;
  pcVar49[0x13] = -1;
  uVar37 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar49 + 0x20) = uVar37;
  *(long *)(pcVar49 + 0x28) = auVar68._0_8_;
  func_0x0249f888(pcVar49 + 0x28,auVar68._0_8_);
  *(long *)(pcVar49 + 0x78) = auVar68._8_8_;
  func_0x0249f888(pcVar49 + 0x78,auVar68._8_8_);
  *(long **)(pcVar49 + 0x38) = plVar46;
  func_0x0249f888(pcVar49 + 0x38,plVar46);
  *(long **)(pcVar49 + 0x68) = plVar45;
  *(ulong *)(pcVar49 + 0x50) = uVar65;
  *(long **)(pcVar49 + 0x58) = plVar56;
  func_0x0249f888(pcVar49 + 0x50,0);
  return pcVar49;
}


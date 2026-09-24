/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Board.Coordinate ProcessSwap(GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime timeForMergeOrMove, GameLogic.Player.IPlayer player, System.Boolean checkForEmptySlots = True)
 * Ghidra function entry: 0377986c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0377c42c: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0377986c(long param_1,ulong param_2,ulong param_3,undefined1 (*param_4) [16],
                  undefined1 (*param_5) [16],undefined1 (*param_6) [16],long *param_7,
                  undefined1 (*param_8) [16])

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  long *plVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 *puVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  long lVar31;
  long lVar32;
  undefined1 (**ppauVar33) [16];
  ulong uVar34;
  int *piVar35;
  undefined8 uVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*unaff_x26) [16];
  ulong uVar38;
  undefined1 (*unaff_x27) [16];
  undefined *unaff_x28;
  code *pcVar39;
  long *unaff_x29;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  uint uStack_764;
  int iStack_760;
  undefined1 (*pauStack_750) [16];
  undefined1 (*pauStack_748) [16];
  undefined1 auStack_730 [80];
  undefined1 auStack_6e0 [80];
  undefined1 (*pauStack_690) [16];
  undefined1 (**ppauStack_688) [16];
  undefined8 uStack_680;
  undefined1 (*pauStack_670) [16];
  undefined1 (**ppauStack_668) [16];
  undefined8 uStack_660;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined1 auStack_640 [80];
  undefined1 (*pauStack_5f0) [16];
  undefined1 (**ppauStack_5e8) [16];
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined1 auStack_5a0 [80];
  undefined1 auStack_550 [80];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 (*pauStack_4a8) [16];
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 (*pauStack_450) [16];
  undefined1 (*pauStack_448) [16];
  undefined1 (*pauStack_440) [16];
  undefined8 uStack_438;
  undefined1 (*pauStack_428) [16];
  undefined1 (*pauStack_420) [16];
  undefined1 (*pauStack_418) [16];
  undefined8 uStack_410;
  uint uStack_404;
  undefined1 (*pauStack_400) [16];
  undefined1 (*pauStack_3f8) [16];
  undefined1 (*pauStack_3f0) [16];
  undefined8 uStack_3e8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_380) [16];
  undefined1 (*pauStack_378) [16];
  undefined1 (*pauStack_370) [16];
  undefined1 (*pauStack_368) [16];
  undefined1 (*pauStack_360) [16];
  undefined1 (*pauStack_358) [16];
  undefined1 (*pauStack_350) [16];
  undefined1 (*pauStack_348) [16];
  undefined8 uStack_340;
  long *plStack_330;
  undefined1 (*pauStack_328) [16];
  undefined1 (*pauStack_320) [16];
  long *plStack_318;
  undefined1 (*pauStack_310) [16];
  undefined1 (*pauStack_308) [16];
  undefined1 auStack_300 [80];
  undefined1 (*pauStack_2b0) [16];
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined1 (*pauStack_290) [16];
  undefined8 uStack_288;
  undefined1 auStack_280 [80];
  undefined1 auStack_230 [80];
  undefined1 auStack_1e0 [80];
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_13c;
  long lStack_138;
  undefined8 uStack_130;
  char acStack_124 [4];
  undefined1 (*pauStack_120) [16];
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  pauVar18 = param_4;
  pauVar22 = param_5;
  if ((bRam0000000005e2dfa6 & 1) == 0) {
    func_0x0249f8e4(&DAT_059fb920);
    func_0x0249f8e4(&DAT_059fb930);
    func_0x0249f8e4(&DAT_059df010);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2dfa6 = 1;
  }
  func_0x03787050(param_1,param_4,param_5);
  func_0x0378717c(param_1,param_5,param_4);
  pauVar7 = (undefined1 (*) [16])func_0x0376e450(param_1,param_2);
  pauVar8 = (undefined1 (*) [16])func_0x0376e450(param_1,param_3);
  func_0x037743ac(param_1,param_3,pauVar7);
  func_0x037743ac(param_1,param_2);
  puVar9 = (undefined *)func_0x0376e450(param_1,param_3);
  pauVar10 = (undefined1 (*) [16])func_0x0376e450(param_1,param_2);
  if (param_5 != (undefined1 (*) [16])0x0) {
    pauVar7 = *(undefined1 (**) [16])*param_5;
    unaff_x27 = (undefined1 (*) [16])&DAT_059df8e8;
    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(pauVar7[(long)(*piVar35 + 5) + 0x13] + 8);
          goto LAB_037799c8;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar8 = (undefined1 (*) [16])0x5;
    puVar11 = (undefined8 *)func_0x024d927c(param_5);
LAB_037799c8:
    uVar12 = (*(code *)*puVar11)(param_5,puVar11[1]);
    pauVar7 = pauVar10;
    if (puVar9 != (undefined *)0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
      pauVar13 = (undefined1 (*) [16])func_0x036d3908(puVar9,uVar12);
      if (pauVar13 != (undefined1 (*) [16])0x0) {
        pauVar25 = *(undefined1 (**) [16])*pauVar13;
        unaff_x28 = &DAT_059dfbc0;
        uVar34 = (ulong)*(ushort *)(pauVar25[0x12] + 0xe);
        if (uVar34 != 0) {
          piVar35 = (int *)(*(long *)pauVar25[0xb] + 8);
          do {
            if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
              puVar11 = (undefined8 *)(pauVar25[(long)(*piVar35 + 0x11) + 0x13] + 8);
              goto LAB_03779a48;
            }
            uVar34 = uVar34 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar34 != 0);
        }
        pauVar8 = (undefined1 (*) [16])0x11;
        puVar11 = (undefined8 *)func_0x024d927c(pauVar13);
LAB_03779a48:
        pauVar25 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar13,puVar11[1]);
        unaff_x26 = pauVar13;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          pauVar13 = *(undefined1 (**) [16])*pauVar25;
          unaff_x29 = (long *)&DAT_059df010;
          uVar34 = (ulong)*(ushort *)(pauVar13[0x12] + 0xe);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)pauVar13[0xb] + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059df010) {
                puVar11 = (undefined8 *)(pauVar13[(long)*piVar35 + 0x13] + 8);
                goto LAB_03779ab0;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          pauVar8 = (undefined1 (*) [16])0x0;
          puVar11 = (undefined8 *)func_0x024d927c(pauVar25);
LAB_03779ab0:
          uVar34 = (*(code *)*puVar11)(pauVar25,puVar11[1]);
          if ((uVar34 & 1) != 0) {
            func_0x03787050(param_1,param_4,param_5);
            func_0x0378717c(param_1,param_5,param_4);
            goto LAB_03779d90;
          }
          pauVar13 = *(undefined1 (**) [16])*param_5;
          uVar34 = (ulong)*(ushort *)(pauVar13[0x12] + 0xe);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)pauVar13[0xb] + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                puVar11 = (undefined8 *)(pauVar13[(long)(*piVar35 + 5) + 0x13] + 8);
                goto LAB_03779b34;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          pauVar8 = (undefined1 (*) [16])0x5;
          puVar11 = (undefined8 *)func_0x024d927c(param_5);
LAB_03779b34:
          uVar12 = (*(code *)*puVar11)(param_5,puVar11[1]);
          unaff_x26 = pauVar25;
          if (pauVar10 != (undefined1 (*) [16])0x0) {
            pauVar8 = (undefined1 (*) [16])0x0;
            pauVar13 = (undefined1 (*) [16])func_0x036d3908(pauVar10,uVar12);
            if (pauVar13 != (undefined1 (*) [16])0x0) {
              pauVar25 = *(undefined1 (**) [16])*pauVar13;
              uVar34 = (ulong)*(ushort *)(pauVar25[0x12] + 0xe);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)pauVar25[0xb] + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                    puVar11 = (undefined8 *)(pauVar25[(long)(*piVar35 + 0x11) + 0x13] + 8);
                    goto LAB_03779bac;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              pauVar8 = (undefined1 (*) [16])0x11;
              puVar11 = (undefined8 *)func_0x024d927c(pauVar13);
LAB_03779bac:
              plVar14 = (long *)(*(code *)*puVar11)(pauVar13,puVar11[1]);
              unaff_x26 = pauVar13;
              if (plVar14 != (long *)0x0) {
                lVar26 = *plVar14;
                uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059df010) {
                      puVar11 = (undefined8 *)(lVar26 + (long)*piVar35 * 0x10 + 0x138);
                      goto LAB_03779c0c;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df010,0);
LAB_03779c0c:
                uVar34 = (*(code *)*puVar11)(plVar14,puVar11[1]);
                unaff_x26 = (undefined1 (*) [16])(uVar34 & 0xffffffff);
                func_0x03787050(param_1,param_4,param_5);
                pauVar8 = param_4;
                func_0x0378717c(param_1,param_5);
                if ((uVar34 & 1) != 0) goto LAB_03779d90;
                if (*(long *)(param_1 + 0xa0) != 0) {
                  unaff_x27 = (undefined1 (*) [16])&DAT_059fb920;
                  pauVar8 = _DAT_059fb920;
                  uStack_68 = param_3;
                  uVar34 = func_0x02a3cb7c(*(long *)(param_1 + 0xa0),&uStack_68);
                  if ((uVar34 & 1) == 0) {
                    uVar34 = func_0x036df3c8(puVar9,0);
                    if ((uVar34 & 1) != 0) {
                      pauVar18 = (undefined1 (*) [16])0x0;
                      pauVar8 = param_4;
                      func_0x036e0198(puVar9,param_5);
                    }
LAB_03779cec:
                    if (*(long *)(param_1 + 0xa0) != 0) {
                      pauVar8 = _DAT_059fb920;
                      uStack_68 = param_2;
                      uVar34 = func_0x02a3cb7c(*(long *)(param_1 + 0xa0),&uStack_68);
                      if ((uVar34 & 1) == 0) {
                        uVar34 = func_0x036df3c8(pauVar10,0);
                        if ((uVar34 & 1) != 0) {
                          func_0x036e0198(pauVar10,param_5,param_4,0);
                        }
LAB_03779d90:
                        uVar12 = func_0x03530c84(param_4,0);
                        *(undefined8 *)(param_1 + 0x20) = uVar12;
                        return param_2;
                      }
                      if (*(long *)(param_1 + 0xa0) != 0) {
                        pauVar8 = (undefined1 (*) [16])&uStack_68;
                        puVar9 = &DAT_059fb930;
                        pauVar18 = _DAT_059fb930;
                        uStack_70 = param_2;
                        func_0x02a3be14(*(long *)(param_1 + 0xa0),&uStack_70);
                        if (*(long *)(param_1 + 0xa0) != 0) {
                          uVar34 = uStack_68 & 0xffffffff;
                          uStack_70 = param_2;
                          func_0x02a3be14(*(long *)(param_1 + 0xa0),&uStack_70,&uStack_68,
                                          _DAT_059fb930);
                          func_0x036df8d8(pauVar10,param_5,uVar34,uStack_68._4_4_,param_4,0);
                          goto LAB_03779d90;
                        }
                      }
                    }
                  }
                  else if (*(long *)(param_1 + 0xa0) != 0) {
                    pauVar8 = (undefined1 (*) [16])&uStack_68;
                    unaff_x28 = &DAT_059fb930;
                    pauVar18 = _DAT_059fb930;
                    uStack_70 = param_3;
                    func_0x02a3be14(*(long *)(param_1 + 0xa0),&uStack_70);
                    if (*(long *)(param_1 + 0xa0) != 0) {
                      unaff_x26 = (undefined1 (*) [16])(uStack_68 & 0xffffffff);
                      uStack_70 = param_3;
                      func_0x02a3be14(*(long *)(param_1 + 0xa0),&uStack_70,&uStack_68,_DAT_059fb930)
                      ;
                      pauVar18 = (undefined1 (*) [16])(uStack_68 >> 0x20);
                      param_6 = (undefined1 (*) [16])0x0;
                      pauVar8 = unaff_x26;
                      pauVar22 = param_4;
                      func_0x036df8d8(puVar9,param_5);
                      goto LAB_03779cec;
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
  auVar41 = func_0x0249fb90();
  pauVar30 = auVar41._8_8_;
  pauVar15 = auVar41._0_8_;
  uStack_c8 = 0x3779dcc;
  pauVar10 = pauVar8;
  pauVar23 = pauVar18;
  pauVar25 = pauVar22;
  pauVar13 = param_8;
  plStack_330 = param_7;
  pauStack_328 = param_6;
  plStack_d0 = unaff_x29;
  puStack_c0 = unaff_x28;
  pauStack_b8 = unaff_x27;
  pauStack_b0 = unaff_x26;
  puStack_a8 = puVar9;
  uStack_a0 = param_3;
  pauStack_98 = pauVar7;
  pauStack_90 = param_5;
  pauStack_88 = param_4;
  lStack_80 = param_1;
  uStack_78 = param_2;
  if ((bRam0000000005e2dfab & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8b40);
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059fb920);
    func_0x0249f8e4(&DAT_059fb930);
    func_0x0249f8e4(&DAT_059df010);
    func_0x0249f8e4(&DAT_059df040);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059dfe68);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e03c0);
    func_0x0249f8e4(&DAT_059cd9b8);
    func_0x0249f8e4(&DAT_059cd840);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_059e2548);
    func_0x0249f8e4(&DAT_059e2700);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a29b18);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    func_0x0249f8e4(&DAT_05ab2e18);
    bRam0000000005e2dfab = 1;
  }
  acStack_124[0] = '\0';
  uStack_130 = 0;
  lStack_138 = 0;
  uStack_13c = 0;
  pauVar16 = (undefined1 (*) [16])func_0x0376e450(pauVar15,pauVar30);
  pauStack_308 = (undefined1 (*) [16])func_0x0376e450(pauVar15,pauVar8);
  pauVar37 = param_8;
  if (pauVar22 == (undefined1 (*) [16])0x0) {
LAB_0377bb44:
    func_0x0249fb90();
    pauVar28 = pauVar16;
    param_8 = pauVar37;
    pauVar29 = unaff_x26;
    plVar14 = unaff_x29;
  }
  else {
    pauVar27 = *(undefined1 (**) [16])*pauVar22;
    uVar34 = (ulong)*(ushort *)(pauVar27[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar27[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059e0220) {
          puVar11 = (undefined8 *)(pauVar27[(long)(*piVar35 + 0x3b) + 0x13] + 8);
          goto LAB_03779fdc;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar10 = (undefined1 (*) [16])0x3b;
    puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_03779fdc:
    lVar26 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
    if (lVar26 != 0) {
      pauVar25 = (undefined1 (*) [16])0x0;
      pauVar10 = pauStack_308;
      pauVar23 = pauVar8;
      func_0x034cc8b0(lVar26,pauVar22);
    }
    pauVar27 = *(undefined1 (**) [16])*pauVar22;
    uVar34 = (ulong)*(ushort *)(pauVar27[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar27[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(pauVar27[(long)(*piVar35 + 5) + 0x13] + 8);
          goto LAB_0377a058;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar10 = (undefined1 (*) [16])0x5;
    puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377a058:
    uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
    if (pauVar16 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar10 = (undefined1 (*) [16])0x0;
    pauVar27 = (undefined1 (*) [16])func_0x036d3908(pauVar16,uVar12);
    pauVar28 = *(undefined1 (**) [16])*pauVar22;
    uVar34 = (ulong)*(ushort *)(pauVar28[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar28[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(pauVar28[(long)(*piVar35 + 5) + 0x13] + 8);
          goto LAB_0377a0d4;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar10 = (undefined1 (*) [16])0x5;
    puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377a0d4:
    pauStack_310 = pauVar16;
    uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
    unaff_x26 = pauVar27;
    if (pauStack_308 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar10 = (undefined1 (*) [16])0x0;
    plVar14 = (long *)func_0x036d3908(pauStack_308,uVar12);
    if (pauVar27 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar16 = *(undefined1 (**) [16])*pauVar27;
    uVar34 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar16[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
          puVar11 = (undefined8 *)(pauVar16[(long)(*piVar35 + 2) + 0x13] + 8);
          goto LAB_0377a164;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar10 = (undefined1 (*) [16])0x2;
    puVar11 = (undefined8 *)func_0x024d927c(pauVar27);
LAB_0377a164:
    plStack_318 = (long *)(*(code *)*puVar11)(pauVar27,puVar11[1]);
    acStack_124[0] = '\x01';
    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    unaff_x27 = (undefined1 (*) [16])&DAT_059dfe68;
    uVar34 = func_0x036c0cb8(pauVar27,0);
    pauVar16 = (undefined1 (*) [16])&DAT_059e1498;
    unaff_x29 = plVar14;
    if ((uVar34 & 1) != 0) {
LAB_0377a220:
      if (plStack_318 != (long *)0x0) {
        lVar26 = *plStack_318;
        uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar34 != 0) {
          piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == _DAT_059dfe38) {
              puVar11 = (undefined8 *)(lVar26 + (long)*piVar35 * 0x10 + 0x138);
              goto LAB_0377a280;
            }
            uVar34 = uVar34 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar34 != 0);
        }
        pauVar10 = (undefined1 (*) [16])0x0;
        puVar11 = (undefined8 *)func_0x024d927c(plStack_318);
LAB_0377a280:
        pauVar28 = (undefined1 (*) [16])(*(code *)*puVar11)(plStack_318,puVar11[1]);
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          pauVar10 = *(undefined1 (**) [16])*pauVar28;
          uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059dfe68) {
                puVar11 = (undefined8 *)(pauVar10[(long)(*piVar35 + 1) + 0x13] + 8);
                goto LAB_0377a2e4;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(pauVar28,_DAT_059dfe68,1);
LAB_0377a2e4:
          param_7 = (long *)puVar11[1];
          pauVar10 = pauVar15;
          pauVar23 = pauStack_310;
          pauVar25 = pauStack_308;
          param_6 = pauVar18;
          unaff_x27 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar28,pauVar22);
          pauVar29 = pauVar27;
          if ((unaff_x27 != (undefined1 (*) [16])0x0) &&
             (*(undefined1 (**) [16])*unaff_x27 != _DAT_059e2700)) goto LAB_0377bb48;
LAB_0377a324:
          pauVar10 = unaff_x27;
          func_0x0378569c(pauVar15,pauVar22);
          pauVar16 = pauVar27;
          unaff_x26 = pauVar29;
          if (pauVar27 != (undefined1 (*) [16])0x0) {
            pauVar28 = *(undefined1 (**) [16])*pauVar27;
            uVar34 = (ulong)*(ushort *)(pauVar28[0x12] + 0xe);
            if (uVar34 != 0) {
              piVar35 = (int *)(*(long *)pauVar28[0xb] + 8);
              do {
                if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                  puVar11 = (undefined8 *)(pauVar28[(long)(*piVar35 + 0x12) + 0x13] + 8);
                  goto LAB_0377a390;
                }
                uVar34 = uVar34 - 1;
                piVar35 = piVar35 + 4;
              } while (uVar34 != 0);
            }
            pauVar10 = (undefined1 (*) [16])0x12;
            puVar11 = (undefined8 *)func_0x024d927c(pauVar27);
LAB_0377a390:
            pauVar28 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar27,puVar11[1]);
            if (pauVar28 != (undefined1 (*) [16])0x0) {
              pauVar16 = *(undefined1 (**) [16])*pauVar28;
              unaff_x26 = (undefined1 (*) [16])&DAT_059df2a8;
              uVar34 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)pauVar16[0xb] + 8);
                do {
                  if (*(long *)(piVar35 + -2) == _DAT_059df2a8) {
                    puVar11 = (undefined8 *)(pauVar16[(long)*piVar35 + 0x13] + 8);
                    goto LAB_0377a3f8;
                  }
                  uVar34 = uVar34 - 1;
                  piVar35 = piVar35 + 4;
                } while (uVar34 != 0);
              }
              pauVar10 = (undefined1 (*) [16])0x0;
              puVar11 = (undefined8 *)func_0x024d927c(pauVar28);
LAB_0377a3f8:
              uVar34 = (*(code *)*puVar11)(pauVar28,puVar11[1]);
              if ((uVar34 & 1) == 0) {
LAB_0377a51c:
                pauVar7 = (undefined1 (*) [16])0x0;
LAB_0377a76c:
                pauVar16 = *(undefined1 (**) [16])*pauVar22;
                uVar34 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)pauVar16[0xb] + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                      puVar11 = (undefined8 *)(pauVar16[(long)(*piVar35 + 5) + 0x13] + 8);
                      goto LAB_0377a7c4;
                    }
                    uVar34 = uVar34 - 1;
                    piVar35 = piVar35 + 4;
                  } while (uVar34 != 0);
                }
                pauVar10 = (undefined1 (*) [16])0x5;
                puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377a7c4:
                uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
                pauVar16 = pauVar28;
                if (unaff_x27 != (undefined1 (*) [16])0x0) {
                  unaff_x29 = (long *)func_0x036d3908(unaff_x27,uVar12,0);
                  pauVar10 = unaff_x27;
                  func_0x037743ac(pauVar15,pauVar8);
                  if (acStack_124[0] != '\0') {
                    pauVar25 = (undefined1 (*) [16])0x1;
                    pauVar10 = pauVar30;
                    pauVar23 = pauVar18;
                    func_0x037789bc(pauVar15,pauVar22);
                  }
                  if (unaff_x29 != (long *)0x0) {
                    lVar26 = *unaff_x29;
                    uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar34 != 0) {
                      piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                          puVar11 = (undefined8 *)(lVar26 + (long)(*piVar35 + 0x11) * 0x10 + 0x138);
                          goto LAB_0377a874;
                        }
                        uVar34 = uVar34 - 1;
                        piVar35 = piVar35 + 4;
                      } while (uVar34 != 0);
                    }
                    pauVar10 = (undefined1 (*) [16])0x11;
                    puVar11 = (undefined8 *)func_0x024d927c(unaff_x29);
LAB_0377a874:
                    plVar14 = (long *)(*(code *)*puVar11)(unaff_x29,puVar11[1]);
                    if (plVar14 != (long *)0x0) {
                      lVar26 = *plVar14;
                      uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                      if (uVar34 != 0) {
                        piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar35 + -2) == _DAT_059df010) {
                            puVar11 = (undefined8 *)(lVar26 + (long)*piVar35 * 0x10 + 0x138);
                            goto LAB_0377a8dc;
                          }
                          uVar34 = uVar34 - 1;
                          piVar35 = piVar35 + 4;
                        } while (uVar34 != 0);
                      }
                      puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df010,0);
LAB_0377a8dc:
                      uVar3 = (*(code *)*puVar11)(plVar14,puVar11[1]);
                      pauVar16 = (undefined1 (*) [16])(ulong)uVar3;
                      pauVar23 = pauVar8;
                      pauVar25 = pauVar18;
                      func_0x03783264(pauVar15,pauVar22,param_8);
                      func_0x03787050(pauVar15,pauVar18,pauVar22);
                      pauVar10 = pauVar18;
                      func_0x0378717c(pauVar15,pauVar22);
                      if (*(ulong *)pauVar15[10] != 0) {
                        pauVar10 = _DAT_059fb920;
                        pauStack_120 = pauVar8;
                        uVar2 = func_0x02a3cb7c(*(ulong *)pauVar15[10],&pauStack_120);
                        if (((uVar3 | uVar2 ^ 0xffffffff) & 1) == 0) {
                          if (*(ulong *)pauVar15[10] != 0) {
                            pauVar10 = (undefined1 (*) [16])&pauStack_120;
                            pauVar23 = _DAT_059fb930;
                            pauStack_190 = pauVar8;
                            func_0x02a3be14(*(ulong *)pauVar15[10],&pauStack_190);
                            pauVar37 = (undefined1 (*) [16])&DAT_059fb930;
                            unaff_x26 = param_8;
                            if (*(ulong *)pauVar15[10] != 0) {
                              uVar34 = (ulong)pauStack_120 & 0xffffffff;
                              pauStack_190 = pauVar8;
                              func_0x02a3be14(*(ulong *)pauVar15[10],&pauStack_190,&pauStack_120,
                                              _DAT_059fb930);
                              func_0x036df8d8(unaff_x27,pauVar22,uVar34,pauStack_120._4_4_,pauVar18,
                                              0);
                              goto LAB_0377a9e0;
                            }
                          }
                        }
                        else {
                          uVar2 = func_0x036df3c8(unaff_x27,0);
                          if (((uVar3 | uVar2 ^ 0xffffffff) & 1) == 0) {
                            func_0x036e0198(unaff_x27,pauVar22,pauVar18,0);
                          }
LAB_0377a9e0:
                          if (*(int *)((long)pauStack_308[1] + 8) != 2) {
                            if (*(int *)(_DAT_059e2700[0xe] + 4) == 0) {
                              func_0x0249fa64();
                            }
                            func_0x036d8170(pauVar22,pauVar15,pauVar8,pauStack_308,0);
                          }
                          uVar34 = func_0x03530c84(pauVar18,0);
                          *(ulong *)pauVar15[2] = uVar34;
                          pauVar16 = (undefined1 (*) [16])func_0x03530c84(pauVar18,0);
                          if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2c00);
                          }
                          pauVar25 = (undefined1 (*) [16])func_0x03530158(pauVar16,0);
                          param_7 = (long *)0x0;
                          pauVar13 = (undefined1 (*) [16])0x0;
                          uStack_340 = 0;
                          uStack_178 = 0;
                          uStack_180 = 0;
                          uStack_168 = 0;
                          uStack_170 = 0;
                          uStack_158 = 0;
                          uStack_160 = 0;
                          uStack_148 = 0;
                          uStack_150 = 0;
                          uStack_188 = 0;
                          pauStack_190 = (undefined1 (*) [16])0x0;
                          pauVar10 = pauVar30;
                          pauVar23 = pauVar8;
                          param_6 = unaff_x27;
                          func_0x034ba910(&pauStack_190,5);
                          lVar26 = _DAT_059c9978;
                          pauVar37 = param_8;
                          if (param_8 != (undefined1 (*) [16])0x0) {
                            func_0x054ed0d0(auStack_1e0,&pauStack_190,0x50);
                            pauVar10 = *(undefined1 (**) [16])*param_8;
                            uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                            if (uVar34 != 0) {
                              piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                              do {
                                if (*(long *)(piVar35 + -2) == lVar26) {
                                  pauVar16 = (undefined1 (*) [16])
                                             (pauVar10[(long)(*piVar35 + 2) + 0x13] + 8);
                                  goto LAB_0377ab14;
                                }
                                uVar34 = uVar34 - 1;
                                piVar35 = piVar35 + 4;
                              } while (uVar34 != 0);
                            }
                            pauVar16 = (undefined1 (*) [16])func_0x024d927c(param_8,lVar26,2);
LAB_0377ab14:
                            pauVar10 = *(undefined1 (**) [16])*pauVar16;
                            func_0x054ed0d0(&pauStack_120,auStack_1e0,0x50);
                            pauStack_320 = param_8;
                            (*(code *)pauVar10)(param_8,&pauStack_120,
                                                *(undefined1 (**) [16])((long)*pauVar16 + 8));
                            pauVar10 = (undefined1 (*) [16])0x1;
                            uVar34 = func_0x037856f0(pauVar15,pauVar22);
                            pauVar27 = pauStack_320;
                            if ((uVar34 & 1) == 0) goto LAB_0377ba68;
                            pauVar30 = *(undefined1 (**) [16])*pauVar22;
                            uVar34 = (ulong)*(ushort *)(pauVar30[0x12] + 0xe);
                            if (uVar34 != 0) {
                              piVar35 = (int *)(*(long *)pauVar30[0xb] + 8);
                              do {
                                if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                  puVar11 = (undefined8 *)
                                            (pauVar30[(long)(*piVar35 + 5) + 0x13] + 8);
                                  goto LAB_0377abb0;
                                }
                                uVar34 = uVar34 - 1;
                                piVar35 = piVar35 + 4;
                              } while (uVar34 != 0);
                            }
                            pauVar10 = (undefined1 (*) [16])0x5;
                            puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377abb0:
                            pauVar28 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar22,puVar11[1])
                            ;
                            pauVar37 = pauVar27;
                            unaff_x26 = param_8;
                            pauVar30 = (undefined1 (*) [16])&DAT_059c9978;
                            if (pauVar28 != (undefined1 (*) [16])0x0) {
                              pauVar16 = *(undefined1 (**) [16])*pauVar28;
                              uVar34 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                              if (uVar34 != 0) {
                                piVar35 = (int *)(*(long *)pauVar16[0xb] + 8);
                                do {
                                  if (*(long *)(piVar35 + -2) == _DAT_059dfe60) {
                                    puVar11 = (undefined8 *)
                                              (pauVar16[(long)(*piVar35 + 0x1b) + 0x13] + 8);
                                    goto LAB_0377ac1c;
                                  }
                                  uVar34 = uVar34 - 1;
                                  piVar35 = piVar35 + 4;
                                } while (uVar34 != 0);
                              }
                              pauVar10 = (undefined1 (*) [16])0x1b;
                              puVar11 = (undefined8 *)func_0x024d927c(pauVar28);
LAB_0377ac1c:
                              pauVar29 = (undefined1 (*) [16])
                                         (*(code *)*puVar11)(pauVar28,puVar11[1]);
                              pauVar16 = pauVar28;
                              if (pauVar29 != (undefined1 (*) [16])0x0) {
                                pauVar10 = *(undefined1 (**) [16])*pauVar29;
                                uVar38 = *(ulong *)pauVar15[3];
                                uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                if (uVar34 != 0) {
                                  piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                  do {
                                    if (*(long *)(piVar35 + -2) == _DAT_059cd840) {
                                      puVar11 = (undefined8 *)(pauVar10[(long)*piVar35 + 0x13] + 8);
                                      goto LAB_0377ac88;
                                    }
                                    uVar34 = uVar34 - 1;
                                    piVar35 = piVar35 + 4;
                                  } while (uVar34 != 0);
                                }
                                puVar11 = (undefined8 *)func_0x024d927c(pauVar29,_DAT_059cd840,0);
LAB_0377ac88:
                                pauVar28 = (undefined1 (*) [16])puVar11[1];
                                uVar3 = (*(code *)*puVar11)(pauVar29,uVar38);
                                unaff_x26 = (undefined1 (*) [16])(ulong)uVar3;
                                if ((uVar3 & 1) == 0) {
                                  uStack_130 = func_0x0376eb00(pauVar15);
                                  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                                    func_0x0249fa64(_DAT_059db250);
                                  }
                                  uVar2 = func_0x0376edd4(&uStack_130);
                                  if ((int)pauVar7 == 0 && (uVar2 & 1) == 0) {
                                    pauVar7 = *(undefined1 (**) [16])*pauVar22;
                                    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                          puVar11 = (undefined8 *)
                                                    (pauVar7[(long)(*piVar35 + 5) + 0x13] + 8);
                                          goto LAB_0377ad30;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)
                                              func_0x024d927c(pauVar22,_DAT_059df8e8,5);
LAB_0377ad30:
                                    uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
                                    pauVar29 = (undefined1 (*) [16])
                                               func_0x036d3908(pauStack_310,uVar12,0);
                                    pauVar7 = *(undefined1 (**) [16])*pauVar22;
                                    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                          puVar11 = (undefined8 *)
                                                    (pauVar7[(long)(*piVar35 + 5) + 0x13] + 8);
                                          goto LAB_0377adb8;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)
                                              func_0x024d927c(pauVar22,_DAT_059df8e8,5);
LAB_0377adb8:
                                    uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
                                    pauVar10 = (undefined1 (*) [16])0x0;
                                    pauVar28 = (undefined1 (*) [16])
                                               func_0x036d3908(pauStack_308,uVar12);
                                    pauVar16 = pauVar29;
                                    pauVar7 = pauVar27;
                                    pauVar37 = unaff_x26;
                                    if (plStack_330 == (long *)0x0) goto LAB_0377bb44;
                                    lVar26 = *plStack_330;
                                    uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059e03c0) {
                                          puVar11 = (undefined8 *)
                                                    (lVar26 + (long)*piVar35 * 0x10 + 0x138);
                                          goto LAB_0377ae38;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)
                                              func_0x024d927c(plStack_330,_DAT_059e03c0,0);
LAB_0377ae38:
                                    pauVar25 = (undefined1 (*) [16])puVar11[1];
                                    pauVar23 = pauVar18;
                                    plVar14 = (long *)(*(code *)*puVar11)(plStack_330,pauVar29);
                                    if (plVar14 != (long *)0x0) {
                                      plStack_330 = (long *)CONCAT44(plStack_330._4_4_,uVar3);
                                      uVar12 = func_0x03530c84(pauVar18,0);
                                      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                        func_0x0249fa64(_DAT_059e2c00);
                                      }
                                      uVar12 = func_0x03530158(uVar12,0);
                                      func_0x03780064(&pauStack_190,pauVar15,pauVar22,plVar14,
                                                      pauVar8,uVar12,0,pauVar22,2);
                                      lVar26 = _DAT_059c9978;
                                      func_0x054ed0d0(auStack_230,&pauStack_190,0x50);
                                      pauVar7 = *(undefined1 (**) [16])*pauVar27;
                                      uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                                      if (uVar34 != 0) {
                                        piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
                                        do {
                                          if (*(long *)(piVar35 + -2) == lVar26) {
                                            puVar11 = (undefined8 *)
                                                      (pauVar7[(long)(*piVar35 + 2) + 0x13] + 8);
                                            goto LAB_0377af34;
                                          }
                                          uVar34 = uVar34 - 1;
                                          piVar35 = piVar35 + 4;
                                        } while (uVar34 != 0);
                                      }
                                      puVar11 = (undefined8 *)func_0x024d927c(pauVar27,lVar26,2);
LAB_0377af34:
                                      pcVar39 = (code *)*puVar11;
                                      func_0x054ed0d0(&pauStack_120,auStack_230,0x50);
                                      (*pcVar39)(pauVar27,&pauStack_120,puVar11[1]);
                                      lVar26 = *plVar14;
                                      uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                                      if (uVar34 != 0) {
                                        piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                                            puVar11 = (undefined8 *)
                                                      (lVar26 + (long)(*piVar35 + 0x1a) * 0x10 +
                                                      0x138);
                                            goto LAB_0377afb4;
                                          }
                                          uVar34 = uVar34 - 1;
                                          piVar35 = piVar35 + 4;
                                        } while (uVar34 != 0);
                                      }
                                      puVar11 = (undefined8 *)
                                                func_0x024d927c(plVar14,_DAT_059dfbc0,0x1a);
LAB_0377afb4:
                                      pauVar7 = (undefined1 (*) [16])
                                                (*(code *)*puVar11)(plVar14,puVar11[1]);
                                      pauVar10 = *(undefined1 (**) [16])*pauVar22;
                                      uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                      if (uVar34 != 0) {
                                        piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                        do {
                                          if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                            puVar11 = (undefined8 *)
                                                      (pauVar10[(long)(*piVar35 + 5) + 0x13] + 8);
                                            goto LAB_0377b01c;
                                          }
                                          uVar34 = uVar34 - 1;
                                          piVar35 = piVar35 + 4;
                                        } while (uVar34 != 0);
                                      }
                                      puVar11 = (undefined8 *)
                                                func_0x024d927c(pauVar22,_DAT_059df8e8,5);
LAB_0377b01c:
                                      uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
                                      pauVar29 = (undefined1 (*) [16])
                                                 func_0x036d62d4(pauStack_310,uVar12,0);
                                      plStack_118 = (long *)0x0;
                                      pauStack_120 = (undefined1 (*) [16])0x0;
                                      func_0x0288eb6c(&pauStack_120,pauVar22,_DAT_05a29b18);
                                      uVar12 = func_0x0249fb80(_DAT_059d8b40);
                                      pauVar25 = (undefined1 (*) [16])0x0;
                                      pauVar13 = (undefined1 (*) [16])0x0;
                                      param_6 = pauStack_120;
                                      param_7 = plStack_118;
                                      func_0x038653bc(uVar12,pauVar7,_DAT_05ab2e18,pauVar29);
                                      pauVar10 = *(undefined1 (**) [16])*pauVar22;
                                      uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                      if (uVar34 != 0) {
                                        piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                        do {
                                          if (*(long *)(piVar35 + -2) == _DAT_059e0220) {
                                            puVar11 = (undefined8 *)
                                                      (pauVar10[(long)(*piVar35 + 0x65) + 0x13] + 8)
                                            ;
                                            goto LAB_0377b0f0;
                                          }
                                          uVar34 = uVar34 - 1;
                                          piVar35 = piVar35 + 4;
                                        } while (uVar34 != 0);
                                      }
                                      puVar11 = (undefined8 *)
                                                func_0x024d927c(pauVar22,_DAT_059e0220,0x65);
LAB_0377b0f0:
                                      pauVar23 = (undefined1 (*) [16])puVar11[1];
                                      pauVar28 = (undefined1 (*) [16])0x0;
                                      (*(code *)*puVar11)(pauVar22,uVar12);
                                      unaff_x26 = (undefined1 (*) [16])
                                                  ((ulong)plStack_330 & 0xffffffff);
                                    }
                                  }
                                }
                                uStack_130 = func_0x0376eb00(pauVar15);
                                if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059db250);
                                }
                                uVar3 = func_0x0376edd4(&uStack_130);
                                pauVar10 = unaff_x26;
                                if ((uVar3 & 1) == 0) {
                                  pauVar10 = pauVar28;
                                  pauVar16 = pauVar29;
                                  pauVar37 = pauVar27;
                                  if (pauStack_328 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
                                  pauVar10 = *(undefined1 (**) [16])*pauStack_328;
                                  pauVar29 = (undefined1 (*) [16])(ulong)(uVar3 ^ 1);
                                  uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                  if (uVar34 != 0) {
                                    piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                    do {
                                      if (*(long *)(piVar35 + -2) == _DAT_059df040) {
                                        puVar11 = (undefined8 *)
                                                  (pauVar10[(long)*piVar35 + 0x13] + 8);
                                        goto LAB_0377b1a0;
                                      }
                                      uVar34 = uVar34 - 1;
                                      piVar35 = piVar35 + 4;
                                    } while (uVar34 != 0);
                                  }
                                  puVar11 = (undefined8 *)
                                            func_0x024d927c(pauStack_328,_DAT_059df040,0);
LAB_0377b1a0:
                                  pauVar23 = (undefined1 (*) [16])puVar11[1];
                                  uVar3 = (uint)unaff_x26 & (uVar3 ^ 1);
                                  unaff_x26 = (undefined1 (*) [16])(ulong)uVar3;
                                  pauVar28 = pauVar18;
                                  lVar26 = (*(code *)*puVar11)(pauStack_328,unaff_x29);
                                  pauVar10 = unaff_x26;
                                  if (lVar26 != 0) {
                                    pauStack_328 = (undefined1 (*) [16])
                                                   CONCAT44(pauStack_328._4_4_,(uint)(lVar26 != 0));
                                    uVar12 = func_0x03530c84(pauVar18,0);
                                    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                      func_0x0249fa64(_DAT_059e2c00);
                                    }
                                    uVar12 = func_0x03530158(uVar12,0);
                                    func_0x03780064(&pauStack_190,pauVar15,pauVar22,unaff_x29,
                                                    pauVar8,uVar12,1,pauVar22,2);
                                    lVar26 = _DAT_059c9978;
                                    func_0x054ed0d0(auStack_280,&pauStack_190,0x50);
                                    pauVar7 = *(undefined1 (**) [16])*pauVar27;
                                    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == lVar26) {
                                          puVar11 = (undefined8 *)
                                                    (pauVar7[(long)(*piVar35 + 2) + 0x13] + 8);
                                          goto LAB_0377b2a8;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)func_0x024d927c(pauVar27,lVar26,2);
LAB_0377b2a8:
                                    pcVar39 = (code *)*puVar11;
                                    func_0x054ed0d0(&pauStack_120,auStack_280,0x50);
                                    (*pcVar39)(pauVar27,&pauStack_120,puVar11[1]);
                                    lVar26 = *unaff_x29;
                                    uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                                          puVar11 = (undefined8 *)
                                                    (lVar26 + (long)(*piVar35 + 0x1a) * 0x10 + 0x138
                                                    );
                                          goto LAB_0377b328;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)
                                              func_0x024d927c(unaff_x29,_DAT_059dfbc0,0x1a);
LAB_0377b328:
                                    pauVar29 = (undefined1 (*) [16])
                                               (*(code *)*puVar11)(unaff_x29,puVar11[1]);
                                    pauVar7 = *(undefined1 (**) [16])*pauVar22;
                                    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                          puVar11 = (undefined8 *)
                                                    (pauVar7[(long)(*piVar35 + 5) + 0x13] + 8);
                                          goto LAB_0377b398;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)
                                              func_0x024d927c(pauVar22,_DAT_059df8e8,5);
LAB_0377b398:
                                    pauStack_328 = (undefined1 (*) [16])
                                                   CONCAT44(pauStack_328._4_4_,
                                                            uVar3 & (uint)pauStack_328);
                                    uVar12 = (*(code *)*puVar11)(pauVar22,puVar11[1]);
                                    uVar12 = func_0x036d62d4(pauStack_310,uVar12,0);
                                    plStack_118 = (long *)0x0;
                                    pauStack_120 = (undefined1 (*) [16])0x0;
                                    func_0x0288eb6c(&pauStack_120,pauVar22,_DAT_05a29b18);
                                    unaff_x26 = (undefined1 (*) [16])func_0x0249fb80(_DAT_059d8b40);
                                    pauVar25 = (undefined1 (*) [16])0x1;
                                    pauVar13 = (undefined1 (*) [16])0x0;
                                    param_6 = pauStack_120;
                                    param_7 = plStack_118;
                                    func_0x038653bc(unaff_x26,pauVar29,_DAT_05ab2e18,uVar12);
                                    pauVar7 = *(undefined1 (**) [16])*pauVar22;
                                    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059e0220) {
                                          puVar11 = (undefined8 *)
                                                    (pauVar7[(long)(*piVar35 + 0x65) + 0x13] + 8);
                                          goto LAB_0377b480;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    puVar11 = (undefined8 *)
                                              func_0x024d927c(pauVar22,_DAT_059e0220,0x65);
LAB_0377b480:
                                    pauVar23 = (undefined1 (*) [16])puVar11[1];
                                    pauVar28 = (undefined1 (*) [16])0x0;
                                    (*(code *)*puVar11)(pauVar22,unaff_x26);
                                    pauVar7 = (undefined1 (*) [16])&DAT_059c9978;
                                    pauVar27 = pauVar8;
                                    pauVar10 = pauStack_328;
                                  }
                                }
                                if (((ulong)pauVar10 & 1) != 0) goto LAB_0377ba68;
                                pauVar10 = *(undefined1 (**) [16])*pauVar22;
                                uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                if (uVar34 != 0) {
                                  piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                  do {
                                    if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                      puVar11 = (undefined8 *)
                                                (pauVar10[(long)(*piVar35 + 5) + 0x13] + 8);
                                      goto LAB_0377b4f4;
                                    }
                                    uVar34 = uVar34 - 1;
                                    piVar35 = piVar35 + 4;
                                  } while (uVar34 != 0);
                                }
                                pauVar28 = (undefined1 (*) [16])0x5;
                                puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377b4f4:
                                pauVar17 = (undefined1 (*) [16])
                                           (*(code *)*puVar11)(pauVar22,puVar11[1]);
                                pauVar10 = pauVar28;
                                pauVar16 = pauVar29;
                                pauVar37 = pauVar27;
                                if (pauVar17 != (undefined1 (*) [16])0x0) {
                                  pauVar10 = *(undefined1 (**) [16])*pauVar17;
                                  uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                  if (uVar34 != 0) {
                                    piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                    do {
                                      if (*(long *)(piVar35 + -2) == _DAT_059dfe60) {
                                        puVar11 = (undefined8 *)
                                                  (pauVar10[(long)(*piVar35 + 2) + 0x13] + 8);
                                        goto LAB_0377b560;
                                      }
                                      uVar34 = uVar34 - 1;
                                      piVar35 = piVar35 + 4;
                                    } while (uVar34 != 0);
                                  }
                                  pauVar28 = (undefined1 (*) [16])0x2;
                                  puVar11 = (undefined8 *)func_0x024d927c(pauVar17);
LAB_0377b560:
                                  lVar26 = (*(code *)*puVar11)(pauVar17,puVar11[1]);
                                  pauVar10 = pauVar28;
                                  pauVar16 = pauVar17;
                                  pauVar37 = (undefined1 (*) [16])&DAT_059c9978;
                                  if (lVar26 != 0) {
                                    pauVar10 = *(undefined1 (**) [16])*pauVar22;
                                    uVar3 = *(uint *)(lVar26 + 0x118);
                                    pauVar30 = (undefined1 (*) [16])(ulong)uVar3;
                                    uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                    if (uVar34 != 0) {
                                      piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
                                          puVar11 = (undefined8 *)
                                                    (pauVar10[(long)(*piVar35 + 5) + 0x13] + 8);
                                          goto LAB_0377b5d0;
                                        }
                                        uVar34 = uVar34 - 1;
                                        piVar35 = piVar35 + 4;
                                      } while (uVar34 != 0);
                                    }
                                    pauVar28 = (undefined1 (*) [16])0x5;
                                    puVar11 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377b5d0:
                                    plVar14 = (long *)(*(code *)*puVar11)(pauVar22,puVar11[1]);
                                    pauVar10 = pauVar28;
                                    if (plVar14 != (long *)0x0) {
                                      lVar26 = *plVar14;
                                      uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                                      if (uVar34 != 0) {
                                        piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar35 + -2) == _DAT_059dfe60) {
                                            puVar11 = (undefined8 *)
                                                      (lVar26 + (long)(*piVar35 + 0x2c) * 0x10 +
                                                      0x138);
                                            goto LAB_0377b63c;
                                          }
                                          uVar34 = uVar34 - 1;
                                          piVar35 = piVar35 + 4;
                                        } while (uVar34 != 0);
                                      }
                                      pauVar28 = (undefined1 (*) [16])0x2c;
                                      puVar11 = (undefined8 *)func_0x024d927c(plVar14);
LAB_0377b63c:
                                      pauVar16 = (undefined1 (*) [16])
                                                 (*(code *)*puVar11)(plVar14,puVar11[1]);
                                      pauVar27 = (undefined1 (*) [16])func_0x0352bc50(0);
                                      pauVar10 = pauVar28;
                                      if (pauVar16 != (undefined1 (*) [16])0x0) {
                                        pauVar10 = *(undefined1 (**) [16])*pauVar16;
                                        uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                                        if (uVar34 != 0) {
                                          piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                                          do {
                                            if (*(long *)(piVar35 + -2) == _DAT_059cd9b8) {
                                              puVar11 = (undefined8 *)
                                                        (pauVar10[(long)(*piVar35 + 1) + 0x13] + 8);
                                              goto LAB_0377b6b4;
                                            }
                                            uVar34 = uVar34 - 1;
                                            piVar35 = piVar35 + 4;
                                          } while (uVar34 != 0);
                                        }
                                        puVar11 = (undefined8 *)
                                                  func_0x024d927c(pauVar16,_DAT_059cd9b8,1);
LAB_0377b6b4:
                                        pauVar23 = (undefined1 (*) [16])puVar11[1];
                                        pauVar10 = (undefined1 (*) [16])&lStack_138;
                                        uVar34 = (*(code *)*puVar11)(pauVar16,pauVar27);
                                        unaff_x26 = pauVar27;
                                        if ((uVar34 & 1) != 0) {
                                          if (lStack_138 == 0) goto LAB_0377bb44;
                                          pauVar10 = (undefined1 (*) [16])&uStack_13c;
                                          pauVar23 = (undefined1 (*) [16])0x0;
                                          uVar34 = func_0x0352bd04(lStack_138,pauVar22);
                                          uVar2 = uStack_13c;
                                          if ((uVar34 & 1) == 0) {
                                            uVar2 = uVar3;
                                          }
                                          pauVar30 = (undefined1 (*) [16])(ulong)uVar2;
                                        }
                                        lVar26 = *unaff_x29;
                                        uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                                        if (uVar34 != 0) {
                                          piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                                              puVar11 = (undefined8 *)
                                                        (lVar26 + (long)(*piVar35 + 0x1e) * 0x10 +
                                                        0x138);
                                              goto LAB_0377b748;
                                            }
                                            uVar34 = uVar34 - 1;
                                            piVar35 = piVar35 + 4;
                                          } while (uVar34 != 0);
                                        }
                                        pauVar10 = (undefined1 (*) [16])0x1e;
                                        puVar11 = (undefined8 *)func_0x024d927c(unaff_x29);
LAB_0377b748:
                                        iVar4 = (*(code *)*puVar11)(unaff_x29,puVar11[1]);
                                        if (iVar4 <= (int)pauVar30) {
LAB_0377ba68:
                                          pauVar18 = pauStack_310;
                                          lVar26 = func_0x036d5ffc(pauStack_310,0);
                                          if (lVar26 != 0) {
                                            uVar34 = *(ulong *)pauVar15[3];
                                            uVar6 = func_0x036d392c(pauVar18,0);
                                            func_0x0374def0(lVar26,pauVar22,uVar34,uVar6,0);
                                          }
                                          lVar26 = func_0x036d5ffc(pauStack_308,0);
                                          if (lVar26 != 0) {
                                            uVar34 = *(ulong *)pauVar15[3];
                                            uVar6 = func_0x036d392c(pauStack_308,0);
                                            func_0x0374def0(lVar26,pauVar22,uVar34,uVar6,0);
                                          }
                                          uVar34 = *(ulong *)((long)pauVar15[4] + 8);
                                          if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                                            func_0x0249fa64();
                                          }
                                          uVar34 = func_0x045a9a8c(uVar34 + 1,uVar34,0);
                                          *(ulong *)((long)pauVar15[4] + 8) = uVar34;
                                          uVar34 = func_0x037858d4(pauVar15,pauVar22,unaff_x27);
                                          return uVar34;
                                        }
                                        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                                          func_0x0249fa64();
                                        }
                                        uVar34 = func_0x036c12a4(unaff_x29,0);
                                        if ((uVar34 & 1) != 0) goto LAB_0377ba68;
                                        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                                          func_0x0249fa64();
                                        }
                                        uVar34 = func_0x036c13b8(unaff_x29,0);
                                        if ((uVar34 & 1) != 0) goto LAB_0377ba68;
                                        if (plStack_318 != (long *)0x0) {
                                          lVar26 = *plStack_318;
                                          uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                                          if (uVar34 != 0) {
                                            piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar35 + -2) == _DAT_059dfe38) {
                                                puVar11 = (undefined8 *)
                                                          (lVar26 + (long)(*piVar35 + 1) * 0x10 +
                                                          0x138);
                                                goto LAB_0377b810;
                                              }
                                              uVar34 = uVar34 - 1;
                                              piVar35 = piVar35 + 4;
                                            } while (uVar34 != 0);
                                          }
                                          puVar11 = (undefined8 *)
                                                    func_0x024d927c(plStack_318,_DAT_059dfe38,1);
LAB_0377b810:
                                          lVar26 = (*(code *)*puVar11)(plStack_318,puVar11[1]);
                                          if (lVar26 == 0) goto LAB_0377ba68;
                                          uVar12 = func_0x022bffa8(1,_DAT_059dfe38,plStack_318);
                                          pauStack_290 = (undefined1 (*) [16])0x0;
                                          uStack_288 = 0;
                                          func_0x0371f100(&pauStack_290,pauStack_310,pauVar15,0);
                                          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                                            func_0x0249fa64();
                                          }
                                          uStack_188 = uStack_288;
                                          pauStack_190 = pauStack_290;
                                          func_0x0288f218(&pauStack_190,&pauStack_120,_DAT_05a29e48)
                                          ;
                                          pauVar23 = (undefined1 (*) [16])0x0;
                                          pauVar25 = (undefined1 (*) [16])0x0;
                                          plStack_2a8 = plStack_118;
                                          pauStack_2b0 = pauStack_120;
                                          uStack_2a0 = uStack_110;
                                          pauVar16 = (undefined1 (*) [16])
                                                     func_0x0371f1bc(uVar12,pauVar22,&pauStack_2b0);
                                          if (pauVar16 == (undefined1 (*) [16])0x0)
                                          goto LAB_0377ba68;
                                          pauVar10 = pauVar22;
                                          pauVar27 = (undefined1 (*) [16])
                                                     func_0x022bffa8(5,_DAT_059df8e8);
                                          if ((pauVar27 != (undefined1 (*) [16])0x0) &&
                                             (lVar26 = func_0x022bffa8(2,_DAT_059dfe60),
                                             pauVar10 = pauVar27, lVar26 != 0)) {
                                            if (*(char *)(lVar26 + 0x12d) != '\0') {
                                              if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                                                func_0x0249fa64();
                                              }
                                              uVar34 = func_0x036c12a4(pauVar16,0);
                                              if ((uVar34 & 1) != 0) goto LAB_0377ba68;
                                            }
                                            uVar12 = func_0x03530c84(pauVar18,0);
                                            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                              func_0x0249fa64(_DAT_059e2c00);
                                            }
                                            uVar12 = func_0x03530158(uVar12,0);
                                            func_0x03780064(&pauStack_120,pauVar15,pauVar22,pauVar16
                                                            ,pauVar8,uVar12,0,pauVar22,2);
                                            lVar26 = _DAT_059c9978;
                                            func_0x054ed0d0(auStack_300,&pauStack_120,0x50);
                                            func_0x0240cde0(2,lVar26,pauStack_320,auStack_300);
                                            uVar12 = func_0x022bffa8(0x1a,_DAT_059dfbc0,pauVar16);
                                            uVar19 = func_0x022bffa8(5,_DAT_059df8e8,pauVar22);
                                            uVar19 = func_0x036d62d4(pauStack_310,uVar19,0);
                                            pauStack_190 = (undefined1 (*) [16])0x0;
                                            uStack_188 = 0;
                                            func_0x0288eb6c(&pauStack_190,pauVar22,_DAT_05a29b18);
                                            uVar36 = func_0x0249fb80(_DAT_059d8b40);
                                            func_0x038653bc(uVar36,uVar12,_DAT_05ab2e18,uVar19,0,
                                                            pauStack_190,uStack_188,0);
                                            func_0x02403244(0x65,_DAT_059e0220,pauVar22,uVar36,0);
                                            goto LAB_0377ba68;
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
              else {
                pauVar16 = pauVar28;
                if (plVar14 != (long *)0x0) {
                  lVar26 = *plVar14;
                  uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar34 != 0) {
                    piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                        puVar11 = (undefined8 *)(lVar26 + (long)(*piVar35 + 0x12) * 0x10 + 0x138);
                        goto LAB_0377a464;
                      }
                      uVar34 = uVar34 - 1;
                      piVar35 = piVar35 + 4;
                    } while (uVar34 != 0);
                  }
                  pauVar10 = (undefined1 (*) [16])0x12;
                  puVar11 = (undefined8 *)func_0x024d927c(plVar14);
LAB_0377a464:
                  pauVar28 = (undefined1 (*) [16])(*(code *)*puVar11)(plVar14,puVar11[1]);
                  if (pauVar28 != (undefined1 (*) [16])0x0) {
                    pauVar16 = *(undefined1 (**) [16])*pauVar28;
                    uVar34 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                    if (uVar34 != 0) {
                      piVar35 = (int *)(*(long *)pauVar16[0xb] + 8);
                      do {
                        if (*(long *)(piVar35 + -2) == _DAT_059df2a8) {
                          puVar11 = (undefined8 *)(pauVar16[(long)*piVar35 + 0x13] + 8);
                          goto LAB_0377a4c4;
                        }
                        uVar34 = uVar34 - 1;
                        piVar35 = piVar35 + 4;
                      } while (uVar34 != 0);
                    }
                    pauVar10 = (undefined1 (*) [16])0x0;
                    puVar11 = (undefined8 *)func_0x024d927c(pauVar28);
LAB_0377a4c4:
                    uVar34 = (*(code *)*puVar11)(pauVar28,puVar11[1]);
                    if ((uVar34 & 1) == 0) goto LAB_0377a51c;
                    lVar26 = *plVar14;
                    uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar34 != 0) {
                      piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
                          puVar11 = (undefined8 *)(lVar26 + (long)(*piVar35 + 0x12) * 0x10 + 0x138);
                          goto LAB_0377a650;
                        }
                        uVar34 = uVar34 - 1;
                        piVar35 = piVar35 + 4;
                      } while (uVar34 != 0);
                    }
                    pauVar10 = (undefined1 (*) [16])0x12;
                    puVar11 = (undefined8 *)func_0x024d927c(plVar14);
LAB_0377a650:
                    pauVar27 = (undefined1 (*) [16])(*(code *)*puVar11)(plVar14,puVar11[1]);
                    pauVar29 = pauStack_310;
                    pauVar16 = pauVar28;
                    if (pauVar27 != (undefined1 (*) [16])0x0) {
                      pauVar16 = *(undefined1 (**) [16])*pauVar27;
                      uVar34 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                      if (uVar34 != 0) {
                        piVar35 = (int *)(*(long *)pauVar16[0xb] + 8);
                        do {
                          if (*(long *)(piVar35 + -2) == _DAT_059df2a8) {
                            puVar11 = (undefined8 *)(pauVar16[(long)(*piVar35 + 1) + 0x13] + 8);
                            goto LAB_0377a6b8;
                          }
                          uVar34 = uVar34 - 1;
                          piVar35 = piVar35 + 4;
                        } while (uVar34 != 0);
                      }
                      pauVar10 = (undefined1 (*) [16])0x1;
                      puVar11 = (undefined8 *)func_0x024d927c(pauVar27);
LAB_0377a6b8:
                      pauVar28 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar27,puVar11[1]);
                      pauVar16 = pauVar27;
                      unaff_x26 = pauVar29;
                      if (pauVar28 != (undefined1 (*) [16])0x0) {
                        pauVar10 = *(undefined1 (**) [16])*pauVar28;
                        uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
                        if (uVar34 != 0) {
                          piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
                          do {
                            if (*(long *)(piVar35 + -2) == _DAT_059df2c0) {
                              puVar11 = (undefined8 *)(pauVar10[(long)(*piVar35 + 2) + 0x13] + 8);
                              goto LAB_0377a724;
                            }
                            uVar34 = uVar34 - 1;
                            piVar35 = piVar35 + 4;
                          } while (uVar34 != 0);
                        }
                        puVar11 = (undefined8 *)func_0x024d927c(pauVar28,_DAT_059df2c0,2);
LAB_0377a724:
                        pauVar13 = (undefined1 (*) [16])puVar11[1];
                        param_7 = (long *)acStack_124;
                        pauVar10 = pauVar29;
                        pauVar23 = pauStack_308;
                        pauVar25 = pauVar22;
                        param_6 = pauVar18;
                        unaff_x27 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar28,unaff_x27);
                        if ((unaff_x27 != (undefined1 (*) [16])0x0) &&
                           (*(undefined1 (**) [16])*unaff_x27 != _DAT_059e2700)) goto LAB_0377bb48;
                        pauVar7 = (undefined1 (*) [16])0x1;
                        goto LAB_0377a76c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0377bb44;
    }
    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar34 = func_0x036c0cb8(plVar14,0);
    pauVar28 = pauVar27;
    if ((uVar34 & 1) == 0) {
      pauVar28 = (undefined1 (*) [16])0x0;
    }
    pauVar16 = pauVar28;
    if ((uVar34 & 1) == 0) goto LAB_0377a220;
    if (plVar14 == (long *)0x0) goto LAB_0377bb44;
    lVar26 = *plVar14;
    uVar34 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
          puVar11 = (undefined8 *)(lVar26 + (long)(*piVar35 + 2) * 0x10 + 0x138);
          goto LAB_0377a534;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar10 = (undefined1 (*) [16])0x2;
    puVar11 = (undefined8 *)func_0x024d927c(plVar14);
LAB_0377a534:
    pauVar27 = (undefined1 (*) [16])(*(code *)*puVar11)(plVar14,puVar11[1]);
    if (pauVar27 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar29 = *(undefined1 (**) [16])*pauVar27;
    uVar34 = (ulong)*(ushort *)(pauVar29[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar29[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059dfe38) {
          puVar11 = (undefined8 *)(pauVar29[(long)*piVar35 + 0x13] + 8);
          goto LAB_0377a59c;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar10 = (undefined1 (*) [16])0x0;
    puVar11 = (undefined8 *)func_0x024d927c(pauVar27);
LAB_0377a59c:
    pauVar29 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar27,puVar11[1]);
    unaff_x26 = pauVar27;
    if (pauVar29 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar10 = *(undefined1 (**) [16])*pauVar29;
    uVar34 = (ulong)*(ushort *)(pauVar10[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar10[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059dfe68) {
          puVar11 = (undefined8 *)(pauVar10[(long)(*piVar35 + 1) + 0x13] + 8);
          goto LAB_0377a600;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(pauVar29,_DAT_059dfe68,1);
LAB_0377a600:
    param_7 = (long *)puVar11[1];
    pauVar10 = pauVar15;
    pauVar23 = pauStack_308;
    pauVar25 = pauStack_310;
    param_6 = pauVar18;
    unaff_x27 = (undefined1 (*) [16])(*(code *)*puVar11)(pauVar29,pauVar22);
    pauVar27 = pauVar28;
    if ((unaff_x27 == (undefined1 (*) [16])0x0) ||
       (*(undefined1 (**) [16])*unaff_x27 == _DAT_059e2700)) goto LAB_0377a324;
  }
LAB_0377bb48:
  auVar41 = func_0x0249ff10(unaff_x27);
  plVar21 = auVar41._8_8_;
  lVar26 = auVar41._0_8_;
  uStack_398 = 0x377bb50;
  plStack_3a0 = plVar14;
  pauStack_390 = pauVar30;
  pauStack_388 = unaff_x27;
  pauStack_380 = pauVar29;
  pauStack_378 = param_8;
  pauStack_370 = pauVar18;
  pauStack_368 = pauVar7;
  pauStack_360 = pauVar8;
  pauStack_358 = pauVar28;
  pauStack_350 = pauVar15;
  pauStack_348 = pauVar22;
  if ((bRam0000000005e2df8d & 1) == 0) {
    func_0x0249f8e4(&DAT_059dac08);
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_05a41860);
    func_0x0249f8e4(&DAT_05a43a40);
    func_0x0249f8e4(&DAT_059dd500);
    func_0x0249f8e4(&DAT_059dda40);
    func_0x0249f8e4(&DAT_05a48500);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df1d0);
    func_0x0249f8e4(&DAT_059df1f0);
    func_0x0249f8e4(&DAT_059c98a0);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e0210);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e1488);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_05a192a8);
    func_0x0249f8e4(&DAT_05a15790);
    func_0x0249f8e4(&DAT_05a192a0);
    func_0x0249f8e4(&DAT_059d0510);
    func_0x0249f8e4(&DAT_059cf978);
    func_0x0249f8e4(&DAT_059e2700);
    func_0x0249f8e4(&DAT_05a29190);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    func_0x0249f8e4(&DAT_059d3bc0);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2df8d = 1;
  }
  uStack_404 = 0;
  uStack_410 = 0;
  pauStack_420 = (undefined1 (*) [16])0x0;
  pauStack_428 = (undefined1 (*) [16])0x0;
  pauStack_418 = (undefined1 (*) [16])0x0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  pauStack_448 = (undefined1 (*) [16])0x0;
  pauStack_450 = (undefined1 (*) [16])0x0;
  uStack_438 = 0;
  pauStack_440 = (undefined1 (*) [16])0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  pauStack_4a8 = (undefined1 (*) [16])0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  *(undefined1 (**) [16])*pauVar13 = (undefined1 (*) [16])0x0;
  *(undefined1 (**) [16])((long)*pauVar13 + 8) = (undefined1 (*) [16])0x0;
  pauVar18 = (undefined1 (*) [16])func_0x0376e450(lVar26,pauVar10);
  if (pauVar18 == (undefined1 (*) [16])0x0) {
    return 0;
  }
  pauVar22 = (undefined1 (*) [16])0x0;
  uVar34 = func_0x036ee320(pauVar18,plVar21,0);
  if ((uVar34 & 1) == 0) {
    return uVar34;
  }
  pauVar8 = (undefined1 (*) [16])0x5e2d000;
  if (plVar21 == (long *)0x0) goto LAB_0377d6d0;
  lVar31 = *plVar21;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
        puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
        goto LAB_0377bdfc;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377bdfc:
  uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  uVar12 = func_0x036d3908(pauVar18,uVar12,0);
  if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e1498);
  }
  uVar34 = func_0x036c700c(uVar12,pauVar18,plVar21,0);
  if ((uVar34 & 1) == 0) {
    lVar31 = *plVar21;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_0377bea8;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377bea8:
    uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    uVar34 = func_0x036ed7f4(pauVar18,uVar12,0);
    if ((uVar34 & 1) == 0) {
      return uVar34;
    }
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  auVar42 = func_0x0364aa28(plVar21,lVar26,pauVar18,0);
  ppauVar33 = (undefined1 (**) [16])((long)*pauVar13 + 8);
  *pauVar13 = auVar42;
  func_0x0249f888(ppauVar33,0);
  pauStack_748 = *ppauVar33;
  if (pauStack_748 == (undefined1 (*) [16])0x0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)((long)pauStack_748[1] + 0xc);
  }
  pauStack_750 = (undefined1 (*) [16])CONCAT44(pauStack_750._4_4_,uVar6);
  uVar3 = func_0x03778bf0(lVar26,plVar21);
  uVar3 = func_0x036dbb6c(pauVar18,uVar3 & 1,plVar21,0);
  uStack_404 = uVar3;
  plVar14 = (long *)func_0x0249fb80(_DAT_059cf978);
  func_0x0282ee2c(plVar14,_DAT_05a15790);
  lVar31 = *plVar21;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
        puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
        goto LAB_0377bfcc;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377bfcc:
  uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  pauVar8 = (undefined1 (*) [16])func_0x036dd33c(pauVar18,uVar12,0);
  lVar31 = *plVar21;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
        puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
        goto LAB_0377c044;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377c044:
  uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  pauVar22 = (undefined1 (*) [16])0x0;
  uVar34 = func_0x036ed7f4(pauVar18,uVar12,0);
  if ((uVar34 & 1) == 0) {
    if (pauVar8 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
    pauVar22 = *(undefined1 (**) [16])*pauVar8;
    uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059e0210) {
          puVar11 = (undefined8 *)(pauVar22[(long)*piVar35 + 0x13] + 8);
          goto LAB_0377c0bc;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(pauVar8,_DAT_059e0210,0);
LAB_0377c0bc:
    uVar12 = (*(code *)*puVar11)(pauVar8,pauVar10,lVar26,puVar11[1]);
    pauVar22 = _DAT_05a43a40;
    uVar12 = func_0x026eb75c(uVar12,uVar3,_DAT_05a43a40);
    if (pauVar25 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
    pauVar22 = *(undefined1 (**) [16])*pauVar25;
    uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(pauVar22[(long)(*piVar35 + 3) + 0x13] + 8);
          goto LAB_0377c14c;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(pauVar25,_DAT_059df8e8,3);
LAB_0377c14c:
    uVar19 = (*(code *)*puVar11)(pauVar25,puVar11[1]);
    pauVar22 = _DAT_05a48500;
    plVar14 = (long *)func_0x027060e0(uVar12,uVar19,_DAT_05a48500);
  }
  if (pauVar8 == (undefined1 (*) [16])0x0) {
LAB_0377c1b0:
    if (plVar14 == (long *)0x0) goto LAB_0377d6d0;
    lVar31 = *plVar14;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059c98a0) {
          puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_0377c208;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar22 = (undefined1 (*) [16])0x0;
    puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059c98a0,0);
LAB_0377c208:
    iVar4 = (*(code *)*puVar11)(plVar14,puVar11[1]);
    if (iVar4 < 1 || (int)uVar3 < 1) {
      lVar31 = *plVar21;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
            puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
            goto LAB_0377c278;
          }
          uVar34 = uVar34 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377c278:
      uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      pauVar22 = (undefined1 (*) [16])0x0;
      uVar34 = func_0x036ed7f4(pauVar18,uVar12,0);
      if ((uVar34 & 1) == 0) {
        return uVar34;
      }
    }
  }
  else if (((byte)(*(undefined1 (**) [16])*pauVar8)[0x13][0] < *(byte *)(_DAT_059dda40 + 0x130)) ||
          (*(long *)(*(long *)((*(undefined1 (**) [16])*pauVar8)[0xc] + 8) +
                     (ulong)*(byte *)(_DAT_059dda40 + 0x130) * 8 + -8) != _DAT_059dda40))
  goto LAB_0377c1b0;
  iVar4 = func_0x036dd320(pauVar18,0);
  if (iVar4 < 1) {
    if (plVar14 == (long *)0x0) goto LAB_0377d6d0;
    lVar31 = *plVar14;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059c98a0) {
          puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_0377c37c;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059c98a0,0);
LAB_0377c37c:
    iVar4 = (*(code *)*puVar11)(plVar14,puVar11[1]);
    lVar31 = *plVar14;
    uVar1 = *(ushort *)(lVar31 + 0x12e);
    uVar34 = (ulong)uVar1;
    if (iVar4 < (int)uVar3) {
      if (uVar1 != 0) {
        piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059c98a0) {
            puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_0377c410;
          }
          uVar34 = uVar34 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059c98a0,0);
LAB_0377c410:
      (*(code *)*puVar11)(plVar14,puVar11[1]);
SUB_0377d73c:
      if ((bRam0000000005e2dfcd & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2ba0);
        func_0x0249f8e4(&DAT_059e46b8);
        bRam0000000005e2dfcd = 1;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar34 = func_0x03639d34(auVar41._8_8_,0x2d,0);
      if ((uVar34 & 1) != 0) {
        lVar31 = *(long *)(auVar41._0_8_ + 0x88);
        lVar26 = func_0x03530c84(pauVar23,0);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2ba0);
        }
        if ((bRam0000000005e3238c & 1) == 0) {
          func_0x0249f8e4(&DAT_059e2ba0,lVar26,0);
          bRam0000000005e3238c = 1;
        }
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        return (ulong)(lVar26 < lVar31);
      }
      return 0;
    }
    if (uVar1 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059c98a0) {
          puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_0377c92c;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059c98a0,0);
LAB_0377c92c:
    iVar4 = (*(code *)*puVar11)(plVar14,puVar11[1]);
    if (iVar4 < (int)uVar3) {
      uVar12 = func_0x022bffa8(5,_DAT_059df8e8,plVar21);
      uVar34 = func_0x036ed7f4(pauVar18,uVar12,0);
      if ((uVar34 & 1) == 0) {
        return uVar34;
      }
    }
    if ((param_7 == (long *)0x0) ||
       (uVar34 = func_0x0376d3b8(param_7,plVar21,*(undefined8 *)(lVar26 + 0x30)), (int)uVar34 == 0))
    {
      uVar34 = func_0x036daf18(pauVar18,pauVar23,plVar21,uVar6,0);
    }
  }
  else {
    if (plVar14 == (long *)0x0) goto LAB_0377d6d0;
    lVar31 = *plVar14;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059c98a0) {
          puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
          goto LAB_0377c350;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059c98a0,0);
LAB_0377c350:
    uVar5 = (*(code *)*puVar11)(plVar14,puVar11[1]);
    uVar3 = func_0x03778bf0(lVar26,plVar21);
    uVar34 = func_0x036db608(pauVar18,uVar5,plVar21,uVar6,uVar3 & 1,&uStack_404,0);
  }
  iVar4 = (int)uVar34;
  if (1 < iVar4 - 1U) {
    return uVar34;
  }
  lVar31 = *plVar21;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
        puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
        goto LAB_0377c4b8;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377c4b8:
  uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  pauStack_750 = (undefined1 (*) [16])func_0x036d3908(pauVar18,uVar12,0);
  lVar31 = *plVar21;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
        puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
        goto LAB_0377c530;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377c530:
  uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  pauVar7 = (undefined1 (*) [16])0x0;
  uVar34 = func_0x036edd98(pauVar18,uVar12,0);
  pauVar8 = pauStack_750;
  if ((uVar34 & 1) == 0) {
    lVar31 = *plVar21;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_0377c5f8;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377c5f8:
    uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    pauVar22 = (undefined1 (*) [16])0x0;
    uVar34 = func_0x036edf9c(pauVar18,uVar12,0);
    if ((uVar34 & 1) != 0) {
      if (pauStack_750 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      pauVar22 = pauStack_750;
      pauVar7 = (undefined1 (*) [16])func_0x022bffa8(9,_DAT_059dfbc0,pauStack_750);
      if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      uVar34 = func_0x022bffa8(3,_DAT_059e0158,pauVar7);
      goto LAB_0377c6e4;
    }
    pauVar8 = (undefined1 (*) [16])0x2;
  }
  else {
    pauVar22 = pauVar7;
    if (pauStack_750 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
    pauVar22 = *(undefined1 (**) [16])*pauStack_750;
    uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
          puVar11 = (undefined8 *)(pauVar22[(long)(*piVar35 + 3) + 0x13] + 8);
          goto LAB_0377c66c;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar7 = (undefined1 (*) [16])0x3;
    puVar11 = (undefined8 *)func_0x024d927c(pauStack_750,_DAT_059dfbc0,3);
LAB_0377c66c:
    plVar20 = (long *)(*(code *)*puVar11)(pauStack_750,puVar11[1]);
    pauVar22 = pauVar7;
    if (plVar20 == (long *)0x0) goto LAB_0377d6d0;
    lVar31 = *plVar20;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059deb70) {
          puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_0377c6d8;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar7 = (undefined1 (*) [16])0x5;
    puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059deb70,5);
LAB_0377c6d8:
    uVar34 = (*(code *)*puVar11)(plVar20,puVar11[1]);
LAB_0377c6e4:
    pauVar8 = (undefined1 (*) [16])(uVar34 & 0xffffffff);
    pauVar22 = pauVar7;
  }
  if ((param_7 == (long *)0x0) ||
     (pauVar7 = (undefined1 (*) [16])param_7[2], pauVar7 == (undefined1 (*) [16])0x0)) {
    lVar31 = *plVar21;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
          puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
          goto LAB_0377c758;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377c758:
    uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    pauVar22 = (undefined1 (*) [16])0x0;
    uVar34 = func_0x036ed7f4(pauVar18,uVar12,0);
    if ((uVar34 & 1) != 0) goto LAB_0377d1f0;
    uVar12 = func_0x022bffa8(0xc,_DAT_059e0220,plVar21);
    pauStack_3f8 = (undefined1 (*) [16])0x0;
    pauStack_400 = (undefined1 (*) [16])0x0;
    func_0x0371f100(&pauStack_400,pauVar18,lVar26,0);
    uVar12 = func_0x036dd080(pauVar18,pauVar25,plVar21,uVar12,pauStack_400,pauStack_3f8,0);
    uVar34 = func_0x036cf0a0(uVar12,plVar21,1,&uStack_410,0);
    if ((uVar34 & 1) == 0) {
      pauStack_3f8 = (undefined1 (*) [16])0x0;
      pauStack_400 = (undefined1 (*) [16])0x0;
      func_0x0371f100(&pauStack_400,pauVar18,lVar26,0);
      uVar12 = func_0x022bffa8(0xc,_DAT_059e0220,plVar21);
      uVar19 = func_0x026e290c(uStack_410,_DAT_05a41860);
    }
    else {
      pauStack_3f8 = (undefined1 (*) [16])0x0;
      pauStack_400 = (undefined1 (*) [16])0x0;
      func_0x0371f100(&pauStack_400,pauVar18,lVar26,0);
      uVar12 = func_0x022bffa8(0xc,_DAT_059e0220,plVar21);
      uVar19 = 0;
    }
    pauVar22 = pauStack_400;
    pauVar7 = (undefined1 (*) [16])
              func_0x036dcbd4(pauVar18,pauVar25,pauStack_400,pauStack_3f8,plVar21,uVar12,uVar19,0);
    if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_0377d1f0;
    uStack_764 = 0;
  }
  else {
    uStack_764 = 1;
  }
  if (pauStack_748 == (undefined1 (*) [16])0x0) goto LAB_0377cad0;
  lVar31 = *plVar21;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
        puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 3) * 0x10 + 0x138);
        goto LAB_0377c9bc;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,3);
LAB_0377c9bc:
  uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  uVar5 = func_0x03496864(uVar12,0);
  uVar6 = *(undefined4 *)pauStack_748[2];
  if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059dd500);
  }
  uVar34 = func_0x043bea48(uVar5,uVar6,0);
  if ((uVar34 & 1) == 0) {
LAB_0377ca94:
    if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    pauVar22 = pauVar7;
    auVar41 = func_0x0364afe0(plVar21,lVar26,pauVar7,0);
    *pauVar13 = auVar41;
  }
  else {
    func_0x0377d80c(&pauStack_400,plVar21,lVar26,pauStack_750,pauVar7,*(undefined4 *)*pauVar13,
                    pauStack_748);
    pauStack_448 = pauStack_3f8;
    pauStack_450 = pauStack_400;
    uStack_438 = uStack_3e8;
    pauStack_440 = pauStack_3f0;
    if (*(int *)(_DAT_059d3bc0 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    pauVar22 = _DAT_05a29190;
    uVar34 = func_0x0288eda8(&pauStack_450,&pauStack_428,_DAT_05a29190);
    if ((uVar34 & 1) == 0) goto LAB_0377ca94;
    pauStack_3f0 = pauStack_418;
    pauStack_3f8 = pauStack_420;
    pauStack_400 = pauStack_428;
    *(undefined1 (**) [16])((long)*pauVar13 + 8) = pauStack_418;
    *(undefined1 (**) [16])*pauVar13 = pauStack_420;
    pauVar7 = pauStack_428;
  }
  func_0x0249f888(ppauVar33,0);
LAB_0377cad0:
  if (param_7 == (long *)0x0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_7[3];
    if ((pauStack_748 != (undefined1 (*) [16])0x0) && (lVar31 != 0)) {
      pauVar22 = (undefined1 (*) [16])0x0;
      func_0x0389298c(lVar31,*(undefined4 *)((long)pauStack_748[1] + 8),0);
    }
  }
  iStack_760 = iVar4;
  if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
  pauVar22 = *(undefined1 (**) [16])*pauVar7;
  uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
        puVar11 = (undefined8 *)(pauVar22[(long)(*piVar35 + 0xe) + 0x13] + 8);
        goto LAB_0377cb5c;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  puVar11 = (undefined8 *)func_0x024d927c(pauVar7,_DAT_059dfbc0,0xe);
LAB_0377cb5c:
  plVar20 = (long *)(*(code *)*puVar11)(pauVar7,puVar11[1]);
  if (plVar20 != (long *)0x0) {
    lVar32 = *plVar20;
    uVar34 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df1f0) {
          puVar11 = (undefined8 *)(lVar32 + (long)(*piVar35 + 3) * 0x10 + 0x138);
          goto LAB_0377cbc8;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059df1f0,3);
LAB_0377cbc8:
    uVar34 = (*(code *)*puVar11)(plVar20,puVar11[1]);
    if ((uVar34 & 1) != 0) {
      uVar12 = func_0x0249fb80(_DAT_059dac08);
      func_0x0373956c(uVar12,plVar21,lVar26,9,0);
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      func_0x034ba874(&uStack_4a0,0x18,pauVar10,**(undefined8 **)(_DAT_059db250 + 0xb8),pauVar23,
                      pauVar7,0,0,0);
      uVar6 = func_0x022bffa8(0x1f,_DAT_059dfbc0,pauVar7);
      pauVar13 = (undefined1 (*) [16])func_0x0249fb80(_DAT_059e1488);
      func_0x03516a08(pauVar13,uVar6,0);
      lVar31 = func_0x022bffa8(0xe,_DAT_059dfbc0,pauVar7);
      pauVar22 = pauVar7;
      pauVar8 = pauVar23;
      if (lVar31 == 0) goto LAB_0377d6d0;
      pauVar7 = (undefined1 (*) [16])func_0x022bffa8(1,_DAT_059df1f0,lVar31);
      uVar40 = *(undefined8 *)(lVar26 + 0x30);
      uVar36 = **(undefined8 **)(_DAT_059db250 + 0xb8);
      uVar19 = func_0x0249fb80(_DAT_059e2700);
      func_0x036d1444(uVar19,plVar21,pauVar13,pauVar23,uVar40,2,0,0,0);
      lVar31 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(lVar31,_DAT_05a192a0);
      pauVar22 = pauVar13;
      if (lVar31 == 0) goto LAB_0377d6d0;
      func_0x054ed0d0(auStack_550,&uStack_4a0,0x50);
      pauVar22 = _DAT_05a192a8;
      func_0x025a1da8(lVar31,auStack_550,_DAT_05a192a8);
      if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      func_0x0240cee0(1,_DAT_059df1d0,pauVar7,uVar12,uVar36,uVar19,pauVar23,lVar31);
      lVar31 = _DAT_059c9978;
      pauVar22 = pauVar7;
      if (param_6 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      func_0x054ed0d0(auStack_5a0,&uStack_4a0,0x50);
      func_0x0240cde0(2,lVar31,param_6,auStack_5a0);
      goto LAB_0377d058;
    }
  }
  plVar14 = (long *)func_0x0377dd18(lVar26,plVar21,pauVar7,pauVar10,plVar14,uStack_404,pauVar23,
                                    pauVar8,pauVar25,lVar31);
  pauVar22 = pauVar7;
  if (plVar14 == (long *)0x0) goto LAB_0377d6d0;
  lVar31 = *plVar14;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar35 + -2) == _DAT_059ca9b8) {
        puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
        goto LAB_0377ce40;
      }
      uVar34 = uVar34 - 1;
      piVar35 = piVar35 + 4;
    } while (uVar34 != 0);
  }
  pauVar7 = (undefined1 (*) [16])0x0;
  puVar11 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059ca9b8,0);
LAB_0377ce40:
  pauVar8 = (undefined1 (*) [16])(*(code *)*puVar11)(plVar14,puVar11[1]);
  ppauStack_5e8 = &pauStack_4a8;
  pauStack_5f0 = (undefined1 (*) [16])0x0;
  pauVar22 = pauVar7;
  while (pauStack_4a8 = pauVar8, pauVar8 != (undefined1 (*) [16])0x0) {
    pauVar7 = *(undefined1 (**) [16])*pauVar8;
    uVar34 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar7[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059df6e0) {
          puVar11 = (undefined8 *)(pauVar7[(long)*piVar35 + 0x13] + 8);
          goto LAB_0377cec4;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    pauVar22 = (undefined1 (*) [16])0x0;
    puVar11 = (undefined8 *)func_0x024d927c(pauVar8,_DAT_059df6e0,0);
LAB_0377cec4:
    uVar34 = (*(code *)*puVar11)(pauVar8,puVar11[1]);
    pauVar8 = pauStack_4a8;
    if ((uVar34 & 1) == 0) goto LAB_0377cfd0;
    if (pauStack_4a8 == (undefined1 (*) [16])0x0) goto LAB_0377d6d8;
    pauVar22 = *(undefined1 (**) [16])*pauStack_4a8;
    uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059cbd38) {
          puVar11 = (undefined8 *)(pauVar22[(long)*piVar35 + 0x13] + 8);
          goto LAB_0377cf28;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(pauStack_4a8,_DAT_059cbd38,0);
LAB_0377cf28:
    (*(code *)*puVar11)(&pauStack_400,pauVar8,puVar11[1]);
    pauVar22 = (undefined1 (*) [16])0x50;
    func_0x054ed0d0(&uStack_500,&pauStack_400,0x50);
    if (param_6 == (undefined1 (*) [16])0x0) goto LAB_0377d6d4;
    pauVar22 = *(undefined1 (**) [16])*param_6;
    uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
    if (uVar34 != 0) {
      piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
      do {
        if (*(long *)(piVar35 + -2) == _DAT_059c9978) {
          puVar11 = (undefined8 *)(pauVar22[(long)(*piVar35 + 2) + 0x13] + 8);
          goto LAB_0377cfa0;
        }
        uVar34 = uVar34 - 1;
        piVar35 = piVar35 + 4;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(param_6,_DAT_059c9978,2);
LAB_0377cfa0:
    pcVar39 = (code *)*puVar11;
    func_0x054ed0d0(&pauStack_400,&uStack_500,0x50);
    pauVar22 = (undefined1 (*) [16])puVar11[1];
    (*pcVar39)(param_6,&pauStack_400,pauVar22);
    pauVar8 = pauStack_4a8;
  }
  uVar34 = func_0x0249fb90();
LAB_0377cfd0:
  pauVar8 = (undefined1 (*) [16])0x0;
  iVar4 = 0x23;
  ppauVar33 = &pauStack_4a8;
  do {
    pauVar7 = *ppauVar33;
    if (pauVar7 != (undefined1 (*) [16])0x0) {
      lVar31 = *(long *)*pauVar7;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059df598) {
            puVar11 = (undefined8 *)(lVar31 + (long)*piVar35 * 0x10 + 0x138);
            goto LAB_0377d03c;
          }
          uVar34 = uVar34 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar34 != 0);
      }
      pauVar22 = (undefined1 (*) [16])0x0;
      puVar11 = (undefined8 *)func_0x024d927c(pauVar7);
LAB_0377d03c:
      uVar34 = (*(code *)*puVar11)(pauVar7,puVar11[1]);
    }
    if (pauVar8 == (undefined1 (*) [16])0x0) {
      if ((iVar4 != 0x23) && (iVar4 != 0)) {
        return uVar34;
      }
LAB_0377d058:
      lVar31 = *plVar21;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
            puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
            goto LAB_0377d0b4;
          }
          uVar34 = uVar34 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377d0b4:
      uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      pauVar22 = (undefined1 (*) [16])0x0;
      uVar34 = func_0x036edd98(pauVar18,uVar12,0);
      pauVar8 = pauStack_748;
      if ((uVar34 & 1) != 0) {
        lVar31 = func_0x036d5ec8(pauVar18,0);
        uVar3 = uStack_764;
        if (lVar31 == 0) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) != 0) goto LAB_0377d10c;
        lVar31 = func_0x036d5ec8(pauVar18,0);
        if (lVar31 != 0) {
          *(long *)(lVar31 + 0x48) = *(long *)(lVar31 + 0x48) + 1;
          goto LAB_0377d10c;
        }
        goto LAB_0377d6d0;
      }
LAB_0377d10c:
      lVar31 = *plVar21;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar35 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar35 + -2) == _DAT_059df8e8) {
            puVar11 = (undefined8 *)(lVar31 + (long)(*piVar35 + 5) * 0x10 + 0x138);
            goto LAB_0377d164;
          }
          uVar34 = uVar34 - 1;
          piVar35 = piVar35 + 4;
        } while (uVar34 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df8e8,5);
LAB_0377d164:
      uVar12 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      pauVar22 = (undefined1 (*) [16])0x0;
      uVar34 = func_0x036edf9c(pauVar18,uVar12,0);
      if (((uVar34 & 1) != 0) && (lVar31 = func_0x036d3170(pauVar18,0), lVar31 != 0)) {
        uVar3 = uStack_764;
        if (*(long *)(lVar31 + 0x10) == 0) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) == 0) {
          lVar31 = func_0x036d3170(pauVar18,0);
          if ((lVar31 == 0) ||
             (pauVar22 = *(undefined1 (**) [16])(lVar31 + 0x10),
             pauVar22 == (undefined1 (*) [16])0x0)) goto LAB_0377d6d0;
          func_0x022bffa8(3,_DAT_059e0170);
        }
      }
      iVar4 = iStack_760;
      if (pauStack_748 != (undefined1 (*) [16])0x0) {
        pauVar22 = pauVar18;
        func_0x0377de2c(lVar26,plVar21,pauVar18,pauVar10,param_6);
      }
LAB_0377d1f0:
      if (iVar4 == 1) goto LAB_0377d6a0;
      pauVar8 = pauStack_750;
      if (pauStack_750 != (undefined1 (*) [16])0x0) {
        pauVar8 = *(undefined1 (**) [16])*pauStack_750;
        uVar34 = (ulong)*(ushort *)(pauVar8[0x12] + 0xe);
        if (uVar34 != 0) {
          piVar35 = (int *)(*(long *)pauVar8[0xb] + 8);
          do {
            if (*(long *)(piVar35 + -2) == _DAT_059dfbc0) {
              puVar11 = (undefined8 *)(pauVar8[(long)(*piVar35 + 9) + 0x13] + 8);
              goto LAB_0377d25c;
            }
            uVar34 = uVar34 - 1;
            piVar35 = piVar35 + 4;
          } while (uVar34 != 0);
        }
        pauVar22 = (undefined1 (*) [16])0x9;
        puVar11 = (undefined8 *)func_0x024d927c(pauStack_750,_DAT_059dfbc0,9);
LAB_0377d25c:
        pauVar7 = (undefined1 (*) [16])(*(code *)*puVar11)(pauStack_750,puVar11[1]);
        pauVar8 = pauStack_750;
        if (pauVar7 != (undefined1 (*) [16])0x0) {
          pauVar22 = *(undefined1 (**) [16])*pauVar7;
          uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059e0158) {
                puVar11 = (undefined8 *)(pauVar22[(long)*piVar35 + 0x13] + 8);
                goto LAB_0377d2c4;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(pauVar7,_DAT_059e0158,0);
LAB_0377d2c4:
          uVar34 = (*(code *)*puVar11)(pauVar7,puVar11[1]);
          if ((uVar34 & 1) != 0) {
            uVar12 = func_0x036d3170(pauVar18,0);
            pauVar22 = pauVar7;
            lVar31 = func_0x022cbbd0(6,_DAT_059e0158,pauVar7,uVar12,pauVar25);
            if (lVar31 != 0) {
              lVar32 = func_0x036d3170(pauVar18,0);
              pauVar8 = pauVar7;
              if (lVar32 != 0) {
                func_0x0370f164(lVar32,lVar31,0);
                uStack_5d8 = 0;
                uStack_5e0 = 0;
                uStack_5c8 = 0;
                uStack_5d0 = 0;
                uStack_5b8 = 0;
                uStack_5c0 = 0;
                uStack_5a8 = 0;
                uStack_5b0 = 0;
                ppauStack_5e8 = (undefined1 (**) [16])0x0;
                pauStack_5f0 = (undefined1 (*) [16])0x0;
                pauVar22 = pauVar10;
                func_0x034ba874(&pauStack_5f0,6,pauVar10,pauVar10,pauVar23,0,0,0,0);
                lVar31 = _DAT_059c9978;
                if (param_6 != (undefined1 (*) [16])0x0) {
                  func_0x054ed0d0(auStack_640,&pauStack_5f0,0x50);
                  uVar34 = func_0x0240cde0(2,lVar31,param_6,auStack_640);
                  return uVar34;
                }
              }
              goto LAB_0377d6d0;
            }
          }
          pauVar22 = *(undefined1 (**) [16])*pauVar7;
          uVar34 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
          if (uVar34 != 0) {
            piVar35 = (int *)(*(long *)pauVar22[0xb] + 8);
            do {
              if (*(long *)(piVar35 + -2) == _DAT_059e0158) {
                puVar11 = (undefined8 *)(pauVar22[(long)*piVar35 + 0x13] + 8);
                goto LAB_0377d3dc;
              }
              uVar34 = uVar34 - 1;
              piVar35 = piVar35 + 4;
            } while (uVar34 != 0);
          }
          puVar11 = (undefined8 *)func_0x024d927c(pauVar7,_DAT_059e0158,0);
LAB_0377d3dc:
          uVar34 = (*(code *)*puVar11)(pauVar7,puVar11[1]);
          if ((uVar34 & 1) == 0) {
LAB_0377d4ac:
            pauVar22 = pauStack_750;
            lVar31 = func_0x022bffa8(3,_DAT_059dfbc0,pauStack_750);
            pauVar8 = pauVar7;
            if (lVar31 != 0) {
              uVar12 = func_0x022bffa8(4,_DAT_059deb70,lVar31);
              uStack_650 = 0;
              uStack_648 = 0;
              func_0x0371f100(&uStack_650,pauVar18,lVar26,0);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uStack_3a8 = uStack_648;
              uStack_3b0 = uStack_650;
              func_0x0288f218(&uStack_3b0,&pauStack_5f0,_DAT_05a29e48);
              ppauStack_688 = ppauStack_5e8;
              pauStack_690 = pauStack_5f0;
              uStack_680 = uStack_5e0;
              pauVar8 = (undefined1 (*) [16])func_0x0371f1bc(uVar12,pauVar25,&pauStack_690,0,0);
              if (pauVar8 != (undefined1 (*) [16])0x0) goto LAB_0377d55c;
              func_0x037789bc(lVar26,plVar21,pauVar10,pauVar23,1);
              uStack_5d8 = 0;
              uStack_5e0 = 0;
              uStack_5c8 = 0;
              uStack_5d0 = 0;
              uStack_5b8 = 0;
              uStack_5c0 = 0;
              uStack_5a8 = 0;
              uStack_5b0 = 0;
              ppauStack_5e8 = (undefined1 (**) [16])0x0;
              pauStack_5f0 = (undefined1 (*) [16])0x0;
              pauVar22 = pauVar10;
              func_0x034ba874(&pauStack_5f0,4,pauVar10,pauVar10,pauVar23,0,0,0,0);
              lVar31 = _DAT_059c9978;
              if (param_6 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
              func_0x054ed0d0(auStack_730,&pauStack_5f0,0x50);
              puVar24 = auStack_730;
              goto LAB_0377d690;
            }
          }
          else {
            pauVar7 = (undefined1 (*) [16])func_0x022bffa8(4,_DAT_059e0158,pauVar7);
            uStack_650 = 0;
            uStack_648 = 0;
            func_0x0371f100(&uStack_650,pauVar18,lVar26,0);
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uStack_3a8 = uStack_648;
            uStack_3b0 = uStack_650;
            func_0x0288f218(&uStack_3b0,&pauStack_5f0,_DAT_05a29e48);
            ppauStack_668 = ppauStack_5e8;
            pauStack_670 = pauStack_5f0;
            uStack_660 = uStack_5e0;
            pauVar8 = (undefined1 (*) [16])func_0x0371f1bc(pauVar7,pauVar25,&pauStack_670,0,0);
            if (pauVar8 == (undefined1 (*) [16])0x0) goto LAB_0377d4ac;
            uVar12 = func_0x022bffa8(5,_DAT_059df8e8,plVar21);
            uVar34 = func_0x036edd98(pauVar18,uVar12,0);
            pauVar7 = pauVar8;
            if ((uVar34 & 1) != 0) goto LAB_0377d4ac;
LAB_0377d55c:
            lVar31 = func_0x036d5ffc(pauVar18,0);
            if (lVar31 != 0) {
              uVar12 = *(undefined8 *)(lVar26 + 0x30);
              uVar6 = func_0x036d392c(pauVar18,0);
              func_0x0374def0(lVar31,plVar21,uVar12,uVar6,0);
            }
            func_0x03774f00(lVar26,plVar21,pauVar10,pauVar8,pauVar25,pauVar23,2,0);
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            uStack_5c8 = 0;
            uStack_5d0 = 0;
            uStack_5b8 = 0;
            uStack_5c0 = 0;
            uStack_5a8 = 0;
            uStack_5b0 = 0;
            ppauStack_5e8 = (undefined1 (**) [16])0x0;
            pauStack_5f0 = (undefined1 (*) [16])0x0;
            pauVar22 = pauVar10;
            func_0x034ba874(&pauStack_5f0,6,pauVar10,pauVar10,pauVar23,0,0,0,0);
            lVar31 = _DAT_059c9978;
            if (param_6 != (undefined1 (*) [16])0x0) {
              func_0x054ed0d0(auStack_6e0,&pauStack_5f0,0x50);
              puVar24 = auStack_6e0;
LAB_0377d690:
              func_0x0240cde0(2,lVar31,param_6,puVar24);
LAB_0377d6a0:
              uVar34 = func_0x03530c84(pauVar23,0);
              *(ulong *)(lVar26 + 0x20) = uVar34;
              return uVar34;
            }
          }
        }
      }
LAB_0377d6d0:
      func_0x0249fb90();
LAB_0377d6d4:
      func_0x0249fb90();
LAB_0377d6d8:
      func_0x0249fb90();
    }
    auVar43 = func_0x0249fb88(pauVar8);
    if (auVar43._8_4_ != 1) break;
    puVar11 = (undefined8 *)func_0x054ed080(auVar43._0_8_);
    pauVar8 = (undefined1 (*) [16])*puVar11;
    pauStack_5f0 = pauVar8;
    uVar34 = func_0x054ed090();
    iVar4 = 0;
    ppauVar33 = ppauStack_5e8;
  } while( true );
  func_0x022bd79c(&pauStack_5f0);
  func_0x0258f7ac(auVar43._0_8_);
  auVar41 = func_0x022bd790();
  pauVar23 = pauVar22;
  goto SUB_0377d73c;
}


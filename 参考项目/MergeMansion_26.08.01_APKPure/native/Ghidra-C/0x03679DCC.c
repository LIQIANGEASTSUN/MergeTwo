/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void ProcessMerge(GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime timeForMergeOrMove, GameLogic.Player.IPlayer player, GameLogic.Player.Items.Bubble.IBubbleSpawner bubbleSpawner, GameLogic.Player.Items.ProgressionEvent.IProgressionEventItemSpawner progressionEventItemSpawner, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 03779dcc
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0377c42c: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_03779dcc(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                  long *param_7,undefined1 (*param_8) [16])

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 (*pauVar12) [16];
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 *puVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  long lVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  undefined1 (**ppauVar27) [16];
  ulong uVar28;
  int *piVar29;
  undefined1 (*unaff_x23) [16];
  undefined8 uVar30;
  undefined1 (*unaff_x26) [16];
  undefined1 (*unaff_x27) [16];
  code *pcVar31;
  long *unaff_x29;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  uint uStack_6f4;
  int iStack_6f0;
  undefined1 (*pauStack_6e0) [16];
  undefined1 (*pauStack_6d8) [16];
  undefined1 auStack_6c0 [80];
  undefined1 auStack_670 [80];
  undefined1 (*pauStack_620) [16];
  undefined1 (**ppauStack_618) [16];
  undefined8 uStack_610;
  undefined1 (*pauStack_600) [16];
  undefined1 (**ppauStack_5f8) [16];
  undefined8 uStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [80];
  undefined1 (*pauStack_580) [16];
  undefined1 (**ppauStack_578) [16];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_530 [80];
  undefined1 auStack_4e0 [80];
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 (*pauStack_438) [16];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 (*pauStack_3e0) [16];
  undefined1 (*pauStack_3d8) [16];
  undefined1 (*pauStack_3d0) [16];
  undefined8 uStack_3c8;
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  undefined1 (*pauStack_3a8) [16];
  undefined8 uStack_3a0;
  uint uStack_394;
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_380) [16];
  undefined8 uStack_378;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined1 (*pauStack_320) [16];
  undefined1 (*pauStack_318) [16];
  undefined1 (*pauStack_310) [16];
  undefined1 (*pauStack_308) [16];
  undefined1 (*pauStack_300) [16];
  undefined1 (*pauStack_2f8) [16];
  undefined1 (*pauStack_2f0) [16];
  undefined1 (*pauStack_2e8) [16];
  undefined1 (*pauStack_2e0) [16];
  undefined1 (*pauStack_2d8) [16];
  undefined8 uStack_2d0;
  long *plStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  long *plStack_2a8;
  undefined1 (*pauStack_2a0) [16];
  undefined1 (*pauStack_298) [16];
  undefined1 auStack_290 [80];
  undefined1 (*pauStack_240) [16];
  long *plStack_238;
  undefined8 uStack_230;
  undefined1 (*pauStack_220) [16];
  undefined8 uStack_218;
  undefined1 auStack_210 [80];
  undefined1 auStack_1c0 [80];
  undefined1 auStack_170 [80];
  undefined1 (*pauStack_120) [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_cc;
  long lStack_c8;
  undefined8 uStack_c0;
  char acStack_b4 [4];
  undefined1 (*pauStack_b0) [16];
  long *plStack_a8;
  undefined8 uStack_a0;
  
  pauVar16 = param_3;
  pauVar18 = param_4;
  pauVar20 = param_5;
  pauVar25 = param_8;
  plStack_2c0 = param_7;
  pauStack_2b8 = param_6;
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
  acStack_b4[0] = '\0';
  uStack_c0 = 0;
  lStack_c8 = 0;
  uStack_cc = 0;
  pauVar7 = (undefined1 (*) [16])func_0x0376e450(param_1,param_2);
  pauStack_298 = (undefined1 (*) [16])func_0x0376e450(param_1,param_3);
  pauVar17 = param_8;
  if (param_5 == (undefined1 (*) [16])0x0) {
LAB_0377bb44:
    func_0x0249fb90();
    pauVar22 = pauVar7;
    param_8 = pauVar17;
    pauVar23 = unaff_x26;
    plVar11 = unaff_x29;
  }
  else {
    pauVar21 = *(undefined1 (**) [16])*param_5;
    uVar28 = (ulong)*(ushort *)(pauVar21[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar21[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
          puVar8 = (undefined8 *)(pauVar21[(long)(*piVar29 + 0x3b) + 0x13] + 8);
          goto LAB_03779fdc;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar16 = (undefined1 (*) [16])0x3b;
    puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_03779fdc:
    lVar9 = (*(code *)*puVar8)(param_5,puVar8[1]);
    if (lVar9 != 0) {
      pauVar20 = (undefined1 (*) [16])0x0;
      pauVar16 = pauStack_298;
      pauVar18 = param_3;
      func_0x034cc8b0(lVar9,param_5);
    }
    pauVar21 = *(undefined1 (**) [16])*param_5;
    uVar28 = (ulong)*(ushort *)(pauVar21[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar21[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(pauVar21[(long)(*piVar29 + 5) + 0x13] + 8);
          goto LAB_0377a058;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar16 = (undefined1 (*) [16])0x5;
    puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_0377a058:
    uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
    if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar16 = (undefined1 (*) [16])0x0;
    pauVar21 = (undefined1 (*) [16])func_0x036d3908(pauVar7,uVar10);
    pauVar22 = *(undefined1 (**) [16])*param_5;
    uVar28 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar22[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(pauVar22[(long)(*piVar29 + 5) + 0x13] + 8);
          goto LAB_0377a0d4;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar16 = (undefined1 (*) [16])0x5;
    puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_0377a0d4:
    pauStack_2a0 = pauVar7;
    uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
    unaff_x26 = pauVar21;
    if (pauStack_298 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar16 = (undefined1 (*) [16])0x0;
    plVar11 = (long *)func_0x036d3908(pauStack_298,uVar10);
    if (pauVar21 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar7 = *(undefined1 (**) [16])*pauVar21;
    uVar28 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar7[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
          puVar8 = (undefined8 *)(pauVar7[(long)(*piVar29 + 2) + 0x13] + 8);
          goto LAB_0377a164;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar16 = (undefined1 (*) [16])0x2;
    puVar8 = (undefined8 *)func_0x024d927c(pauVar21);
LAB_0377a164:
    plStack_2a8 = (long *)(*(code *)*puVar8)(pauVar21,puVar8[1]);
    acStack_b4[0] = '\x01';
    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    unaff_x27 = (undefined1 (*) [16])&DAT_059dfe68;
    uVar28 = func_0x036c0cb8(pauVar21,0);
    pauVar7 = (undefined1 (*) [16])&DAT_059e1498;
    unaff_x29 = plVar11;
    if ((uVar28 & 1) != 0) {
LAB_0377a220:
      if (plStack_2a8 != (long *)0x0) {
        lVar9 = *plStack_2a8;
        uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfe38) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_0377a280;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        pauVar16 = (undefined1 (*) [16])0x0;
        puVar8 = (undefined8 *)func_0x024d927c(plStack_2a8);
LAB_0377a280:
        pauVar22 = (undefined1 (*) [16])(*(code *)*puVar8)(plStack_2a8,puVar8[1]);
        if (pauVar22 != (undefined1 (*) [16])0x0) {
          pauVar16 = *(undefined1 (**) [16])*pauVar22;
          uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059dfe68) {
                puVar8 = (undefined8 *)(pauVar16[(long)(*piVar29 + 1) + 0x13] + 8);
                goto LAB_0377a2e4;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(pauVar22,_DAT_059dfe68,1);
LAB_0377a2e4:
          param_7 = (long *)puVar8[1];
          pauVar16 = param_1;
          pauVar18 = pauStack_2a0;
          pauVar20 = pauStack_298;
          param_6 = param_4;
          unaff_x27 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar22,param_5);
          pauVar23 = pauVar21;
          if ((unaff_x27 != (undefined1 (*) [16])0x0) &&
             (*(undefined1 (**) [16])*unaff_x27 != _DAT_059e2700)) goto LAB_0377bb48;
LAB_0377a324:
          pauVar16 = unaff_x27;
          func_0x0378569c(param_1,param_5);
          pauVar7 = pauVar21;
          unaff_x26 = pauVar23;
          if (pauVar21 != (undefined1 (*) [16])0x0) {
            pauVar22 = *(undefined1 (**) [16])*pauVar21;
            uVar28 = (ulong)*(ushort *)(pauVar22[0x12] + 0xe);
            if (uVar28 != 0) {
              piVar29 = (int *)(*(long *)pauVar22[0xb] + 8);
              do {
                if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                  puVar8 = (undefined8 *)(pauVar22[(long)(*piVar29 + 0x12) + 0x13] + 8);
                  goto LAB_0377a390;
                }
                uVar28 = uVar28 - 1;
                piVar29 = piVar29 + 4;
              } while (uVar28 != 0);
            }
            pauVar16 = (undefined1 (*) [16])0x12;
            puVar8 = (undefined8 *)func_0x024d927c(pauVar21);
LAB_0377a390:
            pauVar22 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar21,puVar8[1]);
            if (pauVar22 != (undefined1 (*) [16])0x0) {
              pauVar7 = *(undefined1 (**) [16])*pauVar22;
              unaff_x26 = (undefined1 (*) [16])&DAT_059df2a8;
              uVar28 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
              if (uVar28 != 0) {
                piVar29 = (int *)(*(long *)pauVar7[0xb] + 8);
                do {
                  if (*(long *)(piVar29 + -2) == _DAT_059df2a8) {
                    puVar8 = (undefined8 *)(pauVar7[(long)*piVar29 + 0x13] + 8);
                    goto LAB_0377a3f8;
                  }
                  uVar28 = uVar28 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar28 != 0);
              }
              pauVar16 = (undefined1 (*) [16])0x0;
              puVar8 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377a3f8:
              uVar28 = (*(code *)*puVar8)(pauVar22,puVar8[1]);
              if ((uVar28 & 1) == 0) {
LAB_0377a51c:
                unaff_x23 = (undefined1 (*) [16])0x0;
LAB_0377a76c:
                pauVar7 = *(undefined1 (**) [16])*param_5;
                uVar28 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                if (uVar28 != 0) {
                  piVar29 = (int *)(*(long *)pauVar7[0xb] + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                      puVar8 = (undefined8 *)(pauVar7[(long)(*piVar29 + 5) + 0x13] + 8);
                      goto LAB_0377a7c4;
                    }
                    uVar28 = uVar28 - 1;
                    piVar29 = piVar29 + 4;
                  } while (uVar28 != 0);
                }
                pauVar16 = (undefined1 (*) [16])0x5;
                puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_0377a7c4:
                uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
                pauVar7 = pauVar22;
                if (unaff_x27 != (undefined1 (*) [16])0x0) {
                  unaff_x29 = (long *)func_0x036d3908(unaff_x27,uVar10,0);
                  pauVar16 = unaff_x27;
                  func_0x037743ac(param_1,param_3);
                  if (acStack_b4[0] != '\0') {
                    pauVar20 = (undefined1 (*) [16])0x1;
                    pauVar16 = param_2;
                    pauVar18 = param_4;
                    func_0x037789bc(param_1,param_5);
                  }
                  if (unaff_x29 != (long *)0x0) {
                    lVar9 = *unaff_x29;
                    uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar28 != 0) {
                      piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar29 + 0x11) * 0x10 + 0x138);
                          goto LAB_0377a874;
                        }
                        uVar28 = uVar28 - 1;
                        piVar29 = piVar29 + 4;
                      } while (uVar28 != 0);
                    }
                    pauVar16 = (undefined1 (*) [16])0x11;
                    puVar8 = (undefined8 *)func_0x024d927c(unaff_x29);
LAB_0377a874:
                    plVar11 = (long *)(*(code *)*puVar8)(unaff_x29,puVar8[1]);
                    if (plVar11 != (long *)0x0) {
                      lVar9 = *plVar11;
                      uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar28 != 0) {
                        piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar29 + -2) == _DAT_059df010) {
                            puVar8 = (undefined8 *)(lVar9 + (long)*piVar29 * 0x10 + 0x138);
                            goto LAB_0377a8dc;
                          }
                          uVar28 = uVar28 - 1;
                          piVar29 = piVar29 + 4;
                        } while (uVar28 != 0);
                      }
                      puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df010,0);
LAB_0377a8dc:
                      uVar3 = (*(code *)*puVar8)(plVar11,puVar8[1]);
                      pauVar7 = (undefined1 (*) [16])(ulong)uVar3;
                      pauVar18 = param_3;
                      pauVar20 = param_4;
                      func_0x03783264(param_1,param_5,param_8);
                      func_0x03787050(param_1,param_4,param_5);
                      pauVar16 = param_4;
                      func_0x0378717c(param_1,param_5);
                      if (*(long *)param_1[10] != 0) {
                        pauVar16 = _DAT_059fb920;
                        pauStack_b0 = param_3;
                        uVar2 = func_0x02a3cb7c(*(long *)param_1[10],&pauStack_b0);
                        if (((uVar3 | uVar2 ^ 0xffffffff) & 1) == 0) {
                          if (*(long *)param_1[10] != 0) {
                            pauVar16 = (undefined1 (*) [16])&pauStack_b0;
                            pauVar18 = _DAT_059fb930;
                            pauStack_120 = param_3;
                            func_0x02a3be14(*(long *)param_1[10],&pauStack_120);
                            pauVar17 = (undefined1 (*) [16])&DAT_059fb930;
                            unaff_x26 = param_8;
                            if (*(long *)param_1[10] != 0) {
                              uVar28 = (ulong)pauStack_b0 & 0xffffffff;
                              pauStack_120 = param_3;
                              func_0x02a3be14(*(long *)param_1[10],&pauStack_120,&pauStack_b0,
                                              _DAT_059fb930);
                              func_0x036df8d8(unaff_x27,param_5,uVar28,pauStack_b0._4_4_,param_4,0);
                              goto LAB_0377a9e0;
                            }
                          }
                        }
                        else {
                          uVar2 = func_0x036df3c8(unaff_x27,0);
                          if (((uVar3 | uVar2 ^ 0xffffffff) & 1) == 0) {
                            func_0x036e0198(unaff_x27,param_5,param_4,0);
                          }
LAB_0377a9e0:
                          if (*(int *)((long)pauStack_298[1] + 8) != 2) {
                            if (*(int *)(_DAT_059e2700[0xe] + 4) == 0) {
                              func_0x0249fa64();
                            }
                            func_0x036d8170(param_5,param_1,param_3,pauStack_298,0);
                          }
                          uVar10 = func_0x03530c84(param_4,0);
                          *(undefined8 *)param_1[2] = uVar10;
                          pauVar7 = (undefined1 (*) [16])func_0x03530c84(param_4,0);
                          if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                            func_0x0249fa64(_DAT_059e2c00);
                          }
                          pauVar20 = (undefined1 (*) [16])func_0x03530158(pauVar7,0);
                          param_7 = (long *)0x0;
                          pauVar25 = (undefined1 (*) [16])0x0;
                          uStack_2d0 = 0;
                          uStack_108 = 0;
                          uStack_110 = 0;
                          uStack_f8 = 0;
                          uStack_100 = 0;
                          uStack_e8 = 0;
                          uStack_f0 = 0;
                          uStack_d8 = 0;
                          uStack_e0 = 0;
                          uStack_118 = 0;
                          pauStack_120 = (undefined1 (*) [16])0x0;
                          pauVar16 = param_2;
                          pauVar18 = param_3;
                          param_6 = unaff_x27;
                          func_0x034ba910(&pauStack_120,5);
                          lVar9 = _DAT_059c9978;
                          pauVar17 = param_8;
                          if (param_8 != (undefined1 (*) [16])0x0) {
                            func_0x054ed0d0(auStack_170,&pauStack_120,0x50);
                            pauVar16 = *(undefined1 (**) [16])*param_8;
                            uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                            if (uVar28 != 0) {
                              piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                              do {
                                if (*(long *)(piVar29 + -2) == lVar9) {
                                  pauVar7 = (undefined1 (*) [16])
                                            (pauVar16[(long)(*piVar29 + 2) + 0x13] + 8);
                                  goto LAB_0377ab14;
                                }
                                uVar28 = uVar28 - 1;
                                piVar29 = piVar29 + 4;
                              } while (uVar28 != 0);
                            }
                            pauVar7 = (undefined1 (*) [16])func_0x024d927c(param_8,lVar9,2);
LAB_0377ab14:
                            pauVar16 = *(undefined1 (**) [16])*pauVar7;
                            func_0x054ed0d0(&pauStack_b0,auStack_170,0x50);
                            pauStack_2b0 = param_8;
                            (*(code *)pauVar16)(param_8,&pauStack_b0,
                                                *(undefined1 (**) [16])((long)*pauVar7 + 8));
                            pauVar16 = (undefined1 (*) [16])0x1;
                            uVar28 = func_0x037856f0(param_1,param_5);
                            pauVar21 = pauStack_2b0;
                            if ((uVar28 & 1) == 0) goto LAB_0377ba68;
                            pauVar17 = *(undefined1 (**) [16])*param_5;
                            uVar28 = (ulong)*(ushort *)(pauVar17[0x12] + 0xe);
                            if (uVar28 != 0) {
                              piVar29 = (int *)(*(long *)pauVar17[0xb] + 8);
                              do {
                                if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                  puVar8 = (undefined8 *)(pauVar17[(long)(*piVar29 + 5) + 0x13] + 8)
                                  ;
                                  goto LAB_0377abb0;
                                }
                                uVar28 = uVar28 - 1;
                                piVar29 = piVar29 + 4;
                              } while (uVar28 != 0);
                            }
                            pauVar16 = (undefined1 (*) [16])0x5;
                            puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_0377abb0:
                            pauVar22 = (undefined1 (*) [16])(*(code *)*puVar8)(param_5,puVar8[1]);
                            pauVar17 = pauVar21;
                            unaff_x26 = param_8;
                            param_2 = (undefined1 (*) [16])&DAT_059c9978;
                            if (pauVar22 != (undefined1 (*) [16])0x0) {
                              pauVar7 = *(undefined1 (**) [16])*pauVar22;
                              uVar28 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                              if (uVar28 != 0) {
                                piVar29 = (int *)(*(long *)pauVar7[0xb] + 8);
                                do {
                                  if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
                                    puVar8 = (undefined8 *)
                                             (pauVar7[(long)(*piVar29 + 0x1b) + 0x13] + 8);
                                    goto LAB_0377ac1c;
                                  }
                                  uVar28 = uVar28 - 1;
                                  piVar29 = piVar29 + 4;
                                } while (uVar28 != 0);
                              }
                              pauVar16 = (undefined1 (*) [16])0x1b;
                              puVar8 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377ac1c:
                              pauVar23 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar22,puVar8[1])
                              ;
                              pauVar7 = pauVar22;
                              if (pauVar23 != (undefined1 (*) [16])0x0) {
                                pauVar16 = *(undefined1 (**) [16])*pauVar23;
                                uVar10 = *(undefined8 *)param_1[3];
                                uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                if (uVar28 != 0) {
                                  piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                  do {
                                    if (*(long *)(piVar29 + -2) == _DAT_059cd840) {
                                      puVar8 = (undefined8 *)(pauVar16[(long)*piVar29 + 0x13] + 8);
                                      goto LAB_0377ac88;
                                    }
                                    uVar28 = uVar28 - 1;
                                    piVar29 = piVar29 + 4;
                                  } while (uVar28 != 0);
                                }
                                puVar8 = (undefined8 *)func_0x024d927c(pauVar23,_DAT_059cd840,0);
LAB_0377ac88:
                                pauVar22 = (undefined1 (*) [16])puVar8[1];
                                uVar3 = (*(code *)*puVar8)(pauVar23,uVar10);
                                unaff_x26 = (undefined1 (*) [16])(ulong)uVar3;
                                if ((uVar3 & 1) == 0) {
                                  uStack_c0 = func_0x0376eb00(param_1);
                                  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                                    func_0x0249fa64(_DAT_059db250);
                                  }
                                  uVar2 = func_0x0376edd4(&uStack_c0);
                                  if ((int)unaff_x23 == 0 && (uVar2 & 1) == 0) {
                                    pauVar16 = *(undefined1 (**) [16])*param_5;
                                    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                          puVar8 = (undefined8 *)
                                                   (pauVar16[(long)(*piVar29 + 5) + 0x13] + 8);
                                          goto LAB_0377ad30;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)func_0x024d927c(param_5,_DAT_059df8e8,5);
LAB_0377ad30:
                                    uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
                                    pauVar23 = (undefined1 (*) [16])
                                               func_0x036d3908(pauStack_2a0,uVar10,0);
                                    pauVar16 = *(undefined1 (**) [16])*param_5;
                                    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                          puVar8 = (undefined8 *)
                                                   (pauVar16[(long)(*piVar29 + 5) + 0x13] + 8);
                                          goto LAB_0377adb8;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)func_0x024d927c(param_5,_DAT_059df8e8,5);
LAB_0377adb8:
                                    uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
                                    pauVar16 = (undefined1 (*) [16])0x0;
                                    pauVar22 = (undefined1 (*) [16])
                                               func_0x036d3908(pauStack_298,uVar10);
                                    pauVar7 = pauVar23;
                                    unaff_x23 = pauVar21;
                                    pauVar17 = unaff_x26;
                                    if (plStack_2c0 == (long *)0x0) goto LAB_0377bb44;
                                    lVar9 = *plStack_2c0;
                                    uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059e03c0) {
                                          puVar8 = (undefined8 *)
                                                   (lVar9 + (long)*piVar29 * 0x10 + 0x138);
                                          goto LAB_0377ae38;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)
                                             func_0x024d927c(plStack_2c0,_DAT_059e03c0,0);
LAB_0377ae38:
                                    pauVar20 = (undefined1 (*) [16])puVar8[1];
                                    pauVar18 = param_4;
                                    plVar11 = (long *)(*(code *)*puVar8)(plStack_2c0,pauVar23);
                                    if (plVar11 != (long *)0x0) {
                                      plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,uVar3);
                                      uVar10 = func_0x03530c84(param_4,0);
                                      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                        func_0x0249fa64(_DAT_059e2c00);
                                      }
                                      uVar10 = func_0x03530158(uVar10,0);
                                      func_0x03780064(&pauStack_120,param_1,param_5,plVar11,param_3,
                                                      uVar10,0,param_5,2);
                                      lVar9 = _DAT_059c9978;
                                      func_0x054ed0d0(auStack_1c0,&pauStack_120,0x50);
                                      pauVar16 = *(undefined1 (**) [16])*pauVar21;
                                      uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                      if (uVar28 != 0) {
                                        piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                        do {
                                          if (*(long *)(piVar29 + -2) == lVar9) {
                                            puVar8 = (undefined8 *)
                                                     (pauVar16[(long)(*piVar29 + 2) + 0x13] + 8);
                                            goto LAB_0377af34;
                                          }
                                          uVar28 = uVar28 - 1;
                                          piVar29 = piVar29 + 4;
                                        } while (uVar28 != 0);
                                      }
                                      puVar8 = (undefined8 *)func_0x024d927c(pauVar21,lVar9,2);
LAB_0377af34:
                                      pcVar31 = (code *)*puVar8;
                                      func_0x054ed0d0(&pauStack_b0,auStack_1c0,0x50);
                                      (*pcVar31)(pauVar21,&pauStack_b0,puVar8[1]);
                                      lVar9 = *plVar11;
                                      uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                      if (uVar28 != 0) {
                                        piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                                            puVar8 = (undefined8 *)
                                                     (lVar9 + (long)(*piVar29 + 0x1a) * 0x10 + 0x138
                                                     );
                                            goto LAB_0377afb4;
                                          }
                                          uVar28 = uVar28 - 1;
                                          piVar29 = piVar29 + 4;
                                        } while (uVar28 != 0);
                                      }
                                      puVar8 = (undefined8 *)
                                               func_0x024d927c(plVar11,_DAT_059dfbc0,0x1a);
LAB_0377afb4:
                                      unaff_x23 = (undefined1 (*) [16])
                                                  (*(code *)*puVar8)(plVar11,puVar8[1]);
                                      pauVar16 = *(undefined1 (**) [16])*param_5;
                                      uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                      if (uVar28 != 0) {
                                        piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                        do {
                                          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                            puVar8 = (undefined8 *)
                                                     (pauVar16[(long)(*piVar29 + 5) + 0x13] + 8);
                                            goto LAB_0377b01c;
                                          }
                                          uVar28 = uVar28 - 1;
                                          piVar29 = piVar29 + 4;
                                        } while (uVar28 != 0);
                                      }
                                      puVar8 = (undefined8 *)
                                               func_0x024d927c(param_5,_DAT_059df8e8,5);
LAB_0377b01c:
                                      uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
                                      pauVar23 = (undefined1 (*) [16])
                                                 func_0x036d62d4(pauStack_2a0,uVar10,0);
                                      plStack_a8 = (long *)0x0;
                                      pauStack_b0 = (undefined1 (*) [16])0x0;
                                      func_0x0288eb6c(&pauStack_b0,param_5,_DAT_05a29b18);
                                      uVar10 = func_0x0249fb80(_DAT_059d8b40);
                                      pauVar20 = (undefined1 (*) [16])0x0;
                                      pauVar25 = (undefined1 (*) [16])0x0;
                                      param_6 = pauStack_b0;
                                      param_7 = plStack_a8;
                                      func_0x038653bc(uVar10,unaff_x23,_DAT_05ab2e18,pauVar23);
                                      pauVar16 = *(undefined1 (**) [16])*param_5;
                                      uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                      if (uVar28 != 0) {
                                        piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                        do {
                                          if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                                            puVar8 = (undefined8 *)
                                                     (pauVar16[(long)(*piVar29 + 0x65) + 0x13] + 8);
                                            goto LAB_0377b0f0;
                                          }
                                          uVar28 = uVar28 - 1;
                                          piVar29 = piVar29 + 4;
                                        } while (uVar28 != 0);
                                      }
                                      puVar8 = (undefined8 *)
                                               func_0x024d927c(param_5,_DAT_059e0220,0x65);
LAB_0377b0f0:
                                      pauVar18 = (undefined1 (*) [16])puVar8[1];
                                      pauVar22 = (undefined1 (*) [16])0x0;
                                      (*(code *)*puVar8)(param_5,uVar10);
                                      unaff_x26 = (undefined1 (*) [16])
                                                  ((ulong)plStack_2c0 & 0xffffffff);
                                    }
                                  }
                                }
                                uStack_c0 = func_0x0376eb00(param_1);
                                if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059db250);
                                }
                                uVar3 = func_0x0376edd4(&uStack_c0);
                                pauVar16 = unaff_x26;
                                if ((uVar3 & 1) == 0) {
                                  pauVar16 = pauVar22;
                                  pauVar7 = pauVar23;
                                  pauVar17 = pauVar21;
                                  if (pauStack_2b8 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
                                  pauVar16 = *(undefined1 (**) [16])*pauStack_2b8;
                                  pauVar23 = (undefined1 (*) [16])(ulong)(uVar3 ^ 1);
                                  uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                  if (uVar28 != 0) {
                                    piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == _DAT_059df040) {
                                        puVar8 = (undefined8 *)(pauVar16[(long)*piVar29 + 0x13] + 8)
                                        ;
                                        goto LAB_0377b1a0;
                                      }
                                      uVar28 = uVar28 - 1;
                                      piVar29 = piVar29 + 4;
                                    } while (uVar28 != 0);
                                  }
                                  puVar8 = (undefined8 *)
                                           func_0x024d927c(pauStack_2b8,_DAT_059df040,0);
LAB_0377b1a0:
                                  pauVar18 = (undefined1 (*) [16])puVar8[1];
                                  uVar3 = (uint)unaff_x26 & (uVar3 ^ 1);
                                  unaff_x26 = (undefined1 (*) [16])(ulong)uVar3;
                                  pauVar22 = param_4;
                                  lVar9 = (*(code *)*puVar8)(pauStack_2b8,unaff_x29);
                                  pauVar16 = unaff_x26;
                                  if (lVar9 != 0) {
                                    pauStack_2b8 = (undefined1 (*) [16])
                                                   CONCAT44(pauStack_2b8._4_4_,(uint)(lVar9 != 0));
                                    uVar10 = func_0x03530c84(param_4,0);
                                    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                      func_0x0249fa64(_DAT_059e2c00);
                                    }
                                    uVar10 = func_0x03530158(uVar10,0);
                                    func_0x03780064(&pauStack_120,param_1,param_5,unaff_x29,param_3,
                                                    uVar10,1,param_5,2);
                                    lVar9 = _DAT_059c9978;
                                    func_0x054ed0d0(auStack_210,&pauStack_120,0x50);
                                    pauVar16 = *(undefined1 (**) [16])*pauVar21;
                                    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == lVar9) {
                                          puVar8 = (undefined8 *)
                                                   (pauVar16[(long)(*piVar29 + 2) + 0x13] + 8);
                                          goto LAB_0377b2a8;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)func_0x024d927c(pauVar21,lVar9,2);
LAB_0377b2a8:
                                    pcVar31 = (code *)*puVar8;
                                    func_0x054ed0d0(&pauStack_b0,auStack_210,0x50);
                                    (*pcVar31)(pauVar21,&pauStack_b0,puVar8[1]);
                                    lVar9 = *unaff_x29;
                                    uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                                          puVar8 = (undefined8 *)
                                                   (lVar9 + (long)(*piVar29 + 0x1a) * 0x10 + 0x138);
                                          goto LAB_0377b328;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)
                                             func_0x024d927c(unaff_x29,_DAT_059dfbc0,0x1a);
LAB_0377b328:
                                    pauVar23 = (undefined1 (*) [16])
                                               (*(code *)*puVar8)(unaff_x29,puVar8[1]);
                                    pauVar16 = *(undefined1 (**) [16])*param_5;
                                    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                          puVar8 = (undefined8 *)
                                                   (pauVar16[(long)(*piVar29 + 5) + 0x13] + 8);
                                          goto LAB_0377b398;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)func_0x024d927c(param_5,_DAT_059df8e8,5);
LAB_0377b398:
                                    pauStack_2b8 = (undefined1 (*) [16])
                                                   CONCAT44(pauStack_2b8._4_4_,
                                                            uVar3 & (uint)pauStack_2b8);
                                    uVar10 = (*(code *)*puVar8)(param_5,puVar8[1]);
                                    uVar10 = func_0x036d62d4(pauStack_2a0,uVar10,0);
                                    plStack_a8 = (long *)0x0;
                                    pauStack_b0 = (undefined1 (*) [16])0x0;
                                    func_0x0288eb6c(&pauStack_b0,param_5,_DAT_05a29b18);
                                    unaff_x26 = (undefined1 (*) [16])func_0x0249fb80(_DAT_059d8b40);
                                    pauVar20 = (undefined1 (*) [16])0x1;
                                    pauVar25 = (undefined1 (*) [16])0x0;
                                    param_6 = pauStack_b0;
                                    param_7 = plStack_a8;
                                    func_0x038653bc(unaff_x26,pauVar23,_DAT_05ab2e18,uVar10);
                                    pauVar16 = *(undefined1 (**) [16])*param_5;
                                    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059e0220) {
                                          puVar8 = (undefined8 *)
                                                   (pauVar16[(long)(*piVar29 + 0x65) + 0x13] + 8);
                                          goto LAB_0377b480;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    puVar8 = (undefined8 *)
                                             func_0x024d927c(param_5,_DAT_059e0220,0x65);
LAB_0377b480:
                                    pauVar18 = (undefined1 (*) [16])puVar8[1];
                                    pauVar22 = (undefined1 (*) [16])0x0;
                                    (*(code *)*puVar8)(param_5,unaff_x26);
                                    unaff_x23 = (undefined1 (*) [16])&DAT_059c9978;
                                    pauVar21 = param_3;
                                    pauVar16 = pauStack_2b8;
                                  }
                                }
                                if (((ulong)pauVar16 & 1) != 0) goto LAB_0377ba68;
                                pauVar16 = *(undefined1 (**) [16])*param_5;
                                uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                if (uVar28 != 0) {
                                  piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                  do {
                                    if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                      puVar8 = (undefined8 *)
                                               (pauVar16[(long)(*piVar29 + 5) + 0x13] + 8);
                                      goto LAB_0377b4f4;
                                    }
                                    uVar28 = uVar28 - 1;
                                    piVar29 = piVar29 + 4;
                                  } while (uVar28 != 0);
                                }
                                pauVar22 = (undefined1 (*) [16])0x5;
                                puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_0377b4f4:
                                pauVar12 = (undefined1 (*) [16])
                                           (*(code *)*puVar8)(param_5,puVar8[1]);
                                pauVar16 = pauVar22;
                                pauVar7 = pauVar23;
                                pauVar17 = pauVar21;
                                if (pauVar12 != (undefined1 (*) [16])0x0) {
                                  pauVar16 = *(undefined1 (**) [16])*pauVar12;
                                  uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                  if (uVar28 != 0) {
                                    piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
                                        puVar8 = (undefined8 *)
                                                 (pauVar16[(long)(*piVar29 + 2) + 0x13] + 8);
                                        goto LAB_0377b560;
                                      }
                                      uVar28 = uVar28 - 1;
                                      piVar29 = piVar29 + 4;
                                    } while (uVar28 != 0);
                                  }
                                  pauVar22 = (undefined1 (*) [16])0x2;
                                  puVar8 = (undefined8 *)func_0x024d927c(pauVar12);
LAB_0377b560:
                                  lVar9 = (*(code *)*puVar8)(pauVar12,puVar8[1]);
                                  pauVar16 = pauVar22;
                                  pauVar7 = pauVar12;
                                  pauVar17 = (undefined1 (*) [16])&DAT_059c9978;
                                  if (lVar9 != 0) {
                                    pauVar16 = *(undefined1 (**) [16])*param_5;
                                    uVar3 = *(uint *)(lVar9 + 0x118);
                                    param_2 = (undefined1 (*) [16])(ulong)uVar3;
                                    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                    if (uVar28 != 0) {
                                      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
                                          puVar8 = (undefined8 *)
                                                   (pauVar16[(long)(*piVar29 + 5) + 0x13] + 8);
                                          goto LAB_0377b5d0;
                                        }
                                        uVar28 = uVar28 - 1;
                                        piVar29 = piVar29 + 4;
                                      } while (uVar28 != 0);
                                    }
                                    pauVar22 = (undefined1 (*) [16])0x5;
                                    puVar8 = (undefined8 *)func_0x024d927c(param_5);
LAB_0377b5d0:
                                    plVar11 = (long *)(*(code *)*puVar8)(param_5,puVar8[1]);
                                    pauVar16 = pauVar22;
                                    if (plVar11 != (long *)0x0) {
                                      lVar9 = *plVar11;
                                      uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                      if (uVar28 != 0) {
                                        piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar29 + -2) == _DAT_059dfe60) {
                                            puVar8 = (undefined8 *)
                                                     (lVar9 + (long)(*piVar29 + 0x2c) * 0x10 + 0x138
                                                     );
                                            goto LAB_0377b63c;
                                          }
                                          uVar28 = uVar28 - 1;
                                          piVar29 = piVar29 + 4;
                                        } while (uVar28 != 0);
                                      }
                                      pauVar22 = (undefined1 (*) [16])0x2c;
                                      puVar8 = (undefined8 *)func_0x024d927c(plVar11);
LAB_0377b63c:
                                      pauVar7 = (undefined1 (*) [16])
                                                (*(code *)*puVar8)(plVar11,puVar8[1]);
                                      pauVar21 = (undefined1 (*) [16])func_0x0352bc50(0);
                                      pauVar16 = pauVar22;
                                      if (pauVar7 != (undefined1 (*) [16])0x0) {
                                        pauVar16 = *(undefined1 (**) [16])*pauVar7;
                                        uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                                        if (uVar28 != 0) {
                                          piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                                          do {
                                            if (*(long *)(piVar29 + -2) == _DAT_059cd9b8) {
                                              puVar8 = (undefined8 *)
                                                       (pauVar16[(long)(*piVar29 + 1) + 0x13] + 8);
                                              goto LAB_0377b6b4;
                                            }
                                            uVar28 = uVar28 - 1;
                                            piVar29 = piVar29 + 4;
                                          } while (uVar28 != 0);
                                        }
                                        puVar8 = (undefined8 *)
                                                 func_0x024d927c(pauVar7,_DAT_059cd9b8,1);
LAB_0377b6b4:
                                        pauVar18 = (undefined1 (*) [16])puVar8[1];
                                        pauVar16 = (undefined1 (*) [16])&lStack_c8;
                                        uVar28 = (*(code *)*puVar8)(pauVar7,pauVar21);
                                        unaff_x26 = pauVar21;
                                        if ((uVar28 & 1) != 0) {
                                          if (lStack_c8 == 0) goto LAB_0377bb44;
                                          pauVar16 = (undefined1 (*) [16])&uStack_cc;
                                          pauVar18 = (undefined1 (*) [16])0x0;
                                          uVar28 = func_0x0352bd04(lStack_c8,param_5);
                                          uVar2 = uStack_cc;
                                          if ((uVar28 & 1) == 0) {
                                            uVar2 = uVar3;
                                          }
                                          param_2 = (undefined1 (*) [16])(ulong)uVar2;
                                        }
                                        lVar9 = *unaff_x29;
                                        uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                        if (uVar28 != 0) {
                                          piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                                              puVar8 = (undefined8 *)
                                                       (lVar9 + (long)(*piVar29 + 0x1e) * 0x10 +
                                                       0x138);
                                              goto LAB_0377b748;
                                            }
                                            uVar28 = uVar28 - 1;
                                            piVar29 = piVar29 + 4;
                                          } while (uVar28 != 0);
                                        }
                                        pauVar16 = (undefined1 (*) [16])0x1e;
                                        puVar8 = (undefined8 *)func_0x024d927c(unaff_x29);
LAB_0377b748:
                                        iVar4 = (*(code *)*puVar8)(unaff_x29,puVar8[1]);
                                        if (iVar4 <= (int)param_2) {
LAB_0377ba68:
                                          pauVar16 = pauStack_2a0;
                                          lVar9 = func_0x036d5ffc(pauStack_2a0,0);
                                          if (lVar9 != 0) {
                                            uVar10 = *(undefined8 *)param_1[3];
                                            uVar6 = func_0x036d392c(pauVar16,0);
                                            func_0x0374def0(lVar9,param_5,uVar10,uVar6,0);
                                          }
                                          lVar9 = func_0x036d5ffc(pauStack_298,0);
                                          if (lVar9 != 0) {
                                            uVar10 = *(undefined8 *)param_1[3];
                                            uVar6 = func_0x036d392c(pauStack_298,0);
                                            func_0x0374def0(lVar9,param_5,uVar10,uVar6,0);
                                          }
                                          lVar9 = *(long *)(param_1[4] + 8);
                                          if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
                                            func_0x0249fa64();
                                          }
                                          uVar10 = func_0x045a9a8c(lVar9 + 1,lVar9,0);
                                          *(undefined8 *)(param_1[4] + 8) = uVar10;
                                          uVar28 = func_0x037858d4(param_1,param_5,unaff_x27);
                                          return uVar28;
                                        }
                                        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                                          func_0x0249fa64();
                                        }
                                        uVar28 = func_0x036c12a4(unaff_x29,0);
                                        if ((uVar28 & 1) != 0) goto LAB_0377ba68;
                                        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                                          func_0x0249fa64();
                                        }
                                        uVar28 = func_0x036c13b8(unaff_x29,0);
                                        if ((uVar28 & 1) != 0) goto LAB_0377ba68;
                                        if (plStack_2a8 != (long *)0x0) {
                                          lVar9 = *plStack_2a8;
                                          uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                          if (uVar28 != 0) {
                                            piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar29 + -2) == _DAT_059dfe38) {
                                                puVar8 = (undefined8 *)
                                                         (lVar9 + (long)(*piVar29 + 1) * 0x10 +
                                                         0x138);
                                                goto LAB_0377b810;
                                              }
                                              uVar28 = uVar28 - 1;
                                              piVar29 = piVar29 + 4;
                                            } while (uVar28 != 0);
                                          }
                                          puVar8 = (undefined8 *)
                                                   func_0x024d927c(plStack_2a8,_DAT_059dfe38,1);
LAB_0377b810:
                                          lVar9 = (*(code *)*puVar8)(plStack_2a8,puVar8[1]);
                                          if (lVar9 == 0) goto LAB_0377ba68;
                                          uVar10 = func_0x022bffa8(1,_DAT_059dfe38,plStack_2a8);
                                          pauStack_220 = (undefined1 (*) [16])0x0;
                                          uStack_218 = 0;
                                          func_0x0371f100(&pauStack_220,pauStack_2a0,param_1,0);
                                          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                                            func_0x0249fa64();
                                          }
                                          uStack_118 = uStack_218;
                                          pauStack_120 = pauStack_220;
                                          func_0x0288f218(&pauStack_120,&pauStack_b0,_DAT_05a29e48);
                                          pauVar18 = (undefined1 (*) [16])0x0;
                                          pauVar20 = (undefined1 (*) [16])0x0;
                                          plStack_238 = plStack_a8;
                                          pauStack_240 = pauStack_b0;
                                          uStack_230 = uStack_a0;
                                          pauVar7 = (undefined1 (*) [16])
                                                    func_0x0371f1bc(uVar10,param_5,&pauStack_240);
                                          if (pauVar7 == (undefined1 (*) [16])0x0)
                                          goto LAB_0377ba68;
                                          pauVar16 = param_5;
                                          pauVar21 = (undefined1 (*) [16])
                                                     func_0x022bffa8(5,_DAT_059df8e8);
                                          if ((pauVar21 != (undefined1 (*) [16])0x0) &&
                                             (lVar9 = func_0x022bffa8(2,_DAT_059dfe60),
                                             pauVar16 = pauVar21, lVar9 != 0)) {
                                            if (*(char *)(lVar9 + 0x12d) != '\0') {
                                              if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                                                func_0x0249fa64();
                                              }
                                              uVar28 = func_0x036c12a4(pauVar7,0);
                                              if ((uVar28 & 1) != 0) goto LAB_0377ba68;
                                            }
                                            uVar10 = func_0x03530c84(param_4,0);
                                            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                              func_0x0249fa64(_DAT_059e2c00);
                                            }
                                            uVar10 = func_0x03530158(uVar10,0);
                                            func_0x03780064(&pauStack_b0,param_1,param_5,pauVar7,
                                                            param_3,uVar10,0,param_5,2);
                                            lVar9 = _DAT_059c9978;
                                            func_0x054ed0d0(auStack_290,&pauStack_b0,0x50);
                                            func_0x0240cde0(2,lVar9,pauStack_2b0,auStack_290);
                                            uVar10 = func_0x022bffa8(0x1a,_DAT_059dfbc0,pauVar7);
                                            uVar13 = func_0x022bffa8(5,_DAT_059df8e8,param_5);
                                            uVar13 = func_0x036d62d4(pauStack_2a0,uVar13,0);
                                            pauStack_120 = (undefined1 (*) [16])0x0;
                                            uStack_118 = 0;
                                            func_0x0288eb6c(&pauStack_120,param_5,_DAT_05a29b18);
                                            uVar30 = func_0x0249fb80(_DAT_059d8b40);
                                            func_0x038653bc(uVar30,uVar10,_DAT_05ab2e18,uVar13,0,
                                                            pauStack_120,uStack_118,0);
                                            func_0x02403244(0x65,_DAT_059e0220,param_5,uVar30,0);
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
                pauVar7 = pauVar22;
                if (plVar11 != (long *)0x0) {
                  lVar9 = *plVar11;
                  uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar28 != 0) {
                    piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar29 + 0x12) * 0x10 + 0x138);
                        goto LAB_0377a464;
                      }
                      uVar28 = uVar28 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar28 != 0);
                  }
                  pauVar16 = (undefined1 (*) [16])0x12;
                  puVar8 = (undefined8 *)func_0x024d927c(plVar11);
LAB_0377a464:
                  pauVar22 = (undefined1 (*) [16])(*(code *)*puVar8)(plVar11,puVar8[1]);
                  if (pauVar22 != (undefined1 (*) [16])0x0) {
                    pauVar7 = *(undefined1 (**) [16])*pauVar22;
                    uVar28 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                    if (uVar28 != 0) {
                      piVar29 = (int *)(*(long *)pauVar7[0xb] + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == _DAT_059df2a8) {
                          puVar8 = (undefined8 *)(pauVar7[(long)*piVar29 + 0x13] + 8);
                          goto LAB_0377a4c4;
                        }
                        uVar28 = uVar28 - 1;
                        piVar29 = piVar29 + 4;
                      } while (uVar28 != 0);
                    }
                    pauVar16 = (undefined1 (*) [16])0x0;
                    puVar8 = (undefined8 *)func_0x024d927c(pauVar22);
LAB_0377a4c4:
                    uVar28 = (*(code *)*puVar8)(pauVar22,puVar8[1]);
                    if ((uVar28 & 1) == 0) goto LAB_0377a51c;
                    lVar9 = *plVar11;
                    uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar28 != 0) {
                      piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
                          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar29 + 0x12) * 0x10 + 0x138);
                          goto LAB_0377a650;
                        }
                        uVar28 = uVar28 - 1;
                        piVar29 = piVar29 + 4;
                      } while (uVar28 != 0);
                    }
                    pauVar16 = (undefined1 (*) [16])0x12;
                    puVar8 = (undefined8 *)func_0x024d927c(plVar11);
LAB_0377a650:
                    pauVar21 = (undefined1 (*) [16])(*(code *)*puVar8)(plVar11,puVar8[1]);
                    pauVar23 = pauStack_2a0;
                    pauVar7 = pauVar22;
                    if (pauVar21 != (undefined1 (*) [16])0x0) {
                      pauVar7 = *(undefined1 (**) [16])*pauVar21;
                      uVar28 = (ulong)*(ushort *)(pauVar7[0x12] + 0xe);
                      if (uVar28 != 0) {
                        piVar29 = (int *)(*(long *)pauVar7[0xb] + 8);
                        do {
                          if (*(long *)(piVar29 + -2) == _DAT_059df2a8) {
                            puVar8 = (undefined8 *)(pauVar7[(long)(*piVar29 + 1) + 0x13] + 8);
                            goto LAB_0377a6b8;
                          }
                          uVar28 = uVar28 - 1;
                          piVar29 = piVar29 + 4;
                        } while (uVar28 != 0);
                      }
                      pauVar16 = (undefined1 (*) [16])0x1;
                      puVar8 = (undefined8 *)func_0x024d927c(pauVar21);
LAB_0377a6b8:
                      pauVar22 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar21,puVar8[1]);
                      pauVar7 = pauVar21;
                      unaff_x26 = pauVar23;
                      if (pauVar22 != (undefined1 (*) [16])0x0) {
                        pauVar16 = *(undefined1 (**) [16])*pauVar22;
                        uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
                        if (uVar28 != 0) {
                          piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
                          do {
                            if (*(long *)(piVar29 + -2) == _DAT_059df2c0) {
                              puVar8 = (undefined8 *)(pauVar16[(long)(*piVar29 + 2) + 0x13] + 8);
                              goto LAB_0377a724;
                            }
                            uVar28 = uVar28 - 1;
                            piVar29 = piVar29 + 4;
                          } while (uVar28 != 0);
                        }
                        puVar8 = (undefined8 *)func_0x024d927c(pauVar22,_DAT_059df2c0,2);
LAB_0377a724:
                        pauVar25 = (undefined1 (*) [16])puVar8[1];
                        param_7 = (long *)acStack_b4;
                        pauVar16 = pauVar23;
                        pauVar18 = pauStack_298;
                        pauVar20 = param_5;
                        param_6 = param_4;
                        unaff_x27 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar22,unaff_x27);
                        if ((unaff_x27 != (undefined1 (*) [16])0x0) &&
                           (*(undefined1 (**) [16])*unaff_x27 != _DAT_059e2700)) goto LAB_0377bb48;
                        unaff_x23 = (undefined1 (*) [16])0x1;
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
    uVar28 = func_0x036c0cb8(plVar11,0);
    pauVar22 = pauVar21;
    if ((uVar28 & 1) == 0) {
      pauVar22 = (undefined1 (*) [16])0x0;
    }
    pauVar7 = pauVar22;
    if ((uVar28 & 1) == 0) goto LAB_0377a220;
    if (plVar11 == (long *)0x0) goto LAB_0377bb44;
    lVar9 = *plVar11;
    uVar28 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar29 + 2) * 0x10 + 0x138);
          goto LAB_0377a534;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar16 = (undefined1 (*) [16])0x2;
    puVar8 = (undefined8 *)func_0x024d927c(plVar11);
LAB_0377a534:
    pauVar21 = (undefined1 (*) [16])(*(code *)*puVar8)(plVar11,puVar8[1]);
    if (pauVar21 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar23 = *(undefined1 (**) [16])*pauVar21;
    uVar28 = (ulong)*(ushort *)(pauVar23[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar23[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfe38) {
          puVar8 = (undefined8 *)(pauVar23[(long)*piVar29 + 0x13] + 8);
          goto LAB_0377a59c;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar16 = (undefined1 (*) [16])0x0;
    puVar8 = (undefined8 *)func_0x024d927c(pauVar21);
LAB_0377a59c:
    pauVar23 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar21,puVar8[1]);
    unaff_x26 = pauVar21;
    if (pauVar23 == (undefined1 (*) [16])0x0) goto LAB_0377bb44;
    pauVar16 = *(undefined1 (**) [16])*pauVar23;
    uVar28 = (ulong)*(ushort *)(pauVar16[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar16[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfe68) {
          puVar8 = (undefined8 *)(pauVar16[(long)(*piVar29 + 1) + 0x13] + 8);
          goto LAB_0377a600;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(pauVar23,_DAT_059dfe68,1);
LAB_0377a600:
    param_7 = (long *)puVar8[1];
    pauVar16 = param_1;
    pauVar18 = pauStack_298;
    pauVar20 = pauStack_2a0;
    param_6 = param_4;
    unaff_x27 = (undefined1 (*) [16])(*(code *)*puVar8)(pauVar23,param_5);
    pauVar21 = pauVar22;
    if ((unaff_x27 == (undefined1 (*) [16])0x0) ||
       (*(undefined1 (**) [16])*unaff_x27 == _DAT_059e2700)) goto LAB_0377a324;
  }
LAB_0377bb48:
  auVar33 = func_0x0249ff10(unaff_x27);
  plVar15 = auVar33._8_8_;
  lVar9 = auVar33._0_8_;
  uStack_328 = 0x377bb50;
  plStack_330 = plVar11;
  pauStack_320 = param_2;
  pauStack_318 = unaff_x27;
  pauStack_310 = pauVar23;
  pauStack_308 = param_8;
  pauStack_300 = param_4;
  pauStack_2f8 = unaff_x23;
  pauStack_2f0 = param_3;
  pauStack_2e8 = pauVar22;
  pauStack_2e0 = param_1;
  pauStack_2d8 = param_5;
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
  uStack_394 = 0;
  uStack_3a0 = 0;
  pauStack_3b0 = (undefined1 (*) [16])0x0;
  pauStack_3b8 = (undefined1 (*) [16])0x0;
  pauStack_3a8 = (undefined1 (*) [16])0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  pauStack_3d8 = (undefined1 (*) [16])0x0;
  pauStack_3e0 = (undefined1 (*) [16])0x0;
  uStack_3c8 = 0;
  pauStack_3d0 = (undefined1 (*) [16])0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  pauStack_438 = (undefined1 (*) [16])0x0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  *(undefined1 (**) [16])*pauVar25 = (undefined1 (*) [16])0x0;
  *(undefined1 (**) [16])((long)*pauVar25 + 8) = (undefined1 (*) [16])0x0;
  pauVar7 = (undefined1 (*) [16])func_0x0376e450(lVar9,pauVar16);
  if (pauVar7 == (undefined1 (*) [16])0x0) {
    return 0;
  }
  pauVar17 = (undefined1 (*) [16])0x0;
  uVar28 = func_0x036ee320(pauVar7,plVar15,0);
  if ((uVar28 & 1) == 0) {
    return uVar28;
  }
  pauVar21 = (undefined1 (*) [16])0x5e2d000;
  if (plVar15 == (long *)0x0) goto LAB_0377d6d0;
  lVar24 = *plVar15;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
        goto LAB_0377bdfc;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377bdfc:
  uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  uVar10 = func_0x036d3908(pauVar7,uVar10,0);
  if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e1498);
  }
  uVar28 = func_0x036c700c(uVar10,pauVar7,plVar15,0);
  if ((uVar28 & 1) == 0) {
    lVar24 = *plVar15;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_0377bea8;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377bea8:
    uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    uVar28 = func_0x036ed7f4(pauVar7,uVar10,0);
    if ((uVar28 & 1) == 0) {
      return uVar28;
    }
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  auVar34 = func_0x0364aa28(plVar15,lVar9,pauVar7,0);
  ppauVar27 = (undefined1 (**) [16])((long)*pauVar25 + 8);
  *pauVar25 = auVar34;
  func_0x0249f888(ppauVar27,0);
  pauStack_6d8 = *ppauVar27;
  if (pauStack_6d8 == (undefined1 (*) [16])0x0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)((long)pauStack_6d8[1] + 0xc);
  }
  pauStack_6e0 = (undefined1 (*) [16])CONCAT44(pauStack_6e0._4_4_,uVar6);
  uVar3 = func_0x03778bf0(lVar9,plVar15);
  uVar3 = func_0x036dbb6c(pauVar7,uVar3 & 1,plVar15,0);
  uStack_394 = uVar3;
  plVar11 = (long *)func_0x0249fb80(_DAT_059cf978);
  func_0x0282ee2c(plVar11,_DAT_05a15790);
  lVar24 = *plVar15;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
        goto LAB_0377bfcc;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377bfcc:
  uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  pauVar21 = (undefined1 (*) [16])func_0x036dd33c(pauVar7,uVar10,0);
  lVar24 = *plVar15;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
        goto LAB_0377c044;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377c044:
  uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  pauVar17 = (undefined1 (*) [16])0x0;
  uVar28 = func_0x036ed7f4(pauVar7,uVar10,0);
  if ((uVar28 & 1) == 0) {
    if (pauVar21 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
    pauVar17 = *(undefined1 (**) [16])*pauVar21;
    uVar28 = (ulong)*(ushort *)(pauVar17[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar17[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059e0210) {
          puVar8 = (undefined8 *)(pauVar17[(long)*piVar29 + 0x13] + 8);
          goto LAB_0377c0bc;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(pauVar21,_DAT_059e0210,0);
LAB_0377c0bc:
    uVar10 = (*(code *)*puVar8)(pauVar21,pauVar16,lVar9,puVar8[1]);
    pauVar17 = _DAT_05a43a40;
    uVar10 = func_0x026eb75c(uVar10,uVar3,_DAT_05a43a40);
    if (pauVar20 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
    pauVar17 = *(undefined1 (**) [16])*pauVar20;
    uVar28 = (ulong)*(ushort *)(pauVar17[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar17[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(pauVar17[(long)(*piVar29 + 3) + 0x13] + 8);
          goto LAB_0377c14c;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(pauVar20,_DAT_059df8e8,3);
LAB_0377c14c:
    uVar13 = (*(code *)*puVar8)(pauVar20,puVar8[1]);
    pauVar17 = _DAT_05a48500;
    plVar11 = (long *)func_0x027060e0(uVar10,uVar13,_DAT_05a48500);
  }
  if (pauVar21 == (undefined1 (*) [16])0x0) {
LAB_0377c1b0:
    if (plVar11 == (long *)0x0) goto LAB_0377d6d0;
    lVar24 = *plVar11;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_0377c208;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar17 = (undefined1 (*) [16])0x0;
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059c98a0,0);
LAB_0377c208:
    iVar4 = (*(code *)*puVar8)(plVar11,puVar8[1]);
    if (iVar4 < 1 || (int)uVar3 < 1) {
      lVar24 = *plVar15;
      uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_0377c278;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377c278:
      uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      pauVar17 = (undefined1 (*) [16])0x0;
      uVar28 = func_0x036ed7f4(pauVar7,uVar10,0);
      if ((uVar28 & 1) == 0) {
        return uVar28;
      }
    }
  }
  else if (((byte)(*(undefined1 (**) [16])*pauVar21)[0x13][0] < *(byte *)(_DAT_059dda40 + 0x130)) ||
          (*(long *)(*(long *)((*(undefined1 (**) [16])*pauVar21)[0xc] + 8) +
                     (ulong)*(byte *)(_DAT_059dda40 + 0x130) * 8 + -8) != _DAT_059dda40))
  goto LAB_0377c1b0;
  iVar4 = func_0x036dd320(pauVar7,0);
  if (iVar4 < 1) {
    if (plVar11 == (long *)0x0) goto LAB_0377d6d0;
    lVar24 = *plVar11;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_0377c37c;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059c98a0,0);
LAB_0377c37c:
    iVar4 = (*(code *)*puVar8)(plVar11,puVar8[1]);
    lVar24 = *plVar11;
    uVar1 = *(ushort *)(lVar24 + 0x12e);
    uVar28 = (ulong)uVar1;
    if (iVar4 < (int)uVar3) {
      if (uVar1 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059c98a0) {
            puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_0377c410;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059c98a0,0);
LAB_0377c410:
      (*(code *)*puVar8)(plVar11,puVar8[1]);
SUB_0377d73c:
      if ((bRam0000000005e2dfcd & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2ba0);
        func_0x0249f8e4(&DAT_059e46b8);
        bRam0000000005e2dfcd = 1;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar28 = func_0x03639d34(auVar33._8_8_,0x2d,0);
      if ((uVar28 & 1) != 0) {
        lVar24 = *(long *)(auVar33._0_8_ + 0x88);
        lVar9 = func_0x03530c84(pauVar18,0);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e2ba0);
        }
        if ((bRam0000000005e3238c & 1) == 0) {
          func_0x0249f8e4(&DAT_059e2ba0,lVar9,0);
          bRam0000000005e3238c = 1;
        }
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        return (ulong)(lVar9 < lVar24);
      }
      return 0;
    }
    if (uVar1 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_0377c92c;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059c98a0,0);
LAB_0377c92c:
    iVar4 = (*(code *)*puVar8)(plVar11,puVar8[1]);
    if (iVar4 < (int)uVar3) {
      uVar10 = func_0x022bffa8(5,_DAT_059df8e8,plVar15);
      uVar28 = func_0x036ed7f4(pauVar7,uVar10,0);
      if ((uVar28 & 1) == 0) {
        return uVar28;
      }
    }
    if ((param_7 == (long *)0x0) ||
       (uVar28 = func_0x0376d3b8(param_7,plVar15,*(undefined8 *)(lVar9 + 0x30)), (int)uVar28 == 0))
    {
      uVar28 = func_0x036daf18(pauVar7,pauVar18,plVar15,uVar6,0);
    }
  }
  else {
    if (plVar11 == (long *)0x0) goto LAB_0377d6d0;
    lVar24 = *plVar11;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_0377c350;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059c98a0,0);
LAB_0377c350:
    uVar5 = (*(code *)*puVar8)(plVar11,puVar8[1]);
    uVar3 = func_0x03778bf0(lVar9,plVar15);
    uVar28 = func_0x036db608(pauVar7,uVar5,plVar15,uVar6,uVar3 & 1,&uStack_394,0);
  }
  iVar4 = (int)uVar28;
  if (1 < iVar4 - 1U) {
    return uVar28;
  }
  lVar24 = *plVar15;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
        goto LAB_0377c4b8;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377c4b8:
  uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  pauStack_6e0 = (undefined1 (*) [16])func_0x036d3908(pauVar7,uVar10,0);
  lVar24 = *plVar15;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
        goto LAB_0377c530;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377c530:
  uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  pauVar22 = (undefined1 (*) [16])0x0;
  uVar28 = func_0x036edd98(pauVar7,uVar10,0);
  pauVar21 = pauStack_6e0;
  if ((uVar28 & 1) == 0) {
    lVar24 = *plVar15;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_0377c5f8;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377c5f8:
    uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    pauVar17 = (undefined1 (*) [16])0x0;
    uVar28 = func_0x036edf9c(pauVar7,uVar10,0);
    if ((uVar28 & 1) != 0) {
      if (pauStack_6e0 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      pauVar17 = pauStack_6e0;
      pauVar22 = (undefined1 (*) [16])func_0x022bffa8(9,_DAT_059dfbc0,pauStack_6e0);
      if (pauVar22 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      uVar28 = func_0x022bffa8(3,_DAT_059e0158,pauVar22);
      goto LAB_0377c6e4;
    }
    pauVar21 = (undefined1 (*) [16])0x2;
  }
  else {
    pauVar17 = pauVar22;
    if (pauStack_6e0 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
    pauVar17 = *(undefined1 (**) [16])*pauStack_6e0;
    uVar28 = (ulong)*(ushort *)(pauVar17[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar17[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
          puVar8 = (undefined8 *)(pauVar17[(long)(*piVar29 + 3) + 0x13] + 8);
          goto LAB_0377c66c;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar22 = (undefined1 (*) [16])0x3;
    puVar8 = (undefined8 *)func_0x024d927c(pauStack_6e0,_DAT_059dfbc0,3);
LAB_0377c66c:
    plVar14 = (long *)(*(code *)*puVar8)(pauStack_6e0,puVar8[1]);
    pauVar17 = pauVar22;
    if (plVar14 == (long *)0x0) goto LAB_0377d6d0;
    lVar24 = *plVar14;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059deb70) {
          puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_0377c6d8;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar22 = (undefined1 (*) [16])0x5;
    puVar8 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059deb70,5);
LAB_0377c6d8:
    uVar28 = (*(code *)*puVar8)(plVar14,puVar8[1]);
LAB_0377c6e4:
    pauVar21 = (undefined1 (*) [16])(uVar28 & 0xffffffff);
    pauVar17 = pauVar22;
  }
  if ((param_7 == (long *)0x0) ||
     (pauVar22 = (undefined1 (*) [16])param_7[2], pauVar22 == (undefined1 (*) [16])0x0)) {
    lVar24 = *plVar15;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
          goto LAB_0377c758;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377c758:
    uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    pauVar17 = (undefined1 (*) [16])0x0;
    uVar28 = func_0x036ed7f4(pauVar7,uVar10,0);
    if ((uVar28 & 1) != 0) goto LAB_0377d1f0;
    uVar10 = func_0x022bffa8(0xc,_DAT_059e0220,plVar15);
    pauStack_388 = (undefined1 (*) [16])0x0;
    pauStack_390 = (undefined1 (*) [16])0x0;
    func_0x0371f100(&pauStack_390,pauVar7,lVar9,0);
    uVar10 = func_0x036dd080(pauVar7,pauVar20,plVar15,uVar10,pauStack_390,pauStack_388,0);
    uVar28 = func_0x036cf0a0(uVar10,plVar15,1,&uStack_3a0,0);
    if ((uVar28 & 1) == 0) {
      pauStack_388 = (undefined1 (*) [16])0x0;
      pauStack_390 = (undefined1 (*) [16])0x0;
      func_0x0371f100(&pauStack_390,pauVar7,lVar9,0);
      uVar10 = func_0x022bffa8(0xc,_DAT_059e0220,plVar15);
      uVar13 = func_0x026e290c(uStack_3a0,_DAT_05a41860);
    }
    else {
      pauStack_388 = (undefined1 (*) [16])0x0;
      pauStack_390 = (undefined1 (*) [16])0x0;
      func_0x0371f100(&pauStack_390,pauVar7,lVar9,0);
      uVar10 = func_0x022bffa8(0xc,_DAT_059e0220,plVar15);
      uVar13 = 0;
    }
    pauVar17 = pauStack_390;
    pauVar22 = (undefined1 (*) [16])
               func_0x036dcbd4(pauVar7,pauVar20,pauStack_390,pauStack_388,plVar15,uVar10,uVar13,0);
    if (pauVar22 == (undefined1 (*) [16])0x0) goto LAB_0377d1f0;
    uStack_6f4 = 0;
  }
  else {
    uStack_6f4 = 1;
  }
  if (pauStack_6d8 == (undefined1 (*) [16])0x0) goto LAB_0377cad0;
  lVar24 = *plVar15;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 3) * 0x10 + 0x138);
        goto LAB_0377c9bc;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,3);
LAB_0377c9bc:
  uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  uVar5 = func_0x03496864(uVar10,0);
  uVar6 = *(undefined4 *)pauStack_6d8[2];
  if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059dd500);
  }
  uVar28 = func_0x043bea48(uVar5,uVar6,0);
  if ((uVar28 & 1) == 0) {
LAB_0377ca94:
    if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    pauVar17 = pauVar22;
    auVar33 = func_0x0364afe0(plVar15,lVar9,pauVar22,0);
    *pauVar25 = auVar33;
  }
  else {
    func_0x0377d80c(&pauStack_390,plVar15,lVar9,pauStack_6e0,pauVar22,*(undefined4 *)*pauVar25,
                    pauStack_6d8);
    pauStack_3d8 = pauStack_388;
    pauStack_3e0 = pauStack_390;
    uStack_3c8 = uStack_378;
    pauStack_3d0 = pauStack_380;
    if (*(int *)(_DAT_059d3bc0 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    pauVar17 = _DAT_05a29190;
    uVar28 = func_0x0288eda8(&pauStack_3e0,&pauStack_3b8,_DAT_05a29190);
    if ((uVar28 & 1) == 0) goto LAB_0377ca94;
    pauStack_380 = pauStack_3a8;
    pauStack_388 = pauStack_3b0;
    pauStack_390 = pauStack_3b8;
    *(undefined1 (**) [16])((long)*pauVar25 + 8) = pauStack_3a8;
    *(undefined1 (**) [16])*pauVar25 = pauStack_3b0;
    pauVar22 = pauStack_3b8;
  }
  func_0x0249f888(ppauVar27,0);
LAB_0377cad0:
  if (param_7 == (long *)0x0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_7[3];
    if ((pauStack_6d8 != (undefined1 (*) [16])0x0) && (lVar24 != 0)) {
      pauVar17 = (undefined1 (*) [16])0x0;
      func_0x0389298c(lVar24,*(undefined4 *)((long)pauStack_6d8[1] + 8),0);
    }
  }
  iStack_6f0 = iVar4;
  if (pauVar22 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
  pauVar25 = *(undefined1 (**) [16])*pauVar22;
  uVar28 = (ulong)*(ushort *)(pauVar25[0x12] + 0xe);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)pauVar25[0xb] + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
        puVar8 = (undefined8 *)(pauVar25[(long)(*piVar29 + 0xe) + 0x13] + 8);
        goto LAB_0377cb5c;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(pauVar22,_DAT_059dfbc0,0xe);
LAB_0377cb5c:
  plVar14 = (long *)(*(code *)*puVar8)(pauVar22,puVar8[1]);
  if (plVar14 != (long *)0x0) {
    lVar26 = *plVar14;
    uVar28 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df1f0) {
          puVar8 = (undefined8 *)(lVar26 + (long)(*piVar29 + 3) * 0x10 + 0x138);
          goto LAB_0377cbc8;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059df1f0,3);
LAB_0377cbc8:
    uVar28 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    if ((uVar28 & 1) != 0) {
      uVar10 = func_0x0249fb80(_DAT_059dac08);
      func_0x0373956c(uVar10,plVar15,lVar9,9,0);
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      func_0x034ba874(&uStack_430,0x18,pauVar16,**(undefined8 **)(_DAT_059db250 + 0xb8),pauVar18,
                      pauVar22,0,0,0);
      uVar6 = func_0x022bffa8(0x1f,_DAT_059dfbc0,pauVar22);
      pauVar25 = (undefined1 (*) [16])func_0x0249fb80(_DAT_059e1488);
      func_0x03516a08(pauVar25,uVar6,0);
      lVar24 = func_0x022bffa8(0xe,_DAT_059dfbc0,pauVar22);
      pauVar17 = pauVar22;
      pauVar21 = pauVar18;
      if (lVar24 == 0) goto LAB_0377d6d0;
      pauVar22 = (undefined1 (*) [16])func_0x022bffa8(1,_DAT_059df1f0,lVar24);
      uVar32 = *(undefined8 *)(lVar9 + 0x30);
      uVar30 = **(undefined8 **)(_DAT_059db250 + 0xb8);
      uVar13 = func_0x0249fb80(_DAT_059e2700);
      func_0x036d1444(uVar13,plVar15,pauVar25,pauVar18,uVar32,2,0,0,0);
      lVar24 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(lVar24,_DAT_05a192a0);
      pauVar17 = pauVar25;
      if (lVar24 == 0) goto LAB_0377d6d0;
      func_0x054ed0d0(auStack_4e0,&uStack_430,0x50);
      pauVar17 = _DAT_05a192a8;
      func_0x025a1da8(lVar24,auStack_4e0,_DAT_05a192a8);
      if (pauVar22 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      func_0x0240cee0(1,_DAT_059df1d0,pauVar22,uVar10,uVar30,uVar13,pauVar18,lVar24);
      lVar24 = _DAT_059c9978;
      pauVar17 = pauVar22;
      if (param_6 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
      func_0x054ed0d0(auStack_530,&uStack_430,0x50);
      func_0x0240cde0(2,lVar24,param_6,auStack_530);
      goto LAB_0377d058;
    }
  }
  plVar11 = (long *)func_0x0377dd18(lVar9,plVar15,pauVar22,pauVar16,plVar11,uStack_394,pauVar18,
                                    pauVar21,pauVar20,lVar24);
  pauVar17 = pauVar22;
  if (plVar11 == (long *)0x0) goto LAB_0377d6d0;
  lVar24 = *plVar11;
  uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059ca9b8) {
        puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
        goto LAB_0377ce40;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  pauVar22 = (undefined1 (*) [16])0x0;
  puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059ca9b8,0);
LAB_0377ce40:
  pauVar25 = (undefined1 (*) [16])(*(code *)*puVar8)(plVar11,puVar8[1]);
  ppauStack_578 = &pauStack_438;
  pauStack_580 = (undefined1 (*) [16])0x0;
  pauVar17 = pauVar22;
  while (pauStack_438 = pauVar25, pauVar25 != (undefined1 (*) [16])0x0) {
    pauVar21 = *(undefined1 (**) [16])*pauVar25;
    uVar28 = (ulong)*(ushort *)(pauVar21[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar21[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
          puVar8 = (undefined8 *)(pauVar21[(long)*piVar29 + 0x13] + 8);
          goto LAB_0377cec4;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    pauVar17 = (undefined1 (*) [16])0x0;
    puVar8 = (undefined8 *)func_0x024d927c(pauVar25,_DAT_059df6e0,0);
LAB_0377cec4:
    uVar28 = (*(code *)*puVar8)(pauVar25,puVar8[1]);
    pauVar21 = pauStack_438;
    if ((uVar28 & 1) == 0) goto LAB_0377cfd0;
    if (pauStack_438 == (undefined1 (*) [16])0x0) goto LAB_0377d6d8;
    pauVar25 = *(undefined1 (**) [16])*pauStack_438;
    uVar28 = (ulong)*(ushort *)(pauVar25[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar25[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059cbd38) {
          puVar8 = (undefined8 *)(pauVar25[(long)*piVar29 + 0x13] + 8);
          goto LAB_0377cf28;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(pauStack_438,_DAT_059cbd38,0);
LAB_0377cf28:
    (*(code *)*puVar8)(&pauStack_390,pauVar21,puVar8[1]);
    pauVar17 = (undefined1 (*) [16])0x50;
    func_0x054ed0d0(&uStack_490,&pauStack_390,0x50);
    if (param_6 == (undefined1 (*) [16])0x0) goto LAB_0377d6d4;
    pauVar25 = *(undefined1 (**) [16])*param_6;
    uVar28 = (ulong)*(ushort *)(pauVar25[0x12] + 0xe);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)pauVar25[0xb] + 8);
      do {
        if (*(long *)(piVar29 + -2) == _DAT_059c9978) {
          puVar8 = (undefined8 *)(pauVar25[(long)(*piVar29 + 2) + 0x13] + 8);
          goto LAB_0377cfa0;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_6,_DAT_059c9978,2);
LAB_0377cfa0:
    pcVar31 = (code *)*puVar8;
    func_0x054ed0d0(&pauStack_390,&uStack_490,0x50);
    pauVar17 = (undefined1 (*) [16])puVar8[1];
    (*pcVar31)(param_6,&pauStack_390,pauVar17);
    pauVar25 = pauStack_438;
  }
  uVar28 = func_0x0249fb90();
LAB_0377cfd0:
  pauVar21 = (undefined1 (*) [16])0x0;
  iVar4 = 0x23;
  ppauVar27 = &pauStack_438;
  do {
    pauVar25 = *ppauVar27;
    if (pauVar25 != (undefined1 (*) [16])0x0) {
      lVar24 = *(long *)*pauVar25;
      uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df598) {
            puVar8 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_0377d03c;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      pauVar17 = (undefined1 (*) [16])0x0;
      puVar8 = (undefined8 *)func_0x024d927c(pauVar25);
LAB_0377d03c:
      uVar28 = (*(code *)*puVar8)(pauVar25,puVar8[1]);
    }
    if (pauVar21 == (undefined1 (*) [16])0x0) {
      if ((iVar4 != 0x23) && (iVar4 != 0)) {
        return uVar28;
      }
LAB_0377d058:
      lVar24 = *plVar15;
      uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_0377d0b4;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377d0b4:
      uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      pauVar17 = (undefined1 (*) [16])0x0;
      uVar28 = func_0x036edd98(pauVar7,uVar10,0);
      pauVar21 = pauStack_6d8;
      if ((uVar28 & 1) != 0) {
        lVar24 = func_0x036d5ec8(pauVar7,0);
        uVar3 = uStack_6f4;
        if (lVar24 == 0) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) != 0) goto LAB_0377d10c;
        lVar24 = func_0x036d5ec8(pauVar7,0);
        if (lVar24 != 0) {
          *(long *)(lVar24 + 0x48) = *(long *)(lVar24 + 0x48) + 1;
          goto LAB_0377d10c;
        }
        goto LAB_0377d6d0;
      }
LAB_0377d10c:
      lVar24 = *plVar15;
      uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar24 + (long)(*piVar29 + 5) * 0x10 + 0x138);
            goto LAB_0377d164;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df8e8,5);
LAB_0377d164:
      uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      pauVar17 = (undefined1 (*) [16])0x0;
      uVar28 = func_0x036edf9c(pauVar7,uVar10,0);
      if (((uVar28 & 1) != 0) && (lVar24 = func_0x036d3170(pauVar7,0), lVar24 != 0)) {
        uVar3 = uStack_6f4;
        if (*(long *)(lVar24 + 0x10) == 0) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) == 0) {
          lVar24 = func_0x036d3170(pauVar7,0);
          if ((lVar24 == 0) ||
             (pauVar17 = *(undefined1 (**) [16])(lVar24 + 0x10),
             pauVar17 == (undefined1 (*) [16])0x0)) goto LAB_0377d6d0;
          func_0x022bffa8(3,_DAT_059e0170);
        }
      }
      iVar4 = iStack_6f0;
      if (pauStack_6d8 != (undefined1 (*) [16])0x0) {
        pauVar17 = pauVar7;
        func_0x0377de2c(lVar9,plVar15,pauVar7,pauVar16,param_6);
      }
LAB_0377d1f0:
      if (iVar4 == 1) goto LAB_0377d6a0;
      pauVar21 = pauStack_6e0;
      if (pauStack_6e0 != (undefined1 (*) [16])0x0) {
        pauVar25 = *(undefined1 (**) [16])*pauStack_6e0;
        uVar28 = (ulong)*(ushort *)(pauVar25[0x12] + 0xe);
        if (uVar28 != 0) {
          piVar29 = (int *)(*(long *)pauVar25[0xb] + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059dfbc0) {
              puVar8 = (undefined8 *)(pauVar25[(long)(*piVar29 + 9) + 0x13] + 8);
              goto LAB_0377d25c;
            }
            uVar28 = uVar28 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar28 != 0);
        }
        pauVar17 = (undefined1 (*) [16])0x9;
        puVar8 = (undefined8 *)func_0x024d927c(pauStack_6e0,_DAT_059dfbc0,9);
LAB_0377d25c:
        pauVar25 = (undefined1 (*) [16])(*(code *)*puVar8)(pauStack_6e0,puVar8[1]);
        pauVar21 = pauStack_6e0;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          pauVar17 = *(undefined1 (**) [16])*pauVar25;
          uVar28 = (ulong)*(ushort *)(pauVar17[0x12] + 0xe);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)pauVar17[0xb] + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059e0158) {
                puVar8 = (undefined8 *)(pauVar17[(long)*piVar29 + 0x13] + 8);
                goto LAB_0377d2c4;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(pauVar25,_DAT_059e0158,0);
LAB_0377d2c4:
          uVar28 = (*(code *)*puVar8)(pauVar25,puVar8[1]);
          if ((uVar28 & 1) != 0) {
            uVar10 = func_0x036d3170(pauVar7,0);
            pauVar17 = pauVar25;
            lVar24 = func_0x022cbbd0(6,_DAT_059e0158,pauVar25,uVar10,pauVar20);
            if (lVar24 != 0) {
              lVar26 = func_0x036d3170(pauVar7,0);
              pauVar21 = pauVar25;
              if (lVar26 != 0) {
                func_0x0370f164(lVar26,lVar24,0);
                uStack_568 = 0;
                uStack_570 = 0;
                uStack_558 = 0;
                uStack_560 = 0;
                uStack_548 = 0;
                uStack_550 = 0;
                uStack_538 = 0;
                uStack_540 = 0;
                ppauStack_578 = (undefined1 (**) [16])0x0;
                pauStack_580 = (undefined1 (*) [16])0x0;
                pauVar17 = pauVar16;
                func_0x034ba874(&pauStack_580,6,pauVar16,pauVar16,pauVar18,0,0,0,0);
                lVar24 = _DAT_059c9978;
                if (param_6 != (undefined1 (*) [16])0x0) {
                  func_0x054ed0d0(auStack_5d0,&pauStack_580,0x50);
                  uVar28 = func_0x0240cde0(2,lVar24,param_6,auStack_5d0);
                  return uVar28;
                }
              }
              goto LAB_0377d6d0;
            }
          }
          pauVar17 = *(undefined1 (**) [16])*pauVar25;
          uVar28 = (ulong)*(ushort *)(pauVar17[0x12] + 0xe);
          if (uVar28 != 0) {
            piVar29 = (int *)(*(long *)pauVar17[0xb] + 8);
            do {
              if (*(long *)(piVar29 + -2) == _DAT_059e0158) {
                puVar8 = (undefined8 *)(pauVar17[(long)*piVar29 + 0x13] + 8);
                goto LAB_0377d3dc;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(pauVar25,_DAT_059e0158,0);
LAB_0377d3dc:
          uVar28 = (*(code *)*puVar8)(pauVar25,puVar8[1]);
          if ((uVar28 & 1) == 0) {
LAB_0377d4ac:
            pauVar17 = pauStack_6e0;
            lVar24 = func_0x022bffa8(3,_DAT_059dfbc0,pauStack_6e0);
            pauVar21 = pauVar25;
            if (lVar24 != 0) {
              uVar10 = func_0x022bffa8(4,_DAT_059deb70,lVar24);
              uStack_5e0 = 0;
              uStack_5d8 = 0;
              func_0x0371f100(&uStack_5e0,pauVar7,lVar9,0);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uStack_338 = uStack_5d8;
              uStack_340 = uStack_5e0;
              func_0x0288f218(&uStack_340,&pauStack_580,_DAT_05a29e48);
              ppauStack_618 = ppauStack_578;
              pauStack_620 = pauStack_580;
              uStack_610 = uStack_570;
              pauVar21 = (undefined1 (*) [16])func_0x0371f1bc(uVar10,pauVar20,&pauStack_620,0,0);
              if (pauVar21 != (undefined1 (*) [16])0x0) goto LAB_0377d55c;
              func_0x037789bc(lVar9,plVar15,pauVar16,pauVar18,1);
              uStack_568 = 0;
              uStack_570 = 0;
              uStack_558 = 0;
              uStack_560 = 0;
              uStack_548 = 0;
              uStack_550 = 0;
              uStack_538 = 0;
              uStack_540 = 0;
              ppauStack_578 = (undefined1 (**) [16])0x0;
              pauStack_580 = (undefined1 (*) [16])0x0;
              pauVar17 = pauVar16;
              func_0x034ba874(&pauStack_580,4,pauVar16,pauVar16,pauVar18,0,0,0,0);
              lVar24 = _DAT_059c9978;
              if (param_6 == (undefined1 (*) [16])0x0) goto LAB_0377d6d0;
              func_0x054ed0d0(auStack_6c0,&pauStack_580,0x50);
              puVar19 = auStack_6c0;
              goto LAB_0377d690;
            }
          }
          else {
            pauVar25 = (undefined1 (*) [16])func_0x022bffa8(4,_DAT_059e0158,pauVar25);
            uStack_5e0 = 0;
            uStack_5d8 = 0;
            func_0x0371f100(&uStack_5e0,pauVar7,lVar9,0);
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uStack_338 = uStack_5d8;
            uStack_340 = uStack_5e0;
            func_0x0288f218(&uStack_340,&pauStack_580,_DAT_05a29e48);
            ppauStack_5f8 = ppauStack_578;
            pauStack_600 = pauStack_580;
            uStack_5f0 = uStack_570;
            pauVar21 = (undefined1 (*) [16])func_0x0371f1bc(pauVar25,pauVar20,&pauStack_600,0,0);
            if (pauVar21 == (undefined1 (*) [16])0x0) goto LAB_0377d4ac;
            uVar10 = func_0x022bffa8(5,_DAT_059df8e8,plVar15);
            uVar28 = func_0x036edd98(pauVar7,uVar10,0);
            pauVar25 = pauVar21;
            if ((uVar28 & 1) != 0) goto LAB_0377d4ac;
LAB_0377d55c:
            lVar24 = func_0x036d5ffc(pauVar7,0);
            if (lVar24 != 0) {
              uVar10 = *(undefined8 *)(lVar9 + 0x30);
              uVar6 = func_0x036d392c(pauVar7,0);
              func_0x0374def0(lVar24,plVar15,uVar10,uVar6,0);
            }
            func_0x03774f00(lVar9,plVar15,pauVar16,pauVar21,pauVar20,pauVar18,2,0);
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_558 = 0;
            uStack_560 = 0;
            uStack_548 = 0;
            uStack_550 = 0;
            uStack_538 = 0;
            uStack_540 = 0;
            ppauStack_578 = (undefined1 (**) [16])0x0;
            pauStack_580 = (undefined1 (*) [16])0x0;
            pauVar17 = pauVar16;
            func_0x034ba874(&pauStack_580,6,pauVar16,pauVar16,pauVar18,0,0,0,0);
            lVar24 = _DAT_059c9978;
            if (param_6 != (undefined1 (*) [16])0x0) {
              func_0x054ed0d0(auStack_670,&pauStack_580,0x50);
              puVar19 = auStack_670;
LAB_0377d690:
              func_0x0240cde0(2,lVar24,param_6,puVar19);
LAB_0377d6a0:
              uVar28 = func_0x03530c84(pauVar18,0);
              *(ulong *)(lVar9 + 0x20) = uVar28;
              return uVar28;
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
    auVar35 = func_0x0249fb88(pauVar21);
    if (auVar35._8_4_ != 1) break;
    puVar8 = (undefined8 *)func_0x054ed080(auVar35._0_8_);
    pauVar21 = (undefined1 (*) [16])*puVar8;
    pauStack_580 = pauVar21;
    uVar28 = func_0x054ed090();
    iVar4 = 0;
    ppauVar27 = ppauStack_578;
  } while( true );
  func_0x022bd79c(&pauStack_580);
  func_0x0258f7ac(auVar35._0_8_);
  auVar33 = func_0x022bd790();
  pauVar18 = pauVar17;
  goto SUB_0377d73c;
}


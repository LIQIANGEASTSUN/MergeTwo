/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void ProcessSinkIn(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime timeForSinkIn, GameLogic.Random.IGenerationContext generationContext, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs, System.Boolean isReverse)
 * Ghidra function entry: 037840f8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036f9ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0378482c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03784830) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_037840f8(long param_1,long *param_2,long *******param_3,long *******param_4,undefined *param_5,
            long *param_6,long *param_7,ulong param_8)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *******ppppppplVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *extraout_x1;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  ulong uVar18;
  long *******ppppppplVar19;
  ulong uVar20;
  undefined *puVar21;
  long *plVar22;
  long *plVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long ******pppppplVar28;
  long *****ppppplVar29;
  long lVar30;
  ulong uVar31;
  long ****pppplVar32;
  int *piVar33;
  long *plVar34;
  long ******pppppplVar35;
  long *******ppppppplVar36;
  undefined *puVar37;
  code *pcVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auStack_460 [80];
  undefined1 auStack_410 [80];
  undefined1 auStack_3c0 [80];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_318;
  undefined1 auStack_310 [80];
  long *******ppppppplStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long *plStack_288;
  long ******pppppplStack_280;
  long *plStack_278;
  long *******ppppppplStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long ******pppppplStack_240;
  long ******pppppplStack_238;
  undefined8 uStack_230;
  undefined4 uStack_224;
  long *******ppppppplStack_220;
  long *plStack_218;
  long ******pppppplStack_210;
  long *plStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long ******pppppplStack_1d8;
  long *plStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [80];
  undefined1 auStack_170 [80];
  long *******ppppppplStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  undefined8 uStack_c0;
  long *******ppppppplStack_b8;
  long ******pppppplStack_b0;
  long ******pppppplStack_a8;
  undefined8 uStack_a0;
  
  pcVar38 = (code *)(param_8 & 0xffffffff);
  puVar21 = param_5;
  plVar22 = param_6;
  plVar23 = param_7;
  uVar31 = param_8;
  if ((bRam0000000005e2dfa8 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8b38);
    func_0x0249f8e4(&DAT_059d8b30);
    func_0x0249f8e4(&DAT_05a03780);
    func_0x0249f8e4(&DAT_05a03788);
    func_0x0249f8e4(&DAT_05a03790);
    func_0x0249f8e4(&DAT_059c9978);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_059e0728);
    func_0x0249f8e4(&DAT_059e0740);
    func_0x0249f8e4(&DAT_05a181d0);
    func_0x0249f8e4(&DAT_059e48c8);
    func_0x0249f8e4(&DAT_05a34b40);
    bRam0000000005e2dfa8 = 1;
  }
  pppppplStack_d0 = (long ******)0x0;
  pppppplStack_c8 = (long ******)0x0;
  uStack_c0 = 0;
  puVar5 = (undefined8 *)func_0x0376e450(param_1,param_3);
  puVar6 = (undefined8 *)func_0x0376e450(param_1,param_4);
  if (puVar5 == (undefined8 *)0x0) {
    return puVar6;
  }
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  plStack_1d0 = param_6;
  puStack_1c8 = param_5;
  if ((param_8 & 1) == 0) {
    pppppplStack_b0 = (long ******)0x0;
    pppppplStack_a8 = (long ******)0x0;
    ppppppplStack_120 = param_4;
    func_0x02953678(&pppppplStack_b0,puVar6,&ppppppplStack_120,_DAT_05a34b40);
    ppppppplStack_b8 = param_3;
  }
  else {
    pppppplStack_b0 = (long ******)0x0;
    pppppplStack_a8 = (long ******)0x0;
    ppppppplStack_120 = param_3;
    func_0x02953678(&pppppplStack_b0,puVar5,&ppppppplStack_120,_DAT_05a34b40);
    puVar5 = puVar6;
    ppppppplStack_b8 = param_4;
  }
  pppppplVar35 = pppppplStack_b0;
  puStack_118 = (undefined *)0x0;
  ppppppplStack_120 = (long *******)0x0;
  ppppppplVar16 = (long *******)&ppppppplStack_b8;
  ppppppplVar19 = _DAT_05a34b40;
  pppppplStack_1d8 = pppppplStack_a8;
  func_0x02953678(&ppppppplStack_120,puVar5);
  puVar37 = puStack_118;
  ppppppplVar36 = ppppppplStack_120;
  if ((ppppppplStack_120 != (long *******)0x0) &&
     (uVar7 = func_0x036d392c(ppppppplStack_120,0), pppppplVar35 != (long ******)0x0)) {
    ppppppplVar16 = (long *******)(uVar7 & 0xffffffff);
    ppppppplVar19 = (long *******)0x0;
    func_0x036e12d8(pppppplVar35,param_2);
    if (param_2 != (long *)0x0) {
      lVar25 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar7 != 0) {
        piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
            puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 5) * 0x10 + 0x138);
            goto LAB_03784344;
          }
          uVar7 = uVar7 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03784344:
      uVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
      ppppppplVar16 = (long *******)0x0;
      plVar9 = (long *)func_0x036d3908(ppppppplVar36,uVar8);
      if (plVar9 != (long *)0x0) {
        lVar25 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar7 != 0) {
          piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *****)(piVar33 + -2) == _DAT_059dfbc0) {
              puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x14) * 0x10 + 0x138);
              goto LAB_037843c0;
            }
            uVar7 = uVar7 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar7 != 0);
        }
        ppppppplVar16 = (long *******)0x14;
        puVar5 = (undefined8 *)func_0x024d927c(plVar9);
LAB_037843c0:
        plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        if (plVar9 != (long *)0x0) {
          lVar25 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar7 != 0) {
            piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059e0740) {
                puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 1) * 0x10 + 0x138);
                goto LAB_0378442c;
              }
              uVar7 = uVar7 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0740,1);
LAB_0378442c:
          lVar25 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          lVar26 = *param_2;
          if ((((*(byte *)(_DAT_059e48c8 + 0x130) <= *(byte *)(lVar26 + 0x130)) &&
               (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(_DAT_059e48c8 + 0x130) * 8 + -8
                         ) == _DAT_059e48c8)) && (param_2[0x93] != 0)) &&
             (*(long *)(param_2[0x93] + 0x18) != 0)) {
            uVar8 = 0x3784830;
            plVar9 = param_2;
            ppppppplVar16 = ppppppplVar36;
SUB_03784ca4:
            ppppppplStack_220 = ppppppplVar36;
            pppppplStack_210 = pppppplVar35;
            ppppppplVar17 = ppppppplVar16;
            uStack_230 = uVar8;
            plStack_218 = param_7;
            plStack_208 = param_2;
            lStack_200 = param_1;
            lStack_1f8 = lVar25;
            if ((bRam0000000005e2dfaa & 1) == 0) {
              func_0x0249f8e4(&DAT_059d89a0);
              func_0x0249f8e4(&DAT_059dfbc0);
              func_0x0249f8e4(&DAT_059dfe60);
              func_0x0249f8e4(&DAT_059cd6a0);
              func_0x0249f8e4(&DAT_05a301b8);
              func_0x0249f8e4(&DAT_059d5460);
              func_0x0249f8e4(&DAT_05a34898);
              bRam0000000005e2dfaa = 1;
            }
            pppppplStack_240 = (long ******)0x0;
            plVar34 = (long *)0x5e2d000;
            if ((plVar9 != (long *)0x0) &&
               (plVar11 = (long *)func_0x03659ee0(plVar9,0), plVar11 != (long *)0x0)) {
              lVar25 = *plVar11;
              uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar7 != 0) {
                piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059dfe60) {
                    puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x48) * 0x10 + 0x138);
                    goto LAB_03784d9c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar7 != 0);
              }
              ppppppplVar17 = (long *******)0x48;
              puVar5 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dfe60,0x48);
LAB_03784d9c:
              pppppplVar28 = (long ******)(*(code *)*puVar5)(plVar11,puVar5[1]);
              plVar34 = plVar11;
              if (plVar9[0x98] != 0) {
                ppppppplVar36 = (long *******)&DAT_05a301b8;
                param_7 = *(long **)(plVar9[0x98] + 0x28);
                if (*(int *)(_DAT_059d5460 + 0xe4) == 0) {
                  func_0x0249fa64();
                }
                plVar12 = (long *)func_0x02902d04(param_7,_DAT_05a301b8);
                pppppplVar35 = pppppplVar28;
                if (pppppplVar28 != (long ******)0x0) {
                  ppppplVar29 = *pppppplVar28;
                  uVar7 = (ulong)*(ushort *)((long)ppppplVar29 + 0x12e);
                  if (uVar7 != 0) {
                    pppplVar32 = ppppplVar29[0x16] + 1;
                    do {
                      if (pppplVar32[-1] == _DAT_059cd6a0) {
                        ppppplVar29 = ppppplVar29 + (long)(*(int *)pppplVar32 + 1) * 2 + 0x27;
                        goto LAB_03784e44;
                      }
                      uVar7 = uVar7 - 1;
                      pppplVar32 = pppplVar32 + 2;
                    } while (uVar7 != 0);
                  }
                  ppppplVar29 = (long *****)func_0x024d927c(pppppplVar28,_DAT_059cd6a0,1);
LAB_03784e44:
                  ppppppplVar19 = (long *******)ppppplVar29[1];
                  ppppppplVar17 = &pppppplStack_240;
                  puVar5 = (undefined8 *)(*(code *)*ppppplVar29)(pppppplVar28,plVar12,ppppppplVar17)
                  ;
                  if (((ulong)puVar5 & 1) == 0) {
                    return puVar5;
                  }
                  param_7 = plVar12;
                  if ((pppppplStack_240 != (long ******)0x0) && (ppppppplVar16 != (long *******)0x0)
                     ) {
                    pppppplVar35 = (long ******)(long)*(int *)(pppppplStack_240 + 9);
                    ppppppplVar17 = (long *******)0x0;
                    ppppppplVar13 = (long *******)func_0x036d3908(ppppppplVar16,plVar11,0);
                    if (ppppppplVar13 != (long *******)0x0) {
                      pppppplVar28 = *ppppppplVar13;
                      uVar7 = (ulong)*(ushort *)((long)pppppplVar28 + 0x12e);
                      if (uVar7 != 0) {
                        ppppplVar29 = pppppplVar28[0x16] + 1;
                        do {
                          if (ppppplVar29[-1] == _DAT_059dfbc0) {
                            pppppplVar28 = pppppplVar28 +
                                           (long)(*(int *)ppppplVar29 + 0x1a) * 2 + 0x27;
                            goto LAB_03784edc;
                          }
                          uVar7 = uVar7 - 1;
                          ppppplVar29 = ppppplVar29 + 2;
                        } while (uVar7 != 0);
                      }
                      ppppppplVar17 = (long *******)0x1a;
                      pppppplVar28 = (long ******)func_0x024d927c(ppppppplVar13,_DAT_059dfbc0,0x1a);
LAB_03784edc:
                      lVar25 = (*(code *)*pppppplVar28)(ppppppplVar13,pppppplVar28[1]);
                      ppppppplVar16 = ppppppplVar13;
                      if ((pppppplStack_240 != (long ******)0x0) && (lVar25 != 0)) {
                        puVar5 = (undefined8 *)func_0x04422518(lVar25,pppppplStack_240[0xb],0);
                        if (((ulong)puVar5 & 1) == 0) {
                          return puVar5;
                        }
                        lVar25 = plVar9[0x43];
                        ppppppplVar17 = &pppppplStack_238;
                        uStack_250 = 0;
                        uStack_248 = 0;
                        uStack_224 = 0x11;
                        ppppppplVar19 = _DAT_05a34898;
                        pppppplStack_238 = pppppplVar35;
                        func_0x02953678(&uStack_250,&uStack_224,ppppppplVar17);
                        if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
                          func_0x0249fa64();
                        }
                        uVar8 = func_0x036274b4(0);
                        ppppppplVar16 = (long *******)0x0;
                        if (lVar25 != 0) {
                          uStack_260 = 0;
                          puVar5 = (undefined8 *)
                                   func_0x03683960(lVar25,plVar9,uStack_250,uStack_248,0x53,0,0,
                                                   uVar8);
                          return puVar5;
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar39 = func_0x0249fb90();
            plVar11 = auVar39._8_8_;
            lVar25 = auVar39._0_8_;
            uStack_2b8 = 0x3784f98;
            ppppppplStack_2c0 = param_3;
            pcStack_2b0 = pcVar38;
            puStack_2a8 = puVar6;
            puStack_2a0 = puVar37;
            ppppppplStack_298 = param_4;
            ppppppplStack_290 = ppppppplVar36;
            plStack_288 = param_7;
            pppppplStack_280 = pppppplVar35;
            plStack_278 = plVar34;
            ppppppplStack_270 = ppppppplVar16;
            plStack_268 = plVar9;
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
            uStack_318 = 0;
            lVar26 = func_0x0376e450(lVar25,ppppppplVar17);
            puVar5 = (undefined8 *)func_0x0376e450(lVar25,ppppppplVar19);
            if (lVar26 == 0) {
              return puVar5;
            }
            if (puVar5 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            func_0x036f9148(lVar26,plVar11,lVar25,puVar5,ppppppplVar19,puVar21,plVar22,0);
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            uStack_368 = 0;
            uStack_370 = 0;
            ppppppplVar16 = ppppppplVar19;
            func_0x034ba874(&uStack_370,6,ppppppplVar19,ppppppplVar19,puVar21,0,0,0,0);
            lVar27 = _DAT_059c9978;
            if (plVar22 != (long *)0x0) {
              func_0x054ed0d0(auStack_3c0,&uStack_370,0x50);
              lVar30 = *plVar22;
              uVar7 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar7 != 0) {
                piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == lVar27) {
                    puVar6 = (undefined8 *)(lVar30 + (long)(*piVar33 + 2) * 0x10 + 0x138);
                    goto LAB_0378516c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)func_0x024d927c(plVar22,lVar27,2);
LAB_0378516c:
              pcVar38 = (code *)*puVar6;
              func_0x054ed0d0(auStack_310,auStack_3c0,0x50);
              (*pcVar38)(plVar22,auStack_310,puVar6[1]);
              uVar7 = func_0x036e2788(lVar26,0);
              if ((uVar7 & 1) != 0) {
                func_0x037789bc(lVar25,plVar11,ppppppplVar17,puVar21,1);
              }
              uVar8 = func_0x03530c84(puVar21,0);
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059e2c00);
              }
              uVar8 = func_0x03530158(uVar8,0);
              uStack_358 = 0;
              uStack_360 = 0;
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              uStack_328 = 0;
              uStack_330 = 0;
              uStack_368 = 0;
              uStack_370 = 0;
              func_0x034ba910(&uStack_370,0x10,ppppppplVar17,ppppppplVar19,uVar8,0,0,0,0);
              lVar27 = _DAT_059c9978;
              func_0x054ed0d0(auStack_410,&uStack_370,0x50);
              lVar30 = *plVar22;
              uVar7 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar7 != 0) {
                piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == lVar27) {
                    puVar6 = (undefined8 *)(lVar30 + (long)(*piVar33 + 2) * 0x10 + 0x138);
                    goto LAB_03785298;
                  }
                  uVar7 = uVar7 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)func_0x024d927c(plVar22,lVar27,2);
LAB_03785298:
              pcVar38 = (code *)*puVar6;
              func_0x054ed0d0(auStack_310,auStack_410,0x50);
              ppppppplVar16 = (long *******)puVar6[1];
              (*pcVar38)(plVar22,auStack_310);
              if (plVar11 != (long *)0x0) {
                lVar27 = *plVar11;
                uVar7 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar7 != 0) {
                  piVar33 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                      puVar6 = (undefined8 *)(lVar27 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                      goto LAB_03785318;
                    }
                    uVar7 = uVar7 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df8e8,5);
LAB_03785318:
                uVar8 = (*(code *)*puVar6)(plVar11,puVar6[1]);
                ppppppplVar16 = (long *******)0x0;
                plVar9 = (long *)func_0x036d3908(lVar26,uVar8);
                if (plVar9 != (long *)0x0) {
                  lVar26 = *plVar9;
                  uVar7 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar7 != 0) {
                    piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *****)(piVar33 + -2) == _DAT_059dfbc0) {
                        puVar6 = (undefined8 *)(lVar26 + (long)(*piVar33 + 0x12) * 0x10 + 0x138);
                        goto LAB_03785394;
                      }
                      uVar7 = uVar7 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar7 != 0);
                  }
                  ppppppplVar16 = (long *******)0x12;
                  puVar6 = (undefined8 *)func_0x024d927c(plVar9);
LAB_03785394:
                  plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
                  if (plVar9 != (long *)0x0) {
                    lVar26 = *plVar9;
                    uVar7 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar7 != 0) {
                      piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059df2a8) {
                          puVar6 = (undefined8 *)(lVar26 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                          goto LAB_03785400;
                        }
                        uVar7 = uVar7 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar6 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df2a8,5);
LAB_03785400:
                    uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
                    if ((uVar7 & 1) == 0) {
LAB_03785668:
                      puVar5 = (undefined8 *)func_0x03530c84(puVar21,0);
                      *(undefined8 **)(lVar25 + 0x20) = puVar5;
                      return puVar5;
                    }
                    lVar26 = func_0x0376e450(lVar25,ppppppplVar19);
                    uStack_318 = func_0x0376eb00(lVar25);
                    if (lVar26 == 0) goto LAB_03785668;
                    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                      func_0x0249fa64();
                    }
                    uVar7 = func_0x0376edd4(&uStack_318);
                    if ((uVar7 & 1) != 0) goto LAB_03785668;
                    lVar27 = *plVar11;
                    uVar7 = (ulong)*(ushort *)(lVar27 + 0x12e);
                    if (uVar7 != 0) {
                      piVar33 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                          puVar6 = (undefined8 *)(lVar27 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                          goto LAB_037854a4;
                        }
                        uVar7 = uVar7 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar6 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df8e8,5);
LAB_037854a4:
                    uVar8 = (*(code *)*puVar6)(plVar11,puVar6[1]);
                    ppppppplVar16 = (long *******)0x0;
                    uVar8 = func_0x036d3908(lVar26,uVar8);
                    if (plVar23 != (long *)0x0) {
                      lVar27 = *plVar23;
                      uVar7 = (ulong)*(ushort *)(lVar27 + 0x12e);
                      if (uVar7 != 0) {
                        piVar33 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar33 + -2) == _DAT_059df040) {
                            puVar6 = (undefined8 *)(lVar27 + (long)*piVar33 * 0x10 + 0x138);
                            goto LAB_0378551c;
                          }
                          uVar7 = uVar7 - 1;
                          piVar33 = piVar33 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar6 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df040,0);
LAB_0378551c:
                      lVar27 = (*(code *)*puVar6)(plVar23,uVar8,uVar31,puVar6[1]);
                      if (lVar27 != 0) {
                        uVar8 = func_0x022bffa8(5,_DAT_059df8e8,plVar11);
                        uVar8 = func_0x036d3908(lVar26,uVar8,0);
                        func_0x03780064(auStack_310,lVar25,plVar11,uVar8,ppppppplVar19,uVar31,1,
                                        plVar11,2);
                        lVar27 = _DAT_059c9978;
                        func_0x054ed0d0(auStack_460,auStack_310,0x50);
                        func_0x0240cde0(2,lVar27,plVar22,auStack_460);
                        uVar8 = func_0x022bffa8(5,_DAT_059df8e8,plVar11);
                        uVar8 = func_0x036d62d4(lVar26,uVar8,0);
                        uVar14 = func_0x022bffa8(5,_DAT_059df8e8,plVar11);
                        uVar14 = func_0x036d62d4(puVar5,uVar14,0);
                        uStack_370 = 0;
                        uStack_368 = 0;
                        func_0x0288eb6c(&uStack_370,plVar11,_DAT_05a29b18);
                        uVar15 = func_0x0249fb80(_DAT_059d8b40);
                        func_0x038653bc(uVar15,uVar8,_DAT_05aad4e0,uVar14,1,uStack_370,uStack_368,0)
                        ;
                        func_0x02403244(0x65,_DAT_059e0220,plVar11,uVar15,0);
                      }
                      goto LAB_03785668;
                    }
                  }
                }
              }
            }
            auVar40 = func_0x0249fb90();
            plVar22 = auVar40._8_8_;
            auVar39._8_8_ = plVar22;
            auVar39._0_8_ = ppppppplVar16;
            uVar3 = func_0x03778aa0(auVar40._0_8_,plVar22,1);
            uVar4 = func_0x03778bf0(auVar40._0_8_,plVar22);
            uVar31 = (ulong)(uVar3 & 1);
            uVar20 = (ulong)(uVar4 & 1);
            uVar7 = uVar31;
            uVar18 = uVar20;
            if ((bRam0000000005e2daef & 1) == 0) {
              func_0x0249f8e4(&DAT_059df8e8);
              func_0x0249f8e4(&DAT_059dfe48);
              func_0x0249f8e4(&DAT_059e0220);
              func_0x0249f8e4(&DAT_05a28018);
              bRam0000000005e2daef = 1;
            }
            if (plVar22 == (long *)0x0) {
              auVar39 = func_0x0249fb90();
              uVar31 = uVar7;
              uVar20 = uVar18;
            }
            else {
              lVar25 = *plVar22;
              uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar7 != 0) {
                piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                    puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                    goto LAB_036f9ebc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar33 = piVar33 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059df8e8,5);
LAB_036f9ebc:
              uVar8 = (*(code *)*puVar5)(plVar22,puVar5[1]);
              puVar5 = (undefined8 *)func_0x036edd98(ppppppplVar16,uVar8);
              if (((ulong)puVar5 & 1) == 0) {
                return puVar5;
              }
            }
            plVar23 = auVar39._8_8_;
            plVar22 = auVar39._0_8_;
            if ((uVar31 & 1) == 0) {
              if ((uVar20 & 1) != 0) goto LAB_036fa040;
              uVar3 = 0;
            }
            else {
              uVar7 = uVar20;
              uVar3 = func_0x036fa068(plVar22,plVar23);
              if (((uVar3 & 1) == 0) && (uVar18 = uVar20 & 1, uVar20 = uVar7, uVar18 != 0)) {
LAB_036fa040:
                if ((bRam0000000005e2daf1 & 1) == 0) {
                  func_0x0249f8e4(&DAT_059df8e8);
                  func_0x0249f8e4(&DAT_059dfbc0);
                  func_0x0249f8e4(&DAT_059dfe48);
                  func_0x0249f8e4(&DAT_059e0150);
                  bRam0000000005e2daf1 = 1;
                }
                if (plVar23 != (long *)0x0) {
                  lVar25 = *plVar23;
                  uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar7 != 0) {
                    piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                        puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                        goto LAB_036fa324;
                      }
                      uVar7 = uVar7 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar7 != 0);
                  }
                  uVar31 = 5;
                  puVar5 = (undefined8 *)func_0x024d927c(plVar23);
LAB_036fa324:
                  uVar8 = (*(code *)*puVar5)(plVar23,puVar5[1]);
                  if (plVar22 != (long *)0x0) {
                    lVar25 = *plVar22;
                    uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
                    if (uVar31 != 0) {
                      piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059dfe48) {
                          puVar5 = (undefined8 *)(lVar25 + (long)*piVar33 * 0x10 + 0x138);
                          goto LAB_036fa38c;
                        }
                        uVar31 = uVar31 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar31 != 0);
                    }
                    puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfe48,0);
LAB_036fa38c:
                    uVar31 = puVar5[1];
                    plVar22 = (long *)(*(code *)*puVar5)(plVar22,uVar8);
                    if (plVar22 != (long *)0x0) {
                      lVar25 = *plVar22;
                      uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
                      if (uVar7 != 0) {
                        piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                        do {
                          if (*(long *****)(piVar33 + -2) == _DAT_059dfbc0) {
                            puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x19) * 0x10 + 0x138)
                            ;
                            goto LAB_036fa3fc;
                          }
                          uVar7 = uVar7 - 1;
                          piVar33 = piVar33 + 4;
                        } while (uVar7 != 0);
                      }
                      uVar31 = 0x19;
                      puVar5 = (undefined8 *)func_0x024d927c(plVar22);
LAB_036fa3fc:
                      plVar22 = (long *)(*(code *)*puVar5)(plVar22,puVar5[1]);
                      if (plVar22 != (long *)0x0) {
                        lVar25 = *plVar22;
                        uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
                        if (uVar31 != 0) {
                          piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar33 + -2) == _DAT_059e0150) {
                              puVar5 = (undefined8 *)(lVar25 + (long)*piVar33 * 0x10 + 0x138);
                              goto LAB_036fa464;
                            }
                            uVar31 = uVar31 - 1;
                            piVar33 = piVar33 + 4;
                          } while (uVar31 != 0);
                        }
                        puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059e0150,0);
LAB_036fa464:
                    /* WARNING: Could not recover jumptable at 0x036fa474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar22,puVar5[1]);
                        return puVar5;
                      }
                    }
                  }
                }
                auVar39 = func_0x0249fb90();
                plVar22 = auVar39._0_8_;
                if ((bRam0000000005e2daf2 & 1) == 0) {
                  func_0x0249f8e4(&DAT_059dfe48);
                  func_0x0249f8e4(&DAT_059e9c88);
                  bRam0000000005e2daf2 = 1;
                }
                if (plVar22 != (long *)0x0) {
                  lVar25 = *plVar22;
                  uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar7 != 0) {
                    piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059dfe48) {
                        puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x22) * 0x10 + 0x138);
                        goto LAB_036fa520;
                      }
                      uVar7 = uVar7 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfe48,0x22);
LAB_036fa520:
                  puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar22,puVar5[1]);
                  if (puVar5 != (undefined8 *)0x0) {
                    if (puVar5[0x13] != 0) {
                      return puVar5;
                    }
                    lVar25 = *plVar22;
                    uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
                    if (uVar7 != 0) {
                      piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059dfe48) {
                          puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x22) * 0x10 + 0x138);
                          goto LAB_036fa598;
                        }
                        uVar7 = uVar7 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfe48,0x22);
LAB_036fa598:
                    lVar25 = (*(code *)*puVar5)(plVar22,puVar5[1]);
                    uVar8 = func_0x0249fb80(_DAT_059e9c88);
                    func_0x0372f460(uVar8,auVar39._8_8_ & 0xffffffff,uVar31 & 0xffffffff,
                                    uVar20 & 0xffffffff,0);
                    if (lVar25 != 0) {
                      puVar5 = (undefined8 *)(lVar25 + 0x98);
                      *puVar5 = uVar8;
                      if (iRam0000000006058428 != 0) {
                        puVar5 = (undefined8 *)
                                 func_0x0258f520(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                                                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
                      }
                      return puVar5;
                    }
                  }
                }
                auVar39 = func_0x0249fb90();
                plVar23 = auVar39._8_8_;
                plVar22 = auVar39._0_8_;
                if ((bRam0000000005e2daf3 & 1) == 0) {
                  func_0x0249f8e4(&DAT_059df8e8);
                  func_0x0249f8e4(&DAT_059dfe48);
                  func_0x0249f8e4(&DAT_059e1498);
                  bRam0000000005e2daf3 = 1;
                }
                if (plVar22 != (long *)0x0) {
                  lVar25 = *plVar22;
                  uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar31 != 0) {
                    piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar33 + -2) == _DAT_059dfe48) {
                        puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 7) * 0x10 + 0x138);
                        goto LAB_036fa6a0;
                      }
                      uVar31 = uVar31 - 1;
                      piVar33 = piVar33 + 4;
                    } while (uVar31 != 0);
                  }
                  puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfe48,7);
LAB_036fa6a0:
                  lVar25 = (*(code *)*puVar5)(plVar22,puVar5[1]);
                  if (plVar23 != (long *)0x0) {
                    lVar26 = *plVar23;
                    uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar31 != 0) {
                      piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                          puVar5 = (undefined8 *)(lVar26 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                          goto LAB_036fa70c;
                        }
                        uVar31 = uVar31 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar31 != 0);
                    }
                    puVar5 = (undefined8 *)func_0x024d927c(plVar23,_DAT_059df8e8,5);
LAB_036fa70c:
                    uVar8 = (*(code *)*puVar5)(plVar23,puVar5[1]);
                    lVar26 = *plVar22;
                    uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar31 != 0) {
                      piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar33 + -2) == _DAT_059dfe48) {
                          puVar5 = (undefined8 *)(lVar26 + (long)*piVar33 * 0x10 + 0x138);
                          goto LAB_036fa770;
                        }
                        uVar31 = uVar31 - 1;
                        piVar33 = piVar33 + 4;
                      } while (uVar31 != 0);
                    }
                    puVar5 = (undefined8 *)func_0x024d927c(plVar22,_DAT_059dfe48,0);
LAB_036fa770:
                    uVar8 = (*(code *)*puVar5)(plVar22,uVar8,puVar5[1]);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    iVar2 = func_0x036c47c0(uVar8,plVar23,0);
                    if (lVar25 != 0) {
                      return (undefined8 *)(ulong)(iVar2 <= *(int *)(lVar25 + 0x10));
                    }
                  }
                }
                auVar41 = func_0x0249fb90();
                return (undefined8 *)(ulong)(auVar41._8_4_ <= *(int *)(auVar41._0_8_ + 0x10));
              }
            }
            return (undefined8 *)(ulong)(uVar3 & 1);
          }
          uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar31 != 0) {
            piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
                puVar5 = (undefined8 *)(lVar26 + (long)(*piVar33 + 5) * 0x10 + 0x138);
                goto LAB_037844c4;
              }
              uVar31 = uVar31 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar31 != 0);
          }
          puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_037844c4:
          uVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
          uVar31 = func_0x036ecab8(ppppppplVar36,uVar8,0);
          if (((uVar31 & 1) == 0) || (iVar2 = func_0x037286b0(ppppppplVar36,0), iVar2 < 2)) {
            puVar21 = puStack_1c8;
            func_0x037789bc(param_1,param_2,puVar37,puStack_1c8,1);
            puVar37 = puVar21;
          }
          else {
            func_0x036f9ba0(ppppppplVar36,1,0);
            puVar37 = puStack_1c8;
          }
          uVar24 = 0x16;
          if ((param_8 & 1) == 0) {
            uVar24 = 0xf;
          }
          plVar22 = (long *)0x0;
          plVar23 = (long *)0x0;
          uVar31 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          puStack_118 = (undefined *)0x0;
          ppppppplStack_120 = (long *******)0x0;
          uStack_1f0 = 0;
          ppppppplVar16 = param_3;
          ppppppplVar19 = param_4;
          puVar21 = puVar37;
          func_0x034ba910(&ppppppplStack_120,uVar24);
          lVar26 = _DAT_059c9978;
          if (param_7 != (long *)0x0) {
            func_0x054ed0d0(auStack_170,&ppppppplStack_120,0x50);
            lVar27 = *param_7;
            uVar7 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar7 != 0) {
              piVar33 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == lVar26) {
                  puVar5 = (undefined8 *)(lVar27 + (long)(*piVar33 + 2) * 0x10 + 0x138);
                  goto LAB_037845e4;
                }
                uVar7 = uVar7 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(param_7,lVar26,2);
LAB_037845e4:
            pcVar38 = (code *)*puVar5;
            func_0x054ed0d0(&pppppplStack_b0,auStack_170,0x50);
            (*pcVar38)(param_7,&pppppplStack_b0,puVar5[1]);
            if (lVar25 == 0) goto LAB_03784750;
            func_0x028310e8(lVar25,&pppppplStack_b0,_DAT_05a181d0);
            puVar37 = &DAT_05a03788;
            pppppplStack_c8 = pppppplStack_a8;
            pppppplStack_d0 = pppppplStack_b0;
            pppppplStack_a8 = (long ******)&pppppplStack_d0;
            param_3 = (long *******)&DAT_05a03790;
            uStack_c0 = uStack_a0;
            pcVar38 = (code *)&DAT_059e0728;
            pppppplStack_b0 = (long ******)0x0;
            while( true ) {
              uVar7 = func_0x02a5d2d0(&pppppplStack_d0,_DAT_05a03788);
              lVar25 = _DAT_05a03790;
              if ((uVar7 & 1) == 0) {
                func_0x02a5d2cc(&pppppplStack_d0,_DAT_05a03780);
                goto LAB_03784750;
              }
              lVar27 = *(long *)(_DAT_05a03790 + 0x20);
              uVar1 = *(ushort *)(lVar27 + 0x135);
              lVar26 = lVar27;
              if ((uVar1 & 1) == 0) {
                lVar26 = func_0x024d8f40();
                lVar27 = *(long *)(lVar25 + 0x20);
                uVar1 = *(ushort *)(lVar27 + 0x135);
              }
              ppppppplVar16 =
                   (long *******)(ulong)*(uint *)(*(long *)(*(long *)(lVar26 + 0xc0) + 0x10) + 0xfc)
              ;
              if ((uVar1 & 1) == 0) {
                lVar27 = func_0x024d8f40();
              }
              uVar8 = func_0x0249f90c(&pppppplStack_d0,
                                      *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80) +
                                      0x60);
              func_0x054ed0d0(&ppppppplStack_120,uVar8);
              ppppppplVar17 = ppppppplStack_120;
              if (ppppppplStack_120 == (long *******)0x0) break;
              pppppplVar28 = *ppppppplStack_120;
              uVar7 = (ulong)*(ushort *)((long)pppppplVar28 + 0x12e);
              if (uVar7 != 0) {
                ppppplVar29 = pppppplVar28[0x16] + 1;
                do {
                  if (ppppplVar29[-1] == _DAT_059e0728) {
                    pppppplVar28 = pppppplVar28 + (long)*(int *)ppppplVar29 * 2 + 0x27;
                    goto LAB_03784724;
                  }
                  uVar7 = uVar7 - 1;
                  ppppplVar29 = ppppplVar29 + 2;
                } while (uVar7 != 0);
              }
              pppppplVar28 = (long ******)func_0x024d927c(ppppppplStack_120,_DAT_059e0728,0);
LAB_03784724:
              ppppppplVar19 = (long *******)pppppplVar28[1];
              (*(code *)*pppppplVar28)(ppppppplVar17,param_2,ppppppplVar36);
            }
            func_0x0249fb90();
          }
        }
      }
    }
  }
  do {
    do {
      auVar41 = func_0x0249fb90();
      lVar25 = auVar41._0_8_;
      if (auVar41._8_4_ != 1) {
LAB_03784c90:
        func_0x0240cf84(&pppppplStack_b0);
        func_0x0258f7ac(lVar25);
        uVar8 = 0x3784ca4;
        func_0x022bd790();
        plVar9 = extraout_x1;
        goto SUB_03784ca4;
      }
      puVar5 = (undefined8 *)func_0x054ed080(lVar25);
      pppppplVar28 = (long ******)*puVar5;
      pppppplStack_b0 = pppppplVar28;
      func_0x054ed090();
      func_0x02a5d2cc(pppppplStack_a8,_DAT_05a03780);
      if (pppppplVar28 != (long ******)0x0) {
        lVar25 = func_0x0249fb88(pppppplVar28);
        goto LAB_03784c90;
      }
LAB_03784750:
      puVar37 = puStack_1c8;
      lVar25 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar7 != 0) {
        piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
            puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 5) * 0x10 + 0x138);
            goto LAB_037847ac;
          }
          uVar7 = uVar7 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_037847ac:
      uVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
      uVar7 = func_0x036eef9c(pppppplVar35,uVar8,0);
      if ((uVar7 & 1) == 0) goto LAB_03784b6c;
      lVar25 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar7 != 0) {
        piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
            puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 5) * 0x10 + 0x138);
            goto LAB_03784848;
          }
          uVar7 = uVar7 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03784848:
      uVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
      ppppppplVar16 = (long *******)0x0;
      plVar9 = (long *)func_0x036d3908(pppppplVar35,uVar8);
    } while (plVar9 == (long *)0x0);
    lVar25 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar7 != 0) {
      piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *****)(piVar33 + -2) == _DAT_059dfbc0) {
          puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 9) * 0x10 + 0x138);
          goto LAB_037848c4;
        }
        uVar7 = uVar7 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar7 != 0);
    }
    ppppppplVar16 = (long *******)0x9;
    puVar5 = (undefined8 *)func_0x024d927c(plVar9);
LAB_037848c4:
    plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
  } while (plVar9 == (long *)0x0);
  lVar25 = *plVar9;
  uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar31 != 0) {
    piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar33 + -2) == _DAT_059e0158) {
        puVar5 = (undefined8 *)(lVar25 + (long)*piVar33 * 0x10 + 0x138);
        goto LAB_0378492c;
      }
      uVar31 = uVar31 - 1;
      piVar33 = piVar33 + 4;
    } while (uVar31 != 0);
  }
  puVar5 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0158,0);
LAB_0378492c:
  uVar31 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  if ((uVar31 & 1) == 0) {
    uVar8 = func_0x036e1504(pppppplVar35,param_2,param_1,0);
    func_0x037789bc(param_1,param_2,pppppplStack_1d8,puVar37,1);
    uVar8 = func_0x03774f00(param_1,param_2,param_4,uVar8,plStack_1d0,puVar37,2,0);
    uStack_1f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    puStack_118 = (undefined *)0x0;
    ppppppplStack_120 = (long *******)0x0;
    func_0x034ba910(&ppppppplStack_120,6,param_4,param_4,puVar37,0,puVar6,0);
    lVar25 = _DAT_059c9978;
    func_0x054ed0d0(auStack_1c0,&ppppppplStack_120,0x50);
    lVar26 = *param_7;
    uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar31 != 0) {
      piVar33 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar25) {
          puVar5 = (undefined8 *)(lVar26 + (long)(*piVar33 + 2) * 0x10 + 0x138);
          goto LAB_03784a3c;
        }
        uVar31 = uVar31 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar31 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(param_7,lVar25,2);
LAB_03784a3c:
    pcVar38 = (code *)*puVar5;
    func_0x054ed0d0(&pppppplStack_b0,auStack_1c0,0x50);
    (*pcVar38)(param_7,&pppppplStack_b0,puVar5[1]);
    lVar25 = *param_2;
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar31 != 0) {
      piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 5) * 0x10 + 0x138);
          goto LAB_03784abc;
        }
        uVar31 = uVar31 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar31 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_03784abc:
    uVar15 = (*(code *)*puVar5)(param_2,puVar5[1]);
    uVar10 = func_0x0249fb80(_DAT_059d8b38);
    func_0x03864d84(uVar10,pppppplVar35,uVar8,uVar14,uVar15,0);
    puVar37 = puStack_1c8;
    lVar25 = *param_2;
    uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar31 != 0) {
      piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == _DAT_059e0220) {
          puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x65) * 0x10 + 0x138);
          goto LAB_03784b58;
        }
        uVar31 = uVar31 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar31 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0x65);
LAB_03784b58:
    (*(code *)*puVar5)(param_2,uVar10,0,puVar5[1]);
  }
LAB_03784b6c:
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = func_0x0249fb80(_DAT_059d8b30);
  func_0x038636d0(uVar8,param_2,ppppppplVar36,pppppplVar35,uVar14,0);
  lVar25 = *param_2;
  uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar31 != 0) {
    piVar33 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar33 + -2) == _DAT_059e0220) {
        puVar5 = (undefined8 *)(lVar25 + (long)(*piVar33 + 0x65) * 0x10 + 0x138);
        goto LAB_03784bf4;
      }
      uVar31 = uVar31 - 1;
      piVar33 = piVar33 + 4;
    } while (uVar31 != 0);
  }
  puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0x65);
LAB_03784bf4:
  (*(code *)*puVar5)(param_2,uVar8,0,puVar5[1]);
  puVar5 = (undefined8 *)func_0x03530c84(puVar37,0);
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  return puVar5;
}


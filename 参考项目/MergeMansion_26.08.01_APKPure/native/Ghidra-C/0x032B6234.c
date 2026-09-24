/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MergePairFinder.txt
 * Cpp2IL method: System.ValueTuple`2<GameLogic.Player.Board.Coordinate, GameLogic.Player.Board.Coordinate> FindSuggestion(GameLogic.Player.IPlayer player, GameLogic.Player.Board.IBoard mergeBoard, SearchOptions options, System.Collections.Generic.ICollection`1<System.Int32> excludedItems, GameLogic.Config.Types.MetacoreTime currentTime, System.Random rand)
 * Ghidra function entry: 033b6234
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x033b6460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b64c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b6814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b66c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b672c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b6798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x033b656c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033b66cc) */
/* WARNING: Removing unreachable block (ram,0x033b6740) */
/* WARNING: Removing unreachable block (ram,0x033b6744) */
/* WARNING: Removing unreachable block (ram,0x033b6760) */
/* WARNING: Removing unreachable block (ram,0x033b676c) */
/* WARNING: Removing unreachable block (ram,0x033b66d8) */
/* WARNING: Removing unreachable block (ram,0x033b66dc) */
/* WARNING: Removing unreachable block (ram,0x033b66f4) */
/* WARNING: Removing unreachable block (ram,0x033b6700) */
/* WARNING: Removing unreachable block (ram,0x033b6818) */
/* WARNING: Removing unreachable block (ram,0x033b6858) */
/* WARNING: Removing unreachable block (ram,0x033b64cc) */
/* WARNING: Removing unreachable block (ram,0x033b6570) */
/* WARNING: Removing unreachable block (ram,0x033b6464) */
/* WARNING: Removing unreachable block (ram,0x033b64d0) */
/* WARNING: Removing unreachable block (ram,0x033b64e4) */
/* WARNING: Removing unreachable block (ram,0x033b64ec) */
/* WARNING: Removing unreachable block (ram,0x033b6484) */
/* WARNING: Removing unreachable block (ram,0x033b6488) */
/* WARNING: Removing unreachable block (ram,0x033b6520) */
/* WARNING: Removing unreachable block (ram,0x033b6734) */
/* WARNING: Removing unreachable block (ram,0x033b6528) */
/* WARNING: Removing unreachable block (ram,0x033b6530) */
/* WARNING: Removing unreachable block (ram,0x033b6544) */
/* WARNING: Removing unreachable block (ram,0x033b6494) */
/* WARNING: Removing unreachable block (ram,0x033b65d0) */
/* WARNING: Removing unreachable block (ram,0x033b65e4) */
/* WARNING: Removing unreachable block (ram,0x033b65e8) */
/* WARNING: Removing unreachable block (ram,0x033b6604) */
/* WARNING: Removing unreachable block (ram,0x033b6608) */
/* WARNING: Removing unreachable block (ram,0x033b661c) */
/* WARNING: Removing unreachable block (ram,0x033b6620) */
/* WARNING: Removing unreachable block (ram,0x033b6628) */
/* WARNING: Removing unreachable block (ram,0x033b662c) */
/* WARNING: Removing unreachable block (ram,0x033b663c) */
/* WARNING: Removing unreachable block (ram,0x033b6640) */
/* WARNING: Removing unreachable block (ram,0x033b6654) */
/* WARNING: Removing unreachable block (ram,0x033b6658) */
/* WARNING: Removing unreachable block (ram,0x033b6678) */
/* WARNING: Removing unreachable block (ram,0x033b667c) */
/* WARNING: Removing unreachable block (ram,0x033b6694) */
/* WARNING: Removing unreachable block (ram,0x033b6498) */
/* WARNING: Removing unreachable block (ram,0x033b657c) */
/* WARNING: Removing unreachable block (ram,0x033b6590) */
/* WARNING: Removing unreachable block (ram,0x033b6598) */
/* WARNING: Removing unreachable block (ram,0x033b65c8) */
/* WARNING: Removing unreachable block (ram,0x033b64a0) */
/* WARNING: Removing unreachable block (ram,0x033b6730) */
/* WARNING: Removing unreachable block (ram,0x033b679c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_033b6234(long **param_1,long **param_2,long **param_3,long **param_4,long **param_5,
            long **param_6)

{
  undefined8 *puVar1;
  int iVar2;
  long **pplVar6;
  long lVar7;
  long lVar8;
  long **pplVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar12;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  long **pplVar13;
  long **pplVar14;
  undefined8 uVar15;
  uint uVar16;
  long **pplVar17;
  long **pplVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  long **pplVar24;
  long **pplVar25;
  long **pplVar26;
  long **pplVar27;
  long **unaff_x26;
  long **pplVar28;
  long **pplVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 auStack_1d0 [2];
  undefined8 uStack_1c0;
  long **pplStack_1b8;
  long **pplStack_1b0;
  long **pplStack_1a8;
  long **pplStack_1a0;
  long **pplStack_198;
  long **pplStack_190;
  long **pplStack_188;
  long **pplStack_180;
  long **pplStack_178;
  long **pplStack_168;
  long **pplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_134;
  undefined1 auStack_d0 [8];
  long **pplStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long **pplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long *aplStack_70 [2];
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  auVar35._8_8_ = param_2;
  auVar35._0_8_ = param_1;
  puVar1 = (undefined8 *)auStack_d0;
  pplVar13 = param_3;
  pplVar27 = param_4;
  pplVar9 = param_5;
  if ((bRam0000000005e2c39a & 1) == 0) {
    func_0x0249f8e4(&DAT_059f5d10);
    func_0x0249f8e4(&DAT_059f5d30);
    func_0x0249f8e4(&DAT_059c1ed0);
    func_0x0249f8e4(&DAT_059c1eb0);
    func_0x0249f8e4(&DAT_059db250);
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_05a193d8);
    func_0x0249f8e4(&DAT_059e2548);
    func_0x0249f8e4(&DAT_05a34850);
    bRam0000000005e2c39a = 1;
  }
  pplStack_78 = (long **)0x0;
  aplStack_70[0] = (long *)0x0;
  uStack_88 = 0;
  pplStack_80 = (long **)0x0;
  uStack_90 = 0;
  pplVar18 = param_5;
  if (param_2 != (long **)0x0) {
    plVar20 = *param_2;
    uVar21 = (ulong)*(ushort *)((long)plVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(plVar20[0x16] + 8);
      do {
        if (*(long *)(piVar22 + -2) == _DAT_059defb8) {
          plVar20 = plVar20 + (long)(*piVar22 + 2) * 2 + 0x27;
          goto LAB_033b6350;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    pplVar13 = (long **)0x2;
    plVar20 = (long *)func_0x024d927c(param_2);
LAB_033b6350:
    pplVar6 = (long **)(*(code *)*plVar20)(param_2,plVar20[1]);
    if (pplVar6 != (long **)0x0) {
      unaff_x26 = (long **)(ulong)*(uint *)(pplVar6 + 3);
      if (*(int *)(_DAT_059c1ed0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar8 = _DAT_059f5d30;
      lVar7 = *(long *)(_DAT_059f5d30 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x024d8f40();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x024d8f40();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      lVar8 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x024d8f40();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x024d8f40();
      }
      plVar20 = (long *)**(undefined8 **)(lVar8 + 0xb8);
      aplStack_70[0] = plVar20;
      if (plVar20 != (long *)0x0) {
        pplVar9 = (long **)(**(code **)(*plVar20 + 0x178))
                                     (plVar20,unaff_x26,*(undefined8 *)(*plVar20 + 0x180));
        pplStack_78 = pplVar9;
        param_6 = (long **)(**(code **)(*plVar20 + 0x178))
                                     (plVar20,unaff_x26,*(undefined8 *)(*plVar20 + 0x180));
        pplStack_a8 = aplStack_70;
        ppplStack_98 = &pplStack_78;
        lStack_b0 = 0;
        ppplStack_a0 = &pplStack_80;
        pplVar13 = param_4;
        pplVar27 = pplVar6;
        pplStack_80 = param_6;
SUB_033b6a14:
        pplVar24 = (long **)0x5e2c000;
        pplVar14 = pplVar13;
        pplVar17 = param_5;
        pplVar18 = pplVar9;
        if ((bRam0000000005e2c39f & 1) == 0) {
          func_0x0249f8e4(&DAT_059c9948);
          func_0x0249f8e4(&DAT_059df8e8);
          func_0x0249f8e4(&DAT_059e1498);
          func_0x0249f8e4(&DAT_05a193d8);
          func_0x0249f8e4(&DAT_05a193e0);
          func_0x0249f8e4(&DAT_059e46b8);
          func_0x0249f8e4(&DAT_05a34a88);
          bRam0000000005e2c39f = 1;
        }
        uStack_150 = 0;
        pplVar29 = pplVar9;
        if (param_1 != (long **)0x0) {
          plVar20 = *param_1;
          uVar21 = (ulong)*(ushort *)((long)plVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(plVar20[0x16] + 8);
            do {
              if (*(long *)(piVar22 + -2) == _DAT_059df8e8) {
                plVar20 = plVar20 + (long)(*piVar22 + 5) * 2 + 0x27;
                goto LAB_033b6b10;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          pplVar14 = (long **)0x5;
          plVar20 = (long *)func_0x024d927c(param_1);
LAB_033b6b10:
          pplVar26 = (long **)(*(code *)*plVar20)(param_1,plVar20[1]);
          if (pplVar6 != (long **)0x0) {
            uVar19 = *(uint *)(pplVar6 + 3);
            unaff_x26 = (long **)(ulong)uVar19;
            if ((int)uVar19 < 1) {
              uStack_158 = 0;
            }
            else {
              uStack_158 = 0;
              pplVar29 = (long **)&DAT_05a193e0;
              uVar16 = 0;
              pplStack_160 = pplVar9;
              do {
                pplVar17 = _DAT_05a193e0;
                func_0x0282f3c4(pplVar6,uVar16,&uStack_140);
                lVar8 = CONCAT44(uStack_13c,uStack_140);
                if (lVar8 != 0) {
                  pplVar14 = (long **)0x0;
                  uVar21 = func_0x036eb4a0(lVar8,pplVar26);
                  if (((uVar21 & 1) != 0) && (uVar21 = func_0x036f883c(lVar8,0), (uVar21 & 1) != 0))
                  {
                    uVar21 = func_0x036d392c(lVar8,0);
                    pplVar27 = pplVar26;
                    if (pplVar13 == (long **)0x0) goto LAB_033b6d74;
                    plVar20 = *pplVar13;
                    pplVar24 = (long **)(uVar21 & 0xffffffff);
                    uVar21 = (ulong)*(ushort *)((long)plVar20 + 0x12e);
                    if (uVar21 != 0) {
                      piVar22 = (int *)(plVar20[0x16] + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == _DAT_059c9948) {
                          plVar20 = plVar20 + (long)(*piVar22 + 4) * 2 + 0x27;
                          goto LAB_033b6bec;
                        }
                        uVar21 = uVar21 - 1;
                        piVar22 = piVar22 + 4;
                      } while (uVar21 != 0);
                    }
                    plVar20 = (long *)func_0x024d927c(pplVar13,_DAT_059c9948,4);
LAB_033b6bec:
                    uVar21 = (*(code *)*plVar20)(pplVar13,pplVar24,plVar20[1]);
                    if ((((uVar21 & 1) == 0) &&
                        (uVar21 = func_0x033b7f7c(lVar8,pplVar26,param_5), (uVar21 & 1) == 0)) &&
                       (uVar21 = func_0x036eba58(lVar8,param_5,pplVar26,0), (uVar21 & 1) == 0)) {
                      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
                        func_0x0249fa64();
                      }
                      uVar21 = func_0x03646774(param_1,lVar8,0);
                      if ((uVar21 & 1) != 0) {
                        pplStack_168 = param_6;
                        uVar30 = func_0x036d3908(lVar8,pplVar26,0);
                        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                          func_0x0249fa64(_DAT_059e1498);
                        }
                        uVar21 = func_0x036c0534(uVar30,param_1,&uStack_150,0);
                        param_6 = pplStack_168;
                        if (((uVar21 & 1) != 0) &&
                           (uVar21 = func_0x036e1938(lVar8,param_1,0), param_6 = pplStack_168,
                           (uVar21 & 1) != 0)) {
                          uVar21 = func_0x036d06c8(lVar8,0);
                          if ((uVar21 & 1) == 0) {
                            uVar21 = func_0x036e21f8(lVar8,0);
                            if ((uVar21 & 1) != 0) {
                              uVar3 = func_0x033b7fc4(param_6,uStack_158 & 0xffffffff,pplVar24);
                              uStack_158 = CONCAT44(uStack_158._4_4_,uVar3);
                            }
                          }
                          else {
                            uVar3 = func_0x033b7fc4(pplStack_160,uStack_158._4_4_,pplVar24);
                            uStack_158 = CONCAT44(uVar3,(undefined4)uStack_158);
                          }
                        }
                      }
                    }
                  }
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 != uVar19);
            }
            uStack_148 = 0;
            uStack_140 = uStack_158._4_4_;
            uStack_134 = (undefined4)uStack_158;
            func_0x02953678(&uStack_148,&uStack_140,&uStack_134,_DAT_05a34a88);
            auVar31._8_8_ = extraout_x1;
            auVar31._0_8_ = uStack_148;
            return auVar31;
          }
        }
LAB_033b6d74:
        auVar32 = func_0x0249fb90();
        uVar21 = auVar32._8_8_;
        pplVar25 = auVar32._0_8_;
        uStack_1c0 = 0x33b6d78;
        if (auVar32._8_4_ < 1) {
          pplVar13 = (long **)0x0;
        }
        else {
          pplVar9 = pplVar14;
          param_2 = param_6;
          param_4 = pplVar6;
          pplVar26 = param_1;
          pplVar28 = unaff_x26;
          pplStack_1b8 = pplVar29;
          pplStack_1b0 = unaff_x26;
          pplStack_1a8 = pplVar27;
          pplStack_1a0 = param_1;
          pplStack_198 = pplVar6;
          pplStack_190 = pplVar13;
          pplStack_188 = param_5;
          pplStack_180 = param_6;
          pplStack_178 = pplVar24;
          if (pplVar25 == (long **)0x0) {
LAB_033b6e38:
            auVar32 = func_0x0249fb90();
            pplVar6 = auVar32._8_8_;
            auStack_1d0[0] = 0x33b6e3c;
            uVar12 = auVar32._8_4_;
            uVar16 = (uint)pplVar17;
            uVar19 = uVar12;
            if ((int)uVar16 <= (int)uVar12) {
              uVar19 = uVar16;
            }
            pplVar14 = auVar32._0_8_;
            pplVar29 = pplVar9;
            if ((int)uVar16 <= (int)uVar12) {
              pplVar14 = pplVar9;
              pplVar29 = auVar32._0_8_;
              uVar16 = uVar12;
            }
            if ((int)uVar19 < 1) {
              uVar21 = 0;
            }
            else {
              if (pplVar14 == (long **)0x0) {
LAB_033b6efc:
                auVar32 = func_0x0249fb90();
                uVar21 = (ulong)pplVar17 & 0xffffffff;
                pplVar9 = (long **)((ulong)pplVar9 & 0xffffffff);
                uVar10 = func_0x0376e0dc(auVar32._8_8_,0);
                puVar1 = auStack_1d0;
                uVar30 = 0x33b6f00;
SUB_033b782c:
                uVar15 = auVar32._8_8_;
                *(undefined8 *)((long)puVar1 + -0x50) = uVar30;
                *(long ***)((long)puVar1 + -0x40) = pplVar28;
                *(long ***)((long)puVar1 + -0x38) = pplVar27;
                *(long ***)((long)puVar1 + -0x30) = pplVar26;
                *(long ***)((long)puVar1 + -0x28) = param_4;
                *(long ***)((long)puVar1 + -0x20) = pplVar13;
                *(long ***)((long)puVar1 + -0x18) = pplVar25;
                *(long ***)((long)puVar1 + -0x10) = param_2;
                *(long ***)((long)puVar1 + -8) = pplVar24;
                if ((bRam0000000005e2c39d & 1) == 0) {
                  func_0x0249f8e4(&DAT_059db250,uVar10,uVar15,pplVar9,uVar21);
                  bRam0000000005e2c39d = 1;
                }
                *(undefined8 *)((long)puVar1 + -0x60) = 0;
                *(undefined8 *)((long)puVar1 + -0x58) = 0;
                auVar35 = func_0x033b793c(auVar32._0_8_,uVar10,uVar15,pplVar9,uVar21,pplVar18);
                *(undefined1 (*) [16])((long)puVar1 + -0x60) = auVar35;
                if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                  func_0x0249fa64();
                }
                uVar21 = func_0x0376edd4((undefined1 *)((long)puVar1 + -0x60),0);
                if ((uVar21 & 1) == 0) {
                  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
                    func_0x0249fa64();
                  }
                  uVar21 = func_0x0376edd4((undefined1 *)((long)puVar1 + -0x58),0);
                  if ((uVar21 & 1) == 0) {
                    return *(undefined1 (*) [16])((long)puVar1 + -0x60);
                  }
                }
                uVar30 = func_0x0376e0dc(uVar15,0);
                auVar32 = func_0x033b793c(auVar32._0_8_,uVar30,uVar15,pplVar9,0,pplVar18);
                return auVar32;
              }
              uVar12 = *(uint *)(pplVar14 + 3);
              uVar23 = 0;
              uVar21 = 0;
              do {
                if (uVar23 == uVar12) {
LAB_033b6ef8:
                  func_0x0249fb98();
                  goto LAB_033b6efc;
                }
                if (0 < (int)uVar16) {
                  if (pplVar29 == (long **)0x0) goto LAB_033b6efc;
                  iVar2 = *(int *)(pplVar29 + 3);
                  pplVar6 = pplVar29 + 4;
                  uVar5 = uVar16;
                  do {
                    if (iVar2 == 0) goto LAB_033b6ef8;
                    pplVar9 = (long **)(ulong)*(uint *)pplVar6;
                    if (*(uint *)pplVar6 == *(uint *)(pplVar14 + uVar23 + 4)) {
                      if (pplVar18 == (long **)0x0) goto LAB_033b6efc;
                      uVar5 = (uint)uVar21;
                      if (*(uint *)(pplVar18 + 3) <= uVar5) goto LAB_033b6ef8;
                      uVar21 = (ulong)(uVar5 + 1);
                      *(uint *)((long)pplVar18 + (long)(int)uVar5 * 4 + 0x20) =
                           *(uint *)(pplVar14 + uVar23 + 4);
                      break;
                    }
                    uVar5 = uVar5 - 1;
                    pplVar6 = pplVar6 + 1;
                    iVar2 = iVar2 + -1;
                  } while (uVar5 != 0);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != uVar19);
            }
            auVar34._8_8_ = pplVar6;
            auVar34._0_8_ = uVar21;
            return auVar34;
          }
          pplVar24 = (long **)((ulong)pplVar17 & 0xffffffff);
          pplVar26 = (long **)0x0;
          pplVar13 = (long **)0x0;
          pplVar27 = (long **)(uVar21 & 0xffffffff);
          pplVar28 = pplVar25 + 4;
          do {
            uVar19 = *(uint *)(pplVar25 + 3);
            if ((long **)(ulong)uVar19 <= pplVar26) {
LAB_033b6e34:
              func_0x0249fb98();
              param_2 = pplVar14;
              param_4 = pplVar6;
              goto LAB_033b6e38;
            }
            pplVar6 = (long **)pplVar28[(long)pplVar26];
            iVar2 = (int)((ulong)pplVar6 >> 0x20);
            if (iVar2 < 2) {
              pplVar9 = (long **)((ulong)pplVar6 & 0xffffffff);
              iVar4 = func_0x033b8098(pplVar14,pplVar24);
              uVar21 = extraout_x1_00;
              if (1 < iVar4 + iVar2) {
                uVar19 = (uint)pplVar25[3];
                goto LAB_033b6df0;
              }
            }
            else {
LAB_033b6df0:
              uVar16 = (uint)pplVar13;
              if (uVar19 <= uVar16) goto LAB_033b6e34;
              pplVar13 = (long **)(ulong)(uVar16 + 1);
              pplVar25[(long)(int)uVar16 + 4] = (long *)pplVar6;
            }
            pplVar26 = (long **)((long)pplVar26 + 1);
          } while (pplVar27 != pplVar26);
        }
        auVar33._8_8_ = uVar21;
        auVar33._0_8_ = pplVar13;
        return auVar33;
      }
    }
  }
LAB_033b68d4:
  func_0x0249fb90();
LAB_033b68d8:
  func_0x0249fb88();
  func_0x0249fb90();
  func_0x0249fb90();
  param_5 = pplVar27;
LAB_033b68e4:
  func_0x0249fb90();
LAB_033b68e8:
  func_0x0249fb88(unaff_x26);
  func_0x0249fb90();
  func_0x0249fb90();
  func_0x0249fb98();
  do {
    func_0x0249fb90();
    while( true ) {
      func_0x0249fb98();
      func_0x0249fb90();
      func_0x0249fb90();
      auVar31 = func_0x0249fb98();
      unaff_x26 = auVar31._8_8_;
      uVar30 = auVar31._0_8_;
      if (auVar31._8_4_ != 1) {
        func_0x02408300(&pplStack_c8);
        pplVar27 = (long **)0x0;
        if (auVar31._8_4_ != 1) {
          func_0x02408344(&lStack_b0);
          func_0x0258f7ac(uVar30);
          auVar32 = func_0x022bd790();
          pplVar6 = auVar32._8_8_;
          param_1 = auVar32._0_8_;
          goto SUB_033b6a14;
        }
        plVar20 = (long *)func_0x054ed080(uVar30);
        lStack_b0 = *plVar20;
        func_0x054ed090();
        pplVar18 = pplStack_a8;
        plVar20 = *pplStack_a8;
        pplVar27 = param_5;
        if (plVar20 == (long *)0x0) goto LAB_033b68d4;
        pplVar13 = (long **)0x1;
        pplVar27 = *(long ***)(*plVar20 + 400);
        (**(code **)(*plVar20 + 0x188))(plVar20,*ppplStack_a0);
        plVar20 = *pplVar18;
        if (plVar20 == (long *)0x0) goto LAB_033b68d4;
        pplVar13 = (long **)0x1;
        pplVar27 = *(long ***)(*plVar20 + 400);
        (**(code **)(*plVar20 + 0x188))(plVar20,*ppplStack_98);
        if (lStack_b0 == 0) {
          return ZEXT816(0);
        }
        goto LAB_033b68d8;
      }
      puVar11 = (undefined8 *)func_0x054ed080(uVar30);
      unaff_x26 = (long **)*puVar11;
      pplStack_c8 = unaff_x26;
      func_0x054ed090();
      pplVar26 = (long **)0x0;
      pplVar27 = (long **)0x0;
      plVar20 = (long *)*plStack_c0;
      if (plVar20 == (long *)0x0) goto LAB_033b68e4;
      param_5 = *(long ***)(*plVar20 + 400);
      pplVar13 = (long **)0x1;
      (**(code **)(*plVar20 + 0x188))(plVar20,*puStack_b8);
      if (unaff_x26 != (long **)0x0) goto LAB_033b68e8;
      pplVar13 = (long **)(ulong)*(uint *)((long)param_3 + 0x14);
      iVar2 = func_0x033b8040(pplStack_78,(ulong)param_4 & 0xffffffff);
      pplVar28 = (long **)0x0;
      pplVar24 = pplVar18;
      pplVar25 = param_1;
      if (-1 < iVar2) {
        pplVar9 = (long **)(ulong)*(uint *)((long)param_3 + 0x14);
        uVar10 = func_0x0376e0dc(param_2,0);
        uVar21 = 2;
        uVar30 = 0x33b6818;
        puVar1 = (undefined8 *)auStack_d0;
        pplVar13 = pplVar9;
        auVar32 = auVar35;
        goto SUB_033b782c;
      }
      if (pplStack_78 == (long **)0x0) break;
      if (*(int *)(pplStack_78 + 3) != 0) {
        pplVar9 = (long **)(ulong)*(uint *)(pplStack_78 + 4);
        uVar10 = func_0x0376e0dc(param_2,0);
        uVar21 = 2;
        uVar30 = 0x33b6858;
        pplVar13 = pplVar9;
        goto SUB_033b782c;
      }
    }
  } while( true );
}


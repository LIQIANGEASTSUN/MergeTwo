/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MasterFunctions.txt
 * Cpp2IL method: System.Void DismissBubble(GameLogic.Player.Board.MergeBoard board, GameLogic.Player.PlayerModel player, GameLogic.Player.Board.Coordinate bubbleCoordinate, GameLogic.Player.Items.MergeItem mergeItem)
 * Ghidra function entry: 033bf480
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033bf480(long param_1,long param_2,long **param_3,long **param_4,long **param_5,
                  ulong param_6)

{
  uint uVar1;
  long **pplVar2;
  long **pplVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long **pplVar7;
  undefined8 uVar8;
  ulong uVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 unaff_x21;
  code *pcVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  int aiStack_208 [3];
  undefined8 uStack_1fc;
  long lStack_1b8;
  long **pplStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  long **pplStack_198;
  undefined *puStack_190;
  long **pplStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long **pplStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [80];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  lVar20 = 0x5e2c000;
  puVar21 = &DAT_059de230;
  pplVar7 = param_4;
  if ((bRam0000000005e2c3be & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8a28);
    func_0x0249f8e4(&DAT_059d9e60);
    func_0x0249f8e4(&DAT_059fa1e8);
    func_0x0249f8e4(&DAT_059feee0);
    func_0x0249f8e4(&DAT_059feeb8);
    func_0x0249f8e4(&DAT_059c3d50);
    func_0x0249f8e4(&DAT_059dce58);
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059df030);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_05a17ac8);
    func_0x0249f8e4(&DAT_05a17ad0);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a2aaf0);
    bRam0000000005e2c3be = 1;
  }
  pplVar2 = (long **)func_0x0249fb80(_DAT_059de230);
  pplVar10 = (long **)0x0;
  func_0x034a1470(pplVar2,param_2);
  if (param_2 != 0) {
    puVar21 = (undefined *)func_0x028a379c(param_2,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    pplVar3 = (long **)func_0x03530158(puVar21,0);
    if (param_1 != 0) {
      param_5 = (long **)0x1;
      param_6 = 0;
      pplVar10 = param_3;
      func_0x037789bc(param_1,param_2);
      pplVar7 = pplVar3;
      if (param_4 != (long **)0x0) {
        lVar20 = func_0x036d5f70(param_4,0);
        if (lVar20 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(lVar20 + 0x20);
        }
        uVar4 = func_0x03659ee0(param_2,0);
        pplVar10 = (long **)0x0;
        plVar5 = (long *)func_0x036d3908(param_4,uVar4);
        pplVar7 = pplVar3;
        if (plVar5 != (long *)0x0) {
          lVar14 = *plVar5;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == _DAT_059dfbc0) {
                puVar6 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                goto LAB_033bf694;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pplVar10 = (long **)0x6;
          puVar6 = (undefined8 *)func_0x024d927c(plVar5);
          pplVar7 = pplVar3;
LAB_033bf694:
          plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          lVar14 = func_0x036d5f70(param_4,0);
          if (lVar14 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(lVar14 + 0x28);
          }
          if (plVar5 != (long *)0x0) {
            lVar14 = *plVar5;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == _DAT_059df030) {
                  puVar6 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
                  goto LAB_033bf720;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar6 = (undefined8 *)func_0x024d927c(plVar5,_DAT_059df030,10);
LAB_033bf720:
            pplVar7 = (long **)(*(code *)*puVar6)(plVar5,param_2,uVar4,puVar6[1]);
            if (pplVar7 != (long **)0x0) {
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              param_6 = func_0x03530158(puVar21,0);
              uStack_160 = 0;
              pplVar10 = param_3;
              param_5 = pplVar2;
              lVar14 = func_0x03774f00(param_1,param_2);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_033bfa8c;
              plVar5 = *(long **)(*(long *)(_DAT_059fa1e8 + 0x20) + 0xc0);
              pplVar2 = (long **)(ulong)*(uint *)(plVar5[1] + 0xfc);
              uVar4 = func_0x0249f90c(*(long *)(lVar14 + 0x10),*(undefined8 *)(*plVar5 + 0x80));
              pplVar10 = pplVar2;
              func_0x054ed0d0(&plStack_b0,uVar4);
              if (*(long *)(param_2 + 0x220) == 0) goto LAB_033bfa8c;
              pplVar2 = (long **)((ulong)plStack_b0 & 0xffffffff);
              pplVar10 = (long **)0x0;
              uVar16 = func_0x0387e780(*(long *)(param_2 + 0x220),pplVar2);
              if ((uVar16 & 1) == 0) {
                if (*(long *)(param_2 + 0x220) == 0) goto LAB_033bfa8c;
                func_0x0387dbfc(*(long *)(param_2 + 0x220),param_2,param_1,pplVar2,0);
              }
            }
            plVar5 = *(long **)(param_2 + 0x1e0);
            uVar4 = *(undefined8 *)(param_1 + 0x30);
            if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            param_5 = (long **)func_0x03530158(puVar21,0);
            param_6 = 0;
            uStack_160 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            pplVar10 = param_3;
            pplVar7 = param_3;
            func_0x034ba874(&uStack_100,6);
            lVar14 = _DAT_059e0280;
            pplVar2 = (long **)0x0;
            if (plVar5 != (long *)0x0) {
              func_0x054ed0d0(auStack_150,&uStack_100,0x50);
              lVar15 = *plVar5;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar14) {
                    puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_033bf8d8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar6 = (undefined8 *)func_0x024d927c(plVar5,lVar14,1);
LAB_033bf8d8:
              pcVar19 = (code *)*puVar6;
              func_0x054ed0d0(&plStack_b0,auStack_150,0x50);
              (*pcVar19)(plVar5,uVar4,&plStack_b0,puVar6[1]);
              param_3 = (long **)func_0x036f10d8(param_4,param_2,0);
              lVar14 = func_0x0249fb80(_DAT_059c3d50);
              func_0x02a3aadc(lVar14,_DAT_059feeb8);
              if ((lVar20 != 0) && (0 < *(int *)(lVar20 + 0x18))) {
                pplVar2 = (long **)0x0;
                unaff_x21 = 0xffffffffffffffff;
                do {
                  pplVar10 = &plStack_b0;
                  pplVar7 = _DAT_05a17ad0;
                  func_0x0282f3c4(lVar20,pplVar2);
                  plVar5 = plStack_b0;
                  if (plStack_b0 != (long *)0x0) {
                    if ((*(byte *)(_DAT_059d9e60 + 0x130) <= *(byte *)(*plStack_b0 + 0x130)) &&
                       (*(long *)(*(long *)(*plStack_b0 + 200) +
                                  (ulong)*(byte *)(_DAT_059d9e60 + 0x130) * 8 + -8) == _DAT_059d9e60
                       )) {
                      uStack_a0 = (undefined4)plStack_b0[2];
                      plStack_b0 = _DAT_059dce58;
                      uStack_a8 = 0xffffffffffffffff;
                      uVar4 = func_0x045e0acc(&plStack_b0,0);
                      puVar21 = (undefined *)0x0;
                      if (lVar14 == 0) goto LAB_033bfa8c;
                      uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)((long)plVar5 + 0x14));
                      func_0x02a3c128(lVar14,uVar4,&uStack_100,_DAT_059feee0);
                    }
                  }
                  uVar1 = (int)pplVar2 + 1;
                  pplVar2 = (long **)(ulong)uVar1;
                } while ((int)uVar1 < *(int *)(lVar20 + 0x18));
              }
              uVar4 = func_0x03659ee0(param_2,0);
              uVar4 = func_0x036d62d4(param_4,uVar4,0);
              uVar18 = *(undefined8 *)(param_1 + 0x30);
              uVar8 = func_0x0249fb80(_DAT_059d8a28);
              uStack_160 = 0;
              func_0x0385d0a8(uVar8,uVar4,param_3,uVar18,lVar14,1,0,0);
              uVar16 = func_0x0366bae8(param_2,uVar8,0,0);
              return uVar16;
            }
          }
        }
      }
    }
  }
LAB_033bfa8c:
  auVar22 = func_0x0249fb90();
  lVar14 = auVar22._8_8_;
  uVar9 = auVar22._0_8_;
  uStack_1a0 = 0x33bfa90;
  uVar16 = uVar9;
  pplVar3 = pplVar10;
  pplVar11 = pplVar7;
  pplVar12 = param_5;
  uVar13 = param_6;
  pplStack_198 = pplVar2;
  puStack_190 = puVar21;
  pplStack_188 = param_3;
  lStack_180 = lVar20;
  uStack_178 = unaff_x21;
  pplStack_170 = param_4;
  lStack_168 = param_2;
  if ((bRam0000000005e2c3bf & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca9b8);
    func_0x0249f8e4(&DAT_059cbd38);
    uVar16 = func_0x0249f8e4(&DAT_059df6e0);
    bRam0000000005e2c3bf = 1;
  }
  plStack_1a8 = (long *)0x0;
  if ((param_6 & 1) == 0) {
    if (uVar9 == 0) goto LAB_033bfd48;
    uVar16 = 0;
    if (*(long *)(uVar9 + 0x2e8) != 0) {
      pplVar12 = (long **)0x0;
      uVar16 = func_0x034ccd58(*(long *)(uVar9 + 0x2e8),uVar9,pplVar10,pplVar7,0);
      pplVar3 = pplVar10;
      pplVar11 = pplVar7;
    }
  }
  if (param_5 == (long **)0x0) {
    return uVar16;
  }
  plVar5 = *param_5;
  uVar16 = (ulong)*(ushort *)((long)plVar5 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(plVar5[0x16] + 8);
    do {
      if (*(long *)(piVar17 + -2) == _DAT_059ca9b8) {
        plVar5 = plVar5 + (long)*piVar17 * 2 + 0x27;
        goto LAB_033bfb80;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  pplVar3 = (long **)0x0;
  plVar5 = (long *)func_0x024d927c(param_5,_DAT_059ca9b8,0);
LAB_033bfb80:
  plVar5 = (long *)(*(code *)*plVar5)(param_5,plVar5[1]);
  pplStack_1b0 = &plStack_1a8;
  lStack_1b8 = 0;
  while (plStack_1a8 = plVar5, plVar5 != (long *)0x0) {
    lVar20 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059df6e0) {
          puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_033bfbfc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pplVar3 = (long **)0x0;
    puVar6 = (undefined8 *)func_0x024d927c(plVar5,_DAT_059df6e0,0);
LAB_033bfbfc:
    uVar16 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar5 = plStack_1a8;
    if ((uVar16 & 1) == 0) goto LAB_033bfcac;
    if (plStack_1a8 == (long *)0x0) {
      func_0x0249fb90();
      goto LAB_033bfd3c;
    }
    lVar20 = *plStack_1a8;
    uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059cbd38) {
          puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_033bfc60;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pplVar3 = (long **)0x0;
    puVar6 = (undefined8 *)func_0x024d927c(plStack_1a8,_DAT_059cbd38,0);
LAB_033bfc60:
    (*(code *)*puVar6)(aiStack_208,plVar5,puVar6[1]);
    plVar5 = plStack_1a8;
    if (aiStack_208[0] == 3) {
      if (lVar14 == 0) {
LAB_033bfd3c:
        func_0x0249fb90();
        goto LAB_033bfd40;
      }
      pplVar3 = (long **)0x0;
      lVar20 = func_0x0376e450(lVar14,uStack_1fc,0);
      plVar5 = plStack_1a8;
      if (lVar20 != 0) {
        pplVar3 = (long **)0x0;
        func_0x036efea8(lVar20,uVar9,0);
        plVar5 = plStack_1a8;
      }
    }
  }
  uVar16 = func_0x0249fb90();
LAB_033bfcac:
  lVar14 = 0;
  pplVar7 = &plStack_1a8;
  do {
    plVar5 = *pplVar7;
    if (plVar5 != (long *)0x0) {
      lVar20 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059df598) {
            puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_033bfd10;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pplVar3 = (long **)0x0;
      puVar6 = (undefined8 *)func_0x024d927c(plVar5,_DAT_059df598,0);
LAB_033bfd10:
      uVar16 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if (lVar14 == 0) {
      return uVar16;
    }
LAB_033bfd40:
    func_0x0249fb88(lVar14);
LAB_033bfd48:
    auVar23 = func_0x0249fb90();
    if (auVar23._8_4_ != 1) {
      func_0x022bd79c(&lStack_1b8);
      func_0x0258f7ac(auVar23._0_8_);
      auVar22 = func_0x022bd790();
      uVar1 = func_0x033bb508();
      if ((uVar1 & 1) != 0) {
        func_0x033be0c4(auVar22._0_8_,auVar22._8_8_,pplVar3,pplVar11,pplVar12,uVar13);
      }
      return (ulong)(uVar1 & 1);
    }
    plVar5 = (long *)func_0x054ed080(auVar23._0_8_);
    lVar14 = *plVar5;
    lStack_1b8 = lVar14;
    uVar16 = func_0x054ed090();
    pplVar7 = pplStack_1b0;
  } while( true );
}


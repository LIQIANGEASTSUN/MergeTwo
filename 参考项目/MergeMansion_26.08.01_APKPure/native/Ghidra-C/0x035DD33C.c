/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: GameLogic.Player.Board.Placement.IPlacement GetActivationPlacementStyle(GameLogic.Config.IMergeMansionGameConfig config)
 * Ghidra function entry: 036dd33c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_036dd33c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long **pplVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  undefined *unaff_x24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_120;
  long **pplStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plVar7;
  
  if ((bRam0000000005e2da39 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0158);
    bRam0000000005e2da39 = 1;
  }
  uVar8 = 0;
  uVar2 = func_0x036edd98(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    uVar8 = 0;
    uVar2 = func_0x036edf9c(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      uVar8 = *(undefined8 *)(*plVar3 + 0x1d0);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,param_2);
      if (plVar3 != (long *)0x0) {
        lVar10 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_036dd510;
            }
            uVar2 = uVar2 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar2 != 0);
        }
        uVar8 = 9;
        puVar4 = (undefined8 *)func_0x024d927c(plVar3);
LAB_036dd510:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 != (long *)0x0) {
          lVar10 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar2 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _DAT_059e0158) {
                iVar14 = *piVar16 + 2;
                goto LAB_036dd574;
              }
              uVar2 = uVar2 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar2 != 0);
          }
          uVar8 = 2;
          lVar10 = _DAT_059e0158;
          goto LAB_036dd564;
        }
      }
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      uVar8 = *(undefined8 *)(*plVar3 + 0x1d0);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,param_2);
      if (plVar3 != (long *)0x0) {
        lVar10 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_036dd49c;
            }
            uVar2 = uVar2 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar2 != 0);
        }
        uVar8 = 3;
        puVar4 = (undefined8 *)func_0x024d927c(plVar3);
LAB_036dd49c:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 != (long *)0x0) {
          lVar10 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar2 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _DAT_059deb70) {
                iVar14 = *piVar16 + 1;
LAB_036dd574:
                puVar4 = (undefined8 *)(lVar10 + (long)iVar14 * 0x10 + 0x138);
                goto LAB_036dd57c;
              }
              uVar2 = uVar2 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar2 != 0);
          }
          uVar8 = 1;
          lVar10 = _DAT_059deb70;
LAB_036dd564:
          puVar4 = (undefined8 *)func_0x024d927c(plVar3,lVar10,uVar8);
LAB_036dd57c:
                    /* WARNING: Could not recover jumptable at 0x036dd58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          return uVar2;
        }
      }
    }
  }
  auVar17 = func_0x0249fb90();
  plVar7 = auVar17._8_8_;
  lVar10 = auVar17._0_8_;
  puVar4 = &uStack_d0;
  uStack_60 = 0x36dd594;
  plVar3 = (long *)0x5e2d000;
  uVar9 = uVar8;
  if ((bRam0000000005e2da3c & 1) == 0) {
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da3c = 1;
  }
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    unaff_x24 = &DAT_059df8e8;
    uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar2 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _DAT_059df8e8) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar16 + 5) * 0x10 + 0x138);
          goto LAB_036dd670;
        }
        uVar2 = uVar2 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar2 != 0);
    }
    uVar9 = 5;
    puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059df8e8,5);
LAB_036dd670:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    plVar12 = *(long **)(lVar10 + 0x10);
    if (plVar12 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar12 + 0x1c8))
                                 (plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x1d0));
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      lVar11 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar2 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == _DAT_059df8e8) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_036dd6f0;
          }
          uVar2 = uVar2 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059df8e8,5);
LAB_036dd6f0:
      uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      uVar9 = 0;
      uVar2 = func_0x036f619c(lVar10,uVar6,0);
      if ((uVar2 & 1) == 0) {
        lVar11 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059df8e8) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar16 + 5) * 0x10 + 0x138);
              goto LAB_036dd810;
            }
            uVar2 = uVar2 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059df8e8,5);
LAB_036dd810:
        uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        uVar9 = 0;
        uVar2 = func_0x036f8034(lVar10,uVar6,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar11 = func_0x036d5e58(lVar10);
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0xa8) != 0)) {
          uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0xa8) + 0x10);
          uVar6 = func_0x0249fb80(_DAT_059de230);
          func_0x034a1008(uVar6,plVar7,0);
          uStack_80 = 0;
          uStack_78 = 0;
          func_0x0371f100(&uStack_80,lVar10,uVar8,0);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uStack_68 = uStack_78;
          uStack_70 = uStack_80;
          func_0x0288f218(&uStack_70,&uStack_98,_DAT_05a29e48);
          uStack_c8 = uStack_90;
          uStack_d0 = uStack_98;
          uStack_c0 = uStack_88;
          goto LAB_036dd97c;
        }
      }
      else {
        lVar11 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059dfbc0) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036dd7a4;
            }
            uVar2 = uVar2 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar2 != 0);
        }
        uVar9 = 0;
        puVar4 = (undefined8 *)func_0x024d927c(plVar3,_DAT_059dfbc0,0);
LAB_036dd7a4:
        plVar12 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar12 != (long *)0x0) {
          lVar11 = *plVar12;
          uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar2 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _DAT_059e0788) {
                puVar4 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_036dd8e4;
              }
              uVar2 = uVar2 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)func_0x024d927c(plVar12,_DAT_059e0788,0);
LAB_036dd8e4:
          uVar9 = (*(code *)*puVar4)(plVar12,puVar4[1]);
          uVar6 = func_0x0249fb80(_DAT_059de230);
          func_0x034a1008(uVar6,plVar7,0);
          uStack_80 = 0;
          uStack_78 = 0;
          func_0x0371f100(&uStack_80,lVar10,uVar8,0);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uStack_68 = uStack_78;
          uStack_70 = uStack_80;
          func_0x0288f218(&uStack_70,&uStack_98,_DAT_05a29e48);
          puVar4 = &uStack_b0;
          uStack_a8 = uStack_90;
          uStack_b0 = uStack_98;
          uStack_a0 = uStack_88;
LAB_036dd97c:
          uVar2 = func_0x0371f1bc(uVar9,uVar6,puVar4,param_4,0);
          return uVar2;
        }
      }
    }
  }
  auVar18 = func_0x0249fb90();
  uStack_110 = 0x36dd9ac;
  puStack_100 = unaff_x24;
  plStack_f8 = plVar3;
  uStack_e0 = uVar8;
  uStack_d8 = param_4;
  if ((bRam0000000005e2da3d & 1) == 0) {
    plStack_f0 = plVar7;
    lStack_e8 = lVar10;
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca7d0);
    func_0x0249f8e4(&DAT_059cbb28);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059e1498);
    auVar17._8_8_ = plStack_f0;
    auVar17._0_8_ = lStack_e8;
    bRam0000000005e2da3d = 1;
  }
  plStack_f0 = auVar17._8_8_;
  lStack_e8 = auVar17._0_8_;
  plStack_108 = (long *)0x0;
  plVar3 = (long *)func_0x036f8310(auVar18._0_8_,auVar18._8_8_,uVar9,0);
  if (plVar3 == (long *)0x0) {
LAB_036ddc54:
    func_0x0249fb90();
  }
  else {
    lVar10 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar2 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _DAT_059ca7d0) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_036dda90;
        }
        uVar2 = uVar2 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)func_0x024d927c(plVar3,_DAT_059ca7d0,0);
LAB_036dda90:
    plStack_108 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    pplStack_118 = &plStack_108;
    lStack_120 = 0;
    if (plStack_108 != (long *)0x0) {
      uVar2 = 0;
      do {
        plVar3 = plStack_108;
        lVar10 = *plStack_108;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059df6e0) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036ddb18;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar4 = (undefined8 *)func_0x024d927c(plStack_108,_DAT_059df6e0,0);
LAB_036ddb18:
        uVar15 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        plVar3 = plStack_108;
        if ((uVar15 & 1) == 0) goto LAB_036ddbc0;
        if (plStack_108 == (long *)0x0) {
          func_0x0249fb90();
          goto LAB_036ddc54;
        }
        lVar10 = *plStack_108;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _DAT_059cbb28) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036ddb7c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar4 = (undefined8 *)func_0x024d927c(plStack_108,_DAT_059cbb28,0);
LAB_036ddb7c:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar1 = func_0x036c0a40(uVar8,auVar18._8_8_,0);
        uVar2 = (ulong)((int)uVar2 + (uVar1 & 1));
      } while (plStack_108 != (long *)0x0);
      goto LAB_036ddbbc;
    }
  }
  uVar2 = 0;
LAB_036ddbbc:
  func_0x0249fb90();
LAB_036ddbc0:
  lVar10 = 0;
  pplVar13 = &plStack_108;
  do {
    plVar3 = *pplVar13;
    if (plVar3 != (long *)0x0) {
      lVar11 = *plVar3;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == _DAT_059df598) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_036ddc24;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar4 = (undefined8 *)func_0x024d927c(plVar3,_DAT_059df598,0);
LAB_036ddc24:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if (lVar10 == 0) {
      return uVar2;
    }
    auVar19 = func_0x0249fb88(lVar10);
    uStack_130 = auVar19._0_8_;
    if (auVar19._8_4_ != 1) {
      func_0x022bd79c(&lStack_120);
      func_0x0258f7ac(uStack_130);
      func_0x022bd790();
      uStack_138 = 0;
      uStack_128 = uVar2;
      uVar2 = func_0x036f8310();
      uVar15 = func_0x036cf0a0(uVar2,extraout_x1,1,&uStack_138);
      if ((uVar15 & 1) == 0) {
        uVar2 = uStack_138;
      }
      return uVar2;
    }
    plVar3 = (long *)func_0x054ed080(uStack_130);
    lVar10 = *plVar3;
    lStack_120 = lVar10;
    func_0x054ed090();
    pplVar13 = pplStack_118;
  } while( true );
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Void ProcessActivationForCoordinate(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate coordinate, GameLogic.Config.Types.MetacoreTime timeForActivation, GameLogic.Random.IGenerationContext generationContext, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs, GameLogic.Player.Board.ActivationAuxiliarContext activationAuxiliarContext, out GameLogic.Merge.ActivationCostData activationCostData)
 * Ghidra function entry: 0377bb50
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0377c42c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0377bb50(long param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6,long param_7,undefined1 (*param_8) [16])

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  long **pplVar20;
  int *piVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  uint uStack_424;
  int iStack_420;
  long *plStack_410;
  long *plStack_408;
  undefined1 auStack_3f0 [80];
  undefined1 auStack_3a0 [80];
  long *plStack_350;
  long **pplStack_348;
  undefined8 uStack_340;
  long *plStack_330;
  long **pplStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [80];
  long *plStack_2b0;
  long **pplStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [80];
  undefined1 auStack_210 [80];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c4;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = param_1;
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
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  plStack_e8 = (long *)0x0;
  uStack_d8 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  plStack_168 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  *(undefined8 *)*param_8 = 0;
  *(undefined8 *)(*param_8 + 8) = 0;
  plVar6 = (long *)func_0x0376e450(param_1,param_3);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  plVar15 = (long *)0x0;
  uVar7 = func_0x036ee320(plVar6,param_2,0);
  if ((uVar7 & 1) == 0) {
    return uVar7;
  }
  plVar11 = (long *)0x5e2d000;
  if (param_2 == (long *)0x0) goto LAB_0377d6d0;
  lVar18 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_0377bdfc;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377bdfc:
  uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar9 = func_0x036d3908(plVar6,uVar9,0);
  if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e1498);
  }
  uVar7 = func_0x036c700c(uVar9,plVar6,param_2,0);
  if ((uVar7 & 1) == 0) {
    lVar18 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_0377bea8;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377bea8:
    uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
    uVar7 = func_0x036ed7f4(plVar6,uVar9,0);
    if ((uVar7 & 1) == 0) {
      return uVar7;
    }
  }
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  auVar25 = func_0x0364aa28(param_2,param_1,plVar6,0);
  plVar14 = (long *)(*param_8 + 8);
  *param_8 = auVar25;
  func_0x0249f888(plVar14,0);
  plStack_408 = (long *)*plVar14;
  if (plStack_408 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(undefined4 *)((long)plStack_408 + 0x1c);
  }
  plStack_410 = (long *)CONCAT44(plStack_410._4_4_,uVar5);
  uVar2 = func_0x03778bf0(param_1,param_2);
  uVar2 = func_0x036dbb6c(plVar6,uVar2 & 1,param_2,0);
  uStack_c4 = uVar2;
  plVar10 = (long *)func_0x0249fb80(_DAT_059cf978);
  func_0x0282ee2c(plVar10,_DAT_05a15790);
  lVar18 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_0377bfcc;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377bfcc:
  uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
  plVar11 = (long *)func_0x036dd33c(plVar6,uVar9,0);
  lVar18 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_0377c044;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377c044:
  uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
  plVar15 = (long *)0x0;
  uVar7 = func_0x036ed7f4(plVar6,uVar9,0);
  if ((uVar7 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059e0210) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377c0bc;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059e0210,0);
LAB_0377c0bc:
    uVar9 = (*(code *)*puVar8)(plVar11,param_3,param_1,puVar8[1]);
    plVar15 = _DAT_05a43a40;
    uVar9 = func_0x026eb75c(uVar9,uVar2,_DAT_05a43a40);
    if (param_5 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *param_5;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 3) * 0x10 + 0x138);
          goto LAB_0377c14c;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_5,_DAT_059df8e8,3);
LAB_0377c14c:
    uVar12 = (*(code *)*puVar8)(param_5,puVar8[1]);
    plVar15 = _DAT_05a48500;
    plVar10 = (long *)func_0x027060e0(uVar9,uVar12,_DAT_05a48500);
  }
  if (plVar11 == (long *)0x0) {
LAB_0377c1b0:
    if (plVar10 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377c208;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    plVar15 = (long *)0x0;
    puVar8 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059c98a0,0);
LAB_0377c208:
    iVar3 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if (iVar3 < 1 || (int)uVar2 < 1) {
      lVar18 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar7 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
            goto LAB_0377c278;
          }
          uVar7 = uVar7 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377c278:
      uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
      plVar15 = (long *)0x0;
      uVar7 = func_0x036ed7f4(plVar6,uVar9,0);
      if ((uVar7 & 1) == 0) {
        return uVar7;
      }
    }
  }
  else if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(_DAT_059dda40 + 0x130)) ||
          (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(_DAT_059dda40 + 0x130) * 8 + -8)
           != _DAT_059dda40)) goto LAB_0377c1b0;
  iVar3 = func_0x036dd320(plVar6,0);
  if (iVar3 < 1) {
    if (plVar10 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377c37c;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059c98a0,0);
LAB_0377c37c:
    iVar3 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    lVar18 = *plVar10;
    uVar1 = *(ushort *)(lVar18 + 0x12e);
    uVar7 = (ulong)uVar1;
    if (iVar3 < (int)uVar2) {
      if (uVar1 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059c98a0) {
            puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0377c410;
          }
          uVar7 = uVar7 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059c98a0,0);
LAB_0377c410:
      (*(code *)*puVar8)(plVar10,puVar8[1]);
SUB_0377d73c:
      if ((bRam0000000005e2dfcd & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2ba0);
        func_0x0249f8e4(&DAT_059e46b8);
        bRam0000000005e2dfcd = 1;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar7 = func_0x03639d34(auVar26._8_8_,0x2d,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      lVar19 = *(long *)(auVar26._0_8_ + 0x88);
      lVar18 = func_0x03530c84(param_4,0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      if ((bRam0000000005e3238c & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2ba0,lVar18,0);
        bRam0000000005e3238c = 1;
      }
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      return (ulong)(lVar18 < lVar19);
    }
    if (uVar1 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377c92c;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059c98a0,0);
LAB_0377c92c:
    iVar3 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if (iVar3 < (int)uVar2) {
      uVar9 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
      uVar7 = func_0x036ed7f4(plVar6,uVar9,0);
      if ((uVar7 & 1) == 0) {
        return uVar7;
      }
    }
    if ((param_7 == 0) ||
       (uVar7 = func_0x0376d3b8(param_7,param_2,*(undefined8 *)(param_1 + 0x30)), (int)uVar7 == 0))
    {
      uVar7 = func_0x036daf18(plVar6,param_4,param_2,uVar5,0);
    }
  }
  else {
    if (plVar10 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059c98a0) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377c350;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059c98a0,0);
LAB_0377c350:
    uVar4 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    uVar2 = func_0x03778bf0(param_1,param_2);
    uVar7 = func_0x036db608(plVar6,uVar4,param_2,uVar5,uVar2 & 1,&uStack_c4,0);
  }
  iVar3 = (int)uVar7;
  if (1 < iVar3 - 1U) {
    return uVar7;
  }
  lVar18 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_0377c4b8;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377c4b8:
  uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
  plStack_410 = (long *)func_0x036d3908(plVar6,uVar9,0);
  lVar18 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_0377c530;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377c530:
  uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
  plVar16 = (long *)0x0;
  uVar7 = func_0x036edd98(plVar6,uVar9,0);
  plVar11 = plStack_410;
  if ((uVar7 & 1) == 0) {
    lVar18 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_0377c5f8;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377c5f8:
    uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
    plVar15 = (long *)0x0;
    uVar7 = func_0x036edf9c(plVar6,uVar9,0);
    if ((uVar7 & 1) != 0) {
      if (plStack_410 == (long *)0x0) goto LAB_0377d6d0;
      plVar15 = plStack_410;
      plVar16 = (long *)func_0x022bffa8(9,_DAT_059dfbc0,plStack_410);
      if (plVar16 == (long *)0x0) goto LAB_0377d6d0;
      uVar7 = func_0x022bffa8(3,_DAT_059e0158,plVar16);
      goto LAB_0377c6e4;
    }
    plVar11 = (long *)0x2;
  }
  else {
    plVar15 = plVar16;
    if (plStack_410 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *plStack_410;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 3) * 0x10 + 0x138);
          goto LAB_0377c66c;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    plVar16 = (long *)0x3;
    puVar8 = (undefined8 *)func_0x024d927c(plStack_410,_DAT_059dfbc0,3);
LAB_0377c66c:
    plVar13 = (long *)(*(code *)*puVar8)(plStack_410,puVar8[1]);
    plVar15 = plVar16;
    if (plVar13 == (long *)0x0) goto LAB_0377d6d0;
    lVar18 = *plVar13;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059deb70) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_0377c6d8;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    plVar16 = (long *)0x5;
    puVar8 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059deb70,5);
LAB_0377c6d8:
    uVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_0377c6e4:
    plVar11 = (long *)(uVar7 & 0xffffffff);
    plVar15 = plVar16;
  }
  if ((param_7 == 0) || (plVar16 = *(long **)(param_7 + 0x10), plVar16 == (long *)0x0)) {
    lVar18 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_0377c758;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377c758:
    uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
    plVar15 = (long *)0x0;
    uVar7 = func_0x036ed7f4(plVar6,uVar9,0);
    if ((uVar7 & 1) != 0) goto LAB_0377d1f0;
    uVar9 = func_0x022bffa8(0xc,_DAT_059e0220,param_2);
    uStack_b8 = 0;
    plStack_c0 = (long *)0x0;
    func_0x0371f100(&plStack_c0,plVar6,param_1,0);
    uVar9 = func_0x036dd080(plVar6,param_5,param_2,uVar9,plStack_c0,uStack_b8,0);
    uVar7 = func_0x036cf0a0(uVar9,param_2,1,&uStack_d0,0);
    if ((uVar7 & 1) == 0) {
      uStack_b8 = 0;
      plStack_c0 = (long *)0x0;
      func_0x0371f100(&plStack_c0,plVar6,param_1,0);
      uVar9 = func_0x022bffa8(0xc,_DAT_059e0220,param_2);
      uVar12 = func_0x026e290c(uStack_d0,_DAT_05a41860);
    }
    else {
      uStack_b8 = 0;
      plStack_c0 = (long *)0x0;
      func_0x0371f100(&plStack_c0,plVar6,param_1,0);
      uVar9 = func_0x022bffa8(0xc,_DAT_059e0220,param_2);
      uVar12 = 0;
    }
    plVar15 = plStack_c0;
    plVar16 = (long *)func_0x036dcbd4(plVar6,param_5,plStack_c0,uStack_b8,param_2,uVar9,uVar12,0);
    if (plVar16 == (long *)0x0) goto LAB_0377d1f0;
    uStack_424 = 0;
  }
  else {
    uStack_424 = 1;
  }
  if (plStack_408 == (long *)0x0) goto LAB_0377cad0;
  lVar18 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 3) * 0x10 + 0x138);
        goto LAB_0377c9bc;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,3);
LAB_0377c9bc:
  uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar5 = func_0x03496864(uVar9,0);
  lVar18 = plStack_408[4];
  if (*(int *)(_DAT_059dd500 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059dd500);
  }
  uVar7 = func_0x043bea48(uVar5,(int)lVar18,0);
  if ((uVar7 & 1) == 0) {
LAB_0377ca94:
    if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    plVar15 = plVar16;
    auVar26 = func_0x0364afe0(param_2,param_1,plVar16,0);
    *param_8 = auVar26;
  }
  else {
    func_0x0377d80c(&plStack_c0,param_2,param_1,plStack_410,plVar16,*(undefined4 *)*param_8,
                    plStack_408);
    uStack_108 = uStack_b8;
    plStack_110 = plStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    if (*(int *)(_DAT_059d3bc0 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    plVar15 = _DAT_05a29190;
    uVar7 = func_0x0288eda8(&plStack_110,&plStack_e8,_DAT_05a29190);
    if ((uVar7 & 1) == 0) goto LAB_0377ca94;
    uStack_b0 = uStack_d8;
    uStack_b8 = uStack_e0;
    plStack_c0 = plStack_e8;
    *(undefined8 *)(*param_8 + 8) = uStack_d8;
    *(undefined8 *)*param_8 = uStack_e0;
    plVar16 = plStack_e8;
  }
  func_0x0249f888(plVar14,0);
LAB_0377cad0:
  if (param_7 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(param_7 + 0x18);
    if ((plStack_408 != (long *)0x0) && (lVar18 != 0)) {
      plVar15 = (long *)0x0;
      func_0x0389298c(lVar18,(int)plStack_408[3],0);
    }
  }
  iStack_420 = iVar3;
  if (plVar16 == (long *)0x0) goto LAB_0377d6d0;
  lVar19 = *plVar16;
  uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
        puVar8 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xe) * 0x10 + 0x138);
        goto LAB_0377cb5c;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x024d927c(plVar16,_DAT_059dfbc0,0xe);
LAB_0377cb5c:
  plVar15 = (long *)(*(code *)*puVar8)(plVar16,puVar8[1]);
  if (plVar15 != (long *)0x0) {
    lVar19 = *plVar15;
    uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df1f0) {
          puVar8 = (undefined8 *)(lVar19 + (long)(*piVar21 + 3) * 0x10 + 0x138);
          goto LAB_0377cbc8;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df1f0,3);
LAB_0377cbc8:
    uVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    if ((uVar7 & 1) != 0) {
      uVar9 = func_0x0249fb80(_DAT_059dac08);
      func_0x0373956c(uVar9,param_2,param_1,9,0);
      if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      func_0x034ba874(&uStack_160,0x18,param_3,**(undefined8 **)(_DAT_059db250 + 0xb8),param_4,
                      plVar16,0,0,0);
      uVar5 = func_0x022bffa8(0x1f,_DAT_059dfbc0,plVar16);
      plVar14 = (long *)func_0x0249fb80(_DAT_059e1488);
      func_0x03516a08(plVar14,uVar5,0);
      lVar18 = func_0x022bffa8(0xe,_DAT_059dfbc0,plVar16);
      plVar15 = plVar16;
      plVar11 = param_4;
      if (lVar18 == 0) goto LAB_0377d6d0;
      plVar10 = (long *)func_0x022bffa8(1,_DAT_059df1f0,lVar18);
      uVar24 = *(undefined8 *)(param_1 + 0x30);
      uVar22 = **(undefined8 **)(_DAT_059db250 + 0xb8);
      uVar12 = func_0x0249fb80(_DAT_059e2700);
      func_0x036d1444(uVar12,param_2,plVar14,param_4,uVar24,2,0,0,0);
      lVar18 = func_0x0249fb80(_DAT_059d0510);
      func_0x0282ee2c(lVar18,_DAT_05a192a0);
      plVar15 = plVar14;
      if (lVar18 == 0) goto LAB_0377d6d0;
      func_0x054ed0d0(auStack_210,&uStack_160,0x50);
      plVar15 = _DAT_05a192a8;
      func_0x025a1da8(lVar18,auStack_210,_DAT_05a192a8);
      if (plVar10 == (long *)0x0) goto LAB_0377d6d0;
      func_0x0240cee0(1,_DAT_059df1d0,plVar10,uVar9,uVar22,uVar12,param_4,lVar18);
      lVar18 = _DAT_059c9978;
      plVar15 = plVar10;
      if (param_6 == (long *)0x0) goto LAB_0377d6d0;
      func_0x054ed0d0(auStack_260,&uStack_160,0x50);
      func_0x0240cde0(2,lVar18,param_6,auStack_260);
      goto LAB_0377d058;
    }
  }
  plVar14 = (long *)func_0x0377dd18(param_1,param_2,plVar16,param_3,plVar10,uStack_c4,param_4,
                                    plVar11,param_5,lVar18);
  plVar15 = plVar16;
  if (plVar14 == (long *)0x0) goto LAB_0377d6d0;
  lVar18 = *plVar14;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar7 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == _DAT_059ca9b8) {
        puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_0377ce40;
      }
      uVar7 = uVar7 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar7 != 0);
  }
  plVar16 = (long *)0x0;
  puVar8 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059ca9b8,0);
LAB_0377ce40:
  plVar11 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
  pplStack_2a8 = &plStack_168;
  plStack_2b0 = (long *)0x0;
  plVar15 = plVar16;
  while (plStack_168 = plVar11, plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059df6e0) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377cec4;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    plVar15 = (long *)0x0;
    puVar8 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059df6e0,0);
LAB_0377cec4:
    uVar7 = (*(code *)*puVar8)(plVar11,puVar8[1]);
    plVar11 = plStack_168;
    if ((uVar7 & 1) == 0) goto LAB_0377cfd0;
    if (plStack_168 == (long *)0x0) goto LAB_0377d6d8;
    lVar18 = *plStack_168;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059cbd38) {
          puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0377cf28;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(plStack_168,_DAT_059cbd38,0);
LAB_0377cf28:
    (*(code *)*puVar8)(&plStack_c0,plVar11,puVar8[1]);
    plVar15 = (long *)0x50;
    func_0x054ed0d0(&uStack_1c0,&plStack_c0,0x50);
    if (param_6 == (long *)0x0) goto LAB_0377d6d4;
    lVar18 = *param_6;
    uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == _DAT_059c9978) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_0377cfa0;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x024d927c(param_6,_DAT_059c9978,2);
LAB_0377cfa0:
    pcVar23 = (code *)*puVar8;
    func_0x054ed0d0(&plStack_c0,&uStack_1c0,0x50);
    plVar15 = (long *)puVar8[1];
    (*pcVar23)(param_6,&plStack_c0,plVar15);
    plVar11 = plStack_168;
  }
  uVar7 = func_0x0249fb90();
LAB_0377cfd0:
  plVar11 = (long *)0x0;
  iVar3 = 0x23;
  pplVar20 = &plStack_168;
  do {
    plVar14 = *pplVar20;
    if (plVar14 != (long *)0x0) {
      lVar18 = *plVar14;
      uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar7 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059df598) {
            puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0377d03c;
          }
          uVar7 = uVar7 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar7 != 0);
      }
      plVar15 = (long *)0x0;
      puVar8 = (undefined8 *)func_0x024d927c(plVar14);
LAB_0377d03c:
      uVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    }
    if (plVar11 == (long *)0x0) {
      if ((iVar3 != 0x23) && (iVar3 != 0)) {
        return uVar7;
      }
LAB_0377d058:
      lVar18 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar7 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
            goto LAB_0377d0b4;
          }
          uVar7 = uVar7 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377d0b4:
      uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
      plVar15 = (long *)0x0;
      uVar7 = func_0x036edd98(plVar6,uVar9,0);
      if ((uVar7 & 1) != 0) {
        lVar18 = func_0x036d5ec8(plVar6,0);
        uVar2 = uStack_424;
        if (lVar18 == 0) {
          uVar2 = 1;
        }
        if ((uVar2 & 1) != 0) goto LAB_0377d10c;
        lVar18 = func_0x036d5ec8(plVar6,0);
        plVar11 = plStack_408;
        if (lVar18 != 0) {
          *(long *)(lVar18 + 0x48) = *(long *)(lVar18 + 0x48) + 1;
          goto LAB_0377d10c;
        }
        goto LAB_0377d6d0;
      }
LAB_0377d10c:
      lVar18 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar7 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == _DAT_059df8e8) {
            puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
            goto LAB_0377d164;
          }
          uVar7 = uVar7 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_0377d164:
      uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
      plVar15 = (long *)0x0;
      uVar7 = func_0x036edf9c(plVar6,uVar9,0);
      if (((uVar7 & 1) != 0) && (lVar18 = func_0x036d3170(plVar6,0), lVar18 != 0)) {
        uVar2 = uStack_424;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar2 = 1;
        }
        if ((uVar2 & 1) == 0) {
          lVar18 = func_0x036d3170(plVar6,0);
          plVar11 = plStack_408;
          if ((lVar18 == 0) ||
             (plVar15 = *(long **)(lVar18 + 0x10), plVar11 = plStack_408, plVar15 == (long *)0x0))
          goto LAB_0377d6d0;
          func_0x022bffa8(3,_DAT_059e0170);
        }
      }
      iVar3 = iStack_420;
      if (plStack_408 != (long *)0x0) {
        plVar15 = plVar6;
        func_0x0377de2c(param_1,param_2,plVar6,param_3,param_6);
      }
LAB_0377d1f0:
      if (iVar3 == 1) goto LAB_0377d6a0;
      plVar11 = plStack_410;
      if (plStack_410 != (long *)0x0) {
        lVar18 = *plStack_410;
        uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _DAT_059dfbc0) {
              puVar8 = (undefined8 *)(lVar18 + (long)(*piVar21 + 9) * 0x10 + 0x138);
              goto LAB_0377d25c;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar7 != 0);
        }
        plVar15 = (long *)0x9;
        puVar8 = (undefined8 *)func_0x024d927c(plStack_410,_DAT_059dfbc0,9);
LAB_0377d25c:
        plVar14 = (long *)(*(code *)*puVar8)(plStack_410,puVar8[1]);
        plVar11 = plStack_410;
        if (plVar14 != (long *)0x0) {
          lVar18 = *plVar14;
          uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar7 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059e0158) {
                puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0377d2c4;
              }
              uVar7 = uVar7 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059e0158,0);
LAB_0377d2c4:
          uVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
          if ((uVar7 & 1) != 0) {
            uVar9 = func_0x036d3170(plVar6,0);
            plVar15 = plVar14;
            lVar18 = func_0x022cbbd0(6,_DAT_059e0158,plVar14,uVar9,param_5);
            if (lVar18 != 0) {
              lVar19 = func_0x036d3170(plVar6,0);
              plVar11 = plVar14;
              if (lVar19 != 0) {
                func_0x0370f164(lVar19,lVar18,0);
                uStack_298 = 0;
                uStack_2a0 = 0;
                uStack_288 = 0;
                uStack_290 = 0;
                uStack_278 = 0;
                uStack_280 = 0;
                uStack_268 = 0;
                uStack_270 = 0;
                pplStack_2a8 = (long **)0x0;
                plStack_2b0 = (long *)0x0;
                plVar15 = param_3;
                func_0x034ba874(&plStack_2b0,6,param_3,param_3,param_4,0,0,0,0);
                lVar18 = _DAT_059c9978;
                if (param_6 != (long *)0x0) {
                  func_0x054ed0d0(auStack_300,&plStack_2b0,0x50);
                  uVar7 = func_0x0240cde0(2,lVar18,param_6,auStack_300);
                  return uVar7;
                }
              }
              goto LAB_0377d6d0;
            }
          }
          lVar18 = *plVar14;
          uVar7 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar7 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _DAT_059e0158) {
                puVar8 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0377d3dc;
              }
              uVar7 = uVar7 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059e0158,0);
LAB_0377d3dc:
          uVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
          if ((uVar7 & 1) == 0) {
LAB_0377d4ac:
            plVar15 = plStack_410;
            lVar18 = func_0x022bffa8(3,_DAT_059dfbc0,plStack_410);
            plVar11 = plVar14;
            if (lVar18 != 0) {
              uVar9 = func_0x022bffa8(4,_DAT_059deb70,lVar18);
              uStack_310 = 0;
              uStack_308 = 0;
              func_0x0371f100(&uStack_310,plVar6,param_1,0);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              uStack_68 = uStack_308;
              uStack_70 = uStack_310;
              func_0x0288f218(&uStack_70,&plStack_2b0,_DAT_05a29e48);
              pplStack_348 = pplStack_2a8;
              plStack_350 = plStack_2b0;
              uStack_340 = uStack_2a0;
              plVar11 = (long *)func_0x0371f1bc(uVar9,param_5,&plStack_350,0,0);
              if (plVar11 != (long *)0x0) goto LAB_0377d55c;
              func_0x037789bc(param_1,param_2,param_3,param_4,1);
              uStack_298 = 0;
              uStack_2a0 = 0;
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              uStack_268 = 0;
              uStack_270 = 0;
              pplStack_2a8 = (long **)0x0;
              plStack_2b0 = (long *)0x0;
              plVar15 = param_3;
              func_0x034ba874(&plStack_2b0,4,param_3,param_3,param_4,0,0,0,0);
              lVar18 = _DAT_059c9978;
              if (param_6 == (long *)0x0) goto LAB_0377d6d0;
              func_0x054ed0d0(auStack_3f0,&plStack_2b0,0x50);
              puVar17 = auStack_3f0;
              goto LAB_0377d690;
            }
          }
          else {
            plVar14 = (long *)func_0x022bffa8(4,_DAT_059e0158,plVar14);
            uStack_310 = 0;
            uStack_308 = 0;
            func_0x0371f100(&uStack_310,plVar6,param_1,0);
            if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uStack_68 = uStack_308;
            uStack_70 = uStack_310;
            func_0x0288f218(&uStack_70,&plStack_2b0,_DAT_05a29e48);
            pplStack_328 = pplStack_2a8;
            plStack_330 = plStack_2b0;
            uStack_320 = uStack_2a0;
            plVar11 = (long *)func_0x0371f1bc(plVar14,param_5,&plStack_330,0,0);
            if (plVar11 == (long *)0x0) goto LAB_0377d4ac;
            uVar9 = func_0x022bffa8(5,_DAT_059df8e8,param_2);
            uVar7 = func_0x036edd98(plVar6,uVar9,0);
            plVar14 = plVar11;
            if ((uVar7 & 1) != 0) goto LAB_0377d4ac;
LAB_0377d55c:
            lVar18 = func_0x036d5ffc(plVar6,0);
            if (lVar18 != 0) {
              uVar9 = *(undefined8 *)(param_1 + 0x30);
              uVar5 = func_0x036d392c(plVar6,0);
              func_0x0374def0(lVar18,param_2,uVar9,uVar5,0);
            }
            func_0x03774f00(param_1,param_2,param_3,plVar11,param_5,param_4,2,0);
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            uStack_268 = 0;
            uStack_270 = 0;
            pplStack_2a8 = (long **)0x0;
            plStack_2b0 = (long *)0x0;
            plVar15 = param_3;
            func_0x034ba874(&plStack_2b0,6,param_3,param_3,param_4,0,0,0,0);
            lVar18 = _DAT_059c9978;
            if (param_6 != (long *)0x0) {
              func_0x054ed0d0(auStack_3a0,&plStack_2b0,0x50);
              puVar17 = auStack_3a0;
LAB_0377d690:
              func_0x0240cde0(2,lVar18,param_6,puVar17);
LAB_0377d6a0:
              uVar7 = func_0x03530c84(param_4,0);
              *(ulong *)(param_1 + 0x20) = uVar7;
              return uVar7;
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
    auVar27 = func_0x0249fb88(plVar11);
    if (auVar27._8_4_ != 1) break;
    puVar8 = (undefined8 *)func_0x054ed080(auVar27._0_8_);
    plVar11 = (long *)*puVar8;
    plStack_2b0 = plVar11;
    uVar7 = func_0x054ed090();
    iVar3 = 0;
    pplVar20 = pplStack_2a8;
  } while( true );
  func_0x022bd79c(&plStack_2b0);
  func_0x0258f7ac(auVar27._0_8_);
  auVar26 = func_0x022bd790();
  param_4 = plVar15;
  goto SUB_0377d73c;
}


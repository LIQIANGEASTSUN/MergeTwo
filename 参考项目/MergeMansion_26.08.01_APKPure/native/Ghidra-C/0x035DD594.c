/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: GameLogic.Player.Items.IItemDefinition SpawnItemType(GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard board, System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.IItemDefinition> allowedItems = null)
 * Ghidra function entry: 036dd594
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_036dd594(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined *unaff_x24;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  long **pplStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_b0;
  plVar13 = (long *)0x5e2d000;
  uVar5 = param_3;
  if ((bRam0000000005e2da3c & 1) == 0) {
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da3c = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    unaff_x24 = &DAT_059df8e8;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _DAT_059df8e8) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_036dd670;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    uVar5 = 5;
    puVar2 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036dd670:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 != (long *)0x0) {
      plVar13 = (long *)(**(code **)(*plVar7 + 0x1c8))
                                  (plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x1d0));
      if (plVar13 == (long *)0x0) {
        return 0;
      }
      lVar6 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _DAT_059df8e8) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_036dd6f0;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar2 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036dd6f0:
      uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
      uVar5 = 0;
      uVar10 = func_0x036f619c(param_1,uVar3,0);
      if ((uVar10 & 1) == 0) {
        lVar6 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _DAT_059df8e8) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_036dd810;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036dd810:
        uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
        uVar5 = 0;
        uVar10 = func_0x036f8034(param_1,uVar3,0);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        lVar6 = func_0x036d5e58(param_1);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa8) != 0)) {
          uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xa8) + 0x10);
          uVar3 = func_0x0249fb80(_DAT_059de230);
          func_0x034a1008(uVar3,param_2,0);
          uStack_60 = 0;
          uStack_58 = 0;
          func_0x0371f100(&uStack_60,param_1,param_3,0);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uStack_48 = uStack_58;
          uStack_50 = uStack_60;
          func_0x0288f218(&uStack_50,&uStack_78,_DAT_05a29e48);
          uStack_a8 = uStack_70;
          uStack_b0 = uStack_78;
          uStack_a0 = uStack_68;
          goto LAB_036dd97c;
        }
      }
      else {
        lVar6 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _DAT_059dfbc0) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_036dd7a4;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        uVar5 = 0;
        puVar4 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059dfbc0,0);
LAB_036dd7a4:
        plVar7 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == _DAT_059e0788) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_036dd8e4;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)func_0x024d927c(plVar7,_DAT_059e0788,0);
LAB_036dd8e4:
          uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          uVar3 = func_0x0249fb80(_DAT_059de230);
          func_0x034a1008(uVar3,param_2,0);
          uStack_60 = 0;
          uStack_58 = 0;
          func_0x0371f100(&uStack_60,param_1,param_3,0);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uStack_48 = uStack_58;
          uStack_50 = uStack_60;
          func_0x0288f218(&uStack_50,&uStack_78,_DAT_05a29e48);
          puVar4 = &uStack_90;
          uStack_88 = uStack_70;
          uStack_90 = uStack_78;
          uStack_80 = uStack_68;
LAB_036dd97c:
          uVar10 = func_0x0371f1bc(uVar5,uVar3,puVar4,param_4,0);
          return uVar10;
        }
      }
    }
  }
  auVar14 = func_0x0249fb90();
  uStack_f0 = 0x36dd9ac;
  puStack_e0 = unaff_x24;
  plStack_d8 = plVar13;
  plStack_d0 = param_2;
  lStack_c8 = param_1;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  if ((bRam0000000005e2da3d & 1) == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca7d0);
    func_0x0249f8e4(&DAT_059cbb28);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059e1498);
    bRam0000000005e2da3d = 1;
  }
  plStack_e8 = (long *)0x0;
  plVar13 = (long *)func_0x036f8310(auVar14._0_8_,auVar14._8_8_,uVar5,0);
  if (plVar13 == (long *)0x0) {
LAB_036ddc54:
    func_0x0249fb90();
  }
  else {
    lVar6 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _DAT_059ca7d0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036dda90;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059ca7d0,0);
LAB_036dda90:
    plStack_e8 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
    pplStack_f8 = &plStack_e8;
    lStack_100 = 0;
    if (plStack_e8 != (long *)0x0) {
      uVar10 = 0;
      do {
        plVar13 = plStack_e8;
        lVar6 = *plStack_e8;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _DAT_059df6e0) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_036ddb18;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x024d927c(plStack_e8,_DAT_059df6e0,0);
LAB_036ddb18:
        uVar11 = (*(code *)*puVar4)(plVar13,puVar4[1]);
        plVar13 = plStack_e8;
        if ((uVar11 & 1) == 0) goto LAB_036ddbc0;
        if (plStack_e8 == (long *)0x0) {
          func_0x0249fb90();
          goto LAB_036ddc54;
        }
        lVar6 = *plStack_e8;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _DAT_059cbb28) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_036ddb7c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x024d927c(plStack_e8,_DAT_059cbb28,0);
LAB_036ddb7c:
        uVar5 = (*(code *)*puVar4)(plVar13,puVar4[1]);
        if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar1 = func_0x036c0a40(uVar5,auVar14._8_8_,0);
        uVar10 = (ulong)((int)uVar10 + (uVar1 & 1));
      } while (plStack_e8 != (long *)0x0);
      goto LAB_036ddbbc;
    }
  }
  uVar10 = 0;
LAB_036ddbbc:
  func_0x0249fb90();
LAB_036ddbc0:
  lVar6 = 0;
  pplVar8 = &plStack_e8;
  do {
    plVar13 = *pplVar8;
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _DAT_059df598) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_036ddc24;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x024d927c(plVar13,_DAT_059df598,0);
LAB_036ddc24:
      (*(code *)*puVar4)(plVar13,puVar4[1]);
    }
    if (lVar6 == 0) {
      return uVar10;
    }
    auVar15 = func_0x0249fb88(lVar6);
    uStack_110 = auVar15._0_8_;
    if (auVar15._8_4_ != 1) {
      func_0x022bd79c(&lStack_100);
      func_0x0258f7ac(uStack_110);
      func_0x022bd790();
      uStack_118 = 0;
      uStack_108 = uVar10;
      uVar10 = func_0x036f8310();
      uVar11 = func_0x036cf0a0(uVar10,extraout_x1,1,&uStack_118);
      if ((uVar11 & 1) == 0) {
        uVar10 = uStack_118;
      }
      return uVar10;
    }
    plVar13 = (long *)func_0x054ed080(uStack_110);
    lVar6 = *plVar13;
    lStack_100 = lVar6;
    func_0x054ed090();
    pplVar8 = pplStack_f8;
  } while( true );
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean DoesTakeInItem(GameLogic.Player.IPlayer player, System.Int32 type)
 * Ghidra function entry: 036e109c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_036e109c(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  uVar7 = param_3 & 0xffffffff;
  if ((bRam0000000005e2da53 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0730);
    bRam0000000005e2da53 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _DAT_059df8e8) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_036e113c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036e113c:
    uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
    param_3 = 0;
    uVar5 = func_0x036ee850(param_1,uVar2);
    if ((uVar5 & 1) == 0) {
LAB_036e11c0:
      lVar4 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _DAT_059df8e8) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_036e1210;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036e1210:
      uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
      param_3 = 0;
      uVar5 = func_0x036ee9e0(param_1,uVar2);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      lVar4 = func_0x036d5e58(param_1);
      if (((lVar4 != 0) && (*(long *)(lVar4 + 0xa8) != 0)) &&
         (plVar8 = *(long **)(*(long *)(lVar4 + 0xa8) + 0x10), plVar8 != (long *)0x0)) {
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _DAT_059e0730) goto LAB_036e12a8;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
LAB_036e1284:
        puVar1 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059e0730,0);
LAB_036e12b4:
                    /* WARNING: Could not recover jumptable at 0x036e12d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)*puVar1)(plVar8,param_2,uVar7,puVar1[1]);
        return uVar2;
      }
    }
    else {
      lVar4 = func_0x036d5e58(param_1);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x58) == 0) goto LAB_036e11c0;
        lVar4 = func_0x036d5e58(param_1);
        if ((lVar4 == 0) || (plVar8 = *(long **)(lVar4 + 0x58), plVar8 == (long *)0x0))
        goto LAB_036e12d4;
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _DAT_059e0730) goto LAB_036e12a8;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        goto LAB_036e1284;
      }
    }
  }
LAB_036e12d4:
  auVar10 = func_0x0249fb90();
  plVar8 = auVar10._8_8_;
  uVar2 = auVar10._0_8_;
  uVar7 = param_3 & 0xffffffff;
  if ((bRam0000000005e2da54 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059e0730);
    bRam0000000005e2da54 = 1;
  }
  if (plVar8 == (long *)0x0) {
LAB_036e1500:
    auVar10 = func_0x0249fb90();
    if ((bRam0000000005e2da55 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e0730);
      bRam0000000005e2da55 = 1;
    }
    lVar4 = *(long *)(auVar10._0_8_ + 0x20);
    if ((lVar4 == 0) || (plVar8 = *(long **)(lVar4 + 0x58), plVar8 == (long *)0x0)) {
      return 0;
    }
    lVar4 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _DAT_059e0730) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_036e15b8;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059e0730,4);
LAB_036e15b8:
                    /* WARNING: Could not recover jumptable at 0x036e15d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)*puVar1)(plVar8,auVar10._8_8_,auVar10._0_8_,param_3,puVar1[1]);
    return uVar2;
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _DAT_059df8e8) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_036e1378;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059df8e8,5);
LAB_036e1378:
  uVar3 = (*(code *)*puVar1)(plVar8,puVar1[1]);
  param_3 = 0;
  uVar5 = func_0x036ee850(uVar2,uVar3,0);
  if ((uVar5 & 1) == 0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _DAT_059df8e8) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_036e1438;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059df8e8,5);
LAB_036e1438:
    uVar3 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    param_3 = 0;
    uVar5 = func_0x036ee9e0(uVar2,uVar3,0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lVar4 = func_0x036d5e58(uVar2);
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0xa8) == 0)) ||
       (plVar9 = *(long **)(*(long *)(lVar4 + 0xa8) + 0x10), plVar9 == (long *)0x0))
    goto LAB_036e1500;
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _DAT_059e0730) goto LAB_036e14d0;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    lVar4 = func_0x036d5e58(uVar2);
    if ((lVar4 == 0) || (plVar9 = *(long **)(lVar4 + 0x58), plVar9 == (long *)0x0))
    goto LAB_036e1500;
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _DAT_059e0730) goto LAB_036e14d0;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar1 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0730,1);
LAB_036e14e0:
                    /* WARNING: Could not recover jumptable at 0x036e14fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar9,plVar8,uVar7,puVar1[1]);
  return uVar2;
LAB_036e12a8:
  puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  goto LAB_036e12b4;
LAB_036e14d0:
  puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
  goto LAB_036e14e0;
}


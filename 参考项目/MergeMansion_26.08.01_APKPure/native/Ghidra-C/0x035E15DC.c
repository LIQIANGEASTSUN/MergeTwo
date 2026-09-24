/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean IsConsumable(GameLogic.Player.IPlayer player)
 * Ghidra function entry: 036e15dc
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_036e15dc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000005e2da56 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2da56 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _DAT_059df8e8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_036e1680;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036e1680:
    uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
    plVar4 = *(long **)(param_1 + 0x10);
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                   (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x1d0)),
       plVar4 != (long *)0x0)) {
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _DAT_059dfbc0) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
            goto LAB_036e1708;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059dfbc0,0x12);
LAB_036e1708:
      plVar4 = (long *)(*(code *)*puVar1)(plVar4,puVar1[1]);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _DAT_059df2a8) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_036e1770;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059df2a8,0);
LAB_036e1770:
                    /* WARNING: Could not recover jumptable at 0x036e1780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined8 *)(*(code *)*puVar1)(plVar4,puVar1[1]);
        return puVar1;
      }
    }
  }
  auVar9 = func_0x0249fb90();
  plVar4 = auVar9._8_8_;
  if ((bRam0000000005e2da57 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2da57 = 1;
  }
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _DAT_059df8e8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_036e182c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059df8e8,5);
LAB_036e182c:
    uVar2 = (*(code *)*puVar1)(plVar4,puVar1[1]);
    plVar4 = *(long **)(auVar9._0_8_ + 0x10);
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                   (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x1d0)),
       plVar4 != (long *)0x0)) {
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _DAT_059dfbc0) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
            goto LAB_036e18b4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059dfbc0,0x12);
LAB_036e18b4:
      plVar4 = (long *)(*(code *)*puVar1)(plVar4,puVar1[1]);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _DAT_059df2a8) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_036e1920;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059df2a8,4);
LAB_036e1920:
                    /* WARNING: Could not recover jumptable at 0x036e1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined8 *)(*(code *)*puVar1)(plVar4,puVar1[1]);
        return puVar1;
      }
    }
  }
  auVar9 = func_0x0249fb90();
  plVar4 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  if ((bRam0000000005e2da58 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2da58 = 1;
  }
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _DAT_059df8e8) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_036e19ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059df8e8,5);
LAB_036e19ec:
    uVar2 = (*(code *)*puVar1)(plVar4,puVar1[1]);
    plVar6 = *(long **)(lVar3 + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x1c8))
                                   (plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x1d0)),
       plVar6 != (long *)0x0)) {
      lVar5 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _DAT_059dfbc0) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
            goto LAB_036e1a74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059dfbc0,0x12);
LAB_036e1a74:
      plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _DAT_059df2a8) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_036e1adc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059df2a8,0);
LAB_036e1adc:
        uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
        if ((uVar7 & 1) == 0) {
          return (undefined8 *)0x1;
        }
        lVar5 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _DAT_059df2a8) {
              puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_036e1b50;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059df2a8,1);
LAB_036e1b50:
        plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
        if (plVar6 != (long *)0x0) {
          lVar5 = *plVar6;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _DAT_059df2c0) {
                puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_036e1bbc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar1 = (undefined8 *)func_0x024d927c(plVar6,_DAT_059df2c0,1);
LAB_036e1bbc:
                    /* WARNING: Could not recover jumptable at 0x036e1bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar1 = (undefined8 *)(*(code *)*puVar1)(plVar6,lVar3,lVar3,plVar4,puVar1[1]);
          return puVar1;
        }
      }
    }
  }
  lVar3 = func_0x0249fb90();
  if (*(long *)(lVar3 + 0x20) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x20) + 0x48);
    *puVar1 = 0;
    if (iRam0000000006058428 != 0) {
      puVar1 = (undefined8 *)
               func_0x0258f520(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                               ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Boolean IsMovable(GameLogic.Player.IPlayer player)
 * Ghidra function entry: 036d7b74
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_036d7b74(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000005e2da26 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    bRam0000000005e2da26 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _DAT_059df8e8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_036d7c0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036d7c0c:
    uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
    plVar4 = *(long **)(param_1 + 0x10);
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                   (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x1d0)),
       plVar4 != (long *)0x0)) {
      lVar3 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _DAT_059dfbc0) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x1b) * 0x10 + 0x138);
            goto LAB_036d7c94;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059dfbc0,0x1b);
LAB_036d7c94:
                    /* WARNING: Could not recover jumptable at 0x036d7ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar1)(plVar4,puVar1[1]);
      return uVar5;
    }
  }
  lVar3 = func_0x0249fb90();
  return (ulong)*(uint *)(lVar3 + 0x18);
}


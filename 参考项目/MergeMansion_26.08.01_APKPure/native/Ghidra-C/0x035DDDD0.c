/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Void Spawn(GameLogic.Player.IPlayer player, System.Boolean takeFromStorageContainer, Metaplay.Core.MetaTime timestamp)
 * Ghidra function entry: 036dddd0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Removing unreachable block (ram,0x03700d68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_036dddd0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar2 = param_3;
  if ((bRam0000000005e2da3f & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    bRam0000000005e2da3f = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_036ddf40:
    func_0x0249fb90();
    *puVar2 = 0;
    func_0x0249f888(puVar2,0);
    return 0;
  }
  lVar4 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _DAT_059df8e8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_036dde68;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x024d927c(param_2,_DAT_059df8e8,5);
LAB_036dde68:
  uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
  uVar5 = func_0x036f66a8(param_1,uVar3,0);
  if (((uVar5 & 1) != 0) || (uVar5 = func_0x036f8034(param_1,uVar3,0), (uVar5 & 1) != 0)) {
    puVar2 = (undefined8 *)0x0;
    uVar5 = func_0x036f619c(param_1,uVar3);
    if ((uVar5 & 1) != 0) {
      uVar5 = func_0x036d9b78(param_1,uVar3);
      if ((uVar5 & 1) != 0) {
        uVar3 = func_0x03530bf4(param_4,0);
        func_0x03727e60(param_1,uVar3,0);
        puVar2 = (undefined8 *)func_0x03530bf4(param_4,0);
        uVar5 = func_0x03727ff0(param_1,param_2,puVar2,0);
      }
      if (((ulong)param_3 & 1) != 0) {
        lVar4 = func_0x036d5e58(param_1);
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) {
          if ((bRam0000000005e2db23 & 1) == 0) {
            func_0x0249f8e4(&DAT_059e2548,1,0);
            bRam0000000005e2db23 = 1;
          }
          uVar1 = *(undefined4 *)(lVar4 + 0x10);
          if (*(int *)(_DAT_059e2548 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar5 = func_0x045a9bd0(1,uVar1,0);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) - (int)uVar5;
          return uVar5;
        }
        goto LAB_036ddf40;
      }
    }
  }
  return uVar5;
}


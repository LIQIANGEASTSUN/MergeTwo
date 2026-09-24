/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.IItemDefinition> GetActivationSpawnItems(GameLogic.Player.IPlayer player, GameLogic.Player.Board.IBoard board)
 * Ghidra function entry: 036dd198
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_036dd198(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005e2da37 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a41e90);
    func_0x0249f8e4(&DAT_059de230);
    func_0x0249f8e4(&DAT_059e0220);
    bRam0000000005e2da37 = 1;
  }
  lVar4 = _DAT_05a41e90;
  if (param_2 == (long *)0x0) {
    lVar5 = *(long *)(_DAT_05a41e90 + 0x38);
    if (lVar5 == 0) {
      func_0x024d8f9c(_DAT_05a41e90);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x024d8f40();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x024d8f40();
    }
    uVar1 = **(undefined8 **)(lVar4 + 0xb8);
  }
  else {
    uVar1 = func_0x0249fb80(_DAT_059de230);
    func_0x034a1008(uVar1,param_2,0);
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _DAT_059e0220) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto LAB_036dd2cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0xc);
LAB_036dd2cc:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0371f100(&uStack_40,param_1,param_3,0);
    uVar1 = func_0x036dd080(param_1,uVar1,param_2,uVar3,uStack_40,uStack_38);
  }
  return uVar1;
}


/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.IItemDefinition> GetUnlockedSpawnItems(GameLogic.Player.IPlayer player, GameLogic.Player.Board.MergeBoard board)
 * Ghidra function entry: 036ddcbc
 * Generated Ghidra pseudocode; not original C# source. */


undefined8 FUN_036ddcbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar1 = func_0x036f8310();
  uVar2 = func_0x036cf0a0(uVar1,param_2,1,&uStack_18);
  if ((uVar2 & 1) == 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}


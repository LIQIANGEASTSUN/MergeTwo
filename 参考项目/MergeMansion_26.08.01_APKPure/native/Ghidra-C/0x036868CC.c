/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Items.MergeItem DoRemoveItem(GameLogic.Player.Board.Coordinate coordinate, GameLogic.Player.IPlayer player, System.Boolean consumeAttachments = True)
 * Ghidra function entry: 037868cc
 * Generated Ghidra pseudocode; not original C# source. */


long FUN_037868cc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = func_0x0376e450();
  if (((lVar2 != 0) && ((param_4 & 1) != 0)) && (lVar3 = func_0x036d5ffc(lVar2,0), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = func_0x036d392c(lVar2,0);
    func_0x0374def0(lVar3,param_3,uVar4,uVar1,0);
  }
  func_0x037743ac(param_1,param_2,0);
  return lVar2;
}


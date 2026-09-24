/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: MergeResult ProcessMergeOrMoveAttempt(GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime timeForMergeOrMove, GameLogic.Player.IPlayer player, GameLogic.Player.Items.Bubble.IBubbleSpawner bubbleSpawner, GameLogic.Player.Items.ProgressionEvent.IProgressionEventItemSpawner progressionEventItemSpawner, System.Collections.Generic.ICollection`1<GameLogic.Merge.MergeBoardAct> collectedActs)
 * Ghidra function entry: 03779224
 * Generated Ghidra pseudocode; not original C# source. */


int FUN_03779224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = func_0x0377930c(param_1,param_5,param_2,param_3,param_4);
  if (iVar1 == 4) {
    func_0x0377986c(param_1,param_2,param_3,param_4,param_5,0);
  }
  else if (iVar1 == 3) {
    func_0x03779dcc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (iVar1 == 2) {
    func_0x03779798(param_1,param_5,param_2,param_3,param_4);
  }
  return iVar1;
}


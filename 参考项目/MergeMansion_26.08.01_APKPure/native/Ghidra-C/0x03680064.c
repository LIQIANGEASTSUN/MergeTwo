/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Merge.MergeBoardAct SpawnToBoard(GameLogic.Player.IPlayer player, GameLogic.Player.Items.IItemDefinition definition, GameLogic.Player.Board.Coordinate spawnedFrom, GameLogic.Config.Types.MetacoreTime timeForActivation, System.Boolean bubbled, GameLogic.Random.IGenerationContext generationContext, GameLogic.Merge.MergeBoardAct+ItemActSource source)
 * Ghidra function entry: 03780064
 * Generated Ghidra pseudocode; not original C# source. */


void FUN_03780064(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                 undefined4 param_9)

{
  ulong uVar1;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  uVar1 = func_0x037c7a80(*(undefined8 *)(param_2 + 0x90),param_5,param_2,&uStack_58,0);
  if ((uVar1 & 1) == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    func_0x034ba710(param_1,param_5,0);
  }
  else {
    func_0x03774f00(param_2,param_3,uStack_58,param_4,param_8,param_6,2,param_7 & 1);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    func_0x034ba7d8(param_1,3,param_5,uStack_58,param_6,0,param_9,0);
  }
  return;
}


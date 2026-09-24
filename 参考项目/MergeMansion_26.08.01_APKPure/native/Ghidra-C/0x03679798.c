/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Board.Coordinate ProcessMove(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition, GameLogic.Config.Types.MetacoreTime timeForMergeOrMove)
 * Ghidra function entry: 03779798
 * Generated Ghidra pseudocode; not original C# source. */


undefined8
FUN_03779798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  lVar1 = func_0x0376e450(param_1,param_4);
  if ((lVar1 == 0) ||
     (uVar2 = func_0x037c7a80(*(undefined8 *)(param_1 + 0x90),param_4,param_1,&uStack_38,0),
     param_4 = uStack_38, (uVar2 & 1) != 0)) {
    uVar3 = func_0x0376e450(param_1,param_3);
    func_0x037743ac(param_1,param_4,uVar3);
    func_0x037789bc(param_1,param_2,param_3,param_5,0);
    func_0x03787050(param_1,param_5,param_2);
    func_0x0378717c(param_1,param_2,param_5);
    uVar3 = func_0x03530c84(param_5,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    param_3 = uStack_38;
  }
  return param_3;
}


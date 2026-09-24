/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: GameLogic.Player.Items.MergeItem RemoveItem(GameLogic.Player.IPlayer player, GameLogic.Player.Board.Coordinate coordinate, GameLogic.Config.Types.MetacoreTime timestamp, System.Boolean consumeAttachments = True)
 * Ghidra function entry: 037789bc
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_037789bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005e2dfb3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    bRam0000000005e2dfb3 = 1;
  }
  uVar1 = func_0x037868cc(param_1,param_3,param_2,param_5 & 1);
  uVar2 = func_0x03530c84(param_4,0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2c00);
  }
  uVar2 = func_0x03530158(uVar2,0);
  func_0x03787050(param_1,uVar2,param_2);
  func_0x0378717c(param_1,param_2,uVar2);
  uVar2 = func_0x03530c84(param_4,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return uVar1;
}


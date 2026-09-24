/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.txt
 * Cpp2IL method: System.Boolean InvalidOrSameCoordinates(GameLogic.Player.Board.Coordinate fromPosition, GameLogic.Player.Board.Coordinate toPosition)
 * Ghidra function entry: 037839a8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_037839a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  if ((bRam0000000005e2dfa3 & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250);
    bRam0000000005e2dfa3 = 1;
  }
  uVar2 = func_0x03774280(param_1,param_2);
  if (((uVar2 & 1) == 0) || (uVar2 = func_0x03774280(param_1,param_3), (uVar2 & 1) == 0)) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar1 = func_0x037737e4(&uStack_28,param_3);
  }
  return uVar1 & 1;
}


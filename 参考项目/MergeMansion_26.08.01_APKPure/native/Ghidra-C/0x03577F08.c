/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/PlayerModel.txt
 * Cpp2IL method: Metacore.MergeMansion.Common.Options.Option`1<GameLogic.Player.Board.IBoard> GetBoard(Merge.MergeBoardId boardId)
 * Ghidra function entry: 03677f08
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_03677f08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  if ((bRam0000000005e2d6d7 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a299b0);
    func_0x0249f8e4(&DAT_059d3ff8);
    bRam0000000005e2d6d7 = 1;
  }
  auStack_24[0] = 0;
  auStack_28[0] = 0;
  uStack_40 = 0;
  uVar2 = func_0x03672668(param_1,param_2,auStack_24,auStack_28,&uStack_40);
  if (*(int *)(_DAT_059d3ff8 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059d3ff8);
  }
  func_0x0288f218(uVar2,&uStack_40,_DAT_05a299b0);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}


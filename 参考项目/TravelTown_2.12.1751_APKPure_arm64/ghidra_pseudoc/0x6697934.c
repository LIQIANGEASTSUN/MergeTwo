/* Ghidra 12.1.2 native pseudocode; RVA 0x6697934; Merger.Game.Views.BoardView.GetBoardCellPositionInBoardContainer; status ok */


undefined1  [16]
Merger_Game_Views_BoardView__GetBoardCellPositionInBoardContainer
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,long param_5)

{
  float fVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined1 auVar2 [16];
  undefined8 extraout_var_00;
  
  if ((*(long *)(param_4 + 0x70) != 0) &&
     (func_0x06fe9490(*(long *)(param_4 + 0x70),0), param_5 != 0)) {
    fVar1 = (float)func_0x06fe9764(param_5,0);
    return ZEXT416((uint)(fVar1 - param_3 * 0.5));
  }
  func_0x03280cac();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


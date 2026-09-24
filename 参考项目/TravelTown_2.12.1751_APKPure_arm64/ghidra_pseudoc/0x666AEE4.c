/* Ghidra 12.1.2 native pseudocode; RVA 0x666AEE4; MergeEngine.ECS.Systems.Board.BoardSystem.IsPositionEmpty; status ok */

bool MergeEngine_ECS_Systems_Board_BoardSystem__IsPositionEmpty(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar1 = func_0x06a02444(*(long *)(param_1 + 0x88),param_2,0);
    return lVar1 == 0;
  }
  func_0x03280cac();
  lVar1 = func_0x0676af24();
  return lVar1 != 0;
}


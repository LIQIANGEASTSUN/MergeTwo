/* Ghidra 12.1.2 native pseudocode; RVA 0x6785154; MergeEngine.ECS.Systems.Board.SplitSystem.TrySplitItem; status ok */


uint MergeEngine_ECS_Systems_Board_SplitSystem__TrySplitItem
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = func_0x068846b4(param_1,param_3);
  if ((uVar1 & 1) != 0) {
    func_0x068851c4(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1 & 1;
}


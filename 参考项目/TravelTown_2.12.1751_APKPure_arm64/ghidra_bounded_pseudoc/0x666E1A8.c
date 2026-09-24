/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666E1A8; bound 92 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.TryMergeItems; status ok */


bool MergeEngine_ECS_Systems_Board_MergeSystem__TryMergeItems
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = MergeEngine_ECS_Systems_Board_MergeSystem__GetResultItem();
  if (lVar1 != 0) {
    MergeEngine_ECS_Systems_Board_MergeSystem__Merge(param_1,param_2,param_3,param_4,lVar1,0);
  }
  return lVar1 != 0;
}


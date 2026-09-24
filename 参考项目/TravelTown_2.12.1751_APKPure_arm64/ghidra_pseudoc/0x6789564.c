/* Ghidra 12.1.2 native pseudocode; RVA 0x6789564; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.SpawnerAbuseIsPossible; status ok */


bool MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__SpawnerAbuseIsPossible
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = func_0x06888e70();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x50) != '\0';
  }
  MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__BlockSpawnerAnalytics(param_1,bVar1,param_2);
  return bVar1;
}


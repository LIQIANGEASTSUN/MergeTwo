/* Ghidra 12.1.2 native pseudocode; RVA 0x6788E70; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.get_QueueAbuseThresholdReached; status ok */


ulong MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__get_QueueAbuseThresholdReached
                (long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = func_0x06888dcc();
  if ((int)uVar3 != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      func_0x03280cac();
      iVar1 = func_0x06888dcc();
      return (ulong)(iVar1 == 0);
    }
    iVar1 = MergeEngine_ECS_Systems_Board_BoardQueueSystem__get_NumItemsInQueue
                      (*(long *)(param_1 + 0x48),0);
    iVar2 = func_0x06888dcc(param_1);
    uVar3 = (ulong)(iVar2 <= iVar1);
  }
  return uVar3;
}


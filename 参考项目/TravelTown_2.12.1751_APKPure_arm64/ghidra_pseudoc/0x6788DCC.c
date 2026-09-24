/* Ghidra 12.1.2 native pseudocode; RVA 0x6788DCC; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.get_QueueThresholdSizeForAbuse; status ok */


ulong MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__get_QueueThresholdSizeForAbuse
                (long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000007e28d2b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a750);
    bRam0000000007e28d2b = 1;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
    lVar4 = func_0x03280cac();
    uVar5 = MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__get_QueueThresholdSizeForAbuse();
    if ((int)uVar5 != 0) {
      if (*(long *)(lVar4 + 0x48) == 0) {
        func_0x03280cac();
        iVar1 = MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__get_QueueThresholdSizeForAbuse();
        return (ulong)(iVar1 == 0);
      }
      iVar1 = MergeEngine_ECS_Systems_Board_BoardQueueSystem__get_NumItemsInQueue
                        (*(long *)(lVar4 + 0x48),0);
      iVar2 = MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__get_QueueThresholdSizeForAbuse
                        (lVar4);
      uVar5 = (ulong)(iVar2 <= iVar1);
    }
    return uVar5;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a750) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x35) * 0x10 + 0x138);
        goto LAB_06888e58;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a750,0x35);
LAB_06888e58:
                    /* WARNING: Could not recover jumptable at 0x06888e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  return uVar5;
}


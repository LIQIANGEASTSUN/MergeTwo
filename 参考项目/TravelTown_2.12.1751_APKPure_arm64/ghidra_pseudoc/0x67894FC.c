/* Ghidra 12.1.2 native pseudocode; RVA 0x67894FC; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.ReleaseFromInventoryAnalytics; status ok */


void MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__ReleaseFromInventoryAnalytics(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000007e28d2f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e28d2f = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x58);
  uVar4 = func_0x055f7aac(*puVar5,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  *puVar5 = *(undefined8 *)PTR_DAT_0774f158;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


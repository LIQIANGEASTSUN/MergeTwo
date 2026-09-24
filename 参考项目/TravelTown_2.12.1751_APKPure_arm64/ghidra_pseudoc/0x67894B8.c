/* Ghidra 12.1.2 native pseudocode; RVA 0x67894B8; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.CheckForDequeueAnalytics; status ok */


void MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__CheckForDequeueAnalytics(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar4 = func_0x067624f0(*(long *)(param_1 + 0x48),0);
    iVar5 = func_0x06888dcc(param_1);
    if (iVar4 == iVar5) {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    return;
  }
  lVar6 = func_0x03280cac();
  if ((bRam0000000007e28d2f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e28d2f = 1;
  }
  puVar8 = (undefined8 *)(lVar6 + 0x58);
  uVar7 = func_0x055f7aac(*puVar8,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  *puVar8 = *(undefined8 *)PTR_DAT_0774f158;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


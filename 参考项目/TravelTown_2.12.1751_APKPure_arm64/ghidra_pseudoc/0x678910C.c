/* Ghidra 12.1.2 native pseudocode; RVA 0x678910C; MergeEngine.ECS.Systems.Board.UndoSellAbuseSystem.OnGameStarted; status ok */


void MergeEngine_ECS_Systems_Board_UndoSellAbuseSystem__OnGameStarted(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_07810240;
  if ((bRam0000000007e28d2d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810240);
    bRam0000000007e28d2d = 1;
  }
  uVar5 = func_0x03eb6c18(param_1,*(undefined8 *)puVar4);
  puVar6 = (undefined8 *)(param_1 + 0x48);
  *puVar6 = uVar5;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


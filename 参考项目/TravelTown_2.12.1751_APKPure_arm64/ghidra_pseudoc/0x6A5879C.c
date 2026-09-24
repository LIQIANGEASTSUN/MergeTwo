/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5879C; Merger.MergeBoardQueue.Models.BoardQueueModel.UpdateBindableProperties; status ok */


void Merger_MergeBoardQueue_Models_BoardQueueModel__UpdateBindableProperties(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar4 = func_0x06b585fc();
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  uVar5 = Merger_MergeBoardQueue_Models_BoardQueueModel__Peek(param_1);
  puVar6 = (undefined8 *)(param_1 + 0x50);
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


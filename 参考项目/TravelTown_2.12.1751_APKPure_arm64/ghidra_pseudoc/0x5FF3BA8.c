/* Ghidra 12.1.2 native pseudocode; RVA 0x5FF3BA8; MergeEngine.Signal.Items.MergeItemDiscoveredSignal..ctor; status ok */


void MergeEngine_Signal_Items_MergeItemDiscoveredSignal___ctor(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  func_0x057da5fc(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


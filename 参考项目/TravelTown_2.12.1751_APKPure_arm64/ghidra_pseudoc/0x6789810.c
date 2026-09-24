/* Ghidra 12.1.2 native pseudocode; RVA 0x6789810; MergeEngine.ECS.Systems.Items.MergeItemBoosterComponent.LoadComponent; status ok */


/* WARNING: Possible PIC construction at 0x0688982c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06889830) */

void MergeEngine_ECS_Systems_Items_MergeItemBoosterComponent__LoadComponent
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    *puVar4 = *(undefined8 *)(param_2 + 0x10);
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
  func_0x03280cac();
  return;
}


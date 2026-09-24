/* Ghidra 12.1.2 native pseudocode; RVA 0x4533ED0; MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>.CopyTimerItemData; status ok */

/* WARNING: Possible PIC construction at 0x04633f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04633f08) */

void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___CopyTimerItemData
               (undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined1 *)(param_3 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    puVar4 = (undefined8 *)(param_3 + 0x20);
    *puVar4 = *(undefined8 *)(param_2 + 0x20);
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
  return;
}


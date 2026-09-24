/* Ghidra 12.1.2 native pseudocode; RVA 0x6901634; MergeEngine.ECS.Components.InteractionTracking.InteractionTrackingComponent.SetSpawner; status ok */


void MergeEngine_ECS_Components_InteractionTracking_InteractionTrackingComponent__SetSpawner
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x20);
  if (*plVar4 != 0) {
    return;
  }
  *plVar4 = param_2;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


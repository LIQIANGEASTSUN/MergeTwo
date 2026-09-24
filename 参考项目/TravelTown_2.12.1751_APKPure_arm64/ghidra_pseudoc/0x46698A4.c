/* Ghidra 12.1.2 native pseudocode; RVA 0x46698A4; MergeEngine.ECS.Systems.Items.UndoOperationBase<T>.GetEntity; status ok */


/* WARNING: Possible PIC construction at 0x047698d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x047698d8) */

undefined8 * MergeEngine_ECS_Systems_Items_UndoOperationBase_T___GetEntity(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x10);
  }
  auVar5 = func_0x03280cac();
  puVar4 = auVar5._0_8_;
  *puVar4 = auVar5._8_8_;
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
  return puVar4;
}


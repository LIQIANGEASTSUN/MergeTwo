/* Ghidra 12.1.2 native pseudocode; RVA 0x4669860; MergeEngine.ECS.Systems.Items.UndoOperationBase<T>.PerformUndo; status ok */


/* WARNING: Possible PIC construction at 0x047698d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x047698d8) */

undefined8 * MergeEngine_ECS_Systems_Items_UndoOperationBase_T___PerformUndo(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04769880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)
             (**(code **)(lVar5 + 0x18))
                       (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(lVar5 + 0x28));
    return puVar4;
  }
  lVar5 = func_0x03280cac();
  if (*(long *)(lVar5 + 0x10) != 0) {
    return *(undefined8 **)(*(long *)(lVar5 + 0x10) + 0x18);
  }
  lVar5 = func_0x03280cac();
  if (*(long *)(lVar5 + 0x10) != 0) {
    return *(undefined8 **)(*(long *)(lVar5 + 0x10) + 0x10);
  }
  auVar6 = func_0x03280cac();
  puVar4 = auVar6._0_8_;
  *puVar4 = auVar6._8_8_;
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


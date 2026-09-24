/* Ghidra 12.1.2 native pseudocode; RVA 0x6904030; MergeEngine.ECS.Components.Board.BoardQueueComponent.Wipe; status ok */


/* WARNING: Possible PIC construction at 0x06a04094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04321a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04321a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04321a18) */
/* WARNING: Removing unreachable block (ram,0x06a04098) */
/* WARNING: Removing unreachable block (ram,0x06a03fd0) */
/* WARNING: Removing unreachable block (ram,0x06a03fe8) */
/* WARNING: Removing unreachable block (ram,0x06a03ffc) */
/* WARNING: Removing unreachable block (ram,0x06a0402c) */
/* WARNING: Removing unreachable block (ram,0x06a0400c) */
/* WARNING: Removing unreachable block (ram,0x043219ac) */
/* WARNING: Removing unreachable block (ram,0x04321a38) */
/* WARNING: Removing unreachable block (ram,0x043219dc) */
/* WARNING: Removing unreachable block (ram,0x04321a08) */
/* WARNING: Removing unreachable block (ram,0x043219f8) */
/* WARNING: Removing unreachable block (ram,0x04321a54) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */

void MergeEngine_ECS_Components_Board_BoardQueueComponent__Wipe(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((bRam0000000007e29916 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826970);
    bRam0000000007e29916 = 1;
  }
  puVar4 = PTR_DAT_07826970;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x054f0998(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07826970);
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x054f0998(*(long *)(param_1 + 0x30),*(undefined8 *)puVar4);
      *(undefined1 *)(param_1 + 0x50) = 0;
      puVar5 = (undefined8 *)(param_1 + 0x40);
      *puVar5 = 0;
      goto SUB_032809c4;
    }
  }
  lVar6 = func_0x03280cac();
  puVar5 = (undefined8 *)(lVar6 + 0x40);
  *puVar5 = 0;
SUB_032809c4:
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


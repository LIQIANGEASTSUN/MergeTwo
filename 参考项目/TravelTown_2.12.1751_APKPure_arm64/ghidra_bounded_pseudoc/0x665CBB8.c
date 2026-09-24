/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665CBB8; bound 96 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.EndDrag; status ok */


/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EndDrag(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x68) != 0) && (lVar4 = *(long *)(param_1 + 0x90), lVar4 != 0)) {
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30),
               param_2,*(undefined8 *)(lVar4 + 0x28));
  }
  puVar5 = (undefined8 *)(param_1 + 0x60);
  *puVar5 = 0;
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


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A36C1C; Merger.MergeBoard.View.MergeBoardCombinationVerificationView.OnPopupClosed; status ok */


/* WARNING: Possible PIC construction at 0x06b36c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b36c34) */

void Merger_MergeBoard_View_MergeBoardCombinationVerificationView__OnPopupClosed(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  puVar4 = (undefined8 *)(param_1 + 0x48);
  *puVar4 = 0;
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


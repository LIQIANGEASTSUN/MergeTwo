/* Ghidra 12.1.2 native pseudocode; RVA 0x6690EF8; Merger.Game.Views.BoardView.SetPayload; status ok */


void Merger_Game_Views_BoardView__SetPayload(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x10);
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)((param_1 + 0x160U >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x160U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}


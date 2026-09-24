/* Ghidra 12.1.2 native pseudocode; RVA 0x4C188E4; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.Dispose; status ok */


/* WARNING: Possible PIC construction at 0x04d18918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d1891c) */

void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___Dispose
               (long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  if ((char)param_1[8] != '\0') {
    (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1 = param_1 + 6;
  *param_1 = 0;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


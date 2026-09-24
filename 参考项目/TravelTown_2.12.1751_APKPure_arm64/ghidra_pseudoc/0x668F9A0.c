/* Ghidra 12.1.2 native pseudocode; RVA 0x668F9A0; Merger.Game.Views.BoardUIView.StartInventoryButtonHinting; status ok */


/* WARNING: Possible PIC construction at 0x0678fa5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0678fac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0678faf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0678fac8) */
/* WARNING: Removing unreachable block (ram,0x0678fa60) */
/* WARNING: Removing unreachable block (ram,0x0678faf4) */
/* WARNING: Removing unreachable block (ram,0x0678fb04) */
/* WARNING: Removing unreachable block (ram,0x0678fb18) */
/* WARNING: Removing unreachable block (ram,0x0678fb54) */
/* WARNING: Removing unreachable block (ram,0x0678fb70) */
/* WARNING: Removing unreachable block (ram,0x0678fb60) */
/* WARNING: Removing unreachable block (ram,0x0678fb1c) */
/* WARNING: Removing unreachable block (ram,0x06feb448) */
/* WARNING: Removing unreachable block (ram,0x06feb46c) */
/* WARNING: Removing unreachable block (ram,0x06feb480) */

void Merger_Game_Views_BoardUIView__StartInventoryButtonHinting(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000007e28293 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078091a8);
    func_0x03280a18(PTR_DAT_078091b0);
    bRam0000000007e28293 = 1;
  }
  plVar5 = (long *)(param_1 + 0x78);
  if ((*plVar5 == 0) && (*(long *)(param_1 + 0x80) == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (cRam0000000007e136dc == '\0') {
      func_0x03280a18(PTR_DAT_077500e8);
      cRam0000000007e136dc = '\x01';
    }
    lVar4 = func_0x067b6cc4(**(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8),
                            (*(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8))[1],uVar6,0);
    if (lVar4 == 0) {
      lVar4 = func_0x03280cac();
      plVar5 = (long *)(lVar4 + 0x78);
      if ((*plVar5 == 0) && (*(long *)(lVar4 + 0x80) == 0)) {
        return;
      }
      func_0x038ee7ac(*plVar5,0);
      func_0x038eedf4(*(undefined8 *)(lVar4 + 0x78),0,0);
      *(undefined8 *)(lVar4 + 0x78) = 0;
    }
    else {
      *plVar5 = *(long *)(lVar4 + 0x10);
    }
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}


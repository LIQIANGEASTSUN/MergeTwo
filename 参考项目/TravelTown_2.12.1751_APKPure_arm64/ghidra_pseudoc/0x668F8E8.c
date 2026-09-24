/* Ghidra 12.1.2 native pseudocode; RVA 0x668F8E8; Merger.Game.Views.BoardUIView.CheckShowMetaButtonTutorial; status ok */


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

void Merger_Game_Views_BoardUIView__CheckShowMetaButtonTutorial(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam0000000007e28295 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e28295 = 1;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar4 = func_0x06fdbed0(*(long *)(param_1 + 0x40),0), lVar4 != 0)) {
    uVar5 = func_0x06fdf2b0(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar4 = func_0x06fdbed0(*(long *)(param_1 + 0x68),0), lVar4 != 0)) {
      uVar5 = func_0x06fdf2b0(lVar4,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar5 = Merger_Game_ViewModel_BoardUIViewModel__CheckShowMetaTutorial
                          (*(long *)(param_1 + 0x28),0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (lVar4 = func_0x06fdbed0(*(long *)(param_1 + 0x68),0), lVar4 != 0)) {
          if (pcRam0000000007e2fbf0 == (code *)0x0) {
            pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
          }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000007e2fbf0)(lVar4,1);
          return;
        }
      }
    }
  }
  lVar4 = func_0x03280cac();
  if ((bRam0000000007e28293 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078091a8);
    func_0x03280a18(PTR_DAT_078091b0);
    bRam0000000007e28293 = 1;
  }
  plVar6 = (long *)(lVar4 + 0x78);
  if ((*plVar6 == 0) && (*(long *)(lVar4 + 0x80) == 0)) {
    uVar7 = *(undefined8 *)(lVar4 + 0x38);
    if (cRam0000000007e136dc == '\0') {
      func_0x03280a18(PTR_DAT_077500e8);
      cRam0000000007e136dc = '\x01';
    }
    lVar4 = func_0x067b6cc4(**(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8),
                            (*(undefined4 **)(*(long *)PTR_DAT_077500e8 + 0xb8))[1],uVar7,0);
    if (lVar4 == 0) {
      lVar4 = func_0x03280cac();
      plVar6 = (long *)(lVar4 + 0x78);
      if ((*plVar6 == 0) && (*(long *)(lVar4 + 0x80) == 0)) {
        return;
      }
      func_0x038ee7ac(*plVar6,0);
      func_0x038eedf4(*(undefined8 *)(lVar4 + 0x78),0,0);
      *(undefined8 *)(lVar4 + 0x78) = 0;
    }
    else {
      *plVar6 = *(long *)(lVar4 + 0x10);
    }
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x66932BC; Merger.Game.Views.BoardView.UnsubscribeFromBoardContainerDimensionsChange; status ok */


/* WARNING: Possible PIC construction at 0x067933f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067933fc) */

void Merger_Game_Views_BoardView__UnsubscribeFromBoardContainerDimensionsChange(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e282bd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07809320);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e282bd = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x180);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x06fe04ec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x180);
  uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
  func_0x056ed730(uVar7,param_1,*(undefined8 *)PTR_DAT_07809320,0);
  if (lVar8 == 0) {
    uVar7 = func_0x03280cac();
    puVar4 = PTR_DAT_07809420;
    if ((bRam0000000007e282b6 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07809420);
      bRam0000000007e282b6 = 1;
    }
    lVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x057da5fc(lVar8,0);
    *(undefined4 *)(lVar8 + 0x10) = 0;
    puVar6 = (undefined8 *)(lVar8 + 0x20);
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (undefined8 *)(param_1 + 0x180);
    func_0x069adca0(lVar8,uVar7,0);
    *puVar6 = 0;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


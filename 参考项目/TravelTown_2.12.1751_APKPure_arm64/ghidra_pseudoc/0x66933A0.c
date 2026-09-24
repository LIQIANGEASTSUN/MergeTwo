/* Ghidra 12.1.2 native pseudocode; RVA 0x66933A0; Merger.Game.Views.BoardView.StartAfter1Frame; status ok */


long Merger_Game_Views_BoardView__StartAfter1Frame(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_07809420;
  if ((bRam0000000007e282b6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809420);
    bRam0000000007e282b6 = 1;
  }
  lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x057da5fc(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  func_0x032809c4((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x668FE08; Merger.Game.Views.BoardUIView.CheckStopMetaButtonTutorial; status ok */


void Merger_Game_Views_BoardUIView__CheckStopMetaButtonTutorial(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar1 = func_0x06fdbed0(*(long *)(param_1 + 0x68),0), lVar1 != 0)) {
    uVar2 = func_0x06fdf2b0(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar1 = func_0x06fdbed0(*(long *)(param_1 + 0x68),0), lVar1 != 0)) {
      if (pcRam0000000007e2fbf0 == (code *)0x0) {
        pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
      }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000007e2fbf0)(lVar1,0);
      return;
    }
  }
  lVar1 = func_0x03280cac();
  *(undefined4 *)(lVar1 + 0x74) = 0;
  return;
}


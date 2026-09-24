/* Ghidra 12.1.2 native pseudocode; RVA 0x662495C; Merger.Game.ViewModel.BoardViewModel.SellSelectedItemSignalFired; status ok */


void Merger_Game_ViewModel_BoardViewModel__SellSelectedItemSignalFired(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06724970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


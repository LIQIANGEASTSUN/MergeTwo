/* Ghidra 12.1.2 native pseudocode; RVA 0x668EE38; Merger.Game.Views.BoardItemViewBase.Merger.Game.Views.IBoardItemView.get_gameObject; status ok */


void Merger_Game_Views_BoardItemViewBase__Merger_Game_Views_IBoardItemView_get_gameObject
               (undefined8 param_1)

{
  if (pcRam0000000007e2fb00 == (code *)0x0) {
    pcRam0000000007e2fb00 = (code *)func_0x032809dc(&UNK_017a6720);
  }
                    /* WARNING: Could not recover jumptable at 0x06fdbf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000007e2fb00)(param_1);
  return;
}


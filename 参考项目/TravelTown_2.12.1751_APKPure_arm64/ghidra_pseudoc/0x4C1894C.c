/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1894C; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.Update; status ok */


void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___Update
               (long *param_1)

{
  if ((char)param_1[8] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x04d18960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    return;
  }
  return;
}


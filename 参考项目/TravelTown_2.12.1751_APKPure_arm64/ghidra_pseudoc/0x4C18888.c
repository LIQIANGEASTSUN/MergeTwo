/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18888; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.set_Initialized; status ok */


void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___set_Initialized
               (long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x40) = param_2 & 1;
  return;
}


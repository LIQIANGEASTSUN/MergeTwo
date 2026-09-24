/* Ghidra 12.1.2 native pseudocode; RVA 0x4C18894; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.Initialise; status ok */


void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___Initialise
               (long *param_1,long param_2,long param_3)

{
  param_1[6] = param_3;
  func_0x032809c4(param_1 + 6,param_3);
  param_1[7] = param_2;
  func_0x032809c4(param_1 + 7,param_2);
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x04d188e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  return;
}


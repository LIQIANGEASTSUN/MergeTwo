/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85148; Merger.MergeBoard.Logic.State.Updaters.DynamicItemConfigComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_DynamicItemConfigComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    func_0x06b85194(&uStack_28,*(undefined8 *)(param_3 + 0x88));
    param_2[2] = uStack_18;
    param_2[1] = uStack_20;
    *param_2 = uStack_28;
    func_0x032809c4(param_2,0);
  }
  return;
}


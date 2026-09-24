/* Ghidra 12.1.2 native pseudocode; RVA 0x6A852A0; Merger.MergeBoard.Logic.State.Updaters.ExpendableComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_ExpendableComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined4 *param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_3 + 0x68) != 0)) {
    *param_2 = *(undefined4 *)(*(long *)(param_3 + 0x68) + 0x10);
  }
  return;
}


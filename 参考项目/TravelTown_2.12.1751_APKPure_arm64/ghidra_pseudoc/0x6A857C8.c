/* Ghidra 12.1.2 native pseudocode; RVA 0x6A857C8; Merger.MergeBoard.Logic.State.Updaters.LockComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_LockComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined1 *param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_3 + 0x60) != 0)) {
    *param_2 = *(undefined1 *)(*(long *)(param_3 + 0x60) + 0x11);
  }
  return;
}


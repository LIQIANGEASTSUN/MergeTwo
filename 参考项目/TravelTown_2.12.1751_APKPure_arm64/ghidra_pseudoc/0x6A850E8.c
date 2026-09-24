/* Ghidra 12.1.2 native pseudocode; RVA 0x6A850E8; Merger.MergeBoard.Logic.State.Updaters.ChargeableComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_ChargeableComponentStateUpdater__UpdateFromState
               (undefined8 param_1,long param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_3 + 0x80) != 0)) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(long *)(param_3 + 0x80) + 0x10);
  }
  return;
}


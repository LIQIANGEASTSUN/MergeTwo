/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85FF4; Merger.MergeBoard.Logic.State.Updaters.TimeLimitedActivationComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_TimeLimitedActivationComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (lVar1 = *(long *)(param_3 + 0x40), lVar1 != 0)) {
    *param_2 = *(undefined8 *)(param_3 + 0x48);
    param_2[1] = lVar1;
    param_2[2] = *(undefined8 *)(param_3 + 0x58);
  }
  return;
}


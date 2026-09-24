/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8605C; Merger.MergeBoard.Logic.State.Updaters.TimeLockComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_TimeLockComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((param_3 != 0) && (lVar2 = *(long *)(param_3 + 0x78), lVar2 != 0)) {
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(lVar2 + 0x18);
    uVar1 = *(undefined1 *)(lVar2 + 0x19);
    *(undefined1 *)(param_2 + 4) = 1;
    *(undefined1 *)(param_2 + 2) = uVar1;
  }
  return;
}


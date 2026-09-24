/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85F70; Merger.MergeBoard.Logic.State.Updaters.TimeDurationComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_TimeDurationComponentStateUpdater__UpdateFromState
               (undefined8 param_1,double *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if ((param_3 != 0) && (lVar2 = *(long *)(param_3 + 0x40), lVar2 != 0)) {
    lVar1 = func_0x06b85ed0();
    dVar3 = 0.0;
    if (lVar1 < lVar2) {
      lVar1 = *(long *)(param_3 + 0x40);
      lVar2 = func_0x06b85ed0(param_1);
      dVar3 = (double)((lVar1 - lVar2) / 1000);
    }
    *param_2 = dVar3;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return;
}


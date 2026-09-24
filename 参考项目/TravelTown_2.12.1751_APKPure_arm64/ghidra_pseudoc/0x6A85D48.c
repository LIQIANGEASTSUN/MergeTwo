/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85D48; Merger.MergeBoard.Logic.State.Updaters.TimeCycleComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_TimeCycleComponentStateUpdater__UpdateFromState
               (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  if ((bRam0000000007e2a797 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e2a797 = 1;
  }
  if ((param_3 != 0) && (lVar2 = *(long *)(param_3 + 0x70), lVar2 != 0)) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    dVar4 = *(double *)(lVar2 + 0x28);
    *(double *)(param_2 + 0x28) = dVar4;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar2 + 0x3c);
    iVar1 = *(int *)(param_2 + 8);
    if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    dVar3 = (double)func_0x05797550(dVar4,(double)iVar1,0);
    *(double *)(param_2 + 0x28) = dVar3;
    if (dVar3 != dVar4) {
      *(undefined1 *)(param_2 + 0x49) = 1;
    }
    *(undefined1 *)(param_2 + 0x48) = 1;
    *(undefined1 *)(param_2 + 0x4a) = *(undefined1 *)(lVar2 + 0x44);
    if (0 < *(int *)(param_2 + 0x44)) {
      *(undefined4 *)(param_2 + 0x3c) = 2;
    }
  }
  return;
}


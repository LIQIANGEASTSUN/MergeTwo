/* Ghidra 12.1.2 native pseudocode; RVA 0x6742B3C; Merger.Game.Views.Board.BoardQueueView.PrimaryGameStateChanged; status ok */


void Merger_Game_Views_Board_BoardQueueView__PrimaryGameStateChanged(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000007e28a6a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a6a = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    uVar1 = func_0x069b6578(*(long *)(param_1 + 0x38),0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x578))(plVar3,*(undefined8 *)(*plVar3 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x588))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x590));
      return;
    }
  }
  lVar2 = func_0x03280cac();
  *(undefined1 *)(lVar2 + 0x84) = 1;
  return;
}


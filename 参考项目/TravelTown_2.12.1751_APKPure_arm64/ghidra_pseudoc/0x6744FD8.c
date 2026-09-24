/* Ghidra 12.1.2 native pseudocode; RVA 0x6744FD8; Merger.Game.Views.Board.BoardQueueView2.GameStateChanged; status ok */


void Merger_Game_Views_Board_BoardQueueView2__GameStateChanged(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  undefined8 unaff_x20;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(code **)(puVar1 + -0x20) = unaff_x30;
    *(undefined8 *)(puVar1 + -0x10) = unaff_x20;
    *(long *)(puVar1 + -8) = unaff_x19;
    unaff_x20 = 0x7e28000;
    if ((bRam0000000007e28a87 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780ded8);
      bRam0000000007e28a87 = 1;
    }
    unaff_x19 = param_1;
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      uVar2 = func_0x069b6578(*(long *)(param_1 + 0x50),0);
      unaff_x19 = 0;
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        (**(code **)(*plVar3 + 0x578))(plVar3,*(undefined8 *)(*plVar3 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x588))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x590));
        return;
      }
    }
    unaff_x30 = Merger_Game_Views_Board_BoardQueueView2__BoardVisibilityChanged;
    param_1 = func_0x03280cac();
    puVar1 = puVar1 + -0x20;
  } while( true );
}


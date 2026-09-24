/* Ghidra 12.1.2 native pseudocode; RVA 0x674503C; Merger.Game.Views.Board.BoardQueueView2.BoardVisibilityChanged; status ok */


void Merger_Game_Views_Board_BoardQueueView2__BoardVisibilityChanged(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  code *unaff_x30;
  
  do {
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    unaff_x20 = 0x7e28000;
    if ((bRam0000000007e28a87 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780ded8);
      bRam0000000007e28a87 = 1;
    }
    unaff_x19 = param_1;
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar2 = *(long **)(param_1 + 0x28);
      uVar1 = func_0x069b6578(*(long *)(param_1 + 0x50),0);
      unaff_x19 = 0;
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        (**(code **)(*plVar2 + 0x578))(plVar2,*(undefined8 *)(*plVar2 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x588))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x590));
        return;
      }
    }
    unaff_x30 = Merger_Game_Views_Board_BoardQueueView2__BoardVisibilityChanged;
    param_1 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  } while( true );
}


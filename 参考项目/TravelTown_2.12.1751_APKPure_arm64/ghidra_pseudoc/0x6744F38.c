/* Ghidra 12.1.2 native pseudocode; RVA 0x6744F38; Merger.Game.Views.Board.BoardQueueView2.SetButtonInteractable; status ok */


void Merger_Game_Views_Board_BoardQueueView2__SetButtonInteractable(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long alStack_40 [4];
  
  uVar5 = (ulong)param_2;
  if ((bRam0000000007e28a85 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e28a85 = 1;
  }
  puVar1 = PTR_DAT_0774e4e0;
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x07254710(*(long *)(param_1 + 0x58),~param_2 & 1,0);
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x06fe351c(uVar7,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 != 0) {
      if (pcRam0000000007e2fbf0 == (code *)0x0) {
        pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
      }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000007e2fbf0)(lVar4,param_2 & 1);
      return;
    }
  }
  pcVar8 = Merger_Game_Views_Board_BoardQueueView2__GameStateChanged;
  uVar3 = func_0x03280cac();
  puVar2 = &stack0xffffffffffffffe0;
  do {
    *(code **)(puVar2 + -0x20) = pcVar8;
    *(long *)(puVar2 + -0x10) = param_1;
    *(ulong *)(puVar2 + -8) = uVar5;
    param_1 = 0x7e28000;
    if ((bRam0000000007e28a87 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780ded8);
      bRam0000000007e28a87 = 1;
    }
    uVar5 = uVar3;
    if (*(long *)(uVar3 + 0x50) != 0) {
      plVar6 = *(long **)(uVar3 + 0x28);
      uVar7 = func_0x069b6578(*(long *)(uVar3 + 0x50),0);
      uVar5 = 0;
      if (plVar6 != (long *)0x0) {
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        (**(code **)(*plVar6 + 0x578))(plVar6,*(undefined8 *)(*plVar6 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x588))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x590));
        return;
      }
    }
    pcVar8 = Merger_Game_Views_Board_BoardQueueView2__BoardVisibilityChanged;
    uVar3 = func_0x03280cac();
    puVar2 = puVar2 + -0x20;
  } while( true );
}


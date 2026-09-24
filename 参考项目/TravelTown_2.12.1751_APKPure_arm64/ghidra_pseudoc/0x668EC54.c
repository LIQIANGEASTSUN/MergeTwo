/* Ghidra 12.1.2 native pseudocode; RVA 0x668EC54; Merger.Game.Views.BoardItemViewBase.InvokeTapped; status ok */


void Merger_Game_Views_BoardItemViewBase__InvokeTapped(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678ec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28))
    ;
    return;
  }
  return;
}


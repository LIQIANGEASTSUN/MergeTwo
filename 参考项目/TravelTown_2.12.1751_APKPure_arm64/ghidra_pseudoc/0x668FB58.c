/* Ghidra 12.1.2 native pseudocode; RVA 0x668FB58; Merger.Game.Views.BoardUIView.DropItemOnInventory; status ok */


void Merger_Game_Views_BoardUIView__DropItemOnInventory(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678fb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28))
    ;
    return;
  }
  return;
}


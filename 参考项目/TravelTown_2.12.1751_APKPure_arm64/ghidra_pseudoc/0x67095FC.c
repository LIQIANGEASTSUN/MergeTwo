/* Ghidra 12.1.2 native pseudocode; RVA 0x67095FC; Merger.Game.Views.Inventory.InventoryProducerSlotView.ActivateNewBanner; status ok */


void Merger_Game_Views_Inventory_InventoryProducerSlotView__ActivateNewBanner(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000007e2fbf0)(lVar1,1);
    return;
  }
  lVar1 = func_0x03280cac();
  lVar2 = *(long *)(lVar1 + 0x58);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06809634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar1 + 0x98),
               *(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x670961C; Merger.Game.Views.Inventory.InventoryProducerSlotView.ShowMergeGraphPopup; status ok */


void Merger_Game_Views_Inventory_InventoryProducerSlotView__ShowMergeGraphPopup(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06809634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(param_1 + 0x98),
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


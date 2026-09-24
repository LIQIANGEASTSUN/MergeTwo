/* Ghidra 12.1.2 native pseudocode; RVA 0x67075C4; Merger.Game.Views.Inventory.InventoryItemSlotView.ShowMergeGraphPopup; status ok */


void Merger_Game_Views_Inventory_InventoryItemSlotView__ShowMergeGraphPopup(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x068075e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


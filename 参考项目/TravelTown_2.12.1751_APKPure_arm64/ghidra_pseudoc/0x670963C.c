/* Ghidra 12.1.2 native pseudocode; RVA 0x670963C; Merger.Game.Views.Inventory.InventoryProducerSlotView.RemoveFromInventory; status ok */


void Merger_Game_Views_Inventory_InventoryProducerSlotView__RemoveFromInventory(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x98) != 0) && (*(char *)(param_1 + 0xb4) != '\0')) &&
     (lVar1 = *(long *)(param_1 + 0x50), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x06809664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(param_1 + 0xb0),
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


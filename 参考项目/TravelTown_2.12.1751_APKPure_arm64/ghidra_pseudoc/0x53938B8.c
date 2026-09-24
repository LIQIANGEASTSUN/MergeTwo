/* Ghidra 12.1.2 native pseudocode; RVA 0x53938B8; MergeEngine.ECS.Components.Items.Producers.ItemSpawningComponent<TCapability>.get_SpawnedItemsLabel; status ok */


undefined8
MergeEngine_ECS_Components_Items_Producers_ItemSpawningComponent_TCapability___get_SpawnedItemsLabel
          (long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  lVar1 = func_0x03280cac();
  return *(undefined8 *)(lVar1 + 0x80);
}


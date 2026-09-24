/* Ghidra 12.1.2 native pseudocode; RVA 0x68FC1C8; MergeEngine.ECS.Components.Items.ExpendableComponent.get_HasTimer; status ok */


bool MergeEngine_ECS_Components_Items_ExpendableComponent__get_HasTimer(long param_1)

{
  return *(long *)(param_1 + 0x58) != 0;
}


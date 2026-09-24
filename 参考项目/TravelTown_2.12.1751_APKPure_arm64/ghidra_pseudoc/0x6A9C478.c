/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9C478; Merger.MergeBoard.Components.TimeCycleComponent.get_ExceededLifetimeLimit; status ok */


bool Merger_MergeBoard_Components_TimeCycleComponent__get_ExceededLifetimeLimit(long param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    return *(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x44);
  }
  return false;
}


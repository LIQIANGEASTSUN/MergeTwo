/* Ghidra 12.1.2 native pseudocode; RVA 0x68FD714; MergeEngine.ECS.Components.Items.LockedComponent.get_AnyLock; status ok */


bool MergeEngine_ECS_Components_Items_LockedComponent__get_AnyLock(long param_1)

{
  if ((((*(char *)(param_1 + 0x30) == '\0') && (*(char *)(param_1 + 0x33) == '\0')) &&
      (*(int *)(param_1 + 0x44) < 1)) &&
     (((*(char *)(param_1 + 0x31) == '\0' && (*(char *)(param_1 + 0x78) == '\0')) &&
      (*(char *)(param_1 + 0x79) == '\0')))) {
    return *(char *)(param_1 + 0x32) != '\0';
  }
  return true;
}


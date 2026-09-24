/* Ghidra 12.1.2 native pseudocode; RVA 0x68FE14C; MergeEngine.ECS.Components.Items.TimeLockComponent.get_Locked; status ok */


bool MergeEngine_ECS_Components_Items_TimeLockComponent__get_Locked(long param_1)

{
  if (0.0 < *(double *)(param_1 + 0x30)) {
    return *(char *)(param_1 + 0x4d) == '\0';
  }
  return false;
}


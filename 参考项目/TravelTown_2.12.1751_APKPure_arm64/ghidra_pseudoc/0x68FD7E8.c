/* Ghidra 12.1.2 native pseudocode; RVA 0x68FD7E8; MergeEngine.ECS.Components.Items.LockedComponent.get_BoxedLockedOrLockedByTutorial; status ok */


bool MergeEngine_ECS_Components_Items_LockedComponent__get_BoxedLockedOrLockedByTutorial
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = MergeEngine_ECS_Components_Items_LockedComponent__get_AnyLock();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(char *)(param_1 + 0x74) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


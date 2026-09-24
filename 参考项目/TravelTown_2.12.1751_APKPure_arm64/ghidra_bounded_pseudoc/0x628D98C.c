/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628D98C; bound 64 bytes; MergeEngine.ECS.Systems.PersistenceSystem.ClearStorageKeyPrefix; status ok */


void MergeEngine_ECS_Systems_PersistenceSystem__ClearStorageKeyPrefix(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  func_0x032809c4((undefined8 *)(param_1 + 0x88),0);
  func_0x0638bec4(param_1);
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0638d9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628D920; bound 60 bytes; MergeEngine.ECS.Systems.PersistenceSystem.SetStorageKeyPrefix; status ok */


void MergeEngine_ECS_Systems_PersistenceSystem__SetStorageKeyPrefix(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x88) = param_2;
  func_0x032809c4();
  MergeEngine_ECS_Systems_PersistenceSystem__CreateSerializationCache(param_1);
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0638d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


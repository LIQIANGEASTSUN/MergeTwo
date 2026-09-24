/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628D95C; bound 48 bytes; MergeEngine.ECS.Systems.PersistenceSystem.ReloadKeysUsingSerializationPrefix; status ok */


void MergeEngine_ECS_Systems_PersistenceSystem__ReloadKeysUsingSerializationPrefix(long param_1)

{
  long lVar1;
  
  MergeEngine_ECS_Systems_PersistenceSystem__CreateSerializationCache();
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0638d980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


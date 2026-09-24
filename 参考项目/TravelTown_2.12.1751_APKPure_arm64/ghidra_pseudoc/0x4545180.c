/* Ghidra 12.1.2 native pseudocode; RVA 0x4545180; MergeEngine.ECS.Systems.State.StateSystemBase<TStatePayload>.LoadStateInternal; status ok */


void MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___LoadStateInternal
               (long *param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04645190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined8 *)(*param_1 + 0x210));
    return;
  }
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x63A73DC; MergeEngine.ECS.Systems.SystemBase.IsCooldownBlocked; status ok */


uint MergeEngine_ECS_Systems_SystemBase__IsCooldownBlocked(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  uVar1 = func_0x064a7334(param_1,param_2,&uStack_8);
  return uVar1 & 1;
}


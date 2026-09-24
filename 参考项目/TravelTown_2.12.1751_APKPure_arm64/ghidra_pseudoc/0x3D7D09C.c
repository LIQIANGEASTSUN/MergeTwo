/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7D09C; MergeEngine.Configuration.Definitions.Reward.TryAggregate<__Il2CppFullySharedGenericType>; status ok */


undefined8
MergeEngine_Configuration_Definitions_Reward__TryAggregate___Il2CppFullySharedGenericType_
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x38);
  if (lVar3 == 0) {
    func_0x03256878(param_3);
    lVar3 = *(long *)(param_3 + 0x38);
  }
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 8))(param_1,param_2);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03e7d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x10))(param_1,param_2);
    return uVar2;
  }
  return param_2;
}


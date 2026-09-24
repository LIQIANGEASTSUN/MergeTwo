/* Ghidra 12.1.2 native pseudocode; RVA 0x6140988; MergeEngine.Model.Configuration.MergingConfigurationModel.GetRewardSpriteReference; status ok */


void MergeEngine_Model_Configuration_MergingConfigurationModel__GetRewardSpriteReference
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000007e245c4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780690);
    bRam0000000007e245c4 = 1;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x4e8))
                             (param_1,param_3,*(undefined8 *)(*param_1 + 0x4f0));
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07780690) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_06240a3c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar1,*(long *)PTR_DAT_07780690,2);
LAB_06240a3c:
                    /* WARNING: Could not recover jumptable at 0x06240a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


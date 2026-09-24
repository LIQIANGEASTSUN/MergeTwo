/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A0B4; MergeEngine.Configuration.Definitions.ItemMultiple.Merger.Rewards.Interfaces.IRewardViewPresentable.get_SpriteReference; status ok */


undefined8
MergeEngine_Configuration_Definitions_ItemMultiple__Merger_Rewards_Interfaces_IRewardViewPresentable_get_SpriteReference
          (undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_0777a7e8;
  if ((bRam0000000007e2a429 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780690);
    func_0x03280a18(PTR_DAT_0777a7e8);
    bRam0000000007e2a429 = 1;
  }
  plVar2 = (long *)func_0x05492218(param_1,*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
    return 0;
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07780690) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_06b2a160;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar2,*(long *)PTR_DAT_07780690,2);
LAB_06b2a160:
                    /* WARNING: Could not recover jumptable at 0x06b2a170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar4;
}


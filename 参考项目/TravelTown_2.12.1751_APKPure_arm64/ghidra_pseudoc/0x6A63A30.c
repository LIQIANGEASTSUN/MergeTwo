/* Ghidra 12.1.2 native pseudocode; RVA 0x6A63A30; Merger.MergeBoardSkipCooldownCapability.Logic.TimeLockSkipCooldownStrategy.GetTimeLeft; status ok */


undefined1  [16]
Merger_MergeBoardSkipCooldownCapability_Logic_TimeLockSkipCooldownStrategy__GetTimeLeft
          (undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_50 [6];
  
  if ((bRam0000000007e2a688 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a570);
    bRam0000000007e2a688 = 1;
  }
  auStack_50[4] = 0;
  auStack_50[1] = 0;
  auStack_50[0] = 0;
  auStack_50[3] = 0;
  auStack_50[2] = 0;
  if (param_2 != 0) {
    uVar1 = func_0x03d1ff44(param_2,auStack_50,*(undefined8 *)PTR_DAT_0777a570);
    if ((uVar1 & 1) == 0) {
      auStack_50[0] = 0;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auStack_50[0];
    return auVar2;
  }
  auVar2 = func_0x03280cac();
  return auVar2;
}


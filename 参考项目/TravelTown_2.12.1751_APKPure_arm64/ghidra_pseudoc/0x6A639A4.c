/* Ghidra 12.1.2 native pseudocode; RVA 0x6A639A4; Merger.MergeBoardSkipCooldownCapability.Logic.TimeCycleSkipCooldownStrategy.GetTimeLeft; status ok */


void Merger_MergeBoardSkipCooldownCapability_Logic_TimeCycleSkipCooldownStrategy__GetTimeLeft
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a686 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a548);
    bRam0000000007e2a686 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_2 != 0) {
    uVar1 = func_0x03d1fc04(param_2,&uStack_70,*(undefined8 *)PTR_DAT_0777a548);
    if ((uVar1 & 1) != 0) {
      func_0x06b9c49c(0,&uStack_70,0);
    }
    return;
  }
  func_0x03280cac();
  return;
}


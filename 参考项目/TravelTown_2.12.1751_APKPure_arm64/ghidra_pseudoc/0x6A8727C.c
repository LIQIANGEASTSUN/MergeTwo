/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8727C; Merger.MergeBoard.Logic.CombineValidators.ItemConsumableCombinerValidator.CanCombineItems; status ok */

uint Merger_MergeBoard_Logic_CombineValidators_ItemConsumableCombinerValidator__CanCombineItems
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_80 [6];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000007e2a7a3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830fb0);
    func_0x03280a18(PTR_DAT_0782fb10);
    func_0x03280a18(PTR_DAT_07831d50);
    bRam0000000007e2a7a3 = 1;
  }
  uVar1 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = func_0x06b868e4(param_2);
    if ((((uVar2 & 1) == 0) &&
        (((uVar2 = func_0x06b868e4(param_3), (uVar2 & 1) == 0 &&
          (uVar2 = func_0x03d1f018(param_3,&uStack_50,*(undefined8 *)PTR_DAT_0782fb10),
          (uVar2 & 1) != 0)) && ((uStack_38 & 1) != 0)))) &&
       ((uVar2 = func_0x03d281a8(uStack_30,*(undefined8 *)PTR_DAT_07831d50), (uVar2 & 1) != 0 &&
        (uVar2 = func_0x03d1b840(param_3,*(undefined8 *)PTR_DAT_07830fb0), (uVar2 & 1) == 0)))) {
      uVar3 = func_0x03d1b250(auStack_80,param_2,*(undefined8 *)PTR_DAT_0777a488);
      uStack_a8 = uStack_48;
      uStack_b0 = uStack_50;
      uStack_98 = uStack_38;
      uStack_a0 = uStack_40;
      uStack_90 = uStack_30;
      uVar1 = func_0x06b873a8(uVar3,&uStack_b0,auStack_80[0]);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 & 1;
}


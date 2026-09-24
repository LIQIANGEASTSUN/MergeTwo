
void Recovered_BaseItem_OnMerged_0x02BF3444(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  puVar2 = PTR_DAT_063fc5d0;
  if ((bRam0000000006812b19 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc5c0);
    func_0x02ad6de0(PTR_DAT_063fc5d0);
    func_0x02ad6de0(PTR_DAT_063fc5c8);
    bRam0000000006812b19 = 1;
  }
  puVar1 = PTR_DAT_063fc5c8;
  uStack_60 = 0;
  uStack_48 = 0;
  auStack_40[0] = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x02ad6d8c((ulong)&uStack_60 | 8,0);
  auStack_40[0] = param_2;
  func_0x02ad6d8c(auStack_40,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
    func_0x02b0e084();
  }
  Recovered_BaseItem_NestedType__OnMerged_d__64_MoveNext_0x02BF5C30(&uStack_60);
  func_0x02c9c324(&uStack_78,(ulong)&uStack_60 | 8,*(undefined8 *)puVar1);
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = uStack_68;
  return;
}


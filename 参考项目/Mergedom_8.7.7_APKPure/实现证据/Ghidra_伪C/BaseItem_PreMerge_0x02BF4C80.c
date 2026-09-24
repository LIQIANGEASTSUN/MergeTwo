
void Recovered_BaseItem_PreMerge_0x02BF4C80(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 auStack_40 [2];
  
  puVar1 = PTR_DAT_063fc6a0;
  if ((bRam0000000006812b18 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc6a0);
    bRam0000000006812b18 = 1;
  }
  auStack_40[0] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x02ad6d8c((ulong)&uStack_60 | 8,0);
  auStack_40[0] = param_1;
  func_0x02ad6d8c(auStack_40,param_1);
  uStack_48 = CONCAT71(uStack_48._1_7_,param_2) & 0xffffffffffffff01;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    func_0x02b0e084();
  }
  Recovered_BaseItem_NestedType__PreMerge_d__63_MoveNext_0x02BF5F9C(&uStack_60);
  func_0x02c29b48((ulong)&uStack_60 | 8,0);
  return;
}


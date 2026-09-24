/* Ghidra 12.1.2 native pseudocode; RVA 0x4944B20; MergeEngine.Util.WeightedItemList<TItem>..ctor; status ok */


undefined1  [16] MergeEngine_Util_WeightedItemList_TItem____ctor(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c(lVar2);
  }
  uVar1 = func_0x03280ca0(lVar2);
  func_0x04143c38(uVar1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xe0));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x032809c4((undefined8 *)(param_1 + 0x10),uVar1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}


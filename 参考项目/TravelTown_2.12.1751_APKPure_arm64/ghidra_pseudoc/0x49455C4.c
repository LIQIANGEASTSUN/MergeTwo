/* Ghidra 12.1.2 native pseudocode; RVA 0x49455C4; MergeEngine.Util.WeightedItem<T>.get_Weight; status ok */


undefined4 MergeEngine_Util_WeightedItem_T___get_Weight(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           func_0x03280a38(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80) +
                                   0x20);
  return *puVar1;
}


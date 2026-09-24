/* Ghidra 12.1.2 native pseudocode; RVA 0x494552C; MergeEngine.Util.WeightedItem<T>.get_Item; status ok */


ulong MergeEngine_Util_WeightedItem_T___get_Item(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_50 [2];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  uVar6 = (ulong)*(uint *)(plVar5[1] + 0xfc);
  lVar2 = -(uVar6 + 0xf & 0x1fffffff0);
  uVar3 = func_0x03280a38(param_1,*(undefined8 *)(*plVar5 + 0x80));
  func_0x072ce970(auStack_40 + lVar2,uVar3,uVar6);
  uVar6 = func_0x072ce970(param_2,auStack_40 + lVar2,uVar6);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return uVar6;
  }
  auVar7 = func_0x072ce990();
  *(undefined8 *)((long)auStack_50 + lVar2) = 0x4a455c4;
  puVar4 = (uint *)func_0x03280a38(auVar7._0_8_,
                                   *(long *)(**(long **)(*(long *)(auVar7._8_8_ + 0x20) + 0xc0) +
                                            0x80) + 0x20);
  return (ulong)*puVar4;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x4944E1C; MergeEngine.Util.WeightedItemList<TItem>.GetItem; status ok */


long MergeEngine_Util_WeightedItemList_TItem___GetItem(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  lVar4 = func_0x03280ca0(lVar4);
  func_0x04c1bfa0(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8));
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x1a8))
                      (param_2,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(*param_2 + 0x1b0));
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x10) = iVar1 + 1;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
          0) {
        func_0x0325681c();
      }
      uVar2 = func_0x03280ca0();
      lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      func_0x05355fbc(uVar2,lVar4,*(undefined8 *)(lVar5 + 0xb0),*(undefined8 *)(lVar5 + 0xc0));
      lVar4 = func_0x03d4294c(uVar6,uVar2,
                              *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200));
      if (lVar4 != 0) {
        return *(long *)(lVar4 + 0x10);
      }
    }
  }
  auVar7 = func_0x03280cac();
  lVar4 = *(long *)(*(long *)(*(long *)(auVar7._8_8_ + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  uVar6 = func_0x03280ca0(lVar4);
  func_0x04143c38(uVar6,*(undefined8 *)(*(long *)(*(long *)(auVar7._8_8_ + 0x20) + 0xc0) + 0xe0));
  puVar3 = (undefined8 *)(auVar7._0_8_ + 0x10);
  *puVar3 = uVar6;
  func_0x032809c4(puVar3,uVar6);
  return auVar7._0_8_;
}


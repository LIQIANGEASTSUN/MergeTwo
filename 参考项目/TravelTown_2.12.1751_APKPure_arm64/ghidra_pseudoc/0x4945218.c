/* Ghidra 12.1.2 native pseudocode; RVA 0x4945218; MergeEngine.Util.WeightedItemList<TItem>.GetItem; status ok */


long MergeEngine_Util_WeightedItemList_TItem___GetItem
               (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  ulong auStack_90 [4];
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar7 = tpidr_el0;
  lStack_58 = *(long *)(lVar7 + 0x28);
  lVar5 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  uVar8 = (ulong)*(uint *)(*(long *)(lVar5 + 0xd8) + 0xfc);
  lVar1 = -(uVar8 + 0xf & 0x1fffffff0);
  lVar9 = (long)&lStack_70 + lVar1;
  if ((*(byte *)(*(long *)(lVar5 + 0xa0) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8))();
  if (param_2 != (long *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x1a8))
                      (param_2,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(*param_2 + 0x1b0));
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x10) = iVar2 + 1;
      lVar10 = *(long *)(param_1 + 0x10);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
          0) {
        func_0x0325681c();
      }
      uVar3 = func_0x03280ca0();
      lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      (*(code *)**(undefined8 **)(lVar6 + 0xc0))(uVar3,lVar5,*(undefined8 *)(lVar6 + 0xb0));
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200);
      lStack_70 = lVar10;
      uStack_68 = uVar3;
      (*(code *)puVar4[2])(*puVar4,puVar4,0,&lStack_70,&lStack_60);
      if (lStack_60 != 0) {
        puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xd0);
        lStack_70 = lVar9;
        (*(code *)puVar4[2])(*puVar4,puVar4,lStack_60,&lStack_70,lVar9);
        lVar5 = func_0x072ce970(param_3,lVar9,uVar8);
        if (*(long *)(lVar7 + 0x28) == lStack_58) {
          return lVar5;
        }
        goto LAB_04a45398;
      }
    }
  }
  func_0x03280cac();
LAB_04a45398:
  auVar11 = func_0x072ce990();
  *(code **)((long)auStack_90 + lVar1) = MergeEngine_Util_WeightedItemList_TItem____ctor;
  *(ulong *)((long)auStack_90 + lVar1 + 0x10) = uVar8;
  *(undefined8 *)((long)auStack_90 + lVar1 + 0x18) = param_3;
  lVar7 = *(long *)(*(long *)(*(long *)(auVar11._8_8_ + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x0325681c(lVar7);
  }
  uVar3 = func_0x03280ca0(lVar7);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x20) + 0xc0) + 0xe0))();
  puVar4 = (undefined8 *)(auVar11._0_8_ + 0x10);
  *puVar4 = uVar3;
  func_0x032809c4(puVar4,uVar3);
  return auVar11._0_8_;
}


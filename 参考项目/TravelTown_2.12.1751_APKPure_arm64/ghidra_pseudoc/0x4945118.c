/* Ghidra 12.1.2 native pseudocode; RVA 0x4945118; MergeEngine.Util.WeightedItemList<TItem>.AddItem; status ok */


void MergeEngine_Util_WeightedItemList_TItem___AddItem(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_28;
  
  lVar4 = param_3;
  if (param_2 != 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70))
                      (param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    lVar4 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78);
      lStack_28 = param_2;
      (*(code *)puVar3[2])(*puVar3,puVar3,*(long *)(param_1 + 0x10),&lStack_28,param_2);
      return;
    }
  }
  auVar6 = func_0x03280cac();
  lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c(lVar5);
  }
  uVar2 = func_0x03280ca0(lVar5);
  lVar5 = *(long *)(*(long *)(lVar4 + 0x20) + 0xc0);
  (*(code *)**(undefined8 **)(lVar5 + 0x90))(uVar2,auVar6._0_8_,*(undefined8 *)(lVar5 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x04a45214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x98))(auVar6._8_8_,uVar2)
  ;
  return;
}


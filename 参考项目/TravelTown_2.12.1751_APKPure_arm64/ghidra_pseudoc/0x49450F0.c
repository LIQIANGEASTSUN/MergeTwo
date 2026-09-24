/* Ghidra 12.1.2 native pseudocode; RVA 0x49450F0; MergeEngine.Util.WeightedItemList<TItem>.get_Count; status ok */


void MergeEngine_Util_WeightedItemList_TItem___get_Count(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_38;
  code *pcStack_30;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x04a45110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60))();
    return;
  }
  auVar6 = func_0x03280cac();
  lStack_38 = auVar6._8_8_;
  pcStack_30 = MergeEngine_Util_WeightedItemList_TItem___AddItem;
  lVar5 = param_3;
  if (lStack_38 != 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70))
                      (lStack_38);
    lVar4 = *(long *)(auVar6._0_8_ + 0x10);
    *(undefined4 *)(auVar6._0_8_ + 0x18) = uVar1;
    lVar5 = 0;
    if (lVar4 != 0) {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78);
      (*(code *)puVar3[2])(*puVar3,puVar3,lVar4,&lStack_38,lStack_38);
      return;
    }
  }
  auVar6 = func_0x03280cac();
  lVar4 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  uVar2 = func_0x03280ca0(lVar4);
  lVar4 = *(long *)(*(long *)(lVar5 + 0x20) + 0xc0);
  (*(code *)**(undefined8 **)(lVar4 + 0x90))(uVar2,auVar6._0_8_,*(undefined8 *)(lVar4 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x04a45214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x98))(auVar6._8_8_,uVar2)
  ;
  return;
}


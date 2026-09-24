/* Ghidra 12.1.2 native pseudocode; RVA 0x4945190; MergeEngine.Util.WeightedItemList<TItem>.AddItems; status ok */


void MergeEngine_Util_WeightedItemList_TItem___AddItems
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c(lVar2);
  }
  uVar1 = func_0x03280ca0(lVar2);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  (*(code *)**(undefined8 **)(lVar2 + 0x90))(uVar1,param_1,*(undefined8 *)(lVar2 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x04a45214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98))(param_2,uVar1);
  return;
}


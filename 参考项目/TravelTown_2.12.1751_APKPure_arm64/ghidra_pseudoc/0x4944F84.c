/* Ghidra 12.1.2 native pseudocode; RVA 0x4944F84; MergeEngine.Util.WeightedItemList<TItem>.get_PlainItems; status ok */


void MergeEngine_Util_WeightedItemList_TItem___get_PlainItems(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x0325681c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x0325681c();
      lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    uVar5 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c(lVar2);
    }
    lVar1 = func_0x03280ca0(lVar2);
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    (*(code *)**(undefined8 **)(lVar2 + 0x30))(lVar1,uVar5,*(undefined8 *)(lVar2 + 0x28));
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar2 + 0xb8) + 8,lVar1);
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38))(uVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x04a450ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50))();
  return;
}


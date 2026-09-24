/* Ghidra 12.1.2 native pseudocode; RVA 0x6A97830; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateToolSpawningComponent; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateToolSpawningComponent
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = 0;
  if (param_2 != 0) {
    uStack_18 = *(undefined8 *)(param_2 + 0x20);
    func_0x032809c4(&uStack_18);
    lStack_20 = *(long *)(param_2 + 0x18);
    func_0x032809c4(&lStack_20);
    return lStack_20;
  }
  auVar5 = func_0x03280cac();
  lVar3 = auVar5._8_8_;
  lVar1 = auVar5._0_8_;
  lVar2 = lVar1;
  if ((lVar3 != 0) &&
     ((lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0 || (*(long *)(lVar3 + 0x18) != 0)))) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    lVar2 = func_0x06b93e20(lVar1);
    if (lVar2 < lVar4) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar2 = func_0x06b93e20(lVar1);
      *(double *)(lVar3 + 0x20) = (double)(lVar4 - lVar2) / _UNK_017806f0;
    }
    lVar4 = *(long *)(lVar3 + 0x18);
    lVar2 = func_0x06b93e20(lVar1);
    if (lVar2 < lVar4) {
      lVar4 = *(long *)(lVar3 + 0x18);
      lVar2 = func_0x06b93e20(lVar1);
      *(double *)(lVar3 + 0x28) = (double)(lVar4 - lVar2) / _UNK_017806f0;
    }
  }
  return lVar2;
}


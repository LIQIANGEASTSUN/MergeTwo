/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9787C; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CalculateCyclesDelay; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateCyclesDelay
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != 0) &&
     ((lVar2 = *(long *)(param_2 + 0x10), lVar2 != 0 || (*(long *)(param_2 + 0x18) != 0)))) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    lVar1 = func_0x06b93e20(param_1);
    if (lVar1 < lVar2) {
      lVar1 = *(long *)(param_2 + 0x10);
      lVar2 = func_0x06b93e20(param_1);
      *(double *)(param_2 + 0x20) = (double)(lVar1 - lVar2) / _UNK_017806f0;
    }
    lVar1 = *(long *)(param_2 + 0x18);
    lVar2 = func_0x06b93e20(param_1);
    if (lVar2 < lVar1) {
      lVar1 = *(long *)(param_2 + 0x18);
      lVar2 = func_0x06b93e20(param_1);
      *(double *)(param_2 + 0x28) = (double)(lVar1 - lVar2) / _UNK_017806f0;
    }
  }
  return;
}


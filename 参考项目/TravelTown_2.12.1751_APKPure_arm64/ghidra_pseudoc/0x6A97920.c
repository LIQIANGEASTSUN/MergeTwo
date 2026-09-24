/* Ghidra 12.1.2 native pseudocode; RVA 0x6A97920; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CalculateUnlockTimeLeft; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CalculateUnlockTimeLeft
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x18) != '\0')) {
    lVar2 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x10) = 0;
    lVar1 = func_0x06b93e20();
    if (lVar1 < lVar2) {
      lVar2 = *(long *)(param_2 + 0x20);
      lVar1 = func_0x06b93e20(param_1);
      *(double *)(param_2 + 0x10) = (double)(lVar2 - lVar1) / _UNK_017806f0;
    }
  }
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7C72C; Merger.MergeBoard.Models.ActiveTilesModel.ClearActiveTiles; status ok */


void Merger_MergeBoard_Models_ActiveTilesModel__ClearActiveTiles(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x032809c4((undefined8 *)(param_1 + 0x18),0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06b7c75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


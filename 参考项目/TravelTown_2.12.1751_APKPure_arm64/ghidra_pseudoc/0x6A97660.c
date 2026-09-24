/* Ghidra 12.1.2 native pseudocode; RVA 0x6A97660; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateCollectableComponent; status ok */


/* WARNING: Possible PIC construction at 0x06b976d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b97728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b976d8) */
/* WARNING: Removing unreachable block (ram,0x06b976e0) */
/* WARNING: Removing unreachable block (ram,0x06b976e4) */
/* WARNING: Removing unreachable block (ram,0x06b9772c) */
/* WARNING: Removing unreachable block (ram,0x06b97734) */
/* WARNING: Removing unreachable block (ram,0x06b97740) */
/* WARNING: Removing unreachable block (ram,0x06b9774c) */
/* WARNING: Removing unreachable block (ram,0x06b97764) */

void Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateCollectableComponent
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  if ((bRam0000000007e2a80e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832570);
    func_0x03280a18(PTR_DAT_07832578);
    bRam0000000007e2a80e = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
    if (*(char *)(*(long *)(param_3 + 0x18) + 0x10) != '\0') {
      func_0x03280ca0(*(undefined8 *)PTR_DAT_07832570);
      return;
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      if (*(char *)(*(long *)(param_3 + 0x20) + 0x10) != '\0') {
        func_0x03280ca0(*(undefined8 *)PTR_DAT_07832578);
        return;
      }
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  func_0x03280cac();
  return;
}


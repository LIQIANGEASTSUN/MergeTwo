/* Ghidra 12.1.2 native pseudocode; RVA 0x6A592EC; Merger.MergeBoardQueue.Models.BoardQueueModel.SyncPendingEnqueuedItem; status ok */


/* WARNING: Possible PIC construction at 0x06b59398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b5939c) */
/* WARNING: Removing unreachable block (ram,0x06b593a0) */
/* WARNING: Removing unreachable block (ram,0x06b593e4) */
/* WARNING: Removing unreachable block (ram,0x06b59400) */
/* WARNING: Removing unreachable block (ram,0x06b5940c) */
/* WARNING: Removing unreachable block (ram,0x06b59424) */
/* WARNING: Removing unreachable block (ram,0x06b5942c) */
/* WARNING: Removing unreachable block (ram,0x06b59450) */
/* WARNING: Removing unreachable block (ram,0x06b59478) */
/* WARNING: Removing unreachable block (ram,0x06b594a0) */
/* WARNING: Removing unreachable block (ram,0x06b59480) */
/* WARNING: Removing unreachable block (ram,0x043219ac) */
/* WARNING: Removing unreachable block (ram,0x04321a38) */
/* WARNING: Removing unreachable block (ram,0x043219dc) */
/* WARNING: Removing unreachable block (ram,0x04321a08) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */
/* WARNING: Removing unreachable block (ram,0x043219f8) */
/* WARNING: Removing unreachable block (ram,0x06b59468) */

void Merger_MergeBoardQueue_Models_BoardQueueModel__SyncPendingEnqueuedItem(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_078303f8;
  if ((bRam0000000007e2a614 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830400);
    func_0x03280a18(PTR_DAT_07830408);
    func_0x03280a18(PTR_DAT_07830380);
    func_0x03280a18(PTR_DAT_07830410);
    func_0x03280a18(PTR_DAT_07830340);
    func_0x03280a18(PTR_DAT_0777d4c8);
    func_0x03280a18(PTR_DAT_07830418);
    func_0x03280a18(PTR_DAT_07830420);
    func_0x03280a18(PTR_DAT_078303f8);
    bRam0000000007e2a614 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


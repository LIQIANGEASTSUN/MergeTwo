/* Ghidra 12.1.2 native pseudocode; RVA 0x6A72A10; Merger.MergeBoard.Systems.PendingItemsCombinationSystem.FindPendingVerificationPairs; status ok */


/* WARNING: Possible PIC construction at 0x06b72ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b72adc) */
/* WARNING: Removing unreachable block (ram,0x06b72bf4) */
/* WARNING: Removing unreachable block (ram,0x06b72ae0) */

void Merger_MergeBoard_Systems_PendingItemsCombinationSystem__FindPendingVerificationPairs(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07831378;
  if ((bRam0000000007e2a6ee & 1) == 0) {
    func_0x03280a18(PTR_DAT_078309e0);
    func_0x03280a18(PTR_DAT_07831380);
    func_0x03280a18(PTR_DAT_07831388);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831390);
    func_0x03280a18(PTR_DAT_07831398);
    func_0x03280a18(PTR_DAT_078313a0);
    func_0x03280a18(PTR_DAT_078313a8);
    func_0x03280a18(PTR_DAT_07831378);
    bRam0000000007e2a6ee = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


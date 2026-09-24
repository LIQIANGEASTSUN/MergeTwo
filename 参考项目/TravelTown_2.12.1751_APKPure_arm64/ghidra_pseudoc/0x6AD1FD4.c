/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1FD4; Merger.MergeBoard.PowerBoost.Models.PowerBoostModel.GetEnergyThreshold; status ok */


/* WARNING: Possible PIC construction at 0x06bd2050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06bd2054) */
/* WARNING: Removing unreachable block (ram,0x06bd2058) */
/* WARNING: Removing unreachable block (ram,0x06bd2064) */
/* WARNING: Removing unreachable block (ram,0x06bd2084) */
/* WARNING: Removing unreachable block (ram,0x06bd20ec) */
/* WARNING: Removing unreachable block (ram,0x06bd208c) */
/* WARNING: Removing unreachable block (ram,0x06bd20d8) */
/* WARNING: Removing unreachable block (ram,0x06bd207c) */
/* WARNING: Removing unreachable block (ram,0x06bd20dc) */

void Merger_MergeBoard_PowerBoost_Models_PowerBoostModel__GetEnergyThreshold(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07834198;
  if ((bRam0000000007e2aa98 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077df548);
    func_0x03280a18(PTR_DAT_077df770);
    func_0x03280a18(PTR_DAT_077df578);
    func_0x03280a18(PTR_DAT_078341a0);
    func_0x03280a18(PTR_DAT_07834198);
    bRam0000000007e2aa98 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


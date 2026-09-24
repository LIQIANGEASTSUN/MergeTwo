/* Ghidra 12.1.2 native pseudocode; RVA 0x6A662E8; Merger.MergeBoard.Systems.ExpendableSystem.HasSpawnedAnItemThisTick; status ok */


/* WARNING: Possible PIC construction at 0x06b663b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b663b4) */
/* WARNING: Removing unreachable block (ram,0x06b664c8) */
/* WARNING: Removing unreachable block (ram,0x06b663b8) */

void Merger_MergeBoard_Systems_ExpendableSystem__HasSpawnedAnItemThisTick(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07830b48;
  if ((bRam0000000007e2a6a1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830b50);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830b58);
    func_0x03280a18(PTR_DAT_07830b60);
    func_0x03280a18(PTR_DAT_07830b68);
    func_0x03280a18(PTR_DAT_07830b70);
    func_0x03280a18(PTR_DAT_07830b78);
    func_0x03280a18(PTR_DAT_07830b48);
    bRam0000000007e2a6a1 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A629C4; Merger.MergeBoardSkipCooldownCapability.Systems.TimeCycleSkipCooldownSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b62acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b62c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b62ad0) */
/* WARNING: Removing unreachable block (ram,0x06b62ad4) */
/* WARNING: Removing unreachable block (ram,0x06b62af0) */
/* WARNING: Removing unreachable block (ram,0x06b62b0c) */
/* WARNING: Removing unreachable block (ram,0x06b62be4) */
/* WARNING: Removing unreachable block (ram,0x06b62c58) */
/* WARNING: Removing unreachable block (ram,0x06b62c60) */
/* WARNING: Removing unreachable block (ram,0x06b62c64) */
/* WARNING: Removing unreachable block (ram,0x06b62cb8) */
/* WARNING: Removing unreachable block (ram,0x06b62c88) */
/* WARNING: Removing unreachable block (ram,0x06b62ca0) */

void Merger_MergeBoardSkipCooldownCapability_Systems_TimeCycleSkipCooldownSystem__Tick(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07830838;
  if ((bRam0000000007e2a67b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830840);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830848);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830850);
    func_0x03280a18(PTR_DAT_07830858);
    func_0x03280a18(PTR_DAT_07830860);
    func_0x03280a18(PTR_DAT_07830868);
    func_0x03280a18(PTR_DAT_07830870);
    func_0x03280a18(PTR_DAT_07830878);
    func_0x03280a18(PTR_DAT_07830880);
    func_0x03280a18(PTR_DAT_07830888);
    func_0x03280a18(PTR_DAT_07830838);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a67b = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


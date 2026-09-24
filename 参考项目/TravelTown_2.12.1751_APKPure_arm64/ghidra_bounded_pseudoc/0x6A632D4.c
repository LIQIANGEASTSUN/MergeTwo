/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6A632D4; bound 388 bytes; Merger.MergeBoardSkipCooldownCapability.Logic.SkipCooldownProvider.GetTimeLeft; status ok */


/* WARNING: Possible PIC construction at 0x06b63354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b63358) */
/* WARNING: Removing unreachable block (ram,0x06b63454) */
/* WARNING: Removing unreachable block (ram,0x06b6335c) */
/* WARNING: Removing unreachable block (ram,0x06b6340c) */
/* WARNING: Removing unreachable block (ram,0x06b633bc) */
/* WARNING: Removing unreachable block (ram,0x06b633dc) */
/* WARNING: Removing unreachable block (ram,0x06b633e4) */
/* WARNING: Removing unreachable block (ram,0x06b63424) */
/* WARNING: Removing unreachable block (ram,0x06b633f0) */
/* WARNING: Removing unreachable block (ram,0x06b633fc) */
/* WARNING: Removing unreachable block (ram,0x06b63434) */

void Merger_MergeBoardSkipCooldownCapability_Logic_SkipCooldownProvider__GetTimeLeft(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_078308f0;
  if ((bRam0000000007e2a67f & 1) == 0) {
    func_0x03280a18(PTR_DAT_078308f8);
    func_0x03280a18(PTR_DAT_078308e0);
    func_0x03280a18(PTR_DAT_07830900);
    func_0x03280a18(PTR_DAT_07830908);
    func_0x03280a18(PTR_DAT_078308f0);
    bRam0000000007e2a67f = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


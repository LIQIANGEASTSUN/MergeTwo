/* Ghidra 12.1.2 native pseudocode; RVA 0x6A62DB4; Merger.MergeBoardSkipCooldownCapability.Systems.TimeLockSkipCooldownSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b62eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b63014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b62eb4) */
/* WARNING: Removing unreachable block (ram,0x06b62eb8) */
/* WARNING: Removing unreachable block (ram,0x06b62ed4) */
/* WARNING: Removing unreachable block (ram,0x06b62ef0) */
/* WARNING: Removing unreachable block (ram,0x06b62fc8) */
/* WARNING: Removing unreachable block (ram,0x072ce774) */
/* WARNING: Removing unreachable block (ram,0x06b63004) */
/* WARNING: Removing unreachable block (ram,0x06b63018) */
/* WARNING: Removing unreachable block (ram,0x06b63020) */
/* WARNING: Removing unreachable block (ram,0x06b63024) */
/* WARNING: Removing unreachable block (ram,0x06b63068) */
/* WARNING: Removing unreachable block (ram,0x06b63038) */
/* WARNING: Removing unreachable block (ram,0x06b63050) */

void Merger_MergeBoardSkipCooldownCapability_Systems_TimeLockSkipCooldownSystem__Tick(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07830890;
  if ((bRam0000000007e2a67c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830840);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830898);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078308a0);
    func_0x03280a18(PTR_DAT_078308a8);
    func_0x03280a18(PTR_DAT_078308b0);
    func_0x03280a18(PTR_DAT_078308b8);
    func_0x03280a18(PTR_DAT_07830870);
    func_0x03280a18(PTR_DAT_07830878);
    func_0x03280a18(PTR_DAT_078308c0);
    func_0x03280a18(PTR_DAT_078308c8);
    func_0x03280a18(PTR_DAT_07830890);
    bRam0000000007e2a67c = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


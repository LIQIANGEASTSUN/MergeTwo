/* Ghidra 12.1.2 native pseudocode; RVA 0x6914258; MergeEngine.Configuration.ResourceConfig.GetDefinition; status ok */


/* WARNING: Possible PIC construction at 0x06a142e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a142ec) */
/* WARNING: Removing unreachable block (ram,0x06a142f0) */
/* WARNING: Removing unreachable block (ram,0x06a1430c) */
/* WARNING: Removing unreachable block (ram,0x06a14328) */
/* WARNING: Removing unreachable block (ram,0x06a143ac) */
/* WARNING: Removing unreachable block (ram,0x06a14380) */
/* WARNING: Removing unreachable block (ram,0x06a14394) */

void MergeEngine_Configuration_ResourceConfig__GetDefinition(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07826dc8;
  if ((bRam0000000007e299f9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826dd0);
    func_0x03280a18(PTR_DAT_07826dd8);
    func_0x03280a18(PTR_DAT_07826de0);
    func_0x03280a18(PTR_DAT_07826de8);
    func_0x03280a18(PTR_DAT_07826df0);
    func_0x03280a18(PTR_DAT_07826dc8);
    bRam0000000007e299f9 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


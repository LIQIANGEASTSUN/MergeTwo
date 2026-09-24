/* Ghidra 12.1.2 native pseudocode; RVA 0x62887D4; MergeEngine.ECS.Systems.InventorySystem.FindCircularExpends; status ok */

/* WARNING: Possible PIC construction at 0x06388890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06388894) */
/* WARNING: Removing unreachable block (ram,0x06388898) */
/* WARNING: Removing unreachable block (ram,0x063888b0) */
/* WARNING: Removing unreachable block (ram,0x063888b8) */
/* WARNING: Removing unreachable block (ram,0x063888e0) */
/* WARNING: Removing unreachable block (ram,0x063888c4) */
/* WARNING: Removing unreachable block (ram,0x063888d0) */
/* WARNING: Removing unreachable block (ram,0x063888f0) */
/* WARNING: Removing unreachable block (ram,0x06388900) */
/* WARNING: Removing unreachable block (ram,0x0638899c) */
/* WARNING: Removing unreachable block (ram,0x06388908) */
/* WARNING: Removing unreachable block (ram,0x06388930) */
/* WARNING: Removing unreachable block (ram,0x0638896c) */
/* WARNING: Removing unreachable block (ram,0x06388974) */
/* WARNING: Removing unreachable block (ram,0x063889a4) */
/* WARNING: Removing unreachable block (ram,0x06388980) */
/* WARNING: Removing unreachable block (ram,0x0638898c) */
/* WARNING: Removing unreachable block (ram,0x063889b4) */
/* WARNING: Removing unreachable block (ram,0x063889c4) */
/* WARNING: Removing unreachable block (ram,0x063889cc) */
/* WARNING: Removing unreachable block (ram,0x063889d8) */
/* WARNING: Removing unreachable block (ram,0x063889f0) */
/* WARNING: Removing unreachable block (ram,0x063889f8) */
/* WARNING: Removing unreachable block (ram,0x06388a04) */
/* WARNING: Removing unreachable block (ram,0x06388a0c) */
/* WARNING: Removing unreachable block (ram,0x06388a30) */
/* WARNING: Removing unreachable block (ram,0x06388a38) */
/* WARNING: Removing unreachable block (ram,0x06388a74) */
/* WARNING: Removing unreachable block (ram,0x06388a8c) */
/* WARNING: Removing unreachable block (ram,0x06388af8) */
/* WARNING: Removing unreachable block (ram,0x06388afc) */
/* WARNING: Removing unreachable block (ram,0x06388aa0) */
/* WARNING: Removing unreachable block (ram,0x06388ab4) */
/* WARNING: Removing unreachable block (ram,0x06388ac4) */
/* WARNING: Removing unreachable block (ram,0x06388ad4) */
/* WARNING: Removing unreachable block (ram,0x06388ad8) */

void MergeEngine_ECS_Systems_InventorySystem__FindCircularExpends(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_077e7400;
  if ((bRam0000000007e254e8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780050);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_077e7408);
    func_0x03280a18(PTR_DAT_077e7048);
    func_0x03280a18(PTR_DAT_077cf4c8);
    func_0x03280a18(PTR_DAT_077cf4d0);
    func_0x03280a18(PTR_DAT_077e7410);
    func_0x03280a18(PTR_DAT_077e7400);
    bRam0000000007e254e8 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


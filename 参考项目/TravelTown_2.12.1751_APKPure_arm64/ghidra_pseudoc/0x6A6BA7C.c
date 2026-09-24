/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6BA7C; Merger.MergeBoard.Systems.InteractionSystem.GetDefaultEntityUuidToConsume; status ok */


/* WARNING: Possible PIC construction at 0x06b6bb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6bb08) */
/* WARNING: Removing unreachable block (ram,0x06b6bb0c) */
/* WARNING: Removing unreachable block (ram,0x06b6bbb8) */
/* WARNING: Removing unreachable block (ram,0x06b6bb88) */

void Merger_MergeBoard_Systems_InteractionSystem__GetDefaultEntityUuidToConsume(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07830fc0;
  if ((bRam0000000007e2a6c8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830ef0);
    func_0x03280a18(PTR_DAT_077c1d40);
    func_0x03280a18(PTR_DAT_07830fc8);
    func_0x03280a18(PTR_DAT_07830fc0);
    bRam0000000007e2a6c8 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


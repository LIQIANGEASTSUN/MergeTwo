/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6D98C; Merger.MergeBoard.Systems.ItemMovementLockSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b6da8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6da90) */
/* WARNING: Removing unreachable block (ram,0x06b6da94) */
/* WARNING: Removing unreachable block (ram,0x06b6daa0) */
/* WARNING: Removing unreachable block (ram,0x06b6dabc) */
/* WARNING: Removing unreachable block (ram,0x06b6dba0) */
/* WARNING: Removing unreachable block (ram,0x06b6dbe0) */
/* WARNING: Removing unreachable block (ram,0x06b6dc9c) */
/* WARNING: Removing unreachable block (ram,0x06b6dcac) */
/* WARNING: Removing unreachable block (ram,0x06b6dd1c) */
/* WARNING: Removing unreachable block (ram,0x06b6dd2c) */
/* WARNING: Removing unreachable block (ram,0x06b6dd58) */
/* WARNING: Removing unreachable block (ram,0x06b6dbb0) */
/* WARNING: Removing unreachable block (ram,0x06b6dd70) */
/* WARNING: Removing unreachable block (ram,0x06b6dbc0) */
/* WARNING: Removing unreachable block (ram,0x06b6dbd4) */
/* WARNING: Removing unreachable block (ram,0x06b6dcfc) */

void Merger_MergeBoard_Systems_ItemMovementLockSystem__Tick(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07831080;
  if ((bRam0000000007e2a6d8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831088);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_07831090);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831098);
    func_0x03280a18(PTR_DAT_078310a0);
    func_0x03280a18(PTR_DAT_078310a8);
    func_0x03280a18(PTR_DAT_078310b0);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_078310b8);
    func_0x03280a18(PTR_DAT_078310c0);
    func_0x03280a18(PTR_DAT_078310c8);
    func_0x03280a18(PTR_DAT_078310d0);
    func_0x03280a18(PTR_DAT_07831080);
    bRam0000000007e2a6d8 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


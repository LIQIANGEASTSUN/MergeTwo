/* Ghidra 12.1.2 native pseudocode; RVA 0x6A704CC; Merger.MergeBoard.Systems.ItemUnboxingSystem.TryGetBoxedEntity; status ok */


/* WARNING: Possible PIC construction at 0x06b70598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7059c) */
/* WARNING: Removing unreachable block (ram,0x06b706cc) */
/* WARNING: Removing unreachable block (ram,0x06b705a0) */
/* WARNING: Removing unreachable block (ram,0x06b70698) */
/* WARNING: Removing unreachable block (ram,0x06b70688) */
/* WARNING: Removing unreachable block (ram,0x06b706a4) */

void Merger_MergeBoard_Systems_ItemUnboxingSystem__TryGetBoxedEntity(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_078311d0;
  if ((bRam0000000007e2a6e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078311d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078311e0);
    func_0x03280a18(PTR_DAT_078311e8);
    func_0x03280a18(PTR_DAT_078311f0);
    func_0x03280a18(PTR_DAT_078311f8);
    func_0x03280a18(PTR_DAT_07831200);
    func_0x03280a18(PTR_DAT_078311d0);
    bRam0000000007e2a6e0 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6AF00; Merger.MergeBoard.Systems.InteractionCostSystem.ConsumeItems; status ok */


/* WARNING: Possible PIC construction at 0x06b6afc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6afc4) */
/* WARNING: Removing unreachable block (ram,0x06b6afc8) */
/* WARNING: Removing unreachable block (ram,0x06b6afe8) */
/* WARNING: Removing unreachable block (ram,0x06b6aff8) */
/* WARNING: Removing unreachable block (ram,0x06b6b054) */
/* WARNING: Removing unreachable block (ram,0x06b6b06c) */
/* WARNING: Removing unreachable block (ram,0x06b6b10c) */
/* WARNING: Removing unreachable block (ram,0x06b6b16c) */
/* WARNING: Removing unreachable block (ram,0x06b6b13c) */
/* WARNING: Removing unreachable block (ram,0x06b6b154) */

void Merger_MergeBoard_Systems_InteractionCostSystem__ConsumeItems(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07830ee0;
  if ((bRam0000000007e2a6c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830ee8);
    func_0x03280a18(PTR_DAT_07830ef0);
    func_0x03280a18(PTR_DAT_077c1d40);
    func_0x03280a18(PTR_DAT_07830ef8);
    func_0x03280a18(PTR_DAT_07830f00);
    func_0x03280a18(PTR_DAT_07830f08);
    func_0x03280a18(PTR_DAT_07830ee0);
    bRam0000000007e2a6c2 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


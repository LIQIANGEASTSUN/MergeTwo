/* Ghidra 12.1.2 native pseudocode; RVA 0x6A71B54; Merger.MergeBoard.Systems.MoveSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b71c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b71c4c) */
/* WARNING: Removing unreachable block (ram,0x06b71c50) */
/* WARNING: Removing unreachable block (ram,0x06b71c58) */
/* WARNING: Removing unreachable block (ram,0x06b71c74) */
/* WARNING: Removing unreachable block (ram,0x06b71d54) */
/* WARNING: Removing unreachable block (ram,0x06b71d5c) */
/* WARNING: Removing unreachable block (ram,0x06b71d64) */
/* WARNING: Removing unreachable block (ram,0x06b71d88) */
/* WARNING: Removing unreachable block (ram,0x06b71dd0) */
/* WARNING: Removing unreachable block (ram,0x06b71de8) */
/* WARNING: Removing unreachable block (ram,0x06b71e20) */
/* WARNING: Removing unreachable block (ram,0x06b71df4) */
/* WARNING: Removing unreachable block (ram,0x06b71e0c) */

void Merger_MergeBoard_Systems_MoveSystem__Tick(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_078312c8;
  if ((bRam0000000007e2a6e9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078312d0);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_07830708);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831098);
    func_0x03280a18(PTR_DAT_078312d8);
    func_0x03280a18(PTR_DAT_078310a8);
    func_0x03280a18(PTR_DAT_078310b0);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_078312e0);
    func_0x03280a18(PTR_DAT_078310b8);
    func_0x03280a18(PTR_DAT_078312e8);
    func_0x03280a18(PTR_DAT_078312f0);
    func_0x03280a18(PTR_DAT_078312c8);
    bRam0000000007e2a6e9 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


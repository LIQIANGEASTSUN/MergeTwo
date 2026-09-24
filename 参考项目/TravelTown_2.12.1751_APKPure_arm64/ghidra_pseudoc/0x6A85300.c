/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85300; Merger.MergeBoard.Logic.State.Updaters.FeedingCombinationComponentStateUpdater.UpdateFromState; status ok */


/* WARNING: Possible PIC construction at 0x06b853d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b85444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b853d8) */
/* WARNING: Removing unreachable block (ram,0x06b853e0) */
/* WARNING: Removing unreachable block (ram,0x06b85448) */
/* WARNING: Removing unreachable block (ram,0x06b854d8) */
/* WARNING: Removing unreachable block (ram,0x06b8544c) */
/* WARNING: Removing unreachable block (ram,0x06b854dc) */
/* WARNING: Removing unreachable block (ram,0x06b854e0) */
/* WARNING: Removing unreachable block (ram,0x06b854ec) */
/* WARNING: Removing unreachable block (ram,0x06b854f8) */
/* WARNING: Removing unreachable block (ram,0x06b85520) */
/* WARNING: Removing unreachable block (ram,0x06b85528) */
/* WARNING: Removing unreachable block (ram,0x06b85534) */
/* WARNING: Removing unreachable block (ram,0x06b8554c) */
/* WARNING: Removing unreachable block (ram,0x06b85554) */
/* WARNING: Removing unreachable block (ram,0x06b85464) */
/* WARNING: Removing unreachable block (ram,0x06b85490) */
/* WARNING: Removing unreachable block (ram,0x06b85474) */
/* WARNING: Removing unreachable block (ram,0x06b8540c) */
/* WARNING: Removing unreachable block (ram,0x06b854ac) */
/* WARNING: Removing unreachable block (ram,0x06b8541c) */

void Merger_MergeBoard_Logic_State_Updaters_FeedingCombinationComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000007e2a78c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6528);
    func_0x03280a18(PTR_DAT_077e6530);
    func_0x03280a18(PTR_DAT_077e6538);
    func_0x03280a18(PTR_DAT_07831c90);
    func_0x03280a18(PTR_DAT_07830da0);
    func_0x03280a18(PTR_DAT_077e6548);
    func_0x03280a18(PTR_DAT_07831c98);
    func_0x03280a18(PTR_DAT_07831ca0);
    bRam0000000007e2a78c = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x98) != 0)) {
    uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831ca0);
    func_0x04143c38(uVar4,*(undefined8 *)PTR_DAT_07831c98);
    *param_2 = uVar4;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)param_2 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)param_2 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}


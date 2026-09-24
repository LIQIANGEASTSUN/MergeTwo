/* Ghidra 12.1.2 native pseudocode; RVA 0x6A85C54; Merger.MergeBoard.Logic.State.Updaters.SpawnerComponentStateUpdater.UpdateFromState; status ok */


void Merger_MergeBoard_Logic_State_Updaters_SpawnerComponentStateUpdater__UpdateFromState
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000007e2a795 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782d28);
    bRam0000000007e2a795 = 1;
  }
  puVar7 = PTR_DAT_07782d28;
  if ((param_3 != 0) && (lVar9 = *(long *)(param_3 + 0x70), lVar9 != 0)) {
    iVar2 = *(int *)(lVar9 + 0x48);
    iVar3 = *(int *)(lVar9 + 0x3c);
    uVar10 = param_2[2];
    *(int *)(param_2 + 1) = iVar2;
    uVar4 = *(undefined4 *)(lVar9 + 0x4c);
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar7);
    func_0x060e89c8(uVar8,uVar10,iVar3 + iVar2,uVar4,0);
    *param_2 = uVar8;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)param_2 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)param_2 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    return;
  }
  return;
}


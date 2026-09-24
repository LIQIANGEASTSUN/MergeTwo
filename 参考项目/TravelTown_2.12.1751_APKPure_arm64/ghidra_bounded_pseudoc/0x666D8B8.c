/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666D8B8; bound 248 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x0676d948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676d964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676d980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d968) */
/* WARNING: Removing unreachable block (ram,0x0676d94c) */
/* WARNING: Removing unreachable block (ram,0x0676d984) */

void MergeEngine_ECS_Systems_Board_MergeSystem__InitializeSystem(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_078080b0;
  if ((bRam0000000007e2810d & 1) == 0) {
    func_0x03280a18(PTR_DAT_078080b8);
    func_0x03280a18(PTR_DAT_078080c8);
    func_0x03280a18(PTR_DAT_078080b0);
    func_0x03280a18(PTR_DAT_078080c0);
    bRam0000000007e2810d = 1;
  }
  uVar5 = func_0x03eb6c18(param_1,*(undefined8 *)puVar4);
  puVar6 = (undefined8 *)(param_1 + 0x88);
  *puVar6 = uVar5;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


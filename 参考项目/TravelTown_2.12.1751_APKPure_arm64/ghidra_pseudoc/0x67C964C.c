/* Ghidra 12.1.2 native pseudocode; RVA 0x67C964C; Merger.Services.Backend.Sync.Implementations.SyncBoardService.CreateSyncPayload; status ok */


/* WARNING: Possible PIC construction at 0x068c96a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068c9700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068c96a4) */
/* WARNING: Removing unreachable block (ram,0x068c96a8) */
/* WARNING: Removing unreachable block (ram,0x068c96bc) */
/* WARNING: Removing unreachable block (ram,0x068c9730) */
/* WARNING: Removing unreachable block (ram,0x068c96dc) */
/* WARNING: Removing unreachable block (ram,0x068c9708) */
/* WARNING: Removing unreachable block (ram,0x068c96f0) */
/* WARNING: Removing unreachable block (ram,0x068c9704) */
/* WARNING: Removing unreachable block (ram,0x068c971c) */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__CreateSyncPayload(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_07812308;
  if ((bRam0000000007e28f99 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07812310);
    func_0x03280a18(PTR_DAT_07812308);
    bRam0000000007e28f99 = 1;
  }
  lVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_07812320;
  puVar4 = PTR_DAT_07812318;
  if ((bRam0000000007e28fb3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07812320);
    func_0x03280a18(PTR_DAT_07812318);
    bRam0000000007e28fb3 = 1;
  }
  func_0x057da5fc(lVar6,0);
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04143c38(uVar7,*(undefined8 *)puVar5);
  puVar8 = (undefined8 *)(lVar6 + 0x10);
  *puVar8 = uVar7;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


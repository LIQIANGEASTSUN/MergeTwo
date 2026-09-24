/* Ghidra 12.1.2 native pseudocode; RVA 0x67C97BC; Merger.Services.Backend.Sync.Implementations.SyncBoardService.ConstructMainBoard; status ok */


/* WARNING: Possible PIC construction at 0x068c9828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068c9a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068c9a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068c9ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068c9a98) */
/* WARNING: Removing unreachable block (ram,0x068c9a74) */
/* WARNING: Removing unreachable block (ram,0x068c982c) */
/* WARNING: Removing unreachable block (ram,0x068c9830) */
/* WARNING: Removing unreachable block (ram,0x068c9834) */
/* WARNING: Removing unreachable block (ram,0x068c9848) */
/* WARNING: Removing unreachable block (ram,0x068c9874) */
/* WARNING: Removing unreachable block (ram,0x068c98cc) */
/* WARNING: Removing unreachable block (ram,0x068c98ec) */
/* WARNING: Removing unreachable block (ram,0x068c9900) */
/* WARNING: Removing unreachable block (ram,0x068c9970) */
/* WARNING: Removing unreachable block (ram,0x068c9904) */
/* WARNING: Removing unreachable block (ram,0x068c991c) */
/* WARNING: Removing unreachable block (ram,0x068c9924) */
/* WARNING: Removing unreachable block (ram,0x068c994c) */
/* WARNING: Removing unreachable block (ram,0x068c9930) */
/* WARNING: Removing unreachable block (ram,0x068c993c) */
/* WARNING: Removing unreachable block (ram,0x068c9958) */
/* WARNING: Removing unreachable block (ram,0x068c98a0) */
/* WARNING: Removing unreachable block (ram,0x068c9abc) */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__ConstructMainBoard(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_07812328;
  if ((bRam0000000007e28f9b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07812328);
    func_0x03280a18(PTR_DAT_07812330);
    func_0x03280a18(PTR_DAT_07812338);
    func_0x03280a18(PTR_DAT_07812340);
    bRam0000000007e28f9b = 1;
  }
  lVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_07812350;
  puVar4 = PTR_DAT_07812348;
  if ((bRam0000000007e28fb4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07812370);
    func_0x03280a18(PTR_DAT_07812380);
    func_0x03280a18(PTR_DAT_07812350);
    func_0x03280a18(PTR_DAT_07812360);
    func_0x03280a18(PTR_DAT_07812378);
    func_0x03280a18(PTR_DAT_07812358);
    func_0x03280a18(PTR_DAT_07812368);
    func_0x03280a18(PTR_DAT_07812348);
    bRam0000000007e28fb4 = 1;
  }
  func_0x057da5fc(lVar6,0);
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04143c38(uVar7,*(undefined8 *)puVar5);
  puVar8 = (undefined8 *)(lVar6 + 0x20);
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


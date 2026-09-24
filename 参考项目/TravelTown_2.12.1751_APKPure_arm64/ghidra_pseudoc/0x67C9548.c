/* Ghidra 12.1.2 native pseudocode; RVA 0x67C9548; Merger.Services.Backend.Sync.Implementations.SyncBoardService.InitializeService; status ok */


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

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__InitializeService(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  
  puVar7 = PTR_DAT_07812300;
  if ((bRam0000000007e28f98 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07812300);
    func_0x03280a18(PTR_DAT_0777b210);
    bRam0000000007e28f98 = 1;
  }
  func_0x069c97bc(param_1,0);
  plVar2 = *(long **)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06b1fce0(uVar9,uVar11,uVar3,uVar4,uVar15,0);
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
    puVar7 = PTR_DAT_07812308;
    if ((bRam0000000007e28f99 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07812310);
      func_0x03280a18(PTR_DAT_07812308);
      bRam0000000007e28f99 = 1;
    }
    lVar12 = func_0x03280ca0(*(undefined8 *)puVar7);
    puVar8 = PTR_DAT_07812320;
    puVar7 = PTR_DAT_07812318;
    if ((bRam0000000007e28fb3 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07812320);
      func_0x03280a18(PTR_DAT_07812318);
      bRam0000000007e28fb3 = 1;
    }
    func_0x057da5fc(lVar12,0);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar7);
    func_0x04143c38(uVar11,*(undefined8 *)puVar8);
    puVar10 = (undefined8 *)(lVar12 + 0x10);
    *puVar10 = uVar11;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    return;
  }
  lVar12 = *plVar2;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777b210) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
        goto LAB_068c9628;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)func_0x03256b10(plVar2,*(long *)PTR_DAT_0777b210,0xc);
LAB_068c9628:
                    /* WARNING: Could not recover jumptable at 0x068c9644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(plVar2,uVar9,puVar10[1]);
  return;
}


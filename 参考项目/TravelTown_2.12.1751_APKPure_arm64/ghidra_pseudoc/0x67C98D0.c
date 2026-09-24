/* Ghidra 12.1.2 native pseudocode; RVA 0x67C98D0; Merger.Services.Backend.Sync.Implementations.SyncBoardService.SendSyncRequest; status ok */


/* WARNING: Possible PIC construction at 0x068c9a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068c9a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068c9ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068c9a98) */
/* WARNING: Removing unreachable block (ram,0x068c9a74) */
/* WARNING: Removing unreachable block (ram,0x068c9abc) */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__SendSyncRequest
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((bRam0000000007e28f9a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07812238);
    bRam0000000007e28f9a = 1;
  }
  if (param_3 == (long *)0x0) {
    lVar8 = func_0x03280cac();
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
    func_0x057da5fc(lVar8,0);
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04143c38(uVar7,*(undefined8 *)puVar5);
    puVar6 = (undefined8 *)(lVar8 + 0x20);
    *puVar6 = uVar7;
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
  lVar8 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07812238) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_068c9958;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_07812238,0);
LAB_068c9958:
                    /* WARNING: Could not recover jumptable at 0x068c996c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(param_3,param_2,puVar6[1]);
  return;
}


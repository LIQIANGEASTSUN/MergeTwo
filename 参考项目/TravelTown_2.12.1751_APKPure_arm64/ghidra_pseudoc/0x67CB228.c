/* Ghidra 12.1.2 native pseudocode; RVA 0x67CB228; Merger.Services.Backend.Sync.Implementations.SyncBoardService.GetCoreFreeBubbleBurst; status ok */


undefined4
Merger_Services_Backend_Sync_Implementations_SyncBoardService__GetCoreFreeBubbleBurst(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000007e28f9f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07800478);
    bRam0000000007e28f9f = 1;
  }
  plVar7 = *(long **)(param_1 + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07800478) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_068cb2b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07800478,2);
LAB_068cb2b4:
    lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (lVar4 != 0) {
      return *(undefined4 *)(lVar4 + 0x10);
    }
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_0774e598;
  if ((bRam0000000007e28fa0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_078124e8);
    bRam0000000007e28fa0 = 1;
  }
  puVar2 = PTR_DAT_078124e8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06faa078(*(undefined8 *)puVar2,0);
  return 0;
}


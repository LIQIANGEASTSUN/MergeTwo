/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD0E68; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.SaveData; status ok */


undefined1  [16]
Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__SaveData
          (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  if ((bRam0000000007e2aa86 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07834190);
    auVar14 = func_0x03280a18(PTR_DAT_07774240);
    bRam0000000007e2aa86 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 == 0) {
    return auVar14;
  }
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    plVar1 = *(long **)(param_1 + 0x28);
    lVar12 = *(long *)PTR_DAT_07834190;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_06bd0f24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar7 = func_0x03256b10(plVar11);
LAB_06bd0f24:
    lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
    uVar4 = (**(code **)(lVar7 + 8))(plVar11,lVar10,lVar7);
    if (plVar1 != (long *)0x0) {
      lVar10 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07774240) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_06bd0fa4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar1,*(long *)PTR_DAT_07774240,7);
LAB_06bd0fa4:
                    /* WARNING: Could not recover jumptable at 0x06bd0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar14 = (*(code *)*puVar5)(plVar1,uVar6,uVar4,1,puVar5[1]);
      return auVar14;
    }
  }
  auVar13._0_8_ = func_0x03280cac();
  puVar3 = PTR_DAT_07759a18;
  puVar2 = PTR_DAT_07759a10;
  if ((bRam0000000007e2aab8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07759a18);
    func_0x03280a18(PTR_DAT_07759a10);
    bRam0000000007e2aab8 = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04119444(uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(auVar13._0_8_ + 0x18) = uVar6;
  func_0x032809c4((undefined8 *)(auVar13._0_8_ + 0x18),uVar6);
  auVar13._8_8_ = 0;
  return auVar13;
}


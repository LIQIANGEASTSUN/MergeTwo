/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD0D48; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.OnPowerBoostModeChanged; status ok */


undefined1  [16]
Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__OnPowerBoostModeChanged
          (long param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  ulong unaff_x20;
  long lVar13;
  undefined8 unaff_x21;
  long *plVar14;
  long unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  puVar4 = &stack0xffffffffffffffd0;
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000007e2aa84 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e2aa84 = 1;
  }
  lVar15 = *(long *)(param_1 + 0x30);
  if (lVar15 == 0) {
    auVar17 = Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData(param_1);
    lVar15 = *(long *)(param_1 + 0x30);
    if (lVar15 == 0) {
      return auVar17;
    }
  }
  puVar2 = PTR_DAT_0774ee08;
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 == (long *)0x0) {
    unaff_x30 = 0x6bd0e68;
    auVar17 = func_0x03280cac();
    uVar12 = auVar17._8_8_;
    lVar8 = auVar17._0_8_;
    unaff_x21 = 0;
  }
  else {
    lVar8 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06bd0e08;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07833e20,1);
LAB_06bd0e08:
    uVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar2);
    }
    uVar5 = func_0x05797438(param_2,uVar5,0);
    *(undefined4 *)(lVar15 + 0x10) = uVar5;
    puVar4 = (undefined1 *)register0x00000008;
    lVar8 = param_1;
    uVar12 = extraout_x1;
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    lVar15 = unaff_x22;
  }
  auVar17._8_8_ = uVar12;
  auVar17._0_8_ = lVar8;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x30;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x23;
  *(long *)(puVar4 + -0x20) = lVar15;
  *(undefined8 *)(puVar4 + -0x18) = unaff_x21;
  *(ulong *)(puVar4 + -0x10) = param_2;
  *(long *)(puVar4 + -8) = param_1;
  uVar12 = 0x7e2a000;
  if ((bRam0000000007e2aa86 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07834190);
    auVar17 = func_0x03280a18(PTR_DAT_07774240);
    bRam0000000007e2aa86 = 1;
  }
  lVar15 = *(long *)(lVar8 + 0x30);
  if (lVar15 == 0) {
    return auVar17;
  }
  plVar14 = *(long **)(lVar8 + 0x18);
  lVar13 = lVar8;
  if (plVar14 != (long *)0x0) {
    lVar9 = *plVar14;
    lVar13 = *(long *)(lVar8 + 0x20);
    plVar1 = *(long **)(lVar8 + 0x28);
    lVar8 = *(long *)PTR_DAT_07834190;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_06bd0f24;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = func_0x03256b10(plVar14);
LAB_06bd0f24:
    lVar8 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar8);
    uVar7 = (**(code **)(lVar8 + 8))(plVar14,lVar15,lVar8);
    uVar12 = 0;
    if (plVar1 != (long *)0x0) {
      lVar15 = *plVar1;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07774240) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar11 + 7) * 0x10 + 0x138);
            goto LAB_06bd0fa4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar1,*(long *)PTR_DAT_07774240,7);
LAB_06bd0fa4:
                    /* WARNING: Could not recover jumptable at 0x06bd0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar17 = (*(code *)*puVar6)(plVar1,lVar13,uVar7,1,puVar6[1]);
      return auVar17;
    }
  }
  auVar16._0_8_ = func_0x03280cac();
  puVar3 = PTR_DAT_07759a18;
  puVar2 = PTR_DAT_07759a10;
  *(undefined8 *)(puVar4 + -0x60) = 0x6bd0fcc;
  *(long **)(puVar4 + -0x50) = plVar14;
  *(long *)(puVar4 + -0x48) = lVar15;
  *(long *)(puVar4 + -0x40) = lVar13;
  *(undefined8 *)(puVar4 + -0x38) = uVar12;
  if ((bRam0000000007e2aab8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07759a18);
    func_0x03280a18(PTR_DAT_07759a10);
    bRam0000000007e2aab8 = 1;
  }
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04119444(uVar12,*(undefined8 *)puVar3);
  *(undefined8 *)(auVar16._0_8_ + 0x18) = uVar12;
  func_0x032809c4((undefined8 *)(auVar16._0_8_ + 0x18),uVar12);
  auVar16._8_8_ = 0;
  return auVar16;
}


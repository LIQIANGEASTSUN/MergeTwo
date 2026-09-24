/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD0C2C; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.System.IDisposable.Dispose; status ok */


ulong Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__System_IDisposable_Dispose
                (ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  code **ppcVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulong *puVar18;
  long *plVar19;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined *puVar20;
  long lVar21;
  undefined8 unaff_x23;
  code *pcVar22;
  undefined1 auVar23 [16];
  code *pcStack_60;
  
  if ((bRam0000000007e2aa83 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0777d4a8);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07834188);
    bRam0000000007e2aa83 = 1;
  }
  puVar2 = PTR_DAT_07834188;
  puVar20 = PTR_DAT_07773028;
  plVar19 = *(long **)(param_1 + 0x10);
  if (plVar19 != (long *)0x0) {
    lVar14 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06bd0cec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_07833e20,0);
LAB_06bd0cec:
    lVar14 = (*(code *)*puVar10)(plVar19,puVar10[1]);
    unaff_x21 = func_0x03280ca0(*(undefined8 *)puVar20);
    func_0x05420abc(unaff_x21,param_1,*(undefined8 *)puVar2,0);
    unaff_x22 = puVar20;
    if (lVar14 != 0) {
      lVar13 = *(long *)PTR_DAT_0777d4a8;
      pcVar22 = *(code **)(lVar14 + 0x10);
      do {
        lVar6 = func_0x057ddd18(pcVar22,unaff_x21,0);
        lVar21 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
        }
        if (lVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = func_0x03280b90(lVar6,lVar21);
          if (lVar7 == 0) {
            auVar23 = func_0x03281048(lVar6,lVar21);
            pcStack_60 = pcVar22;
            if ((bRam0000000007e1aec7 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aec7 = 1;
            }
            puVar20 = PTR_DAT_0774e758;
            puVar18 = (ulong *)(auVar23._0_8_ + 0x18);
            uVar15 = *puVar18;
            while ((plVar19 = (long *)func_0x057ddb20(uVar15,auVar23._8_8_,0),
                   plVar19 == (long *)0x0 || (*plVar19 == *(long *)puVar20))) {
              uVar9 = func_0x032dd140(puVar18,plVar19,uVar15);
              bVar4 = uVar15 == uVar9;
              uVar15 = uVar9;
              if (bVar4) {
                return uVar9;
              }
            }
            auVar23 = func_0x03281048(plVar19);
            if ((bRam0000000007e1aec8 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aec8 = 1;
            }
            puVar20 = PTR_DAT_0774e758;
            puVar18 = (ulong *)(auVar23._0_8_ + 0x18);
            uVar15 = *puVar18;
            while ((plVar19 = (long *)func_0x057ddd18(uVar15,auVar23._8_8_,0),
                   plVar19 == (long *)0x0 || (*plVar19 == *(long *)puVar20))) {
              uVar9 = func_0x032dd140(puVar18,plVar19,uVar15);
              bVar4 = uVar15 == uVar9;
              uVar15 = uVar9;
              if (bVar4) {
                return uVar9;
              }
            }
            lVar14 = func_0x03281048(plVar19);
            return (ulong)*(uint *)(lVar14 + 0x20);
          }
        }
        pcVar8 = (code *)func_0x032dd140((ulong *)(lVar14 + 0x10),lVar7,pcVar22);
        bVar4 = pcVar22 == pcVar8;
        pcVar22 = pcVar8;
        if (bVar4) {
          return (ulong)pcVar8;
        }
      } while( true );
    }
  }
  auVar23 = func_0x03280cac();
  uVar15 = auVar23._0_8_;
  ppcVar3 = &pcStack_60;
  pcStack_60 = 
  Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__OnPowerBoostModeChanged;
  uVar9 = auVar23._8_8_ & 0xffffffff;
  if ((bRam0000000007e2aa84 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e2aa84 = 1;
  }
  puVar20 = *(undefined **)(uVar15 + 0x30);
  if (puVar20 == (undefined *)0x0) {
    uVar11 = Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData(uVar15);
    puVar20 = *(undefined **)(uVar15 + 0x30);
    if (puVar20 == (undefined *)0x0) {
      return uVar11;
    }
  }
  puVar2 = PTR_DAT_0774ee08;
  plVar19 = *(long **)(uVar15 + 0x10);
  if (plVar19 == (long *)0x0) {
    pcVar22 = Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__SaveData;
    uVar11 = func_0x03280cac();
    unaff_x21 = 0;
  }
  else {
    lVar14 = *plVar19;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_06bd0e08;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_07833e20,1);
LAB_06bd0e08:
    uVar5 = (*(code *)*puVar10)(plVar19,puVar10[1]);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar2);
    }
    uVar5 = func_0x05797438(uVar9,uVar5,0);
    *(undefined4 *)(puVar20 + 0x10) = uVar5;
    ppcVar3 = (code **)&stack0xffffffffffffffd0;
    uVar11 = uVar15;
    uVar15 = param_1;
    uVar9 = 0;
    puVar20 = unaff_x22;
    pcVar22 = pcStack_60;
  }
  *(code **)((long)ppcVar3 + -0x30) = pcVar22;
  *(undefined8 *)((long)ppcVar3 + -0x28) = unaff_x23;
  *(undefined **)((long)ppcVar3 + -0x20) = puVar20;
  *(undefined8 *)((long)ppcVar3 + -0x18) = unaff_x21;
  *(ulong *)((long)ppcVar3 + -0x10) = uVar9;
  *(ulong *)((long)ppcVar3 + -8) = uVar15;
  uVar17 = 0x7e2a000;
  uVar15 = uVar11;
  if ((bRam0000000007e2aa86 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07834190);
    uVar15 = func_0x03280a18(PTR_DAT_07774240);
    bRam0000000007e2aa86 = 1;
  }
  lVar14 = *(long *)(uVar11 + 0x30);
  if (lVar14 == 0) {
    return uVar15;
  }
  plVar19 = *(long **)(uVar11 + 0x18);
  uVar15 = uVar11;
  if (plVar19 != (long *)0x0) {
    lVar13 = *plVar19;
    uVar15 = *(ulong *)(uVar11 + 0x20);
    plVar1 = *(long **)(uVar11 + 0x28);
    lVar6 = *(long *)PTR_DAT_07834190;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar13 = lVar13 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_06bd0f24;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    lVar13 = func_0x03256b10(plVar19);
LAB_06bd0f24:
    lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar6);
    uVar12 = (**(code **)(lVar13 + 8))(plVar19,lVar14,lVar13);
    uVar17 = 0;
    if (plVar1 != (long *)0x0) {
      lVar14 = *plVar1;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07774240) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_06bd0fa4;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar1,*(long *)PTR_DAT_07774240,7);
LAB_06bd0fa4:
                    /* WARNING: Could not recover jumptable at 0x06bd0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*(code *)*puVar10)(plVar1,uVar15,uVar12,1,puVar10[1]);
      return uVar15;
    }
  }
  uVar9 = func_0x03280cac();
  puVar2 = PTR_DAT_07759a18;
  puVar20 = PTR_DAT_07759a10;
  *(undefined8 *)((long)ppcVar3 + -0x60) = 0x6bd0fcc;
  *(long **)((long)ppcVar3 + -0x50) = plVar19;
  *(long *)((long)ppcVar3 + -0x48) = lVar14;
  *(ulong *)((long)ppcVar3 + -0x40) = uVar15;
  *(undefined8 *)((long)ppcVar3 + -0x38) = uVar17;
  if ((bRam0000000007e2aab8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07759a18);
    func_0x03280a18(PTR_DAT_07759a10);
    bRam0000000007e2aab8 = 1;
  }
  uVar17 = func_0x03280ca0(*(undefined8 *)puVar20);
  func_0x04119444(uVar17,*(undefined8 *)puVar2);
  *(undefined8 *)(uVar9 + 0x18) = uVar17;
  func_0x032809c4((undefined8 *)(uVar9 + 0x18),uVar17);
  return uVar9;
}


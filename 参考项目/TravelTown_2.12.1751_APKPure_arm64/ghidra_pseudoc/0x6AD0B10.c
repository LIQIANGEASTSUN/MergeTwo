/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD0B10; Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService.SubscribeToStateChanges; status ok */


undefined *
Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__SubscribeToStateChanges
          (long param_1)

{
  undefined8 **ppuVar1;
  code **ppcVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x30;
  code *pcVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  code *pcStack_90;
  undefined8 auStack_60 [2];
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  if ((bRam0000000007e2aa82 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0777afa8);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07834188);
    bRam0000000007e2aa82 = 1;
  }
  puVar7 = PTR_DAT_07834188;
  puVar11 = PTR_DAT_07773028;
  plVar20 = *(long **)(param_1 + 0x10);
  if (plVar20 != (long *)0x0) {
    lVar15 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06bd0bd0;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07833e20,0);
LAB_06bd0bd0:
    lVar15 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    unaff_x21 = func_0x03280ca0(*(undefined8 *)puVar11);
    func_0x05420abc(unaff_x21,param_1,*(undefined8 *)puVar7,0);
    unaff_x22 = puVar11;
    if (lVar15 != 0) {
      lVar14 = *(long *)PTR_DAT_0777afa8;
      ppuVar1 = &puStack_40;
      puVar10 = (undefined8 *)(lVar15 + 0x10);
      puVar11 = (undefined *)*puVar10;
      puStack_40 = unaff_x30;
      do {
        lVar15 = 0;
        unaff_x24 = func_0x057ddb20(puVar11,unaff_x21);
        unaff_x23 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(unaff_x23 + 0x135) & 1) == 0) {
          unaff_x23 = func_0x0325681c(unaff_x23);
        }
        if (unaff_x24 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = func_0x03280b90(unaff_x24,unaff_x23);
          if (lVar5 == 0) {
            auVar22 = func_0x03281048(unaff_x24,unaff_x23);
            uVar19 = 0x4d0e5dc;
            goto SUB_04d0e5dc;
          }
        }
        puVar7 = (undefined *)func_0x032dd140(puVar10,lVar5,puVar11);
        bVar3 = puVar11 == puVar7;
        puVar11 = puVar7;
        if (bVar3) {
          return puVar7;
        }
      } while( true );
    }
  }
  puVar11 = (undefined *)func_0x03280cac();
  auStack_60[0] = 0x6bd0c2c;
  puStack_50 = unaff_x22;
  uStack_48 = unaff_x21;
  puStack_40 = (undefined8 *)0x0;
  lStack_38 = param_1;
  if ((bRam0000000007e2aa83 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0777d4a8);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07834188);
    bRam0000000007e2aa83 = 1;
  }
  puVar9 = PTR_DAT_07834188;
  puVar7 = PTR_DAT_07773028;
  plVar20 = *(long **)(puVar11 + 0x10);
  if (plVar20 != (long *)0x0) {
    lVar15 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06bd0cec;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07833e20,0);
LAB_06bd0cec:
    lVar15 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    unaff_x21 = func_0x03280ca0(*(undefined8 *)puVar7);
    auVar22._8_8_ = unaff_x21;
    auVar22._0_8_ = lVar15;
    func_0x05420abc(unaff_x21,puVar11,*(undefined8 *)puVar9,0);
    unaff_x22 = puVar7;
    if (lVar15 != 0) {
      lVar15 = *(long *)PTR_DAT_0777d4a8;
      ppuVar1 = (undefined8 **)&stack0xffffffffffffffd0;
      lVar14 = lStack_38;
      puVar10 = puStack_40;
      unaff_x21 = uStack_48;
      puVar11 = puStack_50;
      uVar19 = auStack_60[0];
SUB_04d0e5dc:
      *(undefined8 *)((long)ppuVar1 + -0x40) = uVar19;
      *(long *)((long)ppuVar1 + -0x30) = unaff_x24;
      *(long *)((long)ppuVar1 + -0x28) = unaff_x23;
      *(undefined **)((long)ppuVar1 + -0x20) = puVar11;
      *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x21;
      *(undefined8 **)((long)ppuVar1 + -0x10) = puVar10;
      *(long *)((long)ppuVar1 + -8) = lVar14;
      plVar20 = (long *)(auVar22._0_8_ + 0x10);
      puVar11 = (undefined *)*plVar20;
      do {
        lVar14 = func_0x057ddd18(puVar11,auVar22._8_8_,0);
        lVar5 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = func_0x0325681c(lVar5);
        }
        if (lVar14 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = func_0x03280b90(lVar14,lVar5);
          if (lVar6 == 0) {
            auVar23 = func_0x03281048(lVar14,lVar5);
            *(undefined8 *)((long)ppuVar1 + -0x70) = 0x4d0e688;
            *(undefined **)((long)ppuVar1 + -0x60) = puVar11;
            *(long *)((long)ppuVar1 + -0x58) = auVar22._8_8_;
            *(long **)((long)ppuVar1 + -0x50) = plVar20;
            *(long *)((long)ppuVar1 + -0x48) = lVar15;
            if ((bRam0000000007e1aec7 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aec7 = 1;
            }
            puVar11 = PTR_DAT_0774e758;
            plVar20 = (long *)(auVar23._0_8_ + 0x18);
            puVar7 = (undefined *)*plVar20;
            while ((plVar8 = (long *)func_0x057ddb20(puVar7,auVar23._8_8_,0), plVar8 == (long *)0x0
                   || (*plVar8 == *(long *)puVar11))) {
              puVar9 = (undefined *)func_0x032dd140(plVar20,plVar8,puVar7);
              bVar3 = puVar7 == puVar9;
              puVar7 = puVar9;
              if (bVar3) {
                return puVar9;
              }
            }
            auVar22 = func_0x03281048(plVar8);
            *(undefined8 *)((long)ppuVar1 + -0xa0) = 0x4d0e724;
            *(undefined **)((long)ppuVar1 + -0x90) = puVar11;
            *(undefined **)((long)ppuVar1 + -0x88) = puVar7;
            *(long **)((long)ppuVar1 + -0x80) = plVar20;
            *(long *)((long)ppuVar1 + -0x78) = auVar23._8_8_;
            if ((bRam0000000007e1aec8 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e758);
              bRam0000000007e1aec8 = 1;
            }
            puVar11 = PTR_DAT_0774e758;
            plVar20 = (long *)(auVar22._0_8_ + 0x18);
            puVar7 = (undefined *)*plVar20;
            while ((plVar8 = (long *)func_0x057ddd18(puVar7,auVar22._8_8_,0), plVar8 == (long *)0x0
                   || (*plVar8 == *(long *)puVar11))) {
              puVar9 = (undefined *)func_0x032dd140(plVar20,plVar8,puVar7);
              bVar3 = puVar7 == puVar9;
              puVar7 = puVar9;
              if (bVar3) {
                return puVar9;
              }
            }
            lVar15 = func_0x03281048(plVar8);
            return (undefined *)(ulong)*(uint *)(lVar15 + 0x20);
          }
        }
        puVar7 = (undefined *)func_0x032dd140(plVar20,lVar6,puVar11);
        bVar3 = puVar11 == puVar7;
        puVar11 = puVar7;
        if (bVar3) {
          return puVar7;
        }
      } while( true );
    }
  }
  auVar22 = func_0x03280cac();
  puVar7 = auVar22._0_8_;
  ppcVar2 = &pcStack_90;
  pcStack_90 = 
  Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__OnPowerBoostModeChanged;
  uVar16 = auVar22._8_8_ & 0xffffffff;
  if ((bRam0000000007e2aa84 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e2aa84 = 1;
  }
  puVar9 = *(undefined **)(puVar7 + 0x30);
  if (puVar9 == (undefined *)0x0) {
    puVar12 = (undefined *)
              Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__LoadData(puVar7);
    puVar9 = *(undefined **)(puVar7 + 0x30);
    if (puVar9 == (undefined *)0x0) {
      return puVar12;
    }
  }
  puVar12 = PTR_DAT_0774ee08;
  plVar20 = *(long **)(puVar7 + 0x10);
  if (plVar20 == (long *)0x0) {
    pcVar21 = Merger_MergeBoard_PowerBoost_Services_PowerBoostPersistanceService__SaveData;
    puVar12 = (undefined *)func_0x03280cac();
    unaff_x21 = 0;
  }
  else {
    lVar15 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_06bd0e08;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07833e20,1);
LAB_06bd0e08:
    uVar4 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar12);
    }
    uVar4 = func_0x05797438(uVar16,uVar4,0);
    *(undefined4 *)(puVar9 + 0x10) = uVar4;
    ppcVar2 = (code **)auStack_60;
    puVar12 = puVar7;
    puVar7 = puVar11;
    uVar16 = 0;
    puVar9 = unaff_x22;
    pcVar21 = pcStack_90;
  }
  *(code **)((long)ppcVar2 + -0x30) = pcVar21;
  *(long *)((long)ppcVar2 + -0x28) = unaff_x23;
  *(undefined **)((long)ppcVar2 + -0x20) = puVar9;
  *(undefined8 *)((long)ppcVar2 + -0x18) = unaff_x21;
  *(ulong *)((long)ppcVar2 + -0x10) = uVar16;
  *(undefined **)((long)ppcVar2 + -8) = puVar7;
  uVar19 = 0x7e2a000;
  puVar11 = puVar12;
  if ((bRam0000000007e2aa86 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07834190);
    puVar11 = (undefined *)func_0x03280a18(PTR_DAT_07774240);
    bRam0000000007e2aa86 = 1;
  }
  lVar15 = *(long *)(puVar12 + 0x30);
  if (lVar15 == 0) {
    return puVar11;
  }
  plVar20 = *(long **)(puVar12 + 0x18);
  puVar11 = puVar12;
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    puVar11 = *(undefined **)(puVar12 + 0x20);
    plVar8 = *(long **)(puVar12 + 0x28);
    lVar5 = *(long *)PTR_DAT_07834190;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar14 = lVar14 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_06bd0f24;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    lVar14 = func_0x03256b10(plVar20);
LAB_06bd0f24:
    lVar14 = func_0x03280b88(*(undefined8 *)(lVar14 + 8),lVar5);
    uVar13 = (**(code **)(lVar14 + 8))(plVar20,lVar15,lVar14);
    uVar19 = 0;
    if (plVar8 != (long *)0x0) {
      lVar15 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07774240) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
            goto LAB_06bd0fa4;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07774240,7);
LAB_06bd0fa4:
                    /* WARNING: Could not recover jumptable at 0x06bd0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (undefined *)(*(code *)*puVar10)(plVar8,puVar11,uVar13,1,puVar10[1]);
      return puVar11;
    }
  }
  puVar12 = (undefined *)func_0x03280cac();
  puVar9 = PTR_DAT_07759a18;
  puVar7 = PTR_DAT_07759a10;
  *(undefined8 *)((long)ppcVar2 + -0x60) = 0x6bd0fcc;
  *(long **)((long)ppcVar2 + -0x50) = plVar20;
  *(long *)((long)ppcVar2 + -0x48) = lVar15;
  *(undefined **)((long)ppcVar2 + -0x40) = puVar11;
  *(undefined8 *)((long)ppcVar2 + -0x38) = uVar19;
  if ((bRam0000000007e2aab8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07759a18);
    func_0x03280a18(PTR_DAT_07759a10);
    bRam0000000007e2aab8 = 1;
  }
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x04119444(uVar19,*(undefined8 *)puVar9);
  *(undefined8 *)(puVar12 + 0x18) = uVar19;
  func_0x032809c4(puVar12 + 0x18,uVar19);
  return puVar12;
}


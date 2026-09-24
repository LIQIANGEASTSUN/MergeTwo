/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACF520; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.GetUnlockableBoosts; status ok */


long Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetUnlockableBoosts
               (long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 auStack_260 [2];
  undefined1 auStack_250 [16];
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [16];
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_30;
  long lStack_28;
  
  if ((bRam0000000007e2aa72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077e5590);
    func_0x03280a18(PTR_DAT_077a3990);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07759a18);
    func_0x03280a18(PTR_DAT_07759a10);
    func_0x03280a18(PTR_DAT_07834150);
    bRam0000000007e2aa72 = 1;
  }
  plVar17 = *(long **)(param_1 + 0x18);
  if (plVar17 == (long *)0x0) {
    lVar14 = func_0x03280cac();
    return *(long *)(lVar14 + 0x30);
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar6 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
        goto LAB_06bcf5f4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_07833e20,6);
LAB_06bcf5f4:
  uVar15 = (*(code *)*puVar6)(plVar17,puVar6[1]);
  if ((uVar15 & 1) == 0) {
    lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07759a10);
    func_0x04119444(lVar14,*(undefined8 *)PTR_DAT_07759a18);
    return lVar14;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a3990);
  lVar13 = 0;
  func_0x05353d24(uVar7,param_1,*(undefined8 *)PTR_DAT_07834150);
  lVar11 = *(long *)PTR_DAT_077e5590;
  lVar14 = func_0x03d86d00(uVar18,uVar7);
  lVar8 = *(long *)PTR_DAT_077c1cf8;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (lVar14 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    func_0x0411956c(lVar11,lVar14,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar11;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar19 = func_0x03280b7c(uVar7,lVar8);
  lVar9 = auVar19._8_8_;
  uStack_40 = 0x3d5fe5c;
  lStack_30 = lVar14;
  lStack_28 = lVar8;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0411bf8c(lVar14,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return lVar14;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar20 = func_0x03280b7c(uVar7,lVar9);
  lVar14 = auVar20._8_8_;
  uStack_60 = 0x3d5fed8;
  auStack_50 = auVar19;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x04132280(lVar8,auVar20._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar19 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar19._8_8_;
  uStack_80 = 0x3d5ff54;
  auStack_70 = auVar20;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x04135278(lVar8,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar20 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar20._8_8_;
  uStack_a0 = 0x3d5ffd0;
  auStack_90 = auVar19;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x04143d60(lVar8,auVar20._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar19 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar19._8_8_;
  uStack_c0 = 0x3d6004c;
  auStack_b0 = auVar20;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x0419ce74(lVar8,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar20 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar20._8_8_;
  uStack_e0 = 0x3d600c8;
  auStack_d0 = auVar19;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x041c2810(lVar8,auVar20._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar19 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar19._8_8_;
  uStack_100 = 0x3d60144;
  auStack_f0 = auVar20;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x041ddb58(lVar8,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar20 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar20._8_8_;
  uStack_120 = 0x3d601c0;
  auStack_110 = auVar19;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x041e617c(lVar8,auVar20._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar19 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar19._8_8_;
  uStack_140 = 0x3d6023c;
  auStack_130 = auVar20;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x041e8ba0(lVar8,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar20 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar20._8_8_;
  uStack_160 = 0x3d602b8;
  auStack_150 = auVar19;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 0x10))(lVar8,auVar20._0_8_);
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar19 = func_0x03280b7c(uVar7,lVar14);
  lVar14 = auVar19._8_8_;
  auStack_180[0] = 0x3d60338;
  auStack_170 = auVar20;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    func_0x0420cec8(lVar8,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar8;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar20 = func_0x03280b7c(uVar7,lVar14);
  uStack_1a0 = 0x3d603b4;
  lVar14 = lVar11;
  lStack_198 = unaff_x21;
  auStack_190 = auVar19;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  puVar5 = PTR_DAT_07779d10;
  if ((auVar20._0_8_ == 0) || (puVar5 = PTR_DAT_07779d18, auVar20._8_8_ == 0)) {
    uVar7 = func_0x03280a2c(puVar5);
    uVar7 = func_0x05ac7464(uVar7,0);
    auVar19 = func_0x03280b7c(uVar7,lVar11);
    uStack_1c0 = 0x3d60428;
    lVar8 = lVar14;
    lStack_1a8 = lVar11;
    if (*(long *)(lVar14 + 0x38) == 0) {
      auStack_1b8 = auVar20;
      func_0x03256878(lVar14);
      auVar20 = auStack_1b8;
    }
    puVar5 = PTR_DAT_07779d10;
    auStack_1b8 = auVar20;
    if ((auVar19._0_8_ != 0) && (puVar5 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
      lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      lVar11 = 0;
      puVar3 = &uStack_1a0;
      lVar14 = lStack_1a8;
      uVar7 = uStack_1c0;
      goto LAB_03d60730;
    }
    uVar7 = func_0x03280a2c(puVar5);
    uVar7 = func_0x05ac7464(uVar7,0);
    auVar20 = func_0x03280b7c(uVar7,lVar14);
    uStack_1e0 = 0x3d6049c;
    lVar11 = lVar8;
    lStack_1c8 = lVar14;
    if (*(long *)(lVar8 + 0x38) == 0) {
      auStack_1d8 = auVar19;
      func_0x03256878(lVar8);
      auVar19 = auStack_1d8;
    }
    puVar5 = PTR_DAT_07779d10;
    auStack_1d8 = auVar19;
    if ((auVar20._0_8_ == 0) || (puVar5 = PTR_DAT_07779d18, auVar20._8_8_ == 0)) {
      uVar7 = func_0x03280a2c(puVar5);
      uVar7 = func_0x05ac7464(uVar7,0);
      auVar19 = func_0x03280b7c(uVar7,lVar8);
      uStack_200 = 0x3d60510;
      lVar9 = lVar11;
      lStack_1e8 = lVar8;
      auStack_1f8 = auVar20;
      if (*(long *)(lVar11 + 0x38) == 0) {
        func_0x03256878(lVar11);
      }
      puVar5 = PTR_DAT_07779d10;
      if ((auVar19._0_8_ != 0) && (puVar5 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 8))
                           (auVar19._0_8_,auVar19._8_8_,0);
        return lVar14;
      }
      uVar7 = func_0x03280a2c(puVar5);
      uVar7 = func_0x05ac7464(uVar7,0);
      auVar20 = func_0x03280b7c(uVar7,lVar11);
      uStack_230 = 0x3d60588;
      lVar8 = lVar9;
      lVar12 = lVar13;
      if (*(long *)(lVar13 + 0x38) == 0) {
        func_0x03256878(lVar13);
      }
      puVar5 = PTR_DAT_07779d10;
      if ((auVar20._0_8_ == 0) || (puVar5 = PTR_DAT_07779d18, auVar20._8_8_ == 0)) {
        uVar7 = func_0x03280a2c(puVar5);
        uVar7 = func_0x05ac7464(uVar7,0);
        auVar21 = func_0x03280b7c(uVar7,lVar13);
        auVar19._8_8_ = lVar12;
        auVar19._0_8_ = lVar8;
        lStack_198 = auVar21._8_8_;
        unaff_x22 = auVar21._0_8_;
        puVar2 = auStack_260;
        auStack_260[0] = 0x3d60608;
        lVar14 = lVar8;
        lVar11 = lVar12;
        lStack_240 = lVar9;
        lStack_238 = lVar13;
        auStack_250 = auVar20;
        if (*(long *)(lVar12 + 0x38) == 0) {
          func_0x03256878(lVar12);
        }
        puVar5 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar5 = PTR_DAT_07779d18, lStack_198 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))
                             (unaff_x22,lStack_198,lVar8);
          return lVar14;
        }
        uVar7 = func_0x03280a2c(puVar5);
        uVar18 = func_0x05ac7464(uVar7,0);
        uVar7 = 0x3d6068c;
        auVar20 = func_0x03280b7c(uVar18,lVar12);
        goto LAB_03d6068c;
      }
      lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      puVar4 = &uStack_200;
      uVar7 = uStack_230;
    }
    else {
      lVar14 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
      lVar9 = 0;
      puVar4 = &uStack_1c0;
      lVar11 = lStack_1c8;
      uVar7 = uStack_1e0;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    lVar14 = 0;
    puVar2 = auStack_180;
    uVar7 = uStack_1a0;
    auVar19 = auStack_190;
LAB_03d6068c:
    puVar3 = (undefined8 *)((long)puVar2 + -0x30);
    *(undefined8 *)((long)puVar2 + -0x30) = uVar7;
    *(long *)((long)puVar2 + -0x20) = unaff_x22;
    *(long *)((long)puVar2 + -0x18) = lStack_198;
    *(undefined1 (*) [16])((long)puVar2 + -0x10) = auVar19;
    plVar17 = *(long **)(lVar11 + 0x38);
    lVar8 = lVar11;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar11);
      plVar17 = *(long **)(lVar11 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    func_0x0531dbd0(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x38) = auVar20._0_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar20._0_8_);
      *(undefined8 *)(lVar13 + 0x48) = auVar20._8_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar20._8_8_);
      *(long *)(lVar13 + 0x28) = lVar14;
      func_0x032809c4((long *)(lVar13 + 0x28),lVar14);
      return lVar13;
    }
    auVar19 = func_0x03280cac();
    unaff_x22 = 0;
    uVar7 = 0x3d60730;
LAB_03d60730:
    puVar4 = (undefined8 *)((long)puVar3 + -0x30);
    *(undefined8 *)((long)puVar3 + -0x30) = uVar7;
    *(long *)((long)puVar3 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar3 + -0x18) = auVar20;
    *(long *)((long)puVar3 + -8) = lVar14;
    plVar17 = *(long **)(lVar8 + 0x38);
    lVar14 = lVar8;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar8);
      plVar17 = *(long **)(lVar8 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
    func_0x0531e428(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x38) = auVar19._0_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar19._0_8_);
      *(undefined8 *)(lVar13 + 0x48) = auVar19._8_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar19._8_8_);
      *(long *)(lVar13 + 0x28) = lVar11;
      func_0x032809c4((long *)(lVar13 + 0x28),lVar11);
      return lVar13;
    }
    auVar20 = func_0x03280cac();
    unaff_x22 = 0;
    uVar7 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar4 + -0x30) = uVar7;
  *(long *)((long)puVar4 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar19;
  *(long *)((long)puVar4 + -8) = lVar11;
  plVar17 = *(long **)(lVar14 + 0x38);
  lVar8 = lVar14;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar14);
    plVar17 = *(long **)(lVar14 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  uVar7 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + 8);
  func_0x0531ec78(lVar11,0xfffffffe);
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x40) = auVar20._0_8_;
    func_0x032809c4((undefined8 *)(lVar11 + 0x40),auVar20._0_8_);
    *(undefined8 *)(lVar11 + 0x50) = auVar20._8_8_;
    func_0x032809c4((undefined8 *)(lVar11 + 0x50),auVar20._8_8_);
    *(long *)(lVar11 + 0x30) = lVar9;
    func_0x032809c4((long *)(lVar11 + 0x30),lVar9);
    return lVar11;
  }
  auVar19 = func_0x03280cac();
  lVar14 = auVar19._0_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar4 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x48) = auVar20;
  *(long *)((long)puVar4 + -0x38) = lVar9;
  plVar17 = *(long **)(lVar8 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar8);
    plVar17 = *(long **)(lVar8 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x38) + 8);
  (*(code *)*puVar6)(lVar11,0xfffffffe);
  if (lVar11 != 0) {
    func_0x02f17738(lVar11,*(long *)(**(long **)(lVar8 + 0x38) + 0x80) + 0xc0,lVar14);
    func_0x02f17738(lVar11,*(long *)(**(long **)(lVar8 + 0x38) + 0x80) + 0x100,auVar19._8_8_);
    func_0x02f17738(lVar11,*(long *)(**(long **)(lVar8 + 0x38) + 0x80) + 0x80,uVar7);
    return lVar11;
  }
  auVar20 = func_0x03280cac();
  lVar11 = auVar20._8_8_;
  plVar17 = auVar20._0_8_;
  *(undefined8 *)((long)puVar4 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar4 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x80) = auVar19;
  *(long *)((long)puVar4 + -0x70) = lVar8;
  *(undefined8 *)((long)puVar4 + -0x68) = uVar7;
  puVar10 = puVar6;
  if (puVar6[7] == 0) {
    func_0x03256878(puVar6);
  }
  puVar5 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar5 = PTR_DAT_077799b8, lVar11 == 0)) {
    uVar7 = func_0x03280a2c(puVar5);
    uVar7 = func_0x05ac7464(uVar7,0);
    func_0x03280b7c(uVar7,puVar6);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(puVar6[7] + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    lVar13 = *plVar17;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      lVar8 = *(long *)(puVar6[7] + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
        lVar13 = *plVar17;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
        lVar8 = *(long *)(puVar6[7] + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
          lVar13 = *plVar17;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
        {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar14 = (**(code **)(lVar13 + 0x228))(plVar17,lVar11,*(undefined8 *)(lVar13 + 0x230));
          return lVar14;
        }
      }
      goto LAB_03d60c04;
    }
    lVar14 = *(long *)(puVar6[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar14 = func_0x03280b90(plVar17,lVar14);
    if (lVar14 == 0) {
      lVar14 = *(long *)(puVar6[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar6[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        func_0x04b68fa4(lVar14,plVar17,lVar11,*(undefined8 *)(puVar6[7] + 0x58));
        return lVar14;
      }
      if ((*(byte *)(*(long *)(puVar6[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar8 = *(long *)(puVar6[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b713b0(lVar14,plVar17,lVar11,*(undefined8 *)(puVar6[7] + 0x48));
        return lVar14;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar6[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    lVar8 = *(long *)(puVar6[7] + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar13 = func_0x03280b90(plVar17,lVar8);
    if (lVar13 != 0) {
      func_0x04b66610(lVar14,lVar13,lVar11,*(undefined8 *)(puVar6[7] + 0x30));
      return lVar14;
    }
  }
  auVar19 = func_0x03281048(plVar17,lVar8);
  lVar11 = auVar19._8_8_;
  plVar17 = auVar19._0_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar4 + -0xb8) = lVar8;
  *(long *)((long)puVar4 + -0xb0) = lVar14;
  *(undefined8 **)((long)puVar4 + -0xa8) = puVar6;
  *(undefined1 (*) [16])((long)puVar4 + -0xa0) = auVar20;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar5 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar5 = PTR_DAT_077799b8, lVar11 == 0)) {
    uVar7 = func_0x03280a2c(puVar5);
    uVar7 = func_0x05ac7464(uVar7,0);
    func_0x03280b7c(uVar7,puVar10);
  }
  else {
    lVar14 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar13 = *plVar17;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14)) {
      lVar14 = *(long *)(puVar10[7] + 0x20);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar14 = func_0x03280b90(plVar17,lVar14);
      if (lVar14 != 0) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        lVar8 = *(long *)(puVar10[7] + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
        }
        lVar13 = func_0x03280b90(plVar17,lVar8);
        if (lVar13 != 0) {
          func_0x04b667e0(lVar14,lVar13,lVar11,*(undefined8 *)(puVar10[7] + 0x30));
          return lVar14;
        }
        goto LAB_03d60ee0;
      }
      lVar14 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        func_0x04b693d0(lVar14,plVar17,lVar11,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar14;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar13 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x04b715c8(lVar14,plVar17,lVar11,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar14;
      }
    }
    else {
      lVar14 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar13 = *plVar17;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar13 = *plVar17;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar14 = (**(code **)(lVar13 + 0x228))(plVar17,lVar11,*(undefined8 *)(lVar13 + 0x230));
          return lVar14;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar14 = func_0x03281048(plVar17,lVar8);
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar4 + -0xd0) = auVar19;
  lVar8 = *(long *)(lVar14 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  func_0x03280ab0();
  if (lVar8 == 0) {
    lVar8 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    lVar8 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar11 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    **(long **)(lVar11 + 0xb8) = lVar8;
    lVar14 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar14 + 0xb8),lVar8);
  }
  return lVar8;
}


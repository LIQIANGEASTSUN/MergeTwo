/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACF2D4; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.CalculateUnlockableBoost; status ok */


/* WARNING: Possible PIC construction at 0x06bcf388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06bcf38c) */
/* WARNING: Removing unreachable block (ram,0x06bcf3a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf408) */
/* WARNING: Removing unreachable block (ram,0x06bcf410) */
/* WARNING: Removing unreachable block (ram,0x06bcf420) */
/* WARNING: Removing unreachable block (ram,0x06bcf428) */
/* WARNING: Removing unreachable block (ram,0x06bcf47c) */
/* WARNING: Removing unreachable block (ram,0x06bcf434) */
/* WARNING: Removing unreachable block (ram,0x06bcf440) */
/* WARNING: Removing unreachable block (ram,0x06bcf48c) */
/* WARNING: Removing unreachable block (ram,0x06bcf3ac) */
/* WARNING: Removing unreachable block (ram,0x06bcf498) */
/* WARNING: Removing unreachable block (ram,0x06bcf4a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf4b8) */
/* WARNING: Removing unreachable block (ram,0x06bcf4c0) */
/* WARNING: Removing unreachable block (ram,0x06bcf4e8) */
/* WARNING: Removing unreachable block (ram,0x06bcf4cc) */
/* WARNING: Removing unreachable block (ram,0x06bcf4d8) */
/* WARNING: Removing unreachable block (ram,0x06bcf4f8) */

long Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateUnlockableBoost
               (long param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 auStack_290 [2];
  undefined1 auStack_280 [16];
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined *puStack_250;
  undefined1 auStack_248 [16];
  long lStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  long lStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  long lStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 auStack_1b0 [2];
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  undefined4 *puStack_38;
  
  if ((bRam0000000007e2aa71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f6d0);
    func_0x03280a18(PTR_DAT_07833e20);
    bRam0000000007e2aa71 = 1;
  }
  puVar7 = PTR_DAT_07833e20;
  plVar20 = *(long **)(param_1 + 0x18);
  lVar15 = param_1;
  if (plVar20 == (long *)0x0) {
LAB_06bcf51c:
    uVar21 = 0x6bcf520;
    param_1 = func_0x03280cac();
  }
  else {
    lVar14 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_06bcf374;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07833e20,5);
LAB_06bcf374:
    uVar16 = (*(code *)*puVar8)(plVar20,puVar8[1]);
    unaff_x22 = puVar7;
    if ((uVar16 & 1) == 0) {
      plVar18 = *(long **)(param_1 + 0x18);
      lVar15 = 0;
      if (plVar18 != (long *)0x0) {
        lVar15 = *plVar18;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_06bcf460;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar7,1);
LAB_06bcf460:
        uVar6 = (*(code *)*puVar8)(plVar18,puVar8[1]);
        *param_2 = uVar6;
        return 0;
      }
      goto LAB_06bcf51c;
    }
    uVar21 = 0x6bcf38c;
  }
  uStack_50 = uVar21;
  plStack_48 = plVar20;
  lStack_40 = lVar15;
  puStack_38 = param_2;
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
  plVar20 = *(long **)(param_1 + 0x18);
  if (plVar20 == (long *)0x0) {
    lVar15 = func_0x03280cac();
    return *(long *)(lVar15 + 0x30);
  }
  lVar15 = *plVar20;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 6) * 0x10 + 0x138);
        goto LAB_06bcf5f4;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07833e20,6);
LAB_06bcf5f4:
  uVar16 = (*(code *)*puVar8)(plVar20,puVar8[1]);
  if ((uVar16 & 1) == 0) {
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07759a10);
    func_0x04119444(lVar15,*(undefined8 *)PTR_DAT_07759a18);
    return lVar15;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  uVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a3990);
  lVar13 = 0;
  func_0x05353d24(uVar21,param_1,*(undefined8 *)PTR_DAT_07834150);
  lVar11 = *(long *)PTR_DAT_077e5590;
  lVar15 = func_0x03d86d00(uVar19,uVar21);
  plVar20 = plStack_48;
  lVar14 = *(long *)PTR_DAT_077c1cf8;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (lVar15 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    func_0x0411956c(lVar11,lVar15,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar11;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar14);
  lVar9 = auVar22._8_8_;
  uStack_70 = 0x3d5fe5c;
  lStack_60 = lVar15;
  lStack_58 = lVar14;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x0411bf8c(lVar15,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return lVar15;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar23 = func_0x03280b7c(uVar21,lVar9);
  lVar15 = auVar23._8_8_;
  uStack_90 = 0x3d5fed8;
  auStack_80 = auVar22;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x04132280(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar22._8_8_;
  uStack_b0 = 0x3d5ff54;
  auStack_a0 = auVar23;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x04135278(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar23 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar23._8_8_;
  uStack_d0 = 0x3d5ffd0;
  auStack_c0 = auVar22;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x04143d60(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar22._8_8_;
  uStack_f0 = 0x3d6004c;
  auStack_e0 = auVar23;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0419ce74(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar23 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar23._8_8_;
  uStack_110 = 0x3d600c8;
  auStack_100 = auVar22;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041c2810(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar22._8_8_;
  uStack_130 = 0x3d60144;
  auStack_120 = auVar23;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041ddb58(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar23 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar23._8_8_;
  uStack_150 = 0x3d601c0;
  auStack_140 = auVar22;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041e617c(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar22._8_8_;
  uStack_170 = 0x3d6023c;
  auStack_160 = auVar23;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041e8ba0(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar23 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar23._8_8_;
  uStack_190 = 0x3d602b8;
  auStack_180 = auVar22;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 0x10))(lVar14,auVar23._0_8_);
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar15);
  lVar15 = auVar22._8_8_;
  auStack_1b0[0] = 0x3d60338;
  auStack_1a0 = auVar23;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0420cec8(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar14;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar23 = func_0x03280b7c(uVar21,lVar15);
  uStack_1d0 = 0x3d603b4;
  plStack_1c8 = plVar20;
  lVar15 = lVar11;
  auStack_1c0 = auVar22;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  auVar22._8_8_ = plStack_1c8;
  auVar22._0_8_ = unaff_x22;
  puVar7 = PTR_DAT_07779d10;
  if ((auVar23._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
    uVar21 = func_0x03280a2c(puVar7);
    uVar21 = func_0x05ac7464(uVar21,0);
    auVar22 = func_0x03280b7c(uVar21,lVar11);
    uStack_1f0 = 0x3d60428;
    lVar14 = lVar15;
    lStack_1d8 = lVar11;
    if (*(long *)(lVar15 + 0x38) == 0) {
      auStack_1e8 = auVar23;
      func_0x03256878(lVar15);
      auVar23 = auStack_1e8;
    }
    puVar7 = PTR_DAT_07779d10;
    auStack_1e8 = auVar23;
    if ((auVar22._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar22._8_8_ != 0)) {
      lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
      lVar11 = 0;
      puVar4 = &uStack_1d0;
      lVar15 = lStack_1d8;
      uVar21 = uStack_1f0;
      goto LAB_03d60730;
    }
    uVar21 = func_0x03280a2c(puVar7);
    uVar21 = func_0x05ac7464(uVar21,0);
    auVar23 = func_0x03280b7c(uVar21,lVar15);
    uStack_210 = 0x3d6049c;
    lVar11 = lVar14;
    lStack_1f8 = lVar15;
    auStack_208 = auVar22;
    if (*(long *)(lVar14 + 0x38) == 0) {
      func_0x03256878(lVar14);
    }
    puVar7 = PTR_DAT_07779d10;
    if ((auVar23._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
      uVar21 = func_0x03280a2c(puVar7);
      uVar21 = func_0x05ac7464(uVar21,0);
      auStack_248 = func_0x03280b7c(uVar21,lVar14);
      uStack_230 = 0x3d60510;
      lVar9 = lVar11;
      lStack_218 = lVar14;
      auStack_228 = auVar23;
      if (*(long *)(lVar11 + 0x38) == 0) {
        func_0x03256878(lVar11);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auStack_248._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auStack_248._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 8))
                           (auStack_248._0_8_,auStack_248._8_8_,0);
        return lVar15;
      }
      uVar21 = func_0x03280a2c(puVar7);
      uVar21 = func_0x05ac7464(uVar21,0);
      auVar23 = func_0x03280b7c(uVar21,lVar11);
      uStack_260 = 0x3d60588;
      lVar14 = lVar9;
      lVar12 = lVar13;
      puStack_250 = unaff_x22;
      lStack_238 = lVar11;
      if (*(long *)(lVar13 + 0x38) == 0) {
        func_0x03256878(lVar13);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auVar23._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
        uVar21 = func_0x03280a2c(puVar7);
        uVar21 = func_0x05ac7464(uVar21,0);
        auVar22 = func_0x03280b7c(uVar21,lVar13);
        auVar2._8_8_ = lVar12;
        auVar2._0_8_ = lVar14;
        puVar3 = auStack_290;
        auStack_290[0] = 0x3d60608;
        lVar15 = lVar14;
        lVar11 = lVar12;
        lStack_270 = lVar9;
        lStack_268 = lVar13;
        auStack_280 = auVar23;
        if (*(long *)(lVar12 + 0x38) == 0) {
          func_0x03256878(lVar12);
        }
        puVar7 = PTR_DAT_07779d10;
        if ((auVar22._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar22._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))
                             (auVar22._0_8_,auVar22._8_8_,lVar14);
          return lVar15;
        }
        uVar21 = func_0x03280a2c(puVar7);
        uVar19 = func_0x05ac7464(uVar21,0);
        uVar21 = 0x3d6068c;
        auVar23 = func_0x03280b7c(uVar19,lVar12);
        goto LAB_03d6068c;
      }
      lVar15 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      puVar5 = &uStack_230;
      lVar11 = lStack_238;
      unaff_x22 = puStack_250;
      uVar21 = uStack_260;
      auVar22 = auStack_248;
    }
    else {
      lVar15 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      lVar9 = 0;
      puVar5 = &uStack_1f0;
      lVar11 = lStack_1f8;
      uVar21 = uStack_210;
      auVar22 = auStack_208;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    lVar15 = 0;
    puVar3 = auStack_1b0;
    uVar21 = uStack_1d0;
    auVar2 = auStack_1c0;
LAB_03d6068c:
    puVar4 = (undefined8 *)((long)puVar3 + -0x30);
    *(undefined8 *)((long)puVar3 + -0x30) = uVar21;
    *(undefined1 (*) [16])((long)puVar3 + -0x20) = auVar22;
    *(undefined1 (*) [16])((long)puVar3 + -0x10) = auVar2;
    plVar20 = *(long **)(lVar11 + 0x38);
    lVar14 = lVar11;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar11);
      plVar20 = *(long **)(lVar11 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    func_0x0531dbd0(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x38) = auVar23._0_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar23._0_8_);
      *(undefined8 *)(lVar13 + 0x48) = auVar23._8_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar23._8_8_);
      *(long *)(lVar13 + 0x28) = lVar15;
      func_0x032809c4((long *)(lVar13 + 0x28),lVar15);
      return lVar13;
    }
    auVar22 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar21 = 0x3d60730;
LAB_03d60730:
    puVar5 = (undefined8 *)((long)puVar4 + -0x30);
    *(undefined8 *)((long)puVar4 + -0x30) = uVar21;
    *(undefined **)((long)puVar4 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar23;
    *(long *)((long)puVar4 + -8) = lVar15;
    plVar20 = *(long **)(lVar14 + 0x38);
    lVar15 = lVar14;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar20 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531e428(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar13 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar22._8_8_);
      *(long *)(lVar13 + 0x28) = lVar11;
      func_0x032809c4((long *)(lVar13 + 0x28),lVar11);
      return lVar13;
    }
    auVar23 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar21 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar5 + -0x30) = uVar21;
  *(undefined **)((long)puVar5 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar22;
  *(long *)((long)puVar5 + -8) = lVar11;
  plVar20 = *(long **)(lVar15 + 0x38);
  lVar14 = lVar15;
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar20 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  uVar21 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + 8);
  func_0x0531ec78(lVar11,0xfffffffe);
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x40) = auVar23._0_8_;
    func_0x032809c4((undefined8 *)(lVar11 + 0x40),auVar23._0_8_);
    *(undefined8 *)(lVar11 + 0x50) = auVar23._8_8_;
    func_0x032809c4((undefined8 *)(lVar11 + 0x50),auVar23._8_8_);
    *(long *)(lVar11 + 0x30) = lVar9;
    func_0x032809c4((long *)(lVar11 + 0x30),lVar9);
    return lVar11;
  }
  auVar22 = func_0x03280cac();
  lVar15 = auVar22._0_8_;
  *(undefined8 *)((long)puVar5 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar5 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar5 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar5 + -0x48) = auVar23;
  *(long *)((long)puVar5 + -0x38) = lVar9;
  plVar20 = *(long **)(lVar14 + 0x38);
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar14);
    plVar20 = *(long **)(lVar14 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  puVar8 = *(undefined8 **)(*(long *)(lVar14 + 0x38) + 8);
  (*(code *)*puVar8)(lVar11,0xfffffffe);
  if (lVar11 != 0) {
    func_0x02f17738(lVar11,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0xc0,lVar15);
    func_0x02f17738(lVar11,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x100,auVar22._8_8_);
    func_0x02f17738(lVar11,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x80,uVar21);
    return lVar11;
  }
  auVar23 = func_0x03280cac();
  lVar11 = auVar23._8_8_;
  plVar20 = auVar23._0_8_;
  *(undefined8 *)((long)puVar5 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar5 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar5 + -0x80) = auVar22;
  *(long *)((long)puVar5 + -0x70) = lVar14;
  *(undefined8 *)((long)puVar5 + -0x68) = uVar21;
  puVar10 = puVar8;
  if (puVar8[7] == 0) {
    func_0x03256878(puVar8);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar11 == 0)) {
    uVar21 = func_0x03280a2c(puVar7);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar8);
LAB_03d60c04:
    func_0x03281048(plVar20);
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(puVar8[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar13 = *plVar20;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14)) {
      lVar14 = *(long *)(puVar8[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar13 = *plVar20;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar8[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar13 = *plVar20;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (**(code **)(lVar13 + 0x228))(plVar20,lVar11,*(undefined8 *)(lVar13 + 0x230));
          return lVar15;
        }
      }
      goto LAB_03d60c04;
    }
    lVar15 = *(long *)(puVar8[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar15 = func_0x03280b90(plVar20,lVar15);
    if (lVar15 == 0) {
      lVar15 = *(long *)(puVar8[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) != lVar15
         )) {
        if ((*(byte *)(*(long *)(puVar8[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar15 = func_0x03280ca0();
        func_0x04b68fa4(lVar15,plVar20,lVar11,*(undefined8 *)(puVar8[7] + 0x58));
        return lVar15;
      }
      if ((*(byte *)(*(long *)(puVar8[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar15 = func_0x03280ca0();
      lVar14 = *(long *)(puVar8[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
         )) {
        func_0x04b713b0(lVar15,plVar20,lVar11,*(undefined8 *)(puVar8[7] + 0x48));
        return lVar15;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar8[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    lVar14 = *(long *)(puVar8[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar13 = func_0x03280b90(plVar20,lVar14);
    if (lVar13 != 0) {
      func_0x04b66610(lVar15,lVar13,lVar11,*(undefined8 *)(puVar8[7] + 0x30));
      return lVar15;
    }
  }
  auVar22 = func_0x03281048(plVar20,lVar14);
  lVar11 = auVar22._8_8_;
  plVar20 = auVar22._0_8_;
  *(undefined8 *)((long)puVar5 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar5 + -0xb8) = lVar14;
  *(long *)((long)puVar5 + -0xb0) = lVar15;
  *(undefined8 **)((long)puVar5 + -0xa8) = puVar8;
  *(undefined1 (*) [16])((long)puVar5 + -0xa0) = auVar23;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar11 == 0)) {
    uVar21 = func_0x03280a2c(puVar7);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar10);
  }
  else {
    lVar15 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar13 = *plVar20;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((bVar1 < *(byte *)(lVar15 + 0x130)) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) != lVar15)) {
      lVar15 = *(long *)(puVar10[7] + 0x20);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      lVar15 = func_0x03280b90(plVar20,lVar15);
      if (lVar15 != 0) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar15 = func_0x03280ca0();
        lVar14 = *(long *)(puVar10[7] + 0x20);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar13 = func_0x03280b90(plVar20,lVar14);
        if (lVar13 != 0) {
          func_0x04b667e0(lVar15,lVar13,lVar11,*(undefined8 *)(puVar10[7] + 0x30));
          return lVar15;
        }
        goto LAB_03d60ee0;
      }
      lVar15 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) != lVar15
         )) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar15 = func_0x03280ca0();
        func_0x04b693d0(lVar15,plVar20,lVar11,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar15;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar15 = func_0x03280ca0();
      lVar13 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x04b715c8(lVar15,plVar20,lVar11,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar15;
      }
    }
    else {
      lVar15 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar13 = *plVar20;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15))
      {
        lVar15 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
          lVar13 = *plVar20;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (**(code **)(lVar13 + 0x228))(plVar20,lVar11,*(undefined8 *)(lVar13 + 0x230));
          return lVar15;
        }
      }
    }
  }
  func_0x03281048(plVar20);
LAB_03d60ee0:
  lVar15 = func_0x03281048(plVar20,lVar14);
  *(undefined8 *)((long)puVar5 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar5 + -0xd0) = auVar22;
  lVar14 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = **(long **)(lVar14 + 0xb8);
  func_0x03280ab0();
  if (lVar14 == 0) {
    lVar14 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar11 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    **(long **)(lVar11 + 0xb8) = lVar14;
    lVar15 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar15 + 0xb8),lVar14);
  }
  return lVar14;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A86A58; Merger.MergeBoard.Logic.CombineValidators.FeedingItemCombinerValidator.ToggleVisuals; status ok */


long Merger_MergeBoard_Logic_CombineValidators_FeedingItemCombinerValidator__ToggleVisuals
               (undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 auStack_200 [2];
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  undefined8 auStack_120 [2];
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
  
  lVar15 = param_4;
  if ((bRam0000000007e2a7a1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a7a1 = 1;
  }
  puVar8 = PTR_DAT_077c1d88;
  if (param_3 != (long *)0x0) {
    lVar15 = *param_3;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0x5f) * 0x10 + 0x138);
          goto LAB_06b86ae4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b86ae4:
    (*(code *)*puVar9)(param_3,(uint)param_4 & 1,puVar9[1]);
    lVar15 = *param_3;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0x1f) * 0x10 + 0x138);
          goto LAB_06b86b44;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar8,0x1f);
LAB_06b86b44:
                    /* WARNING: Could not recover jumptable at 0x06b86b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar15 = (*(code *)*puVar9)(param_3,(uint)param_4 & 1,puVar9[1]);
    return lVar15;
  }
  puVar9 = (undefined8 *)func_0x03280cac();
  puVar8 = PTR_DAT_07831d08;
  uStack_60 = 0x6b86b60;
  if ((bRam0000000007e2a84b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831d10);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_07831d18);
    func_0x03280a18(PTR_DAT_07831d20);
    func_0x03280a18(PTR_DAT_07831d08);
    bRam0000000007e2a84b = 1;
  }
  lVar10 = *(long *)puVar8;
  uVar18 = *puVar9;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar10 = *(long *)puVar8;
  }
  puVar3 = PTR_DAT_07831d10;
  puVar2 = PTR_DAT_0774ea58;
  lVar19 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar19 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar8;
    }
    uVar21 = **(undefined8 **)(lVar10 + 0xb8);
    lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831d18);
    lVar15 = 0;
    func_0x053569b8(lVar19,uVar21,*(undefined8 *)PTR_DAT_07831d20);
    plVar11 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
    *plVar11 = lVar19;
    func_0x032809c4(plVar11,lVar19);
  }
  lVar13 = *(long *)puVar3;
  lVar10 = func_0x03d50a94(uVar18,lVar19);
  lVar19 = *(long *)puVar2;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (lVar10 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x04143d60(lVar15,lVar10,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar22 = func_0x03280b7c(uVar18,lVar19);
  lVar10 = auVar22._8_8_;
  uStack_60 = 0x3d6004c;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x0419ce74(lVar15,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar23 = func_0x03280b7c(uVar18,lVar10);
  lVar10 = auVar23._8_8_;
  uStack_80 = 0x3d600c8;
  auStack_70 = auVar22;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x041c2810(lVar15,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar22 = func_0x03280b7c(uVar18,lVar10);
  lVar10 = auVar22._8_8_;
  uStack_a0 = 0x3d60144;
  auStack_90 = auVar23;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x041ddb58(lVar15,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar23 = func_0x03280b7c(uVar18,lVar10);
  lVar10 = auVar23._8_8_;
  uStack_c0 = 0x3d601c0;
  auStack_b0 = auVar22;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x041e617c(lVar15,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar22 = func_0x03280b7c(uVar18,lVar10);
  lVar10 = auVar22._8_8_;
  uStack_e0 = 0x3d6023c;
  auStack_d0 = auVar23;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x041e8ba0(lVar15,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar23 = func_0x03280b7c(uVar18,lVar10);
  lVar10 = auVar23._8_8_;
  uStack_100 = 0x3d602b8;
  auStack_f0 = auVar22;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 0x10))(lVar15,auVar23._0_8_);
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar22 = func_0x03280b7c(uVar18,lVar10);
  lVar10 = auVar22._8_8_;
  auStack_120[0] = 0x3d60338;
  auStack_110 = auVar23;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x0420cec8(lVar15,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar15;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar23 = func_0x03280b7c(uVar18,lVar10);
  uStack_140 = 0x3d603b4;
  lStack_138 = 0x7e2a000;
  lVar10 = lVar13;
  auStack_130 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  puVar8 = PTR_DAT_07779d10;
  if ((auVar23._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
    uVar18 = func_0x03280a2c(puVar8);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar22 = func_0x03280b7c(uVar18,lVar13);
    uStack_160 = 0x3d60428;
    lVar19 = lVar10;
    lStack_148 = lVar13;
    if (*(long *)(lVar10 + 0x38) == 0) {
      auStack_158 = auVar23;
      func_0x03256878(lVar10);
      auVar23 = auStack_158;
    }
    puVar8 = PTR_DAT_07779d10;
    auStack_158 = auVar23;
    if ((auVar22._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ != 0)) {
      lVar15 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      lVar19 = 0;
      puVar5 = &uStack_140;
      lVar10 = lStack_148;
      uVar18 = uStack_160;
      goto LAB_03d60730;
    }
    uVar18 = func_0x03280a2c(puVar8);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar23 = func_0x03280b7c(uVar18,lVar10);
    uStack_180 = 0x3d6049c;
    lVar13 = lVar19;
    lStack_168 = lVar10;
    auStack_178 = auVar22;
    if (*(long *)(lVar19 + 0x38) == 0) {
      func_0x03256878(lVar19);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar23._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
      uVar18 = func_0x03280a2c(puVar8);
      uVar18 = func_0x05ac7464(uVar18,0);
      auStack_1b8 = func_0x03280b7c(uVar18,lVar19);
      uStack_1a0 = 0x3d60510;
      lVar7 = lVar13;
      lStack_188 = lVar19;
      auStack_198 = auVar23;
      if (*(long *)(lVar13 + 0x38) == 0) {
        func_0x03256878(lVar13);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auStack_1b8._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auStack_1b8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))
                           (auStack_1b8._0_8_,auStack_1b8._8_8_,0);
        return lVar15;
      }
      uVar18 = func_0x03280a2c(puVar8);
      uVar18 = func_0x05ac7464(uVar18,0);
      auVar23 = func_0x03280b7c(uVar18,lVar13);
      uStack_1d0 = 0x3d60588;
      lVar19 = lVar7;
      lVar14 = lVar15;
      lStack_1c0 = unaff_x22;
      lStack_1a8 = lVar13;
      if (*(long *)(lVar15 + 0x38) == 0) {
        func_0x03256878(lVar15);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar23._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
        uVar18 = func_0x03280a2c(puVar8);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar24 = func_0x03280b7c(uVar18,lVar15);
        auVar22._8_8_ = lVar14;
        auVar22._0_8_ = lVar19;
        lVar20 = auVar24._8_8_;
        unaff_x22 = auVar24._0_8_;
        puVar4 = auStack_200;
        auStack_200[0] = 0x3d60608;
        lVar10 = lVar19;
        lVar13 = lVar14;
        lStack_1e0 = lVar7;
        lStack_1d8 = lVar15;
        auStack_1f0 = auVar23;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        puVar8 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar8 = PTR_DAT_07779d18, lVar20 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 0x10))
                             (unaff_x22,lVar20,lVar19);
          return lVar15;
        }
        uVar18 = func_0x03280a2c(puVar8);
        uVar21 = func_0x05ac7464(uVar18,0);
        uVar18 = 0x3d6068c;
        auVar23 = func_0x03280b7c(uVar21,lVar14);
        goto LAB_03d6068c;
      }
      lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      puVar6 = &uStack_1a0;
      lVar19 = lStack_1a8;
      unaff_x22 = lStack_1c0;
      uVar18 = uStack_1d0;
      auVar22 = auStack_1b8;
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
      lVar7 = 0;
      puVar6 = &uStack_160;
      lVar19 = lStack_168;
      uVar18 = uStack_180;
      auVar22 = auStack_178;
    }
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    lVar10 = 0;
    puVar4 = auStack_120;
    lVar20 = lStack_138;
    uVar18 = uStack_140;
    auVar22 = auStack_130;
LAB_03d6068c:
    puVar5 = (undefined8 *)((long)puVar4 + -0x30);
    *(undefined8 *)((long)puVar4 + -0x30) = uVar18;
    *(long *)((long)puVar4 + -0x20) = unaff_x22;
    *(long *)((long)puVar4 + -0x18) = lVar20;
    *(undefined1 (*) [16])((long)puVar4 + -0x10) = auVar22;
    plVar11 = *(long **)(lVar13 + 0x38);
    lVar15 = lVar13;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar11 = *(long **)(lVar13 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar7 = func_0x03280ca0();
    lVar19 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    func_0x0531dbd0(lVar7,0xfffffffe);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x38) = auVar23._0_8_;
      func_0x032809c4((undefined8 *)(lVar7 + 0x38),auVar23._0_8_);
      *(undefined8 *)(lVar7 + 0x48) = auVar23._8_8_;
      func_0x032809c4((undefined8 *)(lVar7 + 0x48),auVar23._8_8_);
      *(long *)(lVar7 + 0x28) = lVar10;
      func_0x032809c4((long *)(lVar7 + 0x28),lVar10);
      return lVar7;
    }
    auVar22 = func_0x03280cac();
    unaff_x22 = 0;
    uVar18 = 0x3d60730;
LAB_03d60730:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar18;
    *(long *)((long)puVar5 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar23;
    *(long *)((long)puVar5 + -8) = lVar10;
    plVar11 = *(long **)(lVar15 + 0x38);
    lVar10 = lVar15;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar11 = *(long **)(lVar15 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar7 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    func_0x0531e428(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar13 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar22._8_8_);
      *(long *)(lVar13 + 0x28) = lVar19;
      func_0x032809c4((long *)(lVar13 + 0x28),lVar19);
      return lVar13;
    }
    auVar23 = func_0x03280cac();
    unaff_x22 = 0;
    uVar18 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar6 + -0x30) = uVar18;
  *(long *)((long)puVar6 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar22;
  *(long *)((long)puVar6 + -8) = lVar19;
  plVar11 = *(long **)(lVar10 + 0x38);
  lVar15 = lVar10;
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar11 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  uVar18 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 8);
  func_0x0531ec78(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    *(undefined8 *)(lVar19 + 0x40) = auVar23._0_8_;
    func_0x032809c4((undefined8 *)(lVar19 + 0x40),auVar23._0_8_);
    *(undefined8 *)(lVar19 + 0x50) = auVar23._8_8_;
    func_0x032809c4((undefined8 *)(lVar19 + 0x50),auVar23._8_8_);
    *(long *)(lVar19 + 0x30) = lVar7;
    func_0x032809c4((long *)(lVar19 + 0x30),lVar7);
    return lVar19;
  }
  auVar22 = func_0x03280cac();
  lVar10 = auVar22._0_8_;
  *(undefined8 *)((long)puVar6 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar6 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar6 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x48) = auVar23;
  *(long *)((long)puVar6 + -0x38) = lVar7;
  plVar11 = *(long **)(lVar15 + 0x38);
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar11 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  (*(code *)*puVar9)(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    func_0x02f17738(lVar19,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0xc0,lVar10);
    func_0x02f17738(lVar19,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x100,auVar22._8_8_);
    func_0x02f17738(lVar19,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x80,uVar18);
    return lVar19;
  }
  auVar23 = func_0x03280cac();
  lVar19 = auVar23._8_8_;
  plVar11 = auVar23._0_8_;
  *(undefined8 *)((long)puVar6 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar6 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x80) = auVar22;
  *(long *)((long)puVar6 + -0x70) = lVar15;
  *(undefined8 *)((long)puVar6 + -0x68) = uVar18;
  puVar12 = puVar9;
  if (puVar9[7] == 0) {
    func_0x03256878(puVar9);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar18 = func_0x03280a2c(puVar8);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar9);
LAB_03d60c04:
    func_0x03281048(plVar11);
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(puVar9[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar13 = *plVar11;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15)) {
      lVar15 = *(long *)(puVar9[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar13 = *plVar11;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15))
      {
        lVar15 = *(long *)(puVar9[7] + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
          lVar13 = *plVar11;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (**(code **)(lVar13 + 0x228))(plVar11,lVar19,*(undefined8 *)(lVar13 + 0x230));
          return lVar15;
        }
      }
      goto LAB_03d60c04;
    }
    lVar15 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar15 = func_0x03280b90(plVar11,lVar15);
    if (lVar15 == 0) {
      lVar15 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) != lVar15
         )) {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar15 = func_0x03280ca0();
        func_0x04b68fa4(lVar15,plVar11,lVar19,*(undefined8 *)(puVar9[7] + 0x58));
        return lVar15;
      }
      if ((*(byte *)(*(long *)(puVar9[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar10 = func_0x03280ca0();
      lVar15 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      if ((*(byte *)(lVar15 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
         )) {
        func_0x04b713b0(lVar10,plVar11,lVar19,*(undefined8 *)(puVar9[7] + 0x48));
        return lVar10;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar9[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    lVar15 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar13 = func_0x03280b90(plVar11,lVar15);
    if (lVar13 != 0) {
      func_0x04b66610(lVar10,lVar13,lVar19,*(undefined8 *)(puVar9[7] + 0x30));
      return lVar10;
    }
  }
  auVar22 = func_0x03281048(plVar11,lVar15);
  lVar19 = auVar22._8_8_;
  plVar11 = auVar22._0_8_;
  *(undefined8 *)((long)puVar6 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar6 + -0xb8) = lVar15;
  *(long *)((long)puVar6 + -0xb0) = lVar10;
  *(undefined8 **)((long)puVar6 + -0xa8) = puVar9;
  *(undefined1 (*) [16])((long)puVar6 + -0xa0) = auVar23;
  if (puVar12[7] == 0) {
    func_0x03256878(puVar12);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar19 == 0)) {
    uVar18 = func_0x03280a2c(puVar8);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar12);
  }
  else {
    lVar10 = *(long *)(puVar12[7] + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar13 = *plVar11;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((bVar1 < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)) {
      lVar10 = *(long *)(puVar12[7] + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar10 = func_0x03280b90(plVar11,lVar10);
      if (lVar10 != 0) {
        if ((*(byte *)(*(long *)(puVar12[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        lVar15 = *(long *)(puVar12[7] + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        lVar13 = func_0x03280b90(plVar11,lVar15);
        if (lVar13 != 0) {
          func_0x04b667e0(lVar10,lVar13,lVar19,*(undefined8 *)(puVar12[7] + 0x30));
          return lVar10;
        }
        goto LAB_03d60ee0;
      }
      lVar10 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
        if ((*(byte *)(*(long *)(puVar12[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar15 = func_0x03280ca0();
        func_0x04b693d0(lVar15,plVar11,lVar19,*(undefined8 *)(puVar12[7] + 0x58));
        return lVar15;
      }
      if ((*(byte *)(*(long *)(puVar12[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar10 = func_0x03280ca0();
      lVar13 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x04b715c8(lVar10,plVar11,lVar19,*(undefined8 *)(puVar12[7] + 0x48));
        return lVar10;
      }
    }
    else {
      lVar10 = *(long *)(puVar12[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar13 = *plVar11;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar12[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar13 = *plVar11;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (**(code **)(lVar13 + 0x228))(plVar11,lVar19,*(undefined8 *)(lVar13 + 0x230));
          return lVar15;
        }
      }
    }
  }
  func_0x03281048(plVar11);
LAB_03d60ee0:
  lVar15 = func_0x03281048(plVar11,lVar15);
  *(undefined8 *)((long)puVar6 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar6 + -0xd0) = auVar22;
  lVar10 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = **(long **)(lVar10 + 0xb8);
  func_0x03280ab0();
  if (lVar10 == 0) {
    lVar10 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar19 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    **(long **)(lVar19 + 0xb8) = lVar10;
    lVar15 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar15 + 0xb8),lVar10);
  }
  return lVar10;
}


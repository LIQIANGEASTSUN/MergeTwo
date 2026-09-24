/* Ghidra 12.1.2 native pseudocode; RVA 0x6010EBC; MergeEngine.Configuration.Capabilities.ItemsSpawningCapability.GetDistinctSpawnableItems; status ok */


long MergeEngine_Configuration_Capabilities_ItemsSpawningCapability__GetDistinctSpawnableItems
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 auStack_1e0 [2];
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
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
  
  puVar3 = PTR_DAT_077cf560;
  puVar2 = PTR_DAT_077cf558;
  puVar10 = PTR_DAT_077cf550;
  if ((bRam0000000007e237dd & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cf550);
    func_0x03280a18(PTR_DAT_077cf558);
    func_0x03280a18(PTR_DAT_077cf560);
    bRam0000000007e237dd = 1;
  }
  lVar16 = *(long *)puVar10;
  uVar11 = func_0x03d37218(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  lVar12 = func_0x03d3c654(uVar11,*(undefined8 *)puVar2);
  lVar13 = *(long *)puVar3;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (lVar12 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x04143d60(lVar16,lVar12,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar16;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar18 = func_0x03280b7c(uVar11,lVar13);
  lVar12 = auVar18._8_8_;
  uStack_40 = 0x3d6004c;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0419ce74(lVar13,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar19 = func_0x03280b7c(uVar11,lVar12);
  lVar12 = auVar19._8_8_;
  uStack_60 = 0x3d600c8;
  auStack_50 = auVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041c2810(lVar13,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar18 = func_0x03280b7c(uVar11,lVar12);
  lVar12 = auVar18._8_8_;
  uStack_80 = 0x3d60144;
  auStack_70 = auVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041ddb58(lVar13,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar19 = func_0x03280b7c(uVar11,lVar12);
  lVar12 = auVar19._8_8_;
  uStack_a0 = 0x3d601c0;
  auStack_90 = auVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e617c(lVar13,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar18 = func_0x03280b7c(uVar11,lVar12);
  lVar12 = auVar18._8_8_;
  uStack_c0 = 0x3d6023c;
  auStack_b0 = auVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e8ba0(lVar13,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar19 = func_0x03280b7c(uVar11,lVar12);
  lVar12 = auVar19._8_8_;
  uStack_e0 = 0x3d602b8;
  auStack_d0 = auVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))(lVar13,auVar19._0_8_);
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar18 = func_0x03280b7c(uVar11,lVar12);
  lVar12 = auVar18._8_8_;
  auStack_100[0] = 0x3d60338;
  auStack_f0 = auVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0420cec8(lVar13,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar19 = func_0x03280b7c(uVar11,lVar12);
  uStack_120 = 0x3d603b4;
  lVar12 = lVar16;
  lStack_118 = unaff_x21;
  auStack_110 = auVar18;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  puVar10 = PTR_DAT_07779d10;
  if ((auVar19._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar18 = func_0x03280b7c(uVar11,lVar16);
    uStack_140 = 0x3d60428;
    lVar13 = lVar12;
    lStack_128 = lVar16;
    if (*(long *)(lVar12 + 0x38) == 0) {
      auStack_138 = auVar19;
      func_0x03256878(lVar12);
      auVar19 = auStack_138;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_138 = auVar19;
    if ((auVar18._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar18._8_8_ != 0)) {
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar16 = 0;
      puVar5 = &uStack_120;
      lVar12 = lStack_128;
      uVar11 = uStack_140;
      goto LAB_03d60730;
    }
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar19 = func_0x03280b7c(uVar11,lVar12);
    uStack_160 = 0x3d6049c;
    lVar16 = lVar13;
    lStack_148 = lVar12;
    auStack_158 = auVar18;
    if (*(long *)(lVar13 + 0x38) == 0) {
      func_0x03256878(lVar13);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar19._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auStack_198 = func_0x03280b7c(uVar11,lVar13);
      uStack_180 = 0x3d60510;
      lVar8 = lVar16;
      lStack_168 = lVar13;
      auStack_178 = auVar19;
      if (*(long *)(lVar16 + 0x38) == 0) {
        func_0x03256878(lVar16);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auStack_198._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auStack_198._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 8))
                           (auStack_198._0_8_,auStack_198._8_8_,0);
        return lVar12;
      }
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auVar19 = func_0x03280b7c(uVar11,lVar16);
      uStack_1b0 = 0x3d60588;
      lVar13 = lVar8;
      lVar9 = param_4;
      lStack_1a0 = unaff_x22;
      lStack_188 = lVar16;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar19._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
        uVar11 = func_0x03280a2c(puVar10);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar20 = func_0x03280b7c(uVar11,param_4);
        auVar18._8_8_ = lVar9;
        auVar18._0_8_ = lVar13;
        lStack_118 = auVar20._8_8_;
        unaff_x22 = auVar20._0_8_;
        puVar4 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar12 = lVar13;
        lVar16 = lVar9;
        lStack_1c0 = lVar8;
        lStack_1b8 = param_4;
        auStack_1d0 = auVar19;
        if (*(long *)(lVar9 + 0x38) == 0) {
          func_0x03256878(lVar9);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar10 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x10))
                             (unaff_x22,lStack_118,lVar13);
          return lVar12;
        }
        uVar11 = func_0x03280a2c(puVar10);
        uVar7 = func_0x05ac7464(uVar11,0);
        uVar11 = 0x3d6068c;
        auVar19 = func_0x03280b7c(uVar7,lVar9);
        goto LAB_03d6068c;
      }
      lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar6 = &uStack_180;
      lVar16 = lStack_188;
      unaff_x22 = lStack_1a0;
      uVar11 = uStack_1b0;
      auVar18 = auStack_198;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar8 = 0;
      puVar6 = &uStack_140;
      lVar16 = lStack_148;
      uVar11 = uStack_160;
      auVar18 = auStack_158;
    }
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    lVar12 = 0;
    puVar4 = auStack_100;
    uVar11 = uStack_120;
    auVar18 = auStack_110;
LAB_03d6068c:
    puVar5 = (undefined8 *)((long)puVar4 + -0x30);
    *(undefined8 *)((long)puVar4 + -0x30) = uVar11;
    *(long *)((long)puVar4 + -0x20) = unaff_x22;
    *(long *)((long)puVar4 + -0x18) = lStack_118;
    *(undefined1 (*) [16])((long)puVar4 + -0x10) = auVar18;
    plVar17 = *(long **)(lVar16 + 0x38);
    lVar13 = lVar16;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar16);
      plVar17 = *(long **)(lVar16 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar19._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar19._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar19._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar19._8_8_);
      *(long *)(lVar8 + 0x28) = lVar12;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar12);
      return lVar8;
    }
    auVar18 = func_0x03280cac();
    unaff_x22 = 0;
    uVar11 = 0x3d60730;
LAB_03d60730:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar11;
    *(long *)((long)puVar5 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar19;
    *(long *)((long)puVar5 + -8) = lVar12;
    plVar17 = *(long **)(lVar13 + 0x38);
    lVar12 = lVar13;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar17 = *(long **)(lVar13 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    func_0x0531e428(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x38) = auVar18._0_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x38),auVar18._0_8_);
      *(undefined8 *)(lVar9 + 0x48) = auVar18._8_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x48),auVar18._8_8_);
      *(long *)(lVar9 + 0x28) = lVar16;
      func_0x032809c4((long *)(lVar9 + 0x28),lVar16);
      return lVar9;
    }
    auVar19 = func_0x03280cac();
    unaff_x22 = 0;
    uVar11 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar6 + -0x30) = uVar11;
  *(long *)((long)puVar6 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar18;
  *(long *)((long)puVar6 + -8) = lVar16;
  plVar17 = *(long **)(lVar12 + 0x38);
  lVar13 = lVar12;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar17 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + 8);
  func_0x0531ec78(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    *(undefined8 *)(lVar16 + 0x40) = auVar19._0_8_;
    func_0x032809c4((undefined8 *)(lVar16 + 0x40),auVar19._0_8_);
    *(undefined8 *)(lVar16 + 0x50) = auVar19._8_8_;
    func_0x032809c4((undefined8 *)(lVar16 + 0x50),auVar19._8_8_);
    *(long *)(lVar16 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar16 + 0x30),lVar8);
    return lVar16;
  }
  auVar18 = func_0x03280cac();
  lVar12 = auVar18._0_8_;
  *(undefined8 *)((long)puVar6 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar6 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar6 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x48) = auVar19;
  *(long *)((long)puVar6 + -0x38) = lVar8;
  plVar17 = *(long **)(lVar13 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar17 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x38) + 8);
  (*(code *)*puVar14)(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0xc0,lVar12);
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x100,auVar18._8_8_);
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x80,uVar11);
    return lVar16;
  }
  auVar19 = func_0x03280cac();
  lVar16 = auVar19._8_8_;
  plVar17 = auVar19._0_8_;
  *(undefined8 *)((long)puVar6 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar6 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x80) = auVar18;
  *(long *)((long)puVar6 + -0x70) = lVar13;
  *(undefined8 *)((long)puVar6 + -0x68) = uVar11;
  puVar15 = puVar14;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar14);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar8 = *plVar17;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13)) {
      lVar13 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar8 = *plVar17;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar8 = *plVar17;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar8 + 0x228))(plVar17,lVar16,*(undefined8 *)(lVar8 + 0x230));
          return lVar12;
        }
      }
      goto LAB_03d60c04;
    }
    lVar12 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar12 = func_0x03280b90(plVar17,lVar12);
    if (lVar12 == 0) {
      lVar12 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b68fa4(lVar12,plVar17,lVar16,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar13 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x04b713b0(lVar12,plVar17,lVar16,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar12;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar13 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar8 = func_0x03280b90(plVar17,lVar13);
    if (lVar8 != 0) {
      func_0x04b66610(lVar12,lVar8,lVar16,*(undefined8 *)(puVar14[7] + 0x30));
      return lVar12;
    }
  }
  auVar18 = func_0x03281048(plVar17,lVar13);
  lVar16 = auVar18._8_8_;
  plVar17 = auVar18._0_8_;
  *(undefined8 *)((long)puVar6 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar6 + -0xb8) = lVar13;
  *(long *)((long)puVar6 + -0xb0) = lVar12;
  *(undefined8 **)((long)puVar6 + -0xa8) = puVar14;
  *(undefined1 (*) [16])((long)puVar6 + -0xa0) = auVar19;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar15);
  }
  else {
    lVar12 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar8 = *plVar17;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 < *(byte *)(lVar12 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)) {
      lVar12 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar12 = func_0x03280b90(plVar17,lVar12);
      if (lVar12 != 0) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        lVar13 = *(long *)(puVar15[7] + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
        }
        lVar8 = func_0x03280b90(plVar17,lVar13);
        if (lVar8 != 0) {
          func_0x04b667e0(lVar12,lVar8,lVar16,*(undefined8 *)(puVar15[7] + 0x30));
          return lVar12;
        }
        goto LAB_03d60ee0;
      }
      lVar12 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b693d0(lVar12,plVar17,lVar16,*(undefined8 *)(puVar15[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar8 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b715c8(lVar12,plVar17,lVar16,*(undefined8 *)(puVar15[7] + 0x48));
        return lVar12;
      }
    }
    else {
      lVar12 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar8 = *plVar17;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar8 = *plVar17;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar8 + 0x228))(plVar17,lVar16,*(undefined8 *)(lVar8 + 0x230));
          return lVar12;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar12 = func_0x03281048(plVar17,lVar13);
  *(undefined8 *)((long)puVar6 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar6 + -0xd0) = auVar18;
  lVar13 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  func_0x03280ab0();
  if (lVar13 == 0) {
    lVar13 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar16 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    **(long **)(lVar16 + 0xb8) = lVar13;
    lVar12 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar12 + 0xb8),lVar13);
  }
  return lVar13;
}


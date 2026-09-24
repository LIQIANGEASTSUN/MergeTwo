/* Ghidra 12.1.2 native pseudocode; RVA 0x6A86B60; Merger.MergeBoard.Components.FeedingCombinationComponent.get_ConsumedItemIds; status ok */


long Merger_MergeBoard_Components_FeedingCombinationComponent__get_ConsumedItemIds
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x21;
  undefined8 uVar17;
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
  
  puVar9 = PTR_DAT_07831d08;
  if ((bRam0000000007e2a84b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831d10);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_07831d18);
    func_0x03280a18(PTR_DAT_07831d20);
    func_0x03280a18(PTR_DAT_07831d08);
    bRam0000000007e2a84b = 1;
  }
  lVar10 = *(long *)puVar9;
  uVar15 = *param_1;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar10 = *(long *)puVar9;
  }
  puVar3 = PTR_DAT_07831d10;
  puVar2 = PTR_DAT_0774ea58;
  lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar16 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar9;
    }
    uVar17 = **(undefined8 **)(lVar10 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831d18);
    param_4 = 0;
    func_0x053569b8(lVar16,uVar17,*(undefined8 *)PTR_DAT_07831d20);
    plVar11 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
    *plVar11 = lVar16;
    func_0x032809c4(plVar11,lVar16);
  }
  lVar14 = *(long *)puVar3;
  lVar10 = func_0x03d50a94(uVar15,lVar16);
  lVar16 = *(long *)puVar2;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (lVar10 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x04143d60(lVar14,lVar10,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return lVar14;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar18 = func_0x03280b7c(uVar15,lVar16);
  lVar10 = auVar18._8_8_;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x0419ce74(lVar16,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  lVar10 = auVar19._8_8_;
  uStack_60 = 0x3d600c8;
  auStack_50 = auVar18;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x041c2810(lVar16,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar18 = func_0x03280b7c(uVar15,lVar10);
  lVar10 = auVar18._8_8_;
  uStack_80 = 0x3d60144;
  auStack_70 = auVar19;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x041ddb58(lVar16,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  lVar10 = auVar19._8_8_;
  uStack_a0 = 0x3d601c0;
  auStack_90 = auVar18;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x041e617c(lVar16,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar18 = func_0x03280b7c(uVar15,lVar10);
  lVar10 = auVar18._8_8_;
  uStack_c0 = 0x3d6023c;
  auStack_b0 = auVar19;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x041e8ba0(lVar16,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  lVar10 = auVar19._8_8_;
  uStack_e0 = 0x3d602b8;
  auStack_d0 = auVar18;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 0x10))(lVar16,auVar19._0_8_);
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar18 = func_0x03280b7c(uVar15,lVar10);
  lVar10 = auVar18._8_8_;
  auStack_100[0] = 0x3d60338;
  auStack_f0 = auVar19;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x0420cec8(lVar16,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  uStack_120 = 0x3d603b4;
  lVar10 = lVar14;
  lStack_118 = unaff_x21;
  auStack_110 = auVar18;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  puVar9 = PTR_DAT_07779d10;
  if ((auVar19._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar18 = func_0x03280b7c(uVar15,lVar14);
    uStack_140 = 0x3d60428;
    lVar16 = lVar10;
    lStack_128 = lVar14;
    if (*(long *)(lVar10 + 0x38) == 0) {
      auStack_138 = auVar19;
      func_0x03256878(lVar10);
      auVar19 = auStack_138;
    }
    puVar9 = PTR_DAT_07779d10;
    auStack_138 = auVar19;
    if ((auVar18._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar18._8_8_ != 0)) {
      lVar16 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      lVar14 = 0;
      puVar5 = &uStack_120;
      lVar10 = lStack_128;
      uVar15 = uStack_140;
      goto LAB_03d60730;
    }
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar19 = func_0x03280b7c(uVar15,lVar10);
    uStack_160 = 0x3d6049c;
    lVar14 = lVar16;
    lStack_148 = lVar10;
    auStack_158 = auVar18;
    if (*(long *)(lVar16 + 0x38) == 0) {
      func_0x03256878(lVar16);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar19._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
      uVar15 = func_0x03280a2c(puVar9);
      uVar15 = func_0x05ac7464(uVar15,0);
      auStack_198 = func_0x03280b7c(uVar15,lVar16);
      uStack_180 = 0x3d60510;
      lVar7 = lVar14;
      lStack_168 = lVar16;
      auStack_178 = auVar19;
      if (*(long *)(lVar14 + 0x38) == 0) {
        func_0x03256878(lVar14);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auStack_198._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auStack_198._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8))
                           (auStack_198._0_8_,auStack_198._8_8_,0);
        return lVar10;
      }
      uVar15 = func_0x03280a2c(puVar9);
      uVar15 = func_0x05ac7464(uVar15,0);
      auVar19 = func_0x03280b7c(uVar15,lVar14);
      uStack_1b0 = 0x3d60588;
      lVar16 = lVar7;
      lVar8 = param_4;
      lStack_1a0 = unaff_x22;
      lStack_188 = lVar14;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar19._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
        uVar15 = func_0x03280a2c(puVar9);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar20 = func_0x03280b7c(uVar15,param_4);
        auVar18._8_8_ = lVar8;
        auVar18._0_8_ = lVar16;
        lStack_118 = auVar20._8_8_;
        unaff_x22 = auVar20._0_8_;
        puVar4 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar10 = lVar16;
        lVar14 = lVar8;
        lStack_1c0 = lVar7;
        lStack_1b8 = param_4;
        auStack_1d0 = auVar19;
        if (*(long *)(lVar8 + 0x38) == 0) {
          func_0x03256878(lVar8);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar9 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))
                             (unaff_x22,lStack_118,lVar16);
          return lVar10;
        }
        uVar15 = func_0x03280a2c(puVar9);
        uVar17 = func_0x05ac7464(uVar15,0);
        uVar15 = 0x3d6068c;
        auVar19 = func_0x03280b7c(uVar17,lVar8);
        goto LAB_03d6068c;
      }
      lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar6 = &uStack_180;
      lVar14 = lStack_188;
      unaff_x22 = lStack_1a0;
      uVar15 = uStack_1b0;
      auVar18 = auStack_198;
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      lVar7 = 0;
      puVar6 = &uStack_140;
      lVar14 = lStack_148;
      uVar15 = uStack_160;
      auVar18 = auStack_158;
    }
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    lVar10 = 0;
    puVar4 = auStack_100;
    uVar15 = uStack_120;
    auVar18 = auStack_110;
LAB_03d6068c:
    puVar5 = (undefined8 *)((long)puVar4 + -0x30);
    *(undefined8 *)((long)puVar4 + -0x30) = uVar15;
    *(long *)((long)puVar4 + -0x20) = unaff_x22;
    *(long *)((long)puVar4 + -0x18) = lStack_118;
    *(undefined1 (*) [16])((long)puVar4 + -0x10) = auVar18;
    plVar11 = *(long **)(lVar14 + 0x38);
    lVar16 = lVar14;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar11 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar7 = func_0x03280ca0();
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531dbd0(lVar7,0xfffffffe);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x38) = auVar19._0_8_;
      func_0x032809c4((undefined8 *)(lVar7 + 0x38),auVar19._0_8_);
      *(undefined8 *)(lVar7 + 0x48) = auVar19._8_8_;
      func_0x032809c4((undefined8 *)(lVar7 + 0x48),auVar19._8_8_);
      *(long *)(lVar7 + 0x28) = lVar10;
      func_0x032809c4((long *)(lVar7 + 0x28),lVar10);
      return lVar7;
    }
    auVar18 = func_0x03280cac();
    unaff_x22 = 0;
    uVar15 = 0x3d60730;
LAB_03d60730:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar15;
    *(long *)((long)puVar5 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar19;
    *(long *)((long)puVar5 + -8) = lVar10;
    plVar11 = *(long **)(lVar16 + 0x38);
    lVar10 = lVar16;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar16);
      plVar11 = *(long **)(lVar16 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar7 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    func_0x0531e428(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar18._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar18._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar18._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar18._8_8_);
      *(long *)(lVar8 + 0x28) = lVar14;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar14);
      return lVar8;
    }
    auVar19 = func_0x03280cac();
    unaff_x22 = 0;
    uVar15 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar6 + -0x30) = uVar15;
  *(long *)((long)puVar6 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar18;
  *(long *)((long)puVar6 + -8) = lVar14;
  plVar11 = *(long **)(lVar10 + 0x38);
  lVar16 = lVar10;
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar11 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar14 = func_0x03280ca0();
  uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 8);
  func_0x0531ec78(lVar14,0xfffffffe);
  if (lVar14 != 0) {
    *(undefined8 *)(lVar14 + 0x40) = auVar19._0_8_;
    func_0x032809c4((undefined8 *)(lVar14 + 0x40),auVar19._0_8_);
    *(undefined8 *)(lVar14 + 0x50) = auVar19._8_8_;
    func_0x032809c4((undefined8 *)(lVar14 + 0x50),auVar19._8_8_);
    *(long *)(lVar14 + 0x30) = lVar7;
    func_0x032809c4((long *)(lVar14 + 0x30),lVar7);
    return lVar14;
  }
  auVar18 = func_0x03280cac();
  lVar10 = auVar18._0_8_;
  *(undefined8 *)((long)puVar6 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar6 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar6 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x48) = auVar19;
  *(long *)((long)puVar6 + -0x38) = lVar7;
  plVar11 = *(long **)(lVar16 + 0x38);
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar16);
    plVar11 = *(long **)(lVar16 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar14 = func_0x03280ca0();
  puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x38) + 8);
  (*(code *)*puVar12)(lVar14,0xfffffffe);
  if (lVar14 != 0) {
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar16 + 0x38) + 0x80) + 0xc0,lVar10);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar16 + 0x38) + 0x80) + 0x100,auVar18._8_8_);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar16 + 0x38) + 0x80) + 0x80,uVar15);
    return lVar14;
  }
  auVar19 = func_0x03280cac();
  lVar14 = auVar19._8_8_;
  plVar11 = auVar19._0_8_;
  *(undefined8 *)((long)puVar6 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar6 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x80) = auVar18;
  *(long *)((long)puVar6 + -0x70) = lVar16;
  *(undefined8 *)((long)puVar6 + -0x68) = uVar15;
  puVar13 = puVar12;
  if (puVar12[7] == 0) {
    func_0x03256878(puVar12);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar12);
LAB_03d60c04:
    func_0x03281048(plVar11);
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(puVar12[7] + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar7 = *plVar11;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(lVar16 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) == lVar16)) {
      lVar16 = *(long *)(puVar12[7] + 0x10);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
        lVar7 = *plVar11;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar16 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) == lVar16))
      {
        lVar16 = *(long *)(puVar12[7] + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
          lVar7 = *plVar11;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar16 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) == lVar16)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar7 + 0x228))(plVar11,lVar14,*(undefined8 *)(lVar7 + 0x230));
          return lVar10;
        }
      }
      goto LAB_03d60c04;
    }
    lVar10 = *(long *)(puVar12[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar10 = func_0x03280b90(plVar11,lVar10);
    if (lVar10 == 0) {
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
        lVar10 = func_0x03280ca0();
        func_0x04b68fa4(lVar10,plVar11,lVar14,*(undefined8 *)(puVar12[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar12[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar10 = func_0x03280ca0();
      lVar16 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      if ((*(byte *)(lVar16 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) == lVar16
         )) {
        func_0x04b713b0(lVar10,plVar11,lVar14,*(undefined8 *)(puVar12[7] + 0x48));
        return lVar10;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar12[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    lVar16 = *(long *)(puVar12[7] + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    lVar7 = func_0x03280b90(plVar11,lVar16);
    if (lVar7 != 0) {
      func_0x04b66610(lVar10,lVar7,lVar14,*(undefined8 *)(puVar12[7] + 0x30));
      return lVar10;
    }
  }
  auVar18 = func_0x03281048(plVar11,lVar16);
  lVar14 = auVar18._8_8_;
  plVar11 = auVar18._0_8_;
  *(undefined8 *)((long)puVar6 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar6 + -0xb8) = lVar16;
  *(long *)((long)puVar6 + -0xb0) = lVar10;
  *(undefined8 **)((long)puVar6 + -0xa8) = puVar12;
  *(undefined1 (*) [16])((long)puVar6 + -0xa0) = auVar19;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar13);
  }
  else {
    lVar10 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar7 = *plVar11;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((bVar1 < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)) {
      lVar10 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar10 = func_0x03280b90(plVar11,lVar10);
      if (lVar10 != 0) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        lVar16 = *(long *)(puVar13[7] + 0x20);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        lVar7 = func_0x03280b90(plVar11,lVar16);
        if (lVar7 != 0) {
          func_0x04b667e0(lVar10,lVar7,lVar14,*(undefined8 *)(puVar13[7] + 0x30));
          return lVar10;
        }
        goto LAB_03d60ee0;
      }
      lVar10 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b693d0(lVar10,plVar11,lVar14,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar10 = func_0x03280ca0();
      lVar7 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      if ((*(byte *)(lVar7 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) == lVar7))
      {
        func_0x04b715c8(lVar10,plVar11,lVar14,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar10;
      }
    }
    else {
      lVar10 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar7 = *plVar11;
        bVar1 = *(byte *)(lVar7 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar7 = *plVar11;
          bVar1 = *(byte *)(lVar7 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar7 + 0x228))(plVar11,lVar14,*(undefined8 *)(lVar7 + 0x230));
          return lVar10;
        }
      }
    }
  }
  func_0x03281048(plVar11);
LAB_03d60ee0:
  lVar10 = func_0x03281048(plVar11,lVar16);
  *(undefined8 *)((long)puVar6 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar6 + -0xd0) = auVar18;
  lVar16 = *(long *)(lVar10 + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = **(long **)(lVar16 + 0xb8);
  func_0x03280ab0();
  if (lVar16 == 0) {
    lVar16 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar14 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    **(long **)(lVar14 + 0xb8) = lVar16;
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar10 + 0xb8),lVar16);
  }
  return lVar16;
}


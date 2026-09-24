/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7DF58; Merger.MergeBoard.Models.TileConfigurationModel.GetTileConfiguration; status ok */


long Merger_MergeBoard_Models_TileConfigurationModel__GetTileConfiguration
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 auStack_1e0 [2];
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
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
  
  auVar19._8_8_ = unaff_x21;
  auVar19._0_8_ = unaff_x22;
  if ((bRam0000000007e2a74a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831a00);
    func_0x03280a18(PTR_DAT_07831a08);
    bRam0000000007e2a74a = 1;
  }
  puVar10 = PTR_DAT_07831a08;
  if (*(long *)(param_1 + 0x10) == 0) {
    auVar19 = func_0x03280cac();
    uStack_40 = 0x6b7dfc4;
    if ((bRam0000000007e2a74b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831a10);
      bRam0000000007e2a74b = 1;
    }
    auStack_50._8_8_ = 0;
    lVar13 = *(long *)(auVar19._0_8_ + 0x10);
    lVar11 = 0;
    if ((lVar13 != 0) &&
       (uVar12 = func_0x04f37608(lVar13,auVar19._8_8_ & 0xffffffff,auStack_50 + 8,
                                 *(undefined8 *)PTR_DAT_07831a10), lVar11 = auStack_50._8_8_,
       (uVar12 & 1) == 0)) {
      lVar11 = 0;
    }
    return lVar11;
  }
  lVar11 = func_0x04f35968(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_07831a00);
  lVar13 = *(long *)puVar10;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (lVar11 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar5 = func_0x03280ca0();
    func_0x04143d60(lVar5,lVar11,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar5;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar17 = func_0x03280b7c(uVar6,lVar13);
  lVar11 = auVar17._8_8_;
  uStack_40 = 0x3d6004c;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0419ce74(lVar13,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar18 = func_0x03280b7c(uVar6,lVar11);
  lVar11 = auVar18._8_8_;
  uStack_60 = 0x3d600c8;
  auStack_50 = auVar17;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041c2810(lVar13,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar17 = func_0x03280b7c(uVar6,lVar11);
  lVar11 = auVar17._8_8_;
  uStack_80 = 0x3d60144;
  auStack_70 = auVar18;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041ddb58(lVar13,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar18 = func_0x03280b7c(uVar6,lVar11);
  lVar11 = auVar18._8_8_;
  uStack_a0 = 0x3d601c0;
  auStack_90 = auVar17;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e617c(lVar13,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar17 = func_0x03280b7c(uVar6,lVar11);
  lVar11 = auVar17._8_8_;
  uStack_c0 = 0x3d6023c;
  auStack_b0 = auVar18;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e8ba0(lVar13,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar18 = func_0x03280b7c(uVar6,lVar11);
  lVar11 = auVar18._8_8_;
  uStack_e0 = 0x3d602b8;
  auStack_d0 = auVar17;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar18._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))(lVar13,auVar18._0_8_);
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar17 = func_0x03280b7c(uVar6,lVar11);
  lVar11 = auVar17._8_8_;
  auStack_100[0] = 0x3d60338;
  auStack_f0 = auVar18;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0420cec8(lVar13,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar17 = func_0x03280b7c(uVar6,lVar11);
  uStack_120 = 0x3d603b4;
  lVar13 = param_3;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03256878(param_3);
  }
  puVar10 = PTR_DAT_07779d10;
  if ((auVar17._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    auVar19 = func_0x03280b7c(uVar6,param_3);
    uStack_140 = 0x3d60428;
    lVar11 = lVar13;
    lStack_128 = param_3;
    if (*(long *)(lVar13 + 0x38) == 0) {
      auStack_138 = auVar17;
      func_0x03256878(lVar13);
      auVar17 = auStack_138;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_138 = auVar17;
    if ((auVar19._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar5 = 0;
      puVar3 = &uStack_120;
      lVar13 = lStack_128;
      uVar6 = uStack_140;
      goto LAB_03d60730;
    }
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    auVar17 = func_0x03280b7c(uVar6,lVar13);
    uStack_160 = 0x3d6049c;
    lVar5 = lVar11;
    lStack_148 = lVar13;
    if (*(long *)(lVar11 + 0x38) == 0) {
      auStack_158 = auVar19;
      func_0x03256878(lVar11);
      auVar19 = auStack_158;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_158 = auVar19;
    if ((auVar17._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
      uVar6 = func_0x03280a2c(puVar10);
      uVar6 = func_0x05ac7464(uVar6,0);
      auVar19 = func_0x03280b7c(uVar6,lVar11);
      uStack_180 = 0x3d60510;
      lVar8 = lVar5;
      lStack_168 = lVar11;
      auStack_178 = auVar17;
      if (*(long *)(lVar5 + 0x38) == 0) {
        func_0x03256878(lVar5);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar19._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x38) + 8))
                           (auVar19._0_8_,auVar19._8_8_,0);
        return lVar11;
      }
      uVar6 = func_0x03280a2c(puVar10);
      uVar6 = func_0x05ac7464(uVar6,0);
      auVar17 = func_0x03280b7c(uVar6,lVar5);
      uStack_1b0 = 0x3d60588;
      lVar9 = lVar8;
      lVar11 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar17._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
        uVar6 = func_0x03280a2c(puVar10);
        uVar6 = func_0x05ac7464(uVar6,0);
        auVar19 = func_0x03280b7c(uVar6,param_4);
        puVar2 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar13 = lVar9;
        lVar5 = lVar11;
        lStack_1c0 = lVar8;
        lStack_1b8 = param_4;
        auStack_1d0 = auVar17;
        if (*(long *)(lVar11 + 0x38) == 0) {
          func_0x03256878(lVar11);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((auVar19._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))
                             (auVar19._0_8_,auVar19._8_8_,lVar9);
          return lVar11;
        }
        uVar6 = func_0x03280a2c(puVar10);
        uVar7 = func_0x05ac7464(uVar6,0);
        uVar6 = 0x3d6068c;
        auVar17 = func_0x03280b7c(uVar7,lVar11);
        goto LAB_03d6068c;
      }
      lVar13 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar4 = &uStack_180;
      uVar6 = uStack_1b0;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      lVar8 = 0;
      puVar4 = &uStack_140;
      lVar5 = lStack_148;
      uVar6 = uStack_160;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    lVar13 = 0;
    puVar2 = auStack_100;
    lVar9 = 0;
    uVar6 = uStack_120;
LAB_03d6068c:
    puVar3 = (undefined8 *)((long)puVar2 + -0x30);
    *(undefined8 *)((long)puVar2 + -0x30) = uVar6;
    *(undefined1 (*) [16])((long)puVar2 + -0x20) = auVar19;
    *(long *)((long)puVar2 + -0x10) = lVar9;
    *(long *)((long)puVar2 + -8) = lVar11;
    plVar16 = *(long **)(lVar5 + 0x38);
    lVar11 = lVar5;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar5);
      plVar16 = *(long **)(lVar5 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar17._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar17._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar17._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar17._8_8_);
      *(long *)(lVar8 + 0x28) = lVar13;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar13);
      return lVar8;
    }
    auVar19 = func_0x03280cac();
    unaff_x22 = 0;
    uVar6 = 0x3d60730;
LAB_03d60730:
    puVar4 = (undefined8 *)((long)puVar3 + -0x30);
    *(undefined8 *)((long)puVar3 + -0x30) = uVar6;
    *(undefined8 *)((long)puVar3 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar3 + -0x18) = auVar17;
    *(long *)((long)puVar3 + -8) = lVar13;
    plVar16 = *(long **)(lVar11 + 0x38);
    lVar13 = lVar11;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar11);
      plVar16 = *(long **)(lVar11 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
    func_0x0531e428(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x38) = auVar19._0_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x38),auVar19._0_8_);
      *(undefined8 *)(lVar9 + 0x48) = auVar19._8_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x48),auVar19._8_8_);
      *(long *)(lVar9 + 0x28) = lVar5;
      func_0x032809c4((long *)(lVar9 + 0x28),lVar5);
      return lVar9;
    }
    auVar17 = func_0x03280cac();
    unaff_x22 = 0;
    uVar6 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar4 + -0x30) = uVar6;
  *(undefined8 *)((long)puVar4 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar19;
  *(long *)((long)puVar4 + -8) = lVar5;
  plVar16 = *(long **)(lVar13 + 0x38);
  lVar11 = lVar13;
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar16 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  uVar6 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x0531ec78(lVar5,0xfffffffe);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x40) = auVar17._0_8_;
    func_0x032809c4((undefined8 *)(lVar5 + 0x40),auVar17._0_8_);
    *(undefined8 *)(lVar5 + 0x50) = auVar17._8_8_;
    func_0x032809c4((undefined8 *)(lVar5 + 0x50),auVar17._8_8_);
    *(long *)(lVar5 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar5 + 0x30),lVar8);
    return lVar5;
  }
  auVar19 = func_0x03280cac();
  lVar13 = auVar19._0_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar4 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x48) = auVar17;
  *(long *)((long)puVar4 + -0x38) = lVar8;
  plVar16 = *(long **)(lVar11 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar11);
    plVar16 = *(long **)(lVar11 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x38) + 8);
  (*(code *)*puVar14)(lVar5,0xfffffffe);
  if (lVar5 != 0) {
    func_0x02f17738(lVar5,*(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0xc0,lVar13);
    func_0x02f17738(lVar5,*(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0x100,auVar19._8_8_);
    func_0x02f17738(lVar5,*(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0x80,uVar6);
    return lVar5;
  }
  auVar17 = func_0x03280cac();
  lVar5 = auVar17._8_8_;
  plVar16 = auVar17._0_8_;
  *(undefined8 *)((long)puVar4 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar4 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x80) = auVar19;
  *(long *)((long)puVar4 + -0x70) = lVar11;
  *(undefined8 *)((long)puVar4 + -0x68) = uVar6;
  puVar15 = puVar14;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar5 == 0)) {
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    func_0x03280b7c(uVar6,puVar14);
LAB_03d60c04:
    func_0x03281048(plVar16);
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar8 = *plVar16;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)) {
      lVar11 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
        lVar8 = *plVar16;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
          lVar8 = *plVar16;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar8 + 0x228))(plVar16,lVar5,*(undefined8 *)(lVar8 + 0x230));
          return lVar11;
        }
      }
      goto LAB_03d60c04;
    }
    lVar11 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar11 = func_0x03280b90(plVar16,lVar11);
    if (lVar11 == 0) {
      lVar11 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b68fa4(lVar11,plVar16,lVar5,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar11 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
         )) {
        func_0x04b713b0(lVar13,plVar16,lVar5,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar13;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar11 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar8 = func_0x03280b90(plVar16,lVar11);
    if (lVar8 != 0) {
      func_0x04b66610(lVar13,lVar8,lVar5,*(undefined8 *)(puVar14[7] + 0x30));
      return lVar13;
    }
  }
  auVar19 = func_0x03281048(plVar16,lVar11);
  lVar5 = auVar19._8_8_;
  plVar16 = auVar19._0_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar4 + -0xb8) = lVar11;
  *(long *)((long)puVar4 + -0xb0) = lVar13;
  *(undefined8 **)((long)puVar4 + -0xa8) = puVar14;
  *(undefined1 (*) [16])((long)puVar4 + -0xa0) = auVar17;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar5 == 0)) {
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    func_0x03280b7c(uVar6,puVar15);
  }
  else {
    lVar13 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar8 = *plVar16;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 < *(byte *)(lVar13 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)) {
      lVar13 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar13 = func_0x03280b90(plVar16,lVar13);
      if (lVar13 != 0) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        lVar11 = *(long *)(puVar15[7] + 0x20);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
        }
        lVar8 = func_0x03280b90(plVar16,lVar11);
        if (lVar8 != 0) {
          func_0x04b667e0(lVar13,lVar8,lVar5,*(undefined8 *)(puVar15[7] + 0x30));
          return lVar13;
        }
        goto LAB_03d60ee0;
      }
      lVar13 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b693d0(lVar11,plVar16,lVar5,*(undefined8 *)(puVar15[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar8 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b715c8(lVar13,plVar16,lVar5,*(undefined8 *)(puVar15[7] + 0x48));
        return lVar13;
      }
    }
    else {
      lVar13 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar8 = *plVar16;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar8 = *plVar16;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar8 + 0x228))(plVar16,lVar5,*(undefined8 *)(lVar8 + 0x230));
          return lVar11;
        }
      }
    }
  }
  func_0x03281048(plVar16);
LAB_03d60ee0:
  lVar11 = func_0x03281048(plVar16,lVar11);
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar4 + -0xd0) = auVar19;
  lVar13 = *(long *)(lVar11 + 0x20);
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
    lVar13 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c();
    }
    **(long **)(lVar5 + 0xb8) = lVar13;
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar11 + 0xb8),lVar13);
  }
  return lVar13;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x4C041EC; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.GetToolGraphsFromItems; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetToolGraphsFromItems
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  
  puVar6 = PTR_DAT_07780038;
  puVar5 = PTR_DAT_07780030;
  puVar4 = PTR_DAT_07780028;
  puVar3 = PTR_DAT_07780020;
  puVar2 = PTR_DAT_07780018;
  puVar10 = PTR_DAT_07780010;
  if ((bRam0000000007e1ae73 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780030);
    func_0x03280a18(PTR_DAT_07780018);
    func_0x03280a18(PTR_DAT_07780038);
    func_0x03280a18(PTR_DAT_07780028);
    func_0x03280a18(PTR_DAT_07780010);
    func_0x03280a18(PTR_DAT_07780020);
    bRam0000000007e1ae73 = 1;
  }
  uVar11 = func_0x03280ca0(*(undefined8 *)puVar10);
  func_0x053569b8(uVar11,param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88)
                  ,0);
  uVar11 = func_0x03d50a94(param_2,uVar11,*(undefined8 *)puVar2);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  lVar20 = 0;
  func_0x05355fbc(uVar12,param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90)
                 );
  lVar18 = *(long *)puVar4;
  uVar11 = func_0x03d872a8(uVar11,uVar12);
  lVar13 = func_0x03d3c654(uVar11,*(undefined8 *)puVar5);
  lVar14 = *(long *)puVar6;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (lVar13 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x04143d60(lVar18,lVar13,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar18;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar14);
  lVar13 = auVar22._8_8_;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0419ce74(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar13);
  lVar13 = auVar22._8_8_;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041c2810(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar13);
  lVar13 = auVar23._8_8_;
  uStack_80 = 0x3d60144;
  auStack_70 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041ddb58(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar13);
  lVar13 = auVar22._8_8_;
  uStack_a0 = 0x3d601c0;
  auStack_90 = auVar23;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041e617c(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar13);
  lVar13 = auVar23._8_8_;
  uStack_c0 = 0x3d6023c;
  auStack_b0 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041e8ba0(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar13);
  lVar13 = auVar22._8_8_;
  uStack_e0 = 0x3d602b8;
  auStack_d0 = auVar23;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))(lVar14,auVar22._0_8_);
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar23 = func_0x03280b7c(uVar11,lVar13);
  lVar13 = auVar23._8_8_;
  auStack_100[0] = 0x3d60338;
  auStack_f0 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0420cec8(lVar14,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar22 = func_0x03280b7c(uVar11,lVar13);
  uStack_120 = 0x3d603b4;
  lVar13 = lVar18;
  lStack_118 = unaff_x21;
  auStack_110 = auVar23;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  puVar10 = PTR_DAT_07779d10;
  if ((auVar22._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar23 = func_0x03280b7c(uVar11,lVar18);
    uStack_140 = 0x3d60428;
    lVar14 = lVar13;
    lStack_128 = lVar18;
    if (*(long *)(lVar13 + 0x38) == 0) {
      auStack_138 = auVar22;
      func_0x03256878(lVar13);
      auVar22 = auStack_138;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_138 = auVar22;
    if ((auVar23._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
      lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar18 = 0;
      puVar8 = &uStack_120;
      lVar13 = lStack_128;
      uVar11 = uStack_140;
      goto LAB_03d60730;
    }
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar22 = func_0x03280b7c(uVar11,lVar13);
    uStack_160 = 0x3d6049c;
    lVar18 = lVar14;
    lStack_148 = lVar13;
    auStack_158 = auVar23;
    if (*(long *)(lVar14 + 0x38) == 0) {
      func_0x03256878(lVar14);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auStack_198 = func_0x03280b7c(uVar11,lVar14);
      uStack_180 = 0x3d60510;
      lVar15 = lVar18;
      lStack_168 = lVar14;
      auStack_178 = auVar22;
      if (*(long *)(lVar18 + 0x38) == 0) {
        func_0x03256878(lVar18);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auStack_198._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auStack_198._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))
                           (auStack_198._0_8_,auStack_198._8_8_,0);
        return lVar13;
      }
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auVar22 = func_0x03280b7c(uVar11,lVar18);
      uStack_1b0 = 0x3d60588;
      lVar14 = lVar15;
      lVar19 = lVar20;
      lStack_1a0 = unaff_x22;
      lStack_188 = lVar18;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar22._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
        uVar11 = func_0x03280a2c(puVar10);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar24 = func_0x03280b7c(uVar11,lVar20);
        auVar23._8_8_ = lVar19;
        auVar23._0_8_ = lVar14;
        lStack_118 = auVar24._8_8_;
        unaff_x22 = auVar24._0_8_;
        puVar7 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar13 = lVar14;
        lVar18 = lVar19;
        lStack_1c0 = lVar15;
        lStack_1b8 = lVar20;
        auStack_1d0 = auVar22;
        if (*(long *)(lVar19 + 0x38) == 0) {
          func_0x03256878(lVar19);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar10 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x10))
                             (unaff_x22,lStack_118,lVar14);
          return lVar13;
        }
        uVar11 = func_0x03280a2c(puVar10);
        uVar12 = func_0x05ac7464(uVar11,0);
        uVar11 = 0x3d6068c;
        auVar22 = func_0x03280b7c(uVar12,lVar19);
        goto LAB_03d6068c;
      }
      lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      puVar9 = &uStack_180;
      lVar18 = lStack_188;
      unaff_x22 = lStack_1a0;
      uVar11 = uStack_1b0;
      auVar23 = auStack_198;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      lVar15 = 0;
      puVar9 = &uStack_140;
      lVar18 = lStack_148;
      uVar11 = uStack_160;
      auVar23 = auStack_158;
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    lVar13 = 0;
    puVar7 = auStack_100;
    uVar11 = uStack_120;
    auVar23 = auStack_110;
LAB_03d6068c:
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar11;
    *(long *)((long)puVar7 + -0x20) = unaff_x22;
    *(long *)((long)puVar7 + -0x18) = lStack_118;
    *(undefined1 (*) [16])((long)puVar7 + -0x10) = auVar23;
    plVar21 = *(long **)(lVar18 + 0x38);
    lVar14 = lVar18;
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar21 = *(long **)(lVar18 + 0x38);
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar20 = func_0x03280ca0();
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    func_0x0531dbd0(lVar20,0xfffffffe);
    if (lVar20 != 0) {
      *(undefined8 *)(lVar20 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar20 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x48),auVar22._8_8_);
      *(long *)(lVar20 + 0x28) = lVar13;
      func_0x032809c4((long *)(lVar20 + 0x28),lVar13);
      return lVar20;
    }
    auVar23 = func_0x03280cac();
    unaff_x22 = 0;
    uVar11 = 0x3d60730;
LAB_03d60730:
    puVar9 = (undefined8 *)((long)puVar8 + -0x30);
    *(undefined8 *)((long)puVar8 + -0x30) = uVar11;
    *(long *)((long)puVar8 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar22;
    *(long *)((long)puVar8 + -8) = lVar13;
    plVar21 = *(long **)(lVar14 + 0x38);
    lVar13 = lVar14;
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar21 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar20 = func_0x03280ca0();
    lVar15 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531e428(lVar20,0xfffffffe);
    if (lVar20 != 0) {
      *(undefined8 *)(lVar20 + 0x38) = auVar23._0_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x38),auVar23._0_8_);
      *(undefined8 *)(lVar20 + 0x48) = auVar23._8_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x48),auVar23._8_8_);
      *(long *)(lVar20 + 0x28) = lVar18;
      func_0x032809c4((long *)(lVar20 + 0x28),lVar18);
      return lVar20;
    }
    auVar22 = func_0x03280cac();
    unaff_x22 = 0;
    uVar11 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar9 + -0x30) = uVar11;
  *(long *)((long)puVar9 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar9 + -0x18) = auVar23;
  *(long *)((long)puVar9 + -8) = lVar18;
  plVar21 = *(long **)(lVar13 + 0x38);
  lVar14 = lVar13;
  if (plVar21 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar21 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x0531ec78(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    *(undefined8 *)(lVar18 + 0x40) = auVar22._0_8_;
    func_0x032809c4((undefined8 *)(lVar18 + 0x40),auVar22._0_8_);
    *(undefined8 *)(lVar18 + 0x50) = auVar22._8_8_;
    func_0x032809c4((undefined8 *)(lVar18 + 0x50),auVar22._8_8_);
    *(long *)(lVar18 + 0x30) = lVar15;
    func_0x032809c4((long *)(lVar18 + 0x30),lVar15);
    return lVar18;
  }
  auVar23 = func_0x03280cac();
  lVar13 = auVar23._0_8_;
  *(undefined8 *)((long)puVar9 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar9 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar9 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar9 + -0x48) = auVar22;
  *(long *)((long)puVar9 + -0x38) = lVar15;
  plVar21 = *(long **)(lVar14 + 0x38);
  if (plVar21 == (long *)0x0) {
    func_0x03256878(lVar14);
    plVar21 = *(long **)(lVar14 + 0x38);
  }
  if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  puVar16 = *(undefined8 **)(*(long *)(lVar14 + 0x38) + 8);
  (*(code *)*puVar16)(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    func_0x02f17738(lVar18,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0xc0,lVar13);
    func_0x02f17738(lVar18,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x100,auVar23._8_8_);
    func_0x02f17738(lVar18,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x80,uVar11);
    return lVar18;
  }
  auVar22 = func_0x03280cac();
  lVar18 = auVar22._8_8_;
  plVar21 = auVar22._0_8_;
  *(undefined8 *)((long)puVar9 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar9 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar9 + -0x80) = auVar23;
  *(long *)((long)puVar9 + -0x70) = lVar14;
  *(undefined8 *)((long)puVar9 + -0x68) = uVar11;
  puVar17 = puVar16;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar21 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar16);
LAB_03d60c04:
    func_0x03281048(plVar21);
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar20 = *plVar21;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14)) {
      lVar14 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar20 = *plVar21;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar20 = *plVar21;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(lVar20 + 0x228))(plVar21,lVar18,*(undefined8 *)(lVar20 + 0x230));
          return lVar13;
        }
      }
      goto LAB_03d60c04;
    }
    lVar13 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar13 = func_0x03280b90(plVar21,lVar13);
    if (lVar13 == 0) {
      lVar13 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        func_0x04b68fa4(lVar13,plVar21,lVar18,*(undefined8 *)(puVar16[7] + 0x58));
        return lVar13;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar14 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
         )) {
        func_0x04b713b0(lVar13,plVar21,lVar18,*(undefined8 *)(puVar16[7] + 0x48));
        return lVar13;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar14 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar20 = func_0x03280b90(plVar21,lVar14);
    if (lVar20 != 0) {
      func_0x04b66610(lVar13,lVar20,lVar18,*(undefined8 *)(puVar16[7] + 0x30));
      return lVar13;
    }
  }
  auVar23 = func_0x03281048(plVar21,lVar14);
  lVar18 = auVar23._8_8_;
  plVar21 = auVar23._0_8_;
  *(undefined8 *)((long)puVar9 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar9 + -0xb8) = lVar14;
  *(long *)((long)puVar9 + -0xb0) = lVar13;
  *(undefined8 **)((long)puVar9 + -0xa8) = puVar16;
  *(undefined1 (*) [16])((long)puVar9 + -0xa0) = auVar22;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar21 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar17);
  }
  else {
    lVar13 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar20 = *plVar21;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((bVar1 < *(byte *)(lVar13 + 0x130)) ||
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)) {
      lVar13 = *(long *)(puVar17[7] + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar13 = func_0x03280b90(plVar21,lVar13);
      if (lVar13 != 0) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        lVar14 = *(long *)(puVar17[7] + 0x20);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
        }
        lVar20 = func_0x03280b90(plVar21,lVar14);
        if (lVar20 != 0) {
          func_0x04b667e0(lVar13,lVar20,lVar18,*(undefined8 *)(puVar17[7] + 0x30));
          return lVar13;
        }
        goto LAB_03d60ee0;
      }
      lVar13 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        func_0x04b693d0(lVar13,plVar21,lVar18,*(undefined8 *)(puVar17[7] + 0x58));
        return lVar13;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar20 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(lVar13,plVar21,lVar18,*(undefined8 *)(puVar17[7] + 0x48));
        return lVar13;
      }
    }
    else {
      lVar13 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar20 = *plVar21;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar20 = *plVar21;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(lVar20 + 0x228))(plVar21,lVar18,*(undefined8 *)(lVar20 + 0x230));
          return lVar13;
        }
      }
    }
  }
  func_0x03281048(plVar21);
LAB_03d60ee0:
  lVar13 = func_0x03281048(plVar21,lVar14);
  *(undefined8 *)((long)puVar9 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar9 + -0xd0) = auVar23;
  lVar14 = *(long *)(lVar13 + 0x20);
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
    lVar14 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar18 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    **(long **)(lVar18 + 0xb8) = lVar14;
    lVar13 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar13 + 0xb8),lVar14);
  }
  return lVar14;
}


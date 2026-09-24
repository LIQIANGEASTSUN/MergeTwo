/* Ghidra 12.1.2 native pseudocode; RVA 0x69048B4; MergeEngine.ECS.Components.Board.BoardQueueComponent.ToList; status ok */


long MergeEngine_ECS_Components_Board_BoardQueueComponent__ToList
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  
  puVar2 = PTR_DAT_078269d8;
  puVar10 = PTR_DAT_07826950;
  if ((bRam0000000007e2991c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826950);
    func_0x03280a18(PTR_DAT_078269d8);
    bRam0000000007e2991c = 1;
  }
  lVar15 = *(long *)puVar10;
  lVar11 = func_0x03d37218(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  lVar12 = *(long *)puVar2;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (lVar11 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x04143d60(lVar15,lVar11,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar15;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar17 = func_0x03280b7c(uVar6,lVar12);
  lVar11 = auVar17._8_8_;
  uStack_40 = 0x3d6004c;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0419ce74(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
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
    lVar12 = func_0x03280ca0();
    func_0x041c2810(lVar12,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
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
    lVar12 = func_0x03280ca0();
    func_0x041ddb58(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
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
    lVar12 = func_0x03280ca0();
    func_0x041e617c(lVar12,auVar18._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
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
    lVar12 = func_0x03280ca0();
    func_0x041e8ba0(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
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
    lVar12 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))(lVar12,auVar18._0_8_);
    return lVar12;
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
    lVar12 = func_0x03280ca0();
    func_0x0420cec8(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar6 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar6 = func_0x05ac7464(uVar6,0);
  auVar18 = func_0x03280b7c(uVar6,lVar11);
  uStack_120 = 0x3d603b4;
  lVar11 = lVar15;
  lStack_118 = unaff_x21;
  auStack_110 = auVar17;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  puVar10 = PTR_DAT_07779d10;
  if ((auVar18._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar18._8_8_ == 0)) {
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    auVar17 = func_0x03280b7c(uVar6,lVar15);
    uStack_140 = 0x3d60428;
    lVar12 = lVar11;
    lStack_128 = lVar15;
    if (*(long *)(lVar11 + 0x38) == 0) {
      auStack_138 = auVar18;
      func_0x03256878(lVar11);
      auVar18 = auStack_138;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_138 = auVar18;
    if ((auVar17._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar17._8_8_ != 0)) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      lVar15 = 0;
      puVar4 = &uStack_120;
      lVar11 = lStack_128;
      uVar6 = uStack_140;
      goto LAB_03d60730;
    }
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    auVar18 = func_0x03280b7c(uVar6,lVar11);
    uStack_160 = 0x3d6049c;
    lVar15 = lVar12;
    lStack_148 = lVar11;
    auStack_158 = auVar17;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar18._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar18._8_8_ == 0)) {
      uVar6 = func_0x03280a2c(puVar10);
      uVar6 = func_0x05ac7464(uVar6,0);
      auStack_198 = func_0x03280b7c(uVar6,lVar12);
      uStack_180 = 0x3d60510;
      lVar8 = lVar15;
      lStack_168 = lVar12;
      auStack_178 = auVar18;
      if (*(long *)(lVar15 + 0x38) == 0) {
        func_0x03256878(lVar15);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auStack_198._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auStack_198._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8))
                           (auStack_198._0_8_,auStack_198._8_8_,0);
        return lVar11;
      }
      uVar6 = func_0x03280a2c(puVar10);
      uVar6 = func_0x05ac7464(uVar6,0);
      auVar18 = func_0x03280b7c(uVar6,lVar15);
      uStack_1b0 = 0x3d60588;
      lVar12 = lVar8;
      lVar9 = param_4;
      lStack_1a0 = unaff_x22;
      lStack_188 = lVar15;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar18._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar18._8_8_ == 0)) {
        uVar6 = func_0x03280a2c(puVar10);
        uVar6 = func_0x05ac7464(uVar6,0);
        auVar19 = func_0x03280b7c(uVar6,param_4);
        auVar17._8_8_ = lVar9;
        auVar17._0_8_ = lVar12;
        lStack_118 = auVar19._8_8_;
        unaff_x22 = auVar19._0_8_;
        puVar3 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar11 = lVar12;
        lVar15 = lVar9;
        lStack_1c0 = lVar8;
        lStack_1b8 = param_4;
        auStack_1d0 = auVar18;
        if (*(long *)(lVar9 + 0x38) == 0) {
          func_0x03256878(lVar9);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar10 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x10))
                             (unaff_x22,lStack_118,lVar12);
          return lVar11;
        }
        uVar6 = func_0x03280a2c(puVar10);
        uVar7 = func_0x05ac7464(uVar6,0);
        uVar6 = 0x3d6068c;
        auVar18 = func_0x03280b7c(uVar7,lVar9);
        goto LAB_03d6068c;
      }
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar5 = &uStack_180;
      lVar15 = lStack_188;
      unaff_x22 = lStack_1a0;
      uVar6 = uStack_1b0;
      auVar17 = auStack_198;
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar8 = 0;
      puVar5 = &uStack_140;
      lVar15 = lStack_148;
      uVar6 = uStack_160;
      auVar17 = auStack_158;
    }
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    lVar11 = 0;
    puVar3 = auStack_100;
    uVar6 = uStack_120;
    auVar17 = auStack_110;
LAB_03d6068c:
    puVar4 = (undefined8 *)((long)puVar3 + -0x30);
    *(undefined8 *)((long)puVar3 + -0x30) = uVar6;
    *(long *)((long)puVar3 + -0x20) = unaff_x22;
    *(long *)((long)puVar3 + -0x18) = lStack_118;
    *(undefined1 (*) [16])((long)puVar3 + -0x10) = auVar17;
    plVar16 = *(long **)(lVar15 + 0x38);
    lVar12 = lVar15;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar16 = *(long **)(lVar15 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar18._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar18._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar18._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar18._8_8_);
      *(long *)(lVar8 + 0x28) = lVar11;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar11);
      return lVar8;
    }
    auVar17 = func_0x03280cac();
    unaff_x22 = 0;
    uVar6 = 0x3d60730;
LAB_03d60730:
    puVar5 = (undefined8 *)((long)puVar4 + -0x30);
    *(undefined8 *)((long)puVar4 + -0x30) = uVar6;
    *(long *)((long)puVar4 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar18;
    *(long *)((long)puVar4 + -8) = lVar11;
    plVar16 = *(long **)(lVar12 + 0x38);
    lVar11 = lVar12;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar12);
      plVar16 = *(long **)(lVar12 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    func_0x0531e428(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x38) = auVar17._0_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x38),auVar17._0_8_);
      *(undefined8 *)(lVar9 + 0x48) = auVar17._8_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x48),auVar17._8_8_);
      *(long *)(lVar9 + 0x28) = lVar15;
      func_0x032809c4((long *)(lVar9 + 0x28),lVar15);
      return lVar9;
    }
    auVar18 = func_0x03280cac();
    unaff_x22 = 0;
    uVar6 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar5 + -0x30) = uVar6;
  *(long *)((long)puVar5 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar17;
  *(long *)((long)puVar5 + -8) = lVar15;
  plVar16 = *(long **)(lVar11 + 0x38);
  lVar12 = lVar11;
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar11);
    plVar16 = *(long **)(lVar11 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar15 = func_0x03280ca0();
  uVar6 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 8);
  func_0x0531ec78(lVar15,0xfffffffe);
  if (lVar15 != 0) {
    *(undefined8 *)(lVar15 + 0x40) = auVar18._0_8_;
    func_0x032809c4((undefined8 *)(lVar15 + 0x40),auVar18._0_8_);
    *(undefined8 *)(lVar15 + 0x50) = auVar18._8_8_;
    func_0x032809c4((undefined8 *)(lVar15 + 0x50),auVar18._8_8_);
    *(long *)(lVar15 + 0x30) = lVar8;
    func_0x032809c4((long *)(lVar15 + 0x30),lVar8);
    return lVar15;
  }
  auVar17 = func_0x03280cac();
  lVar11 = auVar17._0_8_;
  *(undefined8 *)((long)puVar5 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar5 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar5 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar5 + -0x48) = auVar18;
  *(long *)((long)puVar5 + -0x38) = lVar8;
  plVar16 = *(long **)(lVar12 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar16 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar15 = func_0x03280ca0();
  puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
  (*(code *)*puVar13)(lVar15,0xfffffffe);
  if (lVar15 != 0) {
    func_0x02f17738(lVar15,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0xc0,lVar11);
    func_0x02f17738(lVar15,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x100,auVar17._8_8_);
    func_0x02f17738(lVar15,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x80,uVar6);
    return lVar15;
  }
  auVar18 = func_0x03280cac();
  lVar15 = auVar18._8_8_;
  plVar16 = auVar18._0_8_;
  *(undefined8 *)((long)puVar5 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar5 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar5 + -0x80) = auVar17;
  *(long *)((long)puVar5 + -0x70) = lVar12;
  *(undefined8 *)((long)puVar5 + -0x68) = uVar6;
  puVar14 = puVar13;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar15 == 0)) {
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    func_0x03280b7c(uVar6,puVar13);
LAB_03d60c04:
    func_0x03281048(plVar16);
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar8 = *plVar16;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar8 = *plVar16;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar8 = *plVar16;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar8 + 0x228))(plVar16,lVar15,*(undefined8 *)(lVar8 + 0x230));
          return lVar11;
        }
      }
      goto LAB_03d60c04;
    }
    lVar11 = *(long *)(puVar13[7] + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar11 = func_0x03280b90(plVar16,lVar11);
    if (lVar11 == 0) {
      lVar11 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b68fa4(lVar11,plVar16,lVar15,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      lVar12 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b713b0(lVar11,plVar16,lVar15,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar11;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    lVar12 = *(long *)(puVar13[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar8 = func_0x03280b90(plVar16,lVar12);
    if (lVar8 != 0) {
      func_0x04b66610(lVar11,lVar8,lVar15,*(undefined8 *)(puVar13[7] + 0x30));
      return lVar11;
    }
  }
  auVar17 = func_0x03281048(plVar16,lVar12);
  lVar15 = auVar17._8_8_;
  plVar16 = auVar17._0_8_;
  *(undefined8 *)((long)puVar5 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar5 + -0xb8) = lVar12;
  *(long *)((long)puVar5 + -0xb0) = lVar11;
  *(undefined8 **)((long)puVar5 + -0xa8) = puVar13;
  *(undefined1 (*) [16])((long)puVar5 + -0xa0) = auVar18;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar15 == 0)) {
    uVar6 = func_0x03280a2c(puVar10);
    uVar6 = func_0x05ac7464(uVar6,0);
    func_0x03280b7c(uVar6,puVar14);
  }
  else {
    lVar11 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar8 = *plVar16;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11)) {
      lVar11 = *(long *)(puVar14[7] + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar11 = func_0x03280b90(plVar16,lVar11);
      if (lVar11 != 0) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        lVar12 = *(long *)(puVar14[7] + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar8 = func_0x03280b90(plVar16,lVar12);
        if (lVar8 != 0) {
          func_0x04b667e0(lVar11,lVar8,lVar15,*(undefined8 *)(puVar14[7] + 0x30));
          return lVar11;
        }
        goto LAB_03d60ee0;
      }
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
        func_0x04b693d0(lVar11,plVar16,lVar15,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      lVar8 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b715c8(lVar11,plVar16,lVar15,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar11;
      }
    }
    else {
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
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar8 + 0x228))(plVar16,lVar15,*(undefined8 *)(lVar8 + 0x230));
          return lVar11;
        }
      }
    }
  }
  func_0x03281048(plVar16);
LAB_03d60ee0:
  lVar11 = func_0x03281048(plVar16,lVar12);
  *(undefined8 *)((long)puVar5 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar5 + -0xd0) = auVar17;
  lVar12 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  func_0x03280ab0();
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar15 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    **(long **)(lVar15 + 0xb8) = lVar12;
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar11 + 0xb8),lVar12);
  }
  return lVar12;
}


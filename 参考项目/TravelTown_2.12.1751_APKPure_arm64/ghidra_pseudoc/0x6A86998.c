/* Ghidra 12.1.2 native pseudocode; RVA 0x6A86998; Merger.MergeBoard.Logic.CombineValidators.FeedingItemCombinerValidator.CanFeed; status ok */


/* WARNING: Possible PIC construction at 0x06b869e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b869e8) */
/* WARNING: Removing unreachable block (ram,0x06b86a54) */
/* WARNING: Removing unreachable block (ram,0x06b86a74) */
/* WARNING: Removing unreachable block (ram,0x06b86a88) */
/* WARNING: Removing unreachable block (ram,0x06b86b5c) */
/* WARNING: Removing unreachable block (ram,0x06b86a8c) */
/* WARNING: Removing unreachable block (ram,0x06b86aa4) */
/* WARNING: Removing unreachable block (ram,0x06b86aac) */
/* WARNING: Removing unreachable block (ram,0x06b86ad4) */
/* WARNING: Removing unreachable block (ram,0x06b86ab8) */
/* WARNING: Removing unreachable block (ram,0x06b86ac4) */
/* WARNING: Removing unreachable block (ram,0x06b86ae4) */
/* WARNING: Removing unreachable block (ram,0x06b86b04) */
/* WARNING: Removing unreachable block (ram,0x06b86b0c) */
/* WARNING: Removing unreachable block (ram,0x06b86b34) */
/* WARNING: Removing unreachable block (ram,0x06b86b18) */
/* WARNING: Removing unreachable block (ram,0x06b86b24) */
/* WARNING: Removing unreachable block (ram,0x06b86b44) */
/* WARNING: Removing unreachable block (ram,0x06b869ec) */
/* WARNING: Removing unreachable block (ram,0x06b86a1c) */
/* WARNING: Removing unreachable block (ram,0x06b869f8) */
/* WARNING: Removing unreachable block (ram,0x06b86a38) */

long Merger_MergeBoard_Logic_CombineValidators_FeedingItemCombinerValidator__CanFeed
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 unaff_x23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 auStack_240 [2];
  undefined1 auStack_230 [16];
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
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
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  undefined8 auStack_160 [2];
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
  undefined8 uStack_80;
  
  if ((bRam0000000007e2a7a2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6d20);
    func_0x03280a18(PTR_DAT_07751a50);
    bRam0000000007e2a7a2 = 1;
  }
  puVar11 = PTR_DAT_07831d08;
  uStack_a0 = 0x6b869e8;
  uStack_80 = 0x7e2a000;
  if ((bRam0000000007e2a84b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831d10);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_07831d18);
    func_0x03280a18(PTR_DAT_07831d20);
    func_0x03280a18(PTR_DAT_07831d08);
    bRam0000000007e2a84b = 1;
  }
  lVar12 = *(long *)puVar11;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar12 = *(long *)puVar11;
  }
  puVar4 = PTR_DAT_07831d10;
  puVar3 = PTR_DAT_0774ea58;
  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar17 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar12 = *(long *)puVar11;
    }
    uVar18 = **(undefined8 **)(lVar12 + 0xb8);
    lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831d18);
    param_4 = 0;
    func_0x053569b8(lVar17,uVar18,*(undefined8 *)PTR_DAT_07831d20);
    plVar13 = (long *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
    *plVar13 = lVar17;
    func_0x032809c4(plVar13,lVar17);
  }
  lVar16 = *(long *)puVar4;
  lVar12 = func_0x03d50a94(param_2,lVar17);
  lVar17 = *(long *)puVar3;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (lVar12 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x04143d60(lVar16,lVar12,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    return lVar16;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar19 = func_0x03280b7c(uVar18,lVar17);
  lVar12 = auVar19._8_8_;
  uStack_a0 = 0x3d6004c;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x0419ce74(lVar17,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar20 = func_0x03280b7c(uVar18,lVar12);
  lVar12 = auVar20._8_8_;
  uStack_c0 = 0x3d600c8;
  auStack_b0 = auVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x041c2810(lVar17,auVar20._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar19 = func_0x03280b7c(uVar18,lVar12);
  lVar12 = auVar19._8_8_;
  uStack_e0 = 0x3d60144;
  auStack_d0 = auVar20;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x041ddb58(lVar17,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar20 = func_0x03280b7c(uVar18,lVar12);
  lVar12 = auVar20._8_8_;
  uStack_100 = 0x3d601c0;
  auStack_f0 = auVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x041e617c(lVar17,auVar20._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar19 = func_0x03280b7c(uVar18,lVar12);
  lVar12 = auVar19._8_8_;
  uStack_120 = 0x3d6023c;
  auStack_110 = auVar20;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x041e8ba0(lVar17,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar20 = func_0x03280b7c(uVar18,lVar12);
  lVar12 = auVar20._8_8_;
  uStack_140 = 0x3d602b8;
  auStack_130 = auVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar20._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))(lVar17,auVar20._0_8_);
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar19 = func_0x03280b7c(uVar18,lVar12);
  lVar12 = auVar19._8_8_;
  auStack_160[0] = 0x3d60338;
  auStack_150 = auVar20;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x0420cec8(lVar17,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar17;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar20 = func_0x03280b7c(uVar18,lVar12);
  uStack_180 = 0x3d603b4;
  lVar12 = lVar16;
  uStack_178 = param_2;
  auStack_170 = auVar19;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  auVar19._8_8_ = uStack_178;
  auVar19._0_8_ = 0x7e2a000;
  puVar11 = PTR_DAT_07779d10;
  if ((auVar20._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar20._8_8_ == 0)) {
    uVar18 = func_0x03280a2c(puVar11);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar19 = func_0x03280b7c(uVar18,lVar16);
    uStack_1a0 = 0x3d60428;
    lVar17 = lVar12;
    lStack_188 = lVar16;
    if (*(long *)(lVar12 + 0x38) == 0) {
      auStack_198 = auVar20;
      func_0x03256878(lVar12);
      auVar20 = auStack_198;
    }
    puVar11 = PTR_DAT_07779d10;
    auStack_198 = auVar20;
    if ((auVar19._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
      lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar16 = 0;
      puVar6 = &uStack_180;
      lVar12 = lStack_188;
      uVar18 = uStack_1a0;
      goto LAB_03d60730;
    }
    uVar18 = func_0x03280a2c(puVar11);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar20 = func_0x03280b7c(uVar18,lVar12);
    uStack_1c0 = 0x3d6049c;
    lVar16 = lVar17;
    lStack_1a8 = lVar12;
    auStack_1b8 = auVar19;
    if (*(long *)(lVar17 + 0x38) == 0) {
      func_0x03256878(lVar17);
    }
    puVar11 = PTR_DAT_07779d10;
    if ((auVar20._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar20._8_8_ == 0)) {
      uVar18 = func_0x03280a2c(puVar11);
      uVar18 = func_0x05ac7464(uVar18,0);
      auStack_1f8 = func_0x03280b7c(uVar18,lVar17);
      uStack_1e0 = 0x3d60510;
      lVar9 = lVar16;
      lStack_1c8 = lVar17;
      auStack_1d8 = auVar20;
      if (*(long *)(lVar16 + 0x38) == 0) {
        func_0x03256878(lVar16);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auStack_1f8._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auStack_1f8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 8))
                           (auStack_1f8._0_8_,auStack_1f8._8_8_,0);
        return lVar12;
      }
      uVar18 = func_0x03280a2c(puVar11);
      uVar18 = func_0x05ac7464(uVar18,0);
      auVar20 = func_0x03280b7c(uVar18,lVar16);
      uStack_210 = 0x3d60588;
      uStack_200 = 0x7e2a000;
      lVar17 = lVar9;
      lVar10 = param_4;
      lStack_1e8 = lVar16;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar20._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar20._8_8_ == 0)) {
        uVar18 = func_0x03280a2c(puVar11);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar19 = func_0x03280b7c(uVar18,param_4);
        auVar2._8_8_ = lVar10;
        auVar2._0_8_ = lVar17;
        puVar5 = auStack_240;
        auStack_240[0] = 0x3d60608;
        lVar12 = lVar17;
        lVar16 = lVar10;
        lStack_220 = lVar9;
        lStack_218 = param_4;
        auStack_230 = auVar20;
        if (*(long *)(lVar10 + 0x38) == 0) {
          func_0x03256878(lVar10);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((auVar19._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar19._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 0x10))
                             (auVar19._0_8_,auVar19._8_8_,lVar17);
          return lVar12;
        }
        uVar18 = func_0x03280a2c(puVar11);
        uVar8 = func_0x05ac7464(uVar18,0);
        uVar18 = 0x3d6068c;
        auVar20 = func_0x03280b7c(uVar8,lVar10);
        goto LAB_03d6068c;
      }
      lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar7 = &uStack_1e0;
      lVar16 = lStack_1e8;
      uStack_80 = uStack_200;
      uVar18 = uStack_210;
      auVar19 = auStack_1f8;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
      lVar9 = 0;
      puVar7 = &uStack_1a0;
      lVar16 = lStack_1a8;
      uVar18 = uStack_1c0;
      auVar19 = auStack_1b8;
    }
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    lVar12 = 0;
    puVar5 = auStack_160;
    uVar18 = uStack_180;
    auVar2 = auStack_170;
LAB_03d6068c:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar18;
    *(undefined1 (*) [16])((long)puVar5 + -0x20) = auVar19;
    *(undefined1 (*) [16])((long)puVar5 + -0x10) = auVar2;
    plVar13 = *(long **)(lVar16 + 0x38);
    lVar17 = lVar16;
    if (plVar13 == (long *)0x0) {
      func_0x03256878(lVar16);
      plVar13 = *(long **)(lVar16 + 0x38);
    }
    if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    func_0x0531dbd0(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x38) = auVar20._0_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x38),auVar20._0_8_);
      *(undefined8 *)(lVar9 + 0x48) = auVar20._8_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x48),auVar20._8_8_);
      *(long *)(lVar9 + 0x28) = lVar12;
      func_0x032809c4((long *)(lVar9 + 0x28),lVar12);
      return lVar9;
    }
    auVar19 = func_0x03280cac();
    uStack_80 = 0;
    uVar18 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar18;
    *(undefined8 *)((long)puVar6 + -0x20) = uStack_80;
    *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar20;
    *(long *)((long)puVar6 + -8) = lVar12;
    plVar13 = *(long **)(lVar17 + 0x38);
    lVar12 = lVar17;
    if (plVar13 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar13 = *(long **)(lVar17 + 0x38);
    }
    if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    func_0x0531e428(lVar10,0xfffffffe);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x38) = auVar19._0_8_;
      func_0x032809c4((undefined8 *)(lVar10 + 0x38),auVar19._0_8_);
      *(undefined8 *)(lVar10 + 0x48) = auVar19._8_8_;
      func_0x032809c4((undefined8 *)(lVar10 + 0x48),auVar19._8_8_);
      *(long *)(lVar10 + 0x28) = lVar16;
      func_0x032809c4((long *)(lVar10 + 0x28),lVar16);
      return lVar10;
    }
    auVar20 = func_0x03280cac();
    uStack_80 = 0;
    uVar18 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar7 + -0x30) = uVar18;
  *(undefined8 *)((long)puVar7 + -0x20) = uStack_80;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar19;
  *(long *)((long)puVar7 + -8) = lVar16;
  plVar13 = *(long **)(lVar12 + 0x38);
  lVar17 = lVar12;
  if (plVar13 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar13 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  uVar18 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + 8);
  func_0x0531ec78(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    *(undefined8 *)(lVar16 + 0x40) = auVar20._0_8_;
    func_0x032809c4((undefined8 *)(lVar16 + 0x40),auVar20._0_8_);
    *(undefined8 *)(lVar16 + 0x50) = auVar20._8_8_;
    func_0x032809c4((undefined8 *)(lVar16 + 0x50),auVar20._8_8_);
    *(long *)(lVar16 + 0x30) = lVar9;
    func_0x032809c4((long *)(lVar16 + 0x30),lVar9);
    return lVar16;
  }
  auVar19 = func_0x03280cac();
  lVar12 = auVar19._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar20;
  *(long *)((long)puVar7 + -0x38) = lVar9;
  plVar13 = *(long **)(lVar17 + 0x38);
  if (plVar13 == (long *)0x0) {
    func_0x03256878(lVar17);
    plVar13 = *(long **)(lVar17 + 0x38);
  }
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  puVar14 = *(undefined8 **)(*(long *)(lVar17 + 0x38) + 8);
  (*(code *)*puVar14)(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar17 + 0x38) + 0x80) + 0xc0,lVar12);
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar17 + 0x38) + 0x80) + 0x100,auVar19._8_8_);
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar17 + 0x38) + 0x80) + 0x80,uVar18);
    return lVar16;
  }
  auVar20 = func_0x03280cac();
  lVar16 = auVar20._8_8_;
  plVar13 = auVar20._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar19;
  *(long *)((long)puVar7 + -0x70) = lVar17;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar18;
  puVar15 = puVar14;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar13 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar18 = func_0x03280a2c(puVar11);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar14);
LAB_03d60c04:
    func_0x03281048(plVar13);
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar9 = *plVar13;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)) {
      lVar17 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar9 = *plVar13;
        bVar1 = *(byte *)(lVar9 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar9 = *plVar13;
          bVar1 = *(byte *)(lVar9 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar9 + 0x228))(plVar13,lVar16,*(undefined8 *)(lVar9 + 0x230));
          return lVar12;
        }
      }
      goto LAB_03d60c04;
    }
    lVar12 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar12 = func_0x03280b90(plVar13,lVar12);
    if (lVar12 == 0) {
      lVar12 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b68fa4(lVar12,plVar13,lVar16,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar17 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      if ((*(byte *)(lVar17 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
         )) {
        func_0x04b713b0(lVar12,plVar13,lVar16,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar12;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar17 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar9 = func_0x03280b90(plVar13,lVar17);
    if (lVar9 != 0) {
      func_0x04b66610(lVar12,lVar9,lVar16,*(undefined8 *)(puVar14[7] + 0x30));
      return lVar12;
    }
  }
  auVar19 = func_0x03281048(plVar13,lVar17);
  lVar16 = auVar19._8_8_;
  plVar13 = auVar19._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar17;
  *(long *)((long)puVar7 + -0xb0) = lVar12;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar14;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar20;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar13 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar18 = func_0x03280a2c(puVar11);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar15);
  }
  else {
    lVar12 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar9 = *plVar13;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((bVar1 < *(byte *)(lVar12 + 0x130)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)) {
      lVar12 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar12 = func_0x03280b90(plVar13,lVar12);
      if (lVar12 != 0) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        lVar17 = *(long *)(puVar15[7] + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
        }
        lVar9 = func_0x03280b90(plVar13,lVar17);
        if (lVar9 != 0) {
          func_0x04b667e0(lVar12,lVar9,lVar16,*(undefined8 *)(puVar15[7] + 0x30));
          return lVar12;
        }
        goto LAB_03d60ee0;
      }
      lVar12 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b693d0(lVar12,plVar13,lVar16,*(undefined8 *)(puVar15[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar9 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      if ((*(byte *)(lVar9 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
      {
        func_0x04b715c8(lVar12,plVar13,lVar16,*(undefined8 *)(puVar15[7] + 0x48));
        return lVar12;
      }
    }
    else {
      lVar12 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar9 = *plVar13;
        bVar1 = *(byte *)(lVar9 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar9 = *plVar13;
          bVar1 = *(byte *)(lVar9 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar9 + 0x228))(plVar13,lVar16,*(undefined8 *)(lVar9 + 0x230));
          return lVar12;
        }
      }
    }
  }
  func_0x03281048(plVar13);
LAB_03d60ee0:
  lVar12 = func_0x03281048(plVar13,lVar17);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar19;
  lVar17 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = **(long **)(lVar17 + 0xb8);
  func_0x03280ab0();
  if (lVar17 == 0) {
    lVar17 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar17 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar16 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    **(long **)(lVar16 + 0xb8) = lVar17;
    lVar12 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar12 + 0xb8),lVar17);
  }
  return lVar17;
}


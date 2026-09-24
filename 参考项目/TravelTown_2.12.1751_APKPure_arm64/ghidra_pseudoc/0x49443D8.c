/* Ghidra 12.1.2 native pseudocode; RVA 0x49443D8; MergeEngine.Util.WeightedItemList<TItem>.get_PlainItems; status ok */


long MergeEngine_Util_WeightedItemList_TItem___get_PlainItems
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 unaff_x23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 auStack_260 [2];
  undefined1 auStack_250 [16];
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_220;
  undefined1 auStack_218 [16];
  long lStack_208;
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
  
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar8 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
      lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    lVar12 = *(long *)(lVar12 + 0x18);
    uVar15 = **(undefined8 **)(lVar8 + 0xb8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar8 = func_0x03280ca0(lVar12);
    lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    param_4 = *(long *)(lVar12 + 0x30);
    func_0x05356664(lVar8,uVar15,*(undefined8 *)(lVar12 + 0x28));
    lVar13 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar13 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar8;
    lVar12 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar12 + 0xb8) + 8,lVar8);
  }
  lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
  lVar8 = func_0x03d504ac(uVar14,lVar8);
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50);
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (lVar8 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0411956c(lVar13,lVar8,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar16 = func_0x03280b7c(uVar14,lVar12);
  lVar8 = auVar16._8_8_;
  uStack_40 = 0x3d5fe5c;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0411bf8c(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar17 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar17._8_8_;
  uStack_60 = 0x3d5fed8;
  auStack_50 = auVar16;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x04132280(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar16 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar16._8_8_;
  uStack_80 = 0x3d5ff54;
  auStack_70 = auVar17;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x04135278(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar17 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar17._8_8_;
  uStack_a0 = 0x3d5ffd0;
  auStack_90 = auVar16;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x04143d60(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar16 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar16._8_8_;
  uStack_c0 = 0x3d6004c;
  auStack_b0 = auVar17;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0419ce74(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar17 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar17._8_8_;
  uStack_e0 = 0x3d600c8;
  auStack_d0 = auVar16;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041c2810(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar16 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar16._8_8_;
  uStack_100 = 0x3d60144;
  auStack_f0 = auVar17;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041ddb58(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar17 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar17._8_8_;
  uStack_120 = 0x3d601c0;
  auStack_110 = auVar16;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e617c(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar16 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar16._8_8_;
  uStack_140 = 0x3d6023c;
  auStack_130 = auVar17;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e8ba0(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar17 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar17._8_8_;
  uStack_160 = 0x3d602b8;
  auStack_150 = auVar16;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))(lVar12,auVar17._0_8_);
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar16 = func_0x03280b7c(uVar14,lVar8);
  lVar8 = auVar16._8_8_;
  auStack_180[0] = 0x3d60338;
  auStack_170 = auVar17;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x03256878(lVar8);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0420cec8(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return lVar12;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar17 = func_0x03280b7c(uVar14,lVar8);
  uStack_1a0 = 0x3d603b4;
  lVar8 = lVar13;
  lStack_198 = unaff_x21;
  auStack_190 = auVar16;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  puVar7 = PTR_DAT_07779d10;
  if ((auVar17._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar7);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar16 = func_0x03280b7c(uVar14,lVar13);
    uStack_1c0 = 0x3d60428;
    lVar12 = lVar8;
    lStack_1a8 = lVar13;
    if (*(long *)(lVar8 + 0x38) == 0) {
      auStack_1b8 = auVar17;
      func_0x03256878(lVar8);
      auVar17 = auStack_1b8;
    }
    puVar7 = PTR_DAT_07779d10;
    auStack_1b8 = auVar17;
    if ((auVar16._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auVar16._8_8_ != 0)) {
      lVar12 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
      lVar13 = 0;
      puVar3 = &uStack_1a0;
      lVar8 = lStack_1a8;
      uVar14 = uStack_1c0;
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar7);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar17 = func_0x03280b7c(uVar14,lVar8);
    uStack_1e0 = 0x3d6049c;
    lVar13 = lVar12;
    lStack_1c8 = lVar8;
    auStack_1d8 = auVar16;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar7 = PTR_DAT_07779d10;
    if ((auVar17._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar7);
      uVar14 = func_0x05ac7464(uVar14,0);
      auStack_218 = func_0x03280b7c(uVar14,lVar12);
      uStack_200 = 0x3d60510;
      lVar5 = lVar13;
      lStack_1e8 = lVar12;
      auStack_1f8 = auVar17;
      if (*(long *)(lVar13 + 0x38) == 0) {
        func_0x03256878(lVar13);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auStack_218._0_8_ != 0) && (puVar7 = PTR_DAT_07779d18, auStack_218._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))
                          (auStack_218._0_8_,auStack_218._8_8_,0);
        return lVar8;
      }
      uVar14 = func_0x03280a2c(puVar7);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar17 = func_0x03280b7c(uVar14,lVar13);
      uStack_230 = 0x3d60588;
      lVar12 = lVar5;
      lVar6 = param_4;
      lStack_220 = unaff_x22;
      lStack_208 = lVar13;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar7 = PTR_DAT_07779d10;
      if ((auVar17._0_8_ == 0) || (puVar7 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar7);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar18 = func_0x03280b7c(uVar14,param_4);
        auVar16._8_8_ = lVar6;
        auVar16._0_8_ = lVar12;
        lStack_198 = auVar18._8_8_;
        unaff_x22 = auVar18._0_8_;
        puVar2 = auStack_260;
        auStack_260[0] = 0x3d60608;
        lVar8 = lVar12;
        lVar13 = lVar6;
        lStack_240 = lVar5;
        lStack_238 = param_4;
        auStack_250 = auVar17;
        if (*(long *)(lVar6 + 0x38) == 0) {
          func_0x03256878(lVar6);
        }
        puVar7 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar7 = PTR_DAT_07779d18, lStack_198 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x38) + 0x10))
                            (unaff_x22,lStack_198,lVar12);
          return lVar8;
        }
        uVar14 = func_0x03280a2c(puVar7);
        uVar15 = func_0x05ac7464(uVar14,0);
        uVar14 = 0x3d6068c;
        auVar17 = func_0x03280b7c(uVar15,lVar6);
        goto LAB_03d6068c;
      }
      lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar4 = &uStack_200;
      lVar13 = lStack_208;
      unaff_x22 = lStack_220;
      uVar14 = uStack_230;
      auVar16 = auStack_218;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar5 = 0;
      puVar4 = &uStack_1c0;
      lVar13 = lStack_1c8;
      uVar14 = uStack_1e0;
      auVar16 = auStack_1d8;
    }
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    lVar8 = 0;
    puVar2 = auStack_180;
    uVar14 = uStack_1a0;
    auVar16 = auStack_190;
LAB_03d6068c:
    puVar3 = (undefined8 *)((long)puVar2 + -0x30);
    *(undefined8 *)((long)puVar2 + -0x30) = uVar14;
    *(long *)((long)puVar2 + -0x20) = unaff_x22;
    *(long *)((long)puVar2 + -0x18) = lStack_198;
    *(undefined1 (*) [16])((long)puVar2 + -0x10) = auVar16;
    plVar11 = *(long **)(lVar13 + 0x38);
    lVar12 = lVar13;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar11 = *(long **)(lVar13 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar5 = func_0x03280ca0();
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    func_0x0531dbd0(lVar5,0xfffffffe);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x38) = auVar17._0_8_;
      func_0x032809c4((undefined8 *)(lVar5 + 0x38),auVar17._0_8_);
      *(undefined8 *)(lVar5 + 0x48) = auVar17._8_8_;
      func_0x032809c4((undefined8 *)(lVar5 + 0x48),auVar17._8_8_);
      *(long *)(lVar5 + 0x28) = lVar8;
      func_0x032809c4((long *)(lVar5 + 0x28),lVar8);
      return lVar5;
    }
    auVar16 = func_0x03280cac();
    unaff_x22 = 0;
    uVar14 = 0x3d60730;
LAB_03d60730:
    puVar4 = (undefined8 *)((long)puVar3 + -0x30);
    *(undefined8 *)((long)puVar3 + -0x30) = uVar14;
    *(long *)((long)puVar3 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar3 + -0x18) = auVar17;
    *(long *)((long)puVar3 + -8) = lVar8;
    plVar11 = *(long **)(lVar12 + 0x38);
    lVar8 = lVar12;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar12);
      plVar11 = *(long **)(lVar12 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar6 = func_0x03280ca0();
    lVar5 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    func_0x0531e428(lVar6,0xfffffffe);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x38) = auVar16._0_8_;
      func_0x032809c4((undefined8 *)(lVar6 + 0x38),auVar16._0_8_);
      *(undefined8 *)(lVar6 + 0x48) = auVar16._8_8_;
      func_0x032809c4((undefined8 *)(lVar6 + 0x48),auVar16._8_8_);
      *(long *)(lVar6 + 0x28) = lVar13;
      func_0x032809c4((long *)(lVar6 + 0x28),lVar13);
      return lVar6;
    }
    auVar17 = func_0x03280cac();
    unaff_x22 = 0;
    uVar14 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar4 + -0x30) = uVar14;
  *(long *)((long)puVar4 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar16;
  *(long *)((long)puVar4 + -8) = lVar13;
  plVar11 = *(long **)(lVar8 + 0x38);
  lVar12 = lVar8;
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar8);
    plVar11 = *(long **)(lVar8 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 8);
  func_0x0531ec78(lVar13,0xfffffffe);
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x40) = auVar17._0_8_;
    func_0x032809c4((undefined8 *)(lVar13 + 0x40),auVar17._0_8_);
    *(undefined8 *)(lVar13 + 0x50) = auVar17._8_8_;
    func_0x032809c4((undefined8 *)(lVar13 + 0x50),auVar17._8_8_);
    *(long *)(lVar13 + 0x30) = lVar5;
    func_0x032809c4((long *)(lVar13 + 0x30),lVar5);
    return lVar13;
  }
  auVar16 = func_0x03280cac();
  lVar8 = auVar16._0_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar4 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x48) = auVar17;
  *(long *)((long)puVar4 + -0x38) = lVar5;
  plVar11 = *(long **)(lVar12 + 0x38);
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar11 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
  (*(code *)*puVar9)(lVar13,0xfffffffe);
  if (lVar13 != 0) {
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0xc0,lVar8);
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x100,auVar16._8_8_);
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x80,uVar14);
    return lVar13;
  }
  auVar17 = func_0x03280cac();
  lVar13 = auVar17._8_8_;
  plVar11 = auVar17._0_8_;
  *(undefined8 *)((long)puVar4 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar4 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x80) = auVar16;
  *(long *)((long)puVar4 + -0x70) = lVar12;
  *(undefined8 *)((long)puVar4 + -0x68) = uVar14;
  puVar10 = puVar9;
  if (puVar9[7] == 0) {
    func_0x03256878(puVar9);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar14 = func_0x03280a2c(puVar7);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar9);
LAB_03d60c04:
    func_0x03281048(plVar11);
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar9[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar5 = *plVar11;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = *(long *)(puVar9[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar5 = *plVar11;
        bVar1 = *(byte *)(lVar5 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar9[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar5 = *plVar11;
          bVar1 = *(byte *)(lVar5 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar8 = (**(code **)(lVar5 + 0x228))(plVar11,lVar13,*(undefined8 *)(lVar5 + 0x230));
          return lVar8;
        }
      }
      goto LAB_03d60c04;
    }
    lVar8 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar8 = func_0x03280b90(plVar11,lVar8);
    if (lVar8 == 0) {
      lVar8 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
      {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04b68fa4(lVar8,plVar11,lVar13,*(undefined8 *)(puVar9[7] + 0x58));
        return lVar8;
      }
      if ((*(byte *)(*(long *)(puVar9[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar8 = func_0x03280ca0();
      lVar12 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b713b0(lVar8,plVar11,lVar13,*(undefined8 *)(puVar9[7] + 0x48));
        return lVar8;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar9[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar12 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar5 = func_0x03280b90(plVar11,lVar12);
    if (lVar5 != 0) {
      func_0x04b66610(lVar8,lVar5,lVar13,*(undefined8 *)(puVar9[7] + 0x30));
      return lVar8;
    }
  }
  auVar16 = func_0x03281048(plVar11,lVar12);
  lVar13 = auVar16._8_8_;
  plVar11 = auVar16._0_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar4 + -0xb8) = lVar12;
  *(long *)((long)puVar4 + -0xb0) = lVar8;
  *(undefined8 **)((long)puVar4 + -0xa8) = puVar9;
  *(undefined1 (*) [16])((long)puVar4 + -0xa0) = auVar17;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar7 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar7 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar14 = func_0x03280a2c(puVar7);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar10);
  }
  else {
    lVar8 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    lVar5 = *plVar11;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((bVar1 < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
      lVar8 = *(long *)(puVar10[7] + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      lVar8 = func_0x03280b90(plVar11,lVar8);
      if (lVar8 != 0) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        lVar12 = *(long *)(puVar10[7] + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar5 = func_0x03280b90(plVar11,lVar12);
        if (lVar5 != 0) {
          func_0x04b667e0(lVar8,lVar5,lVar13,*(undefined8 *)(puVar10[7] + 0x30));
          return lVar8;
        }
        goto LAB_03d60ee0;
      }
      lVar8 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
      {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04b693d0(lVar8,plVar11,lVar13,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar8;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar8 = func_0x03280ca0();
      lVar5 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
      {
        func_0x04b715c8(lVar8,plVar11,lVar13,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar8;
      }
    }
    else {
      lVar8 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
        lVar5 = *plVar11;
        bVar1 = *(byte *)(lVar5 + 0x130);
      }
      if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
        lVar8 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
          lVar5 = *plVar11;
          bVar1 = *(byte *)(lVar5 + 0x130);
        }
        if ((*(byte *)(lVar8 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
        {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar8 = (**(code **)(lVar5 + 0x228))(plVar11,lVar13,*(undefined8 *)(lVar5 + 0x230));
          return lVar8;
        }
      }
    }
  }
  func_0x03281048(plVar11);
LAB_03d60ee0:
  lVar8 = func_0x03281048(plVar11,lVar12);
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar4 + -0xd0) = auVar16;
  lVar12 = *(long *)(lVar8 + 0x20);
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
    lVar12 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar13 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    **(long **)(lVar13 + 0xb8) = lVar12;
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar8 + 0xb8),lVar12);
  }
  return lVar12;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x679C32C; MergeEngine.ECS.Systems.Items.Producers.SpawnerSystem.OnWillProcessComponents; status ok */

long MergeEngine_ECS_Systems_Items_Producers_SpawnerSystem__OnWillProcessComponents
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x21;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  
  puVar8 = PTR_DAT_07810950;
  if ((bRam0000000007e28dbc & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810950);
    bRam0000000007e28dbc = 1;
  }
  lVar11 = *(long *)puVar8;
  lVar12 = *(long *)(lVar11 + 0x38);
  if (lVar12 == 0) {
    func_0x03256878(lVar11);
    lVar12 = *(long *)(lVar11 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x18);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x18);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) {
    lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x18);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar13 = *(long *)(lVar11 + 0x38);
    lVar12 = *(long *)(lVar13 + 0x18);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
      lVar13 = *(long *)(lVar11 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    uVar15 = **(undefined8 **)(lVar12 + 0xb8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar12 = func_0x03280ca0(lVar13);
    param_4 = *(long *)(*(long *)(lVar11 + 0x38) + 0x28);
    func_0x05355fbc(lVar12,uVar15,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20));
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 0x18);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar12;
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 0x18);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar13 + 0xb8) + 8,lVar12);
  }
  lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 0x30);
  lVar12 = func_0x03d872a8(param_2,lVar12);
  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x40);
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (lVar12 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x04143d60(lVar13,lVar12,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar16 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar16._8_8_;
  uStack_40 = 0x3d6004c;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0419ce74(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar17 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar17._8_8_;
  uStack_60 = 0x3d600c8;
  auStack_50 = auVar16;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041c2810(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar16 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar16._8_8_;
  uStack_80 = 0x3d60144;
  auStack_70 = auVar17;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041ddb58(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar17 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar17._8_8_;
  uStack_a0 = 0x3d601c0;
  auStack_90 = auVar16;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e617c(lVar12,auVar17._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar16 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar16._8_8_;
  uStack_c0 = 0x3d6023c;
  auStack_b0 = auVar17;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e8ba0(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar17 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar17._8_8_;
  uStack_e0 = 0x3d602b8;
  auStack_d0 = auVar16;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar17._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))(lVar12,auVar17._0_8_);
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar16 = func_0x03280b7c(uVar15,lVar11);
  lVar11 = auVar16._8_8_;
  auStack_100[0] = 0x3d60338;
  auStack_f0 = auVar17;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar16._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0420cec8(lVar12,auVar16._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar12;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar17 = func_0x03280b7c(uVar15,lVar11);
  uStack_120 = 0x3d603b4;
  lVar11 = lVar13;
  lStack_118 = unaff_x21;
  auStack_110 = auVar16;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  puVar8 = PTR_DAT_07779d10;
  if ((auVar17._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
    uVar15 = func_0x03280a2c(puVar8);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar16 = func_0x03280b7c(uVar15,lVar13);
    uStack_140 = 0x3d60428;
    lVar12 = lVar11;
    lStack_128 = lVar13;
    if (*(long *)(lVar11 + 0x38) == 0) {
      auStack_138 = auVar17;
      func_0x03256878(lVar11);
      auVar17 = auStack_138;
    }
    puVar8 = PTR_DAT_07779d10;
    auStack_138 = auVar17;
    if ((auVar16._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar16._8_8_ != 0)) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      lVar13 = 0;
      puVar3 = &uStack_120;
      lVar11 = lStack_128;
      uVar15 = uStack_140;
      goto LAB_03d60730;
    }
    uVar15 = func_0x03280a2c(puVar8);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar17 = func_0x03280b7c(uVar15,lVar11);
    uStack_160 = 0x3d6049c;
    lVar13 = lVar12;
    lStack_148 = lVar11;
    auStack_158 = auVar16;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar17._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
      uVar15 = func_0x03280a2c(puVar8);
      uVar15 = func_0x05ac7464(uVar15,0);
      auStack_198 = func_0x03280b7c(uVar15,lVar12);
      uStack_180 = 0x3d60510;
      lVar6 = lVar13;
      lStack_168 = lVar12;
      auStack_178 = auVar17;
      if (*(long *)(lVar13 + 0x38) == 0) {
        func_0x03256878(lVar13);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auStack_198._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auStack_198._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))
                           (auStack_198._0_8_,auStack_198._8_8_,0);
        return lVar11;
      }
      uVar15 = func_0x03280a2c(puVar8);
      uVar15 = func_0x05ac7464(uVar15,0);
      auVar17 = func_0x03280b7c(uVar15,lVar13);
      uStack_1b0 = 0x3d60588;
      lVar12 = lVar6;
      lVar7 = param_4;
      lStack_1a0 = unaff_x22;
      lStack_188 = lVar13;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar17._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar17._8_8_ == 0)) {
        uVar15 = func_0x03280a2c(puVar8);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar18 = func_0x03280b7c(uVar15,param_4);
        auVar16._8_8_ = lVar7;
        auVar16._0_8_ = lVar12;
        lStack_118 = auVar18._8_8_;
        unaff_x22 = auVar18._0_8_;
        puVar2 = auStack_1e0;
        auStack_1e0[0] = 0x3d60608;
        lVar11 = lVar12;
        lVar13 = lVar7;
        lStack_1c0 = lVar6;
        lStack_1b8 = param_4;
        auStack_1d0 = auVar17;
        if (*(long *)(lVar7 + 0x38) == 0) {
          func_0x03256878(lVar7);
        }
        puVar8 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar8 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + 0x10))
                             (unaff_x22,lStack_118,lVar12);
          return lVar11;
        }
        uVar15 = func_0x03280a2c(puVar8);
        uVar5 = func_0x05ac7464(uVar15,0);
        uVar15 = 0x3d6068c;
        auVar17 = func_0x03280b7c(uVar5,lVar7);
        goto LAB_03d6068c;
      }
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar4 = &uStack_180;
      lVar13 = lStack_188;
      unaff_x22 = lStack_1a0;
      uVar15 = uStack_1b0;
      auVar16 = auStack_198;
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar6 = 0;
      puVar4 = &uStack_140;
      lVar13 = lStack_148;
      uVar15 = uStack_160;
      auVar16 = auStack_158;
    }
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    lVar11 = 0;
    puVar2 = auStack_100;
    uVar15 = uStack_120;
    auVar16 = auStack_110;
LAB_03d6068c:
    puVar3 = (undefined8 *)((long)puVar2 + -0x30);
    *(undefined8 *)((long)puVar2 + -0x30) = uVar15;
    *(long *)((long)puVar2 + -0x20) = unaff_x22;
    *(long *)((long)puVar2 + -0x18) = lStack_118;
    *(undefined1 (*) [16])((long)puVar2 + -0x10) = auVar16;
    plVar14 = *(long **)(lVar13 + 0x38);
    lVar12 = lVar13;
    if (plVar14 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar14 = *(long **)(lVar13 + 0x38);
    }
    if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar6 = func_0x03280ca0();
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    func_0x0531dbd0(lVar6,0xfffffffe);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x38) = auVar17._0_8_;
      func_0x032809c4((undefined8 *)(lVar6 + 0x38),auVar17._0_8_);
      *(undefined8 *)(lVar6 + 0x48) = auVar17._8_8_;
      func_0x032809c4((undefined8 *)(lVar6 + 0x48),auVar17._8_8_);
      *(long *)(lVar6 + 0x28) = lVar11;
      func_0x032809c4((long *)(lVar6 + 0x28),lVar11);
      return lVar6;
    }
    auVar16 = func_0x03280cac();
    unaff_x22 = 0;
    uVar15 = 0x3d60730;
LAB_03d60730:
    puVar4 = (undefined8 *)((long)puVar3 + -0x30);
    *(undefined8 *)((long)puVar3 + -0x30) = uVar15;
    *(long *)((long)puVar3 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar3 + -0x18) = auVar17;
    *(long *)((long)puVar3 + -8) = lVar11;
    plVar14 = *(long **)(lVar12 + 0x38);
    lVar11 = lVar12;
    if (plVar14 == (long *)0x0) {
      func_0x03256878(lVar12);
      plVar14 = *(long **)(lVar12 + 0x38);
    }
    if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar7 = func_0x03280ca0();
    lVar6 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    func_0x0531e428(lVar7,0xfffffffe);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x38) = auVar16._0_8_;
      func_0x032809c4((undefined8 *)(lVar7 + 0x38),auVar16._0_8_);
      *(undefined8 *)(lVar7 + 0x48) = auVar16._8_8_;
      func_0x032809c4((undefined8 *)(lVar7 + 0x48),auVar16._8_8_);
      *(long *)(lVar7 + 0x28) = lVar13;
      func_0x032809c4((long *)(lVar7 + 0x28),lVar13);
      return lVar7;
    }
    auVar17 = func_0x03280cac();
    unaff_x22 = 0;
    uVar15 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar4 + -0x30) = uVar15;
  *(long *)((long)puVar4 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar16;
  *(long *)((long)puVar4 + -8) = lVar13;
  plVar14 = *(long **)(lVar11 + 0x38);
  lVar12 = lVar11;
  if (plVar14 == (long *)0x0) {
    func_0x03256878(lVar11);
    plVar14 = *(long **)(lVar11 + 0x38);
  }
  if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 8);
  func_0x0531ec78(lVar13,0xfffffffe);
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x40) = auVar17._0_8_;
    func_0x032809c4((undefined8 *)(lVar13 + 0x40),auVar17._0_8_);
    *(undefined8 *)(lVar13 + 0x50) = auVar17._8_8_;
    func_0x032809c4((undefined8 *)(lVar13 + 0x50),auVar17._8_8_);
    *(long *)(lVar13 + 0x30) = lVar6;
    func_0x032809c4((long *)(lVar13 + 0x30),lVar6);
    return lVar13;
  }
  auVar16 = func_0x03280cac();
  lVar11 = auVar16._0_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar4 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x48) = auVar17;
  *(long *)((long)puVar4 + -0x38) = lVar6;
  plVar14 = *(long **)(lVar12 + 0x38);
  if (plVar14 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar14 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
  (*(code *)*puVar9)(lVar13,0xfffffffe);
  if (lVar13 != 0) {
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0xc0,lVar11);
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x100,auVar16._8_8_);
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x80,uVar15);
    return lVar13;
  }
  auVar17 = func_0x03280cac();
  lVar13 = auVar17._8_8_;
  plVar14 = auVar17._0_8_;
  *(undefined8 *)((long)puVar4 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar4 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x80) = auVar16;
  *(long *)((long)puVar4 + -0x70) = lVar12;
  *(undefined8 *)((long)puVar4 + -0x68) = uVar15;
  puVar10 = puVar9;
  if (puVar9[7] == 0) {
    func_0x03256878(puVar9);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar14 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar15 = func_0x03280a2c(puVar8);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar9);
LAB_03d60c04:
    func_0x03281048(plVar14);
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar9[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar6 = *plVar14;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = *(long *)(puVar9[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar6 = *plVar14;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar9[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar6 = *plVar14;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar6 + 0x228))(plVar14,lVar13,*(undefined8 *)(lVar6 + 0x230));
          return lVar11;
        }
      }
      goto LAB_03d60c04;
    }
    lVar11 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    lVar11 = func_0x03280b90(plVar14,lVar11);
    if (lVar11 == 0) {
      lVar11 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
        if ((*(byte *)(*(long *)(puVar9[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b68fa4(lVar11,plVar14,lVar13,*(undefined8 *)(puVar9[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar9[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      lVar12 = *(long *)(puVar9[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar14 + 0x130)) &&
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b713b0(lVar11,plVar14,lVar13,*(undefined8 *)(puVar9[7] + 0x48));
        return lVar11;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar9[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    lVar12 = *(long *)(puVar9[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar6 = func_0x03280b90(plVar14,lVar12);
    if (lVar6 != 0) {
      func_0x04b66610(lVar11,lVar6,lVar13,*(undefined8 *)(puVar9[7] + 0x30));
      return lVar11;
    }
  }
  auVar16 = func_0x03281048(plVar14,lVar12);
  lVar13 = auVar16._8_8_;
  plVar14 = auVar16._0_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar4 + -0xb8) = lVar12;
  *(long *)((long)puVar4 + -0xb0) = lVar11;
  *(undefined8 **)((long)puVar4 + -0xa8) = puVar9;
  *(undefined1 (*) [16])((long)puVar4 + -0xa0) = auVar17;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar14 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar15 = func_0x03280a2c(puVar8);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar10);
  }
  else {
    lVar11 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c();
    }
    lVar6 = *plVar14;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((bVar1 < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11)) {
      lVar11 = *(long *)(puVar10[7] + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar11 = func_0x03280b90(plVar14,lVar11);
      if (lVar11 != 0) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        lVar12 = *(long *)(puVar10[7] + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
        }
        lVar6 = func_0x03280b90(plVar14,lVar12);
        if (lVar6 != 0) {
          func_0x04b667e0(lVar11,lVar6,lVar13,*(undefined8 *)(puVar10[7] + 0x30));
          return lVar11;
        }
        goto LAB_03d60ee0;
      }
      lVar11 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar11 = func_0x03280ca0();
        func_0x04b693d0(lVar11,plVar14,lVar13,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar11;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      lVar6 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar14 + 0x130)) &&
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
      {
        func_0x04b715c8(lVar11,plVar14,lVar13,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar11;
      }
    }
    else {
      lVar11 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
        lVar6 = *plVar14;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x0325681c(lVar11);
          lVar6 = *plVar14;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (**(code **)(lVar6 + 0x228))(plVar14,lVar13,*(undefined8 *)(lVar6 + 0x230));
          return lVar11;
        }
      }
    }
  }
  func_0x03281048(plVar14);
LAB_03d60ee0:
  lVar11 = func_0x03281048(plVar14,lVar12);
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar4 + -0xd0) = auVar16;
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
    lVar13 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    **(long **)(lVar13 + 0xb8) = lVar12;
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


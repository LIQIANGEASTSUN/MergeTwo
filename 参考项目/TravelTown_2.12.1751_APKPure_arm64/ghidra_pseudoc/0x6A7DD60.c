/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7DD60; Merger.MergeBoard.Models.TileConfigurationModel.SetTileConfiguration; status ok */


/* WARNING: Possible PIC construction at 0x06b7de6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7deec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d606f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d607b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03d60840) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */
/* WARNING: Removing unreachable block (ram,0x03d6079c) */
/* WARNING: Removing unreachable block (ram,0x03d60718) */
/* WARNING: Removing unreachable block (ram,0x03d606f8) */
/* WARNING: Removing unreachable block (ram,0x06b7de70) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined1  [16]
Merger_MergeBoard_Models_TileConfigurationModel__SetTileConfiguration
          (long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  ulong extraout_x1_15;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 unaff_x23;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 auStack_220 [2];
  undefined1 auStack_210 [16];
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e0;
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined8 auStack_140 [2];
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
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  code *pcStack_60;
  long lStack_50;
  long lStack_48;
  
  lVar21 = 0x7e2a000;
  if ((bRam0000000007e2a749 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078319c0);
    func_0x03280a18(PTR_DAT_078319c8);
    func_0x03280a18(PTR_DAT_078319d0);
    func_0x03280a18(PTR_DAT_078319d8);
    func_0x03280a18(PTR_DAT_078319e0);
    func_0x03280a18(PTR_DAT_078319e8);
    func_0x03280a18(PTR_DAT_078319f0);
    func_0x03280a18(PTR_DAT_078319f8);
    bRam0000000007e2a749 = 1;
  }
  puVar11 = PTR_DAT_078319f8;
  if (param_2 == 0) {
LAB_06b7df0c:
    puVar11 = PTR_DAT_078319c0;
    lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078319c8);
    func_0x04f34d5c(lVar12,*(undefined8 *)puVar11);
  }
  else {
    lVar12 = *(long *)PTR_DAT_078319f8;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar12 = *(long *)puVar11;
    }
    lVar21 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar21 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar12 = *(long *)puVar11;
      }
      uVar22 = **(undefined8 **)(lVar12 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078319e0);
      func_0x05356664(lVar12,uVar22,*(undefined8 *)PTR_DAT_078319e8,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
      *plVar13 = lVar12;
      goto SUB_032809c4;
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar12 = *(long *)puVar11;
    }
    unaff_x22 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (unaff_x22 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar12 = *(long *)puVar11;
      }
      uVar22 = **(undefined8 **)(lVar12 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078319d8);
      func_0x053569b8(lVar12,uVar22,*(undefined8 *)PTR_DAT_078319f0,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
      *plVar13 = lVar12;
      goto SUB_032809c4;
    }
    param_4 = *(long *)PTR_DAT_078319d0;
    param_3 = unaff_x22;
    lVar12 = func_0x03d5bf08(param_2,lVar21);
    if (lVar12 == 0) goto LAB_06b7df0c;
  }
  if (param_1 != 0) {
    plVar13 = (long *)(param_1 + 0x10);
    *plVar13 = lVar12;
    goto SUB_032809c4;
  }
  lVar14 = func_0x03280cac();
  pcStack_60 = Merger_MergeBoard_Models_TileConfigurationModel__GetTileConfiguration;
  lStack_50 = lVar12;
  lStack_48 = param_1;
  if ((bRam0000000007e2a74a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831a00);
    func_0x03280a18(PTR_DAT_07831a08);
    bRam0000000007e2a74a = 1;
  }
  puVar11 = PTR_DAT_07831a08;
  if (*(long *)(lVar14 + 0x10) == 0) {
    auVar24 = func_0x03280cac();
    uVar15 = auVar24._8_8_;
    pcStack_80 = Merger_MergeBoard_Models_TileConfigurationModel__GetTileConfiguration;
    lStack_70 = 0x7e2a000;
    uVar20 = uVar15 & 0xffffffff;
    lStack_78 = lVar21;
    lStack_68 = lVar14;
    if ((bRam0000000007e2a74b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831a10);
      bRam0000000007e2a74b = 1;
      uVar15 = extraout_x1_15;
    }
    auStack_90._8_8_ = 0;
    lVar21 = *(long *)(auVar24._0_8_ + 0x10);
    uVar22 = 0;
    if (lVar21 != 0) {
      auVar24 = func_0x04f37608(lVar21,uVar20,auStack_90 + 8,*(undefined8 *)PTR_DAT_07831a10);
      uVar15 = auVar24._8_8_;
      uVar22 = auStack_90._8_8_;
      if ((auVar24._0_8_ & 1) == 0) {
        uVar22 = 0;
      }
    }
    auVar24._8_8_ = uVar15;
    auVar24._0_8_ = uVar22;
    return auVar24;
  }
  lVar12 = func_0x04f35968(*(long *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_07831a00);
  lVar14 = *(long *)puVar11;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (lVar12 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar26._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar26._0_8_,lVar12,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    auVar26._8_8_ = extraout_x1;
    return auVar26;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar24 = func_0x03280b7c(uVar22,lVar14);
  lVar16 = auVar24._8_8_;
  pcStack_80 = (code *)0x3d6004c;
  lStack_70 = lVar12;
  lStack_68 = lVar14;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar25._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar25._0_8_,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar25._8_8_ = extraout_x1_00;
    return auVar25;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar26 = func_0x03280b7c(uVar22,lVar16);
  lVar12 = auVar26._8_8_;
  uStack_a0 = 0x3d600c8;
  auStack_90 = auVar24;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar27._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar27._0_8_,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar27._8_8_ = extraout_x1_01;
    return auVar27;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar24 = func_0x03280b7c(uVar22,lVar12);
  lVar12 = auVar24._8_8_;
  uStack_c0 = 0x3d60144;
  auStack_b0 = auVar26;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar28._0_8_,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar28._8_8_ = extraout_x1_02;
    return auVar28;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar26 = func_0x03280b7c(uVar22,lVar12);
  lVar12 = auVar26._8_8_;
  uStack_e0 = 0x3d601c0;
  auStack_d0 = auVar24;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar29._0_8_,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1_03;
    return auVar29;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar24 = func_0x03280b7c(uVar22,lVar12);
  lVar12 = auVar24._8_8_;
  uStack_100 = 0x3d6023c;
  auStack_f0 = auVar26;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar30._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar30._0_8_,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar30._8_8_ = extraout_x1_04;
    return auVar30;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar26 = func_0x03280b7c(uVar22,lVar12);
  lVar12 = auVar26._8_8_;
  uStack_120 = 0x3d602b8;
  auStack_110 = auVar24;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))(auVar31._0_8_,auVar26._0_8_);
    auVar31._8_8_ = extraout_x1_05;
    return auVar31;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar24 = func_0x03280b7c(uVar22,lVar12);
  lVar12 = auVar24._8_8_;
  auStack_140[0] = 0x3d60338;
  auStack_130 = auVar26;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar32._0_8_,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar32._8_8_ = extraout_x1_06;
    return auVar32;
  }
  uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar22 = func_0x05ac7464(uVar22,0);
  auVar26 = func_0x03280b7c(uVar22,lVar12);
  uStack_160 = 0x3d603b4;
  lVar12 = param_3;
  lStack_158 = lVar21;
  auStack_150 = auVar24;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03256878(param_3);
  }
  auVar33._8_8_ = lStack_158;
  auVar33._0_8_ = unaff_x22;
  puVar11 = PTR_DAT_07779d10;
  if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
    uVar22 = func_0x03280a2c(puVar11);
    uVar22 = func_0x05ac7464(uVar22,0);
    auVar24 = func_0x03280b7c(uVar22,param_3);
    uStack_180 = 0x3d60428;
    lVar21 = lVar12;
    lStack_168 = param_3;
    if (*(long *)(lVar12 + 0x38) == 0) {
      auStack_178 = auVar26;
      func_0x03256878(lVar12);
      auVar26 = auStack_178;
    }
    puVar11 = PTR_DAT_07779d10;
    auStack_178 = auVar26;
    if ((auVar24._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar24._8_8_ != 0)) {
      lVar14 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar16 = 0;
      puVar7 = &uStack_160;
      lVar21 = lStack_168;
      uVar22 = uStack_180;
      goto LAB_03d60730;
    }
    uVar22 = func_0x03280a2c(puVar11);
    uVar22 = func_0x05ac7464(uVar22,0);
    auVar26 = func_0x03280b7c(uVar22,lVar12);
    uStack_1a0 = 0x3d6049c;
    lVar14 = lVar21;
    lStack_188 = lVar12;
    auStack_198 = auVar24;
    if (*(long *)(lVar21 + 0x38) == 0) {
      func_0x03256878(lVar21);
    }
    puVar11 = PTR_DAT_07779d10;
    if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
      uVar22 = func_0x03280a2c(puVar11);
      uVar22 = func_0x05ac7464(uVar22,0);
      auStack_1d8 = func_0x03280b7c(uVar22,lVar21);
      uStack_1c0 = 0x3d60510;
      lVar9 = lVar14;
      lStack_1a8 = lVar21;
      auStack_1b8 = auVar26;
      if (*(long *)(lVar14 + 0x38) == 0) {
        func_0x03256878(lVar14);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auStack_1d8._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auStack_1d8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8))
                            (auStack_1d8._0_8_,auStack_1d8._8_8_,0);
        return auVar24;
      }
      uVar22 = func_0x03280a2c(puVar11);
      uVar22 = func_0x05ac7464(uVar22,0);
      auVar26 = func_0x03280b7c(uVar22,lVar14);
      uStack_1f0 = 0x3d60588;
      lVar12 = lVar9;
      lVar16 = param_4;
      lStack_1e0 = unaff_x22;
      lStack_1c8 = lVar14;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
        uVar22 = func_0x03280a2c(puVar11);
        uVar22 = func_0x05ac7464(uVar22,0);
        auVar33 = func_0x03280b7c(uVar22,param_4);
        auVar5._8_8_ = lVar16;
        auVar5._0_8_ = lVar12;
        puVar6 = auStack_220;
        auStack_220[0] = 0x3d60608;
        lVar21 = lVar12;
        lVar19 = lVar16;
        lStack_200 = lVar9;
        lStack_1f8 = param_4;
        auStack_210 = auVar26;
        if (*(long *)(lVar16 + 0x38) == 0) {
          func_0x03256878(lVar16);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((auVar33._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar33._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))
                              (auVar33._0_8_,auVar33._8_8_,lVar12);
          return auVar24;
        }
        uVar22 = func_0x03280a2c(puVar11);
        uVar10 = func_0x05ac7464(uVar22,0);
        uVar22 = 0x3d6068c;
        auVar26 = func_0x03280b7c(uVar10,lVar16);
        goto LAB_03d6068c;
      }
      lVar21 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar8 = &uStack_1c0;
      lVar16 = lStack_1c8;
      unaff_x22 = lStack_1e0;
      uVar22 = uStack_1f0;
      auVar24 = auStack_1d8;
    }
    else {
      lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
      lVar9 = 0;
      puVar8 = &uStack_180;
      lVar16 = lStack_188;
      uVar22 = uStack_1a0;
      auVar24 = auStack_198;
    }
  }
  else {
    lVar19 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    lVar21 = 0;
    puVar6 = auStack_140;
    uVar22 = uStack_160;
    auVar5 = auStack_150;
LAB_03d6068c:
    lVar12 = auVar26._0_8_;
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar22;
    *(undefined1 (*) [16])((long)puVar6 + -0x20) = auVar33;
    *(undefined1 (*) [16])((long)puVar6 + -0x10) = auVar5;
    plVar13 = *(long **)(lVar19 + 0x38);
    lVar14 = lVar19;
    if (plVar13 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar13 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531dbd0(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      plVar13 = (long *)(lVar9 + 0x38);
      *plVar13 = lVar12;
      goto SUB_032809c4;
    }
    auVar24 = func_0x03280cac();
    unaff_x22 = 0;
    uVar22 = 0x3d60730;
LAB_03d60730:
    lVar12 = auVar24._0_8_;
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar22;
    *(long *)((long)puVar7 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar26;
    *(long *)((long)puVar7 + -8) = lVar21;
    plVar13 = *(long **)(lVar14 + 0x38);
    lVar21 = lVar14;
    if (plVar13 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar13 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531e428(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      plVar13 = (long *)(lVar19 + 0x38);
      *plVar13 = lVar12;
      goto SUB_032809c4;
    }
    auVar26 = func_0x03280cac();
    unaff_x22 = 0;
    uVar22 = 0x3d607d4;
  }
  lVar12 = auVar26._0_8_;
  *(undefined8 *)((long)puVar8 + -0x30) = uVar22;
  *(long *)((long)puVar8 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar24;
  *(long *)((long)puVar8 + -8) = lVar16;
  plVar13 = *(long **)(lVar21 + 0x38);
  lVar14 = lVar21;
  if (plVar13 == (long *)0x0) {
    func_0x03256878(lVar21);
    plVar13 = *(long **)(lVar21 + 0x38);
  }
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  uVar22 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + 8);
  func_0x0531ec78(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    plVar13 = (long *)(lVar16 + 0x40);
    *plVar13 = lVar12;
    goto SUB_032809c4;
  }
  auVar24 = func_0x03280cac();
  uVar10 = auVar24._0_8_;
  *(undefined8 *)((long)puVar8 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar8 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x48) = auVar26;
  *(long *)((long)puVar8 + -0x38) = lVar9;
  plVar13 = *(long **)(lVar14 + 0x38);
  if (plVar13 == (long *)0x0) {
    func_0x03256878(lVar14);
    plVar13 = *(long **)(lVar14 + 0x38);
  }
  if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar34._0_8_ = func_0x03280ca0();
  puVar17 = *(undefined8 **)(*(long *)(lVar14 + 0x38) + 8);
  (*(code *)*puVar17)(auVar34._0_8_,0xfffffffe);
  if (auVar34._0_8_ != 0) {
    func_0x02f17738(auVar34._0_8_,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0xc0,uVar10);
    func_0x02f17738(auVar34._0_8_,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x100,auVar24._8_8_
                   );
    func_0x02f17738(auVar34._0_8_,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x80,uVar22);
    auVar34._8_8_ = extraout_x1_07;
    return auVar34;
  }
  auVar26 = func_0x03280cac();
  lVar21 = auVar26._8_8_;
  plVar13 = auVar26._0_8_;
  *(undefined8 *)((long)puVar8 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar8 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x80) = auVar24;
  *(long *)((long)puVar8 + -0x70) = lVar14;
  *(undefined8 *)((long)puVar8 + -0x68) = uVar22;
  puVar18 = puVar17;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar13 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar21 == 0)) {
    uVar22 = func_0x03280a2c(puVar11);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,puVar17);
LAB_03d60c04:
    func_0x03281048(plVar13);
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar14 = *plVar13;
    bVar2 = *(byte *)(lVar14 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar14 = *plVar13;
        bVar2 = *(byte *)(lVar14 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar14 = *plVar13;
          bVar2 = *(byte *)(lVar14 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar24 = (**(code **)(lVar14 + 0x228))(plVar13,lVar21,*(undefined8 *)(lVar14 + 0x230));
          return auVar24;
        }
      }
      goto LAB_03d60c04;
    }
    lVar12 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar12 = func_0x03280b90(plVar13,lVar12);
    if (lVar12 == 0) {
      lVar12 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar10 = func_0x03280ca0();
        func_0x04b68fa4(uVar10,plVar13,lVar21,*(undefined8 *)(puVar17[7] + 0x58));
        uVar22 = extraout_x1_09;
LAB_03d60aa4:
        auVar35._8_8_ = uVar22;
        auVar35._0_8_ = uVar10;
        return auVar35;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar10 = func_0x03280ca0();
      lVar12 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b713b0(uVar10,plVar13,lVar21,*(undefined8 *)(puVar17[7] + 0x48));
        uVar22 = extraout_x1_10;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar10 = func_0x03280ca0();
    lVar12 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar14 = func_0x03280b90(plVar13,lVar12);
    if (lVar14 != 0) {
      func_0x04b66610(uVar10,lVar14,lVar21,*(undefined8 *)(puVar17[7] + 0x30));
      uVar22 = extraout_x1_08;
      goto LAB_03d60aa4;
    }
  }
  auVar24 = func_0x03281048(plVar13,lVar12);
  lVar21 = auVar24._8_8_;
  plVar13 = auVar24._0_8_;
  *(undefined8 *)((long)puVar8 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar8 + -0xb8) = lVar12;
  *(undefined8 *)((long)puVar8 + -0xb0) = uVar10;
  *(undefined8 **)((long)puVar8 + -0xa8) = puVar17;
  *(undefined1 (*) [16])((long)puVar8 + -0xa0) = auVar26;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar13 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar21 == 0)) {
    uVar22 = func_0x03280a2c(puVar11);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,puVar18);
LAB_03d60ed8:
    func_0x03281048(plVar13);
  }
  else {
    lVar14 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar16 = *plVar13;
    bVar2 = *(byte *)(lVar16 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14)) {
      lVar14 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar16 = *plVar13;
        bVar2 = *(byte *)(lVar16 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar16 = *plVar13;
          bVar2 = *(byte *)(lVar16 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar24 = (**(code **)(lVar16 + 0x228))(plVar13,lVar21,*(undefined8 *)(lVar16 + 0x230));
          return auVar24;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar14 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c(lVar14);
    }
    lVar14 = func_0x03280b90(plVar13,lVar14);
    if (lVar14 == 0) {
      lVar14 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar10 = func_0x03280ca0();
        func_0x04b693d0(uVar10,plVar13,lVar21,*(undefined8 *)(puVar18[7] + 0x58));
        uVar22 = extraout_x1_12;
LAB_03d60d78:
        auVar36._8_8_ = uVar22;
        auVar36._0_8_ = uVar10;
        return auVar36;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar10 = func_0x03280ca0();
      lVar14 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
         )) {
        func_0x04b715c8(uVar10,plVar13,lVar21,*(undefined8 *)(puVar18[7] + 0x48));
        uVar22 = extraout_x1_13;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar10 = func_0x03280ca0();
    lVar12 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar14 = func_0x03280b90(plVar13,lVar12);
    if (lVar14 != 0) {
      func_0x04b667e0(uVar10,lVar14,lVar21,*(undefined8 *)(puVar18[7] + 0x30));
      uVar22 = extraout_x1_11;
      goto LAB_03d60d78;
    }
  }
  lVar21 = func_0x03281048(plVar13,lVar12);
  *(undefined8 *)((long)puVar8 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar8 + -0xd0) = auVar24;
  lVar12 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  func_0x03280ab0();
  if (lVar12 != 0) {
    auVar37._8_8_ = extraout_x1_14;
    auVar37._0_8_ = lVar12;
    return auVar37;
  }
  lVar12 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar14 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  **(long **)(lVar14 + 0xb8) = lVar12;
  lVar21 = *(long *)(lVar21 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  plVar13 = *(long **)(lVar21 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  auVar23._8_8_ = lVar12;
  auVar23._0_8_ = plVar13;
  return auVar23;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x666C128; MergeEngine.ECS.Systems.Board.ChargableSystem.UpdateSprite; status ok */


/* WARNING: Possible PIC construction at 0x0676c28c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined1  [16]
MergeEngine_ECS_Systems_Board_ChargableSystem__UpdateSprite
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
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
  undefined8 extraout_x1_15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long unaff_x21;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  
  if ((bRam0000000007e280f3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e280f3 = 1;
  }
  if (param_2 != 0) {
    lVar13 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d7588);
    uVar14 = func_0x069fb86c(param_2,0);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0x110);
      *(undefined8 *)(lVar13 + 0x110) = uVar14;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  puVar12 = PTR_DAT_07807fb8;
  uStack_60 = 0x676c19c;
  if ((bRam0000000007e280f0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807fc0);
    func_0x03280a18(PTR_DAT_07807fc8);
    func_0x03280a18(PTR_DAT_07807fd0);
    func_0x03280a18(PTR_DAT_07807fd8);
    func_0x03280a18(PTR_DAT_07807fb8);
    bRam0000000007e280f0 = 1;
  }
  lVar13 = *(long *)puVar12;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar13 = *(long *)puVar12;
  }
  puVar6 = PTR_DAT_07807fc0;
  lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar19 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar12;
    }
    uVar20 = **(undefined8 **)(lVar13 + 0xb8);
    uVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07807fd0);
    func_0x05355fbc(uVar14,uVar20,*(undefined8 *)PTR_DAT_07807fd8,0);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar12 + 0xb8) + 8);
    *puVar15 = uVar14;
    goto SUB_032809c4;
  }
  lVar17 = *(long *)PTR_DAT_07807fc8;
  lVar13 = func_0x03d872a8(extraout_x1_15,lVar19);
  lVar19 = *(long *)puVar6;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (lVar13 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar22._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar22._0_8_,lVar13,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    auVar22._8_8_ = extraout_x1;
    return auVar22;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar22 = func_0x03280b7c(uVar14,lVar19);
  lVar13 = auVar22._8_8_;
  uStack_60 = 0x3d6004c;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar23._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar23._0_8_,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar23._8_8_ = extraout_x1_00;
    return auVar23;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar23 = func_0x03280b7c(uVar14,lVar13);
  lVar13 = auVar23._8_8_;
  uStack_80 = 0x3d600c8;
  auStack_70 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar24._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar24._0_8_,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar24._8_8_ = extraout_x1_01;
    return auVar24;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar22 = func_0x03280b7c(uVar14,lVar13);
  lVar13 = auVar22._8_8_;
  uStack_a0 = 0x3d60144;
  auStack_90 = auVar23;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar25._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar25._0_8_,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar25._8_8_ = extraout_x1_02;
    return auVar25;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar23 = func_0x03280b7c(uVar14,lVar13);
  lVar13 = auVar23._8_8_;
  uStack_c0 = 0x3d601c0;
  auStack_b0 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar26._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar26._0_8_,auVar23._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar26._8_8_ = extraout_x1_03;
    return auVar26;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar22 = func_0x03280b7c(uVar14,lVar13);
  lVar13 = auVar22._8_8_;
  uStack_e0 = 0x3d6023c;
  auStack_d0 = auVar23;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar27._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar27._0_8_,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar27._8_8_ = extraout_x1_04;
    return auVar27;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar23 = func_0x03280b7c(uVar14,lVar13);
  lVar13 = auVar23._8_8_;
  uStack_100 = 0x3d602b8;
  auStack_f0 = auVar22;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar23._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))(auVar28._0_8_,auVar23._0_8_);
    auVar28._8_8_ = extraout_x1_05;
    return auVar28;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar22 = func_0x03280b7c(uVar14,lVar13);
  lVar13 = auVar22._8_8_;
  auStack_120[0] = 0x3d60338;
  auStack_110 = auVar23;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar29._0_8_,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1_06;
    return auVar29;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar23 = func_0x03280b7c(uVar14,lVar13);
  uStack_140 = 0x3d603b4;
  lVar13 = lVar17;
  lStack_138 = unaff_x21;
  auStack_130 = auVar22;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  puVar12 = PTR_DAT_07779d10;
  if ((auVar23._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar22 = func_0x03280b7c(uVar14,lVar17);
    uStack_160 = 0x3d60428;
    lVar19 = lVar13;
    lStack_148 = lVar17;
    if (*(long *)(lVar13 + 0x38) == 0) {
      auStack_158 = auVar23;
      func_0x03256878(lVar13);
      auVar23 = auStack_158;
    }
    puVar12 = PTR_DAT_07779d10;
    auStack_158 = auVar23;
    if ((auVar22._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar22._8_8_ != 0)) {
      lVar19 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar17 = 0;
      puVar8 = &uStack_140;
      lVar13 = lStack_148;
      uVar20 = uStack_160;
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar23 = func_0x03280b7c(uVar14,lVar13);
    uStack_180 = 0x3d6049c;
    lVar17 = lVar19;
    lStack_168 = lVar13;
    auStack_178 = auVar22;
    if (*(long *)(lVar19 + 0x38) == 0) {
      func_0x03256878(lVar19);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar23._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar12);
      uVar14 = func_0x05ac7464(uVar14,0);
      auStack_1b8 = func_0x03280b7c(uVar14,lVar19);
      uStack_1a0 = 0x3d60510;
      lVar10 = lVar17;
      lStack_188 = lVar19;
      auStack_198 = auVar23;
      if (*(long *)(lVar17 + 0x38) == 0) {
        func_0x03256878(lVar17);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auStack_1b8._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auStack_1b8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 8))
                            (auStack_1b8._0_8_,auStack_1b8._8_8_,0);
        return auVar22;
      }
      uVar14 = func_0x03280a2c(puVar12);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar23 = func_0x03280b7c(uVar14,lVar17);
      uStack_1d0 = 0x3d60588;
      lVar19 = lVar10;
      lVar11 = param_4;
      lStack_1c0 = unaff_x22;
      lStack_1a8 = lVar17;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar23._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar23._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar12);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar22 = func_0x03280b7c(uVar14,param_4);
        auVar5._8_8_ = lVar11;
        auVar5._0_8_ = lVar19;
        lStack_138 = auVar22._8_8_;
        unaff_x22 = auVar22._0_8_;
        puVar7 = auStack_200;
        auStack_200[0] = 0x3d60608;
        lVar13 = lVar19;
        lVar17 = lVar11;
        lStack_1e0 = lVar10;
        lStack_1d8 = param_4;
        auStack_1f0 = auVar23;
        if (*(long *)(lVar11 + 0x38) == 0) {
          func_0x03256878(lVar11);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar12 = PTR_DAT_07779d18, lStack_138 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))
                              (unaff_x22,lStack_138,lVar19);
          return auVar22;
        }
        uVar14 = func_0x03280a2c(puVar12);
        uVar14 = func_0x05ac7464(uVar14,0);
        uVar20 = 0x3d6068c;
        auVar23 = func_0x03280b7c(uVar14,lVar11);
        goto LAB_03d6068c;
      }
      lVar13 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar9 = &uStack_1a0;
      lVar17 = lStack_1a8;
      unaff_x22 = lStack_1c0;
      uVar20 = uStack_1d0;
      auVar22 = auStack_1b8;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
      lVar10 = 0;
      puVar9 = &uStack_160;
      lVar17 = lStack_168;
      uVar20 = uStack_180;
      auVar22 = auStack_178;
    }
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    lVar13 = 0;
    puVar7 = auStack_120;
    uVar20 = uStack_140;
    auVar5 = auStack_130;
LAB_03d6068c:
    uVar14 = auVar23._0_8_;
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar20;
    *(long *)((long)puVar7 + -0x20) = unaff_x22;
    *(long *)((long)puVar7 + -0x18) = lStack_138;
    *(undefined1 (*) [16])((long)puVar7 + -0x10) = auVar5;
    plVar18 = *(long **)(lVar17 + 0x38);
    lVar19 = lVar17;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar18 = *(long **)(lVar17 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    func_0x0531dbd0(lVar10,0xfffffffe);
    if (lVar10 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x38);
      *puVar15 = uVar14;
      goto SUB_032809c4;
    }
    auVar22 = func_0x03280cac();
    unaff_x22 = 0;
    uVar20 = 0x3d60730;
LAB_03d60730:
    uVar14 = auVar22._0_8_;
    puVar9 = (undefined8 *)((long)puVar8 + -0x30);
    *(undefined8 *)((long)puVar8 + -0x30) = uVar20;
    *(long *)((long)puVar8 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar23;
    *(long *)((long)puVar8 + -8) = lVar13;
    plVar18 = *(long **)(lVar19 + 0x38);
    lVar13 = lVar19;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar18 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    lVar10 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531e428(lVar11,0xfffffffe);
    if (lVar11 != 0) {
      puVar15 = (undefined8 *)(lVar11 + 0x38);
      *puVar15 = uVar14;
      goto SUB_032809c4;
    }
    auVar23 = func_0x03280cac();
    unaff_x22 = 0;
    uVar20 = 0x3d607d4;
  }
  uVar14 = auVar23._0_8_;
  *(undefined8 *)((long)puVar9 + -0x30) = uVar20;
  *(long *)((long)puVar9 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar9 + -0x18) = auVar22;
  *(long *)((long)puVar9 + -8) = lVar17;
  plVar18 = *(long **)(lVar13 + 0x38);
  lVar19 = lVar13;
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar18 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar17 = func_0x03280ca0();
  uVar20 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x0531ec78(lVar17,0xfffffffe);
  if (lVar17 != 0) {
    puVar15 = (undefined8 *)(lVar17 + 0x40);
    *puVar15 = uVar14;
    goto SUB_032809c4;
  }
  auVar22 = func_0x03280cac();
  uVar14 = auVar22._0_8_;
  *(undefined8 *)((long)puVar9 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar9 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar9 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar9 + -0x48) = auVar23;
  *(long *)((long)puVar9 + -0x38) = lVar10;
  plVar18 = *(long **)(lVar19 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar19);
    plVar18 = *(long **)(lVar19 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar30._0_8_ = func_0x03280ca0();
  puVar15 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 8);
  (*(code *)*puVar15)(auVar30._0_8_,0xfffffffe);
  if (auVar30._0_8_ != 0) {
    func_0x02f17738(auVar30._0_8_,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0xc0,uVar14);
    func_0x02f17738(auVar30._0_8_,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x100,auVar22._8_8_
                   );
    func_0x02f17738(auVar30._0_8_,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x80,uVar20);
    auVar30._8_8_ = extraout_x1_07;
    return auVar30;
  }
  auVar23 = func_0x03280cac();
  lVar13 = auVar23._8_8_;
  plVar18 = auVar23._0_8_;
  *(undefined8 *)((long)puVar9 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar9 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar9 + -0x80) = auVar22;
  *(long *)((long)puVar9 + -0x70) = lVar19;
  *(undefined8 *)((long)puVar9 + -0x68) = uVar20;
  puVar16 = puVar15;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar20 = func_0x03280a2c(puVar12);
    uVar20 = func_0x05ac7464(uVar20,0);
    func_0x03280b7c(uVar20,puVar15);
LAB_03d60c04:
    func_0x03281048(plVar18);
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar17 = *plVar18;
    bVar2 = *(byte *)(lVar17 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19)) {
      lVar19 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar17 = *plVar18;
        bVar2 = *(byte *)(lVar17 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar17 = *plVar18;
          bVar2 = *(byte *)(lVar17 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar22 = (**(code **)(lVar17 + 0x228))(plVar18,lVar13,*(undefined8 *)(lVar17 + 0x230));
          return auVar22;
        }
      }
      goto LAB_03d60c04;
    }
    lVar19 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar18,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar14 = func_0x03280ca0();
        func_0x04b68fa4(uVar14,plVar18,lVar13,*(undefined8 *)(puVar15[7] + 0x58));
        uVar20 = extraout_x1_09;
LAB_03d60aa4:
        auVar31._8_8_ = uVar20;
        auVar31._0_8_ = uVar14;
        return auVar31;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar14 = func_0x03280ca0();
      lVar19 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b713b0(uVar14,plVar18,lVar13,*(undefined8 *)(puVar15[7] + 0x48));
        uVar20 = extraout_x1_10;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar14 = func_0x03280ca0();
    lVar19 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar17 = func_0x03280b90(plVar18,lVar19);
    if (lVar17 != 0) {
      func_0x04b66610(uVar14,lVar17,lVar13,*(undefined8 *)(puVar15[7] + 0x30));
      uVar20 = extraout_x1_08;
      goto LAB_03d60aa4;
    }
  }
  auVar22 = func_0x03281048(plVar18,lVar19);
  lVar13 = auVar22._8_8_;
  plVar18 = auVar22._0_8_;
  *(undefined8 *)((long)puVar9 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar9 + -0xb8) = lVar19;
  *(undefined8 *)((long)puVar9 + -0xb0) = uVar14;
  *(undefined8 **)((long)puVar9 + -0xa8) = puVar15;
  *(undefined1 (*) [16])((long)puVar9 + -0xa0) = auVar23;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar16);
LAB_03d60ed8:
    func_0x03281048(plVar18);
  }
  else {
    lVar17 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar10 = *plVar18;
    bVar2 = *(byte *)(lVar10 + 0x130);
    if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)) {
      lVar17 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar10 = *plVar18;
        bVar2 = *(byte *)(lVar10 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar10 = *plVar18;
          bVar2 = *(byte *)(lVar10 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar22 = (**(code **)(lVar10 + 0x228))(plVar18,lVar13,*(undefined8 *)(lVar10 + 0x230));
          return auVar22;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar17 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar17 = func_0x03280b90(plVar18,lVar17);
    if (lVar17 == 0) {
      lVar17 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar20 = func_0x03280ca0();
        func_0x04b693d0(uVar20,plVar18,lVar13,*(undefined8 *)(puVar16[7] + 0x58));
        uVar14 = extraout_x1_12;
LAB_03d60d78:
        auVar32._8_8_ = uVar14;
        auVar32._0_8_ = uVar20;
        return auVar32;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar20 = func_0x03280ca0();
      lVar17 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      if ((*(byte *)(lVar17 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
         )) {
        func_0x04b715c8(uVar20,plVar18,lVar13,*(undefined8 *)(puVar16[7] + 0x48));
        uVar14 = extraout_x1_13;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar20 = func_0x03280ca0();
    lVar19 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar17 = func_0x03280b90(plVar18,lVar19);
    if (lVar17 != 0) {
      func_0x04b667e0(uVar20,lVar17,lVar13,*(undefined8 *)(puVar16[7] + 0x30));
      uVar14 = extraout_x1_11;
      goto LAB_03d60d78;
    }
  }
  lVar13 = func_0x03281048(plVar18,lVar19);
  *(undefined8 *)((long)puVar9 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar9 + -0xd0) = auVar22;
  lVar19 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  lVar19 = **(long **)(lVar19 + 0xb8);
  func_0x03280ab0();
  if (lVar19 != 0) {
    auVar33._8_8_ = extraout_x1_14;
    auVar33._0_8_ = lVar19;
    return auVar33;
  }
  lVar19 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  uVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar19 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  **(undefined8 **)(lVar19 + 0xb8) = uVar14;
  lVar13 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  puVar15 = *(undefined8 **)(lVar13 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  auVar21._8_8_ = uVar14;
  auVar21._0_8_ = puVar15;
  return auVar21;
}


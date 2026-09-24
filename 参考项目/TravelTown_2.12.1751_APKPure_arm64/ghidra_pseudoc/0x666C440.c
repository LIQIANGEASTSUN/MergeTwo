/* Ghidra 12.1.2 native pseudocode; RVA 0x666C440; MergeEngine.ECS.Systems.Board.ChargableSystem.SendChargableAnalytics; status ok */


/* WARNING: Possible PIC construction at 0x0676c520: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0676c524) */
/* WARNING: Removing unreachable block (ram,0x0676c534) */
/* WARNING: Removing unreachable block (ram,0x0676c53c) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined1  [16]
MergeEngine_ECS_Systems_Board_ChargableSystem__SendChargableAnalytics
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
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
  long extraout_x1_16;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined8 unaff_x23;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 auStack_230 [2];
  undefined1 auStack_220 [16];
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long *plStack_1f0;
  undefined1 auStack_1e8 [16];
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  
  puVar15 = PTR_DAT_07807ff0;
  if ((bRam0000000007e280f4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807ff0);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e280f4 = 1;
  }
  lVar16 = func_0x03280ca0(*(undefined8 *)puVar15);
  func_0x06a004f0(lVar16,0);
  plVar25 = *(long **)(param_1 + 0x60);
  if (plVar25 != (long *)0x0) {
    lVar21 = *plVar25;
    uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar17 = (undefined8 *)(lVar21 + (long)(*piVar23 + 0x14) * 0x10 + 0x138);
          goto LAB_0676c4fc;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676c4fc:
    uVar18 = (*(code *)*puVar17)(plVar25,param_2,puVar17[1]);
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)(lVar16 + 0x10);
      *puVar17 = uVar18;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e280f2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07807ff8);
    bRam0000000007e280f2 = 1;
  }
  puVar15 = PTR_DAT_0774ee08;
  if ((extraout_x1_16 == 0) || (*(long *)(extraout_x1_16 + 0x30) == 0)) {
    auVar27._0_8_ = func_0x03280cac();
    puVar15 = PTR_DAT_07808000;
    if ((bRam0000000007e280f5 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07808000);
      bRam0000000007e280f5 = 1;
    }
    uVar18 = *(undefined8 *)puVar15;
    auVar27._8_8_ = 0;
    return auVar27;
  }
  iVar2 = *(int *)(extraout_x1_16 + 0x38);
  iVar11 = func_0x04545968(*(long *)(extraout_x1_16 + 0x30),*(undefined8 *)PTR_DAT_07807ff8);
  if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar15);
  }
  uVar12 = func_0x05797580(iVar2 + 1,iVar11 + -1,0);
  *(undefined4 *)(extraout_x1_16 + 0x38) = uVar12;
  if ((bRam0000000007e280f3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e280f3 = 1;
  }
  if (extraout_x1_16 != 0) {
    lVar16 = func_0x03ced81c(extraout_x1_16,*(undefined8 *)PTR_DAT_077d7588);
    uVar18 = func_0x069fb86c(extraout_x1_16,0);
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)(lVar16 + 0x110);
      *(undefined8 *)(lVar16 + 0x110) = uVar18;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  puVar15 = PTR_DAT_07807fb8;
  uStack_90 = 0x676c19c;
  if ((bRam0000000007e280f0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807fc0);
    func_0x03280a18(PTR_DAT_07807fc8);
    func_0x03280a18(PTR_DAT_07807fd0);
    func_0x03280a18(PTR_DAT_07807fd8);
    func_0x03280a18(PTR_DAT_07807fb8);
    bRam0000000007e280f0 = 1;
  }
  lVar16 = *(long *)puVar15;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar16 = *(long *)puVar15;
  }
  puVar7 = PTR_DAT_07807fc0;
  lVar21 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar21 == 0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar15;
    }
    uVar24 = **(undefined8 **)(lVar16 + 0xb8);
    uVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07807fd0);
    func_0x05355fbc(uVar18,uVar24,*(undefined8 *)PTR_DAT_07807fd8,0);
    puVar17 = (undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 8);
    *puVar17 = uVar18;
    goto SUB_032809c4;
  }
  lVar20 = *(long *)PTR_DAT_07807fc8;
  lVar16 = func_0x03d872a8(extraout_x1_15,lVar21);
  lVar21 = *(long *)puVar7;
  if (*(long *)(lVar21 + 0x38) == 0) {
    func_0x03256878(lVar21);
  }
  if (lVar16 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar29._0_8_,lVar16,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1;
    return auVar29;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar27 = func_0x03280b7c(uVar18,lVar21);
  lVar16 = auVar27._8_8_;
  uStack_90 = 0x3d6004c;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar28._0_8_,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar28._8_8_ = extraout_x1_00;
    return auVar28;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar29 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar29._8_8_;
  uStack_b0 = 0x3d600c8;
  auStack_a0 = auVar27;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar30._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar30._0_8_,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar30._8_8_ = extraout_x1_01;
    return auVar30;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar27 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar27._8_8_;
  uStack_d0 = 0x3d60144;
  auStack_c0 = auVar29;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar31._0_8_,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar31._8_8_ = extraout_x1_02;
    return auVar31;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar29 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar29._8_8_;
  uStack_f0 = 0x3d601c0;
  auStack_e0 = auVar27;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar32._0_8_,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar32._8_8_ = extraout_x1_03;
    return auVar32;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar27 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar27._8_8_;
  uStack_110 = 0x3d6023c;
  auStack_100 = auVar29;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar33._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar33._0_8_,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar33._8_8_ = extraout_x1_04;
    return auVar33;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar29 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar29._8_8_;
  uStack_130 = 0x3d602b8;
  auStack_120 = auVar27;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar34._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))(auVar34._0_8_,auVar29._0_8_);
    auVar34._8_8_ = extraout_x1_05;
    return auVar34;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar27 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar27._8_8_;
  auStack_150[0] = 0x3d60338;
  auStack_140 = auVar29;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar35._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar35._0_8_,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar35._8_8_ = extraout_x1_06;
    return auVar35;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar29 = func_0x03280b7c(uVar18,lVar16);
  uStack_170 = 0x3d603b4;
  lVar16 = lVar20;
  uStack_168 = param_2;
  auStack_160 = auVar27;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  auVar36._8_8_ = uStack_168;
  auVar36._0_8_ = plVar25;
  puVar15 = PTR_DAT_07779d10;
  if ((auVar29._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar27 = func_0x03280b7c(uVar18,lVar20);
    uStack_190 = 0x3d60428;
    lVar21 = lVar16;
    lStack_178 = lVar20;
    if (*(long *)(lVar16 + 0x38) == 0) {
      auStack_188 = auVar29;
      func_0x03256878(lVar16);
      auVar29 = auStack_188;
    }
    puVar15 = PTR_DAT_07779d10;
    auStack_188 = auVar29;
    if ((auVar27._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar27._8_8_ != 0)) {
      lVar21 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      lVar20 = 0;
      puVar9 = &uStack_170;
      lVar16 = lStack_178;
      uVar24 = uStack_190;
      goto LAB_03d60730;
    }
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar29 = func_0x03280b7c(uVar18,lVar16);
    uStack_1b0 = 0x3d6049c;
    lVar20 = lVar21;
    lStack_198 = lVar16;
    auStack_1a8 = auVar27;
    if (*(long *)(lVar21 + 0x38) == 0) {
      func_0x03256878(lVar21);
    }
    puVar15 = PTR_DAT_07779d10;
    if ((auVar29._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
      uVar18 = func_0x03280a2c(puVar15);
      uVar18 = func_0x05ac7464(uVar18,0);
      auStack_1e8 = func_0x03280b7c(uVar18,lVar21);
      uStack_1d0 = 0x3d60510;
      lVar13 = lVar20;
      lStack_1b8 = lVar21;
      auStack_1c8 = auVar29;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auStack_1e8._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auStack_1e8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))
                            (auStack_1e8._0_8_,auStack_1e8._8_8_,0);
        return auVar27;
      }
      uVar18 = func_0x03280a2c(puVar15);
      uVar18 = func_0x05ac7464(uVar18,0);
      auVar29 = func_0x03280b7c(uVar18,lVar20);
      uStack_200 = 0x3d60588;
      lVar21 = lVar13;
      lVar14 = param_4;
      plStack_1f0 = plVar25;
      lStack_1d8 = lVar20;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar29._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
        uVar18 = func_0x03280a2c(puVar15);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar36 = func_0x03280b7c(uVar18,param_4);
        auVar6._8_8_ = lVar14;
        auVar6._0_8_ = lVar21;
        puVar8 = auStack_230;
        auStack_230[0] = 0x3d60608;
        lVar16 = lVar21;
        lVar20 = lVar14;
        lStack_210 = lVar13;
        lStack_208 = param_4;
        auStack_220 = auVar29;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        puVar15 = PTR_DAT_07779d10;
        if ((auVar36._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar36._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 0x10))
                              (auVar36._0_8_,auVar36._8_8_,lVar21);
          return auVar27;
        }
        uVar18 = func_0x03280a2c(puVar15);
        uVar18 = func_0x05ac7464(uVar18,0);
        uVar24 = 0x3d6068c;
        auVar29 = func_0x03280b7c(uVar18,lVar14);
        goto LAB_03d6068c;
      }
      lVar16 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar10 = &uStack_1d0;
      lVar20 = lStack_1d8;
      plVar25 = plStack_1f0;
      uVar24 = uStack_200;
      auVar27 = auStack_1e8;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
      lVar13 = 0;
      puVar10 = &uStack_190;
      lVar20 = lStack_198;
      uVar24 = uStack_1b0;
      auVar27 = auStack_1a8;
    }
  }
  else {
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    lVar16 = 0;
    puVar8 = auStack_150;
    uVar24 = uStack_170;
    auVar6 = auStack_160;
LAB_03d6068c:
    uVar18 = auVar29._0_8_;
    puVar9 = (undefined8 *)((long)puVar8 + -0x30);
    *(undefined8 *)((long)puVar8 + -0x30) = uVar24;
    *(undefined1 (*) [16])((long)puVar8 + -0x20) = auVar36;
    *(undefined1 (*) [16])((long)puVar8 + -0x10) = auVar6;
    plVar25 = *(long **)(lVar20 + 0x38);
    lVar21 = lVar20;
    if (plVar25 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar25 = *(long **)(lVar20 + 0x38);
    }
    if ((*(byte *)(*plVar25 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x0531dbd0(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      puVar17 = (undefined8 *)(lVar13 + 0x38);
      *puVar17 = uVar18;
      goto SUB_032809c4;
    }
    auVar27 = func_0x03280cac();
    plVar25 = (long *)0x0;
    uVar24 = 0x3d60730;
LAB_03d60730:
    uVar18 = auVar27._0_8_;
    puVar10 = (undefined8 *)((long)puVar9 + -0x30);
    *(undefined8 *)((long)puVar9 + -0x30) = uVar24;
    *(long **)((long)puVar9 + -0x20) = plVar25;
    *(undefined1 (*) [16])((long)puVar9 + -0x18) = auVar29;
    *(long *)((long)puVar9 + -8) = lVar16;
    plVar25 = *(long **)(lVar21 + 0x38);
    lVar16 = lVar21;
    if (plVar25 == (long *)0x0) {
      func_0x03256878(lVar21);
      plVar25 = *(long **)(lVar21 + 0x38);
    }
    if ((*(byte *)(*plVar25 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    lVar13 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
    func_0x0531e428(lVar14,0xfffffffe);
    if (lVar14 != 0) {
      puVar17 = (undefined8 *)(lVar14 + 0x38);
      *puVar17 = uVar18;
      goto SUB_032809c4;
    }
    auVar29 = func_0x03280cac();
    plVar25 = (long *)0x0;
    uVar24 = 0x3d607d4;
  }
  uVar18 = auVar29._0_8_;
  *(undefined8 *)((long)puVar10 + -0x30) = uVar24;
  *(long **)((long)puVar10 + -0x20) = plVar25;
  *(undefined1 (*) [16])((long)puVar10 + -0x18) = auVar27;
  *(long *)((long)puVar10 + -8) = lVar20;
  plVar25 = *(long **)(lVar16 + 0x38);
  lVar21 = lVar16;
  if (plVar25 == (long *)0x0) {
    func_0x03256878(lVar16);
    plVar25 = *(long **)(lVar16 + 0x38);
  }
  if ((*(byte *)(*plVar25 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar20 = func_0x03280ca0();
  uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
  func_0x0531ec78(lVar20,0xfffffffe);
  if (lVar20 != 0) {
    puVar17 = (undefined8 *)(lVar20 + 0x40);
    *puVar17 = uVar18;
    goto SUB_032809c4;
  }
  auVar27 = func_0x03280cac();
  uVar18 = auVar27._0_8_;
  *(undefined8 *)((long)puVar10 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar10 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar10 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar10 + -0x48) = auVar29;
  *(long *)((long)puVar10 + -0x38) = lVar13;
  plVar25 = *(long **)(lVar21 + 0x38);
  if (plVar25 == (long *)0x0) {
    func_0x03256878(lVar21);
    plVar25 = *(long **)(lVar21 + 0x38);
  }
  if ((*(byte *)(*plVar25 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar37._0_8_ = func_0x03280ca0();
  puVar17 = *(undefined8 **)(*(long *)(lVar21 + 0x38) + 8);
  (*(code *)*puVar17)(auVar37._0_8_,0xfffffffe);
  if (auVar37._0_8_ != 0) {
    func_0x02f17738(auVar37._0_8_,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0xc0,uVar18);
    func_0x02f17738(auVar37._0_8_,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0x100,auVar27._8_8_
                   );
    func_0x02f17738(auVar37._0_8_,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0x80,uVar24);
    auVar37._8_8_ = extraout_x1_07;
    return auVar37;
  }
  auVar29 = func_0x03280cac();
  lVar16 = auVar29._8_8_;
  plVar25 = auVar29._0_8_;
  *(undefined8 *)((long)puVar10 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar10 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar10 + -0x80) = auVar27;
  *(long *)((long)puVar10 + -0x70) = lVar21;
  *(undefined8 *)((long)puVar10 + -0x68) = uVar24;
  puVar19 = puVar17;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar25 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar24 = func_0x03280a2c(puVar15);
    uVar24 = func_0x05ac7464(uVar24,0);
    func_0x03280b7c(uVar24,puVar17);
LAB_03d60c04:
    func_0x03281048(plVar25);
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar20 = *plVar25;
    bVar3 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar21 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21)) {
      lVar21 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
        lVar20 = *plVar25;
        bVar3 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar21 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21))
      {
        lVar21 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
          lVar20 = *plVar25;
          bVar3 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar21 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar27 = (**(code **)(lVar20 + 0x228))(plVar25,lVar16,*(undefined8 *)(lVar20 + 0x230));
          return auVar27;
        }
      }
      goto LAB_03d60c04;
    }
    lVar21 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar21 = func_0x03280b90(plVar25,lVar21);
    if (lVar21 == 0) {
      lVar21 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar25 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar18 = func_0x03280ca0();
        func_0x04b68fa4(uVar18,plVar25,lVar16,*(undefined8 *)(puVar17[7] + 0x58));
        uVar24 = extraout_x1_09;
LAB_03d60aa4:
        auVar38._8_8_ = uVar24;
        auVar38._0_8_ = uVar18;
        return auVar38;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar18 = func_0x03280ca0();
      lVar21 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      if ((*(byte *)(lVar21 + 0x130) <= *(byte *)(*plVar25 + 0x130)) &&
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21
         )) {
        func_0x04b713b0(uVar18,plVar25,lVar16,*(undefined8 *)(puVar17[7] + 0x48));
        uVar24 = extraout_x1_10;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar18 = func_0x03280ca0();
    lVar21 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar20 = func_0x03280b90(plVar25,lVar21);
    if (lVar20 != 0) {
      func_0x04b66610(uVar18,lVar20,lVar16,*(undefined8 *)(puVar17[7] + 0x30));
      uVar24 = extraout_x1_08;
      goto LAB_03d60aa4;
    }
  }
  auVar27 = func_0x03281048(plVar25,lVar21);
  lVar16 = auVar27._8_8_;
  plVar25 = auVar27._0_8_;
  *(undefined8 *)((long)puVar10 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar10 + -0xb8) = lVar21;
  *(undefined8 *)((long)puVar10 + -0xb0) = uVar18;
  *(undefined8 **)((long)puVar10 + -0xa8) = puVar17;
  *(undefined1 (*) [16])((long)puVar10 + -0xa0) = auVar29;
  if (puVar19[7] == 0) {
    func_0x03256878(puVar19);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar25 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar19);
LAB_03d60ed8:
    func_0x03281048(plVar25);
  }
  else {
    lVar20 = *(long *)(puVar19[7] + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar13 = *plVar25;
    bVar3 = *(byte *)(lVar13 + 0x130);
    if ((*(byte *)(lVar20 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20)) {
      lVar20 = *(long *)(puVar19[7] + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar13 = *plVar25;
        bVar3 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar20 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20))
      {
        lVar20 = *(long *)(puVar19[7] + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
          lVar13 = *plVar25;
          bVar3 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar20 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar27 = (**(code **)(lVar13 + 0x228))(plVar25,lVar16,*(undefined8 *)(lVar13 + 0x230));
          return auVar27;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar20 = *(long *)(puVar19[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar20 = func_0x03280b90(plVar25,lVar20);
    if (lVar20 == 0) {
      lVar20 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar25 + 0x130) < *(byte *)(lVar20 + 0x130)) ||
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) != lVar20
         )) {
        if ((*(byte *)(*(long *)(puVar19[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar24 = func_0x03280ca0();
        func_0x04b693d0(uVar24,plVar25,lVar16,*(undefined8 *)(puVar19[7] + 0x58));
        uVar18 = extraout_x1_12;
LAB_03d60d78:
        auVar39._8_8_ = uVar18;
        auVar39._0_8_ = uVar24;
        return auVar39;
      }
      if ((*(byte *)(*(long *)(puVar19[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar24 = func_0x03280ca0();
      lVar20 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar25 + 0x130)) &&
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(uVar24,plVar25,lVar16,*(undefined8 *)(puVar19[7] + 0x48));
        uVar18 = extraout_x1_13;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar19[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar24 = func_0x03280ca0();
    lVar21 = *(long *)(puVar19[7] + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar20 = func_0x03280b90(plVar25,lVar21);
    if (lVar20 != 0) {
      func_0x04b667e0(uVar24,lVar20,lVar16,*(undefined8 *)(puVar19[7] + 0x30));
      uVar18 = extraout_x1_11;
      goto LAB_03d60d78;
    }
  }
  lVar16 = func_0x03281048(plVar25,lVar21);
  *(undefined8 *)((long)puVar10 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar10 + -0xd0) = auVar27;
  lVar21 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = **(long **)(lVar21 + 0xb8);
  func_0x03280ab0();
  if (lVar21 != 0) {
    auVar40._8_8_ = extraout_x1_14;
    auVar40._0_8_ = lVar21;
    return auVar40;
  }
  lVar21 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  uVar18 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar21 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  **(undefined8 **)(lVar21 + 0xb8) = uVar18;
  lVar16 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  puVar17 = *(undefined8 **)(lVar16 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar17 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar17 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  auVar26._8_8_ = uVar18;
  auVar26._0_8_ = puVar17;
  return auVar26;
}


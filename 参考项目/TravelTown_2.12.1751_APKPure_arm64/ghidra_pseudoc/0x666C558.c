/* Ghidra 12.1.2 native pseudocode; RVA 0x666C558; MergeEngine.ECS.Systems.Board.ChargableSystem.ChargeItem; status ok */


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
MergeEngine_ECS_Systems_Board_ChargableSystem__ChargeItem
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  undefined8 uVar17;
  undefined8 *puVar18;
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
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
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
  
  if ((bRam0000000007e280f2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07807ff8);
    bRam0000000007e280f2 = 1;
  }
  puVar15 = PTR_DAT_0774ee08;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x30) == 0)) {
    auVar25._0_8_ = func_0x03280cac();
    puVar15 = PTR_DAT_07808000;
    if ((bRam0000000007e280f5 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07808000);
      bRam0000000007e280f5 = 1;
    }
    uVar17 = *(undefined8 *)puVar15;
    auVar25._8_8_ = 0;
    return auVar25;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  iVar11 = func_0x04545968(*(long *)(param_2 + 0x30),*(undefined8 *)PTR_DAT_07807ff8);
  if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar15);
  }
  uVar12 = func_0x05797580(iVar2 + 1,iVar11 + -1,0);
  *(undefined4 *)(param_2 + 0x38) = uVar12;
  if ((bRam0000000007e280f3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e280f3 = 1;
  }
  if (param_2 != 0) {
    lVar16 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d7588);
    uVar17 = func_0x069fb86c(param_2,0);
    if (lVar16 != 0) {
      puVar18 = (undefined8 *)(lVar16 + 0x110);
      *(undefined8 *)(lVar16 + 0x110) = uVar17;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  puVar15 = PTR_DAT_07807fb8;
  uStack_60 = 0x676c19c;
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
  lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar15;
    }
    uVar23 = **(undefined8 **)(lVar16 + 0xb8);
    uVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07807fd0);
    func_0x05355fbc(uVar17,uVar23,*(undefined8 *)PTR_DAT_07807fd8,0);
    puVar18 = (undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 8);
    *puVar18 = uVar17;
    goto SUB_032809c4;
  }
  lVar20 = *(long *)PTR_DAT_07807fc8;
  lVar16 = func_0x03d872a8(extraout_x1_15,lVar22);
  lVar22 = *(long *)puVar7;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (lVar16 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar27._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar27._0_8_,lVar16,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    auVar27._8_8_ = extraout_x1;
    return auVar27;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar25 = func_0x03280b7c(uVar17,lVar22);
  lVar16 = auVar25._8_8_;
  uStack_60 = 0x3d6004c;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar26._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar26._0_8_,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar26._8_8_ = extraout_x1_00;
    return auVar26;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar27 = func_0x03280b7c(uVar17,lVar16);
  lVar16 = auVar27._8_8_;
  uStack_80 = 0x3d600c8;
  auStack_70 = auVar25;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar28._0_8_,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar28._8_8_ = extraout_x1_01;
    return auVar28;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar25 = func_0x03280b7c(uVar17,lVar16);
  lVar16 = auVar25._8_8_;
  uStack_a0 = 0x3d60144;
  auStack_90 = auVar27;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar29._0_8_,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1_02;
    return auVar29;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar27 = func_0x03280b7c(uVar17,lVar16);
  lVar16 = auVar27._8_8_;
  uStack_c0 = 0x3d601c0;
  auStack_b0 = auVar25;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar30._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar30._0_8_,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar30._8_8_ = extraout_x1_03;
    return auVar30;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar25 = func_0x03280b7c(uVar17,lVar16);
  lVar16 = auVar25._8_8_;
  uStack_e0 = 0x3d6023c;
  auStack_d0 = auVar27;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar31._0_8_,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar31._8_8_ = extraout_x1_04;
    return auVar31;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar27 = func_0x03280b7c(uVar17,lVar16);
  lVar16 = auVar27._8_8_;
  uStack_100 = 0x3d602b8;
  auStack_f0 = auVar25;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))(auVar32._0_8_,auVar27._0_8_);
    auVar32._8_8_ = extraout_x1_05;
    return auVar32;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar25 = func_0x03280b7c(uVar17,lVar16);
  lVar16 = auVar25._8_8_;
  auStack_120[0] = 0x3d60338;
  auStack_110 = auVar27;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar33._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar33._0_8_,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    auVar33._8_8_ = extraout_x1_06;
    return auVar33;
  }
  uVar17 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar17 = func_0x05ac7464(uVar17,0);
  auVar27 = func_0x03280b7c(uVar17,lVar16);
  uStack_140 = 0x3d603b4;
  lVar16 = lVar20;
  lStack_138 = unaff_x21;
  auStack_130 = auVar25;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  puVar15 = PTR_DAT_07779d10;
  if ((auVar27._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
    uVar17 = func_0x03280a2c(puVar15);
    uVar17 = func_0x05ac7464(uVar17,0);
    auVar25 = func_0x03280b7c(uVar17,lVar20);
    uStack_160 = 0x3d60428;
    lVar22 = lVar16;
    lStack_148 = lVar20;
    if (*(long *)(lVar16 + 0x38) == 0) {
      auStack_158 = auVar27;
      func_0x03256878(lVar16);
      auVar27 = auStack_158;
    }
    puVar15 = PTR_DAT_07779d10;
    auStack_158 = auVar27;
    if ((auVar25._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar25._8_8_ != 0)) {
      lVar22 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      lVar20 = 0;
      puVar9 = &uStack_140;
      lVar16 = lStack_148;
      uVar23 = uStack_160;
      goto LAB_03d60730;
    }
    uVar17 = func_0x03280a2c(puVar15);
    uVar17 = func_0x05ac7464(uVar17,0);
    auVar27 = func_0x03280b7c(uVar17,lVar16);
    uStack_180 = 0x3d6049c;
    lVar20 = lVar22;
    lStack_168 = lVar16;
    auStack_178 = auVar25;
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
    puVar15 = PTR_DAT_07779d10;
    if ((auVar27._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
      uVar17 = func_0x03280a2c(puVar15);
      uVar17 = func_0x05ac7464(uVar17,0);
      auStack_1b8 = func_0x03280b7c(uVar17,lVar22);
      uStack_1a0 = 0x3d60510;
      lVar13 = lVar20;
      lStack_188 = lVar22;
      auStack_198 = auVar27;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auStack_1b8._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auStack_1b8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))
                            (auStack_1b8._0_8_,auStack_1b8._8_8_,0);
        return auVar25;
      }
      uVar17 = func_0x03280a2c(puVar15);
      uVar17 = func_0x05ac7464(uVar17,0);
      auVar27 = func_0x03280b7c(uVar17,lVar20);
      uStack_1d0 = 0x3d60588;
      lVar22 = lVar13;
      lVar14 = param_4;
      lStack_1c0 = unaff_x22;
      lStack_1a8 = lVar20;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar27._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
        uVar17 = func_0x03280a2c(puVar15);
        uVar17 = func_0x05ac7464(uVar17,0);
        auVar25 = func_0x03280b7c(uVar17,param_4);
        auVar6._8_8_ = lVar14;
        auVar6._0_8_ = lVar22;
        lStack_138 = auVar25._8_8_;
        unaff_x22 = auVar25._0_8_;
        puVar8 = auStack_200;
        auStack_200[0] = 0x3d60608;
        lVar16 = lVar22;
        lVar20 = lVar14;
        lStack_1e0 = lVar13;
        lStack_1d8 = param_4;
        auStack_1f0 = auVar27;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        puVar15 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar15 = PTR_DAT_07779d18, lStack_138 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 0x10))
                              (unaff_x22,lStack_138,lVar22);
          return auVar25;
        }
        uVar17 = func_0x03280a2c(puVar15);
        uVar17 = func_0x05ac7464(uVar17,0);
        uVar23 = 0x3d6068c;
        auVar27 = func_0x03280b7c(uVar17,lVar14);
        goto LAB_03d6068c;
      }
      lVar16 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar10 = &uStack_1a0;
      lVar20 = lStack_1a8;
      unaff_x22 = lStack_1c0;
      uVar23 = uStack_1d0;
      auVar25 = auStack_1b8;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      lVar13 = 0;
      puVar10 = &uStack_160;
      lVar20 = lStack_168;
      uVar23 = uStack_180;
      auVar25 = auStack_178;
    }
  }
  else {
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    lVar16 = 0;
    puVar8 = auStack_120;
    uVar23 = uStack_140;
    auVar6 = auStack_130;
LAB_03d6068c:
    uVar17 = auVar27._0_8_;
    puVar9 = (undefined8 *)((long)puVar8 + -0x30);
    *(undefined8 *)((long)puVar8 + -0x30) = uVar23;
    *(long *)((long)puVar8 + -0x20) = unaff_x22;
    *(long *)((long)puVar8 + -0x18) = lStack_138;
    *(undefined1 (*) [16])((long)puVar8 + -0x10) = auVar6;
    plVar21 = *(long **)(lVar20 + 0x38);
    lVar22 = lVar20;
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar21 = *(long **)(lVar20 + 0x38);
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x0531dbd0(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      puVar18 = (undefined8 *)(lVar13 + 0x38);
      *puVar18 = uVar17;
      goto SUB_032809c4;
    }
    auVar25 = func_0x03280cac();
    unaff_x22 = 0;
    uVar23 = 0x3d60730;
LAB_03d60730:
    uVar17 = auVar25._0_8_;
    puVar10 = (undefined8 *)((long)puVar9 + -0x30);
    *(undefined8 *)((long)puVar9 + -0x30) = uVar23;
    *(long *)((long)puVar9 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar9 + -0x18) = auVar27;
    *(long *)((long)puVar9 + -8) = lVar16;
    plVar21 = *(long **)(lVar22 + 0x38);
    lVar16 = lVar22;
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar22);
      plVar21 = *(long **)(lVar22 + 0x38);
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    lVar13 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    func_0x0531e428(lVar14,0xfffffffe);
    if (lVar14 != 0) {
      puVar18 = (undefined8 *)(lVar14 + 0x38);
      *puVar18 = uVar17;
      goto SUB_032809c4;
    }
    auVar27 = func_0x03280cac();
    unaff_x22 = 0;
    uVar23 = 0x3d607d4;
  }
  uVar17 = auVar27._0_8_;
  *(undefined8 *)((long)puVar10 + -0x30) = uVar23;
  *(long *)((long)puVar10 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar10 + -0x18) = auVar25;
  *(long *)((long)puVar10 + -8) = lVar20;
  plVar21 = *(long **)(lVar16 + 0x38);
  lVar22 = lVar16;
  if (plVar21 == (long *)0x0) {
    func_0x03256878(lVar16);
    plVar21 = *(long **)(lVar16 + 0x38);
  }
  if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar20 = func_0x03280ca0();
  uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
  func_0x0531ec78(lVar20,0xfffffffe);
  if (lVar20 != 0) {
    puVar18 = (undefined8 *)(lVar20 + 0x40);
    *puVar18 = uVar17;
    goto SUB_032809c4;
  }
  auVar25 = func_0x03280cac();
  uVar17 = auVar25._0_8_;
  *(undefined8 *)((long)puVar10 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar10 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar10 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar10 + -0x48) = auVar27;
  *(long *)((long)puVar10 + -0x38) = lVar13;
  plVar21 = *(long **)(lVar22 + 0x38);
  if (plVar21 == (long *)0x0) {
    func_0x03256878(lVar22);
    plVar21 = *(long **)(lVar22 + 0x38);
  }
  if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar34._0_8_ = func_0x03280ca0();
  puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x38) + 8);
  (*(code *)*puVar18)(auVar34._0_8_,0xfffffffe);
  if (auVar34._0_8_ != 0) {
    func_0x02f17738(auVar34._0_8_,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,uVar17);
    func_0x02f17738(auVar34._0_8_,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x100,auVar25._8_8_
                   );
    func_0x02f17738(auVar34._0_8_,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,uVar23);
    auVar34._8_8_ = extraout_x1_07;
    return auVar34;
  }
  auVar27 = func_0x03280cac();
  lVar16 = auVar27._8_8_;
  plVar21 = auVar27._0_8_;
  *(undefined8 *)((long)puVar10 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar10 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar10 + -0x80) = auVar25;
  *(long *)((long)puVar10 + -0x70) = lVar22;
  *(undefined8 *)((long)puVar10 + -0x68) = uVar23;
  puVar19 = puVar18;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar21 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar23 = func_0x03280a2c(puVar15);
    uVar23 = func_0x05ac7464(uVar23,0);
    func_0x03280b7c(uVar23,puVar18);
LAB_03d60c04:
    func_0x03281048(plVar21);
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar20 = *plVar21;
    bVar3 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar22 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22)) {
      lVar22 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
        lVar20 = *plVar21;
        bVar3 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar22 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22))
      {
        lVar22 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
          lVar20 = *plVar21;
          bVar3 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar22 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar25 = (**(code **)(lVar20 + 0x228))(plVar21,lVar16,*(undefined8 *)(lVar20 + 0x230));
          return auVar25;
        }
      }
      goto LAB_03d60c04;
    }
    lVar22 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar22 = func_0x03280b90(plVar21,lVar22);
    if (lVar22 == 0) {
      lVar22 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar22 + 0x130)) ||
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) != lVar22
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar17 = func_0x03280ca0();
        func_0x04b68fa4(uVar17,plVar21,lVar16,*(undefined8 *)(puVar18[7] + 0x58));
        uVar23 = extraout_x1_09;
LAB_03d60aa4:
        auVar35._8_8_ = uVar23;
        auVar35._0_8_ = uVar17;
        return auVar35;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar17 = func_0x03280ca0();
      lVar22 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      if ((*(byte *)(lVar22 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
         )) {
        func_0x04b713b0(uVar17,plVar21,lVar16,*(undefined8 *)(puVar18[7] + 0x48));
        uVar23 = extraout_x1_10;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar17 = func_0x03280ca0();
    lVar22 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar20 = func_0x03280b90(plVar21,lVar22);
    if (lVar20 != 0) {
      func_0x04b66610(uVar17,lVar20,lVar16,*(undefined8 *)(puVar18[7] + 0x30));
      uVar23 = extraout_x1_08;
      goto LAB_03d60aa4;
    }
  }
  auVar25 = func_0x03281048(plVar21,lVar22);
  lVar16 = auVar25._8_8_;
  plVar21 = auVar25._0_8_;
  *(undefined8 *)((long)puVar10 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar10 + -0xb8) = lVar22;
  *(undefined8 *)((long)puVar10 + -0xb0) = uVar17;
  *(undefined8 **)((long)puVar10 + -0xa8) = puVar18;
  *(undefined1 (*) [16])((long)puVar10 + -0xa0) = auVar27;
  if (puVar19[7] == 0) {
    func_0x03256878(puVar19);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar21 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar17 = func_0x03280a2c(puVar15);
    uVar17 = func_0x05ac7464(uVar17,0);
    func_0x03280b7c(uVar17,puVar19);
LAB_03d60ed8:
    func_0x03281048(plVar21);
  }
  else {
    lVar20 = *(long *)(puVar19[7] + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar13 = *plVar21;
    bVar3 = *(byte *)(lVar13 + 0x130);
    if ((*(byte *)(lVar20 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20)) {
      lVar20 = *(long *)(puVar19[7] + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar13 = *plVar21;
        bVar3 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar20 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20))
      {
        lVar20 = *(long *)(puVar19[7] + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
          lVar13 = *plVar21;
          bVar3 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar20 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar25 = (**(code **)(lVar13 + 0x228))(plVar21,lVar16,*(undefined8 *)(lVar13 + 0x230));
          return auVar25;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar20 = *(long *)(puVar19[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar20 = func_0x03280b90(plVar21,lVar20);
    if (lVar20 == 0) {
      lVar20 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar20 + 0x130)) ||
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) != lVar20
         )) {
        if ((*(byte *)(*(long *)(puVar19[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        func_0x04b693d0(uVar23,plVar21,lVar16,*(undefined8 *)(puVar19[7] + 0x58));
        uVar17 = extraout_x1_12;
LAB_03d60d78:
        auVar36._8_8_ = uVar17;
        auVar36._0_8_ = uVar23;
        return auVar36;
      }
      if ((*(byte *)(*(long *)(puVar19[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar23 = func_0x03280ca0();
      lVar20 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(uVar23,plVar21,lVar16,*(undefined8 *)(puVar19[7] + 0x48));
        uVar17 = extraout_x1_13;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar19[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    lVar22 = *(long *)(puVar19[7] + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar20 = func_0x03280b90(plVar21,lVar22);
    if (lVar20 != 0) {
      func_0x04b667e0(uVar23,lVar20,lVar16,*(undefined8 *)(puVar19[7] + 0x30));
      uVar17 = extraout_x1_11;
      goto LAB_03d60d78;
    }
  }
  lVar16 = func_0x03281048(plVar21,lVar22);
  *(undefined8 *)((long)puVar10 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar10 + -0xd0) = auVar25;
  lVar22 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  lVar22 = **(long **)(lVar22 + 0xb8);
  func_0x03280ab0();
  if (lVar22 != 0) {
    auVar37._8_8_ = extraout_x1_14;
    auVar37._0_8_ = lVar22;
    return auVar37;
  }
  lVar22 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  uVar17 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar22 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  **(undefined8 **)(lVar22 + 0xb8) = uVar17;
  lVar16 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar18 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar18 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  auVar24._8_8_ = uVar17;
  auVar24._0_8_ = puVar18;
  return auVar24;
}


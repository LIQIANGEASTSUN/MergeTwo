/* Ghidra 12.1.2 native pseudocode; RVA 0x666C0C0; MergeEngine.ECS.Systems.Board.ChargableSystem.EntityCreated; status ok */


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
MergeEngine_ECS_Systems_Board_ChargableSystem__EntityCreated
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
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
  long extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar21;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x30;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  if ((bRam0000000007e280ef & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a900);
    bRam0000000007e280ef = 1;
  }
  if (param_2 == 0) {
    unaff_x30 = 0x676c128;
    func_0x03280cac();
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    lVar15 = extraout_x1_15;
    unaff_x20 = 0x7e28000;
  }
  else {
    auVar36 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_0777a900);
    lVar15 = auVar36._0_8_;
    if (lVar15 == 0) {
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auVar36._8_8_;
      return auVar31 << 0x40;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  uVar21 = 0x7e28000;
  if ((bRam0000000007e280f3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e280f3 = 1;
  }
  if (lVar15 != 0) {
    lVar13 = func_0x03ced81c(lVar15,*(undefined8 *)PTR_DAT_077d7588);
    uVar14 = func_0x069fb86c(lVar15,0);
    uVar21 = 0;
    if (lVar13 != 0) {
      puVar16 = (undefined8 *)(lVar13 + 0x110);
      *(undefined8 *)(lVar13 + 0x110) = uVar14;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  puVar12 = PTR_DAT_07807fb8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x676c19c;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar21;
  *(long *)((long)register0x00000008 + -0x28) = lVar15;
  if ((bRam0000000007e280f0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807fc0);
    func_0x03280a18(PTR_DAT_07807fc8);
    func_0x03280a18(PTR_DAT_07807fd0);
    func_0x03280a18(PTR_DAT_07807fd8);
    func_0x03280a18(PTR_DAT_07807fb8);
    bRam0000000007e280f0 = 1;
  }
  lVar15 = *(long *)puVar12;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar15 = *(long *)puVar12;
  }
  puVar6 = PTR_DAT_07807fc0;
  lVar13 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar15 = *(long *)puVar12;
    }
    uVar21 = **(undefined8 **)(lVar15 + 0xb8);
    uVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07807fd0);
    func_0x05355fbc(uVar14,uVar21,*(undefined8 *)PTR_DAT_07807fd8,0);
    puVar16 = (undefined8 *)(*(long *)(*(long *)puVar12 + 0xb8) + 8);
    *puVar16 = uVar14;
    goto SUB_032809c4;
  }
  lVar19 = *(long *)PTR_DAT_07807fc8;
  lVar15 = func_0x03d872a8(extraout_x1_16,lVar13);
  lVar13 = *(long *)puVar6;
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar14 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (lVar15 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar36._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar36._0_8_,lVar15,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar36._8_8_ = extraout_x1;
    return auVar36;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar13);
  lVar15 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d6004c;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(long *)((long)register0x00000008 + -0x48) = lVar13;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar23._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar23._0_8_,auVar36._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    auVar23._8_8_ = extraout_x1_00;
    return auVar23;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar15);
  lVar13 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d600c8;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(long *)((long)register0x00000008 + -0x68) = lVar15;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar24._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar24._0_8_,auVar36._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar24._8_8_ = extraout_x1_01;
    return auVar24;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar13);
  lVar15 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d60144;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(long *)((long)register0x00000008 + -0x88) = lVar13;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar25._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar25._0_8_,auVar36._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    auVar25._8_8_ = extraout_x1_02;
    return auVar25;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar15);
  lVar13 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d601c0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(long *)((long)register0x00000008 + -0xa8) = lVar15;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar26._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar26._0_8_,auVar36._0_8_,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    auVar26._8_8_ = extraout_x1_03;
    return auVar26;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar13);
  lVar15 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d6023c;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(long *)((long)register0x00000008 + -200) = lVar13;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar27._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar27._0_8_,auVar36._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    auVar27._8_8_ = extraout_x1_04;
    return auVar27;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar15);
  lVar13 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d602b8;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(long *)((long)register0x00000008 + -0xe8) = lVar15;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))(auVar28._0_8_,auVar36._0_8_);
    auVar28._8_8_ = extraout_x1_05;
    return auVar28;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar13);
  lVar15 = auVar36._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d60338;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(long *)((long)register0x00000008 + -0x108) = lVar13;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar36._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar29._0_8_,auVar36._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1_06;
    return auVar29;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar36 = func_0x03280b7c(uVar10,lVar15);
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0x3d603b4;
  *(undefined8 *)((long)register0x00000008 + -0x138) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  *(long *)((long)register0x00000008 + -0x128) = lVar15;
  lVar15 = lVar19;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  puVar12 = PTR_DAT_07779d10;
  if ((auVar36._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar36._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar31 = func_0x03280b7c(uVar14,lVar19);
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d60428;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x158) = auVar36;
    *(long *)((long)register0x00000008 + -0x148) = lVar19;
    lVar13 = lVar15;
    if (*(long *)(lVar15 + 0x38) == 0) {
      func_0x03256878(lVar15);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar31._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar31._8_8_ != 0)) {
      lVar13 = *(long *)((long)register0x00000008 + -0x148);
      lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
      uVar17 = 0;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x140);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x160);
      auVar36 = *(undefined1 (*) [16])((long)register0x00000008 + -0x158);
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar36 = func_0x03280b7c(uVar14,lVar15);
    *(undefined8 *)((long)register0x00000008 + -0x180) = 0x3d6049c;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x178) = auVar31;
    *(long *)((long)register0x00000008 + -0x168) = lVar15;
    lVar15 = lVar13;
    if (*(long *)(lVar13 + 0x38) == 0) {
      func_0x03256878(lVar13);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar36._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar36._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar12);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar31 = func_0x03280b7c(uVar14,lVar13);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x3d60510;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x198) = auVar36;
      *(long *)((long)register0x00000008 + -0x188) = lVar13;
      lVar13 = lVar15;
      if (*(long *)(lVar15 + 0x38) == 0) {
        func_0x03256878(lVar15);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar31._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar31._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar36 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8))
                            (auVar31._0_8_,auVar31._8_8_,0);
        return auVar36;
      }
      uVar14 = func_0x03280a2c(puVar12);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar36 = func_0x03280b7c(uVar14,lVar15);
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x3d60588;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar21;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x1b8) = auVar31;
      *(long *)((long)register0x00000008 + -0x1a8) = lVar15;
      lVar15 = lVar13;
      lVar11 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar36._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar36._8_8_ == 0)) {
        uVar21 = func_0x03280a2c(puVar12);
        uVar21 = func_0x05ac7464(uVar21,0);
        auVar30 = func_0x03280b7c(uVar21,param_4);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x200);
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0x3d60608;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x1f0) = auVar36;
        *(long *)((long)register0x00000008 + -0x1e0) = lVar13;
        *(long *)((long)register0x00000008 + -0x1d8) = param_4;
        lVar13 = lVar15;
        lVar19 = lVar11;
        if (*(long *)(lVar11 + 0x38) == 0) {
          func_0x03256878(lVar11);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar30._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar30._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar36 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))
                              (auVar30._0_8_,auVar30._8_8_,lVar15);
          return auVar36;
        }
        uVar21 = func_0x03280a2c(puVar12);
        uVar21 = func_0x05ac7464(uVar21,0);
        uVar10 = 0x3d6068c;
        auVar36 = func_0x03280b7c(uVar21,lVar11);
        goto LAB_03d6068c;
      }
      lVar19 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
      auVar31 = *(undefined1 (*) [16])((long)register0x00000008 + -0x1b8);
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x1a0);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
    }
    else {
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x168);
      lVar19 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar13 = 0;
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x160);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x180);
      auVar31 = *(undefined1 (*) [16])((long)register0x00000008 + -0x178);
    }
  }
  else {
    lVar15 = *(long *)((long)register0x00000008 + -0x130);
    lVar11 = *(long *)((long)register0x00000008 + -0x128);
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    lVar13 = 0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x120);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x140);
    auVar30._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x138);
    auVar30._0_8_ = uVar21;
LAB_03d6068c:
    uVar14 = auVar36._0_8_;
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = uVar10;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar30;
    *(long *)(puVar7 + -0x10) = lVar15;
    *(long *)(puVar7 + -8) = lVar11;
    plVar20 = *(long **)(lVar19 + 0x38);
    lVar15 = lVar19;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar20 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    uVar17 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531dbd0(lVar11,0xfffffffe);
    if (lVar11 != 0) {
      puVar16 = (undefined8 *)(lVar11 + 0x38);
      *puVar16 = uVar14;
      goto SUB_032809c4;
    }
    uVar10 = 0x3d60730;
    auVar31 = func_0x03280cac();
    uVar21 = 0;
LAB_03d60730:
    uVar14 = auVar31._0_8_;
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = uVar10;
    *(undefined8 *)(puVar8 + -0x20) = uVar21;
    *(undefined1 (*) [16])(puVar8 + -0x18) = auVar36;
    *(long *)(puVar8 + -8) = lVar13;
    plVar20 = *(long **)(lVar15 + 0x38);
    lVar19 = lVar15;
    if (plVar20 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar20 = *(long **)(lVar15 + 0x38);
    }
    if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    func_0x0531e428(lVar11,0xfffffffe);
    if (lVar11 != 0) {
      puVar16 = (undefined8 *)(lVar11 + 0x38);
      *puVar16 = uVar14;
      goto SUB_032809c4;
    }
    uVar10 = 0x3d607d4;
    auVar36 = func_0x03280cac();
    uVar21 = 0;
  }
  uVar14 = auVar36._0_8_;
  *(undefined8 *)(puVar9 + -0x30) = uVar10;
  *(undefined8 *)(puVar9 + -0x20) = uVar21;
  *(undefined1 (*) [16])(puVar9 + -0x18) = auVar31;
  *(undefined8 *)(puVar9 + -8) = uVar17;
  plVar20 = *(long **)(lVar19 + 0x38);
  lVar15 = lVar19;
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar19);
    plVar20 = *(long **)(lVar19 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar11 = func_0x03280ca0();
  uVar21 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + 8);
  func_0x0531ec78(lVar11,0xfffffffe);
  if (lVar11 != 0) {
    puVar16 = (undefined8 *)(lVar11 + 0x40);
    *puVar16 = uVar14;
    goto SUB_032809c4;
  }
  auVar31 = func_0x03280cac();
  uVar14 = auVar31._0_8_;
  *(undefined8 *)(puVar9 + -0x60) = 0x3d60878;
  *(undefined8 *)(puVar9 + -0x58) = uVar2;
  *(undefined8 *)(puVar9 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar9 + -0x48) = auVar36;
  *(long *)(puVar9 + -0x38) = lVar13;
  plVar20 = *(long **)(lVar15 + 0x38);
  if (plVar20 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar20 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar32._0_8_ = func_0x03280ca0();
  puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  (*(code *)*puVar16)(auVar32._0_8_,0xfffffffe);
  if (auVar32._0_8_ != 0) {
    func_0x02f17738(auVar32._0_8_,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0xc0,uVar14);
    func_0x02f17738(auVar32._0_8_,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x100,auVar31._8_8_
                   );
    func_0x02f17738(auVar32._0_8_,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x80,uVar21);
    auVar32._8_8_ = extraout_x1_07;
    return auVar32;
  }
  auVar36 = func_0x03280cac();
  lVar13 = auVar36._8_8_;
  plVar20 = auVar36._0_8_;
  *(undefined8 *)(puVar9 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar9 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar9 + -0x80) = auVar31;
  *(long *)(puVar9 + -0x70) = lVar15;
  *(undefined8 *)(puVar9 + -0x68) = uVar21;
  puVar18 = puVar16;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar21 = func_0x03280a2c(puVar12);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar16);
LAB_03d60c04:
    func_0x03281048(plVar20);
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar19 = *plVar20;
    bVar3 = *(byte *)(lVar19 + 0x130);
    if ((*(byte *)(lVar15 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15)) {
      lVar15 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar19 = *plVar20;
        bVar3 = *(byte *)(lVar19 + 0x130);
      }
      if ((*(byte *)(lVar15 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15))
      {
        lVar15 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
          lVar19 = *plVar20;
          bVar3 = *(byte *)(lVar19 + 0x130);
        }
        if ((*(byte *)(lVar15 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar36 = (**(code **)(lVar19 + 0x228))(plVar20,lVar13,*(undefined8 *)(lVar19 + 0x230));
          return auVar36;
        }
      }
      goto LAB_03d60c04;
    }
    lVar15 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar15 = func_0x03280b90(plVar20,lVar15);
    if (lVar15 == 0) {
      lVar15 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) != lVar15
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar14 = func_0x03280ca0();
        func_0x04b68fa4(uVar14,plVar20,lVar13,*(undefined8 *)(puVar16[7] + 0x58));
        uVar21 = extraout_x1_09;
LAB_03d60aa4:
        auVar33._8_8_ = uVar21;
        auVar33._0_8_ = uVar14;
        return auVar33;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar14 = func_0x03280ca0();
      lVar15 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      if ((*(byte *)(lVar15 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
         )) {
        func_0x04b713b0(uVar14,plVar20,lVar13,*(undefined8 *)(puVar16[7] + 0x48));
        uVar21 = extraout_x1_10;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar14 = func_0x03280ca0();
    lVar15 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar19 = func_0x03280b90(plVar20,lVar15);
    if (lVar19 != 0) {
      func_0x04b66610(uVar14,lVar19,lVar13,*(undefined8 *)(puVar16[7] + 0x30));
      uVar21 = extraout_x1_08;
      goto LAB_03d60aa4;
    }
  }
  auVar31 = func_0x03281048(plVar20,lVar15);
  lVar13 = auVar31._8_8_;
  plVar20 = auVar31._0_8_;
  *(undefined8 *)(puVar9 + -0xc0) = 0x3d60c18;
  *(long *)(puVar9 + -0xb8) = lVar15;
  *(undefined8 *)(puVar9 + -0xb0) = uVar14;
  *(undefined8 **)(puVar9 + -0xa8) = puVar16;
  *(undefined1 (*) [16])(puVar9 + -0xa0) = auVar36;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar20 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar21 = func_0x03280a2c(puVar12);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar18);
LAB_03d60ed8:
    func_0x03281048(plVar20);
  }
  else {
    lVar19 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar11 = *plVar20;
    bVar3 = *(byte *)(lVar11 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19)) {
      lVar19 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar11 = *plVar20;
        bVar3 = *(byte *)(lVar11 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar11 = *plVar20;
          bVar3 = *(byte *)(lVar11 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar36 = (**(code **)(lVar11 + 0x228))(plVar20,lVar13,*(undefined8 *)(lVar11 + 0x230));
          return auVar36;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar19 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar20,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar14 = func_0x03280ca0();
        func_0x04b693d0(uVar14,plVar20,lVar13,*(undefined8 *)(puVar18[7] + 0x58));
        uVar21 = extraout_x1_12;
LAB_03d60d78:
        auVar34._8_8_ = uVar21;
        auVar34._0_8_ = uVar14;
        return auVar34;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar14 = func_0x03280ca0();
      lVar19 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b715c8(uVar14,plVar20,lVar13,*(undefined8 *)(puVar18[7] + 0x48));
        uVar21 = extraout_x1_13;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar14 = func_0x03280ca0();
    lVar15 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar19 = func_0x03280b90(plVar20,lVar15);
    if (lVar19 != 0) {
      func_0x04b667e0(uVar14,lVar19,lVar13,*(undefined8 *)(puVar18[7] + 0x30));
      uVar21 = extraout_x1_11;
      goto LAB_03d60d78;
    }
  }
  lVar15 = func_0x03281048(plVar20,lVar15);
  *(undefined8 *)(puVar9 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar9 + -0xd0) = auVar31;
  lVar13 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  func_0x03280ab0();
  if (lVar13 != 0) {
    auVar35._8_8_ = extraout_x1_14;
    auVar35._0_8_ = lVar13;
    return auVar35;
  }
  lVar13 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  uVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar13 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  **(undefined8 **)(lVar13 + 0xb8) = uVar14;
  lVar15 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  puVar16 = *(undefined8 **)(lVar15 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar16 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  auVar22._8_8_ = uVar14;
  auVar22._0_8_ = puVar16;
  return auVar22;
}


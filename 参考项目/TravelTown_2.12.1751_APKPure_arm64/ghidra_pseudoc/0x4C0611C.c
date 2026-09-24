/* Ghidra 12.1.2 native pseudocode; RVA 0x4C0611C; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.GetUnlockedItemsOnBoard; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetUnlockedItemsOnBoard
               (long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar20;
  code *unaff_x30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if ((bRam0000000007e1ae86 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ffe0);
    func_0x03280a18(PTR_DAT_0777ffe8);
    func_0x03280a18(PTR_DAT_0777fff0);
    func_0x03280a18(PTR_DAT_0777fff8);
    func_0x03280a18(PTR_DAT_07780000);
    func_0x03280a18(PTR_DAT_07780008);
    bRam0000000007e1ae86 = 1;
  }
  if (param_1 == 0) {
    auVar21 = func_0x03280cac();
    puVar6 = PTR_DAT_07780038;
    puVar5 = PTR_DAT_07780030;
    puVar4 = PTR_DAT_07780028;
    puVar3 = PTR_DAT_07780020;
    puVar2 = PTR_DAT_07780018;
    puVar10 = PTR_DAT_07780010;
    if ((bRam0000000007e1ae87 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780030);
      func_0x03280a18(PTR_DAT_07780018);
      func_0x03280a18(PTR_DAT_07780038);
      func_0x03280a18(PTR_DAT_07780028);
      func_0x03280a18(PTR_DAT_07780010);
      func_0x03280a18(PTR_DAT_07780020);
      bRam0000000007e1ae87 = 1;
    }
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar10);
    func_0x053569b8(uVar11,auVar21._0_8_,
                    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88),0);
    uVar11 = func_0x03d50a94(auVar21._8_8_,uVar11,*(undefined8 *)puVar2);
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar3);
    lVar16 = 0;
    func_0x05355fbc(uVar20,auVar21._0_8_,
                    *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
    lVar19 = *(long *)puVar4;
    uVar11 = func_0x03d872a8(uVar11,uVar20);
    lVar18 = func_0x03d3c654(uVar11,*(undefined8 *)puVar5);
    lVar12 = *(long *)puVar6;
    unaff_x21 = 0x7e1a000;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x30 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetToolGraphsFromItems;
    unaff_x19 = 0;
  }
  else {
    uVar11 = func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_07780008);
    lVar18 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c(lVar18);
    }
    lVar18 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    puVar4 = PTR_DAT_0777fff8;
    puVar3 = PTR_DAT_0777fff0;
    puVar2 = PTR_DAT_0777ffe8;
    puVar10 = PTR_DAT_0777ffe0;
    lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
    if (lVar18 == 0) {
      lVar18 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar18 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      uVar20 = **(undefined8 **)(lVar18 + 0xb8);
      lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
      func_0x05355fbc(lVar18,uVar20,
                      *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78),0);
      lVar19 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
      lVar12 = *(long *)(lVar19 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
        lVar19 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar12 + 0xb8) + 0x10) = lVar18;
      lVar12 = *(long *)(lVar19 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar12 + 0xb8) + 0x10,lVar18);
    }
    uVar11 = func_0x03d872a8(uVar11,lVar18,*(undefined8 *)puVar3);
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar4);
    lVar16 = 0;
    func_0x053569b8(uVar20,param_1,
                    *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
    lVar19 = *(long *)puVar10;
    lVar18 = func_0x03d50a94(uVar11,uVar20);
    lVar12 = *(long *)puVar2;
    param_2 = unaff_x20;
  }
  *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x10) = param_2;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (lVar18 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x04143d60(lVar19,lVar18,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar19;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar12);
  lVar18 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3d6004c;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(long *)((long)register0x00000008 + -0x28) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0419ce74(lVar12,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar18);
  lVar12 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d600c8;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(long *)((long)register0x00000008 + -0x48) = lVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x041c2810(lVar18,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar12);
  lVar18 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d60144;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(long *)((long)register0x00000008 + -0x68) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041ddb58(lVar12,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar18);
  lVar12 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d601c0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(long *)((long)register0x00000008 + -0x88) = lVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x041e617c(lVar18,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar12);
  lVar18 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d6023c;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(long *)((long)register0x00000008 + -0xa8) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e8ba0(lVar12,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar18);
  lVar12 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d602b8;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(long *)((long)register0x00000008 + -200) = lVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))(lVar18,auVar21._0_8_);
    return lVar18;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar12);
  lVar18 = auVar21._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d60338;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(long *)((long)register0x00000008 + -0xe8) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0420cec8(lVar12,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar12;
  }
  uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar11 = func_0x05ac7464(uVar11,0);
  auVar21 = func_0x03280b7c(uVar11,lVar18);
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d603b4;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(long *)((long)register0x00000008 + -0x108) = lVar18;
  lVar18 = lVar19;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  puVar10 = PTR_DAT_07779d10;
  if ((auVar21._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar21._8_8_ == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar22 = func_0x03280b7c(uVar11,lVar19);
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x138) = auVar21;
    *(long *)((long)register0x00000008 + -0x128) = lVar19;
    lVar12 = lVar18;
    if (*(long *)(lVar18 + 0x38) == 0) {
      func_0x03256878(lVar18);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ != 0)) {
      lVar12 = *(long *)((long)register0x00000008 + -0x128);
      lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
      uVar20 = 0;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x120);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x140);
      auVar21 = *(undefined1 (*) [16])((long)register0x00000008 + -0x138);
      goto LAB_03d60730;
    }
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    auVar21 = func_0x03280b7c(uVar11,lVar18);
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x158) = auVar22;
    *(long *)((long)register0x00000008 + -0x148) = lVar18;
    lVar18 = lVar12;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar21._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar21._8_8_ == 0)) {
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auVar22 = func_0x03280b7c(uVar11,lVar12);
      *(undefined8 *)((long)register0x00000008 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x178) = auVar21;
      *(long *)((long)register0x00000008 + -0x168) = lVar12;
      lVar12 = lVar18;
      if (*(long *)(lVar18 + 0x38) == 0) {
        func_0x03256878(lVar18);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar22._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar22._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))
                           (auVar22._0_8_,auVar22._8_8_,0);
        return lVar18;
      }
      uVar11 = func_0x03280a2c(puVar10);
      uVar11 = func_0x05ac7464(uVar11,0);
      auVar21 = func_0x03280b7c(uVar11,lVar18);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0x3d60588;
      *(long *)((long)register0x00000008 + -0x1a0) = unaff_x22;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x198) = auVar22;
      *(long *)((long)register0x00000008 + -0x188) = lVar18;
      lVar18 = lVar12;
      lVar15 = lVar16;
      if (*(long *)(lVar16 + 0x38) == 0) {
        func_0x03256878(lVar16);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar21._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar21._8_8_ == 0)) {
        uVar11 = func_0x03280a2c(puVar10);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar22 = func_0x03280b7c(uVar11,lVar16);
        lVar19 = auVar22._8_8_;
        unaff_x22 = auVar22._0_8_;
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x1d0) = auVar21;
        *(long *)((long)register0x00000008 + -0x1c0) = lVar12;
        *(long *)((long)register0x00000008 + -0x1b8) = lVar16;
        lVar12 = lVar18;
        lVar16 = lVar15;
        if (*(long *)(lVar15 + 0x38) == 0) {
          func_0x03256878(lVar15);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar10 = PTR_DAT_07779d18, lVar19 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 0x10))
                             (unaff_x22,lVar19,lVar18);
          return lVar18;
        }
        uVar11 = func_0x03280a2c(puVar10);
        uVar20 = func_0x05ac7464(uVar11,0);
        uVar11 = 0x3d6068c;
        auVar21 = func_0x03280b7c(uVar20,lVar15);
        goto LAB_03d6068c;
      }
      lVar19 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x188);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x1a0);
      auVar22 = *(undefined1 (*) [16])((long)register0x00000008 + -0x198);
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x180);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
    }
    else {
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x148);
      lVar19 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar12 = 0;
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x140);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x160);
      auVar22 = *(undefined1 (*) [16])((long)register0x00000008 + -0x158);
    }
  }
  else {
    lVar18 = *(long *)((long)register0x00000008 + -0x110);
    lVar15 = *(long *)((long)register0x00000008 + -0x108);
    lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    lVar12 = 0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x100);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x120);
    lVar19 = *(long *)((long)register0x00000008 + -0x118);
LAB_03d6068c:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = uVar11;
    *(long *)(puVar7 + -0x20) = unaff_x22;
    *(long *)(puVar7 + -0x18) = lVar19;
    *(long *)(puVar7 + -0x10) = lVar18;
    *(long *)(puVar7 + -8) = lVar15;
    plVar17 = *(long **)(lVar16 + 0x38);
    lVar18 = lVar16;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar16);
      plVar17 = *(long **)(lVar16 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    uVar20 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
    func_0x0531dbd0(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      *(undefined8 *)(lVar19 + 0x38) = auVar21._0_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x38),auVar21._0_8_);
      *(undefined8 *)(lVar19 + 0x48) = auVar21._8_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x48),auVar21._8_8_);
      *(long *)(lVar19 + 0x28) = lVar12;
      func_0x032809c4((long *)(lVar19 + 0x28),lVar12);
      return lVar19;
    }
    uVar11 = 0x3d60730;
    auVar22 = func_0x03280cac();
    unaff_x22 = 0;
LAB_03d60730:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = uVar11;
    *(long *)(puVar8 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar8 + -0x18) = auVar21;
    *(long *)(puVar8 + -8) = lVar12;
    plVar17 = *(long **)(lVar18 + 0x38);
    lVar19 = lVar18;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar17 = *(long **)(lVar18 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    lVar12 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    func_0x0531e428(lVar16,0xfffffffe);
    if (lVar16 != 0) {
      *(undefined8 *)(lVar16 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar16 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar16 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar16 + 0x48),auVar22._8_8_);
      *(undefined8 *)(lVar16 + 0x28) = uVar20;
      func_0x032809c4((undefined8 *)(lVar16 + 0x28),uVar20);
      return lVar16;
    }
    uVar11 = 0x3d607d4;
    auVar21 = func_0x03280cac();
    unaff_x22 = 0;
  }
  *(undefined8 *)(puVar9 + -0x30) = uVar11;
  *(long *)(puVar9 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar9 + -0x18) = auVar22;
  *(undefined8 *)(puVar9 + -8) = uVar20;
  plVar17 = *(long **)(lVar19 + 0x38);
  lVar18 = lVar19;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar19);
    plVar17 = *(long **)(lVar19 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  uVar11 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + 8);
  func_0x0531ec78(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    *(undefined8 *)(lVar16 + 0x40) = auVar21._0_8_;
    func_0x032809c4((undefined8 *)(lVar16 + 0x40),auVar21._0_8_);
    *(undefined8 *)(lVar16 + 0x50) = auVar21._8_8_;
    func_0x032809c4((undefined8 *)(lVar16 + 0x50),auVar21._8_8_);
    *(long *)(lVar16 + 0x30) = lVar12;
    func_0x032809c4((long *)(lVar16 + 0x30),lVar12);
    return lVar16;
  }
  auVar22 = func_0x03280cac();
  lVar19 = auVar22._0_8_;
  *(undefined8 *)(puVar9 + -0x60) = 0x3d60878;
  *(undefined8 *)(puVar9 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar9 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar9 + -0x48) = auVar21;
  *(long *)(puVar9 + -0x38) = lVar12;
  plVar17 = *(long **)(lVar18 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar18);
    plVar17 = *(long **)(lVar18 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar12 = func_0x03280ca0();
  puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x38) + 8);
  (*(code *)*puVar13)(lVar12,0xfffffffe);
  if (lVar12 != 0) {
    func_0x02f17738(lVar12,*(long *)(**(long **)(lVar18 + 0x38) + 0x80) + 0xc0,lVar19);
    func_0x02f17738(lVar12,*(long *)(**(long **)(lVar18 + 0x38) + 0x80) + 0x100,auVar22._8_8_);
    func_0x02f17738(lVar12,*(long *)(**(long **)(lVar18 + 0x38) + 0x80) + 0x80,uVar11);
    return lVar12;
  }
  auVar21 = func_0x03280cac();
  lVar12 = auVar21._8_8_;
  plVar17 = auVar21._0_8_;
  *(undefined8 *)(puVar9 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar9 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar9 + -0x80) = auVar22;
  *(long *)(puVar9 + -0x70) = lVar18;
  *(undefined8 *)(puVar9 + -0x68) = uVar11;
  puVar14 = puVar13;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar12 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar13);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar16 = *plVar17;
    bVar1 = *(byte *)(lVar16 + 0x130);
    if ((*(byte *)(lVar18 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18)) {
      lVar18 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
        lVar16 = *plVar17;
        bVar1 = *(byte *)(lVar16 + 0x130);
      }
      if ((*(byte *)(lVar18 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18))
      {
        lVar18 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
          lVar16 = *plVar17;
          bVar1 = *(byte *)(lVar16 + 0x130);
        }
        if ((*(byte *)(lVar18 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar18 = (**(code **)(lVar16 + 0x228))(plVar17,lVar12,*(undefined8 *)(lVar16 + 0x230));
          return lVar18;
        }
      }
      goto LAB_03d60c04;
    }
    lVar18 = *(long *)(puVar13[7] + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar18 = func_0x03280b90(plVar17,lVar18);
    if (lVar18 == 0) {
      lVar18 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) != lVar18
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar18 = func_0x03280ca0();
        func_0x04b68fa4(lVar18,plVar17,lVar12,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar18;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar19 = func_0x03280ca0();
      lVar18 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
         )) {
        func_0x04b713b0(lVar19,plVar17,lVar12,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar19;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar18 = *(long *)(puVar13[7] + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar16 = func_0x03280b90(plVar17,lVar18);
    if (lVar16 != 0) {
      func_0x04b66610(lVar19,lVar16,lVar12,*(undefined8 *)(puVar13[7] + 0x30));
      return lVar19;
    }
  }
  auVar22 = func_0x03281048(plVar17,lVar18);
  lVar12 = auVar22._8_8_;
  plVar17 = auVar22._0_8_;
  *(undefined8 *)(puVar9 + -0xc0) = 0x3d60c18;
  *(long *)(puVar9 + -0xb8) = lVar18;
  *(long *)(puVar9 + -0xb0) = lVar19;
  *(undefined8 **)(puVar9 + -0xa8) = puVar13;
  *(undefined1 (*) [16])(puVar9 + -0xa0) = auVar21;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar12 == 0)) {
    uVar11 = func_0x03280a2c(puVar10);
    uVar11 = func_0x05ac7464(uVar11,0);
    func_0x03280b7c(uVar11,puVar14);
  }
  else {
    lVar19 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar16 = *plVar17;
    bVar1 = *(byte *)(lVar16 + 0x130);
    if ((bVar1 < *(byte *)(lVar19 + 0x130)) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19)) {
      lVar19 = *(long *)(puVar14[7] + 0x20);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar19 = func_0x03280b90(plVar17,lVar19);
      if (lVar19 != 0) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        lVar18 = *(long *)(puVar14[7] + 0x20);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
        }
        lVar16 = func_0x03280b90(plVar17,lVar18);
        if (lVar16 != 0) {
          func_0x04b667e0(lVar19,lVar16,lVar12,*(undefined8 *)(puVar14[7] + 0x30));
          return lVar19;
        }
        goto LAB_03d60ee0;
      }
      lVar19 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar18 = func_0x03280ca0();
        func_0x04b693d0(lVar18,plVar17,lVar12,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar18;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar19 = func_0x03280ca0();
      lVar16 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      if ((*(byte *)(lVar16 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) == lVar16
         )) {
        func_0x04b715c8(lVar19,plVar17,lVar12,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar19;
      }
    }
    else {
      lVar19 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar16 = *plVar17;
        bVar1 = *(byte *)(lVar16 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar16 = *plVar17;
          bVar1 = *(byte *)(lVar16 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar18 = (**(code **)(lVar16 + 0x228))(plVar17,lVar12,*(undefined8 *)(lVar16 + 0x230));
          return lVar18;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar18 = func_0x03281048(plVar17,lVar18);
  *(undefined8 *)(puVar9 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar9 + -0xd0) = auVar22;
  lVar12 = *(long *)(lVar18 + 0x20);
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
    lVar12 = *(long *)(lVar18 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar19 = *(long *)(lVar18 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    **(long **)(lVar19 + 0xb8) = lVar12;
    lVar18 = *(long *)(lVar18 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar18 + 0xb8),lVar12);
  }
  return lVar12;
}


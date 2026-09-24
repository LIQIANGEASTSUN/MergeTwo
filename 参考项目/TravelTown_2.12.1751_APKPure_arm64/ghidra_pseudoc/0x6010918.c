/* Ghidra 12.1.2 native pseudocode; RVA 0x6010918; MergeEngine.Configuration.Capabilities.ItemsSpawningCapability.GetSpawningList; status ok */


/* WARNING: Possible PIC construction at 0x06110e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06110e8c) */

long MergeEngine_Configuration_Capabilities_ItemsSpawningCapability__GetSpawningList
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x19;
  undefined8 uVar15;
  long *unaff_x20;
  long lVar16;
  undefined8 unaff_x21;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar18;
  code *unaff_x30;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar4 = &stack0xffffffffffffffc0;
  if ((bRam0000000007e237dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cf458);
    func_0x03280a18(PTR_DAT_077cf460);
    func_0x03280a18(PTR_DAT_077cdac8);
    func_0x03280a18(PTR_DAT_077cf4f8);
    func_0x03280a18(PTR_DAT_077cf500);
    func_0x03280a18(PTR_DAT_077cf470);
    func_0x03280a18(PTR_DAT_0777ffe8);
    func_0x03280a18(PTR_DAT_077cf508);
    func_0x03280a18(PTR_DAT_077cf488);
    func_0x03280a18(PTR_DAT_077cf510);
    func_0x03280a18(PTR_DAT_077cdad8);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_077cda58);
    func_0x03280a18(PTR_DAT_077cf518);
    func_0x03280a18(PTR_DAT_077cf520);
    func_0x03280a18(PTR_DAT_077cf528);
    func_0x03280a18(PTR_DAT_077cf530);
    func_0x03280a18(PTR_DAT_077cf538);
    func_0x03280a18(PTR_DAT_077cf540);
    func_0x03280a18(PTR_DAT_077cf548);
    bRam0000000007e237dc = 1;
  }
  puVar3 = PTR_DAT_077cf548;
  puVar9 = PTR_DAT_0777ffe8;
  if (*(char *)(param_1 + 0x31) == '\0') {
    lVar10 = *(long *)(param_1 + 0x68);
    if (lVar10 == 0) {
      lVar10 = func_0x03280cac();
      puVar2 = PTR_DAT_077cf560;
      puVar3 = PTR_DAT_077cf558;
      puVar9 = PTR_DAT_077cf550;
      if ((bRam0000000007e237dd & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cf550);
        func_0x03280a18(PTR_DAT_077cf558);
        func_0x03280a18(PTR_DAT_077cf560);
        bRam0000000007e237dd = 1;
      }
      lVar14 = *(long *)puVar9;
      uVar15 = func_0x03d37218(*(undefined8 *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x58));
      lVar10 = func_0x03d3c654(uVar15,*(undefined8 *)puVar3);
      lVar16 = *(long *)puVar2;
      puVar4 = &stack0xffffffffffffffc0;
      unaff_x30 = 
      MergeEngine_Configuration_Capabilities_ItemsSpawningCapability__GetDistinctSpawnableItems;
      unaff_x20 = (long *)0x0;
    }
    else {
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar16 = *(long *)PTR_DAT_077cf548;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar16 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
        if (lVar14 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar16 = *(long *)puVar3;
          }
          uVar15 = **(undefined8 **)(lVar16 + 0xb8);
          lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdad8);
          param_4 = 0;
          func_0x053569b8(lVar14,uVar15,*(undefined8 *)PTR_DAT_077cf520);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar11 = lVar14;
          func_0x032809c4(plVar11,lVar14);
        }
        uVar15 = func_0x03d53498(lVar10,lVar14,*(undefined8 *)PTR_DAT_077cdac8);
        lVar10 = *(long *)puVar3;
        uVar17 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar16 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uVar18 = **(undefined8 **)(lVar10 + 0xb8);
          lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf488);
          param_4 = 0;
          func_0x053569b8(lVar16,uVar18,*(undefined8 *)PTR_DAT_077cf528);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *plVar11 = lVar16;
          func_0x032809c4(plVar11,lVar16);
        }
        uVar17 = func_0x03d50a94(uVar17,lVar16,*(undefined8 *)PTR_DAT_077cf470);
        puVar2 = PTR_DAT_077cf458;
        uVar15 = func_0x03d37218(uVar15,uVar17,*(undefined8 *)PTR_DAT_077cf458);
        lVar10 = *(long *)puVar3;
        uVar17 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar16 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uVar18 = **(undefined8 **)(lVar10 + 0xb8);
          lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf508);
          param_4 = 0;
          func_0x053569b8(lVar16,uVar18,*(undefined8 *)PTR_DAT_077cf530);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *plVar11 = lVar16;
          func_0x032809c4(plVar11,lVar16);
        }
        uVar17 = func_0x03d50a94(uVar17,lVar16,*(undefined8 *)PTR_DAT_077cf500);
        lVar14 = *(long *)puVar2;
        uVar15 = func_0x03d37218(uVar15,uVar17);
        lVar10 = func_0x03d3c654(uVar15,*(undefined8 *)PTR_DAT_077cf460);
        goto LAB_06110cfc;
      }
      unaff_x20 = (long *)(param_1 + 0x78);
      lVar10 = *unaff_x20;
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x18) != 0)) {
        return lVar10;
      }
      lVar10 = *(long *)PTR_DAT_077cf548;
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar3;
      }
      lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
      if (lVar16 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar10 = *(long *)puVar3;
        }
        unaff_x23 = **(undefined8 **)(lVar10 + 0xb8);
        lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf488);
        param_4 = 0;
        func_0x053569b8(lVar16,unaff_x23,*(undefined8 *)PTR_DAT_077cf538);
        plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar11 = lVar16;
        func_0x032809c4(plVar11,lVar16);
      }
      lVar8 = func_0x03d50a94(uVar15,lVar16,*(undefined8 *)PTR_DAT_077cf470);
      lVar10 = *(long *)puVar3;
      unaff_x21 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c(lVar10);
        lVar10 = *(long *)puVar3;
      }
      unaff_x22 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x38);
      if (unaff_x22 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        unaff_x23 = **(undefined8 **)(lVar10 + 0xb8);
        unaff_x22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf508);
        param_4 = 0;
        func_0x053569b8(unaff_x22,unaff_x23,*(undefined8 *)PTR_DAT_077cf540);
        plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
        *plVar11 = unaff_x22;
        func_0x032809c4(plVar11,unaff_x22);
      }
      uVar15 = func_0x03d50a94(unaff_x21,unaff_x22,*(undefined8 *)PTR_DAT_077cf500);
      lVar14 = *(long *)PTR_DAT_077cf458;
      uVar15 = func_0x03d37218(lVar8,uVar15);
      lVar10 = func_0x03d3c654(uVar15,*(undefined8 *)PTR_DAT_077cf460);
      lVar16 = *(long *)puVar9;
      unaff_x30 = (code *)0x6110e8c;
      param_1 = lVar8;
    }
  }
  else {
    lVar10 = *(long *)PTR_DAT_077cf548;
    uVar15 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_077cf4f8;
    lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar16 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar3;
      }
      uVar17 = **(undefined8 **)(lVar10 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf510);
      param_4 = 0;
      func_0x053569b8(lVar16,uVar17,*(undefined8 *)PTR_DAT_077cf518);
      plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar11 = lVar16;
      func_0x032809c4(plVar11,lVar16);
    }
    lVar14 = *(long *)puVar2;
    lVar10 = func_0x03d50a94(uVar15,lVar16);
LAB_06110cfc:
    lVar16 = *(long *)puVar9;
    puVar4 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
  }
  *(code **)(puVar4 + -0x20) = unaff_x30;
  *(long **)(puVar4 + -0x10) = unaff_x20;
  *(long *)(puVar4 + -8) = param_1;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (lVar10 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x04143d60(lVar14,lVar10,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return lVar14;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar16);
  lVar10 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0x40) = 0x3d6004c;
  *(undefined8 *)(puVar4 + -0x30) = 0;
  *(long *)(puVar4 + -0x28) = lVar16;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x0419ce74(lVar16,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  lVar16 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d600c8;
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(long *)(puVar4 + -0x48) = lVar10;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x041c2810(lVar10,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return lVar10;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar16);
  lVar10 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0x80) = 0x3d60144;
  *(undefined8 *)(puVar4 + -0x70) = 0;
  *(long *)(puVar4 + -0x68) = lVar16;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x041ddb58(lVar16,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  lVar16 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3d601c0;
  *(undefined8 *)(puVar4 + -0x90) = 0;
  *(long *)(puVar4 + -0x88) = lVar10;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    func_0x041e617c(lVar10,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return lVar10;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar16);
  lVar10 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0xc0) = 0x3d6023c;
  *(undefined8 *)(puVar4 + -0xb0) = 0;
  *(long *)(puVar4 + -0xa8) = lVar16;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x041e8ba0(lVar16,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  lVar16 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0xe0) = 0x3d602b8;
  *(undefined8 *)(puVar4 + -0xd0) = 0;
  *(long *)(puVar4 + -200) = lVar10;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))(lVar10,auVar19._0_8_);
    return lVar10;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar16);
  lVar10 = auVar19._8_8_;
  *(undefined8 *)(puVar4 + -0x100) = 0x3d60338;
  *(undefined8 *)(puVar4 + -0xf0) = 0;
  *(long *)(puVar4 + -0xe8) = lVar16;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar19._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar16 = func_0x03280ca0();
    func_0x0420cec8(lVar16,auVar19._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return lVar16;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar19 = func_0x03280b7c(uVar15,lVar10);
  *(undefined8 *)(puVar4 + -0x120) = 0x3d603b4;
  *(undefined8 *)(puVar4 + -0x118) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x110) = 0;
  *(long *)(puVar4 + -0x108) = lVar10;
  lVar10 = lVar14;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  puVar9 = PTR_DAT_07779d10;
  if ((auVar19._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar20 = func_0x03280b7c(uVar15,lVar14);
    *(undefined8 *)(puVar4 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])(puVar4 + -0x138) = auVar19;
    *(long *)(puVar4 + -0x128) = lVar14;
    lVar16 = lVar10;
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03256878(lVar10);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar20._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar20._8_8_ != 0)) {
      lVar16 = *(long *)(puVar4 + -0x128);
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      uVar17 = 0;
      puVar6 = puVar4 + -0x120;
      uVar15 = *(undefined8 *)(puVar4 + -0x140);
      auVar19 = *(undefined1 (*) [16])(puVar4 + -0x138);
      goto LAB_03d60730;
    }
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar19 = func_0x03280b7c(uVar15,lVar10);
    *(undefined8 *)(puVar4 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])(puVar4 + -0x158) = auVar20;
    *(long *)(puVar4 + -0x148) = lVar10;
    lVar10 = lVar16;
    if (*(long *)(lVar16 + 0x38) == 0) {
      func_0x03256878(lVar16);
    }
    puVar9 = PTR_DAT_07779d10;
    if ((auVar19._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
      uVar15 = func_0x03280a2c(puVar9);
      uVar15 = func_0x05ac7464(uVar15,0);
      auVar20 = func_0x03280b7c(uVar15,lVar16);
      *(undefined8 *)(puVar4 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])(puVar4 + -0x178) = auVar19;
      *(long *)(puVar4 + -0x168) = lVar16;
      lVar16 = lVar10;
      if (*(long *)(lVar10 + 0x38) == 0) {
        func_0x03256878(lVar10);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar20._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar20._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 8))
                           (auVar20._0_8_,auVar20._8_8_,0);
        return lVar10;
      }
      uVar15 = func_0x03280a2c(puVar9);
      uVar15 = func_0x05ac7464(uVar15,0);
      auVar19 = func_0x03280b7c(uVar15,lVar10);
      *(undefined8 *)(puVar4 + -0x1b0) = 0x3d60588;
      *(long *)(puVar4 + -0x1a0) = unaff_x22;
      *(undefined1 (*) [16])(puVar4 + -0x198) = auVar20;
      *(long *)(puVar4 + -0x188) = lVar10;
      lVar10 = lVar16;
      lVar8 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar9 = PTR_DAT_07779d10;
      if ((auVar19._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar19._8_8_ == 0)) {
        uVar15 = func_0x03280a2c(puVar9);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar20 = func_0x03280b7c(uVar15,param_4);
        puVar5 = puVar4 + -0x1e0;
        *(undefined8 *)(puVar4 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])(puVar4 + -0x1d0) = auVar19;
        *(long *)(puVar4 + -0x1c0) = lVar16;
        *(long *)(puVar4 + -0x1b8) = param_4;
        lVar16 = lVar10;
        lVar14 = lVar8;
        if (*(long *)(lVar8 + 0x38) == 0) {
          func_0x03256878(lVar8);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((auVar20._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar20._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))
                             (auVar20._0_8_,auVar20._8_8_,lVar10);
          return lVar10;
        }
        uVar15 = func_0x03280a2c(puVar9);
        uVar17 = func_0x05ac7464(uVar15,0);
        uVar15 = 0x3d6068c;
        auVar19 = func_0x03280b7c(uVar17,lVar8);
        goto LAB_03d6068c;
      }
      lVar14 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      uVar17 = *(undefined8 *)(puVar4 + -0x188);
      unaff_x22 = *(long *)(puVar4 + -0x1a0);
      auVar20 = *(undefined1 (*) [16])(puVar4 + -0x198);
      puVar7 = puVar4 + -0x180;
      uVar15 = *(undefined8 *)(puVar4 + -0x1b0);
    }
    else {
      uVar17 = *(undefined8 *)(puVar4 + -0x148);
      lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      lVar16 = 0;
      puVar7 = puVar4 + -0x140;
      uVar15 = *(undefined8 *)(puVar4 + -0x160);
      auVar20 = *(undefined1 (*) [16])(puVar4 + -0x158);
    }
  }
  else {
    lVar10 = *(long *)(puVar4 + -0x110);
    lVar8 = *(long *)(puVar4 + -0x108);
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    lVar16 = 0;
    puVar5 = puVar4 + -0x100;
    uVar15 = *(undefined8 *)(puVar4 + -0x120);
    auVar20._8_8_ = *(undefined8 *)(puVar4 + -0x118);
    auVar20._0_8_ = unaff_x22;
LAB_03d6068c:
    puVar6 = puVar5 + -0x30;
    *(undefined8 *)(puVar5 + -0x30) = uVar15;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar20;
    *(long *)(puVar5 + -0x10) = lVar10;
    *(long *)(puVar5 + -8) = lVar8;
    plVar11 = *(long **)(lVar14 + 0x38);
    lVar10 = lVar14;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar11 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531dbd0(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar19._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar19._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar19._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar19._8_8_);
      *(long *)(lVar8 + 0x28) = lVar16;
      func_0x032809c4((long *)(lVar8 + 0x28),lVar16);
      return lVar8;
    }
    uVar15 = 0x3d60730;
    auVar20 = func_0x03280cac();
    unaff_x22 = 0;
LAB_03d60730:
    puVar7 = puVar6 + -0x30;
    *(undefined8 *)(puVar6 + -0x30) = uVar15;
    *(long *)(puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar6 + -0x18) = auVar19;
    *(long *)(puVar6 + -8) = lVar16;
    plVar11 = *(long **)(lVar10 + 0x38);
    lVar14 = lVar10;
    if (plVar11 == (long *)0x0) {
      func_0x03256878(lVar10);
      plVar11 = *(long **)(lVar10 + 0x38);
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar8 = func_0x03280ca0();
    lVar16 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    func_0x0531e428(lVar8,0xfffffffe);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x38) = auVar20._0_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x38),auVar20._0_8_);
      *(undefined8 *)(lVar8 + 0x48) = auVar20._8_8_;
      func_0x032809c4((undefined8 *)(lVar8 + 0x48),auVar20._8_8_);
      *(undefined8 *)(lVar8 + 0x28) = uVar17;
      func_0x032809c4((undefined8 *)(lVar8 + 0x28),uVar17);
      return lVar8;
    }
    uVar15 = 0x3d607d4;
    auVar19 = func_0x03280cac();
    unaff_x22 = 0;
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar15;
  *(long *)(puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar7 + -0x18) = auVar20;
  *(undefined8 *)(puVar7 + -8) = uVar17;
  plVar11 = *(long **)(lVar14 + 0x38);
  lVar10 = lVar14;
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar14);
    plVar11 = *(long **)(lVar14 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar8 = func_0x03280ca0();
  uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + 8);
  func_0x0531ec78(lVar8,0xfffffffe);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x40) = auVar19._0_8_;
    func_0x032809c4((undefined8 *)(lVar8 + 0x40),auVar19._0_8_);
    *(undefined8 *)(lVar8 + 0x50) = auVar19._8_8_;
    func_0x032809c4((undefined8 *)(lVar8 + 0x50),auVar19._8_8_);
    *(long *)(lVar8 + 0x30) = lVar16;
    func_0x032809c4((long *)(lVar8 + 0x30),lVar16);
    return lVar8;
  }
  auVar20 = func_0x03280cac();
  lVar14 = auVar20._0_8_;
  *(undefined8 *)(puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)(puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x48) = auVar19;
  *(long *)(puVar7 + -0x38) = lVar16;
  plVar11 = *(long **)(lVar10 + 0x38);
  if (plVar11 == (long *)0x0) {
    func_0x03256878(lVar10);
    plVar11 = *(long **)(lVar10 + 0x38);
  }
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x38) + 8);
  (*(code *)*puVar12)(lVar16,0xfffffffe);
  if (lVar16 != 0) {
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0xc0,lVar14);
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0x100,auVar20._8_8_);
    func_0x02f17738(lVar16,*(long *)(**(long **)(lVar10 + 0x38) + 0x80) + 0x80,uVar15);
    return lVar16;
  }
  auVar19 = func_0x03280cac();
  lVar16 = auVar19._8_8_;
  plVar11 = auVar19._0_8_;
  *(undefined8 *)(puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x80) = auVar20;
  *(long *)(puVar7 + -0x70) = lVar10;
  *(undefined8 *)(puVar7 + -0x68) = uVar15;
  puVar13 = puVar12;
  if (puVar12[7] == 0) {
    func_0x03256878(puVar12);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar12);
LAB_03d60c04:
    func_0x03281048(plVar11);
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(puVar12[7] + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar8 = *plVar11;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
      lVar10 = *(long *)(puVar12[7] + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
        lVar8 = *plVar11;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
      {
        lVar10 = *(long *)(puVar12[7] + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
          lVar8 = *plVar11;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar8 + 0x228))(plVar11,lVar16,*(undefined8 *)(lVar8 + 0x230));
          return lVar10;
        }
      }
      goto LAB_03d60c04;
    }
    lVar10 = *(long *)(puVar12[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar10 = func_0x03280b90(plVar11,lVar10);
    if (lVar10 == 0) {
      lVar10 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
        if ((*(byte *)(*(long *)(puVar12[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b68fa4(lVar10,plVar11,lVar16,*(undefined8 *)(puVar12[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar12[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar10 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10
         )) {
        func_0x04b713b0(lVar14,plVar11,lVar16,*(undefined8 *)(puVar12[7] + 0x48));
        return lVar14;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar12[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    lVar10 = *(long *)(puVar12[7] + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c(lVar10);
    }
    lVar8 = func_0x03280b90(plVar11,lVar10);
    if (lVar8 != 0) {
      func_0x04b66610(lVar14,lVar8,lVar16,*(undefined8 *)(puVar12[7] + 0x30));
      return lVar14;
    }
  }
  auVar20 = func_0x03281048(plVar11,lVar10);
  lVar16 = auVar20._8_8_;
  plVar11 = auVar20._0_8_;
  *(undefined8 *)(puVar7 + -0xc0) = 0x3d60c18;
  *(long *)(puVar7 + -0xb8) = lVar10;
  *(long *)(puVar7 + -0xb0) = lVar14;
  *(undefined8 **)(puVar7 + -0xa8) = puVar12;
  *(undefined1 (*) [16])(puVar7 + -0xa0) = auVar19;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar9 = PTR_DAT_07774b08;
  if ((plVar11 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar15 = func_0x03280a2c(puVar9);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar13);
  }
  else {
    lVar14 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar8 = *plVar11;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14)) {
      lVar14 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
      }
      lVar14 = func_0x03280b90(plVar11,lVar14);
      if (lVar14 != 0) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        lVar10 = *(long *)(puVar13[7] + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar8 = func_0x03280b90(plVar11,lVar10);
        if (lVar8 != 0) {
          func_0x04b667e0(lVar14,lVar8,lVar16,*(undefined8 *)(puVar13[7] + 0x30));
          return lVar14;
        }
        goto LAB_03d60ee0;
      }
      lVar14 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04b693d0(lVar10,plVar11,lVar16,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar10;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      lVar8 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8))
      {
        func_0x04b715c8(lVar14,plVar11,lVar16,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar14;
      }
    }
    else {
      lVar14 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x0325681c(lVar14);
        lVar8 = *plVar11;
        bVar1 = *(byte *)(lVar8 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c(lVar14);
          lVar8 = *plVar11;
          bVar1 = *(byte *)(lVar8 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(lVar8 + 0x228))(plVar11,lVar16,*(undefined8 *)(lVar8 + 0x230));
          return lVar10;
        }
      }
    }
  }
  func_0x03281048(plVar11);
LAB_03d60ee0:
  lVar10 = func_0x03281048(plVar11,lVar10);
  *(undefined8 *)(puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar7 + -0xd0) = auVar20;
  lVar16 = *(long *)(lVar10 + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = func_0x0325681c();
  }
  lVar16 = **(long **)(lVar16 + 0xb8);
  func_0x03280ab0();
  if (lVar16 == 0) {
    lVar16 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar14 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    **(long **)(lVar14 + 0xb8) = lVar16;
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar10 + 0xb8),lVar16);
  }
  return lVar16;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x60108A0; MergeEngine.Configuration.Capabilities.ItemsSpawningCapability.get_SpawnedMergeItems; status ok */


/* WARNING: Possible PIC construction at 0x061108ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06110e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x061108f0) */
/* WARNING: Removing unreachable block (ram,0x06110e8c) */

long * MergeEngine_Configuration_Capabilities_ItemsSpawningCapability__get_SpawnedMergeItems
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_60;
  
  if ((bRam0000000007e237db & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e237db = 1;
  }
  plVar18 = (long *)(param_1 + 0x48);
  plVar17 = (long *)*plVar18;
  if (*(char *)(param_1 + 0x10) == '\0') {
    return plVar17;
  }
  if (plVar17 == (long *)0x0) {
    uVar21 = 0x6110918;
    lVar9 = func_0x03280cac();
  }
  else {
    if ((int)plVar17[3] != 0) {
      return plVar17;
    }
    uVar21 = 0x61108f0;
    lVar9 = param_1;
  }
  puVar4 = &uStack_60;
  uStack_60 = uVar21;
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
  puVar8 = PTR_DAT_0777ffe8;
  if (*(char *)(lVar9 + 0x31) == '\0') {
    lVar10 = *(long *)(lVar9 + 0x68);
    if (lVar10 == 0) {
      lVar10 = func_0x03280cac();
      puVar2 = PTR_DAT_077cf560;
      puVar3 = PTR_DAT_077cf558;
      puVar8 = PTR_DAT_077cf550;
      if ((bRam0000000007e237dd & 1) == 0) {
        func_0x03280a18(PTR_DAT_077cf550);
        func_0x03280a18(PTR_DAT_077cf558);
        func_0x03280a18(PTR_DAT_077cf560);
        bRam0000000007e237dd = 1;
      }
      lVar16 = *(long *)puVar8;
      uVar21 = func_0x03d37218(*(undefined8 *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x58));
      lVar10 = func_0x03d3c654(uVar21,*(undefined8 *)puVar3);
      lVar13 = *(long *)puVar2;
      puVar4 = &uStack_60;
      uVar21 = 0x6110ebc;
      plVar17 = (long *)0x0;
    }
    else {
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar13 = *(long *)PTR_DAT_077cf548;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar13 = *(long *)puVar3;
        }
        lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        if (lVar16 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar13 = *(long *)puVar3;
          }
          uVar21 = **(undefined8 **)(lVar13 + 0xb8);
          lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cdad8);
          param_4 = 0;
          func_0x053569b8(lVar16,uVar21,*(undefined8 *)PTR_DAT_077cf520);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar11 = lVar16;
          func_0x032809c4(plVar11,lVar16);
        }
        uVar21 = func_0x03d53498(lVar10,lVar16,*(undefined8 *)PTR_DAT_077cdac8);
        lVar10 = *(long *)puVar3;
        uVar19 = *(undefined8 *)(lVar9 + 0x50);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar13 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uVar20 = **(undefined8 **)(lVar10 + 0xb8);
          lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf488);
          param_4 = 0;
          func_0x053569b8(lVar13,uVar20,*(undefined8 *)PTR_DAT_077cf528);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *plVar11 = lVar13;
          func_0x032809c4(plVar11,lVar13);
        }
        uVar19 = func_0x03d50a94(uVar19,lVar13,*(undefined8 *)PTR_DAT_077cf470);
        puVar2 = PTR_DAT_077cf458;
        uVar21 = func_0x03d37218(uVar21,uVar19,*(undefined8 *)PTR_DAT_077cf458);
        lVar10 = *(long *)puVar3;
        uVar19 = *(undefined8 *)(lVar9 + 0x58);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar9 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uVar20 = **(undefined8 **)(lVar10 + 0xb8);
          lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf508);
          param_4 = 0;
          func_0x053569b8(lVar9,uVar20,*(undefined8 *)PTR_DAT_077cf530);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *plVar11 = lVar9;
          func_0x032809c4(plVar11,lVar9);
        }
        uVar19 = func_0x03d50a94(uVar19,lVar9,*(undefined8 *)PTR_DAT_077cf500);
        lVar16 = *(long *)puVar2;
        uVar21 = func_0x03d37218(uVar21,uVar19);
        lVar10 = func_0x03d3c654(uVar21,*(undefined8 *)PTR_DAT_077cf460);
        goto LAB_06110cfc;
      }
      plVar17 = (long *)(lVar9 + 0x78);
      plVar18 = (long *)*plVar17;
      if ((plVar18 != (long *)0x0) && ((int)plVar18[3] != 0)) {
        return plVar18;
      }
      lVar10 = *(long *)PTR_DAT_077cf548;
      uVar21 = *(undefined8 *)(lVar9 + 0x50);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar3;
      }
      lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
      if (lVar13 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar10 = *(long *)puVar3;
        }
        unaff_x23 = **(undefined8 **)(lVar10 + 0xb8);
        lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf488);
        param_4 = 0;
        func_0x053569b8(lVar13,unaff_x23,*(undefined8 *)PTR_DAT_077cf538);
        plVar18 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar18 = lVar13;
        func_0x032809c4(plVar18,lVar13);
      }
      lVar12 = func_0x03d50a94(uVar21,lVar13,*(undefined8 *)PTR_DAT_077cf470);
      lVar10 = *(long *)puVar3;
      plVar18 = *(long **)(lVar9 + 0x58);
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
      uVar21 = func_0x03d50a94(plVar18,unaff_x22,*(undefined8 *)PTR_DAT_077cf500);
      lVar16 = *(long *)PTR_DAT_077cf458;
      uVar21 = func_0x03d37218(lVar12,uVar21);
      lVar10 = func_0x03d3c654(uVar21,*(undefined8 *)PTR_DAT_077cf460);
      lVar13 = *(long *)puVar8;
      uVar21 = 0x6110e8c;
      lVar9 = lVar12;
    }
  }
  else {
    lVar10 = *(long *)PTR_DAT_077cf548;
    uVar21 = *(undefined8 *)(lVar9 + 0x60);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_077cf4f8;
    lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar3;
      }
      uVar19 = **(undefined8 **)(lVar10 + 0xb8);
      lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf510);
      param_4 = 0;
      func_0x053569b8(lVar9,uVar19,*(undefined8 *)PTR_DAT_077cf518);
      plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar11 = lVar9;
      func_0x032809c4(plVar11,lVar9);
    }
    lVar16 = *(long *)puVar2;
    lVar10 = func_0x03d50a94(uVar21,lVar9);
LAB_06110cfc:
    lVar13 = *(long *)puVar8;
    puVar4 = (undefined8 *)&stack0xffffffffffffffe0;
    lVar9 = param_1;
    uVar21 = uStack_60;
  }
  *(undefined8 *)((long)puVar4 + -0x20) = uVar21;
  *(long **)((long)puVar4 + -0x10) = plVar17;
  *(long *)((long)puVar4 + -8) = lVar9;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (lVar10 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x04143d60(plVar17,lVar10,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar13);
  lVar9 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0x40) = 0x3d6004c;
  *(undefined8 *)((long)puVar4 + -0x30) = 0;
  *(long *)((long)puVar4 + -0x28) = lVar13;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x0419ce74(plVar17,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar9);
  lVar10 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d600c8;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(long *)((long)puVar4 + -0x48) = lVar9;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x041c2810(plVar17,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar10);
  lVar9 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0x80) = 0x3d60144;
  *(undefined8 *)((long)puVar4 + -0x70) = 0;
  *(long *)((long)puVar4 + -0x68) = lVar10;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x041ddb58(plVar17,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar9);
  lVar10 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0xa0) = 0x3d601c0;
  *(undefined8 *)((long)puVar4 + -0x90) = 0;
  *(long *)((long)puVar4 + -0x88) = lVar9;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x041e617c(plVar17,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar10);
  lVar9 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d6023c;
  *(undefined8 *)((long)puVar4 + -0xb0) = 0;
  *(long *)((long)puVar4 + -0xa8) = lVar10;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x041e8ba0(plVar17,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar9);
  lVar10 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d602b8;
  *(undefined8 *)((long)puVar4 + -0xd0) = 0;
  *(long *)((long)puVar4 + -200) = lVar9;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 0x10))(plVar17,auVar22._0_8_);
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar10);
  lVar9 = auVar22._8_8_;
  *(undefined8 *)((long)puVar4 + -0x100) = 0x3d60338;
  *(undefined8 *)((long)puVar4 + -0xf0) = 0;
  *(long *)((long)puVar4 + -0xe8) = lVar10;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    func_0x0420cec8(plVar17,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return plVar17;
  }
  uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar21 = func_0x05ac7464(uVar21,0);
  auVar22 = func_0x03280b7c(uVar21,lVar9);
  *(undefined8 *)((long)puVar4 + -0x120) = 0x3d603b4;
  *(long **)((long)puVar4 + -0x118) = plVar18;
  *(undefined8 *)((long)puVar4 + -0x110) = 0;
  *(long *)((long)puVar4 + -0x108) = lVar9;
  lVar9 = lVar16;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  puVar8 = PTR_DAT_07779d10;
  if ((auVar22._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
    uVar21 = func_0x03280a2c(puVar8);
    uVar21 = func_0x05ac7464(uVar21,0);
    auVar23 = func_0x03280b7c(uVar21,lVar16);
    *(undefined8 *)((long)puVar4 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])((long)puVar4 + -0x138) = auVar22;
    *(long *)((long)puVar4 + -0x128) = lVar16;
    lVar10 = lVar9;
    if (*(long *)(lVar9 + 0x38) == 0) {
      func_0x03256878(lVar9);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar23._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
      lVar10 = *(long *)((long)puVar4 + -0x128);
      lVar13 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      lVar9 = 0;
      puVar6 = (undefined1 *)((long)puVar4 + -0x120);
      uVar21 = *(undefined8 *)((long)puVar4 + -0x140);
      auVar22 = *(undefined1 (*) [16])((long)puVar4 + -0x138);
      goto LAB_03d60730;
    }
    uVar21 = func_0x03280a2c(puVar8);
    uVar21 = func_0x05ac7464(uVar21,0);
    auVar22 = func_0x03280b7c(uVar21,lVar9);
    *(undefined8 *)((long)puVar4 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])((long)puVar4 + -0x158) = auVar23;
    *(long *)((long)puVar4 + -0x148) = lVar9;
    lVar9 = lVar10;
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03256878(lVar10);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
      uVar21 = func_0x03280a2c(puVar8);
      uVar21 = func_0x05ac7464(uVar21,0);
      auVar23 = func_0x03280b7c(uVar21,lVar10);
      *(undefined8 *)((long)puVar4 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])((long)puVar4 + -0x178) = auVar22;
      *(long *)((long)puVar4 + -0x168) = lVar10;
      lVar10 = lVar9;
      if (*(long *)(lVar9 + 0x38) == 0) {
        func_0x03256878(lVar9);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar23._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar17 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 8))
                                    (auVar23._0_8_,auVar23._8_8_,0);
        return plVar17;
      }
      uVar21 = func_0x03280a2c(puVar8);
      uVar21 = func_0x05ac7464(uVar21,0);
      auVar22 = func_0x03280b7c(uVar21,lVar9);
      *(undefined8 *)((long)puVar4 + -0x1b0) = 0x3d60588;
      *(long *)((long)puVar4 + -0x1a0) = unaff_x22;
      *(undefined1 (*) [16])((long)puVar4 + -0x198) = auVar23;
      *(long *)((long)puVar4 + -0x188) = lVar9;
      lVar9 = lVar10;
      lVar13 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar22._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
        uVar21 = func_0x03280a2c(puVar8);
        uVar21 = func_0x05ac7464(uVar21,0);
        auVar23 = func_0x03280b7c(uVar21,param_4);
        puVar5 = (undefined1 *)((long)puVar4 + -0x1e0);
        *(undefined8 *)((long)puVar4 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])((long)puVar4 + -0x1d0) = auVar22;
        *(long *)((long)puVar4 + -0x1c0) = lVar10;
        *(long *)((long)puVar4 + -0x1b8) = param_4;
        lVar10 = lVar9;
        lVar16 = lVar13;
        if (*(long *)(lVar13 + 0x38) == 0) {
          func_0x03256878(lVar13);
        }
        puVar8 = PTR_DAT_07779d10;
        if ((auVar23._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar17 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))
                                      (auVar23._0_8_,auVar23._8_8_,lVar9);
          return plVar17;
        }
        uVar21 = func_0x03280a2c(puVar8);
        uVar19 = func_0x05ac7464(uVar21,0);
        uVar21 = 0x3d6068c;
        auVar22 = func_0x03280b7c(uVar19,lVar13);
        goto LAB_03d6068c;
      }
      lVar16 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      lVar9 = *(long *)((long)puVar4 + -0x188);
      unaff_x22 = *(long *)((long)puVar4 + -0x1a0);
      auVar23 = *(undefined1 (*) [16])((long)puVar4 + -0x198);
      puVar7 = (undefined1 *)((long)puVar4 + -0x180);
      uVar21 = *(undefined8 *)((long)puVar4 + -0x1b0);
    }
    else {
      lVar9 = *(long *)((long)puVar4 + -0x148);
      lVar16 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      lVar10 = 0;
      puVar7 = (undefined1 *)((long)puVar4 + -0x140);
      uVar21 = *(undefined8 *)((long)puVar4 + -0x160);
      auVar23 = *(undefined1 (*) [16])((long)puVar4 + -0x158);
    }
  }
  else {
    lVar9 = *(long *)((long)puVar4 + -0x110);
    lVar13 = *(long *)((long)puVar4 + -0x108);
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    lVar10 = 0;
    puVar5 = (undefined1 *)((long)puVar4 + -0x100);
    uVar21 = *(undefined8 *)((long)puVar4 + -0x120);
    auVar23._8_8_ = *(undefined8 *)((long)puVar4 + -0x118);
    auVar23._0_8_ = unaff_x22;
LAB_03d6068c:
    puVar6 = puVar5 + -0x30;
    *(undefined8 *)(puVar5 + -0x30) = uVar21;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar23;
    *(long *)(puVar5 + -0x10) = lVar9;
    *(long *)(puVar5 + -8) = lVar13;
    plVar17 = *(long **)(lVar16 + 0x38);
    lVar13 = lVar16;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar16);
      plVar17 = *(long **)(lVar16 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    func_0x0531dbd0(plVar17,0xfffffffe);
    if (plVar17 != (long *)0x0) {
      plVar17[7] = auVar22._0_8_;
      func_0x032809c4(plVar17 + 7,auVar22._0_8_);
      plVar17[9] = auVar22._8_8_;
      func_0x032809c4(plVar17 + 9,auVar22._8_8_);
      plVar17[5] = lVar10;
      func_0x032809c4(plVar17 + 5,lVar10);
      return plVar17;
    }
    uVar21 = 0x3d60730;
    auVar23 = func_0x03280cac();
    unaff_x22 = 0;
LAB_03d60730:
    puVar7 = puVar6 + -0x30;
    *(undefined8 *)(puVar6 + -0x30) = uVar21;
    *(long *)(puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar6 + -0x18) = auVar22;
    *(long *)(puVar6 + -8) = lVar10;
    plVar17 = *(long **)(lVar13 + 0x38);
    lVar16 = lVar13;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar17 = *(long **)(lVar13 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    func_0x0531e428(plVar17,0xfffffffe);
    if (plVar17 != (long *)0x0) {
      plVar17[7] = auVar23._0_8_;
      func_0x032809c4(plVar17 + 7,auVar23._0_8_);
      plVar17[9] = auVar23._8_8_;
      func_0x032809c4(plVar17 + 9,auVar23._8_8_);
      plVar17[5] = lVar9;
      func_0x032809c4(plVar17 + 5,lVar9);
      return plVar17;
    }
    uVar21 = 0x3d607d4;
    auVar22 = func_0x03280cac();
    unaff_x22 = 0;
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar21;
  *(long *)(puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar7 + -0x18) = auVar23;
  *(long *)(puVar7 + -8) = lVar9;
  plVar17 = *(long **)(lVar16 + 0x38);
  lVar9 = lVar16;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar16);
    plVar17 = *(long **)(lVar16 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar17 = (long *)func_0x03280ca0();
  uVar21 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
  func_0x0531ec78(plVar17,0xfffffffe);
  if (plVar17 != (long *)0x0) {
    plVar17[8] = auVar22._0_8_;
    func_0x032809c4(plVar17 + 8,auVar22._0_8_);
    plVar17[10] = auVar22._8_8_;
    func_0x032809c4(plVar17 + 10,auVar22._8_8_);
    plVar17[6] = lVar10;
    func_0x032809c4(plVar17 + 6,lVar10);
    return plVar17;
  }
  auVar23 = func_0x03280cac();
  plVar17 = auVar23._0_8_;
  *(undefined8 *)(puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)(puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x48) = auVar22;
  *(long *)(puVar7 + -0x38) = lVar10;
  plVar18 = *(long **)(lVar9 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar9);
    plVar18 = *(long **)(lVar9 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  plVar18 = (long *)func_0x03280ca0();
  puVar14 = *(undefined8 **)(*(long *)(lVar9 + 0x38) + 8);
  (*(code *)*puVar14)(plVar18,0xfffffffe);
  if (plVar18 != (long *)0x0) {
    func_0x02f17738(plVar18,*(long *)(**(long **)(lVar9 + 0x38) + 0x80) + 0xc0,plVar17);
    func_0x02f17738(plVar18,*(long *)(**(long **)(lVar9 + 0x38) + 0x80) + 0x100,auVar23._8_8_);
    func_0x02f17738(plVar18,*(long *)(**(long **)(lVar9 + 0x38) + 0x80) + 0x80,uVar21);
    return plVar18;
  }
  auVar22 = func_0x03280cac();
  lVar10 = auVar22._8_8_;
  plVar18 = auVar22._0_8_;
  *(undefined8 *)(puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x80) = auVar23;
  *(long *)(puVar7 + -0x70) = lVar9;
  *(undefined8 *)(puVar7 + -0x68) = uVar21;
  puVar15 = puVar14;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar10 == 0)) {
    uVar21 = func_0x03280a2c(puVar8);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar14);
LAB_03d60c04:
    func_0x03281048(plVar18);
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    lVar13 = *plVar18;
    bVar1 = *(byte *)(lVar13 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9)) {
      lVar9 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
        lVar13 = *plVar18;
        bVar1 = *(byte *)(lVar13 + 0x130);
      }
      if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9)) {
        lVar9 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
          lVar13 = *plVar18;
          bVar1 = *(byte *)(lVar13 + 0x130);
        }
        if ((*(byte *)(lVar9 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
        {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar17 = (long *)(**(code **)(lVar13 + 0x228))
                                      (plVar18,lVar10,*(undefined8 *)(lVar13 + 0x230));
          return plVar17;
        }
      }
      goto LAB_03d60c04;
    }
    lVar9 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c(lVar9);
    }
    lVar9 = func_0x03280b90(plVar18,lVar9);
    if (lVar9 == 0) {
      lVar9 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar17 = (long *)func_0x03280ca0();
        func_0x04b68fa4(plVar17,plVar18,lVar10,*(undefined8 *)(puVar14[7] + 0x58));
        return plVar17;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar17 = (long *)func_0x03280ca0();
      lVar9 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      if ((*(byte *)(lVar9 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
      {
        func_0x04b713b0(plVar17,plVar18,lVar10,*(undefined8 *)(puVar14[7] + 0x48));
        return plVar17;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    plVar17 = (long *)func_0x03280ca0();
    lVar9 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c(lVar9);
    }
    lVar13 = func_0x03280b90(plVar18,lVar9);
    if (lVar13 != 0) {
      func_0x04b66610(plVar17,lVar13,lVar10,*(undefined8 *)(puVar14[7] + 0x30));
      return plVar17;
    }
  }
  auVar23 = func_0x03281048(plVar18,lVar9);
  lVar10 = auVar23._8_8_;
  plVar18 = auVar23._0_8_;
  *(undefined8 *)(puVar7 + -0xc0) = 0x3d60c18;
  *(long *)(puVar7 + -0xb8) = lVar9;
  *(long **)(puVar7 + -0xb0) = plVar17;
  *(undefined8 **)(puVar7 + -0xa8) = puVar14;
  *(undefined1 (*) [16])(puVar7 + -0xa0) = auVar22;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar10 == 0)) {
    uVar21 = func_0x03280a2c(puVar8);
    uVar21 = func_0x05ac7464(uVar21,0);
    func_0x03280b7c(uVar21,puVar15);
  }
  else {
    lVar13 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar16 = *plVar18;
    bVar1 = *(byte *)(lVar16 + 0x130);
    if ((bVar1 < *(byte *)(lVar13 + 0x130)) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)) {
      lVar13 = *(long *)(puVar15[7] + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar13 = func_0x03280b90(plVar18,lVar13);
      if (lVar13 != 0) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar17 = (long *)func_0x03280ca0();
        lVar9 = *(long *)(puVar15[7] + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        lVar13 = func_0x03280b90(plVar18,lVar9);
        if (lVar13 != 0) {
          func_0x04b667e0(plVar17,lVar13,lVar10,*(undefined8 *)(puVar15[7] + 0x30));
          return plVar17;
        }
        goto LAB_03d60ee0;
      }
      lVar13 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar17 = (long *)func_0x03280ca0();
        func_0x04b693d0(plVar17,plVar18,lVar10,*(undefined8 *)(puVar15[7] + 0x58));
        return plVar17;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar17 = (long *)func_0x03280ca0();
      lVar13 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x04b715c8(plVar17,plVar18,lVar10,*(undefined8 *)(puVar15[7] + 0x48));
        return plVar17;
      }
    }
    else {
      lVar13 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar16 = *plVar18;
        bVar1 = *(byte *)(lVar16 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar16 = *plVar18;
          bVar1 = *(byte *)(lVar16 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar17 = (long *)(**(code **)(lVar16 + 0x228))
                                      (plVar18,lVar10,*(undefined8 *)(lVar16 + 0x230));
          return plVar17;
        }
      }
    }
  }
  func_0x03281048(plVar18);
LAB_03d60ee0:
  lVar9 = func_0x03281048(plVar18,lVar9);
  *(undefined8 *)(puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar7 + -0xd0) = auVar23;
  lVar10 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c();
  }
  plVar17 = (long *)**(long **)(lVar10 + 0xb8);
  func_0x03280ab0();
  if (plVar17 == (long *)0x0) {
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    plVar17 = (long *)func_0x0522166c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x0325681c();
    }
    **(long **)(lVar10 + 0xb8) = (long)plVar17;
    lVar9 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar9 + 0xb8),plVar17);
  }
  return plVar17;
}


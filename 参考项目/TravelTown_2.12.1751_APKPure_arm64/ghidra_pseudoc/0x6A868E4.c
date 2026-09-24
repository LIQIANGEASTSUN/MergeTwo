/* Ghidra 12.1.2 native pseudocode; RVA 0x6A868E4; Merger.MergeBoard.Extensions.EntityLockExtension.AnyMovementLock; status ok */


/* WARNING: Possible PIC construction at 0x06b869e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b869e8) */
/* WARNING: Removing unreachable block (ram,0x06b86a54) */
/* WARNING: Removing unreachable block (ram,0x06b86a74) */
/* WARNING: Removing unreachable block (ram,0x06b86a88) */
/* WARNING: Removing unreachable block (ram,0x06b86b5c) */
/* WARNING: Removing unreachable block (ram,0x06b86a8c) */
/* WARNING: Removing unreachable block (ram,0x06b86aa4) */
/* WARNING: Removing unreachable block (ram,0x06b86aac) */
/* WARNING: Removing unreachable block (ram,0x06b86ad4) */
/* WARNING: Removing unreachable block (ram,0x06b86ab8) */
/* WARNING: Removing unreachable block (ram,0x06b86ac4) */
/* WARNING: Removing unreachable block (ram,0x06b86ae4) */
/* WARNING: Removing unreachable block (ram,0x06b86b04) */
/* WARNING: Removing unreachable block (ram,0x06b86b0c) */
/* WARNING: Removing unreachable block (ram,0x06b86b34) */
/* WARNING: Removing unreachable block (ram,0x06b86b18) */
/* WARNING: Removing unreachable block (ram,0x06b86b24) */
/* WARNING: Removing unreachable block (ram,0x06b86b44) */
/* WARNING: Removing unreachable block (ram,0x06b869ec) */
/* WARNING: Removing unreachable block (ram,0x06b86a1c) */
/* WARNING: Removing unreachable block (ram,0x06b869f8) */
/* WARNING: Removing unreachable block (ram,0x06b86a38) */

ulong Merger_MergeBoard_Extensions_EntityLockExtension__AnyMovementLock
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 extraout_x1;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 unaff_x23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 auStack_280 [2];
  undefined1 auStack_270 [16];
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  long lStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 auStack_1a0 [2];
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
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
  undefined8 uStack_c0;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  char acStack_18 [8];
  
  if ((bRam0000000007e2a81d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_0777a528);
    bRam0000000007e2a81d = 1;
  }
  puVar14 = PTR_DAT_0777a520;
  acStack_18[0] = '\0';
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_1 != 0) {
    uVar9 = func_0x03d1f470(param_1,acStack_18,*(undefined8 *)PTR_DAT_0777a528);
    bVar8 = acStack_18[0] != '\0';
    uVar10 = func_0x03d1e508(param_1,&uStack_38,*(undefined8 *)puVar14);
    return (ulong)(uVar9 & bVar8 | uVar10 & (char)uStack_38 != '\0');
  }
  func_0x03280cac();
  if ((bRam0000000007e2a7a2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6d20);
    func_0x03280a18(PTR_DAT_07751a50);
    bRam0000000007e2a7a2 = 1;
  }
  puVar14 = PTR_DAT_07831d08;
  uStack_e0 = 0x6b869e8;
  uStack_c0 = 0x7e2a000;
  if ((bRam0000000007e2a84b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831d10);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_07831d18);
    func_0x03280a18(PTR_DAT_07831d20);
    func_0x03280a18(PTR_DAT_07831d08);
    bRam0000000007e2a84b = 1;
  }
  lVar15 = *(long *)puVar14;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar15 = *(long *)puVar14;
  }
  puVar4 = PTR_DAT_07831d10;
  puVar3 = PTR_DAT_0774ea58;
  lVar22 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
  if (lVar22 == 0) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar15 = *(long *)puVar14;
    }
    uVar23 = **(undefined8 **)(lVar15 + 0xb8);
    lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831d18);
    param_4 = 0;
    func_0x053569b8(lVar22,uVar23,*(undefined8 *)PTR_DAT_07831d20);
    plVar16 = (long *)(*(long *)(*(long *)puVar14 + 0xb8) + 8);
    *plVar16 = lVar22;
    func_0x032809c4(plVar16,lVar22);
  }
  lVar20 = *(long *)puVar4;
  lVar15 = func_0x03d50a94(extraout_x1,lVar22);
  lVar22 = *(long *)puVar3;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (lVar15 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x04143d60(uVar11,lVar15,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar24 = func_0x03280b7c(uVar23,lVar22);
  lVar15 = auVar24._8_8_;
  uStack_e0 = 0x3d6004c;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x0419ce74(uVar11,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar25 = func_0x03280b7c(uVar23,lVar15);
  lVar15 = auVar25._8_8_;
  uStack_100 = 0x3d600c8;
  auStack_f0 = auVar24;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x041c2810(uVar11,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar24 = func_0x03280b7c(uVar23,lVar15);
  lVar15 = auVar24._8_8_;
  uStack_120 = 0x3d60144;
  auStack_110 = auVar25;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x041ddb58(uVar11,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar25 = func_0x03280b7c(uVar23,lVar15);
  lVar15 = auVar25._8_8_;
  uStack_140 = 0x3d601c0;
  auStack_130 = auVar24;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x041e617c(uVar11,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar24 = func_0x03280b7c(uVar23,lVar15);
  lVar15 = auVar24._8_8_;
  uStack_160 = 0x3d6023c;
  auStack_150 = auVar25;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x041e8ba0(uVar11,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar25 = func_0x03280b7c(uVar23,lVar15);
  lVar15 = auVar25._8_8_;
  uStack_180 = 0x3d602b8;
  auStack_170 = auVar24;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 0x10))(uVar11,auVar25._0_8_);
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar24 = func_0x03280b7c(uVar23,lVar15);
  lVar15 = auVar24._8_8_;
  auStack_1a0[0] = 0x3d60338;
  auStack_190 = auVar25;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar24._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    func_0x0420cec8(uVar11,auVar24._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar11;
  }
  uVar23 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar23 = func_0x05ac7464(uVar23,0);
  auVar25 = func_0x03280b7c(uVar23,lVar15);
  uStack_1c0 = 0x3d603b4;
  lVar15 = lVar20;
  uStack_1b8 = extraout_x1;
  auStack_1b0 = auVar24;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  auVar24._8_8_ = uStack_1b8;
  auVar24._0_8_ = 0x7e2a000;
  puVar14 = PTR_DAT_07779d10;
  if ((auVar25._0_8_ == 0) || (puVar14 = PTR_DAT_07779d18, auVar25._8_8_ == 0)) {
    uVar23 = func_0x03280a2c(puVar14);
    uVar23 = func_0x05ac7464(uVar23,0);
    auVar24 = func_0x03280b7c(uVar23,lVar20);
    uStack_1e0 = 0x3d60428;
    lVar22 = lVar15;
    lStack_1c8 = lVar20;
    if (*(long *)(lVar15 + 0x38) == 0) {
      auStack_1d8 = auVar25;
      func_0x03256878(lVar15);
      auVar25 = auStack_1d8;
    }
    puVar14 = PTR_DAT_07779d10;
    auStack_1d8 = auVar25;
    if ((auVar24._0_8_ != 0) && (puVar14 = PTR_DAT_07779d18, auVar24._8_8_ != 0)) {
      lVar22 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
      lVar20 = 0;
      puVar6 = &uStack_1c0;
      lVar15 = lStack_1c8;
      uVar23 = uStack_1e0;
      goto LAB_03d60730;
    }
    uVar23 = func_0x03280a2c(puVar14);
    uVar23 = func_0x05ac7464(uVar23,0);
    auVar25 = func_0x03280b7c(uVar23,lVar15);
    uStack_200 = 0x3d6049c;
    lVar20 = lVar22;
    lStack_1e8 = lVar15;
    auStack_1f8 = auVar24;
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
    puVar14 = PTR_DAT_07779d10;
    if ((auVar25._0_8_ == 0) || (puVar14 = PTR_DAT_07779d18, auVar25._8_8_ == 0)) {
      uVar23 = func_0x03280a2c(puVar14);
      uVar23 = func_0x05ac7464(uVar23,0);
      auStack_238 = func_0x03280b7c(uVar23,lVar22);
      uStack_220 = 0x3d60510;
      lVar17 = lVar20;
      lStack_208 = lVar22;
      auStack_218 = auVar25;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar14 = PTR_DAT_07779d10;
      if ((auStack_238._0_8_ != 0) && (puVar14 = PTR_DAT_07779d18, auStack_238._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))
                           (auStack_238._0_8_,auStack_238._8_8_,0);
        return uVar11;
      }
      uVar23 = func_0x03280a2c(puVar14);
      uVar23 = func_0x05ac7464(uVar23,0);
      auVar25 = func_0x03280b7c(uVar23,lVar20);
      uStack_250 = 0x3d60588;
      uStack_240 = 0x7e2a000;
      lVar22 = lVar17;
      lVar21 = param_4;
      lStack_228 = lVar20;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar14 = PTR_DAT_07779d10;
      if ((auVar25._0_8_ == 0) || (puVar14 = PTR_DAT_07779d18, auVar25._8_8_ == 0)) {
        uVar23 = func_0x03280a2c(puVar14);
        uVar23 = func_0x05ac7464(uVar23,0);
        auVar24 = func_0x03280b7c(uVar23,param_4);
        auVar2._8_8_ = lVar21;
        auVar2._0_8_ = lVar22;
        puVar5 = auStack_280;
        auStack_280[0] = 0x3d60608;
        lVar15 = lVar22;
        lVar20 = lVar21;
        lStack_260 = lVar17;
        lStack_258 = param_4;
        auStack_270 = auVar25;
        if (*(long *)(lVar21 + 0x38) == 0) {
          func_0x03256878(lVar21);
        }
        puVar14 = PTR_DAT_07779d10;
        if ((auVar24._0_8_ != 0) && (puVar14 = PTR_DAT_07779d18, auVar24._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x38) + 0x10))
                             (auVar24._0_8_,auVar24._8_8_,lVar22);
          return uVar11;
        }
        uVar23 = func_0x03280a2c(puVar14);
        uVar12 = func_0x05ac7464(uVar23,0);
        uVar23 = 0x3d6068c;
        auVar25 = func_0x03280b7c(uVar12,lVar21);
        goto LAB_03d6068c;
      }
      lVar15 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar7 = &uStack_220;
      lVar20 = lStack_228;
      uStack_c0 = uStack_240;
      uVar23 = uStack_250;
      auVar24 = auStack_238;
    }
    else {
      lVar15 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      lVar17 = 0;
      puVar7 = &uStack_1e0;
      lVar20 = lStack_1e8;
      uVar23 = uStack_200;
      auVar24 = auStack_1f8;
    }
  }
  else {
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    lVar15 = 0;
    puVar5 = auStack_1a0;
    uVar23 = uStack_1c0;
    auVar2 = auStack_1b0;
LAB_03d6068c:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar23;
    *(undefined1 (*) [16])((long)puVar5 + -0x20) = auVar24;
    *(undefined1 (*) [16])((long)puVar5 + -0x10) = auVar2;
    plVar16 = *(long **)(lVar20 + 0x38);
    lVar22 = lVar20;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar16 = *(long **)(lVar20 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x0531dbd0(uVar11,0xfffffffe);
    if (uVar11 != 0) {
      *(undefined8 *)(uVar11 + 0x38) = auVar25._0_8_;
      func_0x032809c4((undefined8 *)(uVar11 + 0x38),auVar25._0_8_);
      *(undefined8 *)(uVar11 + 0x48) = auVar25._8_8_;
      func_0x032809c4((undefined8 *)(uVar11 + 0x48),auVar25._8_8_);
      *(long *)(uVar11 + 0x28) = lVar15;
      func_0x032809c4((long *)(uVar11 + 0x28),lVar15);
      return uVar11;
    }
    auVar24 = func_0x03280cac();
    uStack_c0 = 0;
    uVar23 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar23;
    *(undefined8 *)((long)puVar6 + -0x20) = uStack_c0;
    *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar25;
    *(long *)((long)puVar6 + -8) = lVar15;
    plVar16 = *(long **)(lVar22 + 0x38);
    lVar15 = lVar22;
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar22);
      plVar16 = *(long **)(lVar22 + 0x38);
    }
    if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    lVar17 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    func_0x0531e428(uVar11,0xfffffffe);
    if (uVar11 != 0) {
      *(undefined8 *)(uVar11 + 0x38) = auVar24._0_8_;
      func_0x032809c4((undefined8 *)(uVar11 + 0x38),auVar24._0_8_);
      *(undefined8 *)(uVar11 + 0x48) = auVar24._8_8_;
      func_0x032809c4((undefined8 *)(uVar11 + 0x48),auVar24._8_8_);
      *(long *)(uVar11 + 0x28) = lVar20;
      func_0x032809c4((long *)(uVar11 + 0x28),lVar20);
      return uVar11;
    }
    auVar25 = func_0x03280cac();
    uStack_c0 = 0;
    uVar23 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar7 + -0x30) = uVar23;
  *(undefined8 *)((long)puVar7 + -0x20) = uStack_c0;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar24;
  *(long *)((long)puVar7 + -8) = lVar20;
  plVar16 = *(long **)(lVar15 + 0x38);
  lVar22 = lVar15;
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar16 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar11 = func_0x03280ca0();
  uVar23 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + 8);
  func_0x0531ec78(uVar11,0xfffffffe);
  if (uVar11 != 0) {
    *(undefined8 *)(uVar11 + 0x40) = auVar25._0_8_;
    func_0x032809c4((undefined8 *)(uVar11 + 0x40),auVar25._0_8_);
    *(undefined8 *)(uVar11 + 0x50) = auVar25._8_8_;
    func_0x032809c4((undefined8 *)(uVar11 + 0x50),auVar25._8_8_);
    *(long *)(uVar11 + 0x30) = lVar17;
    func_0x032809c4((long *)(uVar11 + 0x30),lVar17);
    return uVar11;
  }
  auVar24 = func_0x03280cac();
  uVar11 = auVar24._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar25;
  *(long *)((long)puVar7 + -0x38) = lVar17;
  plVar16 = *(long **)(lVar22 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x03256878(lVar22);
    plVar16 = *(long **)(lVar22 + 0x38);
  }
  if ((*(byte *)(*plVar16 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar13 = func_0x03280ca0();
  puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x38) + 8);
  (*(code *)*puVar18)(uVar13,0xfffffffe);
  if (uVar13 != 0) {
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,uVar11);
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x100,auVar24._8_8_);
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,uVar23);
    return uVar13;
  }
  auVar25 = func_0x03280cac();
  lVar15 = auVar25._8_8_;
  plVar16 = auVar25._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar24;
  *(long *)((long)puVar7 + -0x70) = lVar22;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar23;
  puVar19 = puVar18;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar14 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar15 == 0)) {
    uVar23 = func_0x03280a2c(puVar14);
    uVar23 = func_0x05ac7464(uVar23,0);
    func_0x03280b7c(uVar23,puVar18);
LAB_03d60c04:
    func_0x03281048(plVar16);
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar20 = *plVar16;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22)) {
      lVar22 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
        lVar20 = *plVar16;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22))
      {
        lVar22 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
          lVar20 = *plVar16;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar11 = (**(code **)(lVar20 + 0x228))(plVar16,lVar15,*(undefined8 *)(lVar20 + 0x230));
          return uVar11;
        }
      }
      goto LAB_03d60c04;
    }
    lVar22 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar22 = func_0x03280b90(plVar16,lVar22);
    if (lVar22 == 0) {
      lVar22 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar22 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) != lVar22
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar11 = func_0x03280ca0();
        func_0x04b68fa4(uVar11,plVar16,lVar15,*(undefined8 *)(puVar18[7] + 0x58));
        return uVar11;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar11 = func_0x03280ca0();
      lVar22 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      if ((*(byte *)(lVar22 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
         )) {
        func_0x04b713b0(uVar11,plVar16,lVar15,*(undefined8 *)(puVar18[7] + 0x48));
        return uVar11;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar11 = func_0x03280ca0();
    lVar22 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar20 = func_0x03280b90(plVar16,lVar22);
    if (lVar20 != 0) {
      func_0x04b66610(uVar11,lVar20,lVar15,*(undefined8 *)(puVar18[7] + 0x30));
      return uVar11;
    }
  }
  auVar24 = func_0x03281048(plVar16,lVar22);
  lVar15 = auVar24._8_8_;
  plVar16 = auVar24._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar22;
  *(ulong *)((long)puVar7 + -0xb0) = uVar11;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar18;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar25;
  if (puVar19[7] == 0) {
    func_0x03256878(puVar19);
  }
  puVar14 = PTR_DAT_07774b08;
  if ((plVar16 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar15 == 0)) {
    uVar23 = func_0x03280a2c(puVar14);
    uVar23 = func_0x05ac7464(uVar23,0);
    func_0x03280b7c(uVar23,puVar19);
  }
  else {
    lVar20 = *(long *)(puVar19[7] + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar17 = *plVar16;
    bVar1 = *(byte *)(lVar17 + 0x130);
    if ((bVar1 < *(byte *)(lVar20 + 0x130)) ||
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) != lVar20)) {
      lVar20 = *(long *)(puVar19[7] + 0x20);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar20 = func_0x03280b90(plVar16,lVar20);
      if (lVar20 != 0) {
        if ((*(byte *)(*(long *)(puVar19[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar11 = func_0x03280ca0();
        lVar22 = *(long *)(puVar19[7] + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar20 = func_0x03280b90(plVar16,lVar22);
        if (lVar20 != 0) {
          func_0x04b667e0(uVar11,lVar20,lVar15,*(undefined8 *)(puVar19[7] + 0x30));
          return uVar11;
        }
        goto LAB_03d60ee0;
      }
      lVar20 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar20 + 0x130)) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) != lVar20
         )) {
        if ((*(byte *)(*(long *)(puVar19[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar11 = func_0x03280ca0();
        func_0x04b693d0(uVar11,plVar16,lVar15,*(undefined8 *)(puVar19[7] + 0x58));
        return uVar11;
      }
      if ((*(byte *)(*(long *)(puVar19[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar11 = func_0x03280ca0();
      lVar20 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(uVar11,plVar16,lVar15,*(undefined8 *)(puVar19[7] + 0x48));
        return uVar11;
      }
    }
    else {
      lVar20 = *(long *)(puVar19[7] + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar17 = *plVar16;
        bVar1 = *(byte *)(lVar17 + 0x130);
      }
      if ((*(byte *)(lVar20 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20))
      {
        lVar20 = *(long *)(puVar19[7] + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
          lVar17 = *plVar16;
          bVar1 = *(byte *)(lVar17 + 0x130);
        }
        if ((*(byte *)(lVar20 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar11 = (**(code **)(lVar17 + 0x228))(plVar16,lVar15,*(undefined8 *)(lVar17 + 0x230));
          return uVar11;
        }
      }
    }
  }
  func_0x03281048(plVar16);
LAB_03d60ee0:
  lVar15 = func_0x03281048(plVar16,lVar22);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar24;
  lVar22 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
  if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = func_0x0325681c();
  }
  uVar11 = **(ulong **)(lVar22 + 0xb8);
  func_0x03280ab0();
  if (uVar11 == 0) {
    lVar22 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    uVar11 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar22 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    **(ulong **)(lVar22 + 0xb8) = uVar11;
    lVar15 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar15 + 0xb8),uVar11);
  }
  return uVar11;
}


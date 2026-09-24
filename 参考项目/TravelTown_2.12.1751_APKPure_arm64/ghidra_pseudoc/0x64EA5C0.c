/* Ghidra 12.1.2 native pseudocode; RVA 0x64EA5C0; MergeEngine.ECS.Systems.State.Board.BoardProducerInventoryStateSystem.EntitiesRemovalLogic; status ok */


long MergeEngine_ECS_Systems_State_Board_BoardProducerInventoryStateSystem__EntitiesRemovalLogic
               (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_210 [2];
  undefined1 auStack_200 [16];
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [16];
  undefined8 auStack_130 [2];
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
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  lVar19 = 0x7e27000;
  if ((bRam0000000007e27044 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780380);
    func_0x03280a18(PTR_DAT_0777e498);
    func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e27044 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar14 = *param_2;
    lVar19 = *(long *)(param_1 + 0x60);
    unaff_x22 = *(undefined **)PTR_DAT_07780380;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)(unaff_x22 + 0x20)) {
          lVar14 = lVar14 + (long)(int)(*piVar17 + (uint)*(ushort *)(unaff_x22 + 0x50)) * 0x10 +
                   0x138;
          goto LAB_065ea670;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    lVar14 = func_0x03256b10(param_2);
LAB_065ea670:
    lVar14 = func_0x03280b88(*(undefined8 *)(lVar14 + 8),unaff_x22);
    uVar9 = (**(code **)(lVar14 + 8))(param_2,lVar14);
    puVar8 = PTR_DAT_0777e498;
    if (lVar19 != 0) {
      func_0x06386b48(lVar19,uVar9,0);
      lVar15 = *param_2;
      plVar18 = *(long **)(param_1 + 0x10);
      lVar14 = *(long *)puVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_065ea6f8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(param_2,lVar14,0);
LAB_065ea6f8:
      uVar9 = (*(code *)*puVar10)(param_2,puVar10[1]);
      unaff_x22 = puVar8;
      if (plVar18 != (long *)0x0) {
        lVar19 = *plVar18;
        uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e5c0) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar17 + 6) * 0x10 + 0x138);
              goto LAB_065ea764;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777e5c0,6);
LAB_065ea764:
                    /* WARNING: Could not recover jumptable at 0x065ea77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*(code *)*puVar10)(plVar18,uVar9,puVar10[1]);
        return lVar19;
      }
    }
  }
  uVar9 = func_0x03280cac();
  puVar4 = PTR_DAT_077fb9d0;
  puVar8 = PTR_DAT_077803b0;
  uStack_70 = 0x65ea784;
  if ((bRam0000000007e27045 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780388);
    func_0x03280a18(PTR_DAT_07780390);
    func_0x03280a18(PTR_DAT_07780398);
    func_0x03280a18(PTR_DAT_077803a0);
    func_0x03280a18(PTR_DAT_077803a8);
    func_0x03280a18(PTR_DAT_077803b0);
    func_0x03280a18(PTR_DAT_077fba30);
    func_0x03280a18(PTR_DAT_077fba38);
    func_0x03280a18(PTR_DAT_077fb9d0);
    bRam0000000007e27045 = 1;
  }
  uVar9 = func_0x03eb6ac8(uVar9,*(undefined8 *)puVar8);
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c(lVar14);
    lVar14 = *(long *)puVar4;
  }
  puVar8 = PTR_DAT_07780398;
  lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar15 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar4;
    }
    uVar20 = **(undefined8 **)(lVar14 + 0xb8);
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a0);
    param_4 = 0;
    func_0x05355fbc(lVar15,uVar20,*(undefined8 *)PTR_DAT_077fba30);
    plVar18 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar18 = lVar15;
    func_0x032809c4(plVar18,lVar15);
  }
  uVar9 = func_0x03d872a8(uVar9,lVar15,*(undefined8 *)puVar8);
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c(lVar14);
    lVar14 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_07780390;
  puVar8 = PTR_DAT_07780388;
  lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
  if (lVar15 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar4;
    }
    uVar20 = **(undefined8 **)(lVar14 + 0xb8);
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a8);
    param_4 = 0;
    func_0x053569b8(lVar15,uVar20,*(undefined8 *)PTR_DAT_077fba38);
    plVar18 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar18 = lVar15;
    func_0x032809c4(plVar18,lVar15);
  }
  lVar12 = *(long *)puVar8;
  lVar14 = func_0x03d50a94(uVar9,lVar15);
  lVar15 = *(long *)puVar3;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (lVar14 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x04143d60(lVar19,lVar14,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar21 = func_0x03280b7c(uVar9,lVar15);
  lVar14 = auVar21._8_8_;
  uStack_70 = 0x3d6004c;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x0419ce74(lVar19,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar22 = func_0x03280b7c(uVar9,lVar14);
  lVar14 = auVar22._8_8_;
  uStack_90 = 0x3d600c8;
  auStack_80 = auVar21;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x041c2810(lVar19,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar21 = func_0x03280b7c(uVar9,lVar14);
  lVar14 = auVar21._8_8_;
  uStack_b0 = 0x3d60144;
  auStack_a0 = auVar22;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x041ddb58(lVar19,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar22 = func_0x03280b7c(uVar9,lVar14);
  lVar14 = auVar22._8_8_;
  uStack_d0 = 0x3d601c0;
  auStack_c0 = auVar21;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x041e617c(lVar19,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar21 = func_0x03280b7c(uVar9,lVar14);
  lVar14 = auVar21._8_8_;
  uStack_f0 = 0x3d6023c;
  auStack_e0 = auVar22;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x041e8ba0(lVar19,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar22 = func_0x03280b7c(uVar9,lVar14);
  lVar14 = auVar22._8_8_;
  uStack_110 = 0x3d602b8;
  auStack_100 = auVar21;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 0x10))(lVar19,auVar22._0_8_);
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar21 = func_0x03280b7c(uVar9,lVar14);
  lVar14 = auVar21._8_8_;
  auStack_130[0] = 0x3d60338;
  auStack_120 = auVar22;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar21._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x0420cec8(lVar19,auVar21._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    return lVar19;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar22 = func_0x03280b7c(uVar9,lVar14);
  uStack_150 = 0x3d603b4;
  lVar14 = lVar12;
  lStack_148 = lVar19;
  auStack_140 = auVar21;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  auVar21._8_8_ = lStack_148;
  auVar21._0_8_ = unaff_x22;
  puVar8 = PTR_DAT_07779d10;
  if ((auVar22._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    auVar21 = func_0x03280b7c(uVar9,lVar12);
    uStack_170 = 0x3d60428;
    lVar19 = lVar14;
    lStack_158 = lVar12;
    if (*(long *)(lVar14 + 0x38) == 0) {
      auStack_168 = auVar22;
      func_0x03256878(lVar14);
      auVar22 = auStack_168;
    }
    puVar8 = PTR_DAT_07779d10;
    auStack_168 = auVar22;
    if ((auVar21._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar21._8_8_ != 0)) {
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      lVar15 = 0;
      puVar6 = &uStack_150;
      lVar19 = lStack_158;
      uVar9 = uStack_170;
      goto LAB_03d60730;
    }
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    auVar22 = func_0x03280b7c(uVar9,lVar14);
    uStack_190 = 0x3d6049c;
    lVar15 = lVar19;
    lStack_178 = lVar14;
    auStack_188 = auVar21;
    if (*(long *)(lVar19 + 0x38) == 0) {
      func_0x03256878(lVar19);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
      uVar9 = func_0x03280a2c(puVar8);
      uVar9 = func_0x05ac7464(uVar9,0);
      auStack_1c8 = func_0x03280b7c(uVar9,lVar19);
      uStack_1b0 = 0x3d60510;
      lVar14 = lVar15;
      lStack_198 = lVar19;
      auStack_1a8 = auVar22;
      if (*(long *)(lVar15 + 0x38) == 0) {
        func_0x03256878(lVar15);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auStack_1c8._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auStack_1c8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8))
                           (auStack_1c8._0_8_,auStack_1c8._8_8_,0);
        return lVar19;
      }
      uVar9 = func_0x03280a2c(puVar8);
      uVar9 = func_0x05ac7464(uVar9,0);
      auVar22 = func_0x03280b7c(uVar9,lVar15);
      uStack_1e0 = 0x3d60588;
      lVar12 = lVar14;
      lVar13 = param_4;
      puStack_1d0 = unaff_x22;
      lStack_1b8 = lVar15;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar22._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
        uVar9 = func_0x03280a2c(puVar8);
        uVar9 = func_0x05ac7464(uVar9,0);
        auVar21 = func_0x03280b7c(uVar9,param_4);
        auVar2._8_8_ = lVar13;
        auVar2._0_8_ = lVar12;
        puVar5 = auStack_210;
        auStack_210[0] = 0x3d60608;
        lVar19 = lVar12;
        lVar15 = lVar13;
        lStack_1f0 = lVar14;
        lStack_1e8 = param_4;
        auStack_200 = auVar22;
        if (*(long *)(lVar13 + 0x38) == 0) {
          func_0x03256878(lVar13);
        }
        puVar8 = PTR_DAT_07779d10;
        if ((auVar21._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar21._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))
                             (auVar21._0_8_,auVar21._8_8_,lVar12);
          return lVar19;
        }
        uVar9 = func_0x03280a2c(puVar8);
        uVar20 = func_0x05ac7464(uVar9,0);
        uVar9 = 0x3d6068c;
        auVar22 = func_0x03280b7c(uVar20,lVar13);
        goto LAB_03d6068c;
      }
      lVar19 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar7 = &uStack_1b0;
      lVar15 = lStack_1b8;
      unaff_x22 = puStack_1d0;
      uVar9 = uStack_1e0;
      auVar21 = auStack_1c8;
    }
    else {
      lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
      lVar14 = 0;
      puVar7 = &uStack_170;
      lVar15 = lStack_178;
      uVar9 = uStack_190;
      auVar21 = auStack_188;
    }
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    lVar19 = 0;
    puVar5 = auStack_130;
    uVar9 = uStack_150;
    auVar2 = auStack_140;
LAB_03d6068c:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar9;
    *(undefined1 (*) [16])((long)puVar5 + -0x20) = auVar21;
    *(undefined1 (*) [16])((long)puVar5 + -0x10) = auVar2;
    plVar18 = *(long **)(lVar15 + 0x38);
    lVar14 = lVar15;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar18 = *(long **)(lVar15 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    func_0x0531dbd0(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar12 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x48),auVar22._8_8_);
      *(long *)(lVar12 + 0x28) = lVar19;
      func_0x032809c4((long *)(lVar12 + 0x28),lVar19);
      return lVar12;
    }
    auVar21 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar9 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar9;
    *(undefined **)((long)puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar22;
    *(long *)((long)puVar6 + -8) = lVar19;
    plVar18 = *(long **)(lVar14 + 0x38);
    lVar19 = lVar14;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar14);
      plVar18 = *(long **)(lVar14 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
    func_0x0531e428(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x38) = auVar21._0_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x38),auVar21._0_8_);
      *(undefined8 *)(lVar12 + 0x48) = auVar21._8_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x48),auVar21._8_8_);
      *(long *)(lVar12 + 0x28) = lVar15;
      func_0x032809c4((long *)(lVar12 + 0x28),lVar15);
      return lVar12;
    }
    auVar22 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar9 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar7 + -0x30) = uVar9;
  *(undefined **)((long)puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar21;
  *(long *)((long)puVar7 + -8) = lVar15;
  plVar18 = *(long **)(lVar19 + 0x38);
  lVar15 = lVar19;
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar19);
    plVar18 = *(long **)(lVar19 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar12 = func_0x03280ca0();
  uVar9 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + 8);
  func_0x0531ec78(lVar12,0xfffffffe);
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x40) = auVar22._0_8_;
    func_0x032809c4((undefined8 *)(lVar12 + 0x40),auVar22._0_8_);
    *(undefined8 *)(lVar12 + 0x50) = auVar22._8_8_;
    func_0x032809c4((undefined8 *)(lVar12 + 0x50),auVar22._8_8_);
    *(long *)(lVar12 + 0x30) = lVar14;
    func_0x032809c4((long *)(lVar12 + 0x30),lVar14);
    return lVar12;
  }
  auVar21 = func_0x03280cac();
  lVar19 = auVar21._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar22;
  *(long *)((long)puVar7 + -0x38) = lVar14;
  plVar18 = *(long **)(lVar15 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar18 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar14 = func_0x03280ca0();
  puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  (*(code *)*puVar10)(lVar14,0xfffffffe);
  if (lVar14 != 0) {
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0xc0,lVar19);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x100,auVar21._8_8_);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x80,uVar9);
    return lVar14;
  }
  auVar22 = func_0x03280cac();
  lVar14 = auVar22._8_8_;
  plVar18 = auVar22._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar21;
  *(long *)((long)puVar7 + -0x70) = lVar15;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar9;
  puVar11 = puVar10;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    func_0x03280b7c(uVar9,puVar10);
LAB_03d60c04:
    func_0x03281048(plVar18);
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar12 = *plVar18;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15)) {
      lVar15 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar12 = *plVar18;
        bVar1 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15))
      {
        lVar15 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
          lVar12 = *plVar18;
          bVar1 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (**(code **)(lVar12 + 0x228))(plVar18,lVar14,*(undefined8 *)(lVar12 + 0x230));
          return lVar19;
        }
      }
      goto LAB_03d60c04;
    }
    lVar19 = *(long *)(puVar10[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar18,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        func_0x04b68fa4(lVar19,plVar18,lVar14,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar19;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar19 = func_0x03280ca0();
      lVar15 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      if ((*(byte *)(lVar15 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
         )) {
        func_0x04b713b0(lVar19,plVar18,lVar14,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar19;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar15 = *(long *)(puVar10[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar12 = func_0x03280b90(plVar18,lVar15);
    if (lVar12 != 0) {
      func_0x04b66610(lVar19,lVar12,lVar14,*(undefined8 *)(puVar10[7] + 0x30));
      return lVar19;
    }
  }
  auVar21 = func_0x03281048(plVar18,lVar15);
  lVar14 = auVar21._8_8_;
  plVar18 = auVar21._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar15;
  *(long *)((long)puVar7 + -0xb0) = lVar19;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar10;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar22;
  if (puVar11[7] == 0) {
    func_0x03256878(puVar11);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    func_0x03280b7c(uVar9,puVar11);
  }
  else {
    lVar19 = *(long *)(puVar11[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar12 = *plVar18;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if ((bVar1 < *(byte *)(lVar19 + 0x130)) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19)) {
      lVar19 = *(long *)(puVar11[7] + 0x20);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      lVar19 = func_0x03280b90(plVar18,lVar19);
      if (lVar19 != 0) {
        if ((*(byte *)(*(long *)(puVar11[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        lVar15 = *(long *)(puVar11[7] + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        lVar12 = func_0x03280b90(plVar18,lVar15);
        if (lVar12 != 0) {
          func_0x04b667e0(lVar19,lVar12,lVar14,*(undefined8 *)(puVar11[7] + 0x30));
          return lVar19;
        }
        goto LAB_03d60ee0;
      }
      lVar19 = *(long *)(puVar11[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar11[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        func_0x04b693d0(lVar19,plVar18,lVar14,*(undefined8 *)(puVar11[7] + 0x58));
        return lVar19;
      }
      if ((*(byte *)(*(long *)(puVar11[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar19 = func_0x03280ca0();
      lVar12 = *(long *)(puVar11[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
         )) {
        func_0x04b715c8(lVar19,plVar18,lVar14,*(undefined8 *)(puVar11[7] + 0x48));
        return lVar19;
      }
    }
    else {
      lVar19 = *(long *)(puVar11[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar12 = *plVar18;
        bVar1 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar11[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar12 = *plVar18;
          bVar1 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (**(code **)(lVar12 + 0x228))(plVar18,lVar14,*(undefined8 *)(lVar12 + 0x230));
          return lVar19;
        }
      }
    }
  }
  func_0x03281048(plVar18);
LAB_03d60ee0:
  lVar19 = func_0x03281048(plVar18,lVar15);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar21;
  lVar14 = *(long *)(lVar19 + 0x20);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = **(long **)(lVar14 + 0xb8);
  func_0x03280ab0();
  if (lVar14 == 0) {
    lVar14 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x0325681c();
    }
    lVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar15 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    **(long **)(lVar15 + 0xb8) = lVar14;
    lVar19 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar19 + 0xb8),lVar14);
  }
  return lVar14;
}


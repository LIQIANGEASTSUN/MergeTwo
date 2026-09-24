/* Ghidra 12.1.2 native pseudocode; RVA 0x64E9F8C; MergeEngine.ECS.Systems.State.Board.BoardProducerInventoryStateSystem.CreateMissingEntities; status ok */


long MergeEngine_ECS_Systems_State_Board_BoardProducerInventoryStateSystem__CreateMissingEntities
               (long param_1,undefined8 param_2,long *param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  undefined8 uVar25;
  long unaff_x24;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 auStack_2c0 [2];
  undefined1 auStack_2b0 [16];
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long *plStack_280;
  undefined1 auStack_278 [16];
  long lStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  long lStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 auStack_1e0 [2];
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar5 = PTR_DAT_077fb9e0;
  puVar12 = PTR_DAT_077fb9d8;
  uVar25 = 0x7e27000;
  uStack_a8 = param_2;
  if ((bRam0000000007e27043 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_077e7378);
    func_0x03280a18(PTR_DAT_077e7380);
    func_0x03280a18(PTR_DAT_077e7388);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_077fb9e8);
    func_0x03280a18(PTR_DAT_077fb9f0);
    func_0x03280a18(PTR_DAT_077fb9f8);
    func_0x03280a18(PTR_DAT_077e7398);
    func_0x03280a18(PTR_DAT_077fb9e0);
    func_0x03280a18(PTR_DAT_077fb9d8);
    func_0x03280a18(PTR_DAT_077fba00);
    func_0x03280a18(PTR_DAT_077fba08);
    func_0x03280a18(PTR_DAT_077fba10);
    func_0x03280a18(PTR_DAT_07783828);
    func_0x03280a18(PTR_DAT_077fba18);
    func_0x03280a18(PTR_DAT_077fba20);
    func_0x03280a18(PTR_DAT_077fba28);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e27043 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  lStack_88 = 0;
  lVar13 = func_0x03280ca0(*(undefined8 *)puVar12);
  func_0x04143c38(lVar13,*(undefined8 *)puVar5);
  puVar7 = PTR_DAT_077fba20;
  puVar6 = PTR_DAT_077fba08;
  puVar4 = PTR_DAT_077e7380;
  puVar5 = PTR_DAT_07783828;
  puVar12 = PTR_DAT_077503b8;
  if (param_3 != (long *)0x0) {
    func_0x04145068(&uStack_a0,param_3,*(undefined8 *)PTR_DAT_077e7398);
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_70 = lStack_90;
    lVar21 = unaff_x24;
LAB_065ea148:
    uVar14 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar4);
    lVar22 = lStack_70;
    if ((uVar14 & 1) == 0) {
      lVar13 = func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077e7378);
      return lVar13;
    }
    if (lStack_70 != 0) goto code_r0x065ea160;
    func_0x03280cac();
    goto LAB_065ea4b4;
  }
LAB_065ea4e4:
  auVar26 = func_0x03280cac();
  uVar16 = auVar26._0_8_;
  if (auVar26._8_4_ == 1) {
    plVar17 = (long *)func_0x072ce910(uVar16);
    lVar22 = *plVar17;
    func_0x072ce920();
    lVar21 = func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077e7378);
    if (lVar22 == 0) {
      return lVar21;
    }
    func_0x03280ca4(lVar22);
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077e7378);
  func_0x03365958(uVar16);
  func_0x03280ca4(0);
  auVar28 = func_0x02f09514();
  plVar17 = auVar28._8_8_;
  lVar21 = auVar28._0_8_;
  uStack_e0 = 0x65ea5c0;
  uStack_c0 = 0;
  lVar22 = 0x7e27000;
  plStack_d0 = param_3;
  lStack_c8 = lVar13;
  uStack_b8 = uVar16;
  if ((bRam0000000007e27044 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780380);
    func_0x03280a18(PTR_DAT_0777e498);
    func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e27044 = 1;
  }
  if (plVar17 != (long *)0x0) {
    lVar13 = *plVar17;
    lVar22 = *(long *)(lVar21 + 0x60);
    param_3 = *(long **)PTR_DAT_07780380;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == param_3[4]) {
          lVar13 = lVar13 + (long)(int)(*piVar23 + (uint)*(ushort *)(param_3 + 10)) * 0x10 + 0x138;
          goto LAB_065ea670;
        }
        uVar14 = uVar14 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar14 != 0);
    }
    lVar13 = func_0x03256b10(plVar17);
LAB_065ea670:
    lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),param_3);
    uVar16 = (**(code **)(lVar13 + 8))(plVar17,lVar13);
    puVar12 = PTR_DAT_0777e498;
    if (lVar22 != 0) {
      func_0x06386b48(lVar22,uVar16,0);
      lVar20 = *plVar17;
      plVar24 = *(long **)(lVar21 + 0x10);
      lVar13 = *(long *)puVar12;
      uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar14 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar13) {
            puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_065ea6f8;
          }
          uVar14 = uVar14 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar14 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar17,lVar13,0);
LAB_065ea6f8:
      uVar16 = (*(code *)*puVar15)(plVar17,puVar15[1]);
      lVar21 = 0;
      param_3 = (long *)puVar12;
      if (plVar24 != (long *)0x0) {
        lVar13 = *plVar24;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0777e5c0) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar23 + 6) * 0x10 + 0x138);
              goto LAB_065ea764;
            }
            uVar14 = uVar14 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar14 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777e5c0,6);
LAB_065ea764:
                    /* WARNING: Could not recover jumptable at 0x065ea77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar13 = (*(code *)*puVar15)(plVar24,uVar16,puVar15[1]);
        return lVar13;
      }
    }
  }
  uVar16 = func_0x03280cac();
  puVar5 = PTR_DAT_077fb9d0;
  puVar12 = PTR_DAT_077803b0;
  uStack_120 = 0x65ea784;
  lStack_110 = unaff_x24;
  lStack_108 = uVar25;
  plStack_100 = param_3;
  lStack_f8 = lVar22;
  lStack_f0 = lVar21;
  plStack_e8 = plVar17;
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
  uVar25 = func_0x03eb6ac8(uVar16,*(undefined8 *)puVar12);
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c(lVar13);
    lVar13 = *(long *)puVar5;
  }
  puVar12 = PTR_DAT_07780398;
  lVar21 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar21 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar5;
    }
    uVar16 = **(undefined8 **)(lVar13 + 0xb8);
    lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a0);
    param_4 = 0;
    func_0x05355fbc(lVar21,uVar16,*(undefined8 *)PTR_DAT_077fba30);
    plVar17 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar17 = lVar21;
    func_0x032809c4(plVar17,lVar21);
  }
  uVar25 = func_0x03d872a8(uVar25,lVar21,*(undefined8 *)puVar12);
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c(lVar13);
    lVar13 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_07780390;
  puVar12 = PTR_DAT_07780388;
  lVar21 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (lVar21 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar5;
    }
    uVar16 = **(undefined8 **)(lVar13 + 0xb8);
    lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803a8);
    param_4 = 0;
    func_0x053569b8(lVar21,uVar16,*(undefined8 *)PTR_DAT_077fba38);
    plVar17 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
    *plVar17 = lVar21;
    func_0x032809c4(plVar17,lVar21);
  }
  lVar19 = *(long *)puVar12;
  lVar22 = func_0x03d50a94(uVar25,lVar21);
  lVar21 = lStack_f8;
  plVar17 = plStack_100;
  lVar13 = lStack_108;
  lVar20 = *(long *)puVar4;
  plStack_100 = (long *)uStack_120;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (lVar22 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x04143d60(lVar13,lVar22,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar28 = func_0x03280b7c(uVar25,lVar20);
  lVar11 = auVar28._8_8_;
  uStack_120 = 0x3d6004c;
  lStack_110 = lVar22;
  lStack_108 = lVar20;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0419ce74(lVar13,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar27 = func_0x03280b7c(uVar25,lVar11);
  lVar22 = auVar27._8_8_;
  uStack_140 = 0x3d600c8;
  auStack_130 = auVar28;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041c2810(lVar13,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar28 = func_0x03280b7c(uVar25,lVar22);
  lVar22 = auVar28._8_8_;
  uStack_160 = 0x3d60144;
  auStack_150 = auVar27;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041ddb58(lVar13,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar27 = func_0x03280b7c(uVar25,lVar22);
  lVar22 = auVar27._8_8_;
  uStack_180 = 0x3d601c0;
  auStack_170 = auVar28;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e617c(lVar13,auVar27._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar28 = func_0x03280b7c(uVar25,lVar22);
  lVar22 = auVar28._8_8_;
  uStack_1a0 = 0x3d6023c;
  auStack_190 = auVar27;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e8ba0(lVar13,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar27 = func_0x03280b7c(uVar25,lVar22);
  lVar22 = auVar27._8_8_;
  uStack_1c0 = 0x3d602b8;
  auStack_1b0 = auVar28;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar27._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x10))(lVar13,auVar27._0_8_);
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar28 = func_0x03280b7c(uVar25,lVar22);
  lVar22 = auVar28._8_8_;
  auStack_1e0[0] = 0x3d60338;
  auStack_1d0 = auVar27;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x03256878(lVar22);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0420cec8(lVar13,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
    return lVar13;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar27 = func_0x03280b7c(uVar25,lVar22);
  uStack_200 = 0x3d603b4;
  lStack_1f8 = lVar21;
  lVar21 = lVar19;
  auStack_1f0 = auVar28;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  auVar28._8_8_ = lStack_1f8;
  auVar28._0_8_ = plVar17;
  puVar12 = PTR_DAT_07779d10;
  if ((auVar27._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
    uVar25 = func_0x03280a2c(puVar12);
    uVar25 = func_0x05ac7464(uVar25,0);
    auVar28 = func_0x03280b7c(uVar25,lVar19);
    uStack_220 = 0x3d60428;
    lVar22 = lVar21;
    lStack_208 = lVar19;
    if (*(long *)(lVar21 + 0x38) == 0) {
      auStack_218 = auVar27;
      func_0x03256878(lVar21);
      auVar27 = auStack_218;
    }
    puVar12 = PTR_DAT_07779d10;
    auStack_218 = auVar27;
    if ((auVar28._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
      lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
      lVar20 = 0;
      puVar9 = &uStack_200;
      lVar21 = lStack_208;
      uVar25 = uStack_220;
      goto LAB_03d60730;
    }
    uVar25 = func_0x03280a2c(puVar12);
    uVar25 = func_0x05ac7464(uVar25,0);
    auVar27 = func_0x03280b7c(uVar25,lVar21);
    uStack_240 = 0x3d6049c;
    lVar20 = lVar22;
    lStack_228 = lVar21;
    auStack_238 = auVar28;
    if (*(long *)(lVar22 + 0x38) == 0) {
      func_0x03256878(lVar22);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar27._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
      uVar25 = func_0x03280a2c(puVar12);
      uVar25 = func_0x05ac7464(uVar25,0);
      auStack_278 = func_0x03280b7c(uVar25,lVar22);
      uStack_260 = 0x3d60510;
      lVar19 = lVar20;
      lStack_248 = lVar22;
      auStack_258 = auVar27;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auStack_278._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auStack_278._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))
                           (auStack_278._0_8_,auStack_278._8_8_,0);
        return lVar13;
      }
      uVar25 = func_0x03280a2c(puVar12);
      uVar25 = func_0x05ac7464(uVar25,0);
      auVar27 = func_0x03280b7c(uVar25,lVar20);
      uStack_290 = 0x3d60588;
      plStack_280 = plVar17;
      lVar22 = lVar19;
      lVar11 = param_4;
      lStack_268 = lVar20;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar27._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar27._8_8_ == 0)) {
        uVar25 = func_0x03280a2c(puVar12);
        uVar25 = func_0x05ac7464(uVar25,0);
        auVar28 = func_0x03280b7c(uVar25,param_4);
        auVar3._8_8_ = lVar11;
        auVar3._0_8_ = lVar22;
        puVar8 = auStack_2c0;
        auStack_2c0[0] = 0x3d60608;
        lVar21 = lVar22;
        lVar20 = lVar11;
        lStack_2a0 = lVar19;
        lStack_298 = param_4;
        auStack_2b0 = auVar27;
        if (*(long *)(lVar11 + 0x38) == 0) {
          func_0x03256878(lVar11);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar28._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))
                             (auVar28._0_8_,auVar28._8_8_,lVar22);
          return lVar13;
        }
        uVar25 = func_0x03280a2c(puVar12);
        uVar16 = func_0x05ac7464(uVar25,0);
        uVar25 = 0x3d6068c;
        auVar27 = func_0x03280b7c(uVar16,lVar11);
        goto LAB_03d6068c;
      }
      lVar21 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar10 = &uStack_260;
      lVar20 = lStack_268;
      plVar17 = plStack_280;
      uVar25 = uStack_290;
      auVar28 = auStack_278;
    }
    else {
      lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      lVar19 = 0;
      puVar10 = &uStack_220;
      lVar20 = lStack_228;
      uVar25 = uStack_240;
      auVar28 = auStack_238;
    }
  }
  else {
    lVar20 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    lVar21 = 0;
    puVar8 = auStack_1e0;
    uVar25 = uStack_200;
    auVar3 = auStack_1f0;
LAB_03d6068c:
    puVar9 = (undefined8 *)((long)puVar8 + -0x30);
    *(undefined8 *)((long)puVar8 + -0x30) = uVar25;
    *(undefined1 (*) [16])((long)puVar8 + -0x20) = auVar28;
    *(undefined1 (*) [16])((long)puVar8 + -0x10) = auVar3;
    plVar17 = *(long **)(lVar20 + 0x38);
    lVar22 = lVar20;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar17 = *(long **)(lVar20 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x0531dbd0(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      *(undefined8 *)(lVar19 + 0x38) = auVar27._0_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x38),auVar27._0_8_);
      *(undefined8 *)(lVar19 + 0x48) = auVar27._8_8_;
      func_0x032809c4((undefined8 *)(lVar19 + 0x48),auVar27._8_8_);
      *(long *)(lVar19 + 0x28) = lVar21;
      func_0x032809c4((long *)(lVar19 + 0x28),lVar21);
      return lVar19;
    }
    auVar28 = func_0x03280cac();
    plVar17 = (long *)0x0;
    uVar25 = 0x3d60730;
LAB_03d60730:
    puVar10 = (undefined8 *)((long)puVar9 + -0x30);
    *(undefined8 *)((long)puVar9 + -0x30) = uVar25;
    *(long **)((long)puVar9 + -0x20) = plVar17;
    *(undefined1 (*) [16])((long)puVar9 + -0x18) = auVar27;
    *(long *)((long)puVar9 + -8) = lVar21;
    plVar17 = *(long **)(lVar22 + 0x38);
    lVar21 = lVar22;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar22);
      plVar17 = *(long **)(lVar22 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar11 = func_0x03280ca0();
    lVar19 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    func_0x0531e428(lVar11,0xfffffffe);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x38) = auVar28._0_8_;
      func_0x032809c4((undefined8 *)(lVar11 + 0x38),auVar28._0_8_);
      *(undefined8 *)(lVar11 + 0x48) = auVar28._8_8_;
      func_0x032809c4((undefined8 *)(lVar11 + 0x48),auVar28._8_8_);
      *(long *)(lVar11 + 0x28) = lVar20;
      func_0x032809c4((long *)(lVar11 + 0x28),lVar20);
      return lVar11;
    }
    auVar27 = func_0x03280cac();
    plVar17 = (long *)0x0;
    uVar25 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar10 + -0x30) = uVar25;
  *(long **)((long)puVar10 + -0x20) = plVar17;
  *(undefined1 (*) [16])((long)puVar10 + -0x18) = auVar28;
  *(long *)((long)puVar10 + -8) = lVar20;
  plVar17 = *(long **)(lVar21 + 0x38);
  lVar22 = lVar21;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar21);
    plVar17 = *(long **)(lVar21 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar20 = func_0x03280ca0();
  uVar25 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + 8);
  func_0x0531ec78(lVar20,0xfffffffe);
  if (lVar20 != 0) {
    *(undefined8 *)(lVar20 + 0x40) = auVar27._0_8_;
    func_0x032809c4((undefined8 *)(lVar20 + 0x40),auVar27._0_8_);
    *(undefined8 *)(lVar20 + 0x50) = auVar27._8_8_;
    func_0x032809c4((undefined8 *)(lVar20 + 0x50),auVar27._8_8_);
    *(long *)(lVar20 + 0x30) = lVar19;
    func_0x032809c4((long *)(lVar20 + 0x30),lVar19);
    return lVar20;
  }
  auVar28 = func_0x03280cac();
  lVar21 = auVar28._0_8_;
  *(undefined8 *)((long)puVar10 + -0x60) = 0x3d60878;
  *(long *)((long)puVar10 + -0x58) = lVar13;
  *(undefined8 *)((long)puVar10 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar10 + -0x48) = auVar27;
  *(long *)((long)puVar10 + -0x38) = lVar19;
  plVar17 = *(long **)(lVar22 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar22);
    plVar17 = *(long **)(lVar22 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  puVar15 = *(undefined8 **)(*(long *)(lVar22 + 0x38) + 8);
  (*(code *)*puVar15)(lVar13,0xfffffffe);
  if (lVar13 != 0) {
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,lVar21);
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x100,auVar28._8_8_);
    func_0x02f17738(lVar13,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,uVar25);
    return lVar13;
  }
  auVar27 = func_0x03280cac();
  lVar13 = auVar27._8_8_;
  plVar17 = auVar27._0_8_;
  *(undefined8 *)((long)puVar10 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar10 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar10 + -0x80) = auVar28;
  *(long *)((long)puVar10 + -0x70) = lVar22;
  *(undefined8 *)((long)puVar10 + -0x68) = uVar25;
  puVar18 = puVar15;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar25 = func_0x03280a2c(puVar12);
    uVar25 = func_0x05ac7464(uVar25,0);
    func_0x03280b7c(uVar25,puVar15);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar20 = *plVar17;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22)) {
      lVar22 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
        lVar20 = *plVar17;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22))
      {
        lVar22 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
          lVar20 = *plVar17;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar22 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(lVar20 + 0x228))(plVar17,lVar13,*(undefined8 *)(lVar20 + 0x230));
          return lVar13;
        }
      }
      goto LAB_03d60c04;
    }
    lVar21 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c(lVar21);
    }
    lVar21 = func_0x03280b90(plVar17,lVar21);
    if (lVar21 == 0) {
      lVar21 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        func_0x04b68fa4(lVar21,plVar17,lVar13,*(undefined8 *)(puVar15[7] + 0x58));
        return lVar21;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar21 = func_0x03280ca0();
      lVar22 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      if ((*(byte *)(lVar22 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) == lVar22
         )) {
        func_0x04b713b0(lVar21,plVar17,lVar13,*(undefined8 *)(puVar15[7] + 0x48));
        return lVar21;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar21 = func_0x03280ca0();
    lVar22 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c(lVar22);
    }
    lVar20 = func_0x03280b90(plVar17,lVar22);
    if (lVar20 != 0) {
      func_0x04b66610(lVar21,lVar20,lVar13,*(undefined8 *)(puVar15[7] + 0x30));
      return lVar21;
    }
  }
  auVar28 = func_0x03281048(plVar17,lVar22);
  lVar13 = auVar28._8_8_;
  plVar17 = auVar28._0_8_;
  *(undefined8 *)((long)puVar10 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar10 + -0xb8) = lVar22;
  *(long *)((long)puVar10 + -0xb0) = lVar21;
  *(undefined8 **)((long)puVar10 + -0xa8) = puVar15;
  *(undefined1 (*) [16])((long)puVar10 + -0xa0) = auVar27;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar25 = func_0x03280a2c(puVar12);
    uVar25 = func_0x05ac7464(uVar25,0);
    func_0x03280b7c(uVar25,puVar18);
  }
  else {
    lVar21 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar20 = *plVar17;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((bVar1 < *(byte *)(lVar21 + 0x130)) ||
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21)) {
      lVar21 = *(long *)(puVar18[7] + 0x20);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
      }
      lVar21 = func_0x03280b90(plVar17,lVar21);
      if (lVar21 != 0) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        lVar22 = *(long *)(puVar18[7] + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar20 = func_0x03280b90(plVar17,lVar22);
        if (lVar20 != 0) {
          func_0x04b667e0(lVar21,lVar20,lVar13,*(undefined8 *)(puVar18[7] + 0x30));
          return lVar21;
        }
        goto LAB_03d60ee0;
      }
      lVar21 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) != lVar21
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        func_0x04b693d0(lVar21,plVar17,lVar13,*(undefined8 *)(puVar18[7] + 0x58));
        return lVar21;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar21 = func_0x03280ca0();
      lVar20 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(lVar21,plVar17,lVar13,*(undefined8 *)(puVar18[7] + 0x48));
        return lVar21;
      }
    }
    else {
      lVar21 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x0325681c(lVar21);
        lVar20 = *plVar17;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar21 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21))
      {
        lVar21 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x0325681c(lVar21);
          lVar20 = *plVar17;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar21 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(lVar20 + 0x228))(plVar17,lVar13,*(undefined8 *)(lVar20 + 0x230));
          return lVar13;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar13 = func_0x03281048(plVar17,lVar22);
  *(undefined8 *)((long)puVar10 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar10 + -0xd0) = auVar28;
  lVar21 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
  if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = func_0x0325681c();
  }
  lVar21 = **(long **)(lVar21 + 0xb8);
  func_0x03280ab0();
  if (lVar21 == 0) {
    lVar21 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
      lVar21 = func_0x0325681c();
    }
    lVar21 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar22 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
    if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
      lVar22 = func_0x0325681c();
    }
    **(long **)(lVar22 + 0xb8) = lVar21;
    lVar13 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar13 + 0xb8),lVar21);
  }
  return lVar21;
code_r0x065ea160:
  uVar14 = func_0x055ea870(*(undefined8 *)(lStack_70 + 0x10),*(undefined8 *)puVar5,0);
  if ((uVar14 & 1) != 0) goto LAB_065ea148;
  if (*(long *)(lVar22 + 0x20) == 0) {
LAB_065ea4b4:
    func_0x03280cac();
LAB_065ea4b8:
    func_0x03280cac();
LAB_065ea4bc:
    func_0x03280cac();
LAB_065ea4c0:
    func_0x03280cac();
    unaff_x24 = lVar21;
LAB_065ea4c4:
    func_0x03280cac();
LAB_065ea4c8:
    func_0x03280cac();
LAB_065ea4cc:
    func_0x03280cac();
    lVar21 = unaff_x24;
LAB_065ea4d0:
    unaff_x24 = lVar21;
    func_0x03280cac();
LAB_065ea4d4:
    func_0x03280cac();
LAB_065ea4d8:
    func_0x03280cac();
  }
  else {
    uVar14 = func_0x055f7aac(*(undefined8 *)(*(long *)(lVar22 + 0x20) + 0x18),0);
    if ((uVar14 & 1) != 0) {
      param_3 = (long *)func_0x055f7538(*(undefined8 *)PTR_DAT_077fba28,
                                        *(undefined8 *)(lVar22 + 0x10),
                                        *(undefined8 *)PTR_DAT_077fba10,0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      param_4 = *(long *)puVar7;
      func_0x0556c434(param_3,*(undefined8 *)puVar12,0,param_4,*(undefined8 *)puVar6,0,0);
      goto LAB_065ea148;
    }
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_065ea4bc;
    param_3 = *(long **)(param_1 + 0x68);
    if (param_3 == (long *)0x0) goto LAB_065ea4b8;
    lVar20 = *param_3;
    uVar25 = *(undefined8 *)(*(long *)(lVar22 + 0x20) + 0x10);
    uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar14 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar15 = (undefined8 *)(lVar20 + (long)(*piVar23 + 8) * 0x10 + 0x138);
          goto LAB_065ea25c;
        }
        uVar14 = uVar14 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar14 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a498,8);
LAB_065ea25c:
    uVar14 = (*(code *)*puVar15)(param_3,uVar25,puVar15[1]);
    unaff_x24 = lVar21;
    if ((uVar14 & 1) == 0) {
      if (*(long *)(lVar22 + 0x20) != 0) {
        param_3 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_077fba18,
                                          *(undefined8 *)(*(long *)(lVar22 + 0x20) + 0x10),0);
        if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        param_4 = *(long *)puVar7;
        func_0x0556c434(param_3,*(undefined8 *)puVar12,0,param_4,*(undefined8 *)puVar6,0,0);
        goto LAB_065ea148;
      }
      goto LAB_065ea4c4;
    }
    param_4 = MergeEngine_Configuration_MergeItemInstanceConfiguration__CreateInventoryConfiguration
                        (0,0,0,0);
    uVar14 = func_0x05497634(param_1,uStack_a8,*(undefined8 *)(lVar22 + 0x20),param_4,&lStack_88,
                             *(undefined8 *)PTR_DAT_077fb9f0);
    if ((uVar14 & 1) != 0) {
LAB_065ea3fc:
      if (lStack_88 != 0) {
        uVar16 = func_0x03d20d84(lStack_88,*(undefined8 *)PTR_DAT_0777a928);
        lVar21 = unaff_x24;
        if (lVar13 == 0) goto LAB_065ea4c0;
        lVar22 = *(long *)(lVar13 + 0x10);
        lVar20 = *(long *)PTR_DAT_077fb9f8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar22 != 0) {
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar22 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
            func_0x032809c4();
          }
          else {
            func_0x0414446c(lVar13,uVar16,
                            *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_065ea148;
        }
        goto LAB_065ea4c8;
      }
      goto LAB_065ea4cc;
    }
    if (lStack_88 == 0) goto LAB_065ea4e0;
    uVar16 = func_0x03d20d84(lStack_88,*(undefined8 *)PTR_DAT_0777a928);
    if (*(long *)(lVar22 + 0x20) != 0) {
      param_4 = *(long *)PTR_DAT_077fba00;
      func_0x03bf70e8(param_1,uVar16,*(undefined8 *)(*(long *)(lVar22 + 0x20) + 0xa8));
      unaff_x24 = lStack_88;
      param_3 = *(long **)(param_1 + 0x58);
      if (param_3 == (long *)0x0) goto LAB_065ea4d0;
      lVar21 = *param_3;
      uVar25 = *(undefined8 *)(lVar22 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar14 != 0) {
        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_077803d0) {
            puVar15 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_065ea3ac;
          }
          uVar14 = uVar14 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar14 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_077803d0,0);
LAB_065ea3ac:
      param_4 = puVar15[1];
      (*(code *)*puVar15)(param_3,unaff_x24,uVar25);
      if (lStack_88 == 0) goto LAB_065ea4d4;
      lVar21 = func_0x03d20d84(lStack_88,*(undefined8 *)PTR_DAT_0777a928);
      if (lVar21 != 0) {
        *(undefined4 *)(lVar21 + 0x2c) = 1;
        func_0x054973f4(param_1,lStack_88,*(undefined8 *)PTR_DAT_077fb9e8);
        goto LAB_065ea3fc;
      }
      goto LAB_065ea4d8;
    }
  }
  func_0x03280cac();
LAB_065ea4e0:
  func_0x03280cac();
  goto LAB_065ea4e4;
}


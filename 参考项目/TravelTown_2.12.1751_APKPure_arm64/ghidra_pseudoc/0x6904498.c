/* Ghidra 12.1.2 native pseudocode; RVA 0x6904498; MergeEngine.ECS.Components.Board.BoardQueueComponent.CollectIds; status ok */


long MergeEngine_ECS_Components_Board_BoardQueueComponent__CollectIds
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 auStack_220 [2];
  undefined1 auStack_210 [16];
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
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
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  puVar21 = PTR_DAT_07752c90;
  puVar11 = PTR_DAT_07752c88;
  if ((bRam0000000007e29923 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807c60);
    func_0x03280a18(PTR_DAT_07807c70);
    func_0x03280a18(PTR_DAT_07752c80);
    func_0x03280a18(PTR_DAT_07752c88);
    func_0x03280a18(PTR_DAT_07752c90);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07826960);
    func_0x03280a18(PTR_DAT_07826968);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_078269c8);
    func_0x03280a18(PTR_DAT_078269d0);
    bRam0000000007e29923 = 1;
  }
  lVar12 = func_0x03280ca0(*(undefined8 *)puVar21);
  func_0x053bfe40(lVar12,*(undefined8 *)puVar11);
  puVar11 = PTR_DAT_078269d0;
  if (param_1 == (long *)0x0) {
    return lVar12;
  }
  lVar13 = *(long *)PTR_DAT_078269d0;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar13 = *(long *)puVar11;
  }
  puVar21 = PTR_DAT_07807c60;
  puVar20 = *(undefined **)(*(long *)(lVar13 + 0xb8) + 8);
  if (puVar20 == (undefined *)0x0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar11;
    }
    uVar22 = **(undefined8 **)(lVar13 + 0xb8);
    puVar20 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07807c70);
    param_4 = 0;
    func_0x05355fbc(puVar20,uVar22,*(undefined8 *)PTR_DAT_078269c8);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
    *puVar14 = puVar20;
    func_0x032809c4(puVar14,puVar20);
  }
  plVar15 = (long *)func_0x03d872a8(param_1,puVar20,*(undefined8 *)puVar21);
  puVar21 = puVar20;
  puVar23 = puVar11;
  if (plVar15 == (long *)0x0) {
LAB_06a047e8:
    func_0x03280cac();
    puVar20 = puVar21;
    puVar11 = puVar23;
  }
  else {
    lVar13 = *plVar15;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07826960) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06a04660;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07826960,0);
LAB_06a04660:
    param_1 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
    puVar3 = PTR_DAT_07826968;
    puVar23 = PTR_DAT_07752c80;
    puVar21 = PTR_DAT_0774e8e0;
    if (param_1 != (long *)0x0) {
LAB_06a0468c:
      lVar13 = *param_1;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar21) {
            puVar14 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06a046d8;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar21,0);
LAB_06a046d8:
      uVar18 = (*(code *)*puVar14)(param_1,puVar14[1]);
      if ((uVar18 & 1) == 0) {
        puVar20 = (undefined *)0x0;
        goto LAB_06a04760;
      }
      lVar13 = *param_1;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06a04734;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar3,0);
LAB_06a04734:
      lVar13 = (*(code *)*puVar14)(param_1,puVar14[1]);
      if (lVar13 != 0) {
        if (lVar12 == 0) goto LAB_06a047e4;
        func_0x053c1024(lVar12,*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)puVar23);
        goto LAB_06a0468c;
      }
      func_0x03280cac();
LAB_06a047e4:
      func_0x03280cac();
      goto LAB_06a047e8;
    }
  }
  puVar23 = puVar11;
  func_0x03280cac();
  while( true ) {
    auVar24 = func_0x03280ca4(puVar20);
    uVar22 = auVar24._0_8_;
    if (auVar24._8_4_ != 1) break;
    puVar14 = (undefined8 *)func_0x072ce910(uVar22);
    puVar20 = (undefined *)*puVar14;
    func_0x072ce920();
LAB_06a04760:
    if (param_1 != (long *)0x0) {
      lVar13 = *param_1;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06a047b8;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_0774e8c8,0);
LAB_06a047b8:
      (*(code *)*puVar14)(param_1,puVar14[1]);
    }
    if (puVar20 == (undefined *)0x0) {
      return lVar12;
    }
  }
  if (param_1 != (long *)0x0) {
    lVar13 = *param_1;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06a04890;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_0774e8c8,0);
LAB_06a04890:
    (*(code *)*puVar14)(param_1,puVar14[1]);
  }
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  lVar13 = func_0x02f09514();
  puVar21 = PTR_DAT_078269d8;
  puVar11 = PTR_DAT_07826950;
  lStack_70 = 0x6a048b4;
  uStack_58 = 0;
  uStack_60 = uVar22;
  plStack_50 = param_1;
  lStack_48 = lVar12;
  if ((bRam0000000007e2991c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826950);
    func_0x03280a18(PTR_DAT_078269d8);
    bRam0000000007e2991c = 1;
  }
  lVar17 = *(long *)puVar11;
  lVar12 = func_0x03d37218(*(undefined8 *)(lVar13 + 0x28),*(undefined8 *)(lVar13 + 0x30));
  uVar8 = uStack_58;
  uVar22 = uStack_60;
  lVar13 = *(long *)puVar21;
  uStack_60 = lStack_70;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (lVar12 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x04143d60(lVar17,lVar12,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar17;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar25 = func_0x03280b7c(uVar7,lVar13);
  lVar9 = auVar25._8_8_;
  uStack_80 = 0x3d6004c;
  lStack_70 = lVar12;
  lStack_68 = lVar13;
  if (*(long *)(lVar9 + 0x38) == 0) {
    func_0x03256878(lVar9);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x0419ce74(lVar12,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10));
    return lVar12;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar26 = func_0x03280b7c(uVar7,lVar9);
  lVar12 = auVar26._8_8_;
  uStack_a0 = 0x3d600c8;
  auStack_90 = auVar25;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041c2810(lVar13,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar25 = func_0x03280b7c(uVar7,lVar12);
  lVar12 = auVar25._8_8_;
  uStack_c0 = 0x3d60144;
  auStack_b0 = auVar26;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041ddb58(lVar13,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar26 = func_0x03280b7c(uVar7,lVar12);
  lVar12 = auVar26._8_8_;
  uStack_e0 = 0x3d601c0;
  auStack_d0 = auVar25;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e617c(lVar13,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar25 = func_0x03280b7c(uVar7,lVar12);
  lVar12 = auVar25._8_8_;
  uStack_100 = 0x3d6023c;
  auStack_f0 = auVar26;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x041e8ba0(lVar13,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar26 = func_0x03280b7c(uVar7,lVar12);
  lVar12 = auVar26._8_8_;
  uStack_120 = 0x3d602b8;
  auStack_110 = auVar25;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))(lVar13,auVar26._0_8_);
    return lVar13;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar25 = func_0x03280b7c(uVar7,lVar12);
  lVar12 = auVar25._8_8_;
  auStack_140[0] = 0x3d60338;
  auStack_130 = auVar26;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar25._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x0420cec8(lVar13,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar13;
  }
  uVar7 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar7 = func_0x05ac7464(uVar7,0);
  auVar26 = func_0x03280b7c(uVar7,lVar12);
  uStack_160 = 0x3d603b4;
  uStack_158 = uVar8;
  lVar12 = lVar17;
  auStack_150 = auVar25;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  auVar25._8_8_ = uStack_158;
  auVar25._0_8_ = uVar22;
  puVar11 = PTR_DAT_07779d10;
  if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
    uVar8 = func_0x03280a2c(puVar11);
    uVar8 = func_0x05ac7464(uVar8,0);
    auVar25 = func_0x03280b7c(uVar8,lVar17);
    uStack_180 = 0x3d60428;
    lVar13 = lVar12;
    lStack_168 = lVar17;
    if (*(long *)(lVar12 + 0x38) == 0) {
      auStack_178 = auVar26;
      func_0x03256878(lVar12);
      auVar26 = auStack_178;
    }
    puVar11 = PTR_DAT_07779d10;
    auStack_178 = auVar26;
    if ((auVar25._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar25._8_8_ != 0)) {
      lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar17 = 0;
      puVar5 = &uStack_160;
      lVar12 = lStack_168;
      uVar8 = uStack_180;
      goto LAB_03d60730;
    }
    uVar8 = func_0x03280a2c(puVar11);
    uVar8 = func_0x05ac7464(uVar8,0);
    auVar26 = func_0x03280b7c(uVar8,lVar12);
    uStack_1a0 = 0x3d6049c;
    lVar17 = lVar13;
    lStack_188 = lVar12;
    auStack_198 = auVar25;
    if (*(long *)(lVar13 + 0x38) == 0) {
      func_0x03256878(lVar13);
    }
    puVar11 = PTR_DAT_07779d10;
    if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
      uVar8 = func_0x03280a2c(puVar11);
      uVar8 = func_0x05ac7464(uVar8,0);
      auStack_1d8 = func_0x03280b7c(uVar8,lVar13);
      uStack_1c0 = 0x3d60510;
      lVar9 = lVar17;
      lStack_1a8 = lVar13;
      auStack_1b8 = auVar26;
      if (*(long *)(lVar17 + 0x38) == 0) {
        func_0x03256878(lVar17);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auStack_1d8._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auStack_1d8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 8))
                           (auStack_1d8._0_8_,auStack_1d8._8_8_,0);
        return lVar12;
      }
      uVar8 = func_0x03280a2c(puVar11);
      uVar8 = func_0x05ac7464(uVar8,0);
      auVar26 = func_0x03280b7c(uVar8,lVar17);
      uStack_1f0 = 0x3d60588;
      uStack_1e0 = uVar22;
      lVar13 = lVar9;
      lVar10 = param_4;
      lStack_1c8 = lVar17;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
        uVar22 = func_0x03280a2c(puVar11);
        uVar22 = func_0x05ac7464(uVar22,0);
        auVar25 = func_0x03280b7c(uVar22,param_4);
        auVar2._8_8_ = lVar10;
        auVar2._0_8_ = lVar13;
        puVar4 = auStack_220;
        auStack_220[0] = 0x3d60608;
        lVar12 = lVar13;
        lVar17 = lVar10;
        lStack_200 = lVar9;
        lStack_1f8 = param_4;
        auStack_210 = auVar26;
        if (*(long *)(lVar10 + 0x38) == 0) {
          func_0x03256878(lVar10);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((auVar25._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar25._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + 0x10))
                             (auVar25._0_8_,auVar25._8_8_,lVar13);
          return lVar12;
        }
        uVar22 = func_0x03280a2c(puVar11);
        uVar8 = func_0x05ac7464(uVar22,0);
        uVar22 = 0x3d6068c;
        auVar26 = func_0x03280b7c(uVar8,lVar10);
        goto LAB_03d6068c;
      }
      lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar6 = &uStack_1c0;
      lVar17 = lStack_1c8;
      uVar22 = uStack_1e0;
      uVar8 = uStack_1f0;
      auVar25 = auStack_1d8;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar9 = 0;
      puVar6 = &uStack_180;
      lVar17 = lStack_188;
      uVar8 = uStack_1a0;
      auVar25 = auStack_198;
    }
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    lVar12 = 0;
    puVar4 = auStack_140;
    uVar22 = uStack_160;
    auVar2 = auStack_150;
LAB_03d6068c:
    puVar5 = (undefined8 *)((long)puVar4 + -0x30);
    *(undefined8 *)((long)puVar4 + -0x30) = uVar22;
    *(undefined1 (*) [16])((long)puVar4 + -0x20) = auVar25;
    *(undefined1 (*) [16])((long)puVar4 + -0x10) = auVar2;
    plVar15 = *(long **)(lVar17 + 0x38);
    lVar13 = lVar17;
    if (plVar15 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar15 = *(long **)(lVar17 + 0x38);
    }
    if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar9 = func_0x03280ca0();
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    func_0x0531dbd0(lVar9,0xfffffffe);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x38) = auVar26._0_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x38),auVar26._0_8_);
      *(undefined8 *)(lVar9 + 0x48) = auVar26._8_8_;
      func_0x032809c4((undefined8 *)(lVar9 + 0x48),auVar26._8_8_);
      *(long *)(lVar9 + 0x28) = lVar12;
      func_0x032809c4((long *)(lVar9 + 0x28),lVar12);
      return lVar9;
    }
    auVar25 = func_0x03280cac();
    uVar22 = 0;
    uVar8 = 0x3d60730;
LAB_03d60730:
    puVar6 = (undefined8 *)((long)puVar5 + -0x30);
    *(undefined8 *)((long)puVar5 + -0x30) = uVar8;
    *(undefined8 *)((long)puVar5 + -0x20) = uVar22;
    *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar26;
    *(long *)((long)puVar5 + -8) = lVar12;
    plVar15 = *(long **)(lVar13 + 0x38);
    lVar12 = lVar13;
    if (plVar15 == (long *)0x0) {
      func_0x03256878(lVar13);
      plVar15 = *(long **)(lVar13 + 0x38);
    }
    if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar10 = func_0x03280ca0();
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    func_0x0531e428(lVar10,0xfffffffe);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x38) = auVar25._0_8_;
      func_0x032809c4((undefined8 *)(lVar10 + 0x38),auVar25._0_8_);
      *(undefined8 *)(lVar10 + 0x48) = auVar25._8_8_;
      func_0x032809c4((undefined8 *)(lVar10 + 0x48),auVar25._8_8_);
      *(long *)(lVar10 + 0x28) = lVar17;
      func_0x032809c4((long *)(lVar10 + 0x28),lVar17);
      return lVar10;
    }
    auVar26 = func_0x03280cac();
    uVar22 = 0;
    uVar8 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar6 + -0x30) = uVar8;
  *(undefined8 *)((long)puVar6 + -0x20) = uVar22;
  *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar25;
  *(long *)((long)puVar6 + -8) = lVar17;
  plVar15 = *(long **)(lVar12 + 0x38);
  lVar13 = lVar12;
  if (plVar15 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar15 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar17 = func_0x03280ca0();
  uVar22 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + 8);
  func_0x0531ec78(lVar17,0xfffffffe);
  if (lVar17 != 0) {
    *(undefined8 *)(lVar17 + 0x40) = auVar26._0_8_;
    func_0x032809c4((undefined8 *)(lVar17 + 0x40),auVar26._0_8_);
    *(undefined8 *)(lVar17 + 0x50) = auVar26._8_8_;
    func_0x032809c4((undefined8 *)(lVar17 + 0x50),auVar26._8_8_);
    *(long *)(lVar17 + 0x30) = lVar9;
    func_0x032809c4((long *)(lVar17 + 0x30),lVar9);
    return lVar17;
  }
  auVar25 = func_0x03280cac();
  lVar12 = auVar25._0_8_;
  *(undefined8 *)((long)puVar6 + -0x60) = 0x3d60878;
  *(undefined **)((long)puVar6 + -0x58) = puVar23;
  *(undefined8 *)((long)puVar6 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x48) = auVar26;
  *(long *)((long)puVar6 + -0x38) = lVar9;
  plVar15 = *(long **)(lVar13 + 0x38);
  if (plVar15 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar15 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar17 = func_0x03280ca0();
  puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x38) + 8);
  (*(code *)*puVar14)(lVar17,0xfffffffe);
  if (lVar17 != 0) {
    func_0x02f17738(lVar17,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0xc0,lVar12);
    func_0x02f17738(lVar17,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x100,auVar25._8_8_);
    func_0x02f17738(lVar17,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x80,uVar22);
    return lVar17;
  }
  auVar26 = func_0x03280cac();
  lVar17 = auVar26._8_8_;
  plVar15 = auVar26._0_8_;
  *(undefined8 *)((long)puVar6 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar6 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar6 + -0x80) = auVar25;
  *(long *)((long)puVar6 + -0x70) = lVar13;
  *(undefined8 *)((long)puVar6 + -0x68) = uVar22;
  puVar16 = puVar14;
  if (puVar14[7] == 0) {
    func_0x03256878(puVar14);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar15 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar17 == 0)) {
    uVar22 = func_0x03280a2c(puVar11);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,puVar14);
LAB_03d60c04:
    func_0x03281048(plVar15);
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(puVar14[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar9 = *plVar15;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13)) {
      lVar13 = *(long *)(puVar14[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar9 = *plVar15;
        bVar1 = *(byte *)(lVar9 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar14[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar9 = *plVar15;
          bVar1 = *(byte *)(lVar9 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar9 + 0x228))(plVar15,lVar17,*(undefined8 *)(lVar9 + 0x230));
          return lVar12;
        }
      }
      goto LAB_03d60c04;
    }
    lVar12 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar12 = func_0x03280b90(plVar15,lVar12);
    if (lVar12 == 0) {
      lVar12 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b68fa4(lVar12,plVar15,lVar17,*(undefined8 *)(puVar14[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar13 = *(long *)(puVar14[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
         )) {
        func_0x04b713b0(lVar12,plVar15,lVar17,*(undefined8 *)(puVar14[7] + 0x48));
        return lVar12;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar13 = *(long *)(puVar14[7] + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar9 = func_0x03280b90(plVar15,lVar13);
    if (lVar9 != 0) {
      func_0x04b66610(lVar12,lVar9,lVar17,*(undefined8 *)(puVar14[7] + 0x30));
      return lVar12;
    }
  }
  auVar25 = func_0x03281048(plVar15,lVar13);
  lVar17 = auVar25._8_8_;
  plVar15 = auVar25._0_8_;
  *(undefined8 *)((long)puVar6 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar6 + -0xb8) = lVar13;
  *(long *)((long)puVar6 + -0xb0) = lVar12;
  *(undefined8 **)((long)puVar6 + -0xa8) = puVar14;
  *(undefined1 (*) [16])((long)puVar6 + -0xa0) = auVar26;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar15 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar17 == 0)) {
    uVar22 = func_0x03280a2c(puVar11);
    uVar22 = func_0x05ac7464(uVar22,0);
    func_0x03280b7c(uVar22,puVar16);
  }
  else {
    lVar12 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar9 = *plVar15;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((bVar1 < *(byte *)(lVar12 + 0x130)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)) {
      lVar12 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar12 = func_0x03280b90(plVar15,lVar12);
      if (lVar12 != 0) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        lVar13 = *(long *)(puVar16[7] + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
        }
        lVar9 = func_0x03280b90(plVar15,lVar13);
        if (lVar9 != 0) {
          func_0x04b667e0(lVar12,lVar9,lVar17,*(undefined8 *)(puVar16[7] + 0x30));
          return lVar12;
        }
        goto LAB_03d60ee0;
      }
      lVar12 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b693d0(lVar12,plVar15,lVar17,*(undefined8 *)(puVar16[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar9 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c(lVar9);
      }
      if ((*(byte *)(lVar9 + 0x130) <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9))
      {
        func_0x04b715c8(lVar12,plVar15,lVar17,*(undefined8 *)(puVar16[7] + 0x48));
        return lVar12;
      }
    }
    else {
      lVar12 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar9 = *plVar15;
        bVar1 = *(byte *)(lVar9 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar9 = *plVar15;
          bVar1 = *(byte *)(lVar9 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
           ) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar9 + 0x228))(plVar15,lVar17,*(undefined8 *)(lVar9 + 0x230));
          return lVar12;
        }
      }
    }
  }
  func_0x03281048(plVar15);
LAB_03d60ee0:
  lVar12 = func_0x03281048(plVar15,lVar13);
  *(undefined8 *)((long)puVar6 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar6 + -0xd0) = auVar25;
  lVar13 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  func_0x03280ab0();
  if (lVar13 == 0) {
    lVar13 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar17 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    **(long **)(lVar17 + 0xb8) = lVar13;
    lVar12 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar12 + 0xb8),lVar13);
  }
  return lVar13;
}


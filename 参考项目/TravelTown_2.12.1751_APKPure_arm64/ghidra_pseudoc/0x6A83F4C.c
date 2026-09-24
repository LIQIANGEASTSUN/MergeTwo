/* Ghidra 12.1.2 native pseudocode; RVA 0x6A83F4C; Merger.MergeBoard.Logic.ToolSpawnHandler.FilterToolLevelsByProgressionOnBoard; status ok */


ulong Merger_MergeBoard_Logic_ToolSpawnHandler__FilterToolLevelsByProgressionOnBoard
                (undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long **pplVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  int extraout_w1;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  int *piVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [16];
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_60;
  undefined8 uStack_58;
  
  puVar12 = PTR_DAT_07831bc8;
  auVar27._8_8_ = unaff_x21;
  auVar27._0_8_ = unaff_x22;
  plVar24 = param_3;
  if ((bRam0000000007e2a778 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_07831bd0);
    func_0x03280a18(PTR_DAT_07831bc8);
    bRam0000000007e2a778 = 1;
  }
  lVar13 = func_0x03280ca0(*(undefined8 *)puVar12);
  func_0x06b84dbc(lVar13,0);
  puVar4 = PTR_DAT_07831bd0;
  puVar3 = PTR_DAT_07780090;
  puVar2 = PTR_DAT_07780088;
  puVar12 = PTR_DAT_07780080;
  if (lVar13 == 0) {
    auVar27 = func_0x03280cac();
    puVar12 = PTR_DAT_07831bb0;
    uStack_a0 = 0x6b84068;
    plStack_60 = param_3;
    uStack_58 = param_2;
    if ((bRam0000000007e2a777 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      bRam0000000007e2a777 = 1;
    }
    lVar13 = *(long *)puVar12;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar12;
    }
    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
    if (lVar15 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar13 = *(long *)puVar12;
      }
      uVar14 = **(undefined8 **)(lVar13 + 0xb8);
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar15,uVar14,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x18);
      *plVar16 = lVar15;
      func_0x032809c4(plVar16,lVar15);
      lVar13 = *(long *)puVar12;
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar12;
    }
    puVar2 = PTR_DAT_07780100;
    lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
    if (lVar18 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar13 = *(long *)puVar12;
      }
      uVar14 = **(undefined8 **)(lVar13 + 0xb8);
      lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar18,uVar14,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x20);
      *plVar16 = lVar18;
      func_0x032809c4(plVar16,lVar18);
    }
    lVar13 = func_0x03f372e4(auVar27._8_8_,lVar15,lVar18,*(undefined8 *)puVar2);
    plVar16 = *(long **)(auVar27._0_8_ + 0x38);
    if (plVar16 != (long *)0x0) {
      lVar15 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar25 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar20 = (undefined8 *)(lVar15 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b8427c;
          }
          uVar9 = uVar9 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar9 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
      uVar14 = (*(code *)*puVar20)(plVar16,puVar20[1]);
      if ((lVar13 != 0) &&
         (iVar8 = func_0x04a44654(lVar13,uVar14,*(undefined8 *)PTR_DAT_077800f8),
         plVar24 != (long *)0x0)) {
        lVar13 = *plVar24;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar25 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar20 = (undefined8 *)(lVar13 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_06b84300;
            }
            uVar9 = uVar9 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar9 != 0);
        }
        puVar20 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
        lVar13 = (*(code *)*puVar20)(plVar24,puVar20[1]);
        if (lVar13 != 0) {
          uVar17 = iVar8 - 1;
          uVar14 = *(undefined8 *)PTR_DAT_0777e510;
          if (*(uint *)(lVar13 + 0x18) <= uVar17) {
            func_0x057b8434(0);
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) {
            func_0x03280cac();
          }
          else if (uVar17 < *(uint *)(lVar13 + 0x18)) {
            return *(ulong *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
          }
          auVar28 = func_0x03280cb4();
          uVar17 = auVar28._8_4_;
          lVar13 = auVar28._0_8_;
          if (*(uint *)(lVar13 + 0x18) <= uVar17) {
            func_0x057b8434(0);
          }
          lVar15 = *(long *)(lVar13 + 0x10);
          if (lVar15 == 0) {
            func_0x03280cac();
          }
          else if (uVar17 < *(uint *)(lVar15 + 0x18)) {
            puVar20 = (undefined8 *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
            *puVar20 = uVar14;
            uVar9 = func_0x032809c4(puVar20,uVar14);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            return uVar9;
          }
          auVar27 = func_0x03280cb4();
          uStack_a0 = 0x414425c;
          lVar15 = *(long *)(auVar27._8_8_ + 0x20);
          lStack_98 = lVar13;
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c(lVar15);
          }
          lVar13 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x48);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c(lVar13);
          }
          lVar13 = func_0x03280b90(auVar27._0_8_,lVar13);
          if (lVar13 == 0) {
            uVar9 = (ulong)(auVar27._0_8_ == 0);
          }
          else {
            uVar9 = 1;
          }
          return uVar9;
        }
      }
    }
    func_0x03280cac();
    return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
  }
  *(undefined8 *)(lVar13 + 0x10) = param_1;
  func_0x032809c4((undefined8 *)(lVar13 + 0x10),param_1);
  *(long *)(lVar13 + 0x18) = (long)param_3;
  func_0x032809c4((long *)(lVar13 + 0x18),param_3);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
  lVar23 = 0;
  func_0x0535acb4(uVar14,lVar13,*(undefined8 *)puVar4);
  lVar13 = *(long *)puVar2;
  lVar15 = func_0x03d87e68(param_2,uVar14);
  lVar18 = *(long *)puVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (lVar15 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar9 = func_0x03280ca0();
    func_0x041e8ba0(uVar9,lVar15,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return uVar9;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar26 = func_0x03280b7c(uVar14,lVar18);
  lVar15 = auVar26._8_8_;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar9 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 0x10))(uVar9,auVar26._0_8_);
    return uVar9;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar26 = func_0x03280b7c(uVar14,lVar15);
  lVar15 = auVar26._8_8_;
  plStack_60 = (long *)0x3d60338;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar9 = func_0x03280ca0();
    func_0x0420cec8(uVar9,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    return uVar9;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar26 = func_0x03280b7c(uVar14,lVar15);
  lVar19 = auVar26._0_8_;
  lVar18 = lVar13;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  puVar12 = PTR_DAT_07779d10;
  if ((lVar19 == 0) || (puVar12 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar27 = func_0x03280b7c(uVar14,lVar13);
    uStack_a0 = 0x3d60428;
    lVar15 = lVar18;
    lStack_98 = lVar19;
    if (*(long *)(lVar18 + 0x38) == 0) {
      func_0x03256878(lVar18);
    }
    auVar26._8_8_ = auVar26._8_8_;
    auVar26._0_8_ = lStack_98;
    puVar12 = PTR_DAT_07779d10;
    if ((auVar27._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar27._8_8_ != 0)) {
      lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
      lVar18 = 0;
      puVar6 = &stack0xffffffffffffff80;
      uVar14 = uStack_a0;
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar26 = func_0x03280b7c(uVar14,lVar18);
    uStack_c0 = 0x3d6049c;
    lVar13 = lVar15;
    lStack_a8 = lVar18;
    auStack_b8 = auVar27;
    if (*(long *)(lVar15 + 0x38) == 0) {
      func_0x03256878(lVar15);
    }
    puVar12 = PTR_DAT_07779d10;
    if ((auVar26._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar12);
      uVar14 = func_0x05ac7464(uVar14,0);
      auStack_f8 = func_0x03280b7c(uVar14,lVar15);
      uStack_e0 = 0x3d60510;
      lVar19 = lVar13;
      lStack_c8 = lVar15;
      auStack_d8 = auVar26;
      if (*(long *)(lVar13 + 0x38) == 0) {
        func_0x03256878(lVar13);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auStack_f8._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auStack_f8._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))
                          (auStack_f8._0_8_,auStack_f8._8_8_,0);
        return uVar9;
      }
      uVar14 = func_0x03280a2c(puVar12);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar26 = func_0x03280b7c(uVar14,lVar13);
      uStack_110 = 0x3d60588;
      lVar18 = lVar19;
      lVar15 = lVar23;
      uStack_100 = unaff_x22;
      lStack_e8 = lVar13;
      if (*(long *)(lVar23 + 0x38) == 0) {
        func_0x03256878(lVar23);
      }
      puVar12 = PTR_DAT_07779d10;
      if ((auVar26._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar12);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar27 = func_0x03280b7c(uVar14,lVar23);
        pplVar5 = (long **)auStack_140;
        auStack_140[0] = 0x3d60608;
        lVar13 = lVar18;
        lVar22 = lVar15;
        lStack_120 = lVar19;
        lStack_118 = lVar23;
        auStack_130 = auVar26;
        if (*(long *)(lVar15 + 0x38) == 0) {
          func_0x03256878(lVar15);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar27._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar27._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 0x10))
                            (auVar27._0_8_,auVar27._8_8_,lVar18);
          return uVar9;
        }
        uVar14 = func_0x03280a2c(puVar12);
        uVar10 = func_0x05ac7464(uVar14,0);
        uVar14 = 0x3d6068c;
        auVar26 = func_0x03280b7c(uVar10,lVar15);
        goto LAB_03d6068c;
      }
      lVar13 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
      puVar7 = &uStack_e0;
      lVar18 = lStack_e8;
      unaff_x22 = uStack_100;
      uVar14 = uStack_110;
      auVar27 = auStack_f8;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
      lVar19 = 0;
      puVar7 = &uStack_a0;
      lVar18 = lStack_a8;
      uVar14 = uStack_c0;
      auVar27 = auStack_b8;
    }
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    lVar13 = 0;
    pplVar5 = &plStack_60;
    uVar14 = 0x3d603b4;
    lVar18 = 0;
LAB_03d6068c:
    puVar6 = (undefined1 *)((long)pplVar5 + -0x30);
    *(undefined8 *)((long)pplVar5 + -0x30) = uVar14;
    *(undefined1 (*) [16])((long)pplVar5 + -0x20) = auVar27;
    *(long *)((long)pplVar5 + -0x10) = lVar18;
    *(long *)((long)pplVar5 + -8) = lVar15;
    plVar24 = *(long **)(lVar22 + 0x38);
    lVar15 = lVar22;
    if (plVar24 == (long *)0x0) {
      func_0x03256878(lVar22);
      plVar24 = *(long **)(lVar22 + 0x38);
    }
    if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar9 = func_0x03280ca0();
    lVar18 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
    func_0x0531dbd0(uVar9,0xfffffffe);
    if (uVar9 != 0) {
      *(undefined8 *)(uVar9 + 0x38) = auVar26._0_8_;
      func_0x032809c4((undefined8 *)(uVar9 + 0x38),auVar26._0_8_);
      *(undefined8 *)(uVar9 + 0x48) = auVar26._8_8_;
      func_0x032809c4((undefined8 *)(uVar9 + 0x48),auVar26._8_8_);
      *(long *)(uVar9 + 0x28) = lVar13;
      func_0x032809c4((long *)(uVar9 + 0x28),lVar13);
      return uVar9;
    }
    auVar27 = func_0x03280cac();
    unaff_x22 = 0;
    uVar14 = 0x3d60730;
LAB_03d60730:
    puVar7 = (undefined8 *)(puVar6 + -0x30);
    *(undefined8 *)(puVar6 + -0x30) = uVar14;
    *(undefined8 *)(puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar6 + -0x18) = auVar26;
    *(long *)(puVar6 + -8) = lVar13;
    plVar24 = *(long **)(lVar15 + 0x38);
    lVar13 = lVar15;
    if (plVar24 == (long *)0x0) {
      func_0x03256878(lVar15);
      plVar24 = *(long **)(lVar15 + 0x38);
    }
    if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar9 = func_0x03280ca0();
    lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    func_0x0531e428(uVar9,0xfffffffe);
    if (uVar9 != 0) {
      *(undefined8 *)(uVar9 + 0x38) = auVar27._0_8_;
      func_0x032809c4((undefined8 *)(uVar9 + 0x38),auVar27._0_8_);
      *(undefined8 *)(uVar9 + 0x48) = auVar27._8_8_;
      func_0x032809c4((undefined8 *)(uVar9 + 0x48),auVar27._8_8_);
      *(long *)(uVar9 + 0x28) = lVar18;
      func_0x032809c4((long *)(uVar9 + 0x28),lVar18);
      return uVar9;
    }
    auVar26 = func_0x03280cac();
    unaff_x22 = 0;
    uVar14 = 0x3d607d4;
  }
  *(undefined8 *)((long)puVar7 + -0x30) = uVar14;
  *(undefined8 *)((long)puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar27;
  *(long *)((long)puVar7 + -8) = lVar18;
  plVar24 = *(long **)(lVar13 + 0x38);
  lVar15 = lVar13;
  if (plVar24 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar24 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar9 = func_0x03280ca0();
  uVar14 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x0531ec78(uVar9,0xfffffffe);
  if (uVar9 != 0) {
    *(undefined8 *)(uVar9 + 0x40) = auVar26._0_8_;
    func_0x032809c4((undefined8 *)(uVar9 + 0x40),auVar26._0_8_);
    *(undefined8 *)(uVar9 + 0x50) = auVar26._8_8_;
    func_0x032809c4((undefined8 *)(uVar9 + 0x50),auVar26._8_8_);
    *(long *)(uVar9 + 0x30) = lVar19;
    func_0x032809c4((long *)(uVar9 + 0x30),lVar19);
    return uVar9;
  }
  auVar27 = func_0x03280cac();
  uVar9 = auVar27._0_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x48) = auVar26;
  *(long *)((long)puVar7 + -0x38) = lVar19;
  plVar24 = *(long **)(lVar15 + 0x38);
  if (plVar24 == (long *)0x0) {
    func_0x03256878(lVar15);
    plVar24 = *(long **)(lVar15 + 0x38);
  }
  if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar11 = func_0x03280ca0();
  puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x38) + 8);
  (*(code *)*puVar20)(uVar11,0xfffffffe);
  if (uVar11 != 0) {
    func_0x02f17738(uVar11,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0xc0,uVar9);
    func_0x02f17738(uVar11,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x100,auVar27._8_8_);
    func_0x02f17738(uVar11,*(long *)(**(long **)(lVar15 + 0x38) + 0x80) + 0x80,uVar14);
    return uVar11;
  }
  auVar26 = func_0x03280cac();
  lVar13 = auVar26._8_8_;
  plVar24 = auVar26._0_8_;
  *(undefined8 *)((long)puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar7 + -0x80) = auVar27;
  *(long *)((long)puVar7 + -0x70) = lVar15;
  *(undefined8 *)((long)puVar7 + -0x68) = uVar14;
  puVar21 = puVar20;
  if (puVar20[7] == 0) {
    func_0x03256878(puVar20);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar24 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar20);
LAB_03d60c04:
    func_0x03281048(plVar24);
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(puVar20[7] + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar18 = *plVar24;
    bVar1 = *(byte *)(lVar18 + 0x130);
    if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15)) {
      lVar15 = *(long *)(puVar20[7] + 0x10);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
        lVar18 = *plVar24;
        bVar1 = *(byte *)(lVar18 + 0x130);
      }
      if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15))
      {
        lVar15 = *(long *)(puVar20[7] + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
          lVar18 = *plVar24;
          bVar1 = *(byte *)(lVar18 + 0x130);
        }
        if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(lVar18 + 0x228))(plVar24,lVar13,*(undefined8 *)(lVar18 + 0x230));
          return uVar9;
        }
      }
      goto LAB_03d60c04;
    }
    lVar15 = *(long *)(puVar20[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar15 = func_0x03280b90(plVar24,lVar15);
    if (lVar15 == 0) {
      lVar15 = *(long *)(puVar20[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) != lVar15
         )) {
        if ((*(byte *)(*(long *)(puVar20[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar9 = func_0x03280ca0();
        func_0x04b68fa4(uVar9,plVar24,lVar13,*(undefined8 *)(puVar20[7] + 0x58));
        return uVar9;
      }
      if ((*(byte *)(*(long *)(puVar20[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar9 = func_0x03280ca0();
      lVar15 = *(long *)(puVar20[7] + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c(lVar15);
      }
      if ((*(byte *)(lVar15 + 0x130) <= *(byte *)(*plVar24 + 0x130)) &&
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
         )) {
        func_0x04b713b0(uVar9,plVar24,lVar13,*(undefined8 *)(puVar20[7] + 0x48));
        return uVar9;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar20[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar9 = func_0x03280ca0();
    lVar15 = *(long *)(puVar20[7] + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c(lVar15);
    }
    lVar18 = func_0x03280b90(plVar24,lVar15);
    if (lVar18 != 0) {
      func_0x04b66610(uVar9,lVar18,lVar13,*(undefined8 *)(puVar20[7] + 0x30));
      return uVar9;
    }
  }
  auVar27 = func_0x03281048(plVar24,lVar15);
  lVar13 = auVar27._8_8_;
  plVar24 = auVar27._0_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar7 + -0xb8) = lVar15;
  *(ulong *)((long)puVar7 + -0xb0) = uVar9;
  *(undefined8 **)((long)puVar7 + -0xa8) = puVar20;
  *(undefined1 (*) [16])((long)puVar7 + -0xa0) = auVar26;
  if (puVar21[7] == 0) {
    func_0x03256878(puVar21);
  }
  puVar12 = PTR_DAT_07774b08;
  if ((plVar24 == (long *)0x0) || (puVar12 = PTR_DAT_077799b8, lVar13 == 0)) {
    uVar14 = func_0x03280a2c(puVar12);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar21);
  }
  else {
    lVar18 = *(long *)(puVar21[7] + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar23 = *plVar24;
    bVar1 = *(byte *)(lVar23 + 0x130);
    if ((bVar1 < *(byte *)(lVar18 + 0x130)) ||
       (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) != lVar18)) {
      lVar18 = *(long *)(puVar21[7] + 0x20);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      lVar18 = func_0x03280b90(plVar24,lVar18);
      if (lVar18 != 0) {
        if ((*(byte *)(*(long *)(puVar21[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar9 = func_0x03280ca0();
        lVar15 = *(long *)(puVar21[7] + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c(lVar15);
        }
        lVar18 = func_0x03280b90(plVar24,lVar15);
        if (lVar18 != 0) {
          func_0x04b667e0(uVar9,lVar18,lVar13,*(undefined8 *)(puVar21[7] + 0x30));
          return uVar9;
        }
        goto LAB_03d60ee0;
      }
      lVar18 = *(long *)(puVar21[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) != lVar18
         )) {
        if ((*(byte *)(*(long *)(puVar21[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar9 = func_0x03280ca0();
        func_0x04b693d0(uVar9,plVar24,lVar13,*(undefined8 *)(puVar21[7] + 0x58));
        return uVar9;
      }
      if ((*(byte *)(*(long *)(puVar21[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar9 = func_0x03280ca0();
      lVar18 = *(long *)(puVar21[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar24 + 0x130)) &&
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
         )) {
        func_0x04b715c8(uVar9,plVar24,lVar13,*(undefined8 *)(puVar21[7] + 0x48));
        return uVar9;
      }
    }
    else {
      lVar18 = *(long *)(puVar21[7] + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
        lVar23 = *plVar24;
        bVar1 = *(byte *)(lVar23 + 0x130);
      }
      if ((*(byte *)(lVar18 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18))
      {
        lVar18 = *(long *)(puVar21[7] + 0x10);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
          lVar23 = *plVar24;
          bVar1 = *(byte *)(lVar23 + 0x130);
        }
        if ((*(byte *)(lVar18 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(lVar23 + 0x228))(plVar24,lVar13,*(undefined8 *)(lVar23 + 0x230));
          return uVar9;
        }
      }
    }
  }
  func_0x03281048(plVar24);
LAB_03d60ee0:
  lVar13 = func_0x03281048(plVar24,lVar15);
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar7 + -0xd0) = auVar27;
  lVar15 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = func_0x0325681c();
  }
  uVar9 = **(ulong **)(lVar15 + 0xb8);
  func_0x03280ab0();
  if (uVar9 == 0) {
    lVar15 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    uVar9 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar15 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = func_0x0325681c();
    }
    **(ulong **)(lVar15 + 0xb8) = uVar9;
    lVar13 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar13 + 0xb8),uVar9);
  }
  return uVar9;
}


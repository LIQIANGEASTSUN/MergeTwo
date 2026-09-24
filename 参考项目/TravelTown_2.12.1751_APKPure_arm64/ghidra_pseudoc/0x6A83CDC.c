/* Ghidra 12.1.2 native pseudocode; RVA 0x6A83CDC; Merger.MergeBoard.Logic.ToolSpawnHandler.SelectRandomWeightedTool; status ok */


ulong Merger_MergeBoard_Logic_ToolSpawnHandler__SelectRandomWeightedTool
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long **pplVar9;
  undefined **ppuVar10;
  code **ppcVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  int extraout_w1;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  long *plVar28;
  long lVar29;
  undefined8 unaff_x23;
  undefined *puVar30;
  code *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [16];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long *plStack_140;
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  puVar30 = PTR_DAT_07831bb0;
  if ((bRam0000000007e2a776 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07831bb8);
    func_0x03280a18(PTR_DAT_07831bc0);
    func_0x03280a18(PTR_DAT_07831bb0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    bRam0000000007e2a776 = 1;
  }
  uVar14 = Merger_MergeBoard_Logic_ToolSpawnHandler__GetFilteredTools(param_1,param_2,param_3);
  uVar15 = Merger_MergeBoard_Logic_ToolSpawnHandler__CalculateCurrentToolAmounts(param_1,param_3);
  Merger_MergeBoard_Logic_ToolSpawnHandler__ApplyMetagameWeightBoosts(param_1,uVar14,uVar15);
  lVar16 = *(long *)puVar30;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar16 = *(long *)puVar30;
  }
  lVar29 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar29 == 0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar30;
    }
    uVar15 = **(undefined8 **)(lVar16 + 0xb8);
    lVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar29,uVar15,*(undefined8 *)PTR_DAT_07831bb8,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar30 + 0xb8) + 8);
    *plVar17 = lVar29;
    func_0x032809c4(plVar17,lVar29);
    lVar16 = *(long *)puVar30;
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar16 = *(long *)puVar30;
  }
  puVar7 = PTR_DAT_077800e0;
  plVar17 = *(long **)(*(long *)(lVar16 + 0xb8) + 0x10);
  if (plVar17 == (long *)0x0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar30;
    }
    unaff_x23 = **(undefined8 **)(lVar16 + 0xb8);
    plVar17 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar17,unaff_x23,*(undefined8 *)PTR_DAT_07831bc0,0);
    plVar18 = (long *)(*(long *)(*(long *)puVar30 + 0xb8) + 0x10);
    *plVar18 = (long)plVar17;
    func_0x032809c4(plVar18,plVar17);
  }
  plVar18 = plVar17;
  lVar16 = func_0x03f36e88(uVar14,lVar29,plVar17,*(undefined8 *)puVar7);
  plVar28 = *(long **)(param_1 + 0x38);
  if (plVar28 != (long *)0x0) {
    lVar25 = *plVar28;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar19 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06b83f10;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    plVar18 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar28);
LAB_06b83f10:
    plVar28 = (long *)(*(code *)*puVar19)(plVar28,puVar19[1]);
    if (lVar16 != 0) {
      lVar25 = *(long *)PTR_DAT_077800d8;
      lVar29 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      lVar29 = func_0x03280ca0(lVar29);
      func_0x04c1b8d8(lVar29,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0xa8));
      if ((plVar28 != (long *)0x0) &&
         (iVar12 = (**(code **)(*plVar28 + 0x1a8))
                             (plVar28,*(undefined4 *)(lVar16 + 0x18),
                              *(undefined8 *)(*plVar28 + 0x1b0)), lVar29 != 0)) {
        *(int *)(lVar29 + 0x10) = iVar12 + 1;
        uVar14 = *(undefined8 *)(lVar16 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar15 = func_0x03280ca0();
        lVar16 = *(long *)(*(long *)(lVar25 + 0x20) + 0xc0);
        func_0x05355fbc(uVar15,lVar29,*(undefined8 *)(lVar16 + 0xb0),*(undefined8 *)(lVar16 + 0xc0))
        ;
        lVar16 = func_0x03d4294c(uVar14,uVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 200));
        if (lVar16 != 0) {
          return (ulong)*(uint *)(lVar16 + 0x10);
        }
      }
      auVar34 = func_0x03280cac();
      lVar16 = *(long *)(*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      uVar14 = func_0x03280ca0(lVar16);
      func_0x04143c38(uVar14,*(undefined8 *)
                              (*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar19 = (undefined8 *)(auVar34._0_8_ + 0x10);
      *puVar19 = uVar14;
      func_0x032809c4(puVar19,uVar14);
      return auVar34._0_8_;
    }
  }
  auVar34 = func_0x03280cac();
  puVar7 = PTR_DAT_07831bc8;
  uVar14 = auVar34._0_8_;
  auStack_90._0_8_ = Merger_MergeBoard_Logic_ToolSpawnHandler__FilterToolLevelsByProgressionOnBoard;
  plVar28 = plVar18;
  if ((bRam0000000007e2a778 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_07831bd0);
    func_0x03280a18(PTR_DAT_07831bc8);
    bRam0000000007e2a778 = 1;
  }
  lVar16 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06b84dbc(lVar16,0);
  puVar8 = PTR_DAT_07831bd0;
  puVar6 = PTR_DAT_07780090;
  puVar5 = PTR_DAT_07780088;
  puVar4 = PTR_DAT_07780080;
  if (lVar16 == 0) {
    auVar32 = func_0x03280cac();
    puVar4 = PTR_DAT_07831bb0;
    pcStack_e0 = Merger_MergeBoard_Logic_ToolSpawnHandler__GenerateRandomToolItemFromWeights;
    puStack_c0 = puVar30;
    puStack_b8 = puVar7;
    auStack_b0._0_8_ = lVar16;
    plStack_a0 = plVar18;
    if ((bRam0000000007e2a777 & 1) == 0) {
      auStack_b0._8_8_ = uVar14;
      uStack_98 = auVar34._8_8_;
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      auVar34._8_8_ = uStack_98;
      auVar34._0_8_ = auStack_b0._8_8_;
      bRam0000000007e2a777 = 1;
    }
    uStack_98 = auVar34._8_8_;
    auStack_b0._8_8_ = auVar34._0_8_;
    lVar16 = *(long *)puVar4;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar34._8_8_ = uStack_98;
      auVar34._0_8_ = auStack_b0._8_8_;
      lVar16 = *(long *)puVar4;
    }
    uStack_98 = auVar34._8_8_;
    auStack_b0._8_8_ = auVar34._0_8_;
    lVar29 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
    if (lVar29 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar34._8_8_ = uStack_98;
        auVar34._0_8_ = auStack_b0._8_8_;
        lVar16 = *(long *)puVar4;
      }
      uStack_98 = auVar34._8_8_;
      auStack_b0._8_8_ = auVar34._0_8_;
      uVar14 = **(undefined8 **)(lVar16 + 0xb8);
      lVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar29,uVar14,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar17 = lVar29;
      func_0x032809c4(plVar17,lVar29);
      auVar34._8_8_ = uStack_98;
      auVar34._0_8_ = auStack_b0._8_8_;
      lVar16 = *(long *)puVar4;
    }
    uStack_98 = auVar34._8_8_;
    auStack_b0._8_8_ = auVar34._0_8_;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar34._8_8_ = uStack_98;
      auVar34._0_8_ = auStack_b0._8_8_;
      lVar16 = *(long *)puVar4;
    }
    puVar30 = PTR_DAT_07780100;
    uStack_98 = auVar34._8_8_;
    auStack_b0._8_8_ = auVar34._0_8_;
    lVar25 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
    if (lVar25 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar34._8_8_ = uStack_98;
        auVar34._0_8_ = auStack_b0._8_8_;
        lVar16 = *(long *)puVar4;
      }
      uStack_98 = auVar34._8_8_;
      auStack_b0._8_8_ = auVar34._0_8_;
      uVar14 = **(undefined8 **)(lVar16 + 0xb8);
      lVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar25,uVar14,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar17 = lVar25;
      func_0x032809c4(plVar17,lVar25);
      auVar34._8_8_ = uStack_98;
      auVar34._0_8_ = auStack_b0._8_8_;
    }
    uStack_98 = auVar34._8_8_;
    auStack_b0._8_8_ = auVar34._0_8_;
    lVar16 = func_0x03f372e4(auVar32._8_8_,lVar29,lVar25,*(undefined8 *)puVar30);
    plVar17 = *(long **)(auVar32._0_8_ + 0x38);
    if (plVar17 != (long *)0x0) {
      lVar29 = *plVar17;
      uVar26 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar19 = (undefined8 *)(lVar29 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_06b8427c;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
      uVar14 = (*(code *)*puVar19)(plVar17,puVar19[1]);
      if ((lVar16 != 0) &&
         (iVar12 = func_0x04a44654(lVar16,uVar14,*(undefined8 *)PTR_DAT_077800f8),
         plVar28 != (long *)0x0)) {
        lVar16 = *plVar28;
        uVar26 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar19 = (undefined8 *)(lVar16 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_06b84300;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar19 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
        puVar30 = (undefined *)(*(code *)*puVar19)(plVar28,puVar19[1]);
        if (puVar30 != (undefined *)0x0) {
          uVar2 = iVar12 - 1;
          uVar14 = *(undefined8 *)PTR_DAT_0777e510;
          auStack_b0._0_8_ = pcStack_e0;
          if (*(uint *)(puVar30 + 0x18) <= uVar2) {
            func_0x057b8434(0);
          }
          lVar16 = *(long *)(puVar30 + 0x10);
          if (lVar16 == 0) {
            func_0x03280cac();
          }
          else if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            return *(ulong *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
          }
          auVar35 = func_0x03280cb4();
          uVar20 = auVar35._8_4_;
          lVar16 = auVar35._0_8_;
          puStack_c0 = puVar30;
          puStack_b8 = (undefined *)(ulong)uVar2;
          if (*(uint *)(lVar16 + 0x18) <= uVar20) {
            func_0x057b8434(0);
          }
          lVar29 = *(long *)(lVar16 + 0x10);
          if (lVar29 == 0) {
            func_0x03280cac();
          }
          else if (uVar20 < *(uint *)(lVar29 + 0x18)) {
            puVar19 = (undefined8 *)(lVar29 + (long)(int)uVar20 * 8 + 0x20);
            *puVar19 = uVar14;
            uVar26 = func_0x032809c4(puVar19,uVar14);
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            return uVar26;
          }
          auVar34 = func_0x03280cb4();
          pcStack_e0 = (code *)0x414425c;
          lVar29 = *(long *)(auVar34._8_8_ + 0x20);
          lStack_d8 = lVar16;
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            lVar29 = func_0x0325681c(lVar29);
          }
          lVar16 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x48);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
          }
          lVar16 = func_0x03280b90(auVar34._0_8_,lVar16);
          if (lVar16 == 0) {
            uVar26 = (ulong)(auVar34._0_8_ == 0);
          }
          else {
            uVar26 = 1;
          }
          return uVar26;
        }
      }
    }
    func_0x03280cac();
    return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
  }
  *(undefined8 *)(lVar16 + 0x10) = uVar14;
  func_0x032809c4((undefined8 *)(lVar16 + 0x10),uVar14);
  *(long *)(lVar16 + 0x18) = (long)plVar18;
  func_0x032809c4((long *)(lVar16 + 0x18),plVar18);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar6);
  lVar24 = 0;
  func_0x0535acb4(uVar14,lVar16,*(undefined8 *)puVar8);
  lVar16 = *(long *)puVar5;
  lVar25 = func_0x03d87e68(auVar34._8_8_,uVar14);
  lVar21 = *(long *)puVar4;
  if (*(long *)(lVar21 + 0x38) == 0) {
    func_0x03256878(lVar21);
  }
  if (lVar25 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    func_0x041e8ba0(uVar26,lVar25,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x10));
    return uVar26;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar34 = func_0x03280b7c(uVar14,lVar21);
  lVar25 = auVar34._8_8_;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))(uVar26,auVar34._0_8_);
    return uVar26;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar32 = func_0x03280b7c(uVar14,lVar25);
  lVar25 = auVar32._8_8_;
  plStack_a0 = (long *)0x3d60338;
  auStack_90 = auVar34;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar32._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    func_0x0420cec8(uVar26,auVar32._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return uVar26;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar33 = func_0x03280b7c(uVar14,lVar25);
  lVar21 = auVar33._0_8_;
  puStack_c0 = (undefined *)0x3d603b4;
  lVar25 = lVar16;
  puStack_b8 = (undefined *)lVar29;
  auStack_b0 = auVar32;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  auVar32._8_8_ = puStack_b8;
  auVar32._0_8_ = plVar17;
  puVar30 = PTR_DAT_07779d10;
  if ((lVar21 == 0) || (puVar30 = PTR_DAT_07779d18, auVar33._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar30);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar34 = func_0x03280b7c(uVar14,lVar16);
    pcStack_e0 = (code *)0x3d60428;
    lVar29 = lVar25;
    lStack_d8 = lVar21;
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
    auVar33._8_8_ = auVar33._8_8_;
    auVar33._0_8_ = lStack_d8;
    puVar30 = PTR_DAT_07779d10;
    if ((auVar34._0_8_ != 0) && (puVar30 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
      lVar29 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      lVar25 = 0;
      ppuVar10 = &puStack_c0;
      pcVar31 = pcStack_e0;
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar30);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar33 = func_0x03280b7c(uVar14,lVar25);
    uStack_100 = 0x3d6049c;
    lVar16 = lVar29;
    lStack_e8 = lVar25;
    auStack_f8 = auVar34;
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
    puVar30 = PTR_DAT_07779d10;
    if ((auVar33._0_8_ == 0) || (puVar30 = PTR_DAT_07779d18, auVar33._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar30);
      uVar14 = func_0x05ac7464(uVar14,0);
      auStack_138 = func_0x03280b7c(uVar14,lVar29);
      uStack_120 = 0x3d60510;
      lVar21 = lVar16;
      lStack_108 = lVar29;
      auStack_118 = auVar33;
      if (*(long *)(lVar16 + 0x38) == 0) {
        func_0x03256878(lVar16);
      }
      puVar30 = PTR_DAT_07779d10;
      if ((auStack_138._0_8_ != 0) && (puVar30 = PTR_DAT_07779d18, auStack_138._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 8))
                           (auStack_138._0_8_,auStack_138._8_8_,0);
        return uVar26;
      }
      uVar14 = func_0x03280a2c(puVar30);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar33 = func_0x03280b7c(uVar14,lVar16);
      uStack_150 = 0x3d60588;
      lVar29 = lVar21;
      lVar25 = lVar24;
      plStack_140 = plVar17;
      lStack_128 = lVar16;
      if (*(long *)(lVar24 + 0x38) == 0) {
        func_0x03256878(lVar24);
      }
      puVar30 = PTR_DAT_07779d10;
      if ((auVar33._0_8_ == 0) || (puVar30 = PTR_DAT_07779d18, auVar33._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar30);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar32 = func_0x03280b7c(uVar14,lVar24);
        auVar3._8_8_ = lVar25;
        auVar3._0_8_ = lVar29;
        pplVar9 = (long **)auStack_180;
        auStack_180[0] = 0x3d60608;
        lVar16 = lVar29;
        lVar23 = lVar25;
        lStack_160 = lVar21;
        lStack_158 = lVar24;
        auStack_170 = auVar33;
        if (*(long *)(lVar25 + 0x38) == 0) {
          func_0x03256878(lVar25);
        }
        puVar30 = PTR_DAT_07779d10;
        if ((auVar32._0_8_ != 0) && (puVar30 = PTR_DAT_07779d18, auVar32._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))
                             (auVar32._0_8_,auVar32._8_8_,lVar29);
          return uVar26;
        }
        uVar14 = func_0x03280a2c(puVar30);
        uVar14 = func_0x05ac7464(uVar14,0);
        puVar30 = (undefined *)0x3d6068c;
        auVar33 = func_0x03280b7c(uVar14,lVar25);
        goto LAB_03d6068c;
      }
      lVar16 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
      ppcVar11 = (code **)&uStack_120;
      lVar25 = lStack_128;
      plVar17 = plStack_140;
      uVar14 = uStack_150;
      auVar34 = auStack_138;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      lVar21 = 0;
      ppcVar11 = &pcStack_e0;
      lVar25 = lStack_e8;
      uVar14 = uStack_100;
      auVar34 = auStack_f8;
    }
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    lVar16 = 0;
    pplVar9 = &plStack_a0;
    puVar30 = puStack_c0;
    auVar3 = auStack_b0;
LAB_03d6068c:
    ppuVar10 = (undefined **)((long)pplVar9 + -0x30);
    *(undefined **)((long)pplVar9 + -0x30) = puVar30;
    *(undefined1 (*) [16])((long)pplVar9 + -0x20) = auVar32;
    *(undefined1 (*) [16])((long)pplVar9 + -0x10) = auVar3;
    plVar17 = *(long **)(lVar23 + 0x38);
    lVar29 = lVar23;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar23);
      plVar17 = *(long **)(lVar23 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    lVar25 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
    func_0x0531dbd0(uVar26,0xfffffffe);
    if (uVar26 != 0) {
      *(undefined8 *)(uVar26 + 0x38) = auVar33._0_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x38),auVar33._0_8_);
      *(undefined8 *)(uVar26 + 0x48) = auVar33._8_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x48),auVar33._8_8_);
      *(long *)(uVar26 + 0x28) = lVar16;
      func_0x032809c4((long *)(uVar26 + 0x28),lVar16);
      return uVar26;
    }
    auVar34 = func_0x03280cac();
    plVar17 = (long *)0x0;
    pcVar31 = (code *)0x3d60730;
LAB_03d60730:
    ppcVar11 = (code **)((long)ppuVar10 + -0x30);
    *(code **)((long)ppuVar10 + -0x30) = pcVar31;
    *(long **)((long)ppuVar10 + -0x20) = plVar17;
    *(undefined1 (*) [16])((long)ppuVar10 + -0x18) = auVar33;
    *(long *)((long)ppuVar10 + -8) = lVar16;
    plVar17 = *(long **)(lVar29 + 0x38);
    lVar16 = lVar29;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(lVar29);
      plVar17 = *(long **)(lVar29 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    lVar21 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    func_0x0531e428(uVar26,0xfffffffe);
    if (uVar26 != 0) {
      *(undefined8 *)(uVar26 + 0x38) = auVar34._0_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x38),auVar34._0_8_);
      *(undefined8 *)(uVar26 + 0x48) = auVar34._8_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x48),auVar34._8_8_);
      *(long *)(uVar26 + 0x28) = lVar25;
      func_0x032809c4((long *)(uVar26 + 0x28),lVar25);
      return uVar26;
    }
    auVar33 = func_0x03280cac();
    plVar17 = (long *)0x0;
    uVar14 = 0x3d607d4;
  }
  *(undefined8 *)((long)ppcVar11 + -0x30) = uVar14;
  *(long **)((long)ppcVar11 + -0x20) = plVar17;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x18) = auVar34;
  *(long *)((long)ppcVar11 + -8) = lVar25;
  plVar17 = *(long **)(lVar16 + 0x38);
  lVar29 = lVar16;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar16);
    plVar17 = *(long **)(lVar16 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar26 = func_0x03280ca0();
  uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
  func_0x0531ec78(uVar26,0xfffffffe);
  if (uVar26 != 0) {
    *(undefined8 *)(uVar26 + 0x40) = auVar33._0_8_;
    func_0x032809c4((undefined8 *)(uVar26 + 0x40),auVar33._0_8_);
    *(undefined8 *)(uVar26 + 0x50) = auVar33._8_8_;
    func_0x032809c4((undefined8 *)(uVar26 + 0x50),auVar33._8_8_);
    *(long *)(uVar26 + 0x30) = lVar21;
    func_0x032809c4((long *)(uVar26 + 0x30),lVar21);
    return uVar26;
  }
  auVar34 = func_0x03280cac();
  uVar26 = auVar34._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)ppcVar11 + -0x58) = unaff_x23;
  *(undefined8 *)((long)ppcVar11 + -0x50) = 0;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x48) = auVar33;
  *(long *)((long)ppcVar11 + -0x38) = lVar21;
  plVar17 = *(long **)(lVar29 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(lVar29);
    plVar17 = *(long **)(lVar29 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar13 = func_0x03280ca0();
  puVar19 = *(undefined8 **)(*(long *)(lVar29 + 0x38) + 8);
  (*(code *)*puVar19)(uVar13,0xfffffffe);
  if (uVar13 != 0) {
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar29 + 0x38) + 0x80) + 0xc0,uVar26);
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar29 + 0x38) + 0x80) + 0x100,auVar34._8_8_);
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar29 + 0x38) + 0x80) + 0x80,uVar14);
    return uVar13;
  }
  auVar32 = func_0x03280cac();
  lVar16 = auVar32._8_8_;
  plVar17 = auVar32._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)ppcVar11 + -0x88) = 0;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x80) = auVar34;
  *(long *)((long)ppcVar11 + -0x70) = lVar29;
  *(undefined8 *)((long)ppcVar11 + -0x68) = uVar14;
  puVar22 = puVar19;
  if (puVar19[7] == 0) {
    func_0x03256878(puVar19);
  }
  puVar30 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar30 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar14 = func_0x03280a2c(puVar30);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar19);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar29 = 0;
  }
  else {
    lVar29 = *(long *)(puVar19[7] + 0x10);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    lVar25 = *plVar17;
    bVar1 = *(byte *)(lVar25 + 0x130);
    if ((*(byte *)(lVar29 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) == lVar29)) {
      lVar29 = *(long *)(puVar19[7] + 0x10);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
        lVar25 = *plVar17;
        bVar1 = *(byte *)(lVar25 + 0x130);
      }
      if ((*(byte *)(lVar29 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) == lVar29))
      {
        lVar29 = *(long *)(puVar19[7] + 0x10);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
          lVar25 = *plVar17;
          bVar1 = *(byte *)(lVar25 + 0x130);
        }
        if ((*(byte *)(lVar29 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) == lVar29
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar26 = (**(code **)(lVar25 + 0x228))(plVar17,lVar16,*(undefined8 *)(lVar25 + 0x230));
          return uVar26;
        }
      }
      goto LAB_03d60c04;
    }
    lVar29 = *(long *)(puVar19[7] + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar29 = func_0x03280b90(plVar17,lVar29);
    if (lVar29 == 0) {
      lVar29 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar29 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) != lVar29
         )) {
        if ((*(byte *)(*(long *)(puVar19[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar26 = func_0x03280ca0();
        func_0x04b68fa4(uVar26,plVar17,lVar16,*(undefined8 *)(puVar19[7] + 0x58));
        return uVar26;
      }
      if ((*(byte *)(*(long *)(puVar19[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar26 = func_0x03280ca0();
      lVar29 = *(long *)(puVar19[7] + 0x38);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      if ((*(byte *)(lVar29 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar29 + 0x130) * 8 + -8) == lVar29
         )) {
        func_0x04b713b0(uVar26,plVar17,lVar16,*(undefined8 *)(puVar19[7] + 0x48));
        return uVar26;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar19[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    lVar29 = *(long *)(puVar19[7] + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar25 = func_0x03280b90(plVar17,lVar29);
    if (lVar25 != 0) {
      func_0x04b66610(uVar26,lVar25,lVar16,*(undefined8 *)(puVar19[7] + 0x30));
      return uVar26;
    }
  }
  auVar34 = func_0x03281048(plVar17,lVar29);
  lVar16 = auVar34._8_8_;
  plVar17 = auVar34._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0xc0) = 0x3d60c18;
  *(long *)((long)ppcVar11 + -0xb8) = lVar29;
  *(ulong *)((long)ppcVar11 + -0xb0) = uVar26;
  *(undefined8 **)((long)ppcVar11 + -0xa8) = puVar19;
  *(undefined1 (*) [16])((long)ppcVar11 + -0xa0) = auVar32;
  if (puVar22[7] == 0) {
    func_0x03256878(puVar22);
  }
  puVar30 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar30 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar14 = func_0x03280a2c(puVar30);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar22);
  }
  else {
    lVar25 = *(long *)(puVar22[7] + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    lVar21 = *plVar17;
    bVar1 = *(byte *)(lVar21 + 0x130);
    if ((bVar1 < *(byte *)(lVar25 + 0x130)) ||
       (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) != lVar25)) {
      lVar25 = *(long *)(puVar22[7] + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      lVar25 = func_0x03280b90(plVar17,lVar25);
      if (lVar25 != 0) {
        if ((*(byte *)(*(long *)(puVar22[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar26 = func_0x03280ca0();
        lVar29 = *(long *)(puVar22[7] + 0x20);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = func_0x0325681c(lVar29);
        }
        lVar25 = func_0x03280b90(plVar17,lVar29);
        if (lVar25 != 0) {
          func_0x04b667e0(uVar26,lVar25,lVar16,*(undefined8 *)(puVar22[7] + 0x30));
          return uVar26;
        }
        goto LAB_03d60ee0;
      }
      lVar25 = *(long *)(puVar22[7] + 0x38);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar25 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) != lVar25
         )) {
        if ((*(byte *)(*(long *)(puVar22[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar26 = func_0x03280ca0();
        func_0x04b693d0(uVar26,plVar17,lVar16,*(undefined8 *)(puVar22[7] + 0x58));
        return uVar26;
      }
      if ((*(byte *)(*(long *)(puVar22[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar26 = func_0x03280ca0();
      lVar25 = *(long *)(puVar22[7] + 0x38);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
      }
      if ((*(byte *)(lVar25 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25
         )) {
        func_0x04b715c8(uVar26,plVar17,lVar16,*(undefined8 *)(puVar22[7] + 0x48));
        return uVar26;
      }
    }
    else {
      lVar25 = *(long *)(puVar22[7] + 0x10);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c(lVar25);
        lVar21 = *plVar17;
        bVar1 = *(byte *)(lVar21 + 0x130);
      }
      if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25))
      {
        lVar25 = *(long *)(puVar22[7] + 0x10);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
          lVar21 = *plVar17;
          bVar1 = *(byte *)(lVar21 + 0x130);
        }
        if ((*(byte *)(lVar25 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar25 + 0x130) * 8 + -8) == lVar25
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar26 = (**(code **)(lVar21 + 0x228))(plVar17,lVar16,*(undefined8 *)(lVar21 + 0x230));
          return uVar26;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar16 = func_0x03281048(plVar17,lVar29);
  *(undefined8 *)((long)ppcVar11 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)ppcVar11 + -0xd0) = auVar34;
  lVar29 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  uVar26 = **(ulong **)(lVar29 + 0xb8);
  func_0x03280ab0();
  if (uVar26 == 0) {
    lVar29 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    uVar26 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar29 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    **(ulong **)(lVar29 + 0xb8) = uVar26;
    lVar16 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar16 + 0xb8),uVar26);
  }
  return uVar26;
}


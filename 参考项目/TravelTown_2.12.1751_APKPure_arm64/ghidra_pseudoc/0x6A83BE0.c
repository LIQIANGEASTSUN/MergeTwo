/* Ghidra 12.1.2 native pseudocode; RVA 0x6A83BE0; Merger.MergeBoard.Logic.ToolSpawnHandler.GetToolToSpawn; status ok */


/* WARNING: Possible PIC construction at 0x06b83c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b83c40) */
/* WARNING: Removing unreachable block (ram,0x06b83c48) */
/* WARNING: Removing unreachable block (ram,0x06b83cd8) */
/* WARNING: Removing unreachable block (ram,0x06b83c68) */
/* WARNING: Removing unreachable block (ram,0x06b83c90) */
/* WARNING: Removing unreachable block (ram,0x06b83ca0) */
/* WARNING: Removing unreachable block (ram,0x06b83cb4) */

ulong Merger_MergeBoard_Logic_ToolSpawnHandler__GetToolToSpawn
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
  undefined8 uVar30;
  undefined *puVar31;
  code *pcVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined8 auStack_1c0 [2];
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long *plStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  long lStack_128;
  code *pcStack_120;
  long lStack_118;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [16];
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  
  uVar30 = 0x7e2a000;
  if ((bRam0000000007e2a775 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831ba8);
    func_0x03280a18(PTR_DAT_07810720);
    bRam0000000007e2a775 = 1;
  }
  puVar31 = PTR_DAT_07831bb0;
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
  uVar14 = Merger_MergeBoard_Logic_ToolSpawnHandler__GetFilteredTools(param_1,param_3,param_2);
  uVar15 = Merger_MergeBoard_Logic_ToolSpawnHandler__CalculateCurrentToolAmounts(param_1,param_2);
  Merger_MergeBoard_Logic_ToolSpawnHandler__ApplyMetagameWeightBoosts(param_1,uVar14,uVar15);
  lVar16 = *(long *)puVar31;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar16 = *(long *)puVar31;
  }
  lVar29 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar29 == 0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar31;
    }
    uVar15 = **(undefined8 **)(lVar16 + 0xb8);
    lVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar29,uVar15,*(undefined8 *)PTR_DAT_07831bb8,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar31 + 0xb8) + 8);
    *plVar17 = lVar29;
    func_0x032809c4(plVar17,lVar29);
    lVar16 = *(long *)puVar31;
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar16 = *(long *)puVar31;
  }
  puVar7 = PTR_DAT_077800e0;
  plVar17 = *(long **)(*(long *)(lVar16 + 0xb8) + 0x10);
  if (plVar17 == (long *)0x0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar16 = *(long *)puVar31;
    }
    uVar30 = **(undefined8 **)(lVar16 + 0xb8);
    plVar17 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar17,uVar30,*(undefined8 *)PTR_DAT_07831bc0,0);
    plVar18 = (long *)(*(long *)(*(long *)puVar31 + 0xb8) + 0x10);
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
        uVar30 = *(undefined8 *)(lVar16 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar14 = func_0x03280ca0();
        lVar16 = *(long *)(*(long *)(lVar25 + 0x20) + 0xc0);
        func_0x05355fbc(uVar14,lVar29,*(undefined8 *)(lVar16 + 0xb0),*(undefined8 *)(lVar16 + 0xc0))
        ;
        lVar16 = func_0x03d4294c(uVar30,uVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 200));
        if (lVar16 != 0) {
          return (ulong)*(uint *)(lVar16 + 0x10);
        }
      }
      auVar35 = func_0x03280cac();
      lVar16 = *(long *)(*(long *)(*(long *)(auVar35._8_8_ + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      uVar30 = func_0x03280ca0(lVar16);
      func_0x04143c38(uVar30,*(undefined8 *)
                              (*(long *)(*(long *)(auVar35._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar19 = (undefined8 *)(auVar35._0_8_ + 0x10);
      *puVar19 = uVar30;
      func_0x032809c4(puVar19,uVar30);
      return auVar35._0_8_;
    }
  }
  auVar35 = func_0x03280cac();
  puVar7 = PTR_DAT_07831bc8;
  uVar14 = auVar35._0_8_;
  auStack_d0._0_8_ = Merger_MergeBoard_Logic_ToolSpawnHandler__FilterToolLevelsByProgressionOnBoard;
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
    auVar33 = func_0x03280cac();
    puVar4 = PTR_DAT_07831bb0;
    pcStack_120 = Merger_MergeBoard_Logic_ToolSpawnHandler__GenerateRandomToolItemFromWeights;
    puStack_100 = puVar31;
    puStack_f8 = puVar7;
    auStack_f0._0_8_ = lVar16;
    plStack_e0 = plVar18;
    if ((bRam0000000007e2a777 & 1) == 0) {
      auStack_f0._8_8_ = uVar14;
      uStack_d8 = auVar35._8_8_;
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_07831bd8);
      func_0x03280a18(PTR_DAT_07831be0);
      func_0x03280a18(PTR_DAT_07831bb0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      auVar35._8_8_ = uStack_d8;
      auVar35._0_8_ = auStack_f0._8_8_;
      bRam0000000007e2a777 = 1;
    }
    uStack_d8 = auVar35._8_8_;
    auStack_f0._8_8_ = auVar35._0_8_;
    lVar16 = *(long *)puVar4;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar35._8_8_ = uStack_d8;
      auVar35._0_8_ = auStack_f0._8_8_;
      lVar16 = *(long *)puVar4;
    }
    uStack_d8 = auVar35._8_8_;
    auStack_f0._8_8_ = auVar35._0_8_;
    lVar29 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
    if (lVar29 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar35._8_8_ = uStack_d8;
        auVar35._0_8_ = auStack_f0._8_8_;
        lVar16 = *(long *)puVar4;
      }
      uStack_d8 = auVar35._8_8_;
      auStack_f0._8_8_ = auVar35._0_8_;
      uVar30 = **(undefined8 **)(lVar16 + 0xb8);
      lVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar29,uVar30,*(undefined8 *)PTR_DAT_07831bd8,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar17 = lVar29;
      func_0x032809c4(plVar17,lVar29);
      auVar35._8_8_ = uStack_d8;
      auVar35._0_8_ = auStack_f0._8_8_;
      lVar16 = *(long *)puVar4;
    }
    uStack_d8 = auVar35._8_8_;
    auStack_f0._8_8_ = auVar35._0_8_;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar35._8_8_ = uStack_d8;
      auVar35._0_8_ = auStack_f0._8_8_;
      lVar16 = *(long *)puVar4;
    }
    puVar31 = PTR_DAT_07780100;
    uStack_d8 = auVar35._8_8_;
    auStack_f0._8_8_ = auVar35._0_8_;
    lVar25 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
    if (lVar25 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar35._8_8_ = uStack_d8;
        auVar35._0_8_ = auStack_f0._8_8_;
        lVar16 = *(long *)puVar4;
      }
      uStack_d8 = auVar35._8_8_;
      auStack_f0._8_8_ = auVar35._0_8_;
      uVar30 = **(undefined8 **)(lVar16 + 0xb8);
      lVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar25,uVar30,*(undefined8 *)PTR_DAT_07831be0,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar17 = lVar25;
      func_0x032809c4(plVar17,lVar25);
      auVar35._8_8_ = uStack_d8;
      auVar35._0_8_ = auStack_f0._8_8_;
    }
    uStack_d8 = auVar35._8_8_;
    auStack_f0._8_8_ = auVar35._0_8_;
    lVar16 = func_0x03f372e4(auVar33._8_8_,lVar29,lVar25,*(undefined8 *)puVar31);
    plVar17 = *(long **)(auVar33._0_8_ + 0x38);
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
      uVar30 = (*(code *)*puVar19)(plVar17,puVar19[1]);
      if ((lVar16 != 0) &&
         (iVar12 = func_0x04a44654(lVar16,uVar30,*(undefined8 *)PTR_DAT_077800f8),
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
        puVar31 = (undefined *)(*(code *)*puVar19)(plVar28,puVar19[1]);
        if (puVar31 != (undefined *)0x0) {
          uVar2 = iVar12 - 1;
          uVar30 = *(undefined8 *)PTR_DAT_0777e510;
          auStack_f0._0_8_ = pcStack_120;
          if (*(uint *)(puVar31 + 0x18) <= uVar2) {
            func_0x057b8434(0);
          }
          lVar16 = *(long *)(puVar31 + 0x10);
          if (lVar16 == 0) {
            func_0x03280cac();
          }
          else if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            return *(ulong *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
          }
          auVar36 = func_0x03280cb4();
          uVar20 = auVar36._8_4_;
          lVar16 = auVar36._0_8_;
          puStack_100 = puVar31;
          puStack_f8 = (undefined *)(ulong)uVar2;
          if (*(uint *)(lVar16 + 0x18) <= uVar20) {
            func_0x057b8434(0);
          }
          lVar29 = *(long *)(lVar16 + 0x10);
          if (lVar29 == 0) {
            func_0x03280cac();
          }
          else if (uVar20 < *(uint *)(lVar29 + 0x18)) {
            puVar19 = (undefined8 *)(lVar29 + (long)(int)uVar20 * 8 + 0x20);
            *puVar19 = uVar30;
            uVar26 = func_0x032809c4(puVar19,uVar30);
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            return uVar26;
          }
          auVar35 = func_0x03280cb4();
          pcStack_120 = (code *)0x414425c;
          lVar29 = *(long *)(auVar35._8_8_ + 0x20);
          lStack_118 = lVar16;
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            lVar29 = func_0x0325681c(lVar29);
          }
          lVar16 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x48);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
          }
          lVar16 = func_0x03280b90(auVar35._0_8_,lVar16);
          if (lVar16 == 0) {
            uVar26 = (ulong)(auVar35._0_8_ == 0);
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
  lVar25 = func_0x03d87e68(auVar35._8_8_,uVar14);
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
  auVar35 = func_0x03280b7c(uVar14,lVar21);
  lVar25 = auVar35._8_8_;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar35._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))(uVar26,auVar35._0_8_);
    return uVar26;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar33 = func_0x03280b7c(uVar14,lVar25);
  lVar25 = auVar33._8_8_;
  plStack_e0 = (long *)0x3d60338;
  auStack_d0 = auVar35;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar33._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar26 = func_0x03280ca0();
    func_0x0420cec8(uVar26,auVar33._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return uVar26;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar34 = func_0x03280b7c(uVar14,lVar25);
  lVar21 = auVar34._0_8_;
  puStack_100 = (undefined *)0x3d603b4;
  lVar25 = lVar16;
  puStack_f8 = (undefined *)lVar29;
  auStack_f0 = auVar33;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  auVar33._8_8_ = puStack_f8;
  auVar33._0_8_ = plVar17;
  puVar31 = PTR_DAT_07779d10;
  if ((lVar21 == 0) || (puVar31 = PTR_DAT_07779d18, auVar34._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar31);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar35 = func_0x03280b7c(uVar14,lVar16);
    pcStack_120 = (code *)0x3d60428;
    lVar29 = lVar25;
    lStack_118 = lVar21;
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
    auVar34._8_8_ = auVar34._8_8_;
    auVar34._0_8_ = lStack_118;
    puVar31 = PTR_DAT_07779d10;
    if ((auVar35._0_8_ != 0) && (puVar31 = PTR_DAT_07779d18, auVar35._8_8_ != 0)) {
      lVar29 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      lVar25 = 0;
      ppuVar10 = &puStack_100;
      pcVar32 = pcStack_120;
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar31);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar34 = func_0x03280b7c(uVar14,lVar25);
    uStack_140 = 0x3d6049c;
    lVar16 = lVar29;
    lStack_128 = lVar25;
    auStack_138 = auVar35;
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
    puVar31 = PTR_DAT_07779d10;
    if ((auVar34._0_8_ == 0) || (puVar31 = PTR_DAT_07779d18, auVar34._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar31);
      uVar14 = func_0x05ac7464(uVar14,0);
      auStack_178 = func_0x03280b7c(uVar14,lVar29);
      uStack_160 = 0x3d60510;
      lVar21 = lVar16;
      lStack_148 = lVar29;
      auStack_158 = auVar34;
      if (*(long *)(lVar16 + 0x38) == 0) {
        func_0x03256878(lVar16);
      }
      puVar31 = PTR_DAT_07779d10;
      if ((auStack_178._0_8_ != 0) && (puVar31 = PTR_DAT_07779d18, auStack_178._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 8))
                           (auStack_178._0_8_,auStack_178._8_8_,0);
        return uVar26;
      }
      uVar14 = func_0x03280a2c(puVar31);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar34 = func_0x03280b7c(uVar14,lVar16);
      uStack_190 = 0x3d60588;
      lVar29 = lVar21;
      lVar25 = lVar24;
      plStack_180 = plVar17;
      lStack_168 = lVar16;
      if (*(long *)(lVar24 + 0x38) == 0) {
        func_0x03256878(lVar24);
      }
      puVar31 = PTR_DAT_07779d10;
      if ((auVar34._0_8_ == 0) || (puVar31 = PTR_DAT_07779d18, auVar34._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar31);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar33 = func_0x03280b7c(uVar14,lVar24);
        auVar3._8_8_ = lVar25;
        auVar3._0_8_ = lVar29;
        pplVar9 = (long **)auStack_1c0;
        auStack_1c0[0] = 0x3d60608;
        lVar16 = lVar29;
        lVar23 = lVar25;
        lStack_1a0 = lVar21;
        lStack_198 = lVar24;
        auStack_1b0 = auVar34;
        if (*(long *)(lVar25 + 0x38) == 0) {
          func_0x03256878(lVar25);
        }
        puVar31 = PTR_DAT_07779d10;
        if ((auVar33._0_8_ != 0) && (puVar31 = PTR_DAT_07779d18, auVar33._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))
                             (auVar33._0_8_,auVar33._8_8_,lVar29);
          return uVar26;
        }
        uVar14 = func_0x03280a2c(puVar31);
        uVar14 = func_0x05ac7464(uVar14,0);
        puVar31 = (undefined *)0x3d6068c;
        auVar34 = func_0x03280b7c(uVar14,lVar25);
        goto LAB_03d6068c;
      }
      lVar16 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
      ppcVar11 = (code **)&uStack_160;
      lVar25 = lStack_168;
      plVar17 = plStack_180;
      uVar14 = uStack_190;
      auVar35 = auStack_178;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      lVar21 = 0;
      ppcVar11 = &pcStack_120;
      lVar25 = lStack_128;
      uVar14 = uStack_140;
      auVar35 = auStack_138;
    }
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
    lVar16 = 0;
    pplVar9 = &plStack_e0;
    puVar31 = puStack_100;
    auVar3 = auStack_f0;
LAB_03d6068c:
    ppuVar10 = (undefined **)((long)pplVar9 + -0x30);
    *(undefined **)((long)pplVar9 + -0x30) = puVar31;
    *(undefined1 (*) [16])((long)pplVar9 + -0x20) = auVar33;
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
      *(undefined8 *)(uVar26 + 0x38) = auVar34._0_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x38),auVar34._0_8_);
      *(undefined8 *)(uVar26 + 0x48) = auVar34._8_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x48),auVar34._8_8_);
      *(long *)(uVar26 + 0x28) = lVar16;
      func_0x032809c4((long *)(uVar26 + 0x28),lVar16);
      return uVar26;
    }
    auVar35 = func_0x03280cac();
    plVar17 = (long *)0x0;
    pcVar32 = (code *)0x3d60730;
LAB_03d60730:
    ppcVar11 = (code **)((long)ppuVar10 + -0x30);
    *(code **)((long)ppuVar10 + -0x30) = pcVar32;
    *(long **)((long)ppuVar10 + -0x20) = plVar17;
    *(undefined1 (*) [16])((long)ppuVar10 + -0x18) = auVar34;
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
      *(undefined8 *)(uVar26 + 0x38) = auVar35._0_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x38),auVar35._0_8_);
      *(undefined8 *)(uVar26 + 0x48) = auVar35._8_8_;
      func_0x032809c4((undefined8 *)(uVar26 + 0x48),auVar35._8_8_);
      *(long *)(uVar26 + 0x28) = lVar25;
      func_0x032809c4((long *)(uVar26 + 0x28),lVar25);
      return uVar26;
    }
    auVar34 = func_0x03280cac();
    plVar17 = (long *)0x0;
    uVar14 = 0x3d607d4;
  }
  *(undefined8 *)((long)ppcVar11 + -0x30) = uVar14;
  *(long **)((long)ppcVar11 + -0x20) = plVar17;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x18) = auVar35;
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
    *(undefined8 *)(uVar26 + 0x40) = auVar34._0_8_;
    func_0x032809c4((undefined8 *)(uVar26 + 0x40),auVar34._0_8_);
    *(undefined8 *)(uVar26 + 0x50) = auVar34._8_8_;
    func_0x032809c4((undefined8 *)(uVar26 + 0x50),auVar34._8_8_);
    *(long *)(uVar26 + 0x30) = lVar21;
    func_0x032809c4((long *)(uVar26 + 0x30),lVar21);
    return uVar26;
  }
  auVar35 = func_0x03280cac();
  uVar26 = auVar35._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)ppcVar11 + -0x58) = uVar30;
  *(undefined8 *)((long)ppcVar11 + -0x50) = 0;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x48) = auVar34;
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
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar29 + 0x38) + 0x80) + 0x100,auVar35._8_8_);
    func_0x02f17738(uVar13,*(long *)(**(long **)(lVar29 + 0x38) + 0x80) + 0x80,uVar14);
    return uVar13;
  }
  auVar33 = func_0x03280cac();
  lVar16 = auVar33._8_8_;
  plVar17 = auVar33._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)ppcVar11 + -0x88) = 0;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x80) = auVar35;
  *(long *)((long)ppcVar11 + -0x70) = lVar29;
  *(undefined8 *)((long)ppcVar11 + -0x68) = uVar14;
  puVar22 = puVar19;
  if (puVar19[7] == 0) {
    func_0x03256878(puVar19);
  }
  puVar31 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar31 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar30 = func_0x03280a2c(puVar31);
    uVar30 = func_0x05ac7464(uVar30,0);
    func_0x03280b7c(uVar30,puVar19);
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
  auVar35 = func_0x03281048(plVar17,lVar29);
  lVar16 = auVar35._8_8_;
  plVar17 = auVar35._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0xc0) = 0x3d60c18;
  *(long *)((long)ppcVar11 + -0xb8) = lVar29;
  *(ulong *)((long)ppcVar11 + -0xb0) = uVar26;
  *(undefined8 **)((long)ppcVar11 + -0xa8) = puVar19;
  *(undefined1 (*) [16])((long)ppcVar11 + -0xa0) = auVar33;
  if (puVar22[7] == 0) {
    func_0x03256878(puVar22);
  }
  puVar31 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar31 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar30 = func_0x03280a2c(puVar31);
    uVar30 = func_0x05ac7464(uVar30,0);
    func_0x03280b7c(uVar30,puVar22);
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
  *(undefined1 (*) [16])((long)ppcVar11 + -0xd0) = auVar35;
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


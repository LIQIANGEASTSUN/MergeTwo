/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACEAEC; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.RebuildBoosts; status ok */


/* WARNING: Possible PIC construction at 0x06bcf004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d606f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d607b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03d60840) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */
/* WARNING: Removing unreachable block (ram,0x03d6079c) */
/* WARNING: Removing unreachable block (ram,0x03d60718) */
/* WARNING: Removing unreachable block (ram,0x03d606f8) */
/* WARNING: Removing unreachable block (ram,0x06bcf2a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf2a8) */
/* WARNING: Removing unreachable block (ram,0x06bcf008) */
/* WARNING: Removing unreachable block (ram,0x06bcf054) */
/* WARNING: Removing unreachable block (ram,0x06bcf0a8) */
/* WARNING: Removing unreachable block (ram,0x06bcf0b4) */
/* WARNING: Removing unreachable block (ram,0x06bcf134) */
/* WARNING: Removing unreachable block (ram,0x06bcf168) */
/* WARNING: Removing unreachable block (ram,0x06bcf184) */
/* WARNING: Removing unreachable block (ram,0x06bcf18c) */
/* WARNING: Removing unreachable block (ram,0x06bcf1b4) */
/* WARNING: Removing unreachable block (ram,0x06bcf198) */
/* WARNING: Removing unreachable block (ram,0x06bcf1a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf1c4) */
/* WARNING: Removing unreachable block (ram,0x06bcf1d4) */
/* WARNING: Removing unreachable block (ram,0x06bcf1dc) */
/* WARNING: Removing unreachable block (ram,0x06bcf208) */
/* WARNING: Removing unreachable block (ram,0x06bcf214) */
/* WARNING: Removing unreachable block (ram,0x06bcf28c) */
/* WARNING: Removing unreachable block (ram,0x06bcf230) */
/* WARNING: Removing unreachable block (ram,0x06bcf238) */
/* WARNING: Removing unreachable block (ram,0x06bcf244) */
/* WARNING: Removing unreachable block (ram,0x06bcf0d8) */
/* WARNING: Removing unreachable block (ram,0x06bcf0e0) */
/* WARNING: Removing unreachable block (ram,0x06bcf0ec) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined1  [16]
Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__RebuildBoosts(undefined8 param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  int *piVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined *unaff_x22;
  int *unaff_x23;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 auStack_2e0 [2];
  undefined1 auStack_2d0 [16];
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a0;
  undefined1 auStack_298 [16];
  long lStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  long lStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  long lStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined1 auStack_210 [16];
  undefined8 auStack_200 [2];
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
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
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long *plStack_98;
  long lStack_90;
  int *piStack_88;
  code *pcStack_80;
  
  Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateAvailableBoostsByLevel()
  ;
  puVar11 = PTR_DAT_07834128;
  if ((bRam0000000007e2aa79 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0776ab48);
    func_0x03280a18(PTR_DAT_07781880);
    func_0x03280a18(PTR_DAT_07834110);
    func_0x03280a18(PTR_DAT_077df528);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077df570);
    func_0x03280a18(PTR_DAT_077a6e80);
    func_0x03280a18(PTR_DAT_077df578);
    func_0x03280a18(PTR_DAT_077df530);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07754420);
    func_0x03280a18(PTR_DAT_07834130);
    func_0x03280a18(PTR_DAT_07834138);
    func_0x03280a18(PTR_DAT_07834140);
    func_0x03280a18(PTR_DAT_07834148);
    func_0x03280a18(PTR_DAT_07834128);
    func_0x03280a18(PTR_DAT_07834108);
    bRam0000000007e2aa79 = 1;
  }
  lVar12 = func_0x03280ca0(*(undefined8 *)puVar11);
  func_0x057da5fc(lVar12,0);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar12 + 0x10);
    *puVar13 = param_1;
    goto SUB_032809c4;
  }
  func_0x03280cac();
  auVar46 = func_0x03280cb4();
  piVar23 = auVar46._8_8_;
  lVar12 = auVar46._0_8_;
  pcStack_80 = 
  Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateUnlockableBoost;
  if ((bRam0000000007e2aa71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f6d0);
    func_0x03280a18(PTR_DAT_07833e20);
    bRam0000000007e2aa71 = 1;
  }
  puVar11 = PTR_DAT_07833e20;
  plVar26 = *(long **)(lVar12 + 0x18);
  if (plVar26 != (long *)0x0) {
    lVar20 = *plVar26;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar13 = (undefined8 *)(lVar20 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto LAB_06bcf374;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_07833e20,5);
LAB_06bcf374:
    uVar21 = (*(code *)*puVar13)(plVar26,puVar13[1]);
    unaff_x22 = puVar11;
    if ((uVar21 & 1) == 0) {
      plVar24 = *(long **)(lVar12 + 0x18);
      lVar12 = 0;
      if (plVar24 != (long *)0x0) {
        lVar12 = *plVar24;
        uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar11) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_06bcf460;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar24,*(long *)puVar11,1);
LAB_06bcf460:
        iVar9 = (*(code *)*puVar13)(plVar24,puVar13[1]);
        uVar21 = 0;
        *piVar23 = iVar9;
        uVar14 = extraout_x1_19;
        goto LAB_06bcf50c;
      }
    }
    else {
      plVar26 = (long *)Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetUnlockableBoosts
                                  (lVar12);
      uVar21 = func_0x03d27f10(plVar26,*(undefined8 *)PTR_DAT_0782f6d0);
      unaff_x23 = (int *)0x0;
      if ((uVar21 & 1) == 0) {
        unaff_x23 = piVar23;
      }
      if ((uVar21 & 1) == 0) {
        plVar26 = *(long **)(lVar12 + 0x18);
        if (plVar26 == (long *)0x0) goto LAB_06bcf51c;
        lVar20 = *plVar26;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar11) {
              puVar13 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_06bcf48c;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar26,*(long *)puVar11,1);
LAB_06bcf48c:
        iVar9 = (*(code *)*puVar13)(plVar26,puVar13[1]);
      }
      else {
        iVar9 = func_0x05ac8180(plVar26,0);
        unaff_x23 = piVar23;
      }
      *unaff_x23 = iVar9;
      plVar24 = *(long **)(lVar12 + 0x18);
      lVar12 = 0;
      if (plVar24 != (long *)0x0) {
        lVar12 = *plVar24;
        iVar9 = *piVar23;
        uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar21 != 0) {
          piVar23 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar11) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_06bcf4f8;
            }
            uVar21 = uVar21 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar24,*(long *)puVar11,2);
LAB_06bcf4f8:
        iVar10 = (*(code *)*puVar13)(plVar24,puVar13[1]);
        uVar21 = (ulong)(iVar10 <= iVar9);
        uVar14 = extraout_x1_20;
LAB_06bcf50c:
        auVar46._8_8_ = uVar14;
        auVar46._0_8_ = uVar21;
        return auVar46;
      }
    }
  }
LAB_06bcf51c:
  lVar20 = func_0x03280cac();
  pcStack_a0 = Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetUnlockableBoosts;
  plStack_98 = plVar26;
  lStack_90 = lVar12;
  piStack_88 = piVar23;
  if ((bRam0000000007e2aa72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077e5590);
    func_0x03280a18(PTR_DAT_077a3990);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07759a18);
    func_0x03280a18(PTR_DAT_07759a10);
    func_0x03280a18(PTR_DAT_07834150);
    bRam0000000007e2aa72 = 1;
  }
  plVar26 = *(long **)(lVar20 + 0x18);
  if (plVar26 == (long *)0x0) {
    auVar46 = func_0x03280cac();
    auVar30._8_8_ = auVar46._8_8_;
    auVar30._0_8_ = *(undefined8 *)(auVar46._0_8_ + 0x30);
    return auVar30;
  }
  lVar12 = *plVar26;
  uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar13 = (undefined8 *)(lVar12 + (long)(*piVar23 + 6) * 0x10 + 0x138);
        goto LAB_06bcf5f4;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar13 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_07833e20,6);
LAB_06bcf5f4:
  uVar21 = (*(code *)*puVar13)(plVar26,puVar13[1]);
  if ((uVar21 & 1) == 0) {
    auVar47._0_8_ = func_0x03280ca0(*(undefined8 *)PTR_DAT_07759a10);
    func_0x04119444(auVar47._0_8_,*(undefined8 *)PTR_DAT_07759a18);
    auVar47._8_8_ = extraout_x1_21;
    return auVar47;
  }
  uVar25 = *(undefined8 *)(lVar20 + 0x38);
  uVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a3990);
  lVar19 = 0;
  func_0x05353d24(uVar14,lVar20,*(undefined8 *)PTR_DAT_07834150);
  lVar17 = *(long *)PTR_DAT_077e5590;
  lVar12 = func_0x03d86d00(uVar25,uVar14);
  plVar26 = plStack_98;
  lVar20 = *(long *)PTR_DAT_077c1cf8;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (lVar12 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    func_0x0411956c(auVar28._0_8_,lVar12,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar28._8_8_ = extraout_x1;
    return auVar28;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar46 = func_0x03280b7c(uVar14,lVar20);
  lVar15 = auVar46._8_8_;
  uStack_c0 = 0x3d5fe5c;
  lStack_b0 = lVar12;
  lStack_a8 = lVar20;
  if (*(long *)(lVar15 + 0x38) == 0) {
    func_0x03256878(lVar15);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x0411bf8c(auVar29._0_8_,auVar46._0_8_,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1_00;
    return auVar29;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar30 = func_0x03280b7c(uVar14,lVar15);
  lVar12 = auVar30._8_8_;
  uStack_e0 = 0x3d5fed8;
  auStack_d0 = auVar46;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    func_0x04132280(auVar31._0_8_,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar31._8_8_ = extraout_x1_01;
    return auVar31;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar46 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar46._8_8_;
  uStack_100 = 0x3d5ff54;
  auStack_f0 = auVar30;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    func_0x04135278(auVar32._0_8_,auVar46._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar32._8_8_ = extraout_x1_02;
    return auVar32;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar30 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar30._8_8_;
  uStack_120 = 0x3d5ffd0;
  auStack_110 = auVar46;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar33._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar33._0_8_,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar33._8_8_ = extraout_x1_03;
    return auVar33;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar46 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar46._8_8_;
  uStack_140 = 0x3d6004c;
  auStack_130 = auVar30;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar34._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar34._0_8_,auVar46._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar34._8_8_ = extraout_x1_04;
    return auVar34;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar30 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar30._8_8_;
  uStack_160 = 0x3d600c8;
  auStack_150 = auVar46;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar35._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar35._0_8_,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar35._8_8_ = extraout_x1_05;
    return auVar35;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar46 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar46._8_8_;
  uStack_180 = 0x3d60144;
  auStack_170 = auVar30;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar36._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar36._0_8_,auVar46._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar36._8_8_ = extraout_x1_06;
    return auVar36;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar30 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar30._8_8_;
  uStack_1a0 = 0x3d601c0;
  auStack_190 = auVar46;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar37._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar37._0_8_,auVar30._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar37._8_8_ = extraout_x1_07;
    return auVar37;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar46 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar46._8_8_;
  uStack_1c0 = 0x3d6023c;
  auStack_1b0 = auVar30;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar38._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar38._0_8_,auVar46._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar38._8_8_ = extraout_x1_08;
    return auVar38;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar30 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar30._8_8_;
  uStack_1e0 = 0x3d602b8;
  auStack_1d0 = auVar46;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar30._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar39._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 0x10))(auVar39._0_8_,auVar30._0_8_);
    auVar39._8_8_ = extraout_x1_09;
    return auVar39;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar46 = func_0x03280b7c(uVar14,lVar12);
  lVar12 = auVar46._8_8_;
  auStack_200[0] = 0x3d60338;
  auStack_1f0 = auVar30;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar46._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar40._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar40._0_8_,auVar46._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    auVar40._8_8_ = extraout_x1_10;
    return auVar40;
  }
  uVar14 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar14 = func_0x05ac7464(uVar14,0);
  auVar30 = func_0x03280b7c(uVar14,lVar12);
  uStack_220 = 0x3d603b4;
  plStack_218 = plVar26;
  lVar12 = lVar17;
  auStack_210 = auVar46;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  auVar41._8_8_ = plStack_218;
  auVar41._0_8_ = unaff_x22;
  puVar11 = PTR_DAT_07779d10;
  if ((auVar30._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar30._8_8_ == 0)) {
    uVar14 = func_0x03280a2c(puVar11);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar46 = func_0x03280b7c(uVar14,lVar17);
    uStack_240 = 0x3d60428;
    lVar20 = lVar12;
    lStack_228 = lVar17;
    if (*(long *)(lVar12 + 0x38) == 0) {
      auStack_238 = auVar30;
      func_0x03256878(lVar12);
      auVar30 = auStack_238;
    }
    puVar11 = PTR_DAT_07779d10;
    auStack_238 = auVar30;
    if ((auVar46._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar46._8_8_ != 0)) {
      lVar20 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
      lVar17 = 0;
      puVar7 = &uStack_220;
      lVar12 = lStack_228;
      uVar14 = uStack_240;
      goto LAB_03d60730;
    }
    uVar14 = func_0x03280a2c(puVar11);
    uVar14 = func_0x05ac7464(uVar14,0);
    auVar30 = func_0x03280b7c(uVar14,lVar12);
    uStack_260 = 0x3d6049c;
    lVar17 = lVar20;
    lStack_248 = lVar12;
    auStack_258 = auVar46;
    if (*(long *)(lVar20 + 0x38) == 0) {
      func_0x03256878(lVar20);
    }
    puVar11 = PTR_DAT_07779d10;
    if ((auVar30._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar30._8_8_ == 0)) {
      uVar14 = func_0x03280a2c(puVar11);
      uVar14 = func_0x05ac7464(uVar14,0);
      auStack_298 = func_0x03280b7c(uVar14,lVar20);
      uStack_280 = 0x3d60510;
      lVar15 = lVar17;
      lStack_268 = lVar20;
      auStack_278 = auVar30;
      if (*(long *)(lVar17 + 0x38) == 0) {
        func_0x03256878(lVar17);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auStack_298._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auStack_298._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar46 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 8))
                            (auStack_298._0_8_,auStack_298._8_8_,0);
        return auVar46;
      }
      uVar14 = func_0x03280a2c(puVar11);
      uVar14 = func_0x05ac7464(uVar14,0);
      auVar30 = func_0x03280b7c(uVar14,lVar17);
      uStack_2b0 = 0x3d60588;
      lVar20 = lVar15;
      lVar18 = lVar19;
      puStack_2a0 = unaff_x22;
      lStack_288 = lVar17;
      if (*(long *)(lVar19 + 0x38) == 0) {
        func_0x03256878(lVar19);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar30._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar30._8_8_ == 0)) {
        uVar14 = func_0x03280a2c(puVar11);
        uVar14 = func_0x05ac7464(uVar14,0);
        auVar41 = func_0x03280b7c(uVar14,lVar19);
        auVar5._8_8_ = lVar18;
        auVar5._0_8_ = lVar20;
        puVar6 = auStack_2e0;
        auStack_2e0[0] = 0x3d60608;
        lVar12 = lVar20;
        lVar17 = lVar18;
        lStack_2c0 = lVar15;
        lStack_2b8 = lVar19;
        auStack_2d0 = auVar30;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((auVar41._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar41._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar46 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x10))
                              (auVar41._0_8_,auVar41._8_8_,lVar20);
          return auVar46;
        }
        uVar14 = func_0x03280a2c(puVar11);
        uVar25 = func_0x05ac7464(uVar14,0);
        uVar14 = 0x3d6068c;
        auVar30 = func_0x03280b7c(uVar25,lVar18);
        goto LAB_03d6068c;
      }
      lVar12 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      puVar8 = &uStack_280;
      lVar17 = lStack_288;
      unaff_x22 = puStack_2a0;
      uVar14 = uStack_2b0;
      auVar46 = auStack_298;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
      lVar15 = 0;
      puVar8 = &uStack_240;
      lVar17 = lStack_248;
      uVar14 = uStack_260;
      auVar46 = auStack_258;
    }
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    lVar12 = 0;
    puVar6 = auStack_200;
    uVar14 = uStack_220;
    auVar5 = auStack_210;
LAB_03d6068c:
    param_1 = auVar30._0_8_;
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar14;
    *(undefined1 (*) [16])((long)puVar6 + -0x20) = auVar41;
    *(undefined1 (*) [16])((long)puVar6 + -0x10) = auVar5;
    plVar26 = *(long **)(lVar17 + 0x38);
    lVar20 = lVar17;
    if (plVar26 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar26 = *(long **)(lVar17 + 0x38);
    }
    if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    func_0x0531dbd0(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      puVar13 = (undefined8 *)(lVar19 + 0x38);
      *puVar13 = param_1;
      goto SUB_032809c4;
    }
    auVar46 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar14 = 0x3d60730;
LAB_03d60730:
    param_1 = auVar46._0_8_;
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar14;
    *(undefined **)((long)puVar7 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar30;
    *(long *)((long)puVar7 + -8) = lVar12;
    plVar26 = *(long **)(lVar20 + 0x38);
    lVar12 = lVar20;
    if (plVar26 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar26 = *(long **)(lVar20 + 0x38);
    }
    if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar15 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x0531e428(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      puVar13 = (undefined8 *)(lVar19 + 0x38);
      *puVar13 = param_1;
      goto SUB_032809c4;
    }
    auVar30 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar14 = 0x3d607d4;
  }
  param_1 = auVar30._0_8_;
  *(undefined8 *)((long)puVar8 + -0x30) = uVar14;
  *(undefined **)((long)puVar8 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar46;
  *(long *)((long)puVar8 + -8) = lVar17;
  plVar26 = *(long **)(lVar12 + 0x38);
  lVar20 = lVar12;
  if (plVar26 == (long *)0x0) {
    func_0x03256878(lVar12);
    plVar26 = *(long **)(lVar12 + 0x38);
  }
  if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar17 = func_0x03280ca0();
  uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + 8);
  func_0x0531ec78(lVar17,0xfffffffe);
  if (lVar17 != 0) {
    puVar13 = (undefined8 *)(lVar17 + 0x40);
    *puVar13 = param_1;
    goto SUB_032809c4;
  }
  auVar46 = func_0x03280cac();
  uVar25 = auVar46._0_8_;
  *(undefined8 *)((long)puVar8 + -0x60) = 0x3d60878;
  *(int **)((long)puVar8 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x48) = auVar30;
  *(long *)((long)puVar8 + -0x38) = lVar15;
  plVar26 = *(long **)(lVar20 + 0x38);
  if (plVar26 == (long *)0x0) {
    func_0x03256878(lVar20);
    plVar26 = *(long **)(lVar20 + 0x38);
  }
  if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar42._0_8_ = func_0x03280ca0();
  puVar13 = *(undefined8 **)(*(long *)(lVar20 + 0x38) + 8);
  (*(code *)*puVar13)(auVar42._0_8_,0xfffffffe);
  if (auVar42._0_8_ != 0) {
    func_0x02f17738(auVar42._0_8_,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0xc0,uVar25);
    func_0x02f17738(auVar42._0_8_,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0x100,auVar46._8_8_
                   );
    func_0x02f17738(auVar42._0_8_,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0x80,uVar14);
    auVar42._8_8_ = extraout_x1_11;
    return auVar42;
  }
  auVar30 = func_0x03280cac();
  lVar12 = auVar30._8_8_;
  plVar26 = auVar30._0_8_;
  *(undefined8 *)((long)puVar8 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar8 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x80) = auVar46;
  *(long *)((long)puVar8 + -0x70) = lVar20;
  *(undefined8 *)((long)puVar8 + -0x68) = uVar14;
  puVar16 = puVar13;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar26 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar12 == 0)) {
    uVar14 = func_0x03280a2c(puVar11);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar13);
LAB_03d60c04:
    func_0x03281048(plVar26);
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar17 = *plVar26;
    bVar2 = *(byte *)(lVar17 + 0x130);
    if ((*(byte *)(lVar20 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20)) {
      lVar20 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar17 = *plVar26;
        bVar2 = *(byte *)(lVar17 + 0x130);
      }
      if ((*(byte *)(lVar20 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20))
      {
        lVar20 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
          lVar17 = *plVar26;
          bVar2 = *(byte *)(lVar17 + 0x130);
        }
        if ((*(byte *)(lVar20 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar46 = (**(code **)(lVar17 + 0x228))(plVar26,lVar12,*(undefined8 *)(lVar17 + 0x230));
          return auVar46;
        }
      }
      goto LAB_03d60c04;
    }
    lVar20 = *(long *)(puVar13[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar20 = func_0x03280b90(plVar26,lVar20);
    if (lVar20 == 0) {
      lVar20 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar26 + 0x130) < *(byte *)(lVar20 + 0x130)) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) != lVar20
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar25 = func_0x03280ca0();
        func_0x04b68fa4(uVar25,plVar26,lVar12,*(undefined8 *)(puVar13[7] + 0x58));
        uVar14 = extraout_x1_13;
LAB_03d60aa4:
        auVar43._8_8_ = uVar14;
        auVar43._0_8_ = uVar25;
        return auVar43;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar25 = func_0x03280ca0();
      lVar20 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar26 + 0x130)) &&
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b713b0(uVar25,plVar26,lVar12,*(undefined8 *)(puVar13[7] + 0x48));
        uVar14 = extraout_x1_14;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar25 = func_0x03280ca0();
    lVar20 = *(long *)(puVar13[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar17 = func_0x03280b90(plVar26,lVar20);
    if (lVar17 != 0) {
      func_0x04b66610(uVar25,lVar17,lVar12,*(undefined8 *)(puVar13[7] + 0x30));
      uVar14 = extraout_x1_12;
      goto LAB_03d60aa4;
    }
  }
  auVar46 = func_0x03281048(plVar26,lVar20);
  lVar12 = auVar46._8_8_;
  plVar26 = auVar46._0_8_;
  *(undefined8 *)((long)puVar8 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar8 + -0xb8) = lVar20;
  *(undefined8 *)((long)puVar8 + -0xb0) = uVar25;
  *(undefined8 **)((long)puVar8 + -0xa8) = puVar13;
  *(undefined1 (*) [16])((long)puVar8 + -0xa0) = auVar30;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar26 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar12 == 0)) {
    uVar14 = func_0x03280a2c(puVar11);
    uVar14 = func_0x05ac7464(uVar14,0);
    func_0x03280b7c(uVar14,puVar16);
LAB_03d60ed8:
    func_0x03281048(plVar26);
  }
  else {
    lVar17 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar19 = *plVar26;
    bVar2 = *(byte *)(lVar19 + 0x130);
    if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)) {
      lVar17 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar19 = *plVar26;
        bVar2 = *(byte *)(lVar19 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar19 = *plVar26;
          bVar2 = *(byte *)(lVar19 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar46 = (**(code **)(lVar19 + 0x228))(plVar26,lVar12,*(undefined8 *)(lVar19 + 0x230));
          return auVar46;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar17 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar17 = func_0x03280b90(plVar26,lVar17);
    if (lVar17 == 0) {
      lVar17 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar26 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar25 = func_0x03280ca0();
        func_0x04b693d0(uVar25,plVar26,lVar12,*(undefined8 *)(puVar16[7] + 0x58));
        uVar14 = extraout_x1_16;
LAB_03d60d78:
        auVar44._8_8_ = uVar14;
        auVar44._0_8_ = uVar25;
        return auVar44;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar25 = func_0x03280ca0();
      lVar17 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      if ((*(byte *)(lVar17 + 0x130) <= *(byte *)(*plVar26 + 0x130)) &&
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
         )) {
        func_0x04b715c8(uVar25,plVar26,lVar12,*(undefined8 *)(puVar16[7] + 0x48));
        uVar14 = extraout_x1_17;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar25 = func_0x03280ca0();
    lVar20 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar17 = func_0x03280b90(plVar26,lVar20);
    if (lVar17 != 0) {
      func_0x04b667e0(uVar25,lVar17,lVar12,*(undefined8 *)(puVar16[7] + 0x30));
      uVar14 = extraout_x1_15;
      goto LAB_03d60d78;
    }
  }
  lVar12 = func_0x03281048(plVar26,lVar20);
  *(undefined8 *)((long)puVar8 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar8 + -0xd0) = auVar46;
  lVar20 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  lVar20 = **(long **)(lVar20 + 0xb8);
  func_0x03280ab0();
  if (lVar20 != 0) {
    auVar45._8_8_ = extraout_x1_18;
    auVar45._0_8_ = lVar20;
    return auVar45;
  }
  lVar20 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  param_1 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar20 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  **(undefined8 **)(lVar20 + 0xb8) = param_1;
  lVar12 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  puVar13 = *(undefined8 **)(lVar12 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  auVar27._8_8_ = param_1;
  auVar27._0_8_ = puVar13;
  return auVar27;
}


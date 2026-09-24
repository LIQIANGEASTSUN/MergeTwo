/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACEEBC; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.CalculatePlayableBoosts; status ok */


/* WARNING: Possible PIC construction at 0x06bcf004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcf388: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06bcf38c) */
/* WARNING: Removing unreachable block (ram,0x06bcf3a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf408) */
/* WARNING: Removing unreachable block (ram,0x06bcf410) */
/* WARNING: Removing unreachable block (ram,0x06bcf420) */
/* WARNING: Removing unreachable block (ram,0x06bcf428) */
/* WARNING: Removing unreachable block (ram,0x06bcf47c) */
/* WARNING: Removing unreachable block (ram,0x06bcf434) */
/* WARNING: Removing unreachable block (ram,0x06bcf440) */
/* WARNING: Removing unreachable block (ram,0x06bcf48c) */
/* WARNING: Removing unreachable block (ram,0x06bcf3ac) */
/* WARNING: Removing unreachable block (ram,0x06bcf498) */
/* WARNING: Removing unreachable block (ram,0x06bcf4a4) */
/* WARNING: Removing unreachable block (ram,0x06bcf4b8) */
/* WARNING: Removing unreachable block (ram,0x06bcf4c0) */
/* WARNING: Removing unreachable block (ram,0x06bcf4e8) */
/* WARNING: Removing unreachable block (ram,0x06bcf4cc) */
/* WARNING: Removing unreachable block (ram,0x06bcf4d8) */
/* WARNING: Removing unreachable block (ram,0x06bcf4f8) */
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
Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculatePlayableBoosts
          (undefined8 param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
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
  ulong extraout_x1_19;
  undefined8 extraout_x1_20;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar25;
  undefined1 auVar26 [16];
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
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  undefined4 *puVar13;
  
  puVar10 = PTR_DAT_07834128;
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
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar10);
  func_0x057da5fc(lVar11,0);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(lVar11 + 0x10);
    *puVar12 = param_1;
    goto SUB_032809c4;
  }
  func_0x03280cac();
  auVar45 = func_0x03280cb4();
  puVar13 = auVar45._8_8_;
  lVar11 = auVar45._0_8_;
  uStack_80 = 0x6bcf2d4;
  if ((bRam0000000007e2aa71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f6d0);
    func_0x03280a18(PTR_DAT_07833e20);
    bRam0000000007e2aa71 = 1;
  }
  puVar10 = PTR_DAT_07833e20;
  plVar24 = *(long **)(lVar11 + 0x18);
  lVar19 = lVar11;
  if (plVar24 == (long *)0x0) {
LAB_06bcf51c:
    uVar25 = 0x6bcf520;
    lVar11 = func_0x03280cac();
  }
  else {
    lVar18 = *plVar24;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_06bcf374;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_07833e20,5);
LAB_06bcf374:
    uVar20 = (*(code *)*puVar12)(plVar24,puVar12[1]);
    unaff_x22 = puVar10;
    if ((uVar20 & 1) == 0) {
      plVar22 = *(long **)(lVar11 + 0x18);
      lVar19 = 0;
      if (plVar22 != (long *)0x0) {
        lVar11 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar10) {
              puVar12 = (undefined8 *)(lVar11 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_06bcf460;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar10,1);
LAB_06bcf460:
        uVar9 = (*(code *)*puVar12)(plVar22,puVar12[1]);
        *puVar13 = uVar9;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = extraout_x1_19;
        return auVar45 << 0x40;
      }
      goto LAB_06bcf51c;
    }
    uVar25 = 0x6bcf38c;
  }
  uStack_a0 = uVar25;
  plStack_98 = plVar24;
  lStack_90 = lVar19;
  puStack_88 = puVar13;
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
  plVar24 = *(long **)(lVar11 + 0x18);
  if (plVar24 == (long *)0x0) {
    auVar45 = func_0x03280cac();
    auVar29._8_8_ = auVar45._8_8_;
    auVar29._0_8_ = *(undefined8 *)(auVar45._0_8_ + 0x30);
    return auVar29;
  }
  lVar19 = *plVar24;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 6) * 0x10 + 0x138);
        goto LAB_06bcf5f4;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_07833e20,6);
LAB_06bcf5f4:
  uVar20 = (*(code *)*puVar12)(plVar24,puVar12[1]);
  if ((uVar20 & 1) == 0) {
    auVar46._0_8_ = func_0x03280ca0(*(undefined8 *)PTR_DAT_07759a10);
    func_0x04119444(auVar46._0_8_,*(undefined8 *)PTR_DAT_07759a18);
    auVar46._8_8_ = extraout_x1_20;
    return auVar46;
  }
  uVar23 = *(undefined8 *)(lVar11 + 0x38);
  uVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a3990);
  lVar17 = 0;
  func_0x05353d24(uVar25,lVar11,*(undefined8 *)PTR_DAT_07834150);
  lVar18 = *(long *)PTR_DAT_077e5590;
  lVar11 = func_0x03d86d00(uVar23,uVar25);
  plVar24 = plStack_98;
  lVar19 = *(long *)PTR_DAT_077c1cf8;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (lVar11 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar27._0_8_ = func_0x03280ca0();
    func_0x0411956c(auVar27._0_8_,lVar11,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    auVar27._8_8_ = extraout_x1;
    return auVar27;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar45 = func_0x03280b7c(uVar25,lVar19);
  lVar14 = auVar45._8_8_;
  uStack_c0 = 0x3d5fe5c;
  lStack_b0 = lVar11;
  lStack_a8 = lVar19;
  if (*(long *)(lVar14 + 0x38) == 0) {
    func_0x03256878(lVar14);
  }
  if (auVar45._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    func_0x0411bf8c(auVar28._0_8_,auVar45._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
    auVar28._8_8_ = extraout_x1_00;
    return auVar28;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar29 = func_0x03280b7c(uVar25,lVar14);
  lVar11 = auVar29._8_8_;
  uStack_e0 = 0x3d5fed8;
  auStack_d0 = auVar45;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar30._0_8_ = func_0x03280ca0();
    func_0x04132280(auVar30._0_8_,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar30._8_8_ = extraout_x1_01;
    return auVar30;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar45 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar45._8_8_;
  uStack_100 = 0x3d5ff54;
  auStack_f0 = auVar29;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar45._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    func_0x04135278(auVar31._0_8_,auVar45._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar31._8_8_ = extraout_x1_02;
    return auVar31;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar29 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar29._8_8_;
  uStack_120 = 0x3d5ffd0;
  auStack_110 = auVar45;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar32._0_8_,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar32._8_8_ = extraout_x1_03;
    return auVar32;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar45 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar45._8_8_;
  uStack_140 = 0x3d6004c;
  auStack_130 = auVar29;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar45._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar33._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar33._0_8_,auVar45._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar33._8_8_ = extraout_x1_04;
    return auVar33;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar29 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar29._8_8_;
  uStack_160 = 0x3d600c8;
  auStack_150 = auVar45;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar34._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar34._0_8_,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar34._8_8_ = extraout_x1_05;
    return auVar34;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar45 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar45._8_8_;
  uStack_180 = 0x3d60144;
  auStack_170 = auVar29;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar45._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar35._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar35._0_8_,auVar45._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar35._8_8_ = extraout_x1_06;
    return auVar35;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar29 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar29._8_8_;
  uStack_1a0 = 0x3d601c0;
  auStack_190 = auVar45;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar36._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar36._0_8_,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar36._8_8_ = extraout_x1_07;
    return auVar36;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar45 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar45._8_8_;
  uStack_1c0 = 0x3d6023c;
  auStack_1b0 = auVar29;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar45._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar37._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar37._0_8_,auVar45._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar37._8_8_ = extraout_x1_08;
    return auVar37;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar29 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar29._8_8_;
  uStack_1e0 = 0x3d602b8;
  auStack_1d0 = auVar45;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar29._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar38._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))(auVar38._0_8_,auVar29._0_8_);
    auVar38._8_8_ = extraout_x1_09;
    return auVar38;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar45 = func_0x03280b7c(uVar25,lVar11);
  lVar11 = auVar45._8_8_;
  auStack_200[0] = 0x3d60338;
  auStack_1f0 = auVar29;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  if (auVar45._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar39._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar39._0_8_,auVar45._0_8_,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
    auVar39._8_8_ = extraout_x1_10;
    return auVar39;
  }
  uVar25 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar25 = func_0x05ac7464(uVar25,0);
  auVar29 = func_0x03280b7c(uVar25,lVar11);
  uStack_220 = 0x3d603b4;
  plStack_218 = plVar24;
  lVar11 = lVar18;
  auStack_210 = auVar45;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  auVar40._8_8_ = plStack_218;
  auVar40._0_8_ = unaff_x22;
  puVar10 = PTR_DAT_07779d10;
  if ((auVar29._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
    uVar25 = func_0x03280a2c(puVar10);
    uVar25 = func_0x05ac7464(uVar25,0);
    auVar45 = func_0x03280b7c(uVar25,lVar18);
    uStack_240 = 0x3d60428;
    lVar19 = lVar11;
    lStack_228 = lVar18;
    if (*(long *)(lVar11 + 0x38) == 0) {
      auStack_238 = auVar29;
      func_0x03256878(lVar11);
      auVar29 = auStack_238;
    }
    puVar10 = PTR_DAT_07779d10;
    auStack_238 = auVar29;
    if ((auVar45._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar45._8_8_ != 0)) {
      lVar19 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      lVar18 = 0;
      puVar7 = &uStack_220;
      lVar11 = lStack_228;
      uVar25 = uStack_240;
      goto LAB_03d60730;
    }
    uVar25 = func_0x03280a2c(puVar10);
    uVar25 = func_0x05ac7464(uVar25,0);
    auVar29 = func_0x03280b7c(uVar25,lVar11);
    uStack_260 = 0x3d6049c;
    lVar18 = lVar19;
    lStack_248 = lVar11;
    auStack_258 = auVar45;
    if (*(long *)(lVar19 + 0x38) == 0) {
      func_0x03256878(lVar19);
    }
    puVar10 = PTR_DAT_07779d10;
    if ((auVar29._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
      uVar25 = func_0x03280a2c(puVar10);
      uVar25 = func_0x05ac7464(uVar25,0);
      auStack_298 = func_0x03280b7c(uVar25,lVar19);
      uStack_280 = 0x3d60510;
      lVar14 = lVar18;
      lStack_268 = lVar19;
      auStack_278 = auVar29;
      if (*(long *)(lVar18 + 0x38) == 0) {
        func_0x03256878(lVar18);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auStack_298._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auStack_298._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar45 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))
                            (auStack_298._0_8_,auStack_298._8_8_,0);
        return auVar45;
      }
      uVar25 = func_0x03280a2c(puVar10);
      uVar25 = func_0x05ac7464(uVar25,0);
      auVar29 = func_0x03280b7c(uVar25,lVar18);
      uStack_2b0 = 0x3d60588;
      lVar19 = lVar14;
      lVar16 = lVar17;
      puStack_2a0 = unaff_x22;
      lStack_288 = lVar18;
      if (*(long *)(lVar17 + 0x38) == 0) {
        func_0x03256878(lVar17);
      }
      puVar10 = PTR_DAT_07779d10;
      if ((auVar29._0_8_ == 0) || (puVar10 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
        uVar25 = func_0x03280a2c(puVar10);
        uVar25 = func_0x05ac7464(uVar25,0);
        auVar40 = func_0x03280b7c(uVar25,lVar17);
        auVar5._8_8_ = lVar16;
        auVar5._0_8_ = lVar19;
        puVar6 = auStack_2e0;
        auStack_2e0[0] = 0x3d60608;
        lVar11 = lVar19;
        lVar18 = lVar16;
        lStack_2c0 = lVar14;
        lStack_2b8 = lVar17;
        auStack_2d0 = auVar29;
        if (*(long *)(lVar16 + 0x38) == 0) {
          func_0x03256878(lVar16);
        }
        puVar10 = PTR_DAT_07779d10;
        if ((auVar40._0_8_ != 0) && (puVar10 = PTR_DAT_07779d18, auVar40._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar45 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))
                              (auVar40._0_8_,auVar40._8_8_,lVar19);
          return auVar45;
        }
        uVar25 = func_0x03280a2c(puVar10);
        uVar23 = func_0x05ac7464(uVar25,0);
        uVar25 = 0x3d6068c;
        auVar29 = func_0x03280b7c(uVar23,lVar16);
        goto LAB_03d6068c;
      }
      lVar11 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      puVar8 = &uStack_280;
      lVar18 = lStack_288;
      unaff_x22 = puStack_2a0;
      uVar25 = uStack_2b0;
      auVar45 = auStack_298;
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
      lVar14 = 0;
      puVar8 = &uStack_240;
      lVar18 = lStack_248;
      uVar25 = uStack_260;
      auVar45 = auStack_258;
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    lVar11 = 0;
    puVar6 = auStack_200;
    uVar25 = uStack_220;
    auVar5 = auStack_210;
LAB_03d6068c:
    param_1 = auVar29._0_8_;
    puVar7 = (undefined8 *)((long)puVar6 + -0x30);
    *(undefined8 *)((long)puVar6 + -0x30) = uVar25;
    *(undefined1 (*) [16])((long)puVar6 + -0x20) = auVar40;
    *(undefined1 (*) [16])((long)puVar6 + -0x10) = auVar5;
    plVar24 = *(long **)(lVar18 + 0x38);
    lVar19 = lVar18;
    if (plVar24 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar24 = *(long **)(lVar18 + 0x38);
    }
    if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    func_0x0531dbd0(lVar17,0xfffffffe);
    if (lVar17 != 0) {
      puVar12 = (undefined8 *)(lVar17 + 0x38);
      *puVar12 = param_1;
      goto SUB_032809c4;
    }
    auVar45 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar25 = 0x3d60730;
LAB_03d60730:
    param_1 = auVar45._0_8_;
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar25;
    *(undefined **)((long)puVar7 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar7 + -0x18) = auVar29;
    *(long *)((long)puVar7 + -8) = lVar11;
    plVar24 = *(long **)(lVar19 + 0x38);
    lVar11 = lVar19;
    if (plVar24 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar24 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    lVar14 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531e428(lVar17,0xfffffffe);
    if (lVar17 != 0) {
      puVar12 = (undefined8 *)(lVar17 + 0x38);
      *puVar12 = param_1;
      goto SUB_032809c4;
    }
    auVar29 = func_0x03280cac();
    unaff_x22 = (undefined *)0x0;
    uVar25 = 0x3d607d4;
  }
  param_1 = auVar29._0_8_;
  *(undefined8 *)((long)puVar8 + -0x30) = uVar25;
  *(undefined **)((long)puVar8 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar45;
  *(long *)((long)puVar8 + -8) = lVar18;
  plVar24 = *(long **)(lVar11 + 0x38);
  lVar19 = lVar11;
  if (plVar24 == (long *)0x0) {
    func_0x03256878(lVar11);
    plVar24 = *(long **)(lVar11 + 0x38);
  }
  if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 8);
  func_0x0531ec78(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    puVar12 = (undefined8 *)(lVar18 + 0x40);
    *puVar12 = param_1;
    goto SUB_032809c4;
  }
  auVar45 = func_0x03280cac();
  uVar23 = auVar45._0_8_;
  *(undefined8 *)((long)puVar8 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)puVar8 + -0x58) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x48) = auVar29;
  *(long *)((long)puVar8 + -0x38) = lVar14;
  plVar24 = *(long **)(lVar19 + 0x38);
  if (plVar24 == (long *)0x0) {
    func_0x03256878(lVar19);
    plVar24 = *(long **)(lVar19 + 0x38);
  }
  if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar41._0_8_ = func_0x03280ca0();
  puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 8);
  (*(code *)*puVar12)(auVar41._0_8_,0xfffffffe);
  if (auVar41._0_8_ != 0) {
    func_0x02f17738(auVar41._0_8_,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0xc0,uVar23);
    func_0x02f17738(auVar41._0_8_,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x100,auVar45._8_8_
                   );
    func_0x02f17738(auVar41._0_8_,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x80,uVar25);
    auVar41._8_8_ = extraout_x1_11;
    return auVar41;
  }
  auVar29 = func_0x03280cac();
  lVar11 = auVar29._8_8_;
  plVar24 = auVar29._0_8_;
  *(undefined8 *)((long)puVar8 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar8 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar8 + -0x80) = auVar45;
  *(long *)((long)puVar8 + -0x70) = lVar19;
  *(undefined8 *)((long)puVar8 + -0x68) = uVar25;
  puVar15 = puVar12;
  if (puVar12[7] == 0) {
    func_0x03256878(puVar12);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar24 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar11 == 0)) {
    uVar25 = func_0x03280a2c(puVar10);
    uVar25 = func_0x05ac7464(uVar25,0);
    func_0x03280b7c(uVar25,puVar12);
LAB_03d60c04:
    func_0x03281048(plVar24);
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(puVar12[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar18 = *plVar24;
    bVar2 = *(byte *)(lVar18 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19)) {
      lVar19 = *(long *)(puVar12[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar18 = *plVar24;
        bVar2 = *(byte *)(lVar18 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar12[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar18 = *plVar24;
          bVar2 = *(byte *)(lVar18 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar45 = (**(code **)(lVar18 + 0x228))(plVar24,lVar11,*(undefined8 *)(lVar18 + 0x230));
          return auVar45;
        }
      }
      goto LAB_03d60c04;
    }
    lVar19 = *(long *)(puVar12[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar24,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar12[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        func_0x04b68fa4(uVar23,plVar24,lVar11,*(undefined8 *)(puVar12[7] + 0x58));
        uVar25 = extraout_x1_13;
LAB_03d60aa4:
        auVar42._8_8_ = uVar25;
        auVar42._0_8_ = uVar23;
        return auVar42;
      }
      if ((*(byte *)(*(long *)(puVar12[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar23 = func_0x03280ca0();
      lVar19 = *(long *)(puVar12[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar24 + 0x130)) &&
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b713b0(uVar23,plVar24,lVar11,*(undefined8 *)(puVar12[7] + 0x48));
        uVar25 = extraout_x1_14;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar12[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    lVar19 = *(long *)(puVar12[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar18 = func_0x03280b90(plVar24,lVar19);
    if (lVar18 != 0) {
      func_0x04b66610(uVar23,lVar18,lVar11,*(undefined8 *)(puVar12[7] + 0x30));
      uVar25 = extraout_x1_12;
      goto LAB_03d60aa4;
    }
  }
  auVar45 = func_0x03281048(plVar24,lVar19);
  lVar11 = auVar45._8_8_;
  plVar24 = auVar45._0_8_;
  *(undefined8 *)((long)puVar8 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar8 + -0xb8) = lVar19;
  *(undefined8 *)((long)puVar8 + -0xb0) = uVar23;
  *(undefined8 **)((long)puVar8 + -0xa8) = puVar12;
  *(undefined1 (*) [16])((long)puVar8 + -0xa0) = auVar29;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar10 = PTR_DAT_07774b08;
  if ((plVar24 == (long *)0x0) || (puVar10 = PTR_DAT_077799b8, lVar11 == 0)) {
    uVar25 = func_0x03280a2c(puVar10);
    uVar25 = func_0x05ac7464(uVar25,0);
    func_0x03280b7c(uVar25,puVar15);
LAB_03d60ed8:
    func_0x03281048(plVar24);
  }
  else {
    lVar18 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar17 = *plVar24;
    bVar2 = *(byte *)(lVar17 + 0x130);
    if ((*(byte *)(lVar18 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18)) {
      lVar18 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
        lVar17 = *plVar24;
        bVar2 = *(byte *)(lVar17 + 0x130);
      }
      if ((*(byte *)(lVar18 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18))
      {
        lVar18 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = func_0x0325681c(lVar18);
          lVar17 = *plVar24;
          bVar2 = *(byte *)(lVar17 + 0x130);
        }
        if ((*(byte *)(lVar18 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar45 = (**(code **)(lVar17 + 0x228))(plVar24,lVar11,*(undefined8 *)(lVar17 + 0x230));
          return auVar45;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar18 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar18 = func_0x03280b90(plVar24,lVar18);
    if (lVar18 == 0) {
      lVar18 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) != lVar18
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        func_0x04b693d0(uVar23,plVar24,lVar11,*(undefined8 *)(puVar15[7] + 0x58));
        uVar25 = extraout_x1_16;
LAB_03d60d78:
        auVar43._8_8_ = uVar25;
        auVar43._0_8_ = uVar23;
        return auVar43;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar23 = func_0x03280ca0();
      lVar18 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c(lVar18);
      }
      if ((*(byte *)(lVar18 + 0x130) <= *(byte *)(*plVar24 + 0x130)) &&
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8) == lVar18
         )) {
        func_0x04b715c8(uVar23,plVar24,lVar11,*(undefined8 *)(puVar15[7] + 0x48));
        uVar25 = extraout_x1_17;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    lVar19 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar18 = func_0x03280b90(plVar24,lVar19);
    if (lVar18 != 0) {
      func_0x04b667e0(uVar23,lVar18,lVar11,*(undefined8 *)(puVar15[7] + 0x30));
      uVar25 = extraout_x1_15;
      goto LAB_03d60d78;
    }
  }
  lVar11 = func_0x03281048(plVar24,lVar19);
  *(undefined8 *)((long)puVar8 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar8 + -0xd0) = auVar45;
  lVar19 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  lVar19 = **(long **)(lVar19 + 0xb8);
  func_0x03280ab0();
  if (lVar19 != 0) {
    auVar44._8_8_ = extraout_x1_18;
    auVar44._0_8_ = lVar19;
    return auVar44;
  }
  lVar19 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  param_1 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar19 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
  if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = func_0x0325681c();
  }
  **(undefined8 **)(lVar19 + 0xb8) = param_1;
  lVar11 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = func_0x0325681c();
  }
  puVar12 = *(undefined8 **)(lVar11 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  auVar26._8_8_ = param_1;
  auVar26._0_8_ = puVar12;
  return auVar26;
}


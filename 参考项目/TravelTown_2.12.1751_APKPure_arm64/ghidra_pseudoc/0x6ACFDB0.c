/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACFDB0; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.CalculateNextBoost; status ok */


/* WARNING: Possible PIC construction at 0x06bcfea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcefd8: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06bcefdc) */
/* WARNING: Removing unreachable block (ram,0x06bcefe0) */
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
/* WARNING: Removing unreachable block (ram,0x06bcf2cc) */
/* WARNING: Removing unreachable block (ram,0x06bcf1d4) */
/* WARNING: Removing unreachable block (ram,0x06bcf2d0) */
/* WARNING: Removing unreachable block (ram,0x06bcf2f4) */
/* WARNING: Removing unreachable block (ram,0x06bcf314) */
/* WARNING: Removing unreachable block (ram,0x06bcf31c) */
/* WARNING: Removing unreachable block (ram,0x06bcf334) */
/* WARNING: Removing unreachable block (ram,0x06bcf33c) */
/* WARNING: Removing unreachable block (ram,0x06bcf364) */
/* WARNING: Removing unreachable block (ram,0x06bcf348) */
/* WARNING: Removing unreachable block (ram,0x06bcf354) */
/* WARNING: Removing unreachable block (ram,0x06bcf374) */
/* WARNING: Removing unreachable block (ram,0x06bcf3c0) */
/* WARNING: Removing unreachable block (ram,0x06bcf51c) */
/* WARNING: Removing unreachable block (ram,0x06bcf3c8) */
/* WARNING: Removing unreachable block (ram,0x06bcf3d8) */
/* WARNING: Removing unreachable block (ram,0x06bcf3e0) */
/* WARNING: Removing unreachable block (ram,0x06bcf450) */
/* WARNING: Removing unreachable block (ram,0x06bcf3ec) */
/* WARNING: Removing unreachable block (ram,0x06bcf3f8) */
/* WARNING: Removing unreachable block (ram,0x06bcf460) */
/* WARNING: Removing unreachable block (ram,0x06bcf50c) */
/* WARNING: Removing unreachable block (ram,0x06bcf384) */
/* WARNING: Removing unreachable block (ram,0x06bcf520) */
/* WARNING: Removing unreachable block (ram,0x06bcf538) */
/* WARNING: Removing unreachable block (ram,0x06bcf594) */
/* WARNING: Removing unreachable block (ram,0x06bcf698) */
/* WARNING: Removing unreachable block (ram,0x06bcf59c) */
/* WARNING: Removing unreachable block (ram,0x06bcf5b4) */
/* WARNING: Removing unreachable block (ram,0x06bcf5bc) */
/* WARNING: Removing unreachable block (ram,0x06bcf5e4) */
/* WARNING: Removing unreachable block (ram,0x06bcf5c8) */
/* WARNING: Removing unreachable block (ram,0x06bcf5d4) */
/* WARNING: Removing unreachable block (ram,0x06bcf5f4) */
/* WARNING: Removing unreachable block (ram,0x06bcf664) */
/* WARNING: Removing unreachable block (ram,0x06bcf604) */
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
/* WARNING: Removing unreachable block (ram,0x06bcfeac) */
/* WARNING: Removing unreachable block (ram,0x06bcfeb4) */
/* WARNING: Removing unreachable block (ram,0x06bcfec8) */
/* WARNING: Removing unreachable block (ram,0x06bcfed0) */
/* WARNING: Removing unreachable block (ram,0x06bcfef8) */
/* WARNING: Removing unreachable block (ram,0x06bcfedc) */
/* WARNING: Removing unreachable block (ram,0x06bcfee8) */
/* WARNING: Removing unreachable block (ram,0x06bcff08) */
/* WARNING: Removing unreachable block (ram,0x06bcff1c) */
/* WARNING: Removing unreachable block (ram,0x06bcff30) */
/* WARNING: Removing unreachable block (ram,0x06bcff38) */
/* WARNING: Removing unreachable block (ram,0x06bcff60) */
/* WARNING: Removing unreachable block (ram,0x06bcff44) */
/* WARNING: Removing unreachable block (ram,0x06bcff50) */
/* WARNING: Removing unreachable block (ram,0x06bcff70) */
/* WARNING: Removing unreachable block (ram,0x06bcff80) */
/* WARNING: Removing unreachable block (ram,0x06bcff98) */
/* WARNING: Removing unreachable block (ram,0x06bcff9c) */
/* WARNING: Removing unreachable block (ram,0x06bcffb8) */
/* WARNING: Removing unreachable block (ram,0x06bcffec) */
/* WARNING: Removing unreachable block (ram,0x06bcffc8) */
/* WARNING: Removing unreachable block (ram,0x041199a8) */
/* WARNING: Removing unreachable block (ram,0x041199c4) */
/* WARNING: Removing unreachable block (ram,0x041199cc) */
/* WARNING: Removing unreachable block (ram,0x041199f4) */
/* WARNING: Removing unreachable block (ram,0x041199d4) */
/* WARNING: Removing unreachable block (ram,0x041199f8) */
/* WARNING: Removing unreachable block (ram,0x04119a1c) */
/* WARNING: Removing unreachable block (ram,0x04119a24) */
/* WARNING: Removing unreachable block (ram,0x04119a58) */
/* WARNING: Removing unreachable block (ram,0x04119a2c) */
/* WARNING: Removing unreachable block (ram,0x04119a5c) */
/* WARNING: Removing unreachable block (ram,0x04119a74) */
/* WARNING: Removing unreachable block (ram,0x04119a80) */
/* WARNING: Removing unreachable block (ram,0x04119a90) */
/* WARNING: Removing unreachable block (ram,0x04119a9c) */
/* WARNING: Removing unreachable block (ram,0x04119a38) */
/* WARNING: Removing unreachable block (ram,0x041199e0) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined1  [16]
Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateNextBoost
          (long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
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
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  long unaff_x22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  undefined8 auStack_290 [2];
  undefined1 auStack_280 [16];
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  long lStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 auStack_1b0 [2];
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
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
  
  if ((bRam0000000007e2aa75 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0782f6d0);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_077952e0);
    func_0x03280a18(PTR_DAT_07759ab8);
    func_0x03280a18(PTR_DAT_07759ac0);
    bRam0000000007e2aa75 = 1;
  }
  puVar15 = PTR_DAT_07833e20;
  plVar23 = *(long **)(param_1 + 0x18);
  if (plVar23 == (long *)0x0) {
LAB_06bd0000:
    lVar20 = func_0x03280cac();
    if ((bRam0000000007e2aa78 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07833e20);
      bRam0000000007e2aa78 = 1;
    }
    plVar23 = *(long **)(lVar20 + 0x18);
    if (plVar23 == (long *)0x0) {
      uVar21 = func_0x03280cac();
    }
    else {
      lVar20 = *plVar23;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07833e20) {
            puVar16 = (undefined8 *)(lVar20 + (long)(*piVar22 + 5) * 0x10 + 0x138);
            goto LAB_06bd0090;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07833e20,5);
LAB_06bd0090:
      auVar41 = (*(code *)*puVar16)(plVar23,puVar16[1]);
      puVar15 = PTR_DAT_07834128;
      if ((auVar41._0_8_ & 1) == 0) {
        return auVar41;
      }
      auStack_80._0_8_ = 0x6bd0004;
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
      uVar21 = func_0x03280ca0(*(undefined8 *)puVar15);
    }
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar21;
    return auVar41;
  }
  lVar20 = *plVar23;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_06bcfe84;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  param_3 = 0;
  puVar16 = (undefined8 *)func_0x03256b10(plVar23);
LAB_06bcfe84:
  lVar20 = (*(code *)*puVar16)(plVar23,puVar16[1]);
  if (lVar20 == 0) goto LAB_06bd0000;
  uVar2 = *(uint *)(lVar20 + 0x20);
  lVar20 = *(long *)(param_1 + 0x30);
  lVar17 = *(long *)PTR_DAT_077c1cf8;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (lVar20 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar26._0_8_ = func_0x03280ca0();
    func_0x0411956c(auVar26._0_8_,lVar20,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    auVar26._8_8_ = extraout_x1;
    return auVar26;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar41 = func_0x03280b7c(uVar10,lVar17);
  lVar20 = auVar41._8_8_;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar41._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar25._0_8_ = func_0x03280ca0();
    func_0x0411bf8c(auVar25._0_8_,auVar41._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar25._8_8_ = extraout_x1_00;
    return auVar25;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar26 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar26._8_8_;
  uStack_90 = 0x3d5fed8;
  auStack_80 = auVar41;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar27._0_8_ = func_0x03280ca0();
    func_0x04132280(auVar27._0_8_,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar27._8_8_ = extraout_x1_01;
    return auVar27;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar41 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar41._8_8_;
  uStack_b0 = 0x3d5ff54;
  auStack_a0 = auVar26;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar41._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar28._0_8_ = func_0x03280ca0();
    func_0x04135278(auVar28._0_8_,auVar41._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar28._8_8_ = extraout_x1_02;
    return auVar28;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar26 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar26._8_8_;
  uStack_d0 = 0x3d5ffd0;
  auStack_c0 = auVar41;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar29._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar29._0_8_,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar29._8_8_ = extraout_x1_03;
    return auVar29;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar41 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar41._8_8_;
  uStack_f0 = 0x3d6004c;
  auStack_e0 = auVar26;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar41._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar30._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar30._0_8_,auVar41._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar30._8_8_ = extraout_x1_04;
    return auVar30;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar26 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar26._8_8_;
  uStack_110 = 0x3d600c8;
  auStack_100 = auVar41;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar31._0_8_,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar31._8_8_ = extraout_x1_05;
    return auVar31;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar41 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar41._8_8_;
  uStack_130 = 0x3d60144;
  auStack_120 = auVar26;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar41._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar32._0_8_,auVar41._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar32._8_8_ = extraout_x1_06;
    return auVar32;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar26 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar26._8_8_;
  uStack_150 = 0x3d601c0;
  auStack_140 = auVar41;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar33._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar33._0_8_,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar33._8_8_ = extraout_x1_07;
    return auVar33;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar41 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar41._8_8_;
  uStack_170 = 0x3d6023c;
  auStack_160 = auVar26;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar41._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar34._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar34._0_8_,auVar41._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar34._8_8_ = extraout_x1_08;
    return auVar34;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar26 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar26._8_8_;
  uStack_190 = 0x3d602b8;
  auStack_180 = auVar41;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar26._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar35._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 0x10))(auVar35._0_8_,auVar26._0_8_);
    auVar35._8_8_ = extraout_x1_09;
    return auVar35;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar41 = func_0x03280b7c(uVar10,lVar20);
  lVar20 = auVar41._8_8_;
  auStack_1b0[0] = 0x3d60338;
  auStack_1a0 = auVar26;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar41._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar36._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar36._0_8_,auVar41._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar36._8_8_ = extraout_x1_10;
    return auVar36;
  }
  uVar10 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar10 = func_0x05ac7464(uVar10,0);
  auVar26 = func_0x03280b7c(uVar10,lVar20);
  uStack_1d0 = 0x3d603b4;
  lVar20 = param_3;
  uStack_1c8 = (ulong)uVar2;
  auStack_1c0 = auVar41;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03256878(param_3);
  }
  puVar11 = PTR_DAT_07779d10;
  if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
    uVar10 = func_0x03280a2c(puVar11);
    uVar10 = func_0x05ac7464(uVar10,0);
    auVar41 = func_0x03280b7c(uVar10,param_3);
    uStack_1f0 = 0x3d60428;
    lVar17 = lVar20;
    lStack_1d8 = param_3;
    if (*(long *)(lVar20 + 0x38) == 0) {
      auStack_1e8 = auVar26;
      func_0x03256878(lVar20);
      auVar26 = auStack_1e8;
    }
    puVar11 = PTR_DAT_07779d10;
    auStack_1e8 = auVar26;
    if ((auVar41._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar41._8_8_ != 0)) {
      lVar17 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
      lVar19 = 0;
      puVar8 = &uStack_1d0;
      lVar20 = lStack_1d8;
      uVar10 = uStack_1f0;
      goto LAB_03d60730;
    }
    uVar10 = func_0x03280a2c(puVar11);
    uVar10 = func_0x05ac7464(uVar10,0);
    auVar26 = func_0x03280b7c(uVar10,lVar20);
    uStack_210 = 0x3d6049c;
    lVar19 = lVar17;
    lStack_1f8 = lVar20;
    if (*(long *)(lVar17 + 0x38) == 0) {
      auStack_208 = auVar41;
      func_0x03256878(lVar17);
      auVar41 = auStack_208;
    }
    puVar11 = PTR_DAT_07779d10;
    auStack_208 = auVar41;
    if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
      uVar10 = func_0x03280a2c(puVar11);
      uVar10 = func_0x05ac7464(uVar10,0);
      auVar41 = func_0x03280b7c(uVar10,lVar17);
      uStack_230 = 0x3d60510;
      lVar12 = lVar19;
      lStack_218 = lVar17;
      auStack_228 = auVar26;
      if (*(long *)(lVar19 + 0x38) == 0) {
        func_0x03256878(lVar19);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar41._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar41._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar41 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))
                            (auVar41._0_8_,auVar41._8_8_,0);
        return auVar41;
      }
      uVar10 = func_0x03280a2c(puVar11);
      uVar10 = func_0x05ac7464(uVar10,0);
      auVar26 = func_0x03280b7c(uVar10,lVar19);
      uStack_260 = 0x3d60588;
      lVar17 = lVar12;
      lVar13 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar26._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar26._8_8_ == 0)) {
        uVar10 = func_0x03280a2c(puVar11);
        uVar10 = func_0x05ac7464(uVar10,0);
        auVar41 = func_0x03280b7c(uVar10,param_4);
        auVar6._8_8_ = lVar13;
        auVar6._0_8_ = lVar17;
        uVar21 = auVar41._8_8_;
        unaff_x22 = auVar41._0_8_;
        puVar7 = auStack_290;
        auStack_290[0] = 0x3d60608;
        lVar20 = lVar17;
        lVar19 = lVar13;
        lStack_270 = lVar12;
        lStack_268 = param_4;
        auStack_280 = auVar26;
        if (*(long *)(lVar13 + 0x38) == 0) {
          func_0x03256878(lVar13);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar11 = PTR_DAT_07779d18, uVar21 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar41 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))
                              (unaff_x22,uVar21,lVar17);
          return auVar41;
        }
        uVar10 = func_0x03280a2c(puVar11);
        uVar14 = func_0x05ac7464(uVar10,0);
        uVar10 = 0x3d6068c;
        auVar26 = func_0x03280b7c(uVar14,lVar13);
        goto LAB_03d6068c;
      }
      lVar20 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      puVar9 = &uStack_230;
      uVar10 = uStack_260;
    }
    else {
      lVar20 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
      lVar12 = 0;
      puVar9 = &uStack_1f0;
      lVar19 = lStack_1f8;
      uVar10 = uStack_210;
    }
  }
  else {
    lVar19 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    lVar20 = 0;
    puVar7 = auStack_1b0;
    uVar21 = uStack_1c8;
    uVar10 = uStack_1d0;
    auVar6 = auStack_1c0;
LAB_03d6068c:
    uVar14 = auVar26._0_8_;
    puVar8 = (undefined8 *)((long)puVar7 + -0x30);
    *(undefined8 *)((long)puVar7 + -0x30) = uVar10;
    *(long *)((long)puVar7 + -0x20) = unaff_x22;
    *(ulong *)((long)puVar7 + -0x18) = uVar21;
    *(undefined1 (*) [16])((long)puVar7 + -0x10) = auVar6;
    plVar23 = *(long **)(lVar19 + 0x38);
    lVar17 = lVar19;
    if (plVar23 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar23 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531dbd0(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      puVar16 = (undefined8 *)(lVar12 + 0x38);
      *puVar16 = uVar14;
      goto SUB_032809c4;
    }
    auVar41 = func_0x03280cac();
    unaff_x22 = 0;
    uVar10 = 0x3d60730;
LAB_03d60730:
    uVar14 = auVar41._0_8_;
    puVar9 = (undefined8 *)((long)puVar8 + -0x30);
    *(undefined8 *)((long)puVar8 + -0x30) = uVar10;
    *(long *)((long)puVar8 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar26;
    *(long *)((long)puVar8 + -8) = lVar20;
    plVar23 = *(long **)(lVar17 + 0x38);
    lVar20 = lVar17;
    if (plVar23 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar23 = *(long **)(lVar17 + 0x38);
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    func_0x0531e428(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      puVar16 = (undefined8 *)(lVar13 + 0x38);
      *puVar16 = uVar14;
      goto SUB_032809c4;
    }
    auVar26 = func_0x03280cac();
    unaff_x22 = 0;
    uVar10 = 0x3d607d4;
  }
  uVar14 = auVar26._0_8_;
  *(undefined8 *)((long)puVar9 + -0x30) = uVar10;
  *(long *)((long)puVar9 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)puVar9 + -0x18) = auVar41;
  *(long *)((long)puVar9 + -8) = lVar19;
  plVar23 = *(long **)(lVar20 + 0x38);
  lVar17 = lVar20;
  if (plVar23 == (long *)0x0) {
    func_0x03256878(lVar20);
    plVar23 = *(long **)(lVar20 + 0x38);
  }
  if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  uVar10 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + 8);
  func_0x0531ec78(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    puVar16 = (undefined8 *)(lVar19 + 0x40);
    *puVar16 = uVar14;
    goto SUB_032809c4;
  }
  auVar41 = func_0x03280cac();
  uVar14 = auVar41._0_8_;
  *(undefined8 *)((long)puVar9 + -0x60) = 0x3d60878;
  *(undefined **)((long)puVar9 + -0x58) = puVar15;
  *(undefined8 *)((long)puVar9 + -0x50) = 0;
  *(undefined1 (*) [16])((long)puVar9 + -0x48) = auVar26;
  *(long *)((long)puVar9 + -0x38) = lVar12;
  plVar23 = *(long **)(lVar17 + 0x38);
  if (plVar23 == (long *)0x0) {
    func_0x03256878(lVar17);
    plVar23 = *(long **)(lVar17 + 0x38);
  }
  if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar37._0_8_ = func_0x03280ca0();
  puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x38) + 8);
  (*(code *)*puVar16)(auVar37._0_8_,0xfffffffe);
  if (auVar37._0_8_ != 0) {
    func_0x02f17738(auVar37._0_8_,*(long *)(**(long **)(lVar17 + 0x38) + 0x80) + 0xc0,uVar14);
    func_0x02f17738(auVar37._0_8_,*(long *)(**(long **)(lVar17 + 0x38) + 0x80) + 0x100,auVar41._8_8_
                   );
    func_0x02f17738(auVar37._0_8_,*(long *)(**(long **)(lVar17 + 0x38) + 0x80) + 0x80,uVar10);
    auVar37._8_8_ = extraout_x1_11;
    return auVar37;
  }
  auVar26 = func_0x03280cac();
  lVar20 = auVar26._8_8_;
  plVar23 = auVar26._0_8_;
  *(undefined8 *)((long)puVar9 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)puVar9 + -0x88) = 0;
  *(undefined1 (*) [16])((long)puVar9 + -0x80) = auVar41;
  *(long *)((long)puVar9 + -0x70) = lVar17;
  *(undefined8 *)((long)puVar9 + -0x68) = uVar10;
  puVar18 = puVar16;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar23 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar20 == 0)) {
    uVar10 = func_0x03280a2c(puVar15);
    uVar10 = func_0x05ac7464(uVar10,0);
    func_0x03280b7c(uVar10,puVar16);
LAB_03d60c04:
    func_0x03281048(plVar23);
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar19 = *plVar23;
    bVar3 = *(byte *)(lVar19 + 0x130);
    if ((*(byte *)(lVar17 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)) {
      lVar17 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar19 = *plVar23;
        bVar3 = *(byte *)(lVar19 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar19 = *plVar23;
          bVar3 = *(byte *)(lVar19 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar41 = (**(code **)(lVar19 + 0x228))(plVar23,lVar20,*(undefined8 *)(lVar19 + 0x230));
          return auVar41;
        }
      }
      goto LAB_03d60c04;
    }
    lVar17 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar17 = func_0x03280b90(plVar23,lVar17);
    if (lVar17 == 0) {
      lVar17 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar14 = func_0x03280ca0();
        func_0x04b68fa4(uVar14,plVar23,lVar20,*(undefined8 *)(puVar16[7] + 0x58));
        uVar10 = extraout_x1_13;
LAB_03d60aa4:
        auVar38._8_8_ = uVar10;
        auVar38._0_8_ = uVar14;
        return auVar38;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar14 = func_0x03280ca0();
      lVar17 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      if ((*(byte *)(lVar17 + 0x130) <= *(byte *)(*plVar23 + 0x130)) &&
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
         )) {
        func_0x04b713b0(uVar14,plVar23,lVar20,*(undefined8 *)(puVar16[7] + 0x48));
        uVar10 = extraout_x1_14;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar14 = func_0x03280ca0();
    lVar17 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar19 = func_0x03280b90(plVar23,lVar17);
    if (lVar19 != 0) {
      func_0x04b66610(uVar14,lVar19,lVar20,*(undefined8 *)(puVar16[7] + 0x30));
      uVar10 = extraout_x1_12;
      goto LAB_03d60aa4;
    }
  }
  auVar41 = func_0x03281048(plVar23,lVar17);
  lVar20 = auVar41._8_8_;
  plVar23 = auVar41._0_8_;
  *(undefined8 *)((long)puVar9 + -0xc0) = 0x3d60c18;
  *(long *)((long)puVar9 + -0xb8) = lVar17;
  *(undefined8 *)((long)puVar9 + -0xb0) = uVar14;
  *(undefined8 **)((long)puVar9 + -0xa8) = puVar16;
  *(undefined1 (*) [16])((long)puVar9 + -0xa0) = auVar26;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar23 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar20 == 0)) {
    uVar10 = func_0x03280a2c(puVar15);
    uVar10 = func_0x05ac7464(uVar10,0);
    func_0x03280b7c(uVar10,puVar18);
LAB_03d60ed8:
    func_0x03281048(plVar23);
  }
  else {
    lVar19 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar12 = *plVar23;
    bVar3 = *(byte *)(lVar12 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19)) {
      lVar19 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar12 = *plVar23;
        bVar3 = *(byte *)(lVar12 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar12 = *plVar23;
          bVar3 = *(byte *)(lVar12 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar41 = (**(code **)(lVar12 + 0x228))(plVar23,lVar20,*(undefined8 *)(lVar12 + 0x230));
          return auVar41;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar19 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar23,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar14 = func_0x03280ca0();
        func_0x04b693d0(uVar14,plVar23,lVar20,*(undefined8 *)(puVar18[7] + 0x58));
        uVar10 = extraout_x1_16;
LAB_03d60d78:
        auVar39._8_8_ = uVar10;
        auVar39._0_8_ = uVar14;
        return auVar39;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar14 = func_0x03280ca0();
      lVar19 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar23 + 0x130)) &&
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b715c8(uVar14,plVar23,lVar20,*(undefined8 *)(puVar18[7] + 0x48));
        uVar10 = extraout_x1_17;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar14 = func_0x03280ca0();
    lVar17 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar19 = func_0x03280b90(plVar23,lVar17);
    if (lVar19 != 0) {
      func_0x04b667e0(uVar14,lVar19,lVar20,*(undefined8 *)(puVar18[7] + 0x30));
      uVar10 = extraout_x1_15;
      goto LAB_03d60d78;
    }
  }
  lVar20 = func_0x03281048(plVar23,lVar17);
  *(undefined8 *)((long)puVar9 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)puVar9 + -0xd0) = auVar41;
  lVar17 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = **(long **)(lVar17 + 0xb8);
  func_0x03280ab0();
  if (lVar17 != 0) {
    auVar40._8_8_ = extraout_x1_18;
    auVar40._0_8_ = lVar17;
    return auVar40;
  }
  lVar17 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  uVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar17 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c();
  }
  **(undefined8 **)(lVar17 + 0xb8) = uVar14;
  lVar20 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = func_0x0325681c();
  }
  puVar16 = *(undefined8 **)(lVar20 + 0xb8);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar16 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  auVar24._8_8_ = uVar14;
  auVar24._0_8_ = puVar16;
  return auVar24;
}


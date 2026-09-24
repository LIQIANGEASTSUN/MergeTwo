/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACEBB4; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.CalculateAvailableBoostsByLevel; status ok */


/* WARNING: Possible PIC construction at 0x06bced18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcee70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bcee88: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06bcee8c) */
/* WARNING: Removing unreachable block (ram,0x06bcee90) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */

undefined1  [16]
Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__CalculateAvailableBoostsByLevel
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
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
  ulong extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
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
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long *plStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  
  puVar14 = PTR_DAT_07834108;
  puVar8 = (undefined8 *)&stack0xffffffffffffffb0;
  if ((bRam0000000007e2aa7a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776ab48);
    func_0x03280a18(PTR_DAT_07781880);
    func_0x03280a18(PTR_DAT_07834110);
    func_0x03280a18(PTR_DAT_077df528);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077a6e80);
    func_0x03280a18(PTR_DAT_077df530);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07754420);
    func_0x03280a18(PTR_DAT_07834118);
    func_0x03280a18(PTR_DAT_07834120);
    func_0x03280a18(PTR_DAT_07834108);
    bRam0000000007e2aa7a = 1;
  }
  uVar15 = func_0x06bd00c8(param_1);
  lVar20 = *(long *)puVar14;
  if (*(int *)(lVar20 + 0xe0) == 0) {
    func_0x03280b8c(lVar20);
    lVar20 = *(long *)puVar14;
  }
  puVar7 = PTR_DAT_077df528;
  puVar6 = PTR_DAT_07781880;
  puVar13 = PTR_DAT_07754420;
  lVar25 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x18);
  if (lVar25 == 0) {
    if (*(int *)(lVar20 + 0xe0) == 0) {
      func_0x03280b8c(lVar20);
      lVar20 = *(long *)puVar14;
    }
    uVar27 = **(undefined8 **)(lVar20 + 0xb8);
    uVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077df530);
    func_0x05356664(uVar15,uVar27,*(undefined8 *)PTR_DAT_07834118,0);
    puVar16 = (undefined8 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x18);
    *puVar16 = uVar15;
    goto SUB_032809c4;
  }
  uVar15 = func_0x03d504ac(uVar15,lVar25,*(undefined8 *)PTR_DAT_077df528);
  uVar27 = func_0x03d3c59c(uVar15,*(undefined8 *)puVar6);
  lVar20 = func_0x03280afc(*(undefined8 *)puVar13,1);
  plVar28 = *(long **)(param_1 + 6);
  if (plVar28 == (long *)0x0) {
LAB_06bceeb4:
    func_0x03280cac();
LAB_06bceeb8:
    uVar15 = func_0x03280cb4();
    puVar5 = PTR_DAT_07834128;
    uStack_a0 = 0x6bceebc;
    puStack_90 = puVar7;
    puStack_88 = puVar6;
    puStack_80 = puVar13;
    puStack_78 = puVar14;
    plStack_70 = plVar28;
    lStack_68 = lVar25;
    uStack_60 = uVar27;
    puStack_58 = param_1;
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
    lVar20 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x057da5fc(lVar20,0);
    if (lVar20 != 0) {
      puVar16 = (undefined8 *)(lVar20 + 0x10);
      *puVar16 = uVar15;
      goto SUB_032809c4;
    }
    func_0x03280cac();
    auVar48 = func_0x03280cb4();
    param_1 = auVar48._8_8_;
    lVar25 = auVar48._0_8_;
    uStack_d0 = 0x6bcf2d4;
    puStack_c8 = puVar14;
    puStack_b8 = puVar5;
    plStack_c0 = plVar28;
    lStack_b0 = lVar20;
    uStack_a8 = uVar15;
    if ((bRam0000000007e2aa71 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f6d0);
      func_0x03280a18(PTR_DAT_07833e20);
      bRam0000000007e2aa71 = 1;
    }
    puVar13 = PTR_DAT_07833e20;
    plVar26 = *(long **)(lVar25 + 0x18);
    lVar20 = lVar25;
    if (plVar26 == (long *)0x0) {
LAB_06bcf51c:
      uVar15 = 0x6bcf520;
      lVar25 = func_0x03280cac();
    }
    else {
      lVar17 = *plVar26;
      uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07833e20) {
            puVar16 = (undefined8 *)(lVar17 + (long)(*piVar22 + 5) * 0x10 + 0x138);
            goto LAB_06bcf374;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_07833e20,5);
LAB_06bcf374:
      uVar21 = (*(code *)*puVar16)(plVar26,puVar16[1]);
      plVar28 = (long *)puVar13;
      if ((uVar21 & 1) == 0) {
        plVar23 = *(long **)(lVar25 + 0x18);
        lVar20 = 0;
        if (plVar23 != (long *)0x0) {
          lVar20 = *plVar23;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar13) {
                puVar16 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_06bcf460;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar13,1);
LAB_06bcf460:
          uVar12 = (*(code *)*puVar16)(plVar23,puVar16[1]);
          *param_1 = uVar12;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = extraout_x1_19;
          return auVar48 << 0x40;
        }
        goto LAB_06bcf51c;
      }
      uVar15 = 0x6bcf38c;
    }
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
    plVar23 = *(long **)(lVar25 + 0x18);
    if (plVar23 == (long *)0x0) {
      auVar48 = func_0x03280cac();
      auVar43._8_8_ = auVar48._8_8_;
      auVar43._0_8_ = *(undefined8 *)(auVar48._0_8_ + 0x30);
      return auVar43;
    }
    lVar17 = *plVar23;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar16 = (undefined8 *)(lVar17 + (long)(*piVar22 + 6) * 0x10 + 0x138);
          goto LAB_06bcf5f4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07833e20,6);
LAB_06bcf5f4:
    uVar21 = (*(code *)*puVar16)(plVar23,puVar16[1]);
    if ((uVar21 & 1) == 0) {
      auVar49._0_8_ = func_0x03280ca0(*(undefined8 *)PTR_DAT_07759a10);
      func_0x04119444(auVar49._0_8_,*(undefined8 *)PTR_DAT_07759a18);
      auVar49._8_8_ = extraout_x1_20;
      return auVar49;
    }
    uVar24 = *(undefined8 *)(lVar25 + 0x38);
    uVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a3990);
    param_4 = 0;
    func_0x05353d24(uVar27,lVar25,*(undefined8 *)PTR_DAT_07834150);
    lVar19 = *(long *)PTR_DAT_077e5590;
    lVar25 = func_0x03d86d00(uVar24,uVar27);
    lVar17 = *(long *)PTR_DAT_077c1cf8;
    puVar8 = &uStack_d0;
  }
  else {
    lVar25 = *plVar28;
    uVar21 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar16 = (undefined8 *)(lVar25 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_06bcedac;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_07833e20,1);
LAB_06bcedac:
    uVar12 = (*(code *)*puVar16)(plVar28,puVar16[1]);
    puVar5 = PTR_DAT_0776ab48;
    lVar25 = lVar20;
    if (lVar20 == 0) goto LAB_06bceeb4;
    if (*(int *)(lVar20 + 0x18) == 0) goto LAB_06bceeb8;
    *(undefined4 *)(lVar20 + 0x20) = uVar12;
    lVar20 = func_0x03d37138(lVar20,uVar27,*(undefined8 *)puVar5);
    lVar25 = *(long *)puVar14;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c(lVar25);
      lVar25 = *(long *)puVar14;
    }
    puVar13 = PTR_DAT_077c1cf8;
    plVar26 = *(long **)(*(long *)(lVar25 + 0xb8) + 0x20);
    if (plVar26 == (long *)0x0) {
      if (*(int *)(lVar25 + 0xe0) == 0) {
        func_0x03280b8c(lVar25);
        lVar25 = *(long *)puVar14;
      }
      uVar27 = **(undefined8 **)(lVar25 + 0xb8);
      uVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077a6e80);
      func_0x05353e8c(uVar15,uVar27,*(undefined8 *)PTR_DAT_07834120,0);
      puVar16 = (undefined8 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x20);
      *puVar16 = uVar15;
      goto SUB_032809c4;
    }
    lVar19 = *(long *)PTR_DAT_07834110;
    lVar25 = func_0x03d4aee0(lVar20,plVar26);
    lVar17 = *(long *)puVar13;
    uVar15 = 0x6bcee8c;
  }
  *(undefined8 *)((long)puVar8 + -0x20) = uVar15;
  *(long *)((long)puVar8 + -0x10) = lVar20;
  *(undefined4 **)((long)puVar8 + -8) = param_1;
  if (*(long *)(lVar17 + 0x38) == 0) {
    func_0x03256878(lVar17);
  }
  if (lVar25 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar30._0_8_ = func_0x03280ca0();
    func_0x0411956c(auVar30._0_8_,lVar25,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
    auVar30._8_8_ = extraout_x1;
    return auVar30;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar17);
  lVar20 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x40) = 0x3d5fe5c;
  *(undefined8 *)((long)puVar8 + -0x30) = 0;
  *(long *)((long)puVar8 + -0x28) = lVar17;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar31._0_8_ = func_0x03280ca0();
    func_0x0411bf8c(auVar31._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar31._8_8_ = extraout_x1_00;
    return auVar31;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar20);
  lVar25 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x60) = 0x3d5fed8;
  *(undefined8 *)((long)puVar8 + -0x50) = 0;
  *(long *)((long)puVar8 + -0x48) = lVar20;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar32._0_8_ = func_0x03280ca0();
    func_0x04132280(auVar32._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    auVar32._8_8_ = extraout_x1_01;
    return auVar32;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar25);
  lVar20 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x80) = 0x3d5ff54;
  *(undefined8 *)((long)puVar8 + -0x70) = 0;
  *(long *)((long)puVar8 + -0x68) = lVar25;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar33._0_8_ = func_0x03280ca0();
    func_0x04135278(auVar33._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar33._8_8_ = extraout_x1_02;
    return auVar33;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar20);
  lVar25 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0xa0) = 0x3d5ffd0;
  *(undefined8 *)((long)puVar8 + -0x90) = 0;
  *(long *)((long)puVar8 + -0x88) = lVar20;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar34._0_8_ = func_0x03280ca0();
    func_0x04143d60(auVar34._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    auVar34._8_8_ = extraout_x1_03;
    return auVar34;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar25);
  lVar20 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0xc0) = 0x3d6004c;
  *(undefined8 *)((long)puVar8 + -0xb0) = 0;
  *(long *)((long)puVar8 + -0xa8) = lVar25;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar35._0_8_ = func_0x03280ca0();
    func_0x0419ce74(auVar35._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar35._8_8_ = extraout_x1_04;
    return auVar35;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar20);
  lVar25 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0xe0) = 0x3d600c8;
  *(undefined8 *)((long)puVar8 + -0xd0) = 0;
  *(long *)((long)puVar8 + -200) = lVar20;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar36._0_8_ = func_0x03280ca0();
    func_0x041c2810(auVar36._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    auVar36._8_8_ = extraout_x1_05;
    return auVar36;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar25);
  lVar20 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x100) = 0x3d60144;
  *(undefined8 *)((long)puVar8 + -0xf0) = 0;
  *(long *)((long)puVar8 + -0xe8) = lVar25;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar37._0_8_ = func_0x03280ca0();
    func_0x041ddb58(auVar37._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar37._8_8_ = extraout_x1_06;
    return auVar37;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar20);
  lVar25 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x120) = 0x3d601c0;
  *(undefined8 *)((long)puVar8 + -0x110) = 0;
  *(long *)((long)puVar8 + -0x108) = lVar20;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar38._0_8_ = func_0x03280ca0();
    func_0x041e617c(auVar38._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    auVar38._8_8_ = extraout_x1_07;
    return auVar38;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar25);
  lVar20 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x140) = 0x3d6023c;
  *(undefined8 *)((long)puVar8 + -0x130) = 0;
  *(long *)((long)puVar8 + -0x128) = lVar25;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar39._0_8_ = func_0x03280ca0();
    func_0x041e8ba0(auVar39._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar39._8_8_ = extraout_x1_08;
    return auVar39;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar20);
  lVar25 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x160) = 0x3d602b8;
  *(undefined8 *)((long)puVar8 + -0x150) = 0;
  *(long *)((long)puVar8 + -0x148) = lVar20;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar40._0_8_ = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))(auVar40._0_8_,auVar48._0_8_);
    auVar40._8_8_ = extraout_x1_09;
    return auVar40;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar25);
  lVar20 = auVar48._8_8_;
  *(undefined8 *)((long)puVar8 + -0x180) = 0x3d60338;
  *(undefined8 *)((long)puVar8 + -0x170) = 0;
  *(long *)((long)puVar8 + -0x168) = lVar25;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  if (auVar48._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    auVar41._0_8_ = func_0x03280ca0();
    func_0x0420cec8(auVar41._0_8_,auVar48._0_8_,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 0x10));
    auVar41._8_8_ = extraout_x1_10;
    return auVar41;
  }
  uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar15 = func_0x05ac7464(uVar15,0);
  auVar48 = func_0x03280b7c(uVar15,lVar20);
  *(undefined8 *)((long)puVar8 + -0x1a0) = 0x3d603b4;
  *(long **)((long)puVar8 + -0x198) = plVar26;
  *(undefined8 *)((long)puVar8 + -400) = 0;
  *(long *)((long)puVar8 + -0x188) = lVar20;
  lVar20 = lVar19;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  puVar13 = PTR_DAT_07779d10;
  if ((auVar48._0_8_ == 0) || (puVar13 = PTR_DAT_07779d18, auVar48._8_8_ == 0)) {
    uVar15 = func_0x03280a2c(puVar13);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar43 = func_0x03280b7c(uVar15,lVar19);
    *(undefined8 *)((long)puVar8 + -0x1c0) = 0x3d60428;
    *(undefined1 (*) [16])((long)puVar8 + -0x1b8) = auVar48;
    *(long *)((long)puVar8 + -0x1a8) = lVar19;
    lVar25 = lVar20;
    if (*(long *)(lVar20 + 0x38) == 0) {
      func_0x03256878(lVar20);
    }
    puVar13 = PTR_DAT_07779d10;
    if ((auVar43._0_8_ != 0) && (puVar13 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
      lVar25 = *(long *)((long)puVar8 + -0x1a8);
      lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
      uVar24 = 0;
      puVar10 = (undefined1 *)((long)puVar8 + -0x1a0);
      uVar27 = *(undefined8 *)((long)puVar8 + -0x1c0);
      auVar48 = *(undefined1 (*) [16])((long)puVar8 + -0x1b8);
      goto LAB_03d60730;
    }
    uVar15 = func_0x03280a2c(puVar13);
    uVar15 = func_0x05ac7464(uVar15,0);
    auVar48 = func_0x03280b7c(uVar15,lVar20);
    *(undefined8 *)((long)puVar8 + -0x1e0) = 0x3d6049c;
    *(undefined1 (*) [16])((long)puVar8 + -0x1d8) = auVar43;
    *(long *)((long)puVar8 + -0x1c8) = lVar20;
    lVar20 = lVar25;
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
    puVar13 = PTR_DAT_07779d10;
    if ((auVar48._0_8_ == 0) || (puVar13 = PTR_DAT_07779d18, auVar48._8_8_ == 0)) {
      uVar15 = func_0x03280a2c(puVar13);
      uVar15 = func_0x05ac7464(uVar15,0);
      auVar43 = func_0x03280b7c(uVar15,lVar25);
      *(undefined8 *)((long)puVar8 + -0x200) = 0x3d60510;
      *(undefined1 (*) [16])((long)puVar8 + -0x1f8) = auVar48;
      *(long *)((long)puVar8 + -0x1e8) = lVar25;
      lVar25 = lVar20;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar13 = PTR_DAT_07779d10;
      if ((auVar43._0_8_ != 0) && (puVar13 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar48 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))
                            (auVar43._0_8_,auVar43._8_8_,0);
        return auVar48;
      }
      uVar15 = func_0x03280a2c(puVar13);
      uVar15 = func_0x05ac7464(uVar15,0);
      auVar48 = func_0x03280b7c(uVar15,lVar20);
      *(undefined8 *)((long)puVar8 + -0x230) = 0x3d60588;
      *(long **)((long)puVar8 + -0x220) = plVar28;
      *(undefined1 (*) [16])((long)puVar8 + -0x218) = auVar43;
      *(long *)((long)puVar8 + -0x208) = lVar20;
      lVar20 = lVar25;
      lVar17 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar13 = PTR_DAT_07779d10;
      if ((auVar48._0_8_ == 0) || (puVar13 = PTR_DAT_07779d18, auVar48._8_8_ == 0)) {
        uVar15 = func_0x03280a2c(puVar13);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar42 = func_0x03280b7c(uVar15,param_4);
        puVar9 = (undefined1 *)((long)puVar8 + -0x260);
        *(undefined8 *)((long)puVar8 + -0x260) = 0x3d60608;
        *(undefined1 (*) [16])((long)puVar8 + -0x250) = auVar48;
        *(long *)((long)puVar8 + -0x240) = lVar25;
        *(long *)((long)puVar8 + -0x238) = param_4;
        lVar25 = lVar20;
        lVar19 = lVar17;
        if (*(long *)(lVar17 + 0x38) == 0) {
          func_0x03256878(lVar17);
        }
        puVar13 = PTR_DAT_07779d10;
        if ((auVar42._0_8_ != 0) && (puVar13 = PTR_DAT_07779d18, auVar42._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar48 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 0x10))
                              (auVar42._0_8_,auVar42._8_8_,lVar20);
          return auVar48;
        }
        uVar15 = func_0x03280a2c(puVar13);
        uVar15 = func_0x05ac7464(uVar15,0);
        uVar27 = 0x3d6068c;
        auVar48 = func_0x03280b7c(uVar15,lVar17);
        goto LAB_03d6068c;
      }
      lVar17 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      uVar24 = *(undefined8 *)((long)puVar8 + -0x208);
      plVar28 = *(long **)((long)puVar8 + -0x220);
      auVar43 = *(undefined1 (*) [16])((long)puVar8 + -0x218);
      puVar11 = (undefined1 *)((long)puVar8 + -0x200);
      uVar27 = *(undefined8 *)((long)puVar8 + -0x230);
    }
    else {
      uVar24 = *(undefined8 *)((long)puVar8 + -0x1c8);
      lVar17 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      lVar25 = 0;
      puVar11 = (undefined1 *)((long)puVar8 + -0x1c0);
      uVar27 = *(undefined8 *)((long)puVar8 + -0x1e0);
      auVar43 = *(undefined1 (*) [16])((long)puVar8 + -0x1d8);
    }
  }
  else {
    lVar20 = *(long *)((long)puVar8 + -400);
    lVar17 = *(long *)((long)puVar8 + -0x188);
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    lVar25 = 0;
    puVar9 = (undefined1 *)((long)puVar8 + -0x180);
    uVar27 = *(undefined8 *)((long)puVar8 + -0x1a0);
    auVar42._8_8_ = *(undefined8 *)((long)puVar8 + -0x198);
    auVar42._0_8_ = plVar28;
LAB_03d6068c:
    uVar15 = auVar48._0_8_;
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = uVar27;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar42;
    *(long *)(puVar9 + -0x10) = lVar20;
    *(long *)(puVar9 + -8) = lVar17;
    plVar28 = *(long **)(lVar19 + 0x38);
    lVar20 = lVar19;
    if (plVar28 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar28 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    uVar24 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531dbd0(lVar17,0xfffffffe);
    if (lVar17 != 0) {
      puVar16 = (undefined8 *)(lVar17 + 0x38);
      *puVar16 = uVar15;
      goto SUB_032809c4;
    }
    uVar27 = 0x3d60730;
    auVar43 = func_0x03280cac();
    plVar28 = (long *)0x0;
LAB_03d60730:
    uVar15 = auVar43._0_8_;
    puVar11 = puVar10 + -0x30;
    *(undefined8 *)(puVar10 + -0x30) = uVar27;
    *(long **)(puVar10 + -0x20) = plVar28;
    *(undefined1 (*) [16])(puVar10 + -0x18) = auVar48;
    *(long *)(puVar10 + -8) = lVar25;
    plVar28 = *(long **)(lVar20 + 0x38);
    lVar17 = lVar20;
    if (plVar28 == (long *)0x0) {
      func_0x03256878(lVar20);
      plVar28 = *(long **)(lVar20 + 0x38);
    }
    if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    lVar25 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    func_0x0531e428(lVar19,0xfffffffe);
    if (lVar19 != 0) {
      puVar16 = (undefined8 *)(lVar19 + 0x38);
      *puVar16 = uVar15;
      goto SUB_032809c4;
    }
    uVar27 = 0x3d607d4;
    auVar48 = func_0x03280cac();
    plVar28 = (long *)0x0;
  }
  uVar15 = auVar48._0_8_;
  *(undefined8 *)(puVar11 + -0x30) = uVar27;
  *(long **)(puVar11 + -0x20) = plVar28;
  *(undefined1 (*) [16])(puVar11 + -0x18) = auVar43;
  *(undefined8 *)(puVar11 + -8) = uVar24;
  plVar28 = *(long **)(lVar17 + 0x38);
  lVar20 = lVar17;
  if (plVar28 == (long *)0x0) {
    func_0x03256878(lVar17);
    plVar28 = *(long **)(lVar17 + 0x38);
  }
  if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar19 = func_0x03280ca0();
  uVar27 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
  func_0x0531ec78(lVar19,0xfffffffe);
  if (lVar19 != 0) {
    puVar16 = (undefined8 *)(lVar19 + 0x40);
    *puVar16 = uVar15;
    goto SUB_032809c4;
  }
  auVar43 = func_0x03280cac();
  uVar15 = auVar43._0_8_;
  *(undefined8 *)(puVar11 + -0x60) = 0x3d60878;
  *(undefined **)(puVar11 + -0x58) = puVar14;
  *(undefined8 *)(puVar11 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar11 + -0x48) = auVar48;
  *(long *)(puVar11 + -0x38) = lVar25;
  plVar28 = *(long **)(lVar20 + 0x38);
  if (plVar28 == (long *)0x0) {
    func_0x03256878(lVar20);
    plVar28 = *(long **)(lVar20 + 0x38);
  }
  if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  auVar44._0_8_ = func_0x03280ca0();
  puVar16 = *(undefined8 **)(*(long *)(lVar20 + 0x38) + 8);
  (*(code *)*puVar16)(auVar44._0_8_,0xfffffffe);
  if (auVar44._0_8_ != 0) {
    func_0x02f17738(auVar44._0_8_,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0xc0,uVar15);
    func_0x02f17738(auVar44._0_8_,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0x100,auVar43._8_8_
                   );
    func_0x02f17738(auVar44._0_8_,*(long *)(**(long **)(lVar20 + 0x38) + 0x80) + 0x80,uVar27);
    auVar44._8_8_ = extraout_x1_11;
    return auVar44;
  }
  auVar48 = func_0x03280cac();
  lVar25 = auVar48._8_8_;
  plVar28 = auVar48._0_8_;
  *(undefined8 *)(puVar11 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar11 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar11 + -0x80) = auVar43;
  *(long *)(puVar11 + -0x70) = lVar20;
  *(undefined8 *)(puVar11 + -0x68) = uVar27;
  puVar18 = puVar16;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar14 = PTR_DAT_07774b08;
  if ((plVar28 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar25 == 0)) {
    uVar27 = func_0x03280a2c(puVar14);
    uVar27 = func_0x05ac7464(uVar27,0);
    func_0x03280b7c(uVar27,puVar16);
LAB_03d60c04:
    func_0x03281048(plVar28);
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c();
    }
    lVar17 = *plVar28;
    bVar2 = *(byte *)(lVar17 + 0x130);
    if ((*(byte *)(lVar20 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20)) {
      lVar20 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
        lVar17 = *plVar28;
        bVar2 = *(byte *)(lVar17 + 0x130);
      }
      if ((*(byte *)(lVar20 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20))
      {
        lVar20 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
          lVar17 = *plVar28;
          bVar2 = *(byte *)(lVar17 + 0x130);
        }
        if ((*(byte *)(lVar20 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar48 = (**(code **)(lVar17 + 0x228))(plVar28,lVar25,*(undefined8 *)(lVar17 + 0x230));
          return auVar48;
        }
      }
      goto LAB_03d60c04;
    }
    lVar20 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar20 = func_0x03280b90(plVar28,lVar20);
    if (lVar20 == 0) {
      lVar20 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar28 + 0x130) < *(byte *)(lVar20 + 0x130)) ||
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) != lVar20
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar15 = func_0x03280ca0();
        func_0x04b68fa4(uVar15,plVar28,lVar25,*(undefined8 *)(puVar16[7] + 0x58));
        uVar27 = extraout_x1_13;
LAB_03d60aa4:
        auVar45._8_8_ = uVar27;
        auVar45._0_8_ = uVar15;
        return auVar45;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar15 = func_0x03280ca0();
      lVar20 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar28 + 0x130)) &&
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b713b0(uVar15,plVar28,lVar25,*(undefined8 *)(puVar16[7] + 0x48));
        uVar27 = extraout_x1_14;
        goto LAB_03d60aa4;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar15 = func_0x03280ca0();
    lVar20 = *(long *)(puVar16[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar17 = func_0x03280b90(plVar28,lVar20);
    if (lVar17 != 0) {
      func_0x04b66610(uVar15,lVar17,lVar25,*(undefined8 *)(puVar16[7] + 0x30));
      uVar27 = extraout_x1_12;
      goto LAB_03d60aa4;
    }
  }
  auVar43 = func_0x03281048(plVar28,lVar20);
  lVar25 = auVar43._8_8_;
  plVar28 = auVar43._0_8_;
  *(undefined8 *)(puVar11 + -0xc0) = 0x3d60c18;
  *(long *)(puVar11 + -0xb8) = lVar20;
  *(undefined8 *)(puVar11 + -0xb0) = uVar15;
  *(undefined8 **)(puVar11 + -0xa8) = puVar16;
  *(undefined1 (*) [16])(puVar11 + -0xa0) = auVar48;
  if (puVar18[7] == 0) {
    func_0x03256878(puVar18);
  }
  puVar14 = PTR_DAT_07774b08;
  if ((plVar28 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar25 == 0)) {
    uVar15 = func_0x03280a2c(puVar14);
    uVar15 = func_0x05ac7464(uVar15,0);
    func_0x03280b7c(uVar15,puVar18);
LAB_03d60ed8:
    func_0x03281048(plVar28);
  }
  else {
    lVar17 = *(long *)(puVar18[7] + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c();
    }
    lVar19 = *plVar28;
    bVar2 = *(byte *)(lVar19 + 0x130);
    if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17)) {
      lVar17 = *(long *)(puVar18[7] + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
        lVar19 = *plVar28;
        bVar2 = *(byte *)(lVar19 + 0x130);
      }
      if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17))
      {
        lVar17 = *(long *)(puVar18[7] + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c(lVar17);
          lVar19 = *plVar28;
          bVar2 = *(byte *)(lVar19 + 0x130);
        }
        if ((*(byte *)(lVar17 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar48 = (**(code **)(lVar19 + 0x228))(plVar28,lVar25,*(undefined8 *)(lVar19 + 0x230));
          return auVar48;
        }
      }
      goto LAB_03d60ed8;
    }
    lVar17 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = func_0x0325681c(lVar17);
    }
    lVar17 = func_0x03280b90(plVar28,lVar17);
    if (lVar17 == 0) {
      lVar17 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar28 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) != lVar17
         )) {
        if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar27 = func_0x03280ca0();
        func_0x04b693d0(uVar27,plVar28,lVar25,*(undefined8 *)(puVar18[7] + 0x58));
        uVar15 = extraout_x1_16;
LAB_03d60d78:
        auVar46._8_8_ = uVar15;
        auVar46._0_8_ = uVar27;
        return auVar46;
      }
      if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar27 = func_0x03280ca0();
      lVar17 = *(long *)(puVar18[7] + 0x38);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = func_0x0325681c(lVar17);
      }
      if ((*(byte *)(lVar17 + 0x130) <= *(byte *)(*plVar28 + 0x130)) &&
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8) == lVar17
         )) {
        func_0x04b715c8(uVar27,plVar28,lVar25,*(undefined8 *)(puVar18[7] + 0x48));
        uVar15 = extraout_x1_17;
        goto LAB_03d60d78;
      }
      goto LAB_03d60ed8;
    }
    if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar27 = func_0x03280ca0();
    lVar20 = *(long *)(puVar18[7] + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar17 = func_0x03280b90(plVar28,lVar20);
    if (lVar17 != 0) {
      func_0x04b667e0(uVar27,lVar17,lVar25,*(undefined8 *)(puVar18[7] + 0x30));
      uVar15 = extraout_x1_15;
      goto LAB_03d60d78;
    }
  }
  lVar20 = func_0x03281048(plVar28,lVar20);
  *(undefined8 *)(puVar11 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar11 + -0xd0) = auVar43;
  lVar25 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = **(long **)(lVar25 + 0xb8);
  func_0x03280ab0();
  if (lVar25 != 0) {
    auVar47._8_8_ = extraout_x1_18;
    auVar47._0_8_ = lVar25;
    return auVar47;
  }
  lVar25 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  uVar15 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x18));
  func_0x03280ab0();
  lVar25 = *(long *)(lVar20 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  **(undefined8 **)(lVar25 + 0xb8) = uVar15;
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  auVar29._8_8_ = uVar15;
  auVar29._0_8_ = puVar16;
  return auVar29;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x4C03AD8; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.AnalyzeBoardToolChains; status ok */


/* WARNING: Possible PIC construction at 0x04d03c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d03c0c) */
/* WARNING: Removing unreachable block (ram,0x04d03ca8) */
/* WARNING: Removing unreachable block (ram,0x04d03cf0) */
/* WARNING: Removing unreachable block (ram,0x04d03d28) */
/* WARNING: Removing unreachable block (ram,0x04d03d3c) */
/* WARNING: Removing unreachable block (ram,0x04d03d50) */
/* WARNING: Removing unreachable block (ram,0x04d03dc8) */
/* WARNING: Removing unreachable block (ram,0x04d03d60) */
/* WARNING: Removing unreachable block (ram,0x04d03d6c) */
/* WARNING: Removing unreachable block (ram,0x04d03dfc) */
/* WARNING: Removing unreachable block (ram,0x04d03d74) */
/* WARNING: Removing unreachable block (ram,0x04d03e00) */
/* WARNING: Removing unreachable block (ram,0x04d03e04) */
/* WARNING: Removing unreachable block (ram,0x04d03e6c) */
/* WARNING: Removing unreachable block (ram,0x04d03e78) */
/* WARNING: Removing unreachable block (ram,0x04d03ddc) */
/* WARNING: Removing unreachable block (ram,0x04d03ea0) */
/* WARNING: Removing unreachable block (ram,0x04d03ea8) */
/* WARNING: Removing unreachable block (ram,0x04d03eb4) */
/* WARNING: Removing unreachable block (ram,0x04d03ecc) */
/* WARNING: Removing unreachable block (ram,0x04d03ed4) */
/* WARNING: Removing unreachable block (ram,0x04d03f08) */
/* WARNING: Removing unreachable block (ram,0x04d03f28) */
/* WARNING: Removing unreachable block (ram,0x04d03f30) */
/* WARNING: Removing unreachable block (ram,0x04d03f4c) */
/* WARNING: Removing unreachable block (ram,0x04d03f5c) */
/* WARNING: Removing unreachable block (ram,0x04d03f60) */
/* WARNING: Removing unreachable block (ram,0x04d03fbc) */
/* WARNING: Removing unreachable block (ram,0x04d03f78) */
/* WARNING: Removing unreachable block (ram,0x04d03f84) */
/* WARNING: Removing unreachable block (ram,0x04d03f88) */
/* WARNING: Removing unreachable block (ram,0x04d03fa4) */
/* WARNING: Removing unreachable block (ram,0x04d03d90) */
/* WARNING: Removing unreachable block (ram,0x04d03db4) */
/* WARNING: Removing unreachable block (ram,0x04d03da0) */
/* WARNING: Removing unreachable block (ram,0x04d03d00) */

long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___AnalyzeBoardToolChains
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar11 = PTR_DAT_0777ff68;
  puVar7 = (undefined8 *)auStack_c0;
  lVar19 = param_3;
  if ((bRam0000000007e1ae70 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff80);
    func_0x03280a18(PTR_DAT_0777ff70);
    func_0x03280a18(PTR_DAT_0777ff68);
    func_0x03280a18(PTR_DAT_0777ff88);
    func_0x03280a18(PTR_DAT_0777ff90);
    func_0x03280a18(PTR_DAT_0777ff98);
    func_0x03280a18(PTR_DAT_0777ffa0);
    func_0x03280a18(PTR_DAT_0777ffa8);
    func_0x03280a18(PTR_DAT_0777ffb0);
    func_0x03280a18(PTR_DAT_0777ffb8);
    func_0x03280a18(PTR_DAT_0777ffc0);
    func_0x03280a18(PTR_DAT_0777ffc8);
    func_0x03280a18(PTR_DAT_0777ffd0);
    func_0x03280a18(PTR_DAT_0777ffd8);
    func_0x03280a18(PTR_DAT_0777ff78);
    bRam0000000007e1ae70 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar14 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60);
  uStack_110 = 0x4d03c0c;
  puStack_108 = puVar11;
  if ((bRam0000000007e1ae72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ffe0);
    func_0x03280a18(PTR_DAT_0777ffe8);
    func_0x03280a18(PTR_DAT_0777fff0);
    func_0x03280a18(PTR_DAT_0777fff8);
    func_0x03280a18(PTR_DAT_07780000);
    func_0x03280a18(PTR_DAT_07780008);
    bRam0000000007e1ae72 = 1;
  }
  if (param_1 == 0) {
    auVar22 = func_0x03280cac();
    puVar6 = PTR_DAT_07780038;
    puVar5 = PTR_DAT_07780030;
    puVar4 = PTR_DAT_07780028;
    puVar3 = PTR_DAT_07780020;
    puVar2 = PTR_DAT_07780018;
    puVar11 = PTR_DAT_07780010;
    if ((bRam0000000007e1ae73 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780030);
      func_0x03280a18(PTR_DAT_07780018);
      func_0x03280a18(PTR_DAT_07780038);
      func_0x03280a18(PTR_DAT_07780028);
      func_0x03280a18(PTR_DAT_07780010);
      func_0x03280a18(PTR_DAT_07780020);
      bRam0000000007e1ae73 = 1;
    }
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar11);
    func_0x053569b8(uVar12,auVar22._0_8_,
                    *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x88),0);
    uVar12 = func_0x03d50a94(auVar22._8_8_,uVar12,*(undefined8 *)puVar2);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar3);
    lVar17 = 0;
    func_0x05355fbc(uVar21,auVar22._0_8_,
                    *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x90));
    lVar20 = *(long *)puVar4;
    uVar12 = func_0x03d872a8(uVar12,uVar21);
    lVar19 = func_0x03d3c654(uVar12,*(undefined8 *)puVar5);
    lVar13 = *(long *)puVar6;
    param_5 = 0x7e1a000;
    puVar7 = &uStack_110;
    uVar12 = 0x4d041ec;
    param_2 = 0;
  }
  else {
    uVar12 = func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_07780008);
    lVar19 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
    }
    lVar19 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    puVar4 = PTR_DAT_0777fff8;
    puVar3 = PTR_DAT_0777fff0;
    puVar2 = PTR_DAT_0777ffe8;
    puVar11 = PTR_DAT_0777ffe0;
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x10);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar19 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      uVar21 = **(undefined8 **)(lVar19 + 0xb8);
      lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
      func_0x05355fbc(lVar19,uVar21,
                      *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x78),0);
      lVar20 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
      lVar13 = *(long *)(lVar20 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
        lVar20 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar13 + 0xb8) + 0x10) = lVar19;
      lVar13 = *(long *)(lVar20 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar13 + 0xb8) + 0x10,lVar19);
    }
    uVar12 = func_0x03d872a8(uVar12,lVar19,*(undefined8 *)puVar3);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar4);
    lVar17 = 0;
    func_0x053569b8(uVar21,param_1,
                    *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x80));
    lVar20 = *(long *)puVar11;
    lVar19 = func_0x03d50a94(uVar12,uVar21);
    lVar13 = *(long *)puVar2;
    lVar14 = param_3;
    uVar12 = uStack_110;
  }
  *(undefined8 *)((long)puVar7 + -0x20) = uVar12;
  *(long *)((long)puVar7 + -0x10) = lVar14;
  *(undefined8 *)((long)puVar7 + -8) = param_2;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (lVar19 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x04143d60(lVar14,lVar19,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
    return lVar14;
  }
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar13);
  lVar19 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0x40) = 0x3d6004c;
  *(undefined8 *)((long)puVar7 + -0x30) = 0;
  *(long *)((long)puVar7 + -0x28) = lVar13;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0419ce74(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar14;
  }
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar19);
  lVar14 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0x60) = 0x3d600c8;
  *(undefined8 *)((long)puVar7 + -0x50) = 0;
  *(long *)((long)puVar7 + -0x48) = lVar19;
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
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar14);
  lVar19 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0x80) = 0x3d60144;
  *(undefined8 *)((long)puVar7 + -0x70) = 0;
  *(long *)((long)puVar7 + -0x68) = lVar14;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041ddb58(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar14;
  }
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar19);
  lVar14 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0xa0) = 0x3d601c0;
  *(undefined8 *)((long)puVar7 + -0x90) = 0;
  *(long *)((long)puVar7 + -0x88) = lVar19;
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
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar14);
  lVar19 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d6023c;
  *(undefined8 *)((long)puVar7 + -0xb0) = 0;
  *(long *)((long)puVar7 + -0xa8) = lVar14;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x041e8ba0(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar14;
  }
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar19);
  lVar14 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d602b8;
  *(undefined8 *)((long)puVar7 + -0xd0) = 0;
  *(long *)((long)puVar7 + -200) = lVar19;
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
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar14);
  lVar19 = auVar22._8_8_;
  *(undefined8 *)((long)puVar7 + -0x100) = 0x3d60338;
  *(undefined8 *)((long)puVar7 + -0xf0) = 0;
  *(long *)((long)puVar7 + -0xe8) = lVar14;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (auVar22._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar14 = func_0x03280ca0();
    func_0x0420cec8(lVar14,auVar22._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar14;
  }
  uVar12 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar12 = func_0x05ac7464(uVar12,0);
  auVar22 = func_0x03280b7c(uVar12,lVar19);
  *(undefined8 *)((long)puVar7 + -0x120) = 0x3d603b4;
  *(long *)((long)puVar7 + -0x118) = param_5;
  *(undefined8 *)((long)puVar7 + -0x110) = 0;
  *(long *)((long)puVar7 + -0x108) = lVar19;
  lVar19 = lVar20;
  if (*(long *)(lVar20 + 0x38) == 0) {
    func_0x03256878(lVar20);
  }
  puVar11 = PTR_DAT_07779d10;
  if ((auVar22._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
    uVar12 = func_0x03280a2c(puVar11);
    uVar12 = func_0x05ac7464(uVar12,0);
    auVar23 = func_0x03280b7c(uVar12,lVar20);
    *(undefined8 *)((long)puVar7 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])((long)puVar7 + -0x138) = auVar22;
    *(long *)((long)puVar7 + -0x128) = lVar20;
    lVar14 = lVar19;
    if (*(long *)(lVar19 + 0x38) == 0) {
      func_0x03256878(lVar19);
    }
    puVar11 = PTR_DAT_07779d10;
    if ((auVar23._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
      lVar14 = *(long *)((long)puVar7 + -0x128);
      lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
      uVar21 = 0;
      puVar9 = (undefined1 *)((long)puVar7 + -0x120);
      uVar12 = *(undefined8 *)((long)puVar7 + -0x140);
      auVar22 = *(undefined1 (*) [16])((long)puVar7 + -0x138);
      goto LAB_03d60730;
    }
    uVar12 = func_0x03280a2c(puVar11);
    uVar12 = func_0x05ac7464(uVar12,0);
    auVar22 = func_0x03280b7c(uVar12,lVar19);
    *(undefined8 *)((long)puVar7 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])((long)puVar7 + -0x158) = auVar23;
    *(long *)((long)puVar7 + -0x148) = lVar19;
    lVar19 = lVar14;
    if (*(long *)(lVar14 + 0x38) == 0) {
      func_0x03256878(lVar14);
    }
    puVar11 = PTR_DAT_07779d10;
    if ((auVar22._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
      uVar12 = func_0x03280a2c(puVar11);
      uVar12 = func_0x05ac7464(uVar12,0);
      auVar23 = func_0x03280b7c(uVar12,lVar14);
      *(undefined8 *)((long)puVar7 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])((long)puVar7 + -0x178) = auVar22;
      *(long *)((long)puVar7 + -0x168) = lVar14;
      lVar14 = lVar19;
      if (*(long *)(lVar19 + 0x38) == 0) {
        func_0x03256878(lVar19);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar23._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar23._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))
                           (auVar23._0_8_,auVar23._8_8_,0);
        return lVar19;
      }
      uVar12 = func_0x03280a2c(puVar11);
      uVar12 = func_0x05ac7464(uVar12,0);
      auVar22 = func_0x03280b7c(uVar12,lVar19);
      *(undefined8 *)((long)puVar7 + -0x1b0) = 0x3d60588;
      *(long *)((long)puVar7 + -0x1a0) = param_4;
      *(undefined1 (*) [16])((long)puVar7 + -0x198) = auVar23;
      *(long *)((long)puVar7 + -0x188) = lVar19;
      lVar19 = lVar14;
      lVar13 = lVar17;
      if (*(long *)(lVar17 + 0x38) == 0) {
        func_0x03256878(lVar17);
      }
      puVar11 = PTR_DAT_07779d10;
      if ((auVar22._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar22._8_8_ == 0)) {
        uVar12 = func_0x03280a2c(puVar11);
        uVar12 = func_0x05ac7464(uVar12,0);
        auVar23 = func_0x03280b7c(uVar12,lVar17);
        lVar20 = auVar23._8_8_;
        param_4 = auVar23._0_8_;
        puVar8 = (undefined1 *)((long)puVar7 + -0x1e0);
        *(undefined8 *)((long)puVar7 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])((long)puVar7 + -0x1d0) = auVar22;
        *(long *)((long)puVar7 + -0x1c0) = lVar14;
        *(long *)((long)puVar7 + -0x1b8) = lVar17;
        lVar14 = lVar19;
        lVar17 = lVar13;
        if (*(long *)(lVar13 + 0x38) == 0) {
          func_0x03256878(lVar13);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((param_4 != 0) && (puVar11 = PTR_DAT_07779d18, lVar20 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x10))
                             (param_4,lVar20,lVar19);
          return lVar19;
        }
        uVar12 = func_0x03280a2c(puVar11);
        uVar21 = func_0x05ac7464(uVar12,0);
        uVar12 = 0x3d6068c;
        auVar22 = func_0x03280b7c(uVar21,lVar13);
        goto LAB_03d6068c;
      }
      lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      uVar21 = *(undefined8 *)((long)puVar7 + -0x188);
      param_4 = *(long *)((long)puVar7 + -0x1a0);
      auVar23 = *(undefined1 (*) [16])((long)puVar7 + -0x198);
      puVar10 = (undefined1 *)((long)puVar7 + -0x180);
      uVar12 = *(undefined8 *)((long)puVar7 + -0x1b0);
    }
    else {
      uVar21 = *(undefined8 *)((long)puVar7 + -0x148);
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
      lVar14 = 0;
      puVar10 = (undefined1 *)((long)puVar7 + -0x140);
      uVar12 = *(undefined8 *)((long)puVar7 + -0x160);
      auVar23 = *(undefined1 (*) [16])((long)puVar7 + -0x158);
    }
  }
  else {
    lVar19 = *(long *)((long)puVar7 + -0x110);
    lVar13 = *(long *)((long)puVar7 + -0x108);
    lVar17 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    lVar14 = 0;
    puVar8 = (undefined1 *)((long)puVar7 + -0x100);
    uVar12 = *(undefined8 *)((long)puVar7 + -0x120);
    lVar20 = *(long *)((long)puVar7 + -0x118);
LAB_03d6068c:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = uVar12;
    *(long *)(puVar8 + -0x20) = param_4;
    *(long *)(puVar8 + -0x18) = lVar20;
    *(long *)(puVar8 + -0x10) = lVar19;
    *(long *)(puVar8 + -8) = lVar13;
    plVar18 = *(long **)(lVar17 + 0x38);
    lVar19 = lVar17;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar18 = *(long **)(lVar17 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    uVar21 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
    func_0x0531dbd0(lVar13,0xfffffffe);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x38) = auVar22._0_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar22._0_8_);
      *(undefined8 *)(lVar13 + 0x48) = auVar22._8_8_;
      func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar22._8_8_);
      *(long *)(lVar13 + 0x28) = lVar14;
      func_0x032809c4((long *)(lVar13 + 0x28),lVar14);
      return lVar13;
    }
    uVar12 = 0x3d60730;
    auVar23 = func_0x03280cac();
    param_4 = 0;
LAB_03d60730:
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = uVar12;
    *(long *)(puVar9 + -0x20) = param_4;
    *(undefined1 (*) [16])(puVar9 + -0x18) = auVar22;
    *(long *)(puVar9 + -8) = lVar14;
    plVar18 = *(long **)(lVar19 + 0x38);
    lVar13 = lVar19;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar19);
      plVar18 = *(long **)(lVar19 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar20 = func_0x03280ca0();
    lVar14 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
    func_0x0531e428(lVar20,0xfffffffe);
    if (lVar20 != 0) {
      *(undefined8 *)(lVar20 + 0x38) = auVar23._0_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x38),auVar23._0_8_);
      *(undefined8 *)(lVar20 + 0x48) = auVar23._8_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x48),auVar23._8_8_);
      *(undefined8 *)(lVar20 + 0x28) = uVar21;
      func_0x032809c4((undefined8 *)(lVar20 + 0x28),uVar21);
      return lVar20;
    }
    uVar12 = 0x3d607d4;
    auVar22 = func_0x03280cac();
    param_4 = 0;
  }
  *(undefined8 *)(puVar10 + -0x30) = uVar12;
  *(long *)(puVar10 + -0x20) = param_4;
  *(undefined1 (*) [16])(puVar10 + -0x18) = auVar23;
  *(undefined8 *)(puVar10 + -8) = uVar21;
  plVar18 = *(long **)(lVar13 + 0x38);
  lVar19 = lVar13;
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar13);
    plVar18 = *(long **)(lVar13 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar20 = func_0x03280ca0();
  uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + 8);
  func_0x0531ec78(lVar20,0xfffffffe);
  if (lVar20 != 0) {
    *(undefined8 *)(lVar20 + 0x40) = auVar22._0_8_;
    func_0x032809c4((undefined8 *)(lVar20 + 0x40),auVar22._0_8_);
    *(undefined8 *)(lVar20 + 0x50) = auVar22._8_8_;
    func_0x032809c4((undefined8 *)(lVar20 + 0x50),auVar22._8_8_);
    *(long *)(lVar20 + 0x30) = lVar14;
    func_0x032809c4((long *)(lVar20 + 0x30),lVar14);
    return lVar20;
  }
  auVar23 = func_0x03280cac();
  lVar13 = auVar23._0_8_;
  *(undefined8 *)(puVar10 + -0x60) = 0x3d60878;
  *(long *)(puVar10 + -0x58) = param_1;
  *(undefined8 *)(puVar10 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar10 + -0x48) = auVar22;
  *(long *)(puVar10 + -0x38) = lVar14;
  plVar18 = *(long **)(lVar19 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar19);
    plVar18 = *(long **)(lVar19 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar14 = func_0x03280ca0();
  puVar15 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 8);
  (*(code *)*puVar15)(lVar14,0xfffffffe);
  if (lVar14 != 0) {
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0xc0,lVar13);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x100,auVar23._8_8_);
    func_0x02f17738(lVar14,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x80,uVar12);
    return lVar14;
  }
  auVar22 = func_0x03280cac();
  lVar14 = auVar22._8_8_;
  plVar18 = auVar22._0_8_;
  *(undefined8 *)(puVar10 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar10 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar10 + -0x80) = auVar23;
  *(long *)(puVar10 + -0x70) = lVar19;
  *(undefined8 *)(puVar10 + -0x68) = uVar12;
  puVar16 = puVar15;
  if (puVar15[7] == 0) {
    func_0x03256878(puVar15);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar12 = func_0x03280a2c(puVar11);
    uVar12 = func_0x05ac7464(uVar12,0);
    func_0x03280b7c(uVar12,puVar15);
LAB_03d60c04:
    func_0x03281048(plVar18);
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(puVar15[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar20 = *plVar18;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19)) {
      lVar19 = *(long *)(puVar15[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar20 = *plVar18;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar15[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar20 = *plVar18;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (**(code **)(lVar20 + 0x228))(plVar18,lVar14,*(undefined8 *)(lVar20 + 0x230));
          return lVar19;
        }
      }
      goto LAB_03d60c04;
    }
    lVar19 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar19 = func_0x03280b90(plVar18,lVar19);
    if (lVar19 == 0) {
      lVar19 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) != lVar19
         )) {
        if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        func_0x04b68fa4(lVar19,plVar18,lVar14,*(undefined8 *)(puVar15[7] + 0x58));
        return lVar19;
      }
      if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar19 = *(long *)(puVar15[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b713b0(lVar13,plVar18,lVar14,*(undefined8 *)(puVar15[7] + 0x48));
        return lVar13;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    lVar19 = *(long *)(puVar15[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar20 = func_0x03280b90(plVar18,lVar19);
    if (lVar20 != 0) {
      func_0x04b66610(lVar13,lVar20,lVar14,*(undefined8 *)(puVar15[7] + 0x30));
      return lVar13;
    }
  }
  auVar23 = func_0x03281048(plVar18,lVar19);
  lVar14 = auVar23._8_8_;
  plVar18 = auVar23._0_8_;
  *(undefined8 *)(puVar10 + -0xc0) = 0x3d60c18;
  *(long *)(puVar10 + -0xb8) = lVar19;
  *(long *)(puVar10 + -0xb0) = lVar13;
  *(undefined8 **)(puVar10 + -0xa8) = puVar15;
  *(undefined1 (*) [16])(puVar10 + -0xa0) = auVar22;
  if (puVar16[7] == 0) {
    func_0x03256878(puVar16);
  }
  puVar11 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar14 == 0)) {
    uVar12 = func_0x03280a2c(puVar11);
    uVar12 = func_0x05ac7464(uVar12,0);
    func_0x03280b7c(uVar12,puVar16);
  }
  else {
    lVar13 = *(long *)(puVar16[7] + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar20 = *plVar18;
    bVar1 = *(byte *)(lVar20 + 0x130);
    if ((bVar1 < *(byte *)(lVar13 + 0x130)) ||
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)) {
      lVar13 = *(long *)(puVar16[7] + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar13 = func_0x03280b90(plVar18,lVar13);
      if (lVar13 != 0) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar13 = func_0x03280ca0();
        lVar19 = *(long *)(puVar16[7] + 0x20);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        lVar20 = func_0x03280b90(plVar18,lVar19);
        if (lVar20 != 0) {
          func_0x04b667e0(lVar13,lVar20,lVar14,*(undefined8 *)(puVar16[7] + 0x30));
          return lVar13;
        }
        goto LAB_03d60ee0;
      }
      lVar13 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
        if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar19 = func_0x03280ca0();
        func_0x04b693d0(lVar19,plVar18,lVar14,*(undefined8 *)(puVar16[7] + 0x58));
        return lVar19;
      }
      if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar13 = func_0x03280ca0();
      lVar20 = *(long *)(puVar16[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(lVar13,plVar18,lVar14,*(undefined8 *)(puVar16[7] + 0x48));
        return lVar13;
      }
    }
    else {
      lVar13 = *(long *)(puVar16[7] + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
        lVar20 = *plVar18;
        bVar1 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13))
      {
        lVar13 = *(long *)(puVar16[7] + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
          lVar20 = *plVar18;
          bVar1 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (**(code **)(lVar20 + 0x228))(plVar18,lVar14,*(undefined8 *)(lVar20 + 0x230));
          return lVar19;
        }
      }
    }
  }
  func_0x03281048(plVar18);
LAB_03d60ee0:
  lVar19 = func_0x03281048(plVar18,lVar19);
  *(undefined8 *)(puVar10 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar10 + -0xd0) = auVar23;
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
    lVar13 = *(long *)(lVar19 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    **(long **)(lVar13 + 0xb8) = lVar14;
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


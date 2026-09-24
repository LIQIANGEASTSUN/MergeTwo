/* Ghidra 12.1.2 native pseudocode; RVA 0x679F450; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.InitializeSystem; status ok */


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
/* WARNING: Removing unreachable block (ram,0x04d03d90) */
/* WARNING: Removing unreachable block (ram,0x04d03db4) */
/* WARNING: Removing unreachable block (ram,0x04d03da0) */
/* WARNING: Removing unreachable block (ram,0x04d03d00) */

long * MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__InitializeSystem
                 (long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  long *plVar33;
  undefined *puVar34;
  undefined8 uVar35;
  long *unaff_x23;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar39;
  undefined8 uVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  
  puVar38 = PTR_DAT_078109c0;
  puVar36 = PTR_DAT_07780378;
  if ((bRam0000000007e28dd0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078109c0);
    func_0x03280a18(PTR_DAT_07780378);
    bRam0000000007e28dd0 = 1;
  }
  lVar19 = func_0x03eb68fc(param_1,*(undefined8 *)puVar36);
  param_1[0x1a] = lVar19;
  func_0x032809c4();
  if ((bRam0000000007e1ae6f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff58,*(undefined8 *)puVar38);
    func_0x03280a18(PTR_DAT_0777ff60);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e1ae6f = 1;
  }
  puVar6 = PTR_DAT_0777ff60;
  puVar5 = PTR_DAT_0777ff58;
  puVar4 = PTR_DAT_0777c248;
  puVar37 = PTR_DAT_07779818;
  puVar38 = PTR_DAT_077730f8;
  puVar36 = PTR_DAT_0774ee08;
  uVar28 = 0;
  plVar30 = (long *)0x7;
  do {
    plVar31 = (long *)param_1[9];
    plVar21 = param_3;
    if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
      func_0x03280b8c();
      plVar21 = param_3;
    }
    plVar16 = (long *)func_0x0624cb20(plVar30,0);
    plVar33 = unaff_x23;
    if (plVar16 == (long *)0x0) {
LAB_04d03ad4:
      auVar42 = func_0x03280cac();
      unaff_x28 = PTR_DAT_0777ff78;
      unaff_x27 = PTR_DAT_0777ff68;
      puVar34 = auVar42._0_8_;
      puVar14 = auStack_120;
      puStack_c0 = puVar4;
      uStack_b8 = 0x4d03ad8;
      puStack_b0 = puVar6;
      puStack_a8 = puVar5;
      puStack_a0 = puVar38;
      puStack_98 = puVar37;
      puStack_90 = puVar36;
      puVar36 = (undefined *)0x7e1a000;
      param_3 = plVar21;
      plStack_88 = plVar33;
      plStack_80 = plVar31;
      plStack_78 = plVar30;
      uStack_70 = uVar28;
      plStack_68 = param_1;
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
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lVar19 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60);
      uVar39 = 0x4d03c0c;
      goto SUB_04d03fc0;
    }
    lVar19 = *plVar16;
    uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)puVar37) {
          puVar17 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_04d03970;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    plVar21 = (long *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar16);
LAB_04d03970:
    unaff_x23 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
    plVar33 = plVar16;
    if (plVar31 == (long *)0x0) goto LAB_04d03ad4;
    lVar19 = *plVar31;
    uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)puVar38) {
          puVar17 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_04d039d0;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar31,*(long *)puVar38,0);
LAB_04d039d0:
    plVar21 = (long *)puVar17[1];
    plVar16 = (long *)(*(code *)*puVar17)(plVar31,unaff_x23);
    plVar33 = unaff_x23;
    if (param_1[0xf] == 0) goto LAB_04d03ad4;
    param_4 = *(undefined8 *)puVar5;
    plVar21 = plVar30;
    func_0x04fb5c58(param_1[0xf],plVar16);
    plVar31 = plVar16;
    if (param_1[0x10] == 0) goto LAB_04d03ad4;
    param_4 = *(undefined8 *)puVar6;
    plVar21 = plVar16;
    func_0x04f61ea4(param_1[0x10],plVar30);
    if (plVar16 == (long *)0x0) goto LAB_04d03ad4;
    lVar19 = *plVar16;
    uVar25 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)puVar4) {
          puVar17 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_04d03a68;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    plVar21 = (long *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar16);
LAB_04d03a68:
    lVar19 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    if (lVar19 == 0) goto LAB_04d03ad4;
    lVar22 = *(long *)puVar36;
    uVar2 = *(undefined4 *)(lVar19 + 0x18);
    if (*(int *)(lVar22 + 0xe0) == 0) {
      func_0x03280b8c(lVar22);
    }
    param_3 = (long *)0x0;
    uVar15 = func_0x05797438(uVar2,uVar28);
    uVar1 = (int)plVar30 + 1;
    plVar30 = (long *)(ulong)uVar1;
    uVar28 = (ulong)uVar15;
  } while (uVar1 != 0x11);
  puVar14 = &stack0xffffffffffffffb0;
  plVar30 = param_1;
  if ((bRam0000000007e1ae71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ac00);
    plVar30 = (long *)func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e1ae71 = 1;
  }
  puVar36 = PTR_DAT_0777ac00;
  puVar34 = PTR_DAT_0774ee08;
  if (0 < (int)uVar15) {
    param_5 = 1;
    puVar37 = (undefined *)0x7ff0000000000000;
    puVar38 = (undefined *)0x80000000;
    do {
      lVar19 = param_1[0x11];
      if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      dVar41 = (double)func_0x05797bf8(0x4000000000000000,(double)((int)param_5 + -1),0);
      if (lVar19 == 0) {
        uVar39 = 0x4d03fc0;
        auVar43 = func_0x03280cac();
        lVar19 = auVar43._8_8_;
        auVar42._8_4_ = uVar15;
        auVar42._0_8_ = auVar43._0_8_;
        auVar42._12_4_ = 0;
        param_4 = 0;
        plVar21 = param_1;
SUB_04d03fc0:
        lVar22 = auVar42._0_8_;
        *(undefined8 *)(puVar14 + -0x50) = uVar39;
        *(undefined **)(puVar14 + -0x48) = unaff_x27;
        *(undefined **)(puVar14 + -0x40) = puVar38;
        *(undefined **)(puVar14 + -0x38) = puVar37;
        *(undefined **)(puVar14 + -0x30) = puVar36;
        *(undefined **)(puVar14 + -0x28) = puVar34;
        *(undefined8 *)(puVar14 + -0x20) = param_4;
        *(ulong *)(puVar14 + -0x18) = param_5;
        *(long **)(puVar14 + -0x10) = plVar21;
        *(long *)(puVar14 + -8) = auVar42._8_8_;
        if ((bRam0000000007e1ae72 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ffe0);
          func_0x03280a18(PTR_DAT_0777ffe8);
          func_0x03280a18(PTR_DAT_0777fff0);
          func_0x03280a18(PTR_DAT_0777fff8);
          func_0x03280a18(PTR_DAT_07780000);
          func_0x03280a18(PTR_DAT_07780008);
          bRam0000000007e1ae72 = 1;
        }
        if (lVar22 == 0) {
          auVar42 = func_0x03280cac();
          puVar9 = PTR_DAT_07780038;
          puVar8 = PTR_DAT_07780030;
          puVar7 = PTR_DAT_07780028;
          puVar6 = PTR_DAT_07780020;
          puVar5 = PTR_DAT_07780018;
          puVar4 = PTR_DAT_07780010;
          puVar13 = (undefined8 *)(puVar14 + -0xb0);
          *(undefined8 *)(puVar14 + -0xb0) = 0x4d041ec;
          *(undefined **)(puVar14 + -0xa0) = unaff_x28;
          *(undefined **)(puVar14 + -0x98) = unaff_x27;
          *(undefined **)(puVar14 + -0x90) = puVar38;
          *(undefined **)(puVar14 + -0x88) = puVar37;
          *(undefined **)(puVar14 + -0x80) = puVar36;
          *(undefined **)(puVar14 + -0x78) = puVar34;
          *(undefined8 *)(puVar14 + -0x70) = param_4;
          *(undefined8 *)(puVar14 + -0x68) = 0x7e1a000;
          *(long *)(puVar14 + -0x60) = lVar19;
          *(undefined8 *)(puVar14 + -0x58) = 0;
          if ((bRam0000000007e1ae73 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07780030);
            func_0x03280a18(PTR_DAT_07780018);
            func_0x03280a18(PTR_DAT_07780038);
            func_0x03280a18(PTR_DAT_07780028);
            func_0x03280a18(PTR_DAT_07780010);
            func_0x03280a18(PTR_DAT_07780020);
            bRam0000000007e1ae73 = 1;
          }
          uVar39 = func_0x03280ca0(*(undefined8 *)puVar4);
          func_0x053569b8(uVar39,auVar42._0_8_,*(undefined8 *)(*(long *)(param_3[4] + 0xc0) + 0x88),
                          0);
          uVar39 = func_0x03d50a94(auVar42._8_8_,uVar39,*(undefined8 *)puVar5);
          uVar35 = func_0x03280ca0(*(undefined8 *)puVar6);
          lVar18 = 0;
          func_0x05355fbc(uVar35,auVar42._0_8_,*(undefined8 *)(*(long *)(param_3[4] + 0xc0) + 0x90))
          ;
          lVar23 = *(long *)puVar7;
          uVar39 = func_0x03d872a8(uVar39,uVar35);
          lVar19 = func_0x03d3c654(uVar39,*(undefined8 *)puVar8);
          lVar22 = *(long *)puVar9;
          uVar35 = *(undefined8 *)(puVar14 + -0x60);
          uVar27 = *(undefined8 *)(puVar14 + -0x58);
          uVar39 = *(undefined8 *)(puVar14 + -0x70);
          uVar29 = *(undefined8 *)(puVar14 + -0x68);
          uVar32 = *(undefined8 *)(puVar14 + -0x78);
          puVar14 = puVar14 + -0x50;
          uVar40 = *puVar13;
        }
        else {
          uVar39 = func_0x03eb6ac8(lVar22,*(undefined8 *)PTR_DAT_07780008);
          lVar23 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c(lVar23);
          }
          if (*(int *)(lVar23 + 0xe0) == 0) {
            func_0x03280b8c(lVar23);
          }
          lVar23 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c();
          }
          puVar4 = PTR_DAT_0777fff8;
          puVar37 = PTR_DAT_0777fff0;
          puVar38 = PTR_DAT_0777ffe8;
          puVar36 = PTR_DAT_0777ffe0;
          lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x10);
          if (lVar23 == 0) {
            lVar23 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c();
            }
            if (*(int *)(lVar23 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar23 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c();
            }
            uVar35 = **(undefined8 **)(lVar23 + 0xb8);
            lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
            func_0x05355fbc(lVar23,uVar35,
                            *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x78),0);
            lVar24 = *(long *)(*(long *)(lVar19 + 0x20) + 0xc0);
            lVar18 = *(long *)(lVar24 + 0x20);
            if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
              lVar18 = func_0x0325681c();
              lVar24 = *(long *)(*(long *)(lVar19 + 0x20) + 0xc0);
            }
            *(long *)(*(long *)(lVar18 + 0xb8) + 0x10) = lVar23;
            lVar18 = *(long *)(lVar24 + 0x20);
            if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
              lVar18 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar18 + 0xb8) + 0x10,lVar23);
          }
          uVar39 = func_0x03d872a8(uVar39,lVar23,*(undefined8 *)puVar37);
          uVar35 = func_0x03280ca0(*(undefined8 *)puVar4);
          lVar18 = 0;
          func_0x053569b8(uVar35,lVar22,
                          *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x80));
          lVar23 = *(long *)puVar36;
          lVar19 = func_0x03d50a94(uVar39,uVar35);
          lVar22 = *(long *)puVar38;
          uVar35 = *(undefined8 *)(puVar14 + -0x10);
          uVar27 = *(undefined8 *)(puVar14 + -8);
          uVar39 = *(undefined8 *)(puVar14 + -0x20);
          uVar29 = *(undefined8 *)(puVar14 + -0x18);
          uVar32 = *(undefined8 *)(puVar14 + -0x28);
          uVar40 = *(undefined8 *)(puVar14 + -0x50);
        }
        *(undefined8 *)(puVar14 + -0x20) = uVar40;
        *(undefined8 *)(puVar14 + -0x10) = uVar35;
        *(undefined8 *)(puVar14 + -8) = uVar27;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (lVar19 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x04143d60(plVar30,lVar19,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar22);
        lVar19 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0x40) = 0x3d6004c;
        *(undefined8 *)(puVar14 + -0x30) = 0;
        *(long *)(puVar14 + -0x28) = lVar22;
        if (*(long *)(lVar19 + 0x38) == 0) {
          func_0x03256878(lVar19);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x0419ce74(plVar30,auVar42._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar19);
        lVar22 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0x60) = 0x3d600c8;
        *(undefined8 *)(puVar14 + -0x50) = 0;
        *(long *)(puVar14 + -0x48) = lVar19;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x041c2810(plVar30,auVar42._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar22);
        lVar19 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0x80) = 0x3d60144;
        *(undefined8 *)(puVar14 + -0x70) = 0;
        *(long *)(puVar14 + -0x68) = lVar22;
        if (*(long *)(lVar19 + 0x38) == 0) {
          func_0x03256878(lVar19);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x041ddb58(plVar30,auVar42._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar19);
        lVar22 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0xa0) = 0x3d601c0;
        *(undefined8 *)(puVar14 + -0x90) = 0;
        *(long *)(puVar14 + -0x88) = lVar19;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x041e617c(plVar30,auVar42._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar22);
        lVar19 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0xc0) = 0x3d6023c;
        *(undefined8 *)(puVar14 + -0xb0) = 0;
        *(long *)(puVar14 + -0xa8) = lVar22;
        if (*(long *)(lVar19 + 0x38) == 0) {
          func_0x03256878(lVar19);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x041e8ba0(plVar30,auVar42._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar19);
        lVar22 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0xe0) = 0x3d602b8;
        *(undefined8 *)(puVar14 + -0xd0) = 0;
        *(long *)(puVar14 + -200) = lVar19;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x10))(plVar30,auVar42._0_8_);
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar22);
        lVar19 = auVar42._8_8_;
        *(undefined8 *)(puVar14 + -0x100) = 0x3d60338;
        *(undefined8 *)(puVar14 + -0xf0) = 0;
        *(long *)(puVar14 + -0xe8) = lVar22;
        if (*(long *)(lVar19 + 0x38) == 0) {
          func_0x03256878(lVar19);
        }
        if (auVar42._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          func_0x0420cec8(plVar30,auVar42._0_8_,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
          return plVar30;
        }
        uVar35 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar35 = func_0x05ac7464(uVar35,0);
        auVar42 = func_0x03280b7c(uVar35,lVar19);
        *(undefined8 *)(puVar14 + -0x120) = 0x3d603b4;
        *(undefined8 *)(puVar14 + -0x118) = uVar29;
        *(undefined8 *)(puVar14 + -0x110) = 0;
        *(long *)(puVar14 + -0x108) = lVar19;
        lVar19 = lVar23;
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x03256878(lVar23);
        }
        puVar36 = PTR_DAT_07779d10;
        if ((auVar42._0_8_ == 0) || (puVar36 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
          uVar35 = func_0x03280a2c(puVar36);
          uVar35 = func_0x05ac7464(uVar35,0);
          auVar43 = func_0x03280b7c(uVar35,lVar23);
          *(undefined8 *)(puVar14 + -0x140) = 0x3d60428;
          *(undefined1 (*) [16])(puVar14 + -0x138) = auVar42;
          *(long *)(puVar14 + -0x128) = lVar23;
          lVar22 = lVar19;
          if (*(long *)(lVar19 + 0x38) == 0) {
            func_0x03256878(lVar19);
          }
          puVar36 = PTR_DAT_07779d10;
          if ((auVar43._0_8_ != 0) && (puVar36 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
            lVar22 = *(long *)(puVar14 + -0x128);
            lVar23 = *(long *)(*(long *)(lVar19 + 0x38) + 8);
            lVar19 = 0;
            puVar11 = puVar14 + -0x120;
            uVar35 = *(undefined8 *)(puVar14 + -0x140);
            auVar42 = *(undefined1 (*) [16])(puVar14 + -0x138);
            goto LAB_03d60730;
          }
          uVar35 = func_0x03280a2c(puVar36);
          uVar35 = func_0x05ac7464(uVar35,0);
          auVar42 = func_0x03280b7c(uVar35,lVar19);
          *(undefined8 *)(puVar14 + -0x160) = 0x3d6049c;
          *(undefined1 (*) [16])(puVar14 + -0x158) = auVar43;
          *(long *)(puVar14 + -0x148) = lVar19;
          lVar19 = lVar22;
          if (*(long *)(lVar22 + 0x38) == 0) {
            func_0x03256878(lVar22);
          }
          puVar36 = PTR_DAT_07779d10;
          if ((auVar42._0_8_ == 0) || (puVar36 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
            uVar35 = func_0x03280a2c(puVar36);
            uVar35 = func_0x05ac7464(uVar35,0);
            auVar43 = func_0x03280b7c(uVar35,lVar22);
            *(undefined8 *)(puVar14 + -0x180) = 0x3d60510;
            *(undefined1 (*) [16])(puVar14 + -0x178) = auVar42;
            *(long *)(puVar14 + -0x168) = lVar22;
            lVar22 = lVar19;
            if (*(long *)(lVar19 + 0x38) == 0) {
              func_0x03256878(lVar19);
            }
            puVar36 = PTR_DAT_07779d10;
            if ((auVar43._0_8_ != 0) && (puVar36 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar30 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 8))
                                          (auVar43._0_8_,auVar43._8_8_,0);
              return plVar30;
            }
            uVar35 = func_0x03280a2c(puVar36);
            uVar35 = func_0x05ac7464(uVar35,0);
            auVar42 = func_0x03280b7c(uVar35,lVar19);
            *(undefined8 *)(puVar14 + -0x1b0) = 0x3d60588;
            *(undefined8 *)(puVar14 + -0x1a0) = uVar39;
            *(undefined1 (*) [16])(puVar14 + -0x198) = auVar43;
            *(long *)(puVar14 + -0x188) = lVar19;
            lVar19 = lVar22;
            lVar24 = lVar18;
            if (*(long *)(lVar18 + 0x38) == 0) {
              func_0x03256878(lVar18);
            }
            puVar36 = PTR_DAT_07779d10;
            if ((auVar42._0_8_ == 0) || (puVar36 = PTR_DAT_07779d18, auVar42._8_8_ == 0)) {
              uVar39 = func_0x03280a2c(puVar36);
              uVar39 = func_0x05ac7464(uVar39,0);
              auVar43 = func_0x03280b7c(uVar39,lVar18);
              puVar10 = puVar14 + -0x1e0;
              *(undefined8 *)(puVar14 + -0x1e0) = 0x3d60608;
              *(undefined1 (*) [16])(puVar14 + -0x1d0) = auVar42;
              *(long *)(puVar14 + -0x1c0) = lVar22;
              *(long *)(puVar14 + -0x1b8) = lVar18;
              lVar22 = lVar19;
              lVar18 = lVar24;
              if (*(long *)(lVar24 + 0x38) == 0) {
                func_0x03256878(lVar24);
              }
              puVar36 = PTR_DAT_07779d10;
              if ((auVar43._0_8_ != 0) && (puVar36 = PTR_DAT_07779d18, auVar43._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar30 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 0x10))
                                            (auVar43._0_8_,auVar43._8_8_,lVar19);
                return plVar30;
              }
              uVar39 = func_0x03280a2c(puVar36);
              uVar39 = func_0x05ac7464(uVar39,0);
              uVar35 = 0x3d6068c;
              auVar42 = func_0x03280b7c(uVar39,lVar24);
              goto LAB_03d6068c;
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
            lVar19 = *(long *)(puVar14 + -0x188);
            uVar39 = *(undefined8 *)(puVar14 + -0x1a0);
            auVar43 = *(undefined1 (*) [16])(puVar14 + -0x198);
            puVar12 = puVar14 + -0x180;
            uVar35 = *(undefined8 *)(puVar14 + -0x1b0);
          }
          else {
            lVar19 = *(long *)(puVar14 + -0x148);
            lVar18 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
            lVar22 = 0;
            puVar12 = puVar14 + -0x140;
            uVar35 = *(undefined8 *)(puVar14 + -0x160);
            auVar43 = *(undefined1 (*) [16])(puVar14 + -0x158);
          }
        }
        else {
          lVar19 = *(long *)(puVar14 + -0x110);
          lVar24 = *(long *)(puVar14 + -0x108);
          lVar18 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
          lVar22 = 0;
          puVar10 = puVar14 + -0x100;
          uVar35 = *(undefined8 *)(puVar14 + -0x120);
          auVar43._8_8_ = *(undefined8 *)(puVar14 + -0x118);
          auVar43._0_8_ = uVar39;
LAB_03d6068c:
          puVar11 = puVar10 + -0x30;
          *(undefined8 *)(puVar10 + -0x30) = uVar35;
          *(undefined1 (*) [16])(puVar10 + -0x20) = auVar43;
          *(long *)(puVar10 + -0x10) = lVar19;
          *(long *)(puVar10 + -8) = lVar24;
          plVar30 = *(long **)(lVar18 + 0x38);
          lVar23 = lVar18;
          if (plVar30 == (long *)0x0) {
            func_0x03256878(lVar18);
            plVar30 = *(long **)(lVar18 + 0x38);
          }
          if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          lVar19 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
          func_0x0531dbd0(plVar30,0xfffffffe);
          if (plVar30 != (long *)0x0) {
            plVar30[7] = auVar42._0_8_;
            func_0x032809c4(plVar30 + 7,auVar42._0_8_);
            plVar30[9] = auVar42._8_8_;
            func_0x032809c4(plVar30 + 9,auVar42._8_8_);
            plVar30[5] = lVar22;
            func_0x032809c4(plVar30 + 5,lVar22);
            return plVar30;
          }
          uVar35 = 0x3d60730;
          auVar43 = func_0x03280cac();
          uVar39 = 0;
LAB_03d60730:
          puVar12 = puVar11 + -0x30;
          *(undefined8 *)(puVar11 + -0x30) = uVar35;
          *(undefined8 *)(puVar11 + -0x20) = uVar39;
          *(undefined1 (*) [16])(puVar11 + -0x18) = auVar42;
          *(long *)(puVar11 + -8) = lVar22;
          plVar30 = *(long **)(lVar23 + 0x38);
          lVar18 = lVar23;
          if (plVar30 == (long *)0x0) {
            func_0x03256878(lVar23);
            plVar30 = *(long **)(lVar23 + 0x38);
          }
          if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          lVar22 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
          func_0x0531e428(plVar30,0xfffffffe);
          if (plVar30 != (long *)0x0) {
            plVar30[7] = auVar43._0_8_;
            func_0x032809c4(plVar30 + 7,auVar43._0_8_);
            plVar30[9] = auVar43._8_8_;
            func_0x032809c4(plVar30 + 9,auVar43._8_8_);
            plVar30[5] = lVar19;
            func_0x032809c4(plVar30 + 5,lVar19);
            return plVar30;
          }
          uVar35 = 0x3d607d4;
          auVar42 = func_0x03280cac();
          uVar39 = 0;
        }
        *(undefined8 *)(puVar12 + -0x30) = uVar35;
        *(undefined8 *)(puVar12 + -0x20) = uVar39;
        *(undefined1 (*) [16])(puVar12 + -0x18) = auVar43;
        *(long *)(puVar12 + -8) = lVar19;
        plVar30 = *(long **)(lVar18 + 0x38);
        lVar19 = lVar18;
        if (plVar30 == (long *)0x0) {
          func_0x03256878(lVar18);
          plVar30 = *(long **)(lVar18 + 0x38);
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar30 = (long *)func_0x03280ca0();
        uVar39 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
        func_0x0531ec78(plVar30,0xfffffffe);
        if (plVar30 != (long *)0x0) {
          plVar30[8] = auVar42._0_8_;
          func_0x032809c4(plVar30 + 8,auVar42._0_8_);
          plVar30[10] = auVar42._8_8_;
          func_0x032809c4(plVar30 + 10,auVar42._8_8_);
          plVar30[6] = lVar22;
          func_0x032809c4(plVar30 + 6,lVar22);
          return plVar30;
        }
        auVar43 = func_0x03280cac();
        plVar30 = auVar43._0_8_;
        *(undefined8 *)(puVar12 + -0x60) = 0x3d60878;
        *(undefined8 *)(puVar12 + -0x58) = uVar32;
        *(undefined8 *)(puVar12 + -0x50) = 0;
        *(undefined1 (*) [16])(puVar12 + -0x48) = auVar42;
        *(long *)(puVar12 + -0x38) = lVar22;
        plVar21 = *(long **)(lVar19 + 0x38);
        if (plVar21 == (long *)0x0) {
          func_0x03256878(lVar19);
          plVar21 = *(long **)(lVar19 + 0x38);
        }
        if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        plVar21 = (long *)func_0x03280ca0();
        puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x38) + 8);
        (*(code *)*puVar17)(plVar21,0xfffffffe);
        if (plVar21 != (long *)0x0) {
          func_0x02f17738(plVar21,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0xc0,plVar30);
          func_0x02f17738(plVar21,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x100,auVar43._8_8_
                         );
          func_0x02f17738(plVar21,*(long *)(**(long **)(lVar19 + 0x38) + 0x80) + 0x80,uVar39);
          return plVar21;
        }
        auVar42 = func_0x03280cac();
        lVar22 = auVar42._8_8_;
        plVar21 = auVar42._0_8_;
        *(undefined8 *)(puVar12 + -0x90) = 0x3d60944;
        *(undefined8 *)(puVar12 + -0x88) = 0;
        *(undefined1 (*) [16])(puVar12 + -0x80) = auVar43;
        *(long *)(puVar12 + -0x70) = lVar19;
        *(undefined8 *)(puVar12 + -0x68) = uVar39;
        puVar20 = puVar17;
        if (puVar17[7] == 0) {
          func_0x03256878(puVar17);
        }
        puVar36 = PTR_DAT_07774b08;
        if ((plVar21 == (long *)0x0) || (puVar36 = PTR_DAT_077799b8, lVar22 == 0)) {
          uVar39 = func_0x03280a2c(puVar36);
          uVar39 = func_0x05ac7464(uVar39,0);
          func_0x03280b7c(uVar39,puVar17);
LAB_03d60c04:
          func_0x03281048(plVar21);
          lVar19 = 0;
        }
        else {
          lVar19 = *(long *)(puVar17[7] + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c();
          }
          lVar23 = *plVar21;
          bVar3 = *(byte *)(lVar23 + 0x130);
          if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
             (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) ==
              lVar19)) {
            lVar19 = *(long *)(puVar17[7] + 0x10);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = func_0x0325681c(lVar19);
              lVar23 = *plVar21;
              bVar3 = *(byte *)(lVar23 + 0x130);
            }
            if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
               (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) ==
                lVar19)) {
              lVar19 = *(long *)(puVar17[7] + 0x10);
              if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                lVar19 = func_0x0325681c(lVar19);
                lVar23 = *plVar21;
                bVar3 = *(byte *)(lVar23 + 0x130);
              }
              if ((*(byte *)(lVar19 + 0x130) <= bVar3) &&
                 (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) ==
                  lVar19)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar30 = (long *)(**(code **)(lVar23 + 0x228))
                                            (plVar21,lVar22,*(undefined8 *)(lVar23 + 0x230));
                return plVar30;
              }
            }
            goto LAB_03d60c04;
          }
          lVar19 = *(long *)(puVar17[7] + 0x20);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c(lVar19);
          }
          lVar19 = func_0x03280b90(plVar21,lVar19);
          if (lVar19 == 0) {
            lVar19 = *(long *)(puVar17[7] + 0x38);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) !=
                lVar19)) {
              if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              plVar30 = (long *)func_0x03280ca0();
              func_0x04b68fa4(plVar30,plVar21,lVar22,*(undefined8 *)(puVar17[7] + 0x58));
              return plVar30;
            }
            if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            plVar30 = (long *)func_0x03280ca0();
            lVar19 = *(long *)(puVar17[7] + 0x38);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = func_0x0325681c(lVar19);
            }
            if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) ==
                lVar19)) {
              func_0x04b713b0(plVar30,plVar21,lVar22,*(undefined8 *)(puVar17[7] + 0x48));
              return plVar30;
            }
            goto LAB_03d60c04;
          }
          if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          plVar30 = (long *)func_0x03280ca0();
          lVar19 = *(long *)(puVar17[7] + 0x20);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c(lVar19);
          }
          lVar23 = func_0x03280b90(plVar21,lVar19);
          if (lVar23 != 0) {
            func_0x04b66610(plVar30,lVar23,lVar22,*(undefined8 *)(puVar17[7] + 0x30));
            return plVar30;
          }
        }
        auVar43 = func_0x03281048(plVar21,lVar19);
        lVar22 = auVar43._8_8_;
        plVar21 = auVar43._0_8_;
        *(undefined8 *)(puVar12 + -0xc0) = 0x3d60c18;
        *(long *)(puVar12 + -0xb8) = lVar19;
        *(long **)(puVar12 + -0xb0) = plVar30;
        *(undefined8 **)(puVar12 + -0xa8) = puVar17;
        *(undefined1 (*) [16])(puVar12 + -0xa0) = auVar42;
        if (puVar20[7] == 0) {
          func_0x03256878(puVar20);
        }
        puVar36 = PTR_DAT_07774b08;
        if ((plVar21 == (long *)0x0) || (puVar36 = PTR_DAT_077799b8, lVar22 == 0)) {
          uVar39 = func_0x03280a2c(puVar36);
          uVar39 = func_0x05ac7464(uVar39,0);
          func_0x03280b7c(uVar39,puVar20);
        }
        else {
          lVar23 = *(long *)(puVar20[7] + 0x10);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c();
          }
          lVar18 = *plVar21;
          bVar3 = *(byte *)(lVar18 + 0x130);
          if ((bVar3 < *(byte *)(lVar23 + 0x130)) ||
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) !=
              lVar23)) {
            lVar23 = *(long *)(puVar20[7] + 0x20);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c(lVar23);
            }
            lVar23 = func_0x03280b90(plVar21,lVar23);
            if (lVar23 != 0) {
              if ((*(byte *)(*(long *)(puVar20[7] + 0x28) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              plVar30 = (long *)func_0x03280ca0();
              lVar19 = *(long *)(puVar20[7] + 0x20);
              if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                lVar19 = func_0x0325681c(lVar19);
              }
              lVar23 = func_0x03280b90(plVar21,lVar19);
              if (lVar23 != 0) {
                func_0x04b667e0(plVar30,lVar23,lVar22,*(undefined8 *)(puVar20[7] + 0x30));
                return plVar30;
              }
              goto LAB_03d60ee0;
            }
            lVar23 = *(long *)(puVar20[7] + 0x38);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar23 + 0x130)) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) !=
                lVar23)) {
              if ((*(byte *)(*(long *)(puVar20[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              plVar30 = (long *)func_0x03280ca0();
              func_0x04b693d0(plVar30,plVar21,lVar22,*(undefined8 *)(puVar20[7] + 0x58));
              return plVar30;
            }
            if ((*(byte *)(*(long *)(puVar20[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            plVar30 = (long *)func_0x03280ca0();
            lVar23 = *(long *)(puVar20[7] + 0x38);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c(lVar23);
            }
            if ((*(byte *)(lVar23 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) ==
                lVar23)) {
              func_0x04b715c8(plVar30,plVar21,lVar22,*(undefined8 *)(puVar20[7] + 0x48));
              return plVar30;
            }
          }
          else {
            lVar23 = *(long *)(puVar20[7] + 0x10);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c(lVar23);
              lVar18 = *plVar21;
              bVar3 = *(byte *)(lVar18 + 0x130);
            }
            if ((*(byte *)(lVar23 + 0x130) <= bVar3) &&
               (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) ==
                lVar23)) {
              lVar23 = *(long *)(puVar20[7] + 0x10);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = func_0x0325681c(lVar23);
                lVar18 = *plVar21;
                bVar3 = *(byte *)(lVar18 + 0x130);
              }
              if ((*(byte *)(lVar23 + 0x130) <= bVar3) &&
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) ==
                  lVar23)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar30 = (long *)(**(code **)(lVar18 + 0x228))
                                            (plVar21,lVar22,*(undefined8 *)(lVar18 + 0x230));
                return plVar30;
              }
            }
          }
        }
        func_0x03281048(plVar21);
LAB_03d60ee0:
        lVar19 = func_0x03281048(plVar21,lVar19);
        *(undefined8 *)(puVar12 + -0xe0) = 0x3d60eec;
        *(undefined1 (*) [16])(puVar12 + -0xd0) = auVar43;
        lVar22 = *(long *)(lVar19 + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c();
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c();
        }
        plVar30 = (long *)**(long **)(lVar22 + 0xb8);
        func_0x03280ab0();
        if (plVar30 == (long *)0x0) {
          lVar22 = *(long *)(lVar19 + 0x20);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          plVar30 = (long *)func_0x0522166c(*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x18));
          func_0x03280ab0();
          lVar22 = *(long *)(lVar19 + 0x20);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          **(long **)(lVar22 + 0xb8) = (long)plVar30;
          lVar19 = *(long *)(lVar19 + 0x20);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c();
          }
          lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = func_0x0325681c();
          }
          func_0x032809c4(*(undefined8 *)(lVar19 + 0xb8),plVar30);
        }
        return plVar30;
      }
      uVar1 = 0x80000000;
      if (dVar41 != INFINITY) {
        uVar1 = (int)dVar41;
      }
      param_3 = (long *)(ulong)uVar1;
      plVar30 = (long *)func_0x04f2baf8(lVar19,param_5,param_3,*(undefined8 *)puVar36);
      uVar1 = (int)param_5 + 1;
      param_5 = (ulong)uVar1;
    } while ((int)uVar1 <= (int)uVar15);
  }
  return plVar30;
}


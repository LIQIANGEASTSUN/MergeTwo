/* Ghidra 12.1.2 native pseudocode; RVA 0x4C0382C; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.InitializeSystem; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___InitializeSystem
               (long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,long param_5)

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
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  undefined8 uVar30;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 unaff_x21;
  long *plVar33;
  undefined8 *unaff_x22;
  long *plVar34;
  undefined8 uVar35;
  long *unaff_x23;
  long *plVar36;
  undefined8 uVar37;
  long *unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  code *unaff_x30;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long lStack_68;
  
  if ((bRam0000000007e1ae6f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff58);
    func_0x03280a18(PTR_DAT_0777ff60);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e1ae6f = 1;
  }
  puVar8 = PTR_DAT_0777ff60;
  puVar7 = PTR_DAT_0777ff58;
  puVar6 = PTR_DAT_0777c248;
  puVar5 = PTR_DAT_07779818;
  puVar4 = PTR_DAT_077730f8;
  puVar15 = PTR_DAT_0774ee08;
  uVar31 = 0;
  plVar33 = (long *)0x7;
  plVar18 = unaff_x23;
  while( true ) {
    plVar34 = *(long **)(param_1 + 0x48);
    plVar23 = param_3;
    if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
      func_0x03280b8c();
      plVar23 = param_3;
    }
    plVar16 = (long *)func_0x0624cb20(plVar33,0);
    plVar36 = plVar18;
    if (plVar16 == (long *)0x0) break;
    lVar24 = *plVar16;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_04d03970;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    plVar23 = (long *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar16);
LAB_04d03970:
    plVar18 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
    plVar36 = plVar16;
    if (plVar34 == (long *)0x0) break;
    lVar25 = *plVar34;
    lVar24 = *(long *)puVar4;
    uVar28 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == lVar24) {
          puVar17 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_04d039d0;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar34,lVar24,0);
LAB_04d039d0:
    plVar23 = (long *)puVar17[1];
    plVar16 = (long *)(*(code *)*puVar17)(plVar34,plVar18);
    plVar36 = plVar18;
    if (*(long *)(param_1 + 0x78) == 0) break;
    param_4 = *(undefined8 **)puVar7;
    plVar23 = plVar33;
    func_0x04fb5c58(*(long *)(param_1 + 0x78),plVar16);
    plVar34 = plVar16;
    if (*(long *)(param_1 + 0x80) == 0) break;
    param_4 = *(undefined8 **)puVar8;
    plVar23 = plVar16;
    func_0x04f61ea4(*(long *)(param_1 + 0x80),plVar33);
    if (plVar16 == (long *)0x0) break;
    lVar24 = *plVar16;
    uVar28 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar28 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == *(long *)puVar6) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_04d03a68;
        }
        uVar28 = uVar28 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar28 != 0);
    }
    plVar23 = (long *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar16);
LAB_04d03a68:
    lVar24 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    if (lVar24 == 0) break;
    lVar25 = *(long *)puVar15;
    uVar2 = *(undefined4 *)(lVar24 + 0x18);
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c(lVar25);
    }
    param_3 = (long *)0x0;
    uVar31 = func_0x05797438(uVar2,uVar31);
    uVar1 = (int)plVar33 + 1;
    plVar33 = (long *)(ulong)uVar1;
    uVar31 = uVar31 & 0xffffffff;
    if (uVar1 == 0x11) goto code_r0x04d03ee0;
  }
  auVar40 = func_0x03280cac();
  unaff_x28 = PTR_DAT_0777ff78;
  puVar9 = PTR_DAT_0777ff70;
  unaff_x27 = PTR_DAT_0777ff68;
  plVar18 = auVar40._8_8_;
  unaff_x23 = auVar40._0_8_;
  puStack_c0 = puVar6;
  pcStack_b8 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___AnalyzeBoardToolChains;
  puStack_b0 = puVar8;
  puStack_a8 = puVar7;
  puStack_a0 = puVar4;
  puStack_98 = puVar5;
  puStack_90 = puVar15;
  plStack_88 = plVar36;
  plStack_80 = plVar34;
  plStack_78 = plVar33;
  uStack_70 = uVar31;
  lStack_68 = param_1;
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
  unaff_x24 = (long *)MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetUnlockedItemsOnBoard
                                (unaff_x23,
                                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60)
                                );
  param_3 = *(long **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68);
  unaff_x25 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetToolGraphsFromItems
                        (unaff_x23,unaff_x24);
  lVar24 = func_0x03280ca0(*(undefined8 *)unaff_x27);
  func_0x04f5a6b8(lVar24,*(undefined8 *)puVar9);
  *plVar23 = lVar24;
  func_0x032809c4(plVar23,lVar24);
  uVar19 = func_0x03280ca0(*(undefined8 *)unaff_x27);
  func_0x04f5a6b8(uVar19,*(undefined8 *)puVar9);
  *param_4 = uVar19;
  func_0x032809c4(param_4,uVar19);
  unaff_x26 = (undefined *)func_0x03280ca0(*(undefined8 *)unaff_x28);
  func_0x0411be64(unaff_x26,*(undefined8 *)PTR_DAT_0777ffd8);
  *plVar18 = (long)unaff_x26;
  func_0x032809c4(plVar18,unaff_x26);
  puVar6 = PTR_DAT_0777ffc8;
  puVar5 = PTR_DAT_0777ffa0;
  puVar4 = PTR_DAT_0777ff98;
  puVar15 = PTR_DAT_0777ff90;
  if (unaff_x25 == 0) goto LAB_04d03e04;
  func_0x04145068(&uStack_118,unaff_x25,*(undefined8 *)PTR_DAT_0777ffd0);
  uStack_d8 = uStack_110;
  uStack_e0 = uStack_118;
  uStack_d0 = uStack_108;
  while (uVar31 = func_0x051159b4(&uStack_e0,*(undefined8 *)puVar5), (uVar31 & 1) != 0) {
    param_3 = unaff_x24;
    MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___AnalyzeSingleToolGraph
              (unaff_x23,uStack_d0,unaff_x24,*plVar23,*param_4,
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70));
  }
  func_0x051159b0(&uStack_e0,*(undefined8 *)puVar15);
  unaff_x26 = puVar15;
  unaff_x27 = puVar4;
  unaff_x28 = puVar6;
  if (*plVar23 != 0) {
    func_0x04f5b874(&uStack_100,*plVar23,*(undefined8 *)PTR_DAT_0777ff80);
    while( true ) {
      do {
        uVar31 = func_0x0514eb68(&uStack_100,*(undefined8 *)puVar4);
        if ((uVar31 & 1) == 0) {
          lVar24 = func_0x0514ec68(&uStack_100,*(undefined8 *)PTR_DAT_0777ff88);
          return lVar24;
        }
      } while (uStack_f0._4_4_ < 1);
      lVar24 = *plVar18;
      if (lVar24 == 0) break;
      lVar25 = *(long *)(lVar24 + 0x10);
      lVar26 = *(long *)puVar6;
      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
      if (lVar25 == 0) goto LAB_04d03e00;
      uVar1 = *(uint *)(lVar24 + 0x18);
      if (uVar1 < *(uint *)(lVar25 + 0x18)) {
        *(uint *)(lVar24 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar25 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)uStack_f0;
      }
      else {
        param_3 = *(long **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
        func_0x0411c6b8();
      }
    }
    func_0x03280cac();
LAB_04d03e00:
    func_0x03280cac();
  }
LAB_04d03e04:
  auVar41 = func_0x03280cac();
  unaff_x21 = auVar41._0_8_;
  if (auVar41._8_4_ == 1) {
    plVar18 = (long *)func_0x072ce910(unaff_x21);
    lVar25 = *plVar18;
    func_0x072ce920();
    lVar24 = func_0x0514ec68(&uStack_100,*(undefined8 *)PTR_DAT_0777ff88);
    if (lVar25 == 0) {
      return lVar24;
    }
    func_0x03280ca4(lVar25);
  }
  unaff_x19 = 0;
  func_0x0514ec68(&uStack_100,*(undefined8 *)PTR_DAT_0777ff88);
  func_0x03365958(unaff_x21);
  func_0x03280ca4(0);
  unaff_x30 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___CreatePowLookup;
  auVar40 = func_0x02f09514();
  uVar31 = auVar40._8_8_;
  param_1 = auVar40._0_8_;
  register0x00000008 = (BADSPACEBASE *)auStack_120;
  unaff_x20 = plVar23;
  unaff_x22 = param_4;
code_r0x04d03ee0:
  *(code **)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  lVar24 = param_1;
  if ((bRam0000000007e1ae71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ac00);
    lVar24 = func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e1ae71 = 1;
  }
  puVar4 = PTR_DAT_0777ac00;
  puVar15 = PTR_DAT_0774ee08;
  if ((int)uVar31 < 1) {
    return lVar24;
  }
  uVar28 = 1;
  while( true ) {
    lVar24 = *(long *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    dVar38 = (double)func_0x05797bf8(0x4000000000000000,(double)((int)uVar28 + -1),0);
    if (lVar24 == 0) break;
    uVar1 = 0x80000000;
    if (dVar38 != INFINITY) {
      uVar1 = (int)dVar38;
    }
    param_3 = (long *)(ulong)uVar1;
    lVar24 = func_0x04f2baf8(lVar24,uVar28,param_3,*(undefined8 *)puVar4);
    uVar1 = (int)uVar28 + 1;
    uVar28 = (ulong)uVar1;
    if ((int)uVar31 < (int)uVar1) {
      return lVar24;
    }
  }
  auVar40 = func_0x03280cac();
  lVar25 = auVar40._8_8_;
  lVar24 = auVar40._0_8_;
  *(code **)((long)register0x00000008 + -0xa0) =
       MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetUnlockedItemsOnBoard;
  *(undefined **)((long)register0x00000008 + -0x98) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x80000000;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x7ff0000000000000;
  *(undefined **)((long)register0x00000008 + -0x80) = puVar4;
  *(undefined **)((long)register0x00000008 + -0x78) = puVar15;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(ulong *)((long)register0x00000008 + -0x68) = uVar28;
  *(long *)((long)register0x00000008 + -0x60) = param_1;
  *(ulong *)((long)register0x00000008 + -0x58) = uVar31 & 0xffffffff;
  if ((bRam0000000007e1ae72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ffe0);
    func_0x03280a18(PTR_DAT_0777ffe8);
    func_0x03280a18(PTR_DAT_0777fff0);
    func_0x03280a18(PTR_DAT_0777fff8);
    func_0x03280a18(PTR_DAT_07780000);
    func_0x03280a18(PTR_DAT_07780008);
    bRam0000000007e1ae72 = 1;
  }
  if (lVar24 == 0) {
    auVar40 = func_0x03280cac();
    puVar10 = PTR_DAT_07780038;
    puVar9 = PTR_DAT_07780030;
    puVar8 = PTR_DAT_07780028;
    puVar7 = PTR_DAT_07780020;
    puVar6 = PTR_DAT_07780018;
    puVar5 = PTR_DAT_07780010;
    *(code **)((long)register0x00000008 + -0x100) =
         MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetToolGraphsFromItems;
    *(undefined **)((long)register0x00000008 + -0xf0) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0xe8) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x80000000;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x7ff0000000000000;
    *(undefined **)((long)register0x00000008 + -0xd0) = puVar4;
    *(undefined **)((long)register0x00000008 + -200) = puVar15;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x7e1a000;
    *(long *)((long)register0x00000008 + -0xb0) = lVar25;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    if ((bRam0000000007e1ae73 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780030);
      func_0x03280a18(PTR_DAT_07780018);
      func_0x03280a18(PTR_DAT_07780038);
      func_0x03280a18(PTR_DAT_07780028);
      func_0x03280a18(PTR_DAT_07780010);
      func_0x03280a18(PTR_DAT_07780020);
      bRam0000000007e1ae73 = 1;
    }
    uVar19 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x053569b8(uVar19,auVar40._0_8_,*(undefined8 *)(*(long *)(param_3[4] + 0xc0) + 0x88),0);
    uVar19 = func_0x03d50a94(auVar40._8_8_,uVar19,*(undefined8 *)puVar6);
    uVar37 = func_0x03280ca0(*(undefined8 *)puVar7);
    lVar20 = 0;
    func_0x05355fbc(uVar37,auVar40._0_8_,*(undefined8 *)(*(long *)(param_3[4] + 0xc0) + 0x90));
    lVar26 = *(long *)puVar8;
    uVar19 = func_0x03d872a8(uVar19,uVar37);
    lVar24 = func_0x03d3c654(uVar19,*(undefined8 *)puVar9);
    lVar25 = *(long *)puVar10;
    uVar37 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    uVar35 = *(undefined8 *)((long)register0x00000008 + -200);
    puVar14 = (undefined1 *)((long)register0x00000008 + -0xa0);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x100);
  }
  else {
    uVar19 = func_0x03eb6ac8(lVar24,*(undefined8 *)PTR_DAT_07780008);
    lVar26 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    if (*(int *)(lVar26 + 0xe0) == 0) {
      func_0x03280b8c(lVar26);
    }
    lVar26 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    puVar6 = PTR_DAT_0777fff8;
    puVar5 = PTR_DAT_0777fff0;
    puVar4 = PTR_DAT_0777ffe8;
    puVar15 = PTR_DAT_0777ffe0;
    lVar26 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x10);
    if (lVar26 == 0) {
      lVar26 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if (*(int *)(lVar26 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar26 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      uVar37 = **(undefined8 **)(lVar26 + 0xb8);
      lVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
      func_0x05355fbc(lVar26,uVar37,
                      *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x78),0);
      lVar27 = *(long *)(*(long *)(lVar25 + 0x20) + 0xc0);
      lVar20 = *(long *)(lVar27 + 0x20);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
        lVar27 = *(long *)(*(long *)(lVar25 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar20 + 0xb8) + 0x10) = lVar26;
      lVar20 = *(long *)(lVar27 + 0x20);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar20 + 0xb8) + 0x10,lVar26);
    }
    uVar19 = func_0x03d872a8(uVar19,lVar26,*(undefined8 *)puVar5);
    uVar37 = func_0x03280ca0(*(undefined8 *)puVar6);
    lVar20 = 0;
    func_0x053569b8(uVar37,lVar24,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x80)
                   );
    lVar26 = *(long *)puVar15;
    lVar24 = func_0x03d50a94(uVar19,uVar37);
    lVar25 = *(long *)puVar4;
    uVar37 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x68);
    uVar35 = *(undefined8 *)((long)register0x00000008 + -0x78);
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x50);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0xa0);
  }
  *(undefined8 *)(puVar14 + -0x20) = uVar21;
  *(undefined8 *)(puVar14 + -0x10) = uVar37;
  *(undefined8 *)(puVar14 + -8) = uVar30;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (lVar24 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar26 = func_0x03280ca0();
    func_0x04143d60(lVar26,lVar24,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return lVar26;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar25);
  lVar24 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0x40) = 0x3d6004c;
  *(undefined8 *)(puVar14 + -0x30) = 0;
  *(long *)(puVar14 + -0x28) = lVar25;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x0419ce74(lVar25,auVar40._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    return lVar25;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar24);
  lVar25 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0x60) = 0x3d600c8;
  *(undefined8 *)(puVar14 + -0x50) = 0;
  *(long *)(puVar14 + -0x48) = lVar24;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar24 = func_0x03280ca0();
    func_0x041c2810(lVar24,auVar40._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return lVar24;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar25);
  lVar24 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0x80) = 0x3d60144;
  *(undefined8 *)(puVar14 + -0x70) = 0;
  *(long *)(puVar14 + -0x68) = lVar25;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x041ddb58(lVar25,auVar40._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    return lVar25;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar24);
  lVar25 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0xa0) = 0x3d601c0;
  *(undefined8 *)(puVar14 + -0x90) = 0;
  *(long *)(puVar14 + -0x88) = lVar24;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar24 = func_0x03280ca0();
    func_0x041e617c(lVar24,auVar40._0_8_,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x10));
    return lVar24;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar25);
  lVar24 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0xc0) = 0x3d6023c;
  *(undefined8 *)(puVar14 + -0xb0) = 0;
  *(long *)(puVar14 + -0xa8) = lVar25;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x041e8ba0(lVar25,auVar40._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    return lVar25;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar24);
  lVar25 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0xe0) = 0x3d602b8;
  *(undefined8 *)(puVar14 + -0xd0) = 0;
  *(long *)(puVar14 + -200) = lVar24;
  if (*(long *)(lVar25 + 0x38) == 0) {
    func_0x03256878(lVar25);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar25 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar24 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 0x10))(lVar24,auVar40._0_8_);
    return lVar24;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar25);
  lVar24 = auVar40._8_8_;
  *(undefined8 *)(puVar14 + -0x100) = 0x3d60338;
  *(undefined8 *)(puVar14 + -0xf0) = 0;
  *(long *)(puVar14 + -0xe8) = lVar25;
  if (*(long *)(lVar24 + 0x38) == 0) {
    func_0x03256878(lVar24);
  }
  if (auVar40._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar24 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    func_0x0420cec8(lVar25,auVar40._0_8_,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x10));
    return lVar25;
  }
  uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar37 = func_0x05ac7464(uVar37,0);
  auVar40 = func_0x03280b7c(uVar37,lVar24);
  *(undefined8 *)(puVar14 + -0x120) = 0x3d603b4;
  *(undefined8 *)(puVar14 + -0x118) = uVar32;
  *(undefined8 *)(puVar14 + -0x110) = 0;
  *(long *)(puVar14 + -0x108) = lVar24;
  lVar24 = lVar26;
  if (*(long *)(lVar26 + 0x38) == 0) {
    func_0x03256878(lVar26);
  }
  puVar15 = PTR_DAT_07779d10;
  if ((auVar40._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar40._8_8_ == 0)) {
    uVar37 = func_0x03280a2c(puVar15);
    uVar37 = func_0x05ac7464(uVar37,0);
    auVar39 = func_0x03280b7c(uVar37,lVar26);
    *(undefined8 *)(puVar14 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])(puVar14 + -0x138) = auVar40;
    *(long *)(puVar14 + -0x128) = lVar26;
    lVar25 = lVar24;
    if (*(long *)(lVar24 + 0x38) == 0) {
      func_0x03256878(lVar24);
    }
    puVar15 = PTR_DAT_07779d10;
    if ((auVar39._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar39._8_8_ != 0)) {
      lVar25 = *(long *)(puVar14 + -0x128);
      lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
      uVar21 = 0;
      puVar12 = puVar14 + -0x120;
      uVar37 = *(undefined8 *)(puVar14 + -0x140);
      auVar40 = *(undefined1 (*) [16])(puVar14 + -0x138);
      goto LAB_03d60730;
    }
    uVar37 = func_0x03280a2c(puVar15);
    uVar37 = func_0x05ac7464(uVar37,0);
    auVar40 = func_0x03280b7c(uVar37,lVar24);
    *(undefined8 *)(puVar14 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])(puVar14 + -0x158) = auVar39;
    *(long *)(puVar14 + -0x148) = lVar24;
    lVar24 = lVar25;
    if (*(long *)(lVar25 + 0x38) == 0) {
      func_0x03256878(lVar25);
    }
    puVar15 = PTR_DAT_07779d10;
    if ((auVar40._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar40._8_8_ == 0)) {
      uVar37 = func_0x03280a2c(puVar15);
      uVar37 = func_0x05ac7464(uVar37,0);
      auVar39 = func_0x03280b7c(uVar37,lVar25);
      *(undefined8 *)(puVar14 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])(puVar14 + -0x178) = auVar40;
      *(long *)(puVar14 + -0x168) = lVar25;
      lVar25 = lVar24;
      if (*(long *)(lVar24 + 0x38) == 0) {
        func_0x03256878(lVar24);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar39._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar39._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 8))
                           (auVar39._0_8_,auVar39._8_8_,0);
        return lVar24;
      }
      uVar37 = func_0x03280a2c(puVar15);
      uVar37 = func_0x05ac7464(uVar37,0);
      auVar40 = func_0x03280b7c(uVar37,lVar24);
      *(undefined8 *)(puVar14 + -0x1b0) = 0x3d60588;
      *(undefined8 *)(puVar14 + -0x1a0) = uVar19;
      *(undefined1 (*) [16])(puVar14 + -0x198) = auVar39;
      *(long *)(puVar14 + -0x188) = lVar24;
      lVar24 = lVar25;
      lVar27 = lVar20;
      if (*(long *)(lVar20 + 0x38) == 0) {
        func_0x03256878(lVar20);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar40._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar40._8_8_ == 0)) {
        uVar19 = func_0x03280a2c(puVar15);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar39 = func_0x03280b7c(uVar19,lVar20);
        puVar11 = puVar14 + -0x1e0;
        *(undefined8 *)(puVar14 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])(puVar14 + -0x1d0) = auVar40;
        *(long *)(puVar14 + -0x1c0) = lVar25;
        *(long *)(puVar14 + -0x1b8) = lVar20;
        lVar25 = lVar24;
        lVar26 = lVar27;
        if (*(long *)(lVar27 + 0x38) == 0) {
          func_0x03256878(lVar27);
        }
        puVar15 = PTR_DAT_07779d10;
        if ((auVar39._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar39._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x38) + 0x10))
                             (auVar39._0_8_,auVar39._8_8_,lVar24);
          return lVar24;
        }
        uVar19 = func_0x03280a2c(puVar15);
        uVar19 = func_0x05ac7464(uVar19,0);
        uVar37 = 0x3d6068c;
        auVar40 = func_0x03280b7c(uVar19,lVar27);
        goto LAB_03d6068c;
      }
      lVar26 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      uVar21 = *(undefined8 *)(puVar14 + -0x188);
      uVar19 = *(undefined8 *)(puVar14 + -0x1a0);
      auVar39 = *(undefined1 (*) [16])(puVar14 + -0x198);
      puVar13 = puVar14 + -0x180;
      uVar37 = *(undefined8 *)(puVar14 + -0x1b0);
    }
    else {
      uVar21 = *(undefined8 *)(puVar14 + -0x148);
      lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
      lVar25 = 0;
      puVar13 = puVar14 + -0x140;
      uVar37 = *(undefined8 *)(puVar14 + -0x160);
      auVar39 = *(undefined1 (*) [16])(puVar14 + -0x158);
    }
  }
  else {
    lVar24 = *(long *)(puVar14 + -0x110);
    lVar27 = *(long *)(puVar14 + -0x108);
    lVar26 = *(long *)(*(long *)(lVar26 + 0x38) + 8);
    lVar25 = 0;
    puVar11 = puVar14 + -0x100;
    uVar37 = *(undefined8 *)(puVar14 + -0x120);
    auVar39._8_8_ = *(undefined8 *)(puVar14 + -0x118);
    auVar39._0_8_ = uVar19;
LAB_03d6068c:
    puVar12 = puVar11 + -0x30;
    *(undefined8 *)(puVar11 + -0x30) = uVar37;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar39;
    *(long *)(puVar11 + -0x10) = lVar24;
    *(long *)(puVar11 + -8) = lVar27;
    plVar18 = *(long **)(lVar26 + 0x38);
    lVar24 = lVar26;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar26);
      plVar18 = *(long **)(lVar26 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar20 = func_0x03280ca0();
    uVar21 = *(undefined8 *)(*(long *)(lVar26 + 0x38) + 8);
    func_0x0531dbd0(lVar20,0xfffffffe);
    if (lVar20 != 0) {
      *(undefined8 *)(lVar20 + 0x38) = auVar40._0_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x38),auVar40._0_8_);
      *(undefined8 *)(lVar20 + 0x48) = auVar40._8_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x48),auVar40._8_8_);
      *(long *)(lVar20 + 0x28) = lVar25;
      func_0x032809c4((long *)(lVar20 + 0x28),lVar25);
      return lVar20;
    }
    uVar37 = 0x3d60730;
    auVar39 = func_0x03280cac();
    uVar19 = 0;
LAB_03d60730:
    puVar13 = puVar12 + -0x30;
    *(undefined8 *)(puVar12 + -0x30) = uVar37;
    *(undefined8 *)(puVar12 + -0x20) = uVar19;
    *(undefined1 (*) [16])(puVar12 + -0x18) = auVar40;
    *(long *)(puVar12 + -8) = lVar25;
    plVar18 = *(long **)(lVar24 + 0x38);
    lVar26 = lVar24;
    if (plVar18 == (long *)0x0) {
      func_0x03256878(lVar24);
      plVar18 = *(long **)(lVar24 + 0x38);
    }
    if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar20 = func_0x03280ca0();
    lVar25 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
    func_0x0531e428(lVar20,0xfffffffe);
    if (lVar20 != 0) {
      *(undefined8 *)(lVar20 + 0x38) = auVar39._0_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x38),auVar39._0_8_);
      *(undefined8 *)(lVar20 + 0x48) = auVar39._8_8_;
      func_0x032809c4((undefined8 *)(lVar20 + 0x48),auVar39._8_8_);
      *(undefined8 *)(lVar20 + 0x28) = uVar21;
      func_0x032809c4((undefined8 *)(lVar20 + 0x28),uVar21);
      return lVar20;
    }
    uVar37 = 0x3d607d4;
    auVar40 = func_0x03280cac();
    uVar19 = 0;
  }
  *(undefined8 *)(puVar13 + -0x30) = uVar37;
  *(undefined8 *)(puVar13 + -0x20) = uVar19;
  *(undefined1 (*) [16])(puVar13 + -0x18) = auVar39;
  *(undefined8 *)(puVar13 + -8) = uVar21;
  plVar18 = *(long **)(lVar26 + 0x38);
  lVar24 = lVar26;
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar26);
    plVar18 = *(long **)(lVar26 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar20 = func_0x03280ca0();
  uVar19 = *(undefined8 *)(*(long *)(lVar26 + 0x38) + 8);
  func_0x0531ec78(lVar20,0xfffffffe);
  if (lVar20 != 0) {
    *(undefined8 *)(lVar20 + 0x40) = auVar40._0_8_;
    func_0x032809c4((undefined8 *)(lVar20 + 0x40),auVar40._0_8_);
    *(undefined8 *)(lVar20 + 0x50) = auVar40._8_8_;
    func_0x032809c4((undefined8 *)(lVar20 + 0x50),auVar40._8_8_);
    *(long *)(lVar20 + 0x30) = lVar25;
    func_0x032809c4((long *)(lVar20 + 0x30),lVar25);
    return lVar20;
  }
  auVar39 = func_0x03280cac();
  lVar26 = auVar39._0_8_;
  *(undefined8 *)(puVar13 + -0x60) = 0x3d60878;
  *(undefined8 *)(puVar13 + -0x58) = uVar35;
  *(undefined8 *)(puVar13 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar13 + -0x48) = auVar40;
  *(long *)(puVar13 + -0x38) = lVar25;
  plVar18 = *(long **)(lVar24 + 0x38);
  if (plVar18 == (long *)0x0) {
    func_0x03256878(lVar24);
    plVar18 = *(long **)(lVar24 + 0x38);
  }
  if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar25 = func_0x03280ca0();
  puVar17 = *(undefined8 **)(*(long *)(lVar24 + 0x38) + 8);
  (*(code *)*puVar17)(lVar25,0xfffffffe);
  if (lVar25 != 0) {
    func_0x02f17738(lVar25,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0xc0,lVar26);
    func_0x02f17738(lVar25,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0x100,auVar39._8_8_);
    func_0x02f17738(lVar25,*(long *)(**(long **)(lVar24 + 0x38) + 0x80) + 0x80,uVar19);
    return lVar25;
  }
  auVar40 = func_0x03280cac();
  lVar25 = auVar40._8_8_;
  plVar18 = auVar40._0_8_;
  *(undefined8 *)(puVar13 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar13 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar13 + -0x80) = auVar39;
  *(long *)(puVar13 + -0x70) = lVar24;
  *(undefined8 *)(puVar13 + -0x68) = uVar19;
  puVar22 = puVar17;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar25 == 0)) {
    uVar19 = func_0x03280a2c(puVar15);
    uVar19 = func_0x05ac7464(uVar19,0);
    func_0x03280b7c(uVar19,puVar17);
LAB_03d60c04:
    func_0x03281048(plVar18);
    lVar24 = 0;
  }
  else {
    lVar24 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    lVar20 = *plVar18;
    bVar3 = *(byte *)(lVar20 + 0x130);
    if ((*(byte *)(lVar24 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar24 + 0x130) * 8 + -8) == lVar24)) {
      lVar24 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
        lVar20 = *plVar18;
        bVar3 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar24 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar24 + 0x130) * 8 + -8) == lVar24))
      {
        lVar24 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c(lVar24);
          lVar20 = *plVar18;
          bVar3 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar24 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar24 + 0x130) * 8 + -8) == lVar24
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar24 = (**(code **)(lVar20 + 0x228))(plVar18,lVar25,*(undefined8 *)(lVar20 + 0x230));
          return lVar24;
        }
      }
      goto LAB_03d60c04;
    }
    lVar24 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar24 = func_0x03280b90(plVar18,lVar24);
    if (lVar24 == 0) {
      lVar24 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar24 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar24 + 0x130) * 8 + -8) != lVar24
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar24 = func_0x03280ca0();
        func_0x04b68fa4(lVar24,plVar18,lVar25,*(undefined8 *)(puVar17[7] + 0x58));
        return lVar24;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar26 = func_0x03280ca0();
      lVar24 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = func_0x0325681c(lVar24);
      }
      if ((*(byte *)(lVar24 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar24 + 0x130) * 8 + -8) == lVar24
         )) {
        func_0x04b713b0(lVar26,plVar18,lVar25,*(undefined8 *)(puVar17[7] + 0x48));
        return lVar26;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar26 = func_0x03280ca0();
    lVar24 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c(lVar24);
    }
    lVar20 = func_0x03280b90(plVar18,lVar24);
    if (lVar20 != 0) {
      func_0x04b66610(lVar26,lVar20,lVar25,*(undefined8 *)(puVar17[7] + 0x30));
      return lVar26;
    }
  }
  auVar39 = func_0x03281048(plVar18,lVar24);
  lVar25 = auVar39._8_8_;
  plVar18 = auVar39._0_8_;
  *(undefined8 *)(puVar13 + -0xc0) = 0x3d60c18;
  *(long *)(puVar13 + -0xb8) = lVar24;
  *(long *)(puVar13 + -0xb0) = lVar26;
  *(undefined8 **)(puVar13 + -0xa8) = puVar17;
  *(undefined1 (*) [16])(puVar13 + -0xa0) = auVar40;
  if (puVar22[7] == 0) {
    func_0x03256878(puVar22);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar18 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar25 == 0)) {
    uVar19 = func_0x03280a2c(puVar15);
    uVar19 = func_0x05ac7464(uVar19,0);
    func_0x03280b7c(uVar19,puVar22);
  }
  else {
    lVar26 = *(long *)(puVar22[7] + 0x10);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar20 = *plVar18;
    bVar3 = *(byte *)(lVar20 + 0x130);
    if ((bVar3 < *(byte *)(lVar26 + 0x130)) ||
       (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) != lVar26)) {
      lVar26 = *(long *)(puVar22[7] + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      lVar26 = func_0x03280b90(plVar18,lVar26);
      if (lVar26 != 0) {
        if ((*(byte *)(*(long *)(puVar22[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar26 = func_0x03280ca0();
        lVar24 = *(long *)(puVar22[7] + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c(lVar24);
        }
        lVar20 = func_0x03280b90(plVar18,lVar24);
        if (lVar20 != 0) {
          func_0x04b667e0(lVar26,lVar20,lVar25,*(undefined8 *)(puVar22[7] + 0x30));
          return lVar26;
        }
        goto LAB_03d60ee0;
      }
      lVar26 = *(long *)(puVar22[7] + 0x38);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar26 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) != lVar26
         )) {
        if ((*(byte *)(*(long *)(puVar22[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar24 = func_0x03280ca0();
        func_0x04b693d0(lVar24,plVar18,lVar25,*(undefined8 *)(puVar22[7] + 0x58));
        return lVar24;
      }
      if ((*(byte *)(*(long *)(puVar22[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar26 = func_0x03280ca0();
      lVar20 = *(long *)(puVar22[7] + 0x38);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      if ((*(byte *)(lVar20 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar20 + 0x130) * 8 + -8) == lVar20
         )) {
        func_0x04b715c8(lVar26,plVar18,lVar25,*(undefined8 *)(puVar22[7] + 0x48));
        return lVar26;
      }
    }
    else {
      lVar26 = *(long *)(puVar22[7] + 0x10);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
        lVar20 = *plVar18;
        bVar3 = *(byte *)(lVar20 + 0x130);
      }
      if ((*(byte *)(lVar26 + 0x130) <= bVar3) &&
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) == lVar26))
      {
        lVar26 = *(long *)(puVar22[7] + 0x10);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
          lVar20 = *plVar18;
          bVar3 = *(byte *)(lVar20 + 0x130);
        }
        if ((*(byte *)(lVar26 + 0x130) <= bVar3) &&
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) == lVar26
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar24 = (**(code **)(lVar20 + 0x228))(plVar18,lVar25,*(undefined8 *)(lVar20 + 0x230));
          return lVar24;
        }
      }
    }
  }
  func_0x03281048(plVar18);
LAB_03d60ee0:
  lVar24 = func_0x03281048(plVar18,lVar24);
  *(undefined8 *)(puVar13 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar13 + -0xd0) = auVar39;
  lVar25 = *(long *)(lVar24 + 0x20);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 0x10);
  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
    lVar25 = func_0x0325681c();
  }
  lVar25 = **(long **)(lVar25 + 0xb8);
  func_0x03280ab0();
  if (lVar25 == 0) {
    lVar25 = *(long *)(lVar24 + 0x20);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    lVar25 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar26 = *(long *)(lVar24 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    **(long **)(lVar26 + 0xb8) = lVar25;
    lVar24 = *(long *)(lVar24 + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 0x10);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar24 + 0xb8),lVar25);
  }
  return lVar25;
}


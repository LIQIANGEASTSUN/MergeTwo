/* Ghidra 12.1.2 native pseudocode; RVA 0x4C05944; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.InitializeSystem; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___InitializeSystem
               (long param_1,long param_2,long *param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code **ppcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long *unaff_x24;
  undefined *puVar31;
  code *pcVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_178;
  code *apcStack_170 [2];
  undefined *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
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
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000007e1ae83 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ff58);
    func_0x03280a18(PTR_DAT_0777ff60);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e1ae83 = 1;
  }
  puVar18 = PTR_DAT_0777ff60;
  puVar5 = PTR_DAT_0777ff58;
  puVar4 = PTR_DAT_0777c248;
  puVar12 = PTR_DAT_077730f8;
  puVar13 = PTR_DAT_0774ee08;
  uVar28 = 0;
  plVar29 = (long *)0x7;
  while( true ) {
    plVar30 = *(long **)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar14 = (long *)func_0x0624cb20(plVar29,0);
    plStack_90 = unaff_x24;
    if (plVar14 == (long *)0x0) break;
    lVar21 = *plVar14;
    uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779818) {
          puVar15 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_04d05a8c;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    param_3 = (long *)0x0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar14);
LAB_04d05a8c:
    unaff_x24 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
    plStack_90 = plVar14;
    if (plVar30 == (long *)0x0) break;
    lVar22 = *plVar30;
    lVar21 = *(long *)puVar12;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar21) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_04d05aec;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar30,lVar21,0);
LAB_04d05aec:
    param_3 = (long *)puVar15[1];
    plVar30 = (long *)(*(code *)*puVar15)(plVar30,unaff_x24);
    lVar21 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48))
                       (param_1);
    plStack_90 = unaff_x24;
    if (lVar21 == 0) break;
    param_4 = *(undefined8 **)puVar5;
    param_3 = plVar29;
    func_0x04fb5c58(lVar21,plVar30);
    lVar21 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50))
                       (param_1);
    if (lVar21 == 0) break;
    param_4 = *(undefined8 **)puVar18;
    param_3 = plVar30;
    func_0x04f61ea4(lVar21,plVar29);
    if (plVar30 == (long *)0x0) break;
    lVar21 = *plVar30;
    uVar25 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_04d05ba8;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    param_3 = (long *)0x0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04d05ba8:
    lVar21 = (*(code *)*puVar15)(plVar30,puVar15[1]);
    if (lVar21 == 0) break;
    lVar22 = *(long *)puVar13;
    uVar2 = *(undefined4 *)(lVar21 + 0x18);
    if (*(int *)(lVar22 + 0xe0) == 0) {
      func_0x03280b8c(lVar22);
    }
    param_3 = (long *)0x0;
    uVar28 = func_0x05797438(uVar2,uVar28);
    uVar1 = (int)plVar29 + 1;
    plVar29 = (long *)(ulong)uVar1;
    uVar28 = uVar28 & 0xffffffff;
    if (uVar1 == 0x11) {
                    /* WARNING: Could not recover jumptable at 0x04d05c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar21 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58))
                         (param_1,uVar28);
      return lVar21;
    }
  }
  auVar35 = func_0x03280cac();
  puVar7 = PTR_DAT_0777ff78;
  puVar6 = PTR_DAT_0777ff70;
  puVar31 = PTR_DAT_0777ff68;
  plVar14 = auVar35._8_8_;
  uVar19 = auVar35._0_8_;
  puStack_c0 = puVar18;
  pcStack_b8 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___AnalyzeBoardToolChains;
  puStack_b0 = puVar5;
  puStack_a8 = puVar12;
  puStack_a0 = puVar13;
  puStack_98 = puVar4;
  plStack_88 = plVar30;
  plStack_80 = plVar29;
  uStack_78 = uVar28;
  lStack_70 = param_2;
  lStack_68 = param_1;
  if ((bRam0000000007e1ae84 & 1) == 0) {
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
    bRam0000000007e1ae84 = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar16 = (undefined8 *)
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60))(uVar19)
  ;
  puVar15 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68);
  lVar21 = (*(code *)*puVar15)(uVar19,puVar16);
  lVar22 = func_0x03280ca0(*(undefined8 *)puVar31);
  func_0x04f5a6b8(lVar22,*(undefined8 *)puVar6);
  *param_3 = lVar22;
  func_0x032809c4(param_3,lVar22);
  uVar17 = func_0x03280ca0(*(undefined8 *)puVar31);
  func_0x04f5a6b8(uVar17,*(undefined8 *)puVar6);
  *param_4 = uVar17;
  func_0x032809c4(param_4,uVar17);
  puVar18 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x0411be64(puVar18,*(undefined8 *)PTR_DAT_0777ffd8);
  *plVar14 = (long)puVar18;
  func_0x032809c4(plVar14,puVar18);
  puVar5 = PTR_DAT_0777ffc8;
  puVar4 = PTR_DAT_0777ffa0;
  puVar12 = PTR_DAT_0777ff98;
  puVar13 = PTR_DAT_0777ff90;
  if (lVar21 != 0) {
    func_0x04145068(&uStack_118,lVar21,*(undefined8 *)PTR_DAT_0777ffd0);
    uStack_d8 = uStack_110;
    uStack_e0 = uStack_118;
    uStack_d0 = uStack_108;
    while (uVar28 = func_0x051159b4(&uStack_e0,*(undefined8 *)puVar4), (uVar28 & 1) != 0) {
      puVar15 = puVar16;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70))
                (uVar19,uStack_d0,puVar16,*param_3,*param_4);
    }
    func_0x051159b0(&uStack_e0,*(undefined8 *)puVar13);
    puVar18 = puVar13;
    puVar31 = puVar12;
    if (*param_3 != 0) {
      func_0x04f5b874(&uStack_100,*param_3,*(undefined8 *)PTR_DAT_0777ff80);
      while( true ) {
        do {
          uVar28 = func_0x0514eb68(&uStack_100,*(undefined8 *)puVar12);
          if ((uVar28 & 1) == 0) {
            lVar21 = func_0x0514ec68(&uStack_100,*(undefined8 *)PTR_DAT_0777ff88);
            return lVar21;
          }
        } while (uStack_f0._4_4_ < 1);
        lVar22 = *plVar14;
        if (lVar22 == 0) break;
        lVar23 = *(long *)(lVar22 + 0x10);
        lVar26 = *(long *)puVar5;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_04d05f5c;
        uVar1 = *(uint *)(lVar22 + 0x18);
        if (uVar1 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar23 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)uStack_f0;
        }
        else {
          puVar15 = *(undefined8 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
          func_0x0411c6b8();
        }
      }
      func_0x03280cac();
LAB_04d05f5c:
      func_0x03280cac();
    }
  }
  auVar36 = func_0x03280cac();
  uVar17 = auVar36._0_8_;
  if (auVar36._8_4_ == 1) {
    plVar29 = (long *)func_0x072ce910(uVar17);
    lVar23 = *plVar29;
    func_0x072ce920();
    lVar22 = func_0x0514ec68(&uStack_100,*(undefined8 *)PTR_DAT_0777ff88);
    if (lVar23 == 0) {
      return lVar22;
    }
    func_0x03280ca4(lVar23);
  }
  func_0x0514ec68(&uStack_100,*(undefined8 *)PTR_DAT_0777ff88);
  func_0x03365958(uVar17);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  lVar23 = auVar35._0_8_;
  apcStack_170[0] = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___CreatePowLookup;
  uStack_128 = 0;
  uVar28 = auVar35._8_8_ & 0xffffffff;
  lVar22 = lVar23;
  puStack_160 = puVar18;
  lStack_158 = lVar21;
  puStack_150 = puVar16;
  uStack_148 = uVar19;
  puStack_140 = param_4;
  uStack_138 = uVar17;
  plStack_130 = param_3;
  if ((bRam0000000007e1ae85 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ac00);
    lVar22 = func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e1ae85 = 1;
  }
  puVar12 = PTR_DAT_0777ac00;
  puVar13 = PTR_DAT_0774ee08;
  if (0 < auVar35._8_4_) {
    uVar25 = 1;
    do {
      lVar21 = *(long *)(lVar23 + 0x88);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      dVar33 = (double)func_0x05797bf8(0x4000000000000000,(double)((int)uVar25 + -1),0);
      if (lVar21 == 0) {
        auVar35 = func_0x03280cac();
        lVar22 = auVar35._8_8_;
        lVar26 = auVar35._0_8_;
        pcStack_1c0 = 
        MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetUnlockedItemsOnBoard;
        uStack_1b0 = 0x80000000;
        uStack_1a8 = 0x7ff0000000000000;
        puStack_1a0 = puVar12;
        puStack_198 = puVar13;
        puStack_1b8 = puVar31;
        lStack_190 = lVar21;
        uStack_188 = uVar25;
        lStack_180 = lVar23;
        uStack_178 = uVar28;
        if ((bRam0000000007e1ae86 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ffe0);
          func_0x03280a18(PTR_DAT_0777ffe8);
          func_0x03280a18(PTR_DAT_0777fff0);
          func_0x03280a18(PTR_DAT_0777fff8);
          func_0x03280a18(PTR_DAT_07780000);
          func_0x03280a18(PTR_DAT_07780008);
          bRam0000000007e1ae86 = 1;
        }
        if (lVar26 == 0) {
          auVar35 = func_0x03280cac();
          puVar6 = PTR_DAT_07780038;
          puVar31 = PTR_DAT_07780030;
          puVar18 = PTR_DAT_07780028;
          puVar5 = PTR_DAT_07780020;
          puVar4 = PTR_DAT_07780018;
          puVar12 = PTR_DAT_07780010;
          if ((bRam0000000007e1ae87 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07780030);
            func_0x03280a18(PTR_DAT_07780018);
            func_0x03280a18(PTR_DAT_07780038);
            func_0x03280a18(PTR_DAT_07780028);
            func_0x03280a18(PTR_DAT_07780010);
            func_0x03280a18(PTR_DAT_07780020);
            bRam0000000007e1ae87 = 1;
          }
          uVar19 = func_0x03280ca0(*(undefined8 *)puVar12);
          func_0x053569b8(uVar19,auVar35._0_8_,*(undefined8 *)(*(long *)(puVar15[4] + 0xc0) + 0x88),
                          0);
          uVar19 = func_0x03d50a94(auVar35._8_8_,uVar19,*(undefined8 *)puVar4);
          uVar17 = func_0x03280ca0(*(undefined8 *)puVar5);
          lVar20 = 0;
          func_0x05355fbc(uVar17,auVar35._0_8_,*(undefined8 *)(*(long *)(puVar15[4] + 0xc0) + 0x90))
          ;
          lVar24 = *(long *)puVar18;
          uVar19 = func_0x03d872a8(uVar19,uVar17);
          lVar23 = func_0x03d3c654(uVar19,*(undefined8 *)puVar31);
          lVar26 = *(long *)puVar6;
          uVar28 = 0x7e1a000;
          ppcVar8 = &pcStack_1c0;
          pcVar32 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___GetToolGraphsFromItems;
          uVar25 = 0;
        }
        else {
          uVar19 = func_0x03eb6ac8(lVar26,*(undefined8 *)PTR_DAT_07780008);
          lVar21 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            func_0x03280b8c(lVar21);
          }
          lVar21 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          puVar5 = PTR_DAT_0777fff8;
          puVar4 = PTR_DAT_0777fff0;
          puVar12 = PTR_DAT_0777ffe8;
          puVar13 = PTR_DAT_0777ffe0;
          lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x10);
          if (lVar21 == 0) {
            lVar21 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            if (*(int *)(lVar21 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar21 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            uVar17 = **(undefined8 **)(lVar21 + 0xb8);
            lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
            func_0x05355fbc(lVar21,uVar17,
                            *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x78),0);
            lVar24 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
            lVar23 = *(long *)(lVar24 + 0x20);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c();
              lVar24 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
            }
            *(long *)(*(long *)(lVar23 + 0xb8) + 0x10) = lVar21;
            lVar23 = *(long *)(lVar24 + 0x20);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar23 + 0xb8) + 0x10,lVar21);
          }
          uVar19 = func_0x03d872a8(uVar19,lVar21,*(undefined8 *)puVar4);
          uVar17 = func_0x03280ca0(*(undefined8 *)puVar5);
          lVar20 = 0;
          func_0x053569b8(uVar17,lVar26,
                          *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x80));
          lVar24 = *(long *)puVar13;
          lVar23 = func_0x03d50a94(uVar19,uVar17);
          lVar26 = *(long *)puVar12;
          ppcVar8 = apcStack_170;
          uVar25 = uStack_178;
          lVar22 = lStack_180;
          uVar28 = uStack_188;
          lVar21 = lStack_190;
          puVar13 = puStack_198;
          pcVar32 = pcStack_1c0;
        }
        *(code **)((long)ppcVar8 + -0x20) = pcVar32;
        *(long *)((long)ppcVar8 + -0x10) = lVar22;
        *(ulong *)((long)ppcVar8 + -8) = uVar25;
        if (*(long *)(lVar26 + 0x38) == 0) {
          func_0x03256878(lVar26);
        }
        if (lVar23 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar26 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x04143d60(lVar21,lVar23,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar26);
        lVar22 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0x40) = 0x3d6004c;
        *(undefined8 *)((long)ppcVar8 + -0x30) = 0;
        *(long *)((long)ppcVar8 + -0x28) = lVar26;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x0419ce74(lVar21,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar22);
        lVar23 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0x60) = 0x3d600c8;
        *(undefined8 *)((long)ppcVar8 + -0x50) = 0;
        *(long *)((long)ppcVar8 + -0x48) = lVar22;
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x03256878(lVar23);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x041c2810(lVar21,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar23);
        lVar22 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0x80) = 0x3d60144;
        *(undefined8 *)((long)ppcVar8 + -0x70) = 0;
        *(long *)((long)ppcVar8 + -0x68) = lVar23;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x041ddb58(lVar21,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar22);
        lVar23 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0xa0) = 0x3d601c0;
        *(undefined8 *)((long)ppcVar8 + -0x90) = 0;
        *(long *)((long)ppcVar8 + -0x88) = lVar22;
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x03256878(lVar23);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x041e617c(lVar21,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar23);
        lVar22 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0xc0) = 0x3d6023c;
        *(undefined8 *)((long)ppcVar8 + -0xb0) = 0;
        *(long *)((long)ppcVar8 + -0xa8) = lVar23;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x041e8ba0(lVar21,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar22);
        lVar23 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0xe0) = 0x3d602b8;
        *(undefined8 *)((long)ppcVar8 + -0xd0) = 0;
        *(long *)((long)ppcVar8 + -200) = lVar22;
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x03256878(lVar23);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x10))(lVar21,auVar35._0_8_);
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar23);
        lVar22 = auVar35._8_8_;
        *(undefined8 *)((long)ppcVar8 + -0x100) = 0x3d60338;
        *(undefined8 *)((long)ppcVar8 + -0xf0) = 0;
        *(long *)((long)ppcVar8 + -0xe8) = lVar23;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (auVar35._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          func_0x0420cec8(lVar21,auVar35._0_8_,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return lVar21;
        }
        uVar19 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar19 = func_0x05ac7464(uVar19,0);
        auVar35 = func_0x03280b7c(uVar19,lVar22);
        *(undefined8 *)((long)ppcVar8 + -0x120) = 0x3d603b4;
        *(ulong *)((long)ppcVar8 + -0x118) = uVar28;
        *(undefined8 *)((long)ppcVar8 + -0x110) = 0;
        *(long *)((long)ppcVar8 + -0x108) = lVar22;
        lVar22 = lVar24;
        if (*(long *)(lVar24 + 0x38) == 0) {
          func_0x03256878(lVar24);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar35._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
          uVar19 = func_0x03280a2c(puVar12);
          uVar19 = func_0x05ac7464(uVar19,0);
          auVar34 = func_0x03280b7c(uVar19,lVar24);
          *(undefined8 *)((long)ppcVar8 + -0x140) = 0x3d60428;
          *(undefined1 (*) [16])((long)ppcVar8 + -0x138) = auVar35;
          *(long *)((long)ppcVar8 + -0x128) = lVar24;
          lVar23 = lVar22;
          if (*(long *)(lVar22 + 0x38) == 0) {
            func_0x03256878(lVar22);
          }
          puVar12 = PTR_DAT_07779d10;
          if ((auVar34._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
            lVar23 = *(long *)((long)ppcVar8 + -0x128);
            lVar22 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
            uVar17 = 0;
            puVar10 = (undefined1 *)((long)ppcVar8 + -0x120);
            uVar19 = *(undefined8 *)((long)ppcVar8 + -0x140);
            auVar35 = *(undefined1 (*) [16])((long)ppcVar8 + -0x138);
            goto LAB_03d60730;
          }
          uVar19 = func_0x03280a2c(puVar12);
          uVar19 = func_0x05ac7464(uVar19,0);
          auVar35 = func_0x03280b7c(uVar19,lVar22);
          *(undefined8 *)((long)ppcVar8 + -0x160) = 0x3d6049c;
          *(undefined1 (*) [16])((long)ppcVar8 + -0x158) = auVar34;
          *(long *)((long)ppcVar8 + -0x148) = lVar22;
          lVar22 = lVar23;
          if (*(long *)(lVar23 + 0x38) == 0) {
            func_0x03256878(lVar23);
          }
          puVar12 = PTR_DAT_07779d10;
          if ((auVar35._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
            uVar19 = func_0x03280a2c(puVar12);
            uVar19 = func_0x05ac7464(uVar19,0);
            auVar34 = func_0x03280b7c(uVar19,lVar23);
            *(undefined8 *)((long)ppcVar8 + -0x180) = 0x3d60510;
            *(undefined1 (*) [16])((long)ppcVar8 + -0x178) = auVar35;
            *(long *)((long)ppcVar8 + -0x168) = lVar23;
            lVar23 = lVar22;
            if (*(long *)(lVar22 + 0x38) == 0) {
              func_0x03256878(lVar22);
            }
            puVar12 = PTR_DAT_07779d10;
            if ((auVar34._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))
                                 (auVar34._0_8_,auVar34._8_8_,0);
              return lVar21;
            }
            uVar19 = func_0x03280a2c(puVar12);
            uVar19 = func_0x05ac7464(uVar19,0);
            auVar35 = func_0x03280b7c(uVar19,lVar22);
            *(undefined8 *)((long)ppcVar8 + -0x1b0) = 0x3d60588;
            *(long *)((long)ppcVar8 + -0x1a0) = lVar21;
            *(undefined1 (*) [16])((long)ppcVar8 + -0x198) = auVar34;
            *(long *)((long)ppcVar8 + -0x188) = lVar22;
            lVar22 = lVar23;
            lVar26 = lVar20;
            if (*(long *)(lVar20 + 0x38) == 0) {
              func_0x03256878(lVar20);
            }
            puVar12 = PTR_DAT_07779d10;
            if ((auVar35._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
              uVar19 = func_0x03280a2c(puVar12);
              uVar19 = func_0x05ac7464(uVar19,0);
              auVar34 = func_0x03280b7c(uVar19,lVar20);
              puVar9 = (undefined1 *)((long)ppcVar8 + -0x1e0);
              *(undefined8 *)((long)ppcVar8 + -0x1e0) = 0x3d60608;
              *(undefined1 (*) [16])((long)ppcVar8 + -0x1d0) = auVar35;
              *(long *)((long)ppcVar8 + -0x1c0) = lVar23;
              *(long *)((long)ppcVar8 + -0x1b8) = lVar20;
              lVar23 = lVar22;
              lVar24 = lVar26;
              if (*(long *)(lVar26 + 0x38) == 0) {
                func_0x03256878(lVar26);
              }
              puVar12 = PTR_DAT_07779d10;
              if ((auVar34._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x38) + 0x10))
                                   (auVar34._0_8_,auVar34._8_8_,lVar22);
                return lVar21;
              }
              uVar19 = func_0x03280a2c(puVar12);
              uVar17 = func_0x05ac7464(uVar19,0);
              uVar19 = 0x3d6068c;
              auVar35 = func_0x03280b7c(uVar17,lVar26);
              goto LAB_03d6068c;
            }
            lVar26 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
            uVar17 = *(undefined8 *)((long)ppcVar8 + -0x188);
            lVar21 = *(long *)((long)ppcVar8 + -0x1a0);
            auVar34 = *(undefined1 (*) [16])((long)ppcVar8 + -0x198);
            puVar11 = (undefined1 *)((long)ppcVar8 + -0x180);
            uVar19 = *(undefined8 *)((long)ppcVar8 + -0x1b0);
          }
          else {
            uVar17 = *(undefined8 *)((long)ppcVar8 + -0x148);
            lVar26 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
            lVar23 = 0;
            puVar11 = (undefined1 *)((long)ppcVar8 + -0x140);
            uVar19 = *(undefined8 *)((long)ppcVar8 + -0x160);
            auVar34 = *(undefined1 (*) [16])((long)ppcVar8 + -0x158);
          }
        }
        else {
          lVar22 = *(long *)((long)ppcVar8 + -0x110);
          lVar26 = *(long *)((long)ppcVar8 + -0x108);
          lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + 8);
          lVar23 = 0;
          puVar9 = (undefined1 *)((long)ppcVar8 + -0x100);
          uVar19 = *(undefined8 *)((long)ppcVar8 + -0x120);
          auVar34._8_8_ = *(undefined8 *)((long)ppcVar8 + -0x118);
          auVar34._0_8_ = lVar21;
LAB_03d6068c:
          puVar10 = puVar9 + -0x30;
          *(undefined8 *)(puVar9 + -0x30) = uVar19;
          *(undefined1 (*) [16])(puVar9 + -0x20) = auVar34;
          *(long *)(puVar9 + -0x10) = lVar22;
          *(long *)(puVar9 + -8) = lVar26;
          plVar29 = *(long **)(lVar24 + 0x38);
          lVar22 = lVar24;
          if (plVar29 == (long *)0x0) {
            func_0x03256878(lVar24);
            plVar29 = *(long **)(lVar24 + 0x38);
          }
          if ((*(byte *)(*plVar29 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          uVar17 = *(undefined8 *)(*(long *)(lVar24 + 0x38) + 8);
          func_0x0531dbd0(lVar21,0xfffffffe);
          if (lVar21 != 0) {
            *(undefined8 *)(lVar21 + 0x38) = auVar35._0_8_;
            func_0x032809c4((undefined8 *)(lVar21 + 0x38),auVar35._0_8_);
            *(undefined8 *)(lVar21 + 0x48) = auVar35._8_8_;
            func_0x032809c4((undefined8 *)(lVar21 + 0x48),auVar35._8_8_);
            *(long *)(lVar21 + 0x28) = lVar23;
            func_0x032809c4((long *)(lVar21 + 0x28),lVar23);
            return lVar21;
          }
          uVar19 = 0x3d60730;
          auVar34 = func_0x03280cac();
          lVar21 = 0;
LAB_03d60730:
          puVar11 = puVar10 + -0x30;
          *(undefined8 *)(puVar10 + -0x30) = uVar19;
          *(long *)(puVar10 + -0x20) = lVar21;
          *(undefined1 (*) [16])(puVar10 + -0x18) = auVar35;
          *(long *)(puVar10 + -8) = lVar23;
          plVar29 = *(long **)(lVar22 + 0x38);
          lVar26 = lVar22;
          if (plVar29 == (long *)0x0) {
            func_0x03256878(lVar22);
            plVar29 = *(long **)(lVar22 + 0x38);
          }
          if ((*(byte *)(*plVar29 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          lVar23 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
          func_0x0531e428(lVar21,0xfffffffe);
          if (lVar21 != 0) {
            *(undefined8 *)(lVar21 + 0x38) = auVar34._0_8_;
            func_0x032809c4((undefined8 *)(lVar21 + 0x38),auVar34._0_8_);
            *(undefined8 *)(lVar21 + 0x48) = auVar34._8_8_;
            func_0x032809c4((undefined8 *)(lVar21 + 0x48),auVar34._8_8_);
            *(undefined8 *)(lVar21 + 0x28) = uVar17;
            func_0x032809c4((undefined8 *)(lVar21 + 0x28),uVar17);
            return lVar21;
          }
          uVar19 = 0x3d607d4;
          auVar35 = func_0x03280cac();
          lVar21 = 0;
        }
        *(undefined8 *)(puVar11 + -0x30) = uVar19;
        *(long *)(puVar11 + -0x20) = lVar21;
        *(undefined1 (*) [16])(puVar11 + -0x18) = auVar34;
        *(undefined8 *)(puVar11 + -8) = uVar17;
        plVar29 = *(long **)(lVar26 + 0x38);
        lVar21 = lVar26;
        if (plVar29 == (long *)0x0) {
          func_0x03256878(lVar26);
          plVar29 = *(long **)(lVar26 + 0x38);
        }
        if ((*(byte *)(*plVar29 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar22 = func_0x03280ca0();
        uVar19 = *(undefined8 *)(*(long *)(lVar26 + 0x38) + 8);
        func_0x0531ec78(lVar22,0xfffffffe);
        if (lVar22 != 0) {
          *(undefined8 *)(lVar22 + 0x40) = auVar35._0_8_;
          func_0x032809c4((undefined8 *)(lVar22 + 0x40),auVar35._0_8_);
          *(undefined8 *)(lVar22 + 0x50) = auVar35._8_8_;
          func_0x032809c4((undefined8 *)(lVar22 + 0x50),auVar35._8_8_);
          *(long *)(lVar22 + 0x30) = lVar23;
          func_0x032809c4((long *)(lVar22 + 0x30),lVar23);
          return lVar22;
        }
        auVar34 = func_0x03280cac();
        lVar22 = auVar34._0_8_;
        *(undefined8 *)(puVar11 + -0x60) = 0x3d60878;
        *(undefined **)(puVar11 + -0x58) = puVar13;
        *(undefined8 *)(puVar11 + -0x50) = 0;
        *(undefined1 (*) [16])(puVar11 + -0x48) = auVar35;
        *(long *)(puVar11 + -0x38) = lVar23;
        plVar29 = *(long **)(lVar21 + 0x38);
        if (plVar29 == (long *)0x0) {
          func_0x03256878(lVar21);
          plVar29 = *(long **)(lVar21 + 0x38);
        }
        if ((*(byte *)(*plVar29 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar23 = func_0x03280ca0();
        puVar15 = *(undefined8 **)(*(long *)(lVar21 + 0x38) + 8);
        (*(code *)*puVar15)(lVar23,0xfffffffe);
        if (lVar23 != 0) {
          func_0x02f17738(lVar23,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0xc0,lVar22);
          func_0x02f17738(lVar23,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0x100,auVar34._8_8_)
          ;
          func_0x02f17738(lVar23,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0x80,uVar19);
          return lVar23;
        }
        auVar35 = func_0x03280cac();
        lVar23 = auVar35._8_8_;
        plVar29 = auVar35._0_8_;
        *(undefined8 *)(puVar11 + -0x90) = 0x3d60944;
        *(undefined8 *)(puVar11 + -0x88) = 0;
        *(undefined1 (*) [16])(puVar11 + -0x80) = auVar34;
        *(long *)(puVar11 + -0x70) = lVar21;
        *(undefined8 *)(puVar11 + -0x68) = uVar19;
        puVar16 = puVar15;
        if (puVar15[7] == 0) {
          func_0x03256878(puVar15);
        }
        puVar13 = PTR_DAT_07774b08;
        if ((plVar29 == (long *)0x0) || (puVar13 = PTR_DAT_077799b8, lVar23 == 0)) {
          uVar19 = func_0x03280a2c(puVar13);
          uVar19 = func_0x05ac7464(uVar19,0);
          func_0x03280b7c(uVar19,puVar15);
LAB_03d60c04:
          func_0x03281048(plVar29);
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(puVar15[7] + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          lVar26 = *plVar29;
          bVar3 = *(byte *)(lVar26 + 0x130);
          if ((*(byte *)(lVar21 + 0x130) <= bVar3) &&
             (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) ==
              lVar21)) {
            lVar21 = *(long *)(puVar15[7] + 0x10);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c(lVar21);
              lVar26 = *plVar29;
              bVar3 = *(byte *)(lVar26 + 0x130);
            }
            if ((*(byte *)(lVar21 + 0x130) <= bVar3) &&
               (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) ==
                lVar21)) {
              lVar21 = *(long *)(puVar15[7] + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = func_0x0325681c(lVar21);
                lVar26 = *plVar29;
                bVar3 = *(byte *)(lVar26 + 0x130);
              }
              if ((*(byte *)(lVar21 + 0x130) <= bVar3) &&
                 (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) ==
                  lVar21)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar21 = (**(code **)(lVar26 + 0x228))
                                   (plVar29,lVar23,*(undefined8 *)(lVar26 + 0x230));
                return lVar21;
              }
            }
            goto LAB_03d60c04;
          }
          lVar21 = *(long *)(puVar15[7] + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          lVar21 = func_0x03280b90(plVar29,lVar21);
          if (lVar21 == 0) {
            lVar21 = *(long *)(puVar15[7] + 0x38);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar29 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
               (*(long *)(*(long *)(*plVar29 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) !=
                lVar21)) {
              if ((*(byte *)(*(long *)(puVar15[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar21 = func_0x03280ca0();
              func_0x04b68fa4(lVar21,plVar29,lVar23,*(undefined8 *)(puVar15[7] + 0x58));
              return lVar21;
            }
            if ((*(byte *)(*(long *)(puVar15[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            lVar22 = func_0x03280ca0();
            lVar21 = *(long *)(puVar15[7] + 0x38);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c(lVar21);
            }
            if ((*(byte *)(lVar21 + 0x130) <= *(byte *)(*plVar29 + 0x130)) &&
               (*(long *)(*(long *)(*plVar29 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) ==
                lVar21)) {
              func_0x04b713b0(lVar22,plVar29,lVar23,*(undefined8 *)(puVar15[7] + 0x48));
              return lVar22;
            }
            goto LAB_03d60c04;
          }
          if ((*(byte *)(*(long *)(puVar15[7] + 0x28) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar22 = func_0x03280ca0();
          lVar21 = *(long *)(puVar15[7] + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          lVar26 = func_0x03280b90(plVar29,lVar21);
          if (lVar26 != 0) {
            func_0x04b66610(lVar22,lVar26,lVar23,*(undefined8 *)(puVar15[7] + 0x30));
            return lVar22;
          }
        }
        auVar34 = func_0x03281048(plVar29,lVar21);
        lVar23 = auVar34._8_8_;
        plVar29 = auVar34._0_8_;
        *(undefined8 *)(puVar11 + -0xc0) = 0x3d60c18;
        *(long *)(puVar11 + -0xb8) = lVar21;
        *(long *)(puVar11 + -0xb0) = lVar22;
        *(undefined8 **)(puVar11 + -0xa8) = puVar15;
        *(undefined1 (*) [16])(puVar11 + -0xa0) = auVar35;
        if (puVar16[7] == 0) {
          func_0x03256878(puVar16);
        }
        puVar13 = PTR_DAT_07774b08;
        if ((plVar29 == (long *)0x0) || (puVar13 = PTR_DAT_077799b8, lVar23 == 0)) {
          uVar19 = func_0x03280a2c(puVar13);
          uVar19 = func_0x05ac7464(uVar19,0);
          func_0x03280b7c(uVar19,puVar16);
        }
        else {
          lVar22 = *(long *)(puVar16[7] + 0x10);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          lVar26 = *plVar29;
          bVar3 = *(byte *)(lVar26 + 0x130);
          if ((bVar3 < *(byte *)(lVar22 + 0x130)) ||
             (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) !=
              lVar22)) {
            lVar22 = *(long *)(puVar16[7] + 0x20);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
            }
            lVar22 = func_0x03280b90(plVar29,lVar22);
            if (lVar22 != 0) {
              if ((*(byte *)(*(long *)(puVar16[7] + 0x28) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar22 = func_0x03280ca0();
              lVar21 = *(long *)(puVar16[7] + 0x20);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = func_0x0325681c(lVar21);
              }
              lVar26 = func_0x03280b90(plVar29,lVar21);
              if (lVar26 != 0) {
                func_0x04b667e0(lVar22,lVar26,lVar23,*(undefined8 *)(puVar16[7] + 0x30));
                return lVar22;
              }
              goto LAB_03d60ee0;
            }
            lVar22 = *(long *)(puVar16[7] + 0x38);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar29 + 0x130) < *(byte *)(lVar22 + 0x130)) ||
               (*(long *)(*(long *)(*plVar29 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) !=
                lVar22)) {
              if ((*(byte *)(*(long *)(puVar16[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar21 = func_0x03280ca0();
              func_0x04b693d0(lVar21,plVar29,lVar23,*(undefined8 *)(puVar16[7] + 0x58));
              return lVar21;
            }
            if ((*(byte *)(*(long *)(puVar16[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            lVar22 = func_0x03280ca0();
            lVar26 = *(long *)(puVar16[7] + 0x38);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c(lVar26);
            }
            if ((*(byte *)(lVar26 + 0x130) <= *(byte *)(*plVar29 + 0x130)) &&
               (*(long *)(*(long *)(*plVar29 + 200) + (ulong)*(byte *)(lVar26 + 0x130) * 8 + -8) ==
                lVar26)) {
              func_0x04b715c8(lVar22,plVar29,lVar23,*(undefined8 *)(puVar16[7] + 0x48));
              return lVar22;
            }
          }
          else {
            lVar22 = *(long *)(puVar16[7] + 0x10);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = func_0x0325681c(lVar22);
              lVar26 = *plVar29;
              bVar3 = *(byte *)(lVar26 + 0x130);
            }
            if ((*(byte *)(lVar22 + 0x130) <= bVar3) &&
               (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) ==
                lVar22)) {
              lVar22 = *(long *)(puVar16[7] + 0x10);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
                lVar26 = *plVar29;
                bVar3 = *(byte *)(lVar26 + 0x130);
              }
              if ((*(byte *)(lVar22 + 0x130) <= bVar3) &&
                 (*(long *)(*(long *)(lVar26 + 200) + (ulong)*(byte *)(lVar22 + 0x130) * 8 + -8) ==
                  lVar22)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar21 = (**(code **)(lVar26 + 0x228))
                                   (plVar29,lVar23,*(undefined8 *)(lVar26 + 0x230));
                return lVar21;
              }
            }
          }
        }
        func_0x03281048(plVar29);
LAB_03d60ee0:
        lVar21 = func_0x03281048(plVar29,lVar21);
        *(undefined8 *)(puVar11 + -0xe0) = 0x3d60eec;
        *(undefined1 (*) [16])(puVar11 + -0xd0) = auVar34;
        lVar22 = *(long *)(lVar21 + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c();
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c();
        }
        lVar22 = **(long **)(lVar22 + 0xb8);
        func_0x03280ab0();
        if (lVar22 == 0) {
          lVar22 = *(long *)(lVar21 + 0x20);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          lVar22 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x18));
          func_0x03280ab0();
          lVar23 = *(long *)(lVar21 + 0x20);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c();
          }
          lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x10);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = func_0x0325681c();
          }
          **(long **)(lVar23 + 0xb8) = lVar22;
          lVar21 = *(long *)(lVar21 + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          func_0x032809c4(*(undefined8 *)(lVar21 + 0xb8),lVar22);
        }
        return lVar22;
      }
      uVar1 = 0x80000000;
      if (dVar33 != INFINITY) {
        uVar1 = (int)dVar33;
      }
      puVar15 = (undefined8 *)(ulong)uVar1;
      lVar22 = func_0x04f2baf8(lVar21,uVar25,puVar15,*(undefined8 *)puVar12);
      uVar1 = (int)uVar25 + 1;
      uVar25 = (ulong)uVar1;
    } while ((int)uVar1 <= auVar35._8_4_);
  }
  return lVar22;
}


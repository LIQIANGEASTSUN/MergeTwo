/* Ghidra 12.1.2 native pseudocode; RVA 0x4C05C28; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.AnalyzeBoardToolChains; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___AnalyzeBoardToolChains
               (undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 auStack_110 [2];
  undefined *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = PTR_DAT_0777ff78;
  puVar25 = PTR_DAT_0777ff70;
  puVar11 = PTR_DAT_0777ff68;
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
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar12 = (undefined8 *)
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60))
                      (param_1);
  puVar19 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68);
  lVar13 = (*(code *)*puVar19)(param_1,puVar12);
  lVar14 = func_0x03280ca0(*(undefined8 *)puVar11);
  func_0x04f5a6b8(lVar14,*(undefined8 *)puVar25);
  *param_3 = lVar14;
  func_0x032809c4(param_3,lVar14);
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar11);
  func_0x04f5a6b8(uVar15,*(undefined8 *)puVar25);
  *param_4 = uVar15;
  func_0x032809c4(param_4,uVar15);
  puVar16 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x0411be64(puVar16,*(undefined8 *)PTR_DAT_0777ffd8);
  *param_2 = (long)puVar16;
  func_0x032809c4(param_2,puVar16);
  puVar5 = PTR_DAT_0777ffc8;
  puVar4 = PTR_DAT_0777ffa0;
  puVar3 = PTR_DAT_0777ff98;
  puVar25 = PTR_DAT_0777ff90;
  if (lVar13 != 0) {
    func_0x04145068(&uStack_b8,lVar13,*(undefined8 *)PTR_DAT_0777ffd0);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    uStack_70 = uStack_a8;
    while (uVar17 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar4), (uVar17 & 1) != 0) {
      puVar19 = puVar12;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70))
                (param_1,uStack_70,puVar12,*param_3,*param_4);
    }
    func_0x051159b0(&uStack_80,*(undefined8 *)puVar25);
    puVar16 = puVar25;
    puVar11 = puVar3;
    if (*param_3 != 0) {
      func_0x04f5b874(&uStack_a0,*param_3,*(undefined8 *)PTR_DAT_0777ff80);
      while( true ) {
        do {
          uVar17 = func_0x0514eb68(&uStack_a0,*(undefined8 *)puVar3);
          if ((uVar17 & 1) == 0) {
            lVar13 = func_0x0514ec68(&uStack_a0,*(undefined8 *)PTR_DAT_0777ff88);
            return lVar13;
          }
        } while (uStack_90._4_4_ < 1);
        lVar14 = *param_2;
        if (lVar14 == 0) break;
        lVar21 = *(long *)(lVar14 + 0x10);
        lVar23 = *(long *)puVar5;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_04d05f5c;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar2 * 4 + 0x20) = (undefined4)uStack_90;
        }
        else {
          puVar19 = *(undefined8 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
          func_0x0411c6b8();
        }
      }
      func_0x03280cac();
LAB_04d05f5c:
      func_0x03280cac();
    }
  }
  auVar30 = func_0x03280cac();
  uVar15 = auVar30._0_8_;
  if (auVar30._8_4_ == 1) {
    plVar18 = (long *)func_0x072ce910(uVar15);
    lVar21 = *plVar18;
    func_0x072ce920();
    lVar14 = func_0x0514ec68(&uStack_a0,*(undefined8 *)PTR_DAT_0777ff88);
    if (lVar21 == 0) {
      return lVar14;
    }
    func_0x03280ca4(lVar21);
  }
  func_0x0514ec68(&uStack_a0,*(undefined8 *)PTR_DAT_0777ff88);
  func_0x03365958(uVar15);
  func_0x03280ca4(0);
  auVar29 = func_0x02f09514();
  lVar21 = auVar29._0_8_;
  auStack_110[0] = 0x4d0603c;
  uStack_c8 = 0;
  uVar17 = auVar29._8_8_ & 0xffffffff;
  lVar14 = lVar21;
  puStack_100 = puVar16;
  lStack_f8 = lVar13;
  puStack_f0 = puVar12;
  uStack_e8 = param_1;
  puStack_e0 = param_4;
  uStack_d8 = uVar15;
  plStack_d0 = param_3;
  if ((bRam0000000007e1ae85 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ac00);
    lVar14 = func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e1ae85 = 1;
  }
  puVar3 = PTR_DAT_0777ac00;
  puVar25 = PTR_DAT_0774ee08;
  if (0 < auVar29._8_4_) {
    uVar24 = 1;
    do {
      lVar13 = *(long *)(lVar21 + 0x88);
      if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      dVar27 = (double)func_0x05797bf8(0x4000000000000000,(double)((int)uVar24 + -1),0);
      if (lVar13 == 0) {
        auVar29 = func_0x03280cac();
        lVar14 = auVar29._8_8_;
        lVar23 = auVar29._0_8_;
        uStack_160 = 0x4d0611c;
        uStack_150 = 0x80000000;
        uStack_148 = 0x7ff0000000000000;
        puStack_140 = puVar3;
        puStack_138 = puVar25;
        puStack_158 = puVar11;
        lStack_130 = lVar13;
        uStack_128 = uVar24;
        lStack_120 = lVar21;
        uStack_118 = uVar17;
        if ((bRam0000000007e1ae86 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ffe0);
          func_0x03280a18(PTR_DAT_0777ffe8);
          func_0x03280a18(PTR_DAT_0777fff0);
          func_0x03280a18(PTR_DAT_0777fff8);
          func_0x03280a18(PTR_DAT_07780000);
          func_0x03280a18(PTR_DAT_07780008);
          bRam0000000007e1ae86 = 1;
        }
        if (lVar23 == 0) {
          auVar29 = func_0x03280cac();
          puVar6 = PTR_DAT_07780038;
          puVar16 = PTR_DAT_07780030;
          puVar5 = PTR_DAT_07780028;
          puVar4 = PTR_DAT_07780020;
          puVar3 = PTR_DAT_07780018;
          puVar11 = PTR_DAT_07780010;
          if ((bRam0000000007e1ae87 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07780030);
            func_0x03280a18(PTR_DAT_07780018);
            func_0x03280a18(PTR_DAT_07780038);
            func_0x03280a18(PTR_DAT_07780028);
            func_0x03280a18(PTR_DAT_07780010);
            func_0x03280a18(PTR_DAT_07780020);
            bRam0000000007e1ae87 = 1;
          }
          uVar15 = func_0x03280ca0(*(undefined8 *)puVar11);
          func_0x053569b8(uVar15,auVar29._0_8_,*(undefined8 *)(*(long *)(puVar19[4] + 0xc0) + 0x88),
                          0);
          uVar15 = func_0x03d50a94(auVar29._8_8_,uVar15,*(undefined8 *)puVar3);
          uVar26 = func_0x03280ca0(*(undefined8 *)puVar4);
          lVar20 = 0;
          func_0x05355fbc(uVar26,auVar29._0_8_,*(undefined8 *)(*(long *)(puVar19[4] + 0xc0) + 0x90))
          ;
          lVar22 = *(long *)puVar5;
          uVar15 = func_0x03d872a8(uVar15,uVar26);
          lVar21 = func_0x03d3c654(uVar15,*(undefined8 *)puVar16);
          lVar23 = *(long *)puVar6;
          uVar17 = 0x7e1a000;
          puVar7 = &uStack_160;
          uVar15 = 0x4d06348;
          uVar24 = 0;
        }
        else {
          uVar15 = func_0x03eb6ac8(lVar23,*(undefined8 *)PTR_DAT_07780008);
          lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c(lVar13);
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c(lVar13);
          }
          lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          puVar4 = PTR_DAT_0777fff8;
          puVar3 = PTR_DAT_0777fff0;
          puVar25 = PTR_DAT_0777ffe8;
          puVar11 = PTR_DAT_0777ffe0;
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
          if (lVar13 == 0) {
            lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            uVar26 = **(undefined8 **)(lVar13 + 0xb8);
            lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
            func_0x05355fbc(lVar13,uVar26,
                            *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x78),0);
            lVar22 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
            lVar21 = *(long *)(lVar22 + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
              lVar22 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
            }
            *(long *)(*(long *)(lVar21 + 0xb8) + 0x10) = lVar13;
            lVar21 = *(long *)(lVar22 + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar21 + 0xb8) + 0x10,lVar13);
          }
          uVar15 = func_0x03d872a8(uVar15,lVar13,*(undefined8 *)puVar3);
          uVar26 = func_0x03280ca0(*(undefined8 *)puVar4);
          lVar20 = 0;
          func_0x053569b8(uVar26,lVar23,
                          *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x80));
          lVar22 = *(long *)puVar11;
          lVar21 = func_0x03d50a94(uVar15,uVar26);
          lVar23 = *(long *)puVar25;
          puVar7 = auStack_110;
          uVar24 = uStack_118;
          lVar14 = lStack_120;
          uVar17 = uStack_128;
          lVar13 = lStack_130;
          puVar25 = puStack_138;
          uVar15 = uStack_160;
        }
        *(undefined8 *)((long)puVar7 + -0x20) = uVar15;
        *(long *)((long)puVar7 + -0x10) = lVar14;
        *(ulong *)((long)puVar7 + -8) = uVar24;
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x03256878(lVar23);
        }
        if (lVar21 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x04143d60(lVar13,lVar21,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar23);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0x40) = 0x3d6004c;
        *(undefined8 *)((long)puVar7 + -0x30) = 0;
        *(long *)((long)puVar7 + -0x28) = lVar23;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x0419ce74(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        lVar21 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0x60) = 0x3d600c8;
        *(undefined8 *)((long)puVar7 + -0x50) = 0;
        *(long *)((long)puVar7 + -0x48) = lVar14;
        if (*(long *)(lVar21 + 0x38) == 0) {
          func_0x03256878(lVar21);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x041c2810(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar21);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0x80) = 0x3d60144;
        *(undefined8 *)((long)puVar7 + -0x70) = 0;
        *(long *)((long)puVar7 + -0x68) = lVar21;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x041ddb58(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        lVar21 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0xa0) = 0x3d601c0;
        *(undefined8 *)((long)puVar7 + -0x90) = 0;
        *(long *)((long)puVar7 + -0x88) = lVar14;
        if (*(long *)(lVar21 + 0x38) == 0) {
          func_0x03256878(lVar21);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x041e617c(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar21);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0xc0) = 0x3d6023c;
        *(undefined8 *)((long)puVar7 + -0xb0) = 0;
        *(long *)((long)puVar7 + -0xa8) = lVar21;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x041e8ba0(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        lVar21 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0xe0) = 0x3d602b8;
        *(undefined8 *)((long)puVar7 + -0xd0) = 0;
        *(long *)((long)puVar7 + -200) = lVar14;
        if (*(long *)(lVar21 + 0x38) == 0) {
          func_0x03256878(lVar21);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x38) + 0x10))(lVar13,auVar29._0_8_);
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar21);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar7 + -0x100) = 0x3d60338;
        *(undefined8 *)((long)puVar7 + -0xf0) = 0;
        *(long *)((long)puVar7 + -0xe8) = lVar21;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          func_0x0420cec8(lVar13,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar13;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        *(undefined8 *)((long)puVar7 + -0x120) = 0x3d603b4;
        *(ulong *)((long)puVar7 + -0x118) = uVar17;
        *(undefined8 *)((long)puVar7 + -0x110) = 0;
        *(long *)((long)puVar7 + -0x108) = lVar14;
        lVar14 = lVar22;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        puVar11 = PTR_DAT_07779d10;
        if ((auVar29._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
          uVar15 = func_0x03280a2c(puVar11);
          uVar15 = func_0x05ac7464(uVar15,0);
          auVar28 = func_0x03280b7c(uVar15,lVar22);
          *(undefined8 *)((long)puVar7 + -0x140) = 0x3d60428;
          *(undefined1 (*) [16])((long)puVar7 + -0x138) = auVar29;
          *(long *)((long)puVar7 + -0x128) = lVar22;
          lVar21 = lVar14;
          if (*(long *)(lVar14 + 0x38) == 0) {
            func_0x03256878(lVar14);
          }
          puVar11 = PTR_DAT_07779d10;
          if ((auVar28._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
            lVar21 = *(long *)((long)puVar7 + -0x128);
            lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
            uVar26 = 0;
            puVar9 = (undefined1 *)((long)puVar7 + -0x120);
            uVar15 = *(undefined8 *)((long)puVar7 + -0x140);
            auVar29 = *(undefined1 (*) [16])((long)puVar7 + -0x138);
            goto LAB_03d60730;
          }
          uVar15 = func_0x03280a2c(puVar11);
          uVar15 = func_0x05ac7464(uVar15,0);
          auVar29 = func_0x03280b7c(uVar15,lVar14);
          *(undefined8 *)((long)puVar7 + -0x160) = 0x3d6049c;
          *(undefined1 (*) [16])((long)puVar7 + -0x158) = auVar28;
          *(long *)((long)puVar7 + -0x148) = lVar14;
          lVar14 = lVar21;
          if (*(long *)(lVar21 + 0x38) == 0) {
            func_0x03256878(lVar21);
          }
          puVar11 = PTR_DAT_07779d10;
          if ((auVar29._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
            uVar15 = func_0x03280a2c(puVar11);
            uVar15 = func_0x05ac7464(uVar15,0);
            auVar28 = func_0x03280b7c(uVar15,lVar21);
            *(undefined8 *)((long)puVar7 + -0x180) = 0x3d60510;
            *(undefined1 (*) [16])((long)puVar7 + -0x178) = auVar29;
            *(long *)((long)puVar7 + -0x168) = lVar21;
            lVar21 = lVar14;
            if (*(long *)(lVar14 + 0x38) == 0) {
              func_0x03256878(lVar14);
            }
            puVar11 = PTR_DAT_07779d10;
            if ((auVar28._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8))
                                 (auVar28._0_8_,auVar28._8_8_,0);
              return lVar13;
            }
            uVar15 = func_0x03280a2c(puVar11);
            uVar15 = func_0x05ac7464(uVar15,0);
            auVar29 = func_0x03280b7c(uVar15,lVar14);
            *(undefined8 *)((long)puVar7 + -0x1b0) = 0x3d60588;
            *(long *)((long)puVar7 + -0x1a0) = lVar13;
            *(undefined1 (*) [16])((long)puVar7 + -0x198) = auVar28;
            *(long *)((long)puVar7 + -0x188) = lVar14;
            lVar14 = lVar21;
            lVar23 = lVar20;
            if (*(long *)(lVar20 + 0x38) == 0) {
              func_0x03256878(lVar20);
            }
            puVar11 = PTR_DAT_07779d10;
            if ((auVar29._0_8_ == 0) || (puVar11 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
              uVar15 = func_0x03280a2c(puVar11);
              uVar15 = func_0x05ac7464(uVar15,0);
              auVar28 = func_0x03280b7c(uVar15,lVar20);
              puVar8 = (undefined1 *)((long)puVar7 + -0x1e0);
              *(undefined8 *)((long)puVar7 + -0x1e0) = 0x3d60608;
              *(undefined1 (*) [16])((long)puVar7 + -0x1d0) = auVar29;
              *(long *)((long)puVar7 + -0x1c0) = lVar21;
              *(long *)((long)puVar7 + -0x1b8) = lVar20;
              lVar21 = lVar14;
              lVar22 = lVar23;
              if (*(long *)(lVar23 + 0x38) == 0) {
                func_0x03256878(lVar23);
              }
              puVar11 = PTR_DAT_07779d10;
              if ((auVar28._0_8_ != 0) && (puVar11 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x10))
                                   (auVar28._0_8_,auVar28._8_8_,lVar14);
                return lVar13;
              }
              uVar15 = func_0x03280a2c(puVar11);
              uVar26 = func_0x05ac7464(uVar15,0);
              uVar15 = 0x3d6068c;
              auVar29 = func_0x03280b7c(uVar26,lVar23);
              goto LAB_03d6068c;
            }
            lVar23 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
            uVar26 = *(undefined8 *)((long)puVar7 + -0x188);
            lVar13 = *(long *)((long)puVar7 + -0x1a0);
            auVar28 = *(undefined1 (*) [16])((long)puVar7 + -0x198);
            puVar10 = (undefined1 *)((long)puVar7 + -0x180);
            uVar15 = *(undefined8 *)((long)puVar7 + -0x1b0);
          }
          else {
            uVar26 = *(undefined8 *)((long)puVar7 + -0x148);
            lVar23 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
            lVar21 = 0;
            puVar10 = (undefined1 *)((long)puVar7 + -0x140);
            uVar15 = *(undefined8 *)((long)puVar7 + -0x160);
            auVar28 = *(undefined1 (*) [16])((long)puVar7 + -0x158);
          }
        }
        else {
          lVar14 = *(long *)((long)puVar7 + -0x110);
          lVar23 = *(long *)((long)puVar7 + -0x108);
          lVar22 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
          lVar21 = 0;
          puVar8 = (undefined1 *)((long)puVar7 + -0x100);
          uVar15 = *(undefined8 *)((long)puVar7 + -0x120);
          auVar28._8_8_ = *(undefined8 *)((long)puVar7 + -0x118);
          auVar28._0_8_ = lVar13;
LAB_03d6068c:
          puVar9 = puVar8 + -0x30;
          *(undefined8 *)(puVar8 + -0x30) = uVar15;
          *(undefined1 (*) [16])(puVar8 + -0x20) = auVar28;
          *(long *)(puVar8 + -0x10) = lVar14;
          *(long *)(puVar8 + -8) = lVar23;
          plVar18 = *(long **)(lVar22 + 0x38);
          lVar14 = lVar22;
          if (plVar18 == (long *)0x0) {
            func_0x03256878(lVar22);
            plVar18 = *(long **)(lVar22 + 0x38);
          }
          if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          uVar26 = *(undefined8 *)(*(long *)(lVar22 + 0x38) + 8);
          func_0x0531dbd0(lVar13,0xfffffffe);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x38) = auVar29._0_8_;
            func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar29._0_8_);
            *(undefined8 *)(lVar13 + 0x48) = auVar29._8_8_;
            func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar29._8_8_);
            *(long *)(lVar13 + 0x28) = lVar21;
            func_0x032809c4((long *)(lVar13 + 0x28),lVar21);
            return lVar13;
          }
          uVar15 = 0x3d60730;
          auVar28 = func_0x03280cac();
          lVar13 = 0;
LAB_03d60730:
          puVar10 = puVar9 + -0x30;
          *(undefined8 *)(puVar9 + -0x30) = uVar15;
          *(long *)(puVar9 + -0x20) = lVar13;
          *(undefined1 (*) [16])(puVar9 + -0x18) = auVar29;
          *(long *)(puVar9 + -8) = lVar21;
          plVar18 = *(long **)(lVar14 + 0x38);
          lVar23 = lVar14;
          if (plVar18 == (long *)0x0) {
            func_0x03256878(lVar14);
            plVar18 = *(long **)(lVar14 + 0x38);
          }
          if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar13 = func_0x03280ca0();
          lVar21 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
          func_0x0531e428(lVar13,0xfffffffe);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x38) = auVar28._0_8_;
            func_0x032809c4((undefined8 *)(lVar13 + 0x38),auVar28._0_8_);
            *(undefined8 *)(lVar13 + 0x48) = auVar28._8_8_;
            func_0x032809c4((undefined8 *)(lVar13 + 0x48),auVar28._8_8_);
            *(undefined8 *)(lVar13 + 0x28) = uVar26;
            func_0x032809c4((undefined8 *)(lVar13 + 0x28),uVar26);
            return lVar13;
          }
          uVar15 = 0x3d607d4;
          auVar29 = func_0x03280cac();
          lVar13 = 0;
        }
        *(undefined8 *)(puVar10 + -0x30) = uVar15;
        *(long *)(puVar10 + -0x20) = lVar13;
        *(undefined1 (*) [16])(puVar10 + -0x18) = auVar28;
        *(undefined8 *)(puVar10 + -8) = uVar26;
        plVar18 = *(long **)(lVar23 + 0x38);
        lVar13 = lVar23;
        if (plVar18 == (long *)0x0) {
          func_0x03256878(lVar23);
          plVar18 = *(long **)(lVar23 + 0x38);
        }
        if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar14 = func_0x03280ca0();
        uVar15 = *(undefined8 *)(*(long *)(lVar23 + 0x38) + 8);
        func_0x0531ec78(lVar14,0xfffffffe);
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x40) = auVar29._0_8_;
          func_0x032809c4((undefined8 *)(lVar14 + 0x40),auVar29._0_8_);
          *(undefined8 *)(lVar14 + 0x50) = auVar29._8_8_;
          func_0x032809c4((undefined8 *)(lVar14 + 0x50),auVar29._8_8_);
          *(long *)(lVar14 + 0x30) = lVar21;
          func_0x032809c4((long *)(lVar14 + 0x30),lVar21);
          return lVar14;
        }
        auVar28 = func_0x03280cac();
        lVar14 = auVar28._0_8_;
        *(undefined8 *)(puVar10 + -0x60) = 0x3d60878;
        *(undefined **)(puVar10 + -0x58) = puVar25;
        *(undefined8 *)(puVar10 + -0x50) = 0;
        *(undefined1 (*) [16])(puVar10 + -0x48) = auVar29;
        *(long *)(puVar10 + -0x38) = lVar21;
        plVar18 = *(long **)(lVar13 + 0x38);
        if (plVar18 == (long *)0x0) {
          func_0x03256878(lVar13);
          plVar18 = *(long **)(lVar13 + 0x38);
        }
        if ((*(byte *)(*plVar18 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar21 = func_0x03280ca0();
        puVar19 = *(undefined8 **)(*(long *)(lVar13 + 0x38) + 8);
        (*(code *)*puVar19)(lVar21,0xfffffffe);
        if (lVar21 != 0) {
          func_0x02f17738(lVar21,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0xc0,lVar14);
          func_0x02f17738(lVar21,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x100,auVar28._8_8_)
          ;
          func_0x02f17738(lVar21,*(long *)(**(long **)(lVar13 + 0x38) + 0x80) + 0x80,uVar15);
          return lVar21;
        }
        auVar29 = func_0x03280cac();
        lVar21 = auVar29._8_8_;
        plVar18 = auVar29._0_8_;
        *(undefined8 *)(puVar10 + -0x90) = 0x3d60944;
        *(undefined8 *)(puVar10 + -0x88) = 0;
        *(undefined1 (*) [16])(puVar10 + -0x80) = auVar28;
        *(long *)(puVar10 + -0x70) = lVar13;
        *(undefined8 *)(puVar10 + -0x68) = uVar15;
        puVar12 = puVar19;
        if (puVar19[7] == 0) {
          func_0x03256878(puVar19);
        }
        puVar11 = PTR_DAT_07774b08;
        if ((plVar18 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar21 == 0)) {
          uVar15 = func_0x03280a2c(puVar11);
          uVar15 = func_0x05ac7464(uVar15,0);
          func_0x03280b7c(uVar15,puVar19);
LAB_03d60c04:
          func_0x03281048(plVar18);
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(puVar19[7] + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          lVar23 = *plVar18;
          bVar1 = *(byte *)(lVar23 + 0x130);
          if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) ==
              lVar13)) {
            lVar13 = *(long *)(puVar19[7] + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
              lVar23 = *plVar18;
              bVar1 = *(byte *)(lVar23 + 0x130);
            }
            if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) ==
                lVar13)) {
              lVar13 = *(long *)(puVar19[7] + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c(lVar13);
                lVar23 = *plVar18;
                bVar1 = *(byte *)(lVar23 + 0x130);
              }
              if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
                 (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) ==
                  lVar13)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar13 = (**(code **)(lVar23 + 0x228))
                                   (plVar18,lVar21,*(undefined8 *)(lVar23 + 0x230));
                return lVar13;
              }
            }
            goto LAB_03d60c04;
          }
          lVar13 = *(long *)(puVar19[7] + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c(lVar13);
          }
          lVar13 = func_0x03280b90(plVar18,lVar13);
          if (lVar13 == 0) {
            lVar13 = *(long *)(puVar19[7] + 0x38);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) !=
                lVar13)) {
              if ((*(byte *)(*(long *)(puVar19[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar13 = func_0x03280ca0();
              func_0x04b68fa4(lVar13,plVar18,lVar21,*(undefined8 *)(puVar19[7] + 0x58));
              return lVar13;
            }
            if ((*(byte *)(*(long *)(puVar19[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            lVar14 = func_0x03280ca0();
            lVar13 = *(long *)(puVar19[7] + 0x38);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            if ((*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) ==
                lVar13)) {
              func_0x04b713b0(lVar14,plVar18,lVar21,*(undefined8 *)(puVar19[7] + 0x48));
              return lVar14;
            }
            goto LAB_03d60c04;
          }
          if ((*(byte *)(*(long *)(puVar19[7] + 0x28) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar14 = func_0x03280ca0();
          lVar13 = *(long *)(puVar19[7] + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c(lVar13);
          }
          lVar23 = func_0x03280b90(plVar18,lVar13);
          if (lVar23 != 0) {
            func_0x04b66610(lVar14,lVar23,lVar21,*(undefined8 *)(puVar19[7] + 0x30));
            return lVar14;
          }
        }
        auVar28 = func_0x03281048(plVar18,lVar13);
        lVar21 = auVar28._8_8_;
        plVar18 = auVar28._0_8_;
        *(undefined8 *)(puVar10 + -0xc0) = 0x3d60c18;
        *(long *)(puVar10 + -0xb8) = lVar13;
        *(long *)(puVar10 + -0xb0) = lVar14;
        *(undefined8 **)(puVar10 + -0xa8) = puVar19;
        *(undefined1 (*) [16])(puVar10 + -0xa0) = auVar29;
        if (puVar12[7] == 0) {
          func_0x03256878(puVar12);
        }
        puVar11 = PTR_DAT_07774b08;
        if ((plVar18 == (long *)0x0) || (puVar11 = PTR_DAT_077799b8, lVar21 == 0)) {
          uVar15 = func_0x03280a2c(puVar11);
          uVar15 = func_0x05ac7464(uVar15,0);
          func_0x03280b7c(uVar15,puVar12);
        }
        else {
          lVar14 = *(long *)(puVar12[7] + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          lVar23 = *plVar18;
          bVar1 = *(byte *)(lVar23 + 0x130);
          if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
             (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
              lVar14)) {
            lVar14 = *(long *)(puVar12[7] + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c(lVar14);
            }
            lVar14 = func_0x03280b90(plVar18,lVar14);
            if (lVar14 != 0) {
              if ((*(byte *)(*(long *)(puVar12[7] + 0x28) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar14 = func_0x03280ca0();
              lVar13 = *(long *)(puVar12[7] + 0x20);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c(lVar13);
              }
              lVar23 = func_0x03280b90(plVar18,lVar13);
              if (lVar23 != 0) {
                func_0x04b667e0(lVar14,lVar23,lVar21,*(undefined8 *)(puVar12[7] + 0x30));
                return lVar14;
              }
              goto LAB_03d60ee0;
            }
            lVar14 = *(long *)(puVar12[7] + 0x38);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
              if ((*(byte *)(*(long *)(puVar12[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar13 = func_0x03280ca0();
              func_0x04b693d0(lVar13,plVar18,lVar21,*(undefined8 *)(puVar12[7] + 0x58));
              return lVar13;
            }
            if ((*(byte *)(*(long *)(puVar12[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            lVar14 = func_0x03280ca0();
            lVar23 = *(long *)(puVar12[7] + 0x38);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c(lVar23);
            }
            if ((*(byte *)(lVar23 + 0x130) <= *(byte *)(*plVar18 + 0x130)) &&
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar23 + 0x130) * 8 + -8) ==
                lVar23)) {
              func_0x04b715c8(lVar14,plVar18,lVar21,*(undefined8 *)(puVar12[7] + 0x48));
              return lVar14;
            }
          }
          else {
            lVar14 = *(long *)(puVar12[7] + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c(lVar14);
              lVar23 = *plVar18;
              bVar1 = *(byte *)(lVar23 + 0x130);
            }
            if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) ==
                lVar14)) {
              lVar14 = *(long *)(puVar12[7] + 0x10);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c(lVar14);
                lVar23 = *plVar18;
                bVar1 = *(byte *)(lVar23 + 0x130);
              }
              if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
                 (*(long *)(*(long *)(lVar23 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) ==
                  lVar14)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar13 = (**(code **)(lVar23 + 0x228))
                                   (plVar18,lVar21,*(undefined8 *)(lVar23 + 0x230));
                return lVar13;
              }
            }
          }
        }
        func_0x03281048(plVar18);
LAB_03d60ee0:
        lVar13 = func_0x03281048(plVar18,lVar13);
        *(undefined8 *)(puVar10 + -0xe0) = 0x3d60eec;
        *(undefined1 (*) [16])(puVar10 + -0xd0) = auVar28;
        lVar14 = *(long *)(lVar13 + 0x20);
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
          lVar14 = *(long *)(lVar13 + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          lVar14 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
          func_0x03280ab0();
          lVar21 = *(long *)(lVar13 + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          **(long **)(lVar21 + 0xb8) = lVar14;
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          func_0x032809c4(*(undefined8 *)(lVar13 + 0xb8),lVar14);
        }
        return lVar14;
      }
      uVar2 = 0x80000000;
      if (dVar27 != INFINITY) {
        uVar2 = (int)dVar27;
      }
      puVar19 = (undefined8 *)(ulong)uVar2;
      lVar14 = func_0x04f2baf8(lVar13,uVar24,puVar19,*(undefined8 *)puVar3);
      uVar2 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar2;
    } while ((int)uVar2 <= auVar29._8_4_);
  }
  return lVar14;
}


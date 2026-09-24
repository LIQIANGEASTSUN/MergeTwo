/* Ghidra 12.1.2 native pseudocode; RVA 0x4C0603C; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.CreatePowLookup; status ok */


long MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___CreatePowLookup
               (long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_a0;
  
  uVar23 = (ulong)param_2;
  lVar14 = param_1;
  if ((bRam0000000007e1ae85 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ac00);
    lVar14 = func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e1ae85 = 1;
  }
  puVar12 = PTR_DAT_0777ac00;
  puVar13 = PTR_DAT_0774ee08;
  if (0 < (int)param_2) {
    uVar24 = 1;
    do {
      lVar14 = *(long *)(param_1 + 0x88);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      dVar27 = (double)func_0x05797bf8(0x4000000000000000,(double)((int)uVar24 + -1),0);
      if (lVar14 == 0) {
        auVar29 = func_0x03280cac();
        lVar14 = auVar29._8_8_;
        lVar17 = auVar29._0_8_;
        uStack_a0 = 0x4d0611c;
        if ((bRam0000000007e1ae86 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ffe0);
          func_0x03280a18(PTR_DAT_0777ffe8);
          func_0x03280a18(PTR_DAT_0777fff0);
          func_0x03280a18(PTR_DAT_0777fff8);
          func_0x03280a18(PTR_DAT_07780000);
          func_0x03280a18(PTR_DAT_07780008);
          bRam0000000007e1ae86 = 1;
        }
        if (lVar17 == 0) {
          auVar29 = func_0x03280cac();
          puVar7 = PTR_DAT_07780038;
          puVar6 = PTR_DAT_07780030;
          puVar5 = PTR_DAT_07780028;
          puVar4 = PTR_DAT_07780020;
          puVar3 = PTR_DAT_07780018;
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
          uVar15 = func_0x03280ca0(*(undefined8 *)puVar12);
          func_0x053569b8(uVar15,auVar29._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88),0);
          uVar15 = func_0x03d50a94(auVar29._8_8_,uVar15,*(undefined8 *)puVar3);
          uVar26 = func_0x03280ca0(*(undefined8 *)puVar4);
          lVar22 = 0;
          func_0x05355fbc(uVar26,auVar29._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
          lVar16 = *(long *)puVar5;
          uVar15 = func_0x03d872a8(uVar15,uVar26);
          lVar17 = func_0x03d3c654(uVar15,*(undefined8 *)puVar6);
          lVar21 = *(long *)puVar7;
          uVar24 = 0x7e1a000;
          puVar8 = &uStack_a0;
          uVar15 = 0x4d06348;
          uVar23 = 0;
        }
        else {
          uVar15 = func_0x03eb6ac8(lVar17,*(undefined8 *)PTR_DAT_07780008);
          lVar21 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c(lVar21);
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            func_0x03280b8c(lVar21);
          }
          lVar21 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          puVar5 = PTR_DAT_0777fff8;
          puVar4 = PTR_DAT_0777fff0;
          puVar3 = PTR_DAT_0777ffe8;
          puVar12 = PTR_DAT_0777ffe0;
          lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x10);
          if (lVar21 == 0) {
            lVar21 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            if (*(int *)(lVar21 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar21 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            uVar26 = **(undefined8 **)(lVar21 + 0xb8);
            lVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780000);
            func_0x05355fbc(lVar21,uVar26,
                            *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x78),0);
            lVar22 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
            lVar16 = *(long *)(lVar22 + 0x20);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = func_0x0325681c();
              lVar22 = *(long *)(*(long *)(lVar14 + 0x20) + 0xc0);
            }
            *(long *)(*(long *)(lVar16 + 0xb8) + 0x10) = lVar21;
            lVar16 = *(long *)(lVar22 + 0x20);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = func_0x0325681c();
            }
            func_0x032809c4(*(long *)(lVar16 + 0xb8) + 0x10,lVar21);
          }
          uVar15 = func_0x03d872a8(uVar15,lVar21,*(undefined8 *)puVar4);
          uVar26 = func_0x03280ca0(*(undefined8 *)puVar5);
          lVar22 = 0;
          func_0x053569b8(uVar26,lVar17,
                          *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x80));
          lVar16 = *(long *)puVar12;
          lVar17 = func_0x03d50a94(uVar15,uVar26);
          lVar21 = *(long *)puVar3;
          puVar8 = (undefined8 *)&stack0xffffffffffffffb0;
          lVar14 = param_1;
          uVar15 = uStack_a0;
        }
        *(undefined8 *)((long)puVar8 + -0x20) = uVar15;
        *(long *)((long)puVar8 + -0x10) = lVar14;
        *(ulong *)((long)puVar8 + -8) = uVar23;
        if (*(long *)(lVar21 + 0x38) == 0) {
          func_0x03256878(lVar21);
        }
        if (lVar17 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar14 = func_0x03280ca0();
          func_0x04143d60(lVar14,lVar17,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x10));
          return lVar14;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar21);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0x40) = 0x3d6004c;
        *(undefined8 *)((long)puVar8 + -0x30) = 0;
        *(long *)((long)puVar8 + -0x28) = lVar21;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar17 = func_0x03280ca0();
          func_0x0419ce74(lVar17,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar17;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        lVar17 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0x60) = 0x3d600c8;
        *(undefined8 *)((long)puVar8 + -0x50) = 0;
        *(long *)((long)puVar8 + -0x48) = lVar14;
        if (*(long *)(lVar17 + 0x38) == 0) {
          func_0x03256878(lVar17);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar14 = func_0x03280ca0();
          func_0x041c2810(lVar14,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
          return lVar14;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar17);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0x80) = 0x3d60144;
        *(undefined8 *)((long)puVar8 + -0x70) = 0;
        *(long *)((long)puVar8 + -0x68) = lVar17;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar17 = func_0x03280ca0();
          func_0x041ddb58(lVar17,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar17;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        lVar17 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0xa0) = 0x3d601c0;
        *(undefined8 *)((long)puVar8 + -0x90) = 0;
        *(long *)((long)puVar8 + -0x88) = lVar14;
        if (*(long *)(lVar17 + 0x38) == 0) {
          func_0x03256878(lVar17);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar14 = func_0x03280ca0();
          func_0x041e617c(lVar14,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
          return lVar14;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar17);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0xc0) = 0x3d6023c;
        *(undefined8 *)((long)puVar8 + -0xb0) = 0;
        *(long *)((long)puVar8 + -0xa8) = lVar17;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar17 = func_0x03280ca0();
          func_0x041e8ba0(lVar17,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar17;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        lVar17 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0xe0) = 0x3d602b8;
        *(undefined8 *)((long)puVar8 + -0xd0) = 0;
        *(long *)((long)puVar8 + -200) = lVar14;
        if (*(long *)(lVar17 + 0x38) == 0) {
          func_0x03256878(lVar17);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar14 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x38) + 0x10))(lVar14,auVar29._0_8_);
          return lVar14;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar17);
        lVar14 = auVar29._8_8_;
        *(undefined8 *)((long)puVar8 + -0x100) = 0x3d60338;
        *(undefined8 *)((long)puVar8 + -0xf0) = 0;
        *(long *)((long)puVar8 + -0xe8) = lVar17;
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x03256878(lVar14);
        }
        if (auVar29._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar17 = func_0x03280ca0();
          func_0x0420cec8(lVar17,auVar29._0_8_,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
          return lVar17;
        }
        uVar15 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar15 = func_0x05ac7464(uVar15,0);
        auVar29 = func_0x03280b7c(uVar15,lVar14);
        *(undefined8 *)((long)puVar8 + -0x120) = 0x3d603b4;
        *(ulong *)((long)puVar8 + -0x118) = uVar24;
        *(undefined8 *)((long)puVar8 + -0x110) = 0;
        *(long *)((long)puVar8 + -0x108) = lVar14;
        lVar14 = lVar16;
        if (*(long *)(lVar16 + 0x38) == 0) {
          func_0x03256878(lVar16);
        }
        puVar12 = PTR_DAT_07779d10;
        if ((auVar29._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
          uVar15 = func_0x03280a2c(puVar12);
          uVar15 = func_0x05ac7464(uVar15,0);
          auVar28 = func_0x03280b7c(uVar15,lVar16);
          *(undefined8 *)((long)puVar8 + -0x140) = 0x3d60428;
          *(undefined1 (*) [16])((long)puVar8 + -0x138) = auVar29;
          *(long *)((long)puVar8 + -0x128) = lVar16;
          lVar17 = lVar14;
          if (*(long *)(lVar14 + 0x38) == 0) {
            func_0x03256878(lVar14);
          }
          puVar12 = PTR_DAT_07779d10;
          if ((auVar28._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
            lVar17 = *(long *)((long)puVar8 + -0x128);
            lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
            uVar26 = 0;
            puVar10 = (undefined1 *)((long)puVar8 + -0x120);
            uVar15 = *(undefined8 *)((long)puVar8 + -0x140);
            auVar29 = *(undefined1 (*) [16])((long)puVar8 + -0x138);
            goto LAB_03d60730;
          }
          uVar15 = func_0x03280a2c(puVar12);
          uVar15 = func_0x05ac7464(uVar15,0);
          auVar29 = func_0x03280b7c(uVar15,lVar14);
          *(undefined8 *)((long)puVar8 + -0x160) = 0x3d6049c;
          *(undefined1 (*) [16])((long)puVar8 + -0x158) = auVar28;
          *(long *)((long)puVar8 + -0x148) = lVar14;
          lVar14 = lVar17;
          if (*(long *)(lVar17 + 0x38) == 0) {
            func_0x03256878(lVar17);
          }
          puVar12 = PTR_DAT_07779d10;
          if ((auVar29._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
            uVar15 = func_0x03280a2c(puVar12);
            uVar15 = func_0x05ac7464(uVar15,0);
            auVar28 = func_0x03280b7c(uVar15,lVar17);
            *(undefined8 *)((long)puVar8 + -0x180) = 0x3d60510;
            *(undefined1 (*) [16])((long)puVar8 + -0x178) = auVar29;
            *(long *)((long)puVar8 + -0x168) = lVar17;
            lVar17 = lVar14;
            if (*(long *)(lVar14 + 0x38) == 0) {
              func_0x03256878(lVar14);
            }
            puVar12 = PTR_DAT_07779d10;
            if ((auVar28._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + 8))
                                 (auVar28._0_8_,auVar28._8_8_,0);
              return lVar14;
            }
            uVar15 = func_0x03280a2c(puVar12);
            uVar15 = func_0x05ac7464(uVar15,0);
            auVar29 = func_0x03280b7c(uVar15,lVar14);
            *(undefined8 *)((long)puVar8 + -0x1b0) = 0x3d60588;
            *(undefined8 *)((long)puVar8 + -0x1a0) = 0;
            *(undefined1 (*) [16])((long)puVar8 + -0x198) = auVar28;
            *(long *)((long)puVar8 + -0x188) = lVar14;
            lVar14 = lVar17;
            lVar21 = lVar22;
            if (*(long *)(lVar22 + 0x38) == 0) {
              func_0x03256878(lVar22);
            }
            puVar12 = PTR_DAT_07779d10;
            if ((auVar29._0_8_ == 0) || (puVar12 = PTR_DAT_07779d18, auVar29._8_8_ == 0)) {
              uVar15 = func_0x03280a2c(puVar12);
              uVar15 = func_0x05ac7464(uVar15,0);
              auVar28 = func_0x03280b7c(uVar15,lVar22);
              puVar9 = (undefined1 *)((long)puVar8 + -0x1e0);
              *(undefined8 *)((long)puVar8 + -0x1e0) = 0x3d60608;
              *(undefined1 (*) [16])((long)puVar8 + -0x1d0) = auVar29;
              *(long *)((long)puVar8 + -0x1c0) = lVar17;
              *(long *)((long)puVar8 + -0x1b8) = lVar22;
              lVar17 = lVar14;
              lVar16 = lVar21;
              if (*(long *)(lVar21 + 0x38) == 0) {
                func_0x03256878(lVar21);
              }
              puVar12 = PTR_DAT_07779d10;
              if ((auVar28._0_8_ != 0) && (puVar12 = PTR_DAT_07779d18, auVar28._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x38) + 0x10))
                                   (auVar28._0_8_,auVar28._8_8_,lVar14);
                return lVar14;
              }
              uVar15 = func_0x03280a2c(puVar12);
              uVar26 = func_0x05ac7464(uVar15,0);
              uVar15 = 0x3d6068c;
              auVar29 = func_0x03280b7c(uVar26,lVar21);
              goto LAB_03d6068c;
            }
            lVar21 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
            uVar26 = *(undefined8 *)((long)puVar8 + -0x188);
            uVar25 = *(undefined8 *)((long)puVar8 + -0x1a0);
            auVar28 = *(undefined1 (*) [16])((long)puVar8 + -0x198);
            puVar11 = (undefined1 *)((long)puVar8 + -0x180);
            uVar15 = *(undefined8 *)((long)puVar8 + -0x1b0);
          }
          else {
            uVar26 = *(undefined8 *)((long)puVar8 + -0x148);
            lVar21 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
            lVar17 = 0;
            puVar11 = (undefined1 *)((long)puVar8 + -0x140);
            uVar15 = *(undefined8 *)((long)puVar8 + -0x160);
            auVar28 = *(undefined1 (*) [16])((long)puVar8 + -0x158);
            uVar25 = 0;
          }
        }
        else {
          lVar14 = *(long *)((long)puVar8 + -0x110);
          lVar21 = *(long *)((long)puVar8 + -0x108);
          lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
          lVar17 = 0;
          puVar9 = (undefined1 *)((long)puVar8 + -0x100);
          uVar15 = *(undefined8 *)((long)puVar8 + -0x120);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = *(ulong *)((long)puVar8 + -0x118);
          auVar28 = auVar28 << 0x40;
LAB_03d6068c:
          puVar10 = puVar9 + -0x30;
          *(undefined8 *)(puVar9 + -0x30) = uVar15;
          *(undefined1 (*) [16])(puVar9 + -0x20) = auVar28;
          *(long *)(puVar9 + -0x10) = lVar14;
          *(long *)(puVar9 + -8) = lVar21;
          plVar20 = *(long **)(lVar16 + 0x38);
          lVar14 = lVar16;
          if (plVar20 == (long *)0x0) {
            func_0x03256878(lVar16);
            plVar20 = *(long **)(lVar16 + 0x38);
          }
          if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
          func_0x0531dbd0(lVar21,0xfffffffe);
          if (lVar21 != 0) {
            *(undefined8 *)(lVar21 + 0x38) = auVar29._0_8_;
            func_0x032809c4((undefined8 *)(lVar21 + 0x38),auVar29._0_8_);
            *(undefined8 *)(lVar21 + 0x48) = auVar29._8_8_;
            func_0x032809c4((undefined8 *)(lVar21 + 0x48),auVar29._8_8_);
            *(long *)(lVar21 + 0x28) = lVar17;
            func_0x032809c4((long *)(lVar21 + 0x28),lVar17);
            return lVar21;
          }
          uVar15 = 0x3d60730;
          auVar28 = func_0x03280cac();
LAB_03d60730:
          puVar11 = puVar10 + -0x30;
          *(undefined8 *)(puVar10 + -0x30) = uVar15;
          *(undefined8 *)(puVar10 + -0x20) = 0;
          *(undefined1 (*) [16])(puVar10 + -0x18) = auVar29;
          *(long *)(puVar10 + -8) = lVar17;
          plVar20 = *(long **)(lVar14 + 0x38);
          lVar21 = lVar14;
          if (plVar20 == (long *)0x0) {
            func_0x03256878(lVar14);
            plVar20 = *(long **)(lVar14 + 0x38);
          }
          if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar16 = func_0x03280ca0();
          lVar17 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
          func_0x0531e428(lVar16,0xfffffffe);
          if (lVar16 != 0) {
            *(undefined8 *)(lVar16 + 0x38) = auVar28._0_8_;
            func_0x032809c4((undefined8 *)(lVar16 + 0x38),auVar28._0_8_);
            *(undefined8 *)(lVar16 + 0x48) = auVar28._8_8_;
            func_0x032809c4((undefined8 *)(lVar16 + 0x48),auVar28._8_8_);
            *(undefined8 *)(lVar16 + 0x28) = uVar26;
            func_0x032809c4((undefined8 *)(lVar16 + 0x28),uVar26);
            return lVar16;
          }
          uVar15 = 0x3d607d4;
          auVar29 = func_0x03280cac();
          uVar25 = 0;
        }
        *(undefined8 *)(puVar11 + -0x30) = uVar15;
        *(undefined8 *)(puVar11 + -0x20) = uVar25;
        *(undefined1 (*) [16])(puVar11 + -0x18) = auVar28;
        *(undefined8 *)(puVar11 + -8) = uVar26;
        plVar20 = *(long **)(lVar21 + 0x38);
        lVar14 = lVar21;
        if (plVar20 == (long *)0x0) {
          func_0x03256878(lVar21);
          plVar20 = *(long **)(lVar21 + 0x38);
        }
        if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar16 = func_0x03280ca0();
        uVar15 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + 8);
        func_0x0531ec78(lVar16,0xfffffffe);
        if (lVar16 != 0) {
          *(undefined8 *)(lVar16 + 0x40) = auVar29._0_8_;
          func_0x032809c4((undefined8 *)(lVar16 + 0x40),auVar29._0_8_);
          *(undefined8 *)(lVar16 + 0x50) = auVar29._8_8_;
          func_0x032809c4((undefined8 *)(lVar16 + 0x50),auVar29._8_8_);
          *(long *)(lVar16 + 0x30) = lVar17;
          func_0x032809c4((long *)(lVar16 + 0x30),lVar17);
          return lVar16;
        }
        auVar28 = func_0x03280cac();
        lVar21 = auVar28._0_8_;
        *(undefined8 *)(puVar11 + -0x60) = 0x3d60878;
        *(undefined **)(puVar11 + -0x58) = puVar13;
        *(undefined8 *)(puVar11 + -0x50) = 0;
        *(undefined1 (*) [16])(puVar11 + -0x48) = auVar29;
        *(long *)(puVar11 + -0x38) = lVar17;
        plVar20 = *(long **)(lVar14 + 0x38);
        if (plVar20 == (long *)0x0) {
          func_0x03256878(lVar14);
          plVar20 = *(long **)(lVar14 + 0x38);
        }
        if ((*(byte *)(*plVar20 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        puVar18 = *(undefined8 **)(*(long *)(lVar14 + 0x38) + 8);
        (*(code *)*puVar18)(lVar17,0xfffffffe);
        if (lVar17 != 0) {
          func_0x02f17738(lVar17,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0xc0,lVar21);
          func_0x02f17738(lVar17,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x100,auVar28._8_8_)
          ;
          func_0x02f17738(lVar17,*(long *)(**(long **)(lVar14 + 0x38) + 0x80) + 0x80,uVar15);
          return lVar17;
        }
        auVar29 = func_0x03280cac();
        lVar17 = auVar29._8_8_;
        plVar20 = auVar29._0_8_;
        *(undefined8 *)(puVar11 + -0x90) = 0x3d60944;
        *(undefined8 *)(puVar11 + -0x88) = 0;
        *(undefined1 (*) [16])(puVar11 + -0x80) = auVar28;
        *(long *)(puVar11 + -0x70) = lVar14;
        *(undefined8 *)(puVar11 + -0x68) = uVar15;
        puVar19 = puVar18;
        if (puVar18[7] == 0) {
          func_0x03256878(puVar18);
        }
        puVar13 = PTR_DAT_07774b08;
        if ((plVar20 == (long *)0x0) || (puVar13 = PTR_DAT_077799b8, lVar17 == 0)) {
          uVar15 = func_0x03280a2c(puVar13);
          uVar15 = func_0x05ac7464(uVar15,0);
          func_0x03280b7c(uVar15,puVar18);
LAB_03d60c04:
          func_0x03281048(plVar20);
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(puVar18[7] + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          lVar16 = *plVar20;
          bVar2 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(lVar14 + 0x130) <= bVar2) &&
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) ==
              lVar14)) {
            lVar14 = *(long *)(puVar18[7] + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c(lVar14);
              lVar16 = *plVar20;
              bVar2 = *(byte *)(lVar16 + 0x130);
            }
            if ((*(byte *)(lVar14 + 0x130) <= bVar2) &&
               (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) ==
                lVar14)) {
              lVar14 = *(long *)(puVar18[7] + 0x10);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c(lVar14);
                lVar16 = *plVar20;
                bVar2 = *(byte *)(lVar16 + 0x130);
              }
              if ((*(byte *)(lVar14 + 0x130) <= bVar2) &&
                 (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) ==
                  lVar14)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar14 = (**(code **)(lVar16 + 0x228))
                                   (plVar20,lVar17,*(undefined8 *)(lVar16 + 0x230));
                return lVar14;
              }
            }
            goto LAB_03d60c04;
          }
          lVar14 = *(long *)(puVar18[7] + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c(lVar14);
          }
          lVar14 = func_0x03280b90(plVar20,lVar14);
          if (lVar14 == 0) {
            lVar14 = *(long *)(puVar18[7] + 0x38);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
              if ((*(byte *)(*(long *)(puVar18[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar14 = func_0x03280ca0();
              func_0x04b68fa4(lVar14,plVar20,lVar17,*(undefined8 *)(puVar18[7] + 0x58));
              return lVar14;
            }
            if ((*(byte *)(*(long *)(puVar18[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            lVar21 = func_0x03280ca0();
            lVar14 = *(long *)(puVar18[7] + 0x38);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = func_0x0325681c(lVar14);
            }
            if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) ==
                lVar14)) {
              func_0x04b713b0(lVar21,plVar20,lVar17,*(undefined8 *)(puVar18[7] + 0x48));
              return lVar21;
            }
            goto LAB_03d60c04;
          }
          if ((*(byte *)(*(long *)(puVar18[7] + 0x28) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar21 = func_0x03280ca0();
          lVar14 = *(long *)(puVar18[7] + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c(lVar14);
          }
          lVar16 = func_0x03280b90(plVar20,lVar14);
          if (lVar16 != 0) {
            func_0x04b66610(lVar21,lVar16,lVar17,*(undefined8 *)(puVar18[7] + 0x30));
            return lVar21;
          }
        }
        auVar28 = func_0x03281048(plVar20,lVar14);
        lVar17 = auVar28._8_8_;
        plVar20 = auVar28._0_8_;
        *(undefined8 *)(puVar11 + -0xc0) = 0x3d60c18;
        *(long *)(puVar11 + -0xb8) = lVar14;
        *(long *)(puVar11 + -0xb0) = lVar21;
        *(undefined8 **)(puVar11 + -0xa8) = puVar18;
        *(undefined1 (*) [16])(puVar11 + -0xa0) = auVar29;
        if (puVar19[7] == 0) {
          func_0x03256878(puVar19);
        }
        puVar13 = PTR_DAT_07774b08;
        if ((plVar20 == (long *)0x0) || (puVar13 = PTR_DAT_077799b8, lVar17 == 0)) {
          uVar15 = func_0x03280a2c(puVar13);
          uVar15 = func_0x05ac7464(uVar15,0);
          func_0x03280b7c(uVar15,puVar19);
        }
        else {
          lVar21 = *(long *)(puVar19[7] + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          lVar16 = *plVar20;
          bVar2 = *(byte *)(lVar16 + 0x130);
          if ((bVar2 < *(byte *)(lVar21 + 0x130)) ||
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) !=
              lVar21)) {
            lVar21 = *(long *)(puVar19[7] + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c(lVar21);
            }
            lVar21 = func_0x03280b90(plVar20,lVar21);
            if (lVar21 != 0) {
              if ((*(byte *)(*(long *)(puVar19[7] + 0x28) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar21 = func_0x03280ca0();
              lVar14 = *(long *)(puVar19[7] + 0x20);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c(lVar14);
              }
              lVar16 = func_0x03280b90(plVar20,lVar14);
              if (lVar16 != 0) {
                func_0x04b667e0(lVar21,lVar16,lVar17,*(undefined8 *)(puVar19[7] + 0x30));
                return lVar21;
              }
              goto LAB_03d60ee0;
            }
            lVar21 = *(long *)(puVar19[7] + 0x38);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar21 + 0x130)) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) !=
                lVar21)) {
              if ((*(byte *)(*(long *)(puVar19[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar14 = func_0x03280ca0();
              func_0x04b693d0(lVar14,plVar20,lVar17,*(undefined8 *)(puVar19[7] + 0x58));
              return lVar14;
            }
            if ((*(byte *)(*(long *)(puVar19[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            lVar21 = func_0x03280ca0();
            lVar16 = *(long *)(puVar19[7] + 0x38);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = func_0x0325681c(lVar16);
            }
            if ((*(byte *)(lVar16 + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) ==
                lVar16)) {
              func_0x04b715c8(lVar21,plVar20,lVar17,*(undefined8 *)(puVar19[7] + 0x48));
              return lVar21;
            }
          }
          else {
            lVar21 = *(long *)(puVar19[7] + 0x10);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c(lVar21);
              lVar16 = *plVar20;
              bVar2 = *(byte *)(lVar16 + 0x130);
            }
            if ((*(byte *)(lVar21 + 0x130) <= bVar2) &&
               (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) ==
                lVar21)) {
              lVar21 = *(long *)(puVar19[7] + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = func_0x0325681c(lVar21);
                lVar16 = *plVar20;
                bVar2 = *(byte *)(lVar16 + 0x130);
              }
              if ((*(byte *)(lVar21 + 0x130) <= bVar2) &&
                 (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) ==
                  lVar21)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar14 = (**(code **)(lVar16 + 0x228))
                                   (plVar20,lVar17,*(undefined8 *)(lVar16 + 0x230));
                return lVar14;
              }
            }
          }
        }
        func_0x03281048(plVar20);
LAB_03d60ee0:
        lVar14 = func_0x03281048(plVar20,lVar14);
        *(undefined8 *)(puVar11 + -0xe0) = 0x3d60eec;
        *(undefined1 (*) [16])(puVar11 + -0xd0) = auVar28;
        lVar17 = *(long *)(lVar14 + 0x20);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c();
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = func_0x0325681c();
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        func_0x03280ab0();
        if (lVar17 == 0) {
          lVar17 = *(long *)(lVar14 + 0x20);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = func_0x0325681c();
          }
          lVar17 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
          func_0x03280ab0();
          lVar21 = *(long *)(lVar14 + 0x20);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = func_0x0325681c();
          }
          **(long **)(lVar21 + 0xb8) = lVar17;
          lVar14 = *(long *)(lVar14 + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c();
          }
          func_0x032809c4(*(undefined8 *)(lVar14 + 0xb8),lVar17);
        }
        return lVar17;
      }
      uVar1 = 0x80000000;
      if (dVar27 != INFINITY) {
        uVar1 = (int)dVar27;
      }
      param_3 = (ulong)uVar1;
      lVar14 = func_0x04f2baf8(lVar14,uVar24,param_3,*(undefined8 *)puVar12);
      uVar1 = (int)uVar24 + 1;
      uVar24 = (ulong)uVar1;
    } while ((int)uVar1 <= (int)param_2);
  }
  return lVar14;
}


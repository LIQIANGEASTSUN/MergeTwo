/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD00C8; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.GetBoostConfigsForLevel; status ok */


ulong Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__GetBoostConfigsForLevel
                (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
  long unaff_x21;
  long unaff_x22;
  long *plVar23;
  long *plVar24;
  undefined8 unaff_x23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 auStack_1e0 [2];
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  
  if ((bRam0000000007e2aa7c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07834158);
    func_0x03280a18(PTR_DAT_077df570);
    func_0x03280a18(PTR_DAT_077df578);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_077df7a0);
    func_0x03280a18(PTR_DAT_077df7a8);
    func_0x03280a18(PTR_DAT_07834160);
    bRam0000000007e2aa7c = 1;
  }
  puVar9 = PTR_DAT_07833e20;
  plVar21 = *(long **)(param_1 + 0x18);
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 6) * 0x10 + 0x138);
          goto LAB_06bd019c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    param_3 = 6;
    puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_06bd019c:
    uVar19 = (*(code *)*puVar10)(plVar21,puVar10[1]);
    if ((uVar19 & 1) == 0) {
      uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077df7a8);
      func_0x04143c38(uVar19,*(undefined8 *)PTR_DAT_077df7a0);
      return uVar19;
    }
    plVar21 = *(long **)(param_1 + 0x18);
    if (plVar21 != (long *)0x0) {
      lVar18 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar9) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 4) * 0x10 + 0x138);
            goto LAB_06bd0238;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      param_3 = 4;
      puVar10 = (undefined8 *)func_0x03256b10(plVar21);
LAB_06bd0238:
      lVar18 = (*(code *)*puVar10)(plVar21,puVar10[1]);
      if (lVar18 != 0) {
        uVar22 = *(undefined8 *)(lVar18 + 0x28);
        uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077df578);
        lVar17 = 0;
        func_0x05355fbc(uVar11,param_1,*(undefined8 *)PTR_DAT_07834160);
        lVar15 = *(long *)PTR_DAT_077df570;
        lVar18 = func_0x03d872a8(uVar22,uVar11);
        lVar12 = *(long *)PTR_DAT_07834158;
        if (*(long *)(lVar12 + 0x38) == 0) {
          func_0x03256878(lVar12);
        }
        if (lVar18 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x04143d60(uVar19,lVar18,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar25 = func_0x03280b7c(uVar11,lVar12);
        lVar12 = auVar25._8_8_;
        lVar18 = auVar25._0_8_;
        if (*(long *)(lVar12 + 0x38) == 0) {
          func_0x03256878(lVar12);
        }
        if (lVar18 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x0419ce74(uVar19,lVar18,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar25 = func_0x03280b7c(uVar11,lVar12);
        lVar12 = auVar25._8_8_;
        lStack_60 = 0x3d600c8;
        lStack_50 = lVar18;
        if (*(long *)(lVar12 + 0x38) == 0) {
          func_0x03256878(lVar12);
        }
        if (auVar25._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x041c2810(uVar19,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar26 = func_0x03280b7c(uVar11,lVar12);
        lVar18 = auVar26._8_8_;
        uStack_80 = 0x3d60144;
        auStack_70 = auVar25;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        if (auVar26._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x041ddb58(uVar19,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar25 = func_0x03280b7c(uVar11,lVar18);
        lVar18 = auVar25._8_8_;
        uStack_a0 = 0x3d601c0;
        auStack_90 = auVar26;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        if (auVar25._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x041e617c(uVar19,auVar25._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar26 = func_0x03280b7c(uVar11,lVar18);
        lVar18 = auVar26._8_8_;
        uStack_c0 = 0x3d6023c;
        auStack_b0 = auVar25;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        if (auVar26._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x041e8ba0(uVar19,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar25 = func_0x03280b7c(uVar11,lVar18);
        lVar18 = auVar25._8_8_;
        uStack_e0 = 0x3d602b8;
        auStack_d0 = auVar26;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        if (auVar25._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x10))(uVar19,auVar25._0_8_);
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar26 = func_0x03280b7c(uVar11,lVar18);
        lVar18 = auVar26._8_8_;
        auStack_100[0] = 0x3d60338;
        auStack_f0 = auVar25;
        if (*(long *)(lVar18 + 0x38) == 0) {
          func_0x03256878(lVar18);
        }
        if (auVar26._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          func_0x0420cec8(uVar19,auVar26._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
          return uVar19;
        }
        uVar11 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar11 = func_0x05ac7464(uVar11,0);
        auVar25 = func_0x03280b7c(uVar11,lVar18);
        uStack_120 = 0x3d603b4;
        lVar18 = lVar15;
        lStack_118 = unaff_x21;
        auStack_110 = auVar26;
        if (*(long *)(lVar15 + 0x38) == 0) {
          func_0x03256878(lVar15);
        }
        puVar9 = PTR_DAT_07779d10;
        if ((auVar25._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar25._8_8_ == 0)) {
          uVar11 = func_0x03280a2c(puVar9);
          uVar11 = func_0x05ac7464(uVar11,0);
          auVar26 = func_0x03280b7c(uVar11,lVar15);
          uStack_140 = 0x3d60428;
          lVar12 = lVar18;
          lStack_128 = lVar15;
          if (*(long *)(lVar18 + 0x38) == 0) {
            auStack_138 = auVar25;
            func_0x03256878(lVar18);
            auVar25 = auStack_138;
          }
          puVar9 = PTR_DAT_07779d10;
          auStack_138 = auVar25;
          if ((auVar26._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar26._8_8_ != 0)) {
            lVar12 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
            lVar15 = 0;
            puVar4 = &uStack_120;
            lVar18 = lStack_128;
            uVar11 = uStack_140;
            goto LAB_03d60730;
          }
          uVar11 = func_0x03280a2c(puVar9);
          uVar11 = func_0x05ac7464(uVar11,0);
          auVar25 = func_0x03280b7c(uVar11,lVar18);
          uStack_160 = 0x3d6049c;
          lVar15 = lVar12;
          lStack_148 = lVar18;
          if (*(long *)(lVar12 + 0x38) == 0) {
            auStack_158 = auVar26;
            func_0x03256878(lVar12);
            auVar26 = auStack_158;
          }
          puVar9 = PTR_DAT_07779d10;
          auStack_158 = auVar26;
          if ((auVar25._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar25._8_8_ == 0)) {
            uVar11 = func_0x03280a2c(puVar9);
            uVar11 = func_0x05ac7464(uVar11,0);
            auVar26 = func_0x03280b7c(uVar11,lVar12);
            uStack_180 = 0x3d60510;
            lVar13 = lVar15;
            lStack_168 = lVar12;
            auStack_178 = auVar25;
            if (*(long *)(lVar15 + 0x38) == 0) {
              func_0x03256878(lVar15);
            }
            puVar9 = PTR_DAT_07779d10;
            if ((auVar26._0_8_ != 0) && (puVar9 = PTR_DAT_07779d18, auVar26._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + 8))
                                 (auVar26._0_8_,auVar26._8_8_,0);
              return uVar19;
            }
            uVar11 = func_0x03280a2c(puVar9);
            uVar11 = func_0x05ac7464(uVar11,0);
            auVar25 = func_0x03280b7c(uVar11,lVar15);
            uStack_1b0 = 0x3d60588;
            lVar12 = lVar13;
            lVar16 = lVar17;
            if (*(long *)(lVar17 + 0x38) == 0) {
              func_0x03256878(lVar17);
            }
            puVar9 = PTR_DAT_07779d10;
            if ((auVar25._0_8_ == 0) || (puVar9 = PTR_DAT_07779d18, auVar25._8_8_ == 0)) {
              uVar11 = func_0x03280a2c(puVar9);
              uVar11 = func_0x05ac7464(uVar11,0);
              auVar27 = func_0x03280b7c(uVar11,lVar17);
              auVar26._8_8_ = lVar16;
              auVar26._0_8_ = lVar12;
              lStack_118 = auVar27._8_8_;
              unaff_x22 = auVar27._0_8_;
              puVar3 = auStack_1e0;
              auStack_1e0[0] = 0x3d60608;
              lVar18 = lVar12;
              lVar15 = lVar16;
              lStack_1c0 = lVar13;
              lStack_1b8 = lVar17;
              auStack_1d0 = auVar25;
              if (*(long *)(lVar16 + 0x38) == 0) {
                func_0x03256878(lVar16);
              }
              puVar9 = PTR_DAT_07779d10;
              if ((unaff_x22 != 0) && (puVar9 = PTR_DAT_07779d18, lStack_118 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))
                                   (unaff_x22,lStack_118,lVar12);
                return uVar19;
              }
              uVar11 = func_0x03280a2c(puVar9);
              uVar22 = func_0x05ac7464(uVar11,0);
              uVar11 = 0x3d6068c;
              auVar25 = func_0x03280b7c(uVar22,lVar16);
              goto LAB_03d6068c;
            }
            lVar18 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
            puVar5 = &uStack_180;
            uVar11 = uStack_1b0;
          }
          else {
            lVar18 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
            lVar13 = 0;
            puVar5 = &uStack_140;
            lVar15 = lStack_148;
            uVar11 = uStack_160;
          }
        }
        else {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
          lVar18 = 0;
          puVar3 = auStack_100;
          uVar11 = uStack_120;
          auVar26 = auStack_110;
LAB_03d6068c:
          puVar4 = (undefined8 *)((long)puVar3 + -0x30);
          *(undefined8 *)((long)puVar3 + -0x30) = uVar11;
          *(long *)((long)puVar3 + -0x20) = unaff_x22;
          *(long *)((long)puVar3 + -0x18) = lStack_118;
          *(undefined1 (*) [16])((long)puVar3 + -0x10) = auVar26;
          plVar21 = *(long **)(lVar15 + 0x38);
          lVar12 = lVar15;
          if (plVar21 == (long *)0x0) {
            func_0x03256878(lVar15);
            plVar21 = *(long **)(lVar15 + 0x38);
          }
          if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
          func_0x0531dbd0(uVar19,0xfffffffe);
          if (uVar19 != 0) {
            *(undefined8 *)(uVar19 + 0x38) = auVar25._0_8_;
            func_0x032809c4((undefined8 *)(uVar19 + 0x38),auVar25._0_8_);
            *(undefined8 *)(uVar19 + 0x48) = auVar25._8_8_;
            func_0x032809c4((undefined8 *)(uVar19 + 0x48),auVar25._8_8_);
            *(long *)(uVar19 + 0x28) = lVar18;
            func_0x032809c4((long *)(uVar19 + 0x28),lVar18);
            return uVar19;
          }
          auVar26 = func_0x03280cac();
          unaff_x22 = 0;
          uVar11 = 0x3d60730;
LAB_03d60730:
          puVar5 = (undefined8 *)((long)puVar4 + -0x30);
          *(undefined8 *)((long)puVar4 + -0x30) = uVar11;
          *(long *)((long)puVar4 + -0x20) = unaff_x22;
          *(undefined1 (*) [16])((long)puVar4 + -0x18) = auVar25;
          *(long *)((long)puVar4 + -8) = lVar18;
          plVar21 = *(long **)(lVar12 + 0x38);
          lVar18 = lVar12;
          if (plVar21 == (long *)0x0) {
            func_0x03256878(lVar12);
            plVar21 = *(long **)(lVar12 + 0x38);
          }
          if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
          func_0x0531e428(uVar19,0xfffffffe);
          if (uVar19 != 0) {
            *(undefined8 *)(uVar19 + 0x38) = auVar26._0_8_;
            func_0x032809c4((undefined8 *)(uVar19 + 0x38),auVar26._0_8_);
            *(undefined8 *)(uVar19 + 0x48) = auVar26._8_8_;
            func_0x032809c4((undefined8 *)(uVar19 + 0x48),auVar26._8_8_);
            *(long *)(uVar19 + 0x28) = lVar15;
            func_0x032809c4((long *)(uVar19 + 0x28),lVar15);
            return uVar19;
          }
          auVar25 = func_0x03280cac();
          unaff_x22 = 0;
          uVar11 = 0x3d607d4;
        }
        *(undefined8 *)((long)puVar5 + -0x30) = uVar11;
        *(long *)((long)puVar5 + -0x20) = unaff_x22;
        *(undefined1 (*) [16])((long)puVar5 + -0x18) = auVar26;
        *(long *)((long)puVar5 + -8) = lVar15;
        plVar21 = *(long **)(lVar18 + 0x38);
        lVar12 = lVar18;
        if (plVar21 == (long *)0x0) {
          func_0x03256878(lVar18);
          plVar21 = *(long **)(lVar18 + 0x38);
        }
        if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar19 = func_0x03280ca0();
        uVar11 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
        func_0x0531ec78(uVar19,0xfffffffe);
        if (uVar19 != 0) {
          *(undefined8 *)(uVar19 + 0x40) = auVar25._0_8_;
          func_0x032809c4((undefined8 *)(uVar19 + 0x40),auVar25._0_8_);
          *(undefined8 *)(uVar19 + 0x50) = auVar25._8_8_;
          func_0x032809c4((undefined8 *)(uVar19 + 0x50),auVar25._8_8_);
          *(long *)(uVar19 + 0x30) = lVar13;
          func_0x032809c4((long *)(uVar19 + 0x30),lVar13);
          return uVar19;
        }
        auVar26 = func_0x03280cac();
        uVar19 = auVar26._0_8_;
        *(undefined8 *)((long)puVar5 + -0x60) = 0x3d60878;
        *(undefined8 *)((long)puVar5 + -0x58) = unaff_x23;
        *(undefined8 *)((long)puVar5 + -0x50) = 0;
        *(undefined1 (*) [16])((long)puVar5 + -0x48) = auVar25;
        *(long *)((long)puVar5 + -0x38) = lVar13;
        plVar21 = *(long **)(lVar12 + 0x38);
        if (plVar21 == (long *)0x0) {
          func_0x03256878(lVar12);
          plVar21 = *(long **)(lVar12 + 0x38);
        }
        if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar8 = func_0x03280ca0();
        puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
        (*(code *)*puVar10)(uVar8,0xfffffffe);
        if (uVar8 != 0) {
          func_0x02f17738(uVar8,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0xc0,uVar19);
          func_0x02f17738(uVar8,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x100,auVar26._8_8_);
          func_0x02f17738(uVar8,*(long *)(**(long **)(lVar12 + 0x38) + 0x80) + 0x80,uVar11);
          return uVar8;
        }
        auVar25 = func_0x03280cac();
        lVar18 = auVar25._8_8_;
        plVar21 = auVar25._0_8_;
        *(undefined8 *)((long)puVar5 + -0x90) = 0x3d60944;
        *(undefined8 *)((long)puVar5 + -0x88) = 0;
        *(undefined1 (*) [16])((long)puVar5 + -0x80) = auVar26;
        *(long *)((long)puVar5 + -0x70) = lVar12;
        *(undefined8 *)((long)puVar5 + -0x68) = uVar11;
        puVar14 = puVar10;
        if (puVar10[7] == 0) {
          func_0x03256878(puVar10);
        }
        puVar9 = PTR_DAT_07774b08;
        if ((plVar21 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar18 == 0)) {
          uVar11 = func_0x03280a2c(puVar9);
          uVar11 = func_0x05ac7464(uVar11,0);
          func_0x03280b7c(uVar11,puVar10);
LAB_03d60c04:
          func_0x03281048(plVar21);
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(puVar10[7] + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          lVar15 = *plVar21;
          bVar1 = *(byte *)(lVar15 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar15 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
              lVar12)) {
            lVar12 = *(long *)(puVar10[7] + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = func_0x0325681c(lVar12);
              lVar15 = *plVar21;
              bVar1 = *(byte *)(lVar15 + 0x130);
            }
            if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
                lVar12)) {
              lVar12 = *(long *)(puVar10[7] + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = func_0x0325681c(lVar12);
                lVar15 = *plVar21;
                bVar1 = *(byte *)(lVar15 + 0x130);
              }
              if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
                 (*(long *)(*(long *)(lVar15 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
                  lVar12)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar19 = (**(code **)(lVar15 + 0x228))
                                   (plVar21,lVar18,*(undefined8 *)(lVar15 + 0x230));
                return uVar19;
              }
            }
            goto LAB_03d60c04;
          }
          lVar12 = *(long *)(puVar10[7] + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c(lVar12);
          }
          lVar12 = func_0x03280b90(plVar21,lVar12);
          if (lVar12 == 0) {
            lVar12 = *(long *)(puVar10[7] + 0x38);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
                lVar12)) {
              if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              uVar19 = func_0x03280ca0();
              func_0x04b68fa4(uVar19,plVar21,lVar18,*(undefined8 *)(puVar10[7] + 0x58));
              return uVar19;
            }
            if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            uVar19 = func_0x03280ca0();
            lVar12 = *(long *)(puVar10[7] + 0x38);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = func_0x0325681c(lVar12);
            }
            if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
                lVar12)) {
              func_0x04b713b0(uVar19,plVar21,lVar18,*(undefined8 *)(puVar10[7] + 0x48));
              return uVar19;
            }
            goto LAB_03d60c04;
          }
          if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          lVar12 = *(long *)(puVar10[7] + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c(lVar12);
          }
          lVar15 = func_0x03280b90(plVar21,lVar12);
          if (lVar15 != 0) {
            func_0x04b66610(uVar19,lVar15,lVar18,*(undefined8 *)(puVar10[7] + 0x30));
            return uVar19;
          }
        }
        auVar26 = func_0x03281048(plVar21,lVar12);
        lVar18 = auVar26._8_8_;
        plVar21 = auVar26._0_8_;
        *(undefined8 *)((long)puVar5 + -0xc0) = 0x3d60c18;
        *(long *)((long)puVar5 + -0xb8) = lVar12;
        *(ulong *)((long)puVar5 + -0xb0) = uVar19;
        *(undefined8 **)((long)puVar5 + -0xa8) = puVar10;
        *(undefined1 (*) [16])((long)puVar5 + -0xa0) = auVar25;
        if (puVar14[7] == 0) {
          func_0x03256878(puVar14);
        }
        puVar9 = PTR_DAT_07774b08;
        if ((plVar21 == (long *)0x0) || (puVar9 = PTR_DAT_077799b8, lVar18 == 0)) {
          uVar11 = func_0x03280a2c(puVar9);
          uVar11 = func_0x05ac7464(uVar11,0);
          func_0x03280b7c(uVar11,puVar14);
        }
        else {
          lVar15 = *(long *)(puVar14[7] + 0x10);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = func_0x0325681c();
          }
          lVar17 = *plVar21;
          bVar1 = *(byte *)(lVar17 + 0x130);
          if ((bVar1 < *(byte *)(lVar15 + 0x130)) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
              lVar15)) {
            lVar15 = *(long *)(puVar14[7] + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = func_0x0325681c(lVar15);
            }
            lVar15 = func_0x03280b90(plVar21,lVar15);
            if (lVar15 != 0) {
              if ((*(byte *)(*(long *)(puVar14[7] + 0x28) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              uVar19 = func_0x03280ca0();
              lVar12 = *(long *)(puVar14[7] + 0x20);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = func_0x0325681c(lVar12);
              }
              lVar15 = func_0x03280b90(plVar21,lVar12);
              if (lVar15 != 0) {
                func_0x04b667e0(uVar19,lVar15,lVar18,*(undefined8 *)(puVar14[7] + 0x30));
                return uVar19;
              }
              goto LAB_03d60ee0;
            }
            lVar15 = *(long *)(puVar14[7] + 0x38);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                lVar15)) {
              if ((*(byte *)(*(long *)(puVar14[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              uVar19 = func_0x03280ca0();
              func_0x04b693d0(uVar19,plVar21,lVar18,*(undefined8 *)(puVar14[7] + 0x58));
              return uVar19;
            }
            if ((*(byte *)(*(long *)(puVar14[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            uVar19 = func_0x03280ca0();
            lVar15 = *(long *)(puVar14[7] + 0x38);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = func_0x0325681c(lVar15);
            }
            if ((*(byte *)(lVar15 + 0x130) <= *(byte *)(*plVar21 + 0x130)) &&
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) ==
                lVar15)) {
              func_0x04b715c8(uVar19,plVar21,lVar18,*(undefined8 *)(puVar14[7] + 0x48));
              return uVar19;
            }
          }
          else {
            lVar15 = *(long *)(puVar14[7] + 0x10);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = func_0x0325681c(lVar15);
              lVar17 = *plVar21;
              bVar1 = *(byte *)(lVar17 + 0x130);
            }
            if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) ==
                lVar15)) {
              lVar15 = *(long *)(puVar14[7] + 0x10);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c(lVar15);
                lVar17 = *plVar21;
                bVar1 = *(byte *)(lVar17 + 0x130);
              }
              if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
                 (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) ==
                  lVar15)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar19 = (**(code **)(lVar17 + 0x228))
                                   (plVar21,lVar18,*(undefined8 *)(lVar17 + 0x230));
                return uVar19;
              }
            }
          }
        }
        func_0x03281048(plVar21);
LAB_03d60ee0:
        lVar18 = func_0x03281048(plVar21,lVar12);
        *(undefined8 *)((long)puVar5 + -0xe0) = 0x3d60eec;
        *(undefined1 (*) [16])((long)puVar5 + -0xd0) = auVar26;
        lVar12 = *(long *)(lVar18 + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c();
        }
        uVar19 = **(ulong **)(lVar12 + 0xb8);
        func_0x03280ab0();
        if (uVar19 == 0) {
          lVar12 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          uVar19 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
          func_0x03280ab0();
          lVar12 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          **(ulong **)(lVar12 + 0xb8) = uVar19;
          lVar18 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = func_0x0325681c();
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = func_0x0325681c();
          }
          func_0x032809c4(*(undefined8 *)(lVar18 + 0xb8),uVar19);
        }
        return uVar19;
      }
    }
  }
  auVar25 = func_0x03280cac();
  plVar21 = auVar25._0_8_;
  lStack_50 = 0x6bd02ac;
  uVar19 = auVar25._8_8_ & 0xffffffff;
  if ((bRam0000000007e2aa7b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07833ed8);
    func_0x03280a18(PTR_DAT_0779bc18);
    bRam0000000007e2aa7b = 1;
  }
  puVar9 = PTR_DAT_07833e20;
  plVar23 = (long *)plVar21[3];
  plVar24 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
LAB_06bd048c:
    uVar8 = func_0x03280cac();
    puVar2 = PTR_DAT_07759a18;
    puVar9 = PTR_DAT_07759a10;
    uStack_80 = 0x6bd0490;
    auStack_70._0_8_ = plVar24;
    auStack_70._8_8_ = plVar21;
    lStack_60 = param_3;
    uStack_58 = uVar19;
    if ((bRam0000000007e2aa7d & 1) == 0) {
      func_0x03280a18(PTR_DAT_07759a18);
      func_0x03280a18(PTR_DAT_07759a10);
      bRam0000000007e2aa7d = 1;
    }
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar9);
    func_0x04119444(uVar11,*(undefined8 *)puVar2);
    *(undefined8 *)(uVar8 + 0x30) = uVar11;
    func_0x032809c4((undefined8 *)(uVar8 + 0x30),uVar11);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar9);
    func_0x04119444(uVar11,*(undefined8 *)puVar2);
    *(undefined8 *)(uVar8 + 0x38) = uVar11;
    func_0x032809c4((undefined8 *)(uVar8 + 0x38),uVar11);
    return uVar8;
  }
  lVar18 = *plVar23;
  uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar8 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_06bd035c;
      }
      uVar8 = uVar8 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07833e20,1);
LAB_06bd035c:
  iVar6 = (*(code *)*puVar10)(plVar23,puVar10[1]);
  if (iVar6 < auVar25._8_4_) {
    plVar24 = (long *)plVar21[5];
    if (plVar24 == (long *)0x0) goto LAB_06bd048c;
    lVar18 = *plVar24;
    uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar8 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07833ed8) {
          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_06bd03d0;
        }
        uVar8 = uVar8 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_07833ed8,1);
LAB_06bd03d0:
    uVar8 = (*(code *)*puVar10)(plVar24,uVar19,puVar10[1]);
    if ((uVar8 & 1) == 0) {
      plVar21 = (long *)plVar21[3];
      if (plVar21 == (long *)0x0) goto LAB_06bd048c;
      lVar18 = *plVar21;
      uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar8 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar9) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
            goto LAB_06bd043c;
          }
          uVar8 = uVar8 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar21,*(long *)puVar9,7);
LAB_06bd043c:
      iVar6 = (*(code *)*puVar10)(plVar21,puVar10[1]);
      if (auVar25._8_4_ <= iVar6) {
        if (param_3 == 0) goto LAB_06bd048c;
        uVar7 = func_0x0411a010(param_3,auVar25._8_8_ & 0xffffffff,*(undefined8 *)PTR_DAT_0779bc18);
        uVar7 = uVar7 ^ 1;
        goto LAB_06bd0454;
      }
    }
  }
  uVar7 = 0;
LAB_06bd0454:
  return (ulong)(uVar7 & 1);
}


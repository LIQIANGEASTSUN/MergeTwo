/* Ghidra 12.1.2 native pseudocode; RVA 0x4C046EC; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.FilterToolLevelsByChainProgress; status ok */


undefined *
MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___FilterToolLevelsByChainProgress
          (undefined *param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,long *param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined **ppuVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  undefined *extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined *puVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int *piVar33;
  long *plVar34;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  code *pcVar35;
  float fVar36;
  undefined8 unaff_d8;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  undefined *puStack_120;
  code *pcStack_e0;
  undefined1 auStack_d8 [16];
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [16];
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [16];
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  ulong uStack_60;
  long *plStack_58;
  
  uVar25 = param_3;
  plVar28 = param_4;
  uVar20 = param_5;
  if ((bRam0000000007e1ae77 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c258);
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e1ae77 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  puVar16 = (undefined *)func_0x03280ca0();
  func_0x0404e58c(puVar16,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd0));
  if (puVar16 != (undefined *)0x0) {
    *(undefined **)(puVar16 + 0x10) = param_1;
    func_0x032809c4(puVar16 + 0x10,param_1);
    if (param_4 != (long *)0x0) {
      lVar30 = *param_4;
      param_1 = *(undefined **)(param_1 + 0x88);
      uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar32 != 0) {
        piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
            goto LAB_04d04810;
          }
          uVar32 = uVar32 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar32 != 0);
      }
      uVar25 = 0;
      puVar17 = (undefined8 *)func_0x03256b10(param_4);
LAB_04d04810:
      lVar30 = (*(code *)*puVar17)(param_4,puVar17[1]);
      puVar23 = PTR_DAT_07780090;
      puVar26 = PTR_DAT_07780088;
      puVar14 = PTR_DAT_07780080;
      if ((lVar30 != 0) && (param_1 != (undefined *)0x0)) {
        iVar11 = func_0x04f2ba70(param_1,*(undefined4 *)(lVar30 + 0x18),
                                 *(undefined8 *)PTR_DAT_0777c258);
        iVar13 = 0;
        if (iVar11 != 0) {
          iVar13 = (int)param_3 / iVar11;
        }
        *(int *)(puVar16 + 0x18) = iVar11 + (iVar13 * iVar11 - (int)param_3);
        uVar18 = func_0x03280ca0(*(undefined8 *)puVar23);
        lVar27 = 0;
        func_0x0535acb4(uVar18,puVar16,
                        *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd8));
        puVar26 = *(undefined **)puVar26;
        lVar30 = func_0x03d87e68(param_2,uVar18);
        lVar22 = *(long *)puVar14;
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x03256878(lVar22);
        }
        if (lVar30 != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar22 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          puVar16 = (undefined *)func_0x03280ca0();
          func_0x041e8ba0(puVar16,lVar30,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
          return puVar16;
        }
        uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar37 = func_0x03280b7c(uVar18,lVar22);
        lVar30 = auVar37._8_8_;
        if (*(long *)(lVar30 + 0x38) == 0) {
          func_0x03256878(lVar30);
        }
        if (auVar37._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          puVar16 = (undefined *)func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x38) + 0x10))(puVar16,auVar37._0_8_);
          return puVar16;
        }
        uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar37 = func_0x03280b7c(uVar18,lVar30);
        lVar30 = auVar37._8_8_;
        uStack_60 = 0x3d60338;
        if (*(long *)(lVar30 + 0x38) == 0) {
          func_0x03256878(lVar30);
        }
        if (auVar37._0_8_ != 0) {
          if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0x38) + 8) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          puVar16 = (undefined *)func_0x03280ca0();
          func_0x0420cec8(puVar16,auVar37._0_8_,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 0x10));
          return puVar16;
        }
        uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar38 = func_0x03280b7c(uVar18,lVar30);
        pcStack_80 = (code *)0x3d603b4;
        puVar16 = puVar26;
        puStack_78 = (undefined *)unaff_x21;
        auStack_70 = auVar37;
        if (*(long *)(puVar26 + 0x38) == 0) {
          func_0x03256878(puVar26);
        }
        puVar14 = PTR_DAT_07779d10;
        if ((auVar38._0_8_ == 0) || (puVar14 = PTR_DAT_07779d18, auVar38._8_8_ == 0)) {
          uVar18 = func_0x03280a2c(puVar14);
          uVar18 = func_0x05ac7464(uVar18,0);
          auVar37 = func_0x03280b7c(uVar18,puVar26);
          uStack_a0 = 0x3d60428;
          puVar14 = puVar16;
          puStack_88 = puVar26;
          if (*(long *)(puVar16 + 0x38) == 0) {
            auStack_98 = auVar38;
            func_0x03256878(puVar16);
            auVar38 = auStack_98;
          }
          puVar26 = PTR_DAT_07779d10;
          auStack_98 = auVar38;
          if ((auVar37._0_8_ != 0) && (puVar26 = PTR_DAT_07779d18, auVar37._8_8_ != 0)) {
            lVar30 = *(long *)(*(long *)(puVar16 + 0x38) + 8);
            puVar26 = (undefined *)0x0;
            ppcVar8 = &pcStack_80;
            puVar16 = puStack_88;
            uVar25 = uStack_a0;
            goto LAB_03d60730;
          }
          uVar18 = func_0x03280a2c(puVar26);
          uVar18 = func_0x05ac7464(uVar18,0);
          auVar38 = func_0x03280b7c(uVar18,puVar16);
          uStack_c0 = 0x3d6049c;
          puVar26 = puVar14;
          puStack_a8 = puVar16;
          if (*(long *)(puVar14 + 0x38) == 0) {
            auStack_b8 = auVar37;
            func_0x03256878(puVar14);
            auVar37 = auStack_b8;
          }
          puVar16 = PTR_DAT_07779d10;
          auStack_b8 = auVar37;
          if ((auVar38._0_8_ == 0) || (puVar16 = PTR_DAT_07779d18, auVar38._8_8_ == 0)) {
            uVar18 = func_0x03280a2c(puVar16);
            uVar18 = func_0x05ac7464(uVar18,0);
            auVar37 = func_0x03280b7c(uVar18,puVar14);
            pcStack_e0 = (code *)0x3d60510;
            puVar23 = puVar26;
            puStack_c8 = puVar14;
            auStack_d8 = auVar38;
            if (*(long *)(puVar26 + 0x38) == 0) {
              func_0x03256878(puVar26);
            }
            puVar16 = PTR_DAT_07779d10;
            if ((auVar37._0_8_ != 0) && (puVar16 = PTR_DAT_07779d18, auVar37._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar16 = (undefined *)
                        (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0x38) + 8))
                                  (auVar37._0_8_,auVar37._8_8_,0);
              return puVar16;
            }
            uVar18 = func_0x03280a2c(puVar16);
            uVar18 = func_0x05ac7464(uVar18,0);
            auVar38 = func_0x03280b7c(uVar18,puVar26);
            puVar14 = puVar23;
            lVar30 = lVar27;
            if (*(long *)(lVar27 + 0x38) == 0) {
              func_0x03256878(lVar27);
            }
            puVar16 = PTR_DAT_07779d10;
            if ((auVar38._0_8_ == 0) || (puVar16 = PTR_DAT_07779d18, auVar38._8_8_ == 0)) {
              uVar18 = func_0x03280a2c(puVar16);
              uVar18 = func_0x05ac7464(uVar18,0);
              auVar39 = func_0x03280b7c(uVar18,lVar27);
              auVar37._8_8_ = lVar30;
              auVar37._0_8_ = puVar14;
              puStack_78 = auVar39._8_8_;
              unaff_x22 = auVar39._0_8_;
              puVar7 = (ulong *)&lStack_140;
              lStack_140 = 0x3d60608;
              puVar16 = puVar14;
              lVar22 = lVar30;
              puStack_120 = puVar23;
              auStack_130 = auVar38;
              if (*(long *)(lVar30 + 0x38) == 0) {
                func_0x03256878(lVar30);
              }
              puVar26 = PTR_DAT_07779d10;
              if ((unaff_x22 != 0) && (puVar26 = PTR_DAT_07779d18, puStack_78 != (undefined *)0x0))
              {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar16 = (undefined *)
                          (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x38) + 0x10))
                                    (unaff_x22,puStack_78,puVar14);
                return puVar16;
              }
              uVar18 = func_0x03280a2c(puVar26);
              uVar18 = func_0x05ac7464(uVar18,0);
              pcVar35 = (code *)0x3d6068c;
              auVar38 = func_0x03280b7c(uVar18,lVar30);
              goto LAB_03d6068c;
            }
            lVar22 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
            ppcVar9 = &pcStack_e0;
            uVar25 = 0x3d60588;
          }
          else {
            lVar22 = *(long *)(*(long *)(puVar14 + 0x38) + 8);
            puVar23 = (undefined *)0x0;
            ppcVar9 = (code **)&uStack_a0;
            puVar26 = puStack_a8;
            uVar25 = uStack_c0;
          }
        }
        else {
          lVar22 = *(long *)(*(long *)(puVar26 + 0x38) + 8);
          puVar16 = (undefined *)0x0;
          puVar7 = &uStack_60;
          pcVar35 = pcStack_80;
          auVar37 = auStack_70;
LAB_03d6068c:
          ppcVar8 = (code **)((long)puVar7 + -0x30);
          *(code **)((long)puVar7 + -0x30) = pcVar35;
          *(long *)((long)puVar7 + -0x20) = unaff_x22;
          *(undefined **)((long)puVar7 + -0x18) = puStack_78;
          *(undefined1 (*) [16])((long)puVar7 + -0x10) = auVar37;
          plVar28 = *(long **)(lVar22 + 0x38);
          lVar30 = lVar22;
          if (plVar28 == (long *)0x0) {
            func_0x03256878(lVar22);
            plVar28 = *(long **)(lVar22 + 0x38);
          }
          if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          puVar14 = (undefined *)func_0x03280ca0();
          puVar26 = *(undefined **)(*(long *)(lVar22 + 0x38) + 8);
          func_0x0531dbd0(puVar14,0xfffffffe);
          if (puVar14 != (undefined *)0x0) {
            *(long *)(puVar14 + 0x38) = auVar38._0_8_;
            func_0x032809c4(puVar14 + 0x38,auVar38._0_8_);
            *(long *)(puVar14 + 0x48) = auVar38._8_8_;
            func_0x032809c4(puVar14 + 0x48,auVar38._8_8_);
            *(undefined **)(puVar14 + 0x28) = puVar16;
            func_0x032809c4(puVar14 + 0x28,puVar16);
            return puVar14;
          }
          auVar37 = func_0x03280cac();
          unaff_x22 = 0;
          uVar25 = 0x3d60730;
LAB_03d60730:
          ppcVar9 = (code **)((long)ppcVar8 + -0x30);
          *(ulong *)((long)ppcVar8 + -0x30) = uVar25;
          *(long *)((long)ppcVar8 + -0x20) = unaff_x22;
          *(undefined1 (*) [16])((long)ppcVar8 + -0x18) = auVar38;
          *(undefined **)((long)ppcVar8 + -8) = puVar16;
          plVar28 = *(long **)(lVar30 + 0x38);
          lVar22 = lVar30;
          if (plVar28 == (long *)0x0) {
            func_0x03256878(lVar30);
            plVar28 = *(long **)(lVar30 + 0x38);
          }
          if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          puVar16 = (undefined *)func_0x03280ca0();
          puVar23 = *(undefined **)(*(long *)(lVar30 + 0x38) + 8);
          func_0x0531e428(puVar16,0xfffffffe);
          if (puVar16 != (undefined *)0x0) {
            *(long *)(puVar16 + 0x38) = auVar37._0_8_;
            func_0x032809c4(puVar16 + 0x38,auVar37._0_8_);
            *(long *)(puVar16 + 0x48) = auVar37._8_8_;
            func_0x032809c4(puVar16 + 0x48,auVar37._8_8_);
            *(undefined **)(puVar16 + 0x28) = puVar26;
            func_0x032809c4(puVar16 + 0x28,puVar26);
            return puVar16;
          }
          auVar38 = func_0x03280cac();
          unaff_x22 = 0;
          uVar25 = 0x3d607d4;
        }
        *(ulong *)((long)ppcVar9 + -0x30) = uVar25;
        *(long *)((long)ppcVar9 + -0x20) = unaff_x22;
        *(undefined1 (*) [16])((long)ppcVar9 + -0x18) = auVar37;
        *(undefined **)((long)ppcVar9 + -8) = puVar26;
        plVar28 = *(long **)(lVar22 + 0x38);
        lVar30 = lVar22;
        if (plVar28 == (long *)0x0) {
          func_0x03256878(lVar22);
          plVar28 = *(long **)(lVar22 + 0x38);
        }
        if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar16 = (undefined *)func_0x03280ca0();
        uVar18 = *(undefined8 *)(*(long *)(lVar22 + 0x38) + 8);
        func_0x0531ec78(puVar16,0xfffffffe);
        if (puVar16 != (undefined *)0x0) {
          *(long *)(puVar16 + 0x40) = auVar38._0_8_;
          func_0x032809c4(puVar16 + 0x40,auVar38._0_8_);
          *(long *)(puVar16 + 0x50) = auVar38._8_8_;
          func_0x032809c4(puVar16 + 0x50,auVar38._8_8_);
          *(undefined **)(puVar16 + 0x30) = puVar23;
          func_0x032809c4(puVar16 + 0x30,puVar23);
          return puVar16;
        }
        auVar37 = func_0x03280cac();
        puVar16 = auVar37._0_8_;
        *(undefined8 *)((long)ppcVar9 + -0x60) = 0x3d60878;
        *(undefined8 *)((long)ppcVar9 + -0x58) = unaff_x23;
        *(undefined8 *)((long)ppcVar9 + -0x50) = 0;
        *(undefined1 (*) [16])((long)ppcVar9 + -0x48) = auVar38;
        *(undefined **)((long)ppcVar9 + -0x38) = puVar23;
        plVar28 = *(long **)(lVar30 + 0x38);
        if (plVar28 == (long *)0x0) {
          func_0x03256878(lVar30);
          plVar28 = *(long **)(lVar30 + 0x38);
        }
        if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        puVar14 = (undefined *)func_0x03280ca0();
        puVar17 = *(undefined8 **)(*(long *)(lVar30 + 0x38) + 8);
        (*(code *)*puVar17)(puVar14,0xfffffffe);
        if (puVar14 != (undefined *)0x0) {
          func_0x02f17738(puVar14,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0xc0,puVar16);
          func_0x02f17738(puVar14,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0x100,auVar37._8_8_
                         );
          func_0x02f17738(puVar14,*(long *)(**(long **)(lVar30 + 0x38) + 0x80) + 0x80,uVar18);
          return puVar14;
        }
        auVar38 = func_0x03280cac();
        lVar22 = auVar38._8_8_;
        plVar28 = auVar38._0_8_;
        *(undefined8 *)((long)ppcVar9 + -0x90) = 0x3d60944;
        *(undefined8 *)((long)ppcVar9 + -0x88) = 0;
        *(undefined1 (*) [16])((long)ppcVar9 + -0x80) = auVar37;
        *(long *)((long)ppcVar9 + -0x70) = lVar30;
        *(undefined8 *)((long)ppcVar9 + -0x68) = uVar18;
        puVar24 = puVar17;
        if (puVar17[7] == 0) {
          func_0x03256878(puVar17);
        }
        puVar14 = PTR_DAT_07774b08;
        if ((plVar28 == (long *)0x0) || (puVar14 = PTR_DAT_077799b8, lVar22 == 0)) {
          uVar18 = func_0x03280a2c(puVar14);
          uVar18 = func_0x05ac7464(uVar18,0);
          func_0x03280b7c(uVar18,puVar17);
LAB_03d60c04:
          func_0x03281048(plVar28);
          lVar30 = 0;
        }
        else {
          lVar30 = *(long *)(puVar17[7] + 0x10);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            lVar30 = func_0x0325681c();
          }
          lVar27 = *plVar28;
          bVar1 = *(byte *)(lVar27 + 0x130);
          if ((*(byte *)(lVar30 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar27 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) ==
              lVar30)) {
            lVar30 = *(long *)(puVar17[7] + 0x10);
            if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
              lVar30 = func_0x0325681c(lVar30);
              lVar27 = *plVar28;
              bVar1 = *(byte *)(lVar27 + 0x130);
            }
            if ((*(byte *)(lVar30 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar27 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) ==
                lVar30)) {
              lVar30 = *(long *)(puVar17[7] + 0x10);
              if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                lVar30 = func_0x0325681c(lVar30);
                lVar27 = *plVar28;
                bVar1 = *(byte *)(lVar27 + 0x130);
              }
              if ((*(byte *)(lVar30 + 0x130) <= bVar1) &&
                 (*(long *)(*(long *)(lVar27 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) ==
                  lVar30)) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar16 = (undefined *)
                          (**(code **)(lVar27 + 0x228))
                                    (plVar28,lVar22,*(undefined8 *)(lVar27 + 0x230));
                return puVar16;
              }
            }
            goto LAB_03d60c04;
          }
          lVar30 = *(long *)(puVar17[7] + 0x20);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            lVar30 = func_0x0325681c(lVar30);
          }
          lVar30 = func_0x03280b90(plVar28,lVar30);
          if (lVar30 == 0) {
            lVar30 = *(long *)(puVar17[7] + 0x38);
            if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
              lVar30 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar28 + 0x130) < *(byte *)(lVar30 + 0x130)) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) !=
                lVar30)) {
              if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              puVar16 = (undefined *)func_0x03280ca0();
              func_0x04b68fa4(puVar16,plVar28,lVar22,*(undefined8 *)(puVar17[7] + 0x58));
              return puVar16;
            }
            if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            puVar16 = (undefined *)func_0x03280ca0();
            lVar30 = *(long *)(puVar17[7] + 0x38);
            if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
              lVar30 = func_0x0325681c(lVar30);
            }
            if ((*(byte *)(lVar30 + 0x130) <= *(byte *)(*plVar28 + 0x130)) &&
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar30 + 0x130) * 8 + -8) ==
                lVar30)) {
              func_0x04b713b0(puVar16,plVar28,lVar22,*(undefined8 *)(puVar17[7] + 0x48));
              return puVar16;
            }
            goto LAB_03d60c04;
          }
          if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          puVar16 = (undefined *)func_0x03280ca0();
          lVar30 = *(long *)(puVar17[7] + 0x20);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            lVar30 = func_0x0325681c(lVar30);
          }
          lVar27 = func_0x03280b90(plVar28,lVar30);
          if (lVar27 != 0) {
            func_0x04b66610(puVar16,lVar27,lVar22,*(undefined8 *)(puVar17[7] + 0x30));
            return puVar16;
          }
        }
        auVar37 = func_0x03281048(plVar28,lVar30);
        lVar22 = auVar37._8_8_;
        plVar28 = auVar37._0_8_;
        *(undefined8 *)((long)ppcVar9 + -0xc0) = 0x3d60c18;
        *(long *)((long)ppcVar9 + -0xb8) = lVar30;
        *(undefined **)((long)ppcVar9 + -0xb0) = puVar16;
        *(undefined8 **)((long)ppcVar9 + -0xa8) = puVar17;
        *(undefined1 (*) [16])((long)ppcVar9 + -0xa0) = auVar38;
        if (puVar24[7] == 0) {
          func_0x03256878(puVar24);
        }
        puVar16 = PTR_DAT_07774b08;
        if ((plVar28 == (long *)0x0) || (puVar16 = PTR_DAT_077799b8, lVar22 == 0)) {
          uVar18 = func_0x03280a2c(puVar16);
          uVar18 = func_0x05ac7464(uVar18,0);
          func_0x03280b7c(uVar18,puVar24);
        }
        else {
          lVar27 = *(long *)(puVar24[7] + 0x10);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c();
          }
          lVar29 = *plVar28;
          bVar1 = *(byte *)(lVar29 + 0x130);
          if ((bVar1 < *(byte *)(lVar27 + 0x130)) ||
             (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) !=
              lVar27)) {
            lVar27 = *(long *)(puVar24[7] + 0x20);
            if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
              lVar27 = func_0x0325681c(lVar27);
            }
            lVar27 = func_0x03280b90(plVar28,lVar27);
            if (lVar27 != 0) {
              if ((*(byte *)(*(long *)(puVar24[7] + 0x28) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              puVar16 = (undefined *)func_0x03280ca0();
              lVar30 = *(long *)(puVar24[7] + 0x20);
              if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                lVar30 = func_0x0325681c(lVar30);
              }
              lVar27 = func_0x03280b90(plVar28,lVar30);
              if (lVar27 != 0) {
                func_0x04b667e0(puVar16,lVar27,lVar22,*(undefined8 *)(puVar24[7] + 0x30));
                return puVar16;
              }
              goto LAB_03d60ee0;
            }
            lVar27 = *(long *)(puVar24[7] + 0x38);
            if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
              lVar27 = func_0x0325681c();
            }
            if ((*(byte *)(*plVar28 + 0x130) < *(byte *)(lVar27 + 0x130)) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) !=
                lVar27)) {
              if ((*(byte *)(*(long *)(puVar24[7] + 0x50) + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              puVar16 = (undefined *)func_0x03280ca0();
              func_0x04b693d0(puVar16,plVar28,lVar22,*(undefined8 *)(puVar24[7] + 0x58));
              return puVar16;
            }
            if ((*(byte *)(*(long *)(puVar24[7] + 0x40) + 0x135) & 1) == 0) {
              func_0x0325681c();
            }
            puVar16 = (undefined *)func_0x03280ca0();
            lVar27 = *(long *)(puVar24[7] + 0x38);
            if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
              lVar27 = func_0x0325681c(lVar27);
            }
            if ((*(byte *)(lVar27 + 0x130) <= *(byte *)(*plVar28 + 0x130)) &&
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) ==
                lVar27)) {
              func_0x04b715c8(puVar16,plVar28,lVar22,*(undefined8 *)(puVar24[7] + 0x48));
              return puVar16;
            }
          }
          else {
            lVar27 = *(long *)(puVar24[7] + 0x10);
            if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
              lVar27 = func_0x0325681c(lVar27);
              lVar29 = *plVar28;
              bVar1 = *(byte *)(lVar29 + 0x130);
            }
            if ((*(byte *)(lVar27 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) ==
                lVar27)) {
              lVar27 = *(long *)(puVar24[7] + 0x10);
              if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                lVar27 = func_0x0325681c(lVar27);
                lVar29 = *plVar28;
                bVar1 = *(byte *)(lVar29 + 0x130);
              }
              if ((*(byte *)(lVar27 + 0x130) <= bVar1) &&
                 (*(long *)(*(long *)(lVar29 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) ==
                  lVar27)) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar16 = (undefined *)
                          (**(code **)(lVar29 + 0x228))
                                    (plVar28,lVar22,*(undefined8 *)(lVar29 + 0x230));
                return puVar16;
              }
            }
          }
        }
        func_0x03281048(plVar28);
LAB_03d60ee0:
        lVar30 = func_0x03281048(plVar28,lVar30);
        *(undefined8 *)((long)ppcVar9 + -0xe0) = 0x3d60eec;
        *(undefined1 (*) [16])((long)ppcVar9 + -0xd0) = auVar37;
        lVar22 = *(long *)(lVar30 + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c();
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c();
        }
        puVar16 = (undefined *)**(long **)(lVar22 + 0xb8);
        func_0x03280ab0();
        if (puVar16 == (undefined *)0x0) {
          lVar22 = *(long *)(lVar30 + 0x20);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          puVar16 = (undefined *)func_0x0522166c(*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x18));
          func_0x03280ab0();
          lVar22 = *(long *)(lVar30 + 0x20);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x10);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = func_0x0325681c();
          }
          **(long **)(lVar22 + 0xb8) = (long)puVar16;
          lVar30 = *(long *)(lVar30 + 0x20);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            lVar30 = func_0x0325681c();
          }
          lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 0x10);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            lVar30 = func_0x0325681c();
          }
          func_0x032809c4(*(undefined8 *)(lVar30 + 0xb8),puVar16);
        }
        return puVar16;
      }
    }
  }
  auVar38 = func_0x03280cac();
  lVar30 = auVar38._0_8_;
  pcStack_80 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyMetagameWeightBoosts;
  puVar14 = (undefined *)0x7e1a000;
  uVar32 = uVar25;
  puStack_78 = puVar16;
  auStack_70._0_8_ = param_4;
  auStack_70._8_8_ = (long *)(param_3 & 0xffffffff);
  uStack_60 = param_5;
  plStack_58 = param_2;
  if ((bRam0000000007e1ae78 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780098);
    bRam0000000007e1ae78 = 1;
  }
  if (*(long *)(lVar30 + 0x68) != 0) {
    lVar22 = *(long *)(lVar30 + 0x90);
    uVar18 = func_0x0644eae4(*(long *)(lVar30 + 0x68),0);
    puVar14 = (undefined *)0x0;
    if (lVar22 != 0) {
      puVar14 = (undefined *)func_0x06897e70(lVar22,uVar18,uVar25,0);
      if ((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x20) < 1)) {
        return puVar14;
      }
      ppuVar10 = (undefined **)&stack0xffffffffffffffb0;
      plVar28 = plStack_58;
      uVar32 = uStack_60;
      plVar34 = (long *)auStack_70._8_8_;
      param_6 = (long *)auStack_70._0_8_;
      puVar16 = puStack_78;
      pcVar35 = pcStack_80;
      goto code_r0x04d05210;
    }
  }
  func_0x03280cac();
  puVar26 = PTR_DAT_077800a8;
  puVar16 = PTR_DAT_077800a0;
  auStack_b8._8_8_ = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyToolFiltering;
  puStack_a8 = puVar14;
  uStack_a0 = uVar25;
  auStack_98._8_8_ = plVar28;
  if ((bRam0000000007e1ae79 & 1) == 0) {
    auStack_98._0_8_ = lVar30;
    puStack_88 = (undefined *)auVar38._8_8_;
    func_0x03280a18(PTR_DAT_077800a8);
    func_0x03280a18(PTR_DAT_077800a0);
    func_0x03280a18(PTR_DAT_077800b0);
    auVar38._8_8_ = puStack_88;
    auVar38._0_8_ = auStack_98._0_8_;
    bRam0000000007e1ae79 = 1;
  }
  puStack_88 = auVar38._8_8_;
  auStack_98._0_8_ = auVar38._0_8_;
  lVar30 = *(long *)puVar16;
  uVar18 = func_0x03d87b94(extraout_x1,uVar32);
  puVar16 = (undefined *)func_0x03d601c0(uVar18,*(undefined8 *)puVar26);
  if (puVar16 != (undefined *)0x0) {
    puVar14 = extraout_x1;
    if (*(int *)(puVar16 + 0x18) != 0) {
      puVar14 = puVar16;
    }
    return puVar14;
  }
  func_0x03280cac();
  pcStack_e0 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___CreateChainBasedFilter;
  auStack_d8._8_8_ = 0x7e1a000;
  puStack_c8 = puVar26;
  lVar22 = lVar30;
  uStack_c0 = uVar32;
  auStack_b8._0_8_ = extraout_x1;
  if ((bRam0000000007e1ae7a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800b8);
    bRam0000000007e1ae7a = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar27 = func_0x03280ca0();
  func_0x04054968(lVar27,*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0xf0));
  puVar16 = PTR_DAT_077800b8;
  if (lVar27 != 0) {
    *(undefined8 *)(lVar27 + 0x10) = extraout_x1_00;
    func_0x032809c4((undefined8 *)(lVar27 + 0x10),extraout_x1_00);
    puVar16 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar16);
    func_0x0535aa98(puVar16,lVar27,
                    *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0xf8),0);
    return puVar16;
  }
  auVar37 = func_0x03280cac();
  lVar30 = auVar37._0_8_;
  puStack_120 = (undefined *)0x4d04ac4;
  if ((bRam0000000007e1ae7b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800c0);
    func_0x03280a18(PTR_DAT_077800c8);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_077800d8);
    func_0x03280a18(PTR_DAT_077800e0);
    bRam0000000007e1ae7b = 1;
  }
  lVar27 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  if (*(int *)(lVar27 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar27 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x18);
  if (lVar27 == 0) {
    lVar27 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    if (*(int *)(lVar27 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar27 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    uVar18 = **(undefined8 **)(lVar27 + 0xb8);
    lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
    func_0x0535ab4c(lVar27,uVar18,
                    *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x100),0);
    lVar31 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
    lVar29 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
      lVar31 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar29 + 0xb8) + 0x18) = lVar27;
    lVar29 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar29 + 0xb8) + 0x18,lVar27);
  }
  lVar29 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  puVar16 = PTR_DAT_077800e0;
  plVar28 = *(long **)(*(long *)(lVar29 + 0xb8) + 0x20);
  if (plVar28 == (long *)0x0) {
    lVar29 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    if (*(int *)(lVar29 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar29 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    uVar18 = **(undefined8 **)(lVar29 + 0xb8);
    plVar28 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
    func_0x0535ac00(plVar28,uVar18,
                    *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x108),0);
    lVar31 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
    lVar29 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
      lVar31 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
    }
    *(long **)(*(long *)(lVar29 + 0xb8) + 0x20) = plVar28;
    lVar29 = *(long *)(lVar31 + 0x20);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar29 + 0xb8) + 0x20,plVar28);
  }
  uVar25 = *(ulong *)puVar16;
  lVar29 = func_0x03f36e88(auVar37._8_8_,lVar27);
  plVar34 = *(long **)(lVar30 + 0x60);
  if (plVar34 != (long *)0x0) {
    lVar30 = *plVar34;
    uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar32 != 0) {
      piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar17 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_04d04dac;
        }
        uVar32 = uVar32 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar32 != 0);
    }
    plVar28 = (long *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar34);
LAB_04d04dac:
    plVar19 = (long *)(*(code *)*puVar17)(plVar34,puVar17[1]);
    lVar30 = 0;
    if (lVar29 != 0) {
      lVar22 = *(long *)PTR_DAT_077800d8;
      lVar30 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar30 = func_0x03280ca0(lVar30);
      func_0x04c1b8d8(lVar30,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0xa8));
      if ((plVar19 != (long *)0x0) &&
         (iVar13 = (**(code **)(*plVar19 + 0x1a8))
                             (plVar19,*(undefined4 *)(lVar29 + 0x18),
                              *(undefined8 *)(*plVar19 + 0x1b0)), lVar30 != 0)) {
        *(int *)(lVar30 + 0x10) = iVar13 + 1;
        uVar18 = *(undefined8 *)(lVar29 + 0x10);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        uVar15 = func_0x03280ca0();
        lVar27 = *(long *)(*(long *)(lVar22 + 0x20) + 0xc0);
        func_0x05355fbc(uVar15,lVar30,*(undefined8 *)(lVar27 + 0xb0),*(undefined8 *)(lVar27 + 0xc0))
        ;
        lVar22 = func_0x03d4294c(uVar18,uVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
        if (lVar22 != 0) {
          return (undefined *)(ulong)*(uint *)(lVar22 + 0x10);
        }
      }
      auVar37 = func_0x03280cac();
      auStack_130._0_8_ = 0x4a44b20;
      lVar22 = *(long *)(*(long *)(*(long *)(auVar37._8_8_ + 0x20) + 0xc0) + 8);
      puStack_120 = (undefined *)lVar30;
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c(lVar22);
      }
      uVar18 = func_0x03280ca0(lVar22);
      func_0x04143c38(uVar18,*(undefined8 *)
                              (*(long *)(*(long *)(auVar37._8_8_ + 0x20) + 0xc0) + 0xe0));
      puVar17 = (undefined8 *)(auVar37._0_8_ + 0x10);
      *puVar17 = uVar18;
      func_0x032809c4(puVar17,uVar18);
      return auVar37._0_8_;
    }
  }
  auVar37 = func_0x03280cac();
  uVar18 = auVar37._8_8_;
  uVar32 = auVar37._0_8_;
  ppuVar10 = &puStack_180;
  uStack_170 = 0x4d04de8;
  unaff_x25 = (undefined *)0x7e1a000;
  lStack_140 = lVar27;
  lStack_138 = lVar22;
  auStack_130._0_8_ = plVar34;
  auStack_130._8_8_ = lVar30;
  if ((bRam0000000007e1ae7c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800e8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_077800f0);
    func_0x03280a18(PTR_DAT_077800f8);
    func_0x03280a18(PTR_DAT_07780100);
    bRam0000000007e1ae7c = 1;
  }
  if ((uVar25 & 1) != 0) {
    uVar18 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___FilterToolLevelsByChainProgress
                       (uVar32,uVar18,uVar20 & 0xffffffff,plVar28,
                        *(undefined8 *)(*(long *)(param_6[4] + 0xc0) + 0x110));
  }
  lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c();
  }
  if (*(int *)(lVar30 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c();
  }
  puVar16 = *(undefined **)(*(long *)(lVar30 + 0xb8) + 0x28);
  if (puVar16 == (undefined *)0x0) {
    lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    if (*(int *)(lVar30 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    uVar15 = **(undefined8 **)(lVar30 + 0xb8);
    puVar16 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(puVar16,uVar15,*(undefined8 *)(*(long *)(param_6[4] + 0xc0) + 0x118),0);
    lVar22 = *(long *)(param_6[4] + 0xc0);
    lVar30 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
      lVar22 = *(long *)(param_6[4] + 0xc0);
    }
    *(undefined **)(*(long *)(lVar30 + 0xb8) + 0x28) = puVar16;
    lVar30 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar30 + 0xb8) + 0x28,puVar16);
  }
  lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c();
  }
  if (*(int *)(lVar30 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c();
  }
  unaff_x26 = PTR_DAT_07780100;
  param_1 = *(undefined **)(*(long *)(lVar30 + 0xb8) + 0x30);
  if (param_1 == (undefined *)0x0) {
    lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    if (*(int *)(lVar30 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar30 = *(long *)(*(long *)(param_6[4] + 0xc0) + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    unaff_x25 = (undefined *)**(undefined8 **)(lVar30 + 0xb8);
    param_1 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(param_1,unaff_x25,*(undefined8 *)(*(long *)(param_6[4] + 0xc0) + 0x120),0);
    lVar22 = *(long *)(param_6[4] + 0xc0);
    lVar30 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
      lVar22 = *(long *)(param_6[4] + 0xc0);
    }
    *(undefined **)(*(long *)(lVar30 + 0xb8) + 0x30) = param_1;
    lVar30 = *(long *)(lVar22 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar30 + 0xb8) + 0x30,param_1);
  }
  puVar14 = param_1;
  uVar25 = func_0x03f372e4(uVar18,puVar16,param_1,*(undefined8 *)unaff_x26);
  plVar34 = *(long **)(uVar32 + 0x60);
  if (plVar34 != (long *)0x0) {
    lVar30 = *plVar34;
    uVar20 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar20 != 0) {
      piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar17 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_04d05124;
        }
        uVar20 = uVar20 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar20 != 0);
    }
    puVar14 = (undefined *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(plVar34);
LAB_04d05124:
    uVar18 = (*(code *)*puVar17)(plVar34,puVar17[1]);
    uVar32 = uVar25;
    if (uVar25 != 0) {
      puVar14 = *(undefined **)PTR_DAT_077800f8;
      uVar12 = func_0x04a44654(uVar25,uVar18);
      if (plVar28 != (long *)0x0) {
        lVar30 = *plVar28;
        uVar32 = (ulong)uVar12;
        uVar25 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar25 != 0) {
          piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar33 * 0x10 + 0x138);
              goto LAB_04d051a8;
            }
            uVar25 = uVar25 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar25 != 0);
        }
        puVar14 = (undefined *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar28);
LAB_04d051a8:
        lVar30 = (*(code *)*puVar17)(plVar28,puVar17[1]);
        puVar26 = PTR_DAT_077800f0;
        if (lVar30 != 0) {
          uVar18 = func_0x0414419c(lVar30,uVar12 - 1,*(undefined8 *)PTR_DAT_0777e510);
          puStack_180 = (undefined *)0x0;
          uStack_178 = 0;
          func_0x048c959c(&puStack_180,uVar18,uVar12,*(undefined8 *)puVar26);
          return puStack_180;
        }
      }
    }
  }
  pcVar35 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___BoostRequiredToolWeights;
  auVar38 = func_0x03280cac();
code_r0x04d05210:
  lVar30 = auVar38._8_8_;
  *(undefined8 *)((long)ppuVar10 + -0x60) = unaff_d8;
  *(code **)((long)ppuVar10 + -0x58) = pcVar35;
  *(ulong *)((long)ppuVar10 + -0x50) = unaff_x28;
  *(undefined8 *)((long)ppuVar10 + -0x48) = unaff_x27;
  *(undefined **)((long)ppuVar10 + -0x40) = unaff_x26;
  *(undefined **)((long)ppuVar10 + -0x38) = unaff_x25;
  *(undefined **)((long)ppuVar10 + -0x30) = param_1;
  *(undefined **)((long)ppuVar10 + -0x28) = puVar16;
  *(long **)((long)ppuVar10 + -0x20) = param_6;
  *(long **)((long)ppuVar10 + -0x18) = plVar34;
  *(ulong *)((long)ppuVar10 + -0x10) = uVar32;
  *(long **)((long)ppuVar10 + -8) = plVar28;
  uVar25 = 0x7e1a000;
  puVar26 = auVar38._0_8_;
  if ((bRam0000000007e1ae7d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    puVar26 = (undefined *)func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e1ae7d = 1;
  }
  puVar3 = PTR_DAT_07780118;
  puVar2 = PTR_DAT_07780110;
  puVar23 = PTR_DAT_07780108;
  if (lVar30 == 0) {
LAB_04d05364:
    puVar21 = (undefined *)func_0x03280cac();
    puVar6 = PTR_DAT_07780140;
    puVar5 = PTR_DAT_07780138;
    puVar4 = PTR_DAT_07780130;
    puVar3 = PTR_DAT_07780128;
    puVar2 = PTR_DAT_07780120;
    puVar23 = PTR_DAT_0777ebc8;
    puVar26 = PTR_DAT_0777ebb0;
    *(code **)((long)ppuVar10 + -0xc0) =
         MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____ctor;
    *(ulong *)((long)ppuVar10 + -0xb0) = unaff_x28;
    *(undefined8 *)((long)ppuVar10 + -0xa8) = unaff_x27;
    *(undefined **)((long)ppuVar10 + -0xa0) = unaff_x26;
    *(undefined **)((long)ppuVar10 + -0x98) = unaff_x25;
    *(undefined **)((long)ppuVar10 + -0x90) = param_1;
    *(undefined **)((long)ppuVar10 + -0x88) = puVar16;
    *(ulong *)((long)ppuVar10 + -0x80) = uVar25;
    *(undefined1 (*) [16])((long)ppuVar10 + -0x78) = auVar38;
    *(undefined **)((long)ppuVar10 + -0x68) = puVar14;
    if ((bRam0000000007e1ae7e & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780128);
      func_0x03280a18(PTR_DAT_0777ebb0);
      func_0x03280a18(PTR_DAT_07780138);
      func_0x03280a18(PTR_DAT_07780130);
      func_0x03280a18(PTR_DAT_0777ebc8);
      func_0x03280a18(PTR_DAT_07780120);
      func_0x03280a18(PTR_DAT_07780140);
      bRam0000000007e1ae7e = 1;
    }
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x04fb4e7c(uVar18,*(undefined8 *)puVar3);
    *(undefined8 *)(puVar21 + 0x78) = uVar18;
    func_0x032809c4(puVar21 + 0x78,uVar18);
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04f610a8(uVar18,*(undefined8 *)puVar5);
    *(undefined8 *)(puVar21 + 0x80) = uVar18;
    func_0x032809c4(puVar21 + 0x80,uVar18);
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar23);
    func_0x04f2ad28(uVar18,*(undefined8 *)puVar26);
    *(undefined8 *)(puVar21 + 0x88) = uVar18;
    func_0x032809c4(puVar21 + 0x88,uVar18);
    uVar18 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06898a68(uVar18,0);
    *(undefined8 *)(puVar21 + 0x90) = uVar18;
    func_0x032809c4(puVar21 + 0x90,uVar18);
    return puVar21;
  }
  if (0 < *(int *)(lVar30 + 0x18)) {
    uVar25 = 0;
    unaff_x26 = (undefined *)0x7f800000;
    unaff_x27 = 0x80000000;
    do {
      uVar20 = func_0x041e65b8(lVar30,uVar25,*(undefined8 *)puVar2);
      puVar16 = puVar2;
      param_1 = puVar23;
      unaff_x25 = puVar3;
      if (puVar14 == (undefined *)0x0) goto LAB_04d05364;
      puVar26 = (undefined *)func_0x053bbf78(puVar14,uVar20 >> 0x20,*(undefined8 *)puVar23);
      if (((ulong)puVar26 & 1) != 0) {
        fVar36 = (float)func_0x04d03610(auVar38._0_8_);
        iVar13 = func_0x041e65b8(lVar30,uVar25,*(undefined8 *)puVar2);
        unaff_x28 = (ulong)(uint)(int)(fVar36 * (float)iVar13);
        uVar32 = func_0x041e65b8(lVar30,uVar25,*(undefined8 *)puVar2);
        uVar20 = 0x80000000;
        if (fVar36 * (float)iVar13 != INFINITY) {
          uVar20 = unaff_x28;
        }
        puVar26 = (undefined *)
                  func_0x041e660c(lVar30,uVar25,uVar20 | uVar32 & 0xffffffff00000000,
                                  *(undefined8 *)puVar3);
      }
      uVar12 = (int)uVar25 + 1;
      uVar25 = (ulong)uVar12;
    } while ((int)uVar12 < *(int *)(lVar30 + 0x18));
  }
  return puVar26;
}


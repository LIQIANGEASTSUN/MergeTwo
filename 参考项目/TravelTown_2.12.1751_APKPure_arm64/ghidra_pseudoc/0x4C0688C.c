/* Ghidra 12.1.2 native pseudocode; RVA 0x4C0688C; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.FilterToolLevelsByChainProgress; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___FilterToolLevelsByChainProgress
                (long param_1,undefined8 param_2,ulong param_3,long *param_4,ulong param_5,
                long param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  code **ppcVar10;
  code **ppcVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  long *plVar30;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar31;
  code *pcVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ulong auStack_180 [4];
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  long lStack_120;
  code *pcStack_e0;
  undefined1 auStack_d8 [16];
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  code *pcStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar23 = param_3;
  plVar26 = param_4;
  uVar14 = param_5;
  if ((bRam0000000007e1ae8b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c258);
    func_0x03280a18(PTR_DAT_07780080);
    func_0x03280a18(PTR_DAT_07780088);
    func_0x03280a18(PTR_DAT_07780090);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e1ae8b = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar16 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd0))();
  if (lVar16 == 0) {
LAB_04d06a5c:
    auVar34 = func_0x03280cac();
    lVar27 = auVar34._0_8_;
    pcStack_80 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyMetagameWeightBoosts;
    uVar18 = 0x7e1a000;
    uVar28 = uVar23;
    lStack_78 = lVar16;
    auStack_70._0_8_ = param_4;
    auStack_70._8_8_ = param_3 & 0xffffffff;
    uStack_60 = param_5;
    uStack_58 = param_2;
    if ((bRam0000000007e1ae8c & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780098);
      bRam0000000007e1ae8c = 1;
    }
    if (*(long *)(lVar27 + 0x68) != 0) {
      lVar16 = *(long *)(lVar27 + 0x90);
      uVar19 = func_0x0644eae4(*(long *)(lVar27 + 0x68),0);
      uVar18 = 0;
      if (lVar16 != 0) {
        uVar23 = func_0x06897e70(lVar16,uVar19,uVar23,0);
        if ((uVar23 != 0) && (0 < *(int *)(uVar23 + 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x04d06b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar23 = (*(code *)**(undefined8 **)(*(long *)(plVar26[4] + 0xc0) + 0xe0))
                             (lVar27,auVar34._8_8_,uVar23);
          return uVar23;
        }
        return uVar23;
      }
    }
    func_0x03280cac();
    puVar3 = PTR_DAT_077800a8;
    puVar15 = PTR_DAT_077800a0;
    auStack_b8._8_8_ = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyToolFiltering;
    lStack_a8 = uVar18;
    uStack_a0 = uVar23;
    auStack_98._8_8_ = plVar26;
    if ((bRam0000000007e1ae8d & 1) == 0) {
      auStack_98._0_8_ = lVar27;
      lStack_88 = auVar34._8_8_;
      func_0x03280a18(PTR_DAT_077800a8);
      func_0x03280a18(PTR_DAT_077800a0);
      func_0x03280a18(PTR_DAT_077800b0);
      auVar34._8_8_ = lStack_88;
      auVar34._0_8_ = auStack_98._0_8_;
      bRam0000000007e1ae8d = 1;
    }
    lStack_88 = auVar34._8_8_;
    auStack_98._0_8_ = auVar34._0_8_;
    lVar16 = *(long *)puVar15;
    uVar18 = func_0x03d87b94(extraout_x1,uVar28);
    uVar23 = func_0x03d601c0(uVar18,*(undefined8 *)puVar3);
    if (uVar23 != 0) {
      uVar14 = extraout_x1;
      if (*(int *)(uVar23 + 0x18) != 0) {
        uVar14 = uVar23;
      }
      return uVar14;
    }
    func_0x03280cac();
    pcStack_e0 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___CreateChainBasedFilter;
    auStack_d8._8_8_ = 0x7e1a000;
    puStack_c8 = puVar3;
    lVar27 = lVar16;
    uStack_c0 = uVar28;
    auStack_b8._0_8_ = extraout_x1;
    if ((bRam0000000007e1ae8e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077800b8);
      bRam0000000007e1ae8e = 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    lVar31 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0xf0))();
    puVar15 = PTR_DAT_077800b8;
    if (lVar31 != 0) {
      *(undefined8 *)(lVar31 + 0x10) = extraout_x1_00;
      func_0x032809c4((undefined8 *)(lVar31 + 0x10),extraout_x1_00);
      uVar23 = func_0x03280ca0(*(undefined8 *)puVar15);
      func_0x0535aa98(uVar23,lVar31,
                      *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0xf8),0);
      return uVar23;
    }
    auVar34 = func_0x03280cac();
    lVar16 = auVar34._0_8_;
    lStack_120 = 0x4d06c70;
    if ((bRam0000000007e1ae8f & 1) == 0) {
      func_0x03280a18(PTR_DAT_077800c0);
      func_0x03280a18(PTR_DAT_077800c8);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_077800d8);
      func_0x03280a18(PTR_DAT_077800e0);
      bRam0000000007e1ae8f = 1;
    }
    lVar31 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    if (*(int *)(lVar31 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar31 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    lVar31 = *(long *)(*(long *)(lVar31 + 0xb8) + 0x18);
    if (lVar31 == 0) {
      lVar31 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
      }
      if (*(int *)(lVar31 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar31 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
      }
      uVar18 = **(undefined8 **)(lVar31 + 0xb8);
      lVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
      func_0x0535ab4c(lVar31,uVar18,
                      *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x100),0);
      lVar21 = *(long *)(*(long *)(lVar27 + 0x20) + 0xc0);
      lVar25 = *(long *)(lVar21 + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
        lVar21 = *(long *)(*(long *)(lVar27 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar25 + 0xb8) + 0x18) = lVar31;
      lVar25 = *(long *)(lVar21 + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar25 + 0xb8) + 0x18,lVar31);
    }
    lVar25 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar25 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = func_0x0325681c();
    }
    puVar15 = PTR_DAT_077800e0;
    plVar26 = *(long **)(*(long *)(lVar25 + 0xb8) + 0x20);
    if (plVar26 == (long *)0x0) {
      lVar25 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      if (*(int *)(lVar25 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar25 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      uVar18 = **(undefined8 **)(lVar25 + 0xb8);
      plVar26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
      func_0x0535ac00(plVar26,uVar18,
                      *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x108),0);
      lVar21 = *(long *)(*(long *)(lVar27 + 0x20) + 0xc0);
      lVar25 = *(long *)(lVar21 + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
        lVar21 = *(long *)(*(long *)(lVar27 + 0x20) + 0xc0);
      }
      *(long **)(*(long *)(lVar25 + 0xb8) + 0x20) = plVar26;
      lVar25 = *(long *)(lVar21 + 0x20);
      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar25 + 0xb8) + 0x20,plVar26);
    }
    uVar23 = *(ulong *)puVar15;
    lVar25 = func_0x03f36e88(auVar34._8_8_,lVar31);
    plVar30 = *(long **)(lVar16 + 0x60);
    if (plVar30 != (long *)0x0) {
      lVar16 = *plVar30;
      uVar28 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar28 != 0) {
        piVar29 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar17 = (undefined8 *)(lVar16 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_04d06f58;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      plVar26 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04d06f58:
      plVar20 = (long *)(*(code *)*puVar17)(plVar30,puVar17[1]);
      lVar16 = 0;
      if (lVar25 != 0) {
        lVar27 = *(long *)PTR_DAT_077800d8;
        lVar16 = *(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0xa0);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        lVar16 = func_0x03280ca0(lVar16);
        func_0x04c1b8d8(lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0xa8));
        if ((plVar20 != (long *)0x0) &&
           (iVar12 = (**(code **)(*plVar20 + 0x1a8))
                               (plVar20,*(undefined4 *)(lVar25 + 0x18),
                                *(undefined8 *)(*plVar20 + 0x1b0)), lVar16 != 0)) {
          *(int *)(lVar16 + 0x10) = iVar12 + 1;
          uVar18 = *(undefined8 *)(lVar25 + 0x10);
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1)
              == 0) {
            func_0x0325681c();
          }
          uVar19 = func_0x03280ca0();
          lVar31 = *(long *)(*(long *)(lVar27 + 0x20) + 0xc0);
          func_0x05355fbc(uVar19,lVar16,*(undefined8 *)(lVar31 + 0xb0),
                          *(undefined8 *)(lVar31 + 0xc0));
          lVar27 = func_0x03d4294c(uVar18,uVar19,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 200)
                                  );
          if (lVar27 != 0) {
            return (ulong)*(uint *)(lVar27 + 0x10);
          }
        }
        auVar34 = func_0x03280cac();
        auStack_130._0_8_ = 0x4a44b20;
        lVar27 = *(long *)(*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 8);
        lStack_120 = lVar16;
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        uVar18 = func_0x03280ca0(lVar27);
        func_0x04143c38(uVar18,*(undefined8 *)
                                (*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 0xe0));
        puVar17 = (undefined8 *)(auVar34._0_8_ + 0x10);
        *puVar17 = uVar18;
        func_0x032809c4(puVar17,uVar18);
        return auVar34._0_8_;
      }
    }
    auVar34 = func_0x03280cac();
    uVar18 = auVar34._8_8_;
    auStack_180[2] = 0x4d06f94;
    lStack_140 = lVar31;
    lStack_138 = lVar27;
    auStack_130._0_8_ = plVar30;
    auStack_130._8_8_ = lVar16;
    if ((bRam0000000007e1ae90 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077800e8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_077800d0);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_077800f0);
      func_0x03280a18(PTR_DAT_077800f8);
      func_0x03280a18(PTR_DAT_07780100);
      bRam0000000007e1ae90 = 1;
    }
    if ((uVar23 & 1) != 0) {
      uVar18 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110))
                         (auVar34._0_8_,uVar18,uVar14 & 0xffffffff,plVar26);
    }
    lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
    if (lVar16 == 0) {
      lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c();
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c();
      }
      uVar19 = **(undefined8 **)(lVar16 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar16,uVar19,
                      *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0);
      lVar31 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar27 = *(long *)(lVar31 + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
        lVar31 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar27 + 0xb8) + 0x28) = lVar16;
      lVar27 = *(long *)(lVar31 + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar27 + 0xb8) + 0x28,lVar16);
    }
    lVar27 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    if (*(int *)(lVar27 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar27 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    puVar15 = PTR_DAT_07780100;
    lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x30);
    if (lVar27 == 0) {
      lVar27 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      if (*(int *)(lVar27 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar27 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      uVar19 = **(undefined8 **)(lVar27 + 0xb8);
      lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(lVar27,uVar19,
                      *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x120),0);
      lVar25 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar31 = *(long *)(lVar25 + 0x20);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
        lVar25 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar31 + 0xb8) + 0x30) = lVar27;
      lVar31 = *(long *)(lVar25 + 0x20);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar31 + 0xb8) + 0x30,lVar27);
    }
    lVar31 = *(long *)puVar15;
    lVar16 = func_0x03f372e4(uVar18,lVar16);
    plVar30 = *(long **)(auVar34._0_8_ + 0x60);
    if (plVar30 != (long *)0x0) {
      lVar25 = *plVar30;
      uVar23 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar23 != 0) {
        piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_077800d0) {
            puVar17 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_04d072d4;
          }
          uVar23 = uVar23 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar23 != 0);
      }
      lVar27 = 0;
      puVar17 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04d072d4:
      uVar18 = (*(code *)*puVar17)(plVar30,puVar17[1]);
      if (lVar16 != 0) {
        lVar27 = *(long *)PTR_DAT_077800f8;
        iVar12 = func_0x04a44654(lVar16,uVar18);
        if (plVar26 != (long *)0x0) {
          lVar16 = *plVar26;
          uVar23 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar23 != 0) {
            piVar29 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0777c248) {
                puVar17 = (undefined8 *)(lVar16 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_04d07358;
              }
              uVar23 = uVar23 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar23 != 0);
          }
          lVar27 = 0;
          puVar17 = (undefined8 *)func_0x03256b10(plVar26);
LAB_04d07358:
          lVar16 = (*(code *)*puVar17)(plVar26,puVar17[1]);
          puVar15 = PTR_DAT_077800f0;
          if (lVar16 != 0) {
            uVar18 = func_0x0414419c(lVar16,iVar12 + -1,*(undefined8 *)PTR_DAT_0777e510);
            auStack_180[0] = 0;
            auStack_180[1] = 0;
            func_0x048c959c(auStack_180,uVar18,iVar12,*(undefined8 *)puVar15);
            return auStack_180[0];
          }
        }
      }
    }
    auVar34 = func_0x03280cac();
    lVar16 = auVar34._8_8_;
    uVar23 = auVar34._0_8_;
    if ((bRam0000000007e1ae91 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780108);
      func_0x03280a18(PTR_DAT_077800b0);
      func_0x03280a18(PTR_DAT_07780110);
      uVar23 = func_0x03280a18(PTR_DAT_07780118);
      bRam0000000007e1ae91 = 1;
    }
    puVar4 = PTR_DAT_07780118;
    puVar3 = PTR_DAT_07780110;
    puVar15 = PTR_DAT_07780108;
    if (lVar16 == 0) {
LAB_04d07528:
      auVar34 = func_0x03280cac();
      puVar8 = PTR_DAT_07780140;
      puVar7 = PTR_DAT_07780138;
      puVar6 = PTR_DAT_07780130;
      puVar5 = PTR_DAT_07780128;
      puVar4 = PTR_DAT_07780120;
      puVar3 = PTR_DAT_0777ebc8;
      puVar15 = PTR_DAT_0777ebb0;
      lVar16 = auVar34._0_8_;
      if ((bRam0000000007e1ae92 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780128);
        func_0x03280a18(PTR_DAT_0777ebb0);
        func_0x03280a18(PTR_DAT_07780138);
        func_0x03280a18(PTR_DAT_07780130);
        func_0x03280a18(PTR_DAT_0777ebc8);
        func_0x03280a18(PTR_DAT_07780120);
        func_0x03280a18(PTR_DAT_07780140);
        bRam0000000007e1ae92 = 1;
      }
      uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04fb4e7c(uVar18,*(undefined8 *)puVar5);
      *(undefined8 *)(lVar16 + 0x78) = uVar18;
      func_0x032809c4((undefined8 *)(lVar16 + 0x78),uVar18);
      uVar18 = func_0x03280ca0(*(undefined8 *)puVar6);
      func_0x04f610a8(uVar18,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x80) = uVar18;
      func_0x032809c4((undefined8 *)(lVar16 + 0x80),uVar18);
      uVar18 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04f2ad28(uVar18,*(undefined8 *)puVar15);
      *(undefined8 *)(lVar16 + 0x88) = uVar18;
      func_0x032809c4((undefined8 *)(lVar16 + 0x88),uVar18);
      uVar18 = func_0x03280ca0(*(undefined8 *)puVar8);
      func_0x06898a68(uVar18,0);
      *(undefined8 *)(lVar16 + 0x90) = uVar18;
      func_0x032809c4((undefined8 *)(lVar16 + 0x90),uVar18);
                    /* WARNING: Could not recover jumptable at 0x04d076a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 0x130))(lVar16);
      return uVar23;
    }
    if (0 < *(int *)(lVar16 + 0x18)) {
      iVar12 = 0;
      do {
        uVar23 = func_0x041e65b8(lVar16,iVar12,*(undefined8 *)puVar3);
        if (lVar27 == 0) goto LAB_04d07528;
        uVar23 = func_0x053bbf78(lVar27,uVar23 >> 0x20,*(undefined8 *)puVar15);
        if ((uVar23 & 1) != 0) {
          fVar33 = (float)(*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x128))
                                    (auVar34._0_8_);
          iVar13 = func_0x041e65b8(lVar16,iVar12,*(undefined8 *)puVar3);
          uVar14 = func_0x041e65b8(lVar16,iVar12,*(undefined8 *)puVar3);
          uVar23 = 0x80000000;
          if (fVar33 * (float)iVar13 != INFINITY) {
            uVar23 = (ulong)(uint)(int)(fVar33 * (float)iVar13);
          }
          uVar23 = func_0x041e660c(lVar16,iVar12,uVar23 | uVar14 & 0xffffffff00000000,
                                   *(undefined8 *)puVar4);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar16 + 0x18));
    }
    return uVar23;
  }
  *(long *)(lVar16 + 0x10) = param_1;
  func_0x032809c4((long *)(lVar16 + 0x10),param_1);
  if (param_4 == (long *)0x0) goto LAB_04d06a5c;
  lVar27 = *param_4;
  lVar31 = *(long *)(param_1 + 0x88);
  uVar28 = (ulong)*(ushort *)(lVar27 + 0x12e);
  if (uVar28 != 0) {
    piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0777c248) {
        puVar17 = (undefined8 *)(lVar27 + (long)*piVar29 * 0x10 + 0x138);
        goto LAB_04d069b4;
      }
      uVar28 = uVar28 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar28 != 0);
  }
  uVar23 = 0;
  puVar17 = (undefined8 *)func_0x03256b10(param_4);
LAB_04d069b4:
  lVar27 = (*(code *)*puVar17)(param_4,puVar17[1]);
  puVar4 = PTR_DAT_07780090;
  puVar3 = PTR_DAT_07780088;
  puVar15 = PTR_DAT_07780080;
  if ((lVar27 == 0) || (lVar31 == 0)) goto LAB_04d06a5c;
  iVar13 = func_0x04f2ba70(lVar31,*(undefined4 *)(lVar27 + 0x18),*(undefined8 *)PTR_DAT_0777c258);
  iVar12 = 0;
  if (iVar13 != 0) {
    iVar12 = (int)param_3 / iVar13;
  }
  *(int *)(lVar16 + 0x18) = iVar13 + (iVar12 * iVar13 - (int)param_3);
  uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
  lVar25 = 0;
  func_0x0535acb4(uVar18,lVar16,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd8))
  ;
  lVar31 = *(long *)puVar3;
  lVar16 = func_0x03d87e68(param_2,uVar18);
  lVar27 = *(long *)puVar15;
  if (*(long *)(lVar27 + 0x38) == 0) {
    func_0x03256878(lVar27);
  }
  if (lVar16 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar27 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    func_0x041e8ba0(uVar23,lVar16,*(undefined8 *)(*(long *)(lVar27 + 0x38) + 0x10));
    return uVar23;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar34 = func_0x03280b7c(uVar18,lVar27);
  lVar16 = auVar34._8_8_;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 0x10))(uVar23,auVar34._0_8_);
    return uVar23;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar34 = func_0x03280b7c(uVar18,lVar16);
  lVar16 = auVar34._8_8_;
  uStack_60 = 0x3d60338;
  if (*(long *)(lVar16 + 0x38) == 0) {
    func_0x03256878(lVar16);
  }
  if (auVar34._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar16 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    func_0x0420cec8(uVar23,auVar34._0_8_,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
    return uVar23;
  }
  uVar18 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar18 = func_0x05ac7464(uVar18,0);
  auVar35 = func_0x03280b7c(uVar18,lVar16);
  pcStack_80 = (code *)0x3d603b4;
  lVar16 = lVar31;
  lStack_78 = unaff_x21;
  auStack_70 = auVar34;
  if (*(long *)(lVar31 + 0x38) == 0) {
    func_0x03256878(lVar31);
  }
  puVar15 = PTR_DAT_07779d10;
  if ((auVar35._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar34 = func_0x03280b7c(uVar18,lVar31);
    uStack_a0 = 0x3d60428;
    lVar27 = lVar16;
    lStack_88 = lVar31;
    if (*(long *)(lVar16 + 0x38) == 0) {
      auStack_98 = auVar35;
      func_0x03256878(lVar16);
      auVar35 = auStack_98;
    }
    puVar15 = PTR_DAT_07779d10;
    auStack_98 = auVar35;
    if ((auVar34._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
      lVar27 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      lVar31 = 0;
      ppcVar10 = &pcStack_80;
      lVar16 = lStack_88;
      uVar23 = uStack_a0;
      goto LAB_03d60730;
    }
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    auVar35 = func_0x03280b7c(uVar18,lVar16);
    uStack_c0 = 0x3d6049c;
    lVar31 = lVar27;
    lStack_a8 = lVar16;
    if (*(long *)(lVar27 + 0x38) == 0) {
      auStack_b8 = auVar34;
      func_0x03256878(lVar27);
      auVar34 = auStack_b8;
    }
    puVar15 = PTR_DAT_07779d10;
    auStack_b8 = auVar34;
    if ((auVar35._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
      uVar18 = func_0x03280a2c(puVar15);
      uVar18 = func_0x05ac7464(uVar18,0);
      auVar34 = func_0x03280b7c(uVar18,lVar27);
      pcStack_e0 = (code *)0x3d60510;
      lVar21 = lVar31;
      puStack_c8 = (undefined *)lVar27;
      auStack_d8 = auVar35;
      if (*(long *)(lVar31 + 0x38) == 0) {
        func_0x03256878(lVar31);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar34._0_8_ != 0) && (puVar15 = PTR_DAT_07779d18, auVar34._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x38) + 8))
                           (auVar34._0_8_,auVar34._8_8_,0);
        return uVar23;
      }
      uVar18 = func_0x03280a2c(puVar15);
      uVar18 = func_0x05ac7464(uVar18,0);
      auVar35 = func_0x03280b7c(uVar18,lVar31);
      lVar27 = lVar21;
      lVar24 = lVar25;
      if (*(long *)(lVar25 + 0x38) == 0) {
        func_0x03256878(lVar25);
      }
      puVar15 = PTR_DAT_07779d10;
      if ((auVar35._0_8_ == 0) || (puVar15 = PTR_DAT_07779d18, auVar35._8_8_ == 0)) {
        uVar18 = func_0x03280a2c(puVar15);
        uVar18 = func_0x05ac7464(uVar18,0);
        auVar34 = func_0x03280b7c(uVar18,lVar25);
        auVar2._8_8_ = lVar24;
        auVar2._0_8_ = lVar27;
        lStack_78 = auVar34._8_8_;
        unaff_x22 = auVar34._0_8_;
        puVar9 = (ulong *)&lStack_140;
        lStack_140 = 0x3d60608;
        lVar16 = lVar27;
        lVar31 = lVar24;
        lStack_120 = lVar21;
        auStack_130 = auVar35;
        if (*(long *)(lVar24 + 0x38) == 0) {
          func_0x03256878(lVar24);
        }
        puVar15 = PTR_DAT_07779d10;
        if ((unaff_x22 != 0) && (puVar15 = PTR_DAT_07779d18, lStack_78 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 0x10))
                             (unaff_x22,lStack_78,lVar27);
          return uVar23;
        }
        uVar18 = func_0x03280a2c(puVar15);
        uVar18 = func_0x05ac7464(uVar18,0);
        pcVar32 = (code *)0x3d6068c;
        auVar35 = func_0x03280b7c(uVar18,lVar24);
        goto LAB_03d6068c;
      }
      lVar16 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
      ppcVar11 = &pcStack_e0;
      uVar23 = 0x3d60588;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
      lVar21 = 0;
      ppcVar11 = (code **)&uStack_a0;
      lVar31 = lStack_a8;
      uVar23 = uStack_c0;
    }
  }
  else {
    lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
    lVar16 = 0;
    puVar9 = &uStack_60;
    pcVar32 = pcStack_80;
    auVar2 = auStack_70;
LAB_03d6068c:
    ppcVar10 = (code **)((long)puVar9 + -0x30);
    *(code **)((long)puVar9 + -0x30) = pcVar32;
    *(long *)((long)puVar9 + -0x20) = unaff_x22;
    *(long *)((long)puVar9 + -0x18) = lStack_78;
    *(undefined1 (*) [16])((long)puVar9 + -0x10) = auVar2;
    plVar26 = *(long **)(lVar31 + 0x38);
    lVar27 = lVar31;
    if (plVar26 == (long *)0x0) {
      func_0x03256878(lVar31);
      plVar26 = *(long **)(lVar31 + 0x38);
    }
    if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
    func_0x0531dbd0(uVar23,0xfffffffe);
    if (uVar23 != 0) {
      *(undefined8 *)(uVar23 + 0x38) = auVar35._0_8_;
      func_0x032809c4((undefined8 *)(uVar23 + 0x38),auVar35._0_8_);
      *(undefined8 *)(uVar23 + 0x48) = auVar35._8_8_;
      func_0x032809c4((undefined8 *)(uVar23 + 0x48),auVar35._8_8_);
      *(long *)(uVar23 + 0x28) = lVar16;
      func_0x032809c4((long *)(uVar23 + 0x28),lVar16);
      return uVar23;
    }
    auVar34 = func_0x03280cac();
    unaff_x22 = 0;
    uVar23 = 0x3d60730;
LAB_03d60730:
    ppcVar11 = (code **)((long)ppcVar10 + -0x30);
    *(ulong *)((long)ppcVar10 + -0x30) = uVar23;
    *(long *)((long)ppcVar10 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])((long)ppcVar10 + -0x18) = auVar35;
    *(long *)((long)ppcVar10 + -8) = lVar16;
    plVar26 = *(long **)(lVar27 + 0x38);
    lVar16 = lVar27;
    if (plVar26 == (long *)0x0) {
      func_0x03256878(lVar27);
      plVar26 = *(long **)(lVar27 + 0x38);
    }
    if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    lVar21 = *(long *)(*(long *)(lVar27 + 0x38) + 8);
    func_0x0531e428(uVar23,0xfffffffe);
    if (uVar23 != 0) {
      *(undefined8 *)(uVar23 + 0x38) = auVar34._0_8_;
      func_0x032809c4((undefined8 *)(uVar23 + 0x38),auVar34._0_8_);
      *(undefined8 *)(uVar23 + 0x48) = auVar34._8_8_;
      func_0x032809c4((undefined8 *)(uVar23 + 0x48),auVar34._8_8_);
      *(long *)(uVar23 + 0x28) = lVar31;
      func_0x032809c4((long *)(uVar23 + 0x28),lVar31);
      return uVar23;
    }
    auVar35 = func_0x03280cac();
    unaff_x22 = 0;
    uVar23 = 0x3d607d4;
  }
  *(ulong *)((long)ppcVar11 + -0x30) = uVar23;
  *(long *)((long)ppcVar11 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x18) = auVar34;
  *(long *)((long)ppcVar11 + -8) = lVar31;
  plVar26 = *(long **)(lVar16 + 0x38);
  lVar27 = lVar16;
  if (plVar26 == (long *)0x0) {
    func_0x03256878(lVar16);
    plVar26 = *(long **)(lVar16 + 0x38);
  }
  if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar23 = func_0x03280ca0();
  uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + 8);
  func_0x0531ec78(uVar23,0xfffffffe);
  if (uVar23 != 0) {
    *(undefined8 *)(uVar23 + 0x40) = auVar35._0_8_;
    func_0x032809c4((undefined8 *)(uVar23 + 0x40),auVar35._0_8_);
    *(undefined8 *)(uVar23 + 0x50) = auVar35._8_8_;
    func_0x032809c4((undefined8 *)(uVar23 + 0x50),auVar35._8_8_);
    *(long *)(uVar23 + 0x30) = lVar21;
    func_0x032809c4((long *)(uVar23 + 0x30),lVar21);
    return uVar23;
  }
  auVar34 = func_0x03280cac();
  uVar23 = auVar34._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0x60) = 0x3d60878;
  *(undefined8 *)((long)ppcVar11 + -0x58) = unaff_x23;
  *(undefined8 *)((long)ppcVar11 + -0x50) = 0;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x48) = auVar35;
  *(long *)((long)ppcVar11 + -0x38) = lVar21;
  plVar26 = *(long **)(lVar27 + 0x38);
  if (plVar26 == (long *)0x0) {
    func_0x03256878(lVar27);
    plVar26 = *(long **)(lVar27 + 0x38);
  }
  if ((*(byte *)(*plVar26 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar14 = func_0x03280ca0();
  puVar17 = *(undefined8 **)(*(long *)(lVar27 + 0x38) + 8);
  (*(code *)*puVar17)(uVar14,0xfffffffe);
  if (uVar14 != 0) {
    func_0x02f17738(uVar14,*(long *)(**(long **)(lVar27 + 0x38) + 0x80) + 0xc0,uVar23);
    func_0x02f17738(uVar14,*(long *)(**(long **)(lVar27 + 0x38) + 0x80) + 0x100,auVar34._8_8_);
    func_0x02f17738(uVar14,*(long *)(**(long **)(lVar27 + 0x38) + 0x80) + 0x80,uVar18);
    return uVar14;
  }
  auVar35 = func_0x03280cac();
  lVar16 = auVar35._8_8_;
  plVar26 = auVar35._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0x90) = 0x3d60944;
  *(undefined8 *)((long)ppcVar11 + -0x88) = 0;
  *(undefined1 (*) [16])((long)ppcVar11 + -0x80) = auVar34;
  *(long *)((long)ppcVar11 + -0x70) = lVar27;
  *(undefined8 *)((long)ppcVar11 + -0x68) = uVar18;
  puVar22 = puVar17;
  if (puVar17[7] == 0) {
    func_0x03256878(puVar17);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar26 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar17);
LAB_03d60c04:
    func_0x03281048(plVar26);
    lVar27 = 0;
  }
  else {
    lVar27 = *(long *)(puVar17[7] + 0x10);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    lVar31 = *plVar26;
    bVar1 = *(byte *)(lVar31 + 0x130);
    if ((*(byte *)(lVar27 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar31 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) == lVar27)) {
      lVar27 = *(long *)(puVar17[7] + 0x10);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
        lVar31 = *plVar26;
        bVar1 = *(byte *)(lVar31 + 0x130);
      }
      if ((*(byte *)(lVar27 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar31 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) == lVar27))
      {
        lVar27 = *(long *)(puVar17[7] + 0x10);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
          lVar31 = *plVar26;
          bVar1 = *(byte *)(lVar31 + 0x130);
        }
        if ((*(byte *)(lVar27 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar31 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) == lVar27
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar23 = (**(code **)(lVar31 + 0x228))(plVar26,lVar16,*(undefined8 *)(lVar31 + 0x230));
          return uVar23;
        }
      }
      goto LAB_03d60c04;
    }
    lVar27 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar27 = func_0x03280b90(plVar26,lVar27);
    if (lVar27 == 0) {
      lVar27 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar26 + 0x130) < *(byte *)(lVar27 + 0x130)) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) != lVar27
         )) {
        if ((*(byte *)(*(long *)(puVar17[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        func_0x04b68fa4(uVar23,plVar26,lVar16,*(undefined8 *)(puVar17[7] + 0x58));
        return uVar23;
      }
      if ((*(byte *)(*(long *)(puVar17[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar23 = func_0x03280ca0();
      lVar27 = *(long *)(puVar17[7] + 0x38);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = func_0x0325681c(lVar27);
      }
      if ((*(byte *)(lVar27 + 0x130) <= *(byte *)(*plVar26 + 0x130)) &&
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar27 + 0x130) * 8 + -8) == lVar27
         )) {
        func_0x04b713b0(uVar23,plVar26,lVar16,*(undefined8 *)(puVar17[7] + 0x48));
        return uVar23;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar17[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    uVar23 = func_0x03280ca0();
    lVar27 = *(long *)(puVar17[7] + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    lVar31 = func_0x03280b90(plVar26,lVar27);
    if (lVar31 != 0) {
      func_0x04b66610(uVar23,lVar31,lVar16,*(undefined8 *)(puVar17[7] + 0x30));
      return uVar23;
    }
  }
  auVar34 = func_0x03281048(plVar26,lVar27);
  lVar16 = auVar34._8_8_;
  plVar26 = auVar34._0_8_;
  *(undefined8 *)((long)ppcVar11 + -0xc0) = 0x3d60c18;
  *(long *)((long)ppcVar11 + -0xb8) = lVar27;
  *(ulong *)((long)ppcVar11 + -0xb0) = uVar23;
  *(undefined8 **)((long)ppcVar11 + -0xa8) = puVar17;
  *(undefined1 (*) [16])((long)ppcVar11 + -0xa0) = auVar35;
  if (puVar22[7] == 0) {
    func_0x03256878(puVar22);
  }
  puVar15 = PTR_DAT_07774b08;
  if ((plVar26 == (long *)0x0) || (puVar15 = PTR_DAT_077799b8, lVar16 == 0)) {
    uVar18 = func_0x03280a2c(puVar15);
    uVar18 = func_0x05ac7464(uVar18,0);
    func_0x03280b7c(uVar18,puVar22);
  }
  else {
    lVar31 = *(long *)(puVar22[7] + 0x10);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = func_0x0325681c();
    }
    lVar25 = *plVar26;
    bVar1 = *(byte *)(lVar25 + 0x130);
    if ((bVar1 < *(byte *)(lVar31 + 0x130)) ||
       (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) != lVar31)) {
      lVar31 = *(long *)(puVar22[7] + 0x20);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      lVar31 = func_0x03280b90(plVar26,lVar31);
      if (lVar31 != 0) {
        if ((*(byte *)(*(long *)(puVar22[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        lVar27 = *(long *)(puVar22[7] + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c(lVar27);
        }
        lVar31 = func_0x03280b90(plVar26,lVar27);
        if (lVar31 != 0) {
          func_0x04b667e0(uVar23,lVar31,lVar16,*(undefined8 *)(puVar22[7] + 0x30));
          return uVar23;
        }
        goto LAB_03d60ee0;
      }
      lVar31 = *(long *)(puVar22[7] + 0x38);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar26 + 0x130) < *(byte *)(lVar31 + 0x130)) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) != lVar31
         )) {
        if ((*(byte *)(*(long *)(puVar22[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        uVar23 = func_0x03280ca0();
        func_0x04b693d0(uVar23,plVar26,lVar16,*(undefined8 *)(puVar22[7] + 0x58));
        return uVar23;
      }
      if ((*(byte *)(*(long *)(puVar22[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar23 = func_0x03280ca0();
      lVar31 = *(long *)(puVar22[7] + 0x38);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
      }
      if ((*(byte *)(lVar31 + 0x130) <= *(byte *)(*plVar26 + 0x130)) &&
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31
         )) {
        func_0x04b715c8(uVar23,plVar26,lVar16,*(undefined8 *)(puVar22[7] + 0x48));
        return uVar23;
      }
    }
    else {
      lVar31 = *(long *)(puVar22[7] + 0x10);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = func_0x0325681c(lVar31);
        lVar25 = *plVar26;
        bVar1 = *(byte *)(lVar25 + 0x130);
      }
      if ((*(byte *)(lVar31 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31))
      {
        lVar31 = *(long *)(puVar22[7] + 0x10);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
          lVar25 = *plVar26;
          bVar1 = *(byte *)(lVar25 + 0x130);
        }
        if ((*(byte *)(lVar31 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar31 + 0x130) * 8 + -8) == lVar31
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar23 = (**(code **)(lVar25 + 0x228))(plVar26,lVar16,*(undefined8 *)(lVar25 + 0x230));
          return uVar23;
        }
      }
    }
  }
  func_0x03281048(plVar26);
LAB_03d60ee0:
  lVar16 = func_0x03281048(plVar26,lVar27);
  *(undefined8 *)((long)ppcVar11 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])((long)ppcVar11 + -0xd0) = auVar34;
  lVar27 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
    lVar27 = func_0x0325681c();
  }
  uVar23 = **(ulong **)(lVar27 + 0xb8);
  func_0x03280ab0();
  if (uVar23 == 0) {
    lVar27 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    uVar23 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar27 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x10);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c();
    }
    **(ulong **)(lVar27 + 0xb8) = uVar23;
    lVar16 = *(long *)(lVar16 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar16 + 0xb8),uVar23);
  }
  return uVar23;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6787EF4; MergeEngine.ECS.Systems.Board.UnboxingSystem.UnboxItem; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Board_UnboxingSystem__UnboxItem
          (undefined1 param_1 [16],ulong param_2,long param_3,long *param_4,long *param_5,
          long *param_6,long *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong *puVar18;
  long extraout_x1;
  ulong extraout_x1_00;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar25;
  long *unaff_x22;
  long *plVar26;
  undefined8 uVar27;
  long *unaff_x23;
  long lVar28;
  long lVar29;
  long *unaff_x24;
  long *plVar30;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x30;
  code *pcVar31;
  int iVar32;
  undefined8 extraout_d0;
  int iVar33;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar34;
  undefined8 unaff_d10;
  undefined4 uVar35;
  undefined8 unaff_d11;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  auVar38._8_8_ = param_4;
  auVar38._0_8_ = param_3;
  puVar12 = &stack0xffffffffffffffc0;
  if ((bRam0000000007e28d28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077d7700);
    func_0x03280a18(PTR_DAT_077d7708);
    func_0x03280a18(PTR_DAT_07800a98);
    func_0x03280a18(PTR_DAT_07800aa0);
    func_0x03280a18(PTR_DAT_077ce978);
    auVar38 = func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d28 = 1;
  }
  plVar25 = (long *)0x7e28000;
  plVar26 = unaff_x22;
  plVar16 = unaff_x23;
  plVar30 = unaff_x24;
  if (param_4 == (long *)0x0) {
LAB_068881a0:
    pcVar31 = (code *)0x68881a4;
    auVar38 = func_0x03280cac();
    plVar15 = auVar38._8_8_;
    lVar22 = auVar38._0_8_;
    unaff_x24 = plVar30;
    if ((int)param_6 != 1) {
      if ((int)param_6 != 2) {
        return auVar38;
      }
      puVar12 = auStack_f0;
      plVar16 = (long *)0x7e28000;
      plVar19 = param_5;
      param_6 = param_7;
      plVar26 = param_7;
      if ((bRam0000000007e28d23 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777e638);
        func_0x03280a18(PTR_DAT_077e69d8);
        func_0x03280a18(PTR_DAT_0774eab0);
        func_0x03280a18(PTR_DAT_078101a0);
        func_0x03280a18(PTR_DAT_078101a8);
        func_0x03280a18(PTR_DAT_078101b0);
        func_0x03280a18(PTR_DAT_077e69e0);
        func_0x03280a18(PTR_DAT_07779820);
        func_0x03280a18(PTR_DAT_078101b8);
        func_0x03280a18(PTR_DAT_078101d8);
        func_0x03280a18(PTR_DAT_078101e0);
        func_0x03280a18(PTR_DAT_0774f768);
        func_0x03280a18(PTR_DAT_078101e8);
        bRam0000000007e28d23 = 1;
      }
      param_2 = (ulong)(uint)(float)(int)((ulong)param_5 >> 0x20);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      func_0x05c6e674((float)(int)param_5,param_2,&uStack_e8,0);
      puVar8 = PTR_DAT_078101e0;
      puVar7 = PTR_DAT_0774f768;
      unaff_d8 = uStack_e8 & 0xffffffff;
      unaff_d9 = uStack_e8 >> 0x20;
      plVar25 = param_7;
      if (param_7 != (long *)0x0) {
        lVar28 = *(long *)PTR_DAT_078101e0;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar28 = *(long *)puVar8;
        }
        puVar9 = PTR_DAT_077e69d8;
        unaff_x27 = PTR_DAT_0774eab0;
        plVar16 = *(long **)puVar7;
        plVar30 = *(long **)(*(long *)(lVar28 + 0xb8) + 8);
        if (plVar30 == (long *)0x0) {
          if (*(int *)(lVar28 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar28 = *(long *)puVar8;
          }
          unaff_x25 = (undefined *)**(undefined8 **)(lVar28 + 0xb8);
          plVar30 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e69e0);
          param_6 = (long *)0x0;
          func_0x053569b8(plVar30,unaff_x25,*(undefined8 *)PTR_DAT_078101d8,0);
          puVar18 = (ulong *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *puVar18 = (ulong)plVar30;
          func_0x032809c4(puVar18,plVar30);
        }
        uVar17 = func_0x03d50a94(param_7,plVar30,*(undefined8 *)puVar9);
        uVar17 = func_0x03d5b8d8(uVar17,*(undefined8 *)unaff_x27);
        plVar19 = (long *)0x0;
        plVar25 = (long *)func_0x055f8748(plVar16,uVar17);
        unaff_x26 = puVar8;
      }
      param_7 = plVar26;
      plVar26 = param_5;
      if (*(long *)(lVar22 + 0x50) != 0) {
        plVar19 = (long *)0x0;
        param_6 = (long *)0x0;
        lVar28 = func_0x06a02524(*(long *)(lVar22 + 0x50),param_5,0,0);
        puVar11 = PTR_DAT_078101e8;
        puVar10 = PTR_DAT_078101a8;
        puVar9 = PTR_DAT_078101a0;
        puVar8 = PTR_DAT_0777e638;
        puVar7 = PTR_DAT_07779820;
        if (lVar28 != 0) {
          func_0x040cf800(&uStack_e8,lVar28,*(undefined8 *)PTR_DAT_078101b8);
          uStack_c8 = uStack_e0;
          uStack_d0 = uStack_e8;
          uStack_c0 = uStack_d8;
LAB_06888400:
          uVar23 = func_0x05108f5c(&uStack_d0,*(undefined8 *)puVar10);
          if ((uVar23 & 1) == 0) {
            auVar38 = func_0x05108f58(&uStack_d0,*(undefined8 *)puVar9);
            return auVar38;
          }
          if (*(long *)(lVar22 + 0x50) != 0) goto code_r0x06888418;
          func_0x03280cac();
          goto LAB_06888534;
        }
      }
LAB_0688853c:
      auVar40 = func_0x03280cac();
      param_3 = auVar40._0_8_;
      param_5 = plVar19;
      if (auVar40._8_4_ == 1) {
        plVar15 = (long *)func_0x072ce910(param_3);
        lVar22 = *plVar15;
        func_0x072ce920();
        auVar38 = func_0x05108f58(&uStack_d0,*plVar16);
        if (lVar22 == 0) {
          return auVar38;
        }
        func_0x03280ca4(lVar22);
        param_5 = plVar19;
      }
      param_4 = (long *)0x0;
      func_0x05108f58(&uStack_d0,*plVar16);
      func_0x03365958(param_3);
      func_0x03280ca4(0);
      pcVar31 = MergeEngine_ECS_Systems_Board_UnboxingSystem__ProcessResourceConsumeUnboxing;
      auVar38 = func_0x02f09514();
      unaff_x24 = plVar30;
    }
    plVar30 = auVar38._8_8_;
    lVar22 = auVar38._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar12 + -0xa0);
    *(ulong *)(puVar12 + -0x60) = unaff_d9;
    *(ulong *)(puVar12 + -0x58) = unaff_d8;
    *(code **)(puVar12 + -0x50) = pcVar31;
    *(undefined **)(puVar12 + -0x48) = unaff_x27;
    *(undefined **)(puVar12 + -0x40) = unaff_x26;
    *(undefined **)(puVar12 + -0x38) = unaff_x25;
    *(long **)(puVar12 + -0x30) = unaff_x24;
    *(long **)(puVar12 + -0x28) = plVar16;
    *(long **)(puVar12 + -0x20) = plVar26;
    *(long **)(puVar12 + -0x18) = plVar25;
    *(long **)(puVar12 + -0x10) = param_4;
    *(long *)(puVar12 + -8) = param_3;
    plVar26 = (long *)0x7e28000;
    plVar25 = param_5;
    if ((bRam0000000007e28d24 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_077d7770);
      func_0x03280a18(PTR_DAT_078101a0);
      func_0x03280a18(PTR_DAT_078101a8);
      func_0x03280a18(PTR_DAT_078101b0);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_078101b8);
      func_0x03280a18(PTR_DAT_078101f0);
      bRam0000000007e28d24 = 1;
    }
    *(undefined8 *)(puVar12 + -0x80) = 0;
    *(undefined8 *)(puVar12 + -0x78) = 0;
    *(undefined8 *)(puVar12 + -0x70) = 0;
    if (*(long *)(lVar22 + 0x50) != 0) {
      plVar25 = (long *)0x0;
      auVar38 = func_0x06a02444(*(long *)(lVar22 + 0x50),param_5);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = auVar38._8_8_;
      if (auVar38._0_8_ == 0) {
        return auVar39 << 0x40;
      }
      lVar28 = *(long *)(auVar38._0_8_ + 0x10);
      if (lVar28 != 0) {
        auVar38 = func_0x03d20d84(lVar28,*(undefined8 *)PTR_DAT_077d7770);
        lVar28 = auVar38._0_8_;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar38._8_8_;
        if (lVar28 == 0) {
          return auVar5 << 0x40;
        }
        uVar1 = *(uint *)(lVar28 + 0x48);
        plVar26 = (long *)(ulong)uVar1;
        uVar2 = *(uint *)(lVar28 + 0x4c);
        plVar16 = (long *)(ulong)uVar2;
        param_2 = (ulong)(uint)(float)(int)((ulong)param_5 >> 0x20);
        *(undefined8 *)(puVar12 + -0x98) = 0;
        func_0x05c6e674((float)(int)param_5,param_2,puVar12 + -0x98,0);
        if (*(long *)(lVar22 + 0x50) != 0) {
          unaff_d8 = (ulong)*(uint *)(puVar12 + -0x98);
          unaff_d9 = (ulong)*(uint *)(puVar12 + -0x94);
          plVar25 = (long *)0x0;
          param_6 = (long *)0x0;
          lVar28 = func_0x06a02524(*(long *)(lVar22 + 0x50),param_5,0,0);
          if (lVar28 != 0) {
            func_0x040cf800(puVar12 + -0x98,lVar28,*(undefined8 *)PTR_DAT_078101b8);
            unaff_x27 = PTR_DAT_078101f0;
            unaff_x24 = (long *)PTR_DAT_078101a8;
            unaff_x25 = PTR_DAT_0777e638;
            unaff_x26 = PTR_DAT_07779820;
            *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x90);
            *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x98);
            *(undefined8 *)(puVar12 + -0x70) = *(undefined8 *)(puVar12 + -0x88);
LAB_06888724:
            uVar23 = func_0x05108f5c(puVar12 + -0x80,*unaff_x24);
            if ((uVar23 & 1) == 0) {
              auVar38 = func_0x05108f58(puVar12 + -0x80,*(undefined8 *)PTR_DAT_078101a0);
              return auVar38;
            }
            if (*(long *)(lVar22 + 0x50) != 0) goto code_r0x0688873c;
            func_0x03280cac();
            goto LAB_06888864;
          }
        }
      }
    }
LAB_06888868:
    func_0x03280cac();
LAB_0688886c:
    auVar40 = func_0x03280cac();
    uVar17 = auVar40._0_8_;
    if (auVar40._8_4_ == 1) {
      plVar30 = (long *)func_0x072ce910(uVar17);
      lVar22 = *plVar30;
      func_0x072ce920();
      auVar38 = func_0x05108f58(puVar12 + -0x80,*(undefined8 *)PTR_DAT_078101a0);
      if (lVar22 == 0) {
        return auVar38;
      }
      func_0x03280ca4(lVar22);
    }
    func_0x05108f58(puVar12 + -0x80,*(undefined8 *)PTR_DAT_078101a0);
    func_0x03365958(uVar17);
    func_0x03280ca4(0);
    auVar38 = func_0x02f09514();
    plVar30 = auVar38._8_8_;
    lVar28 = auVar38._0_8_;
    *(code **)(puVar12 + -0xd0) =
         MergeEngine_ECS_Systems_Board_UnboxingSystem__NotifyAndTrackInteractionProgress;
    *(long **)(puVar12 + -200) = plVar16;
    *(long **)(puVar12 + -0xc0) = plVar26;
    *(long **)(puVar12 + -0xb8) = param_5;
    *(undefined8 *)(puVar12 + -0xb0) = 0;
    *(undefined8 *)(puVar12 + -0xa8) = uVar17;
    if ((bRam0000000007e28d25 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e28d25 = 1;
    }
    plVar15 = *(long **)(lVar28 + 0x80);
    if (plVar15 != (long *)0x0) {
      lVar22 = *plVar15;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
            goto LAB_068889b4;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
LAB_068889b4:
      plVar25 = (long *)puVar14[1];
      plVar19 = (long *)(*(code *)*puVar14)(plVar15,plVar30);
      if ((plVar30 != (long *)0x0) && (plVar26 = *(long **)(lVar28 + 0x68), plVar26 != (long *)0x0))
      {
        lVar22 = *plVar26;
        plVar30 = (long *)plVar30[2];
        uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
        plVar16 = *(long **)PTR_DAT_07778fa0;
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e4a0) {
              puVar14 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_06888a38;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_0777e4a0,0);
LAB_06888a38:
        param_7 = (long *)0x0;
        plVar25 = plVar19;
        param_6 = plVar30;
        uVar17 = (*(code *)*puVar14)(plVar26,plVar16,plVar19,plVar30,0,puVar14[1]);
        lVar22 = *(long *)(lVar28 + 0x70);
        plVar15 = plVar19;
        if (lVar22 != 0) {
          unaff_x20 = *(undefined8 *)(puVar12 + -0xb0);
          unaff_x19 = *(undefined8 *)(puVar12 + -0xa8);
          unaff_x22 = *(long **)(puVar12 + -0xc0);
          unaff_x21 = *(undefined8 *)(puVar12 + -0xb8);
          unaff_x30 = *(undefined8 *)(puVar12 + -0xd0);
          unaff_x23 = *(long **)(puVar12 + -200);
          goto SUB_068b94a0;
        }
      }
    }
    lVar22 = func_0x03280cac();
    *(undefined8 *)(puVar12 + -0x140) = unaff_d11;
    *(undefined8 *)(puVar12 + -0x138) = unaff_d10;
    *(ulong *)(puVar12 + -0x130) = unaff_d9;
    *(ulong *)(puVar12 + -0x128) = unaff_d8;
    *(code **)(puVar12 + -0x120) =
         MergeEngine_ECS_Systems_Board_UnboxingSystem__FireLiveOpsZoneUnboxedIfNeeded;
    *(undefined **)(puVar12 + -0x118) = unaff_x27;
    *(undefined **)(puVar12 + -0x110) = unaff_x26;
    *(undefined **)(puVar12 + -0x108) = unaff_x25;
    *(long **)(puVar12 + -0x100) = unaff_x24;
    *(long **)(puVar12 + -0xf8) = plVar16;
    *(long **)(puVar12 + -0xf0) = plVar26;
    *(long **)(puVar12 + -0xe8) = plVar15;
    *(long **)(puVar12 + -0xe0) = plVar30;
    *(long *)(puVar12 + -0xd8) = lVar28;
    if ((bRam0000000007e28d26 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077d75b8);
      func_0x03280a18(PTR_DAT_078101c0);
      func_0x03280a18(PTR_DAT_078101c8);
      bRam0000000007e28d26 = 1;
    }
    if (*(long *)(lVar22 + 0x78) != 0) {
      auVar38 = func_0x06603648(*(long *)(lVar22 + 0x78),0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar38._8_8_;
      if (auVar38._0_8_ == 0) {
        return auVar6 << 0x40;
      }
      if (extraout_x1 != 0) {
        lVar28 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_077d75b8);
        uVar13 = MergeEngine_ECS_Systems_Board_UnboxingSystem__GetInteractionAmountLeft(extraout_x1)
        ;
        if (*(long *)(lVar22 + 0x78) != 0) {
          lVar29 = *(long *)(lVar22 + 0x28);
          uVar17 = func_0x06603648(*(long *)(lVar22 + 0x78),0);
          puVar7 = PTR_DAT_078101c0;
          if (lVar28 != 0) {
            iVar32 = *(int *)(lVar28 + 0x30);
            iVar33 = *(int *)(lVar28 + 0x34);
            *(undefined8 *)(puVar12 + -0x148) = 0;
            func_0x05c6e674((float)iVar32,(float)iVar33,puVar12 + -0x148,0);
            uVar34 = *(undefined4 *)(puVar12 + -0x148);
            uVar35 = *(undefined4 *)(puVar12 + -0x144);
            uVar3 = *(undefined4 *)(extraout_x1 + 0x44);
            uVar27 = func_0x03280ca0(*(undefined8 *)puVar7);
            *(undefined8 *)(puVar12 + -0x150) = 0;
            *(undefined4 *)(puVar12 + -0x158) = 5;
            *(undefined8 *)(puVar12 + -0x160) = 0;
            func_0x06481578(uVar34,uVar35,extraout_d0,param_2,uVar27,uVar17,param_6,uVar3,uVar13,
                            plVar25,param_7,0);
            if (lVar29 != 0) {
              auVar38 = func_0x03ea4d6c(lVar29,uVar27,*(undefined8 *)PTR_DAT_078101c8);
              return auVar38;
            }
          }
        }
      }
    }
    auVar38 = func_0x03280cac();
    uVar23 = auVar38._8_8_;
    lVar22 = auVar38._0_8_;
    *(code **)(puVar12 + -0x180) =
         MergeEngine_ECS_Systems_Board_UnboxingSystem__GetInteractionAmountLeft;
    *(long **)(puVar12 + -0x170) = plVar25;
    *(long **)(puVar12 + -0x168) = param_7;
    if ((bRam0000000007e28d27 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774ee08);
      bRam0000000007e28d27 = 1;
      uVar23 = extraout_x1_00;
    }
    if (lVar22 != 0) {
      iVar32 = *(int *)(lVar22 + 0x38);
      if (iVar32 < 1) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar23;
        return auVar4 << 0x40;
      }
      iVar33 = *(int *)(lVar22 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar2 = iVar32 - iVar33;
      uVar1 = uVar2;
      if ((int)uVar2 < 1) {
        uVar1 = 0;
      }
      auVar36._4_4_ = 0;
      auVar36._0_4_ = uVar1;
      auVar36._8_4_ = uVar2;
      auVar36._12_4_ = 0;
      return auVar36;
    }
    uVar23 = func_0x03280cac();
  }
  else {
    if (*(char *)((long)param_4 + 0x33) == '\0') {
      return auVar38;
    }
    plVar25 = *(long **)(param_3 + 0x60);
    if (plVar25 == (long *)0x0) goto LAB_068881a0;
    lVar22 = *plVar25;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar14 = (undefined8 *)(lVar22 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
          goto LAB_0688800c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777a498,0x14);
LAB_0688800c:
    param_5 = (long *)puVar14[1];
    plVar15 = (long *)(*(code *)*puVar14)(plVar25,param_4);
    *(undefined1 *)((long)param_4 + 0x33) = 0;
    puVar7 = PTR_DAT_077d7700;
    if (*(long *)(param_3 + 0x58) == 0) goto LAB_068881a0;
    param_6 = (long *)0x0;
    func_0x06a03040(*(long *)(param_3 + 0x58),plVar15,param_4);
    plVar26 = *(long **)(param_3 + 0x28);
    plVar16 = (long *)func_0x03280ca0(*(undefined8 *)puVar7);
    param_5 = (long *)0x0;
    func_0x060f3ba8(plVar16,plVar15);
    puVar7 = PTR_DAT_077d75b8;
    plVar25 = plVar15;
    if (plVar26 == (long *)0x0) goto LAB_068881a0;
    param_5 = *(long **)PTR_DAT_077d7708;
    func_0x03ea4d6c(plVar26,plVar16);
    lVar22 = func_0x03ced81c(param_4,*(undefined8 *)puVar7);
    plVar30 = (long *)puVar7;
    if (lVar22 == 0) goto LAB_068881a0;
    plVar30 = *(long **)(lVar22 + 0x30);
    lVar22 = *(long *)(param_3 + 0x28);
    plVar16 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07800aa0);
    param_6 = (long *)0x0;
    param_5 = plVar30;
    func_0x0686cc8c(plVar16,0);
    plVar26 = (long *)0x0;
    if (lVar22 == 0) goto LAB_068881a0;
    param_5 = *(long **)PTR_DAT_07800a98;
    func_0x03ea4d6c(lVar22,plVar16);
    plVar26 = *(long **)(param_3 + 0x68);
    if (plVar26 == (long *)0x0) goto LAB_068881a0;
    lVar22 = *plVar26;
    param_4 = (long *)param_4[2];
    plVar30 = *(long **)PTR_DAT_07778fa0;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    plVar16 = *(long **)PTR_DAT_077ce978;
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e4a0) {
          puVar14 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_06888158;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_0777e4a0,0);
LAB_06888158:
    param_5 = plVar15;
    param_6 = param_4;
    param_7 = plVar16;
    uVar17 = (*(code *)*puVar14)(plVar26,plVar30);
    lVar22 = *(long *)(param_3 + 0x70);
    if (lVar22 == 0) goto LAB_068881a0;
SUB_068b94a0:
    uVar27 = 0;
    uVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e28edd & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_07807698);
      bRam0000000007e28edd = 1;
    }
    plVar16 = *(long **)(lVar22 + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar27 = *(undefined8 *)PTR_DAT_07807698;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9554;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9554:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar27,uVar17,0,0,lVar22);
      return auVar38;
    }
    auVar38 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x68b9590;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = uVar17;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    uVar17 = uVar20;
    if ((bRam0000000007e28ede & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_07811878);
      bRam0000000007e28ede = 1;
    }
    plVar16 = *(long **)(auVar38._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar17 = *(undefined8 *)PTR_DAT_07811878;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9644;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9644:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar38._8_8_,0,uVar20,lVar22);
      return auVar38;
    }
    auVar39 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0x68b9680;
    *(long **)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(long *)((long)register0x00000008 + -0x70) = auVar38._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar20;
    uVar20 = uVar17;
    if ((bRam0000000007e28edf & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_0776b160);
      bRam0000000007e28edf = 1;
    }
    plVar16 = *(long **)(auVar39._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar27 = *(undefined8 *)PTR_DAT_0776b160;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9734;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9734:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar27,auVar39._8_8_,0,uVar17,lVar22);
      return auVar38;
    }
    auVar38 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x68b9770;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(long *)((long)register0x00000008 + -0xa0) = auVar39._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar17;
    if ((bRam0000000007e28ee0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_07811880);
      bRam0000000007e28ee0 = 1;
    }
    plVar16 = *(long **)(auVar38._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar17 = *(undefined8 *)PTR_DAT_07811880;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9820;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9820:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar38._8_8_,0,0,lVar22);
      return auVar38;
    }
    auVar39 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x68b985c;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(long *)((long)register0x00000008 + -200) = auVar38._8_8_;
    if ((bRam0000000007e28ee1 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_07811888);
      bRam0000000007e28ee1 = 1;
    }
    plVar16 = *(long **)(auVar39._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar17 = *(undefined8 *)PTR_DAT_07811888;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b990c;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b990c:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar39._8_8_,0,0,lVar22);
      return auVar38;
    }
    auVar38 = func_0x03280cac();
    puVar14 = (undefined8 *)PTR_DAT_0777aa98;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0x68b9948;
    *(long **)((long)register0x00000008 + -0x120) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x118) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(long *)((long)register0x00000008 + -0xf8) = auVar39._8_8_;
    uVar21 = uVar20;
    uVar17 = uVar27;
    if ((bRam0000000007e28ee2 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777aa98);
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_07811888);
      bRam0000000007e28ee2 = 1;
    }
    lVar22 = func_0x03280ca0(*puVar14);
    func_0x06a30df4(lVar22,0);
    if (lVar22 != 0) {
      puVar14 = (undefined8 *)(lVar22 + 0x30);
      *puVar14 = uVar20;
      func_0x032809c4(puVar14,uVar20);
      *(undefined8 *)(lVar22 + 0x38) = uVar27;
      plVar16 = *(long **)(auVar38._0_8_ + 0x40);
      uVar27 = 0;
      if (plVar16 != (long *)0x0) {
        lVar28 = *plVar16;
        lVar29 = *(long *)PTR_DAT_07802f60;
        uVar17 = *(undefined8 *)PTR_DAT_07811888;
        uVar23 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)(lVar29 + 0x20)) {
              lVar28 = lVar28 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar29 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_068b9a48;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        lVar28 = func_0x03256b10(plVar16);
LAB_068b9a48:
        lVar28 = func_0x03280b88(*(undefined8 *)(lVar28 + 8),lVar29);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar38 = (**(code **)(lVar28 + 8))(plVar16,uVar17,auVar38._8_8_,0,lVar22,lVar28);
        return auVar38;
      }
    }
    auVar39 = func_0x03280cac();
    puVar7 = PTR_DAT_0777aa98;
    lVar28 = auVar39._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x170) = 0x68b9a88;
    *(undefined8 **)((long)register0x00000008 + -0x160) = puVar14;
    *(undefined8 *)((long)register0x00000008 + -0x158) = uVar20;
    *(long *)((long)register0x00000008 + -0x150) = auVar38._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar27;
    *(long *)((long)register0x00000008 + -0x140) = lVar22;
    *(long *)((long)register0x00000008 + -0x138) = auVar38._8_8_;
    if ((bRam0000000007e28ee3 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777aa98);
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_077c1e10);
      bRam0000000007e28ee3 = 1;
    }
    lVar22 = func_0x03280ca0(*(undefined8 *)puVar7);
    func_0x06a30df4(lVar22,0);
    if (lVar22 != 0) {
      *(undefined8 *)(lVar22 + 0x30) = uVar21;
      func_0x032809c4((undefined8 *)(lVar22 + 0x30),uVar21);
      *(undefined8 *)(lVar22 + 0x38) = uVar17;
      plVar16 = *(long **)(lVar28 + 0x40);
      uVar17 = 0;
      if (plVar16 != (long *)0x0) {
        lVar28 = *plVar16;
        lVar29 = *(long *)PTR_DAT_07802f60;
        uVar17 = *(undefined8 *)PTR_DAT_077c1e10;
        uVar23 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)(lVar29 + 0x20)) {
              lVar28 = lVar28 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar29 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_068b9b88;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        lVar28 = func_0x03256b10(plVar16);
LAB_068b9b88:
        lVar28 = func_0x03280b88(*(undefined8 *)(lVar28 + 8),lVar29);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar38 = (**(code **)(lVar28 + 8))(plVar16,uVar17,auVar39._8_8_,0,lVar22,lVar28);
        return auVar38;
      }
    }
    auVar38 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x68b9bc8;
    *(long *)((long)register0x00000008 + -400) = lVar28;
    *(undefined8 *)((long)register0x00000008 + -0x188) = uVar17;
    *(long *)((long)register0x00000008 + -0x180) = lVar22;
    *(long *)((long)register0x00000008 + -0x178) = auVar39._8_8_;
    if ((bRam0000000007e28ee4 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_077d7510);
      bRam0000000007e28ee4 = 1;
    }
    plVar16 = *(long **)(auVar38._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar17 = *(undefined8 *)PTR_DAT_077d7510;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9c78;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9c78:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar38._8_8_,0,0,lVar22);
      return auVar38;
    }
    auVar39 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x68b9cb4;
    *(long *)((long)register0x00000008 + -0x1c0) = lVar28;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(long *)((long)register0x00000008 + -0x1a8) = auVar38._8_8_;
    if ((bRam0000000007e28ee5 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_07811890);
      bRam0000000007e28ee5 = 1;
    }
    plVar16 = *(long **)(auVar39._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar17 = *(undefined8 *)PTR_DAT_07811890;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9d64;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9d64:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar39._8_8_,0,0,lVar22);
      return auVar38;
    }
    auVar38 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0x68b9da0;
    *(long *)((long)register0x00000008 + -0x1f0) = lVar28;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
    *(long *)((long)register0x00000008 + -0x1d8) = auVar39._8_8_;
    if ((bRam0000000007e28ee6 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ab08);
      func_0x03280a18(PTR_DAT_07811898);
      bRam0000000007e28ee6 = 1;
    }
    plVar16 = *(long **)(auVar38._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_0777ab08;
      uVar17 = *(undefined8 *)PTR_DAT_07811898;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9e50;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9e50:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar38._8_8_,0,lVar22);
      return auVar38;
    }
    auVar39 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0x68b9e88;
    *(long *)((long)register0x00000008 + -0x220) = lVar28;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
    *(long *)((long)register0x00000008 + -0x208) = auVar38._8_8_;
    if ((bRam0000000007e28ee7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07802f60);
      func_0x03280a18(PTR_DAT_078118a0);
      bRam0000000007e28ee7 = 1;
    }
    plVar16 = *(long **)(auVar39._0_8_ + 0x40);
    if (plVar16 != (long *)0x0) {
      lVar22 = *plVar16;
      lVar28 = *(long *)PTR_DAT_07802f60;
      uVar17 = *(undefined8 *)PTR_DAT_078118a0;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar28 + 0x20)) {
            lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar28 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_068b9f38;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      lVar22 = func_0x03256b10(plVar16);
LAB_068b9f38:
      lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar28);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (**(code **)(lVar22 + 8))(plVar16,uVar17,auVar39._8_8_,0,0,lVar22);
      return auVar38;
    }
    uVar23 = func_0x03280cac();
  }
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar23;
  return auVar37;
code_r0x06888418:
  plVar19 = (long *)0x0;
  lVar28 = func_0x06a02444(*(long *)(lVar22 + 0x50),uStack_c0);
  if (lVar28 != 0) {
    param_5 = (long *)func_0x03ced81c(lVar28,*(undefined8 *)puVar8);
    if (param_5 == (long *)0x0) {
LAB_06888534:
      func_0x03280cac();
    }
    else {
      if ((*(char *)((long)param_5 + 0x33) == '\0') || (1 < *(int *)((long)param_5 + 0x34) - 1U))
      goto LAB_06888400;
      *(int *)((long)param_5 + 0x3c) = *(int *)((long)param_5 + 0x3c) + 1;
      MergeEngine_ECS_Systems_Board_UnboxingSystem__NotifyAndTrackInteractionProgress
                (lVar22,param_5);
      if (plVar15 != (long *)0x0) {
        lVar29 = *plVar15;
        lVar28 = *(long *)puVar7;
        uVar23 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar28) {
              puVar14 = (undefined8 *)(lVar29 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_068884b8;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar15,lVar28,0);
LAB_068884b8:
        plVar19 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
        param_6 = *(long **)puVar11;
        param_7 = plVar25;
        param_2 = unaff_d9;
        MergeEngine_ECS_Systems_Board_UnboxingSystem__FireLiveOpsZoneUnboxedIfNeeded
                  (unaff_d8,lVar22,param_5);
        if ((int)param_5[7] <= *(int *)((long)param_5 + 0x3c)) {
          MergeEngine_ECS_Systems_Board_UnboxingSystem__UnboxItem(lVar22,param_5);
        }
        goto LAB_06888400;
      }
    }
    func_0x03280cac();
    plVar26 = param_5;
    plVar16 = (long *)puVar9;
    plVar30 = (long *)puVar10;
    unaff_x25 = puVar8;
    unaff_x26 = puVar7;
    unaff_x27 = puVar11;
    goto LAB_0688853c;
  }
  goto LAB_06888400;
code_r0x0688873c:
  plVar25 = (long *)0x0;
  lVar28 = func_0x06a02444(*(long *)(lVar22 + 0x50),*(undefined8 *)(puVar12 + -0x70));
  if (lVar28 != 0) {
    param_5 = (long *)func_0x03ced81c(lVar28,*(undefined8 *)unaff_x25);
    if (param_5 == (long *)0x0) {
LAB_06888864:
      func_0x03280cac();
      goto LAB_06888868;
    }
    if (((*(char *)((long)param_5 + 0x33) != '\0') && (*(int *)((long)param_5 + 0x34) == 3)) &&
       (*(uint *)(param_5 + 8) == uVar1)) {
      *(uint *)((long)param_5 + 0x3c) = *(int *)((long)param_5 + 0x3c) + uVar2;
      MergeEngine_ECS_Systems_Board_UnboxingSystem__NotifyAndTrackInteractionProgress
                (lVar22,param_5);
      if (plVar30 == (long *)0x0) goto LAB_0688886c;
      lVar28 = *plVar30;
      uVar23 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)unaff_x26) {
            puVar14 = (undefined8 *)(lVar28 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_068887e4;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar30,*(long *)unaff_x26,0);
LAB_068887e4:
      plVar25 = (long *)(*(code *)*puVar14)(plVar30,puVar14[1]);
      param_6 = *(long **)unaff_x27;
      param_7 = (long *)0x0;
      param_2 = unaff_d9;
      MergeEngine_ECS_Systems_Board_UnboxingSystem__FireLiveOpsZoneUnboxedIfNeeded
                (unaff_d8,lVar22,param_5);
      if ((int)param_5[7] <= *(int *)((long)param_5 + 0x3c)) {
        MergeEngine_ECS_Systems_Board_UnboxingSystem__UnboxItem(lVar22,param_5);
      }
    }
  }
  goto LAB_06888724;
}


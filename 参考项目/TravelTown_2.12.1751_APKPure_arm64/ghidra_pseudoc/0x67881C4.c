/* Ghidra 12.1.2 native pseudocode; RVA 0x67881C4; MergeEngine.ECS.Systems.Board.UnboxingSystem.ProcessItemConsumeUnboxing; status ok */


/* WARNING: Possible PIC construction at 0x06888464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068884e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06888790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688880c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06888b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06888810) */
/* WARNING: Removing unreachable block (ram,0x0688881c) */
/* WARNING: Removing unreachable block (ram,0x06888794) */
/* WARNING: Removing unreachable block (ram,0x06888798) */
/* WARNING: Removing unreachable block (ram,0x068887a8) */
/* WARNING: Removing unreachable block (ram,0x068887b0) */
/* WARNING: Removing unreachable block (ram,0x068887d8) */
/* WARNING: Removing unreachable block (ram,0x068887bc) */
/* WARNING: Removing unreachable block (ram,0x068887c8) */
/* WARNING: Removing unreachable block (ram,0x068887e4) */
/* WARNING: Removing unreachable block (ram,0x068884e4) */
/* WARNING: Removing unreachable block (ram,0x068884f0) */
/* WARNING: Removing unreachable block (ram,0x06888468) */
/* WARNING: Removing unreachable block (ram,0x0688846c) */
/* WARNING: Removing unreachable block (ram,0x0688847c) */
/* WARNING: Removing unreachable block (ram,0x06888484) */
/* WARNING: Removing unreachable block (ram,0x068884ac) */
/* WARNING: Removing unreachable block (ram,0x06888490) */
/* WARNING: Removing unreachable block (ram,0x0688849c) */
/* WARNING: Removing unreachable block (ram,0x068884b8) */
/* WARNING: Removing unreachable block (ram,0x06888b2c) */
/* WARNING: Removing unreachable block (ram,0x06888b34) */
/* WARNING: Removing unreachable block (ram,0x06888b4c) */
/* WARNING: Removing unreachable block (ram,0x06888bcc) */

undefined1  [16]
MergeEngine_ECS_Systems_Board_UnboxingSystem__ProcessItemConsumeUnboxing
          (long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined *unaff_x24;
  undefined *puVar24;
  undefined *unaff_x25;
  undefined *puVar25;
  undefined *unaff_x26;
  undefined *puVar26;
  undefined *unaff_x27;
  undefined *puVar27;
  ulong uVar28;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_150 [8];
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  puVar22 = (undefined8 *)0x7e28000;
  plVar15 = param_3;
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
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  func_0x05c6e674((float)(int)param_3,(float)(int)((ulong)param_3 >> 0x20),&uStack_a8,0);
  puVar25 = PTR_DAT_078101e0;
  puVar26 = PTR_DAT_0774f768;
  uVar28 = uStack_a8 & 0xffffffff;
  uVar19 = uStack_a8 >> 0x20;
  plVar11 = (long *)0x0;
  if (param_4 != 0) {
    lVar8 = *(long *)PTR_DAT_078101e0;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar8 = *(long *)puVar25;
    }
    puVar24 = PTR_DAT_077e69d8;
    unaff_x27 = PTR_DAT_0774eab0;
    puVar22 = *(undefined8 **)puVar26;
    unaff_x24 = *(undefined **)(*(long *)(lVar8 + 0xb8) + 8);
    if (unaff_x24 == (undefined *)0x0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar8 = *(long *)puVar25;
      }
      unaff_x25 = (undefined *)**(undefined8 **)(lVar8 + 0xb8);
      unaff_x24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e69e0);
      func_0x053569b8(unaff_x24,unaff_x25,*(undefined8 *)PTR_DAT_078101d8,0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar25 + 0xb8) + 8);
      *puVar9 = unaff_x24;
      func_0x032809c4(puVar9,unaff_x24);
    }
    uVar10 = func_0x03d50a94(param_4,unaff_x24,*(undefined8 *)puVar24);
    uVar10 = func_0x03d5b8d8(uVar10,*(undefined8 *)unaff_x27);
    plVar15 = (long *)0x0;
    plVar11 = (long *)func_0x055f8748(puVar22,uVar10);
    unaff_x26 = puVar25;
  }
  plVar14 = param_3;
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_0688853c:
    puVar27 = unaff_x27;
    puVar26 = unaff_x26;
    puVar25 = unaff_x25;
    puVar24 = unaff_x24;
    puVar9 = puVar22;
    auVar29 = func_0x03280cac();
    uVar10 = auVar29._0_8_;
    param_3 = plVar15;
    if (auVar29._8_4_ == 1) {
      plVar13 = (long *)func_0x072ce910(uVar10);
      lVar8 = *plVar13;
      func_0x072ce920();
      auVar32 = func_0x05108f58(&uStack_90,*puVar9);
      if (lVar8 == 0) {
        return auVar32;
      }
      func_0x03280ca4(lVar8);
      param_3 = plVar15;
    }
    func_0x05108f58(&uStack_90,*puVar9);
    func_0x03365958(uVar10);
    func_0x03280ca4(0);
    auVar32 = func_0x02f09514();
    param_1 = auVar32._0_8_;
    puVar7 = auStack_150;
    uStack_100 = 0x68885c8;
    uStack_c0 = 0;
    plVar13 = (long *)0x7e28000;
    plVar15 = param_3;
    uStack_110 = uVar19;
    uStack_108 = uVar28;
    puStack_f8 = puVar27;
    puStack_f0 = puVar26;
    puStack_e8 = puVar25;
    puStack_e0 = puVar24;
    puStack_d8 = puVar9;
    plStack_d0 = plVar14;
    plStack_c8 = plVar11;
    uStack_b8 = uVar10;
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
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    plVar11 = param_3;
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar15 = (long *)0x0;
      auVar33 = func_0x06a02444(*(long *)(param_1 + 0x50),param_3);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = auVar33._8_8_;
      if (auVar33._0_8_ == 0) {
        return auVar34 << 0x40;
      }
      lVar8 = *(long *)(auVar33._0_8_ + 0x10);
      if (lVar8 != 0) {
        auVar34 = func_0x03d20d84(lVar8,*(undefined8 *)PTR_DAT_077d7770);
        lVar8 = auVar34._0_8_;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = auVar34._8_8_;
        if (lVar8 == 0) {
          return auVar33 << 0x40;
        }
        uVar1 = *(uint *)(lVar8 + 0x48);
        plVar13 = (long *)(ulong)uVar1;
        uVar2 = *(uint *)(lVar8 + 0x4c);
        puVar9 = (undefined8 *)(ulong)uVar2;
        uStack_148 = 0;
        func_0x05c6e674((float)(int)param_3,(float)(int)((ulong)param_3 >> 0x20),&uStack_148,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar28 = uStack_148 & 0xffffffff;
          uVar19 = uStack_148 >> 0x20;
          plVar15 = (long *)0x0;
          lVar8 = func_0x06a02524(*(long *)(param_1 + 0x50),param_3,0,0);
          if (lVar8 != 0) {
            func_0x040cf800(&uStack_148,lVar8,*(undefined8 *)PTR_DAT_078101b8);
            puVar27 = PTR_DAT_078101f0;
            puVar24 = PTR_DAT_078101a8;
            puVar25 = PTR_DAT_0777e638;
            puVar26 = PTR_DAT_07779820;
            uStack_128 = uStack_140;
            uStack_130 = uStack_148;
            uStack_120 = uStack_138;
            do {
              do {
                uVar12 = func_0x05108f5c(&uStack_130,*(undefined8 *)puVar24);
                if ((uVar12 & 1) == 0) {
                  auVar32 = func_0x05108f58(&uStack_130,*(undefined8 *)PTR_DAT_078101a0);
                  return auVar32;
                }
                if (*(long *)(param_1 + 0x50) == 0) {
                  func_0x03280cac();
LAB_06888864:
                  func_0x03280cac();
                  plVar11 = param_3;
                  goto LAB_06888868;
                }
                plVar15 = (long *)0x0;
                lVar8 = func_0x06a02444(*(long *)(param_1 + 0x50),uStack_120);
              } while (lVar8 == 0);
              param_3 = (long *)func_0x03ced81c(lVar8,*(undefined8 *)puVar25);
              if (param_3 == (long *)0x0) goto LAB_06888864;
            } while (((*(char *)((long)param_3 + 0x33) == '\0') ||
                     (*(int *)((long)param_3 + 0x34) != 3)) || (*(uint *)(param_3 + 8) != uVar1));
            *(uint *)((long)param_3 + 0x3c) = *(int *)((long)param_3 + 0x3c) + uVar2;
            uVar10 = 0x6888794;
            puVar7 = auStack_150;
            plVar11 = param_3;
            goto SUB_06888908;
          }
        }
      }
    }
LAB_06888868:
    func_0x03280cac();
    auVar29 = func_0x03280cac();
    uVar21 = auVar29._0_8_;
    if (auVar29._8_4_ == 1) {
      plVar14 = (long *)func_0x072ce910(uVar21);
      lVar8 = *plVar14;
      func_0x072ce920();
      auVar32 = func_0x05108f58(&uStack_130,*(undefined8 *)PTR_DAT_078101a0);
      if (lVar8 == 0) {
        return auVar32;
      }
      func_0x03280ca4(lVar8);
    }
    param_1 = 0;
    func_0x05108f58(&uStack_130,*(undefined8 *)PTR_DAT_078101a0);
    func_0x03365958(uVar21);
    func_0x03280ca4(0);
    uVar10 = 0x6888908;
    auVar34 = func_0x02f09514();
    param_3 = auVar34._8_8_;
    auVar32._8_8_ = uVar21;
    auVar32._0_8_ = auVar34._0_8_;
  }
  else {
    plVar15 = (long *)0x0;
    lVar8 = func_0x06a02524(*(long *)(param_1 + 0x50),param_3,0,0);
    puVar27 = PTR_DAT_078101e8;
    puVar24 = PTR_DAT_078101a8;
    puVar9 = (undefined8 *)PTR_DAT_078101a0;
    puVar25 = PTR_DAT_0777e638;
    puVar26 = PTR_DAT_07779820;
    if (lVar8 == 0) goto LAB_0688853c;
    func_0x040cf800(&uStack_a8,lVar8,*(undefined8 *)PTR_DAT_078101b8);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    uStack_80 = uStack_98;
    do {
      do {
        uVar12 = func_0x05108f5c(&uStack_90,*(undefined8 *)puVar24);
        if ((uVar12 & 1) == 0) {
          auVar32 = func_0x05108f58(&uStack_90,*puVar9);
          return auVar32;
        }
        if (*(long *)(param_1 + 0x50) == 0) {
          func_0x03280cac();
LAB_06888534:
          func_0x03280cac();
          func_0x03280cac();
          plVar14 = param_3;
          puVar22 = puVar9;
          unaff_x24 = puVar24;
          unaff_x25 = puVar25;
          unaff_x26 = puVar26;
          unaff_x27 = puVar27;
          goto LAB_0688853c;
        }
        plVar15 = (long *)0x0;
        lVar8 = func_0x06a02444(*(long *)(param_1 + 0x50),uStack_80);
      } while (lVar8 == 0);
      param_3 = (long *)func_0x03ced81c(lVar8,*(undefined8 *)puVar25);
      if (param_3 == (long *)0x0) goto LAB_06888534;
    } while ((*(char *)((long)param_3 + 0x33) == '\0') || (1 < *(int *)((long)param_3 + 0x34) - 1U))
    ;
    *(int *)((long)param_3 + 0x3c) = *(int *)((long)param_3 + 0x3c) + 1;
    uVar10 = 0x6888468;
    puVar7 = auStack_b0;
    plVar13 = param_3;
  }
SUB_06888908:
  lVar8 = auVar32._0_8_;
  *(undefined8 *)(puVar7 + -0x30) = uVar10;
  *(undefined8 **)(puVar7 + -0x28) = puVar9;
  *(long **)(puVar7 + -0x20) = plVar13;
  *(long **)(puVar7 + -0x18) = plVar11;
  *(long *)(puVar7 + -0x10) = param_1;
  *(long *)(puVar7 + -8) = auVar32._8_8_;
  if ((bRam0000000007e28d25 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d25 = 1;
  }
  plVar11 = *(long **)(lVar8 + 0x80);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar22 = (undefined8 *)(lVar18 + (long)(*piVar20 + 0x14) * 0x10 + 0x138);
          goto LAB_068889b4;
        }
        uVar12 = uVar12 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar12 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0x14);
LAB_068889b4:
    plVar15 = (long *)puVar22[1];
    plVar14 = (long *)(*(code *)*puVar22)(plVar11,param_3);
    if ((param_3 != (long *)0x0) && (plVar13 = *(long **)(lVar8 + 0x68), plVar13 != (long *)0x0)) {
      lVar18 = *plVar13;
      param_3 = (long *)param_3[2];
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      puVar9 = *(undefined8 **)PTR_DAT_07778fa0;
      if (uVar12 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar22 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06888a38;
          }
          uVar12 = uVar12 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar12 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777e4a0,0);
LAB_06888a38:
      param_5 = 0;
      plVar15 = plVar14;
      uVar10 = (*(code *)*puVar22)(plVar13,puVar9,plVar14,param_3,0,puVar22[1]);
      lVar18 = *(long *)(lVar8 + 0x70);
      plVar11 = plVar14;
      if (lVar18 != 0) {
        uVar16 = 0;
        uVar17 = 0;
        uVar21 = *(undefined8 *)(puVar7 + -0x28);
        *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
        *(undefined8 *)(puVar7 + -0x28) = uVar21;
        *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        if ((bRam0000000007e28edd & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07807698);
          bRam0000000007e28edd = 1;
        }
        plVar15 = *(long **)(lVar18 + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar21 = *(undefined8 *)PTR_DAT_07807698;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9554;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9554:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar21,uVar10,0,0,lVar8);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0x60) = 0x68b9590;
        *(undefined8 *)(puVar7 + -0x58) = uVar21;
        *(undefined8 *)(puVar7 + -0x50) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x48) = 0;
        *(undefined8 *)(puVar7 + -0x40) = uVar10;
        *(undefined8 *)(puVar7 + -0x38) = 0;
        uVar10 = uVar16;
        if ((bRam0000000007e28ede & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811878);
          bRam0000000007e28ede = 1;
        }
        plVar15 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar10 = *(undefined8 *)PTR_DAT_07811878;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9644;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9644:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar32._8_8_,0,uVar16,lVar8);
          return auVar32;
        }
        auVar34 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0x90) = 0x68b9680;
        *(undefined8 *)(puVar7 + -0x88) = uVar21;
        *(undefined8 *)(puVar7 + -0x80) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x78) = 0;
        *(long *)(puVar7 + -0x70) = auVar32._8_8_;
        *(undefined8 *)(puVar7 + -0x68) = uVar16;
        uVar16 = uVar10;
        if ((bRam0000000007e28edf & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_0776b160);
          bRam0000000007e28edf = 1;
        }
        plVar15 = *(long **)(auVar34._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar21 = *(undefined8 *)PTR_DAT_0776b160;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9734;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9734:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar21,auVar34._8_8_,0,uVar10,lVar8);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0xc0) = 0x68b9770;
        *(undefined8 *)(puVar7 + -0xb0) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0xa8) = 0;
        *(long *)(puVar7 + -0xa0) = auVar34._8_8_;
        *(undefined8 *)(puVar7 + -0x98) = uVar10;
        if ((bRam0000000007e28ee0 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811880);
          bRam0000000007e28ee0 = 1;
        }
        plVar15 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar10 = *(undefined8 *)PTR_DAT_07811880;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9820;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9820:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar32._8_8_,0,0,lVar8);
          return auVar32;
        }
        auVar34 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0xf0) = 0x68b985c;
        *(undefined8 *)(puVar7 + -0xe0) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0xd8) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0xd0) = 0;
        *(long *)(puVar7 + -200) = auVar32._8_8_;
        if ((bRam0000000007e28ee1 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee1 = 1;
        }
        plVar15 = *(long **)(auVar34._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar10 = *(undefined8 *)PTR_DAT_07811888;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b990c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b990c:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar34._8_8_,0,0,lVar8);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        puVar22 = (undefined8 *)PTR_DAT_0777aa98;
        *(undefined8 *)(puVar7 + -0x130) = 0x68b9948;
        *(undefined **)(puVar7 + -0x120) = puVar24;
        *(undefined8 *)(puVar7 + -0x118) = uVar21;
        *(undefined8 *)(puVar7 + -0x110) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x108) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x100) = 0;
        *(long *)(puVar7 + -0xf8) = auVar34._8_8_;
        uVar21 = uVar16;
        uVar10 = uVar17;
        if ((bRam0000000007e28ee2 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee2 = 1;
        }
        lVar8 = func_0x03280ca0(*puVar22);
        func_0x06a30df4(lVar8,0);
        if (lVar8 != 0) {
          puVar22 = (undefined8 *)(lVar8 + 0x30);
          *puVar22 = uVar16;
          func_0x032809c4(puVar22,uVar16);
          *(undefined8 *)(lVar8 + 0x38) = uVar17;
          plVar15 = *(long **)(auVar32._0_8_ + 0x40);
          uVar17 = 0;
          if (plVar15 != (long *)0x0) {
            lVar18 = *plVar15;
            lVar23 = *(long *)PTR_DAT_07802f60;
            uVar10 = *(undefined8 *)PTR_DAT_07811888;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)(lVar23 + 0x20)) {
                  lVar18 = lVar18 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9a48;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            lVar18 = func_0x03256b10(plVar15);
LAB_068b9a48:
            lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar32 = (**(code **)(lVar18 + 8))(plVar15,uVar10,auVar32._8_8_,0,lVar8,lVar18);
            return auVar32;
          }
        }
        auVar34 = func_0x03280cac();
        puVar26 = PTR_DAT_0777aa98;
        lVar18 = auVar34._0_8_;
        *(undefined8 *)(puVar7 + -0x170) = 0x68b9a88;
        *(undefined8 **)(puVar7 + -0x160) = puVar22;
        *(undefined8 *)(puVar7 + -0x158) = uVar16;
        *(long *)(puVar7 + -0x150) = auVar32._0_8_;
        *(undefined8 *)(puVar7 + -0x148) = uVar17;
        *(long *)(puVar7 + -0x140) = lVar8;
        *(long *)(puVar7 + -0x138) = auVar32._8_8_;
        if ((bRam0000000007e28ee3 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077c1e10);
          bRam0000000007e28ee3 = 1;
        }
        lVar8 = func_0x03280ca0(*(undefined8 *)puVar26);
        func_0x06a30df4(lVar8,0);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x30) = uVar21;
          func_0x032809c4((undefined8 *)(lVar8 + 0x30),uVar21);
          *(undefined8 *)(lVar8 + 0x38) = uVar10;
          plVar15 = *(long **)(lVar18 + 0x40);
          uVar10 = 0;
          if (plVar15 != (long *)0x0) {
            lVar18 = *plVar15;
            lVar23 = *(long *)PTR_DAT_07802f60;
            uVar10 = *(undefined8 *)PTR_DAT_077c1e10;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)(lVar23 + 0x20)) {
                  lVar18 = lVar18 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9b88;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            lVar18 = func_0x03256b10(plVar15);
LAB_068b9b88:
            lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar32 = (**(code **)(lVar18 + 8))(plVar15,uVar10,auVar34._8_8_,0,lVar8,lVar18);
            return auVar32;
          }
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0x1a0) = 0x68b9bc8;
        *(long *)(puVar7 + -400) = lVar18;
        *(undefined8 *)(puVar7 + -0x188) = uVar10;
        *(long *)(puVar7 + -0x180) = lVar8;
        *(long *)(puVar7 + -0x178) = auVar34._8_8_;
        if ((bRam0000000007e28ee4 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077d7510);
          bRam0000000007e28ee4 = 1;
        }
        plVar15 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar10 = *(undefined8 *)PTR_DAT_077d7510;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9c78;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9c78:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar32._8_8_,0,0,lVar8);
          return auVar32;
        }
        auVar34 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0x1d0) = 0x68b9cb4;
        *(long *)(puVar7 + -0x1c0) = lVar18;
        *(undefined8 *)(puVar7 + -0x1b8) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x1b0) = 0;
        *(long *)(puVar7 + -0x1a8) = auVar32._8_8_;
        if ((bRam0000000007e28ee5 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811890);
          bRam0000000007e28ee5 = 1;
        }
        plVar15 = *(long **)(auVar34._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar10 = *(undefined8 *)PTR_DAT_07811890;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9d64;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9d64:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar34._8_8_,0,0,lVar8);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0x200) = 0x68b9da0;
        *(long *)(puVar7 + -0x1f0) = lVar18;
        *(undefined8 *)(puVar7 + -0x1e8) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x1e0) = 0;
        *(long *)(puVar7 + -0x1d8) = auVar34._8_8_;
        if ((bRam0000000007e28ee6 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ab08);
          func_0x03280a18(PTR_DAT_07811898);
          bRam0000000007e28ee6 = 1;
        }
        plVar15 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_0777ab08;
          uVar10 = *(undefined8 *)PTR_DAT_07811898;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9e50;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9e50:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar32._8_8_,0,lVar8);
          return auVar32;
        }
        auVar34 = func_0x03280cac();
        *(undefined8 *)(puVar7 + -0x230) = 0x68b9e88;
        *(long *)(puVar7 + -0x220) = lVar18;
        *(undefined8 *)(puVar7 + -0x218) = 0x7e28000;
        *(undefined8 *)(puVar7 + -0x210) = 0;
        *(long *)(puVar7 + -0x208) = auVar32._8_8_;
        if ((bRam0000000007e28ee7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_078118a0);
          bRam0000000007e28ee7 = 1;
        }
        plVar15 = *(long **)(auVar34._0_8_ + 0x40);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          lVar18 = *(long *)PTR_DAT_07802f60;
          uVar10 = *(undefined8 *)PTR_DAT_078118a0;
          uVar19 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9f38;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          lVar8 = func_0x03256b10(plVar15);
LAB_068b9f38:
          lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar8 + 8))(plVar15,uVar10,auVar34._8_8_,0,0,lVar8);
          return auVar32;
        }
        uVar19 = func_0x03280cac();
        goto SUB_057da5fc;
      }
    }
  }
  auVar32 = func_0x03280cac();
  lVar18 = auVar32._8_8_;
  *(undefined8 *)(puVar7 + -0xa0) = unaff_d11;
  *(undefined8 *)(puVar7 + -0x98) = unaff_d10;
  *(ulong *)(puVar7 + -0x90) = uVar19;
  *(ulong *)(puVar7 + -0x88) = uVar28;
  *(undefined8 *)(puVar7 + -0x80) = 0x6888a80;
  *(undefined **)(puVar7 + -0x78) = puVar27;
  *(undefined **)(puVar7 + -0x70) = puVar26;
  *(undefined **)(puVar7 + -0x68) = puVar25;
  *(undefined **)(puVar7 + -0x60) = puVar24;
  *(undefined8 **)(puVar7 + -0x58) = puVar9;
  *(long **)(puVar7 + -0x50) = plVar13;
  *(long **)(puVar7 + -0x48) = plVar11;
  *(long **)(puVar7 + -0x40) = param_3;
  *(long *)(puVar7 + -0x38) = lVar8;
  if ((bRam0000000007e28d26 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_078101c0);
    func_0x03280a18(PTR_DAT_078101c8);
    bRam0000000007e28d26 = 1;
  }
  lVar8 = *(long *)(auVar32._0_8_ + 0x78);
  if (lVar8 == 0) {
LAB_06888c08:
    uVar10 = 0x6888c0c;
    auVar35 = func_0x03280cac();
  }
  else {
    auVar32 = func_0x06603648(lVar8,0);
    if (auVar32._0_8_ == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar32._8_8_;
      return auVar6 << 0x40;
    }
    if (lVar18 == 0) goto LAB_06888c08;
    func_0x03ced81c(lVar18,*(undefined8 *)PTR_DAT_077d75b8);
    auVar35._8_8_ = extraout_x1;
    auVar35._0_8_ = lVar18;
    uVar10 = 0x6888b2c;
  }
  uVar19 = auVar35._8_8_;
  lVar8 = auVar35._0_8_;
  *(undefined8 *)(puVar7 + -0xe0) = uVar10;
  *(long **)(puVar7 + -0xd0) = plVar15;
  *(undefined8 *)(puVar7 + -200) = param_5;
  if ((bRam0000000007e28d27 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d27 = 1;
    uVar19 = extraout_x1_00;
  }
  if (lVar8 != 0) {
    iVar3 = *(int *)(lVar8 + 0x38);
    if (0 < iVar3) {
      iVar4 = *(int *)(lVar8 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar2 = iVar3 - iVar4;
      uVar1 = uVar2;
      if ((int)uVar2 < 1) {
        uVar1 = 0;
      }
      auVar30._4_4_ = 0;
      auVar30._0_4_ = uVar1;
      auVar30._8_4_ = uVar2;
      auVar30._12_4_ = 0;
      return auVar30;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar19;
    return auVar5 << 0x40;
  }
  uVar19 = func_0x03280cac();
SUB_057da5fc:
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar19;
  return auVar31;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x67881A4; MergeEngine.ECS.Systems.Board.UnboxingSystem.ItemInteracted; status ok */


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
MergeEngine_ECS_Systems_Board_UnboxingSystem__ItemInteracted
          (long param_1,undefined8 param_2,long *param_3,int param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int *piVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar23;
  undefined8 *unaff_x23;
  long lVar24;
  undefined *unaff_x24;
  undefined *puVar25;
  undefined *unaff_x25;
  undefined *puVar26;
  undefined *unaff_x26;
  undefined *puVar27;
  undefined *unaff_x27;
  undefined *puVar28;
  undefined8 unaff_x30;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  puVar25 = unaff_x24;
  puVar26 = unaff_x25;
  if (param_4 == 1) {
LAB_068885c8:
    param_1 = auVar32._0_8_;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x38) = puVar26;
    *(undefined **)((long)register0x00000008 + -0x30) = puVar25;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    plVar15 = (long *)0x7e28000;
    plVar19 = param_3;
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
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    unaff_x21 = param_3;
    puVar11 = unaff_x23;
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar19 = (long *)0x0;
      auVar33 = func_0x06a02444(*(long *)(param_1 + 0x50),param_3);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._8_8_;
      if (auVar33._0_8_ == 0) {
        return auVar7 << 0x40;
      }
      lVar13 = *(long *)(auVar33._0_8_ + 0x10);
      if (lVar13 != 0) {
        auVar33 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_077d7770);
        lVar13 = auVar33._0_8_;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = auVar33._8_8_;
        if (lVar13 == 0) {
          return auVar8 << 0x40;
        }
        uVar1 = *(uint *)(lVar13 + 0x48);
        plVar15 = (long *)(ulong)uVar1;
        uVar2 = *(uint *)(lVar13 + 0x4c);
        puVar11 = (undefined8 *)(ulong)uVar2;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        func_0x05c6e674((float)(int)param_3,(float)(int)((ulong)param_3 >> 0x20),
                        (undefined1 *)((long)register0x00000008 + -0x98),0);
        if (*(long *)(param_1 + 0x50) != 0) {
          unaff_d8 = (ulong)*(uint *)((long)register0x00000008 + -0x98);
          unaff_d9 = (ulong)*(uint *)((long)register0x00000008 + -0x94);
          plVar19 = (long *)0x0;
          lVar13 = func_0x06a02524(*(long *)(param_1 + 0x50),param_3,0,0);
          if (lVar13 != 0) {
            func_0x040cf800((undefined1 *)((long)register0x00000008 + -0x98),lVar13,
                            *(undefined8 *)PTR_DAT_078101b8);
            unaff_x27 = PTR_DAT_078101f0;
            puVar25 = PTR_DAT_078101a8;
            puVar26 = PTR_DAT_0777e638;
            unaff_x26 = PTR_DAT_07779820;
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x90);
            *(undefined8 *)((long)register0x00000008 + -0x80) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)((long)register0x00000008 + -0x88);
            do {
              do {
                uVar14 = func_0x05108f5c((undefined1 *)((long)register0x00000008 + -0x80),
                                         *(undefined8 *)puVar25);
                if ((uVar14 & 1) == 0) {
                  auVar32 = func_0x05108f58((undefined1 *)((long)register0x00000008 + -0x80),
                                            *(undefined8 *)PTR_DAT_078101a0);
                  return auVar32;
                }
                if (*(long *)(param_1 + 0x50) == 0) {
                  func_0x03280cac();
LAB_06888864:
                  func_0x03280cac();
                  unaff_x21 = param_3;
                  goto LAB_06888868;
                }
                plVar19 = (long *)0x0;
                lVar13 = func_0x06a02444(*(long *)(param_1 + 0x50),
                                         *(undefined8 *)((long)register0x00000008 + -0x70));
              } while (lVar13 == 0);
              param_3 = (long *)func_0x03ced81c(lVar13,*(undefined8 *)puVar26);
              if (param_3 == (long *)0x0) goto LAB_06888864;
            } while (((*(char *)((long)param_3 + 0x33) == '\0') ||
                     (*(int *)((long)param_3 + 0x34) != 3)) || (*(uint *)(param_3 + 8) != uVar1));
            *(uint *)((long)param_3 + 0x3c) = *(int *)((long)param_3 + 0x3c) + uVar2;
            uVar12 = 0x6888794;
            puVar9 = (undefined1 *)((long)register0x00000008 + -0xa0);
            unaff_x21 = param_3;
            goto SUB_06888908;
          }
        }
      }
    }
LAB_06888868:
    func_0x03280cac();
    auVar29 = func_0x03280cac();
    uVar23 = auVar29._0_8_;
    if (auVar29._8_4_ == 1) {
      plVar16 = (long *)func_0x072ce910(uVar23);
      lVar13 = *plVar16;
      func_0x072ce920();
      auVar32 = func_0x05108f58((undefined1 *)((long)register0x00000008 + -0x80),
                                *(undefined8 *)PTR_DAT_078101a0);
      if (lVar13 == 0) {
        return auVar32;
      }
      func_0x03280ca4(lVar13);
    }
    param_1 = 0;
    func_0x05108f58((undefined1 *)((long)register0x00000008 + -0x80),*(undefined8 *)PTR_DAT_078101a0
                   );
    func_0x03365958(uVar23);
    func_0x03280ca4(0);
    uVar12 = 0x6888908;
    auVar33 = func_0x02f09514();
    param_3 = auVar33._8_8_;
    auVar32._8_8_ = uVar23;
    auVar32._0_8_ = auVar33._0_8_;
  }
  else {
    if (param_4 != 2) {
      auVar33._8_8_ = param_2;
      auVar33._0_8_ = param_1;
      return auVar33;
    }
    unaff_x23 = (undefined8 *)0x7e28000;
    plVar19 = param_3;
    lVar13 = param_5;
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
    unaff_d8 = uStack_a8 & 0xffffffff;
    unaff_d9 = uStack_a8 >> 0x20;
    unaff_x21 = (long *)0x0;
    puVar27 = unaff_x26;
    puVar28 = unaff_x27;
    if (param_5 != 0) {
      lVar10 = *(long *)PTR_DAT_078101e0;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar25;
      }
      puVar27 = PTR_DAT_077e69d8;
      puVar28 = PTR_DAT_0774eab0;
      unaff_x23 = *(undefined8 **)puVar26;
      unaff_x24 = *(undefined **)(*(long *)(lVar10 + 0xb8) + 8);
      if (unaff_x24 == (undefined *)0x0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar10 = *(long *)puVar25;
        }
        unaff_x25 = (undefined *)**(undefined8 **)(lVar10 + 0xb8);
        unaff_x24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e69e0);
        func_0x053569b8(unaff_x24,unaff_x25,*(undefined8 *)PTR_DAT_078101d8,0);
        puVar11 = (undefined8 *)(*(long *)(*(long *)puVar25 + 0xb8) + 8);
        *puVar11 = unaff_x24;
        func_0x032809c4(puVar11,unaff_x24);
      }
      uVar12 = func_0x03d50a94(param_5,unaff_x24,*(undefined8 *)puVar27);
      uVar12 = func_0x03d5b8d8(uVar12,*(undefined8 *)puVar28);
      plVar19 = (long *)0x0;
      unaff_x21 = (long *)func_0x055f8748(unaff_x23,uVar12);
      puVar27 = puVar25;
    }
    param_5 = lVar13;
    unaff_x22 = param_3;
    if (*(long *)(param_1 + 0x50) == 0) {
LAB_0688853c:
      auVar29 = func_0x03280cac();
      unaff_x19 = auVar29._0_8_;
      param_3 = plVar19;
      if (auVar29._8_4_ == 1) {
        plVar15 = (long *)func_0x072ce910(unaff_x19);
        lVar13 = *plVar15;
        func_0x072ce920();
        auVar32 = func_0x05108f58(&uStack_90,*unaff_x23);
        if (lVar13 == 0) {
          return auVar32;
        }
        func_0x03280ca4(lVar13);
        param_3 = plVar19;
      }
      unaff_x20 = 0;
      func_0x05108f58(&uStack_90,*unaff_x23);
      func_0x03365958(unaff_x19);
      func_0x03280ca4(0);
      unaff_x30 = 0x68885c8;
      auVar32 = func_0x02f09514();
      register0x00000008 = (BADSPACEBASE *)auStack_b0;
      puVar25 = unaff_x24;
      puVar26 = unaff_x25;
      unaff_x26 = puVar27;
      unaff_x27 = puVar28;
      goto LAB_068885c8;
    }
    plVar19 = (long *)0x0;
    lVar13 = func_0x06a02524(*(long *)(param_1 + 0x50),param_3,0,0);
    unaff_x27 = PTR_DAT_078101e8;
    puVar25 = PTR_DAT_078101a8;
    puVar11 = (undefined8 *)PTR_DAT_078101a0;
    puVar26 = PTR_DAT_0777e638;
    unaff_x26 = PTR_DAT_07779820;
    if (lVar13 == 0) goto LAB_0688853c;
    func_0x040cf800(&uStack_a8,lVar13,*(undefined8 *)PTR_DAT_078101b8);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    uStack_80 = uStack_98;
    do {
      do {
        uVar14 = func_0x05108f5c(&uStack_90,*(undefined8 *)puVar25);
        if ((uVar14 & 1) == 0) {
          auVar32 = func_0x05108f58(&uStack_90,*puVar11);
          return auVar32;
        }
        if (*(long *)(param_1 + 0x50) == 0) {
          func_0x03280cac();
LAB_06888534:
          func_0x03280cac();
          func_0x03280cac();
          unaff_x22 = param_3;
          unaff_x23 = puVar11;
          unaff_x24 = puVar25;
          unaff_x25 = puVar26;
          puVar27 = unaff_x26;
          puVar28 = unaff_x27;
          goto LAB_0688853c;
        }
        plVar19 = (long *)0x0;
        lVar13 = func_0x06a02444(*(long *)(param_1 + 0x50),uStack_80);
      } while (lVar13 == 0);
      param_3 = (long *)func_0x03ced81c(lVar13,*(undefined8 *)puVar26);
      if (param_3 == (long *)0x0) goto LAB_06888534;
    } while ((*(char *)((long)param_3 + 0x33) == '\0') || (1 < *(int *)((long)param_3 + 0x34) - 1U))
    ;
    *(int *)((long)param_3 + 0x3c) = *(int *)((long)param_3 + 0x3c) + 1;
    uVar12 = 0x6888468;
    puVar9 = auStack_b0;
    plVar15 = param_3;
  }
SUB_06888908:
  lVar13 = auVar32._0_8_;
  *(undefined8 *)(puVar9 + -0x30) = uVar12;
  *(undefined8 **)(puVar9 + -0x28) = puVar11;
  *(long **)(puVar9 + -0x20) = plVar15;
  *(long **)(puVar9 + -0x18) = unaff_x21;
  *(long *)(puVar9 + -0x10) = param_1;
  *(long *)(puVar9 + -8) = auVar32._8_8_;
  if ((bRam0000000007e28d25 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d25 = 1;
  }
  plVar16 = *(long **)(lVar13 + 0x80);
  if (plVar16 != (long *)0x0) {
    lVar10 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar17 = (undefined8 *)(lVar10 + (long)(*piVar22 + 0x14) * 0x10 + 0x138);
          goto LAB_068889b4;
        }
        uVar14 = uVar14 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar14 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0777a498,0x14);
LAB_068889b4:
    plVar19 = (long *)puVar17[1];
    plVar18 = (long *)(*(code *)*puVar17)(plVar16,param_3);
    if ((param_3 != (long *)0x0) && (plVar15 = *(long **)(lVar13 + 0x68), plVar15 != (long *)0x0)) {
      lVar10 = *plVar15;
      param_3 = (long *)param_3[2];
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
      puVar11 = *(undefined8 **)PTR_DAT_07778fa0;
      if (uVar14 != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06888a38;
          }
          uVar14 = uVar14 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
LAB_06888a38:
      param_5 = 0;
      plVar19 = plVar18;
      uVar12 = (*(code *)*puVar17)(plVar15,puVar11,plVar18,param_3,0,puVar17[1]);
      lVar10 = *(long *)(lVar13 + 0x70);
      plVar16 = plVar18;
      if (lVar10 != 0) {
        uVar20 = 0;
        uVar21 = 0;
        uVar23 = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = uVar23;
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        if ((bRam0000000007e28edd & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07807698);
          bRam0000000007e28edd = 1;
        }
        plVar19 = *(long **)(lVar10 + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar23 = *(undefined8 *)PTR_DAT_07807698;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9554;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9554:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar23,uVar12,0,0,lVar13);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0x60) = 0x68b9590;
        *(undefined8 *)(puVar9 + -0x58) = uVar23;
        *(undefined8 *)(puVar9 + -0x50) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x48) = 0;
        *(undefined8 *)(puVar9 + -0x40) = uVar12;
        *(undefined8 *)(puVar9 + -0x38) = 0;
        uVar12 = uVar20;
        if ((bRam0000000007e28ede & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811878);
          bRam0000000007e28ede = 1;
        }
        plVar19 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar12 = *(undefined8 *)PTR_DAT_07811878;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9644;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9644:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar32._8_8_,0,uVar20,lVar13);
          return auVar32;
        }
        auVar33 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0x90) = 0x68b9680;
        *(undefined8 *)(puVar9 + -0x88) = uVar23;
        *(undefined8 *)(puVar9 + -0x80) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x78) = 0;
        *(long *)(puVar9 + -0x70) = auVar32._8_8_;
        *(undefined8 *)(puVar9 + -0x68) = uVar20;
        uVar20 = uVar12;
        if ((bRam0000000007e28edf & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_0776b160);
          bRam0000000007e28edf = 1;
        }
        plVar19 = *(long **)(auVar33._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar23 = *(undefined8 *)PTR_DAT_0776b160;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9734;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9734:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar23,auVar33._8_8_,0,uVar12,lVar13);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0xc0) = 0x68b9770;
        *(undefined8 *)(puVar9 + -0xb0) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0xa8) = 0;
        *(long *)(puVar9 + -0xa0) = auVar33._8_8_;
        *(undefined8 *)(puVar9 + -0x98) = uVar12;
        if ((bRam0000000007e28ee0 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811880);
          bRam0000000007e28ee0 = 1;
        }
        plVar19 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar12 = *(undefined8 *)PTR_DAT_07811880;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9820;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9820:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar32._8_8_,0,0,lVar13);
          return auVar32;
        }
        auVar33 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0xf0) = 0x68b985c;
        *(undefined8 *)(puVar9 + -0xe0) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0xd8) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0xd0) = 0;
        *(long *)(puVar9 + -200) = auVar32._8_8_;
        if ((bRam0000000007e28ee1 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee1 = 1;
        }
        plVar19 = *(long **)(auVar33._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar12 = *(undefined8 *)PTR_DAT_07811888;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b990c;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b990c:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar33._8_8_,0,0,lVar13);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        puVar11 = (undefined8 *)PTR_DAT_0777aa98;
        *(undefined8 *)(puVar9 + -0x130) = 0x68b9948;
        *(undefined **)(puVar9 + -0x120) = puVar25;
        *(undefined8 *)(puVar9 + -0x118) = uVar23;
        *(undefined8 *)(puVar9 + -0x110) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x108) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x100) = 0;
        *(long *)(puVar9 + -0xf8) = auVar33._8_8_;
        uVar23 = uVar20;
        uVar12 = uVar21;
        if ((bRam0000000007e28ee2 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811888);
          bRam0000000007e28ee2 = 1;
        }
        lVar13 = func_0x03280ca0(*puVar11);
        func_0x06a30df4(lVar13,0);
        if (lVar13 != 0) {
          puVar11 = (undefined8 *)(lVar13 + 0x30);
          *puVar11 = uVar20;
          func_0x032809c4(puVar11,uVar20);
          *(undefined8 *)(lVar13 + 0x38) = uVar21;
          plVar19 = *(long **)(auVar32._0_8_ + 0x40);
          uVar21 = 0;
          if (plVar19 != (long *)0x0) {
            lVar10 = *plVar19;
            lVar24 = *(long *)PTR_DAT_07802f60;
            uVar12 = *(undefined8 *)PTR_DAT_07811888;
            uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar14 != 0) {
              piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar24 + 0x20)) {
                  lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar24 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9a48;
                }
                uVar14 = uVar14 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar14 != 0);
            }
            lVar10 = func_0x03256b10(plVar19);
LAB_068b9a48:
            lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar24);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar32 = (**(code **)(lVar10 + 8))(plVar19,uVar12,auVar32._8_8_,0,lVar13,lVar10);
            return auVar32;
          }
        }
        auVar33 = func_0x03280cac();
        puVar26 = PTR_DAT_0777aa98;
        lVar10 = auVar33._0_8_;
        *(undefined8 *)(puVar9 + -0x170) = 0x68b9a88;
        *(undefined8 **)(puVar9 + -0x160) = puVar11;
        *(undefined8 *)(puVar9 + -0x158) = uVar20;
        *(long *)(puVar9 + -0x150) = auVar32._0_8_;
        *(undefined8 *)(puVar9 + -0x148) = uVar21;
        *(long *)(puVar9 + -0x140) = lVar13;
        *(long *)(puVar9 + -0x138) = auVar32._8_8_;
        if ((bRam0000000007e28ee3 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777aa98);
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077c1e10);
          bRam0000000007e28ee3 = 1;
        }
        lVar13 = func_0x03280ca0(*(undefined8 *)puVar26);
        func_0x06a30df4(lVar13,0);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x30) = uVar23;
          func_0x032809c4((undefined8 *)(lVar13 + 0x30),uVar23);
          *(undefined8 *)(lVar13 + 0x38) = uVar12;
          plVar19 = *(long **)(lVar10 + 0x40);
          uVar12 = 0;
          if (plVar19 != (long *)0x0) {
            lVar10 = *plVar19;
            lVar24 = *(long *)PTR_DAT_07802f60;
            uVar12 = *(undefined8 *)PTR_DAT_077c1e10;
            uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar14 != 0) {
              piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar24 + 0x20)) {
                  lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar24 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068b9b88;
                }
                uVar14 = uVar14 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar14 != 0);
            }
            lVar10 = func_0x03256b10(plVar19);
LAB_068b9b88:
            lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar24);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar32 = (**(code **)(lVar10 + 8))(plVar19,uVar12,auVar33._8_8_,0,lVar13,lVar10);
            return auVar32;
          }
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0x1a0) = 0x68b9bc8;
        *(long *)(puVar9 + -400) = lVar10;
        *(undefined8 *)(puVar9 + -0x188) = uVar12;
        *(long *)(puVar9 + -0x180) = lVar13;
        *(long *)(puVar9 + -0x178) = auVar33._8_8_;
        if ((bRam0000000007e28ee4 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_077d7510);
          bRam0000000007e28ee4 = 1;
        }
        plVar19 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar12 = *(undefined8 *)PTR_DAT_077d7510;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9c78;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9c78:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar32._8_8_,0,0,lVar13);
          return auVar32;
        }
        auVar33 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0x1d0) = 0x68b9cb4;
        *(long *)(puVar9 + -0x1c0) = lVar10;
        *(undefined8 *)(puVar9 + -0x1b8) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x1b0) = 0;
        *(long *)(puVar9 + -0x1a8) = auVar32._8_8_;
        if ((bRam0000000007e28ee5 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_07811890);
          bRam0000000007e28ee5 = 1;
        }
        plVar19 = *(long **)(auVar33._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar12 = *(undefined8 *)PTR_DAT_07811890;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9d64;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9d64:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar33._8_8_,0,0,lVar13);
          return auVar32;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0x200) = 0x68b9da0;
        *(long *)(puVar9 + -0x1f0) = lVar10;
        *(undefined8 *)(puVar9 + -0x1e8) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x1e0) = 0;
        *(long *)(puVar9 + -0x1d8) = auVar33._8_8_;
        if ((bRam0000000007e28ee6 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ab08);
          func_0x03280a18(PTR_DAT_07811898);
          bRam0000000007e28ee6 = 1;
        }
        plVar19 = *(long **)(auVar32._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_0777ab08;
          uVar12 = *(undefined8 *)PTR_DAT_07811898;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9e50;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9e50:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar32._8_8_,0,lVar13);
          return auVar32;
        }
        auVar33 = func_0x03280cac();
        *(undefined8 *)(puVar9 + -0x230) = 0x68b9e88;
        *(long *)(puVar9 + -0x220) = lVar10;
        *(undefined8 *)(puVar9 + -0x218) = 0x7e28000;
        *(undefined8 *)(puVar9 + -0x210) = 0;
        *(long *)(puVar9 + -0x208) = auVar32._8_8_;
        if ((bRam0000000007e28ee7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07802f60);
          func_0x03280a18(PTR_DAT_078118a0);
          bRam0000000007e28ee7 = 1;
        }
        plVar19 = *(long **)(auVar33._0_8_ + 0x40);
        if (plVar19 != (long *)0x0) {
          lVar13 = *plVar19;
          lVar10 = *(long *)PTR_DAT_07802f60;
          uVar12 = *(undefined8 *)PTR_DAT_078118a0;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar13 = lVar13 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_068b9f38;
              }
              uVar14 = uVar14 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x03256b10(plVar19);
LAB_068b9f38:
          lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar32 = (**(code **)(lVar13 + 8))(plVar19,uVar12,auVar33._8_8_,0,0,lVar13);
          return auVar32;
        }
        uVar14 = func_0x03280cac();
        goto SUB_057da5fc;
      }
    }
  }
  auVar32 = func_0x03280cac();
  lVar10 = auVar32._8_8_;
  *(undefined8 *)(puVar9 + -0xa0) = unaff_d11;
  *(undefined8 *)(puVar9 + -0x98) = unaff_d10;
  *(ulong *)(puVar9 + -0x90) = unaff_d9;
  *(ulong *)(puVar9 + -0x88) = unaff_d8;
  *(undefined8 *)(puVar9 + -0x80) = 0x6888a80;
  *(undefined **)(puVar9 + -0x78) = unaff_x27;
  *(undefined **)(puVar9 + -0x70) = unaff_x26;
  *(undefined **)(puVar9 + -0x68) = puVar26;
  *(undefined **)(puVar9 + -0x60) = puVar25;
  *(undefined8 **)(puVar9 + -0x58) = puVar11;
  *(long **)(puVar9 + -0x50) = plVar15;
  *(long **)(puVar9 + -0x48) = plVar16;
  *(long **)(puVar9 + -0x40) = param_3;
  *(long *)(puVar9 + -0x38) = lVar13;
  if ((bRam0000000007e28d26 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_078101c0);
    func_0x03280a18(PTR_DAT_078101c8);
    bRam0000000007e28d26 = 1;
  }
  lVar13 = *(long *)(auVar32._0_8_ + 0x78);
  if (lVar13 == 0) {
LAB_06888c08:
    uVar12 = 0x6888c0c;
    auVar34 = func_0x03280cac();
  }
  else {
    auVar32 = func_0x06603648(lVar13,0);
    if (auVar32._0_8_ == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar32._8_8_;
      return auVar6 << 0x40;
    }
    if (lVar10 == 0) goto LAB_06888c08;
    func_0x03ced81c(lVar10,*(undefined8 *)PTR_DAT_077d75b8);
    auVar34._8_8_ = extraout_x1;
    auVar34._0_8_ = lVar10;
    uVar12 = 0x6888b2c;
  }
  uVar14 = auVar34._8_8_;
  lVar13 = auVar34._0_8_;
  *(undefined8 *)(puVar9 + -0xe0) = uVar12;
  *(long **)(puVar9 + -0xd0) = plVar19;
  *(long *)(puVar9 + -200) = param_5;
  if ((bRam0000000007e28d27 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d27 = 1;
    uVar14 = extraout_x1_00;
  }
  if (lVar13 != 0) {
    iVar3 = *(int *)(lVar13 + 0x38);
    if (iVar3 < 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar14;
      return auVar5 << 0x40;
    }
    iVar4 = *(int *)(lVar13 + 0x3c);
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
  uVar14 = func_0x03280cac();
SUB_057da5fc:
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar14;
  return auVar31;
}


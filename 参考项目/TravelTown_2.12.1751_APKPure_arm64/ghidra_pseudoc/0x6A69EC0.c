/* Ghidra 12.1.2 native pseudocode; RVA 0x6A69EC0; Merger.MergeBoard.Systems.ImmediateToolsSystem.CollectToolBox; status ok */


/* WARNING: Possible PIC construction at 0x06b6a370: Changing call to branch */

void Merger_MergeBoard_Systems_ImmediateToolsSystem__CollectToolBox
               (undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  long *plStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_07830e40;
  puVar6 = PTR_DAT_07830e38;
  puVar5 = PTR_DAT_07830e30;
  puVar4 = PTR_DAT_0782fe68;
  puVar3 = PTR_DAT_0782fe48;
  puVar2 = PTR_DAT_077cf4d0;
  puVar24 = PTR_DAT_077cf4c8;
  puVar8 = (undefined8 *)auStack_130;
  puVar25 = param_6;
  plStack_128 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_5;
  if ((bRam0000000007e2a6bd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830e30);
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07830ae8);
    func_0x03280a18(PTR_DAT_07830e48);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830e50);
    func_0x03280a18(PTR_DAT_07830e58);
    func_0x03280a18(PTR_DAT_0782f3d8);
    func_0x03280a18(PTR_DAT_07830e60);
    func_0x03280a18(PTR_DAT_077db450);
    func_0x03280a18(PTR_DAT_077cf4c8);
    func_0x03280a18(PTR_DAT_077cf4d0);
    func_0x03280a18(PTR_DAT_07830e68);
    func_0x03280a18(PTR_DAT_07830e70);
    func_0x03280a18(PTR_DAT_07830e38);
    func_0x03280a18(PTR_DAT_07830e78);
    func_0x03280a18(PTR_DAT_07830e80);
    func_0x03280a18(PTR_DAT_07830e88);
    func_0x03280a18(PTR_DAT_07830e40);
    bRam0000000007e2a6bd = 1;
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143c38(uVar12,*(undefined8 *)puVar24);
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  plVar26 = (long *)*param_6;
  uVar22 = param_6[1];
  uVar13 = func_0x03d19d68(*(undefined8 *)puVar5);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06015d08(uVar14,0,*(undefined8 *)puVar3,0);
  uVar20 = *(ulong *)puVar6;
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  uStack_68 = uStack_e8;
  uStack_70 = uStack_f0;
  func_0x03e64c44(&uStack_e0,&uStack_80,uVar13,uVar14);
  lVar15 = *(long *)puVar7;
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar15 = *(long *)puVar7;
  }
  puVar2 = PTR_DAT_07830e70;
  puVar24 = PTR_DAT_07830e68;
  lVar27 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
  if (lVar27 == 0) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar15 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar15 + 0xb8);
    lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830e58);
    uVar20 = 0;
    func_0x0534e52c(lVar27,uVar13,*(undefined8 *)PTR_DAT_07830e80);
    plVar16 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
    *plVar16 = lVar27;
    func_0x032809c4(plVar16,lVar27);
  }
  func_0x04486da0(&uStack_80,&uStack_c0,lVar27,*(undefined8 *)puVar2);
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  lVar15 = func_0x04486df8(&uStack_c0,*(undefined8 *)puVar24);
  lVar27 = *(long *)puVar7;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    func_0x03280b8c(lVar27);
    lVar27 = *(long *)puVar7;
  }
  puVar24 = PTR_DAT_07830e48;
  lVar28 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x10);
  if (lVar28 == 0) {
    if (*(int *)(lVar27 + 0xe0) == 0) {
      func_0x03280b8c(lVar27);
      lVar27 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar27 + 0xb8);
    lVar28 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830e50);
    uVar20 = 0;
    func_0x0534e8c0(lVar28,uVar13,*(undefined8 *)PTR_DAT_07830e88);
    plVar16 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
    *plVar16 = lVar28;
    func_0x032809c4(plVar16,lVar28);
  }
  plVar16 = *(long **)puVar24;
  lVar27 = func_0x03d4d780(lVar15,lVar28);
  puVar2 = PTR_DAT_0782f3d8;
  plVar29 = (long *)param_1[2];
  if (plVar29 != (long *)0x0) {
    lVar15 = *plVar29;
    uVar21 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0782f3d8) {
          puVar17 = (undefined8 *)(lVar15 + (long)(*piVar23 + 3) * 0x10 + 0x138);
          goto LAB_06b6a25c;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0782f3d8,3);
LAB_06b6a25c:
    plVar16 = (long *)puVar17[1];
    lVar15 = (*(code *)*puVar17)(plVar29,lVar27);
    puVar3 = PTR_DAT_077db450;
    lStack_98 = lVar15;
    if (0 < *(int *)(param_6 + 2)) {
      iVar30 = 0;
      do {
        plVar29 = (long *)param_1[2];
        puVar24 = puVar3;
        if (plVar29 == (long *)0x0) goto LAB_06b6a458;
        lVar27 = *plVar29;
        uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar20 != 0) {
          piVar23 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar2) {
              puVar17 = (undefined8 *)(lVar27 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_06b6a2e4;
            }
            uVar20 = uVar20 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar20 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar29,*(long *)puVar2,2);
LAB_06b6a2e4:
        param_5 = puVar17[1];
        plVar16 = plVar26;
        uVar20 = uVar22;
        plVar29 = (long *)(*(code *)*puVar17)(plVar29,lVar15);
        if (plVar29 != (long *)0x0) {
          if (uVar12 == 0) goto LAB_06b6a458;
          lVar27 = *(long *)(uVar12 + 0x10);
          lVar28 = *(long *)puVar3;
          *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
          if (lVar27 == 0) goto LAB_06b6a458;
          uVar1 = *(uint *)(uVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar27 + 0x18)) {
            *(uint *)(uVar12 + 0x18) = uVar1 + 1;
            plVar16 = (long *)(lVar27 + (long)(int)uVar1 * 8 + 0x20);
            *plVar16 = (long)plVar29;
            func_0x032809c4(plVar16,plVar29);
          }
          else {
            func_0x0414446c(uVar12,plVar29,
                            *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
          }
          plVar19 = &lStack_98;
          uVar13 = 0x6b6a374;
          plVar16 = (long *)puVar3;
          puVar17 = param_2;
          puVar25 = param_1;
          uVar21 = uVar12;
          goto SUB_06b6a610;
        }
        iVar30 = iVar30 + 1;
        lVar27 = lVar15;
      } while (iVar30 < *(int *)(param_6 + 2));
    }
    lVar15 = lVar27;
    auVar31 = func_0x06b9c2a4(&uStack_90,0);
    plVar26 = plStack_128;
    puVar3 = PTR_DAT_07830e60;
    puVar2 = PTR_DAT_077c0ec8;
    if (plStack_128 != (long *)0x0) {
      func_0x03d1d7ec(plStack_128,auVar31._0_8_,auVar31._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
      uStack_118 = param_2[1];
      uStack_120 = *param_2;
      uStack_108 = param_2[3];
      uStack_110 = param_2[2];
      func_0x06b98f6c(&uStack_120,plVar26,0);
      lVar27 = param_2[2];
      param_1 = (undefined8 *)func_0x03d1ae90(plVar26,*(undefined8 *)puVar2);
      param_6 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar3);
      plVar16 = (long *)((ulong)param_1 & 0xffffffff);
      param_5 = 0;
      uVar20 = uVar12;
      func_0x06b9a610(param_6,plVar26);
      param_2 = (undefined8 *)0x0;
      puVar24 = puVar2;
      if (lVar27 != 0) {
        func_0x03ec33e4(lVar27,param_6,*(undefined8 *)PTR_DAT_07830e78);
        return;
      }
    }
  }
LAB_06b6a458:
  auVar31 = func_0x03280cac();
  puVar17 = auVar31._8_8_;
  puVar8 = &uStack_190;
  uStack_160 = 0x6b6a45c;
  uVar21 = 0x7e2a000;
  plVar19 = plVar16;
  uStack_170 = uVar20;
  uStack_168 = param_5;
  uStack_158 = uVar12;
  puStack_150 = param_1;
  puStack_148 = param_6;
  puStack_140 = param_2;
  puStack_138 = puVar24;
  if ((bRam0000000007e2a6be & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07830ae8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07830e90);
    func_0x03280a18(PTR_DAT_07830e98);
    bRam0000000007e2a6be = 1;
  }
  plVar29 = *(long **)(auVar31._0_8_ + 0x18);
  param_6 = (undefined8 *)0x0;
  if (plVar29 != (long *)0x0) {
    lVar27 = *plVar29;
    puVar25 = (undefined8 *)*puVar25;
    uVar20 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar18 = (undefined8 *)(lVar27 + (long)(*piVar23 + 9) * 0x10 + 0x138);
          goto LAB_06b6a534;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_0777a498,9);
LAB_06b6a534:
    plVar19 = (long *)puVar18[1];
    param_6 = (undefined8 *)(*(code *)*puVar18)(plVar29,puVar25);
    auVar31 = func_0x06b9c2a4(&uStack_170,0);
    puVar2 = PTR_DAT_07830e90;
    puVar24 = PTR_DAT_077c0ec8;
    if (plVar16 != (long *)0x0) {
      func_0x03d1d7ec(plVar16,auVar31._0_8_,auVar31._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
      uStack_188 = puVar17[1];
      uStack_190 = *puVar17;
      uStack_178 = puVar17[3];
      uStack_180 = puVar17[2];
      func_0x06b98f6c(&uStack_190,plVar16,0);
      lVar27 = puVar17[2];
      uVar21 = func_0x03d1ae90(plVar16,*(undefined8 *)puVar24);
      puVar25 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar2);
      plVar19 = (long *)(uVar21 & 0xffffffff);
      func_0x06b9a694(puVar25,plVar16,plVar19,param_6,0);
      puVar17 = (undefined8 *)0x0;
      if (lVar27 != 0) {
        func_0x03ec33e4(lVar27,puVar25,*(undefined8 *)PTR_DAT_07830e98);
        return;
      }
    }
  }
  uVar13 = 0x6b6a610;
  auVar31 = func_0x03280cac();
  plVar29 = auVar31._8_8_;
  param_1 = auVar31._0_8_;
SUB_06b6a610:
  *(undefined8 *)((long)puVar8 + -0x50) = uVar13;
  *(long *)((long)puVar8 + -0x40) = lVar15;
  *(ulong *)((long)puVar8 + -0x38) = uVar22;
  *(long **)((long)puVar8 + -0x30) = plVar26;
  *(ulong *)((long)puVar8 + -0x28) = uVar21;
  *(undefined8 **)((long)puVar8 + -0x20) = puVar25;
  *(undefined8 **)((long)puVar8 + -0x18) = param_6;
  *(undefined8 **)((long)puVar8 + -0x10) = puVar17;
  *(long **)((long)puVar8 + -8) = plVar16;
  if ((bRam0000000007e2a6bf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ea0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0782f3d8);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a6bf = 1;
  }
  puVar24 = PTR_DAT_07779820;
  if (plVar29 != (long *)0x0) {
    lVar15 = *plVar29;
    plVar26 = (long *)param_1[3];
    uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_07779820) {
          puVar25 = (undefined8 *)(lVar15 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_06b6a6d0;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar25 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_07779820,0);
LAB_06b6a6d0:
    uVar13 = (*(code *)*puVar25)(plVar29,puVar25[1]);
    puVar2 = PTR_DAT_0777a498;
    if (plVar26 != (long *)0x0) {
      lVar15 = *plVar26;
      uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar25 = (undefined8 *)(lVar15 + (long)(*piVar23 + 4) * 0x10 + 0x138);
            goto LAB_06b6a73c;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar25 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_0777a498,4);
LAB_06b6a73c:
      uVar13 = (*(code *)*puVar25)(plVar26,uVar13,puVar25[1]);
      puVar3 = PTR_DAT_0782f3d8;
      plVar26 = (long *)param_1[2];
      if (plVar26 != (long *)0x0) {
        lVar15 = *plVar26;
        uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0782f3d8) {
              puVar25 = (undefined8 *)(lVar15 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_06b6a7ac;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar25 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_0782f3d8,0);
LAB_06b6a7ac:
        uVar9 = (*(code *)*puVar25)(plVar26,uVar13,puVar25[1]);
        lVar15 = *plVar29;
        plVar26 = (long *)param_1[3];
        uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar24) {
              puVar25 = (undefined8 *)(lVar15 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_06b6a810;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar25 = (undefined8 *)func_0x03256b10(plVar29,*(long *)puVar24,0);
LAB_06b6a810:
        uVar13 = (*(code *)*puVar25)(plVar29,puVar25[1]);
        if (plVar26 != (long *)0x0) {
          lVar15 = *plVar26;
          uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar2) {
                puVar25 = (undefined8 *)(lVar15 + (long)(*piVar23 + 0x19) * 0x10 + 0x138);
                goto LAB_06b6a874;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar25 = (undefined8 *)func_0x03256b10(plVar26,*(long *)puVar2,0x19);
LAB_06b6a874:
          uVar10 = (*(code *)*puVar25)(plVar26,uVar13,puVar25[1]);
          if (*plVar19 != 0) {
            lVar15 = func_0x04f61e04(*plVar19,uVar9,*(undefined8 *)PTR_DAT_07830ea0);
            if ((lVar15 != 0) && (plVar26 = (long *)param_1[2], plVar26 != (long *)0x0)) {
              lVar27 = *plVar26;
              iVar30 = *(int *)(lVar15 + 0x10);
              uVar22 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar22 != 0) {
                piVar23 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                    puVar25 = (undefined8 *)(lVar27 + (long)(*piVar23 + 4) * 0x10 + 0x138);
                    goto LAB_06b6a90c;
                  }
                  uVar22 = uVar22 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar22 != 0);
              }
              puVar25 = (undefined8 *)func_0x03256b10(plVar26,*(long *)puVar3,4);
LAB_06b6a90c:
              iVar11 = (*(code *)*puVar25)(plVar26,uVar10,puVar25[1]);
              *(int *)(lVar15 + 0x10) = iVar11 + iVar30;
              return;
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}


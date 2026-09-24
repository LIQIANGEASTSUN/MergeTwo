/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6FC40; Merger.MergeBoard.Systems.ItemUnboxingSystem.UnboxOnDemand; status ok */


/* WARNING: Possible PIC construction at 0x06b6fde8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b70134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b70598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b70138) */
/* WARNING: Removing unreachable block (ram,0x06b7013c) */
/* WARNING: Removing unreachable block (ram,0x06b7021c) */
/* WARNING: Removing unreachable block (ram,0x06b70140) */
/* WARNING: Removing unreachable block (ram,0x06b70220) */
/* WARNING: Removing unreachable block (ram,0x06b7015c) */
/* WARNING: Removing unreachable block (ram,0x06b70184) */
/* WARNING: Removing unreachable block (ram,0x06b7016c) */
/* WARNING: Removing unreachable block (ram,0x06b6fdec) */
/* WARNING: Removing unreachable block (ram,0x06b7059c) */
/* WARNING: Removing unreachable block (ram,0x06b706cc) */
/* WARNING: Removing unreachable block (ram,0x06b705a0) */
/* WARNING: Removing unreachable block (ram,0x06b70698) */
/* WARNING: Removing unreachable block (ram,0x06b70688) */
/* WARNING: Removing unreachable block (ram,0x06b706a4) */

undefined8 *
Merger_MergeBoard_Systems_ItemUnboxingSystem__UnboxOnDemand
          (long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,undefined8 *param_5,
          ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *extraout_x1;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *unaff_x25;
  undefined *puVar21;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  uint auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_38;
  
  puVar4 = &uStack_100;
  puVar10 = &uStack_100;
  if ((bRam0000000007e2a6de & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a490);
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_077c0f50);
    func_0x03280a18(PTR_DAT_077c0f58);
    func_0x03280a18(PTR_DAT_077c0f60);
    func_0x03280a18(PTR_DAT_077c0f68);
    func_0x03280a18(PTR_DAT_078311b0);
    bRam0000000007e2a6de = 1;
  }
  lStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  auStack_80[0] = 0;
  if (param_2[1] == 0) {
LAB_06b6fe24:
    auVar27 = func_0x03280cac();
    plVar15 = param_3;
    puVar10 = param_4;
    if (auVar27._8_4_ == 1) {
      plVar9 = (long *)func_0x072ce910(auVar27._0_8_);
      lVar17 = *plVar9;
      func_0x072ce920();
      puVar10 = (undefined8 *)func_0x051159b0(&uStack_60,*(undefined8 *)PTR_DAT_077c0f50);
      if (lVar17 == 0) {
        return puVar10;
      }
      func_0x03280ca4(lVar17);
      plVar15 = param_3;
      puVar10 = param_4;
    }
    func_0x051159b0(&uStack_60,*(undefined8 *)PTR_DAT_077c0f50);
    func_0x03365958(auVar27._0_8_);
    func_0x03280ca4(0);
    auVar26 = func_0x02f09514();
    puVar20 = PTR_DAT_077c3b70;
    puVar1 = PTR_DAT_077c0f38;
    puVar19 = auVar26._8_8_;
    puVar5 = &uStack_170;
    puVar4 = &uStack_170;
    puVar14 = &uStack_170;
    uStack_140 = 0x6b6feb0;
    plVar18 = (long *)((ulong)plVar15 & 0xffffffff);
    if ((bRam0000000007e2a6df & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_077617f0);
      func_0x03280a18(PTR_DAT_077617f8);
      func_0x03280a18(PTR_DAT_0774e8e0);
      func_0x03280a18(PTR_DAT_077c1e40);
      func_0x03280a18(PTR_DAT_077c3b58);
      func_0x03280a18(PTR_DAT_077c3b70);
      func_0x03280a18(PTR_DAT_077c0f38);
      bRam0000000007e2a6df = 1;
    }
    uStack_148 = 0;
    puVar11 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x04143c38(puVar11,*(undefined8 *)puVar20);
    plVar9 = *(long **)(auVar26._0_8_ + 0x10);
    if (plVar9 == (long *)0x0) {
LAB_06b70224:
      func_0x03280cac();
    }
    else {
      lVar17 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077c1e40) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_06b6ffcc;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c1e40,5);
LAB_06b6ffcc:
      plVar15 = (long *)puVar7[1];
      plVar12 = (long *)(*(code *)*puVar7)(plVar9,plVar18);
      if (plVar12 == (long *)0x0) goto LAB_06b70224;
      lVar17 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077617f0) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06b70038;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      plVar15 = (long *)0x0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b70038:
      plVar9 = (long *)PTR_DAT_0774e8c8;
      plVar18 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
      puVar21 = PTR_DAT_077c3b58;
      puVar20 = PTR_DAT_077617f8;
      puVar7 = (undefined8 *)PTR_DAT_0774e8e0;
      if (plVar18 != (long *)0x0) {
        lVar17 = *plVar18;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8e0) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06b700b8;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        plVar15 = (long *)0x0;
        puVar13 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b700b8:
        uVar8 = (*(code *)*puVar13)(plVar18,puVar13[1]);
        if ((uVar8 & 1) == 0) {
          puVar19 = (undefined8 *)0x0;
          goto LAB_06b701a0;
        }
        lVar17 = *plVar18;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar20) {
              puVar10 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06b70114;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar20,0);
LAB_06b70114:
        (*(code *)*puVar10)(plVar18,puVar10[1]);
        uStack_168 = puVar19[1];
        uStack_170 = *puVar19;
        uStack_158 = puVar19[3];
        uStack_160 = puVar19[2];
        uVar22 = 0x6b70138;
        param_5 = puVar19;
        goto SUB_06b704cc;
      }
    }
    func_0x03280cac();
    puVar7 = (undefined8 *)puVar1;
    puVar20 = (undefined *)0x7e2a000;
    puVar21 = unaff_x25;
    while( true ) {
      auVar27 = func_0x03280ca4(puVar19);
      param_2 = auVar27._0_8_;
      if (auVar27._8_4_ != 1) break;
      plVar12 = (long *)func_0x072ce910();
      puVar19 = (undefined8 *)*plVar12;
      func_0x072ce920();
LAB_06b701a0:
      if (plVar18 != (long *)0x0) {
        lVar17 = *plVar18;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *plVar9) {
              puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06b701f0;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        plVar15 = (long *)0x0;
        puVar14 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b701f0:
        (*(code *)*puVar14)(plVar18,puVar14[1]);
      }
      if (puVar19 == (undefined8 *)0x0) {
        return puVar11;
      }
    }
    plVar12 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      lVar17 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar9) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06b702c0;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      plVar15 = (long *)0x0;
      puVar14 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b702c0:
      (*(code *)*puVar14)(plVar18,puVar14[1]);
    }
    func_0x03365958(param_2);
    func_0x03280ca4(0);
    uVar22 = 0x6b702e4;
    auVar26 = func_0x02f09514();
    puVar11 = auVar26._8_8_;
    param_1 = auVar26._0_8_;
  }
  else {
    param_3 = *(long **)PTR_DAT_078311b0;
    puVar7 = (undefined8 *)func_0x03ec5020(param_2[1],&lStack_38);
    if (((ulong)puVar7 & 1) == 0) {
      return puVar7;
    }
    if ((lStack_38 == 0) || (*(long *)(lStack_38 + 0x10) == 0)) goto LAB_06b6fe24;
    func_0x04145068(&uStack_a0,*(long *)(lStack_38 + 0x10),*(undefined8 *)PTR_DAT_077c0f68);
    plVar9 = (long *)PTR_DAT_077c0f58;
    puVar7 = (undefined8 *)PTR_DAT_0777a520;
    puVar20 = PTR_DAT_0777a490;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    plStack_50 = plStack_90;
    do {
      do {
        uVar8 = func_0x051159b4(&uStack_60,*plVar9);
        plVar15 = plStack_50;
        if ((uVar8 & 1) == 0) {
          puVar10 = (undefined8 *)func_0x051159b0(&uStack_60,*(undefined8 *)PTR_DAT_077c0f50);
          return puVar10;
        }
        if (plStack_50 == (long *)0x0) {
          func_0x03280cac();
          goto LAB_06b6fe20;
        }
        param_3 = (long *)*puVar7;
        bVar6 = func_0x03d1e508(plStack_50,&uStack_78);
      } while ((bVar6 & (char)uStack_78 != '\0') == 0);
      param_3 = *(long **)puVar20;
      uVar8 = func_0x03d1e2e4(plVar15,auStack_80);
    } while ((uVar8 & 1) == 0);
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_88 = param_2[3];
    plStack_90 = (long *)param_2[2];
    uStack_b8 = uStack_70;
    uStack_c0 = uStack_78;
    uStack_b0 = uStack_68;
    if (lStack_38 == 0) {
LAB_06b6fe20:
      func_0x03280cac();
      goto LAB_06b6fe24;
    }
    param_5 = *(undefined8 **)(lStack_38 + 0x18);
    param_6 = (ulong)auStack_80[0];
    uStack_d8 = param_2[1];
    uStack_e0 = *param_2;
    uStack_c8 = param_2[3];
    plStack_d0 = (long *)param_2[2];
    uStack_f8 = uStack_70;
    uStack_100 = uStack_78;
    uStack_f0 = uStack_68;
    puVar11 = &uStack_e0;
    uVar22 = 0x6b6fdec;
    plVar18 = param_1;
    plVar12 = plVar15;
    puVar21 = unaff_x25;
  }
  puVar5 = (undefined8 *)((long)puVar4 + -0xc0);
  *(undefined8 *)((long)puVar4 + -0x40) = uVar22;
  *(undefined **)((long)puVar4 + -0x38) = puVar21;
  *(undefined **)((long)puVar4 + -0x30) = puVar20;
  *(undefined8 **)((long)puVar4 + -0x28) = puVar7;
  *(long **)((long)puVar4 + -0x20) = plVar9;
  *(long **)((long)puVar4 + -0x18) = plVar12;
  *(long **)((long)puVar4 + -0x10) = plVar18;
  *(undefined8 **)((long)puVar4 + -8) = param_2;
  puVar20 = (undefined *)0x7e2a000;
  plVar18 = (long *)(param_6 & 0xffffffff);
  if ((bRam0000000007e2a6e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_078311b8);
    func_0x03280a18(PTR_DAT_078311c0);
    func_0x03280a18(PTR_DAT_078311c8);
    param_1 = (long *)func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e2a6e1 = 1;
  }
  puVar3 = PTR_DAT_078311c8;
  puVar2 = PTR_DAT_078311b8;
  puVar1 = PTR_DAT_077c0ec8;
  *(undefined1 *)puVar10 = 0;
  uVar23 = puVar10[1];
  uVar22 = *puVar10;
  *(undefined4 *)((long)puVar4 + -0x70) = *(undefined4 *)(puVar10 + 2);
  *(undefined8 *)((long)puVar4 + -0x78) = uVar23;
  *(undefined8 *)((long)puVar4 + -0x80) = uVar22;
  plVar9 = plVar15;
  puVar7 = puVar10;
  if (plVar15 != (long *)0x0) {
    uVar22 = *(undefined8 *)PTR_DAT_07831140;
    *(undefined8 *)((long)puVar4 + -0x58) = *(undefined8 *)((long)puVar4 + -0x78);
    *(undefined8 *)((long)puVar4 + -0x60) = *(undefined8 *)((long)puVar4 + -0x80);
    *(undefined4 *)((long)puVar4 + -0x50) = *(undefined4 *)((long)puVar4 + -0x70);
    func_0x03d1c7a8(plVar15,(undefined1 *)((long)puVar4 + -0x60),uVar22);
    uVar25 = *puVar11;
    uVar24 = puVar11[3];
    uVar23 = puVar11[2];
    uVar22 = *(undefined8 *)puVar3;
    *(undefined8 *)((long)puVar4 + -0x98) = puVar11[1];
    *(undefined8 *)((long)puVar4 + -0xa0) = uVar25;
    *(undefined8 *)((long)puVar4 + -0x88) = uVar24;
    *(undefined8 *)((long)puVar4 + -0x90) = uVar23;
    *(undefined8 *)((long)puVar4 + -0x58) = *(undefined8 *)((long)puVar4 + -0x98);
    *(undefined8 *)((long)puVar4 + -0x60) = *(undefined8 *)((long)puVar4 + -0xa0);
    *(undefined8 *)((long)puVar4 + -0x48) = *(undefined8 *)((long)puVar4 + -0x88);
    *(undefined8 *)((long)puVar4 + -0x50) = *(undefined8 *)((long)puVar4 + -0x90);
    func_0x03ec59a8((undefined1 *)((long)puVar4 + -0x60),plVar15,0,uVar22);
    puVar20 = (undefined *)func_0x03d1ae90(plVar15,*(undefined8 *)puVar1);
    puVar7 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar2);
    param_1 = (long *)func_0x06b9ac10(puVar7,0);
    puVar1 = PTR_DAT_078101d0;
    puVar21 = puVar2;
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = plVar15;
      func_0x032809c4(puVar7 + 2,plVar15);
      plVar9 = puVar7 + 4;
      *plVar9 = (long)param_5;
      *(int *)(puVar7 + 3) = (int)puVar20;
      func_0x032809c4(plVar9,param_5);
      *(int *)(puVar7 + 7) = (int)param_6;
      uVar8 = func_0x055ea870(param_5,*(undefined8 *)puVar1,0);
      if ((uVar8 & 1) != 0) {
        uVar24 = *puVar11;
        uVar23 = puVar11[3];
        uVar22 = puVar11[2];
        *(undefined8 *)((long)puVar4 + -0xb8) = puVar11[1];
        *(undefined8 *)((long)puVar4 + -0xc0) = uVar24;
        *(undefined8 *)((long)puVar4 + -0xa8) = uVar23;
        *(undefined8 *)((long)puVar4 + -0xb0) = uVar22;
        auVar26 = func_0x06b706d8(uVar8,(undefined1 *)((long)puVar4 + -0xc0),param_6 & 0xffffffff);
        plVar18 = auVar26._8_8_;
        puVar7[5] = auVar26._0_8_;
        func_0x032809c4(puVar7 + 5,auVar26._0_8_);
        puVar7[6] = plVar18;
        func_0x032809c4(puVar7 + 6,plVar18);
      }
      param_1 = (long *)0x0;
      puVar21 = puVar1;
      if (puVar11[2] != 0) {
        puVar10 = (undefined8 *)func_0x03ec33e4(puVar11[2],puVar7,*(undefined8 *)PTR_DAT_078311c0);
        return puVar10;
      }
    }
  }
  uVar22 = 0x6b704cc;
  func_0x03280cac(param_1);
  puVar14 = (undefined8 *)extraout_x1;
SUB_06b704cc:
  puVar1 = PTR_DAT_078311d0;
  *(undefined8 *)((long)puVar5 + -0x60) = unaff_x29;
  *(undefined8 *)((long)puVar5 + -0x58) = uVar22;
  *(undefined8 *)((long)puVar5 + -0x50) = unaff_x28;
  *(undefined8 *)((long)puVar5 + -0x48) = unaff_x27;
  *(undefined8 *)((long)puVar5 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar5 + -0x38) = puVar21;
  *(undefined **)((long)puVar5 + -0x30) = puVar20;
  *(undefined8 **)((long)puVar5 + -0x28) = puVar7;
  *(long **)((long)puVar5 + -0x20) = plVar9;
  *(undefined8 **)((long)puVar5 + -0x18) = param_5;
  *(long **)((long)puVar5 + -0x10) = plVar18;
  *(undefined8 **)((long)puVar5 + -8) = puVar11;
  if ((bRam0000000007e2a6e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48,puVar14);
    func_0x03280a18(PTR_DAT_078311d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078311e0);
    func_0x03280a18(PTR_DAT_078311e8);
    func_0x03280a18(PTR_DAT_078311f0);
    func_0x03280a18(PTR_DAT_078311f8);
    func_0x03280a18(PTR_DAT_07831200);
    func_0x03280a18(PTR_DAT_078311d0);
    bRam0000000007e2a6e0 = 1;
  }
  uVar22 = *(undefined8 *)puVar1;
  *(undefined8 *)((long)puVar5 + -0x98) = 0;
  *(undefined8 *)((long)puVar5 + -0xa0) = 0;
  *(undefined8 *)((long)puVar5 + -0x88) = 0;
  *(undefined8 *)((long)puVar5 + -0x90) = 0;
  *(undefined8 *)((long)puVar5 + -0xb8) = 0;
  *(undefined8 *)((long)puVar5 + -0xc0) = 0;
  *(undefined8 *)((long)puVar5 + -0xa8) = 0;
  *(undefined8 *)((long)puVar5 + -0xb0) = 0;
  puVar10 = (undefined8 *)func_0x03280ca0(uVar22);
  return puVar10;
}


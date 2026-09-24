/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6FEB0; Merger.MergeBoard.Systems.ItemUnboxingSystem.GetAdjacentBoxedEntities; status ok */


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
/* WARNING: Removing unreachable block (ram,0x06b7059c) */
/* WARNING: Removing unreachable block (ram,0x06b706cc) */
/* WARNING: Removing unreachable block (ram,0x06b705a0) */
/* WARNING: Removing unreachable block (ram,0x06b70698) */
/* WARNING: Removing unreachable block (ram,0x06b70688) */
/* WARNING: Removing unreachable block (ram,0x06b706a4) */

undefined8 *
Merger_MergeBoard_Systems_ItemUnboxingSystem__GetAdjacentBoxedEntities
          (long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,undefined8 *param_5,
          uint param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x1;
  undefined1 *extraout_x1_00;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *unaff_x25;
  undefined *puVar15;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  puVar12 = PTR_DAT_077c3b70;
  puVar13 = PTR_DAT_077c0f38;
  puVar2 = &uStack_70;
  puVar6 = &uStack_70;
  plVar10 = (long *)((ulong)param_3 & 0xffffffff);
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
  uStack_48 = 0;
  puVar3 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar13);
  func_0x04143c38(puVar3,*(undefined8 *)puVar12);
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 == (long *)0x0) {
LAB_06b70224:
    func_0x03280cac();
  }
  else {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_06b6ffcc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1e40,5);
LAB_06b6ffcc:
    param_3 = (long *)puVar4[1];
    plVar5 = (long *)(*(code *)*puVar4)(plVar11,plVar10);
    if (plVar5 == (long *)0x0) goto LAB_06b70224;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077617f0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b70038;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    param_3 = (long *)0x0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b70038:
    plVar11 = (long *)PTR_DAT_0774e8c8;
    plVar10 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    puVar15 = PTR_DAT_077c3b58;
    puVar14 = PTR_DAT_077617f8;
    puVar12 = PTR_DAT_0774e8e0;
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b700b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      param_3 = (long *)0x0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar10);
LAB_06b700b8:
      uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        param_2 = (undefined8 *)0x0;
        goto LAB_06b701a0;
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar14) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b70114;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar14,0);
LAB_06b70114:
      (*(code *)*puVar4)(plVar10,puVar4[1]);
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uStack_58 = param_2[3];
      uStack_60 = param_2[2];
      uVar16 = 0x6b70138;
      param_5 = param_2;
      param_3 = plVar11;
      param_4 = (undefined8 *)puVar12;
      goto SUB_06b704cc;
    }
  }
  func_0x03280cac();
  plVar5 = plVar10;
  puVar12 = puVar13;
  puVar13 = (undefined *)0x7e2a000;
  puVar15 = unaff_x25;
  while (auVar18 = func_0x03280ca4(param_2), uVar16 = auVar18._0_8_, auVar18._8_4_ == 1) {
    plVar10 = (long *)func_0x072ce910();
    param_2 = (undefined8 *)*plVar10;
    func_0x072ce920();
    plVar10 = plVar5;
    puVar14 = puVar13;
LAB_06b701a0:
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *plVar11) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b701f0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      param_3 = (long *)0x0;
      puVar6 = (undefined8 *)func_0x03256b10(plVar10);
LAB_06b701f0:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
    plVar5 = plVar10;
    puVar13 = puVar14;
    if (param_2 == (undefined8 *)0x0) {
      return puVar3;
    }
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar11) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b702c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    param_3 = (long *)0x0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b702c0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  func_0x03365958(uVar16);
  func_0x03280ca4(0);
  func_0x02f09514();
  puVar2 = &uStack_130;
  uStack_b0 = 0x6b702e4;
  uStack_88 = 0;
  puVar14 = (undefined *)0x7e2a000;
  plVar10 = (long *)(ulong)param_6;
  puStack_a8 = puVar15;
  puStack_a0 = puVar13;
  puStack_98 = puVar12;
  plStack_90 = plVar11;
  plStack_80 = plVar5;
  uStack_78 = uVar16;
  if ((bRam0000000007e2a6e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_078311b8);
    func_0x03280a18(PTR_DAT_078311c0);
    func_0x03280a18(PTR_DAT_078311c8);
    func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e2a6e1 = 1;
  }
  *(undefined1 *)param_4 = 0;
  puVar1 = PTR_DAT_078311c8;
  puVar12 = PTR_DAT_078311b8;
  puVar13 = PTR_DAT_077c0ec8;
  uStack_e0 = *(undefined4 *)(param_4 + 2);
  uStack_e8 = param_4[1];
  uStack_f0 = *param_4;
  if (param_3 != (long *)0x0) {
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uStack_e0);
    uStack_d0 = uStack_f0;
    uStack_c8 = uStack_e8;
    func_0x03d1c7a8(param_3,&uStack_d0,*(undefined8 *)PTR_DAT_07831140);
    uStack_108 = extraout_x1[1];
    uStack_110 = *extraout_x1;
    uStack_f8 = extraout_x1[3];
    uStack_100 = extraout_x1[2];
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    uStack_c0 = uStack_100;
    uStack_b8 = uStack_f8;
    func_0x03ec59a8(&uStack_d0,param_3,0,*(undefined8 *)puVar1);
    puVar14 = (undefined *)func_0x03d1ae90(param_3,*(undefined8 *)puVar13);
    param_4 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar12);
    func_0x06b9ac10(param_4,0);
    puVar13 = PTR_DAT_078101d0;
    puVar15 = puVar12;
    if (param_4 != (undefined8 *)0x0) {
      param_4[2] = param_3;
      func_0x032809c4(param_4 + 2,param_3);
      param_3 = param_4 + 4;
      *param_3 = (long)param_5;
      *(int *)(param_4 + 3) = (int)puVar14;
      func_0x032809c4(param_3,param_5);
      *(uint *)(param_4 + 7) = param_6;
      uVar8 = func_0x055ea870(param_5,*(undefined8 *)puVar13,0);
      if ((uVar8 & 1) != 0) {
        uStack_128 = extraout_x1[1];
        uStack_130 = *extraout_x1;
        uStack_118 = extraout_x1[3];
        uStack_120 = extraout_x1[2];
        auVar17 = func_0x06b706d8(uVar8,&uStack_130,param_6);
        plVar10 = auVar17._8_8_;
        param_4[5] = auVar17._0_8_;
        func_0x032809c4(param_4 + 5,auVar17._0_8_);
        param_4[6] = plVar10;
        func_0x032809c4(param_4 + 6,plVar10);
      }
      puVar15 = puVar13;
      if (extraout_x1[2] != 0) {
        puVar6 = (undefined8 *)
                 func_0x03ec33e4(extraout_x1[2],param_4,*(undefined8 *)PTR_DAT_078311c0);
        return puVar6;
      }
    }
  }
  uVar16 = 0x6b704cc;
  func_0x03280cac();
  puVar6 = (undefined8 *)extraout_x1_00;
  puVar3 = extraout_x1;
SUB_06b704cc:
  puVar13 = PTR_DAT_078311d0;
  *(undefined8 *)((long)puVar2 + -0x60) = unaff_x29;
  *(undefined8 *)((long)puVar2 + -0x58) = uVar16;
  *(undefined8 *)((long)puVar2 + -0x50) = unaff_x28;
  *(undefined8 *)((long)puVar2 + -0x48) = unaff_x27;
  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar2 + -0x38) = puVar15;
  *(undefined **)((long)puVar2 + -0x30) = puVar14;
  *(undefined8 **)((long)puVar2 + -0x28) = param_4;
  *(long **)((long)puVar2 + -0x20) = param_3;
  *(undefined8 **)((long)puVar2 + -0x18) = param_5;
  *(long **)((long)puVar2 + -0x10) = plVar10;
  *(undefined8 **)((long)puVar2 + -8) = puVar3;
  if ((bRam0000000007e2a6e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48,puVar6);
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
  uVar16 = *(undefined8 *)puVar13;
  *(undefined8 *)((long)puVar2 + -0x98) = 0;
  *(undefined8 *)((long)puVar2 + -0xa0) = 0;
  *(undefined8 *)((long)puVar2 + -0x88) = 0;
  *(undefined8 *)((long)puVar2 + -0x90) = 0;
  *(undefined8 *)((long)puVar2 + -0xb8) = 0;
  *(undefined8 *)((long)puVar2 + -0xc0) = 0;
  *(undefined8 *)((long)puVar2 + -0xa8) = 0;
  *(undefined8 *)((long)puVar2 + -0xb0) = 0;
  puVar6 = (undefined8 *)func_0x03280ca0(uVar16);
  return puVar6;
}


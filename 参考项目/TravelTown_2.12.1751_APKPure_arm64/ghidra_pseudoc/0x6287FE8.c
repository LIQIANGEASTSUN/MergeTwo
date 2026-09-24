/* Ghidra 12.1.2 native pseudocode; RVA 0x6287FE8; MergeEngine.ECS.Systems.InventorySystem.UpdateMergeItemList; status ok */

/* WARNING: Possible PIC construction at 0x063882bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x063882c0) */
/* WARNING: Removing unreachable block (ram,0x063885ac) */

void MergeEngine_ECS_Systems_InventorySystem__UpdateMergeItemList(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = PTR_DAT_077cf4d0;
  puVar2 = PTR_DAT_077cf4c8;
  plVar18 = (long *)0x7e25000;
  if ((bRam0000000007e254e6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e73d8);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_077e7378);
    func_0x03280a18(PTR_DAT_077e7380);
    func_0x03280a18(PTR_DAT_077e7388);
    func_0x03280a18(PTR_DAT_077e73e0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_077e73e8);
    func_0x03280a18(PTR_DAT_077db450);
    func_0x03280a18(PTR_DAT_077db458);
    func_0x03280a18(PTR_DAT_077e7398);
    func_0x03280a18(PTR_DAT_077cf4c8);
    func_0x03280a18(PTR_DAT_077cf4d0);
    bRam0000000007e254e6 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar8 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04143c38(puVar8,*(undefined8 *)puVar2);
  puVar7 = PTR_DAT_077e73e0;
  puVar6 = PTR_DAT_077e7380;
  puVar5 = PTR_DAT_077e7378;
  puVar4 = PTR_DAT_077db458;
  puVar3 = PTR_DAT_077db450;
  puVar2 = PTR_DAT_0777a498;
  if (param_2 != 0) {
    func_0x04145068(&uStack_98,param_2,*(undefined8 *)PTR_DAT_077e7398);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    while( true ) {
      uVar9 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar6);
      unaff_x24 = puVar6;
      unaff_x25 = puVar2;
      unaff_x26 = puVar3;
      unaff_x27 = (undefined8 *)puVar7;
      unaff_x28 = (undefined8 *)puVar4;
      unaff_x29 = (undefined8 *)puVar5;
      if ((uVar9 & 1) == 0) {
        func_0x051159b0(&uStack_80,*(undefined8 *)puVar5);
        goto LAB_06388234;
      }
      uVar10 = func_0x06388768(uVar9,uStack_70);
      plVar18 = *(long **)(param_1 + 0x60);
      if (plVar18 == (long *)0x0) break;
      lVar13 = *plVar18;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
            goto LAB_063881b8;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar2,9);
LAB_063881b8:
      uVar10 = (*(code *)*puVar11)(plVar18,uVar10,puVar11[1]);
      if (puVar8 == (undefined8 *)0x0) goto LAB_063882e8;
      lVar13 = puVar8[2];
      lVar14 = *(long *)puVar3;
      *(int *)((long)puVar8 + 0x1c) = *(int *)((long)puVar8 + 0x1c) + 1;
      if (lVar13 == 0) {
        func_0x03280cac();
        break;
      }
      uVar1 = *(uint *)(puVar8 + 3);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(puVar8 + 3) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        func_0x032809c4();
      }
      else {
        func_0x0414446c(puVar8,uVar10,
                        *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    func_0x03280cac();
LAB_063882e8:
    func_0x03280cac();
  }
  do {
    do {
      auVar21 = func_0x03280cac();
      lStack_a8 = auVar21._0_8_;
      if (auVar21._8_4_ != 1) {
LAB_06388330:
        plVar12 = (long *)0x0;
        func_0x051159b0(&uStack_80,*unaff_x29);
        func_0x03365958(lStack_a8);
        func_0x03280ca4(0);
        uVar10 = 0x6388364;
        param_1 = func_0x02f09514();
        goto SUB_06388364;
      }
      plVar12 = (long *)func_0x072ce910();
      lVar13 = *plVar12;
      func_0x072ce920();
      func_0x051159b0(&uStack_80,*unaff_x29);
      if (lVar13 != 0) {
        lStack_a8 = func_0x03280ca4(lVar13);
        goto LAB_06388330;
      }
LAB_06388234:
    } while (puVar8 == (undefined8 *)0x0);
    uVar10 = func_0x04144694(puVar8,*unaff_x28);
    *(undefined8 *)(param_1 + 0xf0) = uVar10;
    func_0x032809c4();
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    plVar12 = (long *)func_0x03280ca0(*unaff_x27);
    func_0x053569b8(plVar12,param_1,*(undefined8 *)PTR_DAT_077e73e8,0);
    uVar10 = func_0x03d50a94(param_2,plVar12,*(undefined8 *)PTR_DAT_077e73d8);
    uVar10 = func_0x03d5ffd0(uVar10,*(undefined8 *)PTR_DAT_0774ea58);
  } while (puVar8 == (undefined8 *)0x0);
  puVar8 = puVar8 + 8;
  *puVar8 = uVar10;
  func_0x032809c4(puVar8,uVar10);
  uVar10 = 0x63882c0;
  lStack_a8 = param_1;
SUB_06388364:
  plVar16 = (long *)0x7e25000;
  uStack_100 = uVar10;
  puStack_f0 = unaff_x28;
  puStack_e8 = unaff_x27;
  puStack_e0 = unaff_x26;
  puStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  plStack_c8 = plVar18;
  plStack_c0 = plVar12;
  puStack_b8 = puVar8;
  lStack_b0 = param_2;
  if ((bRam0000000007e254e7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e73f0);
    func_0x03280a18(PTR_DAT_077e73f8);
    func_0x03280a18(PTR_DAT_077db270);
    func_0x03280a18(PTR_DAT_077db278);
    func_0x03280a18(PTR_DAT_077db280);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077c20b8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077db290);
    func_0x03280a18(PTR_DAT_077e7300);
    bRam0000000007e254e7 = 1;
  }
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  plVar19 = plVar18;
  if (*(long *)(param_1 + 0xe0) == 0) goto LAB_06388690;
  func_0x04fe2f04(*(long *)(param_1 + 0xe0),*(undefined8 *)PTR_DAT_077e73f0);
  plVar17 = (long *)PTR_DAT_0774e8c8;
  if (*(long *)(param_1 + 0xf0) == 0) goto LAB_06388690;
  plVar16 = (long *)func_0x04545bc8(*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_077e7300);
  puVar6 = PTR_DAT_077e73f8;
  puVar5 = PTR_DAT_077db290;
  puVar4 = PTR_DAT_077db278;
  plVar19 = (long *)PTR_DAT_077db270;
  puVar3 = PTR_DAT_077c20b8;
  puVar2 = PTR_DAT_0774e8e0;
  if (plVar16 == (long *)0x0) goto LAB_06388694;
  do {
    do {
      lVar13 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_063884d4;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar2,0);
LAB_063884d4:
      uVar9 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      if ((uVar9 & 1) == 0) {
        param_1 = 0;
        goto LAB_063885dc;
      }
      lVar13 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06388530;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar3,0);
LAB_06388530:
      puVar8 = (undefined8 *)(*(code *)*puVar8)(plVar16,puVar8[1]);
      lVar13 = func_0x063887d4(param_1,puVar8);
    } while (lVar13 == 0);
    func_0x04145068(&uStack_138,lVar13,*(undefined8 *)puVar5);
    uStack_118 = uStack_130;
    uStack_120 = uStack_138;
    uStack_110 = uStack_128;
    while (uVar9 = func_0x051159b4(&uStack_120,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        auVar20 = func_0x03280cac();
        goto LAB_06388668;
      }
      func_0x04fe2d68(*(long *)(param_1 + 0xe0),uStack_110,puVar8,*(undefined8 *)puVar6);
    }
    puVar8 = (undefined8 *)0x0;
    func_0x051159b0(&uStack_120,*plVar19);
  } while( true );
LAB_06388668:
  lStack_f8 = auVar20._8_8_;
  param_1 = auVar20._0_8_;
  func_0x051159b0(&uStack_120,*plVar19);
  if (puVar8 == (undefined8 *)0x0) {
    if ((int)lStack_f8 != 1) {
      lStack_f8 = param_1;
      if (plVar16 == (long *)0x0) goto LAB_06388748;
      lVar13 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 == 0) goto LAB_06388720;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      goto LAB_06388708;
    }
    plVar18 = (long *)func_0x072ce910();
    param_1 = *plVar18;
    func_0x072ce920();
LAB_063885dc:
    if (plVar16 != (long *)0x0) {
      lVar13 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *plVar17) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0638862c;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar16,*plVar17,0);
LAB_0638862c:
      (*(code *)*puVar11)(plVar16,puVar11[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  else {
    func_0x03280ca4(puVar8);
    func_0x03280ca4(puVar8);
    plVar12 = plVar17;
LAB_06388690:
    plVar17 = plVar12;
    func_0x03280cac();
    plVar18 = plVar19;
LAB_06388694:
    func_0x03280cac();
    plVar19 = plVar18;
  }
  auVar20 = func_0x03280ca4(param_1);
  goto LAB_06388668;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_06388708:
    if (*(long *)(piVar15 + -2) == *plVar17) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0638873c;
    }
  }
LAB_06388720:
  puVar8 = (undefined8 *)func_0x03256b10(plVar16,*plVar17,0);
LAB_0638873c:
  (*(code *)*puVar8)(plVar16,puVar8[1]);
LAB_06388748:
  func_0x03365958(lStack_f8);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}


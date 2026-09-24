/* Ghidra 12.1.2 native pseudocode; RVA 0x6288364; MergeEngine.ECS.Systems.InventorySystem.RecreateRecursiveExpends; status ok */

/* WARNING: Removing unreachable block (ram,0x063885ac) */

void MergeEngine_ECS_Systems_InventorySystem__RecreateRecursiveExpends(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long unaff_x21;
  long *unaff_x22;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined1 auVar14 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar12 = (long *)0x7e25000;
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
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar8 = unaff_x23;
  if (*(long *)(param_1 + 0xe0) == 0) goto LAB_06388690;
  func_0x04fe2f04(*(long *)(param_1 + 0xe0),*(undefined8 *)PTR_DAT_077e73f0);
  plVar13 = (long *)PTR_DAT_0774e8c8;
  if (*(long *)(param_1 + 0xf0) == 0) goto LAB_06388690;
  plVar12 = (long *)func_0x04545bc8(*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_077e7300);
  puVar5 = PTR_DAT_077e73f8;
  puVar4 = PTR_DAT_077db290;
  puVar3 = PTR_DAT_077db278;
  puVar8 = (undefined8 *)PTR_DAT_077db270;
  puVar2 = PTR_DAT_077c20b8;
  puVar1 = PTR_DAT_0774e8e0;
  if (plVar12 == (long *)0x0) goto LAB_06388694;
  do {
    do {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_063884d4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar1,0);
LAB_063884d4:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        param_1 = 0;
        goto LAB_063885dc;
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06388530;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar2,0);
LAB_06388530:
      unaff_x21 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      lVar9 = func_0x063887d4(param_1,unaff_x21);
    } while (lVar9 == 0);
    func_0x04145068(&uStack_98,lVar9,*(undefined8 *)puVar4);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    while (uVar10 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        auVar14 = func_0x03280cac();
        goto LAB_06388668;
      }
      func_0x04fe2d68(*(long *)(param_1 + 0xe0),uStack_70,unaff_x21,*(undefined8 *)puVar5);
    }
    unaff_x21 = 0;
    func_0x051159b0(&uStack_80,*puVar8);
  } while( true );
LAB_06388668:
  param_1 = auVar14._0_8_;
  func_0x051159b0(&uStack_80,*puVar8);
  if (unaff_x21 == 0) {
    if (auVar14._8_4_ != 1) {
      if (plVar12 == (long *)0x0) goto LAB_06388748;
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_06388720;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_06388708;
    }
    plVar7 = (long *)func_0x072ce910();
    param_1 = *plVar7;
    func_0x072ce920();
LAB_063885dc:
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *plVar13) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0638862c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*plVar13,0);
LAB_0638862c:
      (*(code *)*puVar6)(plVar12,puVar6[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  else {
    func_0x03280ca4(unaff_x21);
    func_0x03280ca4(unaff_x21);
    unaff_x22 = plVar13;
LAB_06388690:
    plVar13 = unaff_x22;
    func_0x03280cac();
    unaff_x23 = puVar8;
LAB_06388694:
    func_0x03280cac();
    puVar8 = unaff_x23;
  }
  auVar14 = func_0x03280ca4(param_1);
  goto LAB_06388668;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_06388708:
    if (*(long *)(piVar11 + -2) == *plVar13) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0638873c;
    }
  }
LAB_06388720:
  puVar8 = (undefined8 *)func_0x03256b10(plVar12,*plVar13,0);
LAB_0638873c:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
LAB_06388748:
  func_0x03365958(param_1);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}


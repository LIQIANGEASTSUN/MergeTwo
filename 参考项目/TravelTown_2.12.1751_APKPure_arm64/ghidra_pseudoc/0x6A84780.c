/* Ghidra 12.1.2 native pseudocode; RVA 0x6A84780; Merger.MergeBoard.Logic.ToolSpawnHandler.BoostRequiredToolWeights; status ok */


ulong Merger_MergeBoard_Logic_ToolSpawnHandler__BoostRequiredToolWeights
                (ulong param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 extraout_x1;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar8 = param_1;
  if ((bRam0000000007e2a77b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    uVar8 = func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e2a77b = 1;
  }
  puVar4 = PTR_DAT_07780118;
  puVar3 = PTR_DAT_07780110;
  puVar2 = PTR_DAT_07780108;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar14 = 0;
      do {
        uVar8 = func_0x041e65b8(param_2,iVar14,*(undefined8 *)puVar3);
        if (param_3 == 0) goto LAB_06b848d4;
        uVar8 = func_0x053bbf78(param_3,uVar8 >> 0x20,*(undefined8 *)puVar2);
        if ((uVar8 & 1) != 0) {
          fVar17 = (float)func_0x06b8328c(param_1);
          iVar7 = func_0x041e65b8(param_2,iVar14,*(undefined8 *)puVar3);
          uVar9 = func_0x041e65b8(param_2,iVar14,*(undefined8 *)puVar3);
          uVar8 = 0x80000000;
          if (fVar17 * (float)iVar7 != INFINITY) {
            uVar8 = (ulong)(uint)(int)(fVar17 * (float)iVar7);
          }
          uVar8 = func_0x041e660c(param_2,iVar14,uVar8 | uVar9 & 0xffffffff00000000,
                                  *(undefined8 *)puVar4);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_2 + 0x18));
    }
    return uVar8;
  }
LAB_06b848d4:
  func_0x03280cac();
  puVar3 = PTR_DAT_07831bf0;
  puVar2 = PTR_DAT_07831bb0;
  if ((bRam0000000007e2a77f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831bf8);
    func_0x03280a18(PTR_DAT_078149e8);
    func_0x03280a18(PTR_DAT_07831c00);
    func_0x03280a18(PTR_DAT_07831c08);
    func_0x03280a18(PTR_DAT_077800b8);
    func_0x03280a18(PTR_DAT_07831c10);
    func_0x03280a18(PTR_DAT_0777c2e0);
    func_0x03280a18(PTR_DAT_07831c18);
    func_0x03280a18(PTR_DAT_07831c20);
    func_0x03280a18(PTR_DAT_07831c28);
    func_0x03280a18(PTR_DAT_07831c30);
    func_0x03280a18(PTR_DAT_07831bf0);
    func_0x03280a18(PTR_DAT_07831bb0);
    bRam0000000007e2a77f = 1;
  }
  lVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06b84fb0(lVar10,0);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar11 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_07831c00;
  lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
  if (lVar13 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar11 = *(long *)puVar2;
    }
    uVar15 = **(undefined8 **)(lVar11 + 0xb8);
    lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c10);
    func_0x0534bcd8(lVar13,uVar15,*(undefined8 *)PTR_DAT_07831c18,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar12 = lVar13;
    func_0x032809c4(plVar12,lVar13);
  }
  uVar15 = func_0x03d85660(extraout_x1,lVar13,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c(lVar11);
    lVar11 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_07831bf8;
  puVar3 = PTR_DAT_078149e8;
  lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x30);
  if (lVar13 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar16 = **(undefined8 **)(lVar11 + 0xb8);
    lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c08);
    func_0x0534bef4(lVar13,uVar16,*(undefined8 *)PTR_DAT_07831c20,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar12 = lVar13;
    func_0x032809c4(plVar12,lVar13);
  }
  uVar15 = func_0x03d4c5c8(uVar15,lVar13,*(undefined8 *)puVar4);
  lVar11 = func_0x03d5fe5c(uVar15,*(undefined8 *)puVar3);
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + 0x10);
    *plVar12 = lVar11;
    func_0x032809c4(plVar12,lVar11);
    puVar2 = PTR_DAT_07831c30;
    puVar1 = (undefined8 *)PTR_DAT_07831c28;
    if (*plVar12 != 0) {
      iVar14 = *(int *)(*plVar12 + 0x18);
      uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800b8);
      if (1 < iVar14) {
        puVar1 = (undefined8 *)puVar2;
      }
      func_0x0535aa98(uVar8,lVar10,*puVar1,0);
      return uVar8;
    }
  }
  uVar8 = func_0x03280cac();
  puVar6 = PTR_DAT_07780140;
  puVar5 = PTR_DAT_07780138;
  puVar4 = PTR_DAT_07780130;
  puVar3 = PTR_DAT_07780128;
  puVar2 = PTR_DAT_07780120;
  if ((bRam0000000007e2a780 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e2a780 = 1;
  }
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06898a68(uVar15,0);
  *(undefined8 *)(uVar8 + 0x68) = uVar15;
  func_0x032809c4((undefined8 *)(uVar8 + 0x68),uVar15);
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04fb4e7c(uVar15,*(undefined8 *)puVar3);
  *(undefined8 *)(uVar8 + 0x70) = uVar15;
  func_0x032809c4((undefined8 *)(uVar8 + 0x70),uVar15);
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04f610a8(uVar15,*(undefined8 *)puVar5);
  *(undefined8 *)(uVar8 + 0x78) = uVar15;
  func_0x032809c4((undefined8 *)(uVar8 + 0x78),uVar15);
  return uVar8;
}


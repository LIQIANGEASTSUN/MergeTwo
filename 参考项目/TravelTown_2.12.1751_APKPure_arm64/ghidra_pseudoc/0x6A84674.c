/* Ghidra 12.1.2 native pseudocode; RVA 0x6A84674; Merger.MergeBoard.Logic.ToolSpawnHandler.ApplyMetagameWeightBoosts; status ok */


ulong Merger_MergeBoard_Logic_ToolSpawnHandler__ApplyMetagameWeightBoosts
                (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  long lVar21;
  ulong uVar22;
  long *unaff_x23;
  long *plVar23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x30;
  float fVar24;
  undefined8 unaff_d8;
  undefined1 auVar25 [16];
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  uVar16 = param_3;
  if ((bRam0000000007e2a779 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780098);
    func_0x03280a18(PTR_DAT_077ec098);
    bRam0000000007e2a779 = 1;
  }
  plVar23 = *(long **)(param_1 + 0x30);
  uVar15 = 0x7e2a000;
  if (plVar23 != (long *)0x0) {
    lVar17 = *plVar23;
    lVar21 = *(long *)(param_1 + 0x68);
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077ec098) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 10) * 0x10 + 0x138);
          goto LAB_06b8471c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    uVar16 = 10;
    puVar11 = (undefined8 *)func_0x03256b10(plVar23);
LAB_06b8471c:
    uVar12 = (*(code *)*puVar11)(plVar23,puVar11[1]);
    uVar15 = 0;
    if (lVar21 != 0) {
      uVar16 = func_0x06897e70(lVar21,uVar12,param_3,0);
      if ((uVar16 == 0) || (*(int *)(uVar16 + 0x20) < 1)) {
        return uVar16;
      }
      goto LAB_06b84780;
    }
  }
  unaff_x22 = uVar15;
  unaff_x30 = 0x6b84780;
  auVar25 = func_0x03280cac();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
  unaff_x21 = param_3;
  unaff_x23 = plVar23;
LAB_06b84780:
  lVar17 = auVar25._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  uVar22 = 0x7e2a000;
  uVar18 = auVar25._0_8_;
  if ((bRam0000000007e2a77b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    uVar18 = func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e2a77b = 1;
  }
  puVar4 = PTR_DAT_07780118;
  puVar3 = PTR_DAT_07780110;
  puVar2 = PTR_DAT_07780108;
  if (lVar17 != 0) {
    if (0 < *(int *)(lVar17 + 0x18)) {
      uVar22 = 0;
      do {
        uVar18 = func_0x041e65b8(lVar17,uVar22,*(undefined8 *)puVar3);
        unaff_x23 = (long *)puVar3;
        unaff_x24 = puVar2;
        unaff_x25 = puVar4;
        if (uVar16 == 0) goto LAB_06b848d4;
        uVar18 = func_0x053bbf78(uVar16,uVar18 >> 0x20,*(undefined8 *)puVar2);
        if ((uVar18 & 1) != 0) {
          fVar24 = (float)func_0x06b8328c(auVar25._0_8_);
          iVar10 = func_0x041e65b8(lVar17,uVar22,*(undefined8 *)puVar3);
          uVar13 = func_0x041e65b8(lVar17,uVar22,*(undefined8 *)puVar3);
          uVar18 = 0x80000000;
          if (fVar24 * (float)iVar10 != INFINITY) {
            uVar18 = (ulong)(uint)(int)(fVar24 * (float)iVar10);
          }
          uVar18 = func_0x041e660c(lVar17,uVar22,uVar18 | uVar13 & 0xffffffff00000000,
                                   *(undefined8 *)puVar4);
        }
        uVar1 = (int)uVar22 + 1;
        uVar22 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar17 + 0x18));
    }
    return uVar18;
  }
LAB_06b848d4:
  func_0x03280cac();
  puVar3 = PTR_DAT_07831bf0;
  puVar2 = PTR_DAT_07831bb0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x6b848d8;
  *(undefined **)((long)register0x00000008 + -0x98) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x90) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x88) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x80) = uVar22;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x78) = auVar25;
  *(ulong *)((long)register0x00000008 + -0x68) = uVar16;
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
  lVar17 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06b84fb0(lVar17,0);
  lVar21 = *(long *)puVar2;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar21 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_07831c00;
  lVar20 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x28);
  if (lVar20 == 0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar21 = *(long *)puVar2;
    }
    uVar22 = **(ulong **)(lVar21 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c10);
    func_0x0534bcd8(lVar20,uVar22,*(undefined8 *)PTR_DAT_07831c18,0);
    plVar23 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar23 = lVar20;
    func_0x032809c4(plVar23,lVar20);
  }
  plVar23 = (long *)func_0x03d85660(extraout_x1,lVar20,*(undefined8 *)puVar3);
  lVar21 = *(long *)puVar2;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    func_0x03280b8c(lVar21);
    lVar21 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_07831bf8;
  puVar3 = PTR_DAT_078149e8;
  lVar20 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x30);
  if (lVar20 == 0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c(lVar21);
      lVar21 = *(long *)puVar2;
    }
    uVar22 = **(ulong **)(lVar21 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c08);
    func_0x0534bef4(lVar20,uVar22,*(undefined8 *)PTR_DAT_07831c20,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar14 = lVar20;
    func_0x032809c4(plVar14,lVar20);
  }
  uVar15 = func_0x03d4c5c8(plVar23,lVar20,*(undefined8 *)puVar4);
  lVar21 = func_0x03d5fe5c(uVar15,*(undefined8 *)puVar3);
  if (lVar17 != 0) {
    plVar23 = (long *)(lVar17 + 0x10);
    *plVar23 = lVar21;
    func_0x032809c4(plVar23,lVar21);
    puVar5 = PTR_DAT_07831c30;
    puVar11 = (undefined8 *)PTR_DAT_07831c28;
    if (*plVar23 != 0) {
      iVar10 = *(int *)(*plVar23 + 0x18);
      uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800b8);
      if (1 < iVar10) {
        puVar11 = (undefined8 *)puVar5;
      }
      func_0x0535aa98(uVar16,lVar17,*puVar11,0);
      return uVar16;
    }
  }
  uVar16 = func_0x03280cac();
  puVar9 = PTR_DAT_07780140;
  puVar8 = PTR_DAT_07780138;
  puVar7 = PTR_DAT_07780130;
  puVar6 = PTR_DAT_07780128;
  puVar5 = PTR_DAT_07780120;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x6b84b78;
  *(undefined **)((long)register0x00000008 + -0xd8) = puVar4;
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar3;
  *(undefined **)((long)register0x00000008 + -200) = puVar2;
  *(ulong *)((long)register0x00000008 + -0xc0) = uVar22;
  *(long *)((long)register0x00000008 + -0xb8) = lVar20;
  *(long **)((long)register0x00000008 + -0xb0) = plVar23;
  *(long *)((long)register0x00000008 + -0xa8) = lVar17;
  if ((bRam0000000007e2a780 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e2a780 = 1;
  }
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar9);
  func_0x06898a68(uVar15,0);
  *(undefined8 *)(uVar16 + 0x68) = uVar15;
  func_0x032809c4((undefined8 *)(uVar16 + 0x68),uVar15);
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04fb4e7c(uVar15,*(undefined8 *)puVar6);
  *(undefined8 *)(uVar16 + 0x70) = uVar15;
  func_0x032809c4((undefined8 *)(uVar16 + 0x70),uVar15);
  uVar15 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x04f610a8(uVar15,*(undefined8 *)puVar8);
  *(undefined8 *)(uVar16 + 0x78) = uVar15;
  func_0x032809c4((undefined8 *)(uVar16 + 0x78),uVar15);
  return uVar16;
}


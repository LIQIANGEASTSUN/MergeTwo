/* Ghidra 12.1.2 native pseudocode; RVA 0x6A843FC; Merger.MergeBoard.Logic.ToolSpawnHandler.CalculateCurrentToolAmounts; status ok */


long * Merger_MergeBoard_Logic_ToolSpawnHandler__CalculateCurrentToolAmounts
                 (long param_1,long param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code **ppcVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong unaff_x26;
  undefined *unaff_x27;
  undefined *puVar23;
  undefined *unaff_x28;
  undefined *puVar24;
  code *pcVar25;
  float fVar26;
  undefined8 unaff_d8;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  code *pcStack_a0;
  long *plStack_98;
  undefined *puStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  puVar17 = PTR_DAT_077bf888;
  puVar24 = PTR_DAT_0777ff70;
  plVar20 = (long *)PTR_DAT_0777ff68;
  ppcVar3 = (code **)auStack_70;
  if ((bRam0000000007e2a77a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_07831ba8);
    func_0x03280a18(PTR_DAT_0777ff70);
    func_0x03280a18(PTR_DAT_07780070);
    func_0x03280a18(PTR_DAT_07780078);
    func_0x03280a18(PTR_DAT_0777ff68);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077bf888);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2a77a = 1;
  }
  lStack_68 = 0;
  plVar6 = (long *)func_0x03280ca0(*plVar20);
  func_0x04f5a6b8(plVar6,*(undefined8 *)puVar24);
  lVar7 = *(long *)puVar17;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar7 = *(long *)puVar17;
  }
  puVar23 = PTR_DAT_07831ba8;
  puVar18 = PTR_DAT_07780078;
  puVar24 = PTR_DAT_07773688;
  puVar22 = (undefined *)**(undefined8 **)(lVar7 + 0xb8);
  puVar21 = (undefined *)0x7e2a000;
  if (puVar22 != (undefined *)0x0) {
    if (0 < (int)*(ulong *)(puVar22 + 0x18)) {
      unaff_x26 = 0;
      uVar14 = *(ulong *)(puVar22 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= unaff_x26) goto LAB_06b84670;
        plVar20 = *(long **)(param_1 + 0x40);
        puVar17 = (undefined *)(ulong)*(uint *)(puVar22 + unaff_x26 * 4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        puVar8 = (undefined *)func_0x0624cb20(puVar17,0);
        unaff_x27 = puVar23;
        unaff_x28 = puVar24;
        if (plVar20 == (long *)0x0) goto LAB_06b8466c;
        lVar7 = *plVar20;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar24) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_06b845ac;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar24,1);
LAB_06b845ac:
        param_3 = (long *)puVar9[1];
        lVar7 = (*(code *)*puVar9)(plVar20,puVar8);
        puVar21 = puVar8;
        if ((lVar7 == 0) || (plVar6 == (long *)0x0)) goto LAB_06b8466c;
        param_3 = (long *)(ulong)*(uint *)(lVar7 + 0x20);
        func_0x04f5b488(plVar6,puVar17,param_3,*(undefined8 *)puVar18);
        if (param_2 == 0) goto LAB_06b8466c;
        param_3 = &lStack_68;
        uVar14 = func_0x04f63934(param_2,puVar17,param_3,*(undefined8 *)puVar23);
        if ((uVar14 & 1) != 0) {
          param_3 = *(long **)PTR_DAT_07780070;
          uVar4 = func_0x04f5b400(plVar6,puVar17);
          if (lStack_68 == 0) goto LAB_06b8466c;
          plVar20 = (long *)(ulong)uVar4;
          iVar5 = func_0x06b9a174(lStack_68,0);
          param_3 = (long *)(ulong)(iVar5 + uVar4);
          func_0x04f5b488(plVar6,puVar17,param_3,*(undefined8 *)puVar18);
        }
        uVar14 = (ulong)*(uint *)(puVar22 + 0x18);
        unaff_x26 = unaff_x26 + 1;
      } while ((long)unaff_x26 < (long)(int)*(uint *)(puVar22 + 0x18));
    }
    return plVar6;
  }
LAB_06b8466c:
  puVar24 = unaff_x28;
  puVar23 = unaff_x27;
  func_0x03280cac();
LAB_06b84670:
  auVar27 = func_0x03280cb4();
  pcStack_a0 = Merger_MergeBoard_Logic_ToolSpawnHandler__ApplyMetagameWeightBoosts;
  puVar18 = (undefined *)0x7e2a000;
  plVar13 = param_3;
  plStack_98 = plVar20;
  puStack_90 = puVar17;
  plStack_88 = plVar6;
  lStack_80 = param_1;
  lStack_78 = param_2;
  if ((bRam0000000007e2a779 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780098);
    func_0x03280a18(PTR_DAT_077ec098);
    bRam0000000007e2a779 = 1;
  }
  plVar20 = *(long **)(auVar27._0_8_ + 0x30);
  if (plVar20 != (long *)0x0) {
    lVar7 = *plVar20;
    lVar19 = *(long *)(auVar27._0_8_ + 0x68);
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077ec098) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 10) * 0x10 + 0x138);
          goto LAB_06b8471c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    plVar13 = (long *)0xa;
    puVar9 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b8471c:
    uVar10 = (*(code *)*puVar9)(plVar20,puVar9[1]);
    puVar18 = (undefined *)0x0;
    if (lVar19 != 0) {
      plVar13 = (long *)func_0x06897e70(lVar19,uVar10,param_3,0);
      auVar1._8_8_ = lStack_78;
      auVar1._0_8_ = lStack_80;
      if ((plVar13 == (long *)0x0) ||
         (param_3 = plStack_88, puVar18 = puStack_90, plVar20 = plStack_98, pcVar25 = pcStack_a0,
         (int)plVar13[4] < 1)) {
        return plVar13;
      }
      goto code_r0x06b84780;
    }
  }
  auVar28 = func_0x03280cac();
  ppcVar3 = &pcStack_a0;
  pcVar25 = Merger_MergeBoard_Logic_ToolSpawnHandler__BoostRequiredToolWeights;
  auVar1 = auVar27;
  auVar27 = auVar28;
code_r0x06b84780:
  lVar7 = auVar27._8_8_;
  *(undefined8 *)((long)ppcVar3 + -0x60) = unaff_d8;
  *(code **)((long)ppcVar3 + -0x58) = pcVar25;
  *(undefined **)((long)ppcVar3 + -0x50) = puVar24;
  *(undefined **)((long)ppcVar3 + -0x48) = puVar23;
  *(ulong *)((long)ppcVar3 + -0x40) = unaff_x26;
  *(undefined **)((long)ppcVar3 + -0x38) = puVar22;
  *(undefined **)((long)ppcVar3 + -0x30) = puVar21;
  *(long **)((long)ppcVar3 + -0x28) = plVar20;
  *(undefined **)((long)ppcVar3 + -0x20) = puVar18;
  *(long **)((long)ppcVar3 + -0x18) = param_3;
  *(undefined1 (*) [16])((long)ppcVar3 + -0x10) = auVar1;
  uVar14 = 0x7e2a000;
  plVar6 = auVar27._0_8_;
  if ((bRam0000000007e2a77b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780108);
    func_0x03280a18(PTR_DAT_077800b0);
    func_0x03280a18(PTR_DAT_07780110);
    plVar6 = (long *)func_0x03280a18(PTR_DAT_07780118);
    bRam0000000007e2a77b = 1;
  }
  puVar18 = PTR_DAT_07780118;
  puVar17 = PTR_DAT_07780110;
  puVar24 = PTR_DAT_07780108;
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar14 = 0;
      do {
        uVar11 = func_0x041e65b8(lVar7,uVar14,*(undefined8 *)puVar17);
        plVar20 = (long *)puVar17;
        puVar21 = puVar24;
        puVar22 = puVar18;
        if (plVar13 == (long *)0x0) goto LAB_06b848d4;
        plVar6 = (long *)func_0x053bbf78(plVar13,uVar11 >> 0x20,*(undefined8 *)puVar24);
        if (((ulong)plVar6 & 1) != 0) {
          fVar26 = (float)func_0x06b8328c(auVar27._0_8_);
          iVar5 = func_0x041e65b8(lVar7,uVar14,*(undefined8 *)puVar17);
          uVar12 = func_0x041e65b8(lVar7,uVar14,*(undefined8 *)puVar17);
          uVar11 = 0x80000000;
          if (fVar26 * (float)iVar5 != INFINITY) {
            uVar11 = (ulong)(uint)(int)(fVar26 * (float)iVar5);
          }
          plVar6 = (long *)func_0x041e660c(lVar7,uVar14,uVar11 | uVar12 & 0xffffffff00000000,
                                           *(undefined8 *)puVar18);
        }
        uVar4 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar4;
      } while ((int)uVar4 < *(int *)(lVar7 + 0x18));
    }
    return plVar6;
  }
LAB_06b848d4:
  func_0x03280cac();
  puVar17 = PTR_DAT_07831bf0;
  puVar24 = PTR_DAT_07831bb0;
  *(undefined8 *)((long)ppcVar3 + -0xa0) = 0x6b848d8;
  *(undefined **)((long)ppcVar3 + -0x98) = puVar22;
  *(undefined **)((long)ppcVar3 + -0x90) = puVar21;
  *(long **)((long)ppcVar3 + -0x88) = plVar20;
  *(ulong *)((long)ppcVar3 + -0x80) = uVar14;
  *(undefined1 (*) [16])((long)ppcVar3 + -0x78) = auVar27;
  *(long **)((long)ppcVar3 + -0x68) = plVar13;
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
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar17);
  func_0x06b84fb0(lVar7,0);
  lVar19 = *(long *)puVar24;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar19 = *(long *)puVar24;
  }
  puVar17 = PTR_DAT_07831c00;
  lVar16 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x28);
  if (lVar16 == 0) {
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar19 = *(long *)puVar24;
    }
    uVar14 = **(ulong **)(lVar19 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c10);
    func_0x0534bcd8(lVar16,uVar14,*(undefined8 *)PTR_DAT_07831c18,0);
    plVar20 = (long *)(*(long *)(*(long *)puVar24 + 0xb8) + 0x28);
    *plVar20 = lVar16;
    func_0x032809c4(plVar20,lVar16);
  }
  plVar20 = (long *)func_0x03d85660(extraout_x1,lVar16,*(undefined8 *)puVar17);
  lVar19 = *(long *)puVar24;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    func_0x03280b8c(lVar19);
    lVar19 = *(long *)puVar24;
  }
  puVar18 = PTR_DAT_07831bf8;
  puVar17 = PTR_DAT_078149e8;
  lVar16 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x30);
  if (lVar16 == 0) {
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
      lVar19 = *(long *)puVar24;
    }
    uVar14 = **(ulong **)(lVar19 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831c08);
    func_0x0534bef4(lVar16,uVar14,*(undefined8 *)PTR_DAT_07831c20,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar24 + 0xb8) + 0x30);
    *plVar6 = lVar16;
    func_0x032809c4(plVar6,lVar16);
  }
  uVar10 = func_0x03d4c5c8(plVar20,lVar16,*(undefined8 *)puVar18);
  lVar19 = func_0x03d5fe5c(uVar10,*(undefined8 *)puVar17);
  if (lVar7 != 0) {
    plVar20 = (long *)(lVar7 + 0x10);
    *plVar20 = lVar19;
    func_0x032809c4(plVar20,lVar19);
    puVar23 = PTR_DAT_07831c30;
    puVar9 = (undefined8 *)PTR_DAT_07831c28;
    if (*plVar20 != 0) {
      iVar5 = *(int *)(*plVar20 + 0x18);
      plVar20 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077800b8);
      if (1 < iVar5) {
        puVar9 = (undefined8 *)puVar23;
      }
      func_0x0535aa98(plVar20,lVar7,*puVar9,0);
      return plVar20;
    }
  }
  plVar6 = (long *)func_0x03280cac();
  puVar2 = PTR_DAT_07780140;
  puVar8 = PTR_DAT_07780138;
  puVar22 = PTR_DAT_07780130;
  puVar21 = PTR_DAT_07780128;
  puVar23 = PTR_DAT_07780120;
  *(undefined8 *)((long)ppcVar3 + -0xe0) = 0x6b84b78;
  *(undefined **)((long)ppcVar3 + -0xd8) = puVar18;
  *(undefined **)((long)ppcVar3 + -0xd0) = puVar17;
  *(undefined **)((long)ppcVar3 + -200) = puVar24;
  *(ulong *)((long)ppcVar3 + -0xc0) = uVar14;
  *(long *)((long)ppcVar3 + -0xb8) = lVar16;
  *(long **)((long)ppcVar3 + -0xb0) = plVar20;
  *(long *)((long)ppcVar3 + -0xa8) = lVar7;
  if ((bRam0000000007e2a780 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e2a780 = 1;
  }
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06898a68(lVar7,0);
  plVar6[0xd] = lVar7;
  func_0x032809c4(plVar6 + 0xd,lVar7);
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar23);
  func_0x04fb4e7c(lVar7,*(undefined8 *)puVar21);
  plVar6[0xe] = lVar7;
  func_0x032809c4(plVar6 + 0xe,lVar7);
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar22);
  func_0x04f610a8(lVar7,*(undefined8 *)puVar8);
  plVar6[0xf] = lVar7;
  func_0x032809c4(plVar6 + 0xf,lVar7);
  return plVar6;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A759E4; Merger.MergeBoard.Systems.SplitSystem.PerformSplit; status ok */


/* WARNING: Possible PIC construction at 0x06b75b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b75b80) */
/* WARNING: Removing unreachable block (ram,0x06b75c24) */
/* WARNING: Removing unreachable block (ram,0x06b75c70) */
/* WARNING: Removing unreachable block (ram,0x06b75ce0) */
/* WARNING: Removing unreachable block (ram,0x06b75d40) */

ulong Merger_MergeBoard_Systems_SplitSystem__PerformSplit
                (long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x26;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 *puStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  undefined1 auStack_2c0 [128];
  undefined8 uStack_240;
  uint uStack_238;
  undefined8 uStack_234;
  undefined8 uStack_22c;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined1 auStack_1e8 [72];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [72];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  puVar6 = (undefined8 *)auStack_2c0;
  lVar13 = tpidr_el0;
  lStack_68 = *(long *)(lVar13 + 0x28);
  plVar15 = param_4;
  if ((bRam0000000007e2a700 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_07831518);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07831520);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a700 = 1;
  }
  puVar16 = param_2;
  if (*(int *)(param_2 + 2) != 4) {
    puVar16 = param_3;
  }
  plVar18 = (long *)*puVar16;
  if (*(int *)(param_2 + 2) != 4) {
    param_3 = param_2;
  }
  func_0x072ce970(auStack_158,puVar16 + 1,0x48);
  plVar11 = (long *)0x48;
  func_0x072ce970(auStack_e8,auStack_158);
  uStack_90 = *(undefined4 *)((long)param_3 + 0x1c);
  uStack_98 = *(undefined8 *)((long)param_3 + 0x14);
  uStack_a0 = *(undefined8 *)((long)param_3 + 0xc);
  uVar20 = *param_3;
  uVar1 = *(uint *)(param_3 + 1);
  puVar16 = (undefined8 *)(ulong)uVar1;
  uStack_178 = param_3[6];
  uStack_180 = param_3[5];
  uStack_168 = param_3[8];
  uStack_170 = param_3[7];
  uVar22 = param_3[4];
  uStack_160 = param_3[9];
  uStack_110 = uStack_180;
  uStack_108 = uStack_178;
  uStack_100 = uStack_170;
  uStack_f8 = uStack_168;
  uStack_f0 = uStack_160;
  uStack_80 = uStack_a0;
  uStack_78 = uStack_98;
  uStack_70 = uStack_90;
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x03280cac();
LAB_06b75d84:
    auVar24 = func_0x072ce990();
    puVar17 = auVar24._8_8_;
    lVar13 = auVar24._0_8_;
    puVar7 = &uStack_320;
    puVar6 = &uStack_320;
    puVar10 = &uStack_320;
    pcStack_2f0 = Merger_MergeBoard_Systems_SplitSystem__GetOriginalSplitterPosition;
    uVar21 = 0x7e2a000;
    plVar12 = plVar11;
    uStack_2e8 = uVar20;
    plStack_2e0 = plVar18;
    puStack_2d8 = puVar16;
    lStack_2d0 = param_1;
    plStack_2c8 = param_4;
    if ((bRam0000000007e2a701 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831528);
      bRam0000000007e2a701 = 1;
    }
    puVar19 = PTR_DAT_07831528;
    uStack_300 = 0;
    uStack_2f8 = 0;
    plVar18 = plVar11;
    if (*plVar11 != 0) {
      plVar12 = *(long **)PTR_DAT_07831528;
      uVar9 = func_0x03d1f364(*plVar11,&uStack_2f8);
      if ((uVar9 & 1) != 0) {
LAB_06b75e2c:
        return (ulong)(uint)uStack_2f8;
      }
      plVar18 = (long *)puVar19;
      if (*plVar15 != 0) {
        uVar9 = func_0x03d1f364(*plVar15,&uStack_300,*(undefined8 *)puVar19);
        if ((uVar9 & 1) != 0) {
          uStack_2f8._0_4_ = (uint)uStack_300;
          goto LAB_06b75e2c;
        }
        uStack_318 = puVar17[1];
        uStack_320 = *puVar17;
        uStack_308 = puVar17[3];
        uStack_310 = puVar17[2];
        plVar12 = (long *)(ulong)*(uint *)(plVar15 + 1);
        uVar20 = 0x6b75e2c;
        lVar8 = lVar13;
        goto SUB_06b75f0c;
      }
    }
    uVar23 = 0x6b75e44;
    auVar24 = func_0x03280cac();
    lVar8 = auVar24._8_8_;
    param_1 = auVar24._0_8_;
  }
  else {
    plVar11 = (long *)0x0;
    lVar8 = func_0x06b883d4(*(long *)(param_1 + 0x28),uVar22);
    uVar9 = func_0x055f7aac(lVar8,0);
    unaff_x26 = lVar8;
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar13 + 0x28) == lStack_68) {
        return uVar9;
      }
      goto LAB_06b75d84;
    }
    lStack_198 = param_4[1];
    lStack_1a0 = *param_4;
    lStack_188 = param_4[3];
    lStack_190 = param_4[2];
    param_3 = &uStack_240;
    func_0x072ce970(auStack_1e8,auStack_e8,0x48);
    uStack_1f8 = uStack_f0;
    uStack_210 = uStack_108;
    uStack_218 = uStack_110;
    uStack_200 = uStack_f8;
    uStack_208 = uStack_100;
    uStack_22c = uStack_78;
    uStack_234 = uStack_80;
    uStack_224 = uStack_70;
    uStack_240 = uVar20;
    uStack_238 = uVar1;
    uStack_220 = uVar22;
    plStack_1f0 = plVar18;
    uVar9 = Merger_MergeBoard_Systems_SplitSystem__GetOriginalSplitterPosition
                      (param_1,&lStack_1a0,&plStack_1f0,&uStack_240);
    plVar12 = (long *)(uVar9 & 0xffffffff);
    uVar23 = 0x6b75b80;
    plVar15 = param_4;
    lVar13 = param_1;
    puVar17 = puVar16;
    uVar21 = uVar20;
  }
  puVar7 = (undefined8 *)((long)puVar6 + -0x30);
  *(undefined8 *)((long)puVar6 + -0x30) = uVar23;
  *(long **)((long)puVar6 + -0x20) = plVar18;
  *(undefined8 **)((long)puVar6 + -0x18) = puVar17;
  *(long *)((long)puVar6 + -0x10) = lVar13;
  *(long **)((long)puVar6 + -8) = plVar15;
  puVar19 = (undefined *)0x7e2a000;
  plVar15 = (long *)((ulong)plVar12 & 0xffffffff);
  if ((bRam0000000007e2a702 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    bRam0000000007e2a702 = 1;
  }
  plVar18 = *(long **)(param_1 + 0x20);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c16b0) {
          puVar16 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_06b75edc;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c16b0,1);
LAB_06b75edc:
                    /* WARNING: Could not recover jumptable at 0x06b75f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)*puVar16)(plVar18,lVar8,plVar15,0x100,0,0,puVar16[1]);
    return uVar9;
  }
  uVar20 = 0x6b75f0c;
  auVar25 = func_0x03280cac();
  puVar10 = auVar25._8_8_;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar25._0_8_;
SUB_06b75f0c:
  puVar5 = PTR_DAT_07831530;
  puVar4 = PTR_DAT_0782fea0;
  puVar3 = PTR_DAT_0782fe98;
  puVar2 = PTR_DAT_0782fe50;
  *(undefined8 *)((long)puVar7 + -0x50) = uVar20;
  *(long *)((long)puVar7 + -0x40) = unaff_x26;
  *(undefined8 **)((long)puVar7 + -0x38) = param_3;
  *(undefined8 *)((long)puVar7 + -0x30) = uVar22;
  *(undefined8 *)((long)puVar7 + -0x28) = uVar21;
  *(undefined **)((long)puVar7 + -0x20) = puVar19;
  *(long *)((long)puVar7 + -0x18) = auVar24._8_8_;
  *(long *)((long)puVar7 + -0x10) = lVar8;
  *(long **)((long)puVar7 + -8) = plVar15;
  if ((bRam0000000007e2a703 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_07831538);
    func_0x03280a18(PTR_DAT_07831530);
    bRam0000000007e2a703 = 1;
  }
  *(undefined4 *)((long)puVar7 + -0x44) = 0;
  *(undefined8 *)((long)puVar7 + -0x88) = 0;
  *(undefined8 *)((long)puVar7 + -0x90) = 0;
  *(undefined8 *)((long)puVar7 + -0x78) = 0;
  *(undefined8 *)((long)puVar7 + -0x80) = 0;
  uVar23 = *puVar10;
  uVar21 = puVar10[3];
  uVar22 = puVar10[2];
  uVar20 = *(undefined8 *)puVar2;
  *(undefined8 *)((long)puVar7 + -0xa8) = puVar10[1];
  *(undefined8 *)((long)puVar7 + -0xb0) = uVar23;
  *(undefined8 *)((long)puVar7 + -0x98) = uVar21;
  *(undefined8 *)((long)puVar7 + -0xa0) = uVar22;
  uVar20 = func_0x03d19c6c(uVar20);
  uVar22 = *(undefined8 *)puVar4;
  *(undefined8 *)((long)puVar7 + -0x68) = *(undefined8 *)((long)puVar7 + -0xa8);
  *(undefined8 *)((long)puVar7 + -0x70) = *(undefined8 *)((long)puVar7 + -0xb0);
  *(undefined8 *)((long)puVar7 + -0x58) = *(undefined8 *)((long)puVar7 + -0x98);
  *(undefined8 *)((long)puVar7 + -0x60) = *(undefined8 *)((long)puVar7 + -0xa0);
  func_0x03e64a64((undefined1 *)((long)puVar7 + -0x90),(undefined1 *)((long)puVar7 + -0x70),uVar20,0
                  ,uVar22);
  uVar20 = func_0x04485bc8((undefined1 *)((long)puVar7 + -0x90),*(undefined8 *)puVar3);
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c(lVar13);
    lVar13 = *(long *)puVar5;
  }
  puVar2 = PTR_DAT_0782fe60;
  puVar19 = PTR_DAT_077c1cf8;
  lVar8 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar5;
    }
    uVar22 = **(undefined8 **)(lVar13 + 0xb8);
    lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(lVar8,uVar22,*(undefined8 *)PTR_DAT_07831538,0);
    plVar15 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar15 = lVar8;
    func_0x032809c4(plVar15,lVar8);
  }
  uVar20 = func_0x03d4d48c(uVar20,lVar8,*(undefined8 *)puVar2);
  uVar20 = func_0x03d5fde0(uVar20,*(undefined8 *)puVar19);
  plVar15 = *(long **)(auVar24._0_8_ + 0x10);
  if (plVar15 == (long *)0x0) {
    uVar9 = func_0x03280cac();
    return uVar9;
  }
  lVar13 = *plVar15;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar16 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
        goto LAB_06b76128;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar16 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_077c1e40,2);
LAB_06b76128:
  (*(code *)*puVar16)(plVar15,uVar20,(ulong)plVar12 & 0xffffffff,
                      (undefined1 *)((long)puVar7 + -0x44),puVar16[1]);
  return (ulong)*(uint *)((long)puVar7 + -0x44);
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A75914; Merger.MergeBoard.Systems.SplitSystem.CanPerformSplit; status ok */


/* WARNING: Possible PIC construction at 0x06b75b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b75b70) */
/* WARNING: Removing unreachable block (ram,0x06b75b94) */
/* WARNING: Removing unreachable block (ram,0x06b75c24) */
/* WARNING: Removing unreachable block (ram,0x06b75c70) */
/* WARNING: Removing unreachable block (ram,0x06b75ce0) */
/* WARNING: Removing unreachable block (ram,0x06b75d40) */

ulong Merger_MergeBoard_Systems_SplitSystem__CanPerformSplit
                (long param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 unaff_x26;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 auStack_390 [2];
  long *plStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long *plStack_308;
  long lStack_280;
  uint uStack_278;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 auStack_228 [72];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [72];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  int aiStack_38 [2];
  int aiStack_28 [2];
  
  plVar11 = param_3;
  if ((bRam0000000007e2a6ff & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830a08);
    bRam0000000007e2a6ff = 1;
  }
  puVar19 = PTR_DAT_07830a08;
  aiStack_28[0] = 0;
  aiStack_38[0] = 0;
  if (param_2 != 0) {
    plVar11 = *(long **)PTR_DAT_07830a08;
    uVar8 = func_0x03d1e850(param_2,aiStack_28);
    if ((uVar8 & 1) == 0) {
LAB_06b759a8:
      uVar7 = 0;
LAB_06b759ac:
      return (ulong)(uVar7 & 1);
    }
    if (param_3 != (long *)0x0) {
      plVar11 = *(long **)puVar19;
      uVar8 = func_0x03d1e850(param_3,aiStack_38);
      if (((uVar8 & 1) == 0) || ((aiStack_28[0] != 1 && (aiStack_38[0] != 1)))) goto LAB_06b759a8;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar7 = func_0x06b87ca0(*(long *)(param_1 + 0x28),param_2,param_3,0);
        goto LAB_06b759ac;
      }
    }
  }
  auVar27 = func_0x03280cac();
  plVar12 = auVar27._8_8_;
  lVar20 = auVar27._0_8_;
  lVar14 = tpidr_el0;
  lStack_a8 = *(long *)(lVar14 + 0x28);
  plVar17 = param_4;
  if ((bRam0000000007e2a700 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_07831518);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07831520);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a700 = 1;
  }
  bVar6 = (int)plVar12[2] != 4;
  plVar13 = plVar12;
  if (bVar6) {
    plVar13 = plVar11;
  }
  lVar18 = *plVar13;
  if (bVar6) {
    plVar11 = plVar12;
  }
  func_0x072ce970(auStack_198,plVar13 + 1,0x48);
  plVar12 = (long *)0x48;
  func_0x072ce970(auStack_128,auStack_198);
  uStack_d0 = *(undefined4 *)((long)plVar11 + 0x1c);
  uStack_d8 = *(undefined8 *)((long)plVar11 + 0x14);
  uStack_e0 = *(undefined8 *)((long)plVar11 + 0xc);
  lVar21 = *plVar11;
  uVar7 = *(uint *)(plVar11 + 1);
  lStack_1b8 = plVar11[6];
  lStack_1c0 = plVar11[5];
  lStack_1a8 = plVar11[8];
  lStack_1b0 = plVar11[7];
  lVar22 = plVar11[4];
  lStack_1a0 = plVar11[9];
  lStack_150 = lStack_1c0;
  lStack_148 = lStack_1b8;
  lStack_140 = lStack_1b0;
  lStack_138 = lStack_1a8;
  lStack_130 = lStack_1a0;
  uStack_c0 = uStack_e0;
  uStack_b8 = uStack_d8;
  uStack_b0 = uStack_d0;
  if (*(long *)(lVar20 + 0x28) == 0) {
    func_0x03280cac();
LAB_06b75d84:
    uVar23 = 0x6b75d88;
    auVar27 = func_0x072ce990();
  }
  else {
    plVar12 = (long *)0x0;
    unaff_x26 = func_0x06b883d4(*(long *)(lVar20 + 0x28),lVar22);
    uVar8 = func_0x055f7aac(unaff_x26,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar14 + 0x28) == lStack_a8) {
        return uVar8;
      }
      goto LAB_06b75d84;
    }
    lStack_1d8 = param_4[1];
    lStack_1e0 = *param_4;
    lStack_1c8 = param_4[3];
    lStack_1d0 = param_4[2];
    plVar11 = &lStack_280;
    func_0x072ce970(auStack_228,auStack_128,0x48);
    auVar27._8_8_ = &lStack_1e0;
    auVar27._0_8_ = lVar20;
    plVar12 = &lStack_230;
    plVar17 = &lStack_280;
    lStack_238 = lStack_130;
    lStack_230 = lVar18;
    lStack_250 = lStack_148;
    lStack_258 = lStack_150;
    lStack_240 = lStack_138;
    lStack_248 = lStack_140;
    lStack_280 = lVar21;
    uStack_278 = uVar7;
    uStack_26c = uStack_b8;
    uStack_274 = uStack_c0;
    uStack_264 = uStack_b0;
    lStack_260 = lVar22;
    uVar23 = 0x6b75b70;
  }
  puVar10 = auVar27._8_8_;
  puVar5 = &uStack_360;
  puVar9 = &uStack_360;
  uStack_330 = uVar23;
  lStack_328 = lVar21;
  lStack_320 = lVar18;
  uStack_318 = (ulong)uVar7;
  lStack_310 = lVar20;
  plStack_308 = param_4;
  plVar13 = plVar12;
  if ((bRam0000000007e2a701 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831528);
    bRam0000000007e2a701 = 1;
  }
  puVar19 = PTR_DAT_07831528;
  uStack_340 = 0;
  uStack_338 = 0;
  if (*plVar12 != 0) {
    plVar13 = *(long **)PTR_DAT_07831528;
    uVar8 = func_0x03d1f364(*plVar12,&uStack_338);
    if ((uVar8 & 1) != 0) {
LAB_06b75e2c:
      return (ulong)(uint)uStack_338;
    }
    plVar12 = (long *)puVar19;
    if (*plVar17 != 0) {
      uVar8 = func_0x03d1f364(*plVar17,&uStack_340,*(undefined8 *)puVar19);
      if ((uVar8 & 1) != 0) {
        uStack_338._0_4_ = (uint)uStack_340;
        goto LAB_06b75e2c;
      }
      uStack_358 = puVar10[1];
      uStack_360 = *puVar10;
      uStack_348 = puVar10[3];
      uStack_350 = puVar10[2];
      plVar13 = (long *)(ulong)*(uint *)(plVar17 + 1);
      uVar24 = 0x6b75e2c;
      plVar16 = plVar17;
      uVar23 = auVar27._0_8_;
      goto SUB_06b75f0c;
    }
  }
  auVar28 = func_0x03280cac();
  uVar23 = auVar28._8_8_;
  puVar5 = auStack_390;
  auStack_390[0] = 0x6b75e44;
  puVar19 = (undefined *)0x7e2a000;
  plVar16 = (long *)((ulong)plVar13 & 0xffffffff);
  plStack_380 = plVar12;
  plStack_368 = plVar17;
  if ((bRam0000000007e2a702 & 1) == 0) {
    puStack_378 = puVar10;
    uStack_370 = auVar27._0_8_;
    func_0x03280a18(PTR_DAT_077c16b0);
    auVar27._8_8_ = puStack_378;
    auVar27._0_8_ = uStack_370;
    bRam0000000007e2a702 = 1;
  }
  puStack_378 = auVar27._8_8_;
  uStack_370 = auVar27._0_8_;
  plVar17 = *(long **)(auVar28._0_8_ + 0x20);
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c16b0) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_06b75edc;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077c16b0,1);
    auVar27._8_8_ = puStack_378;
    auVar27._0_8_ = uStack_370;
LAB_06b75edc:
    puStack_378 = auVar27._8_8_;
    uStack_370 = auVar27._0_8_;
                    /* WARNING: Could not recover jumptable at 0x06b75f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)*puVar9)(plVar17,uVar23,plVar16,0x100,0,0,puVar9[1]);
    return uVar8;
  }
  uVar24 = 0x6b75f0c;
  auVar28 = func_0x03280cac();
  puVar9 = auVar28._8_8_;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar28._0_8_;
SUB_06b75f0c:
  puVar4 = PTR_DAT_07831530;
  puVar3 = PTR_DAT_0782fea0;
  puVar2 = PTR_DAT_0782fe98;
  puVar1 = PTR_DAT_0782fe50;
  *(undefined8 *)((long)puVar5 + -0x50) = uVar24;
  *(undefined8 *)((long)puVar5 + -0x40) = unaff_x26;
  *(long **)((long)puVar5 + -0x38) = plVar11;
  *(long *)((long)puVar5 + -0x30) = lVar22;
  *(undefined8 *)((long)puVar5 + -0x28) = 0x7e2a000;
  *(undefined **)((long)puVar5 + -0x20) = puVar19;
  *(long *)((long)puVar5 + -0x18) = auVar27._8_8_;
  *(undefined8 *)((long)puVar5 + -0x10) = uVar23;
  *(long **)((long)puVar5 + -8) = plVar16;
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
  *(undefined4 *)((long)puVar5 + -0x44) = 0;
  *(undefined8 *)((long)puVar5 + -0x88) = 0;
  *(undefined8 *)((long)puVar5 + -0x90) = 0;
  *(undefined8 *)((long)puVar5 + -0x78) = 0;
  *(undefined8 *)((long)puVar5 + -0x80) = 0;
  uVar26 = *puVar9;
  uVar25 = puVar9[3];
  uVar24 = puVar9[2];
  uVar23 = *(undefined8 *)puVar1;
  *(undefined8 *)((long)puVar5 + -0xa8) = puVar9[1];
  *(undefined8 *)((long)puVar5 + -0xb0) = uVar26;
  *(undefined8 *)((long)puVar5 + -0x98) = uVar25;
  *(undefined8 *)((long)puVar5 + -0xa0) = uVar24;
  uVar23 = func_0x03d19c6c(uVar23);
  uVar24 = *(undefined8 *)puVar3;
  *(undefined8 *)((long)puVar5 + -0x68) = *(undefined8 *)((long)puVar5 + -0xa8);
  *(undefined8 *)((long)puVar5 + -0x70) = *(undefined8 *)((long)puVar5 + -0xb0);
  *(undefined8 *)((long)puVar5 + -0x58) = *(undefined8 *)((long)puVar5 + -0x98);
  *(undefined8 *)((long)puVar5 + -0x60) = *(undefined8 *)((long)puVar5 + -0xa0);
  func_0x03e64a64((undefined1 *)((long)puVar5 + -0x90),(undefined1 *)((long)puVar5 + -0x70),uVar23,0
                  ,uVar24);
  uVar23 = func_0x04485bc8((undefined1 *)((long)puVar5 + -0x90),*(undefined8 *)puVar2);
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c(lVar14);
    lVar14 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_0782fe60;
  puVar19 = PTR_DAT_077c1cf8;
  lVar20 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (lVar20 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar4;
    }
    uVar24 = **(undefined8 **)(lVar14 + 0xb8);
    lVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(lVar20,uVar24,*(undefined8 *)PTR_DAT_07831538,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar11 = lVar20;
    func_0x032809c4(plVar11,lVar20);
  }
  uVar23 = func_0x03d4d48c(uVar23,lVar20,*(undefined8 *)puVar1);
  uVar23 = func_0x03d5fde0(uVar23,*(undefined8 *)puVar19);
  plVar11 = *(long **)(auVar27._0_8_ + 0x10);
  if (plVar11 == (long *)0x0) {
    uVar8 = func_0x03280cac();
    return uVar8;
  }
  lVar14 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar8 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 2) * 0x10 + 0x138);
        goto LAB_06b76128;
      }
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1e40,2);
LAB_06b76128:
  (*(code *)*puVar9)(plVar11,uVar23,(ulong)plVar13 & 0xffffffff,(undefined1 *)((long)puVar5 + -0x44)
                     ,puVar9[1]);
  return (ulong)*(uint *)((long)puVar5 + -0x44);
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A75450; Merger.MergeBoard.Systems.SplitSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b75750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b757a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b75b70) */
/* WARNING: Removing unreachable block (ram,0x06b757a4) */
/* WARNING: Removing unreachable block (ram,0x06b75754) */
/* WARNING: Removing unreachable block (ram,0x06b75758) */
/* WARNING: Removing unreachable block (ram,0x06b75b94) */
/* WARNING: Removing unreachable block (ram,0x06b75c24) */
/* WARNING: Removing unreachable block (ram,0x06b75c70) */
/* WARNING: Removing unreachable block (ram,0x06b75ce0) */
/* WARNING: Removing unreachable block (ram,0x06b75d40) */

ulong Merger_MergeBoard_Systems_SplitSystem__Tick(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined *unaff_x28;
  undefined *puVar26;
  undefined *unaff_x29;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined8 auStack_670 [2];
  long *plStack_660;
  undefined8 *puStack_658;
  undefined8 uStack_650;
  long *plStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  long lStack_600;
  ulong uStack_5f8;
  long lStack_5f0;
  long *plStack_5e8;
  long lStack_560;
  uint uStack_558;
  undefined8 uStack_554;
  undefined8 uStack_54c;
  undefined4 uStack_544;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined1 auStack_508 [72];
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined1 auStack_478 [72];
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined1 auStack_408 [72];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  long lStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  long lStack_330;
  long *plStack_328;
  int aiStack_318 [2];
  undefined8 uStack_310;
  int aiStack_308 [2];
  long *plStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_294 [80];
  undefined1 auStack_244 [68];
  long lStack_200;
  undefined1 auStack_1f8 [8];
  long lStack_1f0;
  long lStack_1e8;
  long *plStack_1b0;
  uint uStack_1a8;
  undefined auStack_1a4 [68];
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  puVar26 = PTR_DAT_07831510;
  puVar20 = PTR_DAT_078309f0;
  puVar22 = PTR_DAT_078309e8;
  puVar24 = PTR_DAT_078309d8;
  puVar27 = PTR_DAT_0782fe68;
  lStack_2d8 = tpidr_el0;
  lStack_68 = *(long *)(lStack_2d8 + 0x28);
  lVar25 = 0x7e2a000;
  if ((bRam0000000007e2a6fe & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831510);
    func_0x03280a18(PTR_DAT_078309d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_078309f8);
    func_0x03280a18(PTR_DAT_07830a00);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_078309f0);
    func_0x03280a18(PTR_DAT_078309e8);
    bRam0000000007e2a6fe = 1;
  }
  uStack_70 = 0;
  uStack_c0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_158 = param_2[1];
  lStack_160 = *param_2;
  lStack_148 = param_2[3];
  lStack_150 = param_2[2];
  plVar6 = (long *)func_0x03d1a358(*(undefined8 *)puVar24);
  plVar7 = (long *)func_0x03280ca0(*(undefined8 *)puVar27);
  func_0x06015d08(plVar7,0,*(undefined8 *)puVar26,0);
  plVar14 = *(long **)puVar22;
  auStack_1f8 = (undefined1  [8])uStack_158;
  lStack_200 = lStack_160;
  lStack_1e8 = lStack_148;
  lStack_1f0 = lStack_150;
  plVar13 = plVar7;
  func_0x03e65644(&uStack_140,&lStack_200,plVar6);
  uStack_118 = uStack_138;
  uStack_120 = uStack_140;
  uStack_108 = uStack_128;
  uStack_110 = uStack_130;
  plVar8 = (long *)func_0x0448d49c(&uStack_120,*(undefined8 *)puVar20);
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
LAB_06b7584c:
    func_0x03280cac();
    goto LAB_06b75850;
  }
  lVar15 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_078309f8) {
        puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        plVar12 = plVar13;
        goto LAB_06b75610;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  plVar12 = (long *)0x0;
  puVar9 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b75610:
  plVar6 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar26 = PTR_DAT_07830a00;
  puVar27 = PTR_DAT_0774e8e0;
  plVar13 = plVar12;
  if (plVar6 == (long *)0x0) goto LAB_06b7584c;
  plVar7 = (long *)(auStack_1f8 + 4);
  puVar20 = auStack_1a4;
  puStack_2c8 = auStack_244;
  puStack_2d0 = auStack_294;
  do {
    lVar15 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar27) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          plVar13 = plVar12;
          goto LAB_06b756a0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar13 = (long *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b756a0:
    uVar16 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    if ((uVar16 & 1) == 0) {
      param_2 = (long *)0x0;
      lVar15 = lVar25;
      goto LAB_06b757ac;
    }
    lVar25 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar26) {
          puVar9 = (undefined8 *)(lVar25 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b756fc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar26,0);
LAB_06b756fc:
    (*(code *)*puVar9)(&lStack_200,plVar6,puVar9[1]);
    lVar25 = lStack_200;
    uVar2 = auStack_1f8._0_4_;
    puVar22 = (undefined *)((ulong)auStack_1f8 & 0xffffffff);
    func_0x072ce970(&uStack_b0,plVar7,0x44);
    uVar5 = uStack_1a8;
    plVar13 = plStack_1b0;
    puVar24 = (undefined *)(ulong)uStack_1a8;
    plVar12 = (long *)0x44;
    func_0x072ce970(&uStack_100,puVar20);
  } while (uVar2 != uVar5);
  uVar28 = 0x6b75754;
  lVar18 = param_1;
  lVar15 = lVar25;
  goto SUB_06b75914;
LAB_06b757ac:
  if (plVar6 != (long *)0x0) {
    lVar25 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar25 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b75804;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar13 = (long *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b75804:
    uVar16 = (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  lVar25 = lVar15;
  unaff_x28 = puVar26;
  unaff_x29 = puVar27;
  if (param_2 == (long *)0x0) {
    if (*(long *)(lStack_2d8 + 0x28) == lStack_68) {
      return uVar16;
    }
  }
  else {
LAB_06b75850:
    func_0x03280ca4(param_2);
    lVar15 = lVar25;
    puVar26 = unaff_x28;
    puVar27 = unaff_x29;
  }
  auVar34 = func_0x072ce990();
  lVar18 = auVar34._0_8_;
  if (auVar34._8_4_ != 1) goto LAB_06b7588c;
  puVar9 = (undefined8 *)func_0x072ce910(lVar18);
  param_2 = (long *)*puVar9;
  uVar16 = func_0x072ce920();
  goto LAB_06b757ac;
LAB_06b7588c:
  param_2 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    lVar25 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar9 = (undefined8 *)(lVar25 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b758f0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar13 = (long *)0x0;
    puVar9 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b758f0:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  func_0x03365958(lVar18);
  func_0x03280ca4(0);
  uVar28 = 0x6b75914;
  auVar32 = func_0x02f09514();
  lVar25 = auVar32._8_8_;
  param_1 = auVar32._0_8_;
SUB_06b75914:
  plVar8 = plVar13;
  uStack_310 = uVar28;
  plStack_300 = plVar7;
  lStack_2f8 = lVar18;
  plStack_2f0 = param_2;
  plStack_2e8 = plVar6;
  if ((bRam0000000007e2a6ff & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830a08);
    bRam0000000007e2a6ff = 1;
  }
  puVar1 = PTR_DAT_07830a08;
  aiStack_308[0] = 0;
  aiStack_318[0] = 0;
  puVar19 = (undefined *)0x7e2a000;
  if (lVar25 != 0) {
    plVar8 = *(long **)PTR_DAT_07830a08;
    uVar16 = func_0x03d1e850(lVar25,aiStack_308);
    if ((uVar16 & 1) == 0) {
LAB_06b759a8:
      uVar5 = 0;
LAB_06b759ac:
      return (ulong)(uVar5 & 1);
    }
    puVar19 = puVar1;
    if (plVar13 != (long *)0x0) {
      plVar8 = *(long **)puVar1;
      uVar16 = func_0x03d1e850(plVar13,aiStack_318);
      if (((uVar16 & 1) == 0) || ((aiStack_308[0] != 1 && (aiStack_318[0] != 1))))
      goto LAB_06b759a8;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar5 = func_0x06b87ca0(*(long *)(param_1 + 0x28),lVar25,plVar13,0);
        goto LAB_06b759ac;
      }
    }
  }
  auVar32 = func_0x03280cac();
  plVar6 = auVar32._8_8_;
  lVar10 = auVar32._0_8_;
  uStack_378 = 0x6b759e4;
  lVar18 = tpidr_el0;
  lStack_388 = *(long *)(lVar18 + 0x28);
  plVar7 = plVar14;
  puStack_380 = puVar27;
  puStack_370 = puVar26;
  lStack_360 = lVar15;
  puStack_358 = puVar24;
  puStack_350 = puVar22;
  puStack_348 = puVar20;
  puStack_340 = puVar19;
  lStack_338 = param_1;
  lStack_330 = lVar25;
  plStack_328 = plVar13;
  if ((bRam0000000007e2a700 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_07831518);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07831520);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a700 = 1;
  }
  bVar4 = (int)plVar6[2] != 4;
  plVar13 = plVar6;
  if (bVar4) {
    plVar13 = plVar8;
  }
  lVar25 = *plVar13;
  if (bVar4) {
    plVar8 = plVar6;
  }
  func_0x072ce970(auStack_478,plVar13 + 1,0x48);
  plVar13 = (long *)0x48;
  func_0x072ce970(auStack_408,auStack_478);
  uStack_3b0 = *(undefined4 *)((long)plVar8 + 0x1c);
  uStack_3b8 = *(undefined8 *)((long)plVar8 + 0x14);
  uStack_3c0 = *(undefined8 *)((long)plVar8 + 0xc);
  lVar21 = *plVar8;
  uVar5 = *(uint *)(plVar8 + 1);
  lStack_498 = plVar8[6];
  lStack_4a0 = plVar8[5];
  lStack_488 = plVar8[8];
  lStack_490 = plVar8[7];
  lVar23 = plVar8[4];
  lStack_480 = plVar8[9];
  lStack_430 = lStack_4a0;
  lStack_428 = lStack_498;
  lStack_420 = lStack_490;
  lStack_418 = lStack_488;
  lStack_410 = lStack_480;
  uStack_3a0 = uStack_3c0;
  uStack_398 = uStack_3b8;
  uStack_390 = uStack_3b0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    func_0x03280cac();
LAB_06b75d84:
    uVar28 = 0x6b75d88;
    auVar32 = func_0x072ce990();
  }
  else {
    plVar13 = (long *)0x0;
    lVar15 = func_0x06b883d4(*(long *)(lVar10 + 0x28),lVar23);
    uVar16 = func_0x055f7aac(lVar15,0);
    if ((uVar16 & 1) != 0) {
      if (*(long *)(lVar18 + 0x28) == lStack_388) {
        return uVar16;
      }
      goto LAB_06b75d84;
    }
    lStack_4b8 = plVar14[1];
    lStack_4c0 = *plVar14;
    lStack_4a8 = plVar14[3];
    lStack_4b0 = plVar14[2];
    plVar8 = &lStack_560;
    func_0x072ce970(auStack_508,auStack_408,0x48);
    auVar32._8_8_ = &lStack_4c0;
    auVar32._0_8_ = lVar10;
    plVar13 = &lStack_510;
    plVar7 = &lStack_560;
    lStack_518 = lStack_410;
    lStack_510 = lVar25;
    lStack_530 = lStack_428;
    lStack_538 = lStack_430;
    lStack_520 = lStack_418;
    lStack_528 = lStack_420;
    lStack_560 = lVar21;
    uStack_558 = uVar5;
    uStack_54c = uStack_398;
    uStack_554 = uStack_3a0;
    uStack_544 = uStack_390;
    lStack_540 = lVar23;
    uVar28 = 0x6b75b70;
  }
  puVar11 = auVar32._8_8_;
  puVar3 = &uStack_640;
  puVar9 = &uStack_640;
  uStack_610 = uVar28;
  lStack_608 = lVar21;
  lStack_600 = lVar25;
  uStack_5f8 = (ulong)uVar5;
  lStack_5f0 = lVar10;
  plStack_5e8 = plVar14;
  plVar6 = plVar13;
  if ((bRam0000000007e2a701 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831528);
    bRam0000000007e2a701 = 1;
  }
  puVar20 = PTR_DAT_07831528;
  uStack_620 = 0;
  uStack_618 = 0;
  if (*plVar13 != 0) {
    plVar6 = *(long **)PTR_DAT_07831528;
    uVar16 = func_0x03d1f364(*plVar13,&uStack_618);
    if ((uVar16 & 1) != 0) {
LAB_06b75e2c:
      return (ulong)(uint)uStack_618;
    }
    plVar13 = (long *)puVar20;
    if (*plVar7 != 0) {
      uVar16 = func_0x03d1f364(*plVar7,&uStack_620,*(undefined8 *)puVar20);
      if ((uVar16 & 1) != 0) {
        uStack_618._0_4_ = (uint)uStack_620;
        goto LAB_06b75e2c;
      }
      uStack_638 = puVar11[1];
      uStack_640 = *puVar11;
      uStack_628 = puVar11[3];
      uStack_630 = puVar11[2];
      plVar6 = (long *)(ulong)*(uint *)(plVar7 + 1);
      uVar29 = 0x6b75e2c;
      plVar14 = plVar7;
      uVar28 = auVar32._0_8_;
      goto SUB_06b75f0c;
    }
  }
  auVar33 = func_0x03280cac();
  uVar28 = auVar33._8_8_;
  puVar3 = auStack_670;
  auStack_670[0] = 0x6b75e44;
  puVar20 = (undefined *)0x7e2a000;
  plVar14 = (long *)((ulong)plVar6 & 0xffffffff);
  plStack_660 = plVar13;
  plStack_648 = plVar7;
  if ((bRam0000000007e2a702 & 1) == 0) {
    puStack_658 = puVar11;
    uStack_650 = auVar32._0_8_;
    func_0x03280a18(PTR_DAT_077c16b0);
    auVar32._8_8_ = puStack_658;
    auVar32._0_8_ = uStack_650;
    bRam0000000007e2a702 = 1;
  }
  puStack_658 = auVar32._8_8_;
  uStack_650 = auVar32._0_8_;
  plVar7 = *(long **)(auVar33._0_8_ + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar25 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c16b0) {
          puVar9 = (undefined8 *)(lVar25 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_06b75edc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c16b0,1);
    auVar32._8_8_ = puStack_658;
    auVar32._0_8_ = uStack_650;
LAB_06b75edc:
    puStack_658 = auVar32._8_8_;
    uStack_650 = auVar32._0_8_;
                    /* WARNING: Could not recover jumptable at 0x06b75f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar16 = (*(code *)*puVar9)(plVar7,uVar28,plVar14,0x100,0,0,puVar9[1]);
    return uVar16;
  }
  uVar29 = 0x6b75f0c;
  auVar33 = func_0x03280cac();
  puVar9 = auVar33._8_8_;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = auVar33._0_8_;
SUB_06b75f0c:
  puVar26 = PTR_DAT_07831530;
  puVar22 = PTR_DAT_0782fea0;
  puVar24 = PTR_DAT_0782fe98;
  puVar27 = PTR_DAT_0782fe50;
  *(undefined8 *)((long)puVar3 + -0x50) = uVar29;
  *(long *)((long)puVar3 + -0x40) = lVar15;
  *(long **)((long)puVar3 + -0x38) = plVar8;
  *(long *)((long)puVar3 + -0x30) = lVar23;
  *(undefined8 *)((long)puVar3 + -0x28) = 0x7e2a000;
  *(undefined **)((long)puVar3 + -0x20) = puVar20;
  *(long *)((long)puVar3 + -0x18) = auVar32._8_8_;
  *(undefined8 *)((long)puVar3 + -0x10) = uVar28;
  *(long **)((long)puVar3 + -8) = plVar14;
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
  *(undefined4 *)((long)puVar3 + -0x44) = 0;
  *(undefined8 *)((long)puVar3 + -0x88) = 0;
  *(undefined8 *)((long)puVar3 + -0x90) = 0;
  *(undefined8 *)((long)puVar3 + -0x78) = 0;
  *(undefined8 *)((long)puVar3 + -0x80) = 0;
  uVar31 = *puVar9;
  uVar30 = puVar9[3];
  uVar29 = puVar9[2];
  uVar28 = *(undefined8 *)puVar27;
  *(undefined8 *)((long)puVar3 + -0xa8) = puVar9[1];
  *(undefined8 *)((long)puVar3 + -0xb0) = uVar31;
  *(undefined8 *)((long)puVar3 + -0x98) = uVar30;
  *(undefined8 *)((long)puVar3 + -0xa0) = uVar29;
  uVar28 = func_0x03d19c6c(uVar28);
  uVar29 = *(undefined8 *)puVar22;
  *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)((long)puVar3 + -0xa8);
  *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0xb0);
  *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0x98);
  *(undefined8 *)((long)puVar3 + -0x60) = *(undefined8 *)((long)puVar3 + -0xa0);
  func_0x03e64a64((undefined1 *)((long)puVar3 + -0x90),(undefined1 *)((long)puVar3 + -0x70),uVar28,0
                  ,uVar29);
  uVar28 = func_0x04485bc8((undefined1 *)((long)puVar3 + -0x90),*(undefined8 *)puVar24);
  lVar25 = *(long *)puVar26;
  if (*(int *)(lVar25 + 0xe0) == 0) {
    func_0x03280b8c(lVar25);
    lVar25 = *(long *)puVar26;
  }
  puVar27 = PTR_DAT_0782fe60;
  puVar20 = PTR_DAT_077c1cf8;
  lVar15 = *(long *)(*(long *)(lVar25 + 0xb8) + 8);
  if (lVar15 == 0) {
    if (*(int *)(lVar25 + 0xe0) == 0) {
      func_0x03280b8c(lVar25);
      lVar25 = *(long *)puVar26;
    }
    uVar29 = **(undefined8 **)(lVar25 + 0xb8);
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(lVar15,uVar29,*(undefined8 *)PTR_DAT_07831538,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar26 + 0xb8) + 8);
    *plVar7 = lVar15;
    func_0x032809c4(plVar7,lVar15);
  }
  uVar28 = func_0x03d4d48c(uVar28,lVar15,*(undefined8 *)puVar27);
  uVar28 = func_0x03d5fde0(uVar28,*(undefined8 *)puVar20);
  plVar7 = *(long **)(auVar32._0_8_ + 0x10);
  if (plVar7 == (long *)0x0) {
    uVar16 = func_0x03280cac();
    return uVar16;
  }
  lVar25 = *plVar7;
  uVar16 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar9 = (undefined8 *)(lVar25 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_06b76128;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c1e40,2);
LAB_06b76128:
  (*(code *)*puVar9)(plVar7,uVar28,(ulong)plVar6 & 0xffffffff,(undefined1 *)((long)puVar3 + -0x44),
                     puVar9[1]);
  return (ulong)*(uint *)((long)puVar3 + -0x44);
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A684F4; Merger.MergeBoard.Systems.FeedingCombinationFeedSystem.TryFeedItem; status ok */


/* WARNING: Possible PIC construction at 0x06b68798: Changing call to branch */

void Merger_MergeBoard_Systems_FeedingCombinationFeedSystem__TryFeedItem(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *extraout_x1;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined8 **ppuVar23;
  undefined *puVar24;
  undefined8 **unaff_x29;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_5a0 [16];
  long lStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_507;
  undefined3 uStack_503;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_478;
  undefined3 uStack_474;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined4 uStack_417;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3c8;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 auStack_338 [9];
  undefined *puStack_2f0;
  int iStack_2e8;
  undefined8 *apuStack_2e4 [26];
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_68;
  
  puVar5 = PTR_DAT_07830d38;
  puVar4 = PTR_DAT_07830d30;
  puVar3 = PTR_DAT_07830d28;
  puVar6 = PTR_DAT_0782fe68;
  puVar24 = PTR_DAT_0782fe48;
  plVar7 = &lStack_360;
  plVar18 = &lStack_360;
  lVar20 = tpidr_el0;
  lStack_68 = *(long *)(lVar20 + 0x28);
  if ((bRam0000000007e2a6b3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d40);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830d48);
    func_0x03280a18(PTR_DAT_07830d28);
    func_0x03280a18(PTR_DAT_07830d50);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830d58);
    func_0x03280a18(PTR_DAT_07830d38);
    func_0x03280a18(PTR_DAT_07830d30);
    func_0x03280a18(PTR_DAT_07830d60);
    bRam0000000007e2a6b3 = 1;
  }
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = param_2[1];
  lStack_1f0 = *param_2;
  lStack_1d8 = param_2[3];
  lStack_1e0 = param_2[2];
  uVar8 = func_0x03d1a304(*(undefined8 *)puVar3);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06015d08(uVar9,0,*(undefined8 *)puVar24,0);
  lStack_138 = lStack_1e8;
  lStack_140 = lStack_1f0;
  lStack_128 = lStack_1d8;
  lStack_130 = lStack_1e0;
  func_0x03e655a4(&uStack_160,&lStack_140,uVar8,uVar9,*(undefined8 *)puVar4);
  uVar10 = func_0x0448ced8(&uStack_160,&uStack_1b0,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
LAB_06b687b0:
    if (*(long *)(lVar20 + 0x28) == lStack_68) {
      return;
    }
  }
  else {
    lStack_208 = param_2[1];
    lStack_210 = *param_2;
    lStack_1f8 = param_2[3];
    lStack_200 = param_2[2];
    uVar8 = func_0x03d1ad3c(*(undefined8 *)PTR_DAT_07830d48);
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06015d08(uVar9,0,*(undefined8 *)PTR_DAT_07830d40,0);
    lStack_138 = lStack_208;
    lStack_140 = lStack_210;
    lStack_128 = lStack_1f8;
    lStack_130 = lStack_200;
    func_0x03e66724(&uStack_1d0,&lStack_140,uVar8,uVar9,*(undefined8 *)PTR_DAT_07830d60);
    uVar8 = func_0x04498264(&uStack_1d0,*(undefined8 *)PTR_DAT_07830d58);
    puVar11 = (undefined4 *)func_0x03d5b630(uVar8,*(undefined8 *)PTR_DAT_07830d50);
    if (puVar11 != (undefined4 *)0x0) {
      if (0 < (int)*(ulong *)(puVar11 + 6)) {
        uVar10 = 0;
        uVar19 = *(ulong *)(puVar11 + 6) & 0xffffffff;
        ppuVar23 = apuStack_2e4;
        puVar15 = (undefined8 *)(puVar11 + 0xb);
        do {
          if (uVar19 <= uVar10) {
            func_0x03280cb4();
            goto LAB_06b687e4;
          }
          puVar24 = *(undefined **)((long)puVar15 + -0xc);
          iVar1 = *(int *)((long)puVar15 + -4);
          func_0x072ce970(&lStack_140,puVar15,0xd4);
          if (iVar1 == (int)uStack_1a8) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_06b687e4;
            uVar19 = func_0x06b867e0(*(long *)(param_1 + 0x10),uStack_1b0,puVar24,0);
            if ((uVar19 & 1) != 0) {
              func_0x072ce970(ppuVar23,&lStack_140,0xd4);
              func_0x072ce970(auStack_338,&uStack_1b0,0x48);
              ppuVar16 = &puStack_2f0;
              puVar17 = auStack_338;
              puStack_2f0 = puVar24;
              lStack_358 = param_2[1];
              lStack_360 = *param_2;
              lStack_348 = param_2[3];
              lStack_350 = param_2[2];
              iStack_2e8 = iVar1;
              uVar8 = 0x6b6879c;
              lVar20 = param_1;
              goto SUB_06b68d3c;
            }
          }
          uVar19 = (ulong)(uint)puVar11[6];
          uVar10 = uVar10 + 1;
          puVar15 = puVar15 + 0x1c;
        } while ((long)uVar10 < (long)(int)puVar11[6]);
      }
      goto LAB_06b687b0;
    }
LAB_06b687e4:
    func_0x03280cac();
  }
  func_0x072ce990();
  puVar11 = (undefined4 *)PTR_DAT_07830d78;
  puVar15 = (undefined8 *)PTR_DAT_07830d70;
  puVar3 = PTR_DAT_07830d68;
  puVar6 = PTR_DAT_0782fe68;
  puVar24 = PTR_DAT_0782fe48;
  plVar7 = (long *)auStack_5a0;
  lStack_590 = tpidr_el0;
  lStack_3c8 = *(long *)(lStack_590 + 0x28);
  ppuVar23 = &puStack_4d0;
  if ((bRam0000000007e2a6b5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830d68);
    func_0x03280a18(PTR_DAT_0782ff58);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830d80);
    func_0x03280a18(PTR_DAT_07830d88);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077cda58);
    func_0x03280a18(PTR_DAT_07830d78);
    func_0x03280a18(PTR_DAT_07830d70);
    bRam0000000007e2a6b5 = 1;
  }
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_478 = 0;
  uStack_474 = 0;
  uStack_448 = 0;
  puStack_450 = (undefined8 *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_498 = extraout_x1[1];
  puStack_4a0 = (undefined8 *)*extraout_x1;
  uStack_488 = extraout_x1[3];
  uStack_490 = extraout_x1[2];
  param_2 = (long *)func_0x03d1a89c(*(undefined8 *)puVar3);
  puVar12 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06015d08(puVar12,0,*(undefined8 *)puVar24,0);
  plVar18 = (long *)*puVar15;
  uStack_528 = uStack_498;
  puStack_530 = puStack_4a0;
  uStack_518 = uStack_488;
  uStack_520 = uStack_490;
  puVar17 = puVar12;
  func_0x03e65fa4(&puStack_4d0,&puStack_530,param_2);
  uStack_448 = uStack_4c8;
  puStack_450 = puStack_4d0;
  uStack_438 = uStack_4b8;
  uStack_440 = uStack_4c0;
  plVar13 = (long *)func_0x04493478(&puStack_450,*(undefined8 *)puVar11);
  puVar24 = puVar6;
  if (plVar13 != (long *)0x0) {
    lVar20 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar10 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07830d80) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b689bc;
        }
        uVar10 = uVar10 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar10 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b689bc:
    param_2 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
    puVar4 = PTR_DAT_07830d88;
    puVar3 = PTR_DAT_0782ff58;
    puVar24 = PTR_DAT_0774e8e0;
    if (param_2 == (long *)0x0) goto LAB_06b68c6c;
    unaff_x29 = &puStack_4f8;
    puVar15 = &uStack_408;
    puVar11 = &uStack_417;
LAB_06b68a08:
    lVar20 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar10 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar24) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b68a54;
        }
        uVar10 = uVar10 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar10 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b68a54:
    uVar10 = (*(code *)*puVar12)(param_2,puVar12[1]);
    if ((uVar10 & 1) == 0) {
      puVar12 = (undefined8 *)0x0;
      goto LAB_06b68bc4;
    }
    lVar20 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar10 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar17 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b68ab0;
        }
        uVar10 = uVar10 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar10 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar4,0);
LAB_06b68ab0:
    (*(code *)*puVar17)(&puStack_530,param_2,puVar17[1]);
    uStack_460 = uStack_510;
    uStack_468 = uStack_518;
    uStack_470 = uStack_520;
    puVar12 = puStack_530;
    uStack_3e8 = uStack_520;
    uStack_3f0 = uStack_528;
    uStack_3d8 = uStack_510;
    uStack_3e0 = uStack_518;
    uStack_4b0 = uStack_4d8;
    uStack_4c8 = uStack_4f0;
    puStack_4d0 = puStack_4f8;
    uStack_4b8 = uStack_4e0;
    uStack_4c0 = uStack_4e8;
    uStack_408 = uStack_520;
    uStack_410 = uStack_528;
    uStack_3f8 = uStack_510;
    uStack_400 = uStack_518;
    uStack_478 = uStack_507;
    uStack_474 = uStack_503;
    uStack_528 = uStack_4f0;
    puStack_530 = puStack_4f8;
    uStack_518 = uStack_4e0;
    uStack_520 = uStack_4e8;
    uStack_510 = uStack_4d8;
    uStack_458 = uStack_500;
    uVar8 = func_0x06b86b60(&uStack_458,0);
    uStack_558 = uStack_528;
    puStack_560 = puStack_530;
    uStack_548 = uStack_518;
    uStack_550 = uStack_520;
    uStack_540 = uStack_510;
    puVar17 = (undefined8 *)0x0;
    lVar20 = func_0x06b9868c(&puStack_560,uVar8);
    if (lVar20 != 0) {
      uStack_578 = uStack_468;
      uStack_580 = uStack_470;
      uStack_570 = uStack_460;
      if (puVar12 == (undefined8 *)0x0) goto LAB_06b68c64;
      puVar17 = *(undefined8 **)puVar3;
      uStack_418 = 0 < *(int *)(lVar20 + 0x18);
      uStack_428 = uStack_468;
      uStack_430 = uStack_470;
      uStack_420 = uStack_460;
      uStack_417 = uStack_478;
      func_0x03d1d988(puVar12,&uStack_430);
      goto LAB_06b68a08;
    }
    func_0x03280cac();
LAB_06b68c64:
    func_0x03280cac();
  }
  func_0x03280cac();
  puVar6 = puVar24;
LAB_06b68c6c:
  puVar24 = puVar6;
  func_0x03280cac();
LAB_06b68c70:
  func_0x03280ca4(puVar12);
  do {
    auVar27 = func_0x072ce990();
    uVar8 = auVar27._0_8_;
    if (auVar27._8_4_ != 1) {
      lVar20 = 0;
      lStack_590 = uVar8;
      if (param_2 == (long *)0x0) goto LAB_06b68d24;
      lVar21 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar10 == 0) goto LAB_06b68cfc;
      piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      break;
    }
    puVar12 = (undefined8 *)func_0x072ce910();
    puVar12 = (undefined8 *)*puVar12;
    func_0x072ce920();
LAB_06b68bc4:
    if (param_2 != (long *)0x0) {
      lVar20 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06b68c1c;
          }
          uVar10 = uVar10 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar10 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b68c1c:
      (*(code *)*puVar14)(param_2,puVar14[1]);
    }
    if (puVar12 != (undefined8 *)0x0) goto LAB_06b68c70;
    if (*(long *)(lStack_590 + 0x28) == lStack_3c8) {
      return;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar22 = piVar22 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_06b68d18;
    }
  }
LAB_06b68cfc:
  puVar17 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b68d18:
  (*(code *)*puVar12)(param_2,puVar12[1]);
LAB_06b68d24:
  func_0x03365958(lStack_590);
  func_0x03280ca4(0);
  uVar8 = 0x6b68d3c;
  auVar26 = func_0x02f09514();
  ppuVar16 = auVar26._8_8_;
  param_1 = auVar26._0_8_;
SUB_06b68d3c:
  *(undefined8 ***)((long)plVar7 + -0x40) = unaff_x29;
  *(undefined8 *)((long)plVar7 + -0x38) = uVar8;
  *(undefined **)((long)plVar7 + -0x30) = puVar24;
  *(undefined8 **)((long)plVar7 + -0x28) = puVar15;
  *(undefined8 ***)((long)plVar7 + -0x20) = ppuVar23;
  *(undefined4 **)((long)plVar7 + -0x18) = puVar11;
  *(long *)((long)plVar7 + -0x10) = lVar20;
  *(long **)((long)plVar7 + -8) = param_2;
  if ((bRam0000000007e2a6b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d90);
    func_0x03280a18(PTR_DAT_07830d98);
    func_0x03280a18(PTR_DAT_07830da0);
    func_0x03280a18(PTR_DAT_07830da8);
    func_0x03280a18(PTR_DAT_07830db0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6b4 = 1;
  }
  plVar13 = *(long **)(param_1 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar20 = *plVar13;
    uVar8 = *puVar17;
    uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar10 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07830d98) {
          puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b68e1c;
        }
        uVar10 = uVar10 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar10 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07830d98,0);
LAB_06b68e1c:
    uVar8 = (*(code *)*puVar15)(plVar13,uVar8,puVar15[1]);
    puVar24 = ppuVar16[2];
    if (puVar24 != (undefined *)0x0) {
      lVar20 = *(long *)(puVar24 + 0x10);
      lVar21 = *(long *)PTR_DAT_07830da0;
      *(int *)(puVar24 + 0x1c) = *(int *)(puVar24 + 0x1c) + 1;
      puVar3 = PTR_DAT_07830db0;
      puVar6 = PTR_DAT_07830d90;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(puVar24 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(puVar24 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar20 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(puVar24,uVar8,
                          *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        func_0x072ce970((undefined1 *)((long)plVar7 + -0x200),ppuVar16,0xe0);
        uVar8 = *(undefined8 *)puVar3;
        func_0x072ce970((undefined1 *)((long)plVar7 + -0x120),(undefined1 *)((long)plVar7 + -0x200),
                        0xe0);
        func_0x03ec74f4((undefined1 *)((long)plVar7 + -0x120),uVar8);
        uVar25 = *plVar18;
        uVar9 = plVar18[3];
        uVar8 = plVar18[2];
        *(long *)((long)plVar7 + -0x218) = plVar18[1];
        *(undefined8 *)((long)plVar7 + -0x220) = uVar25;
        *(undefined8 *)((long)plVar7 + -0x208) = uVar9;
        *(undefined8 *)((long)plVar7 + -0x210) = uVar8;
        func_0x06b98f6c((undefined1 *)((long)plVar7 + -0x220),*puVar17,0);
        lVar21 = plVar18[2];
        lVar20 = func_0x03280ca0(*(undefined8 *)puVar6);
        func_0x06b9a5d8(lVar20,0);
        puVar24 = PTR_DAT_0774f158;
        if (lVar20 != 0) {
          *(undefined **)(lVar20 + 0x10) = *ppuVar16;
          func_0x032809c4();
          *(undefined8 *)(lVar20 + 0x18) = *puVar17;
          func_0x032809c4();
          uVar8 = *(undefined8 *)puVar24;
          uVar8 = func_0x06ba3134(*ppuVar16,*(undefined8 *)(param_1 + 0x30),uVar8,uVar8,uVar8,0);
          *(undefined8 *)(lVar20 + 0x20) = uVar8;
          func_0x032809c4();
          if (lVar21 != 0) {
            func_0x03ec33e4(lVar21,lVar20,*(undefined8 *)PTR_DAT_07830da8);
            return;
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}


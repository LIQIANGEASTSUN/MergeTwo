/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6846C; Merger.MergeBoard.Systems.FeedingCombinationFeedSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b684cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b68798: Changing call to branch */

void Merger_MergeBoard_Systems_FeedingCombinationFeedSystem__Tick(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *extraout_x1;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  undefined8 **ppuVar24;
  undefined *puVar25;
  undefined8 **unaff_x29;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auStack_600 [16];
  long lStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined4 uStack_567;
  undefined3 uStack_563;
  undefined8 uStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4d8;
  undefined3 uStack_4d4;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined4 uStack_477;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_428;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 auStack_398 [9];
  undefined *puStack_350;
  int iStack_348;
  undefined8 *apuStack_344 [26];
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_c8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((bRam0000000007e2a6b2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d20);
    bRam0000000007e2a6b2 = 1;
  }
  if (param_2[1] == 0) {
    auVar27 = func_0x03280cac();
    plVar12 = auVar27._8_8_;
    param_1 = auVar27._0_8_;
  }
  else {
    uVar8 = func_0x03ec47bc(param_2[1],*(undefined8 *)PTR_DAT_07830d20);
    if ((uVar8 & 1) == 0) {
      lStack_58 = param_2[1];
      lStack_60 = *param_2;
      lStack_48 = param_2[3];
      lStack_50 = param_2[2];
      func_0x06b687ec(uVar8,&lStack_60);
      return;
    }
    plVar12 = &lStack_40;
    lStack_38 = param_2[1];
    lStack_40 = *param_2;
    lStack_28 = param_2[3];
    lStack_30 = param_2[2];
  }
  puVar5 = PTR_DAT_07830d38;
  puVar4 = PTR_DAT_07830d30;
  puVar3 = PTR_DAT_07830d28;
  puVar6 = PTR_DAT_0782fe68;
  puVar25 = PTR_DAT_0782fe48;
  plVar7 = &lStack_3c0;
  plVar18 = &lStack_3c0;
  lVar20 = tpidr_el0;
  lStack_c8 = *(long *)(lVar20 + 0x28);
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
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = plVar12[1];
  lStack_250 = *plVar12;
  lStack_238 = plVar12[3];
  lStack_240 = plVar12[2];
  uVar9 = func_0x03d1a304(*(undefined8 *)puVar3);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06015d08(uVar10,0,*(undefined8 *)puVar25,0);
  lStack_198 = lStack_248;
  lStack_1a0 = lStack_250;
  lStack_188 = lStack_238;
  lStack_190 = lStack_240;
  func_0x03e655a4(&uStack_1c0,&lStack_1a0,uVar9,uVar10,*(undefined8 *)puVar4);
  uVar8 = func_0x0448ced8(&uStack_1c0,&uStack_210,*(undefined8 *)puVar5);
  if ((uVar8 & 1) == 0) {
LAB_06b687b0:
    if (*(long *)(lVar20 + 0x28) == lStack_c8) {
      return;
    }
  }
  else {
    lStack_268 = plVar12[1];
    lStack_270 = *plVar12;
    lStack_258 = plVar12[3];
    lStack_260 = plVar12[2];
    uVar9 = func_0x03d1ad3c(*(undefined8 *)PTR_DAT_07830d48);
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x06015d08(uVar10,0,*(undefined8 *)PTR_DAT_07830d40,0);
    lStack_198 = lStack_268;
    lStack_1a0 = lStack_270;
    lStack_188 = lStack_258;
    lStack_190 = lStack_260;
    func_0x03e66724(&uStack_230,&lStack_1a0,uVar9,uVar10,*(undefined8 *)PTR_DAT_07830d60);
    uVar9 = func_0x04498264(&uStack_230,*(undefined8 *)PTR_DAT_07830d58);
    puVar11 = (undefined4 *)func_0x03d5b630(uVar9,*(undefined8 *)PTR_DAT_07830d50);
    if (puVar11 != (undefined4 *)0x0) {
      if (0 < (int)*(ulong *)(puVar11 + 6)) {
        uVar8 = 0;
        uVar19 = *(ulong *)(puVar11 + 6) & 0xffffffff;
        ppuVar24 = apuStack_344;
        puVar16 = (undefined8 *)(puVar11 + 0xb);
        do {
          if (uVar19 <= uVar8) {
            func_0x03280cb4();
            goto LAB_06b687e4;
          }
          puVar25 = *(undefined **)((long)puVar16 + -0xc);
          iVar1 = *(int *)((long)puVar16 + -4);
          func_0x072ce970(&lStack_1a0,puVar16,0xd4);
          if (iVar1 == (int)uStack_208) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_06b687e4;
            uVar19 = func_0x06b867e0(*(long *)(param_1 + 0x10),uStack_210,puVar25,0);
            if ((uVar19 & 1) != 0) {
              func_0x072ce970(ppuVar24,&lStack_1a0,0xd4);
              func_0x072ce970(auStack_398,&uStack_210,0x48);
              auVar27._8_8_ = &puStack_350;
              auVar27._0_8_ = param_1;
              puVar17 = auStack_398;
              puStack_350 = puVar25;
              lStack_3b8 = plVar12[1];
              lStack_3c0 = *plVar12;
              lStack_3a8 = plVar12[3];
              lStack_3b0 = plVar12[2];
              iStack_348 = iVar1;
              uVar9 = 0x6b6879c;
              goto SUB_06b68d3c;
            }
          }
          uVar19 = (ulong)(uint)puVar11[6];
          uVar8 = uVar8 + 1;
          puVar16 = puVar16 + 0x1c;
        } while ((long)uVar8 < (long)(int)puVar11[6]);
      }
      goto LAB_06b687b0;
    }
LAB_06b687e4:
    func_0x03280cac();
  }
  func_0x072ce990();
  puVar11 = (undefined4 *)PTR_DAT_07830d78;
  puVar16 = (undefined8 *)PTR_DAT_07830d70;
  puVar3 = PTR_DAT_07830d68;
  puVar6 = PTR_DAT_0782fe68;
  puVar25 = PTR_DAT_0782fe48;
  plVar7 = (long *)auStack_600;
  lStack_5f0 = tpidr_el0;
  lStack_428 = *(long *)(lStack_5f0 + 0x28);
  ppuVar24 = &puStack_530;
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
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  uStack_4a8 = 0;
  puStack_4b0 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4f8 = extraout_x1[1];
  puStack_500 = (undefined8 *)*extraout_x1;
  uStack_4e8 = extraout_x1[3];
  uStack_4f0 = extraout_x1[2];
  plVar12 = (long *)func_0x03d1a89c(*(undefined8 *)puVar3);
  puVar13 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06015d08(puVar13,0,*(undefined8 *)puVar25,0);
  plVar18 = (long *)*puVar16;
  uStack_588 = uStack_4f8;
  puStack_590 = puStack_500;
  uStack_578 = uStack_4e8;
  uStack_580 = uStack_4f0;
  puVar17 = puVar13;
  func_0x03e65fa4(&puStack_530,&puStack_590,plVar12);
  uStack_4a8 = uStack_528;
  puStack_4b0 = puStack_530;
  uStack_498 = uStack_518;
  uStack_4a0 = uStack_520;
  plVar14 = (long *)func_0x04493478(&puStack_4b0,*(undefined8 *)puVar11);
  puVar25 = puVar6;
  if (plVar14 != (long *)0x0) {
    lVar20 = *plVar14;
    uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar8 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07830d80) {
          puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b689bc;
        }
        uVar8 = uVar8 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar8 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b689bc:
    plVar12 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
    puVar4 = PTR_DAT_07830d88;
    puVar3 = PTR_DAT_0782ff58;
    puVar25 = PTR_DAT_0774e8e0;
    if (plVar12 == (long *)0x0) goto LAB_06b68c6c;
    unaff_x29 = &puStack_558;
    puVar16 = &uStack_468;
    puVar11 = &uStack_477;
LAB_06b68a08:
    lVar20 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar8 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar25) {
          puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b68a54;
        }
        uVar8 = uVar8 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar8 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b68a54:
    uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar8 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
      goto LAB_06b68bc4;
    }
    lVar20 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar8 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar17 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b68ab0;
        }
        uVar8 = uVar8 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar8 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar4,0);
LAB_06b68ab0:
    (*(code *)*puVar17)(&puStack_590,plVar12,puVar17[1]);
    uStack_4c0 = uStack_570;
    uStack_4c8 = uStack_578;
    uStack_4d0 = uStack_580;
    puVar13 = puStack_590;
    uStack_448 = uStack_580;
    uStack_450 = uStack_588;
    uStack_438 = uStack_570;
    uStack_440 = uStack_578;
    uStack_510 = uStack_538;
    uStack_528 = uStack_550;
    puStack_530 = puStack_558;
    uStack_518 = uStack_540;
    uStack_520 = uStack_548;
    uStack_468 = uStack_580;
    uStack_470 = uStack_588;
    uStack_458 = uStack_570;
    uStack_460 = uStack_578;
    uStack_4d8 = uStack_567;
    uStack_4d4 = uStack_563;
    uStack_588 = uStack_550;
    puStack_590 = puStack_558;
    uStack_578 = uStack_540;
    uStack_580 = uStack_548;
    uStack_570 = uStack_538;
    uStack_4b8 = uStack_560;
    uVar9 = func_0x06b86b60(&uStack_4b8,0);
    uStack_5b8 = uStack_588;
    puStack_5c0 = puStack_590;
    uStack_5a8 = uStack_578;
    uStack_5b0 = uStack_580;
    uStack_5a0 = uStack_570;
    puVar17 = (undefined8 *)0x0;
    lVar20 = func_0x06b9868c(&puStack_5c0,uVar9);
    if (lVar20 != 0) {
      uStack_5d8 = uStack_4c8;
      uStack_5e0 = uStack_4d0;
      uStack_5d0 = uStack_4c0;
      if (puVar13 == (undefined8 *)0x0) goto LAB_06b68c64;
      puVar17 = *(undefined8 **)puVar3;
      uStack_478 = 0 < *(int *)(lVar20 + 0x18);
      uStack_488 = uStack_4c8;
      uStack_490 = uStack_4d0;
      uStack_480 = uStack_4c0;
      uStack_477 = uStack_4d8;
      func_0x03d1d988(puVar13,&uStack_490);
      goto LAB_06b68a08;
    }
    func_0x03280cac();
LAB_06b68c64:
    func_0x03280cac();
  }
  func_0x03280cac();
  puVar6 = puVar25;
LAB_06b68c6c:
  puVar25 = puVar6;
  func_0x03280cac();
LAB_06b68c70:
  func_0x03280ca4(puVar13);
  do {
    auVar28 = func_0x072ce990();
    uVar9 = auVar28._0_8_;
    if (auVar28._8_4_ != 1) {
      param_1 = 0;
      lStack_5f0 = uVar9;
      if (plVar12 == (long *)0x0) goto LAB_06b68d24;
      lVar20 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar8 == 0) goto LAB_06b68cfc;
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      break;
    }
    puVar13 = (undefined8 *)func_0x072ce910();
    puVar13 = (undefined8 *)*puVar13;
    func_0x072ce920();
LAB_06b68bc4:
    if (plVar12 != (long *)0x0) {
      lVar20 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar8 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06b68c1c;
          }
          uVar8 = uVar8 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar8 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b68c1c:
      (*(code *)*puVar15)(plVar12,puVar15[1]);
    }
    if (puVar13 != (undefined8 *)0x0) goto LAB_06b68c70;
    if (*(long *)(lStack_5f0 + 0x28) == lStack_428) {
      return;
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar22 = piVar22 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_06b68d18;
    }
  }
LAB_06b68cfc:
  puVar17 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b68d18:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_06b68d24:
  func_0x03365958(lStack_5f0);
  func_0x03280ca4(0);
  uVar9 = 0x6b68d3c;
  auVar27 = func_0x02f09514();
SUB_06b68d3c:
  puVar13 = auVar27._8_8_;
  *(undefined8 ***)((long)plVar7 + -0x40) = unaff_x29;
  *(undefined8 *)((long)plVar7 + -0x38) = uVar9;
  *(undefined **)((long)plVar7 + -0x30) = puVar25;
  *(undefined8 **)((long)plVar7 + -0x28) = puVar16;
  *(undefined8 ***)((long)plVar7 + -0x20) = ppuVar24;
  *(undefined4 **)((long)plVar7 + -0x18) = puVar11;
  *(long *)((long)plVar7 + -0x10) = param_1;
  *(long **)((long)plVar7 + -8) = plVar12;
  if ((bRam0000000007e2a6b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d90);
    func_0x03280a18(PTR_DAT_07830d98);
    func_0x03280a18(PTR_DAT_07830da0);
    func_0x03280a18(PTR_DAT_07830da8);
    func_0x03280a18(PTR_DAT_07830db0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6b4 = 1;
  }
  plVar12 = *(long **)(auVar27._0_8_ + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar20 = *plVar12;
    uVar9 = *puVar17;
    uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar8 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07830d98) {
          puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b68e1c;
        }
        uVar8 = uVar8 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar8 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07830d98,0);
LAB_06b68e1c:
    uVar9 = (*(code *)*puVar16)(plVar12,uVar9,puVar16[1]);
    lVar20 = puVar13[2];
    if (lVar20 != 0) {
      lVar21 = *(long *)(lVar20 + 0x10);
      lVar23 = *(long *)PTR_DAT_07830da0;
      *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
      puVar6 = PTR_DAT_07830db0;
      puVar25 = PTR_DAT_07830d90;
      if (lVar21 != 0) {
        uVar2 = *(uint *)(lVar20 + 0x18);
        if (uVar2 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar20 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar20,uVar9,
                          *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        func_0x072ce970((undefined1 *)((long)plVar7 + -0x200),puVar13,0xe0);
        uVar9 = *(undefined8 *)puVar6;
        func_0x072ce970((undefined1 *)((long)plVar7 + -0x120),(undefined1 *)((long)plVar7 + -0x200),
                        0xe0);
        func_0x03ec74f4((undefined1 *)((long)plVar7 + -0x120),uVar9);
        uVar26 = *plVar18;
        uVar10 = plVar18[3];
        uVar9 = plVar18[2];
        *(long *)((long)plVar7 + -0x218) = plVar18[1];
        *(undefined8 *)((long)plVar7 + -0x220) = uVar26;
        *(undefined8 *)((long)plVar7 + -0x208) = uVar10;
        *(undefined8 *)((long)plVar7 + -0x210) = uVar9;
        func_0x06b98f6c((undefined1 *)((long)plVar7 + -0x220),*puVar17,0);
        lVar21 = plVar18[2];
        lVar20 = func_0x03280ca0(*(undefined8 *)puVar25);
        func_0x06b9a5d8(lVar20,0);
        puVar25 = PTR_DAT_0774f158;
        if (lVar20 != 0) {
          *(undefined8 *)(lVar20 + 0x10) = *puVar13;
          func_0x032809c4();
          *(undefined8 *)(lVar20 + 0x18) = *puVar17;
          func_0x032809c4();
          uVar9 = *(undefined8 *)puVar25;
          uVar9 = func_0x06ba3134(*puVar13,*(undefined8 *)(auVar27._0_8_ + 0x30),uVar9,uVar9,uVar9,0
                                 );
          *(undefined8 *)(lVar20 + 0x20) = uVar9;
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


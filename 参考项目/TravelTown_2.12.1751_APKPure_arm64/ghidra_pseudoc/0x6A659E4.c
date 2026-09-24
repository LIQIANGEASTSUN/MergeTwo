/* Ghidra 12.1.2 native pseudocode; RVA 0x6A659E4; Merger.MergeBoard.Systems.ExpendableSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b65be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b65ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b65ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b663b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b65ecc) */
/* WARNING: Removing unreachable block (ram,0x06b65ed0) */
/* WARNING: Removing unreachable block (ram,0x06b65ce4) */
/* WARNING: Removing unreachable block (ram,0x06b65be4) */
/* WARNING: Removing unreachable block (ram,0x06b663b4) */
/* WARNING: Removing unreachable block (ram,0x06b664c8) */
/* WARNING: Removing unreachable block (ram,0x06b663b8) */

void Merger_MergeBoard_Systems_ExpendableSystem__Tick
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,ulong param_5
               ,undefined8 param_6,undefined8 param_7,char *param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *extraout_x1;
  int *piVar20;
  undefined4 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  double dStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [16];
  int iStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined8 uStack_3ec;
  long lStack_3d8;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long alStack_128 [7];
  uint uStack_f0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_07830aa8;
  puVar5 = PTR_DAT_07830aa0;
  puVar4 = PTR_DAT_07830a98;
  puVar3 = PTR_DAT_0782fe68;
  puVar2 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a69f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ab0);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830a98);
    func_0x03280a18(PTR_DAT_07830ab8);
    func_0x03280a18(PTR_DAT_07830ac0);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830ac8);
    func_0x03280a18(PTR_DAT_07830ad0);
    func_0x03280a18(PTR_DAT_07830aa8);
    func_0x03280a18(PTR_DAT_07830ad8);
    func_0x03280a18(PTR_DAT_07830aa0);
    bRam0000000007e2a69f = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x072ce9a0(alStack_128,0,0xa8);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_198 = param_2[1];
  uStack_1a0 = *param_2;
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uStack_178 = 0;
  uStack_180 = 0;
  uVar11 = func_0x03d1ac3c(*(undefined8 *)puVar4);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar12,0,*(undefined8 *)puVar2,0);
  uStack_248 = uStack_198;
  uStack_250 = uStack_1a0;
  uStack_238 = uStack_188;
  uStack_240 = uStack_190;
  func_0x03e665e4(&uStack_80,&uStack_250,uVar11,uVar12,*(undefined8 *)puVar5);
  uVar13 = func_0x044976c4(&uStack_80,alStack_128,*(undefined8 *)puVar6);
  if ((uVar13 & 1) == 0) {
    uStack_2f8 = param_2[1];
    uStack_300 = *param_2;
    uStack_2e8 = param_2[3];
    uStack_2f0 = param_2[2];
    uVar11 = func_0x03d1a998(*(undefined8 *)PTR_DAT_07830ab8);
    lVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x06015d08(lVar14,0,*(undefined8 *)PTR_DAT_07830ab0,0);
    piVar20 = *(int **)PTR_DAT_07830ad8;
    uStack_248 = uStack_2f8;
    uStack_250 = uStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    func_0x03e66184(&uStack_150,&uStack_250,uVar11);
    uVar11 = func_0x044947e8(&uStack_150,*(undefined8 *)PTR_DAT_07830ad0);
    lVar15 = func_0x03d5b498(uVar11,*(undefined8 *)PTR_DAT_07830ac0);
    if (lVar15 != 0) {
      if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
        return;
      }
      if ((*(ulong *)(lVar15 + 0x18) & 0xffffffff) != 0) {
        uStack_338 = *(undefined8 *)(lVar15 + 0x40);
        uStack_340 = *(undefined8 *)(lVar15 + 0x38);
        uStack_328 = *(undefined8 *)(lVar15 + 0x50);
        uStack_330 = *(undefined8 *)(lVar15 + 0x48);
        uStack_348 = *(undefined8 *)(lVar15 + 0x30);
        uStack_350 = *(undefined8 *)(lVar15 + 0x28);
        lVar14 = *(long *)(lVar15 + 0x20);
        param_5 = (ulong)*(uint *)(lVar15 + 0x58);
        uStack_168 = uStack_338;
        uStack_170 = uStack_340;
        uStack_158 = uStack_328;
        uStack_160 = uStack_330;
        uStack_178 = uStack_348;
        uStack_180 = uStack_350;
        uStack_318 = param_2[1];
        uStack_320 = *param_2;
        uStack_308 = param_2[3];
        uStack_310 = param_2[2];
        puVar19 = &uStack_320;
        piVar20 = (int *)&uStack_350;
        param_8 = (char *)&uStack_368;
        uStack_360 = 0;
        uStack_358 = 0;
        uStack_368 = 0;
        goto SUB_06b65d1c;
      }
      func_0x03280cb4();
    }
    auVar33 = func_0x03280cac();
    puVar19 = auVar33._8_8_;
    param_1 = auVar33._0_8_;
  }
  else {
    uStack_288 = param_2[1];
    uStack_290 = *param_2;
    uStack_278 = param_2[3];
    uStack_280 = param_2[2];
    func_0x072ce970(&uStack_250,alStack_128,0xa8);
    param_5 = (ulong)uStack_f0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    func_0x0437d084(&uStack_268,uStack_90,uStack_88,*(undefined8 *)PTR_DAT_07830ac8);
    puVar19 = &uStack_290;
    piVar20 = (int *)&uStack_2c0;
    param_8 = (char *)&uStack_2e0;
    uStack_2b8 = uStack_240;
    uStack_2c0 = uStack_248;
    uStack_2a8 = uStack_230;
    uStack_2b0 = uStack_238;
    uStack_298 = uStack_220;
    uStack_2a0 = uStack_228;
    uStack_2d8 = uStack_260;
    uStack_2e0 = uStack_268;
    uStack_2d0 = uStack_258;
    lVar14 = alStack_128[0];
  }
SUB_06b65d1c:
  lVar15 = tpidr_el0;
  lStack_3d8 = *(long *)(lVar15 + 0x28);
  if ((bRam0000000007e2a6a0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ae0);
    func_0x03280a18(PTR_DAT_07830ae8);
    func_0x03280a18(PTR_DAT_0777a558);
    func_0x03280a18(PTR_DAT_07830af0);
    func_0x03280a18(PTR_DAT_07830af8);
    func_0x03280a18(PTR_DAT_07830b00);
    func_0x03280a18(PTR_DAT_07830b08);
    func_0x03280a18(PTR_DAT_07830b10);
    func_0x03280a18(PTR_DAT_07830b18);
    func_0x03280a18(PTR_DAT_07830b20);
    func_0x03280a18(PTR_DAT_07830b28);
    func_0x03280a18(PTR_DAT_07830b30);
    func_0x03280a18(PTR_DAT_07830b38);
    func_0x03280a18(PTR_DAT_07830b40);
    func_0x03280a18(PTR_DAT_078103a0);
    func_0x03280a18(PTR_DAT_0774f158);
    func_0x03280a18(PTR_DAT_0777e958);
    bRam0000000007e2a6a0 = 1;
  }
  auStack_4a0._0_8_ = 0;
  auStack_4a0._8_8_ = 0;
  uStack_4b8 = 0;
  dStack_4c0 = 0.0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  if (*piVar20 < 1) {
    uVar13 = func_0x06b972f4(piVar20,0);
    auVar33._8_8_ = auStack_4a0._8_8_;
    auVar33._0_8_ = auStack_4a0._0_8_;
    if ((uVar13 & 1) == 0) goto LAB_06b65e64;
LAB_06b662b0:
    auStack_4a0 = auVar33;
    if (*(long *)(lVar15 + 0x28) == lStack_3d8) {
      return;
    }
  }
  else {
LAB_06b65e64:
    uVar11 = *(undefined8 *)PTR_DAT_0774f158;
    lVar16 = func_0x06ba3134(lVar14,*(undefined8 *)(param_1 + 0x20),uVar11,uVar11,uVar11,0);
    uStack_3ec = *(undefined8 *)(piVar20 + 10);
    uStack_400 = *(undefined8 *)(piVar20 + 5);
    uStack_408 = *(undefined8 *)(piVar20 + 3);
    uStack_410 = *(undefined8 *)(piVar20 + 1);
    iVar1 = *piVar20;
    uStack_3f0 = (undefined4)((ulong)*(undefined8 *)(piVar20 + 8) >> 0x20);
    uStack_3f8 = (undefined4)*(undefined8 *)(piVar20 + 7);
    uStack_3f4 = (undefined4)((ulong)*(undefined8 *)(piVar20 + 7) >> 0x20);
    uVar13 = func_0x06b9811c(lVar14,0);
    auVar33._8_8_ = auStack_4a0._8_8_;
    auVar33._0_8_ = auStack_4a0._0_8_;
    if ((uVar13 & 1) != 0) {
      uStack_4d8 = puVar19[1];
      uStack_4e0 = *puVar19;
      uStack_4c8 = puVar19[3];
      uStack_4d0 = puVar19[2];
      puVar19 = &uStack_4e0;
      auStack_4a0 = auVar33;
      goto SUB_06b662e8;
    }
    if (*param_8 == '\0') goto LAB_06b662b0;
    if (lVar16 != 0) {
      iVar1 = iVar1 + -1;
      *(int *)(lVar16 + 0xa0) = iVar1;
      if (*param_8 == '\0') {
        uStack_438 = uStack_408;
        uStack_440 = uStack_410;
        uStack_428 = uStack_3f8;
        uStack_430 = uStack_400;
        uStack_41c = (undefined4)uStack_3ec;
        uStack_418 = (undefined4)((ulong)uStack_3ec >> 0x20);
        uStack_424 = uStack_3f4;
        uStack_420 = uStack_3f0;
        auStack_4a0 = auVar33;
        if (lVar14 != 0) goto LAB_06b65f6c;
      }
      else {
        auStack_4a0 = func_0x0437d0b4(param_8,*(undefined8 *)PTR_DAT_07830b18);
        auVar33 = func_0x06b9c2a4(auStack_4a0,0);
        if (lVar14 != 0) {
          func_0x03d1d7ec(lVar14,auVar33._0_8_,auVar33._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
          uStack_41c = (undefined4)uStack_3ec;
          uStack_418 = (undefined4)((ulong)uStack_3ec >> 0x20);
          auVar33 = auStack_4a0;
LAB_06b65f6c:
          uStack_468 = CONCAT44(uStack_418,uStack_41c);
          uStack_46c = uStack_3f0;
          uStack_474 = uStack_3f8;
          uStack_470 = uStack_3f4;
          uStack_47c = (undefined4)uStack_400;
          uStack_478 = (undefined4)((ulong)uStack_400 >> 0x20);
          uStack_484 = (undefined4)uStack_408;
          uStack_480 = (undefined4)((ulong)uStack_408 >> 0x20);
          uStack_48c = (undefined4)uStack_410;
          uStack_488 = (undefined4)((ulong)uStack_410 >> 0x20);
          iStack_490 = iVar1;
          uStack_440 = uStack_410;
          uStack_438 = uStack_408;
          uStack_430 = uStack_400;
          uStack_428 = uStack_3f8;
          uStack_424 = uStack_3f4;
          uStack_420 = uStack_3f0;
          auStack_4a0 = auVar33;
          func_0x03d1cd5c(lVar14,&iStack_490,*(undefined8 *)PTR_DAT_07830ae0);
          puVar2 = PTR_DAT_0777e958;
          uVar21 = (undefined4)param_5;
          if (iVar1 < 1) {
            *(undefined8 *)(lVar16 + 0xb8) = *(undefined8 *)PTR_DAT_0777e958;
            func_0x032809c4();
            *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)PTR_DAT_078103a0;
            func_0x032809c4((undefined8 *)(lVar16 + 0xc0));
            *(undefined4 *)(lVar16 + 0xa0) = 0;
            uVar13 = func_0x03d1fd24(lVar14,&dStack_4c0,*(undefined8 *)PTR_DAT_0777a558);
            if ((uVar13 & 1) != 0) {
              dVar25 = -9.223372036854776e+18;
              if (dStack_4c0 != INFINITY) {
                dVar25 = (double)(long)dStack_4c0;
              }
              *(double *)(lVar16 + 0x108) = dVar25;
            }
            uStack_4f8 = puVar19[1];
            uStack_500 = *puVar19;
            uStack_4e8 = puVar19[3];
            uStack_4f0 = puVar19[2];
            func_0x06b98f6c(&uStack_500,lVar14,0);
            lVar18 = puVar19[2];
            lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830af8);
            func_0x06b9a3ac(lVar22,0);
            if (lVar22 != 0) {
              *(long *)(lVar22 + 0x10) = lVar14;
              func_0x032809c4((long *)(lVar22 + 0x10),lVar14);
              *(undefined4 *)(lVar22 + 0x18) = uVar21;
              *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)puVar2;
              func_0x032809c4();
              if (lVar18 != 0) {
                func_0x03ec33e4(lVar18,lVar22,*(undefined8 *)PTR_DAT_07830b30);
                lVar22 = puVar19[2];
                lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830b08);
                func_0x06b9a8d4(lVar18,0);
                if (lVar18 != 0) {
                  *(long *)(lVar18 + 0x10) = lVar14;
                  func_0x032809c4((long *)(lVar18 + 0x10),lVar14);
                  *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)puVar2;
                  func_0x032809c4();
                  *(long *)(lVar18 + 0x20) = lVar16;
                  func_0x032809c4((long *)(lVar18 + 0x20),lVar16);
                  puVar17 = (undefined8 *)PTR_DAT_07830b38;
                  goto joined_r0x06b6617c;
                }
              }
            }
          }
          else if (*(char *)((long)piVar20 + 0xd) == '\0') {
LAB_06b66244:
            lVar22 = puVar19[2];
            lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830af0);
            func_0x06b9a374(lVar16,0);
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x10) = lVar14;
              func_0x032809c4((long *)(lVar16 + 0x10),lVar14);
              *(undefined4 *)(lVar16 + 0x18) = uVar21;
              *(int *)(lVar16 + 0x1c) = iVar1;
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)PTR_DAT_0777e958;
              func_0x032809c4();
              if (lVar22 != 0) {
                func_0x03ec33e4(lVar22,lVar16,*(undefined8 *)PTR_DAT_07830b28);
                auVar33 = auStack_4a0;
                goto LAB_06b662b0;
              }
            }
          }
          else {
            uVar30 = puVar19[1];
            uVar28 = *puVar19;
            uVar26 = puVar19[3];
            uVar24 = puVar19[2];
            plVar23 = *(long **)(param_1 + 0x28);
            uVar32 = *(undefined8 *)(piVar20 + 4);
            uVar27 = *(undefined8 *)(piVar20 + 10);
            uVar31 = *(undefined8 *)(piVar20 + 2);
            uVar29 = *(undefined8 *)piVar20;
            uVar11 = *(undefined8 *)(param_1 + 0x10);
            uVar12 = *(undefined8 *)(param_1 + 0x18);
            uStack_428 = (undefined4)*(undefined8 *)(piVar20 + 6);
            uVar7 = uStack_428;
            uStack_424 = (undefined4)((ulong)*(undefined8 *)(piVar20 + 6) >> 0x20);
            uVar8 = uStack_424;
            uStack_418 = (undefined4)uVar27;
            uStack_414 = (undefined4)((ulong)uVar27 >> 0x20);
            uStack_420 = (undefined4)*(undefined8 *)(piVar20 + 8);
            uVar9 = uStack_420;
            uStack_41c = (undefined4)((ulong)*(undefined8 *)(piVar20 + 8) >> 0x20);
            uVar10 = uStack_41c;
            uStack_440 = uVar29;
            uStack_438 = uVar31;
            uStack_430 = uVar32;
            if (plVar23 != (long *)0x0) {
              lVar16 = *plVar23;
              uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar13 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07830b00) {
                    puVar17 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_06b66198;
                  }
                  uVar13 = uVar13 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar13 != 0);
              }
              puVar17 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07830b00,0);
LAB_06b66198:
              uStack_488 = (undefined4)uVar31;
              uStack_484 = (undefined4)((ulong)uVar31 >> 0x20);
              iStack_490 = (int)uVar29;
              uStack_48c = (undefined4)((ulong)uVar29 >> 0x20);
              uStack_480 = (undefined4)uVar32;
              uStack_47c = (undefined4)((ulong)uVar32 >> 0x20);
              uStack_478 = uVar7;
              uStack_474 = uVar8;
              uStack_470 = uVar9;
              uStack_46c = uVar10;
              uStack_468 = uVar27;
              uStack_460 = uVar28;
              uStack_458 = uVar30;
              uStack_450 = uVar24;
              uStack_448 = uVar26;
              (*(code *)*puVar17)(plVar23,lVar14,&uStack_460,uVar11,uVar12,&iStack_490,
                                  param_5 & 0xffffffff,puVar17[1]);
              lVar22 = puVar19[2];
              lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830b20);
              func_0x06b9acd8(lVar18,0);
              if (lVar18 != 0) {
                *(long *)(lVar18 + 0x10) = lVar14;
                func_0x032809c4((long *)(lVar18 + 0x10),lVar14);
                *(undefined4 *)(lVar18 + 0x18) = uVar21;
                *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_0777e958;
                func_0x032809c4();
                puVar17 = (undefined8 *)PTR_DAT_07830b40;
joined_r0x06b6617c:
                if (lVar22 != 0) {
                  func_0x03ec33e4(lVar22,lVar18,*puVar17);
                  goto LAB_06b66244;
                }
              }
            }
          }
        }
      }
    }
    func_0x03280cac();
  }
  func_0x072ce990();
  puVar19 = extraout_x1;
SUB_06b662e8:
  puVar2 = PTR_DAT_07830b48;
  if ((bRam0000000007e2a6a1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48,puVar19);
    func_0x03280a18(PTR_DAT_07830b50);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830b58);
    func_0x03280a18(PTR_DAT_07830b60);
    func_0x03280a18(PTR_DAT_07830b68);
    func_0x03280a18(PTR_DAT_07830b70);
    func_0x03280a18(PTR_DAT_07830b78);
    func_0x03280a18(PTR_DAT_07830b48);
    bRam0000000007e2a6a1 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar2);
  return;
}


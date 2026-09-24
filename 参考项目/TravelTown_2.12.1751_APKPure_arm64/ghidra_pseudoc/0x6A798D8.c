/* Ghidra 12.1.2 native pseudocode; RVA 0x6A798D8; Merger.MergeBoard.Systems.TransformSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b79a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b79c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7a73c) */
/* WARNING: Removing unreachable block (ram,0x06b7a56c) */
/* WARNING: Removing unreachable block (ram,0x06b7a590) */
/* WARNING: Removing unreachable block (ram,0x06b7a5cc) */
/* WARNING: Removing unreachable block (ram,0x06b7a5d4) */
/* WARNING: Removing unreachable block (ram,0x06b7a5fc) */
/* WARNING: Removing unreachable block (ram,0x06b7a5e0) */
/* WARNING: Removing unreachable block (ram,0x06b7a5ec) */
/* WARNING: Removing unreachable block (ram,0x06b7a60c) */
/* WARNING: Removing unreachable block (ram,0x06b7a670) */
/* WARNING: Removing unreachable block (ram,0x06b7a6a0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6a8) */
/* WARNING: Removing unreachable block (ram,0x06b7a6d0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a6c0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6dc) */
/* WARNING: Removing unreachable block (ram,0x06b7a21c) */
/* WARNING: Removing unreachable block (ram,0x06b7a2ac) */
/* WARNING: Removing unreachable block (ram,0x06b7a2b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a2c0) */
/* WARNING: Removing unreachable block (ram,0x06b7a224) */
/* WARNING: Removing unreachable block (ram,0x06b7a248) */
/* WARNING: Removing unreachable block (ram,0x06b7a27c) */
/* WARNING: Removing unreachable block (ram,0x06b7a284) */
/* WARNING: Removing unreachable block (ram,0x06b7a2f8) */
/* WARNING: Removing unreachable block (ram,0x06b7a290) */
/* WARNING: Removing unreachable block (ram,0x06b7a29c) */
/* WARNING: Removing unreachable block (ram,0x06b7a308) */
/* WARNING: Removing unreachable block (ram,0x06b7a36c) */
/* WARNING: Removing unreachable block (ram,0x06b7a39c) */
/* WARNING: Removing unreachable block (ram,0x06b7a3a4) */
/* WARNING: Removing unreachable block (ram,0x06b7a3cc) */
/* WARNING: Removing unreachable block (ram,0x06b7a3b0) */
/* WARNING: Removing unreachable block (ram,0x06b7a3bc) */
/* WARNING: Removing unreachable block (ram,0x06b7a3d8) */
/* WARNING: Removing unreachable block (ram,0x06b7a1b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a1e8) */
/* WARNING: Removing unreachable block (ram,0x06b7a204) */
/* WARNING: Removing unreachable block (ram,0x06b79c38) */
/* WARNING: Removing unreachable block (ram,0x06b79a8c) */
/* WARNING: Removing unreachable block (ram,0x06b7a2f4) */
/* WARNING: Removing unreachable block (ram,0x06b7a438) */

int * Merger_MergeBoard_Systems_TransformSystem__Tick
                (int *param_1,int *param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                undefined8 param_6,undefined *param_7)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  long extraout_x1;
  int *piVar22;
  int *piVar23;
  undefined1 *puVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  long lVar28;
  code *pcVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined1 *puVar33;
  long lVar34;
  ulong uVar35;
  int *piVar36;
  undefined1 *puVar37;
  int *piVar38;
  undefined1 *puVar39;
  long *plVar40;
  int *piVar41;
  int *piVar42;
  undefined *unaff_x26;
  undefined8 *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
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
  undefined8 uStack_2c8;
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
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar7 = PTR_DAT_078317e8;
  puVar6 = PTR_DAT_078317e0;
  puVar5 = PTR_DAT_078317d8;
  puVar4 = PTR_DAT_078317d0;
  puVar9 = &uStack_1f0;
  piVar23 = (int *)&uStack_1f0;
  piVar41 = (int *)0x7e2a000;
  if ((bRam0000000007e2a71e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078317d0);
    func_0x03280a18(PTR_DAT_078317f0);
    func_0x03280a18(PTR_DAT_078317e8);
    func_0x03280a18(PTR_DAT_078317f8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831800);
    func_0x03280a18(PTR_DAT_078317e0);
    func_0x03280a18(PTR_DAT_07831808);
    func_0x03280a18(PTR_DAT_07831810);
    func_0x03280a18(PTR_DAT_078317d8);
    func_0x03280a18(PTR_DAT_07831818);
    func_0x03280a18(PTR_DAT_07831820);
    func_0x03280a18(PTR_DAT_07831828);
    bRam0000000007e2a71e = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_128 = *(undefined8 *)(param_2 + 2);
  uStack_130 = *(undefined8 *)param_2;
  uStack_118 = *(undefined8 *)(param_2 + 6);
  uStack_120 = *(undefined8 *)(param_2 + 4);
  uStack_108 = 0;
  uStack_110 = 0;
  uVar12 = func_0x03d1a454(*(undefined8 *)puVar4);
  piVar25 = *(int **)puVar5;
  piVar22 = (int *)0x0;
  uStack_b8 = uStack_128;
  uStack_c0 = uStack_130;
  uStack_a8 = uStack_118;
  uStack_b0 = uStack_120;
  func_0x03e65824(&uStack_90,&uStack_c0,uVar12);
  uVar12 = func_0x0448e750(&uStack_90,*(undefined8 *)puVar6);
  lVar13 = func_0x03d5b168(uVar12,*(undefined8 *)puVar7);
  puVar7 = PTR_DAT_07831828;
  puVar6 = PTR_DAT_07831818;
  puVar5 = PTR_DAT_0782fe68;
  puVar4 = PTR_DAT_0782fe48;
  if (lVar13 == 0) {
LAB_06b79c68:
    auVar44 = func_0x03280cac();
    piVar38 = auVar44._8_8_;
    param_1 = auVar44._0_8_;
SUB_06b79c6c:
    puVar9 = &uStack_430;
    piVar16 = param_1;
    piVar23 = piVar22;
    piVar26 = piVar25;
    piVar27 = param_5;
    if ((bRam0000000007e2a71f & 1) == 0) {
      func_0x03280a18(PTR_DAT_07830b00);
      func_0x03280a18(PTR_DAT_077cd998);
      func_0x03280a18(PTR_DAT_078103b0);
      func_0x03280a18(PTR_DAT_077cd9a8);
      func_0x03280a18(PTR_DAT_07831830);
      func_0x03280a18(PTR_DAT_07831828);
      piVar16 = (int *)func_0x03280a18(PTR_DAT_0777e958);
      bRam0000000007e2a71f = 1;
    }
    if (0 < *piVar22) {
      return piVar16;
    }
    if ((piVar22[1] == 0) &&
       (piVar16 = (int *)func_0x06b972f4(piVar22,0), ((ulong)piVar16 & 1) != 0)) {
      return piVar16;
    }
    puVar4 = PTR_DAT_07831828;
    plVar40 = *(long **)(piVar22 + 4);
    if (plVar40 == (long *)0x0) {
LAB_06b79e70:
      uStack_2e8 = *(undefined8 *)(piVar38 + 2);
      uStack_2f0 = *(undefined8 *)piVar38;
      uStack_2d8 = *(undefined8 *)(piVar38 + 6);
      uStack_2e0 = *(undefined8 *)(piVar38 + 4);
      uStack_298 = uStack_2e8;
      uStack_2a0 = uStack_2f0;
      uStack_288 = uStack_2d8;
      uStack_290 = uStack_2e0;
      uStack_308 = *(undefined8 *)(piVar22 + 6);
      uStack_310 = *(undefined8 *)(piVar22 + 4);
      uStack_2f8 = *(undefined8 *)(piVar22 + 10);
      uStack_300 = *(undefined8 *)(piVar22 + 8);
      uStack_318 = *(undefined8 *)(piVar22 + 2);
      uStack_320 = *(undefined8 *)piVar22;
      piVar22 = *(int **)(param_1 + 6);
      piVar36 = *(int **)(param_1 + 8);
      plVar15 = *(long **)(param_1 + 10);
      piVar38 = (int *)0x0;
      uStack_2d0 = uStack_320;
      uStack_2c8 = uStack_318;
      uStack_2c0 = uStack_310;
      uStack_2b8 = uStack_308;
      uStack_2b0 = uStack_300;
      uStack_2a8 = uStack_2f8;
      if (plVar15 != (long *)0x0) {
        lVar13 = *plVar15;
        uVar32 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar32 != 0) {
          piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_07830b00) {
              puVar17 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_06b79f00;
            }
            uVar32 = uVar32 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar32 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07830b00,0);
LAB_06b79f00:
        pcVar29 = (code *)*puVar17;
        uStack_3d8 = uStack_2e8;
        uStack_3e0 = uStack_2f0;
        uStack_3c8 = uStack_2d8;
        uStack_3d0 = uStack_2e0;
        uStack_278 = uStack_318;
        uStack_280 = uStack_320;
        uStack_268 = uStack_308;
        uStack_270 = uStack_310;
        uStack_258 = uStack_2f8;
        uStack_260 = uStack_300;
        uVar12 = puVar17[1];
        puVar17 = &uStack_3e0;
        goto LAB_06b7a024;
      }
    }
    else {
      piVar36 = param_1;
      if (*(char *)((long)piVar22 + 0xe) != '\0') {
        lVar13 = *(long *)PTR_DAT_07831828;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar13 = *(long *)puVar4;
        }
        piVar41 = *(int **)(*(long *)(lVar13 + 0xb8) + 0x10);
        if (piVar41 == (int *)0x0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar13 = *(long *)puVar4;
          }
          unaff_x26 = (undefined *)**(undefined8 **)(lVar13 + 0xb8);
          piVar41 = (int *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd9a8);
          piVar26 = (int *)0x0;
          func_0x0445dd5c(piVar41,unaff_x26,*(undefined8 *)PTR_DAT_07831830);
          puVar17 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          *puVar17 = piVar41;
          func_0x032809c4(puVar17,piVar41);
        }
        piVar23 = *(int **)PTR_DAT_077cd998;
        lVar13 = func_0x04144be0(plVar40,piVar41);
        unaff_x27 = (undefined8 *)puVar4;
        if (lVar13 == 0) goto LAB_06b7a060;
        if (*(int *)(lVar13 + 0x18) < 1) goto LAB_06b79e70;
      }
      puVar4 = PTR_DAT_07830b00;
      uStack_338 = *(undefined8 *)(piVar38 + 2);
      uStack_340 = *(undefined8 *)piVar38;
      uStack_328 = *(undefined8 *)(piVar38 + 6);
      uStack_330 = *(undefined8 *)(piVar38 + 4);
      plVar40 = *(long **)(param_1 + 10);
      uStack_2b8 = *(undefined8 *)(piVar22 + 6);
      uStack_2c0 = *(undefined8 *)(piVar22 + 4);
      uStack_2a8 = *(undefined8 *)(piVar22 + 10);
      uStack_2b0 = *(undefined8 *)(piVar22 + 8);
      uStack_2c8 = *(undefined8 *)(piVar22 + 2);
      uStack_2d0 = *(undefined8 *)piVar22;
      piVar41 = *(int **)(param_1 + 6);
      if (plVar40 != (long *)0x0) {
        lVar13 = *plVar40;
        uVar32 = (ulong)*(ushort *)(lVar13 + 0x12e);
        unaff_x26 = *(undefined **)PTR_DAT_0777e958;
        uStack_390 = uStack_2d0;
        uStack_388 = uStack_2c8;
        uStack_380 = uStack_2c0;
        uStack_378 = uStack_2b8;
        uStack_370 = uStack_2b0;
        uStack_368 = uStack_2a8;
        uStack_360 = uStack_340;
        uStack_358 = uStack_338;
        uStack_350 = uStack_330;
        uStack_348 = uStack_328;
        if (uVar32 != 0) {
          piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_07830b00) {
              puVar17 = (undefined8 *)(lVar13 + (long)(*piVar23 + 1) * 0x10 + 0x138);
              goto LAB_06b79f38;
            }
            uVar32 = uVar32 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar32 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar40,*(long *)PTR_DAT_07830b00,1);
LAB_06b79f38:
        uStack_3d8 = uStack_358;
        uStack_3e0 = uStack_360;
        uStack_3c8 = uStack_348;
        uStack_3d0 = uStack_350;
        uStack_278 = uStack_388;
        uStack_280 = uStack_390;
        uStack_268 = uStack_378;
        uStack_270 = uStack_380;
        uStack_258 = uStack_368;
        uStack_260 = uStack_370;
        piVar23 = (int *)&uStack_3e0;
        piVar27 = (int *)&uStack_280;
        piVar26 = piVar41;
        param_7 = unaff_x26;
        (*(code *)*puVar17)(plVar40,piVar25);
        uStack_3f8 = *(undefined8 *)(piVar38 + 2);
        uStack_400 = *(undefined8 *)piVar38;
        uStack_3e8 = *(undefined8 *)(piVar38 + 6);
        uStack_3f0 = *(undefined8 *)(piVar38 + 4);
        uStack_3a8 = uStack_3f8;
        uStack_3b0 = uStack_400;
        uStack_398 = uStack_3e8;
        uStack_3a0 = uStack_3f0;
        uStack_418 = *(undefined8 *)(piVar22 + 6);
        uStack_420 = *(undefined8 *)(piVar22 + 4);
        uStack_408 = *(undefined8 *)(piVar22 + 10);
        uStack_410 = *(undefined8 *)(piVar22 + 8);
        uStack_428 = *(undefined8 *)(piVar22 + 2);
        uStack_430 = *(undefined8 *)piVar22;
        piVar22 = *(int **)(param_1 + 6);
        piVar36 = *(int **)(param_1 + 8);
        plVar15 = *(long **)(param_1 + 10);
        piVar38 = (int *)0x0;
        unaff_x27 = (undefined8 *)puVar4;
        uStack_3e0 = uStack_430;
        uStack_3d8 = uStack_428;
        uStack_3d0 = uStack_420;
        uStack_3c8 = uStack_418;
        uStack_3c0 = uStack_410;
        uStack_3b8 = uStack_408;
        if (plVar15 != (long *)0x0) {
          lVar13 = *(long *)puVar4;
          lVar34 = *plVar15;
          uVar32 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar32 != 0) {
            piVar23 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar13) {
                puVar17 = (undefined8 *)(lVar34 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_06b7a000;
              }
              uVar32 = uVar32 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar32 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar15,lVar13,0);
LAB_06b7a000:
          pcVar29 = (code *)*puVar17;
          uStack_298 = uStack_3f8;
          uStack_2a0 = uStack_400;
          uStack_288 = uStack_3e8;
          uStack_290 = uStack_3f0;
          uStack_278 = uStack_428;
          uStack_280 = uStack_430;
          uStack_268 = uStack_418;
          uStack_270 = uStack_420;
          uStack_258 = uStack_408;
          uStack_260 = uStack_410;
          uVar12 = puVar17[1];
          puVar17 = &uStack_2a0;
LAB_06b7a024:
          piVar23 = (int *)(*pcVar29)(plVar15,piVar25,puVar17,piVar22,piVar36,&uStack_280,
                                      (ulong)param_5 & 0xffffffff,uVar12);
          return piVar23;
        }
      }
    }
LAB_06b7a060:
    uVar12 = 0x6b7a064;
    auVar44 = func_0x03280cac();
    puVar17 = auVar44._8_8_;
    param_1 = auVar44._0_8_;
  }
  else {
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      if ((*(ulong *)(lVar13 + 0x18) & 0xffffffff) == 0) {
LAB_06b79c64:
        func_0x03280cb4();
        goto LAB_06b79c68;
      }
      piVar25 = *(int **)(lVar13 + 0x20);
      param_5 = (int *)(ulong)*(uint *)(lVar13 + 0x58);
      uStack_a8 = *(undefined8 *)(lVar13 + 0x40);
      uStack_b0 = *(undefined8 *)(lVar13 + 0x38);
      uStack_98 = *(undefined8 *)(lVar13 + 0x50);
      uStack_a0 = *(undefined8 *)(lVar13 + 0x48);
      uStack_b8 = *(undefined8 *)(lVar13 + 0x30);
      uStack_c0 = *(undefined8 *)(lVar13 + 0x28);
      piVar38 = (int *)&uStack_150;
      piVar22 = (int *)&uStack_180;
      uStack_178 = *(undefined8 *)(lVar13 + 0x30);
      uStack_180 = *(undefined8 *)(lVar13 + 0x28);
      uStack_168 = *(undefined8 *)(lVar13 + 0x40);
      uStack_170 = *(undefined8 *)(lVar13 + 0x38);
      uStack_148 = *(undefined8 *)(param_2 + 2);
      uStack_150 = *(undefined8 *)param_2;
      uStack_138 = *(undefined8 *)(param_2 + 6);
      uStack_140 = *(undefined8 *)(param_2 + 4);
      uStack_158 = *(undefined8 *)(lVar13 + 0x50);
      uStack_160 = *(undefined8 *)(lVar13 + 0x48);
      goto SUB_06b79c6c;
    }
    uStack_198 = *(undefined8 *)(param_2 + 2);
    uStack_1a0 = *(undefined8 *)param_2;
    uStack_188 = *(undefined8 *)(param_2 + 6);
    uStack_190 = *(undefined8 *)(param_2 + 4);
    uVar12 = func_0x03d1a9ec(*(undefined8 *)PTR_DAT_078317f0);
    uVar14 = func_0x03280ca0(*(undefined8 *)puVar5);
    func_0x06015d08(uVar14,0,*(undefined8 *)puVar4,0);
    piVar25 = *(int **)puVar6;
    uStack_68 = uStack_198;
    uStack_70 = uStack_1a0;
    uStack_58 = uStack_188;
    uStack_60 = uStack_190;
    func_0x03e66224(&uStack_e0,&uStack_70,uVar12,uVar14);
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar7;
    }
    unaff_x26 = PTR_DAT_07831810;
    piVar41 = (int *)PTR_DAT_07831808;
    plVar40 = (long *)PTR_DAT_078317f8;
    lVar34 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar34 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar13 = *(long *)puVar7;
      }
      uVar12 = **(undefined8 **)(lVar13 + 0xb8);
      lVar34 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831800);
      piVar25 = (int *)0x0;
      func_0x05351b58(lVar34,uVar12,*(undefined8 *)PTR_DAT_07831820);
      plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar15 = lVar34;
      func_0x032809c4(plVar15,lVar34);
    }
    piVar22 = *(int **)unaff_x26;
    func_0x04494e10(&uStack_70,&uStack_e0,lVar34);
    uStack_d8 = uStack_68;
    uStack_e0 = uStack_70;
    uStack_c8 = uStack_58;
    uStack_d0 = uStack_60;
    uVar12 = func_0x04494e68(&uStack_e0,*(undefined8 *)piVar41);
    piVar16 = (int *)func_0x03d5b520(uVar12,*plVar40);
    if (piVar16 == (int *)0x0) goto LAB_06b79c68;
    if ((int)*(ulong *)(piVar16 + 6) < 1) {
      return piVar16;
    }
    piVar36 = (int *)0x0;
    if ((*(ulong *)(piVar16 + 6) & 0xffffffff) == 0) goto LAB_06b79c64;
    uStack_1d8 = *(undefined8 *)(piVar16 + 0x10);
    uStack_1e0 = *(undefined8 *)(piVar16 + 0xe);
    uStack_1c8 = *(undefined8 *)(piVar16 + 0x14);
    uStack_1d0 = *(undefined8 *)(piVar16 + 0x12);
    uStack_1e8 = *(undefined8 *)(piVar16 + 0xc);
    uStack_1f0 = *(undefined8 *)(piVar16 + 10);
    piVar26 = *(int **)(piVar16 + 8);
    piVar38 = piVar16 + 0x36;
    piVar27 = (int *)(ulong)(uint)piVar16[0x16];
    uStack_1b8 = *(undefined8 *)(param_2 + 2);
    uStack_1c0 = *(undefined8 *)param_2;
    uStack_1a8 = *(undefined8 *)(param_2 + 6);
    uStack_1b0 = *(undefined8 *)(param_2 + 4);
    puVar17 = &uStack_1c0;
    uVar12 = 0x6b79c38;
    param_5 = param_2;
    piVar25 = param_1;
    piVar22 = piVar16;
    uStack_110 = uStack_1f0;
    uStack_108 = uStack_1e8;
    uStack_100 = uStack_1e0;
    uStack_f8 = uStack_1d8;
    uStack_f0 = uStack_1d0;
    uStack_e8 = uStack_1c8;
  }
  puVar5 = PTR_DAT_07830b20;
  puVar4 = PTR_DAT_0774f158;
  auVar44._8_8_ = puVar17;
  auVar44._0_8_ = piVar23;
  *(undefined8 *)((long)puVar9 + -0x60) = unaff_x29;
  *(undefined8 *)((long)puVar9 + -0x58) = uVar12;
  *(undefined **)((long)puVar9 + -0x50) = unaff_x28;
  *(undefined8 **)((long)puVar9 + -0x48) = unaff_x27;
  *(undefined **)((long)puVar9 + -0x40) = unaff_x26;
  *(int **)((long)puVar9 + -0x38) = piVar41;
  *(long **)((long)puVar9 + -0x30) = plVar40;
  *(int **)((long)puVar9 + -0x28) = piVar38;
  *(int **)((long)puVar9 + -0x20) = piVar36;
  *(int **)((long)puVar9 + -0x18) = piVar22;
  *(int **)((long)puVar9 + -0x10) = piVar25;
  *(int **)((long)puVar9 + -8) = param_5;
  if ((bRam0000000007e2a720 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830b00);
    func_0x03280a18(PTR_DAT_078103b0);
    func_0x03280a18(PTR_DAT_07830b20);
    func_0x03280a18(PTR_DAT_07830b40);
    func_0x03280a18(PTR_DAT_07831838);
    func_0x03280a18(PTR_DAT_07831840);
    func_0x03280a18(PTR_DAT_078104d0);
    func_0x03280a18(PTR_DAT_0774f158);
    func_0x03280a18(PTR_DAT_078104c8);
    bRam0000000007e2a720 = 1;
  }
  piVar41 = *(int **)puVar4;
  piVar25 = (int *)0x0;
  piVar16 = piVar41;
  piVar36 = piVar41;
  piVar18 = (int *)func_0x06ba3134(piVar26,*(undefined8 *)(param_1 + 4));
  piVar42 = (int *)puVar17[2];
  puVar19 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x06b9acd8(puVar19,0);
  puVar4 = PTR_DAT_078104c8;
  piVar38 = piVar16;
  piVar22 = piVar36;
  if (puVar19 == (undefined1 *)0x0) {
LAB_06b7a458:
    auVar44 = func_0x03280cac();
    puVar4 = PTR_DAT_07831848;
    *(undefined8 *)((long)puVar9 + -0x2f0) = unaff_x29;
    *(undefined8 *)((long)puVar9 + -0x2e8) = 0x6b7a45c;
    *(undefined **)((long)puVar9 + -0x2e0) = unaff_x28;
    *(undefined8 **)((long)puVar9 + -0x2d8) = unaff_x27;
    *(undefined1 **)((long)puVar9 + -0x2d0) = puVar19;
    *(int **)((long)puVar9 + -0x2c8) = piVar42;
    *(int **)((long)puVar9 + -0x2c0) = piVar23;
    *(int **)((long)puVar9 + -0x2b8) = param_1;
    *(int **)((long)puVar9 + -0x2b0) = piVar18;
    *(undefined8 **)((long)puVar9 + -0x2a8) = puVar17;
    *(int **)((long)puVar9 + -0x2a0) = piVar27;
    *(int **)((long)puVar9 + -0x298) = piVar26;
    puVar8 = (undefined1 *)((long)puVar9 + -0x4b0);
    piVar23 = piVar41;
    piVar16 = piVar38;
    piVar36 = piVar22;
    piVar27 = piVar25;
    if ((bRam0000000007e2a721 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831848);
      func_0x03280a18(PTR_DAT_07830b00);
      func_0x03280a18(PTR_DAT_07831850);
      func_0x03280a18(PTR_DAT_07814400);
      func_0x03280a18(PTR_DAT_078104c8);
      func_0x03280a18(PTR_DAT_0777e958);
      bRam0000000007e2a721 = 1;
    }
    piVar42 = *(int **)(auVar44._8_8_ + 0x10);
    puVar19 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a4b8(puVar19,0);
    puVar4 = PTR_DAT_0777e958;
    piVar26 = piVar36;
    if (puVar19 != (undefined1 *)0x0) {
      *(int **)(puVar19 + 0x10) = piVar41;
      func_0x032809c4(puVar19 + 0x10,piVar41);
      *(int *)(puVar19 + 0x18) = (int)piVar22;
      unaff_x27 = (undefined8 *)(puVar19 + 0x20);
      *unaff_x27 = *(undefined8 *)puVar4;
      func_0x032809c4(unaff_x27);
      puVar19[0x28] = (char)piVar38[8];
      *(int *)(puVar19 + 0x2c) = piVar38[9];
      piVar26 = piVar36;
      if (piVar42 != (int *)0x0) {
        puVar24 = *(undefined1 **)PTR_DAT_07831850;
        uVar12 = 0x6b7a56c;
        puVar8 = (undefined1 *)((long)puVar9 + -0x4b0);
        puVar20 = puVar19;
        piVar23 = piVar42;
        goto SUB_03ec33e4;
      }
    }
    func_0x03280cac();
    *(undefined8 *)((long)puVar9 + -0x4f0) = 0x6b7a760;
    *(int **)((long)puVar9 + -0x4e8) = piVar42;
    *(long *)((long)puVar9 + -0x4e0) = auVar44._0_8_;
    *(int **)((long)puVar9 + -0x4d8) = piVar38;
    *(int **)((long)puVar9 + -0x4d0) = piVar22;
    *(long *)((long)puVar9 + -0x4c8) = auVar44._8_8_;
    *(int **)((long)puVar9 + -0x4c0) = piVar41;
    *(int **)((long)puVar9 + -0x4b8) = piVar25;
    piVar36 = piVar26;
    if ((bRam0000000007e2a722 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07830b08);
      func_0x03280a18(PTR_DAT_07830b38);
      bRam0000000007e2a722 = 1;
    }
    puVar4 = PTR_DAT_07830b08;
    if (piVar26 != (int *)0x0) {
      *(int **)(piVar26 + 0x2e) = piVar27;
      func_0x032809c4(piVar26 + 0x2e,piVar27);
      *(undefined **)(piVar26 + 0x30) = param_7;
      func_0x032809c4(piVar26 + 0x30,param_7);
      piVar26[0x28] = 0;
      piVar26[0x42] = 0;
      piVar26[0x43] = 0;
    }
    piVar42 = *(int **)(extraout_x1 + 0x10);
    puVar20 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a8d4(puVar20,0);
    if (puVar20 == (undefined1 *)0x0) {
SUB_057da5fc:
      piVar23 = (int *)func_0x03280cac();
      return piVar23;
    }
    *(int **)(puVar20 + 0x10) = piVar23;
    func_0x032809c4(puVar20 + 0x10,piVar23);
    *(int **)(puVar20 + 0x18) = piVar27;
    func_0x032809c4(puVar20 + 0x18,piVar27);
    *(int **)(puVar20 + 0x20) = piVar26;
    func_0x032809c4(puVar20 + 0x20,piVar26);
    if (piVar42 == (int *)0x0) goto SUB_057da5fc;
    piVar41 = *(int **)((long)puVar9 + -0x4c0);
    piVar25 = *(int **)((long)puVar9 + -0x4b8);
    puVar24 = *(undefined1 **)PTR_DAT_07830b38;
    piVar22 = *(int **)((long)puVar9 + -0x4d0);
    auVar44._8_8_ = *(undefined8 *)((long)puVar9 + -0x4c8);
    auVar44._0_8_ = *(undefined8 *)((long)puVar9 + -0x4e0);
    piVar38 = *(int **)((long)puVar9 + -0x4d8);
    uVar12 = *(undefined8 *)((long)puVar9 + -0x4f0);
    piVar23 = *(int **)((long)puVar9 + -0x4e8);
  }
  else {
    *(int **)(puVar19 + 0x10) = piVar26;
    func_0x032809c4(puVar19 + 0x10,piVar26);
    *(int *)(puVar19 + 0x18) = (int)piVar27;
    *(undefined8 *)(puVar19 + 0x20) = *(undefined8 *)puVar4;
    func_0x032809c4();
    piVar38 = piVar16;
    piVar22 = piVar36;
    unaff_x28 = puVar4;
    if (piVar42 == (int *)0x0) goto LAB_06b7a458;
    puVar24 = *(undefined1 **)PTR_DAT_07830b40;
    uVar12 = 0x6b7a1b4;
    puVar8 = (undefined1 *)((long)puVar9 + -0x290);
    puVar20 = puVar19;
    piVar25 = piVar26;
    piVar41 = piVar27;
    piVar22 = piVar18;
    piVar38 = param_1;
    piVar23 = piVar42;
    unaff_x27 = (undefined8 *)PTR_DAT_07831840;
  }
SUB_03ec33e4:
  *(undefined8 *)(puVar8 + -0x30) = uVar12;
  *(int **)(puVar8 + -0x28) = piVar38;
  *(int **)(puVar8 + -0x20) = piVar22;
  *(long *)(puVar8 + -0x18) = auVar44._8_8_;
  *(int **)(puVar8 + -0x10) = piVar41;
  *(int **)(puVar8 + -8) = piVar25;
  puVar17 = *(undefined8 **)(puVar24 + 0x38);
  puVar33 = puVar24;
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(puVar24 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(puVar24);
      puVar17 = *(undefined8 **)(puVar24 + 0x38);
    }
  }
  *(undefined8 *)(puVar8 + -0x38) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar12,0);
  if (*(long *)(piVar42 + 4) != 0) {
    puVar33 = puVar8 + -0x38;
    piVar16 = *(int **)PTR_DAT_0777b730;
    uVar32 = func_0x04fe48b0(*(long *)(piVar42 + 4),uVar14);
    uVar12 = uVar14;
    if ((uVar32 & 1) == 0) {
      piVar22 = *(int **)(piVar42 + 4);
      piVar38 = (int *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(piVar38,*(undefined8 *)PTR_DAT_07751030);
      if (piVar38 != (int *)0x0) {
        lVar13 = *(long *)(piVar38 + 4);
        lVar34 = *(long *)PTR_DAT_07751038;
        piVar38[7] = piVar38[7] + 1;
        if (lVar13 != 0) {
          uVar3 = piVar38[6];
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            piVar38[6] = uVar3 + 1;
            puVar17 = (undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
            *puVar17 = puVar20;
            func_0x032809c4(puVar17,puVar20);
          }
          else {
            puVar33 = *(undefined1 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(piVar38,puVar20);
          }
          if (piVar22 != (int *)0x0) {
            func_0x04fe2d68(piVar22,uVar14,piVar38,*(undefined8 *)PTR_DAT_0777b738);
            return piVar42;
          }
        }
      }
    }
    else {
      lVar13 = *(long *)(puVar8 + -0x38);
      if (lVar13 != 0) {
        lVar34 = *(long *)(lVar13 + 0x10);
        lVar30 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar34 != 0) {
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (uVar3 < *(uint *)(lVar34 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            puVar17 = (undefined8 *)(lVar34 + (long)(int)uVar3 * 8 + 0x20);
            *puVar17 = puVar20;
            func_0x032809c4(puVar17,puVar20);
          }
          else {
            func_0x0414446c(lVar13,puVar20,
                            *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
          }
          return piVar42;
        }
      }
    }
  }
  auVar43 = func_0x03280cac();
  puVar24 = auVar43._8_8_;
  piVar41 = auVar43._0_8_;
  *(undefined8 *)(puVar8 + -0xa0) = unaff_x29;
  *(undefined8 *)(puVar8 + -0x98) = 0x3ec35f8;
  *(undefined8 **)(puVar8 + -0x90) = unaff_x27;
  *(undefined1 **)(puVar8 + -0x80) = puVar19;
  *(int **)(puVar8 + -0x78) = piVar23;
  *(long *)(puVar8 + -0x70) = auVar44._0_8_;
  *(int **)(puVar8 + -0x68) = piVar38;
  *(int **)(puVar8 + -0x60) = piVar22;
  *(undefined8 *)(puVar8 + -0x58) = uVar12;
  *(undefined1 **)(puVar8 + -0x50) = puVar20;
  *(int **)(puVar8 + -0x48) = piVar42;
  lVar13 = tpidr_el0;
  *(undefined8 *)(puVar8 + -0xa8) = *(undefined8 *)(lVar13 + 0x28);
  *(undefined1 **)(puVar8 + -0xb0) = puVar24;
  plVar40 = *(long **)(puVar33 + 0x38);
  puVar20 = puVar33;
  if (plVar40 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar40 = *(long **)(puVar33 + 0x38);
    if (plVar40 == (long *)0x0) {
      func_0x03256878(puVar33);
      plVar40 = *(long **)(puVar33 + 0x38);
    }
  }
  puVar39 = (undefined1 *)(ulong)*(uint *)(plVar40[1] + 0xfc);
  puVar37 = puVar8 + (-0xc0 - ((ulong)(puVar39 + 0xf) & 0x1fffffff0));
  *(undefined8 *)(puVar8 + -0xb8) = 0;
  lVar34 = *plVar40;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar30 = func_0x057a51c4(lVar34,0);
  if (*(long *)(piVar41 + 4) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    piVar16 = *(int **)PTR_DAT_0777b730;
    uVar32 = func_0x04fe48b0(*(long *)(piVar41 + 4),lVar30,puVar8 + -0xb8);
    puVar20 = puVar39;
    if ((uVar32 & 1) == 0) {
      piVar23 = *(int **)(piVar41 + 4);
      puVar19 = (undefined1 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(puVar19,*(undefined8 *)PTR_DAT_07751030);
      puVar33 = *(undefined1 **)(puVar33 + 0x38);
      puVar1 = puVar24;
      if (-1 < *(int *)(*(long *)(puVar33 + 8) + 0x28)) {
        puVar1 = puVar8 + -0xb0;
      }
      func_0x072ce970(puVar37,puVar1);
      uVar12 = func_0x03280b94(*(undefined8 *)(puVar33 + 8),puVar37);
      lVar34 = lVar30;
      if (puVar19 != (undefined1 *)0x0) {
        lVar28 = *(long *)(puVar19 + 0x10);
        lVar31 = *(long *)PTR_DAT_07751038;
        *(int *)(puVar19 + 0x1c) = *(int *)(puVar19 + 0x1c) + 1;
        if (lVar28 != 0) {
          uVar3 = *(uint *)(puVar19 + 0x18);
          if (uVar3 < *(uint *)(lVar28 + 0x18)) {
            *(uint *)(puVar19 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar28 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
            func_0x032809c4();
          }
          else {
            puVar20 = *(undefined1 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(puVar19);
          }
          if (piVar23 != (int *)0x0) {
            piVar16 = *(int **)PTR_DAT_0777b738;
            puVar20 = puVar19;
            func_0x04fe2d68(piVar23,lVar30);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar30 = *(long *)(puVar33 + 0x38);
    puVar33 = *(undefined1 **)(puVar8 + -0xb8);
    puVar1 = puVar24;
    if (-1 < *(int *)(*(long *)(lVar30 + 8) + 0x28)) {
      puVar1 = puVar8 + -0xb0;
    }
    func_0x072ce970(puVar37,puVar1);
    uVar12 = func_0x03280b94(*(undefined8 *)(lVar30 + 8),puVar37);
    lVar34 = lVar30;
    if (puVar33 == (undefined1 *)0x0) goto LAB_03ec38b8;
    lVar28 = *(long *)(puVar33 + 0x10);
    lVar31 = *(long *)PTR_DAT_07751038;
    *(int *)(puVar33 + 0x1c) = *(int *)(puVar33 + 0x1c) + 1;
    if (lVar28 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(puVar33 + 0x18);
    if (uVar3 < *(uint *)(lVar28 + 0x18)) {
      *(uint *)(puVar33 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar28 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
      func_0x032809c4();
    }
    else {
      puVar20 = *(undefined1 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar33);
    }
LAB_03ec3884:
    lVar34 = lVar30;
    if (*(long *)(lVar13 + 0x28) == *(long *)(puVar8 + -0xa8)) {
      return piVar41;
    }
  }
  auVar44 = func_0x072ce990();
  *(undefined8 *)(puVar37 + -0x30) = 0x3ec38c0;
  *(long *)(puVar37 + -0x20) = lVar34;
  *(undefined1 **)(puVar37 + -0x18) = puVar33;
  *(undefined1 **)(puVar37 + -0x10) = puVar24;
  *(int **)(puVar37 + -8) = piVar41;
  *(undefined8 *)(puVar37 + -0x28) = 0;
  lVar34 = *(long *)(puVar20 + 0x20);
  puVar24 = puVar20;
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c(lVar34);
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  if (*(int *)(lVar34 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar34 = *(long *)(puVar20 + 0x20);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = **(long **)(lVar34 + 0xb8);
  if (lVar34 != 0) {
    lVar30 = *(long *)(puVar20 + 0x20);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    puVar24 = *(undefined1 **)(*(long *)(lVar30 + 0xc0) + 0x18);
    uVar32 = func_0x04e81584(lVar34,puVar37 + -0x28);
    if ((uVar32 & 1) == 0) {
      lVar30 = *(long *)(puVar20 + 0x20);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      piVar41 = (int *)func_0x03280ca0();
      lVar30 = *(long *)(puVar20 + 0x20);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      func_0x04645340(piVar41,*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x38));
      puVar20 = (undefined1 *)0x0;
      if (piVar41 != (int *)0x0) {
        *(undefined1 (*) [16])(piVar41 + 4) = auVar44;
        func_0x032809c4((undefined1 (*) [16])(piVar41 + 4),0);
        return piVar41;
      }
    }
    else if (*(long *)(puVar37 + -0x28) != 0) {
      pauVar10 = (undefined1 (*) [16])(*(long *)(puVar37 + -0x28) + 0x10);
      *pauVar10 = auVar44;
      func_0x032809c4(pauVar10,0);
      return *(int **)(puVar37 + -0x28);
    }
  }
  auVar43 = func_0x03280cac();
  uVar12 = auVar43._0_8_;
  *(undefined8 *)(puVar37 + -0x60) = 0x3ec3a10;
  *(undefined1 **)(puVar37 + -0x58) = puVar37;
  *(long *)(puVar37 + -0x50) = lVar34;
  *(undefined1 **)(puVar37 + -0x48) = puVar20;
  *(undefined1 (*) [16])(puVar37 + -0x40) = auVar44;
  *(undefined8 *)(puVar37 + -0x68) = 0;
  lVar34 = *(long *)(piVar16 + 8);
  puVar20 = puVar24;
  piVar41 = piVar16;
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c(lVar34);
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  if (*(int *)(lVar34 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar34 = *(long *)(piVar16 + 8);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = **(long **)(lVar34 + 0xb8);
  if (lVar34 != 0) {
    lVar30 = *(long *)(piVar16 + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    puVar20 = *(undefined1 **)(*(long *)(lVar30 + 0xc0) + 0x18);
    uVar32 = func_0x04e81584(lVar34,puVar37 + -0x68);
    if ((uVar32 & 1) == 0) {
      lVar30 = *(long *)(piVar16 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      piVar22 = (int *)func_0x03280ca0();
      lVar30 = *(long *)(piVar16 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      func_0x046453e4(piVar22,*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x40));
      piVar16 = (int *)0x0;
      if (piVar22 != (int *)0x0) {
        *(undefined8 *)(piVar22 + 4) = uVar12;
        func_0x032809c4(piVar22 + 4,uVar12);
        *(long *)(piVar22 + 6) = auVar43._8_8_;
        *(undefined1 **)(piVar22 + 8) = puVar24;
        func_0x032809c4(piVar22 + 6,0);
        return piVar22;
      }
    }
    else if (*(long *)(puVar37 + -0x68) != 0) {
      puVar17 = (undefined8 *)(*(long *)(puVar37 + -0x68) + 0x10);
      *puVar17 = uVar12;
      func_0x032809c4(puVar17,uVar12);
      lVar30 = *(long *)(puVar37 + -0x68);
      if (lVar30 != 0) {
        *(undefined8 *)(lVar30 + 0x18) = auVar43._8_8_;
        *(undefined1 **)(lVar30 + 0x20) = puVar24;
        func_0x032809c4((undefined8 *)(lVar30 + 0x18),0);
        return *(int **)(puVar37 + -0x68);
      }
    }
  }
  auVar44 = func_0x03280cac();
  uVar12 = auVar44._0_8_;
  *(undefined8 *)(puVar37 + -0xa0) = 0x3ec3b90;
  *(long *)(puVar37 + -0x98) = lVar34;
  *(int **)(puVar37 + -0x90) = piVar16;
  *(undefined1 (*) [16])(puVar37 + -0x88) = auVar43;
  *(undefined1 **)(puVar37 + -0x78) = puVar24;
  *(undefined8 *)(puVar37 + -0xa8) = 0;
  lVar34 = *(long *)(piVar41 + 8);
  puVar24 = puVar20;
  piVar22 = piVar41;
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c(lVar34);
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  if (*(int *)(lVar34 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar34 = *(long *)(piVar41 + 8);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = **(long **)(lVar34 + 0xb8);
  if (lVar34 != 0) {
    lVar30 = *(long *)(piVar41 + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    puVar24 = *(undefined1 **)(*(long *)(lVar30 + 0xc0) + 0x18);
    uVar32 = func_0x04e81584(lVar34,puVar37 + -0xa8);
    if ((uVar32 & 1) == 0) {
      lVar30 = *(long *)(piVar41 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      piVar25 = (int *)func_0x03280ca0();
      lVar30 = *(long *)(piVar41 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      func_0x04645488(piVar25,*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x40));
      piVar41 = (int *)0x0;
      if (piVar25 != (int *)0x0) {
        *(undefined8 *)(piVar25 + 4) = uVar12;
        func_0x032809c4(piVar25 + 4,uVar12);
        *(long *)(piVar25 + 6) = auVar44._8_8_;
        *(undefined1 **)(piVar25 + 8) = puVar20;
        func_0x032809c4(piVar25 + 6,0);
        return piVar25;
      }
    }
    else if (*(long *)(puVar37 + -0xa8) != 0) {
      puVar17 = (undefined8 *)(*(long *)(puVar37 + -0xa8) + 0x10);
      *puVar17 = uVar12;
      func_0x032809c4(puVar17,uVar12);
      lVar30 = *(long *)(puVar37 + -0xa8);
      if (lVar30 != 0) {
        *(undefined8 *)(lVar30 + 0x18) = auVar44._8_8_;
        *(undefined1 **)(lVar30 + 0x20) = puVar20;
        func_0x032809c4((undefined8 *)(lVar30 + 0x18),0);
        return *(int **)(puVar37 + -0xa8);
      }
    }
  }
  auVar43 = func_0x03280cac();
  uVar12 = auVar43._0_8_;
  *(undefined8 *)(puVar37 + -0xf0) = 0x3ec3d10;
  *(undefined1 **)(puVar37 + -0xe0) = puVar39;
  *(long *)(puVar37 + -0xd8) = lVar34;
  *(int **)(puVar37 + -0xd0) = piVar41;
  *(undefined1 (*) [16])(puVar37 + -200) = auVar44;
  *(undefined1 **)(puVar37 + -0xb8) = puVar20;
  *(undefined8 *)(puVar37 + -0xe8) = 0;
  lVar34 = *(long *)(piVar36 + 8);
  puVar20 = puVar24;
  piVar25 = piVar22;
  piVar41 = piVar36;
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c(lVar34);
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  if (*(int *)(lVar34 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar34 = *(long *)(piVar36 + 8);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = **(long **)(lVar34 + 0xb8);
  if (lVar34 != 0) {
    lVar30 = *(long *)(piVar36 + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    puVar20 = *(undefined1 **)(*(long *)(lVar30 + 0xc0) + 0x18);
    uVar32 = func_0x04e81584(lVar34,puVar37 + -0xe8);
    if ((uVar32 & 1) == 0) {
      lVar30 = *(long *)(piVar36 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      piVar38 = (int *)func_0x03280ca0();
      lVar30 = *(long *)(piVar36 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      func_0x04645704(piVar38,*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x48));
      piVar36 = (int *)0x0;
      if (piVar38 != (int *)0x0) {
        *(undefined8 *)(piVar38 + 4) = uVar12;
        func_0x032809c4(piVar38 + 4,uVar12);
        *(long *)(piVar38 + 6) = auVar43._8_8_;
        *(undefined1 **)(piVar38 + 8) = puVar24;
        func_0x032809c4(piVar38 + 6,0);
LAB_03ec3e7c:
        piVar38[10] = (int)piVar22;
        return piVar38;
      }
    }
    else if (*(long *)(puVar37 + -0xe8) != 0) {
      puVar17 = (undefined8 *)(*(long *)(puVar37 + -0xe8) + 0x10);
      *puVar17 = uVar12;
      func_0x032809c4(puVar17,uVar12);
      lVar30 = *(long *)(puVar37 + -0xe8);
      if (lVar30 != 0) {
        *(undefined8 *)(lVar30 + 0x18) = auVar43._8_8_;
        *(undefined1 **)(lVar30 + 0x20) = puVar24;
        func_0x032809c4((undefined8 *)(lVar30 + 0x18),0);
        piVar38 = *(int **)(puVar37 + -0xe8);
        if (piVar38 != (int *)0x0) goto LAB_03ec3e7c;
        piVar36 = (int *)0x0;
      }
    }
  }
  auVar44 = func_0x03280cac();
  uVar12 = auVar44._0_8_;
  *(undefined8 *)(puVar37 + -0x130) = 0x3ec3ea0;
  *(long *)(puVar37 + -0x120) = lVar34;
  *(int **)(puVar37 + -0x118) = piVar36;
  *(undefined1 (*) [16])(puVar37 + -0x110) = auVar43;
  *(undefined1 **)(puVar37 + -0x100) = puVar24;
  *(ulong *)(puVar37 + -0xf8) = (ulong)piVar22 & 0xffffffff;
  *(undefined8 *)(puVar37 + -0x128) = 0;
  lVar34 = *(long *)(piVar41 + 8);
  puVar24 = puVar20;
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c(lVar34);
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  if (*(int *)(lVar34 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar34 = *(long *)(piVar41 + 8);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 0x10);
  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
    lVar34 = func_0x0325681c();
  }
  lVar34 = **(long **)(lVar34 + 0xb8);
  if (lVar34 != 0) {
    lVar30 = *(long *)(piVar41 + 8);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c();
    }
    puVar24 = *(undefined1 **)(*(long *)(lVar30 + 0xc0) + 0x18);
    uVar32 = func_0x04e81584(lVar34,puVar37 + -0x128);
    if ((uVar32 & 1) == 0) {
      lVar30 = *(long *)(piVar41 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      piVar22 = (int *)func_0x03280ca0();
      lVar30 = *(long *)(piVar41 + 8);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      func_0x046457b8(piVar22,*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x48));
      piVar41 = (int *)0x0;
      if (piVar22 != (int *)0x0) {
        *(undefined8 *)(piVar22 + 4) = uVar12;
        func_0x032809c4(piVar22 + 4,uVar12);
        *(long *)(piVar22 + 6) = auVar44._8_8_;
        *(undefined1 **)(piVar22 + 8) = puVar20;
        func_0x032809c4(piVar22 + 6,0);
LAB_03ec400c:
        piVar22[10] = (int)piVar25;
        return piVar22;
      }
    }
    else if (*(long *)(puVar37 + -0x128) != 0) {
      puVar17 = (undefined8 *)(*(long *)(puVar37 + -0x128) + 0x10);
      *puVar17 = uVar12;
      func_0x032809c4(puVar17,uVar12);
      lVar30 = *(long *)(puVar37 + -0x128);
      if (lVar30 != 0) {
        *(undefined8 *)(lVar30 + 0x18) = auVar44._8_8_;
        *(undefined1 **)(lVar30 + 0x20) = puVar20;
        func_0x032809c4((undefined8 *)(lVar30 + 0x18),0);
        piVar22 = *(int **)(puVar37 + -0x128);
        if (piVar22 != (int *)0x0) goto LAB_03ec400c;
        piVar41 = (int *)0x0;
      }
    }
  }
  auVar43 = func_0x03280cac();
  plVar40 = auVar43._8_8_;
  piVar22 = auVar43._0_8_;
  *(undefined1 **)(puVar37 + -400) = puVar8 + -0xa0;
  *(undefined8 *)(puVar37 + -0x188) = 0x3ec4030;
  *(long *)(puVar37 + -0x180) = lVar13;
  *(undefined1 **)(puVar37 + -0x170) = puVar19;
  *(int **)(puVar37 + -0x168) = piVar23;
  *(long *)(puVar37 + -0x160) = lVar34;
  *(int **)(puVar37 + -0x158) = piVar41;
  *(undefined1 (*) [16])(puVar37 + -0x150) = auVar44;
  *(undefined1 **)(puVar37 + -0x140) = puVar20;
  *(ulong *)(puVar37 + -0x138) = (ulong)piVar25 & 0xffffffff;
  lVar13 = tpidr_el0;
  *(undefined8 *)(puVar37 + -0x198) = *(undefined8 *)(lVar13 + 0x28);
  plVar15 = *(long **)(puVar24 + 0x38);
  if (plVar15 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar15 = *(long **)(puVar24 + 0x38);
    if (plVar15 == (long *)0x0) {
      func_0x03256878(puVar24);
      plVar15 = *(long **)(puVar24 + 0x38);
    }
  }
  uVar35 = (ulong)*(uint *)(plVar15[4] + 0xfc);
  uVar32 = uVar35 + 0xf & 0x1fffffff0;
  puVar19 = puVar37 + (-0x1b0 - uVar32);
  puVar17 = (undefined8 *)(puVar19 + -uVar32);
  lVar34 = (long)puVar17 - uVar32;
  func_0x072ce9a0(lVar34,0,uVar35);
  if (plVar40 == (long *)0x0) {
    func_0x03280cac();
    plVar40 = (long *)0x0;
  }
  else {
    lVar30 = *plVar15;
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar28 = *plVar40;
    uVar32 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar32 != 0) {
      piVar23 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == lVar30) {
          puVar11 = (undefined8 *)(lVar28 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar32 = uVar32 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar32 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar40,lVar30,0);
LAB_03ec4144:
    plVar40 = (long *)(*(code *)*puVar11)(plVar40,puVar11[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar40 != (long *)0x0) {
      do {
        lVar30 = *plVar40;
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 != 0) {
          piVar23 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar30 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar32 = uVar32 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar32 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar40,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar32 = (*(code *)*puVar11)(plVar40,puVar11[1]);
        if ((uVar32 & 1) == 0) {
          puVar24 = (undefined1 *)0x0;
          goto LAB_03ec429c;
        }
        lVar30 = *(long *)(*(long *)(puVar24 + 0x38) + 0x10);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          lVar30 = func_0x0325681c(lVar30);
        }
        lVar28 = *plVar40;
        uVar32 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar32 != 0) {
          piVar23 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar30) {
              lVar30 = lVar28 + (long)*piVar23 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar32 = uVar32 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar32 != 0);
        }
        lVar30 = func_0x03256b10(plVar40,lVar30,0);
LAB_03ec4220:
        *(undefined1 **)(puVar37 + -0x1a8) = puVar19;
        lVar30 = *(long *)(lVar30 + 8);
        (**(code **)(lVar30 + 0x10))
                  (*(undefined8 *)(lVar30 + 8),lVar30,plVar40,puVar37 + -0x1a8,puVar19);
        func_0x072ce970(lVar34,puVar19,uVar35);
        func_0x072ce970(puVar17,lVar34,uVar35);
        puVar11 = puVar17;
        if (-1 < *(int *)(*(long *)(*(long *)(puVar24 + 0x38) + 0x20) + 0x28)) {
          puVar11 = (undefined8 *)*puVar17;
        }
        puVar21 = *(undefined8 **)(*(long *)(puVar24 + 0x38) + 0x28);
        uVar12 = *puVar21;
        *(undefined8 **)(puVar37 + -0x1a8) = puVar11;
        (*(code *)puVar21[2])(uVar12,puVar21,piVar22,puVar37 + -0x1a8,puVar37 + -0x1a0);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar24);
  do {
    auVar45 = func_0x072ce990();
    if (auVar45._8_4_ != 1) {
      if (plVar40 == (long *)0x0) goto LAB_03ec43e8;
      lVar13 = *plVar40;
      uVar32 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar32 == 0) goto LAB_03ec43c0;
      piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    puVar17 = (undefined8 *)func_0x072ce910(auVar45._0_8_);
    puVar24 = (undefined1 *)*puVar17;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar40 != (long *)0x0) {
      lVar30 = *plVar40;
      uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar32 != 0) {
        piVar23 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar30 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar32 = uVar32 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar32 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar40,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar17)(plVar40,puVar17[1]);
    }
    if (puVar24 != (undefined1 *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar13 + 0x28) == *(long *)(puVar37 + -0x198)) {
      return piVar22;
    }
  } while( true );
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar23 = piVar23 + 4;
    if (uVar32 == 0) break;
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar17 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar17 = (undefined8 *)func_0x03256b10(plVar40,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar17)(plVar40,puVar17[1]);
LAB_03ec43e8:
  func_0x03365958(auVar45._0_8_);
  func_0x03280ca4(0);
  auVar44 = func_0x02f09514();
  lVar13 = auVar44._8_8_;
  *(undefined8 *)(lVar34 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar34 + -0x18) = 0;
  *(long **)(lVar34 + -0x10) = plVar40;
  *(int **)(lVar34 + -8) = piVar22;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar34 + -0x28) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar12,0);
  lVar30 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar30 != 0) {
    uVar32 = func_0x04fe48b0(lVar30,uVar14,lVar34 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar32 & 1) == 0) {
      lVar34 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar13 = *(long *)(lVar34 + 0x38);
      if (lVar13 == 0) {
        func_0x03256878(lVar34);
        lVar13 = *(long *)(lVar34 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar13 = *(long *)(*(long *)(lVar34 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      piVar23 = (int *)**(undefined8 **)(lVar13 + 0xb8);
    }
    else {
      piVar23 = (int *)func_0x03d2c6a8(*(undefined8 *)(lVar34 + -0x28),
                                       *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
    }
    return piVar23;
  }
  auVar43 = func_0x03280cac();
  lVar13 = auVar43._8_8_;
  *(undefined8 *)(lVar34 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar34 + -0x48) = uVar12;
  *(undefined1 (*) [16])(lVar34 + -0x40) = auVar44;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar34 + -0x58) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar12,0);
  lVar30 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar30 != 0) {
    uVar32 = func_0x04fe48b0(lVar30,uVar12,lVar34 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar32 & 1) == 0) {
      piVar23 = (int *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))();
    }
    else {
      piVar23 = (int *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x18))
                                 (*(undefined8 *)(lVar34 + -0x58));
    }
    return piVar23;
  }
  auVar44 = func_0x03280cac();
  lVar13 = auVar44._8_8_;
  *(undefined8 *)(lVar34 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar34 + -0x70) = auVar43;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar34 + -0x78) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar12,0);
  lVar13 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar32 = func_0x04fe48b0(lVar13,uVar14,lVar34 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar32 & 1) == 0) {
      return (int *)0x0;
    }
    lVar13 = *(long *)(lVar34 + -0x78);
    if (lVar13 != 0) {
      iVar2 = *(int *)(lVar13 + 0x18);
      if (iVar2 < 1) {
        return (int *)0x0;
      }
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
      return (int *)0x1;
    }
  }
  auVar43 = func_0x03280cac();
  lVar13 = auVar43._8_8_;
  *(undefined8 *)(lVar34 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar34 + -0x90) = uVar12;
  *(long *)(lVar34 + -0x88) = auVar44._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar34 + -0x98) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar12,0);
  lVar13 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar32 = func_0x04fe48b0(lVar13,uVar14,lVar34 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar32 & 1) == 0) {
      return (int *)0x0;
    }
    if (*(long *)(lVar34 + -0x98) != 0) {
      return (int *)(ulong)(0 < *(int *)(*(long *)(lVar34 + -0x98) + 0x18));
    }
  }
  auVar44 = func_0x03280cac();
  lVar13 = auVar44._8_8_;
  *(undefined8 *)(lVar34 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar34 + -0xb0) = uVar12;
  *(long *)(lVar34 + -0xa8) = auVar43._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar34 + -0xb8) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar12,0);
  lVar13 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar32 = func_0x04fe48b0(lVar13,uVar14,lVar34 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar32 & 1) == 0) {
      return (int *)0x0;
    }
    if (*(long *)(lVar34 + -0xb8) != 0) {
      return (int *)(ulong)(0 < *(int *)(*(long *)(lVar34 + -0xb8) + 0x18));
    }
  }
  auVar43 = func_0x03280cac();
  lVar13 = auVar43._8_8_;
  *(undefined8 *)(lVar34 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar34 + -0xd0) = uVar12;
  *(long *)(lVar34 + -200) = auVar44._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar34 + -0xd8) = 0;
  uVar12 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar14 = func_0x057a51c4(uVar12,0);
  lVar13 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar32 = func_0x04fe48b0(lVar13,uVar14,lVar34 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar32 & 1) == 0) {
      piVar23 = (int *)0x0;
    }
    else {
      if (*(long *)(lVar34 + -0xd8) == 0) goto LAB_03ec4958;
      piVar23 = (int *)(ulong)(0 < *(int *)(*(long *)(lVar34 + -0xd8) + 0x18));
    }
    return piVar23;
  }
LAB_03ec4958:
  auVar44 = func_0x03280cac();
  lVar13 = auVar44._8_8_;
  *(undefined8 *)(lVar34 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar34 + -0xf0) = uVar12;
  *(long *)(lVar34 + -0xe8) = auVar43._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03256878(lVar13);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
  }
  uVar32 = (**(code **)*puVar17)(auVar44._0_8_);
  if ((uVar32 & 1) != 0) {
    return (int *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar23 = (int *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))(auVar44._0_8_);
  return piVar23;
}


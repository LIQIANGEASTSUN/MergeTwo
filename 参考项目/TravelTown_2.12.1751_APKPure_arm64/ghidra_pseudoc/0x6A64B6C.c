/* Ghidra 12.1.2 native pseudocode; RVA 0x6A64B6C; Merger.MergeBoard.Systems.AnyItemMergeSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b64e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b64ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b64e70) */
/* WARNING: Removing unreachable block (ram,0x06b64e74) */
/* WARNING: Removing unreachable block (ram,0x06b64ec0) */

ulong Merger_MergeBoard_Systems_AnyItemMergeSystem__Tick(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *unaff_x29;
  undefined *puVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
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
  undefined1 auStack_3b0 [16];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_370;
  long lStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 *puStack_328;
  int aiStack_318 [2];
  undefined8 uStack_310;
  int aiStack_308 [2];
  undefined8 *puStack_300;
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
  undefined8 *puStack_1b0;
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
  
  puVar18 = PTR_DAT_078309f0;
  puVar19 = PTR_DAT_078309e8;
  puVar2 = PTR_DAT_078309e0;
  puVar20 = PTR_DAT_078309d8;
  puVar22 = PTR_DAT_0782fe68;
  lStack_2d8 = tpidr_el0;
  lStack_68 = *(long *)(lStack_2d8 + 0x28);
  lVar21 = 0x7e2a000;
  if ((bRam0000000007e2a69a & 1) == 0) {
    func_0x03280a18(PTR_DAT_078309e0);
    func_0x03280a18(PTR_DAT_078309d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_078309f8);
    func_0x03280a18(PTR_DAT_07830a00);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_078309f0);
    func_0x03280a18(PTR_DAT_078309e8);
    bRam0000000007e2a69a = 1;
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
  plVar4 = (long *)func_0x03d1a358(*(undefined8 *)puVar20);
  puVar5 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar22);
  func_0x06015d08(puVar5,0,*(undefined8 *)puVar2,0);
  puVar12 = *(undefined8 **)puVar19;
  auStack_1f8 = (undefined1  [8])uStack_158;
  lStack_200 = lStack_160;
  lStack_1e8 = lStack_148;
  lStack_1f0 = lStack_150;
  puVar11 = puVar5;
  func_0x03e65644(&uStack_140,&lStack_200,plVar4);
  uStack_118 = uStack_138;
  uStack_120 = uStack_140;
  uStack_108 = uStack_128;
  uStack_110 = uStack_130;
  plVar6 = (long *)func_0x0448d49c(&uStack_120,*(undefined8 *)puVar18);
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
LAB_06b64f68:
    func_0x03280cac();
    goto LAB_06b64f6c;
  }
  lVar13 = *plVar6;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_078309f8) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        puVar10 = puVar11;
        goto LAB_06b64d2c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b64d2c:
  plVar4 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar2 = PTR_DAT_07830a00;
  puVar22 = PTR_DAT_0774e8e0;
  puVar11 = puVar10;
  if (plVar4 == (long *)0x0) goto LAB_06b64f68;
  puVar5 = (undefined8 *)(auStack_1f8 + 4);
  puVar18 = auStack_1a4;
  puStack_2c8 = auStack_244;
  puStack_2d0 = auStack_294;
  do {
    lVar13 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar22) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          puVar11 = puVar10;
          goto LAB_06b64dbc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b64dbc:
    uVar14 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    if ((uVar14 & 1) == 0) {
      param_2 = (long *)0x0;
      lVar13 = lVar21;
      goto LAB_06b64ec8;
    }
    lVar21 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar21 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b64e18;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar2,0);
LAB_06b64e18:
    (*(code *)*puVar11)(&lStack_200,plVar4,puVar11[1]);
    lVar21 = lStack_200;
    uVar1 = auStack_1f8._0_4_;
    puVar19 = (undefined *)((ulong)auStack_1f8 & 0xffffffff);
    func_0x072ce970(&uStack_b0,puVar5,0x44);
    uVar3 = uStack_1a8;
    puVar11 = puStack_1b0;
    puVar20 = (undefined *)(ulong)uStack_1a8;
    puVar10 = (undefined8 *)0x44;
    func_0x072ce970(&uStack_100,puVar18);
  } while (uVar1 != uVar3);
  uVar23 = 0x6b64e70;
  lVar16 = param_1;
  lVar13 = lVar21;
  goto SUB_06b65030;
LAB_06b64ec8:
  if (plVar4 != (long *)0x0) {
    lVar21 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar7 = (undefined8 *)(lVar21 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b64f20;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b64f20:
    uVar14 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  lVar21 = lVar13;
  unaff_x29 = puVar22;
  if (param_2 == (long *)0x0) {
    if (*(long *)(lStack_2d8 + 0x28) == lStack_68) {
      return uVar14;
    }
  }
  else {
LAB_06b64f6c:
    func_0x03280ca4(param_2);
    lVar13 = lVar21;
    puVar22 = unaff_x29;
  }
  auVar25 = func_0x072ce990();
  lVar16 = auVar25._0_8_;
  if (auVar25._8_4_ != 1) goto LAB_06b64fa8;
  puVar7 = (undefined8 *)func_0x072ce910(lVar16);
  param_2 = (long *)*puVar7;
  uVar14 = func_0x072ce920();
  goto LAB_06b64ec8;
LAB_06b64fa8:
  param_2 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    lVar21 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar7 = (undefined8 *)(lVar21 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06b6500c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b6500c:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  func_0x03365958(lVar16);
  func_0x03280ca4(0);
  uVar23 = 0x6b65030;
  auVar24 = func_0x02f09514();
  lVar21 = auVar24._8_8_;
  param_1 = auVar24._0_8_;
SUB_06b65030:
  puVar7 = puVar11;
  uStack_310 = uVar23;
  puStack_300 = puVar5;
  lStack_2f8 = lVar16;
  plStack_2f0 = param_2;
  plStack_2e8 = plVar4;
  if ((bRam0000000007e2a69b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830a08);
    bRam0000000007e2a69b = 1;
  }
  puVar2 = PTR_DAT_07830a08;
  aiStack_308[0] = 0;
  aiStack_318[0] = 0;
  puVar17 = (undefined *)0x7e2a000;
  if (lVar21 == 0) {
LAB_06b650f4:
    auVar24 = func_0x03280cac();
    puVar5 = auVar24._8_8_;
    lVar16 = auVar24._0_8_;
    uStack_370 = 0x6b650f8;
    puStack_380 = puVar22;
    lStack_360 = lVar13;
    puStack_358 = puVar20;
    puStack_350 = puVar19;
    puStack_348 = puVar18;
    puStack_340 = puVar17;
    lStack_338 = param_1;
    lStack_330 = lVar21;
    puStack_328 = puVar11;
    if ((bRam0000000007e2a69c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c16b0);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0782fe78);
      func_0x03280a18(PTR_DAT_07830a10);
      func_0x03280a18(PTR_DAT_0782fea8);
      func_0x03280a18(PTR_DAT_07830a18);
      func_0x03280a18(PTR_DAT_07830a20);
      func_0x03280a18(PTR_DAT_0774f158);
      bRam0000000007e2a69c = 1;
    }
    auStack_3b0._0_8_ = 0;
    auStack_3b0._8_8_ = 0;
    auVar24 = ZEXT816(0);
    if (*(long *)(lVar16 + 0x20) != 0) {
      plVar6 = (long *)func_0x06b866a8(*(long *)(lVar16 + 0x20),*puVar5,*puVar7,0);
      uVar23 = 0;
      if (plVar6 != (long *)0x0) {
        lVar21 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779820) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06b65210;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779820,0);
LAB_06b65210:
        uVar23 = (*(code *)*puVar11)(plVar6,puVar11[1]);
      }
      puVar22 = PTR_DAT_07830a20;
      puVar18 = PTR_DAT_07830a10;
      auVar24._8_8_ = auStack_3b0._8_8_;
      auVar24._0_8_ = auStack_3b0._0_8_;
      plVar6 = *(long **)(lVar16 + 0x18);
      if (plVar6 != (long *)0x0) {
        lVar21 = *plVar6;
        uVar1 = *(undefined4 *)(puVar5 + 1);
        uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c16b0) {
              puVar11 = (undefined8 *)(lVar21 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_06b65294;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077c16b0,1);
LAB_06b65294:
        uVar23 = (*(code *)*puVar11)(plVar6,uVar23,uVar1,2,0,0,puVar11[1]);
        uStack_3c8 = puVar12[1];
        uStack_3d0 = *puVar12;
        uStack_3b8 = puVar12[3];
        uStack_3c0 = puVar12[2];
        uStack_3a0 = uStack_3d0;
        uStack_398 = uStack_3c8;
        uStack_390 = uStack_3c0;
        uStack_388 = uStack_3b8;
        func_0x03ec5690(&uStack_3a0,uVar23,0,*(undefined8 *)puVar22);
        uStack_3e8 = puVar12[1];
        uStack_3f0 = *puVar12;
        uStack_3d8 = puVar12[3];
        uStack_3e0 = puVar12[2];
        func_0x06b98e60(&uStack_3f0,uVar23,0,0);
        uStack_408 = puVar12[1];
        uStack_410 = *puVar12;
        uStack_3f8 = puVar12[3];
        uStack_400 = puVar12[2];
        func_0x06b98f6c(&uStack_410,*puVar5,0);
        uStack_428 = puVar12[1];
        uStack_430 = *puVar12;
        uStack_418 = puVar12[3];
        uStack_420 = puVar12[2];
        func_0x06b98f6c(&uStack_430,*puVar7,0);
        lVar13 = puVar12[2];
        lVar21 = func_0x03280ca0(*(undefined8 *)puVar18);
        func_0x06b9a9dc(lVar21,0);
        auStack_3b0 = func_0x0578e2a8(0);
        uVar8 = func_0x0579043c(auStack_3b0,0);
        auVar24 = auStack_3b0;
        if (lVar21 != 0) {
          *(undefined8 *)(lVar21 + 0x10) = uVar8;
          func_0x032809c4();
          *(undefined8 *)(lVar21 + 0x18) = *puVar5;
          func_0x032809c4();
          *(undefined8 *)(lVar21 + 0x20) = *puVar7;
          func_0x032809c4();
          *(undefined8 *)(lVar21 + 0x28) = uVar23;
          func_0x032809c4((undefined8 *)(lVar21 + 0x28),uVar23);
          *(undefined4 *)(lVar21 + 0x30) = *(undefined4 *)(puVar5 + 1);
          puVar22 = PTR_DAT_0782fe78;
          puVar18 = PTR_DAT_0774f158;
          auVar24 = auStack_3b0;
          if (lVar13 != 0) {
            func_0x03ec33e4(lVar13,lVar21,*(undefined8 *)PTR_DAT_07830a18);
            uVar8 = *(undefined8 *)puVar18;
            lVar21 = puVar12[2];
            uVar8 = func_0x06ba3134(uVar23,*(undefined8 *)(lVar16 + 0x10),uVar8,uVar8,uVar8,0);
            uVar9 = func_0x03280ca0(*(undefined8 *)puVar22);
            func_0x06b9a828(uVar9,uVar23,uVar8,0);
            auVar24 = auStack_3b0;
            if (lVar21 != 0) {
              uVar14 = func_0x03ec33e4(lVar21,uVar9,*(undefined8 *)PTR_DAT_0782fea8);
              return uVar14;
            }
          }
        }
      }
    }
    auStack_3b0 = auVar24;
    uVar14 = func_0x03280cac();
    return uVar14;
  }
  puVar7 = *(undefined8 **)PTR_DAT_07830a08;
  uVar14 = func_0x03d1e850(lVar21,aiStack_308);
  if ((uVar14 & 1) != 0) {
    puVar17 = puVar2;
    if (puVar11 == (undefined8 *)0x0) goto LAB_06b650f4;
    puVar7 = *(undefined8 **)puVar2;
    uVar14 = func_0x03d1e850(puVar11,aiStack_318);
    if (((uVar14 & 1) != 0) && ((aiStack_308[0] == 0 || (aiStack_318[0] == 0)))) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_06b650f4;
      uVar3 = func_0x06b860d4(*(long *)(param_1 + 0x20),lVar21,puVar11,0);
      goto LAB_06b650c0;
    }
  }
  uVar3 = 0;
LAB_06b650c0:
  return (ulong)(uVar3 & 1);
}


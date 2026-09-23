// NewMerge_Tick RVA 0x6A71228
// 06b71228


/* WARNING: Possible PIC construction at 0x06b71590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b71594) */

void target_NewMerge_Tick
               (long param_1,undefined8 *param_2,undefined8 ****param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined8 ****unaff_x22;
  undefined1 *puVar15;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar16;
  undefined *unaff_x28;
  undefined *puVar17;
  undefined *unaff_x29;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
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
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined1 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  long *plStack_2d8;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 ***pppuStack_290;
  uint uStack_288;
  undefined1 auStack_284 [68];
  undefined8 uStack_240;
  uint uStack_238;
  undefined1 auStack_234 [68];
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1a0;
  uint uStack_198;
  undefined1 auStack_194 [68];
  undefined8 uStack_150;
  ulong uStack_148;
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
  undefined1 auStack_f0 [68];
  undefined1 auStack_ac [68];
  long lStack_68;
  
  puVar15 = (undefined1 *)tpidr_el0;
  lStack_68 = *(long *)(puVar15 + 0x28);
  plVar14 = (long *)0x7e2a000;
  if ((bRam0000000007e2a6e7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078309d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_078309f8);
    func_0x03280a18(PTR_DAT_07830a00);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_078309f0);
    func_0x03280a18(PTR_DAT_078309e8);
    func_0x03280a18(PTR_DAT_07830d20);
    bRam0000000007e2a6e7 = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar17 = unaff_x28;
  puVar18 = unaff_x29;
  if (param_2[1] != 0) {
    uVar6 = func_0x03ec47bc(param_2[1],*(undefined8 *)PTR_DAT_07830d20);
    if ((uVar6 & 1) == 0) goto LAB_06b71608;
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    plVar14 = (long *)func_0x03d1a358(*(undefined8 *)PTR_DAT_078309d8);
    unaff_x22 = (undefined8 ****)func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe68);
    func_0x06015d08(unaff_x22,0,*(undefined8 *)PTR_DAT_0782fe48,0);
    param_4 = *(undefined8 **)PTR_DAT_078309e8;
    auStack_1e8 = (undefined1  [8])uStack_148;
    uStack_1f0 = uStack_150;
    uStack_1d8 = uStack_138;
    uStack_1e0 = uStack_140;
    param_3 = unaff_x22;
    func_0x03e65644(&uStack_130,&uStack_1f0,plVar14);
    uStack_108 = uStack_128;
    uStack_110 = uStack_130;
    uStack_f8 = uStack_118;
    uStack_100 = uStack_120;
    plVar7 = (long *)func_0x0448d49c(&uStack_110,*(undefined8 *)PTR_DAT_078309f0);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_078309f8) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b713f4;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      param_3 = (undefined8 ****)0x0;
      puVar8 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b713f4:
      puStack_2c8 = puVar15;
      plVar14 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar17 = PTR_DAT_07830a00;
      puVar18 = PTR_DAT_0774e8e0;
      if (plVar14 != (long *)0x0) {
        unaff_x22 = (undefined8 ****)(auStack_1e8 + 4);
        puVar15 = auStack_194;
        puStack_2b8 = auStack_234;
        puStack_2c0 = auStack_284;
        do {
          do {
            lVar11 = *plVar14;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar18) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_06b71488;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            param_3 = (undefined8 ****)0x0;
            puVar8 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b71488:
            uVar6 = (*(code *)*puVar8)(plVar14,puVar8[1]);
            if ((uVar6 & 1) == 0) {
              param_2 = (undefined8 *)0x0;
              goto LAB_06b7159c;
            }
            lVar11 = *plVar14;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar17) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_06b714e4;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar17,0);
LAB_06b714e4:
            (*(code *)*puVar8)(&uStack_1f0,plVar14,puVar8[1]);
            unaff_x26 = uStack_1f0;
            uVar1 = auStack_1e8._0_4_;
            unaff_x24 = (ulong)auStack_1e8 & 0xffffffff;
            func_0x072ce970(auStack_ac,unaff_x22,0x44);
            uVar4 = uStack_198;
            pppuVar3 = pppuStack_1a0;
            unaff_x25 = (ulong)uStack_198;
            param_3 = (undefined8 ****)0x44;
            func_0x072ce970(auStack_f0,puVar15);
          } while (uVar1 != uVar4);
          if (*(long *)(param_1 + 0x20) == 0) {
            func_0x03280cac();
            goto LAB_06b7163c;
          }
          param_4 = (undefined8 *)0x0;
          param_3 = (undefined8 ****)pppuVar3;
          uVar6 = func_0x06b87644(*(long *)(param_1 + 0x20),unaff_x26);
        } while ((uVar6 & 1) == 0);
        func_0x072ce970(puStack_2b8,auStack_ac,0x44);
        func_0x072ce970(puStack_2c0,auStack_f0,0x44);
        uStack_240 = unaff_x26;
        uStack_238 = uVar1;
        pppuStack_290 = pppuVar3;
        uStack_2a8 = param_2[1];
        uStack_2b0 = *param_2;
        uStack_298 = param_2[3];
        uStack_2a0 = param_2[2];
        uStack_288 = uVar1;
        puVar8 = &uStack_240;
        param_3 = &pppuStack_290;
        param_4 = &uStack_2b0;
        uVar19 = 0x6b71594;
        lVar11 = param_1;
        goto SUB_06b7170c;
      }
      goto LAB_06b71640;
    }
  }
LAB_06b7163c:
  func_0x03280cac();
  unaff_x28 = puVar17;
  unaff_x29 = puVar18;
LAB_06b71640:
  puVar18 = unaff_x29;
  puVar17 = unaff_x28;
  func_0x03280cac();
LAB_06b71644:
  func_0x03280ca4(param_2);
  do {
    auVar20 = func_0x072ce990();
    lVar11 = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
      param_2 = (undefined8 *)0x0;
      if (plVar14 == (long *)0x0) goto LAB_06b716f4;
      lVar12 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 == 0) goto LAB_06b716cc;
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    plVar7 = (long *)func_0x072ce910(lVar11);
    param_2 = (undefined8 *)*plVar7;
    func_0x072ce920();
LAB_06b7159c:
    puVar15 = puStack_2c8;
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b715f8;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      param_3 = (undefined8 ****)0x0;
      puVar8 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b715f8:
      (*(code *)*puVar8)(plVar14,puVar8[1]);
    }
    if (param_2 != (undefined8 *)0x0) goto LAB_06b71644;
LAB_06b71608:
    if (*(long *)(puVar15 + 0x28) == lStack_68) {
      return;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06b716e8;
    }
  }
LAB_06b716cc:
  param_3 = (undefined8 ****)0x0;
  puVar8 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b716e8:
  (*(code *)*puVar8)(plVar14,puVar8[1]);
LAB_06b716f4:
  func_0x03365958(lVar11);
  func_0x03280ca4(0);
  uVar19 = 0x6b7170c;
  auVar21 = func_0x02f09514();
  puVar8 = auVar21._8_8_;
  param_1 = auVar21._0_8_;
SUB_06b7170c:
  puStack_330 = puVar18;
  uStack_328 = uVar19;
  puStack_320 = puVar17;
  uStack_310 = unaff_x26;
  uStack_308 = unaff_x25;
  uStack_300 = unaff_x24;
  puStack_2f8 = puVar15;
  pppuStack_2f0 = unaff_x22;
  lStack_2e8 = lVar11;
  puStack_2e0 = param_2;
  plStack_2d8 = plVar14;
  if ((bRam0000000007e2a6e8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_07830a10);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07830a18);
    func_0x03280a18(PTR_DAT_07830a20);
    func_0x03280a18(PTR_DAT_07808148);
    bRam0000000007e2a6e8 = 1;
  }
  puVar18 = PTR_DAT_0777a498;
  auStack_360._0_8_ = 0;
  auStack_360._8_8_ = 0;
  plVar14 = *(long **)(param_1 + 0x10);
  auVar21 = ZEXT816(0);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar19 = puVar8[4];
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
          goto LAB_06b71820;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b71820:
    plVar14 = (long *)(*(code *)*puVar9)(plVar14,uVar19,puVar9[1]);
    if (plVar14 == (long *)0x0) {
      uVar19 = 0;
    }
    else {
      lVar11 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b71894;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07779820,0);
LAB_06b71894:
      uVar19 = (*(code *)*puVar9)(plVar14,puVar9[1]);
    }
    puVar2 = PTR_DAT_07830a20;
    puVar17 = PTR_DAT_07808148;
    auVar21._8_8_ = auStack_360._8_8_;
    auVar21._0_8_ = auStack_360._0_8_;
    plVar14 = *(long **)(param_1 + 0x18);
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar1 = *(undefined4 *)(puVar8 + 1);
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c16b0) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_06b71918;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c16b0,1);
LAB_06b71918:
      uVar19 = (*(code *)*puVar9)(plVar14,uVar19,uVar1,2,0,0,puVar9[1]);
      uStack_378 = param_4[1];
      uStack_380 = *param_4;
      uStack_368 = param_4[3];
      uStack_370 = param_4[2];
      uStack_350 = uStack_380;
      uStack_348 = uStack_378;
      uStack_340 = uStack_370;
      uStack_338 = uStack_368;
      func_0x03ec5690(&uStack_350,uVar19,0,*(undefined8 *)puVar2);
      uStack_398 = param_4[1];
      uStack_3a0 = *param_4;
      uStack_388 = param_4[3];
      uStack_390 = param_4[2];
      func_0x06b98e60(&uStack_3a0,uVar19,0,0);
      uStack_3b8 = param_4[1];
      uStack_3c0 = *param_4;
      uStack_3a8 = param_4[3];
      uStack_3b0 = param_4[2];
      func_0x06b98f6c(&uStack_3c0,*puVar8,0);
      uStack_3d8 = param_4[1];
      uStack_3e0 = *param_4;
      uStack_3c8 = param_4[3];
      uStack_3d0 = param_4[2];
      func_0x06b98f6c(&uStack_3e0,*param_3,0);
      uVar10 = func_0x06ba3134(uVar19,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar17,
                               puVar8[4],param_3[4],0);
      puVar17 = PTR_DAT_07830a10;
      auVar21._8_8_ = auStack_360._8_8_;
      auVar21._0_8_ = auStack_360._0_8_;
      plVar14 = *(long **)(param_1 + 0x10);
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar16 = puVar8[4];
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar18) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x19) * 0x10 + 0x138);
              goto LAB_06b71a30;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar18,0x19);
LAB_06b71a30:
        uVar5 = (*(code *)*puVar9)(plVar14,uVar16,puVar9[1]);
        lVar12 = param_4[2];
        lVar11 = func_0x03280ca0(*(undefined8 *)puVar17);
        func_0x06b9a9dc(lVar11,0);
        auStack_360 = func_0x0578e2a8(0);
        uVar16 = func_0x0579043c(auStack_360,0);
        auVar21 = auStack_360;
        if (lVar11 != 0) {
          *(undefined8 *)(lVar11 + 0x10) = uVar16;
          func_0x032809c4();
          *(undefined8 *)(lVar11 + 0x18) = *puVar8;
          func_0x032809c4();
          *(undefined8 ****)(lVar11 + 0x20) = *param_3;
          func_0x032809c4();
          *(undefined8 *)(lVar11 + 0x28) = uVar19;
          func_0x032809c4((undefined8 *)(lVar11 + 0x28),uVar19);
          *(undefined4 *)(lVar11 + 0x30) = uVar1;
          *(undefined4 *)(lVar11 + 0x40) = uVar5;
          puVar18 = PTR_DAT_0782fe78;
          auVar21 = auStack_360;
          if (lVar12 != 0) {
            func_0x03ec33e4(lVar12,lVar11,*(undefined8 *)PTR_DAT_07830a18);
            lVar11 = param_4[2];
            uVar16 = func_0x03280ca0(*(undefined8 *)puVar18);
            func_0x06b9a828(uVar16,uVar19,uVar10,0);
            auVar21 = auStack_360;
            if (lVar11 != 0) {
              func_0x03ec33e4(lVar11,uVar16,*(undefined8 *)PTR_DAT_0782fea8);
              return;
            }
          }
        }
      }
    }
  }
  auStack_360 = auVar21;
  func_0x03280cac();
  return;
}


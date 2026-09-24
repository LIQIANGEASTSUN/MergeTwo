/* Ghidra 12.1.2 native pseudocode; RVA 0x6A66964; Merger.MergeBoard.Systems.ExpendableTimerActivationSystem.HandleCreatedTrigger; status ok */


/* WARNING: Possible PIC construction at 0x06b66d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b670fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b66d68) */
/* WARNING: Removing unreachable block (ram,0x06b66e80) */
/* WARNING: Removing unreachable block (ram,0x06b66db4) */
/* WARNING: Removing unreachable block (ram,0x06b66e84) */
/* WARNING: Removing unreachable block (ram,0x06b66dd8) */
/* WARNING: Removing unreachable block (ram,0x06b67100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_MergeBoard_Systems_ExpendableTimerActivationSystem__HandleCreatedTrigger
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5
               ,undefined8 *param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auStack_3b0 [8];
  undefined8 uStack_3a8;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 *puStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined4 uStack_320;
  undefined3 uStack_31c;
  undefined4 uStack_318;
  undefined3 uStack_314;
  long lStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2d5;
  undefined3 uStack_2d4;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [48];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar7 = PTR_DAT_07830bd8;
  puVar6 = PTR_DAT_07830bd0;
  puVar5 = PTR_DAT_07830b98;
  puVar4 = PTR_DAT_0782fe68;
  puVar3 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a6a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830bd0);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830ba0);
    func_0x03280a18(PTR_DAT_07830be0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830be8);
    func_0x03280a18(PTR_DAT_07830bf0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07830bf8);
    func_0x03280a18(PTR_DAT_07830c00);
    func_0x03280a18(PTR_DAT_07830bd8);
    func_0x03280a18(PTR_DAT_07830bc0);
    func_0x03280a18(PTR_DAT_07830c08);
    func_0x03280a18(PTR_DAT_07830b98);
    func_0x03280a18(PTR_DAT_07800ac0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6a5 = 1;
  }
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  lStack_88 = param_2[3];
  lStack_90 = param_2[2];
  uVar8 = func_0x03d1a4a8(*(undefined8 *)puVar6);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06015d08(uVar9,0,*(undefined8 *)puVar3,0);
  puVar15 = *(undefined8 **)puVar7;
  lStack_188 = lStack_98;
  lStack_190 = lStack_a0;
  lStack_178 = lStack_88;
  lStack_180 = lStack_90;
  func_0x03e658c4(&lStack_110,&lStack_190,uVar8,uVar9);
  lVar10 = *(long *)puVar5;
  lStack_78 = uStack_108;
  lStack_80 = lStack_110;
  lStack_68 = uStack_f8;
  lStack_70 = uStack_100;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar10 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_07830c00;
  puVar3 = PTR_DAT_07830bf8;
  plVar18 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (plVar18 == (long *)0x0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar5;
    }
    uVar8 = **(undefined8 **)(lVar10 + 0xb8);
    plVar18 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07830be0);
    puVar15 = (undefined8 *)0x0;
    func_0x05350b30(plVar18,uVar8,*(undefined8 *)PTR_DAT_07830c08);
    plVar11 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar11 = (long)plVar18;
    func_0x032809c4(plVar11,plVar18);
  }
  plVar11 = *(long **)puVar4;
  func_0x0448ed50(&lStack_190,&lStack_80,plVar18);
  lStack_78 = lStack_188;
  lStack_80 = lStack_190;
  lStack_68 = lStack_178;
  lStack_70 = lStack_180;
  plVar12 = (long *)func_0x0448eda8(&lStack_80,*(undefined8 *)puVar3);
  if (plVar12 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar10 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07830be8) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b66c00;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar11 = (long *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b66c00:
    plVar18 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    if (plVar18 != (long *)0x0) {
      lVar10 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b66c7c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      plVar11 = (long *)0x0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b66c7c:
      uVar16 = (*(code *)*puVar13)(plVar18,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        param_2 = (long *)0x0;
        goto LAB_06b66df8;
      }
      lVar10 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07830bf0) {
            puVar15 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b66ce0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07830bf0,0);
LAB_06b66ce0:
      (*(code *)*puVar15)(&lStack_190,plVar18,puVar15[1]);
      lVar10 = lStack_190;
      func_0x072ce970(&lStack_110,&lStack_188,0x70);
      func_0x072ce970(&lStack_190,&lStack_110,0x70);
      func_0x072ce970(auStack_200,&lStack_190,0x70);
      uStack_218 = uStack_1a8;
      lStack_220 = lStack_1b0;
      uStack_208 = uStack_198;
      uStack_210 = uStack_1a0;
      uStack_238 = uStack_1c8;
      uStack_240 = uStack_1d0;
      uStack_228 = uStack_1b8;
      uStack_230 = uStack_1c0;
      uStack_268 = uStack_108;
      lStack_270 = lStack_110;
      uStack_258 = uStack_f8;
      uStack_260 = uStack_100;
      param_6 = *(undefined8 **)PTR_DAT_07800ac0;
      uStack_248 = uStack_e8;
      uStack_250 = uStack_f0;
      plVar11 = &lStack_220;
      puVar15 = &uStack_240;
      param_5 = &lStack_270;
      goto SUB_06b66f68;
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar24 = func_0x03280ca4(param_2);
    if (auVar24._8_4_ != 1) break;
    puVar13 = (undefined8 *)func_0x072ce910(auVar24._0_8_);
    param_2 = (long *)*puVar13;
    func_0x072ce920();
LAB_06b66df8:
    if (plVar18 != (long *)0x0) {
      lVar10 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06b66e50;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      plVar11 = (long *)0x0;
      puVar13 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b66e50:
      (*(code *)*puVar13)(plVar18,puVar13[1]);
    }
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar10 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06b66f44;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    plVar11 = (long *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b66f44:
    (*(code *)*puVar13)(plVar18,puVar13[1]);
  }
  func_0x03365958(auVar24._0_8_);
  func_0x03280ca4(0);
  auVar23 = func_0x02f09514();
  lVar10 = auVar23._8_8_;
  param_1 = auVar23._0_8_;
SUB_06b66f68:
  auVar23._8_8_ = lVar10;
  auVar23._0_8_ = param_1;
  plVar18 = plVar11;
  puVar13 = puVar15;
  if ((bRam0000000007e2a6a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830c10);
    func_0x03280a18(PTR_DAT_07830c18);
    bRam0000000007e2a6a6 = 1;
  }
  uVar2 = *(undefined4 *)((long)plVar11 + 9);
  lVar22 = *plVar11;
  uStack_2d4 = (undefined3)((uint)*(undefined4 *)((long)plVar11 + 0xc) >> 8);
  dVar21 = (double)plVar11[2];
  uStack_318 = *(undefined4 *)((long)puVar15 + 0x19);
  lVar19 = plVar11[3];
  uStack_314 = (undefined3)((uint)*(undefined4 *)((long)puVar15 + 0x1c) >> 8);
  lVar1 = -0x8000000000000000;
  if (dVar21 != INFINITY) {
    lVar1 = (long)dVar21;
  }
  lVar14 = func_0x06b664ec(param_1);
  plVar12 = (long *)func_0x06b664ec(param_1);
  puVar3 = PTR_DAT_07830c18;
  uStack_2d5 = (undefined1)((uint)uVar2 >> 0x18);
  uStack_31c = uStack_2d4;
  uStack_320 = uVar2;
  if (lVar10 == 0) {
    uVar8 = 0x6b67128;
    auVar23 = func_0x03280cac();
  }
  else {
    dVar20 = dVar21 * _UNK_017806f0 + (double)lVar14;
    uStack_308._0_5_ = CONCAT41(uVar2,1);
    uStack_308 = CONCAT44(CONCAT31(uStack_2d4,uStack_2d5),(undefined4)uStack_308);
    lVar14 = -0x8000000000000000;
    if (dVar20 != INFINITY) {
      lVar14 = (long)dVar20;
    }
    lStack_310 = lVar22;
    plStack_300 = (long *)dVar21;
    uStack_2f8 = lVar19;
    func_0x03d1dda0(lVar10,&lStack_310,*(undefined8 *)PTR_DAT_07830c10);
    uStack_2f8._0_5_ = CONCAT41(uStack_318,lVar1 == 0);
    uStack_2f8 = CONCAT44(CONCAT31(uStack_314,uStack_318._3_1_),(undefined4)uStack_2f8);
    lStack_310 = lVar1;
    uStack_308 = lVar14;
    plStack_300 = plVar12;
    func_0x03d1de74(lVar10,&lStack_310,*(undefined8 *)puVar3);
    lStack_338 = param_5[3];
    lStack_340 = param_5[2];
    lStack_328 = param_5[5];
    lStack_330 = param_5[4];
    lStack_348 = param_5[1];
    lStack_350 = *param_5;
    uVar8 = 0x6b67100;
    plVar18 = &lStack_350;
    puVar13 = param_6;
    plVar11 = plVar12;
  }
  uStack_380 = uVar8;
  plStack_378 = plVar11;
  plStack_370 = param_5;
  uStack_368 = param_1;
  lStack_360 = lVar10;
  puStack_358 = param_6;
  if ((bRam0000000007e2a6a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_0777a568);
    func_0x03280a18(PTR_DAT_07800ab8);
    bRam0000000007e2a6a7 = 1;
  }
  if (auVar23._8_8_ != 0) {
    plVar11 = *(long **)(auVar23._0_8_ + 0x20);
    func_0x03d1b250(auStack_3b0,auVar23._8_8_,*(undefined8 *)PTR_DAT_0777a488);
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a568) {
            puVar15 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_06b67200;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a568,1);
LAB_06b67200:
      lVar10 = (*(code *)*puVar15)(plVar11,uStack_3a8,puVar15[1]);
      if ((plVar18[5] != 0) &&
         (uVar8 = MergeEngine_ECS_Systems_Items_TimeLimitedActivationSystem__CreateExtraDataWithTimerItemData
                            (*(undefined4 *)(plVar18[5] + 0x10),1,*(undefined8 *)PTR_DAT_07800ab8,
                             puVar13,0,0), lVar10 != 0)) {
        *(undefined8 *)(lVar10 + 0x38) = uVar8;
        func_0x032809c4((undefined8 *)(lVar10 + 0x38),uVar8);
        *(undefined1 *)(lVar10 + 0x40) = 1;
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}


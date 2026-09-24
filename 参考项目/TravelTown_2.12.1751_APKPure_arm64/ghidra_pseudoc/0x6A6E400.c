/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6E400; Merger.MergeBoard.Systems.ItemUnboxingSystem.UnboxOnConsume; status ok */


/* WARNING: Possible PIC construction at 0x06b6e6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6e958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6ef3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6f0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6f690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6f940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6fde8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b70134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b70598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b70138) */
/* WARNING: Removing unreachable block (ram,0x06b7013c) */
/* WARNING: Removing unreachable block (ram,0x06b7021c) */
/* WARNING: Removing unreachable block (ram,0x06b70140) */
/* WARNING: Removing unreachable block (ram,0x06b70220) */
/* WARNING: Removing unreachable block (ram,0x06b7015c) */
/* WARNING: Removing unreachable block (ram,0x06b70184) */
/* WARNING: Removing unreachable block (ram,0x06b7016c) */
/* WARNING: Removing unreachable block (ram,0x06b6fdec) */
/* WARNING: Removing unreachable block (ram,0x06b6f944) */
/* WARNING: Removing unreachable block (ram,0x06b6f694) */
/* WARNING: Removing unreachable block (ram,0x06b6f69c) */
/* WARNING: Removing unreachable block (ram,0x06b6f6b4) */
/* WARNING: Removing unreachable block (ram,0x06b6f6bc) */
/* WARNING: Removing unreachable block (ram,0x06b6f6e4) */
/* WARNING: Removing unreachable block (ram,0x06b6f6c8) */
/* WARNING: Removing unreachable block (ram,0x06b6f6d4) */
/* WARNING: Removing unreachable block (ram,0x06b6f6f0) */
/* WARNING: Removing unreachable block (ram,0x06b6f9d0) */
/* WARNING: Removing unreachable block (ram,0x06b6f704) */
/* WARNING: Removing unreachable block (ram,0x06b6f71c) */
/* WARNING: Removing unreachable block (ram,0x06b6f724) */
/* WARNING: Removing unreachable block (ram,0x06b6f74c) */
/* WARNING: Removing unreachable block (ram,0x06b6f730) */
/* WARNING: Removing unreachable block (ram,0x06b6f73c) */
/* WARNING: Removing unreachable block (ram,0x06b6f758) */
/* WARNING: Removing unreachable block (ram,0x06b6f948) */
/* WARNING: Removing unreachable block (ram,0x06b6f950) */
/* WARNING: Removing unreachable block (ram,0x06b6f968) */
/* WARNING: Removing unreachable block (ram,0x06b6f970) */
/* WARNING: Removing unreachable block (ram,0x06b6f998) */
/* WARNING: Removing unreachable block (ram,0x06b6f97c) */
/* WARNING: Removing unreachable block (ram,0x06b6f988) */
/* WARNING: Removing unreachable block (ram,0x06b6f9a4) */
/* WARNING: Removing unreachable block (ram,0x06b6f9b0) */
/* WARNING: Removing unreachable block (ram,0x06b6f9b4) */
/* WARNING: Removing unreachable block (ram,0x06b6f768) */
/* WARNING: Removing unreachable block (ram,0x06b6f780) */
/* WARNING: Removing unreachable block (ram,0x06b6f788) */
/* WARNING: Removing unreachable block (ram,0x06b6f7b0) */
/* WARNING: Removing unreachable block (ram,0x06b6f794) */
/* WARNING: Removing unreachable block (ram,0x06b6f7a0) */
/* WARNING: Removing unreachable block (ram,0x06b6f7bc) */
/* WARNING: Removing unreachable block (ram,0x06b6f9b8) */
/* WARNING: Removing unreachable block (ram,0x06b6f7d0) */
/* WARNING: Removing unreachable block (ram,0x06b6f7f4) */
/* WARNING: Removing unreachable block (ram,0x06b6f800) */
/* WARNING: Removing unreachable block (ram,0x06b6f9c0) */
/* WARNING: Removing unreachable block (ram,0x06b6f858) */
/* WARNING: Removing unreachable block (ram,0x06b6f87c) */
/* WARNING: Removing unreachable block (ram,0x06b6f880) */
/* WARNING: Removing unreachable block (ram,0x06b6f9c8) */
/* WARNING: Removing unreachable block (ram,0x06b6f8e8) */
/* WARNING: Removing unreachable block (ram,0x06b6f908) */
/* WARNING: Removing unreachable block (ram,0x06b6f0d8) */
/* WARNING: Removing unreachable block (ram,0x06b6ef40) */
/* WARNING: Removing unreachable block (ram,0x06b6ef48) */
/* WARNING: Removing unreachable block (ram,0x06b6ef60) */
/* WARNING: Removing unreachable block (ram,0x06b6ef68) */
/* WARNING: Removing unreachable block (ram,0x06b6ef90) */
/* WARNING: Removing unreachable block (ram,0x06b6ef74) */
/* WARNING: Removing unreachable block (ram,0x06b6ef80) */
/* WARNING: Removing unreachable block (ram,0x06b6ef9c) */
/* WARNING: Removing unreachable block (ram,0x06b6f154) */
/* WARNING: Removing unreachable block (ram,0x06b6efb0) */
/* WARNING: Removing unreachable block (ram,0x06b6efc0) */
/* WARNING: Removing unreachable block (ram,0x06b6efc8) */
/* WARNING: Removing unreachable block (ram,0x06b6eff0) */
/* WARNING: Removing unreachable block (ram,0x06b6efd4) */
/* WARNING: Removing unreachable block (ram,0x06b6efe0) */
/* WARNING: Removing unreachable block (ram,0x06b6effc) */
/* WARNING: Removing unreachable block (ram,0x06b6f0dc) */
/* WARNING: Removing unreachable block (ram,0x06b6f0e4) */
/* WARNING: Removing unreachable block (ram,0x06b6f0fc) */
/* WARNING: Removing unreachable block (ram,0x06b6f104) */
/* WARNING: Removing unreachable block (ram,0x06b6f12c) */
/* WARNING: Removing unreachable block (ram,0x06b6f110) */
/* WARNING: Removing unreachable block (ram,0x06b6f11c) */
/* WARNING: Removing unreachable block (ram,0x06b6f138) */
/* WARNING: Removing unreachable block (ram,0x06b6f144) */
/* WARNING: Removing unreachable block (ram,0x06b6f148) */
/* WARNING: Removing unreachable block (ram,0x06b6f00c) */
/* WARNING: Removing unreachable block (ram,0x06b6f01c) */
/* WARNING: Removing unreachable block (ram,0x06b6f024) */
/* WARNING: Removing unreachable block (ram,0x06b6f04c) */
/* WARNING: Removing unreachable block (ram,0x06b6f030) */
/* WARNING: Removing unreachable block (ram,0x06b6f03c) */
/* WARNING: Removing unreachable block (ram,0x06b6f058) */
/* WARNING: Removing unreachable block (ram,0x06b6f14c) */
/* WARNING: Removing unreachable block (ram,0x06b6f06c) */
/* WARNING: Removing unreachable block (ram,0x06b6f0a0) */
/* WARNING: Removing unreachable block (ram,0x06b6e95c) */
/* WARNING: Removing unreachable block (ram,0x06b6e6bc) */
/* WARNING: Removing unreachable block (ram,0x06b6e6c4) */
/* WARNING: Removing unreachable block (ram,0x06b6e6dc) */
/* WARNING: Removing unreachable block (ram,0x06b6e6e4) */
/* WARNING: Removing unreachable block (ram,0x06b6e70c) */
/* WARNING: Removing unreachable block (ram,0x06b6e6f0) */
/* WARNING: Removing unreachable block (ram,0x06b6e6fc) */
/* WARNING: Removing unreachable block (ram,0x06b6e718) */
/* WARNING: Removing unreachable block (ram,0x06b6e9e8) */
/* WARNING: Removing unreachable block (ram,0x06b6e72c) */
/* WARNING: Removing unreachable block (ram,0x06b6e744) */
/* WARNING: Removing unreachable block (ram,0x06b6e74c) */
/* WARNING: Removing unreachable block (ram,0x06b6e774) */
/* WARNING: Removing unreachable block (ram,0x06b6e758) */
/* WARNING: Removing unreachable block (ram,0x06b6e764) */
/* WARNING: Removing unreachable block (ram,0x06b6e780) */
/* WARNING: Removing unreachable block (ram,0x06b6e960) */
/* WARNING: Removing unreachable block (ram,0x06b6e968) */
/* WARNING: Removing unreachable block (ram,0x06b6e980) */
/* WARNING: Removing unreachable block (ram,0x06b6e988) */
/* WARNING: Removing unreachable block (ram,0x06b6e9b0) */
/* WARNING: Removing unreachable block (ram,0x06b6e994) */
/* WARNING: Removing unreachable block (ram,0x06b6e9a0) */
/* WARNING: Removing unreachable block (ram,0x06b6e9bc) */
/* WARNING: Removing unreachable block (ram,0x06b6e9c8) */
/* WARNING: Removing unreachable block (ram,0x06b6e9cc) */
/* WARNING: Removing unreachable block (ram,0x06b6e790) */
/* WARNING: Removing unreachable block (ram,0x06b6e7a8) */
/* WARNING: Removing unreachable block (ram,0x06b6e7b0) */
/* WARNING: Removing unreachable block (ram,0x06b6e7d8) */
/* WARNING: Removing unreachable block (ram,0x06b6e7bc) */
/* WARNING: Removing unreachable block (ram,0x06b6e7c8) */
/* WARNING: Removing unreachable block (ram,0x06b6e7e4) */
/* WARNING: Removing unreachable block (ram,0x06b6e9d0) */
/* WARNING: Removing unreachable block (ram,0x06b6e7f8) */
/* WARNING: Removing unreachable block (ram,0x06b6e820) */
/* WARNING: Removing unreachable block (ram,0x06b6e9d8) */
/* WARNING: Removing unreachable block (ram,0x06b6e87c) */
/* WARNING: Removing unreachable block (ram,0x06b6e8a0) */
/* WARNING: Removing unreachable block (ram,0x06b6e8a4) */
/* WARNING: Removing unreachable block (ram,0x06b6e9e0) */
/* WARNING: Removing unreachable block (ram,0x06b6e900) */
/* WARNING: Removing unreachable block (ram,0x06b6e920) */
/* WARNING: Removing unreachable block (ram,0x06b7059c) */
/* WARNING: Removing unreachable block (ram,0x06b706cc) */
/* WARNING: Removing unreachable block (ram,0x06b705a0) */
/* WARNING: Removing unreachable block (ram,0x06b70698) */
/* WARNING: Removing unreachable block (ram,0x06b70688) */
/* WARNING: Removing unreachable block (ram,0x06b706a4) */

undefined8 *
Merger_MergeBoard_Systems_ItemUnboxingSystem__UnboxOnConsume
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 *extraout_x1;
  undefined1 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined *puVar26;
  undefined *puVar27;
  long unaff_x25;
  undefined *puVar28;
  undefined *puVar29;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  uint auStack_500 [2];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  undefined1 auStack_480 [8];
  long *plStack_478;
  undefined8 uStack_470;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  uint uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  undefined1 auStack_310 [64];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_190 [8];
  long *plStack_188;
  undefined8 uStack_180;
  undefined4 uStack_174;
  long *plStack_170;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar26 = PTR_DAT_07831128;
  puVar27 = PTR_DAT_07831120;
  plVar21 = (long *)PTR_DAT_07831118;
  auVar32._8_8_ = PTR_DAT_07831128;
  auVar32._0_8_ = PTR_DAT_07831120;
  puVar6 = (undefined8 *)auStack_190;
  plVar13 = &lStack_c0;
  uStack_180 = param_1;
  plStack_170 = param_2;
  if ((bRam0000000007e2a6dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831130);
    func_0x03280a18(PTR_DAT_07831118);
    func_0x03280a18(PTR_DAT_07831138);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0777dbf0);
    func_0x03280a18(PTR_DAT_07831148);
    func_0x03280a18(PTR_DAT_0777dbf8);
    func_0x03280a18(PTR_DAT_07831150);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07831128);
    func_0x03280a18(PTR_DAT_07831120);
    func_0x03280a18(PTR_DAT_07831158);
    func_0x03280a18(PTR_DAT_078101e8);
    bRam0000000007e2a6dc = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_b8 = plStack_170[1];
  lStack_c0 = *plStack_170;
  lStack_a8 = plStack_170[3];
  uStack_b0 = plStack_170[2];
  uVar10 = func_0x03d1a400(*plVar21);
  puVar22 = *(undefined8 **)puVar27;
  lStack_108 = lStack_b8;
  lStack_110 = lStack_c0;
  lStack_f8 = lStack_a8;
  uStack_100 = uStack_b0;
  func_0x03e65784(&uStack_a0,&lStack_110,uVar10,0);
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  plVar11 = (long *)func_0x0448e0e0(&uStack_80,*(undefined8 *)puVar26);
  if (plVar11 == (long *)0x0) goto LAB_06b6eb70;
  lVar23 = *plVar11;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_07831148) {
        puVar12 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6e5b4;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07831148,0);
LAB_06b6e5b4:
  plStack_188 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  if (plStack_188 == (long *)0x0) goto LAB_06b6eb60;
  lVar23 = *plStack_188;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8e0) {
        puVar12 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6e620;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plStack_188,*(long *)PTR_DAT_0774e8e0,0);
LAB_06b6e620:
  puVar12 = (undefined8 *)(*(code *)*puVar12)(plStack_188,puVar12[1]);
  if (((ulong)puVar12 & 1) == 0) {
    puVar26 = (undefined *)0x0;
LAB_06b6ea58:
    plVar13 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      lVar23 = *plStack_188;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b6eabc;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plStack_188,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6eabc:
      puVar12 = (undefined8 *)(*(code *)*puVar22)(plVar13,puVar22[1]);
    }
    if (puVar26 == (undefined *)0x0) {
      return puVar12;
    }
    do {
      auVar37 = func_0x03280ca4(puVar26);
      if (plVar11 != (long *)0x0) {
        lVar23 = *plVar11;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_06b6eb48;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6eb48:
        (*(code *)*puVar22)(plVar11,puVar22[1]);
      }
      if (unaff_x25 == 0) goto LAB_06b6ebb0;
      func_0x03280ca4();
LAB_06b6eb60:
      func_0x03280cac();
      func_0x03280cac();
      func_0x03280ca4();
      plVar21 = plVar11;
LAB_06b6eb70:
      func_0x03280cac();
      plVar11 = plVar21;
    } while( true );
  }
  lVar23 = *plStack_188;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_07831150) {
        puVar12 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6e688;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plStack_188,*(long *)PTR_DAT_07831150,0);
LAB_06b6e688:
  (*(code *)*puVar12)(&lStack_110,plStack_188,puVar12[1]);
  auVar34._8_8_ = lStack_f8;
  auVar34._0_8_ = 0x7e2a000;
  plVar21 = (long *)(uStack_100 & 0xffffffff);
  lStack_128 = plStack_170[1];
  lStack_130 = *plStack_170;
  lStack_118 = plStack_170[3];
  lStack_120 = plStack_170[2];
  auVar36._8_8_ = &lStack_130;
  auVar36._0_8_ = uStack_180;
  uStack_174 = (undefined4)uStack_100;
  uVar10 = 0x6b6e6bc;
  puVar28 = puStack_f0;
SUB_06b6feb0:
  puVar27 = PTR_DAT_077c3b70;
  puVar26 = PTR_DAT_077c0f38;
  puVar14 = auVar36._8_8_;
  puVar8 = (undefined1 *)((long)puVar6 + -0x70);
  puVar7 = (undefined8 *)((long)puVar6 + -0x70);
  puVar20 = (undefined1 *)((long)puVar6 + -0x70);
  *(undefined8 *)((long)puVar6 + -0x40) = uVar10;
  *(undefined **)((long)puVar6 + -0x38) = puVar28;
  *(long *)((long)puVar6 + -0x30) = auVar34._8_8_;
  *(long *)((long)puVar6 + -0x28) = auVar34._0_8_;
  *(long **)((long)puVar6 + -0x20) = plVar11;
  *(undefined1 (*) [16])((long)puVar6 + -0x18) = auVar32;
  *(long **)((long)puVar6 + -8) = plVar13;
  plVar17 = (long *)((ulong)plVar21 & 0xffffffff);
  plVar15 = plVar21;
  puVar12 = puVar22;
  if ((bRam0000000007e2a6df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077617f0);
    func_0x03280a18(PTR_DAT_077617f8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_077c3b58);
    func_0x03280a18(PTR_DAT_077c3b70);
    func_0x03280a18(PTR_DAT_077c0f38);
    bRam0000000007e2a6df = 1;
    plVar15 = plVar21;
    puVar12 = puVar22;
  }
  uVar10 = *(undefined8 *)puVar26;
  *(undefined8 *)((long)puVar6 + -0x48) = 0;
  puVar22 = (undefined8 *)func_0x03280ca0(uVar10);
  func_0x04143c38(puVar22,*(undefined8 *)puVar27);
  plVar11 = *(long **)(auVar36._0_8_ + 0x10);
  if (plVar11 == (long *)0x0) {
LAB_06b70224:
    func_0x03280cac();
  }
  else {
    lVar23 = *plVar11;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar16 = (undefined8 *)(lVar23 + (long)(*piVar25 + 5) * 0x10 + 0x138);
          goto LAB_06b6ffcc;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1e40,5);
LAB_06b6ffcc:
    plVar15 = (long *)puVar16[1];
    plVar13 = (long *)(*(code *)*puVar16)(plVar11,plVar17);
    if (plVar13 == (long *)0x0) goto LAB_06b70224;
    lVar23 = *plVar13;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_077617f0) {
          puVar16 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_06b70038;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    plVar15 = (long *)0x0;
    puVar16 = (undefined8 *)func_0x03256b10(plVar13);
LAB_06b70038:
    plVar11 = (long *)PTR_DAT_0774e8c8;
    plVar17 = (long *)(*(code *)*puVar16)(plVar13,puVar16[1]);
    puVar29 = PTR_DAT_077c3b58;
    puVar27 = PTR_DAT_077617f8;
    puVar16 = (undefined8 *)PTR_DAT_0774e8e0;
    if (plVar17 != (long *)0x0) {
      lVar23 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar18 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b700b8;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar17);
LAB_06b700b8:
      uVar24 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      if ((uVar24 & 1) == 0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_06b701a0;
      }
      lVar23 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar27) {
            puVar12 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b70114;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar27,0);
LAB_06b70114:
      (*(code *)*puVar12)(plVar17,puVar12[1]);
      uVar30 = *puVar14;
      uVar19 = puVar14[3];
      uVar10 = puVar14[2];
      *(undefined8 *)((long)puVar6 + -0x68) = puVar14[1];
      *(undefined8 *)((long)puVar6 + -0x70) = uVar30;
      *(undefined8 *)((long)puVar6 + -0x58) = uVar19;
      *(undefined8 *)((long)puVar6 + -0x60) = uVar10;
      uVar10 = 0x6b70138;
      param_5 = puVar14;
      goto SUB_06b704cc;
    }
  }
  func_0x03280cac();
  puVar16 = (undefined8 *)puVar26;
  puVar27 = (undefined *)0x7e2a000;
  while( true ) {
    auVar37 = func_0x03280ca4(puVar14);
    if (auVar37._8_4_ != 1) break;
    plVar13 = (long *)func_0x072ce910();
    puVar14 = (undefined8 *)*plVar13;
    func_0x072ce920();
    puVar29 = puVar28;
LAB_06b701a0:
    if (plVar17 != (long *)0x0) {
      lVar23 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *plVar11) {
            puVar18 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b701f0;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      plVar15 = (long *)0x0;
      puVar18 = (undefined8 *)func_0x03256b10(plVar17);
LAB_06b701f0:
      (*(code *)*puVar18)(plVar17,puVar18[1]);
    }
    puVar28 = puVar29;
    if (puVar14 == (undefined8 *)0x0) {
      return puVar22;
    }
  }
  plVar13 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    lVar23 = *plVar17;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *plVar11) {
          puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_06b702c0;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    plVar15 = (long *)0x0;
    puVar22 = (undefined8 *)func_0x03256b10(plVar17);
LAB_06b702c0:
    (*(code *)*puVar22)(plVar17,puVar22[1]);
  }
  func_0x03365958(auVar37._0_8_);
  func_0x03280ca4(0);
  uVar10 = 0x6b702e4;
  auVar32 = func_0x02f09514();
  puVar22 = auVar32._8_8_;
  auVar35._8_8_ = auVar37._0_8_;
  auVar35._0_8_ = auVar32._0_8_;
SUB_06b702e4:
  uVar19 = auVar35._0_8_;
  puVar8 = (undefined1 *)((long)puVar7 + -0xc0);
  *(undefined8 *)((long)puVar7 + -0x40) = uVar10;
  *(undefined **)((long)puVar7 + -0x38) = puVar28;
  *(undefined **)((long)puVar7 + -0x30) = puVar27;
  *(undefined8 **)((long)puVar7 + -0x28) = puVar16;
  *(long **)((long)puVar7 + -0x20) = plVar11;
  *(long **)((long)puVar7 + -0x18) = plVar13;
  *(long **)((long)puVar7 + -0x10) = plVar17;
  *(long *)((long)puVar7 + -8) = auVar35._8_8_;
  puVar27 = (undefined *)0x7e2a000;
  plVar17 = (long *)(param_6 & 0xffffffff);
  if ((bRam0000000007e2a6e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_078311b8);
    func_0x03280a18(PTR_DAT_078311c0);
    func_0x03280a18(PTR_DAT_078311c8);
    uVar19 = func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e2a6e1 = 1;
  }
  puVar4 = PTR_DAT_078311c8;
  puVar3 = PTR_DAT_078311b8;
  puVar26 = PTR_DAT_077c0ec8;
  *(undefined1 *)puVar12 = 0;
  uVar30 = puVar12[1];
  uVar10 = *puVar12;
  *(undefined4 *)((long)puVar7 + -0x70) = *(undefined4 *)(puVar12 + 2);
  *(undefined8 *)((long)puVar7 + -0x78) = uVar30;
  *(undefined8 *)((long)puVar7 + -0x80) = uVar10;
  plVar11 = plVar15;
  puVar16 = puVar12;
  puVar29 = puVar28;
  if (plVar15 != (long *)0x0) {
    uVar10 = *(undefined8 *)PTR_DAT_07831140;
    *(undefined8 *)((long)puVar7 + -0x58) = *(undefined8 *)((long)puVar7 + -0x78);
    *(undefined8 *)((long)puVar7 + -0x60) = *(undefined8 *)((long)puVar7 + -0x80);
    *(undefined4 *)((long)puVar7 + -0x50) = *(undefined4 *)((long)puVar7 + -0x70);
    func_0x03d1c7a8(plVar15,(undefined1 *)((long)puVar7 + -0x60),uVar10);
    uVar31 = *puVar22;
    uVar30 = puVar22[3];
    uVar19 = puVar22[2];
    uVar10 = *(undefined8 *)puVar4;
    *(undefined8 *)((long)puVar7 + -0x98) = puVar22[1];
    *(undefined8 *)((long)puVar7 + -0xa0) = uVar31;
    *(undefined8 *)((long)puVar7 + -0x88) = uVar30;
    *(undefined8 *)((long)puVar7 + -0x90) = uVar19;
    *(undefined8 *)((long)puVar7 + -0x58) = *(undefined8 *)((long)puVar7 + -0x98);
    *(undefined8 *)((long)puVar7 + -0x60) = *(undefined8 *)((long)puVar7 + -0xa0);
    *(undefined8 *)((long)puVar7 + -0x48) = *(undefined8 *)((long)puVar7 + -0x88);
    *(undefined8 *)((long)puVar7 + -0x50) = *(undefined8 *)((long)puVar7 + -0x90);
    func_0x03ec59a8((undefined1 *)((long)puVar7 + -0x60),plVar15,0,uVar10);
    puVar27 = (undefined *)func_0x03d1ae90(plVar15,*(undefined8 *)puVar26);
    puVar16 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar3);
    uVar19 = func_0x06b9ac10(puVar16,0);
    puVar26 = PTR_DAT_078101d0;
    puVar29 = puVar3;
    if (puVar16 != (undefined8 *)0x0) {
      puVar16[2] = plVar15;
      func_0x032809c4(puVar16 + 2,plVar15);
      plVar11 = puVar16 + 4;
      *plVar11 = (long)param_5;
      *(int *)(puVar16 + 3) = (int)puVar27;
      func_0x032809c4(plVar11,param_5);
      *(int *)(puVar16 + 7) = (int)param_6;
      uVar24 = func_0x055ea870(param_5,*(undefined8 *)puVar26,0);
      if ((uVar24 & 1) != 0) {
        uVar30 = *puVar22;
        uVar19 = puVar22[3];
        uVar10 = puVar22[2];
        *(undefined8 *)((long)puVar7 + -0xb8) = puVar22[1];
        *(undefined8 *)((long)puVar7 + -0xc0) = uVar30;
        *(undefined8 *)((long)puVar7 + -0xa8) = uVar19;
        *(undefined8 *)((long)puVar7 + -0xb0) = uVar10;
        auVar32 = func_0x06b706d8(uVar24,(undefined1 *)((long)puVar7 + -0xc0),param_6 & 0xffffffff);
        plVar17 = auVar32._8_8_;
        puVar16[5] = auVar32._0_8_;
        func_0x032809c4(puVar16 + 5,auVar32._0_8_);
        puVar16[6] = plVar17;
        func_0x032809c4(puVar16 + 6,plVar17);
      }
      uVar19 = 0;
      puVar29 = puVar26;
      if (puVar22[2] != 0) {
        puVar22 = (undefined8 *)func_0x03ec33e4(puVar22[2],puVar16,*(undefined8 *)PTR_DAT_078311c0);
        return puVar22;
      }
    }
  }
  uVar10 = 0x6b704cc;
  func_0x03280cac(uVar19);
  puVar20 = extraout_x1;
SUB_06b704cc:
  puVar26 = PTR_DAT_078311d0;
  *(undefined **)(puVar8 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar8 + -0x58) = uVar10;
  *(undefined **)(puVar8 + -0x50) = unaff_x28;
  *(undefined **)(puVar8 + -0x48) = unaff_x27;
  *(undefined **)(puVar8 + -0x40) = unaff_x26;
  *(undefined **)(puVar8 + -0x38) = puVar29;
  *(undefined **)(puVar8 + -0x30) = puVar27;
  *(undefined8 **)(puVar8 + -0x28) = puVar16;
  *(long **)(puVar8 + -0x20) = plVar11;
  *(undefined8 **)(puVar8 + -0x18) = param_5;
  *(long **)(puVar8 + -0x10) = plVar17;
  *(undefined8 **)(puVar8 + -8) = puVar22;
  if ((bRam0000000007e2a6e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48,puVar20);
    func_0x03280a18(PTR_DAT_078311d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078311e0);
    func_0x03280a18(PTR_DAT_078311e8);
    func_0x03280a18(PTR_DAT_078311f0);
    func_0x03280a18(PTR_DAT_078311f8);
    func_0x03280a18(PTR_DAT_07831200);
    func_0x03280a18(PTR_DAT_078311d0);
    bRam0000000007e2a6e0 = 1;
  }
  uVar10 = *(undefined8 *)puVar26;
  *(undefined8 *)(puVar8 + -0x98) = 0;
  *(undefined8 *)(puVar8 + -0xa0) = 0;
  *(undefined8 *)(puVar8 + -0x88) = 0;
  *(undefined8 *)(puVar8 + -0x90) = 0;
  *(undefined8 *)(puVar8 + -0xb8) = 0;
  *(undefined8 *)(puVar8 + -0xc0) = 0;
  *(undefined8 *)(puVar8 + -0xa8) = 0;
  *(undefined8 *)(puVar8 + -0xb0) = 0;
  puVar22 = (undefined8 *)func_0x03280ca0(uVar10);
  return puVar22;
LAB_06b6ebb0:
  if (auVar37._8_4_ != 1) goto LAB_06b6ebd8;
  puVar22 = (undefined8 *)func_0x072ce910(auVar37._0_8_);
  puVar26 = (undefined *)*puVar22;
  puVar12 = (undefined8 *)func_0x072ce920();
  goto LAB_06b6ea58;
LAB_06b6ebd8:
  if (plStack_188 != (long *)0x0) {
    lVar23 = *plStack_188;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_06b6ec38;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(plStack_188,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6ec38:
    (*(code *)*puVar22)(plStack_188,puVar22[1]);
  }
  func_0x03365958(auVar37._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  puVar28 = PTR_DAT_07831170;
  puVar3 = PTR_DAT_07831168;
  puVar29 = PTR_DAT_07831160;
  puVar26 = PTR_DAT_0782fe68;
  puVar27 = PTR_DAT_0782fe48;
  puVar12 = auVar32._8_8_;
  uVar10 = auVar32._0_8_;
  puVar6 = (undefined8 *)auStack_310;
  unaff_x27 = (undefined *)0x7e2a000;
  if ((bRam0000000007e2a6db & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07831160);
    func_0x03280a18(PTR_DAT_07831138);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0777dbf0);
    func_0x03280a18(PTR_DAT_07831178);
    func_0x03280a18(PTR_DAT_0777dbf8);
    func_0x03280a18(PTR_DAT_07831180);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07831170);
    func_0x03280a18(PTR_DAT_07831168);
    func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e2a6db = 1;
  }
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_258 = puVar12[1];
  uStack_260 = *puVar12;
  uStack_248 = puVar12[3];
  uStack_250 = puVar12[2];
  plVar13 = (long *)func_0x03d1a74c(*(undefined8 *)puVar29);
  plVar11 = (long *)func_0x03280ca0(*(undefined8 *)puVar26);
  func_0x06015d08(plVar11,0,*(undefined8 *)puVar27,0);
  puVar22 = *(undefined8 **)puVar3;
  uStack_2a8 = uStack_258;
  uStack_2b0 = uStack_260;
  uStack_298 = uStack_248;
  uStack_2a0 = uStack_250;
  func_0x03e65d24(&uStack_240,&uStack_2b0,plVar13,plVar11);
  uStack_208 = uStack_238;
  uStack_210 = uStack_240;
  uStack_1f8 = uStack_228;
  uStack_200 = uStack_230;
  plVar21 = (long *)func_0x04491a98(&uStack_210,*(undefined8 *)puVar28);
  if (plVar21 == (long *)0x0) goto LAB_06b6f2a4;
  lVar23 = *plVar21;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_07831178) {
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6ee30;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar14 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_07831178,0);
LAB_06b6ee30:
  unaff_x28 = PTR_DAT_07831138;
  unaff_x29 = PTR_DAT_078101d0;
  unaff_x26 = PTR_DAT_0777dbf8;
  unaff_x27 = PTR_DAT_0774e8e0;
  plVar13 = (long *)(*(code *)*puVar14)(plVar21,puVar14[1]);
  puVar29 = unaff_x26;
  if (plVar13 == (long *)0x0) goto LAB_06b6f294;
  lVar23 = *plVar13;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)unaff_x27) {
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6eeb0;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)unaff_x27,0);
LAB_06b6eeb0:
  puVar14 = (undefined8 *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (((ulong)puVar14 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
LAB_06b6f198:
    if (plVar13 != (long *)0x0) {
      lVar23 = *plVar13;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b6f1f0;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6f1f0:
      puVar14 = (undefined8 *)(*(code *)*puVar22)(plVar13,puVar22[1]);
    }
    puVar29 = unaff_x26;
    if (puVar12 == (undefined8 *)0x0) {
      return puVar14;
    }
    do {
      auVar33 = func_0x03280ca4(puVar12);
      uVar19 = auVar33._0_8_;
      if (plVar11 != (long *)0x0) {
        lVar23 = *plVar11;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_06b6f27c;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6f27c:
        (*(code *)*puVar22)(plVar11,puVar22[1]);
      }
      if (puVar3 == (undefined *)0x0) goto LAB_06b6f2e4;
      func_0x03280ca4(puVar3);
LAB_06b6f294:
      func_0x03280cac();
      func_0x03280ca4(puVar3);
      func_0x03280cac();
LAB_06b6f2a4:
      func_0x03280cac();
    } while( true );
  }
  lVar23 = *plVar13;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_07831180) {
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6ef14;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07831180,0);
LAB_06b6ef14:
  (*(code *)*puVar14)(&uStack_2b0,plVar13,puVar14[1]);
  uStack_2c8 = puVar12[1];
  uStack_2d0 = *puVar12;
  uStack_2b8 = puVar12[3];
  uStack_2c0 = puVar12[2];
  plVar21 = (long *)(uStack_2a8 & 0xffffffff);
  auVar34._8_8_ = puVar28;
  auVar34._0_8_ = plVar21;
  auVar36._8_8_ = &uStack_2d0;
  auVar36._0_8_ = uVar10;
  uVar10 = 0x6b6ef40;
  puVar28 = puVar3;
  goto SUB_06b6feb0;
LAB_06b6f2e4:
  if (auVar33._8_4_ != 1) goto LAB_06b6f30c;
  plVar21 = (long *)func_0x072ce910(uVar19);
  puVar12 = (undefined8 *)*plVar21;
  puVar14 = (undefined8 *)func_0x072ce920();
  unaff_x26 = puVar29;
  goto LAB_06b6f198;
LAB_06b6f30c:
  if (plVar13 != (long *)0x0) {
    lVar23 = *plVar13;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar22 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_06b6f364;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6f364:
    (*(code *)*puVar22)(plVar13,puVar22[1]);
  }
  func_0x03365958(uVar19);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  puVar5 = PTR_DAT_07831198;
  puVar4 = PTR_DAT_07831190;
  puVar28 = PTR_DAT_07831188;
  puVar26 = PTR_DAT_0782fe68;
  puVar27 = PTR_DAT_0782fe48;
  puVar12 = auVar32._8_8_;
  uStack_470 = auVar32._0_8_;
  puVar6 = (undefined8 *)auStack_480;
  uStack_368 = 0x6b6f388;
  puStack_348 = puVar3;
  uStack_320 = 0;
  unaff_x26 = (undefined *)0x7e2a000;
  puStack_370 = unaff_x29;
  puStack_360 = unaff_x28;
  puStack_358 = unaff_x27;
  puStack_350 = puVar29;
  plStack_330 = plVar11;
  uStack_328 = uVar10;
  plStack_318 = plVar13;
  if ((bRam0000000007e2a6dd & 1) == 0) {
    uStack_340 = auVar33._8_8_;
    uStack_338 = uVar19;
    func_0x03280a18(PTR_DAT_07831130);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07831188);
    func_0x03280a18(PTR_DAT_07831138);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0777dbf0);
    func_0x03280a18(PTR_DAT_078311a0);
    func_0x03280a18(PTR_DAT_078311a8);
    func_0x03280a18(PTR_DAT_0777dbf8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_0777a670);
    func_0x03280a18(PTR_DAT_07831198);
    func_0x03280a18(PTR_DAT_07831190);
    func_0x03280a18(PTR_DAT_07831158);
    func_0x03280a18(PTR_DAT_078101f0);
    auVar33._8_8_ = uStack_340;
    auVar33._0_8_ = uStack_338;
    bRam0000000007e2a6dd = 1;
  }
  uStack_340 = auVar33._8_8_;
  uStack_338 = auVar33._0_8_;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_3c8 = puVar12[1];
  uStack_3d0 = *puVar12;
  uStack_3b8 = puVar12[3];
  uStack_3c0 = puVar12[2];
  plVar13 = (long *)func_0x03d1a5f8(*(undefined8 *)puVar28);
  plVar15 = (long *)func_0x03280ca0(*(undefined8 *)puVar26);
  func_0x06015d08(plVar15,0,*(undefined8 *)puVar27,0);
  puVar22 = *(undefined8 **)puVar4;
  uStack_408 = uStack_3c8;
  uStack_410 = uStack_3d0;
  uStack_3f8 = uStack_3b8;
  uStack_400 = uStack_3c0;
  plVar21 = plVar15;
  func_0x03e65b44(&uStack_3b0,&uStack_410,plVar13);
  uStack_388 = uStack_3a8;
  uStack_390 = uStack_3b0;
  uStack_378 = uStack_398;
  uStack_380 = uStack_3a0;
  plVar11 = (long *)func_0x04490750(&uStack_390,*(undefined8 *)puVar5);
  if (plVar11 == (long *)0x0) goto LAB_06b6fb54;
  lVar23 = *plVar11;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_078311a0) {
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6f590;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  plVar21 = (long *)0x0;
  puVar14 = (undefined8 *)func_0x03256b10(plVar11);
LAB_06b6f590:
  plStack_478 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
  if (plStack_478 == (long *)0x0) goto LAB_06b6fb44;
  lVar23 = *plStack_478;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8e0) {
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6f5fc;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  plVar21 = (long *)0x0;
  puVar14 = (undefined8 *)func_0x03256b10(plStack_478);
LAB_06b6f5fc:
  puVar14 = (undefined8 *)(*(code *)*puVar14)(plStack_478,puVar14[1]);
  if (((ulong)puVar14 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
LAB_06b6fa3c:
    plVar15 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      lVar23 = *plStack_478;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_06b6faa0;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      plVar21 = (long *)0x0;
      puVar14 = (undefined8 *)func_0x03256b10(plStack_478);
LAB_06b6faa0:
      puVar14 = (undefined8 *)(*(code *)*puVar14)(plVar15,puVar14[1]);
      plVar13 = plVar15;
    }
    if (puVar12 == (undefined8 *)0x0) {
      return puVar14;
    }
    do {
      auVar34 = func_0x03280ca4(puVar12);
      uVar10 = auVar34._0_8_;
      if (plVar11 != (long *)0x0) {
        lVar23 = *plVar11;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_06b6fb2c;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        plVar21 = (long *)0x0;
        puVar14 = (undefined8 *)func_0x03256b10(plVar11);
LAB_06b6fb2c:
        (*(code *)*puVar14)(plVar11,puVar14[1]);
      }
      if (puVar28 == (undefined *)0x0) goto LAB_06b6fb94;
      func_0x03280ca4(puVar28);
LAB_06b6fb44:
      func_0x03280cac();
      func_0x03280cac();
      func_0x03280ca4(puVar28);
      plVar15 = plVar11;
LAB_06b6fb54:
      func_0x03280cac();
      plVar11 = plVar15;
    } while( true );
  }
  lVar23 = *plStack_478;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_078311a8) {
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_06b6f664;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar14 = (undefined8 *)func_0x03256b10(plStack_478,*(long *)PTR_DAT_078311a8,0);
LAB_06b6f664:
  (*(code *)*puVar14)(&uStack_410,plStack_478,puVar14[1]);
  uStack_428 = puVar12[1];
  uStack_430 = *puVar12;
  uStack_418 = puVar12[3];
  uStack_420 = puVar12[2];
  plVar13 = (long *)(uStack_400 >> 0x20);
  auVar32._8_8_ = puVar12;
  auVar32._0_8_ = uStack_3f8 & 0xffffffff;
  plVar21 = (long *)CONCAT44(0,uStack_3d8);
  auVar34._8_8_ = puVar4;
  auVar34._0_8_ = plVar21;
  auVar36._8_8_ = &uStack_430;
  auVar36._0_8_ = uStack_470;
  uVar10 = 0x6b6f694;
  goto SUB_06b6feb0;
LAB_06b6fb94:
  if (auVar34._8_4_ != 1) goto LAB_06b6fbbc;
  plVar15 = (long *)func_0x072ce910(uVar10);
  puVar12 = (undefined8 *)*plVar15;
  puVar14 = (undefined8 *)func_0x072ce920();
  goto LAB_06b6fa3c;
LAB_06b6fbbc:
  if (plStack_478 != (long *)0x0) {
    lVar23 = *plStack_478;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_06b6fc1c;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    plVar21 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plStack_478);
LAB_06b6fc1c:
    (*(code *)*puVar12)(plStack_478,puVar12[1]);
  }
  func_0x03365958(uVar10);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  puVar14 = auVar35._8_8_;
  plVar17 = auVar35._0_8_;
  puVar7 = &uStack_580;
  puVar6 = &uStack_580;
  puVar12 = &uStack_580;
  uStack_4c0 = 0x6b6fc40;
  uStack_490 = 0;
  plVar15 = (long *)0x7e2a000;
  plStack_4a0 = plVar11;
  puStack_498 = &uStack_3d0;
  plStack_488 = plVar13;
  auVar1 = auVar34;
  if ((bRam0000000007e2a6de & 1) == 0) {
    uStack_4b0 = auVar34._8_8_;
    uStack_4a8 = uVar10;
    func_0x03280a18(PTR_DAT_0777a490);
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_077c0f50);
    func_0x03280a18(PTR_DAT_077c0f58);
    func_0x03280a18(PTR_DAT_077c0f60);
    func_0x03280a18(PTR_DAT_077c0f68);
    func_0x03280a18(PTR_DAT_078311b0);
    auVar1._8_8_ = uStack_4b0;
    auVar1._0_8_ = uStack_4a8;
    bRam0000000007e2a6de = 1;
  }
  uStack_4b0 = auVar1._8_8_;
  uStack_4a8 = auVar1._0_8_;
  lStack_4b8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  auStack_500[0] = 0;
  if (puVar14[1] == 0) {
LAB_06b6fe24:
    uStack_4b0 = auVar1._8_8_;
    uStack_4a8 = auVar1._0_8_;
    auVar37 = func_0x03280cac();
    plVar13 = auVar37._0_8_;
    if (auVar37._8_4_ == 1) {
      plVar17 = (long *)func_0x072ce910(plVar13);
      lVar23 = *plVar17;
      func_0x072ce920();
      puVar12 = (undefined8 *)func_0x051159b0(&uStack_4e0,*(undefined8 *)PTR_DAT_077c0f50);
      if (lVar23 == 0) {
        return puVar12;
      }
      func_0x03280ca4(lVar23);
    }
    auVar32._8_8_ = 0;
    auVar32._0_8_ = plVar15;
    func_0x051159b0(&uStack_4e0,*(undefined8 *)PTR_DAT_077c0f50);
    func_0x03365958(plVar13);
    func_0x03280ca4(0);
    uVar10 = 0x6b6feb0;
    auVar36 = func_0x02f09514();
    goto SUB_06b6feb0;
  }
  plVar21 = *(long **)PTR_DAT_078311b0;
  puVar16 = (undefined8 *)func_0x03ec5020(puVar14[1],&lStack_4b8);
  auVar2._8_8_ = uStack_4b0;
  auVar2._0_8_ = uStack_4a8;
  auVar1._8_8_ = uStack_4b0;
  auVar1._0_8_ = uStack_4a8;
  if (((ulong)puVar16 & 1) == 0) {
    return puVar16;
  }
  if ((lStack_4b8 == 0) || (auVar1 = auVar2, *(long *)(lStack_4b8 + 0x10) == 0)) goto LAB_06b6fe24;
  func_0x04145068(&uStack_520,*(long *)(lStack_4b8 + 0x10),*(undefined8 *)PTR_DAT_077c0f68);
  plVar11 = (long *)PTR_DAT_077c0f58;
  puVar16 = (undefined8 *)PTR_DAT_0777a520;
  puVar27 = PTR_DAT_0777a490;
  auVar34._8_8_ = PTR_DAT_0777a490;
  auVar34._0_8_ = PTR_DAT_0777a520;
  uStack_4d8 = uStack_518;
  uStack_4e0 = uStack_520;
  plStack_4d0 = plStack_510;
  do {
    do {
      uVar24 = func_0x051159b4(&uStack_4e0,*plVar11);
      plVar15 = plStack_4d0;
      if ((uVar24 & 1) == 0) {
        puVar22 = (undefined8 *)func_0x051159b0(&uStack_4e0,*(undefined8 *)PTR_DAT_077c0f50);
        return puVar22;
      }
      if (plStack_4d0 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_06b6fe20;
      }
      plVar21 = (long *)*puVar16;
      bVar9 = func_0x03d1e508(plStack_4d0,&uStack_4f8);
    } while ((bVar9 & (char)uStack_4f8 != '\0') == 0);
    plVar21 = *(long **)puVar27;
    uVar24 = func_0x03d1e2e4(plVar15,auStack_500);
  } while ((uVar24 & 1) == 0);
  uStack_518 = puVar14[1];
  uStack_520 = *puVar14;
  uStack_508 = puVar14[3];
  plStack_510 = (long *)puVar14[2];
  uStack_538 = uStack_4f0;
  uStack_540 = uStack_4f8;
  uStack_530 = uStack_4e8;
  if (lStack_4b8 == 0) {
LAB_06b6fe20:
    func_0x03280cac();
    auVar1._8_8_ = uStack_4b0;
    auVar1._0_8_ = uStack_4a8;
    goto LAB_06b6fe24;
  }
  param_5 = *(undefined8 **)(lStack_4b8 + 0x18);
  param_6 = (ulong)auStack_500[0];
  uStack_558 = puVar14[1];
  uStack_560 = *puVar14;
  uStack_548 = puVar14[3];
  plStack_550 = (long *)puVar14[2];
  uStack_578 = uStack_4f0;
  uStack_580 = uStack_4f8;
  uStack_570 = uStack_4e8;
  puVar22 = &uStack_560;
  uVar10 = 0x6b6fdec;
  plVar13 = plVar15;
  goto SUB_06b702e4;
}


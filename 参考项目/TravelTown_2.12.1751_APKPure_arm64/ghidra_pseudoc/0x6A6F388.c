/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6F388; Merger.MergeBoard.Systems.ItemUnboxingSystem.UnboxOnResourceConsume; status ok */


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
/* WARNING: Removing unreachable block (ram,0x06b7059c) */
/* WARNING: Removing unreachable block (ram,0x06b706cc) */
/* WARNING: Removing unreachable block (ram,0x06b705a0) */
/* WARNING: Removing unreachable block (ram,0x06b70698) */
/* WARNING: Removing unreachable block (ram,0x06b70688) */
/* WARNING: Removing unreachable block (ram,0x06b706a4) */

undefined8 *
Merger_MergeBoard_Systems_ItemUnboxingSystem__UnboxOnResourceConsume
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 *extraout_x1;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  uint auStack_1f0 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined1 auStack_170 [8];
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  uint uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_07831198;
  puVar24 = PTR_DAT_07831190;
  puVar3 = PTR_DAT_07831188;
  puVar26 = PTR_DAT_0782fe68;
  puVar25 = PTR_DAT_0782fe48;
  puVar5 = (undefined8 *)auStack_170;
  uStack_160 = param_1;
  if ((bRam0000000007e2a6dd & 1) == 0) {
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
    bRam0000000007e2a6dd = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  plVar9 = (long *)func_0x03d1a5f8(*(undefined8 *)puVar3);
  plVar10 = (long *)func_0x03280ca0(*(undefined8 *)puVar26);
  func_0x06015d08(plVar10,0,*(undefined8 *)puVar25,0);
  puVar19 = *(undefined8 **)puVar24;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  uStack_e8 = uStack_a8;
  uStack_f0 = uStack_b0;
  plVar18 = plVar10;
  func_0x03e65b44(&uStack_a0,&uStack_100,plVar9);
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  plVar11 = (long *)func_0x04490750(&uStack_80,*(undefined8 *)puVar4);
  if (plVar11 == (long *)0x0) goto LAB_06b6fb54;
  lVar20 = *plVar11;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_078311a0) {
        puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_06b6f590;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  plVar18 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_06b6f590:
  plStack_168 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  if (plStack_168 == (long *)0x0) goto LAB_06b6fb44;
  lVar20 = *plStack_168;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8e0) {
        puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_06b6f5fc;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  plVar18 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plStack_168);
LAB_06b6f5fc:
  puVar12 = (undefined8 *)(*(code *)*puVar12)(plStack_168,puVar12[1]);
  if (((ulong)puVar12 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
LAB_06b6fa3c:
    plVar10 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      lVar20 = *plStack_168;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06b6faa0;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      plVar18 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(plStack_168);
LAB_06b6faa0:
      puVar12 = (undefined8 *)(*(code *)*puVar12)(plVar10,puVar12[1]);
      plVar9 = plVar10;
    }
    if (param_2 == (undefined8 *)0x0) {
      return puVar12;
    }
    do {
      auVar30 = func_0x03280ca4(param_2);
      uVar27 = auVar30._0_8_;
      if (plVar11 != (long *)0x0) {
        lVar20 = *plVar11;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_06b6fb2c;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        plVar18 = (long *)0x0;
        puVar12 = (undefined8 *)func_0x03256b10(plVar11);
LAB_06b6fb2c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (puVar3 == (undefined *)0x0) goto LAB_06b6fb94;
      func_0x03280ca4(puVar3);
LAB_06b6fb44:
      func_0x03280cac();
      func_0x03280cac();
      func_0x03280ca4(puVar3);
      plVar10 = plVar11;
LAB_06b6fb54:
      func_0x03280cac();
      plVar11 = plVar10;
    } while( true );
  }
  lVar20 = *plStack_168;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_078311a8) {
        puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_06b6f664;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar12 = (undefined8 *)func_0x03256b10(plStack_168,*(long *)PTR_DAT_078311a8,0);
LAB_06b6f664:
  (*(code *)*puVar12)(&uStack_100,plStack_168,puVar12[1]);
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uVar21 = uStack_f0 >> 0x20;
  plVar10 = (long *)(uStack_e8 & 0xffffffff);
  plVar18 = (long *)(ulong)uStack_c8;
  auVar32._8_8_ = &uStack_120;
  auVar32._0_8_ = uStack_160;
  uVar27 = 0x6b6f694;
  plVar9 = plVar18;
SUB_06b6feb0:
  puVar25 = PTR_DAT_077c3b70;
  puVar4 = PTR_DAT_077c0f38;
  puVar23 = auVar32._8_8_;
  puVar7 = (undefined1 *)((long)puVar5 + -0x70);
  puVar6 = (undefined8 *)((long)puVar5 + -0x70);
  puVar17 = (undefined1 *)((long)puVar5 + -0x70);
  *(undefined8 *)((long)puVar5 + -0x40) = uVar27;
  *(undefined **)((long)puVar5 + -0x38) = puVar3;
  *(undefined **)((long)puVar5 + -0x30) = puVar24;
  *(long **)((long)puVar5 + -0x28) = plVar9;
  *(long **)((long)puVar5 + -0x20) = plVar11;
  *(long **)((long)puVar5 + -0x18) = plVar10;
  *(undefined8 **)((long)puVar5 + -0x10) = param_2;
  *(ulong *)((long)puVar5 + -8) = uVar21;
  plVar14 = (long *)((ulong)plVar18 & 0xffffffff);
  plVar10 = plVar18;
  puVar12 = puVar19;
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
    plVar10 = plVar18;
    puVar12 = puVar19;
  }
  uVar27 = *(undefined8 *)puVar4;
  *(undefined8 *)((long)puVar5 + -0x48) = 0;
  puVar19 = (undefined8 *)func_0x03280ca0(uVar27);
  func_0x04143c38(puVar19,*(undefined8 *)puVar25);
  plVar11 = *(long **)(auVar32._0_8_ + 0x10);
  if (plVar11 == (long *)0x0) {
LAB_06b70224:
    func_0x03280cac();
  }
  else {
    lVar20 = *plVar11;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar13 = (undefined8 *)(lVar20 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto LAB_06b6ffcc;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1e40,5);
LAB_06b6ffcc:
    plVar10 = (long *)puVar13[1];
    plVar18 = (long *)(*(code *)*puVar13)(plVar11,plVar14);
    if (plVar18 == (long *)0x0) goto LAB_06b70224;
    lVar20 = *plVar18;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_077617f0) {
          puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b70038;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    plVar10 = (long *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b70038:
    plVar11 = (long *)PTR_DAT_0774e8c8;
    plVar14 = (long *)(*(code *)*puVar13)(plVar18,puVar13[1]);
    puVar26 = PTR_DAT_077c3b58;
    puVar25 = PTR_DAT_077617f8;
    puVar13 = (undefined8 *)PTR_DAT_0774e8e0;
    if (plVar14 != (long *)0x0) {
      lVar20 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06b700b8;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      plVar10 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b700b8:
      uVar21 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if ((uVar21 & 1) == 0) {
        puVar23 = (undefined8 *)0x0;
        goto LAB_06b701a0;
      }
      lVar20 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar25) {
            puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06b70114;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar25,0);
LAB_06b70114:
      (*(code *)*puVar12)(plVar14,puVar12[1]);
      uVar28 = *puVar23;
      uVar16 = puVar23[3];
      uVar27 = puVar23[2];
      *(undefined8 *)((long)puVar5 + -0x68) = puVar23[1];
      *(undefined8 *)((long)puVar5 + -0x70) = uVar28;
      *(undefined8 *)((long)puVar5 + -0x58) = uVar16;
      *(undefined8 *)((long)puVar5 + -0x60) = uVar27;
      uVar27 = 0x6b70138;
      param_5 = puVar23;
      goto SUB_06b704cc;
    }
  }
  func_0x03280cac();
  puVar13 = (undefined8 *)puVar4;
  puVar25 = (undefined *)0x7e2a000;
  puVar26 = puVar3;
  while( true ) {
    auVar33 = func_0x03280ca4(puVar23);
    if (auVar33._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910();
    puVar23 = (undefined8 *)*plVar18;
    func_0x072ce920();
LAB_06b701a0:
    if (plVar14 != (long *)0x0) {
      lVar20 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *plVar11) {
            puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_06b701f0;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      plVar10 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b701f0:
      (*(code *)*puVar15)(plVar14,puVar15[1]);
    }
    if (puVar23 == (undefined8 *)0x0) {
      return puVar19;
    }
  }
  plVar18 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    lVar20 = *plVar14;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *plVar11) {
          puVar19 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b702c0;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    plVar10 = (long *)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b702c0:
    (*(code *)*puVar19)(plVar14,puVar19[1]);
  }
  func_0x03365958(auVar33._0_8_);
  func_0x03280ca4(0);
  uVar27 = 0x6b702e4;
  auVar30 = func_0x02f09514();
  puVar19 = auVar30._8_8_;
  auVar31._8_8_ = auVar33._0_8_;
  auVar31._0_8_ = auVar30._0_8_;
SUB_06b702e4:
  uVar16 = auVar31._0_8_;
  puVar7 = (undefined1 *)((long)puVar6 + -0xc0);
  *(undefined8 *)((long)puVar6 + -0x40) = uVar27;
  *(undefined **)((long)puVar6 + -0x38) = puVar26;
  *(undefined **)((long)puVar6 + -0x30) = puVar25;
  *(undefined8 **)((long)puVar6 + -0x28) = puVar13;
  *(long **)((long)puVar6 + -0x20) = plVar11;
  *(long **)((long)puVar6 + -0x18) = plVar18;
  *(long **)((long)puVar6 + -0x10) = plVar14;
  *(long *)((long)puVar6 + -8) = auVar31._8_8_;
  puVar25 = (undefined *)0x7e2a000;
  plVar14 = (long *)(param_6 & 0xffffffff);
  if ((bRam0000000007e2a6e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_078311b8);
    func_0x03280a18(PTR_DAT_078311c0);
    func_0x03280a18(PTR_DAT_078311c8);
    uVar16 = func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e2a6e1 = 1;
  }
  puVar4 = PTR_DAT_078311c8;
  puVar24 = PTR_DAT_078311b8;
  puVar3 = PTR_DAT_077c0ec8;
  *(undefined1 *)puVar12 = 0;
  uVar28 = puVar12[1];
  uVar27 = *puVar12;
  *(undefined4 *)((long)puVar6 + -0x70) = *(undefined4 *)(puVar12 + 2);
  *(undefined8 *)((long)puVar6 + -0x78) = uVar28;
  *(undefined8 *)((long)puVar6 + -0x80) = uVar27;
  plVar11 = plVar10;
  puVar13 = puVar12;
  if (plVar10 != (long *)0x0) {
    uVar27 = *(undefined8 *)PTR_DAT_07831140;
    *(undefined8 *)((long)puVar6 + -0x58) = *(undefined8 *)((long)puVar6 + -0x78);
    *(undefined8 *)((long)puVar6 + -0x60) = *(undefined8 *)((long)puVar6 + -0x80);
    *(undefined4 *)((long)puVar6 + -0x50) = *(undefined4 *)((long)puVar6 + -0x70);
    func_0x03d1c7a8(plVar10,(undefined1 *)((long)puVar6 + -0x60),uVar27);
    uVar29 = *puVar19;
    uVar28 = puVar19[3];
    uVar16 = puVar19[2];
    uVar27 = *(undefined8 *)puVar4;
    *(undefined8 *)((long)puVar6 + -0x98) = puVar19[1];
    *(undefined8 *)((long)puVar6 + -0xa0) = uVar29;
    *(undefined8 *)((long)puVar6 + -0x88) = uVar28;
    *(undefined8 *)((long)puVar6 + -0x90) = uVar16;
    *(undefined8 *)((long)puVar6 + -0x58) = *(undefined8 *)((long)puVar6 + -0x98);
    *(undefined8 *)((long)puVar6 + -0x60) = *(undefined8 *)((long)puVar6 + -0xa0);
    *(undefined8 *)((long)puVar6 + -0x48) = *(undefined8 *)((long)puVar6 + -0x88);
    *(undefined8 *)((long)puVar6 + -0x50) = *(undefined8 *)((long)puVar6 + -0x90);
    func_0x03ec59a8((undefined1 *)((long)puVar6 + -0x60),plVar10,0,uVar27);
    puVar25 = (undefined *)func_0x03d1ae90(plVar10,*(undefined8 *)puVar3);
    puVar13 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar24);
    uVar16 = func_0x06b9ac10(puVar13,0);
    puVar3 = PTR_DAT_078101d0;
    puVar26 = puVar24;
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[2] = plVar10;
      func_0x032809c4(puVar13 + 2,plVar10);
      plVar11 = puVar13 + 4;
      *plVar11 = (long)param_5;
      *(int *)(puVar13 + 3) = (int)puVar25;
      func_0x032809c4(plVar11,param_5);
      *(int *)(puVar13 + 7) = (int)param_6;
      uVar21 = func_0x055ea870(param_5,*(undefined8 *)puVar3,0);
      if ((uVar21 & 1) != 0) {
        uVar28 = *puVar19;
        uVar16 = puVar19[3];
        uVar27 = puVar19[2];
        *(undefined8 *)((long)puVar6 + -0xb8) = puVar19[1];
        *(undefined8 *)((long)puVar6 + -0xc0) = uVar28;
        *(undefined8 *)((long)puVar6 + -0xa8) = uVar16;
        *(undefined8 *)((long)puVar6 + -0xb0) = uVar27;
        auVar30 = func_0x06b706d8(uVar21,(undefined1 *)((long)puVar6 + -0xc0),param_6 & 0xffffffff);
        plVar14 = auVar30._8_8_;
        puVar13[5] = auVar30._0_8_;
        func_0x032809c4(puVar13 + 5,auVar30._0_8_);
        puVar13[6] = plVar14;
        func_0x032809c4(puVar13 + 6,plVar14);
      }
      uVar16 = 0;
      puVar26 = puVar3;
      if (puVar19[2] != 0) {
        puVar19 = (undefined8 *)func_0x03ec33e4(puVar19[2],puVar13,*(undefined8 *)PTR_DAT_078311c0);
        return puVar19;
      }
    }
  }
  uVar27 = 0x6b704cc;
  func_0x03280cac(uVar16);
  puVar17 = extraout_x1;
SUB_06b704cc:
  puVar3 = PTR_DAT_078311d0;
  *(undefined8 *)(puVar7 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar7 + -0x58) = uVar27;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x28;
  *(undefined8 *)(puVar7 + -0x48) = unaff_x27;
  *(undefined8 *)(puVar7 + -0x40) = 0x7e2a000;
  *(undefined **)(puVar7 + -0x38) = puVar26;
  *(undefined **)(puVar7 + -0x30) = puVar25;
  *(undefined8 **)(puVar7 + -0x28) = puVar13;
  *(long **)(puVar7 + -0x20) = plVar11;
  *(undefined8 **)(puVar7 + -0x18) = param_5;
  *(long **)(puVar7 + -0x10) = plVar14;
  *(undefined8 **)(puVar7 + -8) = puVar19;
  if ((bRam0000000007e2a6e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48,puVar17);
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
  uVar27 = *(undefined8 *)puVar3;
  *(undefined8 *)(puVar7 + -0x98) = 0;
  *(undefined8 *)(puVar7 + -0xa0) = 0;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined8 *)(puVar7 + -0x90) = 0;
  *(undefined8 *)(puVar7 + -0xb8) = 0;
  *(undefined8 *)(puVar7 + -0xc0) = 0;
  *(undefined8 *)(puVar7 + -0xa8) = 0;
  *(undefined8 *)(puVar7 + -0xb0) = 0;
  puVar19 = (undefined8 *)func_0x03280ca0(uVar27);
  return puVar19;
LAB_06b6fb94:
  if (auVar30._8_4_ != 1) goto LAB_06b6fbbc;
  plVar10 = (long *)func_0x072ce910(uVar27);
  param_2 = (undefined8 *)*plVar10;
  puVar12 = (undefined8 *)func_0x072ce920();
  goto LAB_06b6fa3c;
LAB_06b6fbbc:
  if (plStack_168 != (long *)0x0) {
    lVar20 = *plStack_168;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06b6fc1c;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    plVar18 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x03256b10(plStack_168);
LAB_06b6fc1c:
    (*(code *)*puVar12)(plStack_168,puVar12[1]);
  }
  func_0x03365958(uVar27);
  func_0x03280ca4(0);
  auVar31 = func_0x02f09514();
  puVar23 = auVar31._8_8_;
  plVar14 = auVar31._0_8_;
  puVar6 = &uStack_270;
  puVar5 = &uStack_270;
  puVar12 = &uStack_270;
  uStack_1b0 = 0x6b6fc40;
  uStack_180 = 0;
  plVar10 = (long *)0x7e2a000;
  plStack_190 = plVar11;
  puStack_188 = &uStack_c0;
  plStack_178 = plVar9;
  auVar1 = auVar30;
  if ((bRam0000000007e2a6de & 1) == 0) {
    uStack_1a0 = auVar30._8_8_;
    uStack_198 = uVar27;
    func_0x03280a18(PTR_DAT_0777a490);
    func_0x03280a18(PTR_DAT_0777a520);
    func_0x03280a18(PTR_DAT_077c0f50);
    func_0x03280a18(PTR_DAT_077c0f58);
    func_0x03280a18(PTR_DAT_077c0f60);
    func_0x03280a18(PTR_DAT_077c0f68);
    func_0x03280a18(PTR_DAT_078311b0);
    auVar1._8_8_ = uStack_1a0;
    auVar1._0_8_ = uStack_198;
    bRam0000000007e2a6de = 1;
  }
  uStack_1a0 = auVar1._8_8_;
  uStack_198 = auVar1._0_8_;
  lStack_1a8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  auStack_1f0[0] = 0;
  if (puVar23[1] == 0) {
LAB_06b6fe24:
    uStack_1a0 = auVar1._8_8_;
    uStack_198 = auVar1._0_8_;
    puVar24 = auVar30._8_8_;
    plVar9 = auVar30._0_8_;
    auVar33 = func_0x03280cac();
    uVar21 = auVar33._0_8_;
    if (auVar33._8_4_ == 1) {
      plVar14 = (long *)func_0x072ce910(uVar21);
      lVar20 = *plVar14;
      func_0x072ce920();
      puVar12 = (undefined8 *)func_0x051159b0(&uStack_1d0,*(undefined8 *)PTR_DAT_077c0f50);
      if (lVar20 == 0) {
        return puVar12;
      }
      func_0x03280ca4(lVar20);
    }
    param_2 = (undefined8 *)0x0;
    func_0x051159b0(&uStack_1d0,*(undefined8 *)PTR_DAT_077c0f50);
    func_0x03365958(uVar21);
    func_0x03280ca4(0);
    uVar27 = 0x6b6feb0;
    auVar32 = func_0x02f09514();
    goto SUB_06b6feb0;
  }
  plVar18 = *(long **)PTR_DAT_078311b0;
  puVar13 = (undefined8 *)func_0x03ec5020(puVar23[1],&lStack_1a8);
  auVar2._8_8_ = uStack_1a0;
  auVar2._0_8_ = uStack_198;
  auVar1._8_8_ = uStack_1a0;
  auVar1._0_8_ = uStack_198;
  if (((ulong)puVar13 & 1) == 0) {
    return puVar13;
  }
  if ((lStack_1a8 == 0) || (auVar1 = auVar2, *(long *)(lStack_1a8 + 0x10) == 0)) goto LAB_06b6fe24;
  func_0x04145068(&uStack_210,*(long *)(lStack_1a8 + 0x10),*(undefined8 *)PTR_DAT_077c0f68);
  plVar11 = (long *)PTR_DAT_077c0f58;
  puVar13 = (undefined8 *)PTR_DAT_0777a520;
  puVar25 = PTR_DAT_0777a490;
  auVar30._8_8_ = PTR_DAT_0777a490;
  auVar30._0_8_ = PTR_DAT_0777a520;
  uStack_1c8 = uStack_208;
  uStack_1d0 = uStack_210;
  plStack_1c0 = plStack_200;
  do {
    do {
      uVar21 = func_0x051159b4(&uStack_1d0,*plVar11);
      plVar10 = plStack_1c0;
      if ((uVar21 & 1) == 0) {
        puVar19 = (undefined8 *)func_0x051159b0(&uStack_1d0,*(undefined8 *)PTR_DAT_077c0f50);
        return puVar19;
      }
      if (plStack_1c0 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_06b6fe20;
      }
      plVar18 = (long *)*puVar13;
      bVar8 = func_0x03d1e508(plStack_1c0,&uStack_1e8);
    } while ((bVar8 & (char)uStack_1e8 != '\0') == 0);
    plVar18 = *(long **)puVar25;
    uVar21 = func_0x03d1e2e4(plVar10,auStack_1f0);
  } while ((uVar21 & 1) == 0);
  uStack_208 = puVar23[1];
  uStack_210 = *puVar23;
  uStack_1f8 = puVar23[3];
  plStack_200 = (long *)puVar23[2];
  uStack_228 = uStack_1e0;
  uStack_230 = uStack_1e8;
  uStack_220 = uStack_1d8;
  if (lStack_1a8 == 0) {
LAB_06b6fe20:
    func_0x03280cac();
    auVar1._8_8_ = uStack_1a0;
    auVar1._0_8_ = uStack_198;
    goto LAB_06b6fe24;
  }
  param_5 = *(undefined8 **)(lStack_1a8 + 0x18);
  param_6 = (ulong)auStack_1f0[0];
  uStack_248 = puVar23[1];
  uStack_250 = *puVar23;
  uStack_238 = puVar23[3];
  plStack_240 = (long *)puVar23[2];
  uStack_268 = uStack_1e0;
  uStack_270 = uStack_1e8;
  uStack_260 = uStack_1d8;
  puVar19 = &uStack_250;
  uVar27 = 0x6b6fdec;
  plVar18 = plVar10;
  puVar26 = puVar3;
  goto SUB_06b702e4;
}


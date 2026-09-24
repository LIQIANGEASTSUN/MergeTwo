/* Ghidra 12.1.2 native pseudocode; RVA 0x6A687EC; Merger.MergeBoard.Systems.FeedingCombinationFeedSystem.CheckForFedProducers; status ok */


void Merger_MergeBoard_Systems_FeedingCombinationFeedSystem__CheckForFedProducers
               (undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  undefined8 **unaff_x29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [224];
  undefined1 auStack_360 [224];
  undefined8 **ppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 **ppuStack_260;
  undefined4 *puStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a7;
  undefined3 uStack_1a3;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined3 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined4 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar18 = (undefined4 *)PTR_DAT_07830d78;
  puVar10 = (undefined8 *)PTR_DAT_07830d70;
  puVar2 = PTR_DAT_07830d68;
  puVar4 = PTR_DAT_0782fe68;
  puVar19 = PTR_DAT_0782fe48;
  lStack_230 = tpidr_el0;
  lStack_68 = *(long *)(lStack_230 + 0x28);
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
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_e8 = 0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_138 = param_2[1];
  puStack_140 = (undefined8 *)*param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  plVar5 = (long *)func_0x03d1a89c(*(undefined8 *)puVar2);
  puVar6 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06015d08(puVar6,0,*(undefined8 *)puVar19,0);
  puVar12 = (undefined8 *)*puVar10;
  uStack_1c8 = uStack_138;
  puStack_1d0 = puStack_140;
  uStack_1b8 = uStack_128;
  uStack_1c0 = uStack_130;
  puVar11 = puVar6;
  func_0x03e65fa4(&puStack_170,&puStack_1d0,plVar5);
  uStack_e8 = uStack_168;
  puStack_f0 = puStack_170;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  plVar7 = (long *)func_0x04493478(&puStack_f0,*(undefined8 *)puVar18);
  puVar19 = puVar4;
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07830d80) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06b689bc;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)func_0x03256b10(plVar7);
LAB_06b689bc:
    plVar5 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar3 = PTR_DAT_07830d88;
    puVar2 = PTR_DAT_0782ff58;
    puVar19 = PTR_DAT_0774e8e0;
    if (plVar5 == (long *)0x0) goto LAB_06b68c6c;
    unaff_x29 = &puStack_198;
    puVar10 = &uStack_a8;
    puVar18 = &uStack_b7;
LAB_06b68a08:
    lVar13 = *plVar5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar19) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06b68a54;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b68a54:
    uVar14 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar14 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_06b68bc4;
    }
    lVar13 = *plVar5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06b68ab0;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar3,0);
LAB_06b68ab0:
    (*(code *)*puVar6)(&puStack_1d0,plVar5,puVar6[1]);
    uStack_100 = uStack_1b0;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    puVar6 = puStack_1d0;
    uStack_88 = uStack_1c0;
    uStack_90 = uStack_1c8;
    uStack_78 = uStack_1b0;
    uStack_80 = uStack_1b8;
    uStack_150 = uStack_178;
    uStack_168 = uStack_190;
    puStack_170 = puStack_198;
    uStack_158 = uStack_180;
    uStack_160 = uStack_188;
    uStack_a8 = uStack_1c0;
    uStack_b0 = uStack_1c8;
    uStack_98 = uStack_1b0;
    uStack_a0 = uStack_1b8;
    uStack_118 = uStack_1a7;
    uStack_114 = uStack_1a3;
    uStack_1c8 = uStack_190;
    puStack_1d0 = puStack_198;
    uStack_1b8 = uStack_180;
    uStack_1c0 = uStack_188;
    uStack_1b0 = uStack_178;
    uStack_f8 = uStack_1a0;
    uVar9 = func_0x06b86b60(&uStack_f8,0);
    uStack_1f8 = uStack_1c8;
    puStack_200 = puStack_1d0;
    uStack_1e8 = uStack_1b8;
    uStack_1f0 = uStack_1c0;
    uStack_1e0 = uStack_1b0;
    puVar11 = (undefined8 *)0x0;
    lVar13 = func_0x06b9868c(&puStack_200,uVar9);
    if (lVar13 != 0) {
      uStack_218 = uStack_108;
      uStack_220 = uStack_110;
      uStack_210 = uStack_100;
      if (puVar6 == (undefined8 *)0x0) goto LAB_06b68c64;
      puVar11 = *(undefined8 **)puVar2;
      uStack_b8 = 0 < *(int *)(lVar13 + 0x18);
      uStack_c8 = uStack_108;
      uStack_d0 = uStack_110;
      uStack_c0 = uStack_100;
      uStack_b7 = uStack_118;
      func_0x03d1d988(puVar6,&uStack_d0);
      goto LAB_06b68a08;
    }
    func_0x03280cac();
LAB_06b68c64:
    func_0x03280cac();
  }
  func_0x03280cac();
  puVar4 = puVar19;
LAB_06b68c6c:
  puVar19 = puVar4;
  func_0x03280cac();
LAB_06b68c70:
  func_0x03280ca4(puVar6);
  do {
    auVar21 = func_0x072ce990();
    uVar9 = auVar21._0_8_;
    if (auVar21._8_4_ != 1) {
      lStack_230 = uVar9;
      if (plVar5 == (long *)0x0) goto LAB_06b68d24;
      lVar13 = *plVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_06b68cfc;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    puVar6 = (undefined8 *)func_0x072ce910();
    puVar6 = (undefined8 *)*puVar6;
    func_0x072ce920();
LAB_06b68bc4:
    if (plVar5 != (long *)0x0) {
      lVar13 = *plVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06b68c1c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b68c1c:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
    if (puVar6 != (undefined8 *)0x0) goto LAB_06b68c70;
    if (*(long *)(lStack_230 + 0x28) == lStack_68) {
      return;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06b68d18;
    }
  }
LAB_06b68cfc:
  puVar11 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b68d18:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_06b68d24:
  func_0x03365958(lStack_230);
  func_0x03280ca4(0);
  auVar20 = func_0x02f09514();
  puVar6 = auVar20._8_8_;
  uStack_278 = 0x6b68d3c;
  uStack_250 = 0;
  ppuStack_280 = unaff_x29;
  puStack_270 = puVar19;
  puStack_268 = puVar10;
  ppuStack_260 = &puStack_170;
  puStack_258 = puVar18;
  plStack_248 = plVar5;
  if ((bRam0000000007e2a6b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d90);
    func_0x03280a18(PTR_DAT_07830d98);
    func_0x03280a18(PTR_DAT_07830da0);
    func_0x03280a18(PTR_DAT_07830da8);
    func_0x03280a18(PTR_DAT_07830db0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6b4 = 1;
  }
  plVar7 = *(long **)(auVar20._0_8_ + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    uVar9 = *puVar11;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07830d98) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06b68e1c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07830d98,0);
LAB_06b68e1c:
    uVar9 = (*(code *)*puVar10)(plVar7,uVar9,puVar10[1]);
    lVar13 = puVar6[2];
    if (lVar13 != 0) {
      lVar15 = *(long *)(lVar13 + 0x10);
      lVar17 = *(long *)PTR_DAT_07830da0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      puVar4 = PTR_DAT_07830db0;
      puVar19 = PTR_DAT_07830d90;
      if (lVar15 != 0) {
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar13,uVar9,
                          *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        func_0x072ce970(auStack_440,puVar6,0xe0);
        uVar9 = *(undefined8 *)puVar4;
        func_0x072ce970(auStack_360,auStack_440,0xe0);
        func_0x03ec74f4(auStack_360,uVar9);
        uStack_458 = puVar12[1];
        uStack_460 = *puVar12;
        uStack_448 = puVar12[3];
        uStack_450 = puVar12[2];
        func_0x06b98f6c(&uStack_460,*puVar11,0);
        lVar15 = puVar12[2];
        lVar13 = func_0x03280ca0(*(undefined8 *)puVar19);
        func_0x06b9a5d8(lVar13,0);
        puVar19 = PTR_DAT_0774f158;
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x10) = *puVar6;
          func_0x032809c4();
          *(undefined8 *)(lVar13 + 0x18) = *puVar11;
          func_0x032809c4();
          uVar9 = *(undefined8 *)puVar19;
          uVar9 = func_0x06ba3134(*puVar6,*(undefined8 *)(auVar20._0_8_ + 0x30),uVar9,uVar9,uVar9,0)
          ;
          *(undefined8 *)(lVar13 + 0x20) = uVar9;
          func_0x032809c4();
          if (lVar15 != 0) {
            func_0x03ec33e4(lVar15,lVar13,*(undefined8 *)PTR_DAT_07830da8);
            return;
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}


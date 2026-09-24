/* Ghidra 12.1.2 native pseudocode; RVA 0x6A79C6C; Merger.MergeBoard.Systems.TransformSystem.HandleTransformByInteract; status ok */


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
/* WARNING: Removing unreachable block (ram,0x06b7a2f4) */
/* WARNING: Removing unreachable block (ram,0x06b7a438) */

ulong Merger_MergeBoard_Systems_TransformSystem__HandleTransformByInteract
                (ulong param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long extraout_x1;
  int *piVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long *plVar36;
  undefined8 *unaff_x27;
  undefined8 unaff_x29;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined8 uStack_730;
  undefined1 auStack_6f0 [448];
  undefined1 auStack_4d0 [560];
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
  
  uVar11 = param_1;
  piVar20 = param_3;
  uVar23 = param_4;
  puVar15 = param_5;
  if ((bRam0000000007e2a71f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830b00);
    func_0x03280a18(PTR_DAT_077cd998);
    func_0x03280a18(PTR_DAT_078103b0);
    func_0x03280a18(PTR_DAT_077cd9a8);
    func_0x03280a18(PTR_DAT_07831830);
    func_0x03280a18(PTR_DAT_07831828);
    uVar11 = func_0x03280a18(PTR_DAT_0777e958);
    bRam0000000007e2a71f = 1;
  }
  if (0 < *param_3) {
    return uVar11;
  }
  if ((param_3[1] == 0) && (uVar11 = func_0x06b972f4(param_3,0), (uVar11 & 1) != 0)) {
    return uVar11;
  }
  puVar4 = PTR_DAT_07831828;
  lVar32 = *(long *)(param_3 + 4);
  if (lVar32 == 0) {
LAB_06b79e70:
    uStack_f8 = param_2[1];
    uStack_100 = *param_2;
    uStack_e8 = param_2[3];
    uStack_f0 = param_2[2];
    uStack_118 = *(undefined8 *)(param_3 + 6);
    uStack_120 = *(undefined8 *)(param_3 + 4);
    uStack_108 = *(undefined8 *)(param_3 + 10);
    uStack_110 = *(undefined8 *)(param_3 + 8);
    uStack_128 = *(undefined8 *)(param_3 + 2);
    uStack_130 = *(undefined8 *)param_3;
    uVar28 = *(undefined8 *)(param_1 + 0x18);
    uVar35 = *(undefined8 *)(param_1 + 0x20);
    plVar13 = *(long **)(param_1 + 0x28);
    uStack_e0 = uStack_130;
    uStack_d8 = uStack_128;
    uStack_d0 = uStack_120;
    uStack_c8 = uStack_118;
    uStack_c0 = uStack_110;
    uStack_b8 = uStack_108;
    uStack_b0 = uStack_100;
    uStack_a8 = uStack_f8;
    uStack_a0 = uStack_f0;
    uStack_98 = uStack_e8;
    if (plVar13 != (long *)0x0) {
      lVar32 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar11 != 0) {
        piVar20 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07830b00) {
            puVar15 = (undefined8 *)(lVar32 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06b79f00;
          }
          uVar11 = uVar11 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07830b00,0);
LAB_06b79f00:
      pcVar24 = (code *)*puVar15;
      uStack_1e8 = uStack_f8;
      uStack_1f0 = uStack_100;
      uStack_1d8 = uStack_e8;
      uStack_1e0 = uStack_f0;
      uStack_88 = uStack_128;
      uStack_90 = uStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_68 = uStack_108;
      uStack_70 = uStack_110;
      uVar23 = puVar15[1];
      puVar15 = &uStack_1f0;
      goto LAB_06b7a024;
    }
  }
  else {
    if (*(char *)((long)param_3 + 0xe) != '\0') {
      lVar12 = *(long *)PTR_DAT_07831828;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar12 = *(long *)puVar4;
      }
      lVar33 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar33 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar12 = *(long *)puVar4;
        }
        uVar35 = **(undefined8 **)(lVar12 + 0xb8);
        lVar33 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd9a8);
        uVar23 = 0;
        func_0x0445dd5c(lVar33,uVar35,*(undefined8 *)PTR_DAT_07831830);
        plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar13 = lVar33;
        func_0x032809c4(plVar13,lVar33);
      }
      piVar20 = *(int **)PTR_DAT_077cd998;
      lVar32 = func_0x04144be0(lVar32,lVar33);
      unaff_x27 = (undefined8 *)puVar4;
      if (lVar32 == 0) goto LAB_06b7a060;
      if (*(int *)(lVar32 + 0x18) < 1) goto LAB_06b79e70;
    }
    puVar4 = PTR_DAT_07830b00;
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    plVar13 = *(long **)(param_1 + 0x28);
    uStack_c8 = *(undefined8 *)(param_3 + 6);
    uStack_d0 = *(undefined8 *)(param_3 + 4);
    uStack_b8 = *(undefined8 *)(param_3 + 10);
    uStack_c0 = *(undefined8 *)(param_3 + 8);
    uStack_d8 = *(undefined8 *)(param_3 + 2);
    uStack_e0 = *(undefined8 *)param_3;
    uVar34 = *(undefined8 *)(param_1 + 0x18);
    if (plVar13 != (long *)0x0) {
      lVar32 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar32 + 0x12e);
      param_7 = *(undefined8 *)PTR_DAT_0777e958;
      uStack_1a0 = uStack_e0;
      uStack_198 = uStack_d8;
      uStack_190 = uStack_d0;
      uStack_188 = uStack_c8;
      uStack_180 = uStack_c0;
      uStack_178 = uStack_b8;
      uStack_170 = uStack_150;
      uStack_168 = uStack_148;
      uStack_160 = uStack_140;
      uStack_158 = uStack_138;
      if (uVar11 != 0) {
        piVar20 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07830b00) {
            puVar14 = (undefined8 *)(lVar32 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_06b79f38;
          }
          uVar11 = uVar11 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar11 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07830b00,1);
LAB_06b79f38:
      uStack_1e8 = uStack_168;
      uStack_1f0 = uStack_170;
      uStack_1d8 = uStack_158;
      uStack_1e0 = uStack_160;
      uStack_88 = uStack_198;
      uStack_90 = uStack_1a0;
      uStack_78 = uStack_188;
      uStack_80 = uStack_190;
      uStack_68 = uStack_178;
      uStack_70 = uStack_180;
      piVar20 = (int *)&uStack_1f0;
      puVar15 = &uStack_90;
      (*(code *)*puVar14)(plVar13,param_4);
      uVar43 = param_2[1];
      uVar41 = *param_2;
      uVar39 = param_2[3];
      uVar37 = param_2[2];
      uVar46 = *(undefined8 *)(param_3 + 6);
      uVar45 = *(undefined8 *)(param_3 + 4);
      uVar40 = *(undefined8 *)(param_3 + 10);
      uVar38 = *(undefined8 *)(param_3 + 8);
      uVar44 = *(undefined8 *)(param_3 + 2);
      uVar42 = *(undefined8 *)param_3;
      uVar28 = *(undefined8 *)(param_1 + 0x18);
      uVar35 = *(undefined8 *)(param_1 + 0x20);
      plVar13 = *(long **)(param_1 + 0x28);
      uVar23 = uVar34;
      unaff_x27 = (undefined8 *)puVar4;
      uStack_1f0 = uVar42;
      uStack_1e8 = uVar44;
      uStack_1e0 = uVar45;
      uStack_1d8 = uVar46;
      uStack_1d0 = uVar38;
      uStack_1c8 = uVar40;
      uStack_1c0 = uVar41;
      uStack_1b8 = uVar43;
      uStack_1b0 = uVar37;
      uStack_1a8 = uVar39;
      if (plVar13 != (long *)0x0) {
        lVar32 = *(long *)puVar4;
        lVar12 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar32) {
              puVar15 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_06b7a000;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar13,lVar32,0);
LAB_06b7a000:
        pcVar24 = (code *)*puVar15;
        uVar23 = puVar15[1];
        puVar15 = &uStack_b0;
        uStack_b0 = uVar41;
        uStack_a8 = uVar43;
        uStack_a0 = uVar37;
        uStack_98 = uVar39;
        uStack_90 = uVar42;
        uStack_88 = uVar44;
        uStack_80 = uVar45;
        uStack_78 = uVar46;
        uStack_70 = uVar38;
        uStack_68 = uVar40;
LAB_06b7a024:
        uVar11 = (*pcVar24)(plVar13,param_4,puVar15,uVar28,uVar35,&uStack_90,
                            (ulong)param_5 & 0xffffffff,uVar23);
        return uVar11;
      }
    }
  }
LAB_06b7a060:
  auVar48 = func_0x03280cac();
  puVar5 = PTR_DAT_07830b20;
  puVar4 = PTR_DAT_0774f158;
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
  puVar21 = *(undefined8 **)puVar4;
  uVar35 = 0;
  puVar14 = puVar21;
  puVar19 = puVar21;
  puVar16 = (undefined8 *)func_0x06ba3134(uVar23,*(undefined8 *)(auVar48._0_8_ + 0x10));
  uVar11 = *(ulong *)(auVar48._8_8_ + 0x10);
  puVar17 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x06b9acd8(puVar17,0);
  puVar4 = PTR_DAT_078104c8;
  puVar9 = puVar14;
  puVar10 = puVar19;
  if (puVar17 == (undefined1 *)0x0) {
LAB_06b7a458:
    auVar49 = func_0x03280cac();
    puVar4 = PTR_DAT_07831848;
    lVar32 = auVar49._8_8_;
    auVar48._8_8_ = lVar32;
    auVar48._0_8_ = puVar9;
    auVar47._8_8_ = lVar32;
    auVar47._0_8_ = puVar9;
    piVar20 = auVar49._0_8_;
    puVar6 = auStack_6f0;
    puVar15 = puVar21;
    puVar14 = puVar9;
    puVar19 = puVar10;
    uVar23 = uVar35;
    if ((bRam0000000007e2a721 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831848);
      func_0x03280a18(PTR_DAT_07830b00);
      func_0x03280a18(PTR_DAT_07831850);
      func_0x03280a18(PTR_DAT_07814400);
      func_0x03280a18(PTR_DAT_078104c8);
      func_0x03280a18(PTR_DAT_0777e958);
      bRam0000000007e2a721 = 1;
    }
    uVar11 = *(ulong *)(lVar32 + 0x10);
    puVar17 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a4b8(puVar17,0);
    puVar4 = PTR_DAT_0777e958;
    puVar16 = puVar19;
    if (puVar17 != (undefined1 *)0x0) {
      *(undefined8 **)(puVar17 + 0x10) = puVar21;
      func_0x032809c4(puVar17 + 0x10,puVar21);
      *(int *)(puVar17 + 0x18) = (int)puVar10;
      unaff_x27 = (undefined8 *)(puVar17 + 0x20);
      *unaff_x27 = *(undefined8 *)puVar4;
      func_0x032809c4(unaff_x27);
      puVar17[0x28] = *(undefined1 *)(puVar9 + 4);
      *(undefined4 *)(puVar17 + 0x2c) = *(undefined4 *)((long)puVar9 + 0x24);
      puVar16 = puVar19;
      if (uVar11 != 0) {
        puVar22 = *(undefined1 **)PTR_DAT_07831850;
        uStack_730 = 0x6b7a56c;
        puVar6 = auStack_6f0;
        uVar29 = uVar11;
        puVar18 = puVar17;
        auVar48 = auVar47;
        goto SUB_03ec33e4;
      }
    }
    func_0x03280cac();
    uStack_730 = 0x6b7a760;
    puVar19 = puVar16;
    if ((bRam0000000007e2a722 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07830b08);
      func_0x03280a18(PTR_DAT_07830b38);
      bRam0000000007e2a722 = 1;
    }
    puVar4 = PTR_DAT_07830b08;
    if (puVar16 != (undefined8 *)0x0) {
      puVar16[0x17] = uVar23;
      func_0x032809c4(puVar16 + 0x17,uVar23);
      puVar16[0x18] = param_7;
      func_0x032809c4(puVar16 + 0x18,param_7);
      *(undefined4 *)(puVar16 + 0x14) = 0;
      puVar16[0x21] = 0;
    }
    uVar29 = *(ulong *)(extraout_x1 + 0x10);
    puVar18 = (undefined1 *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a8d4(puVar18,0);
    if (puVar18 == (undefined1 *)0x0) {
SUB_057da5fc:
      uVar11 = func_0x03280cac();
      return uVar11;
    }
    *(undefined8 **)(puVar18 + 0x10) = puVar15;
    func_0x032809c4(puVar18 + 0x10,puVar15);
    *(undefined8 *)(puVar18 + 0x18) = uVar23;
    func_0x032809c4(puVar18 + 0x18,uVar23);
    *(undefined8 **)(puVar18 + 0x20) = puVar16;
    func_0x032809c4(puVar18 + 0x20,puVar16);
    if (uVar29 == 0) goto SUB_057da5fc;
    puVar22 = *(undefined1 **)PTR_DAT_07830b38;
  }
  else {
    *(undefined8 *)(puVar17 + 0x10) = uVar23;
    func_0x032809c4(puVar17 + 0x10,uVar23);
    *(int *)(puVar17 + 0x18) = (int)puVar15;
    *(undefined8 *)(puVar17 + 0x20) = *(undefined8 *)puVar4;
    func_0x032809c4();
    puVar9 = puVar14;
    puVar10 = puVar19;
    if (uVar11 == 0) goto LAB_06b7a458;
    puVar22 = *(undefined1 **)PTR_DAT_07830b40;
    uStack_730 = 0x6b7a1b4;
    puVar6 = auStack_4d0;
    uVar29 = uVar11;
    puVar18 = puVar17;
    uVar35 = uVar23;
    puVar21 = puVar15;
    puVar10 = puVar16;
    unaff_x27 = (undefined8 *)PTR_DAT_07831840;
  }
SUB_03ec33e4:
  lVar32 = auVar48._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = uStack_730;
  *(long *)(puVar6 + -0x28) = lVar32;
  *(undefined8 **)(puVar6 + -0x20) = puVar10;
  *(long *)(puVar6 + -0x18) = auVar48._8_8_;
  *(undefined8 **)(puVar6 + -0x10) = puVar21;
  *(undefined8 *)(puVar6 + -8) = uVar35;
  puVar15 = *(undefined8 **)(puVar22 + 0x38);
  puVar27 = puVar22;
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(puVar22 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(puVar22);
      puVar15 = *(undefined8 **)(puVar22 + 0x38);
    }
  }
  *(undefined8 *)(puVar6 + -0x38) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar35 = func_0x057a51c4(uVar23,0);
  if (*(long *)(uVar29 + 0x10) != 0) {
    puVar27 = puVar6 + -0x38;
    puVar14 = *(undefined8 **)PTR_DAT_0777b730;
    uVar7 = func_0x04fe48b0(*(long *)(uVar29 + 0x10),uVar35);
    uVar23 = uVar35;
    if ((uVar7 & 1) == 0) {
      puVar10 = *(undefined8 **)(uVar29 + 0x10);
      lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar32,*(undefined8 *)PTR_DAT_07751030);
      if (lVar32 != 0) {
        lVar12 = *(long *)(lVar32 + 0x10);
        lVar33 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar32 + 0x1c) = *(int *)(lVar32 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar3 = *(uint *)(lVar32 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar32 + 0x18) = uVar3 + 1;
            puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
            *puVar15 = puVar18;
            func_0x032809c4(puVar15,puVar18);
          }
          else {
            puVar27 = *(undefined1 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar32,puVar18);
          }
          if (puVar10 != (undefined8 *)0x0) {
            func_0x04fe2d68(puVar10,uVar35,lVar32,*(undefined8 *)PTR_DAT_0777b738);
            return uVar29;
          }
        }
      }
    }
    else {
      lVar12 = *(long *)(puVar6 + -0x38);
      if (lVar12 != 0) {
        lVar33 = *(long *)(lVar12 + 0x10);
        lVar25 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar33 != 0) {
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar33 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            puVar15 = (undefined8 *)(lVar33 + (long)(int)uVar3 * 8 + 0x20);
            *puVar15 = puVar18;
            func_0x032809c4(puVar15,puVar18);
          }
          else {
            func_0x0414446c(lVar12,puVar18,
                            *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
          return uVar29;
        }
      }
    }
  }
  auVar48 = func_0x03280cac();
  puVar22 = auVar48._8_8_;
  uVar7 = auVar48._0_8_;
  *(undefined8 *)(puVar6 + -0xa0) = unaff_x29;
  *(undefined8 *)(puVar6 + -0x98) = 0x3ec35f8;
  *(undefined8 **)(puVar6 + -0x90) = unaff_x27;
  *(undefined1 **)(puVar6 + -0x80) = puVar17;
  *(ulong *)(puVar6 + -0x78) = uVar11;
  *(int **)(puVar6 + -0x70) = piVar20;
  *(long *)(puVar6 + -0x68) = lVar32;
  *(undefined8 **)(puVar6 + -0x60) = puVar10;
  *(undefined8 *)(puVar6 + -0x58) = uVar23;
  *(undefined1 **)(puVar6 + -0x50) = puVar18;
  *(ulong *)(puVar6 + -0x48) = uVar29;
  lVar32 = tpidr_el0;
  *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(lVar32 + 0x28);
  *(undefined1 **)(puVar6 + -0xb0) = puVar22;
  plVar13 = *(long **)(puVar27 + 0x38);
  puVar18 = puVar27;
  if (plVar13 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar13 = *(long **)(puVar27 + 0x38);
    if (plVar13 == (long *)0x0) {
      func_0x03256878(puVar27);
      plVar13 = *(long **)(puVar27 + 0x38);
    }
  }
  puVar31 = (undefined1 *)(ulong)*(uint *)(plVar13[1] + 0xfc);
  puVar30 = puVar6 + (-0xc0 - ((ulong)(puVar31 + 0xf) & 0x1fffffff0));
  *(undefined8 *)(puVar6 + -0xb8) = 0;
  lVar12 = *plVar13;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar33 = func_0x057a51c4(lVar12,0);
  if (*(long *)(uVar7 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    puVar14 = *(undefined8 **)PTR_DAT_0777b730;
    uVar29 = func_0x04fe48b0(*(long *)(uVar7 + 0x10),lVar33,puVar6 + -0xb8);
    puVar18 = puVar31;
    if ((uVar29 & 1) == 0) {
      uVar11 = *(ulong *)(uVar7 + 0x10);
      puVar17 = (undefined1 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(puVar17,*(undefined8 *)PTR_DAT_07751030);
      puVar27 = *(undefined1 **)(puVar27 + 0x38);
      puVar1 = puVar22;
      if (-1 < *(int *)(*(long *)(puVar27 + 8) + 0x28)) {
        puVar1 = puVar6 + -0xb0;
      }
      func_0x072ce970(puVar30,puVar1);
      uVar23 = func_0x03280b94(*(undefined8 *)(puVar27 + 8),puVar30);
      lVar12 = lVar33;
      if (puVar17 != (undefined1 *)0x0) {
        lVar25 = *(long *)(puVar17 + 0x10);
        lVar26 = *(long *)PTR_DAT_07751038;
        *(int *)(puVar17 + 0x1c) = *(int *)(puVar17 + 0x1c) + 1;
        if (lVar25 != 0) {
          uVar3 = *(uint *)(puVar17 + 0x18);
          if (uVar3 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(puVar17 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20) = uVar23;
            func_0x032809c4();
          }
          else {
            puVar18 = *(undefined1 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(puVar17);
          }
          if (uVar11 != 0) {
            puVar14 = *(undefined8 **)PTR_DAT_0777b738;
            puVar18 = puVar17;
            func_0x04fe2d68(uVar11,lVar33);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar33 = *(long *)(puVar27 + 0x38);
    puVar27 = *(undefined1 **)(puVar6 + -0xb8);
    puVar1 = puVar22;
    if (-1 < *(int *)(*(long *)(lVar33 + 8) + 0x28)) {
      puVar1 = puVar6 + -0xb0;
    }
    func_0x072ce970(puVar30,puVar1);
    uVar23 = func_0x03280b94(*(undefined8 *)(lVar33 + 8),puVar30);
    lVar12 = lVar33;
    if (puVar27 == (undefined1 *)0x0) goto LAB_03ec38b8;
    lVar25 = *(long *)(puVar27 + 0x10);
    lVar26 = *(long *)PTR_DAT_07751038;
    *(int *)(puVar27 + 0x1c) = *(int *)(puVar27 + 0x1c) + 1;
    if (lVar25 == 0) goto LAB_03ec38b8;
    uVar3 = *(uint *)(puVar27 + 0x18);
    if (uVar3 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(puVar27 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20) = uVar23;
      func_0x032809c4();
    }
    else {
      puVar18 = *(undefined1 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar27);
    }
LAB_03ec3884:
    lVar12 = lVar33;
    if (*(long *)(lVar32 + 0x28) == *(long *)(puVar6 + -0xa8)) {
      return uVar7;
    }
  }
  auVar48 = func_0x072ce990();
  *(undefined8 *)(puVar30 + -0x30) = 0x3ec38c0;
  *(long *)(puVar30 + -0x20) = lVar12;
  *(undefined1 **)(puVar30 + -0x18) = puVar27;
  *(undefined1 **)(puVar30 + -0x10) = puVar22;
  *(ulong *)(puVar30 + -8) = uVar7;
  *(undefined8 *)(puVar30 + -0x28) = 0;
  lVar12 = *(long *)(puVar18 + 0x20);
  puVar22 = puVar18;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = *(long *)(puVar18 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    lVar33 = *(long *)(puVar18 + 0x20);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    puVar22 = *(undefined1 **)(*(long *)(lVar33 + 0xc0) + 0x18);
    uVar29 = func_0x04e81584(lVar12,puVar30 + -0x28);
    if ((uVar29 & 1) == 0) {
      lVar33 = *(long *)(puVar18 + 0x20);
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar33 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar29 = func_0x03280ca0();
      lVar33 = *(long *)(puVar18 + 0x20);
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      func_0x04645340(uVar29,*(undefined8 *)(*(long *)(lVar33 + 0xc0) + 0x38));
      puVar18 = (undefined1 *)0x0;
      if (uVar29 != 0) {
        *(undefined1 (*) [16])(uVar29 + 0x10) = auVar48;
        func_0x032809c4((undefined1 (*) [16])(uVar29 + 0x10),0);
        return uVar29;
      }
    }
    else if (*(long *)(puVar30 + -0x28) != 0) {
      pauVar8 = (undefined1 (*) [16])(*(long *)(puVar30 + -0x28) + 0x10);
      *pauVar8 = auVar48;
      func_0x032809c4(pauVar8,0);
      return *(ulong *)(puVar30 + -0x28);
    }
  }
  auVar47 = func_0x03280cac();
  uVar23 = auVar47._0_8_;
  *(undefined8 *)(puVar30 + -0x60) = 0x3ec3a10;
  *(undefined1 **)(puVar30 + -0x58) = puVar30;
  *(long *)(puVar30 + -0x50) = lVar12;
  *(undefined1 **)(puVar30 + -0x48) = puVar18;
  *(undefined1 (*) [16])(puVar30 + -0x40) = auVar48;
  *(undefined8 *)(puVar30 + -0x68) = 0;
  lVar12 = puVar14[4];
  puVar18 = puVar22;
  puVar15 = puVar14;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = puVar14[4];
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    lVar33 = puVar14[4];
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar33 + 0xc0) + 0x18);
    uVar29 = func_0x04e81584(lVar12,puVar30 + -0x68);
    if ((uVar29 & 1) == 0) {
      lVar33 = puVar14[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar33 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar29 = func_0x03280ca0();
      lVar33 = puVar14[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      func_0x046453e4(uVar29,*(undefined8 *)(*(long *)(lVar33 + 0xc0) + 0x40));
      puVar14 = (undefined8 *)0x0;
      if (uVar29 != 0) {
        *(undefined8 *)(uVar29 + 0x10) = uVar23;
        func_0x032809c4((undefined8 *)(uVar29 + 0x10),uVar23);
        *(undefined8 *)(uVar29 + 0x18) = auVar47._8_8_;
        *(undefined1 **)(uVar29 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(uVar29 + 0x18),0);
        return uVar29;
      }
    }
    else if (*(long *)(puVar30 + -0x68) != 0) {
      puVar9 = (undefined8 *)(*(long *)(puVar30 + -0x68) + 0x10);
      *puVar9 = uVar23;
      func_0x032809c4(puVar9,uVar23);
      lVar33 = *(long *)(puVar30 + -0x68);
      if (lVar33 != 0) {
        *(undefined8 *)(lVar33 + 0x18) = auVar47._8_8_;
        *(undefined1 **)(lVar33 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(lVar33 + 0x18),0);
        return *(ulong *)(puVar30 + -0x68);
      }
    }
  }
  auVar48 = func_0x03280cac();
  uVar23 = auVar48._0_8_;
  *(undefined8 *)(puVar30 + -0xa0) = 0x3ec3b90;
  *(long *)(puVar30 + -0x98) = lVar12;
  *(undefined8 **)(puVar30 + -0x90) = puVar14;
  *(undefined1 (*) [16])(puVar30 + -0x88) = auVar47;
  *(undefined1 **)(puVar30 + -0x78) = puVar22;
  *(undefined8 *)(puVar30 + -0xa8) = 0;
  lVar12 = puVar15[4];
  puVar22 = puVar18;
  puVar14 = puVar15;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = puVar15[4];
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    lVar33 = puVar15[4];
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    puVar22 = *(undefined1 **)(*(long *)(lVar33 + 0xc0) + 0x18);
    uVar29 = func_0x04e81584(lVar12,puVar30 + -0xa8);
    if ((uVar29 & 1) == 0) {
      lVar33 = puVar15[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar33 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar29 = func_0x03280ca0();
      lVar33 = puVar15[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      func_0x04645488(uVar29,*(undefined8 *)(*(long *)(lVar33 + 0xc0) + 0x40));
      puVar15 = (undefined8 *)0x0;
      if (uVar29 != 0) {
        *(undefined8 *)(uVar29 + 0x10) = uVar23;
        func_0x032809c4((undefined8 *)(uVar29 + 0x10),uVar23);
        *(undefined8 *)(uVar29 + 0x18) = auVar48._8_8_;
        *(undefined1 **)(uVar29 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(uVar29 + 0x18),0);
        return uVar29;
      }
    }
    else if (*(long *)(puVar30 + -0xa8) != 0) {
      puVar9 = (undefined8 *)(*(long *)(puVar30 + -0xa8) + 0x10);
      *puVar9 = uVar23;
      func_0x032809c4(puVar9,uVar23);
      lVar33 = *(long *)(puVar30 + -0xa8);
      if (lVar33 != 0) {
        *(undefined8 *)(lVar33 + 0x18) = auVar48._8_8_;
        *(undefined1 **)(lVar33 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(lVar33 + 0x18),0);
        return *(ulong *)(puVar30 + -0xa8);
      }
    }
  }
  auVar47 = func_0x03280cac();
  uVar23 = auVar47._0_8_;
  *(undefined8 *)(puVar30 + -0xf0) = 0x3ec3d10;
  *(undefined1 **)(puVar30 + -0xe0) = puVar31;
  *(long *)(puVar30 + -0xd8) = lVar12;
  *(undefined8 **)(puVar30 + -0xd0) = puVar15;
  *(undefined1 (*) [16])(puVar30 + -200) = auVar48;
  *(undefined1 **)(puVar30 + -0xb8) = puVar18;
  *(undefined8 *)(puVar30 + -0xe8) = 0;
  lVar12 = puVar19[4];
  puVar18 = puVar22;
  puVar9 = puVar14;
  puVar15 = puVar19;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = puVar19[4];
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    lVar33 = puVar19[4];
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    puVar18 = *(undefined1 **)(*(long *)(lVar33 + 0xc0) + 0x18);
    uVar29 = func_0x04e81584(lVar12,puVar30 + -0xe8);
    if ((uVar29 & 1) == 0) {
      lVar33 = puVar19[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar33 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar29 = func_0x03280ca0();
      lVar33 = puVar19[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      func_0x04645704(uVar29,*(undefined8 *)(*(long *)(lVar33 + 0xc0) + 0x48));
      puVar19 = (undefined8 *)0x0;
      if (uVar29 != 0) {
        *(undefined8 *)(uVar29 + 0x10) = uVar23;
        func_0x032809c4((undefined8 *)(uVar29 + 0x10),uVar23);
        *(undefined8 *)(uVar29 + 0x18) = auVar47._8_8_;
        *(undefined1 **)(uVar29 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(uVar29 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar29 + 0x28) = (int)puVar14;
        return uVar29;
      }
    }
    else if (*(long *)(puVar30 + -0xe8) != 0) {
      puVar10 = (undefined8 *)(*(long *)(puVar30 + -0xe8) + 0x10);
      *puVar10 = uVar23;
      func_0x032809c4(puVar10,uVar23);
      lVar33 = *(long *)(puVar30 + -0xe8);
      if (lVar33 != 0) {
        *(undefined8 *)(lVar33 + 0x18) = auVar47._8_8_;
        *(undefined1 **)(lVar33 + 0x20) = puVar22;
        func_0x032809c4((undefined8 *)(lVar33 + 0x18),0);
        uVar29 = *(ulong *)(puVar30 + -0xe8);
        if (uVar29 != 0) goto LAB_03ec3e7c;
        puVar19 = (undefined8 *)0x0;
      }
    }
  }
  auVar48 = func_0x03280cac();
  uVar23 = auVar48._0_8_;
  *(undefined8 *)(puVar30 + -0x130) = 0x3ec3ea0;
  *(long *)(puVar30 + -0x120) = lVar12;
  *(undefined8 **)(puVar30 + -0x118) = puVar19;
  *(undefined1 (*) [16])(puVar30 + -0x110) = auVar47;
  *(undefined1 **)(puVar30 + -0x100) = puVar22;
  *(ulong *)(puVar30 + -0xf8) = (ulong)puVar14 & 0xffffffff;
  *(undefined8 *)(puVar30 + -0x128) = 0;
  lVar12 = puVar15[4];
  puVar22 = puVar18;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar12 = puVar15[4];
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = func_0x0325681c();
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    lVar33 = puVar15[4];
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c();
    }
    puVar22 = *(undefined1 **)(*(long *)(lVar33 + 0xc0) + 0x18);
    uVar29 = func_0x04e81584(lVar12,puVar30 + -0x128);
    if ((uVar29 & 1) == 0) {
      lVar33 = puVar15[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar33 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar29 = func_0x03280ca0();
      lVar33 = puVar15[4];
      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
        lVar33 = func_0x0325681c(lVar33);
      }
      func_0x046457b8(uVar29,*(undefined8 *)(*(long *)(lVar33 + 0xc0) + 0x48));
      puVar15 = (undefined8 *)0x0;
      if (uVar29 != 0) {
        *(undefined8 *)(uVar29 + 0x10) = uVar23;
        func_0x032809c4((undefined8 *)(uVar29 + 0x10),uVar23);
        *(undefined8 *)(uVar29 + 0x18) = auVar48._8_8_;
        *(undefined1 **)(uVar29 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(uVar29 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar29 + 0x28) = (int)puVar9;
        return uVar29;
      }
    }
    else if (*(long *)(puVar30 + -0x128) != 0) {
      puVar14 = (undefined8 *)(*(long *)(puVar30 + -0x128) + 0x10);
      *puVar14 = uVar23;
      func_0x032809c4(puVar14,uVar23);
      lVar33 = *(long *)(puVar30 + -0x128);
      if (lVar33 != 0) {
        *(undefined8 *)(lVar33 + 0x18) = auVar48._8_8_;
        *(undefined1 **)(lVar33 + 0x20) = puVar18;
        func_0x032809c4((undefined8 *)(lVar33 + 0x18),0);
        uVar29 = *(ulong *)(puVar30 + -0x128);
        if (uVar29 != 0) goto LAB_03ec400c;
        puVar15 = (undefined8 *)0x0;
      }
    }
  }
  auVar47 = func_0x03280cac();
  plVar13 = auVar47._8_8_;
  uVar29 = auVar47._0_8_;
  *(undefined1 **)(puVar30 + -400) = puVar6 + -0xa0;
  *(undefined8 *)(puVar30 + -0x188) = 0x3ec4030;
  *(long *)(puVar30 + -0x180) = lVar32;
  *(undefined1 **)(puVar30 + -0x170) = puVar17;
  *(ulong *)(puVar30 + -0x168) = uVar11;
  *(long *)(puVar30 + -0x160) = lVar12;
  *(undefined8 **)(puVar30 + -0x158) = puVar15;
  *(undefined1 (*) [16])(puVar30 + -0x150) = auVar48;
  *(undefined1 **)(puVar30 + -0x140) = puVar18;
  *(ulong *)(puVar30 + -0x138) = (ulong)puVar9 & 0xffffffff;
  lVar32 = tpidr_el0;
  *(undefined8 *)(puVar30 + -0x198) = *(undefined8 *)(lVar32 + 0x28);
  plVar36 = *(long **)(puVar22 + 0x38);
  if (plVar36 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar36 = *(long **)(puVar22 + 0x38);
    if (plVar36 == (long *)0x0) {
      func_0x03256878(puVar22);
      plVar36 = *(long **)(puVar22 + 0x38);
    }
  }
  uVar7 = (ulong)*(uint *)(plVar36[4] + 0xfc);
  uVar11 = uVar7 + 0xf & 0x1fffffff0;
  puVar17 = puVar30 + (-0x1b0 - uVar11);
  puVar15 = (undefined8 *)(puVar17 + -uVar11);
  lVar12 = (long)puVar15 - uVar11;
  func_0x072ce9a0(lVar12,0,uVar7);
  if (plVar13 == (long *)0x0) {
    func_0x03280cac();
    plVar13 = (long *)0x0;
  }
  else {
    lVar33 = *plVar36;
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c(lVar33);
    }
    lVar25 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar11 != 0) {
      piVar20 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar33) {
          puVar14 = (undefined8 *)(lVar25 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar11 = uVar11 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar13,lVar33,0);
LAB_03ec4144:
    plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar13 != (long *)0x0) {
      do {
        lVar33 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar33 + 0x12e);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar33 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar11 & 1) == 0) {
          puVar22 = (undefined1 *)0x0;
          goto LAB_03ec429c;
        }
        lVar33 = *(long *)(*(long *)(puVar22 + 0x38) + 0x10);
        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
          lVar33 = func_0x0325681c(lVar33);
        }
        lVar25 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar33) {
              lVar33 = lVar25 + (long)*piVar20 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        lVar33 = func_0x03256b10(plVar13,lVar33,0);
LAB_03ec4220:
        *(undefined1 **)(puVar30 + -0x1a8) = puVar17;
        lVar33 = *(long *)(lVar33 + 8);
        (**(code **)(lVar33 + 0x10))
                  (*(undefined8 *)(lVar33 + 8),lVar33,plVar13,puVar30 + -0x1a8,puVar17);
        func_0x072ce970(lVar12,puVar17,uVar7);
        func_0x072ce970(puVar15,lVar12,uVar7);
        puVar14 = puVar15;
        if (-1 < *(int *)(*(long *)(*(long *)(puVar22 + 0x38) + 0x20) + 0x28)) {
          puVar14 = (undefined8 *)*puVar15;
        }
        puVar19 = *(undefined8 **)(*(long *)(puVar22 + 0x38) + 0x28);
        uVar23 = *puVar19;
        *(undefined8 **)(puVar30 + -0x1a8) = puVar14;
        (*(code *)puVar19[2])(uVar23,puVar19,uVar29,puVar30 + -0x1a8,puVar30 + -0x1a0);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar22);
  do {
    auVar50 = func_0x072ce990();
    if (auVar50._8_4_ != 1) {
      if (plVar13 == (long *)0x0) goto LAB_03ec43e8;
      lVar32 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar11 == 0) goto LAB_03ec43c0;
      piVar20 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      break;
    }
    puVar15 = (undefined8 *)func_0x072ce910(auVar50._0_8_);
    puVar22 = (undefined1 *)*puVar15;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar13 != (long *)0x0) {
      lVar33 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar33 + 0x12e);
      if (uVar11 != 0) {
        piVar20 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar15 = (undefined8 *)(lVar33 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar11 = uVar11 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar15)(plVar13,puVar15[1]);
    }
    if (puVar22 != (undefined1 *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar32 + 0x28) == *(long *)(puVar30 + -0x198)) {
      return uVar29;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar20 = piVar20 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar15 = (undefined8 *)(lVar32 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar15 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar15)(plVar13,puVar15[1]);
LAB_03ec43e8:
  func_0x03365958(auVar50._0_8_);
  func_0x03280ca4(0);
  auVar48 = func_0x02f09514();
  lVar32 = auVar48._8_8_;
  *(undefined8 *)(lVar12 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar12 + -0x18) = 0;
  *(long **)(lVar12 + -0x10) = plVar13;
  *(ulong *)(lVar12 + -8) = uVar29;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(lVar32);
      puVar15 = *(undefined8 **)(lVar32 + 0x38);
    }
  }
  *(undefined8 *)(lVar12 + -0x28) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar35 = func_0x057a51c4(uVar23,0);
  lVar33 = *(long *)(auVar48._0_8_ + 0x10);
  if (lVar33 != 0) {
    uVar11 = func_0x04fe48b0(lVar33,uVar35,lVar12 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar11 & 1) == 0) {
      lVar12 = *(long *)(*(long *)(lVar32 + 0x38) + 8);
      lVar32 = *(long *)(lVar12 + 0x38);
      if (lVar32 == 0) {
        func_0x03256878(lVar12);
        lVar32 = *(long *)(lVar12 + 0x38);
      }
      lVar32 = *(long *)(lVar32 + 0x10);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c();
      }
      if (*(int *)(lVar32 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar32 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = func_0x0325681c();
      }
      uVar11 = **(ulong **)(lVar32 + 0xb8);
    }
    else {
      uVar11 = func_0x03d2c6a8(*(undefined8 *)(lVar12 + -0x28),
                               *(undefined8 *)(*(long *)(lVar32 + 0x38) + 0x18));
    }
    return uVar11;
  }
  auVar47 = func_0x03280cac();
  lVar32 = auVar47._8_8_;
  *(undefined8 *)(lVar12 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar12 + -0x48) = uVar23;
  *(undefined1 (*) [16])(lVar12 + -0x40) = auVar48;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(lVar32);
      puVar15 = *(undefined8 **)(lVar32 + 0x38);
    }
  }
  *(undefined8 *)(lVar12 + -0x58) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar23 = func_0x057a51c4(uVar23,0);
  lVar33 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar33 != 0) {
    uVar11 = func_0x04fe48b0(lVar33,uVar23,lVar12 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar11 & 1) == 0) {
      uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x38) + 8))();
    }
    else {
      uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar12 + -0x58));
    }
    return uVar11;
  }
  auVar48 = func_0x03280cac();
  lVar32 = auVar48._8_8_;
  *(undefined8 *)(lVar12 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar12 + -0x70) = auVar47;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(lVar32);
      puVar15 = *(undefined8 **)(lVar32 + 0x38);
    }
  }
  *(undefined8 *)(lVar12 + -0x78) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar35 = func_0x057a51c4(uVar23,0);
  lVar32 = *(long *)(auVar48._0_8_ + 0x10);
  if (lVar32 != 0) {
    uVar11 = func_0x04fe48b0(lVar32,uVar35,lVar12 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    lVar32 = *(long *)(lVar12 + -0x78);
    if (lVar32 != 0) {
      iVar2 = *(int *)(lVar32 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar32 + 0x18) = 0;
      *(int *)(lVar32 + 0x1c) = *(int *)(lVar32 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar32 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar47 = func_0x03280cac();
  lVar32 = auVar47._8_8_;
  *(undefined8 *)(lVar12 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar12 + -0x90) = uVar23;
  *(long *)(lVar12 + -0x88) = auVar48._0_8_;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(lVar32);
      puVar15 = *(undefined8 **)(lVar32 + 0x38);
    }
  }
  *(undefined8 *)(lVar12 + -0x98) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar35 = func_0x057a51c4(uVar23,0);
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar32 != 0) {
    uVar11 = func_0x04fe48b0(lVar32,uVar35,lVar12 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar12 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar12 + -0x98) + 0x18));
    }
  }
  auVar48 = func_0x03280cac();
  lVar32 = auVar48._8_8_;
  *(undefined8 *)(lVar12 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar12 + -0xb0) = uVar23;
  *(long *)(lVar12 + -0xa8) = auVar47._0_8_;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(lVar32);
      puVar15 = *(undefined8 **)(lVar32 + 0x38);
    }
  }
  *(undefined8 *)(lVar12 + -0xb8) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar35 = func_0x057a51c4(uVar23,0);
  lVar32 = *(long *)(auVar48._0_8_ + 0x10);
  if (lVar32 != 0) {
    uVar11 = func_0x04fe48b0(lVar32,uVar35,lVar12 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar12 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar12 + -0xb8) + 0x18));
    }
  }
  auVar47 = func_0x03280cac();
  lVar32 = auVar47._8_8_;
  *(undefined8 *)(lVar12 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar12 + -0xd0) = uVar23;
  *(long *)(lVar12 + -200) = auVar48._0_8_;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x03256878(lVar32);
      puVar15 = *(undefined8 **)(lVar32 + 0x38);
    }
  }
  *(undefined8 *)(lVar12 + -0xd8) = 0;
  uVar23 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar35 = func_0x057a51c4(uVar23,0);
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar32 != 0) {
    uVar11 = func_0x04fe48b0(lVar32,uVar35,lVar12 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar11 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      if (*(long *)(lVar12 + -0xd8) == 0) goto LAB_03ec4958;
      uVar11 = (ulong)(0 < *(int *)(*(long *)(lVar12 + -0xd8) + 0x18));
    }
    return uVar11;
  }
LAB_03ec4958:
  auVar48 = func_0x03280cac();
  lVar32 = auVar48._8_8_;
  *(undefined8 *)(lVar12 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar12 + -0xf0) = uVar23;
  *(long *)(lVar12 + -0xe8) = auVar47._0_8_;
  puVar15 = *(undefined8 **)(lVar32 + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x03256878(lVar32);
    puVar15 = *(undefined8 **)(lVar32 + 0x38);
  }
  uVar11 = (**(code **)*puVar15)(auVar48._0_8_);
  if ((uVar11 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x38) + 8))(auVar48._0_8_);
  return uVar11;
}


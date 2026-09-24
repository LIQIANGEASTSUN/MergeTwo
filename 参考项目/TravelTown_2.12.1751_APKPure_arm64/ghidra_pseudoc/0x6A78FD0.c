/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78FD0; Merger.MergeBoard.Systems.ToolSpawningSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b79170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b79174) */

void Merger_MergeBoard_Systems_ToolSpawningSystem__Tick(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
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
  uint auStack_208 [22];
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
  uint uStack_144;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  puVar6 = PTR_DAT_078317a8;
  puVar5 = PTR_DAT_078317a0;
  puVar4 = PTR_DAT_07831798;
  puVar3 = PTR_DAT_0782fe68;
  puVar2 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a71b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830cc0);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07831798);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078317a8);
    func_0x03280a18(PTR_DAT_078317a0);
    func_0x03280a18(PTR_DAT_07830cc8);
    func_0x03280a18(PTR_DAT_078317b0);
    bRam0000000007e2a71b = 1;
  }
  uStack_f0 = 0;
  uStack_144 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  uVar7 = func_0x03d1a944(*(undefined8 *)puVar4);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar8,0,*(undefined8 *)puVar2,0);
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  func_0x03e660e4(&uStack_e0,&uStack_c0,uVar7,uVar8,*(undefined8 *)puVar5);
  uVar9 = func_0x044942c4(&uStack_e0,&uStack_140,*(undefined8 *)puVar6);
  if ((uVar9 & 1) == 0) {
    return;
  }
  uStack_188 = param_2[1];
  uStack_190 = *param_2;
  uStack_178 = param_2[3];
  uStack_180 = param_2[2];
  puVar15 = &uStack_144;
  uVar9 = func_0x06b993dc(*(undefined8 *)(param_1 + 0x10),&uStack_190,uStack_138 & 0xffffffff,
                          puVar15,0);
  uVar7 = uStack_140;
  if ((uVar9 & 1) == 0) {
    lVar18 = param_2[2];
    uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830cc0);
    uVar9 = 0;
    func_0x06b9a188(uVar8,uVar7,0);
    if (lVar18 != 0) {
      func_0x03ec33e4(lVar18,uVar8,*(undefined8 *)PTR_DAT_07830cc8);
      return;
    }
    auVar22 = func_0x03280cac();
    puVar13 = auVar22._8_8_;
    param_1 = auVar22._0_8_;
  }
  else {
    uStack_1a8 = param_2[1];
    uStack_1b0 = *param_2;
    uStack_198 = param_2[3];
    uStack_1a0 = param_2[2];
    uVar9 = (ulong)uStack_144;
    func_0x072ce970(auStack_208,&uStack_140,0x58);
    puVar13 = &uStack_1b0;
    puVar15 = auStack_208;
  }
  puVar6 = PTR_DAT_078317b8;
  puVar5 = PTR_DAT_07830e38;
  puVar4 = PTR_DAT_07830e30;
  puVar3 = PTR_DAT_0782fe68;
  puVar2 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a71c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830e30);
    func_0x03280a18(PTR_DAT_07830e48);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830e50);
    func_0x03280a18(PTR_DAT_07830e58);
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0782f3d8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fe80);
    func_0x03280a18(PTR_DAT_07830e68);
    func_0x03280a18(PTR_DAT_07830e70);
    func_0x03280a18(PTR_DAT_07830e38);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0782feb0);
    func_0x03280a18(PTR_DAT_078317c0);
    func_0x03280a18(PTR_DAT_078317c8);
    func_0x03280a18(PTR_DAT_078317b8);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a71c = 1;
  }
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2e8 = puVar13[1];
  uStack_2f0 = *puVar13;
  uStack_2d8 = puVar13[3];
  uStack_2e0 = puVar13[2];
  uVar7 = func_0x03d19d68(*(undefined8 *)puVar4);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar8,0,*(undefined8 *)puVar2,0);
  uStack_288 = uStack_2e8;
  uStack_290 = uStack_2f0;
  uStack_278 = uStack_2d8;
  uStack_280 = uStack_2e0;
  func_0x03e64c44(&uStack_2d0,&uStack_290,uVar7,uVar8,*(undefined8 *)puVar5);
  lVar18 = *(long *)puVar6;
  uStack_2a8 = uStack_2c8;
  uStack_2b0 = uStack_2d0;
  uStack_298 = uStack_2b8;
  uStack_2a0 = uStack_2c0;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar18 = *(long *)puVar6;
  }
  puVar3 = PTR_DAT_07830e70;
  puVar2 = PTR_DAT_07830e68;
  lVar19 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
  if (lVar19 == 0) {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar18 = *(long *)puVar6;
    }
    uVar7 = **(undefined8 **)(lVar18 + 0xb8);
    lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830e58);
    func_0x0534e52c(lVar19,uVar7,*(undefined8 *)PTR_DAT_078317c0,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar10 = lVar19;
    func_0x032809c4(plVar10,lVar19);
  }
  func_0x04486da0(&uStack_290,&uStack_2b0,lVar19,*(undefined8 *)puVar3);
  uStack_2a8 = uStack_288;
  uStack_2b0 = uStack_290;
  uStack_298 = uStack_278;
  uStack_2a0 = uStack_280;
  uVar7 = func_0x04486df8(&uStack_2b0,*(undefined8 *)puVar2);
  lVar18 = *(long *)puVar6;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c(lVar18);
    lVar18 = *(long *)puVar6;
  }
  puVar2 = PTR_DAT_07830e48;
  lVar19 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
  if (lVar19 == 0) {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c(lVar18);
      lVar18 = *(long *)puVar6;
    }
    uVar8 = **(undefined8 **)(lVar18 + 0xb8);
    lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830e50);
    func_0x0534e8c0(lVar19,uVar8,*(undefined8 *)PTR_DAT_078317c8,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
    *plVar10 = lVar19;
    func_0x032809c4(plVar10,lVar19);
  }
  uVar7 = func_0x03d4d780(uVar7,lVar19,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0782f3d8;
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar18 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0782f3d8) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_06b79580;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0782f3d8,3);
LAB_06b79580:
    uVar7 = (*(code *)*puVar11)(plVar10,uVar7,puVar11[1]);
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 != (long *)0x0) {
      lVar18 = *plVar10;
      uVar8 = *(undefined8 *)(puVar15 + 4);
      uVar14 = *(undefined8 *)(puVar15 + 6);
      uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_06b795f0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,2);
LAB_06b795f0:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,uVar7,uVar8,uVar14,puVar11[1]);
      if (plVar10 != (long *)0x0) {
        lVar18 = *plVar10;
        plVar20 = *(long **)(param_1 + 0x18);
        uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07779820) {
              puVar11 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_06b79668;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07779820,0);
LAB_06b79668:
        uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar3 = PTR_DAT_0782fe80;
        puVar2 = PTR_DAT_0774f158;
        if (plVar20 != (long *)0x0) {
          lVar18 = *plVar20;
          uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c16b0) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_06b796e4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c16b0,1);
LAB_06b796e4:
          uVar7 = (*(code *)*puVar11)(plVar20,uVar7,uVar9 & 0xffffffff,8,0,0,puVar11[1]);
          uStack_308 = puVar13[1];
          uStack_310 = *puVar13;
          uStack_2f8 = puVar13[3];
          uStack_300 = puVar13[2];
          func_0x06b98e60(&uStack_310,uVar7,*(undefined8 *)puVar15,0);
          uVar8 = *(undefined8 *)puVar2;
          uVar8 = func_0x06ba3134(*(undefined8 *)puVar15,*(undefined8 *)(param_1 + 0x28),uVar8,uVar8
                                  ,uVar8,0);
          uVar14 = *(undefined8 *)puVar2;
          uVar14 = func_0x06ba3134(*(undefined8 *)puVar15,*(undefined8 *)(param_1 + 0x28),uVar14,
                                   uVar14,uVar14,0);
          lVar18 = puVar13[2];
          uVar21 = *(undefined8 *)puVar15;
          uVar1 = puVar15[2];
          uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
          func_0x06b9aa90(uVar12,uVar21,uVar7,uVar1,uVar9 & 0xffffffff,0,uVar8,uVar14,0,0,0,0);
          puVar2 = PTR_DAT_0782fe78;
          if (lVar18 != 0) {
            func_0x03ec33e4(lVar18,uVar12,*(undefined8 *)PTR_DAT_0782feb0);
            lVar18 = puVar13[2];
            uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
            func_0x06b9a828(uVar8,uVar7,uVar14,0);
            if (lVar18 != 0) {
              func_0x03ec33e4(lVar18,uVar8,*(undefined8 *)PTR_DAT_0782fea8);
              return;
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}


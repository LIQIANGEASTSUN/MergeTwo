/* Ghidra 12.1.2 native pseudocode; RVA 0x6A77B70; Merger.MergeBoard.Systems.TimeLockSystem.Tick; status ok */

/* WARNING: Possible PIC construction at 0x06b77bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b77c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b77d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b77bf0) */
/* WARNING: Removing unreachable block (ram,0x06b77d1c) */
/* WARNING: Removing unreachable block (ram,0x06b77e84) */
/* WARNING: Removing unreachable block (ram,0x06b77d20) */
/* WARNING: Removing unreachable block (ram,0x06b77e08) */
/* WARNING: Removing unreachable block (ram,0x06b77e18) */
/* WARNING: Removing unreachable block (ram,0x06b77e1c) */
/* WARNING: Removing unreachable block (ram,0x06b77e20) */
/* WARNING: Removing unreachable block (ram,0x06b77e24) */
/* WARNING: Removing unreachable block (ram,0x06b77e2c) */
/* WARNING: Removing unreachable block (ram,0x06b77e48) */
/* WARNING: Removing unreachable block (ram,0x06b77e64) */

void Merger_MergeBoard_Systems_TimeLockSystem__Tick(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *extraout_x1;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float afStack_30 [2];
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a70f & 1) == 0) {
    func_0x03280a18(PTR_DAT_078315b8);
    func_0x03280a18(PTR_DAT_07830f10);
    bRam0000000007e2a70f = 1;
  }
  uStack_28 = 0;
  afStack_30[0] = 0.0;
  if (param_2[1] != 0) {
    uVar9 = func_0x03ec5020(param_2[1],&uStack_28,*(undefined8 *)PTR_DAT_07830f10);
    if ((uVar9 & 1) != 0) {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_38 = param_2[3];
      uStack_40 = param_2[2];
      puVar14 = &uStack_50;
      goto SUB_06b77c40;
    }
    if (param_2[1] != 0) {
      uVar9 = func_0x03ec4ed4(param_2[1],afStack_30,*(undefined8 *)PTR_DAT_078315b8);
      fVar8 = afStack_30[0];
      puVar7 = PTR_DAT_07831698;
      puVar6 = PTR_DAT_07831690;
      puVar5 = PTR_DAT_07831688;
      puVar4 = PTR_DAT_07831680;
      puVar3 = PTR_DAT_07831670;
      puVar2 = PTR_DAT_07831650;
      puVar1 = PTR_DAT_0782fe68;
      if ((uVar9 & 1) == 0) {
        return;
      }
      uVar22 = param_2[1];
      uVar21 = *param_2;
      uVar20 = param_2[3];
      uVar19 = param_2[2];
      if ((bRam0000000007e2a711 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07831680);
        func_0x03280a18(PTR_DAT_07831650);
        func_0x03280a18(PTR_DAT_078316a0);
        func_0x03280a18(PTR_DAT_078316a8);
        func_0x03280a18(PTR_DAT_07831690);
        func_0x03280a18(PTR_DAT_078316b0);
        func_0x03280a18(PTR_DAT_0782fe68);
        func_0x03280a18(PTR_DAT_07831658);
        func_0x03280a18(PTR_DAT_078316b8);
        func_0x03280a18(PTR_DAT_078316c0);
        func_0x03280a18(PTR_DAT_078316c8);
        func_0x03280a18(PTR_DAT_07831688);
        func_0x03280a18(PTR_DAT_07831670);
        func_0x03280a18(PTR_DAT_078316d0);
        func_0x03280a18(PTR_DAT_078316d8);
        func_0x03280a18(PTR_DAT_07831698);
        bRam0000000007e2a711 = 1;
      }
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_158 = 0;
      dStack_160 = 0.0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_180 = uVar21;
      uStack_178 = uVar22;
      uStack_170 = uVar19;
      uStack_168 = uVar20;
      uVar10 = func_0x03d1a6a0(*(undefined8 *)puVar2);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x06015d08(uVar11,0,*(undefined8 *)puVar4,0);
      uStack_1d8 = uStack_178;
      uStack_1e0 = uStack_180;
      uStack_1c8 = uStack_168;
      uStack_1d0 = uStack_170;
      func_0x03e65c84(&uStack_130,&uStack_1e0,uVar10,uVar11,*(undefined8 *)puVar3);
      uVar10 = func_0x04491418(&uStack_130,*(undefined8 *)puVar5);
      lVar12 = func_0x03d5b300(uVar10,*(undefined8 *)puVar6);
      lVar16 = *(long *)puVar7;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c(lVar16);
        lVar16 = *(long *)puVar7;
      }
      puVar1 = PTR_DAT_078316b0;
      lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar17 == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          func_0x03280b8c(lVar16);
          lVar16 = *(long *)puVar7;
        }
        uVar10 = **(undefined8 **)(lVar16 + 0xb8);
        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831658);
        func_0x05351168(lVar17,uVar10,*(undefined8 *)PTR_DAT_078316d0,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        *plVar13 = lVar17;
        func_0x032809c4(plVar13,lVar17);
      }
      uVar10 = func_0x03d86758(lVar12,lVar17,*(undefined8 *)puVar1);
      lVar16 = *(long *)puVar7;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        func_0x03280b8c(lVar16);
        lVar16 = *(long *)puVar7;
      }
      puVar3 = PTR_DAT_078316c8;
      puVar2 = PTR_DAT_078316c0;
      puVar1 = PTR_DAT_078316a8;
      lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
      if (lVar17 == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          func_0x03280b8c(lVar16);
          lVar16 = *(long *)puVar7;
        }
        uVar11 = **(undefined8 **)(lVar16 + 0xb8);
        lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078316b8);
        func_0x05351250(lVar17,uVar11,*(undefined8 *)PTR_DAT_078316d8,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
        *plVar13 = lVar17;
        func_0x032809c4(plVar13,lVar17);
      }
      uVar10 = func_0x03d4e350(uVar10,lVar17,*(undefined8 *)puVar1);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
      uVar10 = func_0x053bb974(uVar11,uVar10,*(undefined8 *)puVar2);
      puVar1 = PTR_DAT_078316a0;
      if (lVar12 == 0) {
LAB_06b782f8:
        func_0x03280cac();
        return;
      }
      uVar15 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar15) {
        uVar18 = 0;
        do {
          if (uVar15 <= uVar18) {
            func_0x03280cb4();
            goto LAB_06b782f8;
          }
          lVar17 = lVar12 + (long)(int)uVar18 * 0x68;
          lVar16 = *(long *)(lVar17 + 0x20);
          func_0x072ce970(&uStack_1e0,lVar17 + 0x28,0x60);
          uStack_140 = *(undefined8 *)(lVar17 + 0x48);
          uStack_158 = *(undefined8 *)(lVar17 + 0x30);
          dStack_160 = *(double *)(lVar17 + 0x28);
          uStack_148 = *(ulong *)(lVar17 + 0x40);
          uStack_150 = *(undefined8 *)(lVar17 + 0x38);
          uStack_228 = uStack_1a8;
          uStack_230 = uStack_1b0;
          uStack_218 = uStack_198;
          uStack_220 = uStack_1a0;
          uStack_208 = uStack_188;
          uStack_210 = uStack_190;
          uStack_200 = uVar21;
          uStack_1f8 = uVar22;
          uStack_1f0 = uVar19;
          uStack_1e8 = uVar20;
          uVar10 = func_0x06b78648(param_1,&uStack_200,lVar16,&dStack_160,&uStack_230,uVar11);
          uVar10 = func_0x06b78754(uVar10,&dStack_160,uVar11);
          if (((char)uStack_148 != '\0') &&
             (dStack_160 = dStack_160 - (double)fVar8, dStack_160 <= 0.0)) {
            dStack_160 = 0.0;
            uStack_148 = uStack_148 & 0xffffffffffffff00;
          }
          uVar10 = func_0x06b78800(uVar10,lVar16,&dStack_160);
          func_0x06b788d8(uVar10,lVar16,&dStack_160);
          uStack_258 = uStack_158;
          dStack_260 = dStack_160;
          uStack_248 = uStack_148;
          uStack_250 = uStack_150;
          uStack_240 = uStack_140;
          if (lVar16 == 0) goto LAB_06b782f8;
          uStack_108 = uStack_158;
          dStack_110 = dStack_160;
          uStack_f8 = uStack_148;
          uStack_100 = uStack_150;
          uStack_f0 = uStack_140;
          uVar10 = func_0x03d1e010(lVar16,&dStack_110,*(undefined8 *)puVar1);
          uVar15 = *(uint *)(lVar12 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar15);
      }
      uStack_280 = uVar21;
      uStack_278 = uVar22;
      uStack_270 = uVar19;
      uStack_268 = uVar20;
      func_0x06b789d4(uVar10,&uStack_280);
      return;
    }
  }
  func_0x03280cac();
  puVar14 = extraout_x1;
SUB_06b77c40:
  puVar1 = PTR_DAT_07831648;
  if ((bRam0000000007e2a710 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830f28,puVar14);
    func_0x03280a18(PTR_DAT_07831650);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831658);
    func_0x03280a18(PTR_DAT_07831660);
    func_0x03280a18(PTR_DAT_07831668);
    func_0x03280a18(PTR_DAT_07831670);
    func_0x03280a18(PTR_DAT_07831678);
    func_0x03280a18(PTR_DAT_07831648);
    bRam0000000007e2a710 = 1;
  }
  uStack_120 = 0;
  uStack_108 = 0;
  dStack_110 = 0.0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  dStack_160 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}


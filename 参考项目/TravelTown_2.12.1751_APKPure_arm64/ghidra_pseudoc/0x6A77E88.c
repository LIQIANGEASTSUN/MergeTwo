/* Ghidra 12.1.2 native pseudocode; RVA 0x6A77E88; Merger.MergeBoard.Systems.TimeLockSystem.ProcessIntervalTick; status ok */

void Merger_MergeBoard_Systems_TimeLockSystem__ProcessIntervalTick
               (float param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
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
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  puVar7 = PTR_DAT_07831698;
  puVar6 = PTR_DAT_07831690;
  puVar5 = PTR_DAT_07831688;
  puVar4 = PTR_DAT_07831680;
  puVar3 = PTR_DAT_07831670;
  puVar2 = PTR_DAT_07831650;
  puVar1 = PTR_DAT_0782fe68;
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
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_e8 = 0;
  dStack_f0 = 0.0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = param_3[1];
  uStack_110 = *param_3;
  uStack_f8 = param_3[3];
  uStack_100 = param_3[2];
  uVar8 = func_0x03d1a6a0(*(undefined8 *)puVar2);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x06015d08(uVar9,0,*(undefined8 *)puVar4,0);
  uStack_168 = uStack_108;
  uStack_170 = uStack_110;
  uStack_158 = uStack_f8;
  uStack_160 = uStack_100;
  func_0x03e65c84(&uStack_c0,&uStack_170,uVar8,uVar9,*(undefined8 *)puVar3);
  uVar8 = func_0x04491418(&uStack_c0,*(undefined8 *)puVar5);
  lVar10 = func_0x03d5b300(uVar8,*(undefined8 *)puVar6);
  lVar13 = *(long *)puVar7;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c(lVar13);
    lVar13 = *(long *)puVar7;
  }
  puVar1 = PTR_DAT_078316b0;
  lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar14 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar7;
    }
    uVar8 = **(undefined8 **)(lVar13 + 0xb8);
    lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831658);
    func_0x05351168(lVar14,uVar8,*(undefined8 *)PTR_DAT_078316d0,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
    *plVar11 = lVar14;
    func_0x032809c4(plVar11,lVar14);
  }
  uVar8 = func_0x03d86758(lVar10,lVar14,*(undefined8 *)puVar1);
  lVar13 = *(long *)puVar7;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c(lVar13);
    lVar13 = *(long *)puVar7;
  }
  puVar3 = PTR_DAT_078316c8;
  puVar2 = PTR_DAT_078316c0;
  puVar1 = PTR_DAT_078316a8;
  lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar14 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar7;
    }
    uVar9 = **(undefined8 **)(lVar13 + 0xb8);
    lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078316b8);
    func_0x05351250(lVar14,uVar9,*(undefined8 *)PTR_DAT_078316d8,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
    *plVar11 = lVar14;
    func_0x032809c4(plVar11,lVar14);
  }
  uVar8 = func_0x03d4e350(uVar8,lVar14,*(undefined8 *)puVar1);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  uVar8 = func_0x053bb974(uVar9,uVar8,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_078316a0;
  if (lVar10 != 0) {
    uVar12 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar12) {
      uVar15 = 0;
      do {
        if (uVar12 <= uVar15) {
          func_0x03280cb4();
          goto SUB_057da5fc;
        }
        lVar14 = lVar10 + (long)(int)uVar15 * 0x68;
        lVar13 = *(long *)(lVar14 + 0x20);
        func_0x072ce970(&uStack_170,lVar14 + 0x28,0x60);
        uStack_d0 = *(undefined8 *)(lVar14 + 0x48);
        uStack_e8 = *(undefined8 *)(lVar14 + 0x30);
        dStack_f0 = *(double *)(lVar14 + 0x28);
        uStack_d8 = *(ulong *)(lVar14 + 0x40);
        uStack_e0 = *(undefined8 *)(lVar14 + 0x38);
        uStack_188 = param_3[1];
        uStack_190 = *param_3;
        uStack_178 = param_3[3];
        uStack_180 = param_3[2];
        uStack_1b8 = uStack_138;
        uStack_1c0 = uStack_140;
        uStack_1a8 = uStack_128;
        uStack_1b0 = uStack_130;
        uStack_198 = uStack_118;
        uStack_1a0 = uStack_120;
        uVar8 = func_0x06b78648(param_2,&uStack_190,lVar13,&dStack_f0,&uStack_1c0,uVar9);
        uVar8 = func_0x06b78754(uVar8,&dStack_f0,uVar9);
        if (((char)uStack_d8 != '\0') && (dStack_f0 = dStack_f0 - (double)param_1, dStack_f0 <= 0.0)
           ) {
          dStack_f0 = 0.0;
          uStack_d8 = uStack_d8 & 0xffffffffffffff00;
        }
        uVar8 = func_0x06b78800(uVar8,lVar13,&dStack_f0);
        func_0x06b788d8(uVar8,lVar13,&dStack_f0);
        uStack_1e8 = uStack_e8;
        dStack_1f0 = dStack_f0;
        uStack_1d8 = uStack_d8;
        uStack_1e0 = uStack_e0;
        uStack_1d0 = uStack_d0;
        if (lVar13 == 0) goto SUB_057da5fc;
        uStack_98 = uStack_e8;
        dStack_a0 = dStack_f0;
        uStack_88 = uStack_d8;
        uStack_90 = uStack_e0;
        uStack_80 = uStack_d0;
        uVar8 = func_0x03d1e010(lVar13,&dStack_a0,*(undefined8 *)puVar1);
        uVar12 = *(uint *)(lVar10 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar12);
    }
    uStack_208 = param_3[1];
    uStack_210 = *param_3;
    uStack_1f8 = param_3[3];
    uStack_200 = param_3[2];
    func_0x06b789d4(uVar8,&uStack_210);
    return;
  }
SUB_057da5fc:
  func_0x03280cac();
  return;
}


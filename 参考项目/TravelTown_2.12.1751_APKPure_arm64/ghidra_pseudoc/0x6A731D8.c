/* Ghidra 12.1.2 native pseudocode; RVA 0x6A731D8; Merger.MergeBoard.Systems.ProducerSystem.ProduceItemIfReady; status ok */

void Merger_MergeBoard_Systems_ProducerSystem__ProduceItemIfReady(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d0 [80];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined4 uStack_267;
  undefined3 uStack_263;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined3 uStack_1f4;
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
  ulong uStack_198;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
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
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long lStack_68;
  
  puVar8 = PTR_DAT_078313f0;
  puVar7 = PTR_DAT_078313e8;
  puVar6 = PTR_DAT_078313e0;
  puVar5 = PTR_DAT_07830ab0;
  puVar4 = PTR_DAT_0782fe68;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000007e2a6f2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ab0);
    func_0x03280a18(PTR_DAT_078313e8);
    func_0x03280a18(PTR_DAT_0782ff58);
    func_0x03280a18(PTR_DAT_078313f8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831400);
    func_0x03280a18(PTR_DAT_07831408);
    func_0x03280a18(PTR_DAT_07831410);
    func_0x03280a18(PTR_DAT_078313f0);
    func_0x03280a18(PTR_DAT_07831418);
    func_0x03280a18(PTR_DAT_078313e0);
    bRam0000000007e2a6f2 = 1;
  }
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_78 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_a0 = 0;
  uStack_1fc = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_218 = param_2[1];
  uStack_220 = *param_2;
  uStack_208 = param_2[3];
  uStack_210 = param_2[2];
  uVar9 = func_0x03d1a8f0(*(undefined8 *)puVar7);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06015d08(uVar10,0,*(undefined8 *)puVar5,0);
  uStack_1a8 = uStack_218;
  uStack_1b0 = uStack_220;
  uStack_198 = uStack_208;
  uStack_1a0 = uStack_210;
  func_0x03e66044(&uStack_1f0,&uStack_1b0,uVar9,uVar10,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar6;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar11 = *(long *)puVar6;
  }
  puVar7 = PTR_DAT_07831410;
  puVar5 = PTR_DAT_07831408;
  puVar4 = PTR_DAT_078313f8;
  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar14 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar11 = *(long *)puVar6;
    }
    uVar9 = **(undefined8 **)(lVar11 + 0xb8);
    lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831400);
    func_0x053518a0(lVar14,uVar9,*(undefined8 *)PTR_DAT_07831418,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
    *plVar12 = lVar14;
    func_0x032809c4(plVar12,lVar14);
  }
  func_0x04493a90(&uStack_1d0,&uStack_1f0,lVar14,*(undefined8 *)puVar7);
  uVar9 = func_0x04493ae8(&uStack_1d0,*(undefined8 *)puVar5);
  lVar11 = func_0x03d5b410(uVar9,*(undefined8 *)puVar4);
  if (lVar11 == 0) {
LAB_06b73624:
    func_0x03280cac();
  }
  else {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar16 = 0;
      uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      lVar14 = lVar11 + 0x50;
      do {
        if (uVar13 <= uVar16) {
          func_0x03280cb4();
          goto LAB_06b73624;
        }
        uStack_90 = *(undefined8 *)(lVar14 + -0x24);
        lVar15 = *(long *)(lVar14 + -0x30);
        uVar1 = *(undefined4 *)(lVar14 + -0x28);
        uStack_7c = (undefined4)*(undefined8 *)(lVar14 + -0x10);
        uStack_78 = (undefined4)((ulong)*(undefined8 *)(lVar14 + -0x10) >> 0x20);
        uStack_80 = (undefined4)((ulong)*(undefined8 *)(lVar14 + -0x18) >> 0x20);
        uStack_88 = (undefined4)*(undefined8 *)(lVar14 + -0x1c);
        uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar14 + -0x1c) >> 0x20);
        uStack_1f8 = *(undefined4 *)(lVar14 + -7);
        uVar2 = *(undefined1 *)(lVar14 + -8);
        uStack_1f4 = (undefined3)((uint)*(undefined4 *)(lVar14 + -4) >> 8);
        func_0x072ce970(&uStack_110,lVar14,0x78);
        uStack_238 = param_2[1];
        uStack_240 = *param_2;
        uStack_228 = param_2[3];
        uStack_230 = param_2[2];
        uVar13 = func_0x06b993dc(*(undefined8 *)(param_1 + 0x10),&uStack_240,uVar1,&uStack_1fc,0);
        if ((uVar13 & 1) == 0) break;
        uStack_270 = CONCAT44(uStack_78,uStack_7c);
        uStack_258 = param_2[1];
        uStack_260 = *param_2;
        uStack_248 = param_2[3];
        uStack_250 = param_2[2];
        uStack_128 = uStack_88;
        uStack_130 = (undefined4)uStack_90;
        uStack_12c = (undefined4)((ulong)uStack_90 >> 0x20);
        uStack_124 = uStack_84;
        uStack_120 = uStack_80;
        uStack_278 = CONCAT44(uStack_80,uStack_84);
        uStack_280 = CONCAT44(uStack_88,uStack_12c);
        uStack_11c = uStack_270;
        func_0x072ce970(auStack_2d0,&uStack_110,0x50);
        func_0x072ce970(&uStack_1b0,&uStack_110,0x78);
        uStack_2f8 = uStack_158;
        uStack_300 = uStack_160;
        uStack_2e8 = uStack_148;
        uStack_2f0 = uStack_150;
        uStack_2e0 = uStack_140;
        uStack_263 = uStack_1f4;
        uStack_267 = uStack_1f8;
        uStack_268 = uVar2;
        uVar13 = func_0x06b73634(param_1,&uStack_260,lVar15,uVar1,&uStack_280,auStack_2d0,
                                 &uStack_300,uStack_1fc);
        if ((uVar13 & 1) != 0) {
          uStack_11c = CONCAT44(uStack_78,uStack_7c);
          uStack_128 = uStack_88;
          uStack_130 = (undefined4)uStack_90;
          uStack_12c = (undefined4)((ulong)uStack_90 >> 0x20);
          uStack_124 = uStack_84;
          uStack_120 = uStack_80;
          if (lVar15 == 0) goto LAB_06b73624;
          uStack_198 = uStack_198 & 0xffffffffffffff00;
          uStack_1b0 = CONCAT44(uStack_88,uStack_12c);
          uStack_1a8 = CONCAT44(uStack_80,uStack_84);
          uStack_1a0 = uStack_11c;
          func_0x03d1d988(lVar15,&uStack_1b0,*(undefined8 *)PTR_DAT_0782ff58);
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 0xa8;
        uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
      return;
    }
  }
  func_0x072ce990();
  return;
}


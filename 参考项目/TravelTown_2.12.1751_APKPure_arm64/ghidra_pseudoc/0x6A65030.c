/* Ghidra 12.1.2 native pseudocode; RVA 0x6A65030; Merger.MergeBoard.Systems.AnyItemMergeSystem.CanPerformMerge; status ok */


ulong Merger_MergeBoard_Systems_AnyItemMergeSystem__CanPerformMerge
                (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined1 auVar17 [16];
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
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int aiStack_38 [2];
  int aiStack_28 [2];
  long lVar6;
  undefined8 *puVar12;
  
  puVar13 = param_3;
  if ((bRam0000000007e2a69b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830a08);
    bRam0000000007e2a69b = 1;
  }
  puVar2 = PTR_DAT_07830a08;
  aiStack_28[0] = 0;
  aiStack_38[0] = 0;
  if (param_2 == 0) {
LAB_06b650f4:
    auVar17 = func_0x03280cac();
    puVar12 = auVar17._8_8_;
    lVar6 = auVar17._0_8_;
    if ((bRam0000000007e2a69c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c16b0);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0782fe78);
      func_0x03280a18(PTR_DAT_07830a10);
      func_0x03280a18(PTR_DAT_0782fea8);
      func_0x03280a18(PTR_DAT_07830a18);
      func_0x03280a18(PTR_DAT_07830a20);
      func_0x03280a18(PTR_DAT_0774f158);
      bRam0000000007e2a69c = 1;
    }
    auStack_d0._0_8_ = 0;
    auStack_d0._8_8_ = 0;
    auVar17 = ZEXT816(0);
    if (*(long *)(lVar6 + 0x20) != 0) {
      plVar7 = (long *)func_0x06b866a8(*(long *)(lVar6 + 0x20),*puVar12,*puVar13,0);
      uVar9 = 0;
      if (plVar7 != (long *)0x0) {
        lVar14 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779820) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06b65210;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_06b65210:
        uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      puVar3 = PTR_DAT_07830a20;
      puVar2 = PTR_DAT_07830a10;
      auVar17._8_8_ = auStack_d0._8_8_;
      auVar17._0_8_ = auStack_d0._0_8_;
      plVar7 = *(long **)(lVar6 + 0x18);
      if (plVar7 != (long *)0x0) {
        lVar14 = *plVar7;
        uVar1 = *(undefined4 *)(puVar12 + 1);
        uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar5 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c16b0) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_06b65294;
            }
            uVar5 = uVar5 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c16b0,1);
LAB_06b65294:
        uVar9 = (*(code *)*puVar8)(plVar7,uVar9,uVar1,2,0,0,puVar8[1]);
        uStack_e8 = param_4[1];
        uStack_f0 = *param_4;
        uStack_d8 = param_4[3];
        uStack_e0 = param_4[2];
        uStack_c0 = uStack_f0;
        uStack_b8 = uStack_e8;
        uStack_b0 = uStack_e0;
        uStack_a8 = uStack_d8;
        func_0x03ec5690(&uStack_c0,uVar9,0,*(undefined8 *)puVar3);
        uStack_108 = param_4[1];
        uStack_110 = *param_4;
        uStack_f8 = param_4[3];
        uStack_100 = param_4[2];
        func_0x06b98e60(&uStack_110,uVar9,0,0);
        uStack_128 = param_4[1];
        uStack_130 = *param_4;
        uStack_118 = param_4[3];
        uStack_120 = param_4[2];
        func_0x06b98f6c(&uStack_130,*puVar12,0);
        uStack_148 = param_4[1];
        uStack_150 = *param_4;
        uStack_138 = param_4[3];
        uStack_140 = param_4[2];
        func_0x06b98f6c(&uStack_150,*puVar13,0);
        lVar16 = param_4[2];
        lVar14 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x06b9a9dc(lVar14,0);
        auStack_d0 = func_0x0578e2a8(0);
        uVar10 = func_0x0579043c(auStack_d0,0);
        auVar17 = auStack_d0;
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x10) = uVar10;
          func_0x032809c4();
          *(undefined8 *)(lVar14 + 0x18) = *puVar12;
          func_0x032809c4();
          *(undefined8 *)(lVar14 + 0x20) = *puVar13;
          func_0x032809c4();
          *(undefined8 *)(lVar14 + 0x28) = uVar9;
          func_0x032809c4((undefined8 *)(lVar14 + 0x28),uVar9);
          *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)(puVar12 + 1);
          puVar3 = PTR_DAT_0782fe78;
          puVar2 = PTR_DAT_0774f158;
          auVar17 = auStack_d0;
          if (lVar16 != 0) {
            func_0x03ec33e4(lVar16,lVar14,*(undefined8 *)PTR_DAT_07830a18);
            uVar10 = *(undefined8 *)puVar2;
            lVar14 = param_4[2];
            uVar10 = func_0x06ba3134(uVar9,*(undefined8 *)(lVar6 + 0x10),uVar10,uVar10,uVar10,0);
            uVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
            func_0x06b9a828(uVar11,uVar9,uVar10,0);
            auVar17 = auStack_d0;
            if (lVar14 != 0) {
              uVar5 = func_0x03ec33e4(lVar14,uVar11,*(undefined8 *)PTR_DAT_0782fea8);
              return uVar5;
            }
          }
        }
      }
    }
    auStack_d0 = auVar17;
    uVar5 = func_0x03280cac();
    return uVar5;
  }
  puVar13 = *(undefined8 **)PTR_DAT_07830a08;
  uVar5 = func_0x03d1e850(param_2,aiStack_28);
  if ((uVar5 & 1) != 0) {
    if (param_3 == (undefined8 *)0x0) goto LAB_06b650f4;
    puVar13 = *(undefined8 **)puVar2;
    uVar5 = func_0x03d1e850(param_3,aiStack_38);
    if (((uVar5 & 1) != 0) && ((aiStack_28[0] == 0 || (aiStack_38[0] == 0)))) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_06b650f4;
      uVar4 = func_0x06b860d4(*(long *)(param_1 + 0x20),param_2,param_3,0);
      goto LAB_06b650c0;
    }
  }
  uVar4 = 0;
LAB_06b650c0:
  return (ulong)(uVar4 & 1);
}


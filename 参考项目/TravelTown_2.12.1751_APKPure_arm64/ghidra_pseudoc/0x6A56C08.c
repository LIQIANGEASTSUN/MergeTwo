/* Ghidra 12.1.2 native pseudocode; RVA 0x6A56C08; Merger.MergeBoardQueue.Systems.BoardQueueSystem.Tick; status ok */

/* WARNING: Possible PIC construction at 0x06b56d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b56e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b56ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b56e3c) */
/* WARNING: Removing unreachable block (ram,0x06b56e40) */
/* WARNING: Removing unreachable block (ram,0x06b56d08) */
/* WARNING: Removing unreachable block (ram,0x06b56d0c) */
/* WARNING: Removing unreachable block (ram,0x06b56d14) */
/* WARNING: Removing unreachable block (ram,0x06b56d34) */
/* WARNING: Removing unreachable block (ram,0x06b56d3c) */
/* WARNING: Removing unreachable block (ram,0x06b56dec) */
/* WARNING: Removing unreachable block (ram,0x06b56d48) */
/* WARNING: Removing unreachable block (ram,0x06b56d54) */
/* WARNING: Removing unreachable block (ram,0x06b56dfc) */
/* WARNING: Removing unreachable block (ram,0x06b56ea8) */
/* WARNING: Removing unreachable block (ram,0x06b56eac) */
/* WARNING: Removing unreachable block (ram,0x06b56eb4) */
/* WARNING: Removing unreachable block (ram,0x06b56ef0) */
/* WARNING: Removing unreachable block (ram,0x06b56f00) */

ulong Merger_MergeBoardQueue_Systems_BoardQueueSystem__Tick
                (long param_1,undefined8 *param_2,undefined8 param_3,long *param_4,long param_5,
                long *param_6,long *param_7,undefined4 *param_8)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined4 uStack_74;
  long alStack_70 [2];
  undefined4 uStack_5c;
  long alStack_58 [3];
  long lStack_38;
  
  if ((bRam0000000007e2a5fb & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0f10);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078302b0);
    func_0x03280a18(PTR_DAT_078302b8);
    func_0x03280a18(PTR_DAT_078302c0);
    func_0x03280a18(PTR_DAT_078302c8);
    func_0x03280a18(PTR_DAT_078302d0);
    func_0x03280a18(PTR_DAT_078302d8);
    bRam0000000007e2a5fb = 1;
  }
  lStack_38 = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  alStack_58[0] = 0;
  uStack_5c = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  uStack_74 = 0;
  if (param_2[1] == 0) {
LAB_06b56f20:
    uVar8 = param_3;
    auVar17 = func_0x03280cac();
    puVar5 = auVar17._8_8_;
    param_1 = auVar17._0_8_;
  }
  else {
    param_3 = *(undefined8 *)PTR_DAT_078302d0;
    uVar4 = func_0x03ec5020(param_2[1],&lStack_38);
    if ((uVar4 & 1) == 0) {
      if (param_2[1] != 0) {
        param_3 = *(undefined8 *)PTR_DAT_078302d8;
        uVar4 = func_0x03ec5020(param_2[1],alStack_58 + 2);
        if ((uVar4 & 1) == 0) {
          return uVar4;
        }
        uStack_98 = param_2[1];
        uStack_a0 = *param_2;
        uStack_88 = param_2[3];
        uStack_90 = param_2[2];
        if (((alStack_58[2] != 0) && (*(long *)(alStack_58[2] + 0x18) != 0)) &&
           (plVar10 = *(long **)(*(long *)(alStack_58[2] + 0x18) + 0x10), plVar10 != (long *)0x0)) {
          lVar12 = *plVar10;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07779820) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_06b56e60;
              }
              uVar4 = uVar4 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar4 != 0);
          }
          param_3 = 0;
          puVar5 = (undefined8 *)func_0x03256b10(plVar10);
LAB_06b56e60:
          uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
          if ((alStack_58[2] != 0) && (*(long *)(alStack_58[2] + 0x18) != 0)) {
            param_4 = *(long **)(alStack_58[2] + 0x10);
            param_5 = *(long *)(*(long *)(alStack_58[2] + 0x18) + 0x18);
            puVar5 = &uStack_e0;
            param_6 = alStack_70 + 1;
            param_7 = alStack_70;
            param_8 = &uStack_74;
            uStack_d8 = uStack_98;
            uStack_e0 = uStack_a0;
            uStack_c8 = uStack_88;
            uStack_d0 = uStack_90;
            goto SUB_06b56f24;
          }
        }
      }
      goto LAB_06b56f20;
    }
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_88 = param_2[3];
    uStack_90 = param_2[2];
    if (lStack_38 == 0) goto LAB_06b56f20;
    param_5 = *(long *)(lStack_38 + 0x18);
    param_4 = *(long **)(lStack_38 + 0x20);
    uVar8 = *(undefined8 *)(lStack_38 + 0x10);
    puVar5 = &uStack_c0;
    param_6 = alStack_58 + 1;
    param_7 = alStack_58;
    param_8 = &uStack_5c;
    uStack_c0 = uStack_a0;
    uStack_b8 = uStack_98;
    uStack_b0 = uStack_90;
    uStack_a8 = uStack_88;
  }
SUB_06b56f24:
  plVar10 = param_4;
  lVar12 = param_5;
  if ((bRam0000000007e2a5fc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a5fc = 1;
  }
  uVar11 = (undefined4)lVar12;
  *param_6 = 0;
  func_0x032809c4(param_6,0);
  *param_7 = 0;
  func_0x032809c4(param_7,0);
  uStack_168 = puVar5[1];
  uStack_170 = *puVar5;
  uStack_158 = puVar5[3];
  uStack_160 = puVar5[2];
  puVar9 = param_8;
  uVar3 = func_0x06b5730c(param_1,&uStack_170);
  if ((uVar3 & 1) == 0) {
LAB_06b5720c:
    return (ulong)(uVar3 & 1);
  }
  if (param_4 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar12 = *param_4;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x1e) * 0x10 + 0x138);
          goto LAB_06b57058;
        }
        uVar4 = uVar4 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined4 *)0x1e;
    puVar6 = (undefined8 *)func_0x03256b10(param_4);
LAB_06b57058:
    uVar7 = (*(code *)*puVar6)(param_4,puVar6[1]);
  }
  plVar15 = *(long **)(param_1 + 0x18);
  plVar16 = param_6;
  plVar2 = (long *)0x0;
  if (param_5 != 0) {
    plVar16 = (long *)0x0;
    plVar2 = param_6;
  }
  if (plVar15 != (long *)0x0) {
    lVar13 = *plVar15;
    uVar11 = *param_8;
    lVar12 = *(long *)PTR_DAT_077c16b0;
    uVar1 = *(ushort *)(lVar13 + 0x12e);
    uVar4 = (ulong)uVar1;
    if (param_5 == 0) {
      if (uVar1 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_06b5713c;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar15,lVar12,1);
LAB_06b5713c:
      lVar12 = (*(code *)*puVar6)(plVar15,uVar8,uVar11,0x20,0,uVar7,puVar6[1]);
    }
    else {
      if (uVar1 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_06b57110;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar15,lVar12,2);
LAB_06b57110:
      lVar12 = (*(code *)*puVar6)(plVar15,param_5,uVar11,puVar6[1]);
      plVar16 = plVar2;
    }
    *plVar16 = lVar12;
    func_0x032809c4(plVar16);
    uStack_188 = puVar5[1];
    uStack_190 = *puVar5;
    uStack_178 = puVar5[3];
    uStack_180 = puVar5[2];
    func_0x06b98e60(&uStack_190,*param_6,0,0);
    uVar8 = *(undefined8 *)PTR_DAT_0774f158;
    lVar12 = func_0x06ba3134(*param_6,*(undefined8 *)(param_1 + 0x20),uVar8,uVar8,uVar8,0);
    uVar11 = (undefined4)uVar8;
    *param_7 = lVar12;
    func_0x032809c4(param_7,lVar12);
    lVar13 = puVar5[2];
    lVar12 = *param_6;
    puVar9 = (undefined4 *)*param_7;
    uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe78);
    plVar10 = (long *)0x0;
    func_0x06b9a828(uVar8,lVar12);
    if (lVar13 != 0) {
      func_0x03ec33e4(lVar13,uVar8,*(undefined8 *)PTR_DAT_0782fea8);
      goto LAB_06b5720c;
    }
  }
  auVar17 = func_0x03280cac();
  lVar12 = auVar17._0_8_;
  func_0x057da5fc(lVar12,0);
  *(undefined8 *)(lVar12 + 0x10) = auVar17._8_8_;
  func_0x032809c4((undefined8 *)(lVar12 + 0x10),auVar17._8_8_);
  *(long *)(lVar12 + 0x18) = (long)puVar9;
  func_0x032809c4((long *)(lVar12 + 0x18),puVar9);
  *(long *)(lVar12 + 0x20) = (long)plVar10;
  uVar4 = func_0x032809c4((long *)(lVar12 + 0x20),plVar10);
  *(undefined4 *)(lVar12 + 0x28) = uVar11;
  return uVar4;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6DE7C; Merger.MergeBoard.Systems.ItemSelectionBoxSystem.Tick; status ok */


void Merger_MergeBoard_Systems_ItemSelectionBoxSystem__Tick(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_078310e8;
  puVar4 = PTR_DAT_078310e0;
  puVar3 = PTR_DAT_078310d8;
  puVar2 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a6da & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078310d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_078310f0);
    func_0x03280a18(PTR_DAT_078310f8);
    func_0x03280a18(PTR_DAT_078310e8);
    func_0x03280a18(PTR_DAT_078310e0);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07831100);
    func_0x03280a18(PTR_DAT_07831108);
    func_0x03280a18(PTR_DAT_07831110);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6da = 1;
  }
  uStack_a0 = 0;
  lStack_108 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_148 = param_2[1];
  uStack_150 = *param_2;
  uStack_138 = param_2[3];
  uStack_140 = param_2[2];
  uVar6 = func_0x03d1a7f4(*(undefined8 *)puVar3);
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06015d08(uVar7,0,*(undefined8 *)puVar1,0);
  uStack_68 = uStack_148;
  uStack_70 = uStack_150;
  uStack_58 = uStack_138;
  uStack_60 = uStack_140;
  func_0x03e65e64(&uStack_128,&uStack_70,uVar6,uVar7,*(undefined8 *)puVar4);
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  uStack_80 = uStack_118;
  uVar8 = func_0x044928d4(&uStack_90,&uStack_100,*(undefined8 *)puVar5);
  if ((uVar8 & 1) != 0) {
    if (param_2[1] == 0) goto SUB_057da5fc;
    uVar8 = func_0x03ec5020(param_2[1],&lStack_108,*(undefined8 *)PTR_DAT_07831110);
    uVar6 = uStack_c0;
    if ((uVar8 & 1) == 0) {
      if ((char)uStack_b0 == '\0') {
        return;
      }
      plVar14 = *(long **)(param_1 + 0x10);
      if (plVar14 == (long *)0x0) goto SUB_057da5fc;
      lVar10 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_06b6e2d8;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,9);
LAB_06b6e2d8:
      uVar6 = (*(code *)*puVar9)(plVar14,uVar6,puVar9[1]);
      lVar10 = param_2[2];
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078310f0);
      func_0x06b9a98c(lVar15,0);
      if (lVar15 == 0) goto SUB_057da5fc;
      *(undefined8 *)(lVar15 + 0x20) = uVar6;
      func_0x032809c4((undefined8 *)(lVar15 + 0x20),uVar6);
      *(undefined8 *)(lVar15 + 0x10) = uStack_e8;
      func_0x032809c4();
      *(undefined4 *)(lVar15 + 0x18) = (undefined4)uStack_f8;
      *(undefined8 *)(lVar15 + 0x28) = uStack_100;
      func_0x032809c4();
      puVar9 = (undefined8 *)PTR_DAT_07831100;
    }
    else {
      if ((lStack_108 == 0) || (plVar14 = *(long **)(lStack_108 + 0x18), plVar14 == (long *)0x0))
      goto SUB_057da5fc;
      lVar10 = *plVar14;
      plVar13 = *(long **)(param_1 + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b6e10c;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07779820,0);
LAB_06b6e10c:
      uVar6 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = uStack_f8;
      if (plVar13 == (long *)0x0) goto SUB_057da5fc;
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c16b0) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06b6e17c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077c16b0,1);
LAB_06b6e17c:
      uVar6 = (*(code *)*puVar9)(plVar13,uVar6,uVar8 & 0xffffffff,0x10,0,0,puVar9[1]);
      uStack_168 = param_2[1];
      uStack_170 = *param_2;
      uStack_158 = param_2[3];
      uStack_160 = param_2[2];
      func_0x06b98e60(&uStack_170,uVar6,uStack_100,0);
      uStack_188 = param_2[1];
      uStack_190 = *param_2;
      uStack_178 = param_2[3];
      uStack_180 = param_2[2];
      func_0x06b98f6c(&uStack_190,uStack_100,0);
      lVar15 = param_2[2];
      lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078310f8);
      func_0x06b9a9d4(lVar10,0);
      if ((lStack_108 == 0) || (lVar10 == 0)) goto SUB_057da5fc;
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lStack_108 + 0x10);
      func_0x032809c4();
      if (lStack_108 == 0) goto SUB_057da5fc;
      *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lStack_108 + 0x18);
      func_0x032809c4();
      *(undefined8 *)(lVar10 + 0x20) = uVar6;
      func_0x032809c4((undefined8 *)(lVar10 + 0x20),uVar6);
      *(undefined8 *)(lVar10 + 0x28) = uStack_100;
      func_0x032809c4();
      if (lVar15 == 0) goto SUB_057da5fc;
      func_0x03ec33e4(lVar15,lVar10,*(undefined8 *)PTR_DAT_07831108);
      lVar10 = param_2[2];
      uVar7 = *(undefined8 *)PTR_DAT_0774f158;
      uVar7 = func_0x06ba3134(uVar6,*(undefined8 *)(param_1 + 0x10),uVar7,uVar7,uVar7,0);
      lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe78);
      func_0x06b9a828(lVar15,uVar6,uVar7,0);
      puVar9 = (undefined8 *)PTR_DAT_0782fea8;
    }
    if (lVar10 == 0) {
SUB_057da5fc:
      func_0x03280cac();
      return;
    }
    func_0x03ec33e4(lVar10,lVar15,*puVar9);
  }
  return;
}


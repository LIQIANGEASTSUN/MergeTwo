/* Ghidra 12.1.2 native pseudocode; RVA 0x6A70CA8; Merger.MergeBoard.Systems.KillSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b70f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b70f70) */
/* WARNING: Removing unreachable block (ram,0x06b71118) */

void Merger_MergeBoard_Systems_KillSystem__Tick(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *extraout_x1;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long *plVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar17 = PTR_DAT_07831278;
  plVar18 = (long *)PTR_DAT_07831270;
  puVar19 = PTR_DAT_07831268;
  puVar10 = PTR_DAT_07831260;
  puVar4 = PTR_DAT_077c3b70;
  puVar3 = PTR_DAT_077c0f38;
  puVar15 = &uStack_d0;
  if ((bRam0000000007e2a6e5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831280);
    func_0x03280a18(PTR_DAT_07831260);
    func_0x03280a18(PTR_DAT_07831278);
    func_0x03280a18(PTR_DAT_077c0958);
    func_0x03280a18(PTR_DAT_077c3b58);
    func_0x03280a18(PTR_DAT_077c3b70);
    func_0x03280a18(PTR_DAT_07831288);
    func_0x03280a18(PTR_DAT_077c0f38);
    func_0x03280a18(PTR_DAT_07831270);
    func_0x03280a18(PTR_DAT_07831268);
    func_0x03280a18(PTR_DAT_07831290);
    bRam0000000007e2a6e5 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uVar6 = func_0x03d19d14(*(undefined8 *)puVar10);
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
  func_0x03e64ba4(&uStack_90,&uStack_70,uVar6,0,*(undefined8 *)puVar19);
  uVar6 = func_0x044867e8(&uStack_90,*plVar18);
  puVar7 = (undefined8 *)func_0x03d5b058(uVar6,*(undefined8 *)puVar17);
  lVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04143c38(lVar8,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_077c3b58;
  puVar3 = PTR_DAT_077c0958;
  if (puVar7 != (undefined8 *)0x0) {
    if (0 < (int)puVar7[3]) {
      puVar19 = (undefined *)0x0;
      puVar10 = (undefined *)(puVar7[3] & 0xffffffff);
      do {
        if (puVar10 <= puVar19) goto LAB_06b70f90;
        plVar18 = (long *)*param_2;
        if (plVar18 == (long *)0x0) goto LAB_06b70f8c;
        lVar11 = *plVar18;
        puVar17 = (undefined *)puVar7[(long)puVar19 * 2 + 4];
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_06b70e84;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar3,2);
LAB_06b70e84:
        (*(code *)*puVar9)(plVar18,puVar17,puVar9[1]);
        if (lVar8 == 0) goto LAB_06b70f8c;
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_06b70f8c;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          *puVar9 = puVar17;
          func_0x032809c4(puVar9,puVar17);
        }
        else {
          func_0x0414446c(lVar8,puVar17,
                          *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        puVar10 = (undefined *)(ulong)*(uint *)(puVar7 + 3);
        puVar19 = puVar19 + 1;
      } while ((long)puVar19 < (long)(int)*(uint *)(puVar7 + 3));
    }
    puVar7 = (undefined8 *)param_2[2];
    puVar17 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831280);
    func_0x06b9a32c(puVar17,0);
    if ((lVar8 != 0) && (puVar17 != (undefined *)0x0)) {
      uVar1 = *(undefined4 *)(lVar8 + 0x18);
      *(long *)(puVar17 + 0x18) = lVar8;
      *(undefined4 *)(puVar17 + 0x10) = uVar1;
      func_0x032809c4(puVar17 + 0x18,lVar8);
      if (puVar7 != (undefined8 *)0x0) {
        func_0x03ec33e4(puVar7,puVar17,*(undefined8 *)PTR_DAT_07831290);
        uStack_c8 = param_2[1];
        uStack_d0 = *param_2;
        uStack_c0 = param_2[2];
        uStack_b8 = param_2[3];
        uVar6 = 0x6b70f70;
        goto SUB_06b70f94;
      }
    }
  }
LAB_06b70f8c:
  func_0x03280cac();
LAB_06b70f90:
  uVar6 = 0x6b70f94;
  func_0x03280cb4();
  puVar15 = (undefined8 *)extraout_x1;
SUB_06b70f94:
  uStack_110 = uVar6;
  puStack_100 = puVar19;
  plStack_f8 = plVar18;
  puStack_f0 = puVar17;
  puStack_e8 = puVar7;
  lStack_e0 = lVar8;
  puStack_d8 = param_2;
  if ((bRam0000000007e2a6e6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831298);
    func_0x03280a18(PTR_DAT_0776d918);
    func_0x03280a18(PTR_DAT_078312a0);
    func_0x03280a18(PTR_DAT_078312a8);
    func_0x03280a18(PTR_DAT_0776d948);
    func_0x03280a18(PTR_DAT_078312b0);
    func_0x03280a18(PTR_DAT_0776d968);
    func_0x03280a18(PTR_DAT_0776d988);
    func_0x03280a18(PTR_DAT_078312b8);
    func_0x03280a18(PTR_DAT_078312c0);
    bRam0000000007e2a6e6 = 1;
  }
  puVar4 = PTR_DAT_078312a8;
  puVar16 = (undefined8 *)PTR_DAT_078312a0;
  puVar3 = PTR_DAT_0776d988;
  puVar19 = PTR_DAT_0776d948;
  puVar9 = (undefined8 *)PTR_DAT_0776d918;
  uStack_120 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  lStack_150 = 0;
  puVar5 = (undefined8 *)0x7e2a000;
  if (*(long *)((long)puVar15 + 0x18) == 0) goto LAB_06b711a0;
  func_0x04fe31ac(&uStack_188,*(long *)((long)puVar15 + 0x18),*(undefined8 *)PTR_DAT_07831298);
  uStack_138 = uStack_180;
  uStack_140 = uStack_188;
  lStack_128 = lStack_170;
  lStack_130 = lStack_178;
  uStack_120 = uStack_168;
  do {
    uVar12 = func_0x0515fbd0(&uStack_140,*(undefined8 *)puVar4);
    lVar8 = lStack_130;
    if ((uVar12 & 1) == 0) {
      func_0x0515fcf0(&uStack_140,*puVar16);
      return;
    }
    if (lStack_128 == 0) goto LAB_06b7119c;
    func_0x053c09a8(&uStack_188,lStack_128,*(undefined8 *)puVar3);
    uStack_158 = uStack_180;
    uStack_160 = uStack_188;
    lStack_150 = lStack_178;
    while (uVar12 = func_0x05115444(&uStack_160,*(undefined8 *)puVar19), (uVar12 & 1) != 0) {
      if (lVar8 == 0) {
        auVar20 = func_0x03280cac();
        puVar15 = (undefined8 *)0x0;
        while( true ) {
          uStack_108 = auVar20._0_8_;
          func_0x05115440(&uStack_160,*puVar9);
          if (puVar15 == (undefined8 *)0x0) break;
          func_0x03280ca4(puVar15);
          func_0x03280ca4(puVar15);
LAB_06b7119c:
          func_0x03280cac();
          puVar5 = puVar16;
          puVar7 = puVar9;
LAB_06b711a0:
          puVar9 = puVar7;
          puVar16 = puVar5;
          auVar20 = func_0x03280cac();
        }
        if (auVar20._8_4_ == 1) {
          plVar18 = (long *)func_0x072ce910();
          lVar8 = *plVar18;
          func_0x072ce920();
          func_0x0515fcf0(&uStack_140,*puVar16);
          if (lVar8 == 0) {
            return;
          }
          uStack_108 = func_0x03280ca4(lVar8);
        }
        func_0x0515fcf0(&uStack_140,*puVar16);
        func_0x03365958(uStack_108);
        func_0x03280ca4(0);
        func_0x02f09514();
        return;
      }
      func_0x06014f5c(lVar8,lStack_150,0);
    }
    puVar15 = (undefined8 *)0x0;
    func_0x05115440(&uStack_160,*puVar9);
  } while( true );
}


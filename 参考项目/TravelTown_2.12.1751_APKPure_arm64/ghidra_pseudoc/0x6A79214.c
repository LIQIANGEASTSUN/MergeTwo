/* Ghidra 12.1.2 native pseudocode; RVA 0x6A79214; Merger.MergeBoard.Systems.ToolSpawningSystem.SpawnTool; status ok */


void Merger_MergeBoard_Systems_ToolSpawningSystem__SpawnTool
               (long param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
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
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uVar7 = func_0x03d19d68(*(undefined8 *)puVar4);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar8,0,*(undefined8 *)puVar2,0);
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  func_0x03e64c44(&uStack_c0,&uStack_80,uVar7,uVar8,*(undefined8 *)puVar5);
  lVar9 = *(long *)puVar6;
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar9 = *(long *)puVar6;
  }
  puVar3 = PTR_DAT_07830e70;
  puVar2 = PTR_DAT_07830e68;
  lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar16 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar9 = *(long *)puVar6;
    }
    uVar7 = **(undefined8 **)(lVar9 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830e58);
    func_0x0534e52c(lVar16,uVar7,*(undefined8 *)PTR_DAT_078317c0,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar10 = lVar16;
    func_0x032809c4(plVar10,lVar16);
  }
  func_0x04486da0(&uStack_80,&uStack_a0,lVar16,*(undefined8 *)puVar3);
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uVar7 = func_0x04486df8(&uStack_a0,*(undefined8 *)puVar2);
  lVar9 = *(long *)puVar6;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c(lVar9);
    lVar9 = *(long *)puVar6;
  }
  puVar2 = PTR_DAT_07830e48;
  lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar16 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c(lVar9);
      lVar9 = *(long *)puVar6;
    }
    uVar8 = **(undefined8 **)(lVar9 + 0xb8);
    lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830e50);
    func_0x0534e8c0(lVar16,uVar8,*(undefined8 *)PTR_DAT_078317c8,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
    *plVar10 = lVar16;
    func_0x032809c4(plVar10,lVar16);
  }
  uVar7 = func_0x03d4d780(uVar7,lVar16,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0782f3d8;
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0782f3d8) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_06b79580;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0782f3d8,3);
LAB_06b79580:
    uVar7 = (*(code *)*puVar11)(plVar10,uVar7,puVar11[1]);
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      uVar8 = param_4[2];
      uVar13 = param_4[3];
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06b795f0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,2);
LAB_06b795f0:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,uVar7,uVar8,uVar13,puVar11[1]);
      if (plVar10 != (long *)0x0) {
        lVar9 = *plVar10;
        plVar17 = *(long **)(param_1 + 0x18);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779820) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06b79668;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07779820,0);
LAB_06b79668:
        uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar3 = PTR_DAT_0782fe80;
        puVar2 = PTR_DAT_0774f158;
        if (plVar17 != (long *)0x0) {
          lVar9 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c16b0) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_06b796e4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077c16b0,1);
LAB_06b796e4:
          uVar7 = (*(code *)*puVar11)(plVar17,uVar7,param_3,8,0,0,puVar11[1]);
          uStack_f8 = param_2[1];
          uStack_100 = *param_2;
          uStack_e8 = param_2[3];
          uStack_f0 = param_2[2];
          func_0x06b98e60(&uStack_100,uVar7,*param_4,0);
          uVar8 = *(undefined8 *)puVar2;
          uVar8 = func_0x06ba3134(*param_4,*(undefined8 *)(param_1 + 0x28),uVar8,uVar8,uVar8,0);
          uVar13 = *(undefined8 *)puVar2;
          uVar13 = func_0x06ba3134(*param_4,*(undefined8 *)(param_1 + 0x28),uVar13,uVar13,uVar13,0);
          lVar9 = param_2[2];
          uVar18 = *param_4;
          uVar1 = *(undefined4 *)(param_4 + 1);
          uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
          func_0x06b9aa90(uVar12,uVar18,uVar7,uVar1,param_3,0,uVar8,uVar13,0,0,0,0);
          puVar2 = PTR_DAT_0782fe78;
          if (lVar9 != 0) {
            func_0x03ec33e4(lVar9,uVar12,*(undefined8 *)PTR_DAT_0782feb0);
            lVar9 = param_2[2];
            uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
            func_0x06b9a828(uVar8,uVar7,uVar13,0);
            if (lVar9 != 0) {
              func_0x03ec33e4(lVar9,uVar8,*(undefined8 *)PTR_DAT_0782fea8);
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


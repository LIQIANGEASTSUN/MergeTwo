/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6A45C; Merger.MergeBoard.Systems.ImmediateToolsSystem.CollectSingleTool; status ok */


void Merger_MergeBoard_Systems_ImmediateToolsSystem__CollectSingleTool
               (long param_1,undefined8 *param_2,long *param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar10 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((bRam0000000007e2a6be & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07830ae8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07830e90);
    func_0x03280a18(PTR_DAT_07830e98);
    bRam0000000007e2a6be = 1;
  }
  plVar15 = *(long **)(param_1 + 0x18);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar16 = *param_6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_06b6a534;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,9);
LAB_06b6a534:
    plVar10 = (long *)puVar8[1];
    uVar16 = (*(code *)*puVar8)(plVar15,uVar16);
    auVar18 = func_0x06b9c2a4(&uStack_40,0);
    puVar3 = PTR_DAT_07830e90;
    puVar2 = PTR_DAT_077c0ec8;
    if (param_3 != (long *)0x0) {
      func_0x03d1d7ec(param_3,auVar18._0_8_,auVar18._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      func_0x06b98f6c(&uStack_60,param_3,0);
      lVar11 = param_2[2];
      uVar13 = func_0x03d1ae90(param_3,*(undefined8 *)puVar2);
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
      plVar10 = (long *)(uVar13 & 0xffffffff);
      func_0x06b9a694(uVar9,param_3,plVar10,uVar16,0);
      if (lVar11 != 0) {
        func_0x03ec33e4(lVar11,uVar9,*(undefined8 *)PTR_DAT_07830e98);
        return;
      }
    }
  }
  auVar18 = func_0x03280cac();
  plVar15 = auVar18._8_8_;
  lVar11 = auVar18._0_8_;
  if ((bRam0000000007e2a6bf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ea0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0782f3d8);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a6bf = 1;
  }
  puVar2 = PTR_DAT_07779820;
  if (plVar15 != (long *)0x0) {
    lVar12 = *plVar15;
    plVar17 = *(long **)(lVar11 + 0x18);
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07779820) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b6a6d0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07779820,0);
LAB_06b6a6d0:
    uVar16 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    puVar3 = PTR_DAT_0777a498;
    if (plVar17 != (long *)0x0) {
      lVar12 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_06b6a73c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,4);
LAB_06b6a73c:
      uVar16 = (*(code *)*puVar8)(plVar17,uVar16,puVar8[1]);
      puVar4 = PTR_DAT_0782f3d8;
      plVar17 = *(long **)(lVar11 + 0x10);
      if (plVar17 != (long *)0x0) {
        lVar12 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0782f3d8) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06b6a7ac;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0782f3d8,0);
LAB_06b6a7ac:
        uVar5 = (*(code *)*puVar8)(plVar17,uVar16,puVar8[1]);
        lVar12 = *plVar15;
        plVar17 = *(long **)(lVar11 + 0x18);
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06b6a810;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar2,0);
LAB_06b6a810:
        uVar16 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
                goto LAB_06b6a874;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar3,0x19);
LAB_06b6a874:
          uVar6 = (*(code *)*puVar8)(plVar17,uVar16,puVar8[1]);
          if (*plVar10 != 0) {
            lVar12 = func_0x04f61e04(*plVar10,uVar5,*(undefined8 *)PTR_DAT_07830ea0);
            if ((lVar12 != 0) && (plVar10 = *(long **)(lVar11 + 0x10), plVar10 != (long *)0x0)) {
              lVar11 = *plVar10;
              iVar1 = *(int *)(lVar12 + 0x10);
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                    goto LAB_06b6a90c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar8 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar4,4);
LAB_06b6a90c:
              iVar7 = (*(code *)*puVar8)(plVar10,uVar6,puVar8[1]);
              *(int *)(lVar12 + 0x10) = iVar7 + iVar1;
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


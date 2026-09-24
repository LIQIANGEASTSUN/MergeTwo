/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6A610; Merger.MergeBoard.Systems.ImmediateToolsSystem.UpdateToolProgressionData; status ok */


void Merger_MergeBoard_Systems_ImmediateToolsSystem__UpdateToolProgressionData
               (long param_1,long *param_2,long *param_3)

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
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  
  if ((bRam0000000007e2a6bf & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ea0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0782f3d8);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2a6bf = 1;
  }
  puVar2 = PTR_DAT_07779820;
  if (param_2 != (long *)0x0) {
    lVar10 = *param_2;
    plVar14 = *(long **)(param_1 + 0x18);
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b6a6d0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b6a6d0:
    uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
    puVar3 = PTR_DAT_0777a498;
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_06b6a73c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,4);
LAB_06b6a73c:
      uVar9 = (*(code *)*puVar8)(plVar14,uVar9,puVar8[1]);
      puVar4 = PTR_DAT_0782f3d8;
      plVar14 = *(long **)(param_1 + 0x10);
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0782f3d8) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06b6a7ac;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0782f3d8,0);
LAB_06b6a7ac:
        uVar5 = (*(code *)*puVar8)(plVar14,uVar9,puVar8[1]);
        lVar10 = *param_2;
        plVar14 = *(long **)(param_1 + 0x18);
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06b6a810;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b6a810:
        uVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
        if (plVar14 != (long *)0x0) {
          lVar10 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x19) * 0x10 + 0x138);
                goto LAB_06b6a874;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar3,0x19);
LAB_06b6a874:
          uVar6 = (*(code *)*puVar8)(plVar14,uVar9,puVar8[1]);
          if (*param_3 != 0) {
            lVar10 = func_0x04f61e04(*param_3,uVar5,*(undefined8 *)PTR_DAT_07830ea0);
            if ((lVar10 != 0) && (plVar14 = *(long **)(param_1 + 0x10), plVar14 != (long *)0x0)) {
              lVar11 = *plVar14;
              iVar1 = *(int *)(lVar10 + 0x10);
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                    goto LAB_06b6a90c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar4,4);
LAB_06b6a90c:
              iVar7 = (*(code *)*puVar8)(plVar14,uVar6,puVar8[1]);
              *(int *)(lVar10 + 0x10) = iVar7 + iVar1;
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


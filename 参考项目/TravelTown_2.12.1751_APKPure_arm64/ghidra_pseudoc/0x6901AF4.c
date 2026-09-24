/* Ghidra 12.1.2 native pseudocode; RVA 0x6901AF4; MergeEngine.ECS.Components.InteractionTracking.ItemSpawningTrackingData.SetLifeTime; status ok */


ulong MergeEngine_ECS_Components_InteractionTracking_ItemSpawningTrackingData__SetLifeTime
                (undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *extraout_x1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uStack_28;
  
  if ((bRam0000000007e298f3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a600);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e298f3 = 1;
  }
  puVar2 = PTR_DAT_0777e548;
  uStack_28 = 0;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06a01ba0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777e548,1);
LAB_06a01ba0:
    lVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0x10) == '\0') {
        return 0;
      }
      lVar9 = *param_2;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06a01c08;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(param_2,lVar8,1);
LAB_06a01c08:
      lVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x28) == '\0') {
          return 0;
        }
        lVar9 = *param_2;
        lVar8 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_06a01c78;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(param_2,lVar8,1);
LAB_06a01c78:
        lVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
        if ((lVar8 != 0) && (param_3 != (long *)0x0)) {
          lVar9 = *param_3;
          iVar5 = *(int *)(lVar8 + 0x2c);
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a600) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
                goto LAB_06a01ce8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,0x14);
LAB_06a01ce8:
          iVar4 = (*(code *)*puVar7)(param_3,puVar7[1]);
          func_0x0437b6e0(&uStack_28,iVar5 - iVar4,*(undefined8 *)PTR_DAT_07750da0);
          return uStack_28;
        }
      }
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e298f4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a978);
    func_0x03280a18(PTR_DAT_0777a600);
    bRam0000000007e298f4 = 1;
  }
  puVar2 = PTR_DAT_0777a600;
  if (extraout_x1 != (long *)0x0) {
    lVar8 = *extraout_x1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a600) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_06a01dbc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777a600,8);
LAB_06a01dbc:
    puVar3 = PTR_DAT_0777a978;
    iVar5 = (*(code *)*puVar7)(extraout_x1,puVar7[1]);
    lVar9 = *extraout_x1;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a01e20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(extraout_x1,lVar8,0);
LAB_06a01e20:
    iVar4 = (*(code *)*puVar7)(extraout_x1,puVar7[1]);
    lVar8 = *extraout_x1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06a01e80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar3,1);
LAB_06a01e80:
    lVar8 = (*(code *)*puVar7)(extraout_x1,puVar7[1]);
    if (lVar8 != 0) {
      lVar9 = *extraout_x1;
      iVar1 = *(int *)(lVar8 + 0x34);
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06a01ee0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(extraout_x1,lVar8,0);
LAB_06a01ee0:
      iVar6 = (*(code *)*puVar7)(extraout_x1,puVar7[1]);
      return (ulong)(uint)((iVar4 * iVar5 - iVar1) + iVar6);
    }
  }
  uVar10 = func_0x03280cac();
  puVar2 = PTR_DAT_078268a0;
  if ((bRam0000000007e298f5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078268a0);
    bRam0000000007e298f5 = 1;
  }
  *(undefined8 *)(uVar10 + 0x38) = *(undefined8 *)puVar2;
  func_0x032809c4();
  return uVar10;
}


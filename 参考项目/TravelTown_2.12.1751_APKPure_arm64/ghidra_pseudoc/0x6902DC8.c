/* Ghidra 12.1.2 native pseudocode; RVA 0x6902DC8; MergeEngine.ECS.Components.Board.BoardItemCountComponent.RemoveItem; status ok */


void MergeEngine_ECS_Components_Board_BoardItemCountComponent__RemoveItem
               (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  
  if ((bRam0000000007e2990c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990c = 1;
  }
  puVar2 = PTR_DAT_07779820;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    lVar10 = *(long *)(param_1 + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06a02e7c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a02e7c:
    uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    puVar3 = PTR_DAT_0777a238;
    puVar1 = PTR_DAT_0774e618;
    if (lVar10 != 0) {
      iVar4 = func_0x04fb256c(lVar10,uVar6,*(undefined8 *)PTR_DAT_0777a238);
      func_0x04fb25d8(lVar10,uVar6,iVar4 + -1,*(undefined8 *)puVar1);
      if (param_3 != 0) {
        uVar8 = func_0x069fd714(param_3);
        if ((uVar8 & 1) == 0) {
          lVar10 = *param_2;
          lVar11 = *(long *)(param_1 + 0x38);
          lVar7 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06a02f24;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(param_2,lVar7,0);
LAB_06a02f24:
          uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
          if (lVar11 == 0) goto LAB_06a0302c;
          iVar4 = func_0x04fb256c(lVar11,uVar6,*(undefined8 *)puVar3);
          func_0x04fb25d8(lVar11,uVar6,iVar4 + -1,*(undefined8 *)puVar1);
        }
        if ((*(char *)(param_3 + 0x33) == '\0') && (*(int *)(param_3 + 0x44) < 1)) {
          lVar10 = *param_2;
          lVar11 = *(long *)(param_1 + 0x40);
          lVar7 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06a02fc0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(param_2,lVar7,0);
LAB_06a02fc0:
          uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
          if (lVar11 == 0) goto LAB_06a0302c;
          iVar4 = func_0x04fb256c(lVar11,uVar6,*(undefined8 *)puVar3);
          func_0x04fb25d8(lVar11,uVar6,iVar4 + -1,*(undefined8 *)puVar1);
        }
        if (*(char *)(param_3 + 0x31) != '\0') {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        lVar7 = *(long *)(param_1 + 0x28);
        if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(lVar7 + 0x40),param_2,*(undefined8 *)(lVar7 + 0x28));
          return;
        }
        return;
      }
    }
  }
LAB_06a0302c:
  lVar7 = func_0x03280cac();
  *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + -1;
  return;
}


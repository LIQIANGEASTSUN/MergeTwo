/* Ghidra 12.1.2 native pseudocode; RVA 0x6902908; MergeEngine.ECS.Components.Board.BoardItemCountComponent.AddItem; status ok */


void MergeEngine_ECS_Components_Board_BoardItemCountComponent__AddItem
               (long param_1,long *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 unaff_x30;
  undefined1 auVar12 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  if ((bRam0000000007e2990b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07756590);
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990b = 1;
  }
  puVar3 = PTR_DAT_07779820;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    lVar11 = *(long *)(param_1 + 0x30);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06a029d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a029d4:
    uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (lVar11 != 0) {
      uVar9 = func_0x04fb27e0(lVar11,uVar7,*(undefined8 *)PTR_DAT_0777a230);
      if ((uVar9 & 1) == 0) {
        lVar8 = *param_2;
        lVar11 = *(long *)(param_1 + 0x30);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06a02a50;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0);
LAB_06a02a50:
        uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
        puVar2 = PTR_DAT_07756590;
        if (lVar11 != 0) {
          func_0x04fb25ec(lVar11,uVar7,0,*(undefined8 *)PTR_DAT_07756590);
          lVar8 = *param_2;
          lVar11 = *(long *)(param_1 + 0x38);
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06a02acc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0);
LAB_06a02acc:
          uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
          if (lVar11 != 0) {
            func_0x04fb25ec(lVar11,uVar7,0,*(undefined8 *)puVar2);
            lVar8 = *param_2;
            lVar11 = *(long *)(param_1 + 0x40);
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_06a02b40;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0);
LAB_06a02b40:
            uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
            if (lVar11 != 0) {
              func_0x04fb25ec(lVar11,uVar7,0,*(undefined8 *)puVar2);
              goto LAB_06a02b64;
            }
          }
        }
      }
      else {
LAB_06a02b64:
        lVar8 = *param_2;
        lVar11 = *(long *)(param_1 + 0x30);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06a02bb4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0);
LAB_06a02bb4:
        uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
        puVar4 = PTR_DAT_0777a238;
        puVar2 = PTR_DAT_0774e618;
        if (lVar11 != 0) {
          iVar5 = func_0x04fb256c(lVar11,uVar7,*(undefined8 *)PTR_DAT_0777a238);
          func_0x04fb25d8(lVar11,uVar7,iVar5 + 1,*(undefined8 *)puVar2);
          if (param_3 != 0) {
            uVar9 = func_0x069fd714(param_3);
            if ((uVar9 & 1) == 0) {
              lVar8 = *param_2;
              lVar11 = *(long *)(param_1 + 0x38);
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_06a02c5c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0);
LAB_06a02c5c:
              uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
              if (lVar11 == 0) goto LAB_06a02d6c;
              iVar5 = func_0x04fb256c(lVar11,uVar7,*(undefined8 *)puVar4);
              func_0x04fb25d8(lVar11,uVar7,iVar5 + 1,*(undefined8 *)puVar2);
            }
            if (((*(char *)(param_3 + 0x33) == '\0') && (*(int *)(param_3 + 0x44) < 1)) &&
               (*(char *)(param_3 + 0x31) == '\0')) {
              lVar8 = *param_2;
              lVar11 = *(long *)(param_1 + 0x40);
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_06a02d00;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0);
LAB_06a02d00:
              uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
              if (lVar11 == 0) goto LAB_06a02d6c;
              iVar5 = func_0x04fb256c(lVar11,uVar7,*(undefined8 *)puVar4);
              func_0x04fb25d8(lVar11,uVar7,iVar5 + 1,*(undefined8 *)puVar2);
            }
            if (*(char *)(param_3 + 0x31) != '\0') {
              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
              auVar12 = auVar1;
            }
            goto LAB_06a02d70;
          }
        }
      }
    }
  }
LAB_06a02d6c:
  unaff_x30 = 0x6a02d70;
  auVar12 = func_0x03280cac();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
LAB_06a02d70:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long **)((long)register0x00000008 + -8) = unaff_x19;
  lVar8 = *(long *)(auVar12._0_8_ + 0x20);
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  }
  lVar8 = *(long *)(auVar12._0_8_ + 0x28);
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x06a02db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x18))
            (*(undefined8 *)(lVar8 + 0x40),auVar12._8_8_,*(undefined8 *)(lVar8 + 0x28));
  return;
}


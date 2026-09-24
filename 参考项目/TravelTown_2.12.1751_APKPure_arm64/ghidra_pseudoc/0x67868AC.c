/* Ghidra 12.1.2 native pseudocode; RVA 0x67868AC; MergeEngine.ECS.Systems.Board.SplitSystem.BuildAvailableSpaceNotifications; status ok */


long MergeEngine_ECS_Systems_Board_SplitSystem__BuildAvailableSpaceNotifications
               (long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar4 = PTR_DAT_077e71c8;
  puVar2 = PTR_DAT_077e71c0;
  if ((bRam0000000007e28d18 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_07778fa0);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28d18 = 1;
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04143c38(lVar5,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0777e4a0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (plVar11 = *(long **)(param_1 + 0x48), plVar11 != (long *)0x0)) {
    lVar7 = *plVar11;
    uVar13 = *(undefined8 *)(param_2 + 0x48);
    uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_07778fa0;
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e4a0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068869dc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777e4a0,0);
LAB_068869dc:
    uVar12 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,0,puVar6[1]);
    puVar4 = PTR_DAT_077e71b8;
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)PTR_DAT_077e71b8;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar5,uVar12,
                          *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        if ((*(long *)(param_2 + 0x18) != 0) &&
           (plVar11 = *(long **)(param_1 + 0x48), plVar11 != (long *)0x0)) {
          lVar7 = *plVar11;
          uVar13 = *(undefined8 *)(param_2 + 0x38);
          uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          uVar14 = *(undefined8 *)PTR_DAT_0776b160;
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06886acc;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar2,0);
LAB_06886acc:
          uVar12 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,0,puVar6[1]);
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar4;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
              func_0x032809c4();
            }
            else {
              func_0x0414446c(lVar5,uVar12,
                              *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            puVar3 = PTR_DAT_0777e5f8;
            if ((param_3 != 0) && (plVar11 = *(long **)(param_1 + 0x48), plVar11 != (long *)0x0)) {
              lVar7 = *plVar11;
              uVar13 = *(undefined8 *)(param_2 + 0x40);
              uVar12 = *(undefined8 *)(param_3 + 0x10);
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              uVar14 = *(undefined8 *)PTR_DAT_0777e5f8;
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_06886bac;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar2,0);
LAB_06886bac:
              uVar12 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,0,puVar6[1]);
              lVar7 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar4;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                  func_0x032809c4();
                }
                else {
                  func_0x0414446c(lVar5,uVar12,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
                  ;
                }
                if ((param_4 != 0) && (plVar11 = *(long **)(param_1 + 0x48), plVar11 != (long *)0x0)
                   ) {
                  lVar7 = *plVar11;
                  uVar13 = *(undefined8 *)(param_2 + 0x40);
                  uVar12 = *(undefined8 *)(param_4 + 0x10);
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  uVar14 = *(undefined8 *)puVar3;
                  if (uVar8 != 0) {
                    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                        puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                        goto LAB_06886c84;
                      }
                      uVar8 = uVar8 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar2,0);
LAB_06886c84:
                  uVar12 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,0,puVar6[1]);
                  lVar7 = *(long *)(lVar5 + 0x10);
                  lVar9 = *(long *)puVar4;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                      func_0x032809c4();
                    }
                    else {
                      func_0x0414446c(lVar5,uVar12,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    }
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar5 = func_0x03280cac();
  return lVar5;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6786520; MergeEngine.ECS.Systems.Board.SplitSystem.BuildBoardFullNotifications; status ok */


long MergeEngine_ECS_Systems_Board_SplitSystem__BuildBoardFullNotifications
               (long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  puVar4 = PTR_DAT_077e71c8;
  puVar2 = PTR_DAT_077e71c0;
  lVar14 = param_3;
  if ((bRam0000000007e28d19 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_07778fa0);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28d19 = 1;
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04143c38(lVar5,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0777e4a0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) &&
     (plVar13 = *(long **)(param_1 + 0x48), plVar13 != (long *)0x0)) {
    lVar7 = *plVar13;
    lVar14 = *(long *)(param_2 + 0x38);
    param_4 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_0776b160;
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e4a0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06886648;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777e4a0,0);
LAB_06886648:
    uVar15 = (*(code *)*puVar6)(plVar13,uVar15,lVar14,param_4,0,puVar6[1]);
    puVar4 = PTR_DAT_077e71b8;
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar10 = *(long *)PTR_DAT_077e71b8;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          func_0x032809c4();
        }
        else {
          lVar14 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          func_0x0414446c(lVar5);
        }
        if ((param_3 != 0) && (plVar13 = *(long **)(param_1 + 0x48), plVar13 != (long *)0x0)) {
          lVar10 = *plVar13;
          lVar14 = *(long *)(param_2 + 0x40);
          param_4 = *(long *)(param_3 + 0x10);
          lVar7 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uVar15 = *(undefined8 *)PTR_DAT_0777e5f8;
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06886734;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar13,lVar7,0);
LAB_06886734:
          uVar15 = (*(code *)*puVar6)(plVar13,uVar15,lVar14,param_4,0,puVar6[1]);
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar10 = *(long *)puVar4;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
              func_0x032809c4();
            }
            else {
              lVar14 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
              func_0x0414446c(lVar5);
            }
            if ((*(long *)(param_2 + 0x10) != 0) &&
               (plVar13 = *(long **)(param_1 + 0x48), plVar13 != (long *)0x0)) {
              lVar10 = *plVar13;
              lVar14 = *(long *)(param_2 + 0x48);
              param_4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
              lVar7 = *(long *)puVar2;
              uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
              uVar15 = *(undefined8 *)PTR_DAT_07778fa0;
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_06886818;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar13,lVar7,0);
LAB_06886818:
              uVar15 = (*(code *)*puVar6)(plVar13,uVar15,lVar14,param_4,0,puVar6[1]);
              lVar7 = *(long *)(lVar5 + 0x10);
              lVar10 = *(long *)puVar4;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
                  func_0x032809c4();
                }
                else {
                  func_0x0414446c(lVar5,uVar15,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                                 );
                }
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
  auVar18 = func_0x03280cac();
  puVar4 = PTR_DAT_077e71c8;
  puVar2 = PTR_DAT_077e71c0;
  lVar7 = auVar18._8_8_;
  lVar5 = auVar18._0_8_;
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
  lVar10 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04143c38(lVar10,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0777e4a0;
  if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) &&
     (plVar13 = *(long **)(lVar5 + 0x48), plVar13 != (long *)0x0)) {
    lVar8 = *plVar13;
    uVar16 = *(undefined8 *)(lVar7 + 0x48);
    uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar17 = *(undefined8 *)PTR_DAT_07778fa0;
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e4a0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_068869dc;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777e4a0,0);
LAB_068869dc:
    uVar15 = (*(code *)*puVar6)(plVar13,uVar17,uVar16,uVar15,0,puVar6[1]);
    puVar4 = PTR_DAT_077e71b8;
    if (lVar10 != 0) {
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar11 = *(long *)PTR_DAT_077e71b8;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar10,uVar15,
                          *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if ((*(long *)(lVar7 + 0x18) != 0) &&
           (plVar13 = *(long **)(lVar5 + 0x48), plVar13 != (long *)0x0)) {
          lVar8 = *plVar13;
          uVar16 = *(undefined8 *)(lVar7 + 0x38);
          uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10);
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          uVar17 = *(undefined8 *)PTR_DAT_0776b160;
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06886acc;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,0);
LAB_06886acc:
          uVar15 = (*(code *)*puVar6)(plVar13,uVar17,uVar16,uVar15,0,puVar6[1]);
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
              func_0x032809c4();
            }
            else {
              func_0x0414446c(lVar10,uVar15,
                              *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            puVar3 = PTR_DAT_0777e5f8;
            if ((lVar14 != 0) && (plVar13 = *(long **)(lVar5 + 0x48), plVar13 != (long *)0x0)) {
              lVar8 = *plVar13;
              uVar16 = *(undefined8 *)(lVar7 + 0x40);
              uVar15 = *(undefined8 *)(lVar14 + 0x10);
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              uVar17 = *(undefined8 *)PTR_DAT_0777e5f8;
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_06886bac;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,0);
LAB_06886bac:
              uVar15 = (*(code *)*puVar6)(plVar13,uVar17,uVar16,uVar15,0,puVar6[1]);
              lVar14 = *(long *)(lVar10 + 0x10);
              lVar8 = *(long *)puVar4;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar14 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
                  func_0x032809c4();
                }
                else {
                  func_0x0414446c(lVar10,uVar15,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
                  ;
                }
                if ((param_4 != 0) && (plVar13 = *(long **)(lVar5 + 0x48), plVar13 != (long *)0x0))
                {
                  lVar14 = *plVar13;
                  uVar16 = *(undefined8 *)(lVar7 + 0x40);
                  uVar15 = *(undefined8 *)(param_4 + 0x10);
                  uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  uVar17 = *(undefined8 *)puVar3;
                  if (uVar9 != 0) {
                    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                        puVar6 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
                        goto LAB_06886c84;
                      }
                      uVar9 = uVar9 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,0);
LAB_06886c84:
                  uVar15 = (*(code *)*puVar6)(plVar13,uVar17,uVar16,uVar15,0,puVar6[1]);
                  lVar14 = *(long *)(lVar10 + 0x10);
                  lVar5 = *(long *)puVar4;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar14 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
                      func_0x032809c4();
                    }
                    else {
                      func_0x0414446c(lVar10,uVar15,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    return lVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar14 = func_0x03280cac();
  return lVar14;
}


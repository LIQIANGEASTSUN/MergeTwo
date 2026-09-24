/* Ghidra 12.1.2 native pseudocode; RVA 0x67872A8; MergeEngine.ECS.Systems.Board.StackingSystem.IsStacking; status ok */


ulong MergeEngine_ECS_Systems_Board_StackingSystem__IsStacking
                (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_c0 [16];
  
  if ((bRam0000000007e28d20 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e69c8);
    bRam0000000007e28d20 = 1;
  }
  if (param_2 != 0) {
    lVar6 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e69c8);
    return (ulong)(lVar6 != 0);
  }
  auVar23 = func_0x03280cac();
  lVar6 = param_4;
  uVar7 = func_0x06885344();
  if (((uVar7 & 1) == 0) ||
     (lVar18 = param_3,
     uVar7 = MergeEngine_ECS_Systems_Board_StackingSystem__CanCombineItems
                       (auVar23._0_8_,auVar23._8_8_), (uVar7 & 1) == 0)) {
    uVar17 = 0;
  }
  else {
    if (param_3 == 0) {
      auVar23 = func_0x03280cac();
      lVar14 = auVar23._8_8_;
      lVar8 = auVar23._0_8_;
      if ((bRam0000000007e28d1e & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e69c8);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_0777e4a0);
        func_0x03280a18(PTR_DAT_078080f0);
        func_0x03280a18(PTR_DAT_07810170);
        func_0x03280a18(PTR_DAT_0777e4a8);
        func_0x03280a18(PTR_DAT_077cc918);
        func_0x03280a18(PTR_DAT_077cc910);
        func_0x03280a18(PTR_DAT_07810178);
        func_0x03280a18(PTR_DAT_07808118);
        func_0x03280a18(PTR_DAT_07810180);
        func_0x03280a18(PTR_DAT_07810188);
        func_0x03280a18(PTR_DAT_07778fa0);
        func_0x03280a18(PTR_DAT_0776b160);
        bRam0000000007e28d1e = 1;
      }
      auStack_c0._0_8_ = 0;
      auStack_c0._8_8_ = 0;
      plVar19 = *(long **)(lVar8 + 0x40);
      auVar23 = ZEXT816(0);
      if (plVar19 != (long *)0x0) {
        lVar13 = *plVar19;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
              goto LAB_068874ec;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777a498,0x14);
LAB_068874ec:
        uVar10 = (*(code *)*puVar9)(plVar19,lVar14,puVar9[1]);
        auStack_c0 = func_0x0578e2a8(0);
        uVar11 = func_0x0579043c(auStack_c0,0);
        puVar2 = PTR_DAT_077e69c8;
        auVar23 = auStack_c0;
        if (lVar14 != 0) {
          lVar13 = func_0x03ced81c(lVar14,*(undefined8 *)PTR_DAT_077e69c8);
          auVar23 = auStack_c0;
          if (lVar18 != 0) {
            lVar12 = func_0x03ced81c(lVar18,*(undefined8 *)puVar2);
            if (lVar13 == 0) {
              uVar5 = 1;
            }
            else {
              uVar5 = *(undefined4 *)(lVar13 + 0x28);
            }
            plVar19 = *(long **)(lVar8 + 0x60);
            auVar23 = auStack_c0;
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x218))
                        (plVar19,lVar14,*(undefined8 *)PTR_DAT_07810188,1,1,
                         *(undefined8 *)(*plVar19 + 0x220));
              auVar23 = auStack_c0;
              if (lVar12 != 0) {
                func_0x069fdebc(lVar12,uVar5,0);
                puVar2 = PTR_DAT_0777e4a0;
                plVar19 = *(long **)(lVar8 + 0x48);
                auVar23 = auStack_c0;
                if (plVar19 != (long *)0x0) {
                  lVar13 = *plVar19;
                  uVar20 = *(undefined8 *)(lVar14 + 0x10);
                  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  uVar21 = *(undefined8 *)PTR_DAT_0776b160;
                  if (uVar7 != 0) {
                    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_06887614;
                      }
                      uVar7 = uVar7 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e4a0,0);
LAB_06887614:
                  uVar20 = (*(code *)*puVar9)(plVar19,uVar21,uVar10,uVar20,0,puVar9[1]);
                  puVar4 = PTR_DAT_077cc918;
                  puVar3 = PTR_DAT_077cc910;
                  plVar19 = *(long **)(lVar8 + 0x48);
                  auVar23 = auStack_c0;
                  if (plVar19 != (long *)0x0) {
                    lVar14 = *plVar19;
                    uVar21 = *(undefined8 *)(lVar18 + 0x10);
                    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    uVar22 = *(undefined8 *)PTR_DAT_07778fa0;
                    if (uVar7 != 0) {
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_068876a8;
                        }
                        uVar7 = uVar7 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar9 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar2,0);
LAB_068876a8:
                    uVar21 = (*(code *)*puVar9)(plVar19,uVar22,uVar10,uVar21,0,puVar9[1]);
                    lVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
                    func_0x04143c38(lVar14,*(undefined8 *)puVar4);
                    puVar2 = PTR_DAT_0777e4a8;
                    auVar23 = auStack_c0;
                    if (lVar14 != 0) {
                      lVar13 = *(long *)(lVar14 + 0x10);
                      lVar15 = *(long *)PTR_DAT_0777e4a8;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar17 = *(uint *)(lVar14 + 0x18);
                        if (uVar17 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                          puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
                          *puVar9 = uVar20;
                          func_0x032809c4(puVar9,uVar20);
                        }
                        else {
                          func_0x0414446c(lVar14,uVar20,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = *(long *)(lVar14 + 0x10);
                        lVar15 = *(long *)puVar2;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        auVar23 = auStack_c0;
                        if (lVar13 != 0) {
                          uVar17 = *(uint *)(lVar14 + 0x18);
                          if (uVar17 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                            puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
                            *puVar9 = uVar21;
                            func_0x032809c4(puVar9,uVar21);
                          }
                          else {
                            func_0x0414446c(lVar14,uVar21,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                          puVar2 = PTR_DAT_07810170;
                          auVar23 = auStack_c0;
                          if (*(long *)(lVar8 + 0x68) != 0) {
                            func_0x03e40df4(*(long *)(lVar8 + 0x68),lVar14,uVar11,
                                            *(undefined8 *)PTR_DAT_07810178);
                            lVar14 = *(long *)(lVar8 + 0x28);
                            uVar21 = *(undefined8 *)(lVar18 + 0x30);
                            uVar1 = *(undefined4 *)(lVar12 + 0x28);
                            uVar20 = func_0x03280ca0(*(undefined8 *)puVar2);
                            func_0x0686bba0(uVar20,uVar21,uVar5,uVar1,0);
                            auVar23 = auStack_c0;
                            if (lVar14 != 0) {
                              func_0x03ea4d6c(lVar14,uVar20,*(undefined8 *)PTR_DAT_07810180);
                              puVar2 = PTR_DAT_078080f0;
                              auVar23 = auStack_c0;
                              if (*(long *)(lVar8 + 0x60) != 0) {
                                lVar18 = *(long *)(lVar8 + 0x28);
                                uVar5 = func_0x067675f0(*(long *)(lVar8 + 0x60),0);
                                uVar20 = func_0x03280ca0(*(undefined8 *)puVar2);
                                func_0x0686ba84(uVar20,uVar10,uVar10,uVar10,0,0,0,0,uVar5,uVar11,
                                                lVar6,0);
                                auVar23 = auStack_c0;
                                if (lVar18 != 0) {
                                  uVar7 = func_0x03ea4d6c(lVar18,uVar20,
                                                          *(undefined8 *)PTR_DAT_07808118);
                                  return uVar7;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      auStack_c0 = auVar23;
      uVar7 = func_0x03280cac();
      return uVar7;
    }
    MergeEngine_ECS_Systems_Board_StackingSystem__StackItems
              (auVar23._0_8_,auVar23._8_8_,param_3,*(undefined8 *)(param_3 + 0x30));
    if (param_4 == 0) {
      uVar17 = 1;
    }
    else {
      uVar17 = 1;
      (**(code **)(param_4 + 0x18))
                (*(undefined8 *)(param_4 + 0x40),1,1,0,*(undefined8 *)(param_4 + 0x28));
    }
  }
  return (ulong)uVar17;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6787240; MergeEngine.ECS.Systems.Board.StackingSystem.IsLocked; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Board_StackingSystem__IsLocked
          (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_e0 [16];
  
  if ((bRam0000000007e28d1f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    bRam0000000007e28d1f = 1;
  }
  if (param_2 != 0) {
    auVar24 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638);
    lVar12 = auVar24._0_8_;
    if (lVar12 == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar24._8_8_;
      return auVar2 << 0x40;
    }
    if ((((*(char *)(lVar12 + 0x30) == '\0') && (*(char *)(lVar12 + 0x33) == '\0')) &&
        (*(int *)(lVar12 + 0x44) < 1)) &&
       (((*(char *)(lVar12 + 0x31) == '\0' && (*(char *)(lVar12 + 0x78) == '\0')) &&
        (*(char *)(lVar12 + 0x79) == '\0')))) {
      return ZEXT116(*(char *)(lVar12 + 0x32) != '\0');
    }
    return ZEXT816(1);
  }
  func_0x03280cac();
  if ((bRam0000000007e28d20 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e69c8);
    bRam0000000007e28d20 = 1;
  }
  if (extraout_x1 != 0) {
    auVar24 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_077e69c8);
    auVar25._8_8_ = auVar24._8_8_;
    auVar25._1_7_ = 0;
    auVar25[0] = auVar24._0_8_ != 0;
    return auVar25;
  }
  auVar24 = func_0x03280cac();
  lVar12 = param_4;
  auVar25 = func_0x06885344();
  uVar9 = auVar25._8_8_;
  if (((auVar25._0_8_ & 1) == 0) ||
     (lVar19 = param_3,
     auVar25 = MergeEngine_ECS_Systems_Board_StackingSystem__CanCombineItems
                         (auVar24._0_8_,auVar24._8_8_), uVar9 = auVar25._8_8_,
     (auVar25._0_8_ & 1) == 0)) {
    uVar18 = 0;
  }
  else {
    if (param_3 == 0) {
      auVar24 = func_0x03280cac();
      lVar14 = auVar24._8_8_;
      lVar7 = auVar24._0_8_;
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
      auStack_e0._0_8_ = 0;
      auStack_e0._8_8_ = 0;
      plVar20 = *(long **)(lVar7 + 0x40);
      auVar24 = ZEXT816(0);
      if (plVar20 != (long *)0x0) {
        lVar13 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
              goto LAB_068874ec;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777a498,0x14);
LAB_068874ec:
        uVar9 = (*(code *)*puVar8)(plVar20,lVar14,puVar8[1]);
        auStack_e0 = func_0x0578e2a8(0);
        uVar10 = func_0x0579043c(auStack_e0,0);
        puVar3 = PTR_DAT_077e69c8;
        auVar24 = auStack_e0;
        if (lVar14 != 0) {
          lVar13 = func_0x03ced81c(lVar14,*(undefined8 *)PTR_DAT_077e69c8);
          auVar24 = auStack_e0;
          if (lVar19 != 0) {
            lVar11 = func_0x03ced81c(lVar19,*(undefined8 *)puVar3);
            if (lVar13 == 0) {
              uVar6 = 1;
            }
            else {
              uVar6 = *(undefined4 *)(lVar13 + 0x28);
            }
            plVar20 = *(long **)(lVar7 + 0x60);
            auVar24 = auStack_e0;
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x218))
                        (plVar20,lVar14,*(undefined8 *)PTR_DAT_07810188,1,1,
                         *(undefined8 *)(*plVar20 + 0x220));
              auVar24 = auStack_e0;
              if (lVar11 != 0) {
                func_0x069fdebc(lVar11,uVar6,0);
                puVar3 = PTR_DAT_0777e4a0;
                plVar20 = *(long **)(lVar7 + 0x48);
                auVar24 = auStack_e0;
                if (plVar20 != (long *)0x0) {
                  lVar13 = *plVar20;
                  uVar21 = *(undefined8 *)(lVar14 + 0x10);
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  uVar22 = *(undefined8 *)PTR_DAT_0776b160;
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_06887614;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar8 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e4a0,0);
LAB_06887614:
                  uVar21 = (*(code *)*puVar8)(plVar20,uVar22,uVar9,uVar21,0,puVar8[1]);
                  puVar5 = PTR_DAT_077cc918;
                  puVar4 = PTR_DAT_077cc910;
                  plVar20 = *(long **)(lVar7 + 0x48);
                  auVar24 = auStack_e0;
                  if (plVar20 != (long *)0x0) {
                    lVar14 = *plVar20;
                    uVar22 = *(undefined8 *)(lVar19 + 0x10);
                    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    uVar23 = *(undefined8 *)PTR_DAT_07778fa0;
                    if (uVar15 != 0) {
                      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                          puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                          goto LAB_068876a8;
                        }
                        uVar15 = uVar15 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar15 != 0);
                    }
                    puVar8 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar3,0);
LAB_068876a8:
                    uVar22 = (*(code *)*puVar8)(plVar20,uVar23,uVar9,uVar22,0,puVar8[1]);
                    lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
                    func_0x04143c38(lVar14,*(undefined8 *)puVar5);
                    puVar3 = PTR_DAT_0777e4a8;
                    auVar24 = auStack_e0;
                    if (lVar14 != 0) {
                      lVar13 = *(long *)(lVar14 + 0x10);
                      lVar16 = *(long *)PTR_DAT_0777e4a8;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar18 = *(uint *)(lVar14 + 0x18);
                        if (uVar18 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar18 + 1;
                          puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
                          *puVar8 = uVar21;
                          func_0x032809c4(puVar8,uVar21);
                        }
                        else {
                          func_0x0414446c(lVar14,uVar21,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = *(long *)(lVar14 + 0x10);
                        lVar16 = *(long *)puVar3;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        auVar24 = auStack_e0;
                        if (lVar13 != 0) {
                          uVar18 = *(uint *)(lVar14 + 0x18);
                          if (uVar18 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar18 + 1;
                            puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
                            *puVar8 = uVar22;
                            func_0x032809c4(puVar8,uVar22);
                          }
                          else {
                            func_0x0414446c(lVar14,uVar22,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                          }
                          puVar3 = PTR_DAT_07810170;
                          auVar24 = auStack_e0;
                          if (*(long *)(lVar7 + 0x68) != 0) {
                            func_0x03e40df4(*(long *)(lVar7 + 0x68),lVar14,uVar10,
                                            *(undefined8 *)PTR_DAT_07810178);
                            lVar14 = *(long *)(lVar7 + 0x28);
                            uVar22 = *(undefined8 *)(lVar19 + 0x30);
                            uVar1 = *(undefined4 *)(lVar11 + 0x28);
                            uVar21 = func_0x03280ca0(*(undefined8 *)puVar3);
                            func_0x0686bba0(uVar21,uVar22,uVar6,uVar1,0);
                            auVar24 = auStack_e0;
                            if (lVar14 != 0) {
                              func_0x03ea4d6c(lVar14,uVar21,*(undefined8 *)PTR_DAT_07810180);
                              puVar3 = PTR_DAT_078080f0;
                              auVar24 = auStack_e0;
                              if (*(long *)(lVar7 + 0x60) != 0) {
                                lVar19 = *(long *)(lVar7 + 0x28);
                                uVar6 = func_0x067675f0(*(long *)(lVar7 + 0x60),0);
                                uVar21 = func_0x03280ca0(*(undefined8 *)puVar3);
                                func_0x0686ba84(uVar21,uVar9,uVar9,uVar9,0,0,0,0,uVar6,uVar10,lVar12
                                                ,0);
                                auVar24 = auStack_e0;
                                if (lVar19 != 0) {
                                  auVar24 = func_0x03ea4d6c(lVar19,uVar21,
                                                            *(undefined8 *)PTR_DAT_07808118);
                                  return auVar24;
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
      auStack_e0 = auVar24;
      auVar24 = func_0x03280cac();
      return auVar24;
    }
    MergeEngine_ECS_Systems_Board_StackingSystem__StackItems
              (auVar24._0_8_,auVar24._8_8_,param_3,*(undefined8 *)(param_3 + 0x30));
    if (param_4 == 0) {
      uVar18 = 1;
      uVar9 = extraout_x1_00;
    }
    else {
      uVar18 = 1;
      (**(code **)(param_4 + 0x18))
                (*(undefined8 *)(param_4 + 0x40),1,1,0,*(undefined8 *)(param_4 + 0x28));
      uVar9 = extraout_x1_01;
    }
  }
  auVar24._4_4_ = 0;
  auVar24._0_4_ = uVar18;
  auVar24._8_8_ = uVar9;
  return auVar24;
}


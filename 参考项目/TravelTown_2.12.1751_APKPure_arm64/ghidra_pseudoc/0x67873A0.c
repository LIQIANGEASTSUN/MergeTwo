/* Ghidra 12.1.2 native pseudocode; RVA 0x67873A0; MergeEngine.ECS.Systems.Board.StackingSystem.StackItems; status ok */


void MergeEngine_ECS_Systems_Board_StackingSystem__StackItems
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_70 [16];
  
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
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  plVar17 = *(long **)(param_1 + 0x40);
  auVar3 = ZEXT816(0);
  if (plVar17 != (long *)0x0) {
    lVar12 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
          goto LAB_068874ec;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,0x14);
LAB_068874ec:
    uVar9 = (*(code *)*puVar8)(plVar17,param_2,puVar8[1]);
    auStack_70 = func_0x0578e2a8(0);
    uVar10 = func_0x0579043c(auStack_70,0);
    puVar4 = PTR_DAT_077e69c8;
    auVar3 = auStack_70;
    if (param_2 != 0) {
      lVar12 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e69c8);
      auVar3 = auStack_70;
      if (param_3 != 0) {
        lVar11 = func_0x03ced81c(param_3,*(undefined8 *)puVar4);
        if (lVar12 == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = *(undefined4 *)(lVar12 + 0x28);
        }
        plVar17 = *(long **)(param_1 + 0x60);
        auVar3 = auStack_70;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x218))
                    (plVar17,param_2,*(undefined8 *)PTR_DAT_07810188,1,1,
                     *(undefined8 *)(*plVar17 + 0x220));
          auVar3 = auStack_70;
          if (lVar11 != 0) {
            func_0x069fdebc(lVar11,uVar7,0);
            puVar4 = PTR_DAT_0777e4a0;
            plVar17 = *(long **)(param_1 + 0x48);
            auVar3 = auStack_70;
            if (plVar17 != (long *)0x0) {
              lVar12 = *plVar17;
              uVar18 = *(undefined8 *)(param_2 + 0x10);
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              uVar19 = *(undefined8 *)PTR_DAT_0776b160;
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e4a0) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06887614;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777e4a0,0);
LAB_06887614:
              uVar18 = (*(code *)*puVar8)(plVar17,uVar19,uVar9,uVar18,0,puVar8[1]);
              puVar6 = PTR_DAT_077cc918;
              puVar5 = PTR_DAT_077cc910;
              plVar17 = *(long **)(param_1 + 0x48);
              auVar3 = auStack_70;
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                uVar19 = *(undefined8 *)(param_3 + 0x10);
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                uVar20 = *(undefined8 *)PTR_DAT_07778fa0;
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                      puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_068876a8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar4,0);
LAB_068876a8:
                uVar19 = (*(code *)*puVar8)(plVar17,uVar20,uVar9,uVar19,0,puVar8[1]);
                lVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
                func_0x04143c38(lVar12,*(undefined8 *)puVar6);
                puVar4 = PTR_DAT_0777e4a8;
                auVar3 = auStack_70;
                if (lVar12 != 0) {
                  lVar13 = *(long *)(lVar12 + 0x10);
                  lVar15 = *(long *)PTR_DAT_0777e4a8;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar8 = uVar18;
                      func_0x032809c4(puVar8,uVar18);
                    }
                    else {
                      func_0x0414446c(lVar12,uVar18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = *(long *)(lVar12 + 0x10);
                    lVar15 = *(long *)puVar4;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    auVar3 = auStack_70;
                    if (lVar13 != 0) {
                      uVar2 = *(uint *)(lVar12 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                        puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar8 = uVar19;
                        func_0x032809c4(puVar8,uVar19);
                      }
                      else {
                        func_0x0414446c(lVar12,uVar19,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar4 = PTR_DAT_07810170;
                      auVar3 = auStack_70;
                      if (*(long *)(param_1 + 0x68) != 0) {
                        func_0x03e40df4(*(long *)(param_1 + 0x68),lVar12,uVar10,
                                        *(undefined8 *)PTR_DAT_07810178);
                        lVar12 = *(long *)(param_1 + 0x28);
                        uVar19 = *(undefined8 *)(param_3 + 0x30);
                        uVar1 = *(undefined4 *)(lVar11 + 0x28);
                        uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
                        func_0x0686bba0(uVar18,uVar19,uVar7,uVar1,0);
                        auVar3 = auStack_70;
                        if (lVar12 != 0) {
                          func_0x03ea4d6c(lVar12,uVar18,*(undefined8 *)PTR_DAT_07810180);
                          puVar4 = PTR_DAT_078080f0;
                          auVar3 = auStack_70;
                          if (*(long *)(param_1 + 0x60) != 0) {
                            lVar12 = *(long *)(param_1 + 0x28);
                            uVar7 = func_0x067675f0(*(long *)(param_1 + 0x60),0);
                            uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
                            func_0x0686ba84(uVar18,uVar9,uVar9,uVar9,0,0,0,0,uVar7,uVar10,param_4,0)
                            ;
                            auVar3 = auStack_70;
                            if (lVar12 != 0) {
                              func_0x03ea4d6c(lVar12,uVar18,*(undefined8 *)PTR_DAT_07808118);
                              return;
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
  auStack_70 = auVar3;
  func_0x03280cac();
  return;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6787304; MergeEngine.ECS.Systems.Board.StackingSystem.TryCombineItems; status ok */


/* WARNING: Possible PIC construction at 0x06887350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06887354) */
/* WARNING: Removing unreachable block (ram,0x06887394) */
/* WARNING: Removing unreachable block (ram,0x06887358) */

undefined8
MergeEngine_ECS_Systems_Board_StackingSystem__TryCombineItems
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
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
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_a0 [16];
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  uVar7 = func_0x06885344();
  if (((uVar7 & 1) == 0) ||
     (lVar17 = param_3,
     uVar7 = MergeEngine_ECS_Systems_Board_StackingSystem__CanCombineItems(param_1,param_2),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    auVar22 = func_0x03280cac();
  }
  else {
    param_4 = *(undefined8 *)(param_3 + 0x30);
    lVar17 = param_3;
  }
  lVar14 = auVar22._8_8_;
  lVar8 = auVar22._0_8_;
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
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  plVar18 = *(long **)(lVar8 + 0x40);
  auVar22 = ZEXT816(0);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
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
    puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777a498,0x14);
LAB_068874ec:
    uVar10 = (*(code *)*puVar9)(plVar18,lVar14,puVar9[1]);
    auStack_a0 = func_0x0578e2a8(0);
    uVar11 = func_0x0579043c(auStack_a0,0);
    puVar3 = PTR_DAT_077e69c8;
    auVar22 = auStack_a0;
    if (lVar14 != 0) {
      lVar13 = func_0x03ced81c(lVar14,*(undefined8 *)PTR_DAT_077e69c8);
      auVar22 = auStack_a0;
      if (lVar17 != 0) {
        lVar12 = func_0x03ced81c(lVar17,*(undefined8 *)puVar3);
        if (lVar13 == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = *(undefined4 *)(lVar13 + 0x28);
        }
        plVar18 = *(long **)(lVar8 + 0x60);
        auVar22 = auStack_a0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x218))
                    (plVar18,lVar14,*(undefined8 *)PTR_DAT_07810188,1,1,
                     *(undefined8 *)(*plVar18 + 0x220));
          auVar22 = auStack_a0;
          if (lVar12 != 0) {
            func_0x069fdebc(lVar12,uVar6,0);
            puVar3 = PTR_DAT_0777e4a0;
            plVar18 = *(long **)(lVar8 + 0x48);
            auVar22 = auStack_a0;
            if (plVar18 != (long *)0x0) {
              lVar13 = *plVar18;
              uVar19 = *(undefined8 *)(lVar14 + 0x10);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
              uVar20 = *(undefined8 *)PTR_DAT_0776b160;
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
              puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777e4a0,0);
LAB_06887614:
              uVar19 = (*(code *)*puVar9)(plVar18,uVar20,uVar10,uVar19,0,puVar9[1]);
              puVar5 = PTR_DAT_077cc918;
              puVar4 = PTR_DAT_077cc910;
              plVar18 = *(long **)(lVar8 + 0x48);
              auVar22 = auStack_a0;
              if (plVar18 != (long *)0x0) {
                lVar14 = *plVar18;
                uVar20 = *(undefined8 *)(lVar17 + 0x10);
                uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
                uVar21 = *(undefined8 *)PTR_DAT_07778fa0;
                if (uVar7 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                      puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_068876a8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar7 != 0);
                }
                puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar3,0);
LAB_068876a8:
                uVar20 = (*(code *)*puVar9)(plVar18,uVar21,uVar10,uVar20,0,puVar9[1]);
                lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
                func_0x04143c38(lVar14,*(undefined8 *)puVar5);
                puVar3 = PTR_DAT_0777e4a8;
                auVar22 = auStack_a0;
                if (lVar14 != 0) {
                  lVar13 = *(long *)(lVar14 + 0x10);
                  lVar15 = *(long *)PTR_DAT_0777e4a8;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar2 = *(uint *)(lVar14 + 0x18);
                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                      puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar9 = uVar19;
                      func_0x032809c4(puVar9,uVar19);
                    }
                    else {
                      func_0x0414446c(lVar14,uVar19,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = *(long *)(lVar14 + 0x10);
                    lVar15 = *(long *)puVar3;
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    auVar22 = auStack_a0;
                    if (lVar13 != 0) {
                      uVar2 = *(uint *)(lVar14 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                        puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar9 = uVar20;
                        func_0x032809c4(puVar9,uVar20);
                      }
                      else {
                        func_0x0414446c(lVar14,uVar20,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_07810170;
                      auVar22 = auStack_a0;
                      if (*(long *)(lVar8 + 0x68) != 0) {
                        func_0x03e40df4(*(long *)(lVar8 + 0x68),lVar14,uVar11,
                                        *(undefined8 *)PTR_DAT_07810178);
                        lVar14 = *(long *)(lVar8 + 0x28);
                        uVar20 = *(undefined8 *)(lVar17 + 0x30);
                        uVar1 = *(undefined4 *)(lVar12 + 0x28);
                        uVar19 = func_0x03280ca0(*(undefined8 *)puVar3);
                        func_0x0686bba0(uVar19,uVar20,uVar6,uVar1,0);
                        auVar22 = auStack_a0;
                        if (lVar14 != 0) {
                          func_0x03ea4d6c(lVar14,uVar19,*(undefined8 *)PTR_DAT_07810180);
                          puVar3 = PTR_DAT_078080f0;
                          auVar22 = auStack_a0;
                          if (*(long *)(lVar8 + 0x60) != 0) {
                            lVar17 = *(long *)(lVar8 + 0x28);
                            uVar6 = func_0x067675f0(*(long *)(lVar8 + 0x60),0);
                            uVar19 = func_0x03280ca0(*(undefined8 *)puVar3);
                            func_0x0686ba84(uVar19,uVar10,uVar10,uVar10,0,0,0,0,uVar6,uVar11,param_4
                                            ,0);
                            auVar22 = auStack_a0;
                            if (lVar17 != 0) {
                              uVar10 = func_0x03ea4d6c(lVar17,uVar19,*(undefined8 *)PTR_DAT_07808118
                                                      );
                              return uVar10;
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
  auStack_a0 = auVar22;
  uVar10 = func_0x03280cac();
  return uVar10;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6797740; MergeEngine.ECS.Systems.Items.ToolSpawningSystem.CreateTool; status ok */


long MergeEngine_ECS_Systems_Items_ToolSpawningSystem__CreateTool
               (long param_1,undefined8 param_2,long param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_68;
  
  if ((bRam0000000007e28d98 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810728);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_0777e5c8);
    func_0x03280a18(PTR_DAT_0777e5d0);
    func_0x03280a18(PTR_DAT_07810730);
    func_0x03280a18(PTR_DAT_07810738);
    func_0x03280a18(PTR_DAT_07810740);
    func_0x03280a18(PTR_DAT_07810748);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d98 = 1;
  }
  puVar2 = PTR_DAT_077d75b8;
  if (param_3 != 0) {
    auVar22 = func_0x04d04de8(param_1,*(undefined8 *)(param_3 + 0x30),param_2,param_4 & 1,param_5,
                              *(undefined8 *)PTR_DAT_07810728);
    uVar9 = auVar22._0_8_;
    lVar10 = func_0x03ced81c(param_3,*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_0777e5d0;
    puVar2 = PTR_DAT_0777e5c8;
    if ((lVar10 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
      uVar11 = func_0x06769c6c(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar10 + 0x30),0,0);
      uStack_68 = 0;
      func_0x0437ba9c(&uStack_68,8,*(undefined8 *)puVar3);
      uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x061117a8(uVar12,0);
      uVar12 = func_0x06a13bc8(uVar11,uStack_68,uVar12,0,0);
      plVar19 = *(long **)(param_1 + 0x18);
      if (plVar19 != (long *)0x0) {
        lVar15 = *plVar19;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e5b8) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06897984;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e5b8,0);
LAB_06897984:
        lVar15 = (*(code *)*puVar13)(plVar19,uVar9,uVar12,puVar13[1]);
        if ((lVar15 != 0) &&
           (lVar14 = func_0x03d20d84(lVar15,*(undefined8 *)PTR_DAT_0777e5a0), lVar14 != 0)) {
          *(undefined1 *)(lVar14 + 0x6d) = 1;
          puVar2 = PTR_DAT_077e6760;
          plVar19 = *(long **)(param_1 + 0x10);
          if (plVar19 != (long *)0x0) {
            lVar16 = *plVar19;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                  goto LAB_06897a28;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e5c0,5);
LAB_06897a28:
            (*(code *)*puVar13)(plVar19,lVar15,puVar13[1]);
            uVar20 = *(undefined8 *)(param_1 + 0xb8);
            uVar21 = *(undefined8 *)(lVar10 + 0x30);
            uVar12 = func_0x03ced81c(lVar10,*(undefined8 *)puVar2);
            func_0x0636f74c(uVar20,uVar11,uVar21,uVar12,0);
            puVar2 = PTR_DAT_0777a498;
            plVar19 = *(long **)(param_1 + 0x40);
            if (plVar19 != (long *)0x0) {
              lVar10 = *plVar19;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar13 = (undefined8 *)(lVar10 + (long)(*piVar18 + 0x14) * 0x10 + 0x138);
                    goto LAB_06897ac4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777a498,0x14);
LAB_06897ac4:
              uVar11 = (*(code *)*puVar13)(plVar19,lVar14,puVar13[1]);
              puVar3 = PTR_DAT_07810740;
              plVar19 = *(long **)(param_1 + 0x40);
              if (plVar19 != (long *)0x0) {
                lVar10 = *plVar19;
                uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                      puVar13 = (undefined8 *)(lVar10 + (long)(*piVar18 + 0x14) * 0x10 + 0x138);
                      goto LAB_06897b38;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar2,0x14);
LAB_06897b38:
                uVar12 = (*(code *)*puVar13)(plVar19,param_3,puVar13[1]);
                lVar10 = *(long *)(param_1 + 0x28);
                uVar20 = func_0x03280ca0(*(undefined8 *)puVar3);
                func_0x060f3e1c(uVar20,uVar9,auVar22._8_8_ & 0xffffffff,uVar12,0);
                if (lVar10 != 0) {
                  func_0x03ea4d6c(lVar10,uVar20,*(undefined8 *)PTR_DAT_07810738);
                  puVar2 = PTR_DAT_0777e4a0;
                  plVar19 = *(long **)(param_1 + 0xa8);
                  if (plVar19 != (long *)0x0) {
                    lVar10 = *plVar19;
                    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    uVar20 = *(undefined8 *)PTR_DAT_0777e5f8;
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e4a0) {
                          puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06897bf8;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar13 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e4a0,0);
LAB_06897bf8:
                    uVar11 = (*(code *)*puVar13)(plVar19,uVar20,uVar11,lVar15,0,puVar13[1]);
                    puVar4 = PTR_DAT_077cc918;
                    puVar3 = PTR_DAT_077cc910;
                    plVar19 = *(long **)(param_1 + 0xa8);
                    if (plVar19 != (long *)0x0) {
                      lVar10 = *plVar19;
                      uVar20 = *(undefined8 *)(param_3 + 0x10);
                      uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      uVar21 = *(undefined8 *)PTR_DAT_07778fa0;
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                            puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_06897c8c;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar13 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar2,0);
LAB_06897c8c:
                      uVar20 = (*(code *)*puVar13)(plVar19,uVar21,uVar12,uVar20,0,puVar13[1]);
                      lVar15 = *(long *)(param_1 + 0xb0);
                      lVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
                      func_0x04143c38(lVar10,*(undefined8 *)puVar4);
                      puVar2 = PTR_DAT_0777e4a8;
                      if (lVar10 != 0) {
                        lVar14 = *(long *)(lVar10 + 0x10);
                        lVar16 = *(long *)PTR_DAT_0777e4a8;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar10 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                            puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar13 = uVar11;
                            func_0x032809c4(puVar13,uVar11);
                          }
                          else {
                            func_0x0414446c(lVar10,uVar11,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar14 = *(long *)(lVar10 + 0x10);
                          lVar16 = *(long *)puVar2;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar13 = uVar20;
                              func_0x032809c4(puVar13,uVar20);
                            }
                            else {
                              func_0x0414446c(lVar10,uVar20,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar2 = PTR_DAT_07810748;
                            if (lVar15 != 0) {
                              func_0x03e4062c(lVar15,lVar10,*(undefined8 *)PTR_DAT_07810730);
                              lVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
                              func_0x06a01fa4(lVar10,0);
                              if (lVar10 != 0) {
                                *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                func_0x032809c4((undefined8 *)(lVar10 + 0x18),uVar9);
                                *(undefined8 *)(lVar10 + 0x10) = uVar12;
                                func_0x032809c4((undefined8 *)(lVar10 + 0x10),uVar12);
                                if ((*(long *)(param_1 + 0xd8) != 0) &&
                                   (lVar15 = *(long *)(*(long *)(param_1 + 0xd8) + 0x30),
                                   lVar15 != 0)) {
                                  plVar19 = (long *)(lVar15 + 0x30);
                                  *plVar19 = lVar10;
                                  lVar10 = func_0x032809c4(plVar19,lVar10);
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
              }
            }
          }
        }
      }
    }
  }
  lVar10 = func_0x03280cac();
  if ((bRam0000000007e28d99 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810750);
    bRam0000000007e28d99 = 1;
  }
  puVar8 = PTR_DAT_07780140;
  puVar7 = PTR_DAT_07780138;
  puVar6 = PTR_DAT_07780130;
  puVar5 = PTR_DAT_07780128;
  puVar4 = PTR_DAT_07780120;
  puVar3 = PTR_DAT_0777ebc8;
  puVar2 = PTR_DAT_0777ebb0;
  if ((bRam0000000007e1ae7e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780128);
    func_0x03280a18(PTR_DAT_0777ebb0);
    func_0x03280a18(PTR_DAT_07780138);
    func_0x03280a18(PTR_DAT_07780130);
    func_0x03280a18(PTR_DAT_0777ebc8);
    func_0x03280a18(PTR_DAT_07780120);
    func_0x03280a18(PTR_DAT_07780140);
    bRam0000000007e1ae7e = 1;
  }
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04fb4e7c(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(lVar10 + 0x78) = uVar9;
  func_0x032809c4((undefined8 *)(lVar10 + 0x78),uVar9);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x04f610a8(uVar9,*(undefined8 *)puVar7);
  *(undefined8 *)(lVar10 + 0x80) = uVar9;
  func_0x032809c4((undefined8 *)(lVar10 + 0x80),uVar9);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04f2ad28(uVar9,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar10 + 0x88) = uVar9;
  func_0x032809c4((undefined8 *)(lVar10 + 0x88),uVar9);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar8);
  func_0x06898a68(uVar9,0);
  *(undefined8 *)(lVar10 + 0x90) = uVar9;
  func_0x032809c4((undefined8 *)(lVar10 + 0x90),uVar9);
  return lVar10;
}


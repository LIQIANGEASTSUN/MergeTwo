/* Ghidra 12.1.2 native pseudocode; RVA 0x6797538; MergeEngine.ECS.Systems.Items.ToolSpawningSystem.CalculateCurrentToolAmounts; status ok */


long MergeEngine_ECS_Systems_Items_ToolSpawningSystem__CalculateCurrentToolAmounts
               (long param_1,long param_2,int *param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 unaff_x24;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_64;
  
  puVar4 = PTR_DAT_0777ff70;
  puVar3 = PTR_DAT_0777ff68;
  if ((bRam0000000007e28d97 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_077d4228);
    func_0x03280a18(PTR_DAT_0777ff70);
    func_0x03280a18(PTR_DAT_07780070);
    func_0x03280a18(PTR_DAT_07780078);
    func_0x03280a18(PTR_DAT_0777ff68);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28d97 = 1;
  }
  puVar7 = PTR_DAT_077d4228;
  puVar6 = PTR_DAT_07780078;
  puVar5 = PTR_DAT_07780070;
  puVar2 = PTR_DAT_07773688;
  puVar1 = PTR_DAT_077730b8;
  iStack_64 = 0;
  lVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04f5a6b8(lVar9,*(undefined8 *)puVar4);
  uVar21 = 7;
  while( true ) {
    uVar16 = (uint)param_4;
    plVar22 = *(long **)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x0624cb20(uVar21,0);
    if (plVar22 == (long *)0x0) break;
    lVar17 = *plVar22;
    lVar15 = *(long *)puVar2;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar15) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_0689769c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar22,lVar15,1);
LAB_0689769c:
    param_3 = (int *)puVar11[1];
    lVar15 = (*(code *)*puVar11)(plVar22,uVar10);
    unaff_x24 = uVar10;
    if ((lVar15 == 0) || (lVar9 == 0)) break;
    param_3 = (int *)(ulong)*(uint *)(lVar15 + 0x20);
    uVar16 = (uint)*(undefined8 *)puVar6;
    func_0x04f5b488(lVar9,uVar21);
    if (param_2 == 0) break;
    param_4 = *(undefined8 *)puVar7;
    param_3 = &iStack_64;
    uVar19 = func_0x04f5ce0c(param_2,uVar21);
    if ((uVar19 & 1) != 0) {
      iVar8 = func_0x04f5b400(lVar9,uVar21,*(undefined8 *)puVar5);
      param_4 = *(undefined8 *)puVar6;
      param_3 = (int *)(ulong)(uint)(iStack_64 + iVar8);
      func_0x04f5b488(lVar9,uVar21);
    }
    uVar16 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar16;
    if (uVar16 == 0x11) {
      return lVar9;
    }
  }
  auVar25 = func_0x03280cac();
  lVar15 = auVar25._0_8_;
  puStack_d0 = puVar5;
  uStack_c8 = 0x6897740;
  puStack_c0 = puVar7;
  puStack_b8 = puVar6;
  puStack_b0 = puVar2;
  puStack_a8 = puVar1;
  uStack_a0 = unaff_x24;
  plStack_98 = plVar22;
  uStack_90 = uVar21;
  lStack_88 = lVar9;
  lStack_80 = param_1;
  lStack_78 = param_2;
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
  puVar3 = PTR_DAT_077d75b8;
  if (param_3 != (int *)0x0) {
    auVar25 = func_0x04d04de8(lVar15,*(undefined8 *)(param_3 + 0xc),auVar25._8_8_,uVar16 & 1,
                              param_5 & 0xffffffff,*(undefined8 *)PTR_DAT_07810728);
    uVar10 = auVar25._0_8_;
    lVar9 = func_0x03ced81c(param_3,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_0777e5d0;
    puVar3 = PTR_DAT_0777e5c8;
    if ((lVar9 != 0) && (*(long *)(lVar15 + 0xb8) != 0)) {
      uVar12 = func_0x06769c6c(*(long *)(lVar15 + 0xb8),*(undefined8 *)(lVar9 + 0x30),0,0);
      uStack_d8 = 0;
      func_0x0437ba9c(&uStack_d8,8,*(undefined8 *)puVar4);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x061117a8(uVar13,0);
      uVar13 = func_0x06a13bc8(uVar12,uStack_d8,uVar13,0,0);
      plVar22 = *(long **)(lVar15 + 0x18);
      if (plVar22 != (long *)0x0) {
        lVar17 = *plVar22;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar21 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e5b8) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_06897984;
            }
            uVar21 = uVar21 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e5b8,0);
LAB_06897984:
        lVar17 = (*(code *)*puVar11)(plVar22,uVar10,uVar13,puVar11[1]);
        if ((lVar17 != 0) &&
           (lVar14 = func_0x03d20d84(lVar17,*(undefined8 *)PTR_DAT_0777e5a0), lVar14 != 0)) {
          *(undefined1 *)(lVar14 + 0x6d) = 1;
          puVar3 = PTR_DAT_077e6760;
          plVar22 = *(long **)(lVar15 + 0x10);
          if (plVar22 != (long *)0x0) {
            lVar18 = *plVar22;
            uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar21 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar11 = (undefined8 *)(lVar18 + (long)(*piVar20 + 5) * 0x10 + 0x138);
                  goto LAB_06897a28;
                }
                uVar21 = uVar21 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar21 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e5c0,5);
LAB_06897a28:
            (*(code *)*puVar11)(plVar22,lVar17,puVar11[1]);
            uVar23 = *(undefined8 *)(lVar15 + 0xb8);
            uVar24 = *(undefined8 *)(lVar9 + 0x30);
            uVar13 = func_0x03ced81c(lVar9,*(undefined8 *)puVar3);
            func_0x0636f74c(uVar23,uVar12,uVar24,uVar13,0);
            puVar3 = PTR_DAT_0777a498;
            plVar22 = *(long **)(lVar15 + 0x40);
            if (plVar22 != (long *)0x0) {
              lVar9 = *plVar22;
              uVar21 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar21 != 0) {
                piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar11 = (undefined8 *)(lVar9 + (long)(*piVar20 + 0x14) * 0x10 + 0x138);
                    goto LAB_06897ac4;
                  }
                  uVar21 = uVar21 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar21 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777a498,0x14);
LAB_06897ac4:
              uVar12 = (*(code *)*puVar11)(plVar22,lVar14,puVar11[1]);
              puVar4 = PTR_DAT_07810740;
              plVar22 = *(long **)(lVar15 + 0x40);
              if (plVar22 != (long *)0x0) {
                lVar9 = *plVar22;
                uVar21 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar21 != 0) {
                  piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                      puVar11 = (undefined8 *)(lVar9 + (long)(*piVar20 + 0x14) * 0x10 + 0x138);
                      goto LAB_06897b38;
                    }
                    uVar21 = uVar21 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar21 != 0);
                }
                puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar3,0x14);
LAB_06897b38:
                uVar13 = (*(code *)*puVar11)(plVar22,param_3,puVar11[1]);
                lVar9 = *(long *)(lVar15 + 0x28);
                uVar23 = func_0x03280ca0(*(undefined8 *)puVar4);
                func_0x060f3e1c(uVar23,uVar10,auVar25._8_8_ & 0xffffffff,uVar13,0);
                if (lVar9 != 0) {
                  func_0x03ea4d6c(lVar9,uVar23,*(undefined8 *)PTR_DAT_07810738);
                  puVar3 = PTR_DAT_0777e4a0;
                  plVar22 = *(long **)(lVar15 + 0xa8);
                  if (plVar22 != (long *)0x0) {
                    lVar9 = *plVar22;
                    uVar21 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    uVar23 = *(undefined8 *)PTR_DAT_0777e5f8;
                    if (uVar21 != 0) {
                      piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e4a0) {
                          puVar11 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
                          goto LAB_06897bf8;
                        }
                        uVar21 = uVar21 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar21 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e4a0,0);
LAB_06897bf8:
                    uVar12 = (*(code *)*puVar11)(plVar22,uVar23,uVar12,lVar17,0,puVar11[1]);
                    puVar1 = PTR_DAT_077cc918;
                    puVar4 = PTR_DAT_077cc910;
                    plVar22 = *(long **)(lVar15 + 0xa8);
                    if (plVar22 != (long *)0x0) {
                      lVar9 = *plVar22;
                      uVar23 = *(undefined8 *)(param_3 + 4);
                      uVar21 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      uVar24 = *(undefined8 *)PTR_DAT_07778fa0;
                      if (uVar21 != 0) {
                        piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                            puVar11 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_06897c8c;
                          }
                          uVar21 = uVar21 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar3,0);
LAB_06897c8c:
                      uVar23 = (*(code *)*puVar11)(plVar22,uVar24,uVar13,uVar23,0,puVar11[1]);
                      lVar17 = *(long *)(lVar15 + 0xb0);
                      lVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
                      func_0x04143c38(lVar9,*(undefined8 *)puVar1);
                      puVar3 = PTR_DAT_0777e4a8;
                      if (lVar9 != 0) {
                        lVar14 = *(long *)(lVar9 + 0x10);
                        lVar18 = *(long *)PTR_DAT_0777e4a8;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar16 = *(uint *)(lVar9 + 0x18);
                          if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar16 + 1;
                            puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20);
                            *puVar11 = uVar12;
                            func_0x032809c4(puVar11,uVar12);
                          }
                          else {
                            func_0x0414446c(lVar9,uVar12,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar14 = *(long *)(lVar9 + 0x10);
                          lVar18 = *(long *)puVar3;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar16 = *(uint *)(lVar9 + 0x18);
                            if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar16 + 1;
                              puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20);
                              *puVar11 = uVar23;
                              func_0x032809c4(puVar11,uVar23);
                            }
                            else {
                              func_0x0414446c(lVar9,uVar23,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar3 = PTR_DAT_07810748;
                            if (lVar17 != 0) {
                              func_0x03e4062c(lVar17,lVar9,*(undefined8 *)PTR_DAT_07810730);
                              lVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
                              func_0x06a01fa4(lVar9,0);
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                func_0x032809c4((undefined8 *)(lVar9 + 0x18),uVar10);
                                *(undefined8 *)(lVar9 + 0x10) = uVar13;
                                func_0x032809c4((undefined8 *)(lVar9 + 0x10),uVar13);
                                if ((*(long *)(lVar15 + 0xd8) != 0) &&
                                   (lVar15 = *(long *)(*(long *)(lVar15 + 0xd8) + 0x30), lVar15 != 0
                                   )) {
                                  plVar22 = (long *)(lVar15 + 0x30);
                                  *plVar22 = lVar9;
                                  lVar9 = func_0x032809c4(plVar22,lVar9);
                                  return lVar9;
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
  lVar9 = func_0x03280cac();
  if ((bRam0000000007e28d99 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810750);
    bRam0000000007e28d99 = 1;
  }
  puVar7 = PTR_DAT_07780140;
  puVar6 = PTR_DAT_07780138;
  puVar5 = PTR_DAT_07780130;
  puVar2 = PTR_DAT_07780128;
  puVar1 = PTR_DAT_07780120;
  puVar4 = PTR_DAT_0777ebc8;
  puVar3 = PTR_DAT_0777ebb0;
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
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fb4e7c(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar9 + 0x78) = uVar10;
  func_0x032809c4((undefined8 *)(lVar9 + 0x78),uVar10);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04f610a8(uVar10,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar9 + 0x80) = uVar10;
  func_0x032809c4((undefined8 *)(lVar9 + 0x80),uVar10);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04f2ad28(uVar10,*(undefined8 *)puVar3);
  *(undefined8 *)(lVar9 + 0x88) = uVar10;
  func_0x032809c4((undefined8 *)(lVar9 + 0x88),uVar10);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06898a68(uVar10,0);
  *(undefined8 *)(lVar9 + 0x90) = uVar10;
  func_0x032809c4((undefined8 *)(lVar9 + 0x90),uVar10);
  return lVar9;
}


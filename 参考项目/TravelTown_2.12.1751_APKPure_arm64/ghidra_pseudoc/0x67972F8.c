/* Ghidra 12.1.2 native pseudocode; RVA 0x67972F8; MergeEngine.ECS.Systems.Items.ToolSpawningSystem.SpawnTool; status ok */


/* WARNING: Possible PIC construction at 0x06897424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06897518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06897428) */
/* WARNING: Removing unreachable block (ram,0x06897454) */
/* WARNING: Removing unreachable block (ram,0x06897490) */
/* WARNING: Removing unreachable block (ram,0x068974a4) */
/* WARNING: Removing unreachable block (ram,0x068974ac) */
/* WARNING: Removing unreachable block (ram,0x0689751c) */
/* WARNING: Removing unreachable block (ram,0x068974c8) */
/* WARNING: Removing unreachable block (ram,0x068974d0) */
/* WARNING: Removing unreachable block (ram,0x068974f0) */
/* WARNING: Type propagation algorithm not settling */

long MergeEngine_ECS_Systems_Items_ToolSpawningSystem__SpawnTool
               (long param_1,long param_2,int *param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  undefined *unaff_x24;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_c4;
  long alStack_58 [3];
  
  if ((bRam0000000007e28d96 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078106f0);
    func_0x03280a18(PTR_DAT_078106f8);
    func_0x03280a18(PTR_DAT_07810700);
    func_0x03280a18(PTR_DAT_07810708);
    func_0x03280a18(PTR_DAT_07810710);
    func_0x03280a18(PTR_DAT_07810718);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077d4228);
    func_0x03280a18(PTR_DAT_07810720);
    func_0x03280a18(PTR_DAT_0777c2d8);
    bRam0000000007e28d96 = 1;
  }
  puVar1 = PTR_DAT_07810708;
  puVar3 = PTR_DAT_07810700;
  puVar9 = PTR_DAT_078106f8;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  alStack_58[0] = 0;
  if (param_2 == 0) {
    auVar25 = func_0x03280cac();
    lVar11 = auVar25._8_8_;
    param_1 = auVar25._0_8_;
  }
  else {
    param_5 = *(ulong *)PTR_DAT_078106f0;
    uVar20 = *(undefined8 *)(param_2 + 0x28);
    func_0x04d03ad8(param_1,alStack_58 + 2,alStack_58 + 1,alStack_58);
    param_3 = (int *)func_0x04d04a08(param_1,alStack_58[2],*(undefined8 *)puVar1);
    param_4 = *(undefined8 *)puVar3;
    func_0x04d04970(param_1,uVar20);
    lVar11 = alStack_58[0];
    unaff_x24 = puVar9;
  }
  puVar3 = PTR_DAT_0777ff70;
  puVar9 = PTR_DAT_0777ff68;
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
  puVar6 = PTR_DAT_077d4228;
  puVar5 = PTR_DAT_07780078;
  puVar4 = PTR_DAT_07780070;
  puVar2 = PTR_DAT_07773688;
  puVar1 = PTR_DAT_077730b8;
  iStack_c4 = 0;
  lVar8 = func_0x03280ca0(*(undefined8 *)puVar9);
  func_0x04f5a6b8(lVar8,*(undefined8 *)puVar3);
  uVar21 = 7;
  while( true ) {
    uVar15 = (uint)param_4;
    plVar22 = *(long **)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar9 = (undefined *)func_0x0624cb20(uVar21,0);
    if (plVar22 == (long *)0x0) break;
    lVar16 = *plVar22;
    lVar14 = *(long *)puVar2;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_0689769c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar22,lVar14,1);
LAB_0689769c:
    param_3 = (int *)puVar10[1];
    lVar14 = (*(code *)*puVar10)(plVar22,puVar9);
    unaff_x24 = puVar9;
    if ((lVar14 == 0) || (lVar8 == 0)) break;
    param_3 = (int *)(ulong)*(uint *)(lVar14 + 0x20);
    uVar15 = (uint)*(undefined8 *)puVar5;
    func_0x04f5b488(lVar8,uVar21);
    if (lVar11 == 0) break;
    param_4 = *(undefined8 *)puVar6;
    param_3 = &iStack_c4;
    uVar18 = func_0x04f5ce0c(lVar11,uVar21);
    if ((uVar18 & 1) != 0) {
      iVar7 = func_0x04f5b400(lVar8,uVar21,*(undefined8 *)puVar4);
      param_4 = *(undefined8 *)puVar5;
      param_3 = (int *)(ulong)(uint)(iStack_c4 + iVar7);
      func_0x04f5b488(lVar8,uVar21);
    }
    uVar15 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar15;
    if (uVar15 == 0x11) {
      return lVar8;
    }
  }
  auVar25 = func_0x03280cac();
  lVar14 = auVar25._0_8_;
  puStack_130 = puVar4;
  uStack_128 = 0x6897740;
  puStack_120 = puVar6;
  puStack_118 = puVar5;
  puStack_110 = puVar2;
  puStack_108 = puVar1;
  puStack_100 = unaff_x24;
  plStack_f8 = plVar22;
  uStack_f0 = uVar21;
  lStack_e8 = lVar8;
  lStack_e0 = param_1;
  lStack_d8 = lVar11;
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
  puVar9 = PTR_DAT_077d75b8;
  if (param_3 != (int *)0x0) {
    auVar25 = func_0x04d04de8(lVar14,*(undefined8 *)(param_3 + 0xc),auVar25._8_8_,uVar15 & 1,
                              param_5 & 0xffffffff,*(undefined8 *)PTR_DAT_07810728);
    uVar20 = auVar25._0_8_;
    lVar11 = func_0x03ced81c(param_3,*(undefined8 *)puVar9);
    puVar3 = PTR_DAT_0777e5d0;
    puVar9 = PTR_DAT_0777e5c8;
    if ((lVar11 != 0) && (*(long *)(lVar14 + 0xb8) != 0)) {
      uVar12 = func_0x06769c6c(*(long *)(lVar14 + 0xb8),*(undefined8 *)(lVar11 + 0x30),0,0);
      uStack_138 = 0;
      func_0x0437ba9c(&uStack_138,8,*(undefined8 *)puVar3);
      uVar13 = func_0x03280ca0(*(undefined8 *)puVar9);
      func_0x061117a8(uVar13,0);
      uVar13 = func_0x06a13bc8(uVar12,uStack_138,uVar13,0,0);
      plVar22 = *(long **)(lVar14 + 0x18);
      if (plVar22 != (long *)0x0) {
        lVar8 = *plVar22;
        uVar21 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar21 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e5b8) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_06897984;
            }
            uVar21 = uVar21 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar21 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e5b8,0);
LAB_06897984:
        lVar8 = (*(code *)*puVar10)(plVar22,uVar20,uVar13,puVar10[1]);
        if ((lVar8 != 0) &&
           (lVar16 = func_0x03d20d84(lVar8,*(undefined8 *)PTR_DAT_0777e5a0), lVar16 != 0)) {
          *(undefined1 *)(lVar16 + 0x6d) = 1;
          puVar9 = PTR_DAT_077e6760;
          plVar22 = *(long **)(lVar14 + 0x10);
          if (plVar22 != (long *)0x0) {
            lVar17 = *plVar22;
            uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar21 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e5c0) {
                  puVar10 = (undefined8 *)(lVar17 + (long)(*piVar19 + 5) * 0x10 + 0x138);
                  goto LAB_06897a28;
                }
                uVar21 = uVar21 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar21 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e5c0,5);
LAB_06897a28:
            (*(code *)*puVar10)(plVar22,lVar8,puVar10[1]);
            uVar23 = *(undefined8 *)(lVar14 + 0xb8);
            uVar24 = *(undefined8 *)(lVar11 + 0x30);
            uVar13 = func_0x03ced81c(lVar11,*(undefined8 *)puVar9);
            func_0x0636f74c(uVar23,uVar12,uVar24,uVar13,0);
            puVar9 = PTR_DAT_0777a498;
            plVar22 = *(long **)(lVar14 + 0x40);
            if (plVar22 != (long *)0x0) {
              lVar11 = *plVar22;
              uVar21 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar21 != 0) {
                piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar10 = (undefined8 *)(lVar11 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
                    goto LAB_06897ac4;
                  }
                  uVar21 = uVar21 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar21 != 0);
              }
              puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777a498,0x14);
LAB_06897ac4:
              uVar12 = (*(code *)*puVar10)(plVar22,lVar16,puVar10[1]);
              puVar3 = PTR_DAT_07810740;
              plVar22 = *(long **)(lVar14 + 0x40);
              if (plVar22 != (long *)0x0) {
                lVar11 = *plVar22;
                uVar21 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar21 != 0) {
                  piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar9) {
                      puVar10 = (undefined8 *)(lVar11 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
                      goto LAB_06897b38;
                    }
                    uVar21 = uVar21 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar21 != 0);
                }
                puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar9,0x14);
LAB_06897b38:
                uVar13 = (*(code *)*puVar10)(plVar22,param_3,puVar10[1]);
                lVar11 = *(long *)(lVar14 + 0x28);
                uVar23 = func_0x03280ca0(*(undefined8 *)puVar3);
                func_0x060f3e1c(uVar23,uVar20,auVar25._8_8_ & 0xffffffff,uVar13,0);
                if (lVar11 != 0) {
                  func_0x03ea4d6c(lVar11,uVar23,*(undefined8 *)PTR_DAT_07810738);
                  puVar9 = PTR_DAT_0777e4a0;
                  plVar22 = *(long **)(lVar14 + 0xa8);
                  if (plVar22 != (long *)0x0) {
                    lVar11 = *plVar22;
                    uVar21 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    uVar23 = *(undefined8 *)PTR_DAT_0777e5f8;
                    if (uVar21 != 0) {
                      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e4a0) {
                          puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_06897bf8;
                        }
                        uVar21 = uVar21 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar21 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e4a0,0);
LAB_06897bf8:
                    uVar12 = (*(code *)*puVar10)(plVar22,uVar23,uVar12,lVar8,0,puVar10[1]);
                    puVar1 = PTR_DAT_077cc918;
                    puVar3 = PTR_DAT_077cc910;
                    plVar22 = *(long **)(lVar14 + 0xa8);
                    if (plVar22 != (long *)0x0) {
                      lVar11 = *plVar22;
                      uVar23 = *(undefined8 *)(param_3 + 4);
                      uVar21 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      uVar24 = *(undefined8 *)PTR_DAT_07778fa0;
                      if (uVar21 != 0) {
                        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)puVar9) {
                            puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_06897c8c;
                          }
                          uVar21 = uVar21 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar9,0);
LAB_06897c8c:
                      uVar23 = (*(code *)*puVar10)(plVar22,uVar24,uVar13,uVar23,0,puVar10[1]);
                      lVar8 = *(long *)(lVar14 + 0xb0);
                      lVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
                      func_0x04143c38(lVar11,*(undefined8 *)puVar1);
                      puVar9 = PTR_DAT_0777e4a8;
                      if (lVar11 != 0) {
                        lVar16 = *(long *)(lVar11 + 0x10);
                        lVar17 = *(long *)PTR_DAT_0777e4a8;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar15 = *(uint *)(lVar11 + 0x18);
                          if (uVar15 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar15 + 1;
                            puVar10 = (undefined8 *)(lVar16 + (long)(int)uVar15 * 8 + 0x20);
                            *puVar10 = uVar12;
                            func_0x032809c4(puVar10,uVar12);
                          }
                          else {
                            func_0x0414446c(lVar11,uVar12,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar16 = *(long *)(lVar11 + 0x10);
                          lVar17 = *(long *)puVar9;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar16 != 0) {
                            uVar15 = *(uint *)(lVar11 + 0x18);
                            if (uVar15 < *(uint *)(lVar16 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar15 + 1;
                              puVar10 = (undefined8 *)(lVar16 + (long)(int)uVar15 * 8 + 0x20);
                              *puVar10 = uVar23;
                              func_0x032809c4(puVar10,uVar23);
                            }
                            else {
                              func_0x0414446c(lVar11,uVar23,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar9 = PTR_DAT_07810748;
                            if (lVar8 != 0) {
                              func_0x03e4062c(lVar8,lVar11,*(undefined8 *)PTR_DAT_07810730);
                              lVar11 = func_0x03280ca0(*(undefined8 *)puVar9);
                              func_0x06a01fa4(lVar11,0);
                              if (lVar11 != 0) {
                                *(undefined8 *)(lVar11 + 0x18) = uVar20;
                                func_0x032809c4((undefined8 *)(lVar11 + 0x18),uVar20);
                                *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                func_0x032809c4((undefined8 *)(lVar11 + 0x10),uVar13);
                                if ((*(long *)(lVar14 + 0xd8) != 0) &&
                                   (lVar8 = *(long *)(*(long *)(lVar14 + 0xd8) + 0x30), lVar8 != 0))
                                {
                                  plVar22 = (long *)(lVar8 + 0x30);
                                  *plVar22 = lVar11;
                                  lVar11 = func_0x032809c4(plVar22,lVar11);
                                  return lVar11;
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
  lVar11 = func_0x03280cac();
  if ((bRam0000000007e28d99 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810750);
    bRam0000000007e28d99 = 1;
  }
  puVar6 = PTR_DAT_07780140;
  puVar5 = PTR_DAT_07780138;
  puVar4 = PTR_DAT_07780130;
  puVar2 = PTR_DAT_07780128;
  puVar1 = PTR_DAT_07780120;
  puVar3 = PTR_DAT_0777ebc8;
  puVar9 = PTR_DAT_0777ebb0;
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
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fb4e7c(uVar20,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar11 + 0x78) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x78),uVar20);
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04f610a8(uVar20,*(undefined8 *)puVar5);
  *(undefined8 *)(lVar11 + 0x80) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x80),uVar20);
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04f2ad28(uVar20,*(undefined8 *)puVar9);
  *(undefined8 *)(lVar11 + 0x88) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x88),uVar20);
  uVar20 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06898a68(uVar20,0);
  *(undefined8 *)(lVar11 + 0x90) = uVar20;
  func_0x032809c4((undefined8 *)(lVar11 + 0x90),uVar20);
  return lVar11;
}


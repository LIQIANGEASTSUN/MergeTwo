/* Ghidra 12.1.2 native pseudocode; RVA 0x665EABC; MergeEngine.ECS.Systems.Board.BoardSystem.SwapItems; status ok */

ulong MergeEngine_ECS_Systems_Board_BoardSystem__SwapItems
                (long param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x21;
  long unaff_x22;
  long *plVar17;
  undefined *unaff_x23;
  undefined *puVar18;
  undefined8 uVar19;
  long *unaff_x24;
  long *plVar20;
  long *plVar21;
  undefined *unaff_x25;
  long *plVar22;
  undefined8 unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar15 = 0x7e28000;
  if ((bRam0000000007e280db & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_07800cb8);
    func_0x03280a18(PTR_DAT_0777e5f8);
    bRam0000000007e280db = 1;
  }
  puVar18 = unaff_x23;
  plVar21 = unaff_x24;
  puVar4 = unaff_x25;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar7 = (undefined *)func_0x06a02444(*(long *)(param_1 + 0x88),param_2,0);
    if (*(long *)(param_1 + 0x88) != 0) {
      lVar8 = func_0x06a02444(*(long *)(param_1 + 0x88),param_3,0);
      puVar2 = PTR_DAT_0777a498;
      plVar20 = *(long **)(param_1 + 0x58);
      puVar18 = puVar7;
      plVar21 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        lVar15 = *plVar20;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
              goto LAB_0675ebe4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777a498,0x14);
LAB_0675ebe4:
        puVar10 = (undefined *)(*(code *)*puVar9)(plVar20,puVar7,puVar9[1]);
        plVar21 = *(long **)(param_1 + 0x58);
        lVar15 = lVar8;
        if (plVar21 != (long *)0x0) {
          lVar11 = *plVar21;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
                goto LAB_0675ec50;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(plVar21,*(long *)puVar2,0x14);
LAB_0675ec50:
          plVar20 = (long *)(*(code *)*puVar9)(plVar21,lVar8,puVar9[1]);
          puVar4 = puVar10;
          if (*(long *)(param_1 + 0x88) != 0) {
            param_4 = 0;
            func_0x06a0249c(*(long *)(param_1 + 0x88),param_3,puVar7);
            plVar21 = plVar20;
            if (*(long *)(param_1 + 0x88) != 0) {
              param_4 = 0;
              func_0x06a0249c(*(long *)(param_1 + 0x88),param_2,lVar8);
              plVar22 = *(long **)(param_1 + 0xd8);
              if (plVar22 != (long *)0x0) {
                lVar11 = *plVar22;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
                      goto LAB_0675ecf8;
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_077cc678,0x19);
LAB_0675ecf8:
                param_4 = puVar9[1];
                (*(code *)*puVar9)(plVar22,param_2,param_3);
                puVar3 = PTR_DAT_0777e5f8;
                puVar2 = PTR_DAT_0777e4a0;
                if ((puVar7 != (undefined *)0x0) &&
                   (param_3 = *(long **)(param_1 + 0x70), param_3 != (long *)0x0)) {
                  lVar11 = *param_3;
                  param_2 = *(long *)(puVar7 + 0x10);
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  puVar18 = *(undefined **)PTR_DAT_0777e5f8;
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_0675ed7c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e4a0,0);
LAB_0675ed7c:
                  param_4 = param_2;
                  plVar22 = (long *)(*(code *)*puVar9)(param_3,puVar18,puVar10,param_2,0,puVar9[1]);
                  puVar10 = PTR_DAT_077e71c8;
                  puVar7 = PTR_DAT_077e71c0;
                  if ((lVar8 != 0) &&
                     (plVar17 = *(long **)(param_1 + 0x70), param_2 = 0, plVar17 != (long *)0x0)) {
                    lVar15 = *plVar17;
                    param_4 = *(long *)(lVar8 + 0x10);
                    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    puVar18 = *(undefined **)puVar3;
                    if (uVar12 != 0) {
                      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                          puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_0675ee0c;
                        }
                        uVar12 = uVar12 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar2,0);
LAB_0675ee0c:
                    lVar8 = puVar9[1];
                    uVar12 = 0;
                    param_2 = (*(code *)*puVar9)(plVar17,puVar18,plVar20,param_4,0);
                    param_1 = *(long *)(param_1 + 0x78);
                    lVar15 = func_0x03280ca0(*(undefined8 *)puVar10);
                    func_0x04143c38(lVar15,*(undefined8 *)puVar7);
                    puVar2 = PTR_DAT_077e71b8;
                    param_3 = plVar22;
                    puVar4 = puVar7;
                    if (lVar15 != 0) {
                      lVar11 = *(long *)(lVar15 + 0x10);
                      lVar13 = *(long *)PTR_DAT_077e71b8;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      puVar18 = puVar2;
                      if (lVar11 != 0) {
                        uVar1 = *(uint *)(lVar15 + 0x18);
                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar9 = plVar22;
                          func_0x032809c4(puVar9,plVar22);
                        }
                        else {
                          func_0x0414446c(lVar15,plVar22,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar11 = *(long *)(lVar15 + 0x10);
                        lVar13 = *(long *)puVar2;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar11 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            plVar20 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar20 = param_2;
                            func_0x032809c4(plVar20,param_2);
                          }
                          else {
                            func_0x0414446c(lVar15,param_2,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          if (param_1 != 0) {
                            lVar11 = *(long *)PTR_DAT_07800cb8;
                            goto LAB_03e40d14;
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
  unaff_x25 = puVar4;
  unaff_x24 = plVar21;
  unaff_x23 = puVar18;
  unaff_x22 = param_2;
  unaff_x21 = param_3;
  unaff_x20 = lVar15;
  unaff_x19 = param_1;
  lVar15 = func_0x03280cac();
  func_0x0675ef68();
  if ((bRam0000000007e280dd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_07800cb8);
    func_0x03280a18(PTR_DAT_0777e5f8);
    bRam0000000007e280dd = 1;
  }
  plVar21 = *(long **)(lVar15 + 0x58);
  if (plVar21 != (long *)0x0) {
    lVar8 = *plVar21;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ad7c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ad7c:
    uVar16 = (*(code *)*puVar9)(plVar21,param_4,puVar9[1]);
    puVar4 = PTR_DAT_077e71c8;
    puVar18 = PTR_DAT_077e71c0;
    if ((param_4 != 0) && (plVar21 = *(long **)(lVar15 + 0x70), plVar21 != (long *)0x0)) {
      lVar8 = *plVar21;
      param_4 = *(long *)(param_4 + 0x10);
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar19 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0676ae10;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777e4a0,0);
LAB_0676ae10:
      lVar8 = puVar9[1];
      uVar12 = 0;
      uVar16 = (*(code *)*puVar9)(plVar21,uVar19,uVar16,param_4,0);
      param_1 = *(long *)(lVar15 + 0x78);
      lVar15 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(lVar15,*(undefined8 *)puVar18);
      if (lVar15 != 0) {
        lVar11 = *(long *)(lVar15 + 0x10);
        lVar13 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar15 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar16;
            func_0x032809c4(puVar9,uVar16);
          }
          else {
            func_0x0414446c(lVar15,uVar16,
                            *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          if (param_1 != 0) {
            lVar11 = *(long *)PTR_DAT_07800cb8;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
            unaff_x30 = 0x675ef40;
LAB_03e40d14:
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
            *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
            *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
            *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
            *(long *)((long)register0x00000008 + -8) = unaff_x19;
            lVar13 = lVar11;
            if (*(long *)(lVar11 + 0x38) == 0) {
              func_0x03280a18(PTR_DAT_0777ab30);
              if (*(long *)(lVar11 + 0x38) == 0) {
                func_0x03256878(lVar11);
              }
            }
            plVar21 = *(long **)(param_1 + 0x40);
            if (plVar21 == (long *)0x0) {
              auVar23 = func_0x03280cac();
              *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3e40df4;
              *(undefined **)((long)register0x00000008 + -0x58) = unaff_x23;
              *(long *)((long)register0x00000008 + -0x50) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x48) = lVar11;
              *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
              *(long *)((long)register0x00000008 + -0x38) = lVar15;
              lVar15 = lVar13;
              lVar11 = param_4;
              if (*(long *)(param_4 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_077507d0);
                func_0x03280a18(PTR_DAT_0775a958);
                func_0x03280a18(PTR_DAT_07750838);
                func_0x03280a18(PTR_DAT_07779e90);
                func_0x03280a18(PTR_DAT_0777ab38);
                if (*(long *)(param_4 + 0x38) == 0) {
                  func_0x03256878(param_4);
                }
              }
              plVar21 = *(long **)(auVar23._0_8_ + 0x40);
              lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar5,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar5 != 0) {
                lVar11 = *(long *)PTR_DAT_077507d0;
                lVar15 = lVar13;
                func_0x04fe2d7c(lVar5,*(undefined8 *)PTR_DAT_07779e90,lVar13,lVar11);
                if (plVar21 != (long *)0x0) {
                  lVar15 = *plVar21;
                  lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                  uVar16 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)(lVar8 + 0x20)) {
                        lVar15 = lVar15 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar8 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40f1c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  lVar15 = func_0x03256b10(plVar21);
LAB_03e40f1c:
                  lVar15 = func_0x03280b88(*(undefined8 *)(lVar15 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar12 = (**(code **)(lVar15 + 8))(plVar21,uVar16,auVar23._8_8_,lVar5,lVar15);
                  return uVar12;
                }
              }
              auVar24 = func_0x03280cac();
              *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3e40f54;
              *(undefined **)((long)register0x00000008 + -0x98) = unaff_x25;
              *(long **)((long)register0x00000008 + -0x90) = unaff_x24;
              *(long *)((long)register0x00000008 + -0x88) = lVar13;
              *(long *)((long)register0x00000008 + -0x80) = param_4;
              *(long *)((long)register0x00000008 + -0x78) = lVar5;
              *(long **)((long)register0x00000008 + -0x70) = plVar21;
              *(long *)((long)register0x00000008 + -0x68) = auVar23._8_8_;
              if (*(long *)(lVar8 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar8 + 0x38) == 0) {
                  func_0x03256878(lVar8);
                }
              }
              lVar5 = *(long *)PTR_DAT_0777ab40;
              lVar13 = *(long *)(lVar5 + 0x38);
              if (lVar13 == 0) {
                func_0x03256878(lVar5);
                lVar13 = *(long *)(lVar5 + 0x38);
              }
              lVar13 = *(long *)(lVar13 + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              if (*(int *)(lVar13 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar13 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              uVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))
                                 (auVar24._8_8_,lVar15,**(undefined8 **)(lVar13 + 0xb8));
              uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar6,auVar24._0_8_,lVar11,uVar12 & 0xffffffff,uVar16,0);
              return uVar6;
            }
            lVar8 = *plVar21;
            lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
            uVar16 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x20)) {
                  lVar8 = lVar8 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03e40dbc;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            lVar8 = func_0x03256b10(plVar21);
LAB_03e40dbc:
            lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar12 = (**(code **)(lVar8 + 8))(plVar21,uVar16,lVar15,0,lVar8);
            return uVar12;
          }
        }
      }
    }
  }
  auVar23 = func_0x03280cac();
  lVar15 = *(long *)(auVar23._0_8_ + 0x88);
  if (lVar15 != 0) {
    lVar15 = func_0x06a02444(lVar15,auVar23._8_8_,0);
    return (ulong)(lVar15 == 0);
  }
  func_0x03280cac();
  lVar15 = func_0x0676af24();
  return (ulong)(lVar15 != 0);
}


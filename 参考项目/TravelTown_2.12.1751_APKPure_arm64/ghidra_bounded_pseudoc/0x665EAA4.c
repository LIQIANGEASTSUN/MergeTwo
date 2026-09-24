/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665EAA4; bound 24 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.SwapItems; status ok */


ulong MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SwapItems
                (long param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar19;
  undefined8 uVar20;
  undefined *unaff_x23;
  undefined8 uVar21;
  undefined8 uVar22;
  long *unaff_x24;
  long *plVar23;
  undefined8 uVar24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  long *plVar25;
  undefined8 unaff_x27;
  undefined8 uVar26;
  undefined *unaff_x30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    unaff_x30 = &LAB_0675eabc;
    auVar27 = func_0x03280cac();
    param_2 = auVar27._8_8_;
    lVar6 = auVar27._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined **)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
  lVar16 = 0x7e28000;
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
  if (*(long *)(lVar6 + 0x88) != 0) {
    puVar7 = (undefined *)func_0x06a02444(*(long *)(lVar6 + 0x88),param_2,0);
    if (*(long *)(lVar6 + 0x88) != 0) {
      lVar8 = func_0x06a02444(*(long *)(lVar6 + 0x88),param_3,0);
      puVar2 = PTR_DAT_0777a498;
      plVar23 = *(long **)(lVar6 + 0x58);
      unaff_x23 = puVar7;
      unaff_x24 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        lVar16 = *plVar23;
        uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
              goto code_r0x0675ebe4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777a498,0x14);
code_r0x0675ebe4:
        puVar10 = (undefined *)(*(code *)*puVar9)(plVar23,puVar7,puVar9[1]);
        unaff_x24 = *(long **)(lVar6 + 0x58);
        lVar16 = lVar8;
        if (unaff_x24 != (long *)0x0) {
          lVar11 = *unaff_x24;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
                goto code_r0x0675ec50;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar2,0x14);
code_r0x0675ec50:
          plVar23 = (long *)(*(code *)*puVar9)(unaff_x24,lVar8,puVar9[1]);
          unaff_x25 = puVar10;
          if (*(long *)(lVar6 + 0x88) != 0) {
            param_4 = 0;
            func_0x06a0249c(*(long *)(lVar6 + 0x88),param_3,puVar7);
            unaff_x24 = plVar23;
            if (*(long *)(lVar6 + 0x88) != 0) {
              param_4 = 0;
              func_0x06a0249c(*(long *)(lVar6 + 0x88),param_2,lVar8);
              plVar25 = *(long **)(lVar6 + 0xd8);
              if (plVar25 != (long *)0x0) {
                lVar11 = *plVar25;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
                      goto code_r0x0675ecf8;
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_077cc678,0x19);
code_r0x0675ecf8:
                param_4 = puVar9[1];
                (*(code *)*puVar9)(plVar25,param_2,param_3);
                puVar3 = PTR_DAT_0777e5f8;
                puVar2 = PTR_DAT_0777e4a0;
                if ((puVar7 != (undefined *)0x0) &&
                   (param_3 = *(long **)(lVar6 + 0x70), param_3 != (long *)0x0)) {
                  lVar11 = *param_3;
                  param_2 = *(long *)(puVar7 + 0x10);
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  unaff_x23 = *(undefined **)PTR_DAT_0777e5f8;
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                        goto code_r0x0675ed7c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e4a0,0);
code_r0x0675ed7c:
                  param_4 = param_2;
                  plVar25 = (long *)(*(code *)*puVar9)(param_3,unaff_x23,puVar10,param_2,0,puVar9[1]
                                                      );
                  puVar10 = PTR_DAT_077e71c8;
                  puVar7 = PTR_DAT_077e71c0;
                  if (lVar8 != 0) {
                    plVar19 = *(long **)(lVar6 + 0x70);
                    param_2 = 0;
                    if (plVar19 != (long *)0x0) {
                      lVar16 = *plVar19;
                      param_4 = *(long *)(lVar8 + 0x10);
                      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      unaff_x23 = *(undefined **)puVar3;
                      if (uVar12 != 0) {
                        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                            puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                            goto code_r0x0675ee0c;
                          }
                          uVar12 = uVar12 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar9 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar2,0);
code_r0x0675ee0c:
                      lVar8 = puVar9[1];
                      uVar12 = 0;
                      param_2 = (*(code *)*puVar9)(plVar19,unaff_x23,plVar23,param_4,0);
                      lVar6 = *(long *)(lVar6 + 0x78);
                      lVar16 = func_0x03280ca0(*(undefined8 *)puVar10);
                      func_0x04143c38(lVar16,*(undefined8 *)puVar7);
                      puVar2 = PTR_DAT_077e71b8;
                      param_3 = plVar25;
                      unaff_x25 = puVar7;
                      if (lVar16 != 0) {
                        lVar11 = *(long *)(lVar16 + 0x10);
                        lVar13 = *(long *)PTR_DAT_077e71b8;
                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                        unaff_x23 = puVar2;
                        if (lVar11 != 0) {
                          uVar1 = *(uint *)(lVar16 + 0x18);
                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar9 = plVar25;
                            func_0x032809c4(puVar9,plVar25);
                          }
                          else {
                            func_0x0414446c(lVar16,plVar25,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar11 = *(long *)(lVar16 + 0x10);
                          lVar13 = *(long *)puVar2;
                          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar1 = *(uint *)(lVar16 + 0x18);
                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                              plVar23 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar23 = param_2;
                              func_0x032809c4(plVar23,param_2);
                            }
                            else {
                              func_0x0414446c(lVar16,param_2,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            if (lVar6 != 0) {
                              uVar18 = *(undefined8 *)((long)register0x00000008 + -0x10);
                              uVar15 = *(undefined8 *)((long)register0x00000008 + -8);
                              lVar11 = *(long *)PTR_DAT_07800cb8;
                              uVar21 = *(undefined8 *)((long)register0x00000008 + -0x20);
                              uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
                              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x30);
                              uVar20 = *(undefined8 *)((long)register0x00000008 + -0x28);
                              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
                              uVar26 = *(undefined8 *)((long)register0x00000008 + -0x50);
                              puVar4 = (undefined1 *)register0x00000008;
                              goto code_r0x03e40d14;
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
  *(undefined **)((long)register0x00000008 + -0x70) = &UNK_0675ef40;
  *(long *)((long)register0x00000008 + -0x60) = lVar16;
  *(long *)((long)register0x00000008 + -0x58) = lVar6;
  func_0x0675ef68();
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x88) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x80) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x78) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x70) = param_2;
  *(long **)((long)register0x00000008 + -0x68) = param_3;
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
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
  plVar23 = *(long **)(lVar11 + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar6 = *plVar23;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar14 + 0x14) * 0x10 + 0x138);
          goto code_r0x0676ad7c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777a498,0x14);
code_r0x0676ad7c:
    uVar18 = (*(code *)*puVar9)(plVar23,param_4,puVar9[1]);
    puVar2 = PTR_DAT_077e71c8;
    puVar7 = PTR_DAT_077e71c0;
    if ((param_4 != 0) && (plVar23 = *(long **)(lVar11 + 0x70), plVar23 != (long *)0x0)) {
      lVar6 = *plVar23;
      param_4 = *(long *)(param_4 + 0x10);
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar21 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0676ae10;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777e4a0,0);
code_r0x0676ae10:
      lVar8 = puVar9[1];
      uVar12 = 0;
      uVar18 = (*(code *)*puVar9)(plVar23,uVar21,uVar18,param_4,0);
      lVar6 = *(long *)(lVar11 + 0x78);
      lVar16 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x04143c38(lVar16,*(undefined8 *)puVar7);
      if (lVar16 != 0) {
        lVar11 = *(long *)(lVar16 + 0x10);
        lVar13 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar16 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar18;
            func_0x032809c4(puVar9,uVar18);
          }
          else {
            func_0x0414446c(lVar16,uVar18,
                            *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar6 != 0) {
            uVar18 = *(undefined8 *)((long)register0x00000008 + -0x60);
            uVar15 = *(undefined8 *)((long)register0x00000008 + -0x58);
            lVar11 = *(long *)PTR_DAT_07800cb8;
            uVar21 = *(undefined8 *)((long)register0x00000008 + -0x70);
            uVar17 = *(undefined8 *)((long)register0x00000008 + -0x68);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
            uVar20 = *(undefined8 *)((long)register0x00000008 + -0x78);
            puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
            uVar26 = *(undefined8 *)((long)register0x00000008 + -0x90);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
code_r0x03e40d14:
            *(undefined8 *)(puVar4 + -0x30) = uVar26;
            *(undefined8 *)(puVar4 + -0x20) = uVar21;
            *(undefined8 *)(puVar4 + -0x18) = uVar17;
            *(undefined8 *)(puVar4 + -0x10) = uVar18;
            *(undefined8 *)(puVar4 + -8) = uVar15;
            lVar13 = lVar11;
            if ((*(long *)(lVar11 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar11 + 0x38) == 0)) {
              func_0x03256878(lVar11);
            }
            plVar23 = *(long **)(lVar6 + 0x40);
            if (plVar23 == (long *)0x0) {
              auVar27 = func_0x03280cac();
              *(undefined **)(puVar4 + -0x60) = &UNK_03e40df4;
              *(undefined8 *)(puVar4 + -0x58) = uVar20;
              *(undefined8 *)(puVar4 + -0x50) = uVar21;
              *(long *)(puVar4 + -0x48) = lVar11;
              *(undefined8 *)(puVar4 + -0x40) = 0;
              *(long *)(puVar4 + -0x38) = lVar16;
              lVar6 = lVar13;
              lVar16 = param_4;
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
              plVar23 = *(long **)(auVar27._0_8_ + 0x40);
              lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar11,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar11 != 0) {
                lVar16 = *(long *)PTR_DAT_077507d0;
                lVar6 = lVar13;
                func_0x04fe2d7c(lVar11,*(undefined8 *)PTR_DAT_07779e90,lVar13,lVar16);
                if (plVar23 != (long *)0x0) {
                  lVar6 = *plVar23;
                  lVar16 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                  uVar18 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
                        lVar6 = lVar6 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) *
                                        0x10 + 0x138;
                        goto code_r0x03e40f1c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  lVar6 = func_0x03256b10(plVar23);
code_r0x03e40f1c:
                  lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar16);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar12 = (**(code **)(lVar6 + 8))(plVar23,uVar18,auVar27._8_8_,lVar11,lVar6);
                  return uVar12;
                }
              }
              auVar28 = func_0x03280cac();
              *(undefined **)(puVar4 + -0xa0) = &UNK_03e40f54;
              *(undefined8 *)(puVar4 + -0x98) = uVar24;
              *(undefined8 *)(puVar4 + -0x90) = uVar22;
              *(long *)(puVar4 + -0x88) = lVar13;
              *(long *)(puVar4 + -0x80) = param_4;
              *(long *)(puVar4 + -0x78) = lVar11;
              *(long **)(puVar4 + -0x70) = plVar23;
              *(long *)(puVar4 + -0x68) = auVar27._8_8_;
              if (*(long *)(lVar8 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar8 + 0x38) == 0) {
                  func_0x03256878(lVar8);
                }
              }
              lVar13 = *(long *)PTR_DAT_0777ab40;
              lVar11 = *(long *)(lVar13 + 0x38);
              if (lVar11 == 0) {
                func_0x03256878(lVar13);
                lVar11 = *(long *)(lVar13 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = func_0x0325681c();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = func_0x0325681c();
              }
              uVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x10))
                                 (auVar28._8_8_,lVar6,**(undefined8 **)(lVar11 + 0xb8));
              uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar5,auVar28._0_8_,lVar16,uVar12 & 0xffffffff,uVar18,0);
              return uVar5;
            }
            lVar6 = *plVar23;
            lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
            uVar18 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar8 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 +
                          0x138;
                  goto code_r0x03e40dbc;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            lVar6 = func_0x03256b10(plVar23);
code_r0x03e40dbc:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar12 = (**(code **)(lVar6 + 8))(plVar23,uVar18,lVar16,0,lVar6);
            return uVar12;
          }
        }
      }
    }
  }
  auVar27 = func_0x03280cac();
  *(undefined **)((long)register0x00000008 + -0xa0) = &UNK_0676aee4;
  lVar6 = *(long *)(auVar27._0_8_ + 0x88);
  if (lVar6 == 0) {
    func_0x03280cac();
    *(undefined **)((long)register0x00000008 + -0xb0) = &UNK_0676af0c;
    lVar6 = func_0x0676af24();
    return (ulong)(lVar6 != 0);
  }
  lVar6 = func_0x06a02444(lVar6,auVar27._8_8_,0);
  return (ulong)(lVar6 == 0);
}


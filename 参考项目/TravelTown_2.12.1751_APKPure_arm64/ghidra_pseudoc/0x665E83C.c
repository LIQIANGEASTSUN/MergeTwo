/* Ghidra 12.1.2 native pseudocode; RVA 0x665E83C; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.ResetInteractionAnimation; status ok */

ulong MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ResetInteractionAnimation
                (ulong param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 unaff_x19;
  long *plVar20;
  undefined8 unaff_x20;
  undefined8 uVar21;
  undefined8 *unaff_x21;
  undefined *unaff_x22;
  long *plVar22;
  undefined8 uVar23;
  undefined *unaff_x23;
  undefined8 uVar24;
  undefined8 uVar25;
  long *unaff_x24;
  undefined8 uVar26;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  long *plVar27;
  undefined8 unaff_x27;
  undefined8 uVar28;
  undefined8 unaff_x30;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e28085 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078079f8);
      func_0x03280a18(PTR_DAT_07807a00);
      func_0x03280a18(PTR_DAT_07807a08);
      func_0x03280a18(PTR_DAT_07807a10);
      func_0x03280a18(PTR_DAT_07807a18);
      bRam0000000007e28085 = 1;
    }
    puVar12 = PTR_DAT_07807a10;
    puVar4 = PTR_DAT_07807a00;
    puVar10 = PTR_DAT_078079f8;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x04145068((undefined1 *)((long)register0x00000008 + -0x48),*(long *)(param_1 + 0xd8),
                      *(undefined8 *)PTR_DAT_07807a18);
      while( true ) {
        uVar8 = func_0x051159b4((undefined1 *)((long)register0x00000008 + -0x48),
                                *(undefined8 *)puVar4);
        if ((uVar8 & 1) == 0) {
          uVar8 = func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),
                                  *(undefined8 *)puVar10);
          return uVar8;
        }
        plVar20 = *(long **)((long)register0x00000008 + -0x38);
        if (plVar20 == (long *)0x0) break;
        lVar13 = *plVar20;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar12) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_0675e944;
            }
            uVar8 = uVar8 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar8 != 0);
        }
        param_3 = (long *)0x2;
        puVar9 = (undefined8 *)func_0x03256b10(plVar20);
LAB_0675e944:
        (*(code *)*puVar9)(plVar20,puVar9[1]);
      }
      func_0x03280cac();
      unaff_x21 = (undefined8 *)puVar10;
      unaff_x22 = puVar12;
    }
    auVar32 = func_0x03280cac();
    uVar29 = auVar32._0_8_;
    if (auVar32._8_4_ == 1) {
      plVar20 = (long *)func_0x072ce910(uVar29);
      lVar13 = *plVar20;
      func_0x072ce920();
      uVar8 = func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),*unaff_x21);
      if (lVar13 == 0) {
        return uVar8;
      }
      func_0x03280ca4(lVar13);
    }
    func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),*unaff_x21);
    func_0x03365958(uVar29);
    func_0x03280ca4(0);
    param_1 = func_0x02f09514();
    *(code **)((long)register0x00000008 + -0x70) =
         MergeEngine_ECS_Systems_Board_BoardInteractionSystem__BoardItemDragCancelled;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar29;
    plVar20 = (long *)0x7e28000;
    uVar8 = param_1;
    if ((bRam0000000007e28084 & 1) == 0) {
      uVar8 = func_0x03280a18(PTR_DAT_077d7588);
      bRam0000000007e28084 = 1;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      return uVar8;
    }
    if (*(long *)(param_1 + 0x68) == 0) break;
    plVar20 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
    param_4 = 1;
    param_3 = plVar20;
    func_0x0675e7f0(param_1,plVar20);
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar13 = func_0x03ced81c(*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_077d7588),
       lVar13 == 0)) break;
    *(undefined1 *)(lVar13 + 0x2c) = 0;
    *(undefined1 *)(lVar13 + 0x67) = 0;
    MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DeselectItem(param_1);
    func_0x0675dcbc(param_1);
    MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EndDrag(param_1,plVar20);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x70);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  } while( true );
  auVar31 = func_0x03280cac();
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x675eaa4;
  lVar13 = *(long *)(auVar31._0_8_ + 0x40);
  auVar31._8_8_ = auVar31._8_8_;
  auVar31._0_8_ = lVar13;
  if (lVar13 == 0) {
    uVar29 = 0x675eabc;
    auVar31 = func_0x03280cac();
  }
  else {
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x80);
  }
  uVar24 = auVar31._8_8_;
  uVar8 = auVar31._0_8_;
  *(undefined8 *)(puVar6 + -0x50) = uVar29;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x26;
  *(undefined **)(puVar6 + -0x38) = unaff_x25;
  *(long **)(puVar6 + -0x30) = unaff_x24;
  *(undefined **)(puVar6 + -0x28) = unaff_x23;
  *(undefined **)(puVar6 + -0x20) = unaff_x22;
  *(undefined8 **)(puVar6 + -0x18) = unaff_x21;
  *(long **)(puVar6 + -0x10) = plVar20;
  *(ulong *)(puVar6 + -8) = param_1;
  lVar13 = 0x7e28000;
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
  if (*(long *)(uVar8 + 0x88) != 0) {
    puVar10 = (undefined *)func_0x06a02444(*(long *)(uVar8 + 0x88),uVar24,0);
    if (*(long *)(uVar8 + 0x88) != 0) {
      lVar11 = func_0x06a02444(*(long *)(uVar8 + 0x88),param_3,0);
      puVar4 = PTR_DAT_0777a498;
      plVar20 = *(long **)(uVar8 + 0x58);
      unaff_x23 = puVar10;
      unaff_x24 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        lVar13 = *plVar20;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 0x14) * 0x10 + 0x138);
              goto LAB_0675ebe4;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777a498,0x14);
LAB_0675ebe4:
        puVar12 = (undefined *)(*(code *)*puVar9)(plVar20,puVar10,puVar9[1]);
        unaff_x24 = *(long **)(uVar8 + 0x58);
        lVar13 = lVar11;
        if (unaff_x24 != (long *)0x0) {
          lVar14 = *unaff_x24;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0x14) * 0x10 + 0x138);
                goto LAB_0675ec50;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar4,0x14);
LAB_0675ec50:
          plVar20 = (long *)(*(code *)*puVar9)(unaff_x24,lVar11,puVar9[1]);
          unaff_x25 = puVar12;
          if (*(long *)(uVar8 + 0x88) != 0) {
            param_4 = 0;
            func_0x06a0249c(*(long *)(uVar8 + 0x88),param_3,puVar10);
            unaff_x24 = plVar20;
            if (*(long *)(uVar8 + 0x88) != 0) {
              param_4 = 0;
              func_0x06a0249c(*(long *)(uVar8 + 0x88),uVar24,lVar11);
              plVar27 = *(long **)(uVar8 + 0xd8);
              if (plVar27 != (long *)0x0) {
                lVar14 = *plVar27;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0x19) * 0x10 + 0x138);
                      goto LAB_0675ecf8;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar9 = (undefined8 *)func_0x03256b10(plVar27,*(long *)PTR_DAT_077cc678,0x19);
LAB_0675ecf8:
                param_4 = puVar9[1];
                (*(code *)*puVar9)(plVar27,uVar24,param_3);
                puVar5 = PTR_DAT_0777e5f8;
                puVar4 = PTR_DAT_0777e4a0;
                if ((puVar10 != (undefined *)0x0) &&
                   (param_3 = *(long **)(uVar8 + 0x70), param_3 != (long *)0x0)) {
                  lVar14 = *param_3;
                  param_4 = *(long *)(puVar10 + 0x10);
                  auVar31._8_8_ = param_4;
                  auVar31._0_8_ = uVar8;
                  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  unaff_x23 = *(undefined **)PTR_DAT_0777e5f8;
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_0675ed7c;
                      }
                      uVar16 = uVar16 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e4a0,0);
LAB_0675ed7c:
                  plVar27 = (long *)(*(code *)*puVar9)(param_3,unaff_x23,puVar12,param_4,0,puVar9[1]
                                                      );
                  puVar12 = PTR_DAT_077e71c8;
                  puVar10 = PTR_DAT_077e71c0;
                  if (lVar11 != 0) {
                    plVar22 = *(long **)(uVar8 + 0x70);
                    auVar31._8_8_ = 0;
                    if (plVar22 != (long *)0x0) {
                      lVar13 = *plVar22;
                      param_4 = *(long *)(lVar11 + 0x10);
                      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      unaff_x23 = *(undefined **)puVar5;
                      if (uVar16 != 0) {
                        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                            puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_0675ee0c;
                          }
                          uVar16 = uVar16 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar9 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar4,0);
LAB_0675ee0c:
                      lVar11 = puVar9[1];
                      uVar16 = 0;
                      uVar29 = (*(code *)*puVar9)(plVar22,unaff_x23,plVar20,param_4,0);
                      lVar14 = *(long *)(uVar8 + 0x78);
                      auVar3._8_8_ = uVar29;
                      auVar3._0_8_ = lVar14;
                      auVar2._8_8_ = uVar29;
                      auVar2._0_8_ = lVar14;
                      auVar30._8_8_ = uVar29;
                      auVar30._0_8_ = lVar14;
                      auVar31._8_8_ = uVar29;
                      auVar31._0_8_ = lVar14;
                      lVar13 = func_0x03280ca0(*(undefined8 *)puVar12);
                      func_0x04143c38(lVar13,*(undefined8 *)puVar10);
                      puVar4 = PTR_DAT_077e71b8;
                      param_3 = plVar27;
                      unaff_x25 = puVar10;
                      if (lVar13 != 0) {
                        lVar15 = *(long *)(lVar13 + 0x10);
                        lVar17 = *(long *)PTR_DAT_077e71b8;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        unaff_x23 = puVar4;
                        auVar31 = auVar30;
                        if (lVar15 != 0) {
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar9 = plVar27;
                            func_0x032809c4(puVar9,plVar27);
                          }
                          else {
                            func_0x0414446c(lVar13,plVar27,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar15 = *(long *)(lVar13 + 0x10);
                          lVar17 = *(long *)puVar4;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          auVar31 = auVar2;
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar13 + 0x18);
                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                              puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar9 = uVar29;
                              func_0x032809c4(puVar9,uVar29);
                            }
                            else {
                              func_0x0414446c(lVar13,uVar29,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                            }
                            auVar31 = auVar3;
                            if (lVar14 != 0) {
                              uVar29 = *(undefined8 *)(puVar6 + -0x10);
                              uVar19 = *(undefined8 *)(puVar6 + -8);
                              lVar15 = *(long *)PTR_DAT_07800cb8;
                              uVar24 = *(undefined8 *)(puVar6 + -0x20);
                              uVar21 = *(undefined8 *)(puVar6 + -0x18);
                              uVar25 = *(undefined8 *)(puVar6 + -0x30);
                              uVar23 = *(undefined8 *)(puVar6 + -0x28);
                              uVar26 = *(undefined8 *)(puVar6 + -0x38);
                              uVar28 = *(undefined8 *)(puVar6 + -0x50);
                              puVar7 = puVar6;
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
  }
  lVar14 = func_0x03280cac();
  *(undefined8 *)(puVar6 + -0x70) = 0x675ef40;
  *(long *)(puVar6 + -0x60) = lVar13;
  *(long *)(puVar6 + -0x58) = auVar31._0_8_;
  func_0x0675ef68();
  *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x70);
  *(undefined **)(puVar6 + -0x88) = unaff_x25;
  *(long **)(puVar6 + -0x80) = unaff_x24;
  *(undefined **)(puVar6 + -0x78) = unaff_x23;
  *(long *)(puVar6 + -0x70) = auVar31._8_8_;
  *(long **)(puVar6 + -0x68) = param_3;
  *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
  *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
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
  plVar20 = *(long **)(lVar14 + 0x58);
  if (plVar20 != (long *)0x0) {
    lVar13 = *plVar20;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ad7c;
        }
        uVar8 = uVar8 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ad7c:
    uVar29 = (*(code *)*puVar9)(plVar20,param_4,puVar9[1]);
    puVar4 = PTR_DAT_077e71c8;
    puVar10 = PTR_DAT_077e71c0;
    if ((param_4 != 0) && (plVar20 = *(long **)(lVar14 + 0x70), plVar20 != (long *)0x0)) {
      lVar13 = *plVar20;
      param_4 = *(long *)(param_4 + 0x10);
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar24 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0676ae10;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e4a0,0);
LAB_0676ae10:
      lVar11 = puVar9[1];
      uVar16 = 0;
      uVar29 = (*(code *)*puVar9)(plVar20,uVar24,uVar29,param_4,0);
      lVar14 = *(long *)(lVar14 + 0x78);
      lVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(lVar13,*(undefined8 *)puVar10);
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar13 + 0x10);
        lVar17 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar29;
            func_0x032809c4(puVar9,uVar29);
          }
          else {
            func_0x0414446c(lVar13,uVar29,
                            *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar14 != 0) {
            uVar29 = *(undefined8 *)(puVar6 + -0x60);
            uVar19 = *(undefined8 *)(puVar6 + -0x58);
            lVar15 = *(long *)PTR_DAT_07800cb8;
            uVar24 = *(undefined8 *)(puVar6 + -0x70);
            uVar21 = *(undefined8 *)(puVar6 + -0x68);
            uVar25 = *(undefined8 *)(puVar6 + -0x80);
            uVar23 = *(undefined8 *)(puVar6 + -0x78);
            puVar7 = puVar6 + -0x50;
            uVar28 = *(undefined8 *)(puVar6 + -0x90);
            uVar26 = *(undefined8 *)(puVar6 + -0x88);
LAB_03e40d14:
            *(undefined8 *)(puVar7 + -0x30) = uVar28;
            *(undefined8 *)(puVar7 + -0x20) = uVar24;
            *(undefined8 *)(puVar7 + -0x18) = uVar21;
            *(undefined8 *)(puVar7 + -0x10) = uVar29;
            *(undefined8 *)(puVar7 + -8) = uVar19;
            lVar17 = lVar15;
            if ((*(long *)(lVar15 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar15 + 0x38) == 0)) {
              func_0x03256878(lVar15);
            }
            plVar20 = *(long **)(lVar14 + 0x40);
            if (plVar20 == (long *)0x0) {
              auVar31 = func_0x03280cac();
              *(undefined8 *)(puVar7 + -0x60) = 0x3e40df4;
              *(undefined8 *)(puVar7 + -0x58) = uVar23;
              *(undefined8 *)(puVar7 + -0x50) = uVar24;
              *(long *)(puVar7 + -0x48) = lVar15;
              *(undefined8 *)(puVar7 + -0x40) = 0;
              *(long *)(puVar7 + -0x38) = lVar13;
              lVar13 = lVar17;
              lVar14 = param_4;
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
              plVar20 = *(long **)(auVar31._0_8_ + 0x40);
              lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar15,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar15 != 0) {
                lVar14 = *(long *)PTR_DAT_077507d0;
                lVar13 = lVar17;
                func_0x04fe2d7c(lVar15,*(undefined8 *)PTR_DAT_07779e90,lVar17,lVar14);
                if (plVar20 != (long *)0x0) {
                  lVar13 = *plVar20;
                  lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                  uVar29 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar8 != 0) {
                    piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)(lVar11 + 0x20)) {
                        lVar13 = lVar13 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar11 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40f1c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar8 != 0);
                  }
                  lVar13 = func_0x03256b10(plVar20);
LAB_03e40f1c:
                  lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (**(code **)(lVar13 + 8))(plVar20,uVar29,auVar31._8_8_,lVar15,lVar13);
                  return uVar8;
                }
              }
              auVar30 = func_0x03280cac();
              *(undefined8 *)(puVar7 + -0xa0) = 0x3e40f54;
              *(undefined8 *)(puVar7 + -0x98) = uVar26;
              *(undefined8 *)(puVar7 + -0x90) = uVar25;
              *(long *)(puVar7 + -0x88) = lVar17;
              *(long *)(puVar7 + -0x80) = param_4;
              *(long *)(puVar7 + -0x78) = lVar15;
              *(long **)(puVar7 + -0x70) = plVar20;
              *(long *)(puVar7 + -0x68) = auVar31._8_8_;
              if (*(long *)(lVar11 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar11 + 0x38) == 0) {
                  func_0x03256878(lVar11);
                }
              }
              lVar17 = *(long *)PTR_DAT_0777ab40;
              lVar15 = *(long *)(lVar17 + 0x38);
              if (lVar15 == 0) {
                func_0x03256878(lVar17);
                lVar15 = *(long *)(lVar17 + 0x38);
              }
              lVar15 = *(long *)(lVar15 + 0x10);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c();
              }
              if (*(int *)(lVar15 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar15 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c();
              }
              uVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 0x10))
                                 (auVar30._8_8_,lVar13,**(undefined8 **)(lVar15 + 0xb8));
              uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar8,auVar30._0_8_,lVar14,uVar16 & 0xffffffff,uVar29,0);
              return uVar8;
            }
            lVar11 = *plVar20;
            lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
            uVar29 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)(lVar14 + 0x20)) {
                  lVar11 = lVar11 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e40dbc;
                }
                uVar8 = uVar8 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar8 != 0);
            }
            lVar11 = func_0x03256b10(plVar20);
LAB_03e40dbc:
            lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar14);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(lVar11 + 8))(plVar20,uVar29,lVar13,0,lVar11);
            return uVar8;
          }
        }
      }
    }
  }
  auVar31 = func_0x03280cac();
  *(undefined8 *)(puVar6 + -0xa0) = 0x676aee4;
  lVar13 = *(long *)(auVar31._0_8_ + 0x88);
  if (lVar13 != 0) {
    lVar13 = func_0x06a02444(lVar13,auVar31._8_8_,0);
    return (ulong)(lVar13 == 0);
  }
  func_0x03280cac();
  *(undefined8 *)(puVar6 + -0xb0) = 0x676af0c;
  lVar13 = func_0x0676af24();
  return (ulong)(lVar13 != 0);
}


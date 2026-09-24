/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665E784; bound 108 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.SwapOrMoveBackItems; status ok */


/* WARNING: Possible PIC construction at 0x0675e7dc: Changing call to branch */

ulong MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SwapOrMoveBackItems
                (ulong param_1,undefined *param_2,long *param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  code **ppcVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long *unaff_x21;
  long lVar24;
  undefined *unaff_x22;
  long *plVar25;
  undefined8 uVar26;
  undefined *unaff_x23;
  undefined8 uVar27;
  undefined8 uVar28;
  long *unaff_x24;
  undefined8 uVar29;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar30;
  undefined *puVar31;
  code *pcVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  code *pcStack_40;
  undefined *puStack_18;
  
  puVar7 = &stack0xffffffffffffffe0;
  puStack_18 = param_2;
  if (((param_4 & 1) != 0) || ((param_5 & 1) != 0)) {
LAB_0675e7b8:
    uVar9 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__MoveItem
                      (param_1,puStack_18,puStack_18,0);
    return uVar9;
  }
  plVar15 = (long *)0x0;
  uVar9 = func_0x06a04f00(&puStack_18,param_3);
  if ((uVar9 & 1) != 0) goto LAB_0675e7b8;
  auVar33._8_8_ = puStack_18;
  auVar33._0_8_ = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar31 = (undefined *)0x675e7e0;
    uVar9 = param_1;
    plVar21 = param_3;
    goto code_r0x0675eabc;
  }
  lVar10 = func_0x03280cac();
  pcStack_40 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__MoveItem;
  lVar22 = *(long *)(lVar10 + 0x40);
  if (lVar22 == 0) {
    pcVar32 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ResetInteractionAnimation;
    uVar9 = func_0x03280cac();
    uVar14 = 0;
    ppcVar6 = &pcStack_40;
    do {
      *(code **)((long)ppcVar6 + -0x30) = pcVar32;
      *(undefined **)((long)ppcVar6 + -0x20) = unaff_x22;
      *(long **)((long)ppcVar6 + -0x18) = unaff_x21;
      *(undefined8 *)((long)ppcVar6 + -0x10) = uVar14;
      *(ulong *)((long)ppcVar6 + -8) = param_1;
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
      puVar31 = PTR_DAT_078079f8;
      *(undefined8 *)((long)ppcVar6 + -0x48) = 0;
      *(undefined8 *)((long)ppcVar6 + -0x40) = 0;
      *(undefined8 *)((long)ppcVar6 + -0x38) = 0;
      if (*(long *)(uVar9 + 0xd8) != 0) {
        func_0x04145068((undefined1 *)((long)ppcVar6 + -0x48),*(long *)(uVar9 + 0xd8),
                        *(undefined8 *)PTR_DAT_07807a18);
        while( true ) {
          uVar9 = func_0x051159b4((undefined1 *)((long)ppcVar6 + -0x48),*(undefined8 *)puVar4);
          if ((uVar9 & 1) == 0) {
            uVar9 = func_0x051159b0((undefined1 *)((long)ppcVar6 + -0x48),*(undefined8 *)puVar31);
            return uVar9;
          }
          plVar21 = *(long **)((long)ppcVar6 + -0x38);
          if (plVar21 == (long *)0x0) break;
          lVar10 = *plVar21;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar12) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_0675e944;
              }
              uVar9 = uVar9 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar9 != 0);
          }
          plVar15 = (long *)0x2;
          puVar13 = (undefined8 *)func_0x03256b10(plVar21);
LAB_0675e944:
          (*(code *)*puVar13)(plVar21,puVar13[1]);
        }
        func_0x03280cac();
        unaff_x21 = (long *)puVar31;
        unaff_x22 = puVar12;
      }
      auVar35 = func_0x03280cac();
      uVar14 = auVar35._0_8_;
      if (auVar35._8_4_ == 1) {
        plVar21 = (long *)func_0x072ce910(uVar14);
        lVar10 = *plVar21;
        func_0x072ce920();
        uVar9 = func_0x051159b0((undefined1 *)((long)ppcVar6 + -0x48),*unaff_x21);
        if (lVar10 == 0) {
          return uVar9;
        }
        func_0x03280ca4(lVar10);
      }
      func_0x051159b0((undefined1 *)((long)ppcVar6 + -0x48),*unaff_x21);
      func_0x03365958(uVar14);
      func_0x03280ca4(0);
      uVar9 = func_0x02f09514();
      *(code **)((long)ppcVar6 + -0x70) =
           MergeEngine_ECS_Systems_Board_BoardInteractionSystem__BoardItemDragCancelled;
      *(undefined8 *)((long)ppcVar6 + -0x60) = 0;
      *(undefined8 *)((long)ppcVar6 + -0x58) = uVar14;
      plVar21 = (long *)0x7e28000;
      uVar11 = uVar9;
      if ((bRam0000000007e28084 & 1) == 0) {
        uVar11 = func_0x03280a18(PTR_DAT_077d7588);
        bRam0000000007e28084 = 1;
      }
      if (*(long *)(uVar9 + 0x60) == 0) {
        return uVar11;
      }
      param_3 = plVar15;
      if (*(long *)(uVar9 + 0x68) == 0) goto LAB_0675eaa0;
      plVar21 = *(long **)(*(long *)(uVar9 + 0x68) + 0x30);
      param_4 = 1;
      plVar15 = plVar21;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__MoveItem(uVar9,plVar21);
      param_3 = plVar15;
      if ((*(long *)(uVar9 + 0x60) == 0) ||
         (lVar10 = func_0x03ced81c(*(long *)(uVar9 + 0x60),*(undefined8 *)PTR_DAT_077d7588),
         param_3 = plVar15, lVar10 == 0)) goto LAB_0675eaa0;
      *(undefined1 *)(lVar10 + 0x2c) = 0;
      *(undefined1 *)(lVar10 + 0x67) = 0;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DeselectItem(uVar9);
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ResetGuess(uVar9);
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EndDrag(uVar9,plVar21);
      uVar14 = *(undefined8 *)((long)ppcVar6 + -0x60);
      param_1 = *(ulong *)((long)ppcVar6 + -0x58);
      pcVar32 = *(code **)((long)ppcVar6 + -0x70);
      ppcVar6 = (code **)((long)ppcVar6 + -0x50);
    } while( true );
  }
  uVar9 = *(ulong *)(lVar10 + 0x68);
  uVar11 = func_0x0675ef68(lVar22);
  if ((param_4 & 1) == 0) {
    return uVar11;
  }
  puVar7 = &stack0xffffffffffffffe0;
  pcVar32 = pcStack_40;
  goto LAB_0676ac9c;
LAB_0675eaa0:
  auVar33 = func_0x03280cac();
  puVar7 = (undefined1 *)((long)ppcVar6 + -0x80);
  *(code **)((long)ppcVar6 + -0x80) =
       MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SwapItems;
  lVar10 = *(long *)(auVar33._0_8_ + 0x40);
  auVar33._8_8_ = auVar33._8_8_;
  auVar33._0_8_ = lVar10;
  if (lVar10 == 0) {
    puVar31 = &SUB_0675eabc;
    auVar33 = func_0x03280cac();
  }
  else {
    puVar7 = (undefined1 *)((long)ppcVar6 + -0x70);
    puVar31 = *(undefined **)((long)ppcVar6 + -0x80);
  }
code_r0x0675eabc:
  uVar14 = auVar33._8_8_;
  uVar11 = auVar33._0_8_;
  *(undefined **)(puVar7 + -0x50) = puVar31;
  *(undefined8 *)(puVar7 + -0x48) = unaff_x27;
  *(undefined8 *)(puVar7 + -0x40) = unaff_x26;
  *(undefined **)(puVar7 + -0x38) = unaff_x25;
  *(long **)(puVar7 + -0x30) = unaff_x24;
  *(undefined **)(puVar7 + -0x28) = unaff_x23;
  *(undefined **)(puVar7 + -0x20) = unaff_x22;
  *(long **)(puVar7 + -0x18) = unaff_x21;
  *(long **)(puVar7 + -0x10) = plVar21;
  *(ulong *)(puVar7 + -8) = uVar9;
  lVar10 = 0x7e28000;
  uVar9 = param_4;
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
    uVar9 = param_4;
  }
  unaff_x21 = param_3;
  if (*(long *)(uVar11 + 0x88) != 0) {
    puVar31 = (undefined *)func_0x06a02444(*(long *)(uVar11 + 0x88),uVar14,0);
    if (*(long *)(uVar11 + 0x88) != 0) {
      lVar22 = func_0x06a02444(*(long *)(uVar11 + 0x88),param_3,0);
      puVar4 = PTR_DAT_0777a498;
      plVar15 = *(long **)(uVar11 + 0x58);
      unaff_x23 = puVar31;
      unaff_x24 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        lVar10 = *plVar15;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
              goto code_r0x0675ebe4;
            }
            uVar16 = uVar16 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
code_r0x0675ebe4:
        puVar12 = (undefined *)(*(code *)*puVar13)(plVar15,puVar31,puVar13[1]);
        unaff_x24 = *(long **)(uVar11 + 0x58);
        lVar10 = lVar22;
        if (unaff_x24 != (long *)0x0) {
          lVar24 = *unaff_x24;
          uVar16 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar16 != 0) {
            piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                puVar13 = (undefined8 *)(lVar24 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
                goto code_r0x0675ec50;
              }
              uVar16 = uVar16 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar4,0x14);
code_r0x0675ec50:
          plVar15 = (long *)(*(code *)*puVar13)(unaff_x24,lVar22,puVar13[1]);
          unaff_x25 = puVar12;
          if (*(long *)(uVar11 + 0x88) != 0) {
            uVar9 = 0;
            func_0x06a0249c(*(long *)(uVar11 + 0x88),param_3,puVar31);
            unaff_x24 = plVar15;
            if (*(long *)(uVar11 + 0x88) != 0) {
              uVar9 = 0;
              func_0x06a0249c(*(long *)(uVar11 + 0x88),uVar14,lVar22);
              plVar21 = *(long **)(uVar11 + 0xd8);
              if (plVar21 != (long *)0x0) {
                lVar24 = *plVar21;
                uVar9 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar9 != 0) {
                  piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar13 = (undefined8 *)(lVar24 + (long)(*piVar19 + 0x19) * 0x10 + 0x138);
                      goto code_r0x0675ecf8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar9 != 0);
                }
                puVar13 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_077cc678,0x19);
code_r0x0675ecf8:
                uVar9 = puVar13[1];
                (*(code *)*puVar13)(plVar21,uVar14,param_3);
                puVar5 = PTR_DAT_0777e5f8;
                puVar4 = PTR_DAT_0777e4a0;
                if ((puVar31 != (undefined *)0x0) &&
                   (unaff_x21 = *(long **)(uVar11 + 0x70), unaff_x21 != (long *)0x0)) {
                  lVar24 = *unaff_x21;
                  uVar9 = *(ulong *)(puVar31 + 0x10);
                  auVar33._8_8_ = uVar9;
                  auVar33._0_8_ = uVar11;
                  uVar16 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  unaff_x23 = *(undefined **)PTR_DAT_0777e5f8;
                  if (uVar16 != 0) {
                    piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar13 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                        goto code_r0x0675ed7c;
                      }
                      uVar16 = uVar16 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(unaff_x21,*(long *)PTR_DAT_0777e4a0,0);
code_r0x0675ed7c:
                  plVar21 = (long *)(*(code *)*puVar13)(unaff_x21,unaff_x23,puVar12,uVar9,0,
                                                        puVar13[1]);
                  puVar12 = PTR_DAT_077e71c8;
                  puVar31 = PTR_DAT_077e71c0;
                  if (lVar22 != 0) {
                    plVar25 = *(long **)(uVar11 + 0x70);
                    auVar33._8_8_ = 0;
                    if (plVar25 != (long *)0x0) {
                      lVar10 = *plVar25;
                      uVar9 = *(ulong *)(lVar22 + 0x10);
                      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      unaff_x23 = *(undefined **)puVar5;
                      if (uVar16 != 0) {
                        piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                            puVar13 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                            goto code_r0x0675ee0c;
                          }
                          uVar16 = uVar16 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar4,0);
code_r0x0675ee0c:
                      lVar24 = puVar13[1];
                      uVar16 = 0;
                      uVar14 = (*(code *)*puVar13)(plVar25,unaff_x23,plVar15,uVar9,0);
                      lVar22 = *(long *)(uVar11 + 0x78);
                      auVar3._8_8_ = uVar14;
                      auVar3._0_8_ = lVar22;
                      auVar2._8_8_ = uVar14;
                      auVar2._0_8_ = lVar22;
                      auVar34._8_8_ = uVar14;
                      auVar34._0_8_ = lVar22;
                      auVar33._8_8_ = uVar14;
                      auVar33._0_8_ = lVar22;
                      lVar10 = func_0x03280ca0(*(undefined8 *)puVar12);
                      func_0x04143c38(lVar10,*(undefined8 *)puVar31);
                      puVar4 = PTR_DAT_077e71b8;
                      unaff_x21 = plVar21;
                      unaff_x25 = puVar31;
                      if (lVar10 != 0) {
                        lVar17 = *(long *)(lVar10 + 0x10);
                        lVar18 = *(long *)PTR_DAT_077e71b8;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        unaff_x23 = puVar4;
                        auVar33 = auVar34;
                        if (lVar17 != 0) {
                          uVar1 = *(uint *)(lVar10 + 0x18);
                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                            puVar13 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar13 = plVar21;
                            func_0x032809c4(puVar13,plVar21);
                          }
                          else {
                            func_0x0414446c(lVar10,plVar21,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar17 = *(long *)(lVar10 + 0x10);
                          lVar18 = *(long *)puVar4;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          auVar33 = auVar2;
                          if (lVar17 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              puVar13 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar13 = uVar14;
                              func_0x032809c4(puVar13,uVar14);
                            }
                            else {
                              func_0x0414446c(lVar10,uVar14,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                            }
                            auVar33 = auVar3;
                            if (lVar22 != 0) {
                              uVar14 = *(undefined8 *)(puVar7 + -0x10);
                              uVar20 = *(undefined8 *)(puVar7 + -8);
                              lVar17 = *(long *)PTR_DAT_07800cb8;
                              uVar27 = *(undefined8 *)(puVar7 + -0x20);
                              uVar23 = *(undefined8 *)(puVar7 + -0x18);
                              uVar28 = *(undefined8 *)(puVar7 + -0x30);
                              uVar26 = *(undefined8 *)(puVar7 + -0x28);
                              uVar29 = *(undefined8 *)(puVar7 + -0x38);
                              uVar30 = *(undefined8 *)(puVar7 + -0x50);
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
  unaff_x22 = auVar33._8_8_;
  lVar22 = func_0x03280cac();
  puVar8 = (undefined8 *)(puVar7 + -0x70);
  *(undefined **)(puVar7 + -0x70) = &UNK_0675ef40;
  *(long *)(puVar7 + -0x60) = lVar10;
  *(long *)(puVar7 + -0x58) = auVar33._0_8_;
  func_0x0675ef68();
  param_3 = *(long **)(puVar7 + -0x60);
  param_1 = *(ulong *)(puVar7 + -0x58);
  puVar7 = puVar7 + -0x50;
  pcVar32 = (code *)*puVar8;
LAB_0676ac9c:
  *(code **)(puVar7 + -0x40) = pcVar32;
  *(undefined **)(puVar7 + -0x38) = unaff_x25;
  *(long **)(puVar7 + -0x30) = unaff_x24;
  *(undefined **)(puVar7 + -0x28) = unaff_x23;
  *(undefined **)(puVar7 + -0x20) = unaff_x22;
  *(long **)(puVar7 + -0x18) = unaff_x21;
  *(long **)(puVar7 + -0x10) = param_3;
  *(ulong *)(puVar7 + -8) = param_1;
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
  plVar15 = *(long **)(lVar22 + 0x58);
  if (plVar15 != (long *)0x0) {
    lVar10 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar13 = (undefined8 *)(lVar10 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
          goto code_r0x0676ad7c;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
code_r0x0676ad7c:
    uVar14 = (*(code *)*puVar13)(plVar15,uVar9,puVar13[1]);
    puVar4 = PTR_DAT_077e71c8;
    puVar31 = PTR_DAT_077e71c0;
    if ((uVar9 != 0) && (plVar15 = *(long **)(lVar22 + 0x70), plVar15 != (long *)0x0)) {
      lVar10 = *plVar15;
      uVar9 = *(ulong *)(uVar9 + 0x10);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar27 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x0676ae10;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
code_r0x0676ae10:
      lVar24 = puVar13[1];
      uVar16 = 0;
      uVar14 = (*(code *)*puVar13)(plVar15,uVar27,uVar14,uVar9,0);
      lVar22 = *(long *)(lVar22 + 0x78);
      lVar10 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(lVar10,*(undefined8 *)puVar31);
      if (lVar10 != 0) {
        lVar17 = *(long *)(lVar10 + 0x10);
        lVar18 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar17 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar13 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
            *puVar13 = uVar14;
            func_0x032809c4(puVar13,uVar14);
          }
          else {
            func_0x0414446c(lVar10,uVar14,
                            *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar22 != 0) {
            uVar14 = *(undefined8 *)(puVar7 + -0x10);
            uVar20 = *(undefined8 *)(puVar7 + -8);
            lVar17 = *(long *)PTR_DAT_07800cb8;
            uVar27 = *(undefined8 *)(puVar7 + -0x20);
            uVar23 = *(undefined8 *)(puVar7 + -0x18);
            uVar28 = *(undefined8 *)(puVar7 + -0x30);
            uVar26 = *(undefined8 *)(puVar7 + -0x28);
            uVar30 = *(undefined8 *)(puVar7 + -0x40);
            uVar29 = *(undefined8 *)(puVar7 + -0x38);
code_r0x03e40d14:
            *(undefined8 *)(puVar7 + -0x30) = uVar30;
            *(undefined8 *)(puVar7 + -0x20) = uVar27;
            *(undefined8 *)(puVar7 + -0x18) = uVar23;
            *(undefined8 *)(puVar7 + -0x10) = uVar14;
            *(undefined8 *)(puVar7 + -8) = uVar20;
            lVar18 = lVar17;
            if ((*(long *)(lVar17 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar17 + 0x38) == 0)) {
              func_0x03256878(lVar17);
            }
            plVar15 = *(long **)(lVar22 + 0x40);
            if (plVar15 == (long *)0x0) {
              auVar33 = func_0x03280cac();
              *(undefined **)(puVar7 + -0x60) = &UNK_03e40df4;
              *(undefined8 *)(puVar7 + -0x58) = uVar26;
              *(undefined8 *)(puVar7 + -0x50) = uVar27;
              *(long *)(puVar7 + -0x48) = lVar17;
              *(undefined8 *)(puVar7 + -0x40) = 0;
              *(long *)(puVar7 + -0x38) = lVar10;
              lVar10 = lVar18;
              uVar11 = uVar9;
              if (*(long *)(uVar9 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_077507d0);
                func_0x03280a18(PTR_DAT_0775a958);
                func_0x03280a18(PTR_DAT_07750838);
                func_0x03280a18(PTR_DAT_07779e90);
                func_0x03280a18(PTR_DAT_0777ab38);
                if (*(long *)(uVar9 + 0x38) == 0) {
                  func_0x03256878(uVar9);
                }
              }
              plVar15 = *(long **)(auVar33._0_8_ + 0x40);
              lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar22,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar22 != 0) {
                uVar11 = *(ulong *)PTR_DAT_077507d0;
                lVar10 = lVar18;
                func_0x04fe2d7c(lVar22,*(undefined8 *)PTR_DAT_07779e90,lVar18,uVar11);
                if (plVar15 != (long *)0x0) {
                  lVar10 = *plVar15;
                  lVar24 = *(long *)(*(long *)(uVar9 + 0x38) + 8);
                  uVar14 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar9 != 0) {
                    piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)(lVar24 + 0x20)) {
                        lVar10 = lVar10 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar24 + 0x50)) *
                                          0x10 + 0x138;
                        goto code_r0x03e40f1c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar9 != 0);
                  }
                  lVar10 = func_0x03256b10(plVar15);
code_r0x03e40f1c:
                  lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar24);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar9 = (**(code **)(lVar10 + 8))(plVar15,uVar14,auVar33._8_8_,lVar22,lVar10);
                  return uVar9;
                }
              }
              auVar34 = func_0x03280cac();
              *(undefined **)(puVar7 + -0xa0) = &UNK_03e40f54;
              *(undefined8 *)(puVar7 + -0x98) = uVar29;
              *(undefined8 *)(puVar7 + -0x90) = uVar28;
              *(long *)(puVar7 + -0x88) = lVar18;
              *(ulong *)(puVar7 + -0x80) = uVar9;
              *(long *)(puVar7 + -0x78) = lVar22;
              *(long **)(puVar7 + -0x70) = plVar15;
              *(long *)(puVar7 + -0x68) = auVar33._8_8_;
              if (*(long *)(lVar24 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar24 + 0x38) == 0) {
                  func_0x03256878(lVar24);
                }
              }
              lVar17 = *(long *)PTR_DAT_0777ab40;
              lVar22 = *(long *)(lVar17 + 0x38);
              if (lVar22 == 0) {
                func_0x03256878(lVar17);
                lVar22 = *(long *)(lVar17 + 0x38);
              }
              lVar22 = *(long *)(lVar22 + 0x10);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c();
              }
              if (*(int *)(lVar22 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar22 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c();
              }
              uVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 0x10))
                                 (auVar34._8_8_,lVar10,**(undefined8 **)(lVar22 + 0xb8));
              uVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar9,auVar34._0_8_,uVar11,uVar16 & 0xffffffff,uVar14,0);
              return uVar9;
            }
            lVar22 = *plVar15;
            lVar24 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
            uVar14 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar9 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar9 != 0) {
              piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)(lVar24 + 0x20)) {
                  lVar22 = lVar22 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar24 + 0x50)) * 0x10
                           + 0x138;
                  goto code_r0x03e40dbc;
                }
                uVar9 = uVar9 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar9 != 0);
            }
            lVar22 = func_0x03256b10(plVar15);
code_r0x03e40dbc:
            lVar22 = func_0x03280b88(*(undefined8 *)(lVar22 + 8),lVar24);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (**(code **)(lVar22 + 8))(plVar15,uVar14,lVar10,0,lVar22);
            return uVar9;
          }
        }
      }
    }
  }
  auVar33 = func_0x03280cac();
  *(undefined **)(puVar7 + -0x50) = &UNK_0676aee4;
  lVar10 = *(long *)(auVar33._0_8_ + 0x88);
  if (lVar10 == 0) {
    func_0x03280cac();
    *(undefined **)(puVar7 + -0x60) = &UNK_0676af0c;
    lVar10 = func_0x0676af24();
    return (ulong)(lVar10 != 0);
  }
  lVar10 = func_0x06a02444(lVar10,auVar33._8_8_,0);
  return (ulong)(lVar10 == 0);
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x665E784; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.SwapOrMoveBackItems; status ok */

/* WARNING: Possible PIC construction at 0x0675e7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675ea40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675e7c8) */
/* WARNING: Removing unreachable block (ram,0x0675ea44) */
/* WARNING: Removing unreachable block (ram,0x0675ea4c) */
/* WARNING: Removing unreachable block (ram,0x0675ea60) */

ulong MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SwapOrMoveBackItems
                (ulong param_1,long *param_2,long *param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *unaff_x20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *unaff_x21;
  ulong uVar23;
  long lVar24;
  undefined *unaff_x22;
  long *plVar25;
  undefined8 uVar26;
  undefined *unaff_x23;
  undefined8 uVar27;
  long *unaff_x24;
  undefined8 uVar28;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  long *plVar29;
  undefined8 unaff_x27;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  long *plStack_18;
  
  plStack_18 = param_2;
  if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
    plVar12 = (long *)0x0;
    uVar8 = func_0x06a04f00(&plStack_18,param_3);
    unaff_x20 = param_3;
    if ((uVar8 & 1) != 0) goto LAB_0675e7b8;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar8 = func_0x0675eabc(*(long *)(param_1 + 0x40),plStack_18,param_3);
      return uVar8;
    }
    uVar31 = 0x675e7f0;
    auVar33 = func_0x03280cac();
    plVar19 = auVar33._8_8_;
    uVar8 = auVar33._0_8_;
    puVar7 = &stack0xffffffffffffffe0;
  }
  else {
LAB_0675e7b8:
    param_4 = 0;
    uVar31 = 0x675e7c8;
    puVar7 = &stack0xffffffffffffffe0;
    uVar8 = param_1;
    plVar19 = plStack_18;
    plVar12 = plStack_18;
  }
  while( true ) {
    *(undefined8 *)(puVar7 + -0x20) = uVar31;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x21;
    *(long **)(puVar7 + -0x10) = unaff_x20;
    *(ulong *)(puVar7 + -8) = param_1;
    lVar21 = *(long *)(uVar8 + 0x40);
    if (lVar21 != 0) break;
    lVar21 = func_0x03280cac(uVar8,plVar19);
    *(code **)(puVar7 + -0x50) =
         MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ResetInteractionAnimation;
    *(undefined **)(puVar7 + -0x40) = unaff_x22;
    *(undefined8 **)(puVar7 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(ulong *)(puVar7 + -0x28) = param_1;
    uVar23 = param_4;
    if ((bRam0000000007e28085 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078079f8);
      func_0x03280a18(PTR_DAT_07807a00);
      func_0x03280a18(PTR_DAT_07807a08);
      func_0x03280a18(PTR_DAT_07807a10);
      func_0x03280a18(PTR_DAT_07807a18);
      bRam0000000007e28085 = 1;
      uVar23 = param_4;
    }
    puVar10 = PTR_DAT_07807a10;
    puVar4 = PTR_DAT_07807a00;
    puVar9 = PTR_DAT_078079f8;
    *(undefined8 *)(puVar7 + -0x68) = 0;
    *(undefined8 *)(puVar7 + -0x60) = 0;
    *(undefined8 *)(puVar7 + -0x58) = 0;
    if (*(long *)(lVar21 + 0xd8) != 0) {
      func_0x04145068(puVar7 + -0x68,*(long *)(lVar21 + 0xd8),*(undefined8 *)PTR_DAT_07807a18);
      while( true ) {
        uVar8 = func_0x051159b4(puVar7 + -0x68,*(undefined8 *)puVar4);
        if ((uVar8 & 1) == 0) {
          uVar8 = func_0x051159b0(puVar7 + -0x68,*(undefined8 *)puVar9);
          return uVar8;
        }
        plVar19 = *(long **)(puVar7 + -0x58);
        if (plVar19 == (long *)0x0) break;
        lVar21 = *plVar19;
        uVar8 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar10) {
              puVar11 = (undefined8 *)(lVar21 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_0675e944;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        plVar12 = (long *)0x2;
        puVar11 = (undefined8 *)func_0x03256b10(plVar19);
LAB_0675e944:
        (*(code *)*puVar11)(plVar19,puVar11[1]);
      }
      func_0x03280cac();
      unaff_x21 = (undefined8 *)puVar9;
      unaff_x22 = puVar10;
    }
    auVar34 = func_0x03280cac();
    uVar31 = auVar34._0_8_;
    if (auVar34._8_4_ == 1) {
      plVar19 = (long *)func_0x072ce910(uVar31);
      lVar21 = *plVar19;
      func_0x072ce920();
      uVar8 = func_0x051159b0(puVar7 + -0x68,*unaff_x21);
      if (lVar21 == 0) {
        return uVar8;
      }
      func_0x03280ca4(lVar21);
    }
    func_0x051159b0(puVar7 + -0x68,*unaff_x21);
    func_0x03365958(uVar31);
    func_0x03280ca4(0);
    uVar8 = func_0x02f09514();
    *(undefined8 *)(puVar7 + -0x90) = 0x675e9f0;
    *(undefined8 *)(puVar7 + -0x80) = 0;
    *(undefined8 *)(puVar7 + -0x78) = uVar31;
    uVar13 = uVar8;
    if ((bRam0000000007e28084 & 1) == 0) {
      uVar13 = func_0x03280a18(PTR_DAT_077d7588);
      bRam0000000007e28084 = 1;
    }
    if (*(long *)(uVar8 + 0x60) == 0) {
      return uVar13;
    }
    if (*(long *)(uVar8 + 0x68) == 0) {
      auVar33 = func_0x03280cac();
      *(undefined8 *)(puVar7 + -0xa0) = 0x675eaa4;
      lVar21 = *(long *)(auVar33._0_8_ + 0x40);
      auVar33._8_8_ = auVar33._8_8_;
      auVar33._0_8_ = lVar21;
      if (lVar21 == 0) {
        uVar31 = 0x675eabc;
        auVar33 = func_0x03280cac();
        puVar7 = puVar7 + -0xa0;
      }
      else {
        uVar31 = *(undefined8 *)(puVar7 + -0xa0);
        puVar7 = puVar7 + -0x90;
      }
      uVar27 = auVar33._8_8_;
      uVar13 = auVar33._0_8_;
      *(undefined8 *)(puVar7 + -0x50) = uVar31;
      *(undefined8 *)(puVar7 + -0x48) = unaff_x27;
      *(undefined8 *)(puVar7 + -0x40) = unaff_x26;
      *(undefined **)(puVar7 + -0x38) = unaff_x25;
      *(long **)(puVar7 + -0x30) = unaff_x24;
      *(undefined **)(puVar7 + -0x28) = unaff_x23;
      *(undefined **)(puVar7 + -0x20) = unaff_x22;
      *(undefined8 **)(puVar7 + -0x18) = unaff_x21;
      *(undefined8 *)(puVar7 + -0x10) = 0x7e28000;
      *(ulong *)(puVar7 + -8) = uVar8;
      lVar14 = 0x7e28000;
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
      if (*(long *)(uVar13 + 0x88) == 0) goto LAB_0675ef3c;
      puVar9 = (undefined *)func_0x06a02444(*(long *)(uVar13 + 0x88),uVar27,0);
      if (*(long *)(uVar13 + 0x88) == 0) goto LAB_0675ef3c;
      lVar21 = func_0x06a02444(*(long *)(uVar13 + 0x88),plVar12,0);
      puVar4 = PTR_DAT_0777a498;
      plVar19 = *(long **)(uVar13 + 0x58);
      unaff_x23 = puVar9;
      unaff_x24 = (long *)0x0;
      if (plVar19 == (long *)0x0) goto LAB_0675ef3c;
      lVar14 = *plVar19;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 == 0) goto LAB_0675ebc4;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      goto LAB_0675ebac;
    }
    plVar19 = *(long **)(*(long *)(uVar8 + 0x68) + 0x30);
    param_4 = 1;
    uVar31 = 0x675ea44;
    puVar7 = puVar7 + -0x90;
    plVar12 = plVar19;
    param_1 = uVar8;
    unaff_x20 = plVar19;
  }
  uVar23 = *(ulong *)(uVar8 + 0x68);
  uVar8 = func_0x0675ef68(lVar21);
  if ((param_4 & 1) == 0) {
    return uVar8;
  }
  uVar31 = *(undefined8 *)(puVar7 + -0x10);
  uVar20 = *(undefined8 *)(puVar7 + -8);
  uVar27 = *(undefined8 *)(puVar7 + -0x20);
  plVar12 = *(long **)(puVar7 + -0x18);
  goto LAB_0676ac9c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_0675ebac:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a498) {
      puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
      goto LAB_0675ebe4;
    }
  }
LAB_0675ebc4:
  puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777a498,0x14);
LAB_0675ebe4:
  puVar10 = (undefined *)(*(code *)*puVar11)(plVar19,puVar9,puVar11[1]);
  unaff_x24 = *(long **)(uVar13 + 0x58);
  lVar14 = lVar21;
  if (unaff_x24 != (long *)0x0) {
    lVar24 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
          goto LAB_0675ec50;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar4,0x14);
LAB_0675ec50:
    plVar19 = (long *)(*(code *)*puVar11)(unaff_x24,lVar21,puVar11[1]);
    unaff_x25 = puVar10;
    if (*(long *)(uVar13 + 0x88) != 0) {
      uVar23 = 0;
      func_0x06a0249c(*(long *)(uVar13 + 0x88),plVar12,puVar9);
      unaff_x24 = plVar19;
      if (*(long *)(uVar13 + 0x88) != 0) {
        uVar23 = 0;
        func_0x06a0249c(*(long *)(uVar13 + 0x88),uVar27,lVar21);
        plVar29 = *(long **)(uVar13 + 0xd8);
        if (plVar29 != (long *)0x0) {
          lVar24 = *plVar29;
          uVar8 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077cc678) {
                puVar11 = (undefined8 *)(lVar24 + (long)(*piVar17 + 0x19) * 0x10 + 0x138);
                goto LAB_0675ecf8;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_077cc678,0x19);
LAB_0675ecf8:
          uVar23 = puVar11[1];
          (*(code *)*puVar11)(plVar29,uVar27,plVar12);
          puVar5 = PTR_DAT_0777e5f8;
          puVar4 = PTR_DAT_0777e4a0;
          if ((puVar9 != (undefined *)0x0) &&
             (plVar12 = *(long **)(uVar13 + 0x70), plVar12 != (long *)0x0)) {
            lVar24 = *plVar12;
            uVar23 = *(ulong *)(puVar9 + 0x10);
            auVar33._8_8_ = uVar23;
            auVar33._0_8_ = uVar13;
            uVar8 = (ulong)*(ushort *)(lVar24 + 0x12e);
            unaff_x23 = *(undefined **)PTR_DAT_0777e5f8;
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e4a0) {
                  puVar11 = (undefined8 *)(lVar24 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0675ed7c;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777e4a0,0);
LAB_0675ed7c:
            plVar29 = (long *)(*(code *)*puVar11)(plVar12,unaff_x23,puVar10,uVar23,0,puVar11[1]);
            puVar10 = PTR_DAT_077e71c8;
            puVar9 = PTR_DAT_077e71c0;
            if (lVar21 != 0) {
              plVar25 = *(long **)(uVar13 + 0x70);
              auVar33._8_8_ = 0;
              if (plVar25 != (long *)0x0) {
                lVar14 = *plVar25;
                uVar23 = *(ulong *)(lVar21 + 0x10);
                uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
                unaff_x23 = *(undefined **)puVar5;
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0675ee0c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar11 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar4,0);
LAB_0675ee0c:
                lVar24 = puVar11[1];
                uVar8 = 0;
                uVar31 = (*(code *)*puVar11)(plVar25,unaff_x23,plVar19,uVar23,0);
                lVar21 = *(long *)(uVar13 + 0x78);
                auVar3._8_8_ = uVar31;
                auVar3._0_8_ = lVar21;
                auVar2._8_8_ = uVar31;
                auVar2._0_8_ = lVar21;
                auVar32._8_8_ = uVar31;
                auVar32._0_8_ = lVar21;
                auVar33._8_8_ = uVar31;
                auVar33._0_8_ = lVar21;
                lVar14 = func_0x03280ca0(*(undefined8 *)puVar10);
                func_0x04143c38(lVar14,*(undefined8 *)puVar9);
                puVar4 = PTR_DAT_077e71b8;
                plVar12 = plVar29;
                unaff_x25 = puVar9;
                if (lVar14 != 0) {
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar16 = *(long *)PTR_DAT_077e71b8;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  unaff_x23 = puVar4;
                  auVar33 = auVar32;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar11 = plVar29;
                      func_0x032809c4(puVar11,plVar29);
                    }
                    else {
                      func_0x0414446c(lVar14,plVar29,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar15 = *(long *)(lVar14 + 0x10);
                    lVar16 = *(long *)puVar4;
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    auVar33 = auVar2;
                    if (lVar15 != 0) {
                      uVar1 = *(uint *)(lVar14 + 0x18);
                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                        puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar11 = uVar31;
                        func_0x032809c4(puVar11,uVar31);
                      }
                      else {
                        func_0x0414446c(lVar14,uVar31,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      auVar33 = auVar3;
                      if (lVar21 != 0) {
                        uVar31 = *(undefined8 *)(puVar7 + -0x10);
                        uVar18 = *(undefined8 *)(puVar7 + -8);
                        lVar15 = *(long *)PTR_DAT_07800cb8;
                        uVar27 = *(undefined8 *)(puVar7 + -0x20);
                        uVar22 = *(undefined8 *)(puVar7 + -0x18);
                        uVar20 = *(undefined8 *)(puVar7 + -0x30);
                        uVar26 = *(undefined8 *)(puVar7 + -0x28);
                        uVar28 = *(undefined8 *)(puVar7 + -0x38);
                        uVar30 = *(undefined8 *)(puVar7 + -0x50);
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
LAB_0675ef3c:
  unaff_x22 = auVar33._8_8_;
  lVar21 = func_0x03280cac();
  puVar6 = (undefined8 *)(puVar7 + -0x70);
  *(undefined8 *)(puVar7 + -0x70) = 0x675ef40;
  *(long *)(puVar7 + -0x60) = lVar14;
  *(long *)(puVar7 + -0x58) = auVar33._0_8_;
  func_0x0675ef68();
  uVar31 = *(undefined8 *)(puVar7 + -0x60);
  uVar20 = *(undefined8 *)(puVar7 + -0x58);
  puVar7 = puVar7 + -0x50;
  uVar27 = *puVar6;
LAB_0676ac9c:
  *(undefined8 *)(puVar7 + -0x40) = uVar27;
  *(undefined **)(puVar7 + -0x38) = unaff_x25;
  *(long **)(puVar7 + -0x30) = unaff_x24;
  *(undefined **)(puVar7 + -0x28) = unaff_x23;
  *(undefined **)(puVar7 + -0x20) = unaff_x22;
  *(long **)(puVar7 + -0x18) = plVar12;
  *(undefined8 *)(puVar7 + -0x10) = uVar31;
  *(undefined8 *)(puVar7 + -8) = uVar20;
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
  plVar12 = *(long **)(lVar21 + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ad7c;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ad7c:
    uVar31 = (*(code *)*puVar11)(plVar12,uVar23,puVar11[1]);
    puVar4 = PTR_DAT_077e71c8;
    puVar9 = PTR_DAT_077e71c0;
    if ((uVar23 != 0) && (plVar12 = *(long **)(lVar21 + 0x70), plVar12 != (long *)0x0)) {
      lVar14 = *plVar12;
      uVar23 = *(ulong *)(uVar23 + 0x10);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar27 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0676ae10;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777e4a0,0);
LAB_0676ae10:
      lVar24 = puVar11[1];
      uVar8 = 0;
      uVar31 = (*(code *)*puVar11)(plVar12,uVar27,uVar31,uVar23,0);
      lVar21 = *(long *)(lVar21 + 0x78);
      lVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(lVar14,*(undefined8 *)puVar9);
      if (lVar14 != 0) {
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar11 = uVar31;
            func_0x032809c4(puVar11,uVar31);
          }
          else {
            func_0x0414446c(lVar14,uVar31,
                            *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar21 != 0) {
            uVar31 = *(undefined8 *)(puVar7 + -0x10);
            uVar18 = *(undefined8 *)(puVar7 + -8);
            lVar15 = *(long *)PTR_DAT_07800cb8;
            uVar27 = *(undefined8 *)(puVar7 + -0x20);
            uVar22 = *(undefined8 *)(puVar7 + -0x18);
            uVar20 = *(undefined8 *)(puVar7 + -0x30);
            uVar26 = *(undefined8 *)(puVar7 + -0x28);
            uVar30 = *(undefined8 *)(puVar7 + -0x40);
            uVar28 = *(undefined8 *)(puVar7 + -0x38);
LAB_03e40d14:
            *(undefined8 *)(puVar7 + -0x30) = uVar30;
            *(undefined8 *)(puVar7 + -0x20) = uVar27;
            *(undefined8 *)(puVar7 + -0x18) = uVar22;
            *(undefined8 *)(puVar7 + -0x10) = uVar31;
            *(undefined8 *)(puVar7 + -8) = uVar18;
            lVar16 = lVar15;
            if ((*(long *)(lVar15 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar15 + 0x38) == 0)) {
              func_0x03256878(lVar15);
            }
            plVar12 = *(long **)(lVar21 + 0x40);
            if (plVar12 == (long *)0x0) {
              auVar33 = func_0x03280cac();
              *(undefined8 *)(puVar7 + -0x60) = 0x3e40df4;
              *(undefined8 *)(puVar7 + -0x58) = uVar26;
              *(undefined8 *)(puVar7 + -0x50) = uVar27;
              *(long *)(puVar7 + -0x48) = lVar15;
              *(undefined8 *)(puVar7 + -0x40) = 0;
              *(long *)(puVar7 + -0x38) = lVar14;
              lVar21 = lVar16;
              uVar13 = uVar23;
              if (*(long *)(uVar23 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_077507d0);
                func_0x03280a18(PTR_DAT_0775a958);
                func_0x03280a18(PTR_DAT_07750838);
                func_0x03280a18(PTR_DAT_07779e90);
                func_0x03280a18(PTR_DAT_0777ab38);
                if (*(long *)(uVar23 + 0x38) == 0) {
                  func_0x03256878(uVar23);
                }
              }
              plVar12 = *(long **)(auVar33._0_8_ + 0x40);
              lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar14,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar14 != 0) {
                uVar13 = *(ulong *)PTR_DAT_077507d0;
                lVar21 = lVar16;
                func_0x04fe2d7c(lVar14,*(undefined8 *)PTR_DAT_07779e90,lVar16,uVar13);
                if (plVar12 != (long *)0x0) {
                  lVar21 = *plVar12;
                  lVar24 = *(long *)(*(long *)(uVar23 + 0x38) + 8);
                  uVar31 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar8 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar8 != 0) {
                    piVar17 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)(lVar24 + 0x20)) {
                        lVar21 = lVar21 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar24 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40f1c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar8 != 0);
                  }
                  lVar21 = func_0x03256b10(plVar12);
LAB_03e40f1c:
                  lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar24);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (**(code **)(lVar21 + 8))(plVar12,uVar31,auVar33._8_8_,lVar14,lVar21);
                  return uVar8;
                }
              }
              auVar32 = func_0x03280cac();
              *(undefined8 *)(puVar7 + -0xa0) = 0x3e40f54;
              *(undefined8 *)(puVar7 + -0x98) = uVar28;
              *(undefined8 *)(puVar7 + -0x90) = uVar20;
              *(long *)(puVar7 + -0x88) = lVar16;
              *(ulong *)(puVar7 + -0x80) = uVar23;
              *(long *)(puVar7 + -0x78) = lVar14;
              *(long **)(puVar7 + -0x70) = plVar12;
              *(long *)(puVar7 + -0x68) = auVar33._8_8_;
              if (*(long *)(lVar24 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar24 + 0x38) == 0) {
                  func_0x03256878(lVar24);
                }
              }
              lVar15 = *(long *)PTR_DAT_0777ab40;
              lVar14 = *(long *)(lVar15 + 0x38);
              if (lVar14 == 0) {
                func_0x03256878(lVar15);
                lVar14 = *(long *)(lVar15 + 0x38);
              }
              lVar14 = *(long *)(lVar14 + 0x10);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c();
              }
              if (*(int *)(lVar14 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = func_0x0325681c();
              }
              uVar31 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 0x10))
                                 (auVar32._8_8_,lVar21,**(undefined8 **)(lVar14 + 0xb8));
              uVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar23,auVar32._0_8_,uVar13,uVar8 & 0xffffffff,uVar31,0);
              return uVar23;
            }
            lVar21 = *plVar12;
            lVar24 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
            uVar31 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar8 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar24 + 0x20)) {
                  lVar21 = lVar21 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar24 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e40dbc;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            lVar21 = func_0x03256b10(plVar12);
LAB_03e40dbc:
            lVar21 = func_0x03280b88(*(undefined8 *)(lVar21 + 8),lVar24);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(lVar21 + 8))(plVar12,uVar31,lVar14,0,lVar21);
            return uVar8;
          }
        }
      }
    }
  }
  auVar33 = func_0x03280cac();
  *(undefined8 *)(puVar7 + -0x50) = 0x676aee4;
  lVar21 = *(long *)(auVar33._0_8_ + 0x88);
  if (lVar21 == 0) {
    func_0x03280cac();
    *(undefined8 *)(puVar7 + -0x60) = 0x676af0c;
    lVar21 = func_0x0676af24();
    return (ulong)(lVar21 != 0);
  }
  lVar21 = func_0x06a02444(lVar21,auVar33._8_8_,0);
  return (ulong)(lVar21 == 0);
}


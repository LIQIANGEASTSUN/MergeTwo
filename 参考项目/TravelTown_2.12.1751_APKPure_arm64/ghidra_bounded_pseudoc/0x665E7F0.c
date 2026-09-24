/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665E7F0; bound 76 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.MoveItem; status ok */


ulong MergeEngine_ECS_Systems_Board_BoardInteractionSystem__MoveItem
                (long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar18;
  undefined8 uVar19;
  long *unaff_x21;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined *unaff_x22;
  long *plVar23;
  undefined8 uVar24;
  undefined *unaff_x23;
  undefined8 uVar25;
  undefined8 uVar26;
  long *unaff_x24;
  undefined8 uVar27;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  long *plVar28;
  undefined8 unaff_x27;
  undefined8 uVar29;
  undefined8 unaff_x30;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  
  lVar18 = *(long *)(param_1 + 0x40);
  if (lVar18 == 0) {
    puVar30 = &SUB_0675e83c;
    uVar8 = func_0x03280cac();
    uVar11 = 0;
    puVar6 = &stack0xffffffffffffffe0;
    do {
      *(undefined **)(puVar6 + -0x30) = puVar30;
      *(undefined **)(puVar6 + -0x20) = unaff_x22;
      *(long **)(puVar6 + -0x18) = unaff_x21;
      *(undefined8 *)(puVar6 + -0x10) = uVar11;
      *(undefined8 *)(puVar6 + -8) = unaff_x19;
      if ((bRam0000000007e28085 & 1) == 0) {
        func_0x03280a18(PTR_DAT_078079f8);
        func_0x03280a18(PTR_DAT_07807a00);
        func_0x03280a18(PTR_DAT_07807a08);
        func_0x03280a18(PTR_DAT_07807a10);
        func_0x03280a18(PTR_DAT_07807a18);
        bRam0000000007e28085 = 1;
      }
      puVar9 = PTR_DAT_07807a10;
      puVar4 = PTR_DAT_07807a00;
      puVar30 = PTR_DAT_078079f8;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined8 *)(puVar6 + -0x38) = 0;
      if (*(long *)(uVar8 + 0xd8) != 0) {
        func_0x04145068(puVar6 + -0x48,*(long *)(uVar8 + 0xd8),*(undefined8 *)PTR_DAT_07807a18);
        while( true ) {
          uVar8 = func_0x051159b4(puVar6 + -0x48,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            uVar8 = func_0x051159b0(puVar6 + -0x48,*(undefined8 *)puVar30);
            return uVar8;
          }
          plVar21 = *(long **)(puVar6 + -0x38);
          if (plVar21 == (long *)0x0) break;
          lVar18 = *plVar21;
          uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar9) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto code_r0x0675e944;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          param_3 = (long *)0x2;
          puVar10 = (undefined8 *)func_0x03256b10(plVar21);
code_r0x0675e944:
          (*(code *)*puVar10)(plVar21,puVar10[1]);
        }
        func_0x03280cac();
        unaff_x21 = (long *)puVar30;
        unaff_x22 = puVar9;
      }
      auVar33 = func_0x03280cac();
      uVar11 = auVar33._0_8_;
      if (auVar33._8_4_ == 1) {
        plVar21 = (long *)func_0x072ce910(uVar11);
        lVar18 = *plVar21;
        func_0x072ce920();
        uVar8 = func_0x051159b0(puVar6 + -0x48,*unaff_x21);
        if (lVar18 == 0) {
          return uVar8;
        }
        func_0x03280ca4(lVar18);
      }
      func_0x051159b0(puVar6 + -0x48,*unaff_x21);
      func_0x03365958(uVar11);
      func_0x03280ca4(0);
      uVar8 = func_0x02f09514();
      *(code **)(puVar6 + -0x70) =
           MergeEngine_ECS_Systems_Board_BoardInteractionSystem__BoardItemDragCancelled;
      *(undefined8 *)(puVar6 + -0x60) = 0;
      *(undefined8 *)(puVar6 + -0x58) = uVar11;
      plVar21 = (long *)0x7e28000;
      uVar20 = uVar8;
      if ((bRam0000000007e28084 & 1) == 0) {
        uVar20 = func_0x03280a18(PTR_DAT_077d7588);
        bRam0000000007e28084 = 1;
      }
      if (*(long *)(uVar8 + 0x60) == 0) {
        return uVar20;
      }
      uVar20 = param_4;
      if (*(long *)(uVar8 + 0x68) == 0) goto LAB_0675eaa0;
      plVar21 = *(long **)(*(long *)(uVar8 + 0x68) + 0x30);
      param_4 = 1;
      param_3 = plVar21;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__MoveItem(uVar8,plVar21);
      uVar20 = param_4;
      if ((*(long *)(uVar8 + 0x60) == 0) ||
         (lVar18 = func_0x03ced81c(*(long *)(uVar8 + 0x60),*(undefined8 *)PTR_DAT_077d7588),
         uVar20 = param_4, lVar18 == 0)) goto LAB_0675eaa0;
      *(undefined1 *)(lVar18 + 0x2c) = 0;
      *(undefined1 *)(lVar18 + 0x67) = 0;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DeselectItem(uVar8);
      func_0x0675dcbc(uVar8);
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EndDrag(uVar8,plVar21);
      uVar11 = *(undefined8 *)(puVar6 + -0x60);
      unaff_x19 = *(undefined8 *)(puVar6 + -0x58);
      puVar30 = *(undefined **)(puVar6 + -0x70);
      puVar6 = puVar6 + -0x50;
    } while( true );
  }
  uVar20 = *(ulong *)(param_1 + 0x68);
  uVar8 = func_0x0675ef68(lVar18,param_2,param_3,uVar20);
  if ((param_4 & 1) == 0) {
    return uVar8;
  }
LAB_0676ac9c:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
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
  plVar21 = *(long **)(lVar18 + 0x58);
  if (plVar21 != (long *)0x0) {
    lVar13 = *plVar21;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
          goto code_r0x0676ad7c;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777a498,0x14);
code_r0x0676ad7c:
    uVar11 = (*(code *)*puVar10)(plVar21,uVar20,puVar10[1]);
    puVar4 = PTR_DAT_077e71c8;
    puVar30 = PTR_DAT_077e71c0;
    if ((uVar20 != 0) && (plVar21 = *(long **)(lVar18 + 0x70), plVar21 != (long *)0x0)) {
      lVar13 = *plVar21;
      uVar20 = *(ulong *)(uVar20 + 0x10);
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar25 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x0676ae10;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777e4a0,0);
code_r0x0676ae10:
      lVar22 = puVar10[1];
      uVar8 = 0;
      uVar11 = (*(code *)*puVar10)(plVar21,uVar25,uVar11,uVar20,0);
      lVar18 = *(long *)(lVar18 + 0x78);
      lVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04143c38(lVar13,*(undefined8 *)puVar30);
      if (lVar13 != 0) {
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar15 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar11;
            func_0x032809c4(puVar10,uVar11);
          }
          else {
            func_0x0414446c(lVar13,uVar11,
                            *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar18 != 0) {
            uVar11 = *(undefined8 *)((long)register0x00000008 + -0x10);
            uVar17 = *(undefined8 *)((long)register0x00000008 + -8);
            lVar14 = *(long *)PTR_DAT_07800cb8;
            uVar25 = *(undefined8 *)((long)register0x00000008 + -0x20);
            uVar19 = *(undefined8 *)((long)register0x00000008 + -0x18);
            uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -0x28);
            uVar29 = *(undefined8 *)((long)register0x00000008 + -0x40);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
code_r0x03e40d14:
            *(undefined8 *)((long)register0x00000008 + -0x30) = uVar29;
            *(undefined8 *)((long)register0x00000008 + -0x20) = uVar25;
            *(undefined8 *)((long)register0x00000008 + -0x18) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = uVar11;
            *(undefined8 *)((long)register0x00000008 + -8) = uVar17;
            lVar15 = lVar14;
            if ((*(long *)(lVar14 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar14 + 0x38) == 0)) {
              func_0x03256878(lVar14);
            }
            plVar21 = *(long **)(lVar18 + 0x40);
            if (plVar21 == (long *)0x0) {
              auVar31 = func_0x03280cac();
              *(undefined **)((long)register0x00000008 + -0x60) = &UNK_03e40df4;
              *(undefined8 *)((long)register0x00000008 + -0x58) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x50) = uVar25;
              *(long *)((long)register0x00000008 + -0x48) = lVar14;
              *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
              *(long *)((long)register0x00000008 + -0x38) = lVar13;
              lVar18 = lVar15;
              uVar12 = uVar20;
              if (*(long *)(uVar20 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_077507d0);
                func_0x03280a18(PTR_DAT_0775a958);
                func_0x03280a18(PTR_DAT_07750838);
                func_0x03280a18(PTR_DAT_07779e90);
                func_0x03280a18(PTR_DAT_0777ab38);
                if (*(long *)(uVar20 + 0x38) == 0) {
                  func_0x03256878(uVar20);
                }
              }
              plVar21 = *(long **)(auVar31._0_8_ + 0x40);
              lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar13,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar13 != 0) {
                uVar12 = *(ulong *)PTR_DAT_077507d0;
                lVar18 = lVar15;
                func_0x04fe2d7c(lVar13,*(undefined8 *)PTR_DAT_07779e90,lVar15,uVar12);
                if (plVar21 != (long *)0x0) {
                  lVar18 = *plVar21;
                  lVar22 = *(long *)(*(long *)(uVar20 + 0x38) + 8);
                  uVar11 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar8 != 0) {
                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)(lVar22 + 0x20)) {
                        lVar18 = lVar18 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar22 + 0x50)) *
                                          0x10 + 0x138;
                        goto code_r0x03e40f1c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar8 != 0);
                  }
                  lVar18 = func_0x03256b10(plVar21);
code_r0x03e40f1c:
                  lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (**(code **)(lVar18 + 8))(plVar21,uVar11,auVar31._8_8_,lVar13,lVar18);
                  return uVar8;
                }
              }
              auVar32 = func_0x03280cac();
              *(undefined **)((long)register0x00000008 + -0xa0) = &UNK_03e40f54;
              *(undefined8 *)((long)register0x00000008 + -0x98) = uVar27;
              *(undefined8 *)((long)register0x00000008 + -0x90) = uVar26;
              *(long *)((long)register0x00000008 + -0x88) = lVar15;
              *(ulong *)((long)register0x00000008 + -0x80) = uVar20;
              *(long *)((long)register0x00000008 + -0x78) = lVar13;
              *(long **)((long)register0x00000008 + -0x70) = plVar21;
              *(long *)((long)register0x00000008 + -0x68) = auVar31._8_8_;
              if (*(long *)(lVar22 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar22 + 0x38) == 0) {
                  func_0x03256878(lVar22);
                }
              }
              lVar14 = *(long *)PTR_DAT_0777ab40;
              lVar13 = *(long *)(lVar14 + 0x38);
              if (lVar13 == 0) {
                func_0x03256878(lVar14);
                lVar13 = *(long *)(lVar14 + 0x38);
              }
              lVar13 = *(long *)(lVar13 + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              if (*(int *)(lVar13 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x10))
                                 (auVar32._8_8_,lVar18,**(undefined8 **)(lVar13 + 0xb8));
              uVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar20,auVar32._0_8_,uVar12,uVar8 & 0xffffffff,uVar11,0);
              return uVar20;
            }
            lVar18 = *plVar21;
            lVar22 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
            uVar11 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar22 + 0x20)) {
                  lVar18 = lVar18 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar22 + 0x50)) * 0x10
                           + 0x138;
                  goto code_r0x03e40dbc;
                }
                uVar8 = uVar8 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar8 != 0);
            }
            lVar18 = func_0x03256b10(plVar21);
code_r0x03e40dbc:
            lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar22);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(lVar18 + 8))(plVar21,uVar11,lVar13,0,lVar18);
            return uVar8;
          }
        }
      }
    }
  }
  auVar31 = func_0x03280cac();
  *(undefined **)((long)register0x00000008 + -0x50) = &UNK_0676aee4;
  lVar18 = *(long *)(auVar31._0_8_ + 0x88);
  if (lVar18 == 0) {
    func_0x03280cac();
    *(undefined **)((long)register0x00000008 + -0x60) = &UNK_0676af0c;
    lVar18 = func_0x0676af24();
    return (ulong)(lVar18 != 0);
  }
  lVar18 = func_0x06a02444(lVar18,auVar31._8_8_,0);
  return (ulong)(lVar18 == 0);
LAB_0675eaa0:
  auVar31 = func_0x03280cac();
  register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x80);
  *(undefined **)(puVar6 + -0x80) = &UNK_0675eaa4;
  lVar18 = *(long *)(auVar31._0_8_ + 0x40);
  auVar31._8_8_ = auVar31._8_8_;
  auVar31._0_8_ = lVar18;
  if (lVar18 == 0) {
    puVar30 = &UNK_0675eabc;
    auVar31 = func_0x03280cac();
  }
  else {
    register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x70);
    puVar30 = *(undefined **)(puVar6 + -0x80);
  }
  uVar11 = auVar31._8_8_;
  uVar12 = auVar31._0_8_;
  *(undefined **)((long)register0x00000008 + -0x50) = puVar30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x10) = plVar21;
  *(ulong *)((long)register0x00000008 + -8) = uVar8;
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
  unaff_x21 = param_3;
  if (*(long *)(uVar12 + 0x88) != 0) {
    puVar30 = (undefined *)func_0x06a02444(*(long *)(uVar12 + 0x88),uVar11,0);
    if (*(long *)(uVar12 + 0x88) != 0) {
      lVar18 = func_0x06a02444(*(long *)(uVar12 + 0x88),param_3,0);
      puVar4 = PTR_DAT_0777a498;
      plVar21 = *(long **)(uVar12 + 0x58);
      unaff_x23 = puVar30;
      unaff_x24 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        lVar13 = *plVar21;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
              goto code_r0x0675ebe4;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777a498,0x14);
code_r0x0675ebe4:
        puVar9 = (undefined *)(*(code *)*puVar10)(plVar21,puVar30,puVar10[1]);
        unaff_x24 = *(long **)(uVar12 + 0x58);
        lVar13 = lVar18;
        if (unaff_x24 != (long *)0x0) {
          lVar22 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar22 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
                goto code_r0x0675ec50;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar4,0x14);
code_r0x0675ec50:
          plVar21 = (long *)(*(code *)*puVar10)(unaff_x24,lVar18,puVar10[1]);
          unaff_x25 = puVar9;
          if (*(long *)(uVar12 + 0x88) != 0) {
            uVar20 = 0;
            func_0x06a0249c(*(long *)(uVar12 + 0x88),param_3,puVar30);
            unaff_x24 = plVar21;
            if (*(long *)(uVar12 + 0x88) != 0) {
              uVar20 = 0;
              func_0x06a0249c(*(long *)(uVar12 + 0x88),uVar11,lVar18);
              plVar28 = *(long **)(uVar12 + 0xd8);
              if (plVar28 != (long *)0x0) {
                lVar22 = *plVar28;
                uVar8 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar8 != 0) {
                  piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar10 = (undefined8 *)(lVar22 + (long)(*piVar16 + 0x19) * 0x10 + 0x138);
                      goto code_r0x0675ecf8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar8 != 0);
                }
                puVar10 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_077cc678,0x19);
code_r0x0675ecf8:
                uVar20 = puVar10[1];
                (*(code *)*puVar10)(plVar28,uVar11,param_3);
                puVar5 = PTR_DAT_0777e5f8;
                puVar4 = PTR_DAT_0777e4a0;
                if ((puVar30 != (undefined *)0x0) &&
                   (unaff_x21 = *(long **)(uVar12 + 0x70), unaff_x21 != (long *)0x0)) {
                  lVar22 = *unaff_x21;
                  uVar20 = *(ulong *)(puVar30 + 0x10);
                  auVar31._8_8_ = uVar20;
                  auVar31._0_8_ = uVar12;
                  uVar8 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  unaff_x23 = *(undefined **)PTR_DAT_0777e5f8;
                  if (uVar8 != 0) {
                    piVar16 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar10 = (undefined8 *)(lVar22 + (long)*piVar16 * 0x10 + 0x138);
                        goto code_r0x0675ed7c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x03256b10(unaff_x21,*(long *)PTR_DAT_0777e4a0,0);
code_r0x0675ed7c:
                  plVar28 = (long *)(*(code *)*puVar10)(unaff_x21,unaff_x23,puVar9,uVar20,0,
                                                        puVar10[1]);
                  puVar9 = PTR_DAT_077e71c8;
                  puVar30 = PTR_DAT_077e71c0;
                  if (lVar18 != 0) {
                    plVar23 = *(long **)(uVar12 + 0x70);
                    auVar31._8_8_ = 0;
                    if (plVar23 != (long *)0x0) {
                      lVar13 = *plVar23;
                      uVar20 = *(ulong *)(lVar18 + 0x10);
                      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      unaff_x23 = *(undefined **)puVar5;
                      if (uVar8 != 0) {
                        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                            goto code_r0x0675ee0c;
                          }
                          uVar8 = uVar8 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar8 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar4,0);
code_r0x0675ee0c:
                      lVar22 = puVar10[1];
                      uVar8 = 0;
                      uVar11 = (*(code *)*puVar10)(plVar23,unaff_x23,plVar21,uVar20,0);
                      lVar18 = *(long *)(uVar12 + 0x78);
                      auVar3._8_8_ = uVar11;
                      auVar3._0_8_ = lVar18;
                      auVar2._8_8_ = uVar11;
                      auVar2._0_8_ = lVar18;
                      auVar32._8_8_ = uVar11;
                      auVar32._0_8_ = lVar18;
                      auVar31._8_8_ = uVar11;
                      auVar31._0_8_ = lVar18;
                      lVar13 = func_0x03280ca0(*(undefined8 *)puVar9);
                      func_0x04143c38(lVar13,*(undefined8 *)puVar30);
                      puVar4 = PTR_DAT_077e71b8;
                      unaff_x21 = plVar28;
                      unaff_x25 = puVar30;
                      if (lVar13 != 0) {
                        lVar14 = *(long *)(lVar13 + 0x10);
                        lVar15 = *(long *)PTR_DAT_077e71b8;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        unaff_x23 = puVar4;
                        auVar31 = auVar32;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            puVar10 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar10 = plVar28;
                            func_0x032809c4(puVar10,plVar28);
                          }
                          else {
                            func_0x0414446c(lVar13,plVar28,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar14 = *(long *)(lVar13 + 0x10);
                          lVar15 = *(long *)puVar4;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          auVar31 = auVar2;
                          if (lVar14 != 0) {
                            uVar1 = *(uint *)(lVar13 + 0x18);
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                              puVar10 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar10 = uVar11;
                              func_0x032809c4(puVar10,uVar11);
                            }
                            else {
                              func_0x0414446c(lVar13,uVar11,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                            }
                            auVar31 = auVar3;
                            if (lVar18 != 0) {
                              uVar11 = *(undefined8 *)((long)register0x00000008 + -0x10);
                              uVar17 = *(undefined8 *)((long)register0x00000008 + -8);
                              lVar14 = *(long *)PTR_DAT_07800cb8;
                              uVar25 = *(undefined8 *)((long)register0x00000008 + -0x20);
                              uVar19 = *(undefined8 *)((long)register0x00000008 + -0x18);
                              uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
                              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x28);
                              uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
                              uVar29 = *(undefined8 *)((long)register0x00000008 + -0x50);
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
  unaff_x22 = auVar31._8_8_;
  lVar18 = func_0x03280cac();
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x70) = &UNK_0675ef40;
  *(long *)((long)register0x00000008 + -0x60) = lVar13;
  *(long *)((long)register0x00000008 + -0x58) = auVar31._0_8_;
  func_0x0675ef68();
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x60);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x58);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  unaff_x30 = *puVar7;
  goto LAB_0676ac9c;
}


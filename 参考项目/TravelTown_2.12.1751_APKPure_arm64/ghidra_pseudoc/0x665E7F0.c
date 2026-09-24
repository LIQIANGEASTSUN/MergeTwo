/* Ghidra 12.1.2 native pseudocode; RVA 0x665E7F0; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.MoveItem; status ok */

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
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar19;
  undefined8 uVar20;
  long *unaff_x21;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined *unaff_x22;
  long *plVar24;
  undefined8 uVar25;
  undefined *unaff_x23;
  undefined8 uVar26;
  undefined8 uVar27;
  long *unaff_x24;
  undefined8 uVar28;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  long *plVar29;
  undefined8 unaff_x27;
  undefined8 uVar30;
  undefined8 unaff_x30;
  code *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  
  lVar19 = *(long *)(param_1 + 0x40);
  if (lVar19 == 0) {
    pcVar31 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ResetInteractionAnimation;
    uVar8 = func_0x03280cac();
    uVar12 = 0;
    puVar6 = &stack0xffffffffffffffe0;
    do {
      *(code **)(puVar6 + -0x30) = pcVar31;
      *(undefined **)(puVar6 + -0x20) = unaff_x22;
      *(long **)(puVar6 + -0x18) = unaff_x21;
      *(undefined8 *)(puVar6 + -0x10) = uVar12;
      *(undefined8 *)(puVar6 + -8) = unaff_x19;
      if ((bRam0000000007e28085 & 1) == 0) {
        func_0x03280a18(PTR_DAT_078079f8);
        func_0x03280a18(PTR_DAT_07807a00);
        func_0x03280a18(PTR_DAT_07807a08);
        func_0x03280a18(PTR_DAT_07807a10);
        func_0x03280a18(PTR_DAT_07807a18);
        bRam0000000007e28085 = 1;
      }
      puVar10 = PTR_DAT_07807a10;
      puVar4 = PTR_DAT_07807a00;
      puVar9 = PTR_DAT_078079f8;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined8 *)(puVar6 + -0x38) = 0;
      if (*(long *)(uVar8 + 0xd8) != 0) {
        func_0x04145068(puVar6 + -0x48,*(long *)(uVar8 + 0xd8),*(undefined8 *)PTR_DAT_07807a18);
        while( true ) {
          uVar8 = func_0x051159b4(puVar6 + -0x48,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            uVar8 = func_0x051159b0(puVar6 + -0x48,*(undefined8 *)puVar9);
            return uVar8;
          }
          plVar22 = *(long **)(puVar6 + -0x38);
          if (plVar22 == (long *)0x0) break;
          lVar19 = *plVar22;
          uVar8 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar10) {
                puVar11 = (undefined8 *)(lVar19 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_0675e944;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          param_3 = (long *)0x2;
          puVar11 = (undefined8 *)func_0x03256b10(plVar22);
LAB_0675e944:
          (*(code *)*puVar11)(plVar22,puVar11[1]);
        }
        func_0x03280cac();
        unaff_x21 = (long *)puVar9;
        unaff_x22 = puVar10;
      }
      auVar34 = func_0x03280cac();
      uVar12 = auVar34._0_8_;
      if (auVar34._8_4_ == 1) {
        plVar22 = (long *)func_0x072ce910(uVar12);
        lVar19 = *plVar22;
        func_0x072ce920();
        uVar8 = func_0x051159b0(puVar6 + -0x48,*unaff_x21);
        if (lVar19 == 0) {
          return uVar8;
        }
        func_0x03280ca4(lVar19);
      }
      func_0x051159b0(puVar6 + -0x48,*unaff_x21);
      func_0x03365958(uVar12);
      func_0x03280ca4(0);
      uVar8 = func_0x02f09514();
      *(code **)(puVar6 + -0x70) =
           MergeEngine_ECS_Systems_Board_BoardInteractionSystem__BoardItemDragCancelled;
      *(undefined8 *)(puVar6 + -0x60) = 0;
      *(undefined8 *)(puVar6 + -0x58) = uVar12;
      plVar22 = (long *)0x7e28000;
      uVar21 = uVar8;
      if ((bRam0000000007e28084 & 1) == 0) {
        uVar21 = func_0x03280a18(PTR_DAT_077d7588);
        bRam0000000007e28084 = 1;
      }
      if (*(long *)(uVar8 + 0x60) == 0) {
        return uVar21;
      }
      uVar21 = param_4;
      if (*(long *)(uVar8 + 0x68) == 0) goto LAB_0675eaa0;
      plVar22 = *(long **)(*(long *)(uVar8 + 0x68) + 0x30);
      param_4 = 1;
      param_3 = plVar22;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__MoveItem(uVar8,plVar22);
      uVar21 = param_4;
      if ((*(long *)(uVar8 + 0x60) == 0) ||
         (lVar19 = func_0x03ced81c(*(long *)(uVar8 + 0x60),*(undefined8 *)PTR_DAT_077d7588),
         uVar21 = param_4, lVar19 == 0)) goto LAB_0675eaa0;
      *(undefined1 *)(lVar19 + 0x2c) = 0;
      *(undefined1 *)(lVar19 + 0x67) = 0;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__DeselectItem(uVar8);
      func_0x0675dcbc(uVar8);
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__EndDrag(uVar8,plVar22);
      uVar12 = *(undefined8 *)(puVar6 + -0x60);
      unaff_x19 = *(undefined8 *)(puVar6 + -0x58);
      pcVar31 = *(code **)(puVar6 + -0x70);
      puVar6 = puVar6 + -0x50;
    } while( true );
  }
  uVar21 = *(ulong *)(param_1 + 0x68);
  uVar8 = func_0x0675ef68(lVar19,param_2,param_3,uVar21);
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
  plVar22 = *(long **)(lVar19 + 0x58);
  if (plVar22 != (long *)0x0) {
    lVar14 = *plVar22;
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
    puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ad7c:
    uVar12 = (*(code *)*puVar11)(plVar22,uVar21,puVar11[1]);
    puVar4 = PTR_DAT_077e71c8;
    puVar9 = PTR_DAT_077e71c0;
    if ((uVar21 != 0) && (plVar22 = *(long **)(lVar19 + 0x70), plVar22 != (long *)0x0)) {
      lVar14 = *plVar22;
      uVar21 = *(ulong *)(uVar21 + 0x10);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar26 = *(undefined8 *)PTR_DAT_0777e5f8;
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
      puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777e4a0,0);
LAB_0676ae10:
      lVar23 = puVar11[1];
      uVar8 = 0;
      uVar12 = (*(code *)*puVar11)(plVar22,uVar26,uVar12,uVar21,0);
      lVar19 = *(long *)(lVar19 + 0x78);
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
            *puVar11 = uVar12;
            func_0x032809c4(puVar11,uVar12);
          }
          else {
            func_0x0414446c(lVar14,uVar12,
                            *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar19 != 0) {
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x10);
            uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
            lVar15 = *(long *)PTR_DAT_07800cb8;
            uVar26 = *(undefined8 *)((long)register0x00000008 + -0x20);
            uVar20 = *(undefined8 *)((long)register0x00000008 + -0x18);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
            uVar25 = *(undefined8 *)((long)register0x00000008 + -0x28);
            uVar30 = *(undefined8 *)((long)register0x00000008 + -0x40);
            uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
LAB_03e40d14:
            *(undefined8 *)((long)register0x00000008 + -0x30) = uVar30;
            *(undefined8 *)((long)register0x00000008 + -0x20) = uVar26;
            *(undefined8 *)((long)register0x00000008 + -0x18) = uVar20;
            *(undefined8 *)((long)register0x00000008 + -0x10) = uVar12;
            *(undefined8 *)((long)register0x00000008 + -8) = uVar18;
            lVar16 = lVar15;
            if ((*(long *)(lVar15 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar15 + 0x38) == 0)) {
              func_0x03256878(lVar15);
            }
            plVar22 = *(long **)(lVar19 + 0x40);
            if (plVar22 == (long *)0x0) {
              auVar32 = func_0x03280cac();
              *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3e40df4;
              *(undefined8 *)((long)register0x00000008 + -0x58) = uVar25;
              *(undefined8 *)((long)register0x00000008 + -0x50) = uVar26;
              *(long *)((long)register0x00000008 + -0x48) = lVar15;
              *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
              *(long *)((long)register0x00000008 + -0x38) = lVar14;
              lVar19 = lVar16;
              uVar13 = uVar21;
              if (*(long *)(uVar21 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_077507d0);
                func_0x03280a18(PTR_DAT_0775a958);
                func_0x03280a18(PTR_DAT_07750838);
                func_0x03280a18(PTR_DAT_07779e90);
                func_0x03280a18(PTR_DAT_0777ab38);
                if (*(long *)(uVar21 + 0x38) == 0) {
                  func_0x03256878(uVar21);
                }
              }
              plVar22 = *(long **)(auVar32._0_8_ + 0x40);
              lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar14,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar14 != 0) {
                uVar13 = *(ulong *)PTR_DAT_077507d0;
                lVar19 = lVar16;
                func_0x04fe2d7c(lVar14,*(undefined8 *)PTR_DAT_07779e90,lVar16,uVar13);
                if (plVar22 != (long *)0x0) {
                  lVar19 = *plVar22;
                  lVar23 = *(long *)(*(long *)(uVar21 + 0x38) + 8);
                  uVar12 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar8 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar8 != 0) {
                    piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)(lVar23 + 0x20)) {
                        lVar19 = lVar19 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar23 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40f1c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar8 != 0);
                  }
                  lVar19 = func_0x03256b10(plVar22);
LAB_03e40f1c:
                  lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (**(code **)(lVar19 + 8))(plVar22,uVar12,auVar32._8_8_,lVar14,lVar19);
                  return uVar8;
                }
              }
              auVar33 = func_0x03280cac();
              *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3e40f54;
              *(undefined8 *)((long)register0x00000008 + -0x98) = uVar28;
              *(undefined8 *)((long)register0x00000008 + -0x90) = uVar27;
              *(long *)((long)register0x00000008 + -0x88) = lVar16;
              *(ulong *)((long)register0x00000008 + -0x80) = uVar21;
              *(long *)((long)register0x00000008 + -0x78) = lVar14;
              *(long **)((long)register0x00000008 + -0x70) = plVar22;
              *(long *)((long)register0x00000008 + -0x68) = auVar32._8_8_;
              if (*(long *)(lVar23 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar23 + 0x38) == 0) {
                  func_0x03256878(lVar23);
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
              uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 0x10))
                                 (auVar33._8_8_,lVar19,**(undefined8 **)(lVar14 + 0xb8));
              uVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar21,auVar33._0_8_,uVar13,uVar8 & 0xffffffff,uVar12,0);
              return uVar21;
            }
            lVar19 = *plVar22;
            lVar23 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
            uVar12 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar8 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar23 + 0x20)) {
                  lVar19 = lVar19 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e40dbc;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            lVar19 = func_0x03256b10(plVar22);
LAB_03e40dbc:
            lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar23);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(lVar19 + 8))(plVar22,uVar12,lVar14,0,lVar19);
            return uVar8;
          }
        }
      }
    }
  }
  auVar32 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x676aee4;
  lVar19 = *(long *)(auVar32._0_8_ + 0x88);
  if (lVar19 == 0) {
    func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x676af0c;
    lVar19 = func_0x0676af24();
    return (ulong)(lVar19 != 0);
  }
  lVar19 = func_0x06a02444(lVar19,auVar32._8_8_,0);
  return (ulong)(lVar19 == 0);
LAB_0675eaa0:
  auVar32 = func_0x03280cac();
  register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x80);
  *(code **)(puVar6 + -0x80) = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SwapItems;
  lVar19 = *(long *)(auVar32._0_8_ + 0x40);
  auVar32._8_8_ = auVar32._8_8_;
  auVar32._0_8_ = lVar19;
  if (lVar19 == 0) {
    uVar12 = 0x675eabc;
    auVar32 = func_0x03280cac();
  }
  else {
    register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x70);
    uVar12 = *(undefined8 *)(puVar6 + -0x80);
  }
  uVar26 = auVar32._8_8_;
  uVar13 = auVar32._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x10) = plVar22;
  *(ulong *)((long)register0x00000008 + -8) = uVar8;
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
  unaff_x21 = param_3;
  if (*(long *)(uVar13 + 0x88) != 0) {
    puVar9 = (undefined *)func_0x06a02444(*(long *)(uVar13 + 0x88),uVar26,0);
    if (*(long *)(uVar13 + 0x88) != 0) {
      lVar19 = func_0x06a02444(*(long *)(uVar13 + 0x88),param_3,0);
      puVar4 = PTR_DAT_0777a498;
      plVar22 = *(long **)(uVar13 + 0x58);
      unaff_x23 = puVar9;
      unaff_x24 = (long *)0x0;
      if (plVar22 != (long *)0x0) {
        lVar14 = *plVar22;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
              goto LAB_0675ebe4;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777a498,0x14);
LAB_0675ebe4:
        puVar10 = (undefined *)(*(code *)*puVar11)(plVar22,puVar9,puVar11[1]);
        unaff_x24 = *(long **)(uVar13 + 0x58);
        lVar14 = lVar19;
        if (unaff_x24 != (long *)0x0) {
          lVar23 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar11 = (undefined8 *)(lVar23 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
                goto LAB_0675ec50;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar4,0x14);
LAB_0675ec50:
          plVar22 = (long *)(*(code *)*puVar11)(unaff_x24,lVar19,puVar11[1]);
          unaff_x25 = puVar10;
          if (*(long *)(uVar13 + 0x88) != 0) {
            uVar21 = 0;
            func_0x06a0249c(*(long *)(uVar13 + 0x88),param_3,puVar9);
            unaff_x24 = plVar22;
            if (*(long *)(uVar13 + 0x88) != 0) {
              uVar21 = 0;
              func_0x06a0249c(*(long *)(uVar13 + 0x88),uVar26,lVar19);
              plVar29 = *(long **)(uVar13 + 0xd8);
              if (plVar29 != (long *)0x0) {
                lVar23 = *plVar29;
                uVar8 = (ulong)*(ushort *)(lVar23 + 0x12e);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar11 = (undefined8 *)(lVar23 + (long)(*piVar17 + 0x19) * 0x10 + 0x138);
                      goto LAB_0675ecf8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar11 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_077cc678,0x19);
LAB_0675ecf8:
                uVar21 = puVar11[1];
                (*(code *)*puVar11)(plVar29,uVar26,param_3);
                puVar5 = PTR_DAT_0777e5f8;
                puVar4 = PTR_DAT_0777e4a0;
                if ((puVar9 != (undefined *)0x0) &&
                   (unaff_x21 = *(long **)(uVar13 + 0x70), unaff_x21 != (long *)0x0)) {
                  lVar23 = *unaff_x21;
                  uVar21 = *(ulong *)(puVar9 + 0x10);
                  auVar32._8_8_ = uVar21;
                  auVar32._0_8_ = uVar13;
                  uVar8 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  unaff_x23 = *(undefined **)PTR_DAT_0777e5f8;
                  if (uVar8 != 0) {
                    piVar17 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar11 = (undefined8 *)(lVar23 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_0675ed7c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x03256b10(unaff_x21,*(long *)PTR_DAT_0777e4a0,0);
LAB_0675ed7c:
                  plVar29 = (long *)(*(code *)*puVar11)(unaff_x21,unaff_x23,puVar10,uVar21,0,
                                                        puVar11[1]);
                  puVar10 = PTR_DAT_077e71c8;
                  puVar9 = PTR_DAT_077e71c0;
                  if (lVar19 != 0) {
                    plVar24 = *(long **)(uVar13 + 0x70);
                    auVar32._8_8_ = 0;
                    if (plVar24 != (long *)0x0) {
                      lVar14 = *plVar24;
                      uVar21 = *(ulong *)(lVar19 + 0x10);
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
                      puVar11 = (undefined8 *)func_0x03256b10(plVar24,*(long *)puVar4,0);
LAB_0675ee0c:
                      lVar23 = puVar11[1];
                      uVar8 = 0;
                      uVar12 = (*(code *)*puVar11)(plVar24,unaff_x23,plVar22,uVar21,0);
                      lVar19 = *(long *)(uVar13 + 0x78);
                      auVar3._8_8_ = uVar12;
                      auVar3._0_8_ = lVar19;
                      auVar2._8_8_ = uVar12;
                      auVar2._0_8_ = lVar19;
                      auVar33._8_8_ = uVar12;
                      auVar33._0_8_ = lVar19;
                      auVar32._8_8_ = uVar12;
                      auVar32._0_8_ = lVar19;
                      lVar14 = func_0x03280ca0(*(undefined8 *)puVar10);
                      func_0x04143c38(lVar14,*(undefined8 *)puVar9);
                      puVar4 = PTR_DAT_077e71b8;
                      unaff_x21 = plVar29;
                      unaff_x25 = puVar9;
                      if (lVar14 != 0) {
                        lVar15 = *(long *)(lVar14 + 0x10);
                        lVar16 = *(long *)PTR_DAT_077e71b8;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        unaff_x23 = puVar4;
                        auVar32 = auVar33;
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
                          auVar32 = auVar2;
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar14 + 0x18);
                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                              puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar11 = uVar12;
                              func_0x032809c4(puVar11,uVar12);
                            }
                            else {
                              func_0x0414446c(lVar14,uVar12,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                            }
                            auVar32 = auVar3;
                            if (lVar19 != 0) {
                              uVar12 = *(undefined8 *)((long)register0x00000008 + -0x10);
                              uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
                              lVar15 = *(long *)PTR_DAT_07800cb8;
                              uVar26 = *(undefined8 *)((long)register0x00000008 + -0x20);
                              uVar20 = *(undefined8 *)((long)register0x00000008 + -0x18);
                              uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
                              uVar25 = *(undefined8 *)((long)register0x00000008 + -0x28);
                              uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
                              uVar30 = *(undefined8 *)((long)register0x00000008 + -0x50);
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
  unaff_x22 = auVar32._8_8_;
  lVar19 = func_0x03280cac();
  puVar7 = (undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x675ef40;
  *(long *)((long)register0x00000008 + -0x60) = lVar14;
  *(long *)((long)register0x00000008 + -0x58) = auVar32._0_8_;
  func_0x0675ef68();
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x60);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x58);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  unaff_x30 = *puVar7;
  goto LAB_0676ac9c;
}


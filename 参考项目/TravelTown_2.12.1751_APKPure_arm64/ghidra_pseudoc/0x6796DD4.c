/* Ghidra 12.1.2 native pseudocode; RVA 0x6796DD4; MergeEngine.ECS.Systems.Items.TimeLockSystem.EntityCreated; status ok */

ulong MergeEngine_ECS_Systems_Items_TimeLockSystem__EntityCreated
                (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x1;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 unaff_x21;
  long lVar20;
  undefined *puVar21;
  long unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x24;
  undefined *puVar22;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x29;
  code *unaff_x30;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong uVar7;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  do {
    lVar13 = auVar24._8_8_;
    lVar4 = auVar24._0_8_;
    *(code **)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    lVar20 = 0x7e28000;
    if ((bRam0000000007e28d91 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810618);
      func_0x03280a18(PTR_DAT_07810620);
      func_0x03280a18(PTR_DAT_078106a8);
      func_0x03280a18(PTR_DAT_0777a920);
      func_0x03280a18(PTR_DAT_0777a960);
      func_0x03280a18(PTR_DAT_078106b0);
      func_0x03280a18(PTR_DAT_078106b8);
      func_0x03280a18(PTR_DAT_078106c0);
      bRam0000000007e28d91 = 1;
    }
    puVar11 = unaff_x24;
    if (lVar13 == 0) {
LAB_06896fe8:
      auVar24 = func_0x03280cac();
      lVar14 = auVar24._8_8_;
      lVar12 = auVar24._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0x6896fec;
      *(long *)((long)register0x00000008 + -0x58) = lVar20;
      *(long *)((long)register0x00000008 + -0x50) = lVar13;
      *(long *)((long)register0x00000008 + -0x48) = lVar4;
      if ((bRam0000000007e28d92 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810620);
        func_0x03280a18(PTR_DAT_0777a960);
        func_0x03280a18(PTR_DAT_078106c8);
        bRam0000000007e28d92 = 1;
      }
      func_0x064a7330(lVar12,lVar14,0);
      lVar20 = 0;
      puVar21 = (undefined *)0x7e28000;
      if (lVar14 == 0) {
LAB_068970d0:
        uVar10 = func_0x03280cac();
        puVar22 = PTR_DAT_078106e0;
        puVar5 = PTR_DAT_078106d8;
        puVar11 = PTR_DAT_078106d0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0x68970d4;
        *(ulong *)((long)register0x00000008 + -0x88) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
        *(undefined **)((long)register0x00000008 + -0x78) = puVar21;
        *(long *)((long)register0x00000008 + -0x70) = lVar20;
        *(long *)((long)register0x00000008 + -0x68) = lVar12;
        if ((bRam0000000007e28d93 & 1) == 0) {
          func_0x03280a18(PTR_DAT_078106d8);
          func_0x03280a18(PTR_DAT_078106d0);
          func_0x03280a18(PTR_DAT_078106e0);
          bRam0000000007e28d93 = 1;
        }
        uVar6 = func_0x03280ca0(*(undefined8 *)puVar11);
        func_0x04f610a8(uVar6,*(undefined8 *)puVar5);
        *(undefined8 *)(uVar10 + 0x60) = uVar6;
        func_0x032809c4((undefined8 *)(uVar10 + 0x60),uVar6);
        uVar6 = *(undefined8 *)puVar22;
        return uVar10;
      }
      lVar20 = func_0x03d20d84(lVar14,*(undefined8 *)PTR_DAT_0777a960);
      puVar5 = PTR_DAT_07810620;
      if (lVar20 == 0) {
        return 0;
      }
      if (*(long *)(lVar12 + 0x60) == 0) goto LAB_068970d0;
      lVar4 = func_0x04f61e04(*(long *)(lVar12 + 0x60),*(undefined4 *)(lVar20 + 0x40),
                              *(undefined8 *)PTR_DAT_07810620);
      if (lVar4 == 0) {
        return 0;
      }
      puVar21 = puVar5;
      if ((*(long *)(lVar12 + 0x60) == 0) ||
         (lVar4 = func_0x04f61e04(*(long *)(lVar12 + 0x60),*(undefined4 *)(lVar20 + 0x40),
                                  *(undefined8 *)puVar5), lVar4 == 0)) goto LAB_068970d0;
      func_0x04145af8(lVar4,lVar20,*(undefined8 *)PTR_DAT_078106c8);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x50);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0x48);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x60);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    }
    else {
      lVar20 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_0777a960);
      if (lVar20 == 0) {
        return 0;
      }
      if (*(long *)(lVar4 + 0x60) == 0) goto LAB_06896fe8;
      uVar10 = func_0x04f62098(*(long *)(lVar4 + 0x60),*(undefined4 *)(lVar20 + 0x40),
                               *(undefined8 *)PTR_DAT_07810618);
      if ((uVar10 & 1) == 0) {
        unaff_x22 = *(long *)(lVar4 + 0x60);
        unaff_x23 = (ulong)*(uint *)(lVar20 + 0x40);
        puVar11 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_078106c0);
        func_0x04143c38(puVar11,*(undefined8 *)PTR_DAT_078106b8);
        if (unaff_x22 == 0) goto LAB_06896fe8;
        func_0x04f61e90(unaff_x22,unaff_x23,puVar11,*(undefined8 *)PTR_DAT_078106a8);
      }
      if ((*(long *)(lVar4 + 0x60) == 0) ||
         (lVar12 = func_0x04f61e04(*(long *)(lVar4 + 0x60),*(undefined4 *)(lVar20 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620), lVar12 == 0))
      goto LAB_06896fe8;
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)PTR_DAT_078106b0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_06896fe8;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
        *plVar15 = lVar20;
        func_0x032809c4(plVar15,lVar20);
      }
      else {
        func_0x0414446c(lVar12,lVar20,
                        *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(lVar20 + 0x40) == 1) {
        lVar12 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_0777a920);
        if (lVar12 == 0) goto LAB_06896fe8;
        if ((*(uint *)(lVar12 + 0x58) & (*(uint *)(lVar20 + 0x48) ^ 0xffffffff)) == 0) {
          MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(lVar4,lVar20);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
        }
      }
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x20);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x18);
      puVar11 = *(undefined **)((long)register0x00000008 + -0x30);
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0x28);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x40);
      puVar2 = (undefined1 *)register0x00000008;
      lVar12 = lVar4;
    }
    puVar21 = PTR_DAT_07810678;
    *(undefined8 *)(puVar2 + -0x30) = uVar23;
    *(long *)(puVar2 + -0x20) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x18) = uVar19;
    *(undefined8 *)(puVar2 + -0x10) = uVar6;
    *(undefined8 *)(puVar2 + -8) = uVar18;
    unaff_x22 = 0x7e28000;
    if ((bRam0000000007e28d8f & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810618);
      func_0x03280a18(PTR_DAT_07810620);
      func_0x03280a18(PTR_DAT_07810680);
      func_0x03280a18(PTR_DAT_07810628);
      func_0x03280a18(PTR_DAT_07810630);
      func_0x03280a18(PTR_DAT_07810638);
      func_0x03280a18(PTR_DAT_07810640);
      func_0x03280a18(PTR_DAT_07810678);
      bRam0000000007e28d8f = 1;
    }
    lVar4 = *(long *)puVar21;
    *(undefined8 *)(puVar2 + -0x48) = 0;
    *(undefined8 *)(puVar2 + -0x40) = 0;
    *(undefined8 *)(puVar2 + -0x38) = 0;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar5 = puVar21;
    if (lVar20 == 0) {
LAB_06896844:
      func_0x03280cac();
      puVar21 = puVar5;
    }
    else {
      uVar10 = func_0x03d37ac4(**(undefined8 **)(*(long *)puVar21 + 0xb8),
                               *(undefined4 *)(lVar20 + 0x40),*(undefined8 *)PTR_DAT_07810680);
      if ((uVar10 & 1) == 0) {
        return uVar10;
      }
      if (*(long *)(lVar12 + 0x60) == 0) goto LAB_06896844;
      uVar10 = func_0x04f62098(*(long *)(lVar12 + 0x60),*(undefined4 *)(lVar20 + 0x40),
                               *(undefined8 *)PTR_DAT_07810618);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar12 + 0x60) != 0) {
          puVar5 = (undefined *)
                   func_0x04f61e04(*(long *)(lVar12 + 0x60),*(undefined4 *)(lVar20 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620);
          if (puVar5 == (undefined *)0x0) goto LAB_06896848;
          bVar3 = MergeEngine_ECS_Systems_Items_TimeLockSystem__AreItemsInGroupBeingUnlocked
                            (lVar12,lVar20);
          func_0x04145068(puVar2 + -0x48,puVar5,*(undefined8 *)PTR_DAT_07810640);
          puVar21 = PTR_DAT_07810630;
          while( true ) {
            uVar10 = func_0x051159b4(puVar2 + -0x48,*(undefined8 *)puVar21);
            if ((uVar10 & 1) == 0) {
              uVar10 = func_0x051159b0(puVar2 + -0x48,*(undefined8 *)PTR_DAT_07810628);
              return uVar10;
            }
            if (*(long *)(puVar2 + -0x38) == 0) break;
            *(byte *)(*(long *)(puVar2 + -0x38) + 0x45) = ~bVar3 & 1;
          }
          func_0x03280cac();
        }
        goto LAB_06896844;
      }
    }
LAB_06896848:
    func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar6 = func_0x03280ca0();
    uVar23 = func_0x03280a2c(PTR_DAT_07810648);
    func_0x057ced78(uVar6,uVar23,0);
    uVar23 = func_0x03280a2c(PTR_DAT_07810688);
    auVar25 = func_0x03280b7c(uVar6,uVar23);
    uVar6 = auVar25._0_8_;
    if (auVar25._8_4_ == 1) {
      plVar15 = (long *)func_0x072ce910(uVar6);
      lVar20 = *plVar15;
      func_0x072ce920();
      uVar10 = func_0x051159b0(puVar2 + -0x48,*(undefined8 *)PTR_DAT_07810628);
      if (lVar20 == 0) {
        return uVar10;
      }
      func_0x03280ca4(lVar20);
    }
    func_0x051159b0(puVar2 + -0x48,*(undefined8 *)PTR_DAT_07810628);
    func_0x03365958(uVar6);
    func_0x03280ca4(0);
    auVar24 = func_0x02f09514();
    uVar7 = auVar24._0_8_;
    *(undefined8 *)(puVar2 + -0xb0) = unaff_x29;
    *(code **)(puVar2 + -0xa8) = MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessComponents;
    *(ulong *)(puVar2 + -0xa0) = unaff_x28;
    *(undefined **)(puVar2 + -0x98) = unaff_x27;
    *(undefined **)(puVar2 + -0x90) = unaff_x26;
    *(undefined **)(puVar2 + -0x88) = unaff_x25;
    *(undefined **)(puVar2 + -0x80) = puVar11;
    *(ulong *)(puVar2 + -0x78) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x70) = 0x7e28000;
    *(undefined **)(puVar2 + -0x68) = puVar21;
    *(undefined8 *)(puVar2 + -0x60) = uVar6;
    *(undefined8 *)(puVar2 + -0x58) = 0;
    lVar20 = 0x7e28000;
    uVar10 = uVar7;
    if ((bRam0000000007e28d8c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6760);
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_077d7588);
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_07810690);
      func_0x03280a18(PTR_DAT_0774e8e0);
      uVar10 = func_0x03280a18(PTR_DAT_07810698);
      bRam0000000007e28d8c = 1;
    }
    if (auVar24._8_8_ == 0) {
      return uVar10;
    }
    plVar15 = (long *)func_0x04545bc8(auVar24._8_8_,*(undefined8 *)PTR_DAT_07810698);
    puVar22 = PTR_DAT_07810690;
    puVar5 = PTR_DAT_077e6760;
    puVar21 = PTR_DAT_0777e638;
    unaff_x24 = PTR_DAT_0774e8e0;
    if (plVar15 != (long *)0x0) {
      unaff_x23 = 0;
      unaff_x29 = 1;
LAB_068969d8:
      lVar20 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)unaff_x24) {
            puVar8 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06896a24;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)unaff_x24,0);
LAB_06896a24:
      uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if ((uVar10 & 1) == 0) {
        lVar20 = 0;
        goto LAB_06896ba0;
      }
      lVar20 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar22) {
            puVar8 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06896a80;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar22,0);
LAB_06896a80:
      lVar20 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if (lVar20 != 0) {
        unaff_x22 = func_0x03ced81c(lVar20,*(undefined8 *)puVar5);
        uVar10 = func_0x03ced81c(lVar20,*(undefined8 *)puVar21);
        if (uVar10 != 0) {
          if (uVar10 != 0) {
            unaff_x28 = (ulong)*(byte *)(uVar10 + 0x78);
            unaff_x23 = uVar10;
            if (unaff_x22 != 0) goto LAB_06896ad4;
            goto LAB_06896c28;
          }
          goto LAB_06896c2c;
        }
        unaff_x28 = 0;
        uVar10 = unaff_x23;
        if (unaff_x22 == 0) goto LAB_06896c28;
LAB_06896ad4:
        if (*(char *)(unaff_x22 + 0x30) != '\0') {
          uVar10 = func_0x069fe14c(lVar20,0);
          if ((((uVar10 & 1) != 0) && (*(char *)(lVar20 + 0x44) == '\0')) &&
             (*(char *)(lVar20 + 0x45) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
            MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(uVar7,lVar20);
          }
          if ((*(char *)(unaff_x22 + 0x30) != '\0') && (*(char *)(lVar20 + 0x44) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
          }
        }
        if ((((*(char *)(lVar20 + 0x44) != '\0') ||
             ((uVar10 = func_0x064a7438(uVar7,lVar20,0), (uVar10 & 1) != 0 &&
              (0.0 < *(double *)(lVar20 + 0x30))))) && ((int)unaff_x28 == 0)) &&
           (*(char *)(lVar20 + 0x4c) == '\0')) {
          MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessCountdown(uVar7,lVar20);
        }
        *(undefined1 *)(lVar20 + 0x4c) = 0;
        if (*(double *)(lVar20 + 0x30) <= 0.0) {
          lVar4 = func_0x03ced81c(lVar20,*(undefined8 *)PTR_DAT_077d7588);
          if (lVar4 == 0) goto LAB_06896c30;
          *(undefined1 *)(lVar4 + 0x48) = 1;
          MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState(lVar4,lVar20);
        }
        goto LAB_068969d8;
      }
      func_0x03280cac();
      uVar10 = unaff_x23;
LAB_06896c28:
      func_0x03280cac();
LAB_06896c2c:
      func_0x03280cac();
      unaff_x23 = uVar10;
LAB_06896c30:
      func_0x03280cac();
      puVar11 = unaff_x24;
      unaff_x25 = puVar22;
      unaff_x26 = puVar5;
      unaff_x27 = puVar21;
    }
    func_0x03280cac();
    unaff_x24 = puVar11;
    puVar22 = unaff_x25;
    puVar5 = unaff_x26;
    puVar21 = unaff_x27;
    while( true ) {
      auVar25 = func_0x03280ca4(lVar20);
      uVar6 = auVar25._0_8_;
      if (auVar25._8_4_ != 1) break;
      plVar9 = (long *)func_0x072ce910(uVar6);
      lVar20 = *plVar9;
      uVar10 = func_0x072ce920();
LAB_06896ba0:
      if (plVar15 != (long *)0x0) {
        lVar4 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_06896bf8;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896bf8:
        uVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      }
      if (lVar20 == 0) {
        return uVar10;
      }
    }
    unaff_x21 = 0;
    if (plVar15 != (long *)0x0) {
      lVar20 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar8 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06896cfc;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896cfc:
      (*(code *)*puVar8)(plVar15,puVar8[1]);
    }
    func_0x03365958(uVar6);
    func_0x03280ca4(0);
    func_0x02f09514();
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xd0);
    *(code **)(puVar2 + -0xd0) = MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState;
    *(undefined8 *)(puVar2 + -0xc0) = uVar6;
    *(long **)(puVar2 + -0xb8) = plVar15;
    unaff_x20 = 0x7e28000;
    if ((bRam0000000007e28d8d & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6888);
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_078106a0);
      bRam0000000007e28d8d = 1;
    }
    puVar11 = PTR_DAT_077e6888;
    if (extraout_x1 != 0) {
      unaff_x20 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_07780428);
      uVar10 = func_0x03ced81c(extraout_x1,*(undefined8 *)puVar11);
      if (unaff_x20 == 0) {
        return uVar10;
      }
      if (*(int *)(unaff_x20 + 0x44) == 3) {
        return uVar10;
      }
      if (uVar10 != 0) {
        if (*(int *)(uVar10 + 0x28) != 2) {
          *(undefined4 *)(uVar10 + 0x28) = 2;
          *(undefined1 *)(extraout_x1 + 0x46) = 1;
        }
        return uVar10;
      }
    }
    unaff_x30 = MergeEngine_ECS_Systems_Items_TimeLockSystem__EntityCreated;
    auVar24 = func_0x03280cac();
    unaff_x19 = extraout_x1;
    unaff_x25 = puVar22;
    unaff_x26 = puVar5;
    unaff_x27 = puVar21;
  } while( true );
}


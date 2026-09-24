/* Ghidra 12.1.2 native pseudocode; RVA 0x6796D20; MergeEngine.ECS.Systems.Items.TimeLockSystem.HandleMergeState; status ok */

ulong MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState
                (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x1;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar18;
  undefined8 uVar19;
  undefined8 unaff_x21;
  undefined *puVar20;
  long unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x24;
  undefined *puVar21;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x29;
  code *unaff_x30;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  do {
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
    lVar18 = 0x7e28000;
    if ((bRam0000000007e28d8d & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6888);
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_078106a0);
      bRam0000000007e28d8d = 1;
    }
    puVar10 = PTR_DAT_077e6888;
    if (param_2 != 0) {
      lVar18 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_07780428);
      uVar9 = func_0x03ced81c(param_2,*(undefined8 *)puVar10);
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x44) == 3)) {
        return uVar9;
      }
      if (uVar9 != 0) {
        if (*(int *)(uVar9 + 0x28) == 2) {
          return uVar9;
        }
        *(undefined4 *)(uVar9 + 0x28) = 2;
        *(undefined1 *)(param_2 + 0x46) = 1;
        return uVar9;
      }
    }
    auVar23 = func_0x03280cac();
    lVar12 = auVar23._8_8_;
    lVar4 = auVar23._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x6896dd4;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x30) = lVar18;
    *(long *)((long)register0x00000008 + -0x28) = param_2;
    lVar18 = 0x7e28000;
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
    puVar10 = unaff_x24;
    if (lVar12 == 0) {
LAB_06896fe8:
      auVar23 = func_0x03280cac();
      lVar13 = auVar23._8_8_;
      lVar11 = auVar23._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0x6896fec;
      *(long *)((long)register0x00000008 + -0x78) = lVar18;
      *(long *)((long)register0x00000008 + -0x70) = lVar12;
      *(long *)((long)register0x00000008 + -0x68) = lVar4;
      if ((bRam0000000007e28d92 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810620);
        func_0x03280a18(PTR_DAT_0777a960);
        func_0x03280a18(PTR_DAT_078106c8);
        bRam0000000007e28d92 = 1;
      }
      func_0x064a7330(lVar11,lVar13,0);
      lVar18 = 0;
      puVar20 = (undefined *)0x7e28000;
      if (lVar13 == 0) {
LAB_068970d0:
        uVar9 = func_0x03280cac();
        puVar21 = PTR_DAT_078106e0;
        puVar5 = PTR_DAT_078106d8;
        puVar10 = PTR_DAT_078106d0;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x68970d4;
        *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
        *(long *)((long)register0x00000008 + -0xa0) = unaff_x22;
        *(undefined **)((long)register0x00000008 + -0x98) = puVar20;
        *(long *)((long)register0x00000008 + -0x90) = lVar18;
        *(long *)((long)register0x00000008 + -0x88) = lVar11;
        if ((bRam0000000007e28d93 & 1) == 0) {
          func_0x03280a18(PTR_DAT_078106d8);
          func_0x03280a18(PTR_DAT_078106d0);
          func_0x03280a18(PTR_DAT_078106e0);
          bRam0000000007e28d93 = 1;
        }
        uVar6 = func_0x03280ca0(*(undefined8 *)puVar10);
        func_0x04f610a8(uVar6,*(undefined8 *)puVar5);
        *(undefined8 *)(uVar9 + 0x60) = uVar6;
        func_0x032809c4((undefined8 *)(uVar9 + 0x60),uVar6);
        uVar6 = *(undefined8 *)puVar21;
        return uVar9;
      }
      lVar18 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_0777a960);
      puVar5 = PTR_DAT_07810620;
      if (lVar18 == 0) {
        return 0;
      }
      if (*(long *)(lVar11 + 0x60) == 0) goto LAB_068970d0;
      lVar4 = func_0x04f61e04(*(long *)(lVar11 + 0x60),*(undefined4 *)(lVar18 + 0x40),
                              *(undefined8 *)PTR_DAT_07810620);
      if (lVar4 == 0) {
        return 0;
      }
      puVar20 = puVar5;
      if ((*(long *)(lVar11 + 0x60) == 0) ||
         (lVar4 = func_0x04f61e04(*(long *)(lVar11 + 0x60),*(undefined4 *)(lVar18 + 0x40),
                                  *(undefined8 *)puVar5), lVar4 == 0)) goto LAB_068970d0;
      func_0x04145af8(lVar4,lVar18,*(undefined8 *)PTR_DAT_078106c8);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x70);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x68);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x60);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    }
    else {
      lVar18 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a960);
      if (lVar18 == 0) {
        return 0;
      }
      if (*(long *)(lVar4 + 0x60) == 0) goto LAB_06896fe8;
      uVar9 = func_0x04f62098(*(long *)(lVar4 + 0x60),*(undefined4 *)(lVar18 + 0x40),
                              *(undefined8 *)PTR_DAT_07810618);
      if ((uVar9 & 1) == 0) {
        unaff_x22 = *(long *)(lVar4 + 0x60);
        unaff_x23 = (ulong)*(uint *)(lVar18 + 0x40);
        puVar10 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_078106c0);
        func_0x04143c38(puVar10,*(undefined8 *)PTR_DAT_078106b8);
        if (unaff_x22 == 0) goto LAB_06896fe8;
        func_0x04f61e90(unaff_x22,unaff_x23,puVar10,*(undefined8 *)PTR_DAT_078106a8);
      }
      if ((*(long *)(lVar4 + 0x60) == 0) ||
         (lVar11 = func_0x04f61e04(*(long *)(lVar4 + 0x60),*(undefined4 *)(lVar18 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620), lVar11 == 0))
      goto LAB_06896fe8;
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar15 = *(long *)PTR_DAT_078106b0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_06896fe8;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar18;
        func_0x032809c4(plVar14,lVar18);
      }
      else {
        func_0x0414446c(lVar11,lVar18,
                        *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(lVar18 + 0x40) == 1) {
        lVar11 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a920);
        if (lVar11 == 0) goto LAB_06896fe8;
        if ((*(uint *)(lVar11 + 0x58) & (*(uint *)(lVar18 + 0x48) ^ 0xffffffff)) == 0) {
          MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(lVar4,lVar18);
        }
        else {
          *(undefined8 *)(lVar18 + 0x30) = 0;
        }
      }
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x28);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x40);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x38);
      puVar10 = *(undefined **)((long)register0x00000008 + -0x50);
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0x48);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x60);
      lVar11 = lVar4;
    }
    puVar20 = PTR_DAT_07810678;
    *(undefined8 *)(puVar2 + -0x30) = uVar22;
    *(long *)(puVar2 + -0x20) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x18) = uVar19;
    *(undefined8 *)(puVar2 + -0x10) = uVar6;
    *(undefined8 *)(puVar2 + -8) = uVar17;
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
    lVar4 = *(long *)puVar20;
    *(undefined8 *)(puVar2 + -0x48) = 0;
    *(undefined8 *)(puVar2 + -0x40) = 0;
    *(undefined8 *)(puVar2 + -0x38) = 0;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar5 = puVar20;
    if (lVar18 == 0) {
LAB_06896844:
      func_0x03280cac();
      puVar20 = puVar5;
    }
    else {
      uVar9 = func_0x03d37ac4(**(undefined8 **)(*(long *)puVar20 + 0xb8),
                              *(undefined4 *)(lVar18 + 0x40),*(undefined8 *)PTR_DAT_07810680);
      if ((uVar9 & 1) == 0) {
        return uVar9;
      }
      if (*(long *)(lVar11 + 0x60) == 0) goto LAB_06896844;
      uVar9 = func_0x04f62098(*(long *)(lVar11 + 0x60),*(undefined4 *)(lVar18 + 0x40),
                              *(undefined8 *)PTR_DAT_07810618);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar11 + 0x60) != 0) {
          puVar5 = (undefined *)
                   func_0x04f61e04(*(long *)(lVar11 + 0x60),*(undefined4 *)(lVar18 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620);
          if (puVar5 == (undefined *)0x0) goto LAB_06896848;
          bVar3 = func_0x068962dc(lVar11,lVar18);
          func_0x04145068(puVar2 + -0x48,puVar5,*(undefined8 *)PTR_DAT_07810640);
          puVar20 = PTR_DAT_07810630;
          while( true ) {
            uVar9 = func_0x051159b4(puVar2 + -0x48,*(undefined8 *)puVar20);
            if ((uVar9 & 1) == 0) {
              uVar9 = func_0x051159b0(puVar2 + -0x48,*(undefined8 *)PTR_DAT_07810628);
              return uVar9;
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
    uVar22 = func_0x03280a2c(PTR_DAT_07810648);
    func_0x057ced78(uVar6,uVar22,0);
    uVar22 = func_0x03280a2c(PTR_DAT_07810688);
    auVar24 = func_0x03280b7c(uVar6,uVar22);
    uVar6 = auVar24._0_8_;
    if (auVar24._8_4_ == 1) {
      plVar14 = (long *)func_0x072ce910(uVar6);
      lVar18 = *plVar14;
      func_0x072ce920();
      uVar9 = func_0x051159b0(puVar2 + -0x48,*(undefined8 *)PTR_DAT_07810628);
      if (lVar18 == 0) {
        return uVar9;
      }
      func_0x03280ca4(lVar18);
    }
    func_0x051159b0(puVar2 + -0x48,*(undefined8 *)PTR_DAT_07810628);
    func_0x03365958(uVar6);
    func_0x03280ca4(0);
    auVar23 = func_0x02f09514();
    uVar7 = auVar23._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xb0);
    *(undefined8 *)(puVar2 + -0xb0) = unaff_x29;
    *(code **)(puVar2 + -0xa8) = MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessComponents;
    *(ulong *)(puVar2 + -0xa0) = unaff_x28;
    *(undefined **)(puVar2 + -0x98) = unaff_x27;
    *(undefined **)(puVar2 + -0x90) = unaff_x26;
    *(undefined **)(puVar2 + -0x88) = unaff_x25;
    *(undefined **)(puVar2 + -0x80) = puVar10;
    *(ulong *)(puVar2 + -0x78) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x70) = 0x7e28000;
    *(undefined **)(puVar2 + -0x68) = puVar20;
    *(undefined8 *)(puVar2 + -0x60) = uVar6;
    *(undefined8 *)(puVar2 + -0x58) = 0;
    lVar18 = 0x7e28000;
    uVar9 = uVar7;
    if ((bRam0000000007e28d8c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6760);
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_077d7588);
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_07810690);
      func_0x03280a18(PTR_DAT_0774e8e0);
      uVar9 = func_0x03280a18(PTR_DAT_07810698);
      bRam0000000007e28d8c = 1;
    }
    if (auVar23._8_8_ == 0) {
      return uVar9;
    }
    unaff_x19 = (long *)func_0x04545bc8(auVar23._8_8_,*(undefined8 *)PTR_DAT_07810698);
    puVar21 = PTR_DAT_07810690;
    puVar5 = PTR_DAT_077e6760;
    puVar20 = PTR_DAT_0777e638;
    unaff_x24 = PTR_DAT_0774e8e0;
    if (unaff_x19 != (long *)0x0) {
      unaff_x23 = 0;
      unaff_x29 = 1;
LAB_068969d8:
      lVar18 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)unaff_x24) {
            puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06896a24;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(unaff_x19,*(long *)unaff_x24,0);
LAB_06896a24:
      uVar9 = (*(code *)*puVar8)(unaff_x19,puVar8[1]);
      if ((uVar9 & 1) == 0) {
        lVar18 = 0;
        goto LAB_06896ba0;
      }
      lVar18 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar21) {
            puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06896a80;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(unaff_x19,*(long *)puVar21,0);
LAB_06896a80:
      lVar18 = (*(code *)*puVar8)(unaff_x19,puVar8[1]);
      if (lVar18 != 0) {
        unaff_x22 = func_0x03ced81c(lVar18,*(undefined8 *)puVar5);
        uVar9 = func_0x03ced81c(lVar18,*(undefined8 *)puVar20);
        if (uVar9 != 0) {
          if (uVar9 != 0) {
            unaff_x28 = (ulong)*(byte *)(uVar9 + 0x78);
            unaff_x23 = uVar9;
            if (unaff_x22 != 0) goto LAB_06896ad4;
            goto LAB_06896c28;
          }
          goto LAB_06896c2c;
        }
        unaff_x28 = 0;
        uVar9 = unaff_x23;
        if (unaff_x22 == 0) goto LAB_06896c28;
LAB_06896ad4:
        if (*(char *)(unaff_x22 + 0x30) != '\0') {
          uVar9 = func_0x069fe14c(lVar18,0);
          if ((((uVar9 & 1) != 0) && (*(char *)(lVar18 + 0x44) == '\0')) &&
             (*(char *)(lVar18 + 0x45) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
            MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(uVar7,lVar18);
          }
          if ((*(char *)(unaff_x22 + 0x30) != '\0') && (*(char *)(lVar18 + 0x44) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
          }
        }
        if ((((*(char *)(lVar18 + 0x44) != '\0') ||
             ((uVar9 = func_0x064a7438(uVar7,lVar18,0), (uVar9 & 1) != 0 &&
              (0.0 < *(double *)(lVar18 + 0x30))))) && ((int)unaff_x28 == 0)) &&
           (*(char *)(lVar18 + 0x4c) == '\0')) {
          func_0x06895fc4(uVar7,lVar18);
        }
        *(undefined1 *)(lVar18 + 0x4c) = 0;
        if (*(double *)(lVar18 + 0x30) <= 0.0) {
          lVar4 = func_0x03ced81c(lVar18,*(undefined8 *)PTR_DAT_077d7588);
          if (lVar4 == 0) goto LAB_06896c30;
          *(undefined1 *)(lVar4 + 0x48) = 1;
          MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState(lVar4,lVar18);
        }
        goto LAB_068969d8;
      }
      func_0x03280cac();
      uVar9 = unaff_x23;
LAB_06896c28:
      func_0x03280cac();
LAB_06896c2c:
      func_0x03280cac();
      unaff_x23 = uVar9;
LAB_06896c30:
      func_0x03280cac();
      puVar10 = unaff_x24;
      unaff_x25 = puVar21;
      unaff_x26 = puVar5;
      unaff_x27 = puVar20;
    }
    func_0x03280cac();
    unaff_x24 = puVar10;
    puVar21 = unaff_x25;
    puVar5 = unaff_x26;
    puVar20 = unaff_x27;
    while( true ) {
      auVar24 = func_0x03280ca4(lVar18);
      unaff_x20 = auVar24._0_8_;
      if (auVar24._8_4_ != 1) break;
      plVar14 = (long *)func_0x072ce910(unaff_x20);
      lVar18 = *plVar14;
      uVar9 = func_0x072ce920();
LAB_06896ba0:
      if (unaff_x19 != (long *)0x0) {
        lVar4 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06896bf8;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(unaff_x19,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896bf8:
        uVar9 = (*(code *)*puVar8)(unaff_x19,puVar8[1]);
      }
      if (lVar18 == 0) {
        return uVar9;
      }
    }
    unaff_x21 = 0;
    if (unaff_x19 != (long *)0x0) {
      lVar18 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06896cfc;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(unaff_x19,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896cfc:
      (*(code *)*puVar8)(unaff_x19,puVar8[1]);
    }
    func_0x03365958(unaff_x20);
    func_0x03280ca4(0);
    unaff_x30 = MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState;
    func_0x02f09514();
    param_2 = extraout_x1;
    unaff_x25 = puVar21;
    unaff_x26 = puVar5;
    unaff_x27 = puVar20;
  } while( true );
}


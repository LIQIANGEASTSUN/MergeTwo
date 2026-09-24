/* Ghidra 12.1.2 native pseudocode; RVA 0x67966A8; MergeEngine.ECS.Systems.Items.TimeLockSystem.UpdateCanUnlockStatus; status ok */

ulong MergeEngine_ECS_Systems_Items_TimeLockSystem__UpdateCanUnlockStatus(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long extraout_x1;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined *puVar17;
  long unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar18;
  undefined *unaff_x26;
  undefined *puVar19;
  undefined *unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  
code_r0x068966a8:
  do {
    puVar17 = PTR_DAT_07810678;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
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
    lVar3 = *(long *)puVar17;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar5 = puVar17;
    if (param_2 == 0) {
LAB_06896844:
      func_0x03280cac();
      puVar17 = puVar5;
    }
    else {
      uVar4 = func_0x03d37ac4(**(undefined8 **)(*(long *)puVar17 + 0xb8),
                              *(undefined4 *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_07810680);
      if ((uVar4 & 1) == 0) {
        return uVar4;
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_06896844;
      uVar4 = func_0x04f62098(*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x40),
                              *(undefined8 *)PTR_DAT_07810618);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) != 0) {
          puVar5 = (undefined *)
                   func_0x04f61e04(*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620);
          if (puVar5 == (undefined *)0x0) goto LAB_06896848;
          bVar2 = MergeEngine_ECS_Systems_Items_TimeLockSystem__AreItemsInGroupBeingUnlocked
                            (param_1,param_2);
          func_0x04145068((undefined1 *)((long)register0x00000008 + -0x48),puVar5,
                          *(undefined8 *)PTR_DAT_07810640);
          puVar17 = PTR_DAT_07810630;
          while( true ) {
            uVar4 = func_0x051159b4((undefined1 *)((long)register0x00000008 + -0x48),
                                    *(undefined8 *)puVar17);
            if ((uVar4 & 1) == 0) {
              uVar4 = func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),
                                      *(undefined8 *)PTR_DAT_07810628);
              return uVar4;
            }
            if (*(long *)((long)register0x00000008 + -0x38) == 0) break;
            *(byte *)(*(long *)((long)register0x00000008 + -0x38) + 0x45) = ~bVar2 & 1;
          }
          func_0x03280cac();
        }
        goto LAB_06896844;
      }
    }
LAB_06896848:
    func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar6 = func_0x03280ca0();
    uVar7 = func_0x03280a2c(PTR_DAT_07810648);
    func_0x057ced78(uVar6,uVar7,0);
    uVar7 = func_0x03280a2c(PTR_DAT_07810688);
    auVar21 = func_0x03280b7c(uVar6,uVar7);
    uVar6 = auVar21._0_8_;
    if (auVar21._8_4_ == 1) {
      plVar8 = (long *)func_0x072ce910(uVar6);
      lVar3 = *plVar8;
      func_0x072ce920();
      uVar4 = func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),
                              *(undefined8 *)PTR_DAT_07810628);
      if (lVar3 == 0) {
        return uVar4;
      }
      func_0x03280ca4(lVar3);
    }
    func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)PTR_DAT_07810628
                   );
    func_0x03365958(uVar6);
    func_0x03280ca4(0);
    auVar20 = func_0x02f09514();
    uVar9 = auVar20._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x29;
    *(code **)((long)register0x00000008 + -0xa8) =
         MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessComponents;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x98) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x90) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x88) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x80) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x7e28000;
    *(undefined **)((long)register0x00000008 + -0x68) = puVar17;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    lVar3 = 0x7e28000;
    uVar4 = uVar9;
    if ((bRam0000000007e28d8c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6760);
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_077d7588);
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_07810690);
      func_0x03280a18(PTR_DAT_0774e8e0);
      uVar4 = func_0x03280a18(PTR_DAT_07810698);
      bRam0000000007e28d8c = 1;
    }
    if (auVar20._8_8_ == 0) {
      return uVar4;
    }
    plVar8 = (long *)func_0x04545bc8(auVar20._8_8_,*(undefined8 *)PTR_DAT_07810698);
    puVar18 = PTR_DAT_07810690;
    puVar19 = PTR_DAT_077e6760;
    puVar5 = PTR_DAT_0777e638;
    puVar17 = PTR_DAT_0774e8e0;
    if (plVar8 != (long *)0x0) {
      unaff_x23 = 0;
      unaff_x29 = 1;
LAB_068969d8:
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar17) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06896a24;
          }
          uVar4 = uVar4 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar17,0);
LAB_06896a24:
      uVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if ((uVar4 & 1) == 0) {
        lVar3 = 0;
        goto LAB_06896ba0;
      }
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar18) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06896a80;
          }
          uVar4 = uVar4 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar18,0);
LAB_06896a80:
      lVar3 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if (lVar3 != 0) {
        unaff_x22 = func_0x03ced81c(lVar3,*(undefined8 *)puVar19);
        uVar4 = func_0x03ced81c(lVar3,*(undefined8 *)puVar5);
        if (uVar4 != 0) {
          if (uVar4 != 0) {
            unaff_x28 = (ulong)*(byte *)(uVar4 + 0x78);
            unaff_x23 = uVar4;
            if (unaff_x22 != 0) goto LAB_06896ad4;
            goto LAB_06896c28;
          }
          goto LAB_06896c2c;
        }
        unaff_x28 = 0;
        uVar4 = unaff_x23;
        if (unaff_x22 == 0) goto LAB_06896c28;
LAB_06896ad4:
        if (*(char *)(unaff_x22 + 0x30) != '\0') {
          uVar4 = func_0x069fe14c(lVar3,0);
          if ((((uVar4 & 1) != 0) && (*(char *)(lVar3 + 0x44) == '\0')) &&
             (*(char *)(lVar3 + 0x45) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
            MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(uVar9,lVar3);
          }
          if ((*(char *)(unaff_x22 + 0x30) != '\0') && (*(char *)(lVar3 + 0x44) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
          }
        }
        if ((((*(char *)(lVar3 + 0x44) != '\0') ||
             ((uVar4 = func_0x064a7438(uVar9,lVar3,0), (uVar4 & 1) != 0 &&
              (0.0 < *(double *)(lVar3 + 0x30))))) && ((int)unaff_x28 == 0)) &&
           (*(char *)(lVar3 + 0x4c) == '\0')) {
          MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessCountdown(uVar9,lVar3);
        }
        *(undefined1 *)(lVar3 + 0x4c) = 0;
        if (*(double *)(lVar3 + 0x30) <= 0.0) {
          lVar13 = func_0x03ced81c(lVar3,*(undefined8 *)PTR_DAT_077d7588);
          if (lVar13 == 0) goto LAB_06896c30;
          *(undefined1 *)(lVar13 + 0x48) = 1;
          MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState(lVar13,lVar3);
        }
        goto LAB_068969d8;
      }
      func_0x03280cac();
      uVar4 = unaff_x23;
LAB_06896c28:
      func_0x03280cac();
LAB_06896c2c:
      func_0x03280cac();
      unaff_x23 = uVar4;
LAB_06896c30:
      func_0x03280cac();
      unaff_x24 = puVar17;
      unaff_x25 = puVar18;
      unaff_x26 = puVar19;
      unaff_x27 = puVar5;
    }
    func_0x03280cac();
    puVar18 = unaff_x25;
    puVar19 = unaff_x26;
    puVar5 = unaff_x27;
    while( true ) {
      auVar21 = func_0x03280ca4(lVar3);
      uVar6 = auVar21._0_8_;
      if (auVar21._8_4_ != 1) break;
      plVar11 = (long *)func_0x072ce910(uVar6);
      lVar3 = *plVar11;
      uVar4 = func_0x072ce920();
      puVar17 = unaff_x24;
LAB_06896ba0:
      if (plVar8 != (long *)0x0) {
        lVar13 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar4 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06896bf8;
            }
            uVar4 = uVar4 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar4 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896bf8:
        uVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      }
      unaff_x24 = puVar17;
      if (lVar3 == 0) {
        return uVar4;
      }
    }
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06896cfc;
          }
          uVar4 = uVar4 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896cfc:
      (*(code *)*puVar10)(plVar8,puVar10[1]);
    }
    func_0x03365958(uVar6);
    func_0x03280ca4(0);
    func_0x02f09514();
    *(code **)((long)register0x00000008 + -0xd0) =
         MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar6;
    *(long **)((long)register0x00000008 + -0xb8) = plVar8;
    lVar3 = 0x7e28000;
    if ((bRam0000000007e28d8d & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6888);
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_078106a0);
      bRam0000000007e28d8d = 1;
    }
    puVar17 = PTR_DAT_077e6888;
    if (extraout_x1 != 0) {
      lVar3 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_07780428);
      uVar4 = func_0x03ced81c(extraout_x1,*(undefined8 *)puVar17);
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x44) == 3)) {
        return uVar4;
      }
      if (uVar4 != 0) {
        if (*(int *)(uVar4 + 0x28) != 2) {
          *(undefined4 *)(uVar4 + 0x28) = 2;
          *(undefined1 *)(extraout_x1 + 0x46) = 1;
          return uVar4;
        }
        return uVar4;
      }
    }
    auVar20 = func_0x03280cac();
    lVar12 = auVar20._8_8_;
    lVar13 = auVar20._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x6896dd4;
    *(undefined **)((long)register0x00000008 + -0x100) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0xf8) = unaff_x23;
    *(long *)((long)register0x00000008 + -0xf0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(long *)((long)register0x00000008 + -0xe0) = lVar3;
    *(long *)((long)register0x00000008 + -0xd8) = extraout_x1;
    param_2 = 0x7e28000;
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
    unaff_x25 = puVar18;
    unaff_x26 = puVar19;
    unaff_x27 = puVar5;
    if (lVar12 == 0) {
LAB_06896fe8:
      auVar20 = func_0x03280cac();
      lVar3 = auVar20._8_8_;
      param_1 = auVar20._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0x6896fec;
      *(long *)((long)register0x00000008 + -0x128) = param_2;
      *(long *)((long)register0x00000008 + -0x120) = lVar12;
      *(long *)((long)register0x00000008 + -0x118) = lVar13;
      if ((bRam0000000007e28d92 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810620);
        func_0x03280a18(PTR_DAT_0777a960);
        func_0x03280a18(PTR_DAT_078106c8);
        bRam0000000007e28d92 = 1;
      }
      func_0x064a7330(param_1,lVar3,0);
      param_2 = 0;
      puVar17 = (undefined *)0x7e28000;
      if (lVar3 == 0) {
LAB_068970d0:
        uVar4 = func_0x03280cac();
        puVar18 = PTR_DAT_078106e0;
        puVar19 = PTR_DAT_078106d8;
        puVar5 = PTR_DAT_078106d0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0x68970d4;
        *(ulong *)((long)register0x00000008 + -0x158) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x150) = unaff_x22;
        *(undefined **)((long)register0x00000008 + -0x148) = puVar17;
        *(long *)((long)register0x00000008 + -0x140) = param_2;
        *(long *)((long)register0x00000008 + -0x138) = param_1;
        if ((bRam0000000007e28d93 & 1) == 0) {
          func_0x03280a18(PTR_DAT_078106d8);
          func_0x03280a18(PTR_DAT_078106d0);
          func_0x03280a18(PTR_DAT_078106e0);
          bRam0000000007e28d93 = 1;
        }
        uVar6 = func_0x03280ca0(*(undefined8 *)puVar5);
        func_0x04f610a8(uVar6,*(undefined8 *)puVar19);
        *(undefined8 *)(uVar4 + 0x60) = uVar6;
        func_0x032809c4((undefined8 *)(uVar4 + 0x60),uVar6);
        uVar6 = *(undefined8 *)puVar18;
        return uVar4;
      }
      param_2 = func_0x03d20d84(lVar3,*(undefined8 *)PTR_DAT_0777a960);
      puVar5 = PTR_DAT_07810620;
      if (param_2 == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_068970d0;
      lVar3 = func_0x04f61e04(*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x40),
                              *(undefined8 *)PTR_DAT_07810620);
      if (lVar3 == 0) {
        return 0;
      }
      puVar17 = puVar5;
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar3 = func_0x04f61e04(*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x40),
                                  *(undefined8 *)puVar5), lVar3 == 0)) goto LAB_068970d0;
      func_0x04145af8(lVar3,param_2,*(undefined8 *)PTR_DAT_078106c8);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x120);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x118);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x130);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x128);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
      goto code_r0x068966a8;
    }
    param_2 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a960);
    if (param_2 == 0) {
      return 0;
    }
    if (*(long *)(lVar13 + 0x60) == 0) goto LAB_06896fe8;
    uVar4 = func_0x04f62098(*(long *)(lVar13 + 0x60),*(undefined4 *)(param_2 + 0x40),
                            *(undefined8 *)PTR_DAT_07810618);
    if ((uVar4 & 1) == 0) {
      unaff_x22 = *(long *)(lVar13 + 0x60);
      unaff_x23 = (ulong)*(uint *)(param_2 + 0x40);
      unaff_x24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_078106c0);
      func_0x04143c38(unaff_x24,*(undefined8 *)PTR_DAT_078106b8);
      if (unaff_x22 == 0) goto LAB_06896fe8;
      func_0x04f61e90(unaff_x22,unaff_x23,unaff_x24,*(undefined8 *)PTR_DAT_078106a8);
    }
    if ((*(long *)(lVar13 + 0x60) == 0) ||
       (lVar3 = func_0x04f61e04(*(long *)(lVar13 + 0x60),*(undefined4 *)(param_2 + 0x40),
                                *(undefined8 *)PTR_DAT_07810620), lVar3 == 0)) goto LAB_06896fe8;
    lVar14 = *(long *)(lVar3 + 0x10);
    lVar15 = *(long *)PTR_DAT_078106b0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_06896fe8;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = param_2;
      func_0x032809c4(plVar8,param_2);
    }
    else {
      func_0x0414446c(lVar3,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    if (*(int *)(param_2 + 0x40) == 1) {
      lVar3 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a920);
      if (lVar3 == 0) goto LAB_06896fe8;
      if ((*(uint *)(lVar3 + 0x58) & (*(uint *)(param_2 + 0x48) ^ 0xffffffff)) == 0) {
        MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(lVar13,param_2);
      }
      else {
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    unaff_x22 = *(long *)((long)register0x00000008 + -0xf0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    unaff_x24 = *(undefined **)((long)register0x00000008 + -0x100);
    unaff_x23 = *(ulong *)((long)register0x00000008 + -0xf8);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x110);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    param_1 = lVar13;
  } while( true );
}


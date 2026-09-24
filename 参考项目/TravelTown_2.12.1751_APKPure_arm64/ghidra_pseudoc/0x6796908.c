/* Ghidra 12.1.2 native pseudocode; RVA 0x6796908; MergeEngine.ECS.Systems.Items.TimeLockSystem.ProcessComponents; status ok */

/* WARNING: Possible PIC construction at 0x06896b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06896b98) */

ulong MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessComponents
                (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long extraout_x1;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined *unaff_x21;
  long lVar19;
  long unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar20;
  undefined *unaff_x26;
  undefined *puVar21;
  undefined *unaff_x27;
  undefined *puVar22;
  ulong unaff_x28;
  undefined8 unaff_x29;
  code *unaff_x30;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  long lVar11;
  long lVar12;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  do {
    uVar6 = auVar25._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x29;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x30;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    lVar19 = 0x7e28000;
    uVar7 = uVar6;
    if ((bRam0000000007e28d8c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6760);
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_077d7588);
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_07810690);
      func_0x03280a18(PTR_DAT_0774e8e0);
      uVar7 = func_0x03280a18(PTR_DAT_07810698);
      bRam0000000007e28d8c = 1;
    }
    if (auVar25._8_8_ == 0) {
      return uVar7;
    }
    plVar8 = (long *)func_0x04545bc8(auVar25._8_8_,*(undefined8 *)PTR_DAT_07810698);
    puVar20 = PTR_DAT_07810690;
    puVar21 = PTR_DAT_077e6760;
    puVar22 = PTR_DAT_0777e638;
    puVar5 = PTR_DAT_0774e8e0;
    if (plVar8 == (long *)0x0) {
LAB_06896c34:
      func_0x03280cac();
      puVar5 = unaff_x24;
      puVar20 = unaff_x25;
      puVar21 = unaff_x26;
      puVar22 = unaff_x27;
      while( true ) {
        auVar26 = func_0x03280ca4(lVar19);
        uVar6 = auVar26._0_8_;
        if (auVar26._8_4_ != 1) break;
        plVar10 = (long *)func_0x072ce910(uVar6);
        lVar19 = *plVar10;
        uVar7 = func_0x072ce920();
LAB_06896ba0:
        if (plVar8 != (long *)0x0) {
          lVar13 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_06896bf8;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896bf8:
          uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if (lVar19 == 0) {
          return uVar7;
        }
      }
      if (plVar8 != (long *)0x0) {
        lVar19 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar9 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06896cfc;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06896cfc:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      func_0x03365958(uVar6);
      func_0x03280ca4(0);
      uVar23 = 0x6896d20;
      func_0x02f09514();
      lVar19 = extraout_x1;
      lVar13 = 0;
      unaff_x24 = puVar5;
    }
    else {
      unaff_x23 = 0;
      unaff_x29 = 1;
      do {
        lVar19 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06896a24;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar5,0);
LAB_06896a24:
        uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar7 & 1) == 0) {
          lVar19 = 0;
          goto LAB_06896ba0;
        }
        lVar19 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar20) {
              puVar9 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06896a80;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar20,0);
LAB_06896a80:
        lVar19 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        unaff_x24 = puVar5;
        if (lVar19 == 0) {
          func_0x03280cac();
LAB_06896c28:
          func_0x03280cac();
LAB_06896c2c:
          func_0x03280cac();
          goto LAB_06896c30;
        }
        unaff_x22 = func_0x03ced81c(lVar19,*(undefined8 *)puVar21);
        uVar7 = func_0x03ced81c(lVar19,*(undefined8 *)puVar22);
        if (uVar7 != 0) {
          unaff_x23 = uVar7;
          if (uVar7 != 0) {
            unaff_x28 = (ulong)*(byte *)(uVar7 + 0x78);
            goto joined_r0x06896ac4;
          }
          goto LAB_06896c2c;
        }
        unaff_x28 = 0;
joined_r0x06896ac4:
        if (unaff_x22 == 0) goto LAB_06896c28;
        if (*(char *)(unaff_x22 + 0x30) != '\0') {
          uVar7 = func_0x069fe14c(lVar19,0);
          if ((((uVar7 & 1) != 0) && (*(char *)(lVar19 + 0x44) == '\0')) &&
             (*(char *)(lVar19 + 0x45) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
            MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(uVar6,lVar19);
          }
          if ((*(char *)(unaff_x22 + 0x30) != '\0') && (*(char *)(lVar19 + 0x44) != '\0')) {
            *(undefined1 *)(unaff_x22 + 0x30) = 0;
          }
        }
        if ((((*(char *)(lVar19 + 0x44) != '\0') ||
             ((uVar7 = func_0x064a7438(uVar6,lVar19,0), (uVar7 & 1) != 0 &&
              (0.0 < *(double *)(lVar19 + 0x30))))) && ((int)unaff_x28 == 0)) &&
           (*(char *)(lVar19 + 0x4c) == '\0')) {
          func_0x06895fc4(uVar6,lVar19);
        }
        *(undefined1 *)(lVar19 + 0x4c) = 0;
      } while (0.0 < *(double *)(lVar19 + 0x30));
      lVar13 = func_0x03ced81c(lVar19,*(undefined8 *)PTR_DAT_077d7588);
      if (lVar13 == 0) {
LAB_06896c30:
        func_0x03280cac();
        unaff_x25 = puVar20;
        unaff_x26 = puVar21;
        unaff_x27 = puVar22;
        goto LAB_06896c34;
      }
      *(undefined1 *)(lVar13 + 0x48) = 1;
      uVar23 = 0x6896b98;
      lVar13 = lVar19;
    }
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar23;
    *(ulong *)((long)register0x00000008 + -0x70) = uVar6;
    *(long **)((long)register0x00000008 + -0x68) = plVar8;
    lVar17 = 0x7e28000;
    if ((bRam0000000007e28d8d & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6888);
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_078106a0);
      bRam0000000007e28d8d = 1;
    }
    puVar5 = PTR_DAT_077e6888;
    if (lVar19 != 0) {
      lVar17 = func_0x03ced81c(lVar19,*(undefined8 *)PTR_DAT_07780428);
      uVar7 = func_0x03ced81c(lVar19,*(undefined8 *)puVar5);
      if ((lVar17 == 0) || (*(int *)(lVar17 + 0x44) == 3)) {
        return uVar7;
      }
      if (uVar7 != 0) {
        if (*(int *)(uVar7 + 0x28) == 2) {
          return uVar7;
        }
        *(undefined4 *)(uVar7 + 0x28) = 2;
        *(undefined1 *)(lVar19 + 0x46) = 1;
        return uVar7;
      }
    }
    auVar25 = func_0x03280cac();
    lVar12 = auVar25._8_8_;
    lVar11 = auVar25._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x6896dd4;
    *(undefined **)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(long *)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x98) = lVar13;
    *(long *)((long)register0x00000008 + -0x90) = lVar17;
    *(long *)((long)register0x00000008 + -0x88) = lVar19;
    lVar19 = 0x7e28000;
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
    if (lVar12 == 0) {
LAB_06896fe8:
      auVar25 = func_0x03280cac();
      lVar17 = auVar25._8_8_;
      lVar13 = auVar25._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x6896fec;
      *(long *)((long)register0x00000008 + -0xd8) = lVar19;
      *(long *)((long)register0x00000008 + -0xd0) = lVar12;
      *(long *)((long)register0x00000008 + -200) = lVar11;
      if ((bRam0000000007e28d92 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810620);
        func_0x03280a18(PTR_DAT_0777a960);
        func_0x03280a18(PTR_DAT_078106c8);
        bRam0000000007e28d92 = 1;
      }
      func_0x064a7330(lVar13,lVar17,0);
      lVar19 = 0;
      puVar5 = (undefined *)0x7e28000;
      if (lVar17 == 0) {
LAB_068970d0:
        uVar7 = func_0x03280cac();
        puVar20 = PTR_DAT_078106e0;
        puVar21 = PTR_DAT_078106d8;
        puVar22 = PTR_DAT_078106d0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0x68970d4;
        *(ulong *)((long)register0x00000008 + -0x108) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x100) = unaff_x22;
        *(undefined **)((long)register0x00000008 + -0xf8) = puVar5;
        *(long *)((long)register0x00000008 + -0xf0) = lVar19;
        *(long *)((long)register0x00000008 + -0xe8) = lVar13;
        if ((bRam0000000007e28d93 & 1) == 0) {
          func_0x03280a18(PTR_DAT_078106d8);
          func_0x03280a18(PTR_DAT_078106d0);
          func_0x03280a18(PTR_DAT_078106e0);
          bRam0000000007e28d93 = 1;
        }
        uVar23 = func_0x03280ca0(*(undefined8 *)puVar22);
        func_0x04f610a8(uVar23,*(undefined8 *)puVar21);
        *(undefined8 *)(uVar7 + 0x60) = uVar23;
        func_0x032809c4((undefined8 *)(uVar7 + 0x60),uVar23);
        uVar23 = *(undefined8 *)puVar20;
        return uVar7;
      }
      lVar19 = func_0x03d20d84(lVar17,*(undefined8 *)PTR_DAT_0777a960);
      puVar2 = PTR_DAT_07810620;
      if (lVar19 == 0) {
        return 0;
      }
      if (*(long *)(lVar13 + 0x60) == 0) goto LAB_068970d0;
      lVar17 = func_0x04f61e04(*(long *)(lVar13 + 0x60),*(undefined4 *)(lVar19 + 0x40),
                               *(undefined8 *)PTR_DAT_07810620);
      if (lVar17 == 0) {
        return 0;
      }
      puVar5 = puVar2;
      if ((*(long *)(lVar13 + 0x60) == 0) ||
         (lVar17 = func_0x04f61e04(*(long *)(lVar13 + 0x60),*(undefined4 *)(lVar19 + 0x40),
                                   *(undefined8 *)puVar2), lVar17 == 0)) goto LAB_068970d0;
      func_0x04145af8(lVar17,lVar19,*(undefined8 *)PTR_DAT_078106c8);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    }
    else {
      lVar19 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a960);
      if (lVar19 == 0) {
        return 0;
      }
      if (*(long *)(lVar11 + 0x60) == 0) goto LAB_06896fe8;
      uVar7 = func_0x04f62098(*(long *)(lVar11 + 0x60),*(undefined4 *)(lVar19 + 0x40),
                              *(undefined8 *)PTR_DAT_07810618);
      if ((uVar7 & 1) == 0) {
        unaff_x22 = *(long *)(lVar11 + 0x60);
        unaff_x23 = (ulong)*(uint *)(lVar19 + 0x40);
        unaff_x24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_078106c0);
        func_0x04143c38(unaff_x24,*(undefined8 *)PTR_DAT_078106b8);
        if (unaff_x22 == 0) goto LAB_06896fe8;
        func_0x04f61e90(unaff_x22,unaff_x23,unaff_x24,*(undefined8 *)PTR_DAT_078106a8);
      }
      if ((*(long *)(lVar11 + 0x60) == 0) ||
         (lVar13 = func_0x04f61e04(*(long *)(lVar11 + 0x60),*(undefined4 *)(lVar19 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620), lVar13 == 0))
      goto LAB_06896fe8;
      lVar17 = *(long *)(lVar13 + 0x10);
      lVar14 = *(long *)PTR_DAT_078106b0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_06896fe8;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar19;
        func_0x032809c4(plVar8,lVar19);
      }
      else {
        func_0x0414446c(lVar13,lVar19,
                        *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(lVar19 + 0x40) == 1) {
        lVar13 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a920);
        if (lVar13 == 0) goto LAB_06896fe8;
        if ((*(uint *)(lVar13 + 0x58) & (*(uint *)(lVar19 + 0x48) ^ 0xffffffff)) == 0) {
          MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(lVar11,lVar19);
        }
        else {
          *(undefined8 *)(lVar19 + 0x30) = 0;
        }
      }
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x90);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -0x88);
      unaff_x22 = *(long *)((long)register0x00000008 + -0xa0);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0x98);
      unaff_x24 = *(undefined **)((long)register0x00000008 + -0xb0);
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0xa8);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x80);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      lVar13 = lVar11;
    }
    unaff_x21 = PTR_DAT_07810678;
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x50);
    *(undefined8 *)(puVar3 + -0x30) = uVar24;
    *(long *)(puVar3 + -0x20) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x18) = uVar18;
    *(undefined8 *)(puVar3 + -0x10) = uVar23;
    *(undefined8 *)(puVar3 + -8) = uVar16;
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
    lVar17 = *(long *)unaff_x21;
    *(undefined8 *)(puVar3 + -0x48) = 0;
    *(undefined8 *)(puVar3 + -0x40) = 0;
    *(undefined8 *)(puVar3 + -0x38) = 0;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    puVar5 = unaff_x21;
    if (lVar19 == 0) {
LAB_06896844:
      func_0x03280cac();
      unaff_x21 = puVar5;
    }
    else {
      uVar7 = func_0x03d37ac4(**(undefined8 **)(*(long *)unaff_x21 + 0xb8),
                              *(undefined4 *)(lVar19 + 0x40),*(undefined8 *)PTR_DAT_07810680);
      if ((uVar7 & 1) == 0) {
        return uVar7;
      }
      if (*(long *)(lVar13 + 0x60) == 0) goto LAB_06896844;
      uVar7 = func_0x04f62098(*(long *)(lVar13 + 0x60),*(undefined4 *)(lVar19 + 0x40),
                              *(undefined8 *)PTR_DAT_07810618);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(lVar13 + 0x60) != 0) {
          puVar5 = (undefined *)
                   func_0x04f61e04(*(long *)(lVar13 + 0x60),*(undefined4 *)(lVar19 + 0x40),
                                   *(undefined8 *)PTR_DAT_07810620);
          if (puVar5 == (undefined *)0x0) goto LAB_06896848;
          bVar4 = func_0x068962dc(lVar13,lVar19);
          func_0x04145068(puVar3 + -0x48,puVar5,*(undefined8 *)PTR_DAT_07810640);
          puVar2 = PTR_DAT_07810630;
          while( true ) {
            uVar7 = func_0x051159b4(puVar3 + -0x48,*(undefined8 *)puVar2);
            if ((uVar7 & 1) == 0) {
              uVar7 = func_0x051159b0(puVar3 + -0x48,*(undefined8 *)PTR_DAT_07810628);
              return uVar7;
            }
            if (*(long *)(puVar3 + -0x38) == 0) break;
            *(byte *)(*(long *)(puVar3 + -0x38) + 0x45) = ~bVar4 & 1;
          }
          func_0x03280cac();
        }
        goto LAB_06896844;
      }
    }
LAB_06896848:
    func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar23 = func_0x03280ca0();
    uVar24 = func_0x03280a2c(PTR_DAT_07810648);
    func_0x057ced78(uVar23,uVar24,0);
    uVar24 = func_0x03280a2c(PTR_DAT_07810688);
    auVar26 = func_0x03280b7c(uVar23,uVar24);
    unaff_x20 = auVar26._0_8_;
    if (auVar26._8_4_ == 1) {
      plVar8 = (long *)func_0x072ce910(unaff_x20);
      lVar19 = *plVar8;
      func_0x072ce920();
      uVar7 = func_0x051159b0(puVar3 + -0x48,*(undefined8 *)PTR_DAT_07810628);
      if (lVar19 == 0) {
        return uVar7;
      }
      func_0x03280ca4(lVar19);
    }
    unaff_x19 = 0;
    func_0x051159b0(puVar3 + -0x48,*(undefined8 *)PTR_DAT_07810628);
    func_0x03365958(unaff_x20);
    func_0x03280ca4(0);
    unaff_x30 = MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessComponents;
    auVar25 = func_0x02f09514();
    unaff_x25 = puVar20;
    unaff_x26 = puVar21;
    unaff_x27 = puVar22;
  } while( true );
}


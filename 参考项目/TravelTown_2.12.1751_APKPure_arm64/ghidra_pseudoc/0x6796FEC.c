/* Ghidra 12.1.2 native pseudocode; RVA 0x6796FEC; MergeEngine.ECS.Systems.Items.TimeLockSystem.EntityRemoved; status ok */

ulong MergeEngine_ECS_Systems_Items_TimeLockSystem__EntityRemoved
                (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long extraout_x1;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar19;
  undefined *puVar20;
  long unaff_x21;
  undefined *puVar21;
  long unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar22;
  undefined *unaff_x26;
  undefined *puVar23;
  undefined *unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x29;
  code *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong uVar9;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = unaff_x19;
code_r0x06896fec:
  lVar12 = auVar25._8_8_;
  lVar18 = auVar25._0_8_;
  *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = auVar24._8_8_;
  *(long *)((long)register0x00000008 + -8) = auVar24._0_8_;
  if ((bRam0000000007e28d92 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810620);
    func_0x03280a18(PTR_DAT_0777a960);
    func_0x03280a18(PTR_DAT_078106c8);
    bRam0000000007e28d92 = 1;
  }
  func_0x064a7330(lVar18,lVar12,0);
  unaff_x21 = 0;
  puVar21 = (undefined *)0x7e28000;
  if (lVar12 != 0) {
    unaff_x21 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a960);
    puVar22 = PTR_DAT_07810620;
    if (unaff_x21 == 0) {
      return 0;
    }
    if (*(long *)(lVar18 + 0x60) != 0) {
      lVar12 = func_0x04f61e04(*(long *)(lVar18 + 0x60),*(undefined4 *)(unaff_x21 + 0x40),
                               *(undefined8 *)PTR_DAT_07810620);
      if (lVar12 == 0) {
        return 0;
      }
      puVar21 = puVar22;
      if ((*(long *)(lVar18 + 0x60) != 0) &&
         (lVar12 = func_0x04f61e04(*(long *)(lVar18 + 0x60),*(undefined4 *)(unaff_x21 + 0x40),
                                   *(undefined8 *)puVar22), lVar12 != 0)) {
        func_0x04145af8(lVar12,unaff_x21,*(undefined8 *)PTR_DAT_078106c8);
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x18);
        puVar21 = unaff_x25;
        puVar22 = unaff_x26;
        puVar23 = unaff_x27;
        do {
          puVar20 = PTR_DAT_07810678;
          *(undefined8 *)((long)register0x00000008 + -0x30) = uVar7;
          *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x18) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = uVar6;
          *(undefined8 *)((long)register0x00000008 + -8) = uVar17;
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
          lVar12 = *(long *)puVar20;
          *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          puVar5 = puVar20;
          if (unaff_x21 == 0) {
LAB_06896844:
            func_0x03280cac();
            puVar20 = puVar5;
          }
          else {
            uVar4 = func_0x03d37ac4(**(undefined8 **)(*(long *)puVar20 + 0xb8),
                                    *(undefined4 *)(unaff_x21 + 0x40),
                                    *(undefined8 *)PTR_DAT_07810680);
            if ((uVar4 & 1) == 0) {
              return uVar4;
            }
            if (*(long *)(lVar18 + 0x60) == 0) goto LAB_06896844;
            uVar4 = func_0x04f62098(*(long *)(lVar18 + 0x60),*(undefined4 *)(unaff_x21 + 0x40),
                                    *(undefined8 *)PTR_DAT_07810618);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(lVar18 + 0x60) != 0) {
                puVar5 = (undefined *)
                         func_0x04f61e04(*(long *)(lVar18 + 0x60),*(undefined4 *)(unaff_x21 + 0x40),
                                         *(undefined8 *)PTR_DAT_07810620);
                if (puVar5 == (undefined *)0x0) goto LAB_06896848;
                bVar3 = MergeEngine_ECS_Systems_Items_TimeLockSystem__AreItemsInGroupBeingUnlocked
                                  (lVar18,unaff_x21);
                func_0x04145068((undefined1 *)((long)register0x00000008 + -0x48),puVar5,
                                *(undefined8 *)PTR_DAT_07810640);
                puVar20 = PTR_DAT_07810630;
                while( true ) {
                  uVar4 = func_0x051159b4((undefined1 *)((long)register0x00000008 + -0x48),
                                          *(undefined8 *)puVar20);
                  if ((uVar4 & 1) == 0) {
                    uVar4 = func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),
                                            *(undefined8 *)PTR_DAT_07810628);
                    return uVar4;
                  }
                  if (*(long *)((long)register0x00000008 + -0x38) == 0) break;
                  *(byte *)(*(long *)((long)register0x00000008 + -0x38) + 0x45) = ~bVar3 & 1;
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
          auVar26 = func_0x03280b7c(uVar6,uVar7);
          uVar6 = auVar26._0_8_;
          if (auVar26._8_4_ == 1) {
            plVar8 = (long *)func_0x072ce910(uVar6);
            lVar18 = *plVar8;
            func_0x072ce920();
            uVar4 = func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),
                                    *(undefined8 *)PTR_DAT_07810628);
            if (lVar18 == 0) {
              return uVar4;
            }
            func_0x03280ca4(lVar18);
          }
          func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x48),
                          *(undefined8 *)PTR_DAT_07810628);
          func_0x03365958(uVar6);
          func_0x03280ca4(0);
          auVar24 = func_0x02f09514();
          uVar9 = auVar24._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x29;
          *(code **)((long)register0x00000008 + -0xa8) =
               MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessComponents;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x28;
          *(undefined **)((long)register0x00000008 + -0x98) = puVar23;
          *(undefined **)((long)register0x00000008 + -0x90) = puVar22;
          *(undefined **)((long)register0x00000008 + -0x88) = puVar21;
          *(undefined **)((long)register0x00000008 + -0x80) = unaff_x24;
          *(ulong *)((long)register0x00000008 + -0x78) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0x7e28000;
          *(undefined **)((long)register0x00000008 + -0x68) = puVar20;
          *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
          *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
          lVar18 = 0x7e28000;
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
          if (auVar24._8_8_ == 0) {
            return uVar4;
          }
          plVar8 = (long *)func_0x04545bc8(auVar24._8_8_,*(undefined8 *)PTR_DAT_07810698);
          unaff_x25 = PTR_DAT_07810690;
          unaff_x26 = PTR_DAT_077e6760;
          unaff_x27 = PTR_DAT_0777e638;
          puVar20 = PTR_DAT_0774e8e0;
          if (plVar8 != (long *)0x0) {
            unaff_x23 = 0;
            unaff_x29 = 1;
LAB_068969d8:
            lVar18 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar4 != 0) {
              piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar20) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06896a24;
                }
                uVar4 = uVar4 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar20,0);
LAB_06896a24:
            uVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if ((uVar4 & 1) == 0) {
              lVar18 = 0;
              goto LAB_06896ba0;
            }
            lVar18 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar4 != 0) {
              piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)unaff_x25) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06896a80;
                }
                uVar4 = uVar4 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar8,*(long *)unaff_x25,0);
LAB_06896a80:
            lVar18 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if (lVar18 != 0) {
              unaff_x22 = func_0x03ced81c(lVar18,*(undefined8 *)unaff_x26);
              uVar4 = func_0x03ced81c(lVar18,*(undefined8 *)unaff_x27);
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
                uVar4 = func_0x069fe14c(lVar18,0);
                if ((((uVar4 & 1) != 0) && (*(char *)(lVar18 + 0x44) == '\0')) &&
                   (*(char *)(lVar18 + 0x45) != '\0')) {
                  *(undefined1 *)(unaff_x22 + 0x30) = 0;
                  MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(uVar9,lVar18);
                }
                if ((*(char *)(unaff_x22 + 0x30) != '\0') && (*(char *)(lVar18 + 0x44) != '\0')) {
                  *(undefined1 *)(unaff_x22 + 0x30) = 0;
                }
              }
              if ((((*(char *)(lVar18 + 0x44) != '\0') ||
                   ((uVar4 = func_0x064a7438(uVar9,lVar18,0), (uVar4 & 1) != 0 &&
                    (0.0 < *(double *)(lVar18 + 0x30))))) && ((int)unaff_x28 == 0)) &&
                 (*(char *)(lVar18 + 0x4c) == '\0')) {
                MergeEngine_ECS_Systems_Items_TimeLockSystem__ProcessCountdown(uVar9,lVar18);
              }
              *(undefined1 *)(lVar18 + 0x4c) = 0;
              if (*(double *)(lVar18 + 0x30) <= 0.0) {
                lVar12 = func_0x03ced81c(lVar18,*(undefined8 *)PTR_DAT_077d7588);
                if (lVar12 == 0) goto LAB_06896c30;
                *(undefined1 *)(lVar12 + 0x48) = 1;
                MergeEngine_ECS_Systems_Items_TimeLockSystem__HandleMergeState(lVar12,lVar18);
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
            unaff_x24 = puVar20;
            puVar21 = unaff_x25;
            puVar22 = unaff_x26;
            puVar23 = unaff_x27;
          }
          func_0x03280cac();
          unaff_x25 = puVar21;
          unaff_x26 = puVar22;
          unaff_x27 = puVar23;
          while( true ) {
            auVar26 = func_0x03280ca4(lVar18);
            uVar6 = auVar26._0_8_;
            if (auVar26._8_4_ != 1) break;
            plVar11 = (long *)func_0x072ce910(uVar6);
            lVar18 = *plVar11;
            uVar4 = func_0x072ce920();
            puVar20 = unaff_x24;
LAB_06896ba0:
            if (plVar8 != (long *)0x0) {
              lVar12 = *plVar8;
              uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar4 != 0) {
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
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
            unaff_x24 = puVar20;
            if (lVar18 == 0) {
              return uVar4;
            }
          }
          if (plVar8 != (long *)0x0) {
            lVar18 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar4 != 0) {
              piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
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
          lVar12 = 0x7e28000;
          if ((bRam0000000007e28d8d & 1) == 0) {
            func_0x03280a18(PTR_DAT_077e6888);
            func_0x03280a18(PTR_DAT_07780428);
            func_0x03280a18(PTR_DAT_078106a0);
            bRam0000000007e28d8d = 1;
          }
          puVar21 = PTR_DAT_077e6888;
          if (extraout_x1 != 0) {
            lVar12 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_07780428);
            uVar4 = func_0x03ced81c(extraout_x1,*(undefined8 *)puVar21);
            if ((lVar12 == 0) || (*(int *)(lVar12 + 0x44) == 3)) {
              return uVar4;
            }
            if (uVar4 != 0) {
              if (*(int *)(uVar4 + 0x28) == 2) {
                return uVar4;
              }
              *(undefined4 *)(uVar4 + 0x28) = 2;
              *(undefined1 *)(extraout_x1 + 0x46) = 1;
              return uVar4;
            }
          }
          auVar24 = func_0x03280cac();
          lVar13 = auVar24._8_8_;
          lVar18 = auVar24._0_8_;
          puVar2 = (undefined8 *)((long)register0x00000008 + -0x110);
          *(code **)((long)register0x00000008 + -0x110) =
               MergeEngine_ECS_Systems_Items_TimeLockSystem__EntityCreated;
          *(undefined **)((long)register0x00000008 + -0x100) = unaff_x24;
          *(ulong *)((long)register0x00000008 + -0xf8) = unaff_x23;
          *(long *)((long)register0x00000008 + -0xf0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          *(long *)((long)register0x00000008 + -0xe0) = lVar12;
          *(long *)((long)register0x00000008 + -0xd8) = extraout_x1;
          unaff_x21 = 0x7e28000;
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
          if (lVar13 == 0) goto LAB_06896fe8;
          unaff_x21 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_0777a960);
          if (unaff_x21 == 0) {
            return 0;
          }
          if (*(long *)(lVar18 + 0x60) == 0) goto LAB_06896fe8;
          uVar4 = func_0x04f62098(*(long *)(lVar18 + 0x60),*(undefined4 *)(unaff_x21 + 0x40),
                                  *(undefined8 *)PTR_DAT_07810618);
          if ((uVar4 & 1) == 0) {
            unaff_x22 = *(long *)(lVar18 + 0x60);
            unaff_x23 = (ulong)*(uint *)(unaff_x21 + 0x40);
            unaff_x24 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_078106c0);
            func_0x04143c38(unaff_x24,*(undefined8 *)PTR_DAT_078106b8);
            if (unaff_x22 == 0) goto LAB_06896fe8;
            func_0x04f61e90(unaff_x22,unaff_x23,unaff_x24,*(undefined8 *)PTR_DAT_078106a8);
          }
          if ((*(long *)(lVar18 + 0x60) == 0) ||
             (lVar12 = func_0x04f61e04(*(long *)(lVar18 + 0x60),*(undefined4 *)(unaff_x21 + 0x40),
                                       *(undefined8 *)PTR_DAT_07810620), lVar12 == 0))
          goto LAB_06896fe8;
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar15 = *(long *)PTR_DAT_078106b0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_06896fe8;
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = unaff_x21;
            func_0x032809c4(plVar8,unaff_x21);
          }
          else {
            func_0x0414446c(lVar12,unaff_x21,
                            *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(unaff_x21 + 0x40) == 1) {
            lVar12 = func_0x03d20d84(lVar13,*(undefined8 *)PTR_DAT_0777a920);
            if (lVar12 == 0) goto LAB_06896fe8;
            if ((*(uint *)(lVar12 + 0x58) & (*(uint *)(unaff_x21 + 0x48) ^ 0xffffffff)) == 0) {
              MergeEngine_ECS_Systems_Items_TimeLockSystem__StartUnlocking(lVar18,unaff_x21);
            }
            else {
              *(undefined8 *)(unaff_x21 + 0x30) = 0;
            }
          }
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0xe0);
          uVar17 = *(undefined8 *)((long)register0x00000008 + -0xd8);
          unaff_x22 = *(long *)((long)register0x00000008 + -0xf0);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
          unaff_x24 = *(undefined **)((long)register0x00000008 + -0x100);
          unaff_x23 = *(ulong *)((long)register0x00000008 + -0xf8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
          uVar7 = *puVar2;
          puVar21 = unaff_x25;
          puVar22 = unaff_x26;
          puVar23 = unaff_x27;
        } while( true );
      }
    }
  }
  uVar4 = func_0x03280cac();
  puVar20 = PTR_DAT_078106e0;
  puVar23 = PTR_DAT_078106d8;
  puVar22 = PTR_DAT_078106d0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x68970d4;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x38) = puVar21;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x28) = lVar18;
  if ((bRam0000000007e28d93 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078106d8);
    func_0x03280a18(PTR_DAT_078106d0);
    func_0x03280a18(PTR_DAT_078106e0);
    bRam0000000007e28d93 = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar22);
  func_0x04f610a8(uVar6,*(undefined8 *)puVar23);
  *(undefined8 *)(uVar4 + 0x60) = uVar6;
  func_0x032809c4((undefined8 *)(uVar4 + 0x60),uVar6);
  uVar6 = *(undefined8 *)puVar20;
  return uVar4;
LAB_06896fe8:
  unaff_x30 = MergeEngine_ECS_Systems_Items_TimeLockSystem__EntityRemoved;
  auVar25 = func_0x03280cac();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  goto code_r0x06896fec;
}


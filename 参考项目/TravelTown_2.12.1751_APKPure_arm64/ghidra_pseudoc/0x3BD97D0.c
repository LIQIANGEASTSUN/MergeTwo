/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD97D0; Merger.MergeBoard.Controller.BoardController.DoAction<object>; status ok */


/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03cd995c) */
/* WARNING: Removing unreachable block (ram,0x03cd996c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b838) */
/* WARNING: Removing unreachable block (ram,0x06b9b888) */
/* WARNING: Removing unreachable block (ram,0x06b9b890) */
/* WARNING: Removing unreachable block (ram,0x06b9b8a8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b8d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8bc) */
/* WARNING: Removing unreachable block (ram,0x06b9b8c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8e8) */
/* WARNING: Removing unreachable block (ram,0x06b9ba5c) */
/* WARNING: Removing unreachable block (ram,0x06b9b904) */
/* WARNING: Removing unreachable block (ram,0x06b9b928) */
/* WARNING: Removing unreachable block (ram,0x06b9b930) */
/* WARNING: Removing unreachable block (ram,0x06b9b958) */
/* WARNING: Removing unreachable block (ram,0x06b9b93c) */
/* WARNING: Removing unreachable block (ram,0x06b9b948) */
/* WARNING: Removing unreachable block (ram,0x06b9b968) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b75c) */
/* WARNING: Removing unreachable block (ram,0x06b9b788) */
/* WARNING: Removing unreachable block (ram,0x06b9b794) */
/* WARNING: Removing unreachable block (ram,0x06b9b7b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */
/* WARNING: Type propagation algorithm not settling */

long * Merger_MergeBoard_Controller_BoardController__DoAction_object_
                 (undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar17;
  long *plVar18;
  long *unaff_x21;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  ulong unaff_x22;
  long *plVar22;
  long *plVar23;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x30;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 *******apppppppuStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *******pppppppuVar12;
  
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = param_1;
  lVar14 = param_3;
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_07779710), *(long *)(param_3 + 0x38) == 0)) {
    func_0x03256878(param_3);
  }
  uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
  func_0x060157bc(uVar7,0);
  if (uVar7 == 0) {
    auVar24 = func_0x03280cac();
    pppppppuVar12 = auVar24._8_8_;
    unaff_x19 = auVar24._0_8_;
    lVar20 = tpidr_el0;
    uStack_88 = *(undefined8 *)(lVar20 + 0x28);
    plVar9 = *(long **)(lVar14 + 0x38);
    apppppppuStack_a0[0] = pppppppuVar12;
    if (plVar9 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07779710);
      plVar9 = *(long **)(lVar14 + 0x38);
      if (plVar9 == (long *)0x0) {
        func_0x03256878(lVar14);
        plVar9 = *(long **)(lVar14 + 0x38);
      }
    }
    unaff_x24 = (long *)(ulong)*(uint *)(*plVar9 + 0xfc);
    puVar5 = (undefined8 *)
             ((long)apppppppuStack_a0 - ((ulong)((long)unaff_x24 + 0xfU) & 0x1fffffff0));
    uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
    func_0x060157bc(uVar7,0);
    unaff_x21 = *(long **)(lVar14 + 0x38);
    if (-1 < *(int *)(*unaff_x21 + 0x28)) {
      pppppppuVar12 = apppppppuStack_a0;
    }
    plVar9 = unaff_x24;
    func_0x072ce970(puVar5,pppppppuVar12);
    if (uVar7 == 0) {
      func_0x03280cac();
      uVar11 = 0x3cd9990;
      auVar25 = func_0x072ce990();
      uVar19 = 0;
      puVar10 = puVar5;
      do {
        lVar14 = auVar25._0_8_;
        puVar4 = puVar5 + -8;
        puVar5[-8] = uVar11;
        puVar5[-6] = unaff_x24;
        puVar5[-5] = puVar10;
        puVar5[-4] = uVar19;
        puVar5[-3] = unaff_x21;
        puVar5[-2] = auVar24._8_8_;
        puVar5[-1] = auVar24._0_8_;
        plVar13 = (long *)plVar9[7];
        plVar17 = (long *)(auVar25._8_8_ & 0xffffffff);
        plVar18 = plVar9;
        if (plVar13 == (long *)0x0) {
          func_0x03280a18(PTR_DAT_0776dcd8);
          func_0x03280a18(PTR_DAT_07779718);
          func_0x03280a18(PTR_DAT_07779720);
          func_0x03280a18(PTR_DAT_0774e558);
          func_0x03280a18(PTR_DAT_07779728);
          func_0x03280a18(PTR_DAT_07779730);
          func_0x03280a18(PTR_DAT_07779738);
          func_0x03280a18(PTR_DAT_077503b8);
          plVar13 = (long *)plVar9[7];
          if (plVar13 == (long *)0x0) {
            func_0x03256878(plVar9);
            plVar13 = (long *)plVar9[7];
          }
        }
        unaff_x24 = (long *)PTR_DAT_0774e558;
        puVar5[-7] = 0;
        plVar22 = *(long **)(lVar14 + 0x88);
        puVar10 = (undefined8 *)*plVar13;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar13 = (long *)func_0x057a51c4(puVar10,0);
        if ((plVar13 == (long *)0x0) ||
           (puVar8 = (undefined8 *)
                     (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0)),
           plVar22 == (long *)0x0)) {
LAB_03cd9c4c:
          plVar13 = plVar18;
          uVar19 = 0x3cd9c50;
          auVar26 = func_0x03280cac();
SUB_03cd9c50:
          plVar23 = auVar26._8_8_;
          puVar4 = puVar5 + -0xe;
          puVar5[-0xe] = uVar19;
          puVar5[-0xc] = plVar22;
          puVar5[-0xb] = plVar9;
          puVar5[-10] = plVar17;
          puVar5[-9] = lVar14;
          plVar18 = plVar13;
          plVar22 = param_4;
          if (param_4[7] == 0) {
            func_0x03280a18(PTR_DAT_07779740);
            func_0x03280a18(PTR_DAT_0774e558);
            if (param_4[7] == 0) {
              func_0x03256878(param_4);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar14 = func_0x069572f4(plVar23,0);
          plVar17 = param_4;
          plVar9 = plVar13;
          if (lVar14 != 0) {
            plVar18 = (long *)0x1;
            plVar22 = (long *)0x0;
            plVar13 = (long *)func_0x06957fd0(lVar14,plVar13);
            if (plVar13 != (long *)0x0) {
              plVar17 = (long *)func_0x03dc9518(plVar13,*(undefined8 *)param_4[7]);
              plVar23 = *(long **)(param_4[7] + 0x10);
              if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)PTR_DAT_0774e558);
              }
              plVar18 = (long *)func_0x057a51c4(plVar23,0);
              plVar22 = (long *)0x0;
              func_0x068309d0(auVar26._0_8_,plVar17,plVar18,0,1,0);
              lVar14 = func_0x06fdf130(plVar13,0);
              plVar9 = plVar13;
              if (lVar14 != 0) {
                func_0x06fed5b8(lVar14,0);
                return plVar17;
              }
            }
          }
          plVar13 = plVar18;
          uVar11 = 0x3cd9d68;
          auVar27 = func_0x03280cac();
          lVar14 = auVar26._0_8_;
        }
        else {
          lVar20 = *plVar22;
          uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar7 != 0) {
            piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779720) {
                puVar10 = (undefined8 *)(lVar20 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_03cd9ac8;
              }
              uVar7 = uVar7 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
          param_4 = (long *)puVar10[1];
          plVar18 = puVar5 + -7;
          (*(code *)*puVar10)(plVar22,puVar8);
          lVar20 = puVar5[-7];
          puVar10 = puVar8;
          if (lVar20 == 0) {
            plVar22 = *(long **)plVar9[7];
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            plVar13 = (long *)func_0x057a51c4(plVar22,0);
            if (plVar13 != (long *)0x0) {
              uVar19 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              plVar22 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar19,0);
              if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
              }
              param_4 = *(long **)PTR_DAT_07779738;
              plVar18 = (long *)0x0;
              func_0x0556c434(plVar22,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                              *(undefined8 *)PTR_DAT_07779730,0,0);
              lVar20 = puVar5[-7];
              if (lVar20 != 0) goto LAB_03cd9b94;
            }
            goto LAB_03cd9c4c;
          }
LAB_03cd9b94:
          if (*(long *)(lVar14 + 0x80) == 0) goto LAB_03cd9c4c;
          puVar10 = *(undefined8 **)(lVar20 + 0x20);
          auVar27._8_8_ = puVar10;
          auVar27._0_8_ = lVar14;
          plVar18 = *(long **)PTR_DAT_07779718;
          plVar13 = (long *)func_0x04fe2cfc(*(long *)(lVar14 + 0x80),*(undefined8 *)(lVar20 + 0x18))
          ;
          if (puVar5[-7] == 0) goto LAB_03cd9c4c;
          if (*(int *)(puVar5[-7] + 0x28) == 1) {
            plVar22 = plVar13;
            if (puVar10 == (undefined8 *)0x0) goto LAB_03cd9c4c;
            unaff_x24 = *(long **)(lVar14 + 0xb0);
            uVar19 = func_0x06fe368c(puVar10,0);
            uVar19 = func_0x055ee6c0(unaff_x24,uVar19,0);
            auVar26._8_8_ = uVar19;
            auVar26._0_8_ = lVar14;
            param_4 = *(long **)(plVar9[7] + 0x18);
            uVar19 = 0x3cd9c04;
            goto SUB_03cd9c50;
          }
          plVar22 = *(long **)(plVar9[7] + 8);
          uVar11 = 0x3cd9c20;
          plVar23 = plVar13;
        }
        uVar19 = auVar27._8_8_;
        *(undefined8 *)((long)puVar4 + -0x30) = uVar11;
        *(long **)((long)puVar4 + -0x20) = plVar23;
        *(long **)((long)puVar4 + -0x18) = plVar9;
        *(long **)((long)puVar4 + -0x10) = plVar17;
        *(long *)((long)puVar4 + -8) = lVar14;
        param_4 = plVar22;
        if (plVar22[7] == 0) {
          func_0x03280a18(PTR_DAT_07779748);
          func_0x03280a18(PTR_DAT_0774e4e0);
          func_0x03280a18(PTR_DAT_0774e558);
          if (plVar22[7] == 0) {
            func_0x03256878(plVar22);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar14 = func_0x03e3cdbc(uVar19,plVar13,*(undefined8 *)PTR_DAT_07779748);
        if (lVar14 != 0) {
          plVar9 = (long *)func_0x03dc9518(lVar14,*(undefined8 *)plVar22[7]);
          uVar19 = *(undefined8 *)(plVar22[7] + 0x10);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0774e558);
          }
          uVar19 = func_0x057a51c4(uVar19,0);
          func_0x068309d0(auVar27._0_8_,plVar9,uVar19,0,1,0);
          return plVar9;
        }
        auVar24 = func_0x03280cac();
        lVar14 = auVar24._8_8_;
        puVar5 = (undefined8 *)((long)puVar4 + -0x60);
        *(undefined8 *)((long)puVar4 + -0x50) = 0x3cd9e68;
        *(long **)((long)puVar4 + -0x48) = plVar13;
        *(long **)((long)puVar4 + -0x40) = plVar22;
        *(long *)((long)puVar4 + -0x38) = auVar27._0_8_;
        puVar8 = *(undefined8 **)(lVar14 + 0x38);
        if (puVar8 == (undefined8 *)0x0) {
          func_0x03280a18(PTR_DAT_07779750);
          func_0x03280a18(PTR_DAT_0774e558);
          puVar8 = *(undefined8 **)(lVar14 + 0x38);
          if (puVar8 == (undefined8 *)0x0) {
            func_0x03256878(lVar14);
            puVar8 = *(undefined8 **)(lVar14 + 0x38);
          }
        }
        *(undefined8 *)((long)puVar4 + -0x58) = 0;
        lVar20 = *(long *)(auVar24._0_8_ + 0x90);
        unaff_x21 = (long *)*puVar8;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar11 = func_0x057a51c4(unaff_x21,0);
        if (lVar20 != 0) {
          func_0x04fe48b0(lVar20,uVar11,(undefined1 *)((long)puVar4 + -0x58),
                          *(undefined8 *)PTR_DAT_07779750);
          uVar19 = *(undefined8 *)((long)puVar4 + -0x58);
          lVar20 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
          }
          lVar20 = func_0x03280b90(uVar19,lVar20);
          lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 8);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = func_0x0325681c(lVar14);
          }
          if (lVar20 != 0) {
            plVar9 = (long *)func_0x03280b90(lVar20,lVar14);
            if (plVar9 != (long *)0x0) {
              return plVar9;
            }
            func_0x03281048(lVar20,lVar14);
          }
          return (long *)0x0;
        }
        auVar24 = func_0x03280cac();
        lVar20 = auVar24._8_8_;
        plVar9 = auVar24._0_8_;
        *(undefined8 *)((long)puVar4 + -0x80) = 0x3cd9f80;
        *(undefined8 *)((long)puVar4 + -0x70) = 0;
        *(long *)((long)puVar4 + -0x68) = lVar14;
        plVar18 = *(long **)(lVar20 + 0x38);
        if (plVar18 == (long *)0x0) {
          func_0x03256878(lVar20);
          plVar18 = *(long **)(lVar20 + 0x38);
        }
        lVar14 = func_0x03280b88(*(undefined8 *)
                                  (*plVar9 + (ulong)*(ushort *)(*plVar18 + 0x50) * 0x10 + 0x140));
        plVar18 = (long *)(**(code **)(lVar14 + 8))(plVar9,lVar14);
        if (plVar18 != (long *)0x0) {
          return plVar18;
        }
        auVar24._8_8_ = *(undefined8 *)((long)puVar4 + -0x70);
        auVar24._0_8_ = *(undefined8 *)((long)puVar4 + -0x68);
        auVar25._8_8_ = 1;
        auVar25._0_8_ = plVar9;
        plVar9 = *(long **)(*(long *)(lVar20 + 0x38) + 0x10);
        uVar11 = *(undefined8 *)((long)puVar4 + -0x80);
      } while( true );
    }
    puVar10 = (undefined8 *)unaff_x21[1];
    unaff_x23 = puVar5;
    if (-1 < *(int *)(*unaff_x21 + 0x28)) {
      unaff_x23 = (undefined8 *)*puVar5;
    }
    apppppppuStack_a0[1] = (undefined8 *******)unaff_x23;
    (*(code *)puVar10[2])(*puVar10,puVar10,uVar7,apppppppuStack_a0 + 1,auStack_90);
    unaff_x30 = 0x3cd995c;
    unaff_x22 = uVar7;
  }
  else {
    func_0x03ec33e4(uVar7,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
    puVar5 = (undefined8 *)register0x00000008;
  }
  while( true ) {
    plVar18 = auVar24._0_8_;
    puVar5[-6] = unaff_x30;
    puVar5[-4] = unaff_x22;
    puVar5[-3] = unaff_x21;
    puVar5[-2] = auVar24._8_8_;
    puVar5[-1] = unaff_x19;
    uVar19 = 0x7e2a000;
    plVar9 = plVar18;
    if ((bRam0000000007e2a83d & 1) == 0) {
      plVar9 = (long *)func_0x03280a18(PTR_DAT_077c07b8);
      bRam0000000007e2a83d = 1;
    }
    if ((char)plVar18[8] != '\0') {
      return plVar9;
    }
    plVar9 = (long *)plVar18[3];
    if (plVar9 == (long *)0x0) break;
    lVar14 = *plVar9;
    lVar20 = plVar18[7];
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077c07b8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06b9b60c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
    uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    uVar19 = 0;
    if (lVar20 == 0) break;
    uVar19 = func_0x06015720(lVar20,uVar7,uVar11,0);
    unaff_x22 = puVar5[-4];
    puVar5[-6] = puVar5[-6];
    puVar5[-5] = unaff_x23;
    puVar5[-4] = unaff_x22;
    puVar5[-3] = puVar5[-3];
    puVar5[-2] = puVar5[-2];
    puVar5[-1] = puVar5[-1];
    plVar9 = plVar18;
    if ((bRam0000000007e2a83f & 1) == 0) {
      plVar9 = (long *)func_0x03280a18(PTR_DAT_07832798);
      bRam0000000007e2a83f = 1;
    }
    puVar2 = PTR_DAT_07832798;
    lVar14 = plVar18[5];
    if (lVar14 != 0) {
      uVar1 = *(uint *)(lVar14 + 0x18);
      if ((int)uVar1 < 1) {
        return plVar9;
      }
      unaff_x22 = 0;
      while (uVar21 = (uint)unaff_x22, unaff_x23 = (undefined8 *)puVar2, uVar21 < uVar1) {
        plVar18 = *(long **)(lVar14 + (long)(int)uVar21 * 8 + 0x20);
        if (plVar18 == (long *)0x0) goto LAB_06b9bb48;
        lVar20 = *plVar18;
        uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar20 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06b9bb14;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar2,0);
LAB_06b9bb14:
        plVar9 = (long *)(*(code *)*puVar10)(plVar18,uVar19,puVar10[1]);
        uVar1 = *(uint *)(lVar14 + 0x18);
        unaff_x22 = (ulong)(uVar21 + 1);
        if ((int)uVar1 <= (int)(uVar21 + 1)) {
          return plVar9;
        }
      }
      func_0x03280cb4();
    }
LAB_06b9bb48:
    uVar11 = func_0x03280cac();
    puVar2 = PTR_DAT_07779710;
    puVar6 = puVar5 + -0xc;
    puVar5[-0xc] = unaff_d8;
    puVar5[-10] = 0x6b9bb4c;
    puVar5[-9] = lVar14;
    puVar5[-8] = plVar18;
    puVar5[-7] = uVar19;
    if ((bRam0000000007e2a83e & 1) == 0) {
      func_0x03280a18(PTR_DAT_078327a0);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83e = 1;
    }
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x060157bc(uVar7,0);
    if (uVar7 == 0) {
      plVar9 = (long *)func_0x03280cac();
      return plVar9;
    }
    func_0x03ec31a8(extraout_d0,uVar7,*(undefined8 *)PTR_DAT_078327a0);
    auVar24._8_8_ = puVar5[-8];
    auVar24._0_8_ = uVar11;
    unaff_x19 = puVar5[-7];
    unaff_x30 = puVar5[-10];
    unaff_x21 = (long *)puVar5[-9];
    puVar5 = puVar5 + -6;
    unaff_d8 = *puVar6;
  }
  func_0x03280cac();
  puVar3 = PTR_DAT_07832768;
  puVar2 = PTR_DAT_07779710;
  puVar5[-0xe] = 0x6b9b64c;
  puVar5[-0xc] = unaff_x24;
  puVar5[-0xb] = unaff_x23;
  puVar5[-10] = plVar9;
  puVar5[-9] = uVar19;
  puVar5[-8] = uVar7;
  puVar5[-7] = plVar18;
  if ((bRam0000000007e2a83a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832768);
    func_0x03280a18(PTR_DAT_07832770);
    func_0x03280a18(PTR_DAT_07779710);
    bRam0000000007e2a83a = 1;
  }
  uVar19 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x060157bc(uVar19,0);
  plVar9 = (long *)func_0x03280ca0(*(undefined8 *)puVar3);
  return plVar9;
}


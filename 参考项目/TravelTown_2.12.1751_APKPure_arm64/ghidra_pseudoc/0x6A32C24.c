/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32C24; Merger.MergeBoard.ViewModel.MergeBoardViewModel.ExecuteInitializeAction; status ok */


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

long * Merger_MergeBoard_ViewModel_MergeBoardViewModel__ExecuteInitializeAction
                 (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long ******pppppplVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long **pplVar5;
  long **pplVar6;
  long *****ppppplVar7;
  long **pplVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  long *plVar19;
  long ******unaff_x20;
  long *plVar20;
  long *unaff_x21;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  long **pplVar24;
  long *****unaff_x22;
  long **pplVar25;
  long **unaff_x23;
  long **unaff_x24;
  long *unaff_x30;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long *****ppppplStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  long lStack_88;
  
  puVar3 = PTR_DAT_0782f420;
  if ((bRam0000000007e2a4aa & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f428);
    func_0x03280a18(PTR_DAT_0782f420);
    bRam0000000007e2a4aa = 1;
  }
  plVar19 = *(long **)(param_1 + 0x68);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06b9adfc(uVar9,0);
  if (plVar19 != (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_0782f428;
    lVar16 = lVar15;
    if ((*(long *)(lVar15 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_07779710), *(long *)(lVar15 + 0x38) == 0)) {
      func_0x03256878(lVar15);
    }
    ppppplVar7 = (long *****)func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
    func_0x060157bc(ppppplVar7,0);
    if (ppppplVar7 == (long *****)0x0) {
      auVar26 = func_0x03280cac();
      unaff_x20 = auVar26._8_8_;
      plVar19 = auVar26._0_8_;
      lVar15 = tpidr_el0;
      lStack_88 = *(undefined8 *)(lVar15 + 0x28);
      plVar21 = *(long **)(lVar16 + 0x38);
      ppppplStack_a0 = (long *****)unaff_x20;
      if (plVar21 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_07779710);
        plVar21 = *(long **)(lVar16 + 0x38);
        if (plVar21 == (long *)0x0) {
          func_0x03256878(lVar16);
          plVar21 = *(long **)(lVar16 + 0x38);
        }
      }
      unaff_x24 = (long **)(ulong)*(uint *)(*plVar21 + 0xfc);
      pplVar13 = (long **)((long)&ppppplStack_a0 - ((ulong)((long)unaff_x24 + 0xfU) & 0x1fffffff0));
      ppppplVar7 = (long *****)func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
      func_0x060157bc(ppppplVar7,0);
      unaff_x21 = *(long **)(lVar16 + 0x38);
      pppppplVar1 = unaff_x20;
      if (-1 < *(int *)(*unaff_x21 + 0x28)) {
        pppppplVar1 = &ppppplStack_a0;
      }
      pplVar14 = unaff_x24;
      func_0x072ce970(pplVar13,pppppplVar1);
      if (ppppplVar7 == (long *****)0x0) {
        func_0x03280cac();
        uVar9 = 0x3cd9990;
        auVar27 = func_0x072ce990();
        plVar19 = (long *)0x0;
        pplVar25 = pplVar13;
        do {
          plVar21 = auVar27._0_8_;
          pplVar5 = pplVar13 + -8;
          pplVar13[-8] = (long *)uVar9;
          pplVar13[-6] = (long *)unaff_x24;
          pplVar13[-5] = (long *)pplVar25;
          pplVar13[-4] = plVar19;
          pplVar13[-3] = unaff_x21;
          pplVar13[-2] = auVar26._8_8_;
          pplVar13[-1] = auVar26._0_8_;
          plVar19 = pplVar14[7];
          plVar10 = (long *)(auVar27._8_8_ & 0xffffffff);
          pplVar12 = pplVar14;
          if (plVar19 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_0776dcd8);
            func_0x03280a18(PTR_DAT_07779718);
            func_0x03280a18(PTR_DAT_07779720);
            func_0x03280a18(PTR_DAT_0774e558);
            func_0x03280a18(PTR_DAT_07779728);
            func_0x03280a18(PTR_DAT_07779730);
            func_0x03280a18(PTR_DAT_07779738);
            func_0x03280a18(PTR_DAT_077503b8);
            plVar19 = pplVar14[7];
            if (plVar19 == (long *)0x0) {
              func_0x03256878(pplVar14);
              plVar19 = pplVar14[7];
            }
          }
          unaff_x24 = (long **)PTR_DAT_0774e558;
          pplVar13[-7] = (long *)0x0;
          pplVar24 = (long **)plVar21[0x11];
          pplVar25 = (long **)*plVar19;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar19 = (long *)func_0x057a51c4(pplVar25,0);
          if ((plVar19 == (long *)0x0) ||
             (pplVar8 = (long **)(**(code **)(*plVar19 + 0x1b8))
                                           (plVar19,*(undefined8 *)(*plVar19 + 0x1c0)),
             pplVar24 == (long **)0x0)) {
LAB_03cd9c4c:
            pplVar8 = pplVar12;
            uVar9 = 0x3cd9c50;
            auVar28 = func_0x03280cac();
SUB_03cd9c50:
            pplVar12 = auVar28._8_8_;
            pplVar5 = pplVar13 + -0xe;
            pplVar13[-0xe] = (long *)uVar9;
            pplVar13[-0xc] = (long *)pplVar24;
            pplVar13[-0xb] = (long *)pplVar14;
            pplVar13[-10] = plVar10;
            pplVar13[-9] = plVar21;
            pplVar13 = pplVar8;
            plVar20 = param_4;
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
            lVar16 = func_0x069572f4(pplVar12,0);
            plVar10 = param_4;
            pplVar14 = pplVar8;
            if (lVar16 != 0) {
              pplVar13 = (long **)0x1;
              plVar20 = (long *)0x0;
              pplVar24 = (long **)func_0x06957fd0(lVar16,pplVar8);
              if (pplVar24 != (long **)0x0) {
                plVar10 = (long *)func_0x03dc9518(pplVar24,*(undefined8 *)param_4[7]);
                pplVar12 = *(long ***)(param_4[7] + 0x10);
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)PTR_DAT_0774e558);
                }
                pplVar13 = (long **)func_0x057a51c4(pplVar12,0);
                plVar20 = (long *)0x0;
                func_0x068309d0(auVar28._0_8_,plVar10,pplVar13,0,1,0);
                lVar16 = func_0x06fdf130(pplVar24,0);
                pplVar14 = pplVar24;
                if (lVar16 != 0) {
                  func_0x06fed5b8(lVar16,0);
                  return plVar10;
                }
              }
            }
            pplVar8 = pplVar13;
            uVar9 = 0x3cd9d68;
            auVar29 = func_0x03280cac();
            plVar21 = auVar28._0_8_;
          }
          else {
            plVar19 = *pplVar24;
            uVar17 = (ulong)*(ushort *)((long)plVar19 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(plVar19[0x16] + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07779720) {
                  plVar19 = plVar19 + (long)(*piVar18 + 1) * 2 + 0x27;
                  goto LAB_03cd9ac8;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            plVar19 = (long *)func_0x03256b10(pplVar24,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
            param_4 = (long *)plVar19[1];
            pplVar12 = pplVar13 + -7;
            (*(code *)*plVar19)(pplVar24,pplVar8);
            plVar19 = pplVar13[-7];
            pplVar25 = pplVar8;
            if (plVar19 == (long *)0x0) {
              pplVar24 = (long **)*pplVar14[7];
              if (*(int *)((long)*unaff_x24 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar19 = (long *)func_0x057a51c4(pplVar24,0);
              if (plVar19 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                pplVar24 = (long **)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar9,0);
                if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
                }
                param_4 = *(long **)PTR_DAT_07779738;
                pplVar12 = (long **)0x0;
                func_0x0556c434(pplVar24,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                                *(undefined8 *)PTR_DAT_07779730,0,0);
                plVar19 = pplVar13[-7];
                if (plVar19 != (long *)0x0) goto LAB_03cd9b94;
              }
              goto LAB_03cd9c4c;
            }
LAB_03cd9b94:
            if (plVar21[0x10] == 0) goto LAB_03cd9c4c;
            pplVar25 = (long **)plVar19[4];
            auVar29._8_8_ = pplVar25;
            auVar29._0_8_ = plVar21;
            pplVar12 = *(long ***)PTR_DAT_07779718;
            pplVar8 = (long **)func_0x04fe2cfc(plVar21[0x10],plVar19[3]);
            if (pplVar13[-7] == (long *)0x0) goto LAB_03cd9c4c;
            if ((int)pplVar13[-7][5] == 1) {
              pplVar24 = pplVar8;
              if (pplVar25 == (long **)0x0) goto LAB_03cd9c4c;
              unaff_x24 = (long **)plVar21[0x16];
              uVar9 = func_0x06fe368c(pplVar25,0);
              uVar9 = func_0x055ee6c0(unaff_x24,uVar9,0);
              auVar28._8_8_ = uVar9;
              auVar28._0_8_ = plVar21;
              param_4 = (long *)pplVar14[7][3];
              uVar9 = 0x3cd9c04;
              goto SUB_03cd9c50;
            }
            plVar20 = (long *)pplVar14[7][1];
            uVar9 = 0x3cd9c20;
            pplVar12 = pplVar8;
          }
          plVar19 = auVar29._8_8_;
          *(undefined8 *)((long)pplVar5 + -0x30) = uVar9;
          *(long ***)((long)pplVar5 + -0x20) = pplVar12;
          *(long ***)((long)pplVar5 + -0x18) = pplVar14;
          *(long **)((long)pplVar5 + -0x10) = plVar10;
          *(long **)((long)pplVar5 + -8) = plVar21;
          param_4 = plVar20;
          if (plVar20[7] == 0) {
            func_0x03280a18(PTR_DAT_07779748);
            func_0x03280a18(PTR_DAT_0774e4e0);
            func_0x03280a18(PTR_DAT_0774e558);
            if (plVar20[7] == 0) {
              func_0x03256878(plVar20);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar16 = func_0x03e3cdbc(plVar19,pplVar8,*(undefined8 *)PTR_DAT_07779748);
          if (lVar16 != 0) {
            plVar19 = (long *)func_0x03dc9518(lVar16,*(undefined8 *)plVar20[7]);
            uVar9 = *(undefined8 *)(plVar20[7] + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            uVar9 = func_0x057a51c4(uVar9,0);
            func_0x068309d0(auVar29._0_8_,plVar19,uVar9,0,1,0);
            return plVar19;
          }
          auVar26 = func_0x03280cac();
          lVar16 = auVar26._8_8_;
          pplVar13 = (long **)((long)pplVar5 + -0x60);
          *(undefined8 *)((long)pplVar5 + -0x50) = 0x3cd9e68;
          *(long ***)((long)pplVar5 + -0x48) = pplVar8;
          *(long **)((long)pplVar5 + -0x40) = plVar20;
          *(long *)((long)pplVar5 + -0x38) = auVar29._0_8_;
          puVar11 = *(undefined8 **)(lVar16 + 0x38);
          if (puVar11 == (undefined8 *)0x0) {
            func_0x03280a18(PTR_DAT_07779750);
            func_0x03280a18(PTR_DAT_0774e558);
            puVar11 = *(undefined8 **)(lVar16 + 0x38);
            if (puVar11 == (undefined8 *)0x0) {
              func_0x03256878(lVar16);
              puVar11 = *(undefined8 **)(lVar16 + 0x38);
            }
          }
          *(undefined8 *)((long)pplVar5 + -0x58) = 0;
          lVar15 = *(long *)(auVar26._0_8_ + 0x90);
          unaff_x21 = (long *)*puVar11;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar9 = func_0x057a51c4(unaff_x21,0);
          if (lVar15 != 0) {
            func_0x04fe48b0(lVar15,uVar9,(undefined1 *)((long)pplVar5 + -0x58),
                            *(undefined8 *)PTR_DAT_07779750);
            uVar9 = *(undefined8 *)((long)pplVar5 + -0x58);
            lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = func_0x0325681c(lVar15);
            }
            lVar15 = func_0x03280b90(uVar9,lVar15);
            lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = func_0x0325681c(lVar16);
            }
            if (lVar15 != 0) {
              plVar19 = (long *)func_0x03280b90(lVar15,lVar16);
              if (plVar19 != (long *)0x0) {
                return plVar19;
              }
              func_0x03281048(lVar15,lVar16);
            }
            return (long *)0x0;
          }
          auVar26 = func_0x03280cac();
          lVar15 = auVar26._8_8_;
          plVar21 = auVar26._0_8_;
          *(undefined8 *)((long)pplVar5 + -0x80) = 0x3cd9f80;
          *(undefined8 *)((long)pplVar5 + -0x70) = 0;
          *(long *)((long)pplVar5 + -0x68) = lVar16;
          plVar10 = *(long **)(lVar15 + 0x38);
          if (plVar10 == (long *)0x0) {
            func_0x03256878(lVar15);
            plVar10 = *(long **)(lVar15 + 0x38);
          }
          lVar16 = func_0x03280b88(*(undefined8 *)
                                    (*plVar21 + (ulong)*(ushort *)(*plVar10 + 0x50) * 0x10 + 0x140))
          ;
          plVar10 = (long *)(**(code **)(lVar16 + 8))(plVar21,lVar16);
          if (plVar10 != (long *)0x0) {
            return plVar10;
          }
          auVar26._8_8_ = *(undefined8 *)((long)pplVar5 + -0x70);
          auVar26._0_8_ = *(undefined8 *)((long)pplVar5 + -0x68);
          auVar27._8_8_ = 1;
          auVar27._0_8_ = plVar21;
          pplVar14 = *(long ***)(*(long *)(lVar15 + 0x38) + 0x10);
          uVar9 = *(undefined8 *)((long)pplVar5 + -0x80);
        } while( true );
      }
      puVar11 = (undefined8 *)unaff_x21[1];
      unaff_x23 = pplVar13;
      if (-1 < *(int *)(*unaff_x21 + 0x28)) {
        unaff_x23 = (long **)*pplVar13;
      }
      pplStack_98 = unaff_x23;
      (*(code *)puVar11[2])(*puVar11,puVar11,ppppplVar7,&pplStack_98,&pplStack_90);
      unaff_x30 = (long *)0x3cd995c;
      unaff_x19 = plVar19;
      unaff_x22 = ppppplVar7;
    }
    else {
      func_0x03ec33e4(ppppplVar7,uVar9,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 8));
      pplVar13 = (long **)register0x00000008;
    }
    while( true ) {
      pplVar13[-6] = unaff_x30;
      pplVar13[-4] = (long *)unaff_x22;
      pplVar13[-3] = unaff_x21;
      pplVar13[-2] = (long *)unaff_x20;
      pplVar13[-1] = unaff_x19;
      plVar21 = (long *)0x7e2a000;
      plVar10 = plVar19;
      if ((bRam0000000007e2a83d & 1) == 0) {
        plVar10 = (long *)func_0x03280a18(PTR_DAT_077c07b8);
        bRam0000000007e2a83d = 1;
      }
      if ((char)plVar19[8] != '\0') {
        return plVar10;
      }
      plVar10 = (long *)plVar19[3];
      if (plVar10 == (long *)0x0) break;
      lVar16 = *plVar10;
      lVar15 = plVar19[7];
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c07b8) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06b9b60c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
      uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      plVar21 = (long *)0x0;
      if (lVar15 == 0) break;
      plVar10 = (long *)func_0x06015720(lVar15,ppppplVar7,uVar9,0);
      unaff_x22 = (long *****)pplVar13[-4];
      pplVar13[-6] = pplVar13[-6];
      pplVar13[-5] = (long *)unaff_x23;
      pplVar13[-4] = (long *)unaff_x22;
      pplVar13[-3] = pplVar13[-3];
      pplVar13[-2] = pplVar13[-2];
      pplVar13[-1] = pplVar13[-1];
      plVar21 = plVar19;
      if ((bRam0000000007e2a83f & 1) == 0) {
        plVar21 = (long *)func_0x03280a18(PTR_DAT_07832798);
        bRam0000000007e2a83f = 1;
      }
      puVar3 = PTR_DAT_07832798;
      plVar22 = (long *)plVar19[5];
      plVar20 = plVar19;
      if (plVar22 != (long *)0x0) {
        uVar2 = *(uint *)(plVar22 + 3);
        if ((int)uVar2 < 1) {
          return plVar21;
        }
        unaff_x22 = (long *****)0x0;
        while (uVar23 = (uint)unaff_x22, unaff_x23 = (long **)puVar3, uVar23 < uVar2) {
          plVar20 = (long *)plVar22[(long)(int)uVar23 + 4];
          if (plVar20 == (long *)0x0) goto LAB_06b9bb48;
          lVar16 = *plVar20;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_06b9bb14;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar3,0);
LAB_06b9bb14:
          plVar19 = (long *)(*(code *)*puVar11)(plVar20,plVar10,puVar11[1]);
          uVar2 = *(uint *)(plVar22 + 3);
          unaff_x22 = (long *****)(ulong)(uVar23 + 1);
          if ((int)uVar2 <= (int)(uVar23 + 1)) {
            return plVar19;
          }
        }
        func_0x03280cb4();
      }
LAB_06b9bb48:
      plVar19 = (long *)func_0x03280cac();
      puVar3 = PTR_DAT_07779710;
      pplVar6 = pplVar13 + -0xc;
      pplVar13[-0xc] = (long *)unaff_d8;
      pplVar13[-10] = (long *)0x6b9bb4c;
      pplVar13[-9] = plVar22;
      pplVar13[-8] = plVar20;
      pplVar13[-7] = plVar10;
      if ((bRam0000000007e2a83e & 1) == 0) {
        func_0x03280a18(PTR_DAT_078327a0);
        func_0x03280a18(PTR_DAT_07779710);
        bRam0000000007e2a83e = 1;
      }
      ppppplVar7 = (long *****)func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x060157bc(ppppplVar7,0);
      if (ppppplVar7 == (long *****)0x0) {
        plVar19 = (long *)func_0x03280cac();
        return plVar19;
      }
      func_0x03ec31a8(extraout_d0,ppppplVar7,*(undefined8 *)PTR_DAT_078327a0);
      unaff_x20 = (long ******)pplVar13[-8];
      pplVar14 = pplVar13 + -7;
      unaff_x30 = pplVar13[-10];
      unaff_x21 = pplVar13[-9];
      pplVar13 = pplVar13 + -6;
      unaff_d8 = *pplVar6;
      unaff_x19 = *pplVar14;
    }
    func_0x03280cac();
    puVar4 = PTR_DAT_07832768;
    puVar3 = PTR_DAT_07779710;
    pplVar13[-0xe] = (long *)0x6b9b64c;
    pplVar13[-0xc] = (long *)unaff_x24;
    pplVar13[-0xb] = (long *)unaff_x23;
    pplVar13[-10] = plVar10;
    pplVar13[-9] = plVar21;
    pplVar13[-8] = (long *)ppppplVar7;
    pplVar13[-7] = plVar19;
    if ((bRam0000000007e2a83a & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832768);
      func_0x03280a18(PTR_DAT_07832770);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83a = 1;
    }
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x060157bc(uVar9,0);
    plVar19 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
    return plVar19;
  }
  auVar26 = func_0x03280cac();
  if ((bRam0000000007e2a4ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a4ab = 1;
  }
  lVar16 = func_0x06b32bb4(auVar26._0_8_,auVar26._8_8_);
  if (lVar16 == 0) {
LAB_06b32d20:
    lVar15 = 0;
  }
  else {
    unaff_x22 = *(long ******)PTR_DAT_0777e548;
    lVar15 = func_0x03280b90(lVar16,unaff_x22);
    if (lVar15 == 0) {
      func_0x03281048(lVar16,unaff_x22);
      goto LAB_06b32d20;
    }
  }
  plVar19 = *(long **)(auVar26._0_8_ + 0x88);
  if (plVar19 != (long *)0x0) {
    lVar16 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x23) * 0x10 + 0x138);
          goto LAB_06b32d84;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777a498,0x23);
LAB_06b32d84:
                    /* WARNING: Could not recover jumptable at 0x06b32d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar19 = (long *)(*(code *)*puVar11)(plVar19,lVar15,puVar11[1]);
    return plVar19;
  }
  auVar26 = func_0x03280cac();
  if ((bRam0000000007e2a4ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a4ac = 1;
  }
  pplVar14 = (long **)func_0x06b32bb4(auVar26._0_8_,auVar26._8_8_);
  pplVar13 = (long **)0x7e2a000;
  if (pplVar14 != (long **)0x0) {
    unaff_x22 = *(long ******)PTR_DAT_0777e548;
    lVar16 = func_0x03280b90(pplVar14,unaff_x22);
    if (lVar16 != 0) goto LAB_06b32e24;
    func_0x03281048(pplVar14,unaff_x22);
    pplVar13 = pplVar14;
  }
  pplVar14 = pplVar13;
  lVar16 = 0;
LAB_06b32e24:
  pplVar13 = *(long ***)(auVar26._0_8_ + 0x88);
  if (pplVar13 == (long **)0x0) {
    plVar19 = (long *)func_0x03280cac();
    puVar4 = PTR_DAT_07828a38;
    puVar3 = PTR_DAT_07828a30;
    ppppplStack_a0 = unaff_x22;
    pplStack_98 = pplVar14;
    pplStack_90 = pplVar13;
    lStack_88 = lVar16;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    lVar16 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x053bfe40(lVar16,*(undefined8 *)puVar4);
    plVar19[0xc] = lVar16;
    func_0x032809c4(plVar19 + 0xc,lVar16);
    return plVar19;
  }
  plVar19 = *pplVar13;
  uVar17 = (ulong)*(ushort *)((long)plVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(plVar19[0x16] + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
        plVar19 = plVar19 + (long)(*piVar18 + 0x24) * 2 + 0x27;
        goto LAB_06b32e84;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  plVar19 = (long *)func_0x03256b10(pplVar13,*(long *)PTR_DAT_0777a498,0x24);
LAB_06b32e84:
                    /* WARNING: Could not recover jumptable at 0x06b32e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar19 = (long *)(*(code *)*plVar19)(pplVar13,lVar16,plVar19[1]);
  return plVar19;
}


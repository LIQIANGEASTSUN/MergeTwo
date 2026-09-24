/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32BB4; Merger.MergeBoard.ViewModel.MergeBoardViewModel.GetMergeItem; status ok */


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

long * Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetMergeItem
                 (long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long **pplVar4;
  long **pplVar5;
  long *****ppppplVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  long **pplVar23;
  long *****unaff_x22;
  long **pplVar24;
  long **unaff_x23;
  long **unaff_x24;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long *****ppppplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long lStack_d8;
  code *pcVar29;
  long *plStack_68;
  undefined8 auStack_50 [6];
  long ******pppppplVar13;
  
  pplVar15 = (long **)auStack_50;
  if ((bRam0000000007e2a4a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    bRam0000000007e2a4a9 = 1;
  }
  if (param_2 != 0) {
    func_0x03d1b250(auStack_50,param_2,*(undefined8 *)PTR_DAT_0777a488);
    plVar8 = (long *)Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetItemById
                               (param_1,auStack_50[0]);
    return plVar8;
  }
  lVar9 = func_0x03280cac();
  puVar2 = PTR_DAT_0782f420;
  pcVar29 = Merger_MergeBoard_ViewModel_MergeBoardViewModel__ExecuteInitializeAction;
  plStack_68 = (long *)0x7e2a000;
  if ((bRam0000000007e2a4aa & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f428);
    func_0x03280a18(PTR_DAT_0782f420);
    bRam0000000007e2a4aa = 1;
  }
  uVar19 = *(ulong *)(lVar9 + 0x68);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06b9adfc(uVar10,0);
  if (uVar19 != 0) {
    lVar17 = *(long *)PTR_DAT_0782f428;
    lVar9 = lVar17;
    if ((*(long *)(lVar17 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_07779710), *(long *)(lVar17 + 0x38) == 0)) {
      func_0x03256878(lVar17);
    }
    ppppplVar6 = (long *****)func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
    func_0x060157bc(ppppplVar6,0);
    if (ppppplVar6 == (long *****)0x0) {
      auVar25 = func_0x03280cac();
      pppppplVar13 = auVar25._8_8_;
      param_1 = auVar25._0_8_;
      lVar17 = tpidr_el0;
      lStack_d8 = *(undefined8 *)(lVar17 + 0x28);
      plVar8 = *(long **)(lVar9 + 0x38);
      ppppplStack_f0 = (long *****)pppppplVar13;
      if (plVar8 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_07779710);
        plVar8 = *(long **)(lVar9 + 0x38);
        if (plVar8 == (long *)0x0) {
          func_0x03256878(lVar9);
          plVar8 = *(long **)(lVar9 + 0x38);
        }
      }
      unaff_x24 = (long **)(ulong)*(uint *)(*plVar8 + 0xfc);
      pplVar15 = (long **)((long)&ppppplStack_f0 - ((ulong)((long)unaff_x24 + 0xfU) & 0x1fffffff0));
      ppppplVar6 = (long *****)func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
      func_0x060157bc(ppppplVar6,0);
      plStack_68 = *(long **)(lVar9 + 0x38);
      if (-1 < *(int *)(*plStack_68 + 0x28)) {
        pppppplVar13 = &ppppplStack_f0;
      }
      pplVar16 = unaff_x24;
      func_0x072ce970(pplVar15,pppppplVar13);
      if (ppppplVar6 == (long *****)0x0) {
        func_0x03280cac();
        uVar10 = 0x3cd9990;
        auVar26 = func_0x072ce990();
        plVar8 = (long *)0x0;
        pplVar24 = pplVar15;
        do {
          plVar11 = auVar26._0_8_;
          pplVar4 = pplVar15 + -8;
          pplVar15[-8] = (long *)uVar10;
          pplVar15[-6] = (long *)unaff_x24;
          pplVar15[-5] = (long *)pplVar24;
          pplVar15[-4] = plVar8;
          pplVar15[-3] = plStack_68;
          pplVar15[-2] = auVar25._8_8_;
          pplVar15[-1] = auVar25._0_8_;
          plVar8 = pplVar16[7];
          plVar20 = (long *)(auVar26._8_8_ & 0xffffffff);
          pplVar14 = pplVar16;
          if (plVar8 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_0776dcd8);
            func_0x03280a18(PTR_DAT_07779718);
            func_0x03280a18(PTR_DAT_07779720);
            func_0x03280a18(PTR_DAT_0774e558);
            func_0x03280a18(PTR_DAT_07779728);
            func_0x03280a18(PTR_DAT_07779730);
            func_0x03280a18(PTR_DAT_07779738);
            func_0x03280a18(PTR_DAT_077503b8);
            plVar8 = pplVar16[7];
            if (plVar8 == (long *)0x0) {
              func_0x03256878(pplVar16);
              plVar8 = pplVar16[7];
            }
          }
          unaff_x24 = (long **)PTR_DAT_0774e558;
          pplVar15[-7] = (long *)0x0;
          pplVar23 = (long **)plVar11[0x11];
          pplVar24 = (long **)*plVar8;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar8 = (long *)func_0x057a51c4(pplVar24,0);
          if ((plVar8 == (long *)0x0) ||
             (pplVar7 = (long **)(**(code **)(*plVar8 + 0x1b8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x1c0)),
             pplVar23 == (long **)0x0)) {
LAB_03cd9c4c:
            pplVar7 = pplVar14;
            uVar10 = 0x3cd9c50;
            auVar27 = func_0x03280cac();
SUB_03cd9c50:
            pplVar14 = auVar27._8_8_;
            pplVar4 = pplVar15 + -0xe;
            pplVar15[-0xe] = (long *)uVar10;
            pplVar15[-0xc] = (long *)pplVar23;
            pplVar15[-0xb] = (long *)pplVar16;
            pplVar15[-10] = plVar20;
            pplVar15[-9] = plVar11;
            pplVar15 = pplVar7;
            plVar21 = param_4;
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
            lVar9 = func_0x069572f4(pplVar14,0);
            plVar20 = param_4;
            pplVar16 = pplVar7;
            if (lVar9 != 0) {
              pplVar15 = (long **)0x1;
              plVar21 = (long *)0x0;
              pplVar23 = (long **)func_0x06957fd0(lVar9,pplVar7);
              if (pplVar23 != (long **)0x0) {
                plVar20 = (long *)func_0x03dc9518(pplVar23,*(undefined8 *)param_4[7]);
                pplVar14 = *(long ***)(param_4[7] + 0x10);
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)PTR_DAT_0774e558);
                }
                pplVar15 = (long **)func_0x057a51c4(pplVar14,0);
                plVar21 = (long *)0x0;
                func_0x068309d0(auVar27._0_8_,plVar20,pplVar15,0,1,0);
                lVar9 = func_0x06fdf130(pplVar23,0);
                pplVar16 = pplVar23;
                if (lVar9 != 0) {
                  func_0x06fed5b8(lVar9,0);
                  return plVar20;
                }
              }
            }
            pplVar7 = pplVar15;
            uVar10 = 0x3cd9d68;
            auVar28 = func_0x03280cac();
            plVar11 = auVar27._0_8_;
          }
          else {
            plVar8 = *pplVar23;
            uVar19 = (ulong)*(ushort *)((long)plVar8 + 0x12e);
            if (uVar19 != 0) {
              piVar18 = (int *)(plVar8[0x16] + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07779720) {
                  plVar8 = plVar8 + (long)(*piVar18 + 1) * 2 + 0x27;
                  goto LAB_03cd9ac8;
                }
                uVar19 = uVar19 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar19 != 0);
            }
            plVar8 = (long *)func_0x03256b10(pplVar23,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
            param_4 = (long *)plVar8[1];
            pplVar14 = pplVar15 + -7;
            (*(code *)*plVar8)(pplVar23,pplVar7);
            plVar8 = pplVar15[-7];
            pplVar24 = pplVar7;
            if (plVar8 == (long *)0x0) {
              pplVar23 = (long **)*pplVar16[7];
              if (*(int *)((long)*unaff_x24 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar8 = (long *)func_0x057a51c4(pplVar23,0);
              if (plVar8 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                pplVar23 = (long **)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar10,0);
                if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
                }
                param_4 = *(long **)PTR_DAT_07779738;
                pplVar14 = (long **)0x0;
                func_0x0556c434(pplVar23,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                                *(undefined8 *)PTR_DAT_07779730,0,0);
                plVar8 = pplVar15[-7];
                if (plVar8 != (long *)0x0) goto LAB_03cd9b94;
              }
              goto LAB_03cd9c4c;
            }
LAB_03cd9b94:
            if (plVar11[0x10] == 0) goto LAB_03cd9c4c;
            pplVar24 = (long **)plVar8[4];
            auVar28._8_8_ = pplVar24;
            auVar28._0_8_ = plVar11;
            pplVar14 = *(long ***)PTR_DAT_07779718;
            pplVar7 = (long **)func_0x04fe2cfc(plVar11[0x10],plVar8[3]);
            if (pplVar15[-7] == (long *)0x0) goto LAB_03cd9c4c;
            if ((int)pplVar15[-7][5] == 1) {
              pplVar23 = pplVar7;
              if (pplVar24 == (long **)0x0) goto LAB_03cd9c4c;
              unaff_x24 = (long **)plVar11[0x16];
              uVar10 = func_0x06fe368c(pplVar24,0);
              uVar10 = func_0x055ee6c0(unaff_x24,uVar10,0);
              auVar27._8_8_ = uVar10;
              auVar27._0_8_ = plVar11;
              param_4 = (long *)pplVar16[7][3];
              uVar10 = 0x3cd9c04;
              goto SUB_03cd9c50;
            }
            plVar21 = (long *)pplVar16[7][1];
            uVar10 = 0x3cd9c20;
            pplVar14 = pplVar7;
          }
          plVar8 = auVar28._8_8_;
          *(undefined8 *)((long)pplVar4 + -0x30) = uVar10;
          *(long ***)((long)pplVar4 + -0x20) = pplVar14;
          *(long ***)((long)pplVar4 + -0x18) = pplVar16;
          *(long **)((long)pplVar4 + -0x10) = plVar20;
          *(long **)((long)pplVar4 + -8) = plVar11;
          param_4 = plVar21;
          if (plVar21[7] == 0) {
            func_0x03280a18(PTR_DAT_07779748);
            func_0x03280a18(PTR_DAT_0774e4e0);
            func_0x03280a18(PTR_DAT_0774e558);
            if (plVar21[7] == 0) {
              func_0x03256878(plVar21);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar9 = func_0x03e3cdbc(plVar8,pplVar7,*(undefined8 *)PTR_DAT_07779748);
          if (lVar9 != 0) {
            plVar8 = (long *)func_0x03dc9518(lVar9,*(undefined8 *)plVar21[7]);
            uVar10 = *(undefined8 *)(plVar21[7] + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            uVar10 = func_0x057a51c4(uVar10,0);
            func_0x068309d0(auVar28._0_8_,plVar8,uVar10,0,1,0);
            return plVar8;
          }
          auVar25 = func_0x03280cac();
          lVar9 = auVar25._8_8_;
          pplVar15 = (long **)((long)pplVar4 + -0x60);
          *(undefined8 *)((long)pplVar4 + -0x50) = 0x3cd9e68;
          *(long ***)((long)pplVar4 + -0x48) = pplVar7;
          *(long **)((long)pplVar4 + -0x40) = plVar21;
          *(long *)((long)pplVar4 + -0x38) = auVar28._0_8_;
          puVar12 = *(undefined8 **)(lVar9 + 0x38);
          if (puVar12 == (undefined8 *)0x0) {
            func_0x03280a18(PTR_DAT_07779750);
            func_0x03280a18(PTR_DAT_0774e558);
            puVar12 = *(undefined8 **)(lVar9 + 0x38);
            if (puVar12 == (undefined8 *)0x0) {
              func_0x03256878(lVar9);
              puVar12 = *(undefined8 **)(lVar9 + 0x38);
            }
          }
          *(undefined8 *)((long)pplVar4 + -0x58) = 0;
          lVar17 = *(long *)(auVar25._0_8_ + 0x90);
          plStack_68 = (long *)*puVar12;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar10 = func_0x057a51c4(plStack_68,0);
          if (lVar17 != 0) {
            func_0x04fe48b0(lVar17,uVar10,(undefined1 *)((long)pplVar4 + -0x58),
                            *(undefined8 *)PTR_DAT_07779750);
            uVar10 = *(undefined8 *)((long)pplVar4 + -0x58);
            lVar17 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = func_0x0325681c(lVar17);
            }
            lVar17 = func_0x03280b90(uVar10,lVar17);
            lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = func_0x0325681c(lVar9);
            }
            if (lVar17 != 0) {
              plVar8 = (long *)func_0x03280b90(lVar17,lVar9);
              if (plVar8 != (long *)0x0) {
                return plVar8;
              }
              func_0x03281048(lVar17,lVar9);
            }
            return (long *)0x0;
          }
          auVar25 = func_0x03280cac();
          lVar17 = auVar25._8_8_;
          plVar11 = auVar25._0_8_;
          *(undefined8 *)((long)pplVar4 + -0x80) = 0x3cd9f80;
          *(undefined8 *)((long)pplVar4 + -0x70) = 0;
          *(long *)((long)pplVar4 + -0x68) = lVar9;
          plVar20 = *(long **)(lVar17 + 0x38);
          if (plVar20 == (long *)0x0) {
            func_0x03256878(lVar17);
            plVar20 = *(long **)(lVar17 + 0x38);
          }
          lVar9 = func_0x03280b88(*(undefined8 *)
                                   (*plVar11 + (ulong)*(ushort *)(*plVar20 + 0x50) * 0x10 + 0x140));
          plVar20 = (long *)(**(code **)(lVar9 + 8))(plVar11,lVar9);
          if (plVar20 != (long *)0x0) {
            return plVar20;
          }
          auVar25._8_8_ = *(undefined8 *)((long)pplVar4 + -0x70);
          auVar25._0_8_ = *(undefined8 *)((long)pplVar4 + -0x68);
          auVar26._8_8_ = 1;
          auVar26._0_8_ = plVar11;
          pplVar16 = *(long ***)(*(long *)(lVar17 + 0x38) + 0x10);
          uVar10 = *(undefined8 *)((long)pplVar4 + -0x80);
        } while( true );
      }
      puVar12 = (undefined8 *)plStack_68[1];
      unaff_x23 = pplVar15;
      if (-1 < *(int *)(*plStack_68 + 0x28)) {
        unaff_x23 = (long **)*pplVar15;
      }
      pplStack_e8 = unaff_x23;
      (*(code *)puVar12[2])(*puVar12,puVar12,ppppplVar6,&pplStack_e8,&pplStack_e0);
      pcVar29 = (code *)0x3cd995c;
      unaff_x22 = ppppplVar6;
    }
    else {
      func_0x03ec33e4(ppppplVar6,uVar10,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 8));
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar19;
    }
    while( true ) {
      plVar20 = auVar25._0_8_;
      pplVar15[-6] = (long *)pcVar29;
      pplVar15[-4] = (long *)unaff_x22;
      pplVar15[-3] = plStack_68;
      pplVar15[-2] = auVar25._8_8_;
      pplVar15[-1] = param_1;
      plVar8 = (long *)0x7e2a000;
      plVar11 = plVar20;
      if ((bRam0000000007e2a83d & 1) == 0) {
        plVar11 = (long *)func_0x03280a18(PTR_DAT_077c07b8);
        bRam0000000007e2a83d = 1;
      }
      if ((char)plVar20[8] != '\0') {
        return plVar11;
      }
      plVar11 = (long *)plVar20[3];
      if (plVar11 == (long *)0x0) break;
      lVar9 = *plVar11;
      lVar17 = plVar20[7];
      uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar19 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c07b8) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06b9b60c;
          }
          uVar19 = uVar19 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
      uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      plVar8 = (long *)0x0;
      if (lVar17 == 0) break;
      plVar11 = (long *)func_0x06015720(lVar17,ppppplVar6,uVar10,0);
      unaff_x22 = (long *****)pplVar15[-4];
      pplVar15[-6] = pplVar15[-6];
      pplVar15[-5] = (long *)unaff_x23;
      pplVar15[-4] = (long *)unaff_x22;
      pplVar15[-3] = pplVar15[-3];
      pplVar15[-2] = pplVar15[-2];
      pplVar15[-1] = pplVar15[-1];
      plVar8 = plVar20;
      if ((bRam0000000007e2a83f & 1) == 0) {
        plVar8 = (long *)func_0x03280a18(PTR_DAT_07832798);
        bRam0000000007e2a83f = 1;
      }
      puVar2 = PTR_DAT_07832798;
      plVar21 = (long *)plVar20[5];
      if (plVar21 != (long *)0x0) {
        uVar1 = *(uint *)(plVar21 + 3);
        if ((int)uVar1 < 1) {
          return plVar8;
        }
        unaff_x22 = (long *****)0x0;
        while (uVar22 = (uint)unaff_x22, unaff_x23 = (long **)puVar2, uVar22 < uVar1) {
          plVar20 = (long *)plVar21[(long)(int)uVar22 + 4];
          if (plVar20 == (long *)0x0) goto LAB_06b9bb48;
          lVar9 = *plVar20;
          uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar19 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_06b9bb14;
              }
              uVar19 = uVar19 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar2,0);
LAB_06b9bb14:
          plVar8 = (long *)(*(code *)*puVar12)(plVar20,plVar11,puVar12[1]);
          uVar1 = *(uint *)(plVar21 + 3);
          unaff_x22 = (long *****)(ulong)(uVar22 + 1);
          if ((int)uVar1 <= (int)(uVar22 + 1)) {
            return plVar8;
          }
        }
        func_0x03280cb4();
      }
LAB_06b9bb48:
      uVar10 = func_0x03280cac();
      puVar2 = PTR_DAT_07779710;
      pplVar5 = pplVar15 + -0xc;
      pplVar15[-0xc] = (long *)unaff_d8;
      pplVar15[-10] = (long *)0x6b9bb4c;
      pplVar15[-9] = plVar21;
      pplVar15[-8] = plVar20;
      pplVar15[-7] = plVar11;
      if ((bRam0000000007e2a83e & 1) == 0) {
        func_0x03280a18(PTR_DAT_078327a0);
        func_0x03280a18(PTR_DAT_07779710);
        bRam0000000007e2a83e = 1;
      }
      ppppplVar6 = (long *****)func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x060157bc(ppppplVar6,0);
      if (ppppplVar6 == (long *****)0x0) {
        plVar8 = (long *)func_0x03280cac();
        return plVar8;
      }
      func_0x03ec31a8(extraout_d0,ppppplVar6,*(undefined8 *)PTR_DAT_078327a0);
      auVar25._8_8_ = pplVar15[-8];
      auVar25._0_8_ = uVar10;
      param_1 = pplVar15[-7];
      pcVar29 = (code *)pplVar15[-10];
      plStack_68 = pplVar15[-9];
      pplVar15 = pplVar15 + -6;
      unaff_d8 = *pplVar5;
    }
    func_0x03280cac();
    puVar3 = PTR_DAT_07832768;
    puVar2 = PTR_DAT_07779710;
    pplVar15[-0xe] = (long *)0x6b9b64c;
    pplVar15[-0xc] = (long *)unaff_x24;
    pplVar15[-0xb] = (long *)unaff_x23;
    pplVar15[-10] = plVar11;
    pplVar15[-9] = plVar8;
    pplVar15[-8] = (long *)ppppplVar6;
    pplVar15[-7] = plVar20;
    if ((bRam0000000007e2a83a & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832768);
      func_0x03280a18(PTR_DAT_07832770);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83a = 1;
    }
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x060157bc(uVar10,0);
    plVar8 = (long *)func_0x03280ca0(*(undefined8 *)puVar3);
    return plVar8;
  }
  auVar25 = func_0x03280cac();
  if ((bRam0000000007e2a4ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a4ab = 1;
  }
  lVar9 = Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetMergeItem(auVar25._0_8_,auVar25._8_8_)
  ;
  if (lVar9 == 0) {
LAB_06b32d20:
    lVar17 = 0;
  }
  else {
    unaff_x22 = *(long ******)PTR_DAT_0777e548;
    lVar17 = func_0x03280b90(lVar9,unaff_x22);
    if (lVar17 == 0) {
      func_0x03281048(lVar9,unaff_x22);
      goto LAB_06b32d20;
    }
  }
  plVar8 = *(long **)(auVar25._0_8_ + 0x88);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar19 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar18 + 0x23) * 0x10 + 0x138);
          goto LAB_06b32d84;
        }
        uVar19 = uVar19 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0x23);
LAB_06b32d84:
                    /* WARNING: Could not recover jumptable at 0x06b32d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*(code *)*puVar12)(plVar8,lVar17,puVar12[1]);
    return plVar8;
  }
  auVar25 = func_0x03280cac();
  if ((bRam0000000007e2a4ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a4ac = 1;
  }
  pplVar16 = (long **)Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetMergeItem
                                (auVar25._0_8_,auVar25._8_8_);
  pplVar15 = (long **)0x7e2a000;
  if (pplVar16 != (long **)0x0) {
    unaff_x22 = *(long ******)PTR_DAT_0777e548;
    lVar9 = func_0x03280b90(pplVar16,unaff_x22);
    if (lVar9 != 0) goto LAB_06b32e24;
    func_0x03281048(pplVar16,unaff_x22);
    pplVar15 = pplVar16;
  }
  pplVar16 = pplVar15;
  lVar9 = 0;
LAB_06b32e24:
  pplVar15 = *(long ***)(auVar25._0_8_ + 0x88);
  if (pplVar15 == (long **)0x0) {
    plVar8 = (long *)func_0x03280cac();
    puVar3 = PTR_DAT_07828a38;
    puVar2 = PTR_DAT_07828a30;
    ppppplStack_f0 = unaff_x22;
    pplStack_e8 = pplVar16;
    pplStack_e0 = pplVar15;
    lStack_d8 = lVar9;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    lVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x053bfe40(lVar9,*(undefined8 *)puVar3);
    plVar8[0xc] = lVar9;
    func_0x032809c4(plVar8 + 0xc,lVar9);
    return plVar8;
  }
  plVar8 = *pplVar15;
  uVar19 = (ulong)*(ushort *)((long)plVar8 + 0x12e);
  if (uVar19 != 0) {
    piVar18 = (int *)(plVar8[0x16] + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a498) {
        plVar8 = plVar8 + (long)(*piVar18 + 0x24) * 2 + 0x27;
        goto LAB_06b32e84;
      }
      uVar19 = uVar19 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar19 != 0);
  }
  plVar8 = (long *)func_0x03256b10(pplVar15,*(long *)PTR_DAT_0777a498,0x24);
LAB_06b32e84:
                    /* WARNING: Could not recover jumptable at 0x06b32e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar8 = (long *)(*(code *)*plVar8)(pplVar15,lVar9,plVar8[1]);
  return plVar8;
}


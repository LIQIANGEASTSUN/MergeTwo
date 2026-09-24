/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32B08; Merger.MergeBoard.ViewModel.MergeBoardViewModel.GetItemById; status ok */


/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b32cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b32dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b32cf0) */
/* WARNING: Removing unreachable block (ram,0x06b32cf4) */
/* WARNING: Removing unreachable block (ram,0x06b32d14) */
/* WARNING: Removing unreachable block (ram,0x06b32d20) */
/* WARNING: Removing unreachable block (ram,0x06b32d24) */
/* WARNING: Removing unreachable block (ram,0x06b32da0) */
/* WARNING: Removing unreachable block (ram,0x06b32dc4) */
/* WARNING: Removing unreachable block (ram,0x06b32de4) */
/* WARNING: Removing unreachable block (ram,0x06b32d2c) */
/* WARNING: Removing unreachable block (ram,0x06b32d44) */
/* WARNING: Removing unreachable block (ram,0x06b32d4c) */
/* WARNING: Removing unreachable block (ram,0x06b32d74) */
/* WARNING: Removing unreachable block (ram,0x06b32d58) */
/* WARNING: Removing unreachable block (ram,0x06b32d64) */
/* WARNING: Removing unreachable block (ram,0x06b32d84) */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */
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
/* WARNING: Removing unreachable block (ram,0x06b32df0) */
/* WARNING: Removing unreachable block (ram,0x06b32df4) */
/* WARNING: Removing unreachable block (ram,0x06b32e14) */
/* WARNING: Removing unreachable block (ram,0x06b32e20) */
/* WARNING: Removing unreachable block (ram,0x06b32e24) */
/* WARNING: Removing unreachable block (ram,0x06b32ea0) */
/* WARNING: Removing unreachable block (ram,0x06a4b430) */
/* WARNING: Removing unreachable block (ram,0x06a4b45c) */
/* WARNING: Removing unreachable block (ram,0x06a4b47c) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x06b32e2c) */
/* WARNING: Removing unreachable block (ram,0x06b32e44) */
/* WARNING: Removing unreachable block (ram,0x06b32e4c) */
/* WARNING: Removing unreachable block (ram,0x06b32e74) */
/* WARNING: Removing unreachable block (ram,0x06b32e58) */
/* WARNING: Removing unreachable block (ram,0x06b32e64) */
/* WARNING: Removing unreachable block (ram,0x06b32e84) */

long * Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetItemById
                 (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x29;
  undefined8 uVar25;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if ((bRam0000000007e2a4a8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2a4a8 = 1;
  }
  plVar18 = *(long **)(param_1 + 0x88);
  if (plVar18 == (long *)0x0) {
    uVar25 = 0x6b32bb4;
    auVar29 = func_0x03280cac();
    uVar20 = 0;
    puVar6 = &stack0xffffffffffffffe0;
    while( true ) {
      puVar9 = (undefined8 *)(puVar6 + -0x50);
      *(undefined8 *)(puVar6 + -0x20) = uVar25;
      *(undefined8 *)(puVar6 + -0x18) = 0x7e2a000;
      *(undefined8 *)(puVar6 + -0x10) = uVar20;
      *(undefined8 *)(puVar6 + -8) = param_2;
      if ((bRam0000000007e2a4a9 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a488);
        bRam0000000007e2a4a9 = 1;
      }
      if (auVar29._8_8_ != 0) {
        func_0x03d1b250(puVar6 + -0x50,auVar29._8_8_,*(undefined8 *)PTR_DAT_0777a488);
        plVar18 = (long *)Merger_MergeBoard_ViewModel_MergeBoardViewModel__GetItemById
                                    (auVar29._0_8_,*(undefined8 *)(puVar6 + -0x50));
        return plVar18;
      }
      lVar13 = func_0x03280cac();
      puVar3 = PTR_DAT_0782f420;
      *(code **)(puVar6 + -0x70) =
           Merger_MergeBoard_ViewModel_MergeBoardViewModel__ExecuteInitializeAction;
      *(undefined8 *)(puVar6 + -0x68) = 0x7e2a000;
      *(undefined8 *)(puVar6 + -0x60) = 0;
      *(long *)(puVar6 + -0x58) = auVar29._0_8_;
      if ((bRam0000000007e2a4aa & 1) == 0) {
        func_0x03280a18(PTR_DAT_0782f428);
        func_0x03280a18(PTR_DAT_0782f420);
        bRam0000000007e2a4aa = 1;
      }
      lVar13 = *(long *)(lVar13 + 0x68);
      uVar25 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x06b9adfc(uVar25,0);
      if (lVar13 != 0) break;
      auVar29 = func_0x03280cac();
      param_2 = auVar29._8_8_;
      uVar20 = auVar29._0_8_;
      *(undefined8 *)(puVar6 + -0xa0) = 0x6b32ca4;
      *(undefined8 *)(puVar6 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x88) = 0x7e2a000;
      *(undefined8 *)(puVar6 + -0x80) = uVar25;
      *(undefined8 *)(puVar6 + -0x78) = 0;
      if ((bRam0000000007e2a4ab & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777e548);
        func_0x03280a18(PTR_DAT_0777a498);
        bRam0000000007e2a4ab = 1;
      }
      uVar25 = 0x6b32cf0;
      puVar6 = puVar6 + -0xa0;
    }
    lVar11 = *(long *)PTR_DAT_0782f428;
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
    *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
    lVar21 = lVar11;
    if ((*(long *)(lVar11 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_07779710), *(long *)(lVar11 + 0x38) == 0)) {
      func_0x03256878(lVar11);
    }
    uVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
    func_0x060157bc(uVar14,0);
    if (uVar14 == 0) {
      auVar29 = func_0x03280cac();
      uVar20 = auVar29._0_8_;
      *(undefined8 *)(puVar6 + -0xd0) = unaff_x29;
      *(undefined8 *)(puVar6 + -200) = 0x3cd9860;
      *(undefined8 *)(puVar6 + -0xc0) = unaff_x25;
      *(long **)(puVar6 + -0xb0) = unaff_x24;
      *(undefined8 **)(puVar6 + -0xa8) = unaff_x23;
      *(undefined8 *)(puVar6 + -0xa0) = 0;
      *(long *)(puVar6 + -0x98) = lVar11;
      *(undefined8 *)(puVar6 + -0x90) = uVar25;
      *(long *)(puVar6 + -0x88) = lVar13;
      lVar13 = tpidr_el0;
      *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(lVar13 + 0x28);
      *(undefined1 **)(puVar6 + -0xf0) = auVar29._8_8_;
      plVar18 = *(long **)(lVar21 + 0x38);
      if (plVar18 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_07779710);
        plVar18 = *(long **)(lVar21 + 0x38);
        if (plVar18 == (long *)0x0) {
          func_0x03256878(lVar21);
          plVar18 = *(long **)(lVar21 + 0x38);
        }
      }
      unaff_x24 = (long *)(ulong)*(uint *)(*plVar18 + 0xfc);
      puVar9 = (undefined8 *)(puVar6 + (-0xf0 - ((ulong)((long)unaff_x24 + 0xfU) & 0x1fffffff0)));
      uVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
      func_0x060157bc(uVar14,0);
      plVar18 = *(long **)(lVar21 + 0x38);
      puVar1 = auVar29._8_8_;
      if (-1 < *(int *)(*plVar18 + 0x28)) {
        puVar1 = puVar6 + -0xf0;
      }
      plVar19 = unaff_x24;
      func_0x072ce970(puVar9,puVar1);
      if (uVar14 == 0) {
        func_0x03280cac();
        uVar25 = 0x3cd9990;
        auVar26 = func_0x072ce990();
        uVar20 = 0;
        puVar10 = puVar9;
        do {
          lVar13 = auVar26._0_8_;
          puVar5 = puVar9 + -8;
          puVar9[-8] = uVar25;
          puVar9[-6] = unaff_x24;
          puVar9[-5] = puVar10;
          puVar9[-4] = uVar20;
          puVar9[-3] = plVar18;
          puVar9[-2] = auVar29._8_8_;
          puVar9[-1] = auVar29._0_8_;
          plVar12 = (long *)plVar19[7];
          plVar17 = (long *)(auVar26._8_8_ & 0xffffffff);
          plVar18 = plVar19;
          if (plVar12 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_0776dcd8);
            func_0x03280a18(PTR_DAT_07779718);
            func_0x03280a18(PTR_DAT_07779720);
            func_0x03280a18(PTR_DAT_0774e558);
            func_0x03280a18(PTR_DAT_07779728);
            func_0x03280a18(PTR_DAT_07779730);
            func_0x03280a18(PTR_DAT_07779738);
            func_0x03280a18(PTR_DAT_077503b8);
            plVar12 = (long *)plVar19[7];
            if (plVar12 == (long *)0x0) {
              func_0x03256878(plVar19);
              plVar12 = (long *)plVar19[7];
            }
          }
          unaff_x24 = (long *)PTR_DAT_0774e558;
          puVar9[-7] = 0;
          plVar23 = *(long **)(lVar13 + 0x88);
          puVar10 = (undefined8 *)*plVar12;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar12 = (long *)func_0x057a51c4(puVar10,0);
          if ((plVar12 == (long *)0x0) ||
             (puVar8 = (undefined8 *)
                       (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0)),
             plVar23 == (long *)0x0)) {
LAB_03cd9c4c:
            plVar12 = plVar18;
            uVar20 = 0x3cd9c50;
            auVar27 = func_0x03280cac();
SUB_03cd9c50:
            plVar24 = auVar27._8_8_;
            puVar5 = puVar9 + -0xe;
            puVar9[-0xe] = uVar20;
            puVar9[-0xc] = plVar23;
            puVar9[-0xb] = plVar19;
            puVar9[-10] = plVar17;
            puVar9[-9] = lVar13;
            plVar18 = plVar12;
            plVar23 = param_4;
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
            lVar13 = func_0x069572f4(plVar24,0);
            plVar17 = param_4;
            plVar19 = plVar12;
            if (lVar13 != 0) {
              plVar18 = (long *)0x1;
              plVar23 = (long *)0x0;
              plVar12 = (long *)func_0x06957fd0(lVar13,plVar12);
              if (plVar12 != (long *)0x0) {
                plVar17 = (long *)func_0x03dc9518(plVar12,*(undefined8 *)param_4[7]);
                plVar24 = *(long **)(param_4[7] + 0x10);
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)PTR_DAT_0774e558);
                }
                plVar18 = (long *)func_0x057a51c4(plVar24,0);
                plVar23 = (long *)0x0;
                func_0x068309d0(auVar27._0_8_,plVar17,plVar18,0,1,0);
                lVar13 = func_0x06fdf130(plVar12,0);
                plVar19 = plVar12;
                if (lVar13 != 0) {
                  func_0x06fed5b8(lVar13,0);
                  return plVar17;
                }
              }
            }
            plVar12 = plVar18;
            uVar25 = 0x3cd9d68;
            auVar28 = func_0x03280cac();
            lVar13 = auVar27._0_8_;
          }
          else {
            lVar21 = *plVar23;
            uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779720) {
                  puVar10 = (undefined8 *)(lVar21 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_03cd9ac8;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
            param_4 = (long *)puVar10[1];
            plVar18 = puVar9 + -7;
            (*(code *)*puVar10)(plVar23,puVar8);
            lVar21 = puVar9[-7];
            puVar10 = puVar8;
            if (lVar21 == 0) {
              plVar23 = *(long **)plVar19[7];
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar12 = (long *)func_0x057a51c4(plVar23,0);
              if (plVar12 != (long *)0x0) {
                uVar20 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                plVar23 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar20,0);
                if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
                }
                param_4 = *(long **)PTR_DAT_07779738;
                plVar18 = (long *)0x0;
                func_0x0556c434(plVar23,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                                *(undefined8 *)PTR_DAT_07779730,0,0);
                lVar21 = puVar9[-7];
                if (lVar21 != 0) goto LAB_03cd9b94;
              }
              goto LAB_03cd9c4c;
            }
LAB_03cd9b94:
            if (*(long *)(lVar13 + 0x80) == 0) goto LAB_03cd9c4c;
            puVar10 = *(undefined8 **)(lVar21 + 0x20);
            auVar28._8_8_ = puVar10;
            auVar28._0_8_ = lVar13;
            plVar18 = *(long **)PTR_DAT_07779718;
            plVar12 = (long *)func_0x04fe2cfc(*(long *)(lVar13 + 0x80),
                                              *(undefined8 *)(lVar21 + 0x18));
            if (puVar9[-7] == 0) goto LAB_03cd9c4c;
            if (*(int *)(puVar9[-7] + 0x28) == 1) {
              plVar23 = plVar12;
              if (puVar10 == (undefined8 *)0x0) goto LAB_03cd9c4c;
              unaff_x24 = *(long **)(lVar13 + 0xb0);
              uVar20 = func_0x06fe368c(puVar10,0);
              uVar20 = func_0x055ee6c0(unaff_x24,uVar20,0);
              auVar27._8_8_ = uVar20;
              auVar27._0_8_ = lVar13;
              param_4 = *(long **)(plVar19[7] + 0x18);
              uVar20 = 0x3cd9c04;
              goto SUB_03cd9c50;
            }
            plVar23 = *(long **)(plVar19[7] + 8);
            uVar25 = 0x3cd9c20;
            plVar24 = plVar12;
          }
          uVar20 = auVar28._8_8_;
          *(undefined8 *)((long)puVar5 + -0x30) = uVar25;
          *(long **)((long)puVar5 + -0x20) = plVar24;
          *(long **)((long)puVar5 + -0x18) = plVar19;
          *(long **)((long)puVar5 + -0x10) = plVar17;
          *(long *)((long)puVar5 + -8) = lVar13;
          param_4 = plVar23;
          if (plVar23[7] == 0) {
            func_0x03280a18(PTR_DAT_07779748);
            func_0x03280a18(PTR_DAT_0774e4e0);
            func_0x03280a18(PTR_DAT_0774e558);
            if (plVar23[7] == 0) {
              func_0x03256878(plVar23);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar13 = func_0x03e3cdbc(uVar20,plVar12,*(undefined8 *)PTR_DAT_07779748);
          if (lVar13 != 0) {
            plVar18 = (long *)func_0x03dc9518(lVar13,*(undefined8 *)plVar23[7]);
            uVar20 = *(undefined8 *)(plVar23[7] + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            uVar20 = func_0x057a51c4(uVar20,0);
            func_0x068309d0(auVar28._0_8_,plVar18,uVar20,0,1,0);
            return plVar18;
          }
          auVar29 = func_0x03280cac();
          lVar13 = auVar29._8_8_;
          puVar9 = (undefined8 *)((long)puVar5 + -0x60);
          *(undefined8 *)((long)puVar5 + -0x50) = 0x3cd9e68;
          *(long **)((long)puVar5 + -0x48) = plVar12;
          *(long **)((long)puVar5 + -0x40) = plVar23;
          *(long *)((long)puVar5 + -0x38) = auVar28._0_8_;
          puVar8 = *(undefined8 **)(lVar13 + 0x38);
          if (puVar8 == (undefined8 *)0x0) {
            func_0x03280a18(PTR_DAT_07779750);
            func_0x03280a18(PTR_DAT_0774e558);
            puVar8 = *(undefined8 **)(lVar13 + 0x38);
            if (puVar8 == (undefined8 *)0x0) {
              func_0x03256878(lVar13);
              puVar8 = *(undefined8 **)(lVar13 + 0x38);
            }
          }
          *(undefined8 *)((long)puVar5 + -0x58) = 0;
          lVar21 = *(long *)(auVar29._0_8_ + 0x90);
          plVar18 = (long *)*puVar8;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar25 = func_0x057a51c4(plVar18,0);
          if (lVar21 != 0) {
            func_0x04fe48b0(lVar21,uVar25,(undefined1 *)((long)puVar5 + -0x58),
                            *(undefined8 *)PTR_DAT_07779750);
            uVar20 = *(undefined8 *)((long)puVar5 + -0x58);
            lVar21 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = func_0x0325681c(lVar21);
            }
            lVar21 = func_0x03280b90(uVar20,lVar21);
            lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            if (lVar21 != 0) {
              plVar18 = (long *)func_0x03280b90(lVar21,lVar13);
              if (plVar18 != (long *)0x0) {
                return plVar18;
              }
              func_0x03281048(lVar21,lVar13);
            }
            return (long *)0x0;
          }
          auVar29 = func_0x03280cac();
          lVar21 = auVar29._8_8_;
          plVar19 = auVar29._0_8_;
          *(undefined8 *)((long)puVar5 + -0x80) = 0x3cd9f80;
          *(undefined8 *)((long)puVar5 + -0x70) = 0;
          *(long *)((long)puVar5 + -0x68) = lVar13;
          plVar17 = *(long **)(lVar21 + 0x38);
          if (plVar17 == (long *)0x0) {
            func_0x03256878(lVar21);
            plVar17 = *(long **)(lVar21 + 0x38);
          }
          lVar13 = func_0x03280b88(*(undefined8 *)
                                    (*plVar19 + (ulong)*(ushort *)(*plVar17 + 0x50) * 0x10 + 0x140))
          ;
          plVar17 = (long *)(**(code **)(lVar13 + 8))(plVar19,lVar13);
          if (plVar17 != (long *)0x0) {
            return plVar17;
          }
          auVar29._8_8_ = *(undefined8 *)((long)puVar5 + -0x70);
          auVar29._0_8_ = *(undefined8 *)((long)puVar5 + -0x68);
          auVar26._8_8_ = 1;
          auVar26._0_8_ = plVar19;
          plVar19 = *(long **)(*(long *)(lVar21 + 0x38) + 0x10);
          uVar25 = *(undefined8 *)((long)puVar5 + -0x80);
        } while( true );
      }
      puVar10 = (undefined8 *)plVar18[1];
      uVar25 = *puVar10;
      unaff_x23 = puVar9;
      if (-1 < *(int *)(*plVar18 + 0x28)) {
        unaff_x23 = (undefined8 *)*puVar9;
      }
      *(undefined8 **)(puVar6 + -0xe8) = unaff_x23;
      (*(code *)puVar10[2])(uVar25,puVar10,uVar14,puVar6 + -0xe8,puVar6 + -0xe0);
      uVar25 = 0x3cd995c;
      uVar15 = uVar14;
    }
    else {
      func_0x03ec33e4(uVar14,uVar25,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
      auVar29._8_8_ = *(undefined8 *)(puVar6 + -0x60);
      auVar29._0_8_ = lVar13;
      uVar20 = *(undefined8 *)(puVar6 + -0x58);
      plVar18 = *(long **)(puVar6 + -0x68);
      uVar25 = *(undefined8 *)(puVar6 + -0x80);
      uVar15 = *(ulong *)(puVar6 + -0x70);
    }
    while( true ) {
      plVar19 = auVar29._0_8_;
      puVar9[-6] = uVar25;
      puVar9[-4] = uVar15;
      puVar9[-3] = plVar18;
      puVar9[-2] = auVar29._8_8_;
      puVar9[-1] = uVar20;
      uVar20 = 0x7e2a000;
      plVar18 = plVar19;
      if ((bRam0000000007e2a83d & 1) == 0) {
        plVar18 = (long *)func_0x03280a18(PTR_DAT_077c07b8);
        bRam0000000007e2a83d = 1;
      }
      if ((char)plVar19[8] != '\0') {
        return plVar18;
      }
      plVar18 = (long *)plVar19[3];
      if (plVar18 == (long *)0x0) break;
      lVar13 = *plVar18;
      lVar21 = plVar19[7];
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077c07b8) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06b9b60c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
      uVar25 = (*(code *)*puVar10)(plVar18,puVar10[1]);
      uVar20 = 0;
      if (lVar21 == 0) break;
      uVar20 = func_0x06015720(lVar21,uVar14,uVar25,0);
      uVar15 = puVar9[-4];
      puVar9[-6] = puVar9[-6];
      puVar9[-5] = unaff_x23;
      puVar9[-4] = uVar15;
      puVar9[-3] = puVar9[-3];
      puVar9[-2] = puVar9[-2];
      puVar9[-1] = puVar9[-1];
      plVar18 = plVar19;
      if ((bRam0000000007e2a83f & 1) == 0) {
        plVar18 = (long *)func_0x03280a18(PTR_DAT_07832798);
        bRam0000000007e2a83f = 1;
      }
      puVar3 = PTR_DAT_07832798;
      lVar13 = plVar19[5];
      if (lVar13 != 0) {
        uVar2 = *(uint *)(lVar13 + 0x18);
        if ((int)uVar2 < 1) {
          return plVar18;
        }
        uVar15 = 0;
        while (uVar22 = (uint)uVar15, unaff_x23 = (undefined8 *)puVar3, uVar22 < uVar2) {
          plVar19 = *(long **)(lVar13 + (long)(int)uVar22 * 8 + 0x20);
          if (plVar19 == (long *)0x0) goto LAB_06b9bb48;
          lVar21 = *plVar19;
          uVar14 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_06b9bb14;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar3,0);
LAB_06b9bb14:
          plVar18 = (long *)(*(code *)*puVar10)(plVar19,uVar20,puVar10[1]);
          uVar2 = *(uint *)(lVar13 + 0x18);
          uVar15 = (ulong)(uVar22 + 1);
          if ((int)uVar2 <= (int)(uVar22 + 1)) {
            return plVar18;
          }
        }
        func_0x03280cb4();
      }
LAB_06b9bb48:
      uVar25 = func_0x03280cac();
      puVar3 = PTR_DAT_07779710;
      puVar7 = puVar9 + -0xc;
      puVar9[-0xc] = unaff_d8;
      puVar9[-10] = 0x6b9bb4c;
      puVar9[-9] = lVar13;
      puVar9[-8] = plVar19;
      puVar9[-7] = uVar20;
      if ((bRam0000000007e2a83e & 1) == 0) {
        func_0x03280a18(PTR_DAT_078327a0);
        func_0x03280a18(PTR_DAT_07779710);
        bRam0000000007e2a83e = 1;
      }
      uVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x060157bc(uVar14,0);
      if (uVar14 == 0) {
        plVar18 = (long *)func_0x03280cac();
        return plVar18;
      }
      func_0x03ec31a8(extraout_d0,uVar14,*(undefined8 *)PTR_DAT_078327a0);
      auVar29._8_8_ = puVar9[-8];
      auVar29._0_8_ = uVar25;
      uVar20 = puVar9[-7];
      uVar25 = puVar9[-10];
      plVar18 = (long *)puVar9[-9];
      puVar9 = puVar9 + -6;
      unaff_d8 = *puVar7;
    }
    func_0x03280cac();
    puVar4 = PTR_DAT_07832768;
    puVar3 = PTR_DAT_07779710;
    puVar9[-0xe] = 0x6b9b64c;
    puVar9[-0xc] = unaff_x24;
    puVar9[-0xb] = unaff_x23;
    puVar9[-10] = plVar18;
    puVar9[-9] = uVar20;
    puVar9[-8] = uVar14;
    puVar9[-7] = plVar19;
    if ((bRam0000000007e2a83a & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832768);
      func_0x03280a18(PTR_DAT_07832770);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83a = 1;
    }
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x060157bc(uVar20,0);
    plVar18 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
    return plVar18;
  }
  lVar13 = *plVar18;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
        goto LAB_06b32b98;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777a498,9);
LAB_06b32b98:
                    /* WARNING: Could not recover jumptable at 0x06b32bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar18 = (long *)(*(code *)*puVar9)(plVar18,param_2,puVar9[1]);
  return plVar18;
}


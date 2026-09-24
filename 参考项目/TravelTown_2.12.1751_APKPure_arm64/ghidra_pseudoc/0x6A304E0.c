/* Ghidra 12.1.2 native pseudocode; RVA 0x6A304E0; Merger.MergeBoard.ViewModel.BoardItemBehavioursHandlerViewModel.PrepareAnimatedSpriteAssets; status ok */


/* WARNING: Possible PIC construction at 0x06b30878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b30de8) */
/* WARNING: Removing unreachable block (ram,0x06b30dc8) */
/* WARNING: Removing unreachable block (ram,0x06b30da8) */
/* WARNING: Removing unreachable block (ram,0x06b30d88) */
/* WARNING: Removing unreachable block (ram,0x06b30d68) */
/* WARNING: Removing unreachable block (ram,0x06b3087c) */
/* WARNING: Removing unreachable block (ram,0x06b308d4) */
/* WARNING: Removing unreachable block (ram,0x06b308dc) */
/* WARNING: Removing unreachable block (ram,0x06b308f4) */
/* WARNING: Removing unreachable block (ram,0x06b308fc) */
/* WARNING: Removing unreachable block (ram,0x06b309f0) */
/* WARNING: Removing unreachable block (ram,0x06b30908) */
/* WARNING: Removing unreachable block (ram,0x06b30914) */
/* WARNING: Removing unreachable block (ram,0x06b30a00) */
/* WARNING: Removing unreachable block (ram,0x06b30a10) */
/* WARNING: Removing unreachable block (ram,0x06b30a18) */
/* WARNING: Removing unreachable block (ram,0x06b30a30) */
/* WARNING: Removing unreachable block (ram,0x06b30a38) */
/* WARNING: Removing unreachable block (ram,0x06b30a60) */
/* WARNING: Removing unreachable block (ram,0x06b30a44) */
/* WARNING: Removing unreachable block (ram,0x06b30a50) */
/* WARNING: Removing unreachable block (ram,0x06b30a6c) */
/* WARNING: Removing unreachable block (ram,0x06b30a8c) */
/* WARNING: Removing unreachable block (ram,0x06b30a94) */
/* WARNING: Removing unreachable block (ram,0x06b30abc) */
/* WARNING: Removing unreachable block (ram,0x06b30aa0) */
/* WARNING: Removing unreachable block (ram,0x06b30aac) */
/* WARNING: Removing unreachable block (ram,0x06b30ac8) */
/* WARNING: Removing unreachable block (ram,0x06b30ad8) */
/* WARNING: Removing unreachable block (ram,0x06b30af4) */
/* WARNING: Removing unreachable block (ram,0x06b30afc) */
/* WARNING: Removing unreachable block (ram,0x06b30b24) */
/* WARNING: Removing unreachable block (ram,0x06b30b08) */
/* WARNING: Removing unreachable block (ram,0x06b30b14) */
/* WARNING: Removing unreachable block (ram,0x06b30b34) */
/* WARNING: Removing unreachable block (ram,0x06b30b4c) */
/* WARNING: Removing unreachable block (ram,0x06b30b60) */
/* WARNING: Removing unreachable block (ram,0x06b30b68) */
/* WARNING: Removing unreachable block (ram,0x06b30c4c) */
/* WARNING: Removing unreachable block (ram,0x06b30b74) */
/* WARNING: Removing unreachable block (ram,0x06b30b80) */
/* WARNING: Removing unreachable block (ram,0x06b30880) */
/* WARNING: Removing unreachable block (ram,0x06b30888) */
/* WARNING: Removing unreachable block (ram,0x06b308a4) */
/* WARNING: Removing unreachable block (ram,0x06b308ac) */
/* WARNING: Removing unreachable block (ram,0x06b30974) */
/* WARNING: Removing unreachable block (ram,0x06b308b8) */
/* WARNING: Removing unreachable block (ram,0x06b308c4) */
/* WARNING: Removing unreachable block (ram,0x06b30984) */
/* WARNING: Removing unreachable block (ram,0x06b309cc) */
/* WARNING: Removing unreachable block (ram,0x06b309d4) */
/* WARNING: Removing unreachable block (ram,0x06b309e0) */
/* WARNING: Removing unreachable block (ram,0x06b309ec) */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */

ulong Merger_MergeBoard_ViewModel_BoardItemBehavioursHandlerViewModel__PrepareAnimatedSpriteAssets
                (long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *extraout_x1;
  long *extraout_x1_00;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined *puVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long *unaff_x22;
  int iVar20;
  undefined *puVar21;
  long unaff_x23;
  undefined *puVar22;
  undefined8 unaff_x24;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 auStack_d0 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = &uStack_70;
  plVar16 = (long *)0x7e2a000;
  if ((bRam0000000007e2a489 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db760);
    func_0x03280a18(PTR_DAT_077dc8e8);
    func_0x03280a18(PTR_DAT_0780dd80);
    func_0x03280a18(PTR_DAT_07809600);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07772268);
    func_0x03280a18(PTR_DAT_07774930);
    func_0x03280a18(PTR_DAT_0777a750);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_077ec328);
    bRam0000000007e2a489 = 1;
  }
  puVar4 = PTR_DAT_077c1d88;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if ((param_2 != 0) && (plVar14 = *(long **)(param_2 + 0x30), plVar14 != (long *)0x0)) {
    lVar9 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c1d88) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x6d) * 0x10 + 0x138);
          goto LAB_06b30610;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_3 = (undefined8 *)0x6d;
    puVar5 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06b30610:
    plVar6 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      unaff_x22 = *(long **)(param_1 + 0x70);
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07809600) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b3067c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      param_3 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b3067c:
      lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      plVar16 = plVar6;
      if (unaff_x22 != (long *)0x0) {
        lVar10 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_06b306e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(unaff_x22,*(long *)PTR_DAT_0777a498,9);
LAB_06b306e8:
        param_3 = (undefined8 *)puVar5[1];
        plVar6 = (long *)(*(code *)*puVar5)(unaff_x22,lVar9);
        puVar22 = PTR_DAT_077db760;
        puVar21 = PTR_DAT_0777e548;
        unaff_x23 = lVar9;
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x21) * 0x10 + 0x138);
                goto LAB_06b30760;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777e548,0x21);
LAB_06b30760:
          unaff_x24 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          unaff_x23 = func_0x03280ca0(*(undefined8 *)puVar22);
          param_3 = (undefined8 *)0x0;
          func_0x0610f958(unaff_x23,unaff_x24);
          if ((unaff_x23 == 0) || (*(char *)(unaff_x23 + 0x10) == '\0')) {
LAB_06b307b4:
            lVar9 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar21) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                  goto LAB_06b30804;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar21,5);
LAB_06b30804:
            lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            if ((lVar9 == 0) || (plVar8 = *(long **)(lVar9 + 0x20), plVar8 == (long *)0x0)) {
              plVar6 = *(long **)PTR_DAT_077dc8e8;
              lVar9 = plVar6[7];
              if (lVar9 == 0) {
                func_0x03256878(plVar6);
                lVar9 = plVar6[7];
              }
              lVar9 = *(long *)(lVar9 + 0x10);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = func_0x0325681c();
              }
              if (*(int *)(lVar9 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar9 = *(long *)(plVar6[7] + 0x10);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = func_0x0325681c();
              }
              plVar8 = (long *)**(long **)(lVar9 + 0xb8);
            }
            param_3 = &uStack_58;
            uVar23 = 0x6b3087c;
            goto SUB_06b30e14;
          }
          unaff_x22 = plVar6;
          if (*(long *)(unaff_x23 + 0x18) != 0) {
            unaff_x23 = *(long *)(*(long *)(unaff_x23 + 0x18) + 0x10);
            uVar12 = func_0x055fde0c(unaff_x23,0);
            if ((uVar12 & 1) != 0) goto LAB_06b307b4;
            plVar6 = *(long **)(param_1 + 0x78);
            if (plVar6 != (long *)0x0) {
              lVar9 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07774930) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_06b30b98;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07774930,2);
LAB_06b30b98:
              uStack_68 = (*(code *)*puVar5)(plVar6,unaff_x23,1,0,puVar5[1]);
              uVar23 = func_0x0558dab4(&uStack_68,*(undefined8 *)PTR_DAT_077ec328,0);
              lVar9 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x25) * 0x10 + 0x138);
                    goto LAB_06b30c20;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar4,0x25);
LAB_06b30c20:
              uVar12 = (*(code *)*puVar5)(plVar14,uVar23,puVar5[1]);
              return uVar12;
            }
          }
        }
      }
    }
  }
  plVar6 = unaff_x22;
  func_0x03280cac();
  puVar3 = auStack_d0;
  puVar2 = auStack_d0;
  auStack_d0[0] = 0x6b30c5c;
  param_1 = 0x7e2a000;
  if ((bRam0000000007e2a488 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f380);
    func_0x03280a18(PTR_DAT_0782f388);
    func_0x03280a18(PTR_DAT_0782f390);
    func_0x03280a18(PTR_DAT_0782f398);
    func_0x03280a18(PTR_DAT_0782f3a0);
    func_0x03280a18(PTR_DAT_0782f3a8);
    func_0x03280a18(PTR_DAT_0782f3b0);
    func_0x03280a18(PTR_DAT_0782f3b8);
    func_0x03280a18(PTR_DAT_0782f3c0);
    func_0x03280a18(PTR_DAT_0782f3c8);
    bRam0000000007e2a488 = 1;
  }
  if (extraout_x1 != (long *)0x0) {
    plVar6 = *(long **)PTR_DAT_0782f398;
    uVar12 = 0;
    uVar23 = 0x6b30d68;
    plVar14 = extraout_x1;
    plVar16 = extraout_x1;
    puVar4 = PTR_DAT_0782f3a0;
    puVar15 = PTR_DAT_0782f3a8;
    puVar7 = PTR_DAT_0782f3b0;
    puVar21 = PTR_DAT_0782f3c8;
    puVar22 = PTR_DAT_0782f3c0;
    do {
      puVar1 = (undefined1 *)((long)puVar2 + -0x40);
      *(undefined8 *)((long)puVar2 + -0x40) = uVar23;
      *(undefined **)((long)puVar2 + -0x30) = puVar22;
      *(undefined **)((long)puVar2 + -0x28) = puVar21;
      *(undefined **)((long)puVar2 + -0x20) = puVar7;
      *(undefined **)((long)puVar2 + -0x18) = puVar15;
      *(undefined **)((long)puVar2 + -0x10) = puVar4;
      *(long **)((long)puVar2 + -8) = plVar16;
      plVar8 = (long *)plVar6[7];
      plVar16 = plVar6;
      if (plVar8 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_0776dcd8);
        func_0x03280a18(PTR_DAT_07779718);
        func_0x03280a18(PTR_DAT_07779720);
        func_0x03280a18(PTR_DAT_0774e558);
        func_0x03280a18(PTR_DAT_07779728);
        func_0x03280a18(PTR_DAT_07779730);
        func_0x03280a18(PTR_DAT_07779738);
        func_0x03280a18(PTR_DAT_077503b8);
        plVar8 = (long *)plVar6[7];
        if (plVar8 == (long *)0x0) {
          func_0x03256878(plVar6);
          plVar8 = (long *)plVar6[7];
        }
      }
      puVar22 = PTR_DAT_0774e558;
      *(undefined8 *)((long)puVar2 + -0x38) = 0;
      plVar18 = (long *)plVar14[0x11];
      puVar21 = (undefined *)*plVar8;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar8 = (long *)func_0x057a51c4(puVar21,0);
      if ((plVar8 == (long *)0x0) ||
         (puVar4 = (undefined *)
                   (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)),
         plVar18 == (long *)0x0)) {
LAB_03cd9c4c:
        plVar8 = plVar16;
        uVar23 = 0x3cd9c50;
        auVar25 = func_0x03280cac();
SUB_03cd9c50:
        plVar19 = auVar25._8_8_;
        puVar1 = (undefined1 *)((long)puVar2 + -0x70);
        *(undefined8 *)((long)puVar2 + -0x70) = uVar23;
        *(long **)((long)puVar2 + -0x60) = plVar18;
        *(long **)((long)puVar2 + -0x58) = plVar6;
        *(ulong *)((long)puVar2 + -0x50) = uVar12;
        *(long **)((long)puVar2 + -0x48) = plVar14;
        plVar16 = plVar8;
        uVar11 = param_4;
        if (*(long *)(param_4 + 0x38) == 0) {
          func_0x03280a18(PTR_DAT_07779740);
          func_0x03280a18(PTR_DAT_0774e558);
          if (*(long *)(param_4 + 0x38) == 0) {
            func_0x03256878(param_4);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar9 = func_0x069572f4(plVar19,0);
        uVar12 = param_4;
        plVar6 = plVar8;
        if (lVar9 != 0) {
          plVar16 = (long *)0x1;
          uVar11 = 0;
          plVar14 = (long *)func_0x06957fd0(lVar9,plVar8);
          if (plVar14 != (long *)0x0) {
            uVar12 = func_0x03dc9518(plVar14,**(undefined8 **)(param_4 + 0x38));
            plVar19 = *(long **)(*(long *)(param_4 + 0x38) + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            plVar16 = (long *)func_0x057a51c4(plVar19,0);
            uVar11 = 0;
            func_0x068309d0(auVar25._0_8_,uVar12,plVar16,0,1,0);
            lVar9 = func_0x06fdf130(plVar14,0);
            plVar6 = plVar14;
            if (lVar9 != 0) {
              func_0x06fed5b8(lVar9,0);
              return uVar12;
            }
          }
        }
        plVar8 = plVar16;
        uVar23 = 0x3cd9d68;
        auVar26 = func_0x03280cac();
        plVar14 = auVar25._0_8_;
      }
      else {
        lVar9 = *plVar18;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779720) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03cd9ac8;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
        param_4 = puVar5[1];
        plVar16 = (long *)((long)puVar2 + -0x38);
        (*(code *)*puVar5)(plVar18,puVar4);
        lVar9 = *(long *)((long)puVar2 + -0x38);
        puVar21 = puVar4;
        if (lVar9 == 0) {
          plVar18 = *(long **)plVar6[7];
          if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar8 = (long *)func_0x057a51c4(plVar18,0);
          if (plVar8 != (long *)0x0) {
            uVar23 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            plVar18 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar23,0);
            if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
            }
            param_4 = *(ulong *)PTR_DAT_07779738;
            plVar16 = (long *)0x0;
            func_0x0556c434(plVar18,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                            *(undefined8 *)PTR_DAT_07779730,0,0);
            lVar9 = *(long *)((long)puVar2 + -0x38);
            if (lVar9 != 0) goto LAB_03cd9b94;
          }
          goto LAB_03cd9c4c;
        }
LAB_03cd9b94:
        if (plVar14[0x10] == 0) goto LAB_03cd9c4c;
        puVar21 = *(undefined **)(lVar9 + 0x20);
        auVar26._8_8_ = puVar21;
        auVar26._0_8_ = plVar14;
        plVar16 = *(long **)PTR_DAT_07779718;
        plVar8 = (long *)func_0x04fe2cfc(plVar14[0x10],*(undefined8 *)(lVar9 + 0x18));
        if (*(long *)((long)puVar2 + -0x38) == 0) goto LAB_03cd9c4c;
        if (*(int *)(*(long *)((long)puVar2 + -0x38) + 0x28) == 1) {
          plVar18 = plVar8;
          if (puVar21 == (undefined *)0x0) goto LAB_03cd9c4c;
          puVar22 = (undefined *)plVar14[0x16];
          uVar23 = func_0x06fe368c(puVar21,0);
          uVar23 = func_0x055ee6c0(puVar22,uVar23,0);
          auVar25._8_8_ = uVar23;
          auVar25._0_8_ = plVar14;
          param_4 = *(ulong *)(plVar6[7] + 0x18);
          uVar23 = 0x3cd9c04;
          goto SUB_03cd9c50;
        }
        uVar11 = *(ulong *)(plVar6[7] + 8);
        uVar23 = 0x3cd9c20;
        plVar19 = plVar8;
      }
      puVar7 = auVar26._8_8_;
      *(undefined8 *)(puVar1 + -0x30) = uVar23;
      *(long **)(puVar1 + -0x20) = plVar19;
      *(long **)(puVar1 + -0x18) = plVar6;
      *(ulong *)(puVar1 + -0x10) = uVar12;
      *(long **)(puVar1 + -8) = plVar14;
      param_4 = uVar11;
      if (*(long *)(uVar11 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_07779748);
        func_0x03280a18(PTR_DAT_0774e4e0);
        func_0x03280a18(PTR_DAT_0774e558);
        if (*(long *)(uVar11 + 0x38) == 0) {
          func_0x03256878(uVar11);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar9 = func_0x03e3cdbc(puVar7,plVar8,*(undefined8 *)PTR_DAT_07779748);
      if (lVar9 != 0) {
        uVar12 = func_0x03dc9518(lVar9,**(undefined8 **)(uVar11 + 0x38));
        uVar23 = *(undefined8 *)(*(long *)(uVar11 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        uVar23 = func_0x057a51c4(uVar23,0);
        func_0x068309d0(auVar26._0_8_,uVar12,uVar23,0,1,0);
        return uVar12;
      }
      auVar25 = func_0x03280cac();
      lVar9 = auVar25._8_8_;
      puVar2 = (undefined8 *)(puVar1 + -0x60);
      *(undefined8 *)(puVar1 + -0x50) = 0x3cd9e68;
      *(long **)(puVar1 + -0x48) = plVar8;
      *(ulong *)(puVar1 + -0x40) = uVar11;
      *(long *)(puVar1 + -0x38) = auVar26._0_8_;
      puVar5 = *(undefined8 **)(lVar9 + 0x38);
      if (puVar5 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_07779750);
        func_0x03280a18(PTR_DAT_0774e558);
        puVar5 = *(undefined8 **)(lVar9 + 0x38);
        if (puVar5 == (undefined8 *)0x0) {
          func_0x03256878(lVar9);
          puVar5 = *(undefined8 **)(lVar9 + 0x38);
        }
      }
      *(undefined8 *)(puVar1 + -0x58) = 0;
      lVar10 = *(long *)(auVar25._0_8_ + 0x90);
      puVar15 = (undefined *)*puVar5;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar23 = func_0x057a51c4(puVar15,0);
      if (lVar10 != 0) {
        func_0x04fe48b0(lVar10,uVar23,puVar1 + -0x58,*(undefined8 *)PTR_DAT_07779750);
        uVar23 = *(undefined8 *)(puVar1 + -0x58);
        lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar10 = func_0x03280b90(uVar23,lVar10);
        lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = func_0x0325681c(lVar9);
        }
        if (lVar10 != 0) {
          uVar12 = func_0x03280b90(lVar10,lVar9);
          if (uVar12 != 0) {
            return uVar12;
          }
          func_0x03281048(lVar10,lVar9);
        }
        return 0;
      }
      auVar26 = func_0x03280cac();
      lVar10 = auVar26._8_8_;
      plVar14 = auVar26._0_8_;
      *(undefined8 *)(puVar1 + -0x80) = 0x3cd9f80;
      *(undefined8 *)(puVar1 + -0x70) = 0;
      *(long *)(puVar1 + -0x68) = lVar9;
      plVar16 = *(long **)(lVar10 + 0x38);
      if (plVar16 == (long *)0x0) {
        func_0x03256878(lVar10);
        plVar16 = *(long **)(lVar10 + 0x38);
      }
      lVar9 = func_0x03280b88(*(undefined8 *)
                               (*plVar14 + (ulong)*(ushort *)(*plVar16 + 0x50) * 0x10 + 0x140));
      uVar12 = (**(code **)(lVar9 + 8))(plVar14,lVar9);
      if (uVar12 != 0) {
        return uVar12;
      }
      puVar4 = *(undefined **)(puVar1 + -0x70);
      plVar16 = *(long **)(puVar1 + -0x68);
      uVar12 = 1;
      plVar6 = *(long **)(*(long *)(lVar10 + 0x38) + 0x10);
      uVar23 = *(undefined8 *)(puVar1 + -0x80);
    } while( true );
  }
  uVar23 = 0x6b30e14;
  func_0x03280cac();
  plVar14 = (long *)0x0;
  plVar8 = extraout_x1_00;
SUB_06b30e14:
  *(undefined8 *)((long)puVar3 + -0x40) = uVar23;
  *(undefined8 *)((long)puVar3 + -0x30) = unaff_x24;
  *(long *)((long)puVar3 + -0x28) = unaff_x23;
  *(long **)((long)puVar3 + -0x20) = plVar6;
  *(long **)((long)puVar3 + -0x18) = plVar16;
  *(long *)((long)puVar3 + -0x10) = param_1;
  *(long **)((long)puVar3 + -8) = plVar14;
  lVar9 = 0x7e2a000;
  if ((bRam0000000007e2a48a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077806f8);
    func_0x03280a18(PTR_DAT_07780700);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780dd88);
    bRam0000000007e2a48a = 1;
  }
  if (plVar8 == (long *)0x0) {
LAB_06b31074:
    *param_3 = 0;
    func_0x032809c4(param_3,0);
    uVar17 = 0;
LAB_06b31088:
    return (ulong)uVar17;
  }
  lVar10 = *plVar8;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077806f8) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_06b30ed4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077806f8,0);
LAB_06b30ed4:
  plVar16 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
  puVar22 = PTR_DAT_0780dd88;
  puVar21 = PTR_DAT_07780700;
  puVar4 = PTR_DAT_0774e8e0;
  if (plVar16 == (long *)0x0) {
LAB_06b310a4:
    func_0x03280cac();
    goto LAB_06b310a8;
  }
  do {
    lVar9 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b30f4c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar4,0);
LAB_06b30f4c:
    uVar12 = (*(code *)*puVar5)(plVar16,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      uVar17 = 0;
      iVar20 = 6;
      goto joined_r0x06b31000;
    }
    lVar9 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar21) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b30fa8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar21,0);
LAB_06b30fa8:
    lVar9 = (*(code *)*puVar5)(plVar16,puVar5[1]);
    if (lVar9 == 0) {
      func_0x03280cac();
      lVar9 = 0;
      goto LAB_06b310a4;
    }
    uVar12 = func_0x055ea870(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)puVar22,0);
  } while ((uVar12 & 1) == 0);
  *param_3 = *(undefined8 *)(lVar9 + 0x18);
  func_0x032809c4(param_3);
  uVar17 = 1;
  iVar20 = 5;
joined_r0x06b31000:
  lVar9 = 0;
  do {
    if (plVar16 != (long *)0x0) {
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b31058;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31058:
      (*(code *)*puVar5)(plVar16,puVar5[1]);
    }
    if (lVar9 == 0) {
      if ((iVar20 == 0) || (iVar20 == 6)) goto LAB_06b31074;
      goto LAB_06b31088;
    }
LAB_06b310a8:
    auVar24 = func_0x03280ca4(lVar9);
    uVar23 = auVar24._0_8_;
    if (auVar24._8_4_ != 1) break;
    plVar14 = (long *)func_0x072ce910(uVar23);
    lVar9 = *plVar14;
    func_0x072ce920();
    iVar20 = 0;
    uVar17 = 0;
  } while( true );
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b31154;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31154:
    (*(code *)*puVar5)(plVar16,puVar5[1]);
  }
  func_0x03365958(uVar23);
  func_0x03280ca4(0);
  uVar12 = func_0x02f09514();
  puVar4 = PTR_DAT_0782f3d0;
  *(undefined8 *)((long)puVar3 + -0x60) = 0x6b31178;
  *(undefined8 *)((long)puVar3 + -0x58) = 0;
  *(long **)((long)puVar3 + -0x50) = plVar16;
  *(undefined8 **)((long)puVar3 + -0x48) = param_3;
  if ((bRam0000000007e2a48b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f3d0);
    bRam0000000007e2a48b = 1;
  }
  *(undefined8 *)(uVar12 + 0x90) = *(undefined8 *)puVar4;
  func_0x032809c4();
  puVar21 = PTR_DAT_07828a38;
  puVar4 = PTR_DAT_07828a30;
  *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0x60);
  *(undefined8 *)((long)puVar3 + -0x60) = uVar23;
  *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0x58);
  *(undefined8 *)((long)puVar3 + -0x50) = *(undefined8 *)((long)puVar3 + -0x50);
  *(undefined8 *)((long)puVar3 + -0x48) = *(undefined8 *)((long)puVar3 + -0x48);
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar23 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x053bfe40(uVar23,*(undefined8 *)puVar21);
  *(undefined8 *)(uVar12 + 0x60) = uVar23;
  func_0x032809c4((undefined8 *)(uVar12 + 0x60),uVar23);
  return uVar12;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4EBA8; Merger.MergeBoard.Utils.SpawningItemsUtils.GetItemToProduce; status ok */


/* WARNING: Possible PIC construction at 0x06b4ee04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b4ee08) */

long * Merger_MergeBoard_Utils_SpawningItemsUtils__GetItemToProduce
                 (long param_1,long *param_2,long param_3,long *param_4,long *param_5,long *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *extraout_x8;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [80];
  undefined1 auStack_250 [80];
  undefined8 uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long alStack_1e0 [6];
  undefined8 uStack_1b0;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [80];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_58;
  
  lVar15 = param_3;
  plVar11 = param_4;
  plVar9 = param_5;
  if ((bRam0000000007e2a5ab & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782ff58);
    func_0x03280a18(PTR_DAT_0782ff38);
    func_0x03280a18(PTR_DAT_0777a4f8);
    func_0x03280a18(PTR_DAT_0777a500);
    func_0x03280a18(PTR_DAT_077e6d28);
    func_0x03280a18(PTR_DAT_0777a508);
    func_0x03280a18(PTR_DAT_0782ff60);
    func_0x03280a18(PTR_DAT_0782ff68);
    bRam0000000007e2a5ab = 1;
  }
  uStack_58 = 0;
  if (*param_2 == 0) {
LAB_06b4ee28:
    param_5 = plVar11;
    uVar17 = 0x6b4ee2c;
    auVar18 = func_0x03280cac();
    param_1 = auVar18._8_8_;
    plVar11 = auVar18._0_8_;
    param_6 = plVar9;
  }
  else {
    uVar7 = func_0x060e8960(*param_2,0);
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(param_3 + 0x38) = 0;
      iVar1 = *(int *)(param_3 + 0x40) + 1;
      *(int *)(param_3 + 0x40) = iVar1;
      if (*param_2 != 0) {
        plVar11 = (long *)0x0;
        func_0x060e8b04(*param_2,(int)param_2[1] + iVar1,param_4[2]);
        lVar15 = 0x50;
        func_0x072ce970(auStack_100,param_3);
        if (param_1 != 0) {
          uVar17 = *(undefined8 *)PTR_DAT_0782ff38;
          func_0x072ce970(&lStack_b0,auStack_100,0x50);
          func_0x03d1dcc8(param_1,&lStack_b0,uVar17);
          lStack_118 = param_2[1];
          lStack_120 = *param_2;
          lStack_108 = param_2[3];
          lStack_110 = param_2[2];
          lStack_b0 = lStack_120;
          lStack_a8 = lStack_118;
          lStack_a0 = lStack_110;
          lStack_98 = lStack_108;
          func_0x03d1d988(param_1,&lStack_b0,*(undefined8 *)PTR_DAT_0782ff58);
          goto LAB_06b4ed04;
        }
      }
      goto LAB_06b4ee28;
    }
    if (param_1 == 0) goto LAB_06b4ee28;
LAB_06b4ed04:
    uVar7 = func_0x03d1ecb4(param_1,&uStack_58,*(undefined8 *)PTR_DAT_0777a4f8);
    uVar17 = uStack_58;
    puVar2 = PTR_DAT_0782ff68;
    if ((uVar7 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      lVar15 = *(long *)PTR_DAT_0782ff68;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar15 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar15 = *(long *)puVar2;
        }
        uVar16 = **(undefined8 **)(lVar15 + 0xb8);
        lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777a508);
        func_0x053569b8(lVar12,uVar16,*(undefined8 *)PTR_DAT_0782ff60,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar11 = lVar12;
        func_0x032809c4(plVar11,lVar12);
      }
      uVar17 = func_0x03d50a94(uVar17,lVar12,*(undefined8 *)PTR_DAT_0777a500);
      uVar17 = func_0x03d5ffd0(uVar17,*(undefined8 *)PTR_DAT_077e6d28);
    }
    lStack_130 = param_4[4];
    lStack_148 = param_4[1];
    lStack_150 = *param_4;
    lStack_138 = param_4[3];
    lStack_140 = param_4[2];
    plVar11 = (long *)Merger_MergeBoard_Utils_SpawningItemsUtils__GetItemFromQueue
                                (*param_2,&lStack_150,uVar17);
    lVar15 = param_2[2];
    uVar17 = 0x6b4ee08;
  }
  uStack_1b0 = uVar17;
  if ((bRam0000000007e2a5ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07774a48);
    func_0x03280a18(PTR_DAT_0777e518);
    func_0x03280a18(PTR_DAT_0777e520);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0777e528);
    func_0x03280a18(PTR_DAT_0777e530);
    func_0x03280a18(PTR_DAT_0777e538);
    func_0x03280a18(PTR_DAT_0777e540);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777a590);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777e4e8);
    func_0x03280a18(PTR_DAT_0777e4f0);
    func_0x03280a18(PTR_DAT_0782ff70);
    func_0x03280a18(PTR_DAT_0782ff78);
    func_0x03280a18(PTR_DAT_0782ff68);
    func_0x03280a18(PTR_DAT_0777e550);
    bRam0000000007e2a5ae = 1;
  }
  if ((param_1 == 0) ||
     (func_0x03d1b250(alStack_1e0,param_1,*(undefined8 *)PTR_DAT_0777a488),
     puVar2 = PTR_DAT_0777a590, param_6 == (long *)0x0)) goto LAB_06b4f578;
  lVar12 = *param_6;
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a590) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_06b4efc0;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)func_0x03256b10(param_6,*(long *)PTR_DAT_0777a590,0);
LAB_06b4efc0:
  uVar7 = (*(code *)*puVar8)(param_6,puVar8[1]);
  if ((uVar7 & 1) != 0) {
    lVar12 = *param_6;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06b4f020;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(param_6,*(long *)puVar2,1);
LAB_06b4f020:
    uVar7 = (*(code *)*puVar8)(param_6,puVar8[1]);
    if ((uVar7 & 1) != 0) {
      lVar12 = *param_6;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto LAB_06b4f080;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(param_6,*(long *)puVar2,5);
LAB_06b4f080:
      uVar7 = (*(code *)*puVar8)(param_6,alStack_1e0[0],puVar8[1]);
      puVar3 = PTR_DAT_0782ff68;
      if ((uVar7 & 1) != 0) {
        param_1 = alStack_1e0[0];
        if (lVar15 != 0) {
          uVar17 = *(undefined8 *)(lVar15 + 0x58);
          lVar12 = *(long *)PTR_DAT_0782ff68;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar12 = *(long *)puVar3;
          }
          lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
          if (lVar14 == 0) {
            if (*(int *)(lVar12 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar12 = *(long *)puVar3;
            }
            uVar16 = **(undefined8 **)(lVar12 + 0xb8);
            lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e538);
            func_0x053569b8(lVar14,uVar16,*(undefined8 *)PTR_DAT_0782ff70,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar9 = lVar14;
            func_0x032809c4(plVar9,lVar14);
          }
          lVar12 = func_0x03d50a94(uVar17,lVar14,*(undefined8 *)PTR_DAT_0777e518);
          lVar14 = *(long *)puVar3;
          param_1 = *(long *)(lVar15 + 0x50);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            func_0x03280b8c(lVar14);
            lVar14 = *(long *)puVar3;
          }
          lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
          if (lVar15 == 0) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              func_0x03280b8c(lVar14);
              lVar14 = *(long *)puVar3;
            }
            uVar17 = **(undefined8 **)(lVar14 + 0xb8);
            lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e540);
            func_0x053569b8(lVar15,uVar17,*(undefined8 *)PTR_DAT_0782ff78,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *plVar9 = lVar15;
            func_0x032809c4(plVar9,lVar15);
          }
          uVar17 = func_0x03d50a94(param_1,lVar15,*(undefined8 *)PTR_DAT_0777e520);
          uVar17 = func_0x03d6049c(lVar12,uVar17,*(undefined8 *)PTR_DAT_0777e528);
          uVar17 = func_0x03d3c654(uVar17,*(undefined8 *)PTR_DAT_07774a48);
          lVar14 = func_0x03d5ffd0(uVar17,*(undefined8 *)PTR_DAT_0774ea58);
          lVar15 = lVar12;
          if ((plVar11 != (long *)0x0) &&
             (plVar9 = (long *)plVar11[2], lVar15 = lVar14, plVar9 != (long *)0x0)) {
            param_1 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            lVar12 = *param_6;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto LAB_06b4f27c;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)func_0x03256b10(param_6,*(long *)puVar2,2);
LAB_06b4f27c:
            uVar6 = (*(code *)*puVar8)(param_6,puVar8[1]);
            puVar2 = PTR_DAT_0777a498;
            if (param_5 != (long *)0x0) {
              lVar12 = *param_5;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
                    goto LAB_06b4f2e8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)func_0x03256b10(param_5,*(long *)PTR_DAT_0777a498,0xf);
LAB_06b4f2e8:
              plVar9 = (long *)(*(code *)*puVar8)(param_5,param_1,uVar6,puVar8[1]);
              if (plVar9 == (long *)0x0) {
                return plVar11;
              }
              lVar12 = *plVar11;
              bVar5 = *(byte *)(*(long *)PTR_DAT_0777e530 + 0x130);
              if ((*(byte *)(lVar12 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)PTR_DAT_0777e530)) {
                bVar5 = *(byte *)(*(long *)PTR_DAT_0777e550 + 0x130);
                if ((*(byte *)(lVar12 + 0x130) < bVar5) ||
                   (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar5 * 8 + -8) !=
                    *(long *)PTR_DAT_0777e550)) {
                  plVar10 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e4e8);
                  func_0x06b29aa4(plVar10,0);
                }
                else {
                  plVar10 = (long *)func_0x03280ca0();
                  func_0x06b29a84(plVar10,0);
                  param_6 = (long *)0x0;
                  if (plVar10 == (long *)0x0) goto LAB_06b4f578;
                  *(undefined4 *)((long)plVar10 + 0x24) = *(undefined4 *)((long)plVar11 + 0x24);
                  *(char *)(plVar10 + 5) = (char)plVar11[5];
                  *(undefined1 *)((long)plVar10 + 0x29) = *(undefined1 *)((long)plVar11 + 0x29);
                }
              }
              else {
                plVar10 = (long *)func_0x03280ca0();
                func_0x06b29a94(plVar10,0);
                param_6 = (long *)0x0;
                if (plVar10 == (long *)0x0) goto LAB_06b4f578;
                *(undefined4 *)((long)plVar10 + 0x24) = *(undefined4 *)((long)plVar11 + 0x24);
              }
              puVar3 = PTR_DAT_07779820;
              lVar12 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_06b4f44c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07779820,0);
LAB_06b4f44c:
              uVar17 = (*(code *)*puVar8)(plVar9,puVar8[1]);
              lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e4f0);
              func_0x06104718(lVar12,uVar17,0);
              param_6 = (long *)0x0;
              if (plVar10 != (long *)0x0) {
                plVar10[2] = lVar12;
                func_0x032809c4(plVar10 + 2,lVar12);
                *(undefined1 *)((long)plVar10 + 0x21) = *(undefined1 *)((long)plVar11 + 0x21);
                *(char *)(plVar10 + 4) = (char)plVar11[4];
                lVar15 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_06b4f4f4;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar3,0);
LAB_06b4f4f4:
                uVar17 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                lVar15 = *param_5;
                uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                      puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 0x21) * 0x10 + 0x138);
                      goto LAB_06b4f554;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)func_0x03256b10(param_5,*(long *)puVar2,0x21);
LAB_06b4f554:
                bVar5 = (*(code *)*puVar8)(param_5,lVar14,uVar17,param_1,puVar8[1]);
                *(byte *)((long)plVar10 + 0x22) = bVar5 & 1;
                return plVar10;
              }
            }
          }
        }
LAB_06b4f578:
        auVar18 = func_0x03280cac();
        plVar10 = auVar18._0_8_;
        uStack_200 = 0x6b4f57c;
        plVar9 = plVar10;
        plStack_1f8 = param_6;
        plStack_1f0 = plVar11;
        plStack_1e8 = param_5;
        if ((bRam0000000007e2a5ad & 1) == 0) {
          plVar9 = (long *)func_0x03280a18(PTR_DAT_0782ff38);
          bRam0000000007e2a5ad = 1;
        }
        if (0 < *(int *)((long)plVar10 + 0x34)) {
          *(int *)((long)plVar10 + 0x34) = *(int *)((long)plVar10 + 0x34) + -1;
          *(int *)(plVar10 + 7) = (int)plVar10[7] + 1;
          *(int *)((long)plVar10 + 0x44) = *(int *)((long)plVar10 + 0x44) + 1;
          func_0x072ce970(auStack_2a0,plVar10,0x50);
          if (auVar18._8_8_ == 0) {
            func_0x03280cac();
            puVar4 = PTR_DAT_0782ff88;
            puVar3 = PTR_DAT_0782ff80;
            puVar2 = PTR_DAT_0774e478;
            uStack_2d0 = 0x6b4f628;
            uStack_2b8 = 0x7e2a000;
            lStack_2c8 = param_1;
            lStack_2c0 = lVar15;
            auStack_2b0 = auVar18;
            if ((bRam0000000007e2a5af & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e478);
              func_0x03280a18(PTR_DAT_0782ff88);
              func_0x03280a18(PTR_DAT_0782ff80);
              bRam0000000007e2a5af = 1;
            }
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_2d8 = 0;
            uVar17 = func_0x03280afc(*(undefined8 *)puVar2,0xb11);
            func_0x056b2284(uVar17,*(undefined8 *)puVar3,0);
            uStack_2f0 = uVar17;
            func_0x032809c4(&uStack_2f0,uVar17);
            uVar17 = func_0x03280afc(*(undefined8 *)puVar2,0x87d);
            func_0x056b2284(uVar17,*(undefined8 *)puVar4,0);
            uStack_2e8 = uVar17;
            plVar11 = (long *)func_0x032809c4(&uStack_2e8,uVar17);
            uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
            extraout_x8[1] = uStack_2e8;
            *extraout_x8 = uStack_2f0;
            extraout_x8[3] = uStack_2d8;
            extraout_x8[2] = 0x1e0000001e;
            return plVar11;
          }
          uVar17 = *(undefined8 *)PTR_DAT_0782ff38;
          func_0x072ce970(auStack_250,auStack_2a0,0x50);
          plVar9 = (long *)func_0x03d1dcc8(auVar18._8_8_,auStack_250,uVar17);
        }
        return plVar9;
      }
    }
  }
  return plVar11;
}


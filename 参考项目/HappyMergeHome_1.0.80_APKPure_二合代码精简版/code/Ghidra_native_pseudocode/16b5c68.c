
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016c5c68(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  int *piStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(iRam016c6680 + 0x16c5c88);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam016c6684 + 0x16c5c9c));
    func_0x01438628(*(undefined4 *)(iRam016c6688 + 0x16c5ca8));
    func_0x01438628(*(undefined4 *)(iRam016c668c + 0x16c5cb4));
    func_0x01438628(*(undefined4 *)(iRam016c6690 + 0x16c5cc0));
    func_0x01438628(*(undefined4 *)(iRam016c6694 + 0x16c5ccc));
    func_0x01438628(*(undefined4 *)(iRam016c6698 + 0x16c5cd8));
    func_0x01438628(*(undefined4 *)(iRam016c669c + 0x16c5ce4));
    func_0x01438628(*(undefined4 *)(iRam016c66a0 + 0x16c5cf0));
    func_0x01438628(*(undefined4 *)(iRam016c66a4 + 0x16c5cfc));
    func_0x01438628(*(undefined4 *)(iRam016c66a8 + 0x16c5d08));
    func_0x01438628(*(undefined4 *)(iRam016c66ac + 0x16c5d14));
    func_0x01438628(*(undefined4 *)(iRam016c66b0 + 0x16c5d20));
    func_0x01438628(*(undefined4 *)(iRam016c66b4 + 0x16c5d2c));
    func_0x01438628(*(undefined4 *)(iRam016c66b8 + 0x16c5d38));
    func_0x01438628(*(undefined4 *)(iRam016c66bc + 0x16c5d44));
    func_0x01438628(*(undefined4 *)(iRam016c66c0 + 0x16c5d50));
    func_0x01438628(*(undefined4 *)(iRam016c66c4 + 0x16c5d5c));
    func_0x01438628(*(undefined4 *)(iRam016c66c8 + 0x16c5d68));
    func_0x01438628(*(undefined4 *)(iRam016c66cc + 0x16c5d74));
    func_0x01438628(*(undefined4 *)(iRam016c66d0 + 0x16c5d80));
    func_0x01438628(*(undefined4 *)(iRam016c66d4 + 0x16c5d8c));
    func_0x01438628(*(undefined4 *)(iRam016c66d8 + 0x16c5d98));
    func_0x01438628(*(undefined4 *)(iRam016c66dc + 0x16c5da4));
    func_0x01438628(*(undefined4 *)(iRam016c66e0 + 0x16c5db0));
    func_0x01438628(*(undefined4 *)(iRam016c66e4 + 0x16c5dbc));
    func_0x01438628(*(undefined4 *)(iRam016c66e8 + 0x16c5dc8));
    func_0x01438628(*(undefined4 *)(iRam016c66ec + 0x16c5dd4));
    func_0x01438628(*(undefined4 *)(iRam016c66f0 + 0x16c5de0));
    func_0x01438628(*(undefined4 *)(iRam016c66f4 + 0x16c5dec));
    *pcVar7 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar1 = func_0x02953fd4(0x894d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam016c66f8 + 0x16c5e60));
    func_0x016c76c4(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar8 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_016c3638(param_1);
    if (iVar1 <= iVar8) {
      piVar11 = *(int **)(iRam016c66fc + 0x16c5eb8);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar14 = *(undefined4 **)(iRam016c6700 + 0x16c5ed4);
      iVar1 = func_0x014e9518(*puVar14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar13 = *(int **)(iRam016c6704 + 0x16c5ef4);
      iVar8 = *(int *)(iVar1 + 0x3c);
      iVar1 = *piVar13;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar13;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar9 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar13;
        }
        uVar12 = **(undefined4 **)(iVar1 + 0x5c);
        iVar9 = func_0x014388d4(**(undefined4 **)(iRam016c6708 + 0x16c5f44));
        func_0x024f0614(iVar9,uVar12,**(undefined4 **)(iRam016c670c + 0x16c5f64),0);
        piVar2 = (int *)(*(int *)(*piVar13 + 0x5c) + 8);
        *piVar2 = iVar9;
        func_0x014385cc(piVar2,iVar9);
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x024f0618(iVar8,iVar9,**(undefined4 **)(iRam016c6710 + 0x16c5fa0));
      iVar1 = 0;
      if (iVar8 != 0) {
        iVar9 = func_0x014388d4(**(undefined4 **)(iRam016c6714 + 0x16c5fc0));
        func_0x024eed9c(iVar9,**(undefined4 **)(iRam016c6718 + 0x16c5fd4));
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar10 = *(int *)(iVar1 + 0x40);
        iVar1 = 0;
        puVar15 = *(undefined4 **)(iRam016c671c + 0x16c602c);
        puVar14 = *(undefined4 **)(iRam016c6720 + 0x16c6034);
        iStack_50 = iVar8;
        while( true ) {
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = iStack_54;
          if (*(int *)(iVar10 + 0xc) <= iVar1) break;
          piVar13 = *(int **)(iVar8 + 0x14);
          iVar3 = func_0x0152983c(iVar10,iVar1,*puVar15);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar12 = *(undefined4 *)(iVar3 + 8);
          if (piVar13 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(piVar13,uVar12,*puVar14);
          if (iVar3 != 0) {
            piVar13 = (int *)func_0x0152983c(iVar10,iVar1,*puVar15);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar9 + 8);
            uVar17 = *(uint *)(iVar9 + 0xc);
            piVar11 = *(int **)(iRam016c6724 + 0x16c60dc);
            *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
            iVar3 = *piVar11;
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (uVar17 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar9 + 0xc) = uVar17 + 1;
              puVar14 = (undefined4 *)(iVar8 + uVar17 * 4 + 0x10);
              *puVar14 = piVar13;
              func_0x014385cc(puVar14,piVar13);
            }
            else {
              func_0x0152874c(iVar9,piVar13,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            puVar14 = *(undefined4 **)(iRam016c6728 + 0x16c613c);
            iVar8 = iStack_50;
          }
          iVar1 = iVar1 + 1;
        }
        if (iStack_54 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar3 + 8);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar10 = iStack_54;
        iVar1 = *(int *)(iVar9 + 0xc);
        if (iVar8 < iVar1) {
          iVar1 = func_0x0152983c(iVar9,*(undefined4 *)(iStack_54 + 8),*puVar15);
          piVar11 = (int *)(iVar10 + 0xc);
          *piVar11 = iVar1;
          func_0x014385cc(piVar11,iVar1);
          iVar1 = 0;
          if (*piVar11 != 0) {
            iVar1 = *(int *)(*piVar11 + 0x14);
            if (iVar1 == 2) {
              if (*(int *)(**(int **)(iRam016c675c + 0x16c6540) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x0202346c(0);
              iVar8 = *piVar11;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar8 + 8);
              uVar12 = func_0x01524ffc(&uStack_4c,0);
              iVar8 = *piVar11;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              piVar13 = *(int **)(iVar8 + 0x10);
              if (piVar13 == (int *)0x0) {
                func_0x014388e4();
              }
              uVar4 = (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_88 = 0;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_78 = 0;
              uStack_98 = 0;
              uStack_94 = 0;
              uStack_90 = 0;
              func_0x020257a4(iVar1,0x2da,uVar12,uVar4);
              if (*(int *)(**(int **)(iRam016c6760 + 0x16c660c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam016c6764 + 0x16c6628));
              iVar8 = *piVar11;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar12 = *(undefined4 *)(iVar8 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar12,**(undefined4 **)(iRam016c6768 + 0x16c6664),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam016c672c + 0x16c61bc));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam016c6730 + 0x16c61d0));
              iVar8 = 0;
              puVar15 = *(undefined4 **)(iRam016c6734 + 0x16c61e8);
              while( true ) {
                iVar9 = *piVar11;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0xc);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar9 + 0xc) <= iVar8) break;
                iVar9 = *piVar11;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0xc);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar12 = func_0x024f0530(iVar9,iVar8,*puVar15);
                iVar9 = *piVar11;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0x10);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar9,iVar8,*puVar15);
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam016c6738 + 0x16c6288));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar12,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar3 = *(int *)(iVar1 + 8);
                piVar13 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam016c673c + 0x16c62d8);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar9 = *piVar2;
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (piVar13 < *(int **)(iVar3 + 0xc)) {
                  *(int *)(iVar1 + 0xc) = (int)piVar13 + 1;
                  puVar14 = (undefined4 *)(iVar3 + (int)piVar13 * 4 + 0x10);
                  *puVar14 = uVar5;
                  func_0x014385cc(puVar14,uVar5);
                }
                else {
                  func_0x0152874c(iVar1,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                }
                iVar8 = iVar8 + 1;
                puVar14 = puVar15;
              }
              if (*(int *)(**(int **)(iRam016c6740 + 0x16c633c) + 0x74) == 0) {
                func_0x014387a4();
              }
              puVar6 = (undefined1 *)func_0x0202346c(0);
              iVar3 = *piVar11;
              iVar9 = iVar3;
              if (iVar3 == 0) {
                func_0x014388e4();
                iVar9 = *piVar11;
                bVar20 = iVar9 == 0;
                if (bVar20) {
                  uVar12 = 0x16c6680;
                  uVar21 = func_0x014388e4();
                  puStack_a8 = puVar6;
                  if (bVar20) {
                    puStack_a8 = puVar6 + 0x8e4;
                    *puVar6 = (char)puVar14;
                    uVar21 = CONCAT44(*(undefined4 *)((int)DWORD_ARRAY_0001c034 + iVar10 + 0xb20),
                                      *(undefined4 *)((int)DWORD_ARRAY_0001d034 + iVar10 + 0x86c));
                    uVar12 = puVar14[0x5b6];
                  }
                  pcVar7 = (char *)(_UNK_016c6868 + 0x16c6780);
                  piStack_a4 = puVar15;
                  iStack_a0 = iVar1;
                  uStack_9c = uVar12;
                  if (*pcVar7 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_016c686c + 0x16c6794),
                                    (int)((ulonglong)uVar21 >> 0x20));
                    *pcVar7 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x8951,0);
                  if (iVar1 != 0) {
                    iVar1 = func_0x029540a4(0x8951,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    puStack_ac = piStack_a4;
                    puStack_b0 = puStack_a8;
                    uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    puStack_a8 = (undefined1 *)iVar3;
                    piStack_a4 = piVar13;
                    iStack_a0 = iVar8;
                    func_0x024f56c0(&uStack_e0,0,0);
                    uStack_c8 = uStack_e0;
                    uStack_c4 = uStack_dc;
                    uStack_c0 = uStack_d8;
                    uStack_bc = uStack_d4;
                    uStack_b8 = uStack_d0;
                    if (*(int *)(iVar1 + 0x10) != 0) {
                      func_0x01523a6c(&uStack_c8,*(int *)(iVar1 + 0x10),0);
                    }
                    func_0x01523a6c(&uStack_c8,(int)uVar21,0);
                    iVar8 = *(int *)(iVar1 + 8);
                    uVar12 = *(undefined4 *)(iVar1 + 0xc);
                    iVar1 = *(int *)(iVar1 + 0x10);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = 2;
                    if (iVar1 == 0) {
                      uVar4 = 1;
                    }
                    func_0x024f56d0(iVar8,uVar12,&uStack_c8,uVar4,0,0);
                    iVar1 = func_0x024f56e0(&uStack_c8,0,0);
                    return iVar1;
                  }
                  piVar11 = *(int **)(_UNK_016c6870 + 0x16c67ec);
                  if (*(int *)(*piVar11 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x016af738();
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x016b11ec(iVar1);
                  if (iVar1 == 0) {
                    return 0;
                  }
                  if (*(int *)(*piVar11 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar8 = func_0x016af738();
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  func_0x016b1a00(iVar8,iVar1);
                  return 1;
                }
              }
              uVar12 = *(undefined4 *)(iVar9 + 0x10);
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              if (puVar6 == (undefined1 *)0x0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(puVar6,uVar4,uVar12,0x74);
              func_0x02028d38(&uStack_48,0xd9,0);
              iVar8 = *piVar11;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar8 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_016c36a4(uStack_58);
              if (*(int *)(**(int **)(iRam016c6744 + 0x16c6404) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam016c6748 + 0x16c6420));
              if (*(int *)(**(int **)(iRam016c674c + 0x16c6434) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x014e9518(**(undefined4 **)(iRam016c6750 + 0x16c6450));
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar4 = uStack_44;
              uVar12 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar19 = puStack_60[2];
              uVar16 = puStack_60[3];
              uVar18 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar8 + 0x10);
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam016c6754 + 0x16c64a4));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam016c6758 + 0x16c64c8),0);
              if (iStack_50 == 0) {
                func_0x014388e4();
              }
              uStack_90 = uStack_64;
              uStack_8c = uStack_68;
              uStack_7c = puStack_5c;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_98 = uVar12;
              uStack_94 = uVar4;
              uStack_88 = uVar19;
              uStack_84 = uVar16;
              uStack_80 = uVar18;
              uStack_78 = uVar5;
              iVar1 = func_0x02b75870(iStack_50,iVar1,uStack_58,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x894d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}


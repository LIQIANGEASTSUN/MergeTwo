
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0168b744(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 extraout_r3;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  bool bVar22;
  int in_stack_00020eec;
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
  
  puVar21 = &uStack_98;
  pcVar6 = (char *)(iRam0168c124 + 0x168b764);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0168c128 + 0x168b778));
    func_0x01438628(*(undefined4 *)(iRam0168c12c + 0x168b784));
    func_0x01438628(*(undefined4 *)(iRam0168c130 + 0x168b790));
    func_0x01438628(*(undefined4 *)(iRam0168c134 + 0x168b79c));
    func_0x01438628(*(undefined4 *)(iRam0168c138 + 0x168b7a8));
    func_0x01438628(*(undefined4 *)(iRam0168c13c + 0x168b7b4));
    func_0x01438628(*(undefined4 *)(iRam0168c140 + 0x168b7c0));
    func_0x01438628(*(undefined4 *)(iRam0168c144 + 0x168b7cc));
    func_0x01438628(*(undefined4 *)(iRam0168c148 + 0x168b7d8));
    func_0x01438628(*(undefined4 *)(iRam0168c14c + 0x168b7e4));
    func_0x01438628(*(undefined4 *)(iRam0168c150 + 0x168b7f0));
    func_0x01438628(*(undefined4 *)(iRam0168c154 + 0x168b7fc));
    func_0x01438628(*(undefined4 *)(iRam0168c158 + 0x168b808));
    func_0x01438628(*(undefined4 *)(iRam0168c15c + 0x168b814));
    func_0x01438628(*(undefined4 *)(iRam0168c160 + 0x168b820));
    func_0x01438628(*(undefined4 *)(iRam0168c164 + 0x168b82c));
    func_0x01438628(*(undefined4 *)(iRam0168c168 + 0x168b838));
    func_0x01438628(*(undefined4 *)(iRam0168c16c + 0x168b844));
    func_0x01438628(*(undefined4 *)(iRam0168c170 + 0x168b850));
    func_0x01438628(*(undefined4 *)(iRam0168c174 + 0x168b85c));
    func_0x01438628(*(undefined4 *)(iRam0168c178 + 0x168b868));
    func_0x01438628(*(undefined4 *)(iRam0168c17c + 0x168b874));
    func_0x01438628(*(undefined4 *)(iRam0168c180 + 0x168b880));
    func_0x01438628(*(undefined4 *)(iRam0168c184 + 0x168b88c));
    func_0x01438628(*(undefined4 *)(iRam0168c188 + 0x168b898));
    func_0x01438628(*(undefined4 *)(iRam0168c18c + 0x168b8a4));
    func_0x01438628(*(undefined4 *)(iRam0168c190 + 0x168b8b0));
    func_0x01438628(*(undefined4 *)(iRam0168c194 + 0x168b8bc));
    func_0x01438628(*(undefined4 *)(iRam0168c198 + 0x168b8c8));
    *pcVar6 = '\x01';
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
  iVar1 = func_0x02953fd4(0x87be,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0168c19c + 0x168b93c));
    func_0x0168d708(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar7 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_01689480(param_1);
    if (iVar1 <= iVar7) {
      piVar10 = *(int **)(iRam0168c1a0 + 0x168b994);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(iRam0168c1a4 + 0x168b9b0);
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(iRam0168c1a8 + 0x168b9d0);
      iVar7 = *(int *)(iVar1 + 0x30);
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar12;
      }
      iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar8 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar1 + 0x5c);
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam0168c1ac + 0x168ba20));
        func_0x024f0614(iVar8,uVar11,**(undefined4 **)(iRam0168c1b0 + 0x168ba40),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
        *piVar2 = iVar8;
        func_0x014385cc(piVar2,iVar8);
      }
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x024f0618(iVar7,iVar8,**(undefined4 **)(iRam0168c1b4 + 0x168ba7c));
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(iRam0168c1b8 + 0x168ba9c));
        func_0x024eed9c(iVar8,**(undefined4 **)(iRam0168c1bc + 0x168bab0));
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar13);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar9 = *(int *)(iVar1 + 0x34);
        iVar1 = 0;
        puVar13 = *(undefined4 **)(iRam0168c1c0 + 0x168bb08);
        puVar17 = *(undefined4 **)(iRam0168c1c4 + 0x168bb10);
        iStack_50 = iVar7;
        while( true ) {
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar3 = iStack_54;
          if (*(int *)(iVar9 + 0xc) <= iVar1) break;
          piVar12 = *(int **)(iVar7 + 0x14);
          iVar3 = func_0x0152983c(iVar9,iVar1,*puVar13);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(undefined4 *)(iVar3 + 8);
          if (piVar12 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(piVar12,uVar11,*puVar17);
          if (iVar3 != 0) {
            piVar12 = (int *)func_0x0152983c(iVar9,iVar1,*puVar13);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar8 + 8);
            uVar18 = *(uint *)(iVar8 + 0xc);
            piVar10 = *(int **)(iRam0168c1c8 + 0x168bbb8);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar3 = *piVar10;
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (uVar18 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(iVar8 + 0xc) = uVar18 + 1;
              puVar17 = (undefined4 *)(iVar7 + uVar18 * 4 + 0x10);
              *puVar17 = piVar12;
              func_0x014385cc(puVar17,piVar12);
            }
            else {
              func_0x0152874c(iVar8,piVar12,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            puVar17 = *(undefined4 **)(iRam0168c1cc + 0x168bc18);
            iVar7 = iStack_50;
          }
          iVar1 = iVar1 + 1;
        }
        if (iStack_54 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar3 + 8);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar9 = iStack_54;
        iVar1 = *(int *)(iVar8 + 0xc);
        if (iVar7 < iVar1) {
          iVar1 = func_0x0152983c(iVar8,*(undefined4 *)(iStack_54 + 8),*puVar13);
          piVar10 = (int *)(iVar9 + 0xc);
          *piVar10 = iVar1;
          func_0x014385cc(piVar10,iVar1);
          iVar1 = 0;
          if (*piVar10 != 0) {
            iVar1 = *(int *)(*piVar10 + 0x14);
            if (iVar1 == 2) {
              if (*(int *)(**(int **)(iRam0168c200 + 0x168c01c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x0202346c(0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 0x18);
              uVar11 = func_0x01524ffc(&uStack_4c,0);
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
              func_0x020257a4(iVar1,0x32d,uVar11,0);
              if (*(int *)(**(int **)(iRam0168c204 + 0x168c0b0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam0168c208 + 0x168c0cc));
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar11,**(undefined4 **)(iRam0168c20c + 0x168c108),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam0168c1d0 + 0x168bc98));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam0168c1d4 + 0x168bcac));
              puVar14 = (undefined1 *)0x0;
              puVar13 = *(undefined4 **)(iRam0168c1d8 + 0x168bcc4);
              while( true ) {
                iVar7 = *piVar10;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0xc);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar7 + 0xc) <= (int)puVar14) break;
                iVar7 = *piVar10;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0xc);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uVar11 = func_0x024f0530(iVar7,puVar14,*puVar13);
                iVar7 = *piVar10;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0x10);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar7,puVar14,*puVar13);
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam0168c1dc + 0x168bd64));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar11,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar1 + 8);
                piVar12 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam0168c1e0 + 0x168bdb4);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar7 = *piVar2;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (piVar12 < *(int **)(iVar8 + 0xc)) {
                  *(int *)(iVar1 + 0xc) = (int)piVar12 + 1;
                  puVar17 = (undefined4 *)(iVar8 + (int)piVar12 * 4 + 0x10);
                  *puVar17 = uVar5;
                  func_0x014385cc(puVar17,uVar5);
                }
                else {
                  func_0x0152874c(iVar1,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                }
                puVar14 = puVar14 + 1;
              }
              if (*(int *)(**(int **)(iRam0168c1e4 + 0x168be18) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x0202346c(0);
              iVar9 = *piVar10;
              iVar7 = iVar9;
              if (iVar9 == 0) {
                func_0x014388e4();
                iVar7 = *piVar10;
                bVar22 = iVar7 == 0;
                if (bVar22) {
                  uVar11 = func_0x014388e4();
                  puVar16 = puVar14;
                  if (bVar22) {
                    puVar16 = puVar14 + 0xcc1;
                    *puVar14 = extraout_r3;
                    puVar21 = (undefined4 *)&stack0x00023734;
                    iVar1 = in_stack_00020eec;
                  }
                  *(undefined4 *)((int)puVar21 + -4) = 0x168c124;
                  *(int *)((int)puVar21 + -8) = iVar1;
                  *(undefined4 **)((int)puVar21 + -0xc) = puVar13;
                  piVar10 = (int *)((int)puVar21 + -0x10);
                  *piVar10 = iVar8;
                  pcVar6 = (char *)(_UNK_0168c30c + 0x168c224);
                  if (*pcVar6 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_0168c310 + 0x168c238));
                    *pcVar6 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x87c1,0);
                  if (iVar1 == 0) {
                    piVar10 = *(int **)(_UNK_0168c314 + 0x168c290);
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = FUN_01676670();
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = FUN_01678260(iVar1);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    if (*(int *)(*piVar10 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar7 = FUN_01676670();
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    FUN_016788c4(iVar7,iVar1);
                    return 1;
                  }
                  iVar1 = func_0x029540a4(0x87c1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = *piVar10;
                  uVar4 = *(undefined4 *)((int)puVar21 + -0xc);
                  *(undefined4 *)((int)puVar21 + -4) = *(undefined4 *)((int)puVar21 + -4);
                  *(undefined1 **)((int)puVar21 + -8) = puVar16;
                  *(int **)((int)puVar21 + -0xc) = piVar12;
                  *piVar10 = 0;
                  *(undefined4 *)((int)puVar21 + -0x14) = uVar4;
                  *(int *)((int)puVar21 + -0x18) = iVar7;
                  *(undefined4 *)((int)puVar21 + -0x30) = 0;
                  *(undefined4 *)((int)puVar21 + -0x2c) =
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  *(undefined4 *)((int)puVar21 + -0x28) =
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  *(undefined4 *)((int)puVar21 + -0x24) =
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  *(undefined4 *)((int)puVar21 + -0x20) = 0;
                  func_0x024f56c0((undefined4 *)((int)puVar21 + -0x48),0,0);
                  iVar7 = *(int *)(iVar1 + 0x10);
                  *(undefined4 *)((int)puVar21 + -0x30) = *(undefined4 *)((int)puVar21 + -0x48);
                  *(undefined4 *)((int)puVar21 + -0x2c) = *(undefined4 *)((int)puVar21 + -0x44);
                  *(undefined4 *)((int)puVar21 + -0x28) = *(undefined4 *)((int)puVar21 + -0x40);
                  *(undefined4 *)((int)puVar21 + -0x24) = *(undefined4 *)((int)puVar21 + -0x3c);
                  *(undefined4 *)((int)puVar21 + -0x20) = *(undefined4 *)((int)puVar21 + -0x38);
                  if (iVar7 != 0) {
                    func_0x01523a6c((undefined1 *)((int)puVar21 + -0x30),iVar7,0);
                  }
                  func_0x01523a6c((undefined1 *)((int)puVar21 + -0x30),uVar11,0);
                  iVar7 = *(int *)(iVar1 + 8);
                  uVar11 = *(undefined4 *)(iVar1 + 0xc);
                  iVar1 = *(int *)(iVar1 + 0x10);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = 2;
                  if (iVar1 == 0) {
                    uVar4 = 1;
                  }
                  *(undefined4 *)((int)puVar21 + -0x50) = 0;
                  *(undefined4 *)((int)puVar21 + -0x4c) = 0;
                  func_0x024f56d0(iVar7,uVar11,(undefined1 *)((int)puVar21 + -0x30),uVar4);
                  iVar1 = func_0x024f56e0((undefined1 *)((int)puVar21 + -0x30),0,0);
                  return iVar1;
                }
              }
              uVar11 = *(undefined4 *)(iVar7 + 0x10);
              uVar4 = *(undefined4 *)(iVar9 + 0xc);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar8,uVar4,uVar11,0x80);
              func_0x02028d38(&uStack_48,0x114,0);
              iVar7 = *piVar10;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_016894ec(uStack_58);
              if (*(int *)(**(int **)(iRam0168c1e8 + 0x168bee0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam0168c1ec + 0x168befc));
              if (*(int *)(**(int **)(iRam0168c1f0 + 0x168bf10) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x014e9518(**(undefined4 **)(iRam0168c1f4 + 0x168bf2c));
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar4 = uStack_44;
              uVar11 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar20 = puStack_60[2];
              uVar15 = puStack_60[3];
              uVar19 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar7 + 0x10);
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam0168c1f8 + 0x168bf80));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam0168c1fc + 0x168bfa4),0);
              if (iStack_50 == 0) {
                func_0x014388e4();
              }
              uStack_90 = uStack_64;
              uStack_8c = uStack_68;
              uStack_7c = puStack_5c;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_98 = uVar11;
              uStack_94 = uVar4;
              uStack_88 = uVar20;
              uStack_84 = uVar15;
              uStack_80 = uVar19;
              uStack_78 = uVar5;
              iVar1 = func_0x02b75870(iStack_50,iVar1,uStack_58,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x87be,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}


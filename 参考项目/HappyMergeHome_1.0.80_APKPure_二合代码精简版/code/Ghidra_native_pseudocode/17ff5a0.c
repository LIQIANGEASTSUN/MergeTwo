
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0180f5a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
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
  int iStack_b0;
  undefined4 *puStack_ac;
  int iStack_a8;
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
  
  pcVar7 = (char *)(iRam0180ffb8 + 0x180f5c0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0180ffbc + 0x180f5d4));
    func_0x01438628(*(undefined4 *)(iRam0180ffc0 + 0x180f5e0));
    func_0x01438628(*(undefined4 *)(iRam0180ffc4 + 0x180f5ec));
    func_0x01438628(*(undefined4 *)(iRam0180ffc8 + 0x180f5f8));
    func_0x01438628(*(undefined4 *)(iRam0180ffcc + 0x180f604));
    func_0x01438628(*(undefined4 *)(iRam0180ffd0 + 0x180f610));
    func_0x01438628(*(undefined4 *)(iRam0180ffd4 + 0x180f61c));
    func_0x01438628(*(undefined4 *)(iRam0180ffd8 + 0x180f628));
    func_0x01438628(*(undefined4 *)(iRam0180ffdc + 0x180f634));
    func_0x01438628(*(undefined4 *)(iRam0180ffe0 + 0x180f640));
    func_0x01438628(*(undefined4 *)(iRam0180ffe4 + 0x180f64c));
    func_0x01438628(*(undefined4 *)(iRam0180ffe8 + 0x180f658));
    func_0x01438628(*(undefined4 *)(iRam0180ffec + 0x180f664));
    func_0x01438628(*(undefined4 *)(iRam0180fff0 + 0x180f670));
    func_0x01438628(*(undefined4 *)(iRam0180fff4 + 0x180f67c));
    func_0x01438628(*(undefined4 *)(iRam0180fff8 + 0x180f688));
    func_0x01438628(*(undefined4 *)(iRam0180fffc + 0x180f694));
    func_0x01438628(*(undefined4 *)(iRam01810000 + 0x180f6a0));
    func_0x01438628(*(undefined4 *)(iRam01810004 + 0x180f6ac));
    func_0x01438628(*(undefined4 *)(iRam01810008 + 0x180f6b8));
    func_0x01438628(*(undefined4 *)(iRam0181000c + 0x180f6c4));
    func_0x01438628(*(undefined4 *)(iRam01810010 + 0x180f6d0));
    func_0x01438628(*(undefined4 *)(iRam01810014 + 0x180f6dc));
    func_0x01438628(*(undefined4 *)(iRam01810018 + 0x180f6e8));
    func_0x01438628(*(undefined4 *)(iRam0181001c + 0x180f6f4));
    func_0x01438628(*(undefined4 *)(iRam01810020 + 0x180f700));
    func_0x01438628(*(undefined4 *)(iRam01810024 + 0x180f70c));
    func_0x01438628(*(undefined4 *)(iRam01810028 + 0x180f718));
    func_0x01438628(*(undefined4 *)(iRam0181002c + 0x180f724));
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
  iVar1 = func_0x02953fd4(0x90ef,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01810030 + 0x180f798));
    func_0x0181170c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    iStack_54 = iVar1;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_1);
    iVar8 = *(int *)(iVar1 + 8);
    uStack_58 = param_1;
    iVar1 = FUN_0180d70c(param_1);
    if (iVar1 <= iVar8) {
      piVar11 = *(int **)(iRam01810034 + 0x180f7f0);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar14 = *(undefined4 **)(iRam01810038 + 0x180f80c);
      iVar1 = func_0x014e9518(*puVar14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar13 = *(int **)(iRam0181003c + 0x180f82c);
      iVar8 = *(int *)(iVar1 + 0x34);
      iVar1 = *piVar13;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar13;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar9 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar13;
        }
        uVar12 = **(undefined4 **)(iVar1 + 0x5c);
        iVar9 = func_0x014388d4(**(undefined4 **)(iRam01810040 + 0x180f87c));
        func_0x024f0614(iVar9,uVar12,**(undefined4 **)(iRam01810044 + 0x180f89c),0);
        piVar2 = (int *)(*(int *)(*piVar13 + 0x5c) + 4);
        *piVar2 = iVar9;
        func_0x014385cc(piVar2,iVar9);
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x024f0618(iVar8,iVar9,**(undefined4 **)(iRam01810048 + 0x180f8d8));
      iVar1 = 0;
      if (iVar8 != 0) {
        iVar9 = func_0x014388d4(**(undefined4 **)(iRam0181004c + 0x180f8f8));
        func_0x024eed9c(iVar9,**(undefined4 **)(iRam01810050 + 0x180f90c));
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puStack_60 = &uStack_40;
        puStack_5c = &uStack_30;
        iVar10 = *(int *)(iVar1 + 0x38);
        iVar1 = 0;
        puVar14 = *(undefined4 **)(iRam01810054 + 0x180f964);
        puVar16 = *(undefined4 **)(iRam01810058 + 0x180f96c);
        iStack_50 = iVar8;
        while( true ) {
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = iStack_54;
          if (*(int *)(iVar10 + 0xc) <= iVar1) break;
          piVar13 = *(int **)(iVar8 + 0x14);
          iVar3 = func_0x0152983c(iVar10,iVar1,*puVar14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar12 = *(undefined4 *)(iVar3 + 8);
          if (piVar13 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(piVar13,uVar12,*puVar16);
          if (iVar3 != 0) {
            piVar13 = (int *)func_0x0152983c(iVar10,iVar1,*puVar14);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar9 + 8);
            uVar17 = *(uint *)(iVar9 + 0xc);
            piVar11 = *(int **)(iRam0181005c + 0x180fa14);
            *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
            iVar3 = *piVar11;
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (uVar17 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar9 + 0xc) = uVar17 + 1;
              puVar16 = (undefined4 *)(iVar8 + uVar17 * 4 + 0x10);
              *puVar16 = piVar13;
              func_0x014385cc(puVar16,piVar13);
            }
            else {
              func_0x0152874c(iVar9,piVar13,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            puVar16 = *(undefined4 **)(iRam01810060 + 0x180fa74);
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
          iVar1 = func_0x0152983c(iVar9,*(undefined4 *)(iStack_54 + 8),*puVar14);
          piVar11 = (int *)(iVar10 + 0xc);
          *piVar11 = iVar1;
          func_0x014385cc(piVar11,iVar1);
          iVar1 = 0;
          if (*piVar11 != 0) {
            iVar1 = *(int *)(*piVar11 + 0x14);
            if (iVar1 == 2) {
              if (*(int *)(**(int **)(iRam01810094 + 0x180fe78) + 0x74) == 0) {
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
              func_0x020257a4(iVar1,0x220,uVar12,uVar4);
              if (*(int *)(**(int **)(iRam01810098 + 0x180ff44) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(iRam0181009c + 0x180ff60));
              iVar8 = *piVar11;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar12 = *(undefined4 *)(iVar8 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              iVar1 = func_0x02aac608(iVar1,uVar12,**(undefined4 **)(iRam018100a0 + 0x180ff9c),0);
            }
            else if (iVar1 == 1) {
              iVar1 = func_0x014388d4(**(undefined4 **)(iRam01810064 + 0x180faf4));
              func_0x024eed9c(iVar1,**(undefined4 **)(iRam01810068 + 0x180fb08));
              iVar8 = 0;
              puVar14 = *(undefined4 **)(iRam0181006c + 0x180fb20);
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
                uVar12 = func_0x024f0530(iVar9,iVar8,*puVar14);
                iVar9 = *piVar11;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = *(int *)(iVar9 + 0x10);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar9,iVar8,*puVar14);
                uVar5 = func_0x014388d4(**(undefined4 **)(iRam01810070 + 0x180fbc0));
                uStack_98 = 0;
                func_0x02ca3c70(uVar5,uVar12,uVar4,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar10 = *(int *)(iVar1 + 8);
                piVar13 = *(int **)(iVar1 + 0xc);
                piVar2 = *(int **)(iRam01810074 + 0x180fc10);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar9 = *piVar2;
                if (iVar10 == 0) {
                  func_0x014388e4();
                }
                if (piVar13 < *(int **)(iVar10 + 0xc)) {
                  *(int *)(iVar1 + 0xc) = (int)piVar13 + 1;
                  puVar16 = (undefined4 *)(iVar10 + (int)piVar13 * 4 + 0x10);
                  *puVar16 = uVar5;
                  func_0x014385cc(puVar16,uVar5);
                }
                else {
                  func_0x0152874c(iVar1,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                }
                iVar8 = iVar8 + 1;
              }
              if (*(int *)(**(int **)(iRam01810078 + 0x180fc74) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar10 = func_0x0202346c(0);
              iVar3 = *piVar11;
              iVar9 = iVar3;
              if (iVar3 == 0) {
                func_0x014388e4();
                iVar9 = *piVar11;
                bVar20 = iVar9 == 0;
                if (bVar20) {
                  pbVar6 = (byte *)func_0x014388e4();
                  if (bVar20) {
                    pbVar6 = (byte *)(uint)*pbVar6;
                    *puVar14 = puVar14 + 0x2f6;
                    puVar14[0x2f6] = piVar13;
                    puVar14[0x38b] = iVar8;
                    puVar14[0x3b1] = iVar1;
                    puVar14[0x3b8] = iVar8;
                    puVar14[0x42b] = iVar1;
                    puVar14[0x42d] = piVar13;
                    puVar14[0x50b] = piVar11;
                    puVar14[0x908] = piVar11;
                    puVar14[0xd03] = 0;
                    puVar14[0x1036] = 0;
                    puVar14[0x1367] = piVar11;
                    puVar14[0x175a] = piVar11;
                    puVar14[0x1b4b] = piVar13;
                    puVar14[0x1c15] = piVar11;
                    puVar14[0x1fb0] = piVar13;
                    puVar14[0x1ff6] = iVar8;
                    puVar14[0x206a] = piVar13;
                    puVar14[0x20ad] = iVar8;
                    puVar14[0x211c] = piVar11;
                    puVar14[0x24a9] = piVar11;
                    puVar14[0x2883] = piVar13;
                    puVar14[0x2c71] = iVar8;
                    puVar14[0x2cd5] = iVar8;
                    puVar14[0x2d37] = piVar11;
                    puVar14[0x3106] = piVar11;
                    puVar14[0x34d3] = piVar11;
                    puVar14[0x389e] = piVar11;
                    puVar14[0x3c5c] = puVar14 + 0x3f3e;
                    puVar14[0x3f3e] = piVar11;
                    puVar14[0x42e6] = piVar11;
                    puVar14[0x4625] = piVar11;
                    puVar14[0x495c] = piVar11;
                    puVar14[0x4cd5] = piVar11;
                    puVar14[0x5041] = piVar11;
                    puVar14[0x53a6] = piVar11;
                    puVar14[0x56f6] = piVar11;
                    puVar14[0x5a42] = piVar11;
                    puVar14[0x5d86] = piVar11;
                    puVar14[0x60b6] = piVar13;
                    puVar14[0x644f] = piVar11;
                    puVar14[0x674f] = piVar13;
                    puVar14[0x6aa6] = 0;
                    puVar14[0x6e4f] = 0;
                    puVar14[0x71f2] = 0;
                    puVar14[0x73ee] = piVar13;
                    puVar14[0x76a0] = piVar13;
                    puVar14[0x793d] = 0;
                    puVar14[0x7c2d] = piVar13;
                    puVar14[0x7efa] = piVar13;
                    puVar14[0x81bf] = piVar13;
                    puVar14[0x847e] = piVar13;
                    puVar14[0x8735] = puVar14 + 0x8829;
                    puVar14[0x8829] = piVar11;
                    puVar14[0x8a36] = 0;
                    puVar14[0x8ca5] = 0;
                    puVar16 = puVar14 + 0x90cf;
                    puVar14[0x8ebf] = 0;
                    puVar14 = puVar14 + 0x9193;
                    *puVar16 = puVar14;
                  }
                  uStack_9c = 0x180ffb8;
                  pcVar7 = (char *)(_UNK_018101a0 + 0x18100b8);
                  iStack_a8 = iVar10;
                  piStack_a4 = puVar14;
                  iStack_a0 = iVar1;
                  if (*pcVar7 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_018101a4 + 0x18100cc));
                    *pcVar7 = '\x01';
                  }
                  iVar1 = func_0x02953fd4(0x90f3,0);
                  if (iVar1 != 0) {
                    iVar1 = func_0x029540a4(0x90f3,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    puStack_ac = piStack_a4;
                    iStack_b0 = iStack_a8;
                    uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    iStack_a8 = iVar3;
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
                    func_0x01523a6c(&uStack_c8,pbVar6,0);
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
                  piVar11 = *(int **)(_UNK_018101a8 + 0x1810124);
                  if (*(int *)(*piVar11 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = FUN_017faff8();
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = FUN_017fcaac(iVar1);
                  if (iVar1 == 0) {
                    return 0;
                  }
                  if (*(int *)(*piVar11 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar8 = FUN_017faff8();
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  FUN_017fd2f4(iVar8,iVar1);
                  return 1;
                }
              }
              uVar12 = *(undefined4 *)(iVar9 + 0x10);
              uVar4 = *(undefined4 *)(iVar3 + 0xc);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              uStack_98 = 0;
              func_0x02025168(iVar10,uVar4,uVar12,0x46);
              func_0x02028d38(&uStack_48,0x69,0);
              iVar8 = *piVar11;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar8 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_0180d778(uStack_58);
              if (*(int *)(**(int **)(iRam0181007c + 0x180fd3c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iStack_50 = func_0x014e96a8(**(undefined4 **)(iRam01810080 + 0x180fd58));
              if (*(int *)(**(int **)(iRam01810084 + 0x180fd6c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x014e9518(**(undefined4 **)(iRam01810088 + 0x180fd88));
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar4 = uStack_44;
              uVar12 = uStack_48;
              uStack_64 = *puStack_60;
              uStack_68 = puStack_60[1];
              uVar19 = puStack_60[2];
              uVar15 = puStack_60[3];
              uVar18 = *puStack_5c;
              puStack_5c = (undefined4 *)puStack_5c[1];
              uStack_58 = *(undefined4 *)(iVar8 + 0x10);
              uVar5 = func_0x014388d4(**(undefined4 **)(iRam0181008c + 0x180fddc));
              func_0x0152e3ec(uVar5,iStack_54,**(undefined4 **)(iRam01810090 + 0x180fe00),0);
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
              uStack_84 = uVar15;
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
    iVar1 = func_0x029540a4(0x90ef,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}


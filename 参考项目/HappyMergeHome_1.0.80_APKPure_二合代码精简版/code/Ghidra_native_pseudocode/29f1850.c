
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a01850(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02a01da0 + 0x2a01868);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a01da4 + 0x2a0187c));
    func_0x01438628(*(undefined4 *)(_UNK_02a01da8 + 0x2a01888));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dac + 0x2a01894));
    func_0x01438628(*(undefined4 *)(_UNK_02a01db0 + 0x2a018a0));
    func_0x01438628(*(undefined4 *)(_UNK_02a01db4 + 0x2a018ac));
    func_0x01438628(*(undefined4 *)(_UNK_02a01db8 + 0x2a018b8));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dbc + 0x2a018c4));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dc0 + 0x2a018d0));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dc4 + 0x2a018dc));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dc8 + 0x2a018e8));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dcc + 0x2a018f4));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dd0 + 0x2a01900));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dd4 + 0x2a0190c));
    func_0x01438628(*(undefined4 *)(_UNK_02a01dd8 + 0x2a01918));
    func_0x01438628(*(undefined4 *)(_UNK_02a01ddc + 0x2a01924));
    func_0x01438628(*(undefined4 *)(_UNK_02a01de0 + 0x2a01930));
    func_0x01438628(*(undefined4 *)(_UNK_02a01de4 + 0x2a0193c));
    func_0x01438628(*(undefined4 *)(_UNK_02a01de8 + 0x2a01948));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2515,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2515,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    uVar8 = func_0x024f56f0(&uStack_30,0,0);
    return uVar8;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02a01dec + 0x2a019a4));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  func_0x014385cc((undefined4 *)(iVar1 + 8),param_1);
  iVar7 = FUN_029fcfe8(param_1);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar7 + 0x3c) == 0) {
    iVar7 = FUN_029fcfe8(param_1);
    if (*(int *)(**(int **)(_UNK_02a01df0 + 0x2a01a0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02a01df4 + 0x2a01a28));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar2 + 0x1c);
    if (*(int *)(**(int **)(_UNK_02a01df8 + 0x2a01a48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0364a714(uVar8,0,**(undefined4 **)(_UNK_02a01dfc + 0x2a01a6c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar2 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    FUN_0269ebb0(iVar7,uVar8,0);
  }
  if (*(int *)(**(int **)(_UNK_02a01e00 + 0x2a01ab0) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02a01e04 + 0x2a01acc);
  iVar7 = func_0x014e9518(*puVar9);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x1c);
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02a01e08 + 0x2a01aec));
  func_0x03a062d0(uVar8,iVar1,**(undefined4 **)(_UNK_02a01e0c + 0x2a01b0c),0);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x024f0618(iVar7,uVar8,**(undefined4 **)(_UNK_02a01e10 + 0x2a01b30));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar7 + 0xc);
  iVar7 = FUN_029fcfe8(param_1);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar7 + 0x30);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  puVar11 = *(undefined4 **)(_UNK_02a01e14 + 0x2a01b88);
  uVar8 = func_0x024f0530(iVar2,uVar8,*puVar11);
  uVar5 = *puVar9;
  *(undefined4 *)(iVar1 + 0xc) = uVar8;
  iVar7 = func_0x014e9518(uVar5);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x18);
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02a01e18 + 0x2a01bb8));
  iVar2 = 0;
  func_0x03a062d0(uVar8,iVar1,**(undefined4 **)(_UNK_02a01e1c + 0x2a01bdc),0);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0618(iVar7,uVar8,**(undefined4 **)(_UNK_02a01e20 + 0x2a01c00));
  piVar3 = (int *)func_0x014388d4(**(undefined4 **)(_UNK_02a01e24 + 0x2a01c18));
  func_0x024f0510(piVar3,**(undefined4 **)(_UNK_02a01e28 + 0x2a01c2c));
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar7 + 0xc) <= iVar2) break;
    iVar7 = *(int *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x024f0530(iVar7,iVar2,*puVar11);
    iVar7 = FUN_02a001e4(param_1,uVar8);
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar1 + 0xc);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024f0530(iVar7,iVar2,*puVar11);
      if (piVar3 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar7 = piVar3[2];
      uVar12 = piVar3[3];
      piVar4 = *(int **)(_UNK_02a01e2c + 0x2a01ce0);
      piVar3[4] = piVar3[4] + 1;
      iVar10 = *piVar4;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (uVar12 < *(uint *)(iVar7 + 0xc)) {
        piVar3[3] = uVar12 + 1;
        *(undefined4 *)(iVar7 + uVar12 * 4 + 0x10) = uVar8;
      }
      else {
        func_0x024f0520(piVar3,uVar8,
                        *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
      puVar11 = *(undefined4 **)(_UNK_02a01e30 + 0x2a01d30);
    }
    iVar2 = iVar2 + 1;
  }
  if (piVar3 == (int *)0x0) {
    func_0x014388e4();
  }
  if (piVar3[3] < 1) {
    func_0x024f1618(piVar3,*(undefined4 *)(iVar1 + 0xc),**(undefined4 **)(_UNK_02a01e34 + 0x2a01d58)
                   );
  }
  if (*(int *)(**(int **)(_UNK_02a01e38 + 0x2a01d70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = **(int **)(_UNK_02a01e3c + 0x2a01d90);
  iVar1 = 0;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x024f83f8(iVar7);
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x024f83fc(iVar2);
    }
    iVar10 = *piVar3;
    uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar12 != 0) {
      piVar4 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar2) {
          puVar9 = (undefined4 *)(iVar10 + *piVar4 * 8 + 0xc0);
          goto LAB_0364a3e4;
        }
        uVar12 = uVar12 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar2,0);
LAB_0364a3e4:
    iVar2 = (*(code *)*puVar9)(piVar3,puVar9[1]);
    if (0 < iVar2) {
      iVar2 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x024f83fc(iVar2);
      }
      iVar10 = *piVar3;
      uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar12 != 0) {
        piVar4 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar2) {
            puVar9 = (undefined4 *)(iVar10 + *piVar4 * 8 + 0xc0);
            goto LAB_0364a470;
          }
          uVar12 = uVar12 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar2,0);
LAB_0364a470:
      iVar2 = (*(code *)*puVar9)(piVar3,puVar9[1]);
      if (iVar2 == 1) {
        iVar1 = **(int **)(iVar7 + 0x1c);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x024f83fc(iVar1);
        }
        iVar7 = *piVar3;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar1) {
              puVar9 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
              goto LAB_0364a550;
            }
            uVar12 = uVar12 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar1,0);
LAB_0364a550:
        UNRECOVERED_JUMPTABLE = (code *)*puVar9;
        uVar8 = 0;
      }
      else {
        iVar2 = (*(int **)(iVar7 + 0x1c))[1];
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x024f83fc(iVar2);
        }
        iVar10 = *piVar3;
        uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar12 != 0) {
          piVar4 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar2) {
              puVar9 = (undefined4 *)(iVar10 + *piVar4 * 8 + 0xc0);
              goto LAB_0364a568;
            }
            uVar12 = uVar12 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar2,0);
LAB_0364a568:
        iVar2 = (*(code *)*puVar9)(piVar3,puVar9[1]);
        if (iVar2 < 1) {
          iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          iVar2 = *piVar3;
          uVar12 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar12 != 0) {
            piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar4[-1] == iVar1) {
                puVar9 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xc0);
                goto LAB_0364a5ec;
              }
              uVar12 = uVar12 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar1,0);
LAB_0364a5ec:
          iVar1 = (*(code *)*puVar9)(piVar3,puVar9[1]);
          iVar1 = iVar1 + -1;
        }
        iVar2 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x024f83fc(iVar2);
        }
        iVar10 = *piVar3;
        uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar12 != 0) {
          piVar4 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar2) {
              puVar9 = (undefined4 *)(iVar10 + *piVar4 * 8 + 0xc0);
              goto LAB_0364a66c;
            }
            uVar12 = uVar12 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar2,0);
LAB_0364a66c:
        uVar8 = (*(code *)*puVar9)(piVar3,puVar9[1]);
        uVar8 = func_0x024f14b8(iVar1,uVar8,0);
        iVar1 = **(int **)(iVar7 + 0x1c);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x024f83fc(iVar1);
        }
        iVar7 = *piVar3;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar1) {
              puVar9 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
              goto LAB_0364a6fc;
            }
            uVar12 = uVar12 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined4 *)func_0x024f8424(piVar3,iVar1,0);
LAB_0364a6fc:
        UNRECOVERED_JUMPTABLE = (code *)*puVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x0364a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*UNRECOVERED_JUMPTABLE)(piVar3,uVar8,puVar9[1]);
      return uVar8;
    }
  }
  return 0;
}


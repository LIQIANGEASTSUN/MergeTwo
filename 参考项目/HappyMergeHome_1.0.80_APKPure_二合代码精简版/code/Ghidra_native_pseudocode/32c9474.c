
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032d9474(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x02953fd4(0x8349,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x8349,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return uVar1;
  }
  pcVar6 = (char *)(_UNK_032d9d90 + 0x32d9530);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d9d94 + 0x32d9544));
    func_0x01438628(*(undefined4 *)(_UNK_032d9d98 + 0x32d9550));
    func_0x01438628(*(undefined4 *)(_UNK_032d9d9c + 0x32d955c));
    func_0x01438628(*(undefined4 *)(_UNK_032d9da0 + 0x32d9568));
    func_0x01438628(*(undefined4 *)(_UNK_032d9da4 + 0x32d9574));
    func_0x01438628(*(undefined4 *)(_UNK_032d9da8 + 0x32d9580));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dac + 0x32d958c));
    func_0x01438628(*(undefined4 *)(_UNK_032d9db0 + 0x32d9598));
    func_0x01438628(*(undefined4 *)(_UNK_032d9db4 + 0x32d95a4));
    func_0x01438628(*(undefined4 *)(_UNK_032d9db8 + 0x32d95b0));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dbc + 0x32d95bc));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dc0 + 0x32d95c8));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dc4 + 0x32d95d4));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dc8 + 0x32d95e0));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dcc + 0x32d95ec));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dd0 + 0x32d95f8));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dd4 + 0x32d9604));
    func_0x01438628(*(undefined4 *)(_UNK_032d9dd8 + 0x32d9610));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x17fa,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x17fa,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  piVar8 = *(int **)(_UNK_032d9ddc + 0x32d966c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_032d9de0 + 0x32d9688);
  iVar2 = func_0x04e4a028(*puVar9);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar2 + 0x10) == '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x38) != 0 || *(int *)(iVar2 + 0x3c) != 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_032d9de4 + 0x32d96b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x032da32c();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_032d63b0(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_032d9dfc + 0x32d9ae4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032d9e00 + 0x32d9b00));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_032d9e04 + 0x32d9b24);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x32c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_032d9e08 + 0x32d9b54));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032d9e0c + 0x32d9b6c));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_032d9e10 + 0x32d9b84));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_032d9e14 + 0x32d9bb4);
        puVar11 = *(undefined4 **)(_UNK_032d9e18 + 0x32d9bbc);
        do {
          if (*(int *)(**(int **)(_UNK_032d9e1c + 0x32d9bc4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032d9e20 + 0x32d9be0));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x32c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_032d9e24 + 0x32d9c60) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x032d9e60(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              func_0x026cf058(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_032d9e28 + 0x32d9cc0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032d9e2c + 0x32d9cdc));
              piVar8 = *(int **)(_UNK_032d9e30 + 0x32d9cf0);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x844);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_032d9e34 + 0x32d9d3c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024eec50(uVar7,0,0);
              uVar12 = 1;
              if (iVar5 != 0) {
                return 0;
              }
            }
          }
          uVar1 = uVar1 - 1;
          if (0x7fffffff < uVar1) {
            return uVar12;
          }
        } while( true );
      }
    }
    else {
      iVar2 = FUN_032d63b0(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_032d9e38 + 0x32d9904) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_032d9e3c + 0x32d9920);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_032d9e40 + 0x32d9944);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x32c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_032d9e44 + 0x32d9974));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032d9e48 + 0x32d998c));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_032d9e4c + 0x32d99a4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_032d9e50 + 0x32d99d0);
      puVar14 = *(undefined4 **)(_UNK_032d9e54 + 0x32d99d8);
      do {
        if (*(int *)(**(int **)(_UNK_032d9e58 + 0x32d99e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x036c7bec(iVar5,*puVar15);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x32c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_032d9e5c + 0x32d9a74) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x032d9e60(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            func_0x026cf058(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_032d9de8 + 0x32d96f0);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_032d9dec + 0x32d970c);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_032d9df0 + 0x32d9720);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x844);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_032d9df4 + 0x32d9768);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024ef144(uVar7,0,0);
  if (iVar5 != 0) {
    return 1;
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(*puVar9);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x844);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_032d9df8 + 0x32d97dc),1);
  if (piVar8 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20));
  if (iVar3 == 0) {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar8[3] == 0) {
    func_0x014388e8();
  }
  piVar8[4] = iVar2;
  func_0x014385cc(piVar8 + 4,iVar2);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0c90c(iVar5,uVar7,piVar8,0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = func_0x024eec50(uVar7,0,0);
  return uVar1 ^ 1;
}


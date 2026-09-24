
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_031bc57c(undefined4 param_1)

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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_031bcdf4 + 0x31bc594);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031bcdf8 + 0x31bc5a8));
    func_0x01438628(*(undefined4 *)(_UNK_031bcdfc + 0x31bc5b4));
    func_0x01438628(*(undefined4 *)(_UNK_031bce00 + 0x31bc5c0));
    func_0x01438628(*(undefined4 *)(_UNK_031bce04 + 0x31bc5cc));
    func_0x01438628(*(undefined4 *)(_UNK_031bce08 + 0x31bc5d8));
    func_0x01438628(*(undefined4 *)(_UNK_031bce0c + 0x31bc5e4));
    func_0x01438628(*(undefined4 *)(_UNK_031bce10 + 0x31bc5f0));
    func_0x01438628(*(undefined4 *)(_UNK_031bce14 + 0x31bc5fc));
    func_0x01438628(*(undefined4 *)(_UNK_031bce18 + 0x31bc608));
    func_0x01438628(*(undefined4 *)(_UNK_031bce1c + 0x31bc614));
    func_0x01438628(*(undefined4 *)(_UNK_031bce20 + 0x31bc620));
    func_0x01438628(*(undefined4 *)(_UNK_031bce24 + 0x31bc62c));
    func_0x01438628(*(undefined4 *)(_UNK_031bce28 + 0x31bc638));
    func_0x01438628(*(undefined4 *)(_UNK_031bce2c + 0x31bc644));
    func_0x01438628(*(undefined4 *)(_UNK_031bce30 + 0x31bc650));
    func_0x01438628(*(undefined4 *)(_UNK_031bce34 + 0x31bc65c));
    func_0x01438628(*(undefined4 *)(_UNK_031bce38 + 0x31bc668));
    func_0x01438628(*(undefined4 *)(_UNK_031bce3c + 0x31bc674));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1794,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1794,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
  piVar8 = *(int **)(_UNK_031bce40 + 0x31bc6d0);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_031bce44 + 0x31bc6ec);
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
  if (*(int *)(**(int **)(_UNK_031bce48 + 0x31bc718) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x031bd390();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_031b9814(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_031bce60 + 0x31bcb48) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031bce64 + 0x31bcb64));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_031bce68 + 0x31bcb88);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x308);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_031bce6c + 0x31bcbb8));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031bce70 + 0x31bcbd0));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_031bce74 + 0x31bcbe8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_031bce78 + 0x31bcc18);
        puVar11 = *(undefined4 **)(_UNK_031bce7c + 0x31bcc20);
        do {
          if (*(int *)(**(int **)(_UNK_031bce80 + 0x31bcc28) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_031bce84 + 0x31bcc44));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x308);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_031bce88 + 0x31bccc4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x031bcec4(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              func_0x026f0f08(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_031bce8c + 0x31bcd24) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_031bce90 + 0x31bcd40));
              piVar8 = *(int **)(_UNK_031bce94 + 0x31bcd54);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x7ac);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_031bce98 + 0x31bcda0) + 0x74) == 0) {
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
      iVar2 = FUN_031b9814(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_031bce9c + 0x31bc968) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_031bcea0 + 0x31bc984);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_031bcea4 + 0x31bc9a8);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x308);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_031bcea8 + 0x31bc9d8));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031bceac + 0x31bc9f0));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_031bceb0 + 0x31bca08));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_031bceb4 + 0x31bca34);
      puVar14 = *(undefined4 **)(_UNK_031bceb8 + 0x31bca3c);
      do {
        if (*(int *)(**(int **)(_UNK_031bcebc + 0x31bca44) + 0x74) == 0) {
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
        iVar5 = *(int *)(iVar5 + 0x308);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_031bcec0 + 0x31bcad8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x031bcec4(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            func_0x026f0f08(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_031bce4c + 0x31bc754);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_031bce50 + 0x31bc770);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_031bce54 + 0x31bc784);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x7ac);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_031bce58 + 0x31bc7cc);
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
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x7ac);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_031bce5c + 0x31bc840),1);
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


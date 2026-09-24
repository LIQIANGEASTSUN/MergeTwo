
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_030d7594(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_030d7e0c + 0x30d75ac);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d7e10 + 0x30d75c0));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e14 + 0x30d75cc));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e18 + 0x30d75d8));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e1c + 0x30d75e4));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e20 + 0x30d75f0));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e24 + 0x30d75fc));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e28 + 0x30d7608));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e2c + 0x30d7614));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e30 + 0x30d7620));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e34 + 0x30d762c));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e38 + 0x30d7638));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e3c + 0x30d7644));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e40 + 0x30d7650));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e44 + 0x30d765c));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e48 + 0x30d7668));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e4c + 0x30d7674));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e50 + 0x30d7680));
    func_0x01438628(*(undefined4 *)(_UNK_030d7e54 + 0x30d768c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x153c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x153c,0);
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
  piVar8 = *(int **)(_UNK_030d7e58 + 0x30d76e8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_030d7e5c + 0x30d7704);
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
  if (*(int *)(**(int **)(_UNK_030d7e60 + 0x30d7730) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x030d83a8();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_030d4930(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_030d7e78 + 0x30d7b60) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030d7e7c + 0x30d7b7c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_030d7e80 + 0x30d7ba0);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x388);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_030d7e84 + 0x30d7bd0));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030d7e88 + 0x30d7be8));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_030d7e8c + 0x30d7c00));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_030d7e90 + 0x30d7c30);
        puVar11 = *(undefined4 **)(_UNK_030d7e94 + 0x30d7c38);
        do {
          if (*(int *)(**(int **)(_UNK_030d7e98 + 0x30d7c40) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_030d7e9c + 0x30d7c5c));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x388);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_030d7ea0 + 0x30d7cdc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x030d7edc(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              FUN_026ef7d8(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_030d7ea4 + 0x30d7d3c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_030d7ea8 + 0x30d7d58));
              piVar8 = *(int **)(_UNK_030d7eac + 0x30d7d6c);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x984);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_030d7eb0 + 0x30d7db8) + 0x74) == 0) {
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
      iVar2 = FUN_030d4930(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_030d7eb4 + 0x30d7980) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_030d7eb8 + 0x30d799c);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_030d7ebc + 0x30d79c0);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x388);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_030d7ec0 + 0x30d79f0));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030d7ec4 + 0x30d7a08));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_030d7ec8 + 0x30d7a20));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_030d7ecc + 0x30d7a4c);
      puVar14 = *(undefined4 **)(_UNK_030d7ed0 + 0x30d7a54);
      do {
        if (*(int *)(**(int **)(_UNK_030d7ed4 + 0x30d7a5c) + 0x74) == 0) {
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
        iVar5 = *(int *)(iVar5 + 0x388);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_030d7ed8 + 0x30d7af0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x030d7edc(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            FUN_026ef7d8(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_030d7e64 + 0x30d776c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_030d7e68 + 0x30d7788);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_030d7e6c + 0x30d779c);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x984);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_030d7e70 + 0x30d77e4);
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
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x984);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_030d7e74 + 0x30d7858),1);
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


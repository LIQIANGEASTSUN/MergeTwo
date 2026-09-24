
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032ab878(undefined4 param_1)

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
  
  iVar2 = func_0x02953fd4(0x8258,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x8258,0);
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
  pcVar6 = (char *)(_UNK_032ac194 + 0x32ab934);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032ac198 + 0x32ab948));
    func_0x01438628(*(undefined4 *)(_UNK_032ac19c + 0x32ab954));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1a0 + 0x32ab960));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1a4 + 0x32ab96c));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1a8 + 0x32ab978));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1ac + 0x32ab984));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1b0 + 0x32ab990));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1b4 + 0x32ab99c));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1b8 + 0x32ab9a8));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1bc + 0x32ab9b4));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1c0 + 0x32ab9c0));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1c4 + 0x32ab9cc));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1c8 + 0x32ab9d8));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1cc + 0x32ab9e4));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1d0 + 0x32ab9f0));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1d4 + 0x32ab9fc));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1d8 + 0x32aba08));
    func_0x01438628(*(undefined4 *)(_UNK_032ac1dc + 0x32aba14));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x138a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x138a,0);
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
  piVar8 = *(int **)(_UNK_032ac1e0 + 0x32aba70);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_032ac1e4 + 0x32aba8c);
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
  if (*(int *)(**(int **)(_UNK_032ac1e8 + 0x32abab8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x032ac730();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_032a8ec4(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_032ac200 + 0x32abee8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032ac204 + 0x32abf04));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_032ac208 + 0x32abf28);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 600);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_032ac20c + 0x32abf58));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032ac210 + 0x32abf70));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_032ac214 + 0x32abf88));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_032ac218 + 0x32abfb8);
        puVar11 = *(undefined4 **)(_UNK_032ac21c + 0x32abfc0);
        do {
          if (*(int *)(**(int **)(_UNK_032ac220 + 0x32abfc8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032ac224 + 0x32abfe4));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 600);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_032ac228 + 0x32ac064) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x032ac264(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              func_0x026ee768(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_032ac22c + 0x32ac0c4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032ac230 + 0x32ac0e0));
              piVar8 = *(int **)(_UNK_032ac234 + 0x32ac0f4);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6d0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_032ac238 + 0x32ac140) + 0x74) == 0) {
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
      iVar2 = FUN_032a8ec4(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_032ac23c + 0x32abd08) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_032ac240 + 0x32abd24);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_032ac244 + 0x32abd48);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 600);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_032ac248 + 0x32abd78));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032ac24c + 0x32abd90));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_032ac250 + 0x32abda8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_032ac254 + 0x32abdd4);
      puVar14 = *(undefined4 **)(_UNK_032ac258 + 0x32abddc);
      do {
        if (*(int *)(**(int **)(_UNK_032ac25c + 0x32abde4) + 0x74) == 0) {
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
        iVar5 = *(int *)(iVar5 + 600);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_032ac260 + 0x32abe78) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x032ac264(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            func_0x026ee768(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_032ac1ec + 0x32abaf4);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_032ac1f0 + 0x32abb10);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_032ac1f4 + 0x32abb24);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6d0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_032ac1f8 + 0x32abb6c);
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
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6d0);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_032ac1fc + 0x32abbe0),1);
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


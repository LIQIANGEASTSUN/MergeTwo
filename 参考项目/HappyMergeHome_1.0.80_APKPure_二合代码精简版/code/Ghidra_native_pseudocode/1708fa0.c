
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01718fa0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
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
  
  iVar1 = func_0x02953fd4(0x8b2a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8b2a,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uVar3 = func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return uVar3;
  }
  pcVar5 = (char *)(_UNK_017198bc + 0x171905c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017198c0 + 0x1719070));
    func_0x01438628(*(undefined4 *)(_UNK_017198c4 + 0x171907c));
    func_0x01438628(*(undefined4 *)(_UNK_017198c8 + 0x1719088));
    func_0x01438628(*(undefined4 *)(_UNK_017198cc + 0x1719094));
    func_0x01438628(*(undefined4 *)(_UNK_017198d0 + 0x17190a0));
    func_0x01438628(*(undefined4 *)(_UNK_017198d4 + 0x17190ac));
    func_0x01438628(*(undefined4 *)(_UNK_017198d8 + 0x17190b8));
    func_0x01438628(*(undefined4 *)(_UNK_017198dc + 0x17190c4));
    func_0x01438628(*(undefined4 *)(_UNK_017198e0 + 0x17190d0));
    func_0x01438628(*(undefined4 *)(_UNK_017198e4 + 0x17190dc));
    func_0x01438628(*(undefined4 *)(_UNK_017198e8 + 0x17190e8));
    func_0x01438628(*(undefined4 *)(_UNK_017198ec + 0x17190f4));
    func_0x01438628(*(undefined4 *)(_UNK_017198f0 + 0x1719100));
    func_0x01438628(*(undefined4 *)(_UNK_017198f4 + 0x171910c));
    func_0x01438628(*(undefined4 *)(_UNK_017198f8 + 0x1719118));
    func_0x01438628(*(undefined4 *)(_UNK_017198fc + 0x1719124));
    func_0x01438628(*(undefined4 *)(_UNK_01719900 + 0x1719130));
    func_0x01438628(*(undefined4 *)(_UNK_01719904 + 0x171913c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x164a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x164a,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar7 = *(int **)(_UNK_01719908 + 0x1719198);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0171990c + 0x17191b4);
  iVar1 = func_0x014e9518(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x10) == '\0') {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x38) != 0 || *(int *)(iVar1 + 0x3c) != 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_01719910 + 0x17191e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01719e58();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_017163e0(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01719928 + 0x1719610) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171992c + 0x171962c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_01719930 + 0x1719650);
      iVar1 = func_0x036c7bec(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3a0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01719934 + 0x1719680));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01719938 + 0x1719698));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_0171993c + 0x17196b0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_01719940 + 0x17196e0);
        puVar11 = *(undefined4 **)(_UNK_01719944 + 0x17196e8);
        do {
          if (*(int *)(**(int **)(_UNK_01719948 + 0x17196f0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0171994c + 0x171970c));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x036c7bec(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x3a0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_01719950 + 0x171978c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x0171998c(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026ef7d8(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_01719954 + 0x17197ec) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01719958 + 0x1719808));
              piVar7 = *(int **)(_UNK_0171995c + 0x171981c);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa74);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_01719960 + 0x1719868) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x024eec50(uVar8,0,0);
              uVar12 = 1;
              if (iVar6 != 0) {
                return 0;
              }
            }
          }
          uVar3 = uVar3 - 1;
          if (0x7fffffff < uVar3) {
            return uVar12;
          }
        } while( true );
      }
    }
    else {
      iVar1 = FUN_017163e0(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_01719964 + 0x1719430) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_01719968 + 0x171944c);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_0171996c + 0x1719470);
      iVar1 = func_0x036c7bec(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3a0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01719970 + 0x17194a0));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01719974 + 0x17194b8));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01719978 + 0x17194d0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_0171997c + 0x17194fc);
      puVar14 = *(undefined4 **)(_UNK_01719980 + 0x1719504);
      do {
        if (*(int *)(**(int **)(_UNK_01719984 + 0x171950c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x036c7bec(iVar6,*puVar15);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x3a0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_01719988 + 0x17195a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0171998c(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026ef7d8(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_01719914 + 0x171921c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01719918 + 0x1719238);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_0171991c + 0x171924c);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa74);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_01719920 + 0x1719294);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 != 0) {
    return 1;
  }
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(*puVar9);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa74);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01719924 + 0x1719308),1);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar7 + 0x20));
  if (iVar2 == 0) {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar7[3] == 0) {
    func_0x014388e8();
  }
  piVar7[4] = iVar1;
  func_0x014385cc(piVar7 + 4,iVar1);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0c90c(iVar6,uVar8,piVar7,0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar3 = func_0x024eec50(uVar8,0,0);
  return uVar3 ^ 1;
}


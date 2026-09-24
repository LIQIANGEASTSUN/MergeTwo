
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016f36d0(undefined4 param_1)

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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_016f3f48 + 0x16f36e8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f3f4c + 0x16f36fc));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f50 + 0x16f3708));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f54 + 0x16f3714));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f58 + 0x16f3720));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f5c + 0x16f372c));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f60 + 0x16f3738));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f64 + 0x16f3744));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f68 + 0x16f3750));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f6c + 0x16f375c));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f70 + 0x16f3768));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f74 + 0x16f3774));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f78 + 0x16f3780));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f7c + 0x16f378c));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f80 + 0x16f3798));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f84 + 0x16f37a4));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f88 + 0x16f37b0));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f8c + 0x16f37bc));
    func_0x01438628(*(undefined4 *)(_UNK_016f3f90 + 0x16f37c8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1860,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1860,0);
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
  piVar7 = *(int **)(_UNK_016f3f94 + 0x16f3824);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_016f3f98 + 0x16f3840);
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
  if (*(int *)(**(int **)(_UNK_016f3f9c + 0x16f386c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x016f44e4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_016f0b18(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_016f3fb4 + 0x16f3c9c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f3fb8 + 0x16f3cb8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_016f3fbc + 0x16f3cdc);
      iVar1 = func_0x036c7bec(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 700);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016f3fc0 + 0x16f3d0c));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f3fc4 + 0x16f3d24));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_016f3fc8 + 0x16f3d3c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_016f3fcc + 0x16f3d6c);
        puVar11 = *(undefined4 **)(_UNK_016f3fd0 + 0x16f3d74);
        do {
          if (*(int *)(**(int **)(_UNK_016f3fd4 + 0x16f3d7c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016f3fd8 + 0x16f3d98));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x036c7bec(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 700);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_016f3fdc + 0x16f3e18) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x016f4018(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026f1d50(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_016f3fe0 + 0x16f3e78) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016f3fe4 + 0x16f3e94));
              piVar7 = *(int **)(_UNK_016f3fe8 + 0x16f3ea8);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x718);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_016f3fec + 0x16f3ef4) + 0x74) == 0) {
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
      iVar1 = FUN_016f0b18(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_016f3ff0 + 0x16f3abc) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_016f3ff4 + 0x16f3ad8);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_016f3ff8 + 0x16f3afc);
      iVar1 = func_0x036c7bec(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 700);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016f3ffc + 0x16f3b2c));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f4000 + 0x16f3b44));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_016f4004 + 0x16f3b5c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_016f4008 + 0x16f3b88);
      puVar14 = *(undefined4 **)(_UNK_016f400c + 0x16f3b90);
      do {
        if (*(int *)(**(int **)(_UNK_016f4010 + 0x16f3b98) + 0x74) == 0) {
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
        iVar6 = *(int *)(iVar6 + 700);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_016f4014 + 0x16f3c2c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x016f4018(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026f1d50(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_016f3fa0 + 0x16f38a8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_016f3fa4 + 0x16f38c4);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_016f3fa8 + 0x16f38d8);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x718);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_016f3fac + 0x16f3920);
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
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x718);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016f3fb0 + 0x16f3994),1);
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


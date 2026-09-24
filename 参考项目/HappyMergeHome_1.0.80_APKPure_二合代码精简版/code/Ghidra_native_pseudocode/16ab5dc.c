
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016bb5dc(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_016bbe54 + 0x16bb5f4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bbe58 + 0x16bb608));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe5c + 0x16bb614));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe60 + 0x16bb620));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe64 + 0x16bb62c));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe68 + 0x16bb638));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe6c + 0x16bb644));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe70 + 0x16bb650));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe74 + 0x16bb65c));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe78 + 0x16bb668));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe7c + 0x16bb674));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe80 + 0x16bb680));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe84 + 0x16bb68c));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe88 + 0x16bb698));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe8c + 0x16bb6a4));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe90 + 0x16bb6b0));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe94 + 0x16bb6bc));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe98 + 0x16bb6c8));
    func_0x01438628(*(undefined4 *)(_UNK_016bbe9c + 0x16bb6d4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x182d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x182d,0);
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
  piVar7 = *(int **)(_UNK_016bbea0 + 0x16bb730);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_016bbea4 + 0x16bb74c);
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
  if (*(int *)(**(int **)(_UNK_016bbea8 + 0x16bb778) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x016bc3f0();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_016b8874(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_016bbec0 + 0x16bbba8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016bbec4 + 0x16bbbc4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_016bbec8 + 0x16bbbe8);
      iVar1 = func_0x024f04cc(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x35c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016bbecc + 0x16bbc18));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016bbed0 + 0x16bbc30));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_016bbed4 + 0x16bbc48));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_016bbed8 + 0x16bbc78);
        puVar11 = *(undefined4 **)(_UNK_016bbedc + 0x16bbc80);
        do {
          if (*(int *)(**(int **)(_UNK_016bbee0 + 0x16bbc88) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016bbee4 + 0x16bbca4));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04cc(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x35c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_016bbee8 + 0x16bbd24) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x016bbf24(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026cf058(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_016bbeec + 0x16bbd84) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016bbef0 + 0x16bbda0));
              piVar7 = *(int **)(_UNK_016bbef4 + 0x16bbdb4);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x894);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_016bbef8 + 0x16bbe00) + 0x74) == 0) {
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
      iVar1 = FUN_016b8874(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_016bbefc + 0x16bb9c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_016bbf00 + 0x16bb9e4);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_016bbf04 + 0x16bba08);
      iVar1 = func_0x024f04cc(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x35c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016bbf08 + 0x16bba38));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016bbf0c + 0x16bba50));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_016bbf10 + 0x16bba68));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_016bbf14 + 0x16bba94);
      puVar14 = *(undefined4 **)(_UNK_016bbf18 + 0x16bba9c);
      do {
        if (*(int *)(**(int **)(_UNK_016bbf1c + 0x16bbaa4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04cc(iVar6,*puVar15);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x35c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_016bbf20 + 0x16bbb38) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x016bbf24(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026cf058(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_016bbeac + 0x16bb7b4);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_016bbeb0 + 0x16bb7d0);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_016bbeb4 + 0x16bb7e4);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x894);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_016bbeb8 + 0x16bb82c);
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
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x894);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016bbebc + 0x16bb8a0),1);
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


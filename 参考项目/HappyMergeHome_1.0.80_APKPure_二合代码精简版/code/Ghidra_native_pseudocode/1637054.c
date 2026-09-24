
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01647054(undefined4 param_1)

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
  
  iVar1 = func_0x02953fd4(0x85ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x85ba,0);
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
  pcVar5 = (char *)(_UNK_01647970 + 0x1647110);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01647974 + 0x1647124));
    func_0x01438628(*(undefined4 *)(_UNK_01647978 + 0x1647130));
    func_0x01438628(*(undefined4 *)(_UNK_0164797c + 0x164713c));
    func_0x01438628(*(undefined4 *)(_UNK_01647980 + 0x1647148));
    func_0x01438628(*(undefined4 *)(_UNK_01647984 + 0x1647154));
    func_0x01438628(*(undefined4 *)(_UNK_01647988 + 0x1647160));
    func_0x01438628(*(undefined4 *)(_UNK_0164798c + 0x164716c));
    func_0x01438628(*(undefined4 *)(_UNK_01647990 + 0x1647178));
    func_0x01438628(*(undefined4 *)(_UNK_01647994 + 0x1647184));
    func_0x01438628(*(undefined4 *)(_UNK_01647998 + 0x1647190));
    func_0x01438628(*(undefined4 *)(_UNK_0164799c + 0x164719c));
    func_0x01438628(*(undefined4 *)(_UNK_016479a0 + 0x16471a8));
    func_0x01438628(*(undefined4 *)(_UNK_016479a4 + 0x16471b4));
    func_0x01438628(*(undefined4 *)(_UNK_016479a8 + 0x16471c0));
    func_0x01438628(*(undefined4 *)(_UNK_016479ac + 0x16471cc));
    func_0x01438628(*(undefined4 *)(_UNK_016479b0 + 0x16471d8));
    func_0x01438628(*(undefined4 *)(_UNK_016479b4 + 0x16471e4));
    func_0x01438628(*(undefined4 *)(_UNK_016479b8 + 0x16471f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x166e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x166e,0);
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
  piVar7 = *(int **)(_UNK_016479bc + 0x164724c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_016479c0 + 0x1647268);
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
  if (*(int *)(**(int **)(_UNK_016479c4 + 0x1647294) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01647f0c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_01644390(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_016479dc + 0x16476c4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016479e0 + 0x16476e0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_016479e4 + 0x1647704);
      iVar1 = func_0x024f04cc(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3a4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016479e8 + 0x1647734));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016479ec + 0x164774c));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_016479f0 + 0x1647764));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_016479f4 + 0x1647794);
        puVar11 = *(undefined4 **)(_UNK_016479f8 + 0x164779c);
        do {
          if (*(int *)(**(int **)(_UNK_016479fc + 0x16477a4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01647a00 + 0x16477c0));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04cc(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x3a4);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_01647a04 + 0x1647840) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x01647a40(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026cf058(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_01647a08 + 0x16478a0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01647a0c + 0x16478bc));
              piVar7 = *(int **)(_UNK_01647a10 + 0x16478d0);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa9c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_01647a14 + 0x164791c) + 0x74) == 0) {
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
      iVar1 = FUN_01644390(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_01647a18 + 0x16474e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_01647a1c + 0x1647500);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_01647a20 + 0x1647524);
      iVar1 = func_0x024f04cc(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3a4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01647a24 + 0x1647554));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01647a28 + 0x164756c));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01647a2c + 0x1647584));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_01647a30 + 0x16475b0);
      puVar14 = *(undefined4 **)(_UNK_01647a34 + 0x16475b8);
      do {
        if (*(int *)(**(int **)(_UNK_01647a38 + 0x16475c0) + 0x74) == 0) {
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
        iVar6 = *(int *)(iVar6 + 0x3a4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_01647a3c + 0x1647654) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x01647a40(iVar6);
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
  piVar7 = *(int **)(_UNK_016479c8 + 0x16472d0);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_016479cc + 0x16472ec);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_016479d0 + 0x1647300);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa9c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_016479d4 + 0x1647348);
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
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa9c);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016479d8 + 0x16473bc),1);
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


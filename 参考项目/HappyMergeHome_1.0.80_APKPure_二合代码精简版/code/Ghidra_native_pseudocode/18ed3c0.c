
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_018fd3c0(undefined4 param_1)

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
  
  iVar1 = func_0x02953fd4(0x9657,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9657,0);
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
  pcVar5 = (char *)(_UNK_018fdcdc + 0x18fd47c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fdce0 + 0x18fd490));
    func_0x01438628(*(undefined4 *)(_UNK_018fdce4 + 0x18fd49c));
    func_0x01438628(*(undefined4 *)(_UNK_018fdce8 + 0x18fd4a8));
    func_0x01438628(*(undefined4 *)(_UNK_018fdcec + 0x18fd4b4));
    func_0x01438628(*(undefined4 *)(_UNK_018fdcf0 + 0x18fd4c0));
    func_0x01438628(*(undefined4 *)(_UNK_018fdcf4 + 0x18fd4cc));
    func_0x01438628(*(undefined4 *)(_UNK_018fdcf8 + 0x18fd4d8));
    func_0x01438628(*(undefined4 *)(_UNK_018fdcfc + 0x18fd4e4));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd00 + 0x18fd4f0));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd04 + 0x18fd4fc));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd08 + 0x18fd508));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd0c + 0x18fd514));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd10 + 0x18fd520));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd14 + 0x18fd52c));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd18 + 0x18fd538));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd1c + 0x18fd544));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd20 + 0x18fd550));
    func_0x01438628(*(undefined4 *)(_UNK_018fdd24 + 0x18fd55c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13f4,0);
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
  piVar7 = *(int **)(_UNK_018fdd28 + 0x18fd5b8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_018fdd2c + 0x18fd5d4);
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
  if (*(int *)(**(int **)(_UNK_018fdd30 + 0x18fd600) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x018fe278();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_018faa04(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_018fdd48 + 0x18fda30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fdd4c + 0x18fda4c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_018fdd50 + 0x18fda70);
      iVar1 = func_0x036c7bec(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2b4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018fdd54 + 0x18fdaa0));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fdd58 + 0x18fdab8));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_018fdd5c + 0x18fdad0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_018fdd60 + 0x18fdb00);
        puVar11 = *(undefined4 **)(_UNK_018fdd64 + 0x18fdb08);
        do {
          if (*(int *)(**(int **)(_UNK_018fdd68 + 0x18fdb10) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_018fdd6c + 0x18fdb2c));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x036c7bec(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x2b4);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_018fdd70 + 0x18fdbac) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x018fddac(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026ee768(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_018fdd74 + 0x18fdc0c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_018fdd78 + 0x18fdc28));
              piVar7 = *(int **)(_UNK_018fdd7c + 0x18fdc3c);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x6f4);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_018fdd80 + 0x18fdc88) + 0x74) == 0) {
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
      iVar1 = FUN_018faa04(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_018fdd84 + 0x18fd850) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_018fdd88 + 0x18fd86c);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_018fdd8c + 0x18fd890);
      iVar1 = func_0x036c7bec(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2b4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018fdd90 + 0x18fd8c0));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fdd94 + 0x18fd8d8));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_018fdd98 + 0x18fd8f0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_018fdd9c + 0x18fd91c);
      puVar14 = *(undefined4 **)(_UNK_018fdda0 + 0x18fd924);
      do {
        if (*(int *)(**(int **)(_UNK_018fdda4 + 0x18fd92c) + 0x74) == 0) {
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
        iVar6 = *(int *)(iVar6 + 0x2b4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_018fdda8 + 0x18fd9c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x018fddac(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026ee768(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_018fdd34 + 0x18fd63c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_018fdd38 + 0x18fd658);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_018fdd3c + 0x18fd66c);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x6f4);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_018fdd40 + 0x18fd6b4);
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
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x6f4);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_018fdd44 + 0x18fd728),1);
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


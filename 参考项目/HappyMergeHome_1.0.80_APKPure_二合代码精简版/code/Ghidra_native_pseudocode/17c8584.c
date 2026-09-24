
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_017d8584(undefined4 param_1)

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
  
  iVar1 = func_0x02953fd4(0x8f7a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8f7a,0);
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
  pcVar5 = (char *)(_UNK_017d8ea0 + 0x17d8640);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d8ea4 + 0x17d8654));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ea8 + 0x17d8660));
    func_0x01438628(*(undefined4 *)(_UNK_017d8eac + 0x17d866c));
    func_0x01438628(*(undefined4 *)(_UNK_017d8eb0 + 0x17d8678));
    func_0x01438628(*(undefined4 *)(_UNK_017d8eb4 + 0x17d8684));
    func_0x01438628(*(undefined4 *)(_UNK_017d8eb8 + 0x17d8690));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ebc + 0x17d869c));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ec0 + 0x17d86a8));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ec4 + 0x17d86b4));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ec8 + 0x17d86c0));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ecc + 0x17d86cc));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ed0 + 0x17d86d8));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ed4 + 0x17d86e4));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ed8 + 0x17d86f0));
    func_0x01438628(*(undefined4 *)(_UNK_017d8edc + 0x17d86fc));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ee0 + 0x17d8708));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ee4 + 0x17d8714));
    func_0x01438628(*(undefined4 *)(_UNK_017d8ee8 + 0x17d8720));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1375,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1375,0);
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
  piVar7 = *(int **)(_UNK_017d8eec + 0x17d877c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_017d8ef0 + 0x17d8798);
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
  if (*(int *)(**(int **)(_UNK_017d8ef4 + 0x17d87c4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x017d943c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_017d5bc8(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_017d8f0c + 0x17d8bf4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d8f10 + 0x17d8c10));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_017d8f14 + 0x17d8c34);
      iVar1 = func_0x036c7bec(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x20c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017d8f18 + 0x17d8c64));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017d8f1c + 0x17d8c7c));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_017d8f20 + 0x17d8c94));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_017d8f24 + 0x17d8cc4);
        puVar11 = *(undefined4 **)(_UNK_017d8f28 + 0x17d8ccc);
        do {
          if (*(int *)(**(int **)(_UNK_017d8f2c + 0x17d8cd4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017d8f30 + 0x17d8cf0));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x036c7bec(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x20c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_017d8f34 + 0x17d8d70) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x017d8f70(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026ed324(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_017d8f38 + 0x17d8dd0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017d8f3c + 0x17d8dec));
              piVar7 = *(int **)(_UNK_017d8f40 + 0x17d8e00);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x664);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_017d8f44 + 0x17d8e4c) + 0x74) == 0) {
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
      iVar1 = FUN_017d5bc8(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_017d8f48 + 0x17d8a14) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_017d8f4c + 0x17d8a30);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_017d8f50 + 0x17d8a54);
      iVar1 = func_0x036c7bec(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x20c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017d8f54 + 0x17d8a84));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017d8f58 + 0x17d8a9c));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_017d8f5c + 0x17d8ab4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_017d8f60 + 0x17d8ae0);
      puVar14 = *(undefined4 **)(_UNK_017d8f64 + 0x17d8ae8);
      do {
        if (*(int *)(**(int **)(_UNK_017d8f68 + 0x17d8af0) + 0x74) == 0) {
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
        iVar6 = *(int *)(iVar6 + 0x20c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_017d8f6c + 0x17d8b84) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x017d8f70(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026ed324(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_017d8ef8 + 0x17d8800);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_017d8efc + 0x17d881c);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_017d8f00 + 0x17d8830);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x664);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_017d8f04 + 0x17d8878);
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
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x664);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_017d8f08 + 0x17d88ec),1);
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


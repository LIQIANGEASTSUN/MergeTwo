
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0327a948(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_0327b1c0 + 0x327a960);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327b1c4 + 0x327a974));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1c8 + 0x327a980));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1cc + 0x327a98c));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1d0 + 0x327a998));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1d4 + 0x327a9a4));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1d8 + 0x327a9b0));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1dc + 0x327a9bc));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1e0 + 0x327a9c8));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1e4 + 0x327a9d4));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1e8 + 0x327a9e0));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1ec + 0x327a9ec));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1f0 + 0x327a9f8));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1f4 + 0x327aa04));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1f8 + 0x327aa10));
    func_0x01438628(*(undefined4 *)(_UNK_0327b1fc + 0x327aa1c));
    func_0x01438628(*(undefined4 *)(_UNK_0327b200 + 0x327aa28));
    func_0x01438628(*(undefined4 *)(_UNK_0327b204 + 0x327aa34));
    func_0x01438628(*(undefined4 *)(_UNK_0327b208 + 0x327aa40));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1422,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1422,0);
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
  piVar8 = *(int **)(_UNK_0327b20c + 0x327aa9c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0327b210 + 0x327aab8);
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
  if (*(int *)(**(int **)(_UNK_0327b214 + 0x327aae4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x0327b75c();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_032778e4(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_0327b22c + 0x327af14) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0327b230 + 0x327af30));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_0327b234 + 0x327af54);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x328);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_0327b238 + 0x327af84));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0327b23c + 0x327af9c));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_0327b240 + 0x327afb4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_0327b244 + 0x327afe4);
        puVar11 = *(undefined4 **)(_UNK_0327b248 + 0x327afec);
        do {
          if (*(int *)(**(int **)(_UNK_0327b24c + 0x327aff4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0327b250 + 0x327b010));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x328);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_0327b254 + 0x327b090) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0327b290(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              func_0x026ef7d8(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_0327b258 + 0x327b0f0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0327b25c + 0x327b10c));
              piVar8 = *(int **)(_UNK_0327b260 + 0x327b120);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x820);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_0327b264 + 0x327b16c) + 0x74) == 0) {
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
      iVar2 = FUN_032778e4(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_0327b268 + 0x327ad34) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_0327b26c + 0x327ad50);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_0327b270 + 0x327ad74);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x328);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_0327b274 + 0x327ada4));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0327b278 + 0x327adbc));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_0327b27c + 0x327add4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_0327b280 + 0x327ae00);
      puVar14 = *(undefined4 **)(_UNK_0327b284 + 0x327ae08);
      do {
        if (*(int *)(**(int **)(_UNK_0327b288 + 0x327ae10) + 0x74) == 0) {
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
        iVar5 = *(int *)(iVar5 + 0x328);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_0327b28c + 0x327aea4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0327b290(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            func_0x026ef7d8(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_0327b218 + 0x327ab20);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0327b21c + 0x327ab3c);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_0327b220 + 0x327ab50);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x820);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_0327b224 + 0x327ab98);
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
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x820);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0327b228 + 0x327ac0c),1);
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


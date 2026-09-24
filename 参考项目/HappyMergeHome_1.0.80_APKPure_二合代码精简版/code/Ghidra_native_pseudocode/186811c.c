
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0187811c(undefined4 param_1)

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
  
  iVar1 = func_0x02953fd4(0x9368,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9368,0);
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
  pcVar5 = (char *)(_UNK_01878a38 + 0x18781d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01878a3c + 0x18781ec));
    func_0x01438628(*(undefined4 *)(_UNK_01878a40 + 0x18781f8));
    func_0x01438628(*(undefined4 *)(_UNK_01878a44 + 0x1878204));
    func_0x01438628(*(undefined4 *)(_UNK_01878a48 + 0x1878210));
    func_0x01438628(*(undefined4 *)(_UNK_01878a4c + 0x187821c));
    func_0x01438628(*(undefined4 *)(_UNK_01878a50 + 0x1878228));
    func_0x01438628(*(undefined4 *)(_UNK_01878a54 + 0x1878234));
    func_0x01438628(*(undefined4 *)(_UNK_01878a58 + 0x1878240));
    func_0x01438628(*(undefined4 *)(_UNK_01878a5c + 0x187824c));
    func_0x01438628(*(undefined4 *)(_UNK_01878a60 + 0x1878258));
    func_0x01438628(*(undefined4 *)(_UNK_01878a64 + 0x1878264));
    func_0x01438628(*(undefined4 *)(_UNK_01878a68 + 0x1878270));
    func_0x01438628(*(undefined4 *)(_UNK_01878a6c + 0x187827c));
    func_0x01438628(*(undefined4 *)(_UNK_01878a70 + 0x1878288));
    func_0x01438628(*(undefined4 *)(_UNK_01878a74 + 0x1878294));
    func_0x01438628(*(undefined4 *)(_UNK_01878a78 + 0x18782a0));
    func_0x01438628(*(undefined4 *)(_UNK_01878a7c + 0x18782ac));
    func_0x01438628(*(undefined4 *)(_UNK_01878a80 + 0x18782b8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x16ff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x16ff,0);
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
  piVar7 = *(int **)(_UNK_01878a84 + 0x1878314);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01878a88 + 0x1878330);
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
  if (*(int *)(**(int **)(_UNK_01878a8c + 0x187835c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01878fd4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_018754f0(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01878aa4 + 0x187878c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01878aa8 + 0x18787a8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_01878aac + 0x18787cc);
      iVar1 = func_0x036c7bec(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2f0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01878ab0 + 0x18787fc));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01878ab4 + 0x1878814));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01878ab8 + 0x187882c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_01878abc + 0x187885c);
        puVar11 = *(undefined4 **)(_UNK_01878ac0 + 0x1878864);
        do {
          if (*(int *)(**(int **)(_UNK_01878ac4 + 0x187886c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01878ac8 + 0x1878888));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x036c7bec(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x2f0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_01878acc + 0x1878908) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x01878b08(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026ce2c4(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_01878ad0 + 0x1878968) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01878ad4 + 0x1878984));
              piVar7 = *(int **)(_UNK_01878ad8 + 0x1878998);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x75c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_01878adc + 0x18789e4) + 0x74) == 0) {
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
      iVar1 = FUN_018754f0(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_01878ae0 + 0x18785ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_01878ae4 + 0x18785c8);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_01878ae8 + 0x18785ec);
      iVar1 = func_0x036c7bec(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2f0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01878aec + 0x187861c));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01878af0 + 0x1878634));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01878af4 + 0x187864c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_01878af8 + 0x1878678);
      puVar14 = *(undefined4 **)(_UNK_01878afc + 0x1878680);
      do {
        if (*(int *)(**(int **)(_UNK_01878b00 + 0x1878688) + 0x74) == 0) {
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
        iVar6 = *(int *)(iVar6 + 0x2f0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_01878b04 + 0x187871c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x01878b08(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026ce2c4(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_01878a90 + 0x1878398);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01878a94 + 0x18783b4);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_01878a98 + 0x18783c8);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x75c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_01878a9c + 0x1878410);
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
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x75c);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01878aa0 + 0x1878484),1);
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


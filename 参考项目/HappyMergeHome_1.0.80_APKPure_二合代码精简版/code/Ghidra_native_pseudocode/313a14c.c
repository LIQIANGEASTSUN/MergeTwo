
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0314a14c(undefined4 param_1)

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
  
  iVar2 = func_0x02953fd4(0x79b8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x79b8,0);
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
  pcVar6 = (char *)(_UNK_0314aa68 + 0x314a208);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314aa6c + 0x314a21c));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa70 + 0x314a228));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa74 + 0x314a234));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa78 + 0x314a240));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa7c + 0x314a24c));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa80 + 0x314a258));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa84 + 0x314a264));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa88 + 0x314a270));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa8c + 0x314a27c));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa90 + 0x314a288));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa94 + 0x314a294));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa98 + 0x314a2a0));
    func_0x01438628(*(undefined4 *)(_UNK_0314aa9c + 0x314a2ac));
    func_0x01438628(*(undefined4 *)(_UNK_0314aaa0 + 0x314a2b8));
    func_0x01438628(*(undefined4 *)(_UNK_0314aaa4 + 0x314a2c4));
    func_0x01438628(*(undefined4 *)(_UNK_0314aaa8 + 0x314a2d0));
    func_0x01438628(*(undefined4 *)(_UNK_0314aaac + 0x314a2dc));
    func_0x01438628(*(undefined4 *)(_UNK_0314aab0 + 0x314a2e8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1761,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1761,0);
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
  piVar8 = *(int **)(_UNK_0314aab4 + 0x314a344);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0314aab8 + 0x314a360);
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
  if (*(int *)(**(int **)(_UNK_0314aabc + 0x314a38c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x0314b004();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_03147488(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_0314aad4 + 0x314a7bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0314aad8 + 0x314a7d8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_0314aadc + 0x314a7fc);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2fc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_0314aae0 + 0x314a82c));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0314aae4 + 0x314a844));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_0314aae8 + 0x314a85c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_0314aaec + 0x314a88c);
        puVar11 = *(undefined4 **)(_UNK_0314aaf0 + 0x314a894);
        do {
          if (*(int *)(**(int **)(_UNK_0314aaf4 + 0x314a89c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0314aaf8 + 0x314a8b8));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x2fc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_0314aafc + 0x314a938) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0314ab38(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              func_0x026f0f08(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_0314ab00 + 0x314a998) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0314ab04 + 0x314a9b4));
              piVar8 = *(int **)(_UNK_0314ab08 + 0x314a9c8);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x784);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_0314ab0c + 0x314aa14) + 0x74) == 0) {
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
      iVar2 = FUN_03147488(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_0314ab10 + 0x314a5dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_0314ab14 + 0x314a5f8);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_0314ab18 + 0x314a61c);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2fc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_0314ab1c + 0x314a64c));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0314ab20 + 0x314a664));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_0314ab24 + 0x314a67c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_0314ab28 + 0x314a6a8);
      puVar14 = *(undefined4 **)(_UNK_0314ab2c + 0x314a6b0);
      do {
        if (*(int *)(**(int **)(_UNK_0314ab30 + 0x314a6b8) + 0x74) == 0) {
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
        iVar5 = *(int *)(iVar5 + 0x2fc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_0314ab34 + 0x314a74c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0314ab38(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            func_0x026f0f08(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_0314aac0 + 0x314a3c8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_0314aac4 + 0x314a3e4);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_0314aac8 + 0x314a3f8);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x784);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_0314aacc + 0x314a440);
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
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x784);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0314aad0 + 0x314a4b4),1);
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


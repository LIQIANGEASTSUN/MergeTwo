
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f27ed8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
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
  
  iVar2 = func_0x02953fd4(0x6ce9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6ce9,0);
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
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uVar1 = func_0x024f56d0(iVar5,uVar8,&uStack_30,uVar4,0,0);
    return uVar1;
  }
  pcVar6 = (char *)(_UNK_02f285f8 + 0x2f27f94);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f285fc + 0x2f27fa8));
    func_0x01438628(*(undefined4 *)(_UNK_02f28600 + 0x2f27fb4));
    func_0x01438628(*(undefined4 *)(_UNK_02f28604 + 0x2f27fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f28608 + 0x2f27fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2860c + 0x2f27fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f28610 + 0x2f27fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02f28614 + 0x2f27ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02f28618 + 0x2f27ffc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2861c + 0x2f28008));
    func_0x01438628(*(undefined4 *)(_UNK_02f28620 + 0x2f28014));
    func_0x01438628(*(undefined4 *)(_UNK_02f28624 + 0x2f28020));
    func_0x01438628(*(undefined4 *)(_UNK_02f28628 + 0x2f2802c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2862c + 0x2f28038));
    func_0x01438628(*(undefined4 *)(_UNK_02f28630 + 0x2f28044));
    func_0x01438628(*(undefined4 *)(_UNK_02f28634 + 0x2f28050));
    func_0x01438628(*(undefined4 *)(_UNK_02f28638 + 0x2f2805c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2863c + 0x2f28068));
    func_0x01438628(*(undefined4 *)(_UNK_02f28640 + 0x2f28074));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1322,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(_UNK_02f28644 + 0x2f280d0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_02f28648 + 0x2f280ec);
    iVar2 = func_0x04e4a028(*puVar10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x10) == '\0') {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(*puVar10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0x38) != 0 || *(int *)(iVar2 + 0x3c) != 0) {
        return 0;
      }
    }
    piVar9 = *(int **)(_UNK_02f2864c + 0x2f28118);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x02f28b6c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0xc) < 1) {
      uVar1 = 0;
      iVar2 = FUN_02f25aac(param_1,0);
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_02f28664 + 0x2f28354) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f28668 + 0x2f28370));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_02f2866c + 0x2f28390));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x1cc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02f28670 + 0x2f283c4));
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f28674 + 0x2f283dc));
        func_0x04cfd2f0(iVar2,uVar8,**(undefined4 **)(_UNK_02f28678 + 0x2f283f4));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(int *)(iVar2 + 0xc) - 1;
        if (-1 < (int)uVar7) {
          uVar1 = 0;
          puVar10 = *(undefined4 **)(_UNK_02f2867c + 0x2f28424);
          puVar13 = *(undefined4 **)(_UNK_02f28680 + 0x2f2842c);
          do {
            if (*(int *)(**(int **)(_UNK_02f28684 + 0x2f28434) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f28688 + 0x2f28450));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02f2868c + 0x2f28470));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x1cc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x04cfd760(iVar2,uVar7,*puVar10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x03b73d40(iVar5,uVar8,*puVar13);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x02f286a0(iVar5);
            if (iVar3 != 0) {
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
                FUN_026f1d50(iVar5,1,0);
                if (*(int *)(**(int **)(_UNK_02f28690 + 0x2f28530) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f28694 + 0x2f2854c));
                piVar12 = *(int **)(_UNK_02f28698 + 0x2f28560);
                iVar3 = *piVar12;
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x014387a4();
                  iVar3 = *piVar12;
                }
                uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x620);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x02b0c90c(iVar5,uVar8,0,0);
                if (*(int *)(**(int **)(_UNK_02f2869c + 0x2f285ac) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar5 = func_0x024eec50(uVar8,0,0);
                uVar1 = 1;
                if (iVar5 != 0) {
                  return 0;
                }
              }
            }
            uVar7 = uVar7 - 1;
          } while (uVar7 < 0x80000000);
        }
      }
    }
    else {
      piVar9 = *(int **)(_UNK_02f28650 + 0x2f28154);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar10 = *(undefined4 **)(_UNK_02f28654 + 0x2f28170);
      iVar5 = func_0x04e4a028(*puVar10);
      piVar12 = *(int **)(_UNK_02f28658 + 0x2f28184);
      iVar3 = *piVar12;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar12;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x620);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x02b0fd48(iVar5,uVar8,0);
      piVar11 = *(int **)(_UNK_02f2865c + 0x2f281cc);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x024ef144(uVar8,0,0);
      uVar1 = 1;
      if (iVar5 == 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(*puVar10);
        iVar3 = *piVar12;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
          iVar3 = *piVar12;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x620);
        piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f28660 + 0x2f28240),1);
        if (piVar9 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar9 + 0x20));
        if (iVar3 == 0) {
          uVar4 = func_0x01438904();
          func_0x01438790(uVar4,0);
        }
        if (piVar9[3] == 0) {
          func_0x014388e8();
        }
        piVar9[4] = iVar2;
        func_0x014385cc(piVar9 + 4,iVar2);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x02b0c90c(iVar5,uVar8,piVar9,0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar1 = func_0x024eec50(uVar8,0,0);
        uVar1 = uVar1 ^ 1;
      }
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x1322,0);
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
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar5,uVar8,&uStack_30,uVar4,0,0);
  uVar1 = func_0x024f56e0(&uStack_30,0,0);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aec454(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01aec5e4 + 0x1aec468);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aec5e8 + 0x1aec47c));
    func_0x01438628(*(undefined4 *)(_UNK_01aec5ec + 0x1aec488));
    func_0x01438628(*(undefined4 *)(_UNK_01aec5f0 + 0x1aec494));
    func_0x01438628(*(undefined4 *)(_UNK_01aec5f4 + 0x1aec4a0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x188f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ae5938(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = **(int **)(**(int **)(_UNK_01aec5f8 + 0x1aec508) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b67784(iVar1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = **(int **)(**(int **)(_UNK_01aec5fc + 0x1aec544) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b2f170(iVar1,0);
    if ((uVar2 & 0xfffffffe) == 4) {
      if (*(int *)(**(int **)(_UNK_01aec600 + 0x1aec57c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aec604 + 0x1aec598));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b0c634(iVar1,0);
      if (2 < iVar1) {
        return 0;
      }
      pcVar6 = (char *)(_UNK_01aecab8 + 0x1aec620);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01aecabc + 0x1aec634));
        func_0x01438628(*(undefined4 *)(_UNK_01aecac0 + 0x1aec640));
        func_0x01438628(*(undefined4 *)(_UNK_01aecac4 + 0x1aec64c));
        func_0x01438628(*(undefined4 *)(_UNK_01aecac8 + 0x1aec658));
        func_0x01438628(*(undefined4 *)(_UNK_01aecacc + 0x1aec664));
        func_0x01438628(*(undefined4 *)(_UNK_01aecad0 + 0x1aec670));
        func_0x01438628(*(undefined4 *)(_UNK_01aecad4 + 0x1aec67c));
        func_0x01438628(*(undefined4 *)(_UNK_01aecad8 + 0x1aec688));
        func_0x01438628(*(undefined4 *)(_UNK_01aecadc + 0x1aec694));
        func_0x01438628(*(undefined4 *)(_UNK_01aecae0 + 0x1aec6a0));
        func_0x01438628(*(undefined4 *)(_UNK_01aecae4 + 0x1aec6ac));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x1891,0);
      if (iVar1 == 0) {
        piVar13 = *(int **)(_UNK_01aecae8 + 0x1aec708);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar10 = 0;
        iVar1 = func_0x02b63a9c(iVar1,0x206c,0,0);
        if (iVar1 == 0) {
          if (*(int *)(**(int **)(_UNK_01aecaec + 0x1aec748) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aecaf0 + 0x1aec764));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = 0;
          iVar1 = func_0x02b0c634(iVar1,0);
          if (iVar1 < 3) {
            if (*(int *)(**(int **)(_UNK_01aecaf4 + 0x1aec79c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aecaf8 + 0x1aec7b8));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar10 = 0;
            iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01aecafc + 0x1aec7e0),0);
            piVar12 = *(int **)(_UNK_01aecb00 + 0x1aec7f8);
            if (*(int *)(*piVar12 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar9 = func_0x024eec50(iVar1,0,0);
            if (iVar9 == 0) {
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar10 = 0;
              iVar9 = func_0x024efc2c(iVar1,0);
              if (iVar9 != 0) {
                iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01aecb04 + 0x1aec850));
                func_0x024eed9c(iVar9,**(undefined4 **)(_UNK_01aecb08 + 0x1aec864));
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uVar10 = func_0x024ef308(iVar1,0);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar9 + 8);
                uVar2 = *(uint *)(iVar9 + 0xc);
                piVar4 = *(int **)(_UNK_01aecb0c + 0x1aec8b4);
                *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
                iVar11 = *piVar4;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                if (uVar2 < *(uint *)(iVar7 + 0xc)) {
                  *(uint *)(iVar9 + 0xc) = uVar2 + 1;
                  puVar3 = (undefined4 *)(iVar7 + uVar2 * 4 + 0x10);
                  *puVar3 = uVar10;
                  func_0x014385cc(puVar3,uVar10);
                }
                else {
                  func_0x0152874c(iVar9,uVar10,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
                iVar7 = **(int **)(*piVar13 + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                piVar4 = (int *)func_0x024ef308(iVar1,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                piVar8 = (int *)0x0;
                if ((piVar4 != (int *)0x0) &&
                   (piVar8 = piVar4, *piVar4 != **(int **)(_UNK_01aecb10 + 0x1aec94c))) {
                  piVar8 = (int *)0x0;
                }
                uVar10 = 0;
                uStack_3c = 1;
                uStack_40 = 0;
                uStack_34 = 0;
                iStack_38 = iVar9;
                func_0x02b647b4(iVar7,0x206c,piVar8,0);
                iVar9 = **(int **)(*piVar13 + 0x5c);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uStack_40 = 0;
                iVar9 = func_0x02b6127c(iVar9,0x206c,0,0);
                if (iVar9 != 0) {
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = func_0x024ef308(iVar1,0);
                  if (iVar9 == 0) {
                    func_0x014388e4();
                  }
                  piVar4 = (int *)func_0x024eff78(iVar9,0);
                  piVar13 = (int *)0x0;
                  if ((piVar4 != (int *)0x0) &&
                     (piVar13 = piVar4, *piVar4 != **(int **)(_UNK_01aecb14 + 0x1aeca08))) {
                    piVar13 = (int *)0x0;
                  }
                  if (*(int *)(*piVar12 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar9 = func_0x024ef144(piVar13,0,0);
                  uVar10 = 1;
                  if (iVar9 != 0) {
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x024ef308(iVar1,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024f0474(&uStack_30,iVar1,0);
                    uStack_40 = 0;
                    func_0x0157ead0(piVar13,fStack_2c + _UNK_01aecab4,0,0);
                  }
                }
              }
            }
          }
        }
        return uVar10;
      }
      iVar1 = func_0x029540a4(0x1891,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar1 = FUN_01ae628c();
      if (iVar1 == 0) {
        return 0;
      }
      pcVar6 = (char *)(_UNK_01aeccb8 + 0x1aecb30);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01aeccbc + 0x1aecb44));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x1893,0);
      if (iVar1 == 0) {
        piVar13 = *(int **)(_UNK_01aeccc0 + 0x1aecba0);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b63a9c(iVar1,0x206d,0,0);
        iVar9 = **(int **)(*piVar13 + 0x5c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (iVar1 == 0) {
          uVar10 = 0x206d;
        }
        else {
          iVar1 = func_0x02b63a9c(iVar9,0x206e,0,0);
          if (iVar1 == 0) {
            param_1 = func_0x01b36e78(0);
            if (param_1 == 0) {
              func_0x014388e4();
            }
            pcVar6 = (char *)(_UNK_01b4bdc8 + 0x1b4bd20);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_01b4bdcc + 0x1b4bd34),0);
              *pcVar6 = '\x01';
            }
            iVar1 = func_0x02953fd4(0x1895,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_01b4bdd0 + 0x1b4bd8c) + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02b2f170(iVar1,0);
              if (iVar1 != 0xb) {
                return 0;
              }
              pcVar6 = (char *)(_UNK_01b4babc + 0x1b4b9ac);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_01b4bac0 + 0x1b4b9c0));
                *pcVar6 = '\x01';
              }
              iVar1 = func_0x02953fd4(0x1896,0);
              if (iVar1 == 0) {
                piVar13 = *(int **)(_UNK_01b4bac4 + 0x1b4ba1c);
                iVar1 = **(int **)(*piVar13 + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x02b67784(iVar1,0);
                if (iVar1 == 0) {
                  iVar1 = **(int **)(*piVar13 + 0x5c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x02b63a9c(iVar1,0x206e,0,0);
                  if (iVar1 == 0) {
                    iVar1 = **(int **)(*piVar13 + 0x5c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar10 = func_0x02b6127c(iVar1,0x206e,0,0);
                    return uVar10;
                  }
                }
                return 0;
              }
              iVar1 = func_0x029540a4(0x1896,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
            }
            else {
              iVar1 = func_0x029540a4(0x1895,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
            }
            goto SUB_02869630;
          }
          iVar1 = **(int **)(*piVar13 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b63a9c(iVar1,0x206f,0,0);
          if (iVar1 != 0) {
            return 0;
          }
          iVar9 = **(int **)(*piVar13 + 0x5c);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          uVar10 = 0x206f;
        }
        uVar10 = func_0x02b6127c(iVar9,uVar10,0,0);
        return uVar10;
      }
      iVar1 = func_0x029540a4(0x1893,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x188f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
SUB_02869630:
  fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  fStack_2c = (float)uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = iStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar9,uVar10,&uStack_30,uVar5,0,0);
  uVar10 = func_0x024f56e0(&uStack_30,0,0);
  return uVar10;
}


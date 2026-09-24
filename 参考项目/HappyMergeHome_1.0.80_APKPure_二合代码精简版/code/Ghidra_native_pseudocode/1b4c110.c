
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5c110(int param_1)

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
  
  pcVar6 = (char *)(_UNK_01b5c2a0 + 0x1b5c124);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5c2a4 + 0x1b5c138));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c2a8 + 0x1b5c144));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c2ac + 0x1b5c150));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c2b0 + 0x1b5c15c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1882,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b57f28(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = **(int **)(**(int **)(_UNK_01b5c2b4 + 0x1b5c1c4) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b67784(iVar1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = **(int **)(**(int **)(_UNK_01b5c2b8 + 0x1b5c200) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b2f170(iVar1,0);
    if ((uVar2 & 0xfffffffe) == 4) {
      if (*(int *)(**(int **)(_UNK_01b5c2bc + 0x1b5c238) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5c2c0 + 0x1b5c254));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b0c634(iVar1,0);
      if (2 < iVar1) {
        return 0;
      }
      pcVar6 = (char *)(_UNK_01b5c774 + 0x1b5c2dc);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01b5c778 + 0x1b5c2f0));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c77c + 0x1b5c2fc));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c780 + 0x1b5c308));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c784 + 0x1b5c314));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c788 + 0x1b5c320));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c78c + 0x1b5c32c));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c790 + 0x1b5c338));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c794 + 0x1b5c344));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c798 + 0x1b5c350));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c79c + 0x1b5c35c));
        func_0x01438628(*(undefined4 *)(_UNK_01b5c7a0 + 0x1b5c368));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x1888,0);
      if (iVar1 == 0) {
        piVar13 = *(int **)(_UNK_01b5c7a4 + 0x1b5c3c4);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar10 = 0;
        iVar1 = func_0x02b63a9c(iVar1,0x1a90,0,0);
        if (iVar1 == 0) {
          if (*(int *)(**(int **)(_UNK_01b5c7a8 + 0x1b5c404) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5c7ac + 0x1b5c420));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = 0;
          iVar1 = func_0x02b0c634(iVar1,0);
          if (iVar1 < 3) {
            if (*(int *)(**(int **)(_UNK_01b5c7b0 + 0x1b5c458) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5c7b4 + 0x1b5c474));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar10 = 0;
            iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01b5c7b8 + 0x1b5c49c),0);
            piVar12 = *(int **)(_UNK_01b5c7bc + 0x1b5c4b4);
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
                iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01b5c7c0 + 0x1b5c50c));
                func_0x024eed9c(iVar9,**(undefined4 **)(_UNK_01b5c7c4 + 0x1b5c520));
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uVar10 = func_0x024ef308(iVar1,0);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar9 + 8);
                uVar2 = *(uint *)(iVar9 + 0xc);
                piVar4 = *(int **)(_UNK_01b5c7c8 + 0x1b5c570);
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
                   (piVar8 = piVar4, *piVar4 != **(int **)(_UNK_01b5c7cc + 0x1b5c608))) {
                  piVar8 = (int *)0x0;
                }
                uVar10 = 0;
                uStack_3c = 1;
                uStack_40 = 0;
                uStack_34 = 0;
                iStack_38 = iVar9;
                func_0x02b647b4(iVar7,0x1a90,piVar8,0);
                iVar9 = **(int **)(*piVar13 + 0x5c);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uStack_40 = 0;
                iVar9 = func_0x02b6127c(iVar9,0x1a90,0,0);
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
                     (piVar13 = piVar4, *piVar4 != **(int **)(_UNK_01b5c7d0 + 0x1b5c6c4))) {
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
                    func_0x0157ead0(piVar13,fStack_2c + _UNK_01b5c770,0,0);
                  }
                }
              }
            }
          }
        }
        return uVar10;
      }
      iVar1 = func_0x029540a4(0x1888,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar1 = FUN_01b58804();
      if (iVar1 == 0) {
        return 0;
      }
      pcVar6 = (char *)(_UNK_01b5c974 + 0x1b5c7ec);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01b5c978 + 0x1b5c800));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x188b,0);
      if (iVar1 == 0) {
        piVar13 = *(int **)(_UNK_01b5c97c + 0x1b5c85c);
        iVar1 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b63a9c(iVar1,0x1a91,0,0);
        iVar9 = **(int **)(*piVar13 + 0x5c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (iVar1 == 0) {
          uVar10 = 0x1a91;
        }
        else {
          iVar1 = func_0x02b63a9c(iVar9,0x1a92,0,0);
          if (iVar1 == 0) {
            param_1 = func_0x01b87984(0);
            if (param_1 == 0) {
              func_0x014388e4();
            }
            pcVar6 = (char *)(_UNK_01b96574 + 0x1b964cc);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_01b96578 + 0x1b964e0),0);
              *pcVar6 = '\x01';
            }
            iVar1 = func_0x02953fd4(0x188d,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(**(int **)(_UNK_01b9657c + 0x1b96538) + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02b2f170(iVar1,0);
              if (iVar1 != 0xb) {
                return 0;
              }
              pcVar6 = (char *)(_UNK_01b96268 + 0x1b96158);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_01b9626c + 0x1b9616c));
                *pcVar6 = '\x01';
              }
              iVar1 = func_0x02953fd4(0x188e,0);
              if (iVar1 == 0) {
                piVar13 = *(int **)(_UNK_01b96270 + 0x1b961c8);
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
                  iVar1 = func_0x02b63a9c(iVar1,0x1a92,0,0);
                  if (iVar1 == 0) {
                    iVar1 = **(int **)(*piVar13 + 0x5c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar10 = func_0x02b6127c(iVar1,0x1a92,0,0);
                    return uVar10;
                  }
                }
                return 0;
              }
              iVar1 = func_0x029540a4(0x188e,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
            }
            else {
              iVar1 = func_0x029540a4(0x188d,0);
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
          iVar1 = func_0x02b63a9c(iVar1,0x1a93,0,0);
          if (iVar1 != 0) {
            return 0;
          }
          iVar9 = **(int **)(*piVar13 + 0x5c);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          uVar10 = 0x1a93;
        }
        uVar10 = func_0x02b6127c(iVar9,uVar10,0,0);
        return uVar10;
      }
      iVar1 = func_0x029540a4(0x188b,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x1882,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba3b0c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_02ba460c + 0x2ba3b24);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba4610 + 0x2ba3b38));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4614 + 0x2ba3b44));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4618 + 0x2ba3b50));
    func_0x01438628(*(undefined4 *)(_UNK_02ba461c + 0x2ba3b5c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4620 + 0x2ba3b68));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4624 + 0x2ba3b74));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4628 + 0x2ba3b80));
    func_0x01438628(*(undefined4 *)(_UNK_02ba462c + 0x2ba3b8c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4630 + 0x2ba3b98));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4634 + 0x2ba3ba4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4638 + 0x2ba3bb0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba463c + 0x2ba3bbc));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xfd0,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_02ba4640 + 0x2ba3c28) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0x29,0,0);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02ba4644 + 0x2ba3c64) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02b67d68(iVar1,0x29,0);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        uVar10 = 0;
        piVar8 = *(int **)(_UNK_02ba4648 + 0x2ba3cb8);
        piVar7 = *(int **)(_UNK_02ba464c + 0x2ba3cc0);
        while( true ) {
          iVar1 = **(int **)(*piVar8 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02c3d868(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02be9134(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0xc) <= (int)uVar10) break;
          iVar1 = **(int **)(*piVar8 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02c3d868(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02be9134(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar10) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02c3f4b4(iVar1,0);
          if (-1 < iVar1) {
            iVar1 = **(int **)(*piVar8 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02c3d868(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02be9134(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar10) {
              func_0x014388e8();
            }
            iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar6,0,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(*piVar8 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02c3d868(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02be9134(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar10) {
                func_0x014388e8();
              }
              iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar1 + 0x14) != 1) {
                iVar1 = **(int **)(*piVar8 + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x02c3d868(iVar1,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x02be9134(iVar1,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar10) {
                  func_0x014388e8();
                }
                iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar1 + 0x14) != 3) goto LAB_02ba41bc;
              }
              func_0x0152da0c(&uStack_50,iVar2,**(undefined4 **)(_UNK_02ba4650 + 0x2ba3f54));
              uStack_38 = uStack_50;
              uStack_34 = uStack_4c;
              uStack_30 = uStack_48;
              iStack_2c = iStack_44;
              while (iVar3 = func_0x04878f14(&uStack_38,**(undefined4 **)(_UNK_02ba4654 + 0x2ba3f74)
                                            ), iVar1 = iStack_2c, iVar3 != 0) {
                iVar3 = **(int **)(*piVar8 + 0x5c);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x02c3d868(iVar3,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x02be9134(iVar3,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                  func_0x014388e8();
                }
                iVar3 = *(int *)(iVar3 + uVar10 * 4 + 0x10);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uStack_3c = func_0x02c3f4b4(iVar3,0);
                uVar6 = func_0x01524ffc(&uStack_3c,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x014e9678(iVar1,uVar6,0);
                if (iVar3 != 0) {
                  iVar3 = **(int **)(**(int **)(_UNK_02ba4658 + 0x2ba404c) + 0x5c);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x02b6127c(iVar3,0x29,iVar1,0,0);
                  if (iVar1 != 0) {
                    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ba465c + 0x2ba4090));
                    func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02ba4660 + 0x2ba40a4));
                    iVar2 = **(int **)(*piVar8 + 0x5c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x02c3d868(iVar2,0);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x02be9134(iVar2,0);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar10) {
                      func_0x014388e8();
                    }
                    iVar2 = *(int *)(iVar2 + uVar10 * 4 + 0x10);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar6 = func_0x024eecb8(iVar2,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar1 + 8);
                    uVar9 = *(uint *)(iVar1 + 0xc);
                    piVar7 = *(int **)(_UNK_02ba4664 + 0x2ba416c);
                    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                    iVar3 = *piVar7;
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar2 + 0xc)) {
                      *(uint *)(iVar1 + 0xc) = uVar9 + 1;
                      puVar4 = (undefined4 *)(iVar2 + uVar9 * 4 + 0x10);
                      *puVar4 = uVar6;
                      func_0x014385cc(puVar4,uVar6);
                    }
                    else {
                      func_0x0152874c(iVar1,uVar6,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
                    }
                    iVar2 = **(int **)(*piVar8 + 0x5c);
                    iVar3 = **(int **)(**(int **)(_UNK_02ba4668 + 0x2ba41ec) + 0x5c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x02c3d868(iVar2,0);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x02be9134(iVar2,0);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar10) {
                      func_0x014388e8();
                    }
                    iVar2 = *(int *)(iVar2 + uVar10 * 4 + 0x10);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    piVar7 = (int *)func_0x024eecb8(iVar2,0);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    if (piVar7 == (int *)0x0) {
                      piVar7 = (int *)0x0;
                    }
                    else if (*piVar7 != **(int **)(_UNK_02ba466c + 0x2ba42a4)) {
                      piVar7 = (int *)0x0;
                    }
                    func_0x02b647b4(iVar3,0x29,piVar7,0,0,1,iVar1,0);
                    iVar1 = **(int **)(**(int **)(_UNK_02ba4670 + 0x2ba42f0) + 0x5c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x02b67abc(iVar1,0x29,0);
                    if (iVar1 != 0) {
                      iVar1 = **(int **)(**(int **)(_UNK_02ba4674 + 0x2ba4328) + 0x5c);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      func_0x02b6146c(iVar1,0);
                    }
                    iVar1 = **(int **)(**(int **)(_UNK_02ba4678 + 0x2ba4354) + 0x5c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x02b67abc(iVar1,0x29,0);
                    if (iVar1 != 0) {
                      iVar1 = **(int **)(**(int **)(_UNK_02ba467c + 0x2ba438c) + 0x5c);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      iVar1 = func_0x02b67bdc(iVar1,0);
                      if (iVar1 != 0) {
                        iVar1 = **(int **)(*piVar8 + 0x5c);
                        if (iVar1 == 0) {
                          func_0x014388e4();
                        }
                        iVar1 = func_0x02c3d868(iVar1,0);
                        iVar2 = **(int **)(*piVar8 + 0x5c);
                        if (iVar2 == 0) {
                          func_0x014388e4();
                        }
                        iVar2 = func_0x02c3d868(iVar2,0);
                        iVar3 = **(int **)(*piVar8 + 0x5c);
                        if (iVar3 == 0) {
                          func_0x014388e4();
                        }
                        iVar3 = func_0x02c3d868(iVar3,0);
                        if (iVar3 == 0) {
                          func_0x014388e4();
                        }
                        iVar3 = func_0x02be9134(iVar3,0);
                        if (iVar3 == 0) {
                          func_0x014388e4();
                        }
                        if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                          func_0x014388e8();
                        }
                        uVar6 = *(undefined4 *)(iVar3 + uVar10 * 4 + 0x10);
                        if (iVar2 == 0) {
                          func_0x014388e4();
                        }
                        uVar6 = func_0x02bec634(iVar2,uVar6,0);
                        if (iVar1 == 0) {
                          func_0x014388e4();
                        }
                        func_0x02bee8e8(iVar1,uVar6,0,1,0,0);
                      }
                    }
                    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02ba4680 + 0x2ba45c4));
                    return;
                  }
                }
              }
              func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02ba468c + 0x2ba41ac));
              piVar7 = *(int **)(_UNK_02ba4690 + 0x2ba41c0);
            }
          }
LAB_02ba41bc:
          uVar10 = uVar10 + 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xfd0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}


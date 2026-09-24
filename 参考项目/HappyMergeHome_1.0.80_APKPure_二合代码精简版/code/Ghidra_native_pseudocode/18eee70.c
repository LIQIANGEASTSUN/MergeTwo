
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fee70(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_018ff6ac + 0x18fee8c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018ff6b0 + 0x18feea0));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6b4 + 0x18feeac));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6b8 + 0x18feeb8));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6bc + 0x18feec4));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6c0 + 0x18feed0));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6c4 + 0x18feedc));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6c8 + 0x18feee8));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6cc + 0x18feef4));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6d0 + 0x18fef00));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6d4 + 0x18fef0c));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6d8 + 0x18fef18));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6dc + 0x18fef24));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6e0 + 0x18fef30));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6e4 + 0x18fef3c));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6e8 + 0x18fef48));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6ec + 0x18fef54));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6f0 + 0x18fef60));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6f4 + 0x18fef6c));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6f8 + 0x18fef78));
    func_0x01438628(*(undefined4 *)(_UNK_018ff6fc + 0x18fef84));
    func_0x01438628(*(undefined4 *)(_UNK_018ff700 + 0x18fef90));
    func_0x01438628(*(undefined4 *)(_UNK_018ff704 + 0x18fef9c));
    func_0x01438628(*(undefined4 *)(_UNK_018ff708 + 0x18fefa8));
    func_0x01438628(*(undefined4 *)(_UNK_018ff70c + 0x18fefb4));
    func_0x01438628(*(undefined4 *)(_UNK_018ff710 + 0x18fefc0));
    func_0x01438628(*(undefined4 *)(_UNK_018ff714 + 0x18fefcc));
    func_0x01438628(*(undefined4 *)(_UNK_018ff718 + 0x18fefd8));
    func_0x01438628(*(undefined4 *)(_UNK_018ff71c + 0x18fefe4));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x9688,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018ff720 + 0x18ff04c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018ff724 + 0x18ff068));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018ff728 + 0x18ff088));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2b4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018ff72c + 0x18ff0bc));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018ff730 + 0x18ff0d4));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_018ff734 + 0x18ff0ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_018ff738 + 0x18ff11c);
      do {
        if (*(int *)(**(int **)(_UNK_018ff73c + 0x18ff128) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018ff740 + 0x18ff144));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_018ff744 + 0x18ff164));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x2b4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_018ff748 + 0x18ff198));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_018ff74c + 0x18ff1c4));
        if (*(int *)(**(int **)(_UNK_018ff750 + 0x18ff1dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_018fddac(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_018ff754 + 0x18ff250));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_018ff758 + 0x18ff28c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_018ff764 + 0x18ff300) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_018ff768 + 0x18ff310)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018ff76c + 0x18ff364));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_018ff770 + 0x18ff378));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_018ff774 + 0x18ff39c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_018ff778 + 0x18ff3c8));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_018ff77c + 0x18ff3fc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018ff780 + 0x18ff41c));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_018ff784 + 0x18ff478)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_018ff788 + 0x18ff4b8);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar10 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
                        *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_018ff78c + 0x18ff50c));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_018ff798 + 0x18ff564)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_018ff79c + 0x18ff590));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_018ff7a0 + 0x18ff5b0));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_018ff7a4 + 0x18ff5dc));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_018ff75c + 0x18ff2ac));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_018ff760 + 0x18ff2e8));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x9688,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


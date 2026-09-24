
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192d044(undefined4 param_1,int param_2)

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
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_0192d87c + 0x192d060);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0192d880 + 0x192d074));
    func_0x01438628(*(undefined4 *)(_UNK_0192d884 + 0x192d080));
    func_0x01438628(*(undefined4 *)(_UNK_0192d888 + 0x192d08c));
    func_0x01438628(*(undefined4 *)(_UNK_0192d88c + 0x192d098));
    func_0x01438628(*(undefined4 *)(_UNK_0192d890 + 0x192d0a4));
    func_0x01438628(*(undefined4 *)(_UNK_0192d894 + 0x192d0b0));
    func_0x01438628(*(undefined4 *)(_UNK_0192d898 + 0x192d0bc));
    func_0x01438628(*(undefined4 *)(_UNK_0192d89c + 0x192d0c8));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8a0 + 0x192d0d4));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8a4 + 0x192d0e0));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8a8 + 0x192d0ec));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8ac + 0x192d0f8));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8b0 + 0x192d104));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8b4 + 0x192d110));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8b8 + 0x192d11c));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8bc + 0x192d128));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8c0 + 0x192d134));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8c4 + 0x192d140));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8c8 + 0x192d14c));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8cc + 0x192d158));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8d0 + 0x192d164));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8d4 + 0x192d170));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8d8 + 0x192d17c));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8dc + 0x192d188));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8e0 + 0x192d194));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8e4 + 0x192d1a0));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8e8 + 0x192d1ac));
    func_0x01438628(*(undefined4 *)(_UNK_0192d8ec + 0x192d1b8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x97a4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0192d8f0 + 0x192d220) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0192d8f4 + 0x192d23c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0192d8f8 + 0x192d25c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3ac);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0192d8fc + 0x192d290));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0192d900 + 0x192d2a8));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_0192d904 + 0x192d2c0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_0192d908 + 0x192d2ec);
      do {
        if (*(int *)(**(int **)(_UNK_0192d90c + 0x192d2f8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0192d910 + 0x192d314));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0192d914 + 0x192d334));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x3ac);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_0192d918 + 0x192d36c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_0192d91c + 0x192d398));
        if (*(int *)(**(int **)(_UNK_0192d920 + 0x192d3b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0192b49c(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0192d924 + 0x192d420));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_0192d928 + 0x192d45c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0192d934 + 0x192d4d0) + 0x5c);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0192d938 + 0x192d4e0));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0192d93c + 0x192d534));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_0192d940 + 0x192d548));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_0192d944 + 0x192d56c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_0192d948 + 0x192d598));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0192d94c + 0x192d5cc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0192d950 + 0x192d5ec));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_0192d954 + 0x192d648)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0192d958 + 0x192d688);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar11 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar10 + 1;
                        *(undefined4 *)(iVar7 + uVar10 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_0192d95c + 0x192d6dc));
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
                    iVar11 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_0192d968 + 0x192d734)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x024f0540(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_0192d96c + 0x192d760));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_0192d970 + 0x192d780));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_0192d974 + 0x192d7ac));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0192d92c + 0x192d47c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_0192d930 + 0x192d4b8));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x97a4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


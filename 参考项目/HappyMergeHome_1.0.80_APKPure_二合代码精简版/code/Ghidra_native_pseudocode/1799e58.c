
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a9e58(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_017aa694 + 0x17a9e74);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017aa698 + 0x17a9e88));
    func_0x01438628(*(undefined4 *)(_UNK_017aa69c + 0x17a9e94));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6a0 + 0x17a9ea0));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6a4 + 0x17a9eac));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6a8 + 0x17a9eb8));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6ac + 0x17a9ec4));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6b0 + 0x17a9ed0));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6b4 + 0x17a9edc));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6b8 + 0x17a9ee8));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6bc + 0x17a9ef4));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6c0 + 0x17a9f00));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6c4 + 0x17a9f0c));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6c8 + 0x17a9f18));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6cc + 0x17a9f24));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6d0 + 0x17a9f30));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6d4 + 0x17a9f3c));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6d8 + 0x17a9f48));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6dc + 0x17a9f54));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6e0 + 0x17a9f60));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6e4 + 0x17a9f6c));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6e8 + 0x17a9f78));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6ec + 0x17a9f84));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6f0 + 0x17a9f90));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6f4 + 0x17a9f9c));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6f8 + 0x17a9fa8));
    func_0x01438628(*(undefined4 *)(_UNK_017aa6fc + 0x17a9fb4));
    func_0x01438628(*(undefined4 *)(_UNK_017aa700 + 0x17a9fc0));
    func_0x01438628(*(undefined4 *)(_UNK_017aa704 + 0x17a9fcc));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8e88,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017aa708 + 0x17aa034) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017aa70c + 0x17aa050));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017aa710 + 0x17aa070));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x30c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017aa714 + 0x17aa0a4));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017aa718 + 0x17aa0bc));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_017aa71c + 0x17aa0d4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_017aa720 + 0x17aa104);
      do {
        if (*(int *)(**(int **)(_UNK_017aa724 + 0x17aa110) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017aa728 + 0x17aa12c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_017aa72c + 0x17aa14c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x30c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_017aa730 + 0x17aa180));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_017aa734 + 0x17aa1ac));
        if (*(int *)(**(int **)(_UNK_017aa738 + 0x17aa1c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_017a82a4(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_017aa73c + 0x17aa238));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_017aa740 + 0x17aa274));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_017aa74c + 0x17aa2e8) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_017aa750 + 0x17aa2f8)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017aa754 + 0x17aa34c));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_017aa758 + 0x17aa360));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_017aa75c + 0x17aa384));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_017aa760 + 0x17aa3b0));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_017aa764 + 0x17aa3e4) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_017aa768 + 0x17aa404));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_017aa76c + 0x17aa460)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_017aa770 + 0x17aa4a0);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_017aa774 + 0x17aa4f4));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_017aa780 + 0x17aa54c)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_017aa784 + 0x17aa578));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_017aa788 + 0x17aa598));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_017aa78c + 0x17aa5c4));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_017aa744 + 0x17aa294));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_017aa748 + 0x17aa2d0));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8e88,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


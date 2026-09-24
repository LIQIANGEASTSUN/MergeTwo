
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0327ce38(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_0327d674 + 0x327ce54);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327d678 + 0x327ce68));
    func_0x01438628(*(undefined4 *)(_UNK_0327d67c + 0x327ce74));
    func_0x01438628(*(undefined4 *)(_UNK_0327d680 + 0x327ce80));
    func_0x01438628(*(undefined4 *)(_UNK_0327d684 + 0x327ce8c));
    func_0x01438628(*(undefined4 *)(_UNK_0327d688 + 0x327ce98));
    func_0x01438628(*(undefined4 *)(_UNK_0327d68c + 0x327cea4));
    func_0x01438628(*(undefined4 *)(_UNK_0327d690 + 0x327ceb0));
    func_0x01438628(*(undefined4 *)(_UNK_0327d694 + 0x327cebc));
    func_0x01438628(*(undefined4 *)(_UNK_0327d698 + 0x327cec8));
    func_0x01438628(*(undefined4 *)(_UNK_0327d69c + 0x327ced4));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6a0 + 0x327cee0));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6a4 + 0x327ceec));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6a8 + 0x327cef8));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6ac + 0x327cf04));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6b0 + 0x327cf10));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6b4 + 0x327cf1c));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6b8 + 0x327cf28));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6bc + 0x327cf34));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6c0 + 0x327cf40));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6c4 + 0x327cf4c));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6c8 + 0x327cf58));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6cc + 0x327cf64));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6d0 + 0x327cf70));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6d4 + 0x327cf7c));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6d8 + 0x327cf88));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6dc + 0x327cf94));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6e0 + 0x327cfa0));
    func_0x01438628(*(undefined4 *)(_UNK_0327d6e4 + 0x327cfac));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x815f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0327d6e8 + 0x327d014) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0327d6ec + 0x327d030));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0327d6f0 + 0x327d050));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x328);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0327d6f4 + 0x327d084));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0327d6f8 + 0x327d09c));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0327d6fc + 0x327d0b4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_0327d700 + 0x327d0e4);
      do {
        if (*(int *)(**(int **)(_UNK_0327d704 + 0x327d0f0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0327d708 + 0x327d10c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0327d70c + 0x327d12c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x328);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_0327d710 + 0x327d160));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_0327d714 + 0x327d18c));
        if (*(int *)(**(int **)(_UNK_0327d718 + 0x327d1a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0327b290(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0327d71c + 0x327d218));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_0327d720 + 0x327d254));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0327d72c + 0x327d2c8) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_0327d730 + 0x327d2d8)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0327d734 + 0x327d32c));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_0327d738 + 0x327d340));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_0327d73c + 0x327d364));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_0327d740 + 0x327d390));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0327d744 + 0x327d3c4) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0327d748 + 0x327d3e4));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_0327d74c + 0x327d440)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0327d750 + 0x327d480);
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
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_0327d754 + 0x327d4d4));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_0327d760 + 0x327d52c)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_0327d764 + 0x327d558));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_0327d768 + 0x327d578));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_0327d76c + 0x327d5a4));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0327d724 + 0x327d274));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_0327d728 + 0x327d2b0));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x815f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


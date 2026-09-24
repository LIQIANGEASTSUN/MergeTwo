
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9cd6c(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02f9d5a8 + 0x2f9cd88);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5ac + 0x2f9cd9c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5b0 + 0x2f9cda8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5b4 + 0x2f9cdb4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5b8 + 0x2f9cdc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5bc + 0x2f9cdcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5c0 + 0x2f9cdd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5c4 + 0x2f9cde4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5c8 + 0x2f9cdf0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5cc + 0x2f9cdfc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5d0 + 0x2f9ce08));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5d4 + 0x2f9ce14));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5d8 + 0x2f9ce20));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5dc + 0x2f9ce2c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5e0 + 0x2f9ce38));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5e4 + 0x2f9ce44));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5e8 + 0x2f9ce50));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5ec + 0x2f9ce5c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5f0 + 0x2f9ce68));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5f4 + 0x2f9ce74));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5f8 + 0x2f9ce80));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d5fc + 0x2f9ce8c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d600 + 0x2f9ce98));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d604 + 0x2f9cea4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d608 + 0x2f9ceb0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d60c + 0x2f9cebc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d610 + 0x2f9cec8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d614 + 0x2f9ced4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9d618 + 0x2f9cee0));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x6f8a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f9d61c + 0x2f9cf48) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9d620 + 0x2f9cf64));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f9d624 + 0x2f9cf84));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x380);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f9d628 + 0x2f9cfb8));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f9d62c + 0x2f9cfd0));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02f9d630 + 0x2f9cfe8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_02f9d634 + 0x2f9d018);
      do {
        if (*(int *)(**(int **)(_UNK_02f9d638 + 0x2f9d024) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9d63c + 0x2f9d040));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02f9d640 + 0x2f9d060));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x380);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_02f9d644 + 0x2f9d094));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_02f9d648 + 0x2f9d0c0));
        if (*(int *)(**(int **)(_UNK_02f9d64c + 0x2f9d0d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_02f9b1c4(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02f9d650 + 0x2f9d14c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_02f9d654 + 0x2f9d188));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_02f9d660 + 0x2f9d1fc) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_02f9d664 + 0x2f9d20c)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = FUN_02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f9d668 + 0x2f9d260));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_02f9d66c + 0x2f9d274));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_02f9d670 + 0x2f9d298));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_02f9d674 + 0x2f9d2c4));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_02f9d678 + 0x2f9d2f8) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9d67c + 0x2f9d318));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = FUN_029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_02f9d680 + 0x2f9d374)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_02f9d684 + 0x2f9d3b4);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02f9d688 + 0x2f9d408));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_02f9d694 + 0x2f9d460)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_02f9d698 + 0x2f9d48c));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_02f9d69c + 0x2f9d4ac));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_02f9d6a0 + 0x2f9d4d8));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02f9d658 + 0x2f9d1a8));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_02f9d65c + 0x2f9d1e4));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6f8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


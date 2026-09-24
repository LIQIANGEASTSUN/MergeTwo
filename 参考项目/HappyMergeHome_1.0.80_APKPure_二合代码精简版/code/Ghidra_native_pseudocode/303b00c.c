
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0304b00c(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_0304b848 + 0x304b028);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304b84c + 0x304b03c));
    func_0x01438628(*(undefined4 *)(_UNK_0304b850 + 0x304b048));
    func_0x01438628(*(undefined4 *)(_UNK_0304b854 + 0x304b054));
    func_0x01438628(*(undefined4 *)(_UNK_0304b858 + 0x304b060));
    func_0x01438628(*(undefined4 *)(_UNK_0304b85c + 0x304b06c));
    func_0x01438628(*(undefined4 *)(_UNK_0304b860 + 0x304b078));
    func_0x01438628(*(undefined4 *)(_UNK_0304b864 + 0x304b084));
    func_0x01438628(*(undefined4 *)(_UNK_0304b868 + 0x304b090));
    func_0x01438628(*(undefined4 *)(_UNK_0304b86c + 0x304b09c));
    func_0x01438628(*(undefined4 *)(_UNK_0304b870 + 0x304b0a8));
    func_0x01438628(*(undefined4 *)(_UNK_0304b874 + 0x304b0b4));
    func_0x01438628(*(undefined4 *)(_UNK_0304b878 + 0x304b0c0));
    func_0x01438628(*(undefined4 *)(_UNK_0304b87c + 0x304b0cc));
    func_0x01438628(*(undefined4 *)(_UNK_0304b880 + 0x304b0d8));
    func_0x01438628(*(undefined4 *)(_UNK_0304b884 + 0x304b0e4));
    func_0x01438628(*(undefined4 *)(_UNK_0304b888 + 0x304b0f0));
    func_0x01438628(*(undefined4 *)(_UNK_0304b88c + 0x304b0fc));
    func_0x01438628(*(undefined4 *)(_UNK_0304b890 + 0x304b108));
    func_0x01438628(*(undefined4 *)(_UNK_0304b894 + 0x304b114));
    func_0x01438628(*(undefined4 *)(_UNK_0304b898 + 0x304b120));
    func_0x01438628(*(undefined4 *)(_UNK_0304b89c + 0x304b12c));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8a0 + 0x304b138));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8a4 + 0x304b144));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8a8 + 0x304b150));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8ac + 0x304b15c));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8b0 + 0x304b168));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8b4 + 0x304b174));
    func_0x01438628(*(undefined4 *)(_UNK_0304b8b8 + 0x304b180));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x741f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0304b8bc + 0x304b1e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0304b8c0 + 0x304b204));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0304b8c4 + 0x304b224));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x368);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0304b8c8 + 0x304b258));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0304b8cc + 0x304b270));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0304b8d0 + 0x304b288));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_0304b8d4 + 0x304b2b8);
      do {
        if (*(int *)(**(int **)(_UNK_0304b8d8 + 0x304b2c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0304b8dc + 0x304b2e0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0304b8e0 + 0x304b300));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x368);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_0304b8e4 + 0x304b334));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_0304b8e8 + 0x304b360));
        if (*(int *)(**(int **)(_UNK_0304b8ec + 0x304b378) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_03049458(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0304b8f0 + 0x304b3ec));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_0304b8f4 + 0x304b428));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0304b900 + 0x304b49c) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_0304b904 + 0x304b4ac)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0304b908 + 0x304b500));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_0304b90c + 0x304b514));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_0304b910 + 0x304b538));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_0304b914 + 0x304b564));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0304b918 + 0x304b598) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0304b91c + 0x304b5b8));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_0304b920 + 0x304b614)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0304b924 + 0x304b654);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_0304b928 + 0x304b6a8));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_0304b934 + 0x304b700)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_0304b938 + 0x304b72c));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_0304b93c + 0x304b74c));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_0304b940 + 0x304b778));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0304b8f8 + 0x304b448));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_0304b8fc + 0x304b484));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x741f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


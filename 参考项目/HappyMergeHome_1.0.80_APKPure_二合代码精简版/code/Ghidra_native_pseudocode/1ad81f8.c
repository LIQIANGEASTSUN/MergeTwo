
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae81f8(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_01ae8918 + 0x1ae8214);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae891c + 0x1ae8228));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8920 + 0x1ae8234));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8924 + 0x1ae8240));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8928 + 0x1ae824c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae892c + 0x1ae8258));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8930 + 0x1ae8264));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8934 + 0x1ae8270));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8938 + 0x1ae827c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae893c + 0x1ae8288));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8940 + 0x1ae8294));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8944 + 0x1ae82a0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8948 + 0x1ae82ac));
    func_0x01438628(*(undefined4 *)(_UNK_01ae894c + 0x1ae82b8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8950 + 0x1ae82c4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8954 + 0x1ae82d0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8958 + 0x1ae82dc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae895c + 0x1ae82e8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8960 + 0x1ae82f4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8964 + 0x1ae8300));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8968 + 0x1ae830c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae896c + 0x1ae8318));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8970 + 0x1ae8324));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8974 + 0x1ae8330));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xa49e,0);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (0 < *(int *)(param_2 + 0xc))) {
      iVar1 = FUN_01ae4524();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01ae8978 + 0x1ae83c8));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ae897c + 0x1ae83e0));
      func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01ae8980 + 0x1ae83f8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar9) {
        puVar12 = *(undefined4 **)(_UNK_01ae8984 + 0x1ae8424);
        do {
          iVar3 = FUN_01ae4524();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01ae8988 + 0x1ae8448));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01ae898c + 0x1ae8474));
          iVar4 = FUN_01ae6a18();
          if (iVar3 != 0) {
            iVar5 = 0;
            if (iVar4 != 0) {
              iVar5 = *(int *)(iVar3 + 0x18);
            }
            if ((iVar4 != 0 && iVar5 != 0) && (0 < *(int *)(param_2 + 0xc))) {
              iVar4 = 0;
              do {
                iVar5 = *(int *)(iVar3 + 0x18);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar5 + 0x10);
                iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01ae8990 + 0x1ae84e8));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar2 = *(undefined4 *)(iVar5 + 8);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01ae8994 + 0x1ae8524));
                if (iVar5 == 0) {
                  iVar7 = **(int **)(**(int **)(_UNK_01ae89a0 + 0x1ae85a8) + 0x5c);
                  iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01ae89a4 + 0x1ae85b8)
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
                    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01ae89a8 + 0x1ae860c));
                    func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01ae89ac + 0x1ae8620));
                    iVar7 = *(int *)(iVar3 + 0x18);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = *(int *)(iVar7 + 0x10);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01ae89b0 + 0x1ae8654));
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01ae89b4 + 0x1ae8680));
                    uStack_38 = uStack_48;
                    uStack_34 = uStack_44;
                    uStack_30 = uStack_40;
                    uStack_2c = uStack_3c;
                    while (iVar7 = func_0x0151455c(&uStack_38,
                                                   **(undefined4 **)(_UNK_01ae89c4 + 0x1ae86a0)),
                          uVar2 = uStack_2c, iVar7 != 0) {
                      if (*(int *)(**(int **)(_UNK_01ae89b8 + 0x1ae86bc) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01ae89bc + 0x1ae86dc));
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) - 3U < 3)) {
                        if (iVar5 == 0) {
                          func_0x014388e4();
                        }
                        iVar7 = *(int *)(iVar5 + 8);
                        uVar10 = *(uint *)(iVar5 + 0xc);
                        piVar6 = *(int **)(_UNK_01ae89c0 + 0x1ae8744);
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
                    func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01ae89c8 + 0x1ae8798));
                    iVar7 = 0;
                    while( true ) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                      iVar11 = *(int *)(iVar3 + 0x18);
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      iVar11 = *(int *)(iVar11 + 0x10);
                      uVar2 = func_0x024f0530(iVar5,iVar7,*puVar12);
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      iVar11 = func_0x024f0540(iVar11,uVar2,
                                               **(undefined4 **)(_UNK_01ae89d4 + 0x1ae8800));
                      if (iVar11 != 0) {
                        iVar11 = *(int *)(iVar3 + 0x18);
                        if (iVar11 == 0) {
                          func_0x014388e4();
                        }
                        iVar11 = *(int *)(iVar11 + 0x10);
                        uVar2 = func_0x024f0530(iVar5,iVar7,*puVar12);
                        if (iVar11 == 0) {
                          func_0x014388e4();
                        }
                        func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_01ae89d8 + 0x1ae8854));
                      }
                      iVar7 = iVar7 + 1;
                    }
                  }
                }
                else {
                  iVar5 = *(int *)(iVar3 + 0x18);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = *(int *)(iVar5 + 0x10);
                  iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01ae8998 + 0x1ae8554)
                                         );
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  uVar2 = *(undefined4 *)(iVar5 + 8);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01ae899c + 0x1ae8590));
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(param_2 + 0xc));
            }
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 < 0x80000000);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa49e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


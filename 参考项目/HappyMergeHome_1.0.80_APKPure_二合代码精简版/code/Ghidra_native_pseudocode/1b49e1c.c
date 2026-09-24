
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b59e1c(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_01b5a53c + 0x1b59e38);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5a540 + 0x1b59e4c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a544 + 0x1b59e58));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a548 + 0x1b59e64));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a54c + 0x1b59e70));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a550 + 0x1b59e7c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a554 + 0x1b59e88));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a558 + 0x1b59e94));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a55c + 0x1b59ea0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a560 + 0x1b59eac));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a564 + 0x1b59eb8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a568 + 0x1b59ec4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a56c + 0x1b59ed0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a570 + 0x1b59edc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a574 + 0x1b59ee8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a578 + 0x1b59ef4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a57c + 0x1b59f00));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a580 + 0x1b59f0c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a584 + 0x1b59f18));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a588 + 0x1b59f24));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a58c + 0x1b59f30));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a590 + 0x1b59f3c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a594 + 0x1b59f48));
    func_0x01438628(*(undefined4 *)(_UNK_01b5a598 + 0x1b59f54));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xa686,0);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (0 < *(int *)(param_2 + 0xc))) {
      iVar1 = FUN_01b57128();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01b5a59c + 0x1b59fec));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b5a5a0 + 0x1b5a004));
      func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01b5a5a4 + 0x1b5a01c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar9) {
        puVar12 = *(undefined4 **)(_UNK_01b5a5a8 + 0x1b5a048);
        do {
          iVar3 = FUN_01b57128();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01b5a5ac + 0x1b5a06c));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01b5a5b0 + 0x1b5a098));
          iVar4 = FUN_01b58f74();
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
                iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01b5a5b4 + 0x1b5a10c));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar2 = *(undefined4 *)(iVar5 + 8);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01b5a5b8 + 0x1b5a148));
                if (iVar5 == 0) {
                  iVar7 = **(int **)(**(int **)(_UNK_01b5a5c4 + 0x1b5a1cc) + 0x5c);
                  iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01b5a5c8 + 0x1b5a1dc)
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
                    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01b5a5cc + 0x1b5a230));
                    func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01b5a5d0 + 0x1b5a244));
                    iVar7 = *(int *)(iVar3 + 0x18);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = *(int *)(iVar7 + 0x10);
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01b5a5d4 + 0x1b5a278));
                    if (iVar7 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01b5a5d8 + 0x1b5a2a4));
                    uStack_38 = uStack_48;
                    uStack_34 = uStack_44;
                    uStack_30 = uStack_40;
                    uStack_2c = uStack_3c;
                    while (iVar7 = func_0x0151455c(&uStack_38,
                                                   **(undefined4 **)(_UNK_01b5a5e8 + 0x1b5a2c4)),
                          uVar2 = uStack_2c, iVar7 != 0) {
                      if (*(int *)(**(int **)(_UNK_01b5a5dc + 0x1b5a2e0) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01b5a5e0 + 0x1b5a300));
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
                        piVar6 = *(int **)(_UNK_01b5a5e4 + 0x1b5a368);
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
                    func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01b5a5ec + 0x1b5a3bc));
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
                                               **(undefined4 **)(_UNK_01b5a5f8 + 0x1b5a424));
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
                        func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_01b5a5fc + 0x1b5a478));
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
                  iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01b5a5bc + 0x1b5a178)
                                         );
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  uVar2 = *(undefined4 *)(iVar5 + 8);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01b5a5c0 + 0x1b5a1b4));
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
    iVar1 = func_0x029540a4(0xa686,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


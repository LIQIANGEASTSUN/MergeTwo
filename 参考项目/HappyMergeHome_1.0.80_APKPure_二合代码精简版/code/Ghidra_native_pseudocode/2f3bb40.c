
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f4bb40(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02f4c37c + 0x2f4bb5c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4c380 + 0x2f4bb70));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c384 + 0x2f4bb7c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c388 + 0x2f4bb88));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c38c + 0x2f4bb94));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c390 + 0x2f4bba0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c394 + 0x2f4bbac));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c398 + 0x2f4bbb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c39c + 0x2f4bbc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3a0 + 0x2f4bbd0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3a4 + 0x2f4bbdc));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3a8 + 0x2f4bbe8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3ac + 0x2f4bbf4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3b0 + 0x2f4bc00));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3b4 + 0x2f4bc0c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3b8 + 0x2f4bc18));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3bc + 0x2f4bc24));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3c0 + 0x2f4bc30));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3c4 + 0x2f4bc3c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3c8 + 0x2f4bc48));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3cc + 0x2f4bc54));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3d0 + 0x2f4bc60));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3d4 + 0x2f4bc6c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3d8 + 0x2f4bc78));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3dc + 0x2f4bc84));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3e0 + 0x2f4bc90));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3e4 + 0x2f4bc9c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3e8 + 0x2f4bca8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4c3ec + 0x2f4bcb4));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x6e0d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4c3f0 + 0x2f4bd1c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4c3f4 + 0x2f4bd38));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f4c3f8 + 0x2f4bd58));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x37c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f4c3fc + 0x2f4bd8c));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f4c400 + 0x2f4bda4));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02f4c404 + 0x2f4bdbc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_02f4c408 + 0x2f4bdec);
      do {
        if (*(int *)(**(int **)(_UNK_02f4c40c + 0x2f4bdf8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4c410 + 0x2f4be14));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02f4c414 + 0x2f4be34));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x37c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_02f4c418 + 0x2f4be68));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_02f4c41c + 0x2f4be94));
        if (*(int *)(**(int **)(_UNK_02f4c420 + 0x2f4beac) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_02f49f8c(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02f4c424 + 0x2f4bf20));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_02f4c428 + 0x2f4bf5c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_02f4c434 + 0x2f4bfd0) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_02f4c438 + 0x2f4bfe0)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f4c43c + 0x2f4c034));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_02f4c440 + 0x2f4c048));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_02f4c444 + 0x2f4c06c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_02f4c448 + 0x2f4c098));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_02f4c44c + 0x2f4c0cc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4c450 + 0x2f4c0ec));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_02f4c454 + 0x2f4c148)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_02f4c458 + 0x2f4c188);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02f4c45c + 0x2f4c1dc));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_02f4c468 + 0x2f4c234)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_02f4c46c + 0x2f4c260));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_02f4c470 + 0x2f4c280));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_02f4c474 + 0x2f4c2ac));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02f4c42c + 0x2f4bf7c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_02f4c430 + 0x2f4bfb8));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6e0d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


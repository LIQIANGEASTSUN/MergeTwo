
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd6b28(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02fd7360 + 0x2fd6b44);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd7364 + 0x2fd6b58));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7368 + 0x2fd6b64));
    func_0x01438628(*(undefined4 *)(_UNK_02fd736c + 0x2fd6b70));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7370 + 0x2fd6b7c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7374 + 0x2fd6b88));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7378 + 0x2fd6b94));
    func_0x01438628(*(undefined4 *)(_UNK_02fd737c + 0x2fd6ba0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7380 + 0x2fd6bac));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7384 + 0x2fd6bb8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7388 + 0x2fd6bc4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd738c + 0x2fd6bd0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7390 + 0x2fd6bdc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7394 + 0x2fd6be8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7398 + 0x2fd6bf4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd739c + 0x2fd6c00));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73a0 + 0x2fd6c0c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73a4 + 0x2fd6c18));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73a8 + 0x2fd6c24));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73ac + 0x2fd6c30));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73b0 + 0x2fd6c3c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73b4 + 0x2fd6c48));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73b8 + 0x2fd6c54));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73bc + 0x2fd6c60));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73c0 + 0x2fd6c6c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73c4 + 0x2fd6c78));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73c8 + 0x2fd6c84));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73cc + 0x2fd6c90));
    func_0x01438628(*(undefined4 *)(_UNK_02fd73d0 + 0x2fd6c9c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x710f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fd73d4 + 0x2fd6d04) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd73d8 + 0x2fd6d20));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02fd73dc + 0x2fd6d40));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02fd73e0 + 0x2fd6d74));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd73e4 + 0x2fd6d8c));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02fd73e8 + 0x2fd6da4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_02fd73ec + 0x2fd6dd0);
      do {
        if (*(int *)(**(int **)(_UNK_02fd73f0 + 0x2fd6ddc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd73f4 + 0x2fd6df8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02fd73f8 + 0x2fd6e18));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x38c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uVar9,**(undefined4 **)(_UNK_02fd73fc + 0x2fd6e50));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_02fd7400 + 0x2fd6e7c));
        if (*(int *)(**(int **)(_UNK_02fd7404 + 0x2fd6e94) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_02fd4f74(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02fd7408 + 0x2fd6f04));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_02fd740c + 0x2fd6f40));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_02fd7418 + 0x2fd6fb4) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02fd741c + 0x2fd6fc4));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = FUN_02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fd7420 + 0x2fd7018));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_02fd7424 + 0x2fd702c));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_02fd7428 + 0x2fd7050));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_02fd742c + 0x2fd707c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_02fd7430 + 0x2fd70b0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd7434 + 0x2fd70d0));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_02fd7438 + 0x2fd712c)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_02fd743c + 0x2fd716c);
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
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02fd7440 + 0x2fd71c0));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_02fd744c + 0x2fd7218)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x046c26fc(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_02fd7450 + 0x2fd7244));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_02fd7454 + 0x2fd7264));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar11,uVar2,**(undefined4 **)(_UNK_02fd7458 + 0x2fd7290));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_02fd7410 + 0x2fd6f60));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_02fd7414 + 0x2fd6f9c));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x710f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


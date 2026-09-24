
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d9a84(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_030da2c0 + 0x30d9aa0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030da2c4 + 0x30d9ab4));
    func_0x01438628(*(undefined4 *)(_UNK_030da2c8 + 0x30d9ac0));
    func_0x01438628(*(undefined4 *)(_UNK_030da2cc + 0x30d9acc));
    func_0x01438628(*(undefined4 *)(_UNK_030da2d0 + 0x30d9ad8));
    func_0x01438628(*(undefined4 *)(_UNK_030da2d4 + 0x30d9ae4));
    func_0x01438628(*(undefined4 *)(_UNK_030da2d8 + 0x30d9af0));
    func_0x01438628(*(undefined4 *)(_UNK_030da2dc + 0x30d9afc));
    func_0x01438628(*(undefined4 *)(_UNK_030da2e0 + 0x30d9b08));
    func_0x01438628(*(undefined4 *)(_UNK_030da2e4 + 0x30d9b14));
    func_0x01438628(*(undefined4 *)(_UNK_030da2e8 + 0x30d9b20));
    func_0x01438628(*(undefined4 *)(_UNK_030da2ec + 0x30d9b2c));
    func_0x01438628(*(undefined4 *)(_UNK_030da2f0 + 0x30d9b38));
    func_0x01438628(*(undefined4 *)(_UNK_030da2f4 + 0x30d9b44));
    func_0x01438628(*(undefined4 *)(_UNK_030da2f8 + 0x30d9b50));
    func_0x01438628(*(undefined4 *)(_UNK_030da2fc + 0x30d9b5c));
    func_0x01438628(*(undefined4 *)(_UNK_030da300 + 0x30d9b68));
    func_0x01438628(*(undefined4 *)(_UNK_030da304 + 0x30d9b74));
    func_0x01438628(*(undefined4 *)(_UNK_030da308 + 0x30d9b80));
    func_0x01438628(*(undefined4 *)(_UNK_030da30c + 0x30d9b8c));
    func_0x01438628(*(undefined4 *)(_UNK_030da310 + 0x30d9b98));
    func_0x01438628(*(undefined4 *)(_UNK_030da314 + 0x30d9ba4));
    func_0x01438628(*(undefined4 *)(_UNK_030da318 + 0x30d9bb0));
    func_0x01438628(*(undefined4 *)(_UNK_030da31c + 0x30d9bbc));
    func_0x01438628(*(undefined4 *)(_UNK_030da320 + 0x30d9bc8));
    func_0x01438628(*(undefined4 *)(_UNK_030da324 + 0x30d9bd4));
    func_0x01438628(*(undefined4 *)(_UNK_030da328 + 0x30d9be0));
    func_0x01438628(*(undefined4 *)(_UNK_030da32c + 0x30d9bec));
    func_0x01438628(*(undefined4 *)(_UNK_030da330 + 0x30d9bf8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7724,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030da334 + 0x30d9c60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030da338 + 0x30d9c7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_030da33c + 0x30d9c9c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x388);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_030da340 + 0x30d9cd0));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030da344 + 0x30d9ce8));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_030da348 + 0x30d9d00));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_030da34c + 0x30d9d30);
      do {
        if (*(int *)(**(int **)(_UNK_030da350 + 0x30d9d3c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030da354 + 0x30d9d58));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_030da358 + 0x30d9d78));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x388);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_030da35c + 0x30d9dac));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_030da360 + 0x30d9dd8));
        if (*(int *)(**(int **)(_UNK_030da364 + 0x30d9df0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_030d7edc(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_030da368 + 0x30d9e64));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_030da36c + 0x30d9ea0));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_030da378 + 0x30d9f14) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_030da37c + 0x30d9f24)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030da380 + 0x30d9f78));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_030da384 + 0x30d9f8c));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_030da388 + 0x30d9fb0));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_030da38c + 0x30d9fdc));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_030da390 + 0x30da010) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_030da394 + 0x30da030));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_030da398 + 0x30da08c)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_030da39c + 0x30da0cc);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_030da3a0 + 0x30da120));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_030da3ac + 0x30da178)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_030da3b0 + 0x30da1a4));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_030da3b4 + 0x30da1c4));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_030da3b8 + 0x30da1f0));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_030da370 + 0x30d9ec0));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_030da374 + 0x30d9efc));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7724,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01841740(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_01841f7c + 0x184175c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01841f80 + 0x1841770));
    func_0x01438628(*(undefined4 *)(_UNK_01841f84 + 0x184177c));
    func_0x01438628(*(undefined4 *)(_UNK_01841f88 + 0x1841788));
    func_0x01438628(*(undefined4 *)(_UNK_01841f8c + 0x1841794));
    func_0x01438628(*(undefined4 *)(_UNK_01841f90 + 0x18417a0));
    func_0x01438628(*(undefined4 *)(_UNK_01841f94 + 0x18417ac));
    func_0x01438628(*(undefined4 *)(_UNK_01841f98 + 0x18417b8));
    func_0x01438628(*(undefined4 *)(_UNK_01841f9c + 0x18417c4));
    func_0x01438628(*(undefined4 *)(_UNK_01841fa0 + 0x18417d0));
    func_0x01438628(*(undefined4 *)(_UNK_01841fa4 + 0x18417dc));
    func_0x01438628(*(undefined4 *)(_UNK_01841fa8 + 0x18417e8));
    func_0x01438628(*(undefined4 *)(_UNK_01841fac + 0x18417f4));
    func_0x01438628(*(undefined4 *)(_UNK_01841fb0 + 0x1841800));
    func_0x01438628(*(undefined4 *)(_UNK_01841fb4 + 0x184180c));
    func_0x01438628(*(undefined4 *)(_UNK_01841fb8 + 0x1841818));
    func_0x01438628(*(undefined4 *)(_UNK_01841fbc + 0x1841824));
    func_0x01438628(*(undefined4 *)(_UNK_01841fc0 + 0x1841830));
    func_0x01438628(*(undefined4 *)(_UNK_01841fc4 + 0x184183c));
    func_0x01438628(*(undefined4 *)(_UNK_01841fc8 + 0x1841848));
    func_0x01438628(*(undefined4 *)(_UNK_01841fcc + 0x1841854));
    func_0x01438628(*(undefined4 *)(_UNK_01841fd0 + 0x1841860));
    func_0x01438628(*(undefined4 *)(_UNK_01841fd4 + 0x184186c));
    func_0x01438628(*(undefined4 *)(_UNK_01841fd8 + 0x1841878));
    func_0x01438628(*(undefined4 *)(_UNK_01841fdc + 0x1841884));
    func_0x01438628(*(undefined4 *)(_UNK_01841fe0 + 0x1841890));
    func_0x01438628(*(undefined4 *)(_UNK_01841fe4 + 0x184189c));
    func_0x01438628(*(undefined4 *)(_UNK_01841fe8 + 0x18418a8));
    func_0x01438628(*(undefined4 *)(_UNK_01841fec + 0x18418b4));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x924f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01841ff0 + 0x184191c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01841ff4 + 0x1841938));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01841ff8 + 0x1841958));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x310);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01841ffc + 0x184198c));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01842000 + 0x18419a4));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01842004 + 0x18419bc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_01842008 + 0x18419ec);
      do {
        if (*(int *)(**(int **)(_UNK_0184200c + 0x18419f8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01842010 + 0x1841a14));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_01842014 + 0x1841a34));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x310);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_01842018 + 0x1841a68));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_0184201c + 0x1841a94));
        if (*(int *)(**(int **)(_UNK_01842020 + 0x1841aac) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0183fb8c(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01842024 + 0x1841b20));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01842028 + 0x1841b5c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_01842034 + 0x1841bd0) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_01842038 + 0x1841be0)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0184203c + 0x1841c34));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01842040 + 0x1841c48));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01842044 + 0x1841c6c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01842048 + 0x1841c98));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0184204c + 0x1841ccc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01842050 + 0x1841cec));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_01842054 + 0x1841d48)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_01842058 + 0x1841d88);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_0184205c + 0x1841ddc));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_01842068 + 0x1841e34)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_0184206c + 0x1841e60));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_01842070 + 0x1841e80));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_01842074 + 0x1841eac));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0184202c + 0x1841b7c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01842030 + 0x1841bb8));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x924f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


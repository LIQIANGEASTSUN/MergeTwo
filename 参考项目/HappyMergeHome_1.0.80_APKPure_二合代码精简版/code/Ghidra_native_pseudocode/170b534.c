
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171b534(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_0171bd6c + 0x171b550);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171bd70 + 0x171b564));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd74 + 0x171b570));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd78 + 0x171b57c));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd7c + 0x171b588));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd80 + 0x171b594));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd84 + 0x171b5a0));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd88 + 0x171b5ac));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd8c + 0x171b5b8));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd90 + 0x171b5c4));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd94 + 0x171b5d0));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd98 + 0x171b5dc));
    func_0x01438628(*(undefined4 *)(_UNK_0171bd9c + 0x171b5e8));
    func_0x01438628(*(undefined4 *)(_UNK_0171bda0 + 0x171b5f4));
    func_0x01438628(*(undefined4 *)(_UNK_0171bda4 + 0x171b600));
    func_0x01438628(*(undefined4 *)(_UNK_0171bda8 + 0x171b60c));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdac + 0x171b618));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdb0 + 0x171b624));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdb4 + 0x171b630));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdb8 + 0x171b63c));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdbc + 0x171b648));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdc0 + 0x171b654));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdc4 + 0x171b660));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdc8 + 0x171b66c));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdcc + 0x171b678));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdd0 + 0x171b684));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdd4 + 0x171b690));
    func_0x01438628(*(undefined4 *)(_UNK_0171bdd8 + 0x171b69c));
    func_0x01438628(*(undefined4 *)(_UNK_0171bddc + 0x171b6a8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8b86,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0171bde0 + 0x171b710) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171bde4 + 0x171b72c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0171bde8 + 0x171b74c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3a0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0171bdec + 0x171b780));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0171bdf0 + 0x171b798));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_0171bdf4 + 0x171b7b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_0171bdf8 + 0x171b7dc);
      do {
        if (*(int *)(**(int **)(_UNK_0171bdfc + 0x171b7e8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0171be00 + 0x171b804));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0171be04 + 0x171b824));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x3a0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_0171be08 + 0x171b85c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_0171be0c + 0x171b888));
        if (*(int *)(**(int **)(_UNK_0171be10 + 0x171b8a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0171998c(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0171be14 + 0x171b910));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_0171be18 + 0x171b94c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0171be24 + 0x171b9c0) + 0x5c);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0171be28 + 0x171b9d0));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0171be2c + 0x171ba24));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_0171be30 + 0x171ba38));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_0171be34 + 0x171ba5c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_0171be38 + 0x171ba88));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0171be3c + 0x171babc) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0171be40 + 0x171badc));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_0171be44 + 0x171bb38)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0171be48 + 0x171bb78);
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
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_0171be4c + 0x171bbcc));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_0171be58 + 0x171bc24)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x024f0540(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_0171be5c + 0x171bc50));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_0171be60 + 0x171bc70));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_0171be64 + 0x171bc9c));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0171be1c + 0x171b96c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_0171be20 + 0x171b9a8));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8b86,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


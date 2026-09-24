
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f4e8c(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_016f56c8 + 0x16f4ea8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f56cc + 0x16f4ebc));
    func_0x01438628(*(undefined4 *)(_UNK_016f56d0 + 0x16f4ec8));
    func_0x01438628(*(undefined4 *)(_UNK_016f56d4 + 0x16f4ed4));
    func_0x01438628(*(undefined4 *)(_UNK_016f56d8 + 0x16f4ee0));
    func_0x01438628(*(undefined4 *)(_UNK_016f56dc + 0x16f4eec));
    func_0x01438628(*(undefined4 *)(_UNK_016f56e0 + 0x16f4ef8));
    func_0x01438628(*(undefined4 *)(_UNK_016f56e4 + 0x16f4f04));
    func_0x01438628(*(undefined4 *)(_UNK_016f56e8 + 0x16f4f10));
    func_0x01438628(*(undefined4 *)(_UNK_016f56ec + 0x16f4f1c));
    func_0x01438628(*(undefined4 *)(_UNK_016f56f0 + 0x16f4f28));
    func_0x01438628(*(undefined4 *)(_UNK_016f56f4 + 0x16f4f34));
    func_0x01438628(*(undefined4 *)(_UNK_016f56f8 + 0x16f4f40));
    func_0x01438628(*(undefined4 *)(_UNK_016f56fc + 0x16f4f4c));
    func_0x01438628(*(undefined4 *)(_UNK_016f5700 + 0x16f4f58));
    func_0x01438628(*(undefined4 *)(_UNK_016f5704 + 0x16f4f64));
    func_0x01438628(*(undefined4 *)(_UNK_016f5708 + 0x16f4f70));
    func_0x01438628(*(undefined4 *)(_UNK_016f570c + 0x16f4f7c));
    func_0x01438628(*(undefined4 *)(_UNK_016f5710 + 0x16f4f88));
    func_0x01438628(*(undefined4 *)(_UNK_016f5714 + 0x16f4f94));
    func_0x01438628(*(undefined4 *)(_UNK_016f5718 + 0x16f4fa0));
    func_0x01438628(*(undefined4 *)(_UNK_016f571c + 0x16f4fac));
    func_0x01438628(*(undefined4 *)(_UNK_016f5720 + 0x16f4fb8));
    func_0x01438628(*(undefined4 *)(_UNK_016f5724 + 0x16f4fc4));
    func_0x01438628(*(undefined4 *)(_UNK_016f5728 + 0x16f4fd0));
    func_0x01438628(*(undefined4 *)(_UNK_016f572c + 0x16f4fdc));
    func_0x01438628(*(undefined4 *)(_UNK_016f5730 + 0x16f4fe8));
    func_0x01438628(*(undefined4 *)(_UNK_016f5734 + 0x16f4ff4));
    func_0x01438628(*(undefined4 *)(_UNK_016f5738 + 0x16f5000));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8aa9,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016f573c + 0x16f5068) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f5740 + 0x16f5084));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016f5744 + 0x16f50a4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 700);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016f5748 + 0x16f50d8));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f574c + 0x16f50f0));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_016f5750 + 0x16f5108));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_016f5754 + 0x16f5138);
      do {
        if (*(int *)(**(int **)(_UNK_016f5758 + 0x16f5144) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016f575c + 0x16f5160));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_016f5760 + 0x16f5180));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 700);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_016f5764 + 0x16f51b4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_016f5768 + 0x16f51e0));
        if (*(int *)(**(int **)(_UNK_016f576c + 0x16f51f8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_016f4018(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_016f5770 + 0x16f526c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_016f5774 + 0x16f52a8));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_016f5780 + 0x16f531c) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_016f5784 + 0x16f532c)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016f5788 + 0x16f5380));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_016f578c + 0x16f5394));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_016f5790 + 0x16f53b8));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_016f5794 + 0x16f53e4));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_016f5798 + 0x16f5418) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_016f579c + 0x16f5438));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_016f57a0 + 0x16f5494)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_016f57a4 + 0x16f54d4);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_016f57a8 + 0x16f5528));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_016f57b4 + 0x16f5580)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_016f57b8 + 0x16f55ac));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_016f57bc + 0x16f55cc));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_016f57c0 + 0x16f55f8));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_016f5778 + 0x16f52c8));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_016f577c + 0x16f5304));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8aa9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


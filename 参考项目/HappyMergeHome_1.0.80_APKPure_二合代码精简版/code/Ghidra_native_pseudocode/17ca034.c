
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017da034(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_017da870 + 0x17da050);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017da874 + 0x17da064));
    func_0x01438628(*(undefined4 *)(_UNK_017da878 + 0x17da070));
    func_0x01438628(*(undefined4 *)(_UNK_017da87c + 0x17da07c));
    func_0x01438628(*(undefined4 *)(_UNK_017da880 + 0x17da088));
    func_0x01438628(*(undefined4 *)(_UNK_017da884 + 0x17da094));
    func_0x01438628(*(undefined4 *)(_UNK_017da888 + 0x17da0a0));
    func_0x01438628(*(undefined4 *)(_UNK_017da88c + 0x17da0ac));
    func_0x01438628(*(undefined4 *)(_UNK_017da890 + 0x17da0b8));
    func_0x01438628(*(undefined4 *)(_UNK_017da894 + 0x17da0c4));
    func_0x01438628(*(undefined4 *)(_UNK_017da898 + 0x17da0d0));
    func_0x01438628(*(undefined4 *)(_UNK_017da89c + 0x17da0dc));
    func_0x01438628(*(undefined4 *)(_UNK_017da8a0 + 0x17da0e8));
    func_0x01438628(*(undefined4 *)(_UNK_017da8a4 + 0x17da0f4));
    func_0x01438628(*(undefined4 *)(_UNK_017da8a8 + 0x17da100));
    func_0x01438628(*(undefined4 *)(_UNK_017da8ac + 0x17da10c));
    func_0x01438628(*(undefined4 *)(_UNK_017da8b0 + 0x17da118));
    func_0x01438628(*(undefined4 *)(_UNK_017da8b4 + 0x17da124));
    func_0x01438628(*(undefined4 *)(_UNK_017da8b8 + 0x17da130));
    func_0x01438628(*(undefined4 *)(_UNK_017da8bc + 0x17da13c));
    func_0x01438628(*(undefined4 *)(_UNK_017da8c0 + 0x17da148));
    func_0x01438628(*(undefined4 *)(_UNK_017da8c4 + 0x17da154));
    func_0x01438628(*(undefined4 *)(_UNK_017da8c8 + 0x17da160));
    func_0x01438628(*(undefined4 *)(_UNK_017da8cc + 0x17da16c));
    func_0x01438628(*(undefined4 *)(_UNK_017da8d0 + 0x17da178));
    func_0x01438628(*(undefined4 *)(_UNK_017da8d4 + 0x17da184));
    func_0x01438628(*(undefined4 *)(_UNK_017da8d8 + 0x17da190));
    func_0x01438628(*(undefined4 *)(_UNK_017da8dc + 0x17da19c));
    func_0x01438628(*(undefined4 *)(_UNK_017da8e0 + 0x17da1a8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8fab,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017da8e4 + 0x17da210) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017da8e8 + 0x17da22c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017da8ec + 0x17da24c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x20c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017da8f0 + 0x17da280));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017da8f4 + 0x17da298));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_017da8f8 + 0x17da2b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_017da8fc + 0x17da2e0);
      do {
        if (*(int *)(**(int **)(_UNK_017da900 + 0x17da2ec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017da904 + 0x17da308));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_017da908 + 0x17da328));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x20c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_017da90c + 0x17da35c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_017da910 + 0x17da388));
        if (*(int *)(**(int **)(_UNK_017da914 + 0x17da3a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_017d8f70(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_017da918 + 0x17da414));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_017da91c + 0x17da450));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_017da928 + 0x17da4c4) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_017da92c + 0x17da4d4)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017da930 + 0x17da528));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_017da934 + 0x17da53c));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_017da938 + 0x17da560));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_017da93c + 0x17da58c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_017da940 + 0x17da5c0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_017da944 + 0x17da5e0));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_017da948 + 0x17da63c)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_017da94c + 0x17da67c);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_017da950 + 0x17da6d0));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_017da95c + 0x17da728)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_017da960 + 0x17da754));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_017da964 + 0x17da774));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_017da968 + 0x17da7a0));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_017da920 + 0x17da470));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_017da924 + 0x17da4ac));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8fab,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}


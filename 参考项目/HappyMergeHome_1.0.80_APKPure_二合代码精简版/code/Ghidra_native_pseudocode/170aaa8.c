
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0171aaa8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int unaff_r10;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar13 = &uStack_28;
  pcVar10 = (char *)(iRam0171b498 + 0x171aac4);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0171b49c + 0x171aad8));
    func_0x01438628(*(undefined4 *)(uRam0171b4a0 + 0x171aae4));
    func_0x01438628(*(undefined4 *)(iRam0171b4a4 + 0x171aaf0));
    func_0x01438628(*(undefined4 *)(iRam0171b4a8 + 0x171aafc));
    func_0x01438628(*(undefined4 *)(iRam0171b4ac + 0x171ab08));
    func_0x01438628(*(undefined4 *)(iRam0171b4b0 + 0x171ab14));
    func_0x01438628(*(undefined4 *)(iRam0171b4b4 + 0x171ab20));
    func_0x01438628(*(undefined4 *)(iRam0171b4b8 + 0x171ab2c));
    func_0x01438628(*(undefined4 *)(iRam0171b4bc + 0x171ab38));
    func_0x01438628(*(undefined4 *)(iRam0171b4c0 + 0x171ab44));
    func_0x01438628(*(undefined4 *)(iRam0171b4c4 + 0x171ab50));
    func_0x01438628(*(undefined4 *)(iRam0171b4c8 + 0x171ab5c));
    func_0x01438628(*(undefined4 *)(iRam0171b4cc + 0x171ab68));
    func_0x01438628(*(undefined4 *)(iRam0171b4d0 + 0x171ab74));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x164d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam0171b4d4 + 0x171abd4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam0171b4d8 + 0x171abf0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam0171b4dc + 0x171ac10));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar1 + 0x3a0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024eede4(iVar9,param_2,**(undefined4 **)(iRam0171b4e0 + 0x171ac48));
    iVar9 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x3a0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam0171b4e4 + 0x171ac7c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar2 + 0x6c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar5 + 8) != '\0') {
        iVar5 = *(int *)(iVar2 + 0x6c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar5 + 0x14) == '\0') {
          iVar9 = func_0x014388d4(**(undefined4 **)(iRam0171b4e8 + 0x171ace4));
          func_0x024eed9c(iVar9,**(undefined4 **)(iRam0171b4ec + 0x171acf8));
          iVar5 = 0;
          puVar12 = *(undefined4 **)(iRam0171b4f0 + 0x171ad10);
          while( true ) {
            iVar6 = *(int *)(iVar2 + 0x6c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar5) break;
            iVar7 = *(int *)(iVar2 + 0x6c);
            iVar6 = iVar7;
            if (iVar7 == 0) {
              func_0x014388e4();
              iVar6 = *(int *)(iVar2 + 0x6c);
              bVar14 = iVar6 == 0;
              if (bVar14) {
                uVar15 = func_0x014388e4();
                iVar6 = 0;
                if (bVar14) {
                  uVar8 = uRam0171b4a0 & 0xff;
                  iVar9 = *(int *)(&__DT_SYMTAB[0x29].st_info + uVar8);
                  iVar6 = uVar8 + 0x119f0;
                  puVar13 = *(undefined4 **)(uVar8 + 0x11624);
                }
                *(undefined4 *)((int)puVar13 + -4) = 0x171b498;
                *(int *)((int)puVar13 + -8) = iVar9;
                *(int *)((int)puVar13 + -0xc) = unaff_r10;
                *(int *)((int)puVar13 + -0x10) = iVar5;
                *(int *)((int)puVar13 + -0x14) = iVar2;
                *(undefined4 **)((int)puVar13 + -0x18) = puVar12;
                *(int *)((int)puVar13 + -0x1c) = iVar1;
                *(int *)((int)puVar13 + -0x20) = param_2;
                *(int *)((int)puVar13 + -0x24) = iVar6;
                *(int *)((int)puVar13 + -0x4c) = (int)((ulonglong)uVar15 >> 0x20);
                pcVar10 = (char *)(_UNK_0171bd6c + 0x171b550);
                if (*pcVar10 == '\0') {
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
                  *pcVar10 = '\x01';
                }
                *(undefined4 *)((int)puVar13 + -0x38) = 0;
                *(undefined4 *)((int)puVar13 + -0x34) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                *(undefined4 *)((int)puVar13 + -0x30) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                *(undefined4 *)((int)puVar13 + -0x2c) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
                  uVar11 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0171bdec + 0x171b780));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0171bdf0 + 0x171b798));
                  func_0x024f108c(iVar1,uVar11,**(undefined4 **)(_UNK_0171bdf4 + 0x171b7b0));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = *(int *)(iVar1 + 0xc);
                  uVar8 = iVar9 - 1;
                  if (-1 < (int)uVar8) {
                    puVar12 = *(undefined4 **)(_UNK_0171bdf8 + 0x171b7dc);
                    *(int *)((int)puVar13 + -0x54) = iVar1;
                    do {
                      if (*(int *)(**(int **)(_UNK_0171bdfc + 0x171b7e8) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_0171be00 + 0x171b804));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x036c7bec(iVar9,**(undefined4 **)(_UNK_0171be04 + 0x171b824));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x3a0);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar11 = func_0x0152983c(iVar1,uVar8,
                                               **(undefined4 **)(_UNK_0171be08 + 0x171b85c));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      *(uint *)((int)puVar13 + -0x50) = uVar8;
                      iVar1 = func_0x024f04d4(iVar9,uVar11,
                                              **(undefined4 **)(_UNK_0171be0c + 0x171b888));
                      if (*(int *)(**(int **)(_UNK_0171be10 + 0x171b8a0) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = FUN_0171998c(iVar1);
                      if ((*(int *)((int)puVar13 + -0x4c) != 0 && iVar9 != 0) &&
                         (iVar9 = *(int *)(*(int *)((int)puVar13 + -0x4c) + 0xc), 0 < iVar9)) {
                        iVar2 = 0;
                        do {
                          if (iVar1 == 0) {
                            func_0x014388e4();
                          }
                          iVar5 = *(int *)(iVar1 + 0x14);
                          iVar9 = func_0x0152983c(*(undefined4 *)((int)puVar13 + -0x4c),iVar2,
                                                  **(undefined4 **)(_UNK_0171be14 + 0x171b910));
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          uVar11 = *(undefined4 *)(iVar9 + 8);
                          if (iVar5 == 0) {
                            func_0x014388e4();
                          }
                          iVar9 = func_0x024f0540(iVar5,uVar11,
                                                  **(undefined4 **)(_UNK_0171be18 + 0x171b94c));
                          if (iVar9 == 0) {
                            iVar5 = **(int **)(**(int **)(_UNK_0171be24 + 0x171b9c0) + 0x5c);
                            iVar9 = func_0x0152983c(*(undefined4 *)((int)puVar13 + -0x4c),iVar2,
                                                    **(undefined4 **)(_UNK_0171be28 + 0x171b9d0));
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar9 + 8);
                            if (iVar5 == 0) {
                              func_0x014388e4();
                            }
                            iVar9 = func_0x02e651cc(iVar5,uVar11,0);
                            if (iVar9 != 0) {
                              iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0171be2c + 0x171ba24));
                              func_0x024f0510(iVar9,**(undefined4 **)(_UNK_0171be30 + 0x171ba38));
                              iVar5 = *(int *)(iVar1 + 0x14);
                              if (iVar5 == 0) {
                                func_0x014388e4();
                              }
                              iVar5 = func_0x024f10dc(iVar5,**(undefined4 **)
                                                              (_UNK_0171be34 + 0x171ba5c));
                              if (iVar5 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec((undefined4 *)((int)puVar13 + -0x48),iVar5,
                                              **(undefined4 **)(_UNK_0171be38 + 0x171ba88));
                              *(undefined4 *)((int)puVar13 + -0x38) =
                                   *(undefined4 *)((int)puVar13 + -0x48);
                              *(undefined4 *)((int)puVar13 + -0x34) =
                                   *(undefined4 *)((int)puVar13 + -0x44);
                              *(undefined4 *)((int)puVar13 + -0x30) =
                                   *(undefined4 *)((int)puVar13 + -0x40);
                              *(undefined4 *)((int)puVar13 + -0x2c) =
                                   *(undefined4 *)((int)puVar13 + -0x3c);
                              while (iVar5 = func_0x0151455c((undefined1 *)((int)puVar13 + -0x38),
                                                             *puVar12), iVar5 != 0) {
                                uVar11 = *(undefined4 *)((int)puVar13 + -0x2c);
                                if (*(int *)(**(int **)(_UNK_0171be3c + 0x171babc) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_0171be40 + 0x171badc)
                                                       );
                                if (iVar5 == 0) {
                                  func_0x014388e4();
                                }
                                iVar5 = func_0x029a6fa8(iVar5,uVar11,0);
                                if (iVar5 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar5 + 0x1c) - 3U < 3) {
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar5 = func_0x024f0f34(iVar9,uVar11,
                                                          **(undefined4 **)
                                                            (_UNK_0171be44 + 0x171bb38));
                                  if (iVar5 == 0) {
                                    if (iVar9 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar5 = *(int *)(iVar9 + 8);
                                    uVar8 = *(uint *)(iVar9 + 0xc);
                                    piVar3 = *(int **)(_UNK_0171be48 + 0x171bb78);
                                    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
                                    iVar6 = *piVar3;
                                    if (iVar5 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar8 < *(uint *)(iVar5 + 0xc)) {
                                      *(uint *)(iVar9 + 0xc) = uVar8 + 1;
                                      *(undefined4 *)(iVar5 + uVar8 * 4 + 0x10) = uVar11;
                                    }
                                    else {
                                      func_0x024f0520(iVar9,uVar11,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc((undefined1 *)((int)puVar13 + -0x38),
                                              **(undefined4 **)(_UNK_0171be4c + 0x171bbcc));
                              if (iVar9 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar9 + 0xc)) {
                                iVar5 = 0;
                                while( true ) {
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar9 + 0xc) <= iVar5) break;
                                  if (iVar1 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar6 = *(int *)(iVar1 + 0x14);
                                  uVar11 = func_0x024f0530(iVar9,iVar5,
                                                           **(undefined4 **)
                                                             (_UNK_0171be58 + 0x171bc24));
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar6 = func_0x024f0540(iVar6,uVar11,
                                                          **(undefined4 **)
                                                            (_UNK_0171be5c + 0x171bc50));
                                  if (iVar6 != 0) {
                                    iVar6 = *(int *)(iVar1 + 0x14);
                                    uVar11 = func_0x024f0530(iVar9,iVar5,
                                                             **(undefined4 **)
                                                               (_UNK_0171be60 + 0x171bc70));
                                    if (iVar6 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar6,uVar11,
                                                    **(undefined4 **)(_UNK_0171be64 + 0x171bc9c));
                                  }
                                  iVar5 = iVar5 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar5 = *(int *)(iVar1 + 0x14);
                            iVar9 = func_0x0152983c(*(undefined4 *)((int)puVar13 + -0x4c),iVar2,
                                                    **(undefined4 **)(_UNK_0171be1c + 0x171b96c));
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar9 + 8);
                            if (iVar5 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar5,uVar11,
                                            **(undefined4 **)(_UNK_0171be20 + 0x171b9a8));
                          }
                          iVar2 = iVar2 + 1;
                          iVar9 = *(int *)(*(int *)((int)puVar13 + -0x4c) + 0xc);
                        } while (iVar2 < iVar9);
                      }
                      iVar1 = *(int *)((int)puVar13 + -0x54);
                      uVar8 = *(int *)((int)puVar13 + -0x50) - 1;
                    } while (uVar8 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x8b86,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = func_0x02869298(iVar1,(int)uVar15,*(undefined4 *)((int)puVar13 + -0x4c),0)
                  ;
                }
                return iVar9;
              }
            }
            iVar1 = *(int *)(iVar6 + 0xc);
            param_2 = *(int *)(iVar7 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam0171b4f4 + 0x171adac));
            if (iVar6 != 0) {
              iVar6 = *(int *)(iVar2 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar6 + 9) != '\0') {
                iVar6 = *(int *)(iVar2 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar12);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar2 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar5,*puVar12);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(iVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam0171b4f8 + 0x171b174));
                    iVar1 = *(int *)(iVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0171b4fc + 0x171b1e0));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0171b500 + 0x171b1f8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (iVar9 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar9 + 8);
                    uVar8 = *(uint *)(iVar9 + 0xc);
                    piVar3 = *(int **)(iRam0171b504 + 0x171b248);
                    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(iVar9 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar9,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar12 = *(undefined4 **)(iRam0171b508 + 0x171b2a4);
                  }
                }
                iVar6 = *(int *)(iVar2 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar12);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar2 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar5,*puVar12);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(iVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam0171b50c + 0x171b364));
                    iVar1 = *(int *)(iVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x30);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0171b510 + 0x171b3d0));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0171b514 + 0x171b3e8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (iVar9 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar9 + 8);
                    uVar8 = *(uint *)(iVar9 + 0xc);
                    piVar3 = *(int **)(iRam0171b518 + 0x171b438);
                    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(iVar9 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar9,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar12 = *(undefined4 **)(iRam0171b51c + 0x171b494);
                  }
                }
              }
              iVar6 = *(int *)(iVar2 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x014e9698(iVar6,iVar5,*puVar12);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar6 = *(int *)(iVar2 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x014e9698(iVar6,iVar5,*puVar12);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                  iVar1 = *(int *)(iVar2 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x1c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar11 = func_0x024f05a4(iVar1,unaff_r10,
                                           **(undefined4 **)(iRam0171b520 + 0x171af84));
                  iVar1 = *(int *)(iVar2 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x20);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                          **(undefined4 **)(iRam0171b524 + 0x171aff0));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam0171b528 + 0x171b008));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                  if (iVar9 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar9 + 8);
                  uVar8 = *(uint *)(iVar9 + 0xc);
                  piVar3 = *(int **)(iRam0171b52c + 0x171b058);
                  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
                  iVar7 = *piVar3;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(iVar9 + 0xc) = uVar8 + 1;
                    piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                    *piVar3 = iVar1;
                    func_0x014385cc(piVar3,iVar1);
                  }
                  else {
                    func_0x0152874c(iVar9,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar12 = *(undefined4 **)(iRam0171b530 + 0x171b0b4);
                }
              }
            }
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
    return iVar9;
  }
  iVar1 = func_0x029540a4(0x164d,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar10 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar9,uVar11,&uStack_38,uVar4,0,0);
  iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0192c5b8(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int unaff_r10;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(iRam0192cfa8 + 0x192c5d4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0192cfac + 0x192c5e8));
    func_0x01438628(*(undefined4 *)(iRam0192cfb0 + 0x192c5f4));
    func_0x01438628(*(undefined4 *)(iRam0192cfb4 + 0x192c600));
    func_0x01438628(*(undefined4 *)(iRam0192cfb8 + 0x192c60c));
    func_0x01438628(*(undefined4 *)(iRam0192cfbc + 0x192c618));
    func_0x01438628(*(undefined4 *)(iRam0192cfc0 + 0x192c624));
    func_0x01438628(*(undefined4 *)(iRam0192cfc4 + 0x192c630));
    func_0x01438628(*(undefined4 *)(iRam0192cfc8 + 0x192c63c));
    func_0x01438628(*(undefined4 *)(iRam0192cfcc + 0x192c648));
    func_0x01438628(*(undefined4 *)(iRam0192cfd0 + 0x192c654));
    func_0x01438628(*(undefined4 *)(iRam0192cfd4 + 0x192c660));
    func_0x01438628(*(undefined4 *)(iRam0192cfd8 + 0x192c66c));
    func_0x01438628(*(undefined4 *)(iRam0192cfdc + 0x192c678));
    func_0x01438628(*(undefined4 *)(iRam0192cfe0 + 0x192c684));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x16a7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam0192cfe4 + 0x192c6e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam0192cfe8 + 0x192c700));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam0192cfec + 0x192c720));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar1 + 0x3ac);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x024eede4(iVar8,param_2,**(undefined4 **)(iRam0192cff0 + 0x192c758));
    iVar14 = 0;
    if (iVar8 != 0) {
      iVar1 = *(int *)(iVar1 + 0x3ac);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam0192cff4 + 0x192c78c));
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar8 + 0x6c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar4 + 8) != '\0') {
        iVar4 = *(int *)(iVar8 + 0x6c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar4 + 0x14) == '\0') {
          iVar14 = func_0x014388d4(**(undefined4 **)(iRam0192cff8 + 0x192c7f4));
          func_0x024eed9c(iVar14,**(undefined4 **)(iRam0192cffc + 0x192c808));
          iVar4 = 0;
          puVar12 = *(undefined4 **)(iRam0192d000 + 0x192c820);
          while( true ) {
            iVar5 = *(int *)(iVar8 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0xc);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar5 + 0xc) <= iVar4) break;
            iVar6 = *(int *)(iVar8 + 0x6c);
            iVar5 = iVar6;
            if (iVar6 == 0) {
              func_0x014388e4();
              iVar5 = *(int *)(iVar8 + 0x6c);
              bVar15 = iVar5 == 0;
              if (bVar15) {
                uVar11 = 0x192cfa8;
                uVar16 = func_0x014388e4();
                iVar5 = (int)((ulonglong)uVar16 >> 0x20);
                if (bVar15) {
                  uVar11 = 0x192dcad;
                  iVar4 = *(int *)(&__DT_SYMTAB[0x2a7].st_info + iRam0192cfa8);
                  unaff_r10 = *(int *)((int)&__DT_SYMTAB[0x3fa].st_size + iRam0192cfa8);
                  iVar14 = *(int *)((int)&__DT_SYMTAB[0x4ac].st_value + iRam0192cfa8);
                }
                pcVar9 = (char *)(_UNK_0192d87c + 0x192d060);
                iStack_4c = iVar6;
                iStack_48 = param_2;
                iStack_44 = iVar1;
                puStack_40 = puVar12;
                iStack_3c = iVar8;
                iStack_38 = iVar4;
                iStack_34 = unaff_r10;
                iStack_30 = iVar14;
                uStack_2c = uVar11;
                if (*pcVar9 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_0192d880 + 0x192d074));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d884 + 0x192d080));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d888 + 0x192d08c));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d88c + 0x192d098));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d890 + 0x192d0a4));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d894 + 0x192d0b0));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d898 + 0x192d0bc));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d89c + 0x192d0c8));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8a0 + 0x192d0d4));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8a4 + 0x192d0e0));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8a8 + 0x192d0ec));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8ac + 0x192d0f8));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8b0 + 0x192d104));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8b4 + 0x192d110));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8b8 + 0x192d11c));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8bc + 0x192d128));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8c0 + 0x192d134));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8c4 + 0x192d140));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8c8 + 0x192d14c));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8cc + 0x192d158));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8d0 + 0x192d164));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8d4 + 0x192d170));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8d8 + 0x192d17c));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8dc + 0x192d188));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8e0 + 0x192d194));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8e4 + 0x192d1a0));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8e8 + 0x192d1ac));
                  func_0x01438628(*(undefined4 *)(_UNK_0192d8ec + 0x192d1b8));
                  *pcVar9 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x97a4,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_0192d8f0 + 0x192d220) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0192d8f4 + 0x192d23c));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0192d8f8 + 0x192d25c));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x3ac);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar11 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0192d8fc + 0x192d290));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0192d900 + 0x192d2a8));
                  func_0x024f108c(iVar1,uVar11,**(undefined4 **)(_UNK_0192d904 + 0x192d2c0));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar1 + 0xc);
                  uVar7 = iVar8 - 1;
                  if (-1 < (int)uVar7) {
                    puVar12 = *(undefined4 **)(_UNK_0192d908 + 0x192d2ec);
                    do {
                      if (*(int *)(**(int **)(_UNK_0192d90c + 0x192d2f8) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_0192d910 + 0x192d314));
                      if (iVar8 == 0) {
                        func_0x014388e4();
                      }
                      iVar8 = func_0x036c7bec(iVar8,**(undefined4 **)(_UNK_0192d914 + 0x192d334));
                      if (iVar8 == 0) {
                        func_0x014388e4();
                      }
                      iVar8 = *(int *)(iVar8 + 0x3ac);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar11 = func_0x0152983c(iVar1,uVar7,
                                               **(undefined4 **)(_UNK_0192d918 + 0x192d36c));
                      if (iVar8 == 0) {
                        func_0x014388e4();
                      }
                      iVar14 = func_0x024f04d4(iVar8,uVar11,
                                               **(undefined4 **)(_UNK_0192d91c + 0x192d398));
                      if (*(int *)(**(int **)(_UNK_0192d920 + 0x192d3b0) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar8 = FUN_0192b49c(iVar14);
                      if ((iVar5 != 0 && iVar8 != 0) && (iVar8 = *(int *)(iVar5 + 0xc), 0 < iVar8))
                      {
                        iVar4 = 0;
                        do {
                          if (iVar14 == 0) {
                            func_0x014388e4();
                          }
                          iVar6 = *(int *)(iVar14 + 0x14);
                          iVar8 = func_0x0152983c(iVar5,iVar4,
                                                  **(undefined4 **)(_UNK_0192d924 + 0x192d420));
                          if (iVar8 == 0) {
                            func_0x014388e4();
                          }
                          uVar11 = *(undefined4 *)(iVar8 + 8);
                          if (iVar6 == 0) {
                            func_0x014388e4();
                          }
                          iVar8 = func_0x024f0540(iVar6,uVar11,
                                                  **(undefined4 **)(_UNK_0192d928 + 0x192d45c));
                          if (iVar8 == 0) {
                            iVar6 = **(int **)(**(int **)(_UNK_0192d934 + 0x192d4d0) + 0x5c);
                            iVar8 = func_0x0152983c(iVar5,iVar4,
                                                    **(undefined4 **)(_UNK_0192d938 + 0x192d4e0));
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar8 + 8);
                            if (iVar6 == 0) {
                              func_0x014388e4();
                            }
                            iVar8 = func_0x02e651cc(iVar6,uVar11,0);
                            if (iVar8 != 0) {
                              iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_0192d93c + 0x192d534));
                              func_0x024f0510(iVar8,**(undefined4 **)(_UNK_0192d940 + 0x192d548));
                              iVar6 = *(int *)(iVar14 + 0x14);
                              if (iVar6 == 0) {
                                func_0x014388e4();
                              }
                              iVar6 = func_0x024f10dc(iVar6,**(undefined4 **)
                                                              (_UNK_0192d944 + 0x192d56c));
                              if (iVar6 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar6,
                                              **(undefined4 **)(_UNK_0192d948 + 0x192d598));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar6 = func_0x0151455c(&uStack_60,*puVar12),
                                    uVar11 = uStack_54, iVar6 != 0) {
                                if (*(int *)(**(int **)(_UNK_0192d94c + 0x192d5cc) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0192d950 + 0x192d5ec)
                                                       );
                                if (iVar6 == 0) {
                                  func_0x014388e4();
                                }
                                iVar6 = func_0x029a6fa8(iVar6,uVar11,0);
                                if (iVar6 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar6 + 0x1c) - 3U < 3) {
                                  if (iVar8 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar6 = func_0x024f0f34(iVar8,uVar11,
                                                          **(undefined4 **)
                                                            (_UNK_0192d954 + 0x192d648));
                                  if (iVar6 == 0) {
                                    if (iVar8 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar6 = *(int *)(iVar8 + 8);
                                    uVar10 = *(uint *)(iVar8 + 0xc);
                                    piVar2 = *(int **)(_UNK_0192d958 + 0x192d688);
                                    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                                    iVar13 = *piVar2;
                                    if (iVar6 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                                      *(uint *)(iVar8 + 0xc) = uVar10 + 1;
                                      *(undefined4 *)(iVar6 + uVar10 * 4 + 0x10) = uVar11;
                                    }
                                    else {
                                      func_0x024f0520(iVar8,uVar11,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar13 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_0192d95c + 0x192d6dc));
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar8 + 0xc)) {
                                iVar6 = 0;
                                while( true ) {
                                  if (iVar8 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar8 + 0xc) <= iVar6) break;
                                  if (iVar14 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar13 = *(int *)(iVar14 + 0x14);
                                  uVar11 = func_0x024f0530(iVar8,iVar6,
                                                           **(undefined4 **)
                                                             (_UNK_0192d968 + 0x192d734));
                                  if (iVar13 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar13 = func_0x024f0540(iVar13,uVar11,
                                                           **(undefined4 **)
                                                             (_UNK_0192d96c + 0x192d760));
                                  if (iVar13 != 0) {
                                    iVar13 = *(int *)(iVar14 + 0x14);
                                    uVar11 = func_0x024f0530(iVar8,iVar6,
                                                             **(undefined4 **)
                                                               (_UNK_0192d970 + 0x192d780));
                                    if (iVar13 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar13,uVar11,
                                                    **(undefined4 **)(_UNK_0192d974 + 0x192d7ac));
                                  }
                                  iVar6 = iVar6 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar6 = *(int *)(iVar14 + 0x14);
                            iVar8 = func_0x0152983c(iVar5,iVar4,
                                                    **(undefined4 **)(_UNK_0192d92c + 0x192d47c));
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar8 + 8);
                            if (iVar6 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar6,uVar11,
                                            **(undefined4 **)(_UNK_0192d930 + 0x192d4b8));
                          }
                          iVar4 = iVar4 + 1;
                          iVar8 = *(int *)(iVar5 + 0xc);
                        } while (iVar4 < iVar8);
                      }
                      uVar7 = uVar7 - 1;
                    } while (uVar7 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x97a4,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = func_0x02869298(iVar1,(int)uVar16,iVar5,0);
                }
                return iVar8;
              }
            }
            iVar1 = *(int *)(iVar5 + 0xc);
            param_2 = *(int *)(iVar6 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam0192d004 + 0x192c8bc));
            if (iVar5 != 0) {
              iVar5 = *(int *)(iVar8 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar5 + 9) != '\0') {
                iVar5 = *(int *)(iVar8 + 0x6c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x014e9698(iVar5,iVar4,*puVar12);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar5 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar5 = *(int *)(iVar8 + 0x6c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0xc);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = func_0x014e9698(iVar5,iVar4,*puVar12);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0x14);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(iVar8 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam0192d008 + 0x192cc84));
                    iVar1 = *(int *)(iVar8 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar3 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0192d00c + 0x192ccf0));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0192d010 + 0x192cd08));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar3,0);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar14 + 8);
                    uVar7 = *(uint *)(iVar14 + 0xc);
                    piVar2 = *(int **)(iRam0192d014 + 0x192cd58);
                    *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
                    iVar6 = *piVar2;
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar7 < *(uint *)(iVar5 + 0xc)) {
                      *(uint *)(iVar14 + 0xc) = uVar7 + 1;
                      piVar2 = (int *)(iVar5 + uVar7 * 4 + 0x10);
                      *piVar2 = iVar1;
                      func_0x014385cc(piVar2,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar14,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar12 = *(undefined4 **)(iRam0192d018 + 0x192cdb4);
                  }
                }
                iVar5 = *(int *)(iVar8 + 0x6c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x014e9698(iVar5,iVar4,*puVar12);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar5 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar5 = *(int *)(iVar8 + 0x6c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0xc);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = func_0x014e9698(iVar5,iVar4,*puVar12);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0x2c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(iVar8 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam0192d01c + 0x192ce74));
                    iVar1 = *(int *)(iVar8 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x30);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar3 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0192d020 + 0x192cee0));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0192d024 + 0x192cef8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar3,0);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar14 + 8);
                    uVar7 = *(uint *)(iVar14 + 0xc);
                    piVar2 = *(int **)(iRam0192d028 + 0x192cf48);
                    *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
                    iVar6 = *piVar2;
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar7 < *(uint *)(iVar5 + 0xc)) {
                      *(uint *)(iVar14 + 0xc) = uVar7 + 1;
                      piVar2 = (int *)(iVar5 + uVar7 * 4 + 0x10);
                      *piVar2 = iVar1;
                      func_0x014385cc(piVar2,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar14,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar12 = *(undefined4 **)(iRam0192d02c + 0x192cfa4);
                  }
                }
              }
              iVar5 = *(int *)(iVar8 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x014e9698(iVar5,iVar4,*puVar12);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar5 = *(int *)(iVar8 + 0x6c);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(iVar5 + 0xc);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x014e9698(iVar5,iVar4,*puVar12);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(param_2 + 0x1c);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar5 + 0xc) <= unaff_r10) break;
                  iVar1 = *(int *)(iVar8 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x1c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar11 = func_0x024f05a4(iVar1,unaff_r10,
                                           **(undefined4 **)(iRam0192d030 + 0x192ca94));
                  iVar1 = *(int *)(iVar8 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar4,*puVar12);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x20);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar3 = func_0x024f05a4(iVar1,unaff_r10,
                                          **(undefined4 **)(iRam0192d034 + 0x192cb00));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam0192d038 + 0x192cb18));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar11,uVar3,0);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(iVar14 + 8);
                  uVar7 = *(uint *)(iVar14 + 0xc);
                  piVar2 = *(int **)(iRam0192d03c + 0x192cb68);
                  *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
                  iVar6 = *piVar2;
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar7 < *(uint *)(iVar5 + 0xc)) {
                    *(uint *)(iVar14 + 0xc) = uVar7 + 1;
                    piVar2 = (int *)(iVar5 + uVar7 * 4 + 0x10);
                    *piVar2 = iVar1;
                    func_0x014385cc(piVar2,iVar1);
                  }
                  else {
                    func_0x0152874c(iVar14,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar12 = *(undefined4 **)(iRam0192d040 + 0x192cbc4);
                }
              }
            }
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
    return iVar14;
  }
  iVar1 = func_0x029540a4(0x16a7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar9 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  iStack_30 = iStack_48;
  uStack_2c = iStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar8,uVar11,&iStack_38,uVar3);
  iVar1 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return iVar1;
}


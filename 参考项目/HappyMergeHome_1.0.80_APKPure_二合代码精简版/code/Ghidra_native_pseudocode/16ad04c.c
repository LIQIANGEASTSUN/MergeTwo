
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016bd04c(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 extraout_r2;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *unaff_r10;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uStack_78;
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
  undefined1 *puStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(iRam016bda3c + 0x16bd068);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam016bda40 + 0x16bd07c));
    func_0x01438628(*(undefined4 *)(iRam016bda44 + 0x16bd088));
    func_0x01438628(*(undefined4 *)(iRam016bda48 + 0x16bd094));
    func_0x01438628(*(undefined4 *)(iRam016bda4c + 0x16bd0a0));
    func_0x01438628(*(undefined4 *)(iRam016bda50 + 0x16bd0ac));
    func_0x01438628(*(undefined4 *)(iRam016bda54 + 0x16bd0b8));
    func_0x01438628(*(undefined4 *)(iRam016bda58 + 0x16bd0c4));
    func_0x01438628(*(undefined4 *)(iRam016bda5c + 0x16bd0d0));
    func_0x01438628(*(undefined4 *)(iRam016bda60 + 0x16bd0dc));
    func_0x01438628(*(undefined4 *)(iRam016bda64 + 0x16bd0e8));
    func_0x01438628(*(undefined4 *)(iRam016bda68 + 0x16bd0f4));
    func_0x01438628(*(undefined4 *)(iRam016bda6c + 0x16bd100));
    func_0x01438628(*(undefined4 *)(iRam016bda70 + 0x16bd10c));
    func_0x01438628(*(undefined4 *)(iRam016bda74 + 0x16bd118));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1830,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam016bda78 + 0x16bd178) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam016bda7c + 0x16bd194));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(iRam016bda80 + 0x16bd1b4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar1 + 0x35c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x024eede4(iVar9,param_2,**(undefined4 **)(iRam016bda84 + 0x16bd1ec));
    uVar2 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)(iVar1 + 0x35c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam016bda88 + 0x16bd220));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar9 + 0x6c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar5 + 8) != '\0') {
        iVar5 = *(int *)(iVar9 + 0x6c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar5 + 0x14) == '\0') {
          uVar2 = func_0x014388d4(**(undefined4 **)(iRam016bda8c + 0x16bd288));
          func_0x024eed9c(uVar2,**(undefined4 **)(iRam016bda90 + 0x16bd29c));
          iVar5 = 0;
          puVar12 = *(undefined4 **)(iRam016bda94 + 0x16bd2b4);
          while( true ) {
            iVar6 = *(int *)(iVar9 + 0x6c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar5) break;
            iVar7 = *(int *)(iVar9 + 0x6c);
            iVar6 = iVar7;
            if (iVar7 == 0) {
              func_0x014388e4();
              iVar6 = *(int *)(iVar9 + 0x6c);
              bVar15 = iVar6 == 0;
              if (bVar15) {
                uVar16 = func_0x014388e4();
                iVar6 = (int)((ulonglong)uVar16 >> 0x20);
                puStack_48 = param_2;
                if (bVar15) {
                  puStack_48 = param_2 + 0x4f4;
                  *param_2 = extraout_r2;
                  iVar9 = *(int *)(**(int **)(**(int **)(*(int *)**(undefined4 **)
                                                                   (*(int *)(**(int **)*unaff_r10 +
                                                                            0x8f4) + 0xe18) + 0x724)
                                             + 0xe08) + 0x3860);
                  iVar5 = *(int *)(iVar9 + 0x23f8);
                  iVar14 = *(int *)(iVar9 + 0x30a0);
                  iVar9 = *(int *)(iVar14 + 0xf94);
                  unaff_r10 = *(undefined4 **)**(undefined4 **)(iVar14 + 0x1ebc);
                }
                uStack_2c = 0x16bda3c;
                pcVar10 = (char *)(_UNK_016be314 + 0x16bdaf4);
                iStack_4c = iVar7;
                iStack_44 = iVar1;
                puStack_40 = puVar12;
                iStack_3c = iVar9;
                iStack_38 = iVar5;
                puStack_34 = unaff_r10;
                uStack_30 = uVar2;
                if (*pcVar10 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_016be318 + 0x16bdb08));
                  func_0x01438628(*(undefined4 *)(_UNK_016be31c + 0x16bdb14));
                  func_0x01438628(*(undefined4 *)(_UNK_016be320 + 0x16bdb20));
                  func_0x01438628(*(undefined4 *)(_UNK_016be324 + 0x16bdb2c));
                  func_0x01438628(*(undefined4 *)(_UNK_016be328 + 0x16bdb38));
                  func_0x01438628(*(undefined4 *)(_UNK_016be32c + 0x16bdb44));
                  func_0x01438628(*(undefined4 *)(_UNK_016be330 + 0x16bdb50));
                  func_0x01438628(*(undefined4 *)(_UNK_016be334 + 0x16bdb5c));
                  func_0x01438628(*(undefined4 *)(_UNK_016be338 + 0x16bdb68));
                  func_0x01438628(*(undefined4 *)(_UNK_016be33c + 0x16bdb74));
                  func_0x01438628(*(undefined4 *)(_UNK_016be340 + 0x16bdb80));
                  func_0x01438628(*(undefined4 *)(_UNK_016be344 + 0x16bdb8c));
                  func_0x01438628(*(undefined4 *)(_UNK_016be348 + 0x16bdb98));
                  func_0x01438628(*(undefined4 *)(_UNK_016be34c + 0x16bdba4));
                  func_0x01438628(*(undefined4 *)(_UNK_016be350 + 0x16bdbb0));
                  func_0x01438628(*(undefined4 *)(_UNK_016be354 + 0x16bdbbc));
                  func_0x01438628(*(undefined4 *)(_UNK_016be358 + 0x16bdbc8));
                  func_0x01438628(*(undefined4 *)(_UNK_016be35c + 0x16bdbd4));
                  func_0x01438628(*(undefined4 *)(_UNK_016be360 + 0x16bdbe0));
                  func_0x01438628(*(undefined4 *)(_UNK_016be364 + 0x16bdbec));
                  func_0x01438628(*(undefined4 *)(_UNK_016be368 + 0x16bdbf8));
                  func_0x01438628(*(undefined4 *)(_UNK_016be36c + 0x16bdc04));
                  func_0x01438628(*(undefined4 *)(_UNK_016be370 + 0x16bdc10));
                  func_0x01438628(*(undefined4 *)(_UNK_016be374 + 0x16bdc1c));
                  func_0x01438628(*(undefined4 *)(_UNK_016be378 + 0x16bdc28));
                  func_0x01438628(*(undefined4 *)(_UNK_016be37c + 0x16bdc34));
                  func_0x01438628(*(undefined4 *)(_UNK_016be380 + 0x16bdc40));
                  func_0x01438628(*(undefined4 *)(_UNK_016be384 + 0x16bdc4c));
                  *pcVar10 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x8929,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_016be388 + 0x16bdcb4) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016be38c + 0x16bdcd0));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016be390 + 0x16bdcf0));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x35c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar11 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016be394 + 0x16bdd24));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016be398 + 0x16bdd3c));
                  func_0x024f108c(iVar1,uVar11,**(undefined4 **)(_UNK_016be39c + 0x16bdd54));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = *(int *)(iVar1 + 0xc) - 1;
                  if (-1 < (int)uStack_78) {
                    puVar12 = *(undefined4 **)(_UNK_016be3a0 + 0x16bdd84);
                    do {
                      if (*(int *)(**(int **)(_UNK_016be3a4 + 0x16bdd90) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_016be3a8 + 0x16bddac));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x024f04cc(iVar9,**(undefined4 **)(_UNK_016be3ac + 0x16bddcc));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x35c);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar11 = func_0x0152983c(iVar1,uStack_78,
                                               **(undefined4 **)(_UNK_016be3b0 + 0x16bde00));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x024f04d4(iVar9,uVar11,
                                              **(undefined4 **)(_UNK_016be3b4 + 0x16bde2c));
                      if (*(int *)(**(int **)(_UNK_016be3b8 + 0x16bde44) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar5 = FUN_016bbf24(iVar9);
                      if ((iVar6 != 0 && iVar5 != 0) && (0 < *(int *)(iVar6 + 0xc))) {
                        iVar5 = 0;
                        do {
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          iVar14 = *(int *)(iVar9 + 0x14);
                          iVar7 = func_0x0152983c(iVar6,iVar5,
                                                  **(undefined4 **)(_UNK_016be3bc + 0x16bdeb8));
                          if (iVar7 == 0) {
                            func_0x014388e4();
                          }
                          uVar11 = *(undefined4 *)(iVar7 + 8);
                          if (iVar14 == 0) {
                            func_0x014388e4();
                          }
                          iVar7 = func_0x024f0540(iVar14,uVar11,
                                                  **(undefined4 **)(_UNK_016be3c0 + 0x16bdef4));
                          if (iVar7 == 0) {
                            iVar14 = **(int **)(**(int **)(_UNK_016be3cc + 0x16bdf68) + 0x5c);
                            iVar7 = func_0x0152983c(iVar6,uStack_78,
                                                    **(undefined4 **)(_UNK_016be3d0 + 0x16bdf78));
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar7 + 8);
                            if (iVar14 == 0) {
                              func_0x014388e4();
                            }
                            iVar7 = func_0x02e651cc(iVar14,uVar11,0);
                            if (iVar7 != 0) {
                              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_016be3d4 + 0x16bdfcc));
                              func_0x024f0510(iVar7,**(undefined4 **)(_UNK_016be3d8 + 0x16bdfe0));
                              iVar14 = *(int *)(iVar9 + 0x14);
                              if (iVar14 == 0) {
                                func_0x014388e4();
                              }
                              iVar14 = func_0x024f10dc(iVar14,**(undefined4 **)
                                                                (_UNK_016be3dc + 0x16be004));
                              if (iVar14 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar14,
                                              **(undefined4 **)(_UNK_016be3e0 + 0x16be030));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar14 = func_0x0151455c(&uStack_60,*puVar12),
                                    uVar11 = uStack_54, iVar14 != 0) {
                                if (*(int *)(**(int **)(_UNK_016be3e4 + 0x16be064) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar14 = func_0x014e9518(**(undefined4 **)
                                                           (_UNK_016be3e8 + 0x16be084));
                                if (iVar14 == 0) {
                                  func_0x014388e4();
                                }
                                iVar14 = func_0x029a6fa8(iVar14,uVar11,0);
                                if (iVar14 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar14 + 0x1c) - 3U < 3) {
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = func_0x024f0f34(iVar7,uVar11,
                                                           **(undefined4 **)
                                                             (_UNK_016be3ec + 0x16be0e0));
                                  if (iVar14 == 0) {
                                    if (iVar7 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar14 = *(int *)(iVar7 + 8);
                                    uVar2 = *(uint *)(iVar7 + 0xc);
                                    piVar3 = *(int **)(_UNK_016be3f0 + 0x16be120);
                                    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                                    iVar13 = *piVar3;
                                    if (iVar14 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar2 < *(uint *)(iVar14 + 0xc)) {
                                      *(uint *)(iVar7 + 0xc) = uVar2 + 1;
                                      *(undefined4 *)(iVar14 + uVar2 * 4 + 0x10) = uVar11;
                                    }
                                    else {
                                      func_0x024f0520(iVar7,uVar11,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar13 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_016be3f4 + 0x16be174));
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar7 + 0xc)) {
                                iVar14 = 0;
                                while( true ) {
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar7 + 0xc) <= iVar14) break;
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar13 = *(int *)(iVar9 + 0x14);
                                  uVar11 = func_0x024f0530(iVar7,iVar14,
                                                           **(undefined4 **)
                                                             (_UNK_016be400 + 0x16be1cc));
                                  if (iVar13 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar13 = func_0x024f0540(iVar13,uVar11,
                                                           **(undefined4 **)
                                                             (_UNK_016be404 + 0x16be1f8));
                                  if (iVar13 != 0) {
                                    iVar13 = *(int *)(iVar9 + 0x14);
                                    uVar11 = func_0x024f0530(iVar7,iVar14,
                                                             **(undefined4 **)
                                                               (_UNK_016be408 + 0x16be218));
                                    if (iVar13 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar13,uVar11,
                                                    **(undefined4 **)(_UNK_016be40c + 0x16be244));
                                  }
                                  iVar14 = iVar14 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar14 = *(int *)(iVar9 + 0x14);
                            iVar7 = func_0x0152983c(iVar6,iVar5,
                                                    **(undefined4 **)(_UNK_016be3c4 + 0x16bdf14));
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar7 + 8);
                            if (iVar14 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar14,uVar11,
                                            **(undefined4 **)(_UNK_016be3c8 + 0x16bdf50));
                          }
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < *(int *)(iVar6 + 0xc));
                      }
                      uStack_78 = uStack_78 - 1;
                    } while (uStack_78 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x8929,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = func_0x02869298(iVar1,(int)uVar16,iVar6,0);
                }
                return uStack_78;
              }
            }
            iVar1 = *(int *)(iVar6 + 0xc);
            param_2 = *(undefined1 **)(iVar7 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar5,*puVar12);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (param_2 == (undefined1 *)0x0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam016bda98 + 0x16bd350));
            if (iVar6 != 0) {
              iVar6 = *(int *)(iVar9 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar6 + 9) != '\0') {
                iVar6 = *(int *)(iVar9 + 0x6c);
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
                  unaff_r10 = (undefined4 *)0x0;
                  while( true ) {
                    iVar6 = *(int *)(iVar9 + 0x6c);
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
                    if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                             **(undefined4 **)(iRam016bda9c + 0x16bd718));
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                            **(undefined4 **)(iRam016bdaa0 + 0x16bd784));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam016bdaa4 + 0x16bd79c));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar8 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam016bdaa8 + 0x16bd7ec);
                    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(uVar2 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(uVar2,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = (undefined4 *)((int)unaff_r10 + 1);
                    puVar12 = *(undefined4 **)(iRam016bdaac + 0x16bd848);
                  }
                }
                iVar6 = *(int *)(iVar9 + 0x6c);
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
                  unaff_r10 = (undefined4 *)0x0;
                  while( true ) {
                    iVar6 = *(int *)(iVar9 + 0x6c);
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
                    if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                             **(undefined4 **)(iRam016bdab0 + 0x16bd908));
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                            **(undefined4 **)(iRam016bdab4 + 0x16bd974));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam016bdab8 + 0x16bd98c));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar8 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam016bdabc + 0x16bd9dc);
                    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(uVar2 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(uVar2,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = (undefined4 *)((int)unaff_r10 + 1);
                    puVar12 = *(undefined4 **)(iRam016bdac0 + 0x16bda38);
                  }
                }
              }
              iVar6 = *(int *)(iVar9 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              param_2 = (undefined1 *)func_0x014e9698(iVar6,iVar5,*puVar12);
              if (param_2 == (undefined1 *)0x0) {
                func_0x014388e4();
              }
              if (param_2[0xc] == '\0') {
                unaff_r10 = (undefined4 *)0x0;
                while( true ) {
                  iVar6 = *(int *)(iVar9 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = (undefined1 *)func_0x014e9698(iVar6,iVar5,*puVar12);
                  if (param_2 == (undefined1 *)0x0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                  iVar1 = *(int *)(iVar9 + 0x6c);
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
                                           **(undefined4 **)(iRam016bdac4 + 0x16bd528));
                  iVar1 = *(int *)(iVar9 + 0x6c);
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
                                          **(undefined4 **)(iRam016bdac8 + 0x16bd594));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam016bdacc + 0x16bd5ac));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                  if (uVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(uVar2 + 8);
                  uVar8 = *(uint *)(uVar2 + 0xc);
                  piVar3 = *(int **)(iRam016bdad0 + 0x16bd5fc);
                  *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                  iVar7 = *piVar3;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(uVar2 + 0xc) = uVar8 + 1;
                    piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                    *piVar3 = iVar1;
                    func_0x014385cc(piVar3,iVar1);
                  }
                  else {
                    func_0x0152874c(uVar2,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = (undefined4 *)((int)unaff_r10 + 1);
                  puVar12 = *(undefined4 **)(iRam016bdad4 + 0x16bd658);
                }
              }
            }
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
    return uVar2;
  }
  iVar1 = func_0x029540a4(0x1830,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar10 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar10 = '\x01';
  }
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  puStack_34 = (undefined4 *)iStack_4c;
  uStack_30 = (uint)puStack_48;
  uStack_2c = iStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
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
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar9,uVar11,&iStack_38,uVar4);
  uVar2 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return uVar2;
}


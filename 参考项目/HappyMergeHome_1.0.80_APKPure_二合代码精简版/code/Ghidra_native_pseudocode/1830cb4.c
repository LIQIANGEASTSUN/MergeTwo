
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01840cb4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *extraout_r2;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int unaff_r10;
  undefined1 *extraout_r12;
  undefined1 unaff_pc;
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
  int iStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(iRam018416a4 + 0x1840cd0);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam018416a8 + 0x1840ce4));
    func_0x01438628(*(undefined4 *)(iRam018416ac + 0x1840cf0));
    func_0x01438628(*(undefined4 *)(iRam018416b0 + 0x1840cfc));
    func_0x01438628(*(undefined4 *)(iRam018416b4 + 0x1840d08));
    func_0x01438628(*(undefined4 *)(iRam018416b8 + 0x1840d14));
    func_0x01438628(*(undefined4 *)(iRam018416bc + 0x1840d20));
    func_0x01438628(*(undefined4 *)(iRam018416c0 + 0x1840d2c));
    func_0x01438628(*(undefined4 *)(iRam018416c4 + 0x1840d38));
    func_0x01438628(*(undefined4 *)(iRam018416c8 + 0x1840d44));
    func_0x01438628(*(undefined4 *)(iRam018416cc + 0x1840d50));
    func_0x01438628(*(undefined4 *)(iRam018416d0 + 0x1840d5c));
    func_0x01438628(*(undefined4 *)(iRam018416d4 + 0x1840d68));
    func_0x01438628(*(undefined4 *)(iRam018416d8 + 0x1840d74));
    func_0x01438628(*(undefined4 *)(iRam018416dc + 0x1840d80));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x17ca,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam018416e0 + 0x1840de0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam018416e4 + 0x1840dfc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam018416e8 + 0x1840e1c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar10 = *(int *)(iVar1 + 0x310);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar10 = func_0x024eede4(iVar10,param_2,**(undefined4 **)(iRam018416ec + 0x1840e54));
    uVar2 = 0;
    if (iVar10 != 0) {
      iVar1 = *(int *)(iVar1 + 0x310);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam018416f0 + 0x1840e88));
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar10 + 0x6c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar5 + 8) != '\0') {
        iVar5 = *(int *)(iVar10 + 0x6c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar5 + 0x14) == '\0') {
          uVar2 = func_0x014388d4(**(undefined4 **)(iRam018416f4 + 0x1840ef0));
          func_0x024eed9c(uVar2,**(undefined4 **)(iRam018416f8 + 0x1840f04));
          iVar5 = 0;
          puVar13 = *(undefined4 **)(iRam018416fc + 0x1840f1c);
          while( true ) {
            iVar6 = *(int *)(iVar10 + 0x6c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar5) break;
            iVar7 = *(int *)(iVar10 + 0x6c);
            iVar6 = iVar7;
            if (iVar7 == 0) {
              func_0x014388e4();
              iVar6 = *(int *)(iVar10 + 0x6c);
              bVar15 = iVar6 == 0;
              if (bVar15) {
                uVar16 = func_0x014388e4();
                iVar6 = (int)((ulonglong)uVar16 >> 0x20);
                if (bVar15) {
                  *extraout_r12 = unaff_pc;
                  *extraout_r2 = iVar1;
                  extraout_r2[0x39e] = iVar1;
                  extraout_r2[0x603] = iVar1;
                  extraout_r2[0x8b8] = param_2;
                  extraout_r2[0xbdb] = iVar1;
                  extraout_r2[0xfb6] = param_2;
                  extraout_r2[0x1131] = param_2;
                  extraout_r2[0x144c] = param_2;
                  extraout_r2[0x1591] = param_2;
                  extraout_r2[0x16d4] = iVar1;
                  extraout_r2[0x1922] = iVar1;
                  extraout_r2[0x1ca6] = iVar1;
                  extraout_r2[0x206d] = param_2;
                  extraout_r2[0x223f] = param_2;
                  extraout_r2[0x2375] = param_2;
                  extraout_r2[0x2491] = param_2;
                  extraout_r2[0x25a5] = param_2;
                  extraout_r2[0x26b4] = iVar1;
                  extraout_r2[0x29f6] = iVar1;
                  extraout_r2[0x2d2f] = param_2;
                  extraout_r2[0x2fd9] = param_2;
                  extraout_r2[0x327d] = iVar1;
                  extraout_r2[0x35d7] = iVar1;
                  extraout_r2[0x37dd] = param_2;
                  extraout_r2[0x382c] = param_2;
                  extraout_r2[0x3860] = iVar1;
                  extraout_r2[0x3901] = iVar1;
                  extraout_r2[0x398d] = iVar1;
                  extraout_r2[0x3b82] = 0;
                  extraout_r2[0x3f55] = 0;
                  extraout_r2[0x430d] = iVar1;
                  extraout_r2[0x4332] = iVar1;
                  extraout_r2[0x4342] = iVar1;
                  extraout_r2[0x44bb] = param_2;
                  extraout_r2[0x4586] = param_2;
                  extraout_r2[0x4636] = iVar1;
                  extraout_r2[0x4753] = iVar1;
                  extraout_r2[0x485b] = iVar1;
                }
                uStack_2c = 0x18416a4;
                pcVar11 = (char *)(_UNK_01841f7c + 0x184175c);
                iStack_4c = iVar7;
                iStack_48 = param_2;
                iStack_44 = iVar1;
                puStack_40 = puVar13;
                iStack_3c = iVar10;
                iStack_38 = iVar5;
                iStack_34 = unaff_r10;
                uStack_30 = uVar2;
                if (*pcVar11 == '\0') {
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
                  *pcVar11 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
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
                  uVar12 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01841ffc + 0x184198c));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01842000 + 0x18419a4));
                  func_0x024f108c(iVar1,uVar12,**(undefined4 **)(_UNK_01842004 + 0x18419bc));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = *(int *)(iVar1 + 0xc) - 1;
                  if (-1 < (int)uStack_78) {
                    puVar13 = *(undefined4 **)(_UNK_01842008 + 0x18419ec);
                    do {
                      if (*(int *)(**(int **)(_UNK_0184200c + 0x18419f8) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_01842010 + 0x1841a14));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x036c7bec(iVar10,**(undefined4 **)(_UNK_01842014 + 0x1841a34));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = *(int *)(iVar10 + 0x310);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar12 = func_0x0152983c(iVar1,uStack_78,
                                               **(undefined4 **)(_UNK_01842018 + 0x1841a68));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x024f04d4(iVar10,uVar12,
                                               **(undefined4 **)(_UNK_0184201c + 0x1841a94));
                      if (*(int *)(**(int **)(_UNK_01842020 + 0x1841aac) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar5 = FUN_0183fb8c(iVar10);
                      if ((iVar6 != 0 && iVar5 != 0) && (0 < *(int *)(iVar6 + 0xc))) {
                        iVar5 = 0;
                        do {
                          if (iVar10 == 0) {
                            func_0x014388e4();
                          }
                          iVar8 = *(int *)(iVar10 + 0x14);
                          iVar7 = func_0x0152983c(iVar6,iVar5,
                                                  **(undefined4 **)(_UNK_01842024 + 0x1841b20));
                          if (iVar7 == 0) {
                            func_0x014388e4();
                          }
                          uVar12 = *(undefined4 *)(iVar7 + 8);
                          if (iVar8 == 0) {
                            func_0x014388e4();
                          }
                          iVar7 = func_0x024f0540(iVar8,uVar12,
                                                  **(undefined4 **)(_UNK_01842028 + 0x1841b5c));
                          if (iVar7 == 0) {
                            iVar8 = **(int **)(**(int **)(_UNK_01842034 + 0x1841bd0) + 0x5c);
                            iVar7 = func_0x0152983c(iVar6,uStack_78,
                                                    **(undefined4 **)(_UNK_01842038 + 0x1841be0));
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar7 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            iVar7 = func_0x02e651cc(iVar8,uVar12,0);
                            if (iVar7 != 0) {
                              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0184203c + 0x1841c34));
                              func_0x024f0510(iVar7,**(undefined4 **)(_UNK_01842040 + 0x1841c48));
                              iVar8 = *(int *)(iVar10 + 0x14);
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              iVar8 = func_0x024f10dc(iVar8,**(undefined4 **)
                                                              (_UNK_01842044 + 0x1841c6c));
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar8,
                                              **(undefined4 **)(_UNK_01842048 + 0x1841c98));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar8 = func_0x0151455c(&uStack_60,*puVar13),
                                    uVar12 = uStack_54, iVar8 != 0) {
                                if (*(int *)(**(int **)(_UNK_0184204c + 0x1841ccc) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01842050 + 0x1841cec)
                                                       );
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                iVar8 = func_0x029a6fa8(iVar8,uVar12,0);
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar8 + 0x1c) - 3U < 3) {
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar8 = func_0x024f0f34(iVar7,uVar12,
                                                          **(undefined4 **)
                                                            (_UNK_01842054 + 0x1841d48));
                                  if (iVar8 == 0) {
                                    if (iVar7 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar8 = *(int *)(iVar7 + 8);
                                    uVar2 = *(uint *)(iVar7 + 0xc);
                                    piVar3 = *(int **)(_UNK_01842058 + 0x1841d88);
                                    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                                    iVar14 = *piVar3;
                                    if (iVar8 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar2 < *(uint *)(iVar8 + 0xc)) {
                                      *(uint *)(iVar7 + 0xc) = uVar2 + 1;
                                      *(undefined4 *)(iVar8 + uVar2 * 4 + 0x10) = uVar12;
                                    }
                                    else {
                                      func_0x024f0520(iVar7,uVar12,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar14 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_0184205c + 0x1841ddc));
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar7 + 0xc)) {
                                iVar8 = 0;
                                while( true ) {
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar7 + 0xc) <= iVar8) break;
                                  if (iVar10 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = *(int *)(iVar10 + 0x14);
                                  uVar12 = func_0x024f0530(iVar7,iVar8,
                                                           **(undefined4 **)
                                                             (_UNK_01842068 + 0x1841e34));
                                  if (iVar14 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = func_0x024f0540(iVar14,uVar12,
                                                           **(undefined4 **)
                                                             (_UNK_0184206c + 0x1841e60));
                                  if (iVar14 != 0) {
                                    iVar14 = *(int *)(iVar10 + 0x14);
                                    uVar12 = func_0x024f0530(iVar7,iVar8,
                                                             **(undefined4 **)
                                                               (_UNK_01842070 + 0x1841e80));
                                    if (iVar14 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar14,uVar12,
                                                    **(undefined4 **)(_UNK_01842074 + 0x1841eac));
                                  }
                                  iVar8 = iVar8 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar8 = *(int *)(iVar10 + 0x14);
                            iVar7 = func_0x0152983c(iVar6,iVar5,
                                                    **(undefined4 **)(_UNK_0184202c + 0x1841b7c));
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar7 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar8,uVar12,
                                            **(undefined4 **)(_UNK_01842030 + 0x1841bb8));
                          }
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < *(int *)(iVar6 + 0xc));
                      }
                      uStack_78 = uStack_78 - 1;
                    } while (uStack_78 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x924f,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = func_0x02869298(iVar1,(int)uVar16,iVar6,0);
                }
                return uStack_78;
              }
            }
            iVar1 = *(int *)(iVar6 + 0xc);
            param_2 = *(int *)(iVar7 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam01841700 + 0x1840fb8));
            if (iVar6 != 0) {
              iVar6 = *(int *)(iVar10 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar6 + 9) != '\0') {
                iVar6 = *(int *)(iVar10 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar13);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar10 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar5,*puVar13);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar12 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam01841704 + 0x1841380));
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam01841708 + 0x18413ec));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0184170c + 0x1841404));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar9 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam01841710 + 0x1841454);
                    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(uVar2 + 0xc) = uVar9 + 1;
                      piVar3 = (int *)(iVar6 + uVar9 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(uVar2,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar13 = *(undefined4 **)(iRam01841714 + 0x18414b0);
                  }
                }
                iVar6 = *(int *)(iVar10 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar13);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar10 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar5,*puVar13);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar12 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam01841718 + 0x1841570));
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x30);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0184171c + 0x18415dc));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01841720 + 0x18415f4));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar9 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam01841724 + 0x1841644);
                    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(uVar2 + 0xc) = uVar9 + 1;
                      piVar3 = (int *)(iVar6 + uVar9 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(uVar2,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar13 = *(undefined4 **)(iRam01841728 + 0x18416a0);
                  }
                }
              }
              iVar6 = *(int *)(iVar10 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x014e9698(iVar6,iVar5,*puVar13);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar6 = *(int *)(iVar10 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x014e9698(iVar6,iVar5,*puVar13);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                  iVar1 = *(int *)(iVar10 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x1c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar12 = func_0x024f05a4(iVar1,unaff_r10,
                                           **(undefined4 **)(iRam0184172c + 0x1841190));
                  iVar1 = *(int *)(iVar10 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar5,*puVar13);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x20);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                          **(undefined4 **)(iRam01841730 + 0x18411fc));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam01841734 + 0x1841214));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                  if (uVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(uVar2 + 8);
                  uVar9 = *(uint *)(uVar2 + 0xc);
                  piVar3 = *(int **)(iRam01841738 + 0x1841264);
                  *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                  iVar7 = *piVar3;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(uVar2 + 0xc) = uVar9 + 1;
                    piVar3 = (int *)(iVar6 + uVar9 * 4 + 0x10);
                    *piVar3 = iVar1;
                    func_0x014385cc(piVar3,iVar1);
                  }
                  else {
                    func_0x0152874c(uVar2,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar13 = *(undefined4 **)(iRam0184173c + 0x18412c0);
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
  iVar1 = func_0x029540a4(0x17ca,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar11 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  uStack_30 = iStack_48;
  uStack_2c = iStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar10 = *(int *)(iVar1 + 8);
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar10,uVar12,&iStack_38,uVar4);
  uVar2 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return uVar2;
}


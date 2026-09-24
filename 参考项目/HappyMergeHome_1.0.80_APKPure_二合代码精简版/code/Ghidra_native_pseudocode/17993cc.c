
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_017a93cc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  int unaff_r10;
  undefined4 *extraout_r12;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 unaff_pc;
  bool bVar18;
  undefined8 uVar19;
  undefined4 *puStack_78;
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
  byte *pbStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(iRam017a9dbc + 0x17a93e8);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam017a9dc0 + 0x17a93fc));
    func_0x01438628(*(undefined4 *)(iRam017a9dc4 + 0x17a9408));
    func_0x01438628(*(undefined4 *)(iRam017a9dc8 + 0x17a9414));
    func_0x01438628(*(undefined4 *)(iRam017a9dcc + 0x17a9420));
    func_0x01438628(*(undefined4 *)(iRam017a9dd0 + 0x17a942c));
    func_0x01438628(*(undefined4 *)(iRam017a9dd4 + 0x17a9438));
    func_0x01438628(*(undefined4 *)(iRam017a9dd8 + 0x17a9444));
    func_0x01438628(*(undefined4 *)(iRam017a9ddc + 0x17a9450));
    func_0x01438628(*(undefined4 *)(iRam017a9de0 + 0x17a945c));
    func_0x01438628(*(undefined4 *)(iRam017a9de4 + 0x17a9468));
    func_0x01438628(*(undefined4 *)(iRam017a9de8 + 0x17a9474));
    func_0x01438628(*(undefined4 *)(iRam017a9dec + 0x17a9480));
    func_0x01438628(*(undefined4 *)(iRam017a9df0 + 0x17a948c));
    func_0x01438628(*(undefined4 *)(iRam017a9df4 + 0x17a9498));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1735,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam017a9df8 + 0x17a94f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam017a9dfc + 0x17a9514));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam017a9e00 + 0x17a9534));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar10 = *(int *)(iVar1 + 0x30c);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar10 = func_0x024eede4(iVar10,param_2,**(undefined4 **)(iRam017a9e04 + 0x17a956c));
    puVar3 = (undefined4 *)0x0;
    if (iVar10 != 0) {
      pbVar12 = *(byte **)(iVar1 + 0x30c);
      if (pbVar12 == (byte *)0x0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f04d4(pbVar12,param_2,**(undefined4 **)(iRam017a9e08 + 0x17a95a0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar1 + 0x6c);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar10 + 8) != '\0') {
        iVar10 = *(int *)(iVar1 + 0x6c);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar10 + 0x14) == '\0') {
          puVar3 = (undefined4 *)func_0x014388d4(**(undefined4 **)(iRam017a9e0c + 0x17a9608));
          func_0x024eed9c(puVar3,**(undefined4 **)(iRam017a9e10 + 0x17a961c));
          iVar10 = 0;
          puVar14 = *(undefined4 **)(iRam017a9e14 + 0x17a9634);
          while( true ) {
            iVar6 = *(int *)(iVar1 + 0x6c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar10) break;
            iVar7 = *(int *)(iVar1 + 0x6c);
            iVar6 = iVar7;
            if (iVar7 == 0) {
              func_0x014388e4();
              iVar6 = *(int *)(iVar1 + 0x6c);
              bVar18 = iVar6 == 0;
              if (bVar18) {
                uVar19 = func_0x014388e4();
                iVar6 = (int)((ulonglong)uVar19 >> 0x20);
                uVar13 = (undefined4)uVar19;
                if (bVar18) {
                  pbVar12 = (byte *)(uint)*pbVar12;
                  puVar16 = extraout_r12 + 0x235;
                  *extraout_r12 = uVar13;
                  *puVar3 = 0x17a9dbc;
                  puVar3[0x9f] = 0x17a9dbc;
                  puVar3[0x18e] = &uStack_28;
                  puVar3[0x2eb] = unaff_pc;
                  puVar3[0x2ff] = puVar16;
                  puVar3[0x6b4] = &uStack_28;
                  puVar3[0x809] = puVar16;
                  puVar3[0xb88] = puVar16;
                  puVar3[0xf05] = 0x17a9dbc;
                  puVar17 = extraout_r12 + 0x450;
                  *puVar16 = uVar13;
                  puVar3[0xf8d] = &uStack_28;
                  puVar3[0xf9c] = 0x17a9dbc;
                  puVar3[0x1399] = puVar17;
                  puVar3[0x1709] = puVar17;
                  puVar3[0x1a5f] = puVar17;
                  puVar3[0x1dad] = puVar17;
                  *puVar17 = uVar13;
                  puVar16 = extraout_r12 + 0x7f9;
                  extraout_r12[0x629] = uVar13;
                  puVar3[0x20f6] = &uStack_28;
                  puVar3[0x21da] = &uStack_28;
                  puVar3[0x22b8] = 0x17a9dbc;
                  puVar3[0x264b] = 0x17a9dbc;
                  puVar3[0x268b] = puVar16;
                  puVar3[0x2914] = puVar16;
                  puVar3[0x2b82] = &uStack_28;
                  puVar3[0x2e5d] = &uStack_28;
                  puVar3[0x3123] = 0x17a9dbc;
                  puVar3[0x3351] = puVar16;
                  puVar3[0x355e] = puVar16;
                  puVar3[0x3750] = &uStack_28;
                  puVar3[0x39af] = &uStack_28;
                  puVar3[0x3bf9] = 0x17a9dbc;
                  puVar3[0x3dab] = puVar16;
                  puVar3[0x40b0] = puVar16;
                  puVar3[0x439a] = &uStack_28;
                  puVar16 = puVar3 + 0x4a33;
                  puVar3[0x46f1] = &uStack_28;
                  puVar3 = puVar3 + 0x4cdd;
                  *puVar16 = 0x17a9dbc;
                }
                uStack_2c = 0x17a9dbc;
                pcVar11 = (char *)(_UNK_017aa694 + 0x17a9e74);
                iStack_4c = iVar7;
                iStack_48 = param_2;
                pbStack_44 = pbVar12;
                puStack_40 = puVar14;
                iStack_3c = iVar1;
                iStack_38 = iVar10;
                iStack_34 = unaff_r10;
                puStack_30 = puVar3;
                if (*pcVar11 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_017aa698 + 0x17a9e88));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa69c + 0x17a9e94));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6a0 + 0x17a9ea0));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6a4 + 0x17a9eac));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6a8 + 0x17a9eb8));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6ac + 0x17a9ec4));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6b0 + 0x17a9ed0));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6b4 + 0x17a9edc));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6b8 + 0x17a9ee8));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6bc + 0x17a9ef4));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6c0 + 0x17a9f00));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6c4 + 0x17a9f0c));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6c8 + 0x17a9f18));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6cc + 0x17a9f24));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6d0 + 0x17a9f30));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6d4 + 0x17a9f3c));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6d8 + 0x17a9f48));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6dc + 0x17a9f54));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6e0 + 0x17a9f60));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6e4 + 0x17a9f6c));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6e8 + 0x17a9f78));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6ec + 0x17a9f84));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6f0 + 0x17a9f90));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6f4 + 0x17a9f9c));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6f8 + 0x17a9fa8));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa6fc + 0x17a9fb4));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa700 + 0x17a9fc0));
                  func_0x01438628(*(undefined4 *)(_UNK_017aa704 + 0x17a9fcc));
                  *pcVar11 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x8e88,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_017aa708 + 0x17aa034) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017aa70c + 0x17aa050));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017aa710 + 0x17aa070));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x30c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar13 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017aa714 + 0x17aa0a4));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017aa718 + 0x17aa0bc));
                  func_0x024f108c(iVar1,uVar13,**(undefined4 **)(_UNK_017aa71c + 0x17aa0d4));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  puStack_78 = (undefined4 *)(*(int *)(iVar1 + 0xc) - 1);
                  if (-1 < (int)puStack_78) {
                    puVar3 = *(undefined4 **)(_UNK_017aa720 + 0x17aa104);
                    do {
                      if (*(int *)(**(int **)(_UNK_017aa724 + 0x17aa110) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_017aa728 + 0x17aa12c));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x036c7bec(iVar10,**(undefined4 **)(_UNK_017aa72c + 0x17aa14c));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = *(int *)(iVar10 + 0x30c);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar13 = func_0x0152983c(iVar1,puStack_78,
                                               **(undefined4 **)(_UNK_017aa730 + 0x17aa180));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x024f04d4(iVar10,uVar13,
                                               **(undefined4 **)(_UNK_017aa734 + 0x17aa1ac));
                      if (*(int *)(**(int **)(_UNK_017aa738 + 0x17aa1c4) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar7 = FUN_017a82a4(iVar10);
                      if ((iVar6 != 0 && iVar7 != 0) && (0 < *(int *)(iVar6 + 0xc))) {
                        iVar7 = 0;
                        do {
                          if (iVar10 == 0) {
                            func_0x014388e4();
                          }
                          iVar8 = *(int *)(iVar10 + 0x14);
                          iVar2 = func_0x0152983c(iVar6,iVar7,
                                                  **(undefined4 **)(_UNK_017aa73c + 0x17aa238));
                          if (iVar2 == 0) {
                            func_0x014388e4();
                          }
                          uVar13 = *(undefined4 *)(iVar2 + 8);
                          if (iVar8 == 0) {
                            func_0x014388e4();
                          }
                          iVar2 = func_0x024f0540(iVar8,uVar13,
                                                  **(undefined4 **)(_UNK_017aa740 + 0x17aa274));
                          if (iVar2 == 0) {
                            iVar8 = **(int **)(**(int **)(_UNK_017aa74c + 0x17aa2e8) + 0x5c);
                            iVar2 = func_0x0152983c(iVar6,puStack_78,
                                                    **(undefined4 **)(_UNK_017aa750 + 0x17aa2f8));
                            if (iVar2 == 0) {
                              func_0x014388e4();
                            }
                            uVar13 = *(undefined4 *)(iVar2 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            iVar2 = func_0x02e651cc(iVar8,uVar13,0);
                            if (iVar2 != 0) {
                              iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017aa754 + 0x17aa34c));
                              func_0x024f0510(iVar2,**(undefined4 **)(_UNK_017aa758 + 0x17aa360));
                              iVar8 = *(int *)(iVar10 + 0x14);
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              iVar8 = func_0x024f10dc(iVar8,**(undefined4 **)
                                                              (_UNK_017aa75c + 0x17aa384));
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar8,
                                              **(undefined4 **)(_UNK_017aa760 + 0x17aa3b0));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar8 = func_0x0151455c(&uStack_60,*puVar3), uVar13 = uStack_54
                                    , iVar8 != 0) {
                                if (*(int *)(**(int **)(_UNK_017aa764 + 0x17aa3e4) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_017aa768 + 0x17aa404)
                                                       );
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                iVar8 = func_0x029a6fa8(iVar8,uVar13,0);
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar8 + 0x1c) - 3U < 3) {
                                  if (iVar2 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar8 = func_0x024f0f34(iVar2,uVar13,
                                                          **(undefined4 **)
                                                            (_UNK_017aa76c + 0x17aa460));
                                  if (iVar8 == 0) {
                                    if (iVar2 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar8 = *(int *)(iVar2 + 8);
                                    uVar9 = *(uint *)(iVar2 + 0xc);
                                    piVar4 = *(int **)(_UNK_017aa770 + 0x17aa4a0);
                                    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                                    iVar15 = *piVar4;
                                    if (iVar8 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar9 < *(uint *)(iVar8 + 0xc)) {
                                      *(uint *)(iVar2 + 0xc) = uVar9 + 1;
                                      *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar13;
                                    }
                                    else {
                                      func_0x024f0520(iVar2,uVar13,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar15 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_017aa774 + 0x17aa4f4));
                              if (iVar2 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar2 + 0xc)) {
                                iVar8 = 0;
                                while( true ) {
                                  if (iVar2 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar2 + 0xc) <= iVar8) break;
                                  if (iVar10 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar15 = *(int *)(iVar10 + 0x14);
                                  uVar13 = func_0x024f0530(iVar2,iVar8,
                                                           **(undefined4 **)
                                                             (_UNK_017aa780 + 0x17aa54c));
                                  if (iVar15 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar15 = func_0x024f0540(iVar15,uVar13,
                                                           **(undefined4 **)
                                                             (_UNK_017aa784 + 0x17aa578));
                                  if (iVar15 != 0) {
                                    iVar15 = *(int *)(iVar10 + 0x14);
                                    uVar13 = func_0x024f0530(iVar2,iVar8,
                                                             **(undefined4 **)
                                                               (_UNK_017aa788 + 0x17aa598));
                                    if (iVar15 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar15,uVar13,
                                                    **(undefined4 **)(_UNK_017aa78c + 0x17aa5c4));
                                  }
                                  iVar8 = iVar8 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar8 = *(int *)(iVar10 + 0x14);
                            iVar2 = func_0x0152983c(iVar6,iVar7,
                                                    **(undefined4 **)(_UNK_017aa744 + 0x17aa294));
                            if (iVar2 == 0) {
                              func_0x014388e4();
                            }
                            uVar13 = *(undefined4 *)(iVar2 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar8,uVar13,
                                            **(undefined4 **)(_UNK_017aa748 + 0x17aa2d0));
                          }
                          iVar7 = iVar7 + 1;
                        } while (iVar7 < *(int *)(iVar6 + 0xc));
                      }
                      puStack_78 = (undefined4 *)((int)puStack_78 - 1);
                    } while (puStack_78 < (undefined4 *)0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x8e88,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  puStack_78 = (undefined4 *)func_0x02869298(iVar1,uVar13,iVar6,0);
                }
                return puStack_78;
              }
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            param_2 = *(int *)(iVar7 + 0x10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            pbVar12 = *(byte **)(iVar6 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024f0f34(param_2,pbVar12,**(undefined4 **)(iRam017a9e18 + 0x17a96d0));
            if (iVar6 != 0) {
              iVar6 = *(int *)(iVar1 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar6 + 9) != '\0') {
                iVar6 = *(int *)(iVar1 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar1 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar6 = *(int *)(iVar1 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    uVar13 = func_0x024f05a4(iVar6,unaff_r10,
                                             **(undefined4 **)(iRam017a9e1c + 0x17a9a98));
                    iVar6 = *(int *)(iVar1 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x18);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    uVar5 = func_0x024f05a4(iVar6,unaff_r10,
                                            **(undefined4 **)(iRam017a9e20 + 0x17a9b04));
                    pbVar12 = (byte *)func_0x014388d4(**(undefined4 **)(iRam017a9e24 + 0x17a9b1c));
                    uStack_28 = 0;
                    func_0x02ca3c70(pbVar12,uVar13,uVar5,0);
                    if (puVar3 == (undefined4 *)0x0) {
                      func_0x014388e4();
                    }
                    iVar6 = puVar3[2];
                    uVar9 = puVar3[3];
                    piVar4 = *(int **)(iRam017a9e28 + 0x17a9b6c);
                    puVar3[4] = puVar3[4] + 1;
                    iVar7 = *piVar4;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                      puVar3[3] = uVar9 + 1;
                      puVar14 = (undefined4 *)(iVar6 + uVar9 * 4 + 0x10);
                      *puVar14 = pbVar12;
                      func_0x014385cc(puVar14,pbVar12);
                    }
                    else {
                      func_0x0152874c(puVar3,pbVar12,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar14 = *(undefined4 **)(iRam017a9e2c + 0x17a9bc8);
                  }
                }
                iVar6 = *(int *)(iVar1 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar1 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar6 = *(int *)(iVar1 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    uVar13 = func_0x024f05a4(iVar6,unaff_r10,
                                             **(undefined4 **)(iRam017a9e30 + 0x17a9c88));
                    iVar6 = *(int *)(iVar1 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x30);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    uVar5 = func_0x024f05a4(iVar6,unaff_r10,
                                            **(undefined4 **)(iRam017a9e34 + 0x17a9cf4));
                    pbVar12 = (byte *)func_0x014388d4(**(undefined4 **)(iRam017a9e38 + 0x17a9d0c));
                    uStack_28 = 0;
                    func_0x02ca3c70(pbVar12,uVar13,uVar5,0);
                    if (puVar3 == (undefined4 *)0x0) {
                      func_0x014388e4();
                    }
                    iVar6 = puVar3[2];
                    uVar9 = puVar3[3];
                    piVar4 = *(int **)(iRam017a9e3c + 0x17a9d5c);
                    puVar3[4] = puVar3[4] + 1;
                    iVar7 = *piVar4;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                      puVar3[3] = uVar9 + 1;
                      puVar14 = (undefined4 *)(iVar6 + uVar9 * 4 + 0x10);
                      *puVar14 = pbVar12;
                      func_0x014385cc(puVar14,pbVar12);
                    }
                    else {
                      func_0x0152874c(puVar3,pbVar12,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar14 = *(undefined4 **)(iRam017a9e40 + 0x17a9db8);
                  }
                }
              }
              iVar6 = *(int *)(iVar1 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x014e9698(iVar6,iVar10,*puVar14);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar6 = *(int *)(iVar1 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x014e9698(iVar6,iVar10,*puVar14);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                  iVar6 = *(int *)(iVar1 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar13 = func_0x024f05a4(iVar6,unaff_r10,
                                           **(undefined4 **)(iRam017a9e44 + 0x17a98a8));
                  iVar6 = *(int *)(iVar1 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = func_0x014e9698(iVar6,iVar10,*puVar14);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0x20);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f05a4(iVar6,unaff_r10,
                                          **(undefined4 **)(iRam017a9e48 + 0x17a9914));
                  pbVar12 = (byte *)func_0x014388d4(**(undefined4 **)(iRam017a9e4c + 0x17a992c));
                  uStack_28 = 0;
                  func_0x02ca3c70(pbVar12,uVar13,uVar5,0);
                  if (puVar3 == (undefined4 *)0x0) {
                    func_0x014388e4();
                  }
                  iVar6 = puVar3[2];
                  uVar9 = puVar3[3];
                  piVar4 = *(int **)(iRam017a9e50 + 0x17a997c);
                  puVar3[4] = puVar3[4] + 1;
                  iVar7 = *piVar4;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                    puVar3[3] = uVar9 + 1;
                    puVar14 = (undefined4 *)(iVar6 + uVar9 * 4 + 0x10);
                    *puVar14 = pbVar12;
                    func_0x014385cc(puVar14,pbVar12);
                  }
                  else {
                    func_0x0152874c(puVar3,pbVar12,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar14 = *(undefined4 **)(iRam017a9e54 + 0x17a99d8);
                }
              }
            }
            iVar10 = iVar10 + 1;
          }
        }
      }
    }
    return puVar3;
  }
  iVar1 = func_0x029540a4(0x1735,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar11 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puStack_30 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  puStack_30 = (undefined4 *)iStack_48;
  uStack_2c = pbStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar10 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar10,uVar13,&iStack_38,uVar5);
  puVar3 = (undefined4 *)func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return puVar3;
}


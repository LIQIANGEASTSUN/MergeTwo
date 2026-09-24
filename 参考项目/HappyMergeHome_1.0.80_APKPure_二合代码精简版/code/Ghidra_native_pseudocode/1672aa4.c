
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01682aa4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int unaff_r10;
  int iVar15;
  undefined1 extraout_r12;
  undefined *puVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(iRam01683494 + 0x1682ac0);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01683498 + 0x1682ad4));
    func_0x01438628(*(undefined4 *)(iRam0168349c + 0x1682ae0));
    func_0x01438628(*(undefined4 *)(iRam016834a0 + 0x1682aec));
    func_0x01438628(*(undefined4 *)(iRam016834a4 + 0x1682af8));
    func_0x01438628(*(undefined4 *)(iRam016834a8 + 0x1682b04));
    func_0x01438628(*(undefined4 *)(iRam016834ac + 0x1682b10));
    func_0x01438628(*(undefined4 *)(iRam016834b0 + 0x1682b1c));
    func_0x01438628(*(undefined4 *)(iRam016834b4 + 0x1682b28));
    func_0x01438628(*(undefined4 *)(iRam016834b8 + 0x1682b34));
    func_0x01438628(*(undefined4 *)(iRam016834bc + 0x1682b40));
    func_0x01438628(*(undefined4 *)(iRam016834c0 + 0x1682b4c));
    func_0x01438628(*(undefined4 *)(iRam016834c4 + 0x1682b58));
    func_0x01438628(*(undefined4 *)(iRam016834c8 + 0x1682b64));
    func_0x01438628(*(undefined4 *)(iRam016834cc + 0x1682b70));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15f3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam016834d0 + 0x1682bd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam016834d4 + 0x1682bec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(iRam016834d8 + 0x1682c0c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar1 + 0x398);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x024eede4(iVar9,param_2,**(undefined4 **)(iRam016834dc + 0x1682c44));
    iVar15 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)(iVar1 + 0x398);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar2 = (undefined1 *)
               func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam016834e0 + 0x1682c78));
      if (puVar2 == (undefined1 *)0x0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(puVar2 + 0x6c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar9 + 8) != '\0') {
        iVar9 = *(int *)(puVar2 + 0x6c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar9 + 0x14) == '\0') {
          iVar15 = func_0x014388d4(**(undefined4 **)(iRam016834e4 + 0x1682ce0));
          func_0x024eed9c(iVar15,**(undefined4 **)(iRam016834e8 + 0x1682cf4));
          iVar9 = 0;
          puVar13 = *(undefined4 **)(iRam016834ec + 0x1682d0c);
          while( true ) {
            iVar5 = *(int *)(puVar2 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0xc);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar5 + 0xc) <= iVar9) break;
            iVar6 = *(int *)(puVar2 + 0x6c);
            iVar5 = iVar6;
            if (iVar6 == 0) {
              func_0x014388e4();
              iVar5 = *(int *)(puVar2 + 0x6c);
              bVar17 = iVar5 == 0;
              if (bVar17) {
                puVar16 = (undefined *)0x1683494;
                uVar18 = func_0x014388e4();
                iVar5 = (int)((ulonglong)uVar18 >> 0x20);
                iStack_48 = param_2;
                uStack_4c = 0;
                puStack_3c = puVar2;
                if (bVar17) {
                  puStack_3c = puVar2 + 0x95a;
                  *puVar2 = extraout_r12;
                  puVar16 = &UNK_01694f1c;
                  iStack_48 = _UNK_01694b4c;
                  uStack_4c = _UNK_0169451c;
                }
                pcVar10 = (char *)(_UNK_01683d68 + 0x168354c);
                iStack_44 = iVar1;
                puStack_40 = puVar13;
                iStack_38 = iVar9;
                iStack_34 = unaff_r10;
                iStack_30 = iVar15;
                puStack_2c = puVar16;
                if (*pcVar10 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_01683d6c + 0x1683560));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d70 + 0x168356c));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d74 + 0x1683578));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d78 + 0x1683584));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d7c + 0x1683590));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d80 + 0x168359c));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d84 + 0x16835a8));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d88 + 0x16835b4));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d8c + 0x16835c0));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d90 + 0x16835cc));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d94 + 0x16835d8));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d98 + 0x16835e4));
                  func_0x01438628(*(undefined4 *)(_UNK_01683d9c + 0x16835f0));
                  func_0x01438628(*(undefined4 *)(_UNK_01683da0 + 0x16835fc));
                  func_0x01438628(*(undefined4 *)(_UNK_01683da4 + 0x1683608));
                  func_0x01438628(*(undefined4 *)(_UNK_01683da8 + 0x1683614));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dac + 0x1683620));
                  func_0x01438628(*(undefined4 *)(_UNK_01683db0 + 0x168362c));
                  func_0x01438628(*(undefined4 *)(_UNK_01683db4 + 0x1683638));
                  func_0x01438628(*(undefined4 *)(_UNK_01683db8 + 0x1683644));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dbc + 0x1683650));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dc0 + 0x168365c));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dc4 + 0x1683668));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dc8 + 0x1683674));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dcc + 0x1683680));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dd0 + 0x168368c));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dd4 + 0x1683698));
                  func_0x01438628(*(undefined4 *)(_UNK_01683dd8 + 0x16836a4));
                  *pcVar10 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x87a1,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_01683ddc + 0x168370c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01683de0 + 0x1683728));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01683de4 + 0x1683748));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x398);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar12 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01683de8 + 0x168377c));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01683dec + 0x1683794));
                  func_0x024f108c(iVar1,uVar12,**(undefined4 **)(_UNK_01683df0 + 0x16837ac));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = *(int *)(iVar1 + 0xc);
                  uVar8 = iVar9 - 1;
                  if (-1 < (int)uVar8) {
                    puVar13 = *(undefined4 **)(_UNK_01683df4 + 0x16837d8);
                    do {
                      if (*(int *)(**(int **)(_UNK_01683df8 + 0x16837e4) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01683dfc + 0x1683800));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x024f04cc(iVar9,**(undefined4 **)(_UNK_01683e00 + 0x1683820));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x398);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar12 = func_0x0152983c(iVar1,uVar8,
                                               **(undefined4 **)(_UNK_01683e04 + 0x1683858));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar15 = func_0x024f04d4(iVar9,uVar12,
                                               **(undefined4 **)(_UNK_01683e08 + 0x1683884));
                      if (*(int *)(**(int **)(_UNK_01683e0c + 0x168389c) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = FUN_01681988(iVar15);
                      if ((iVar5 != 0 && iVar9 != 0) && (iVar9 = *(int *)(iVar5 + 0xc), 0 < iVar9))
                      {
                        iVar6 = 0;
                        do {
                          if (iVar15 == 0) {
                            func_0x014388e4();
                          }
                          iVar7 = *(int *)(iVar15 + 0x14);
                          iVar9 = func_0x0152983c(iVar5,iVar6,
                                                  **(undefined4 **)(_UNK_01683e10 + 0x168390c));
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          uVar12 = *(undefined4 *)(iVar9 + 8);
                          if (iVar7 == 0) {
                            func_0x014388e4();
                          }
                          iVar9 = func_0x024f0540(iVar7,uVar12,
                                                  **(undefined4 **)(_UNK_01683e14 + 0x1683948));
                          if (iVar9 == 0) {
                            iVar7 = **(int **)(**(int **)(_UNK_01683e20 + 0x16839bc) + 0x5c);
                            iVar9 = func_0x0152983c(iVar5,iVar6,
                                                    **(undefined4 **)(_UNK_01683e24 + 0x16839cc));
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar9 + 8);
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            iVar9 = func_0x02e651cc(iVar7,uVar12,0);
                            if (iVar9 != 0) {
                              iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01683e28 + 0x1683a20));
                              func_0x024f0510(iVar9,**(undefined4 **)(_UNK_01683e2c + 0x1683a34));
                              iVar7 = *(int *)(iVar15 + 0x14);
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)
                                                              (_UNK_01683e30 + 0x1683a58));
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar7,
                                              **(undefined4 **)(_UNK_01683e34 + 0x1683a84));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar7 = func_0x0151455c(&uStack_60,*puVar13),
                                    uVar12 = uStack_54, iVar7 != 0) {
                                if (*(int *)(**(int **)(_UNK_01683e38 + 0x1683ab8) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01683e3c + 0x1683ad8)
                                                       );
                                if (iVar7 == 0) {
                                  func_0x014388e4();
                                }
                                iVar7 = func_0x029a6fa8(iVar7,uVar12,0);
                                if (iVar7 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar7 = func_0x024f0f34(iVar9,uVar12,
                                                          **(undefined4 **)
                                                            (_UNK_01683e40 + 0x1683b34));
                                  if (iVar7 == 0) {
                                    if (iVar9 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar7 = *(int *)(iVar9 + 8);
                                    uVar11 = *(uint *)(iVar9 + 0xc);
                                    piVar3 = *(int **)(_UNK_01683e44 + 0x1683b74);
                                    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
                                    iVar14 = *piVar3;
                                    if (iVar7 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar11 < *(uint *)(iVar7 + 0xc)) {
                                      *(uint *)(iVar9 + 0xc) = uVar11 + 1;
                                      *(undefined4 *)(iVar7 + uVar11 * 4 + 0x10) = uVar12;
                                    }
                                    else {
                                      func_0x024f0520(iVar9,uVar12,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar14 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_01683e48 + 0x1683bc8));
                              if (iVar9 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar9 + 0xc)) {
                                iVar7 = 0;
                                while( true ) {
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar9 + 0xc) <= iVar7) break;
                                  if (iVar15 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = *(int *)(iVar15 + 0x14);
                                  uVar12 = func_0x024f0530(iVar9,iVar7,
                                                           **(undefined4 **)
                                                             (_UNK_01683e54 + 0x1683c20));
                                  if (iVar14 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = func_0x024f0540(iVar14,uVar12,
                                                           **(undefined4 **)
                                                             (_UNK_01683e58 + 0x1683c4c));
                                  if (iVar14 != 0) {
                                    iVar14 = *(int *)(iVar15 + 0x14);
                                    uVar12 = func_0x024f0530(iVar9,iVar7,
                                                             **(undefined4 **)
                                                               (_UNK_01683e5c + 0x1683c6c));
                                    if (iVar14 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar14,uVar12,
                                                    **(undefined4 **)(_UNK_01683e60 + 0x1683c98));
                                  }
                                  iVar7 = iVar7 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar7 = *(int *)(iVar15 + 0x14);
                            iVar9 = func_0x0152983c(iVar5,iVar6,
                                                    **(undefined4 **)(_UNK_01683e18 + 0x1683968));
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar9 + 8);
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar7,uVar12,
                                            **(undefined4 **)(_UNK_01683e1c + 0x16839a4));
                          }
                          iVar6 = iVar6 + 1;
                          iVar9 = *(int *)(iVar5 + 0xc);
                        } while (iVar6 < iVar9);
                      }
                      uVar8 = uVar8 - 1;
                    } while (uVar8 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x87a1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = func_0x02869298(iVar1,(int)uVar18,iVar5,0);
                }
                return iVar9;
              }
            }
            iVar1 = *(int *)(iVar5 + 0xc);
            param_2 = *(int *)(iVar6 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam016834f0 + 0x1682da8));
            if (iVar5 != 0) {
              iVar5 = *(int *)(puVar2 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar5 + 9) != '\0') {
                iVar5 = *(int *)(puVar2 + 0x6c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x014e9698(iVar5,iVar9,*puVar13);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar5 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar5 = *(int *)(puVar2 + 0x6c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0xc);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = func_0x014e9698(iVar5,iVar9,*puVar13);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0x14);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(puVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar12 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam016834f4 + 0x1683170));
                    iVar1 = *(int *)(puVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam016834f8 + 0x16831dc));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam016834fc + 0x16831f4));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                    if (iVar15 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar15 + 8);
                    uVar8 = *(uint *)(iVar15 + 0xc);
                    piVar3 = *(int **)(iRam01683500 + 0x1683244);
                    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                    iVar6 = *piVar3;
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar5 + 0xc)) {
                      *(uint *)(iVar15 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar5 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar15,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar13 = *(undefined4 **)(iRam01683504 + 0x16832a0);
                  }
                }
                iVar5 = *(int *)(puVar2 + 0x6c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x014e9698(iVar5,iVar9,*puVar13);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar5 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar5 = *(int *)(puVar2 + 0x6c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0xc);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = func_0x014e9698(iVar5,iVar9,*puVar13);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0x2c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= unaff_r10) break;
                    iVar1 = *(int *)(puVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar12 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam01683508 + 0x1683360));
                    iVar1 = *(int *)(puVar2 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x30);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0168350c + 0x16833cc));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01683510 + 0x16833e4));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                    if (iVar15 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar15 + 8);
                    uVar8 = *(uint *)(iVar15 + 0xc);
                    piVar3 = *(int **)(iRam01683514 + 0x1683434);
                    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                    iVar6 = *piVar3;
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar5 + 0xc)) {
                      *(uint *)(iVar15 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar5 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar15,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar13 = *(undefined4 **)(iRam01683518 + 0x1683490);
                  }
                }
              }
              iVar5 = *(int *)(puVar2 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x014e9698(iVar5,iVar9,*puVar13);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar5 = *(int *)(puVar2 + 0x6c);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(iVar5 + 0xc);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x014e9698(iVar5,iVar9,*puVar13);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(param_2 + 0x1c);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar5 + 0xc) <= unaff_r10) break;
                  iVar1 = *(int *)(puVar2 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x1c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar12 = func_0x024f05a4(iVar1,unaff_r10,
                                           **(undefined4 **)(iRam0168351c + 0x1682f80));
                  iVar1 = *(int *)(puVar2 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar9,*puVar13);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x20);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                          **(undefined4 **)(iRam01683520 + 0x1682fec));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam01683524 + 0x1683004));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                  if (iVar15 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(iVar15 + 8);
                  uVar8 = *(uint *)(iVar15 + 0xc);
                  piVar3 = *(int **)(iRam01683528 + 0x1683054);
                  *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                  iVar6 = *piVar3;
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar8 < *(uint *)(iVar5 + 0xc)) {
                    *(uint *)(iVar15 + 0xc) = uVar8 + 1;
                    piVar3 = (int *)(iVar5 + uVar8 * 4 + 0x10);
                    *piVar3 = iVar1;
                    func_0x014385cc(piVar3,iVar1);
                  }
                  else {
                    func_0x0152874c(iVar15,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar13 = *(undefined4 **)(iRam0168352c + 0x16830b0);
                }
              }
            }
            iVar9 = iVar9 + 1;
          }
        }
      }
    }
    return iVar15;
  }
  iVar1 = func_0x029540a4(0x15f3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar10 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar10 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puStack_2c = *(undefined **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  iStack_34 = uStack_4c;
  iStack_30 = iStack_48;
  puStack_2c = (undefined *)iStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x024f56d0(iVar9,uVar12,&iStack_38,uVar4);
  iVar1 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return iVar1;
}


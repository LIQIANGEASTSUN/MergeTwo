
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01966514(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
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
  int *unaff_r10;
  int iVar15;
  int unaff_pc;
  bool bVar16;
  undefined8 uVar17;
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
  int *piStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(iRam01966f04 + 0x1966530);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01966f08 + 0x1966544));
    func_0x01438628(*(undefined4 *)(iRam01966f0c + 0x1966550));
    func_0x01438628(*(undefined4 *)(iRam01966f10 + 0x196655c));
    func_0x01438628(*(undefined4 *)(iRam01966f14 + 0x1966568));
    func_0x01438628(*(undefined4 *)(iRam01966f18 + 0x1966574));
    func_0x01438628(*(undefined4 *)(iRam01966f1c + 0x1966580));
    func_0x01438628(*(undefined4 *)(iRam01966f20 + 0x196658c));
    func_0x01438628(*(undefined4 *)(iRam01966f24 + 0x1966598));
    func_0x01438628(*(undefined4 *)(iRam01966f28 + 0x19665a4));
    func_0x01438628(*(undefined4 *)(iRam01966f2c + 0x19665b0));
    func_0x01438628(*(undefined4 *)(iRam01966f30 + 0x19665bc));
    func_0x01438628(*(undefined4 *)(iRam01966f34 + 0x19665c8));
    func_0x01438628(*(undefined4 *)(iRam01966f38 + 0x19665d4));
    func_0x01438628(*(undefined4 *)(iRam01966f3c + 0x19665e0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1617,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam01966f40 + 0x1966640) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam01966f44 + 0x196665c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam01966f48 + 0x196667c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar1 + 0x39c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x024eede4(iVar9,param_2,**(undefined4 **)(iRam01966f4c + 0x19666b4));
    iVar15 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)(iVar1 + 0x39c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam01966f50 + 0x19666e8));
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
          iVar15 = func_0x014388d4(**(undefined4 **)(iRam01966f54 + 0x1966750));
          func_0x024eed9c(iVar15,**(undefined4 **)(iRam01966f58 + 0x1966764));
          iVar5 = 0;
          puVar13 = *(undefined4 **)(iRam01966f5c + 0x196677c);
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
              bVar16 = iVar6 == 0;
              if (bVar16) {
                uVar17 = func_0x014388e4();
                piStack_34 = unaff_r10;
                if (bVar16) {
                  piStack_34 = (int *)((int)unaff_r10 + 0xee9);
                  iVar5 = *unaff_r10;
                  puVar2 = *(undefined4 **)
                            **(undefined4 **)
                              **(undefined4 **)
                                **(undefined4 **)
                                  **(undefined4 **)
                                    (**(int **)(*(int *)(*(int *)((int)uVar17 + 0x9c0) + 0x70c) +
                                               0x1670) + 0x508);
                  uVar17 = CONCAT44(*puVar2,puVar2 + 0x59);
                  iRam01966f24 = unaff_pc;
                  iRam01966f2c = unaff_pc;
                  iRam01966f30 = unaff_pc;
                  iRam01966f40 = unaff_pc;
                  iRam01966f44 = unaff_pc;
                  iRam01966f48 = unaff_pc;
                  iRam01966f4c = unaff_pc;
                  iRam01966f50 = unaff_pc;
                  iRam01966f6c = unaff_pc;
                  iRam01966f70 = unaff_pc;
                  iRam01966f80 = unaff_pc;
                  iRam01966f84 = unaff_pc;
                  iRam01966f94 = unaff_pc;
                  iRam01966f98 = unaff_pc;
                }
                iVar6 = (int)((ulonglong)uVar17 >> 0x20);
                uStack_2c = 0x1966f04;
                pcVar10 = (char *)(_UNK_019677d8 + 0x1966fbc);
                iStack_4c = iVar7;
                iStack_48 = param_2;
                iStack_44 = iVar1;
                puStack_40 = puVar13;
                iStack_3c = iVar9;
                iStack_38 = iVar5;
                iStack_30 = iVar15;
                if (*pcVar10 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_019677dc + 0x1966fd0));
                  func_0x01438628(*(undefined4 *)(_UNK_019677e0 + 0x1966fdc));
                  func_0x01438628(*(undefined4 *)(_UNK_019677e4 + 0x1966fe8));
                  func_0x01438628(*(undefined4 *)(_UNK_019677e8 + 0x1966ff4));
                  func_0x01438628(*(undefined4 *)(_UNK_019677ec + 0x1967000));
                  func_0x01438628(*(undefined4 *)(_UNK_019677f0 + 0x196700c));
                  func_0x01438628(*(undefined4 *)(_UNK_019677f4 + 0x1967018));
                  func_0x01438628(*(undefined4 *)(_UNK_019677f8 + 0x1967024));
                  func_0x01438628(*(undefined4 *)(_UNK_019677fc + 0x1967030));
                  func_0x01438628(*(undefined4 *)(_UNK_01967800 + 0x196703c));
                  func_0x01438628(*(undefined4 *)(_UNK_01967804 + 0x1967048));
                  func_0x01438628(*(undefined4 *)(_UNK_01967808 + 0x1967054));
                  func_0x01438628(*(undefined4 *)(_UNK_0196780c + 0x1967060));
                  func_0x01438628(*(undefined4 *)(_UNK_01967810 + 0x196706c));
                  func_0x01438628(*(undefined4 *)(_UNK_01967814 + 0x1967078));
                  func_0x01438628(*(undefined4 *)(_UNK_01967818 + 0x1967084));
                  func_0x01438628(*(undefined4 *)(_UNK_0196781c + 0x1967090));
                  func_0x01438628(*(undefined4 *)(_UNK_01967820 + 0x196709c));
                  func_0x01438628(*(undefined4 *)(_UNK_01967824 + 0x19670a8));
                  func_0x01438628(*(undefined4 *)(_UNK_01967828 + 0x19670b4));
                  func_0x01438628(*(undefined4 *)(_UNK_0196782c + 0x19670c0));
                  func_0x01438628(*(undefined4 *)(_UNK_01967830 + 0x19670cc));
                  func_0x01438628(*(undefined4 *)(_UNK_01967834 + 0x19670d8));
                  func_0x01438628(*(undefined4 *)(_UNK_01967838 + 0x19670e4));
                  func_0x01438628(*(undefined4 *)(_UNK_0196783c + 0x19670f0));
                  func_0x01438628(*(undefined4 *)(_UNK_01967840 + 0x19670fc));
                  func_0x01438628(*(undefined4 *)(_UNK_01967844 + 0x1967108));
                  func_0x01438628(*(undefined4 *)(_UNK_01967848 + 0x1967114));
                  *pcVar10 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x992a,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_0196784c + 0x196717c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01967850 + 0x1967198));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01967854 + 0x19671b8));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x39c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar12 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01967858 + 0x19671ec));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0196785c + 0x1967204));
                  func_0x024f108c(iVar1,uVar12,**(undefined4 **)(_UNK_01967860 + 0x196721c));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = *(int *)(iVar1 + 0xc);
                  uVar8 = iVar9 - 1;
                  if (-1 < (int)uVar8) {
                    puVar13 = *(undefined4 **)(_UNK_01967864 + 0x1967248);
                    do {
                      if (*(int *)(**(int **)(_UNK_01967868 + 0x1967254) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_0196786c + 0x1967270));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x036c7bec(iVar9,**(undefined4 **)(_UNK_01967870 + 0x1967290));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x39c);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar12 = func_0x0152983c(iVar1,uVar8,
                                               **(undefined4 **)(_UNK_01967874 + 0x19672c8));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar15 = func_0x024f04d4(iVar9,uVar12,
                                               **(undefined4 **)(_UNK_01967878 + 0x19672f4));
                      if (*(int *)(**(int **)(_UNK_0196787c + 0x196730c) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = FUN_019653ec(iVar15);
                      if ((iVar6 != 0 && iVar9 != 0) && (iVar9 = *(int *)(iVar6 + 0xc), 0 < iVar9))
                      {
                        iVar5 = 0;
                        do {
                          if (iVar15 == 0) {
                            func_0x014388e4();
                          }
                          iVar7 = *(int *)(iVar15 + 0x14);
                          iVar9 = func_0x0152983c(iVar6,iVar5,
                                                  **(undefined4 **)(_UNK_01967880 + 0x196737c));
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          uVar12 = *(undefined4 *)(iVar9 + 8);
                          if (iVar7 == 0) {
                            func_0x014388e4();
                          }
                          iVar9 = func_0x024f0540(iVar7,uVar12,
                                                  **(undefined4 **)(_UNK_01967884 + 0x19673b8));
                          if (iVar9 == 0) {
                            iVar7 = **(int **)(**(int **)(_UNK_01967890 + 0x196742c) + 0x5c);
                            iVar9 = func_0x0152983c(iVar6,iVar5,
                                                    **(undefined4 **)(_UNK_01967894 + 0x196743c));
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar9 + 8);
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            iVar9 = func_0x02e651cc(iVar7,uVar12,0);
                            if (iVar9 != 0) {
                              iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01967898 + 0x1967490));
                              func_0x024f0510(iVar9,**(undefined4 **)(_UNK_0196789c + 0x19674a4));
                              iVar7 = *(int *)(iVar15 + 0x14);
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)
                                                              (_UNK_019678a0 + 0x19674c8));
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar7,
                                              **(undefined4 **)(_UNK_019678a4 + 0x19674f4));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar7 = func_0x0151455c(&uStack_60,*puVar13),
                                    uVar12 = uStack_54, iVar7 != 0) {
                                if (*(int *)(**(int **)(_UNK_019678a8 + 0x1967528) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_019678ac + 0x1967548)
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
                                                            (_UNK_019678b0 + 0x19675a4));
                                  if (iVar7 == 0) {
                                    if (iVar9 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar7 = *(int *)(iVar9 + 8);
                                    uVar11 = *(uint *)(iVar9 + 0xc);
                                    piVar3 = *(int **)(_UNK_019678b4 + 0x19675e4);
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
                                              **(undefined4 **)(_UNK_019678b8 + 0x1967638));
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
                                                             (_UNK_019678c4 + 0x1967690));
                                  if (iVar14 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar14 = func_0x024f0540(iVar14,uVar12,
                                                           **(undefined4 **)
                                                             (_UNK_019678c8 + 0x19676bc));
                                  if (iVar14 != 0) {
                                    iVar14 = *(int *)(iVar15 + 0x14);
                                    uVar12 = func_0x024f0530(iVar9,iVar7,
                                                             **(undefined4 **)
                                                               (_UNK_019678cc + 0x19676dc));
                                    if (iVar14 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar14,uVar12,
                                                    **(undefined4 **)(_UNK_019678d0 + 0x1967708));
                                  }
                                  iVar7 = iVar7 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar7 = *(int *)(iVar15 + 0x14);
                            iVar9 = func_0x0152983c(iVar6,iVar5,
                                                    **(undefined4 **)(_UNK_01967888 + 0x19673d8));
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar9 + 8);
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar7,uVar12,
                                            **(undefined4 **)(_UNK_0196788c + 0x1967414));
                          }
                          iVar5 = iVar5 + 1;
                          iVar9 = *(int *)(iVar6 + 0xc);
                        } while (iVar5 < iVar9);
                      }
                      uVar8 = uVar8 - 1;
                    } while (uVar8 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x992a,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar9 = func_0x02869298(iVar1,(int)uVar17,iVar6,0);
                }
                return iVar9;
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
            iVar6 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam01966f60 + 0x1966818));
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
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar13);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0xd) == '\0') {
                  unaff_r10 = (int *)0x0;
                  while( true ) {
                    iVar6 = *(int *)(iVar9 + 0x6c);
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
                    if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                             **(undefined4 **)(iRam01966f64 + 0x1966be0));
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                            **(undefined4 **)(iRam01966f68 + 0x1966c4c));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01966f6c + 0x1966c64));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                    if (iVar15 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar15 + 8);
                    uVar8 = *(uint *)(iVar15 + 0xc);
                    piVar3 = *(int **)(iRam01966f70 + 0x1966cb4);
                    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(iVar15 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar15,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = (int *)((int)unaff_r10 + 1);
                    puVar13 = *(undefined4 **)(iRam01966f74 + 0x1966d10);
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
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar13);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0x28) == '\0') {
                  unaff_r10 = (int *)0x0;
                  while( true ) {
                    iVar6 = *(int *)(iVar9 + 0x6c);
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
                    if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                             **(undefined4 **)(iRam01966f78 + 0x1966dd0));
                    iVar1 = *(int *)(iVar9 + 0x6c);
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
                                            **(undefined4 **)(iRam01966f7c + 0x1966e3c));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01966f80 + 0x1966e54));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                    if (iVar15 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar15 + 8);
                    uVar8 = *(uint *)(iVar15 + 0xc);
                    piVar3 = *(int **)(iRam01966f84 + 0x1966ea4);
                    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(iVar15 + 0xc) = uVar8 + 1;
                      piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(iVar15,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = (int *)((int)unaff_r10 + 1);
                    puVar13 = *(undefined4 **)(iRam01966f88 + 0x1966f00);
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
              param_2 = func_0x014e9698(iVar6,iVar5,*puVar13);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = (int *)0x0;
                while( true ) {
                  iVar6 = *(int *)(iVar9 + 0x6c);
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
                  if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                  iVar1 = *(int *)(iVar9 + 0x6c);
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
                                           **(undefined4 **)(iRam01966f8c + 0x19669f0));
                  iVar1 = *(int *)(iVar9 + 0x6c);
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
                                          **(undefined4 **)(iRam01966f90 + 0x1966a5c));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam01966f94 + 0x1966a74));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar12,uVar4,0);
                  if (iVar15 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar15 + 8);
                  uVar8 = *(uint *)(iVar15 + 0xc);
                  piVar3 = *(int **)(iRam01966f98 + 0x1966ac4);
                  *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                  iVar7 = *piVar3;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(iVar15 + 0xc) = uVar8 + 1;
                    piVar3 = (int *)(iVar6 + uVar8 * 4 + 0x10);
                    *piVar3 = iVar1;
                    func_0x014385cc(piVar3,iVar1);
                  }
                  else {
                    func_0x0152874c(iVar15,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = (int *)((int)unaff_r10 + 1);
                  puVar13 = *(undefined4 **)(iRam01966f9c + 0x1966b20);
                }
              }
            }
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
    return iVar15;
  }
  iVar1 = func_0x029540a4(0x1617,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar10 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar10 = '\x01';
  }
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  piStack_34 = (int *)iStack_4c;
  iStack_30 = iStack_48;
  uStack_2c = iStack_44;
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


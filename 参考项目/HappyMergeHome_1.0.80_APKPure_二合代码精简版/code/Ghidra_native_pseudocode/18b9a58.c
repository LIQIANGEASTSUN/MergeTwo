
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_018c9a58(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  undefined4 *puVar13;
  int unaff_r10;
  undefined4 *puVar14;
  bool bVar15;
  undefined8 uVar16;
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
  
  puVar14 = &uStack_28;
  pcVar10 = (char *)(iRam018ca448 + 0x18c9a74);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam018ca44c + 0x18c9a88));
    func_0x01438628(*(undefined4 *)(iRam018ca450 + 0x18c9a94));
    func_0x01438628(*(undefined4 *)(iRam018ca454 + 0x18c9aa0));
    func_0x01438628(*(undefined4 *)(iRam018ca458 + 0x18c9aac));
    func_0x01438628(*(undefined4 *)(iRam018ca45c + 0x18c9ab8));
    func_0x01438628(*(undefined4 *)(iRam018ca460 + 0x18c9ac4));
    func_0x01438628(*(undefined4 *)(iRam018ca464 + 0x18c9ad0));
    func_0x01438628(*(undefined4 *)(iRam018ca468 + 0x18c9adc));
    func_0x01438628(*(undefined4 *)(iRam018ca46c + 0x18c9ae8));
    func_0x01438628(*(undefined4 *)(iRam018ca470 + 0x18c9af4));
    func_0x01438628(*(undefined4 *)(iRam018ca474 + 0x18c9b00));
    func_0x01438628(*(undefined4 *)(iRam018ca478 + 0x18c9b0c));
    func_0x01438628(*(undefined4 *)(iRam018ca47c + 0x18c9b18));
    func_0x01438628(*(undefined4 *)(iRam018ca480 + 0x18c9b24));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x143f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam018ca484 + 0x18c9b84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam018ca488 + 0x18c9ba0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam018ca48c + 0x18c9bc0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar1 + 0x348);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x024eede4(iVar9,param_2,**(undefined4 **)(iRam018ca490 + 0x18c9bf8));
    uVar2 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)(iVar1 + 0x348);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam018ca494 + 0x18c9c2c));
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
          uVar2 = func_0x014388d4(**(undefined4 **)(iRam018ca498 + 0x18c9c94));
          func_0x024eed9c(uVar2,**(undefined4 **)(iRam018ca49c + 0x18c9ca8));
          iVar5 = 0;
          puVar12 = *(undefined4 **)(iRam018ca4a0 + 0x18c9cc0);
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
                uVar4 = 0x18ca448;
                uVar16 = func_0x014388e4();
                uVar11 = 0;
                if (bVar15) {
                  uVar11 = 0x63f;
                  uRam00000000 = (undefined1)iVar1;
                  puVar13 = (undefined4 *)((int)&__DT_SYMTAB[0xfa].st_value + iVar5);
                  puVar14 = *(undefined4 **)(iVar5 + 0x10b38);
                  iVar5 = iVar5 + 0x115d0;
                  uVar4 = *puVar13;
                }
                *(undefined4 *)((int)puVar14 + -4) = uVar4;
                *(uint *)((int)puVar14 + -8) = uVar2;
                *(int *)((int)puVar14 + -0xc) = unaff_r10;
                *(int *)((int)puVar14 + -0x10) = iVar5;
                *(int *)((int)puVar14 + -0x14) = iVar9;
                *(undefined4 **)((int)puVar14 + -0x18) = puVar12;
                *(int *)((int)puVar14 + -0x1c) = iVar1;
                *(int *)((int)puVar14 + -0x20) = param_2;
                *(undefined4 *)((int)puVar14 + -0x24) = uVar11;
                *(int *)((int)puVar14 + -0x4c) = (int)((ulonglong)uVar16 >> 0x20);
                pcVar10 = (char *)(_UNK_018cad20 + 0x18ca500);
                if (*pcVar10 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_018cad24 + 0x18ca514));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad28 + 0x18ca520));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad2c + 0x18ca52c));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad30 + 0x18ca538));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad34 + 0x18ca544));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad38 + 0x18ca550));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad3c + 0x18ca55c));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad40 + 0x18ca568));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad44 + 0x18ca574));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad48 + 0x18ca580));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad4c + 0x18ca58c));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad50 + 0x18ca598));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad54 + 0x18ca5a4));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad58 + 0x18ca5b0));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad5c + 0x18ca5bc));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad60 + 0x18ca5c8));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad64 + 0x18ca5d4));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad68 + 0x18ca5e0));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad6c + 0x18ca5ec));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad70 + 0x18ca5f8));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad74 + 0x18ca604));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad78 + 0x18ca610));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad7c + 0x18ca61c));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad80 + 0x18ca628));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad84 + 0x18ca634));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad88 + 0x18ca640));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad8c + 0x18ca64c));
                  func_0x01438628(*(undefined4 *)(_UNK_018cad90 + 0x18ca658));
                  *pcVar10 = '\x01';
                }
                *(undefined4 *)((int)puVar14 + -0x38) = 0;
                *(undefined4 *)((int)puVar14 + -0x34) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                *(undefined4 *)((int)puVar14 + -0x30) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                *(undefined4 *)((int)puVar14 + -0x2c) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                iVar1 = func_0x02953fd4(0x953b,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_018cad94 + 0x18ca6c0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cad98 + 0x18ca6dc));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018cad9c + 0x18ca6fc));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x348);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar11 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018cada0 + 0x18ca730));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018cada4 + 0x18ca748));
                  func_0x024f108c(iVar1,uVar11,**(undefined4 **)(_UNK_018cada8 + 0x18ca760));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar2 = *(int *)(iVar1 + 0xc) - 1;
                  *(uint *)((int)puVar14 + -0x50) = uVar2;
                  if (-1 < (int)uVar2) {
                    puVar12 = *(undefined4 **)(_UNK_018cadac + 0x18ca790);
                    *(int *)((int)puVar14 + -0x54) = iVar1;
                    do {
                      if (*(int *)(**(int **)(_UNK_018cadb0 + 0x18ca79c) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_018cadb4 + 0x18ca7b8));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x036c7bec(iVar9,**(undefined4 **)(_UNK_018cadb8 + 0x18ca7d8));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x348);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar11 = func_0x0152983c(iVar1,*(undefined4 *)((int)puVar14 + -0x50),
                                               **(undefined4 **)(_UNK_018cadbc + 0x18ca80c));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar1 = func_0x024f04d4(iVar9,uVar11,
                                              **(undefined4 **)(_UNK_018cadc0 + 0x18ca838));
                      if (*(int *)(**(int **)(_UNK_018cadc4 + 0x18ca850) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = FUN_018c893c(iVar1);
                      if ((*(int *)((int)puVar14 + -0x4c) != 0 && iVar9 != 0) &&
                         (0 < *(int *)(*(int *)((int)puVar14 + -0x4c) + 0xc))) {
                        iVar9 = 0;
                        do {
                          if (iVar1 == 0) {
                            func_0x014388e4();
                          }
                          iVar6 = *(int *)(iVar1 + 0x14);
                          iVar5 = func_0x0152983c(*(undefined4 *)((int)puVar14 + -0x4c),iVar9,
                                                  **(undefined4 **)(_UNK_018cadc8 + 0x18ca8c4));
                          if (iVar5 == 0) {
                            func_0x014388e4();
                          }
                          uVar11 = *(undefined4 *)(iVar5 + 8);
                          if (iVar6 == 0) {
                            func_0x014388e4();
                          }
                          iVar5 = func_0x024f0540(iVar6,uVar11,
                                                  **(undefined4 **)(_UNK_018cadcc + 0x18ca900));
                          if (iVar5 == 0) {
                            iVar6 = **(int **)(**(int **)(_UNK_018cadd8 + 0x18ca974) + 0x5c);
                            iVar5 = func_0x0152983c(*(undefined4 *)((int)puVar14 + -0x4c),
                                                    *(undefined4 *)((int)puVar14 + -0x50),
                                                    **(undefined4 **)(_UNK_018caddc + 0x18ca984));
                            if (iVar5 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar5 + 8);
                            if (iVar6 == 0) {
                              func_0x014388e4();
                            }
                            iVar5 = func_0x02e651cc(iVar6,uVar11,0);
                            if (iVar5 != 0) {
                              iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018cade0 + 0x18ca9d8));
                              func_0x024f0510(iVar5,**(undefined4 **)(_UNK_018cade4 + 0x18ca9ec));
                              iVar6 = *(int *)(iVar1 + 0x14);
                              if (iVar6 == 0) {
                                func_0x014388e4();
                              }
                              iVar6 = func_0x024f10dc(iVar6,**(undefined4 **)
                                                              (_UNK_018cade8 + 0x18caa10));
                              if (iVar6 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec((undefined4 *)((int)puVar14 + -0x48),iVar6,
                                              **(undefined4 **)(_UNK_018cadec + 0x18caa3c));
                              *(undefined4 *)((int)puVar14 + -0x38) =
                                   *(undefined4 *)((int)puVar14 + -0x48);
                              *(undefined4 *)((int)puVar14 + -0x34) =
                                   *(undefined4 *)((int)puVar14 + -0x44);
                              *(undefined4 *)((int)puVar14 + -0x30) =
                                   *(undefined4 *)((int)puVar14 + -0x40);
                              *(undefined4 *)((int)puVar14 + -0x2c) =
                                   *(undefined4 *)((int)puVar14 + -0x3c);
                              while (iVar6 = func_0x0151455c((int)puVar14 + -0x38,*puVar12),
                                    iVar6 != 0) {
                                uVar11 = *(undefined4 *)((int)puVar14 + -0x2c);
                                if (*(int *)(**(int **)(_UNK_018cadf0 + 0x18caa70) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_018cadf4 + 0x18caa90)
                                                       );
                                if (iVar6 == 0) {
                                  func_0x014388e4();
                                }
                                iVar6 = func_0x029a6fa8(iVar6,uVar11,0);
                                if (iVar6 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar6 + 0x1c) - 3U < 3) {
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar6 = func_0x024f0f34(iVar5,uVar11,
                                                          **(undefined4 **)
                                                            (_UNK_018cadf8 + 0x18caaec));
                                  if (iVar6 == 0) {
                                    if (iVar5 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar6 = *(int *)(iVar5 + 8);
                                    uVar2 = *(uint *)(iVar5 + 0xc);
                                    piVar3 = *(int **)(_UNK_018cadfc + 0x18cab2c);
                                    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                                    iVar7 = *piVar3;
                                    if (iVar6 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar2 < *(uint *)(iVar6 + 0xc)) {
                                      *(uint *)(iVar5 + 0xc) = uVar2 + 1;
                                      *(undefined4 *)(iVar6 + uVar2 * 4 + 0x10) = uVar11;
                                    }
                                    else {
                                      func_0x024f0520(iVar5,uVar11,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc((int)puVar14 + -0x38,
                                              **(undefined4 **)(_UNK_018cae00 + 0x18cab80));
                              if (iVar5 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar5 + 0xc)) {
                                iVar6 = 0;
                                while( true ) {
                                  if (iVar5 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar5 + 0xc) <= iVar6) break;
                                  if (iVar1 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar7 = *(int *)(iVar1 + 0x14);
                                  uVar11 = func_0x024f0530(iVar5,iVar6,
                                                           **(undefined4 **)
                                                             (_UNK_018cae0c + 0x18cabd8));
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar7 = func_0x024f0540(iVar7,uVar11,
                                                          **(undefined4 **)
                                                            (_UNK_018cae10 + 0x18cac04));
                                  if (iVar7 != 0) {
                                    iVar7 = *(int *)(iVar1 + 0x14);
                                    uVar11 = func_0x024f0530(iVar5,iVar6,
                                                             **(undefined4 **)
                                                               (_UNK_018cae14 + 0x18cac24));
                                    if (iVar7 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar7,uVar11,
                                                    **(undefined4 **)(_UNK_018cae18 + 0x18cac50));
                                  }
                                  iVar6 = iVar6 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar6 = *(int *)(iVar1 + 0x14);
                            iVar5 = func_0x0152983c(*(undefined4 *)((int)puVar14 + -0x4c),iVar9,
                                                    **(undefined4 **)(_UNK_018cadd0 + 0x18ca920));
                            if (iVar5 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar5 + 8);
                            if (iVar6 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar6,uVar11,
                                            **(undefined4 **)(_UNK_018cadd4 + 0x18ca95c));
                          }
                          iVar9 = iVar9 + 1;
                        } while (iVar9 < *(int *)(*(int *)((int)puVar14 + -0x4c) + 0xc));
                      }
                      iVar1 = *(int *)((int)puVar14 + -0x54);
                      uVar2 = *(int *)((int)puVar14 + -0x50) - 1;
                      *(uint *)((int)puVar14 + -0x50) = uVar2;
                    } while (uVar2 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x953b,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar2 = func_0x02869298(iVar1,(int)uVar16,*(undefined4 *)((int)puVar14 + -0x4c),0)
                  ;
                }
                return uVar2;
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
            iVar6 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam018ca4a4 + 0x18c9d5c));
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
                  unaff_r10 = 0;
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
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
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
                                             **(undefined4 **)(iRam018ca4a8 + 0x18ca124));
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
                                            **(undefined4 **)(iRam018ca4ac + 0x18ca190));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam018ca4b0 + 0x18ca1a8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar8 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam018ca4b4 + 0x18ca1f8);
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
                    unaff_r10 = unaff_r10 + 1;
                    puVar12 = *(undefined4 **)(iRam018ca4b8 + 0x18ca254);
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
                  unaff_r10 = 0;
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
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
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
                                             **(undefined4 **)(iRam018ca4bc + 0x18ca314));
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
                                            **(undefined4 **)(iRam018ca4c0 + 0x18ca380));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam018ca4c4 + 0x18ca398));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar8 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam018ca4c8 + 0x18ca3e8);
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
                    unaff_r10 = unaff_r10 + 1;
                    puVar12 = *(undefined4 **)(iRam018ca4cc + 0x18ca444);
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
              param_2 = func_0x014e9698(iVar6,iVar5,*puVar12);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar6 = *(int *)(iVar9 + 0x6c);
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
                                           **(undefined4 **)(iRam018ca4d0 + 0x18c9f34));
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
                                          **(undefined4 **)(iRam018ca4d4 + 0x18c9fa0));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam018ca4d8 + 0x18c9fb8));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                  if (uVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(uVar2 + 8);
                  uVar8 = *(uint *)(uVar2 + 0xc);
                  piVar3 = *(int **)(iRam018ca4dc + 0x18ca008);
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
                  unaff_r10 = unaff_r10 + 1;
                  puVar12 = *(undefined4 **)(iRam018ca4e0 + 0x18ca064);
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
  iVar1 = func_0x029540a4(0x143f,0);
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
  uVar2 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return uVar2;
}


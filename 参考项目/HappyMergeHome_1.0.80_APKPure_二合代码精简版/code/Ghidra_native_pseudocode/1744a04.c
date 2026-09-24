
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_01754a04(undefined4 param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
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
  uint unaff_r10;
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
  uint uStack_34;
  byte *pbStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(iRam017553f4 + 0x1754a20);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam017553f8 + 0x1754a34));
    func_0x01438628(*(undefined4 *)(iRam017553fc + 0x1754a40));
    func_0x01438628(*(undefined4 *)(iRam01755400 + 0x1754a4c));
    func_0x01438628(*(undefined4 *)(iRam01755404 + 0x1754a58));
    func_0x01438628(*(undefined4 *)(iRam01755408 + 0x1754a64));
    func_0x01438628(*(undefined4 *)(iRam0175540c + 0x1754a70));
    func_0x01438628(*(undefined4 *)(iRam01755410 + 0x1754a7c));
    func_0x01438628(*(undefined4 *)(iRam01755414 + 0x1754a88));
    func_0x01438628(*(undefined4 *)(iRam01755418 + 0x1754a94));
    func_0x01438628(*(undefined4 *)(iRam0175541c + 0x1754aa0));
    func_0x01438628(*(undefined4 *)(iRam01755420 + 0x1754aac));
    func_0x01438628(*(undefined4 *)(iRam01755424 + 0x1754ab8));
    func_0x01438628(*(undefined4 *)(iRam01755428 + 0x1754ac4));
    func_0x01438628(*(undefined4 *)(iRam0175542c + 0x1754ad0));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15bd,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam01755430 + 0x1754b30) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam01755434 + 0x1754b4c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam01755438 + 0x1754b6c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar10 = *(int *)(iVar1 + 0x394);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar10 = func_0x024eede4(iVar10,param_2,**(undefined4 **)(iRam0175543c + 0x1754ba4));
    pbVar2 = (byte *)0x0;
    if (iVar10 != 0) {
      iVar1 = *(int *)(iVar1 + 0x394);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam01755440 + 0x1754bd8));
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
          pbVar2 = (byte *)func_0x014388d4(**(undefined4 **)(iRam01755444 + 0x1754c40));
          func_0x024eed9c(pbVar2,**(undefined4 **)(iRam01755448 + 0x1754c54));
          iVar5 = 0;
          puVar14 = *(undefined4 **)(iRam0175544c + 0x1754c6c);
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
              bVar16 = iVar6 == 0;
              if (bVar16) {
                uVar17 = func_0x014388e4();
                iVar6 = (int)((ulonglong)uVar17 >> 0x20);
                pbStack_30 = pbVar2;
                if (bVar16) {
                  pbStack_30 = pbVar2 + 0xe85;
                  unaff_r10 = (uint)*pbVar2;
                  iVar6 = **(int **)(**(int **)(**(int **)(**(int **)(*(int *)**(undefined4 **)
                                                                                **(undefined4 **)
                                                                                  (**(int **)**(
                                                  undefined4 **)(*(int *)(iVar6 + 0x1af0) + 0x21c) +
                                                  0xe74) + 0x1f4c) + 0xae0) + 0x1498) + 0xec8) +
                          0x1a68;
                }
                uStack_2c = 0x17553f4;
                pcVar11 = (char *)(_UNK_01755cc8 + 0x17554ac);
                iStack_4c = iVar7;
                iStack_48 = param_2;
                iStack_44 = iVar1;
                puStack_40 = puVar14;
                iStack_3c = iVar10;
                iStack_38 = iVar5;
                uStack_34 = unaff_r10;
                if (*pcVar11 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_01755ccc + 0x17554c0));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cd0 + 0x17554cc));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cd4 + 0x17554d8));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cd8 + 0x17554e4));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cdc + 0x17554f0));
                  func_0x01438628(*(undefined4 *)(_UNK_01755ce0 + 0x17554fc));
                  func_0x01438628(*(undefined4 *)(_UNK_01755ce4 + 0x1755508));
                  func_0x01438628(*(undefined4 *)(_UNK_01755ce8 + 0x1755514));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cec + 0x1755520));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cf0 + 0x175552c));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cf4 + 0x1755538));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cf8 + 0x1755544));
                  func_0x01438628(*(undefined4 *)(_UNK_01755cfc + 0x1755550));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d00 + 0x175555c));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d04 + 0x1755568));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d08 + 0x1755574));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d0c + 0x1755580));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d10 + 0x175558c));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d14 + 0x1755598));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d18 + 0x17555a4));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d1c + 0x17555b0));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d20 + 0x17555bc));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d24 + 0x17555c8));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d28 + 0x17555d4));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d2c + 0x17555e0));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d30 + 0x17555ec));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d34 + 0x17555f8));
                  func_0x01438628(*(undefined4 *)(_UNK_01755d38 + 0x1755604));
                  *pcVar11 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x8d0c,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_01755d3c + 0x175566c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01755d40 + 0x1755688));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01755d44 + 0x17556a8));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x394);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar13 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01755d48 + 0x17556dc));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01755d4c + 0x17556f4));
                  func_0x024f108c(iVar1,uVar13,**(undefined4 **)(_UNK_01755d50 + 0x175570c));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  pbVar2 = *(byte **)(iVar1 + 0xc);
                  pbVar12 = pbVar2 + -1;
                  if (-1 < (int)pbVar12) {
                    puVar14 = *(undefined4 **)(_UNK_01755d54 + 0x1755738);
                    do {
                      if (*(int *)(**(int **)(_UNK_01755d58 + 0x1755744) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_01755d5c + 0x1755760));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x036c7bec(iVar10,**(undefined4 **)(_UNK_01755d60 + 0x1755780));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = *(int *)(iVar10 + 0x394);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar13 = func_0x0152983c(iVar1,pbVar12,
                                               **(undefined4 **)(_UNK_01755d64 + 0x17557b8));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x024f04d4(iVar10,uVar13,
                                               **(undefined4 **)(_UNK_01755d68 + 0x17557e4));
                      if (*(int *)(**(int **)(_UNK_01755d6c + 0x17557fc) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      pbVar2 = (byte *)FUN_017538dc(iVar10);
                      if ((iVar6 != 0 && pbVar2 != (byte *)0x0) &&
                         (pbVar2 = *(byte **)(iVar6 + 0xc), 0 < (int)pbVar2)) {
                        iVar5 = 0;
                        do {
                          if (iVar10 == 0) {
                            func_0x014388e4();
                          }
                          iVar8 = *(int *)(iVar10 + 0x14);
                          iVar7 = func_0x0152983c(iVar6,iVar5,
                                                  **(undefined4 **)(_UNK_01755d70 + 0x175586c));
                          if (iVar7 == 0) {
                            func_0x014388e4();
                          }
                          uVar13 = *(undefined4 *)(iVar7 + 8);
                          if (iVar8 == 0) {
                            func_0x014388e4();
                          }
                          iVar7 = func_0x024f0540(iVar8,uVar13,
                                                  **(undefined4 **)(_UNK_01755d74 + 0x17558a8));
                          if (iVar7 == 0) {
                            iVar8 = **(int **)(**(int **)(_UNK_01755d80 + 0x175591c) + 0x5c);
                            iVar7 = func_0x0152983c(iVar6,iVar5,
                                                    **(undefined4 **)(_UNK_01755d84 + 0x175592c));
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            uVar13 = *(undefined4 *)(iVar7 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            iVar7 = func_0x02e651cc(iVar8,uVar13,0);
                            if (iVar7 != 0) {
                              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01755d88 + 0x1755980));
                              func_0x024f0510(iVar7,**(undefined4 **)(_UNK_01755d8c + 0x1755994));
                              iVar8 = *(int *)(iVar10 + 0x14);
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              iVar8 = func_0x024f10dc(iVar8,**(undefined4 **)
                                                              (_UNK_01755d90 + 0x17559b8));
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar8,
                                              **(undefined4 **)(_UNK_01755d94 + 0x17559e4));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar8 = func_0x0151455c(&uStack_60,*puVar14),
                                    uVar13 = uStack_54, iVar8 != 0) {
                                if (*(int *)(**(int **)(_UNK_01755d98 + 0x1755a18) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01755d9c + 0x1755a38)
                                                       );
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                iVar8 = func_0x029a6fa8(iVar8,uVar13,0);
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar8 + 0x1c) - 3U < 3) {
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar8 = func_0x024f0f34(iVar7,uVar13,
                                                          **(undefined4 **)
                                                            (_UNK_01755da0 + 0x1755a94));
                                  if (iVar8 == 0) {
                                    if (iVar7 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar8 = *(int *)(iVar7 + 8);
                                    uVar9 = *(uint *)(iVar7 + 0xc);
                                    piVar3 = *(int **)(_UNK_01755da4 + 0x1755ad4);
                                    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                                    iVar15 = *piVar3;
                                    if (iVar8 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar9 < *(uint *)(iVar8 + 0xc)) {
                                      *(uint *)(iVar7 + 0xc) = uVar9 + 1;
                                      *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar13;
                                    }
                                    else {
                                      func_0x024f0520(iVar7,uVar13,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar15 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_01755da8 + 0x1755b28));
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
                                  iVar15 = *(int *)(iVar10 + 0x14);
                                  uVar13 = func_0x024f0530(iVar7,iVar8,
                                                           **(undefined4 **)
                                                             (_UNK_01755db4 + 0x1755b80));
                                  if (iVar15 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar15 = func_0x024f0540(iVar15,uVar13,
                                                           **(undefined4 **)
                                                             (_UNK_01755db8 + 0x1755bac));
                                  if (iVar15 != 0) {
                                    iVar15 = *(int *)(iVar10 + 0x14);
                                    uVar13 = func_0x024f0530(iVar7,iVar8,
                                                             **(undefined4 **)
                                                               (_UNK_01755dbc + 0x1755bcc));
                                    if (iVar15 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar15,uVar13,
                                                    **(undefined4 **)(_UNK_01755dc0 + 0x1755bf8));
                                  }
                                  iVar8 = iVar8 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar8 = *(int *)(iVar10 + 0x14);
                            iVar7 = func_0x0152983c(iVar6,iVar5,
                                                    **(undefined4 **)(_UNK_01755d78 + 0x17558c8));
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            uVar13 = *(undefined4 *)(iVar7 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar8,uVar13,
                                            **(undefined4 **)(_UNK_01755d7c + 0x1755904));
                          }
                          iVar5 = iVar5 + 1;
                          pbVar2 = *(byte **)(iVar6 + 0xc);
                        } while (iVar5 < (int)pbVar2);
                      }
                      pbVar12 = pbVar12 + -1;
                    } while (pbVar12 < (byte *)0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x8d0c,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  pbVar2 = (byte *)func_0x02869298(iVar1,(int)uVar17,iVar6,0);
                }
                return pbVar2;
              }
            }
            iVar1 = *(int *)(iVar6 + 0xc);
            param_2 = *(int *)(iVar7 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024f0f34(param_2,iVar1,**(undefined4 **)(iRam01755450 + 0x1754d08));
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
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar14);
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
                    iVar6 = func_0x014e9698(iVar6,iVar5,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar13 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam01755454 + 0x17550d0));
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam01755458 + 0x175513c));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0175545c + 0x1755154));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar13,uVar4,0);
                    if (pbVar2 == (byte *)0x0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(pbVar2 + 8);
                    uVar9 = *(uint *)(pbVar2 + 0xc);
                    piVar3 = *(int **)(iRam01755460 + 0x17551a4);
                    *(int *)(pbVar2 + 0x10) = *(int *)(pbVar2 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(pbVar2 + 0xc) = uVar9 + 1;
                      piVar3 = (int *)(iVar6 + uVar9 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(pbVar2,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar14 = *(undefined4 **)(iRam01755464 + 0x1755200);
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
                iVar6 = func_0x014e9698(iVar6,iVar5,*puVar14);
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
                    iVar6 = func_0x014e9698(iVar6,iVar5,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar13 = func_0x024f05a4(iVar1,unaff_r10,
                                             **(undefined4 **)(iRam01755468 + 0x17552c0));
                    iVar1 = *(int *)(iVar10 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x30);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                            **(undefined4 **)(iRam0175546c + 0x175532c));
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01755470 + 0x1755344));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar13,uVar4,0);
                    if (pbVar2 == (byte *)0x0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(pbVar2 + 8);
                    uVar9 = *(uint *)(pbVar2 + 0xc);
                    piVar3 = *(int **)(iRam01755474 + 0x1755394);
                    *(int *)(pbVar2 + 0x10) = *(int *)(pbVar2 + 0x10) + 1;
                    iVar7 = *piVar3;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(pbVar2 + 0xc) = uVar9 + 1;
                      piVar3 = (int *)(iVar6 + uVar9 * 4 + 0x10);
                      *piVar3 = iVar1;
                      func_0x014385cc(piVar3,iVar1);
                    }
                    else {
                      func_0x0152874c(pbVar2,iVar1,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar14 = *(undefined4 **)(iRam01755478 + 0x17553f0);
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
              param_2 = func_0x014e9698(iVar6,iVar5,*puVar14);
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
                  param_2 = func_0x014e9698(iVar6,iVar5,*puVar14);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= (int)unaff_r10) break;
                  iVar1 = *(int *)(iVar10 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x1c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar13 = func_0x024f05a4(iVar1,unaff_r10,
                                           **(undefined4 **)(iRam0175547c + 0x1754ee0));
                  iVar1 = *(int *)(iVar10 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,iVar5,*puVar14);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x20);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x024f05a4(iVar1,unaff_r10,
                                          **(undefined4 **)(iRam01755480 + 0x1754f4c));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam01755484 + 0x1754f64));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar13,uVar4,0);
                  if (pbVar2 == (byte *)0x0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(pbVar2 + 8);
                  uVar9 = *(uint *)(pbVar2 + 0xc);
                  piVar3 = *(int **)(iRam01755488 + 0x1754fb4);
                  *(int *)(pbVar2 + 0x10) = *(int *)(pbVar2 + 0x10) + 1;
                  iVar7 = *piVar3;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(pbVar2 + 0xc) = uVar9 + 1;
                    piVar3 = (int *)(iVar6 + uVar9 * 4 + 0x10);
                    *piVar3 = iVar1;
                    func_0x014385cc(piVar3,iVar1);
                  }
                  else {
                    func_0x0152874c(pbVar2,iVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar14 = *(undefined4 **)(iRam0175548c + 0x1755010);
                }
              }
            }
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
    return pbVar2;
  }
  iVar1 = func_0x029540a4(0x15bd,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar11 = '\x01';
  }
  uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pbStack_30 = *(byte **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  uStack_34 = iStack_4c;
  pbStack_30 = (byte *)iStack_48;
  uStack_2c = iStack_44;
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
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar10,uVar13,&iStack_38,uVar4);
  pbVar2 = (byte *)func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return pbVar2;
}


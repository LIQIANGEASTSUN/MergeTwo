
/* WARNING: Removing unreachable block (ram,0x0187a664) */
/* WARNING: Removing unreachable block (ram,0x0187a660) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffac : 0x0187ac38 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01879c24(undefined4 param_1,undefined4 param_2)

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
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  uint uStackY_78;
  undefined4 uStackY_70;
  undefined4 uStackY_6c;
  undefined4 uStackY_64;
  undefined4 uStackY_60;
  undefined4 uStackY_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(iRam0187a614 + 0x1879c40);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0187a618 + 0x1879c54));
    func_0x01438628(*(undefined4 *)(iRam0187a61c + 0x1879c60));
    func_0x01438628(*(undefined4 *)(iRam0187a620 + 0x1879c6c));
    func_0x01438628(*(undefined4 *)(iRam0187a624 + 0x1879c78));
    func_0x01438628(*(undefined4 *)(iRam0187a628 + 0x1879c84));
    func_0x01438628(*(undefined4 *)(iRam0187a62c + 0x1879c90));
    func_0x01438628(*(undefined4 *)(iRam0187a630 + 0x1879c9c));
    func_0x01438628(*(undefined4 *)(iRam0187a634 + 0x1879ca8));
    func_0x01438628(*(undefined4 *)(iRam0187a638 + 0x1879cb4));
    func_0x01438628(*(undefined4 *)(iRam0187a63c + 0x1879cc0));
    func_0x01438628(*(undefined4 *)(iRam0187a640 + 0x1879ccc));
    func_0x01438628(*(undefined4 *)(iRam0187a644 + 0x1879cd8));
    func_0x01438628(*(undefined4 *)(iRam0187a648 + 0x1879ce4));
    func_0x01438628(*(undefined4 *)(iRam0187a64c + 0x1879cf0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1702,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam0187a650 + 0x1879d50) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam0187a654 + 0x1879d6c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam0187a658 + 0x1879d8c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar1 + 0x2f0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x024eede4(iVar9,param_2,**(undefined4 **)(iRam0187a65c + 0x1879dc4));
    uVar2 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)(iVar1 + 0x2f0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x024f04d4(iVar1,param_2,**(undefined4 **)(iRam0187a660 + 0x1879df8));
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
          uVar2 = func_0x014388d4(**(undefined4 **)(iRam0187a664 + 0x1879e60));
          func_0x024eed9c(uVar2,**(undefined4 **)(iRam0187a668 + 0x1879e74));
          puVar15 = (undefined1 *)0x0;
          puVar12 = *(undefined4 **)(iRam0187a66c + 0x1879e8c);
          while( true ) {
            iVar5 = *(int *)(iVar9 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0xc);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar5 + 0xc) <= (int)puVar15) break;
            iVar6 = *(int *)(iVar9 + 0x6c);
            iVar5 = iVar6;
            if (iVar6 == 0) {
              func_0x014388e4();
              iVar5 = *(int *)(iVar9 + 0x6c);
              bVar16 = iVar5 == 0;
              if (bVar16) {
                uVar17 = func_0x014388e4();
                iVar5 = (int)((ulonglong)uVar17 >> 0x20);
                if (!bVar16) {
                    /* WARNING: Could not recover jumptable at 0x0187a660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar10 = (char *)(_UNK_0187aeec + 0x187a6cc);
                  iStack_3c = iVar9;
                  if (*pcVar10 == '\0') {
                    func_0x01438628(*(undefined4 *)(_UNK_0187aef0 + 0x187a6e0));
                    func_0x01438628(*(undefined4 *)(_UNK_0187aef4 + 0x187a6ec));
                    func_0x01438628(*(undefined4 *)(_UNK_0187aef8 + 0x187a6f8));
                    func_0x01438628(*(undefined4 *)(_UNK_0187aefc + 0x187a704));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af00 + 0x187a710));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af04 + 0x187a71c));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af08 + 0x187a728));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af0c + 0x187a734));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af10 + 0x187a740));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af14 + 0x187a74c));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af18 + 0x187a758));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af1c + 0x187a764));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af20 + 0x187a770));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af24 + 0x187a77c));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af28 + 0x187a788));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af2c + 0x187a794));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af30 + 0x187a7a0));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af34 + 0x187a7ac));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af38 + 0x187a7b8));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af3c + 0x187a7c4));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af40 + 0x187a7d0));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af44 + 0x187a7dc));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af48 + 0x187a7e8));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af4c + 0x187a7f4));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af50 + 0x187a800));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af54 + 0x187a80c));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af58 + 0x187a818));
                    func_0x01438628(*(undefined4 *)(_UNK_0187af5c + 0x187a824));
                    *pcVar10 = '\x01';
                  }
                  uStackY_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uStackY_60 = 0;
                  iVar1 = func_0x02953fd4(0x93c9,0);
                  if (iVar1 == 0) {
                    if (*(int *)(**(int **)(_UNK_0187af60 + 0x187a88c) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187af64 + 0x187a8a8));
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0187af68 + 0x187a8c8));
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2f0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0187af6c + 0x187a8fc));
                    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0187af70 + 0x187a914));
                    func_0x024f108c(iVar1,uVar11,**(undefined4 **)(_UNK_0187af74 + 0x187a92c));
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uStackY_78 = *(int *)(iVar1 + 0xc) - 1;
                    if (-1 < (int)uStackY_78) {
                      puVar12 = *(undefined4 **)(_UNK_0187af78 + 0x187a95c);
                      do {
                        if (*(int *)(**(int **)(_UNK_0187af7c + 0x187a968) + 0x74) == 0) {
                          func_0x014387a4();
                        }
                        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_0187af80 + 0x187a984));
                        if (iVar9 == 0) {
                          func_0x014388e4();
                        }
                        iVar9 = func_0x036c7bec(iVar9,**(undefined4 **)(_UNK_0187af84 + 0x187a9a4));
                        if (iVar9 == 0) {
                          func_0x014388e4();
                        }
                        iVar9 = *(int *)(iVar9 + 0x2f0);
                        if (iVar1 == 0) {
                          func_0x014388e4();
                        }
                        uVar11 = func_0x0152983c(iVar1,uStackY_78,
                                                 **(undefined4 **)(_UNK_0187af88 + 0x187a9d8));
                        if (iVar9 == 0) {
                          func_0x014388e4();
                        }
                        iVar9 = func_0x024f04d4(iVar9,uVar11,
                                                **(undefined4 **)(_UNK_0187af8c + 0x187aa04));
                        if (*(int *)(**(int **)(_UNK_0187af90 + 0x187aa1c) + 0x74) == 0) {
                          func_0x014387a4();
                        }
                        iVar6 = FUN_01878b08(iVar9);
                        if ((iVar5 != 0 && iVar6 != 0) && (0 < *(int *)(iVar5 + 0xc))) {
                          iVar6 = 0;
                          do {
                            if (iVar9 == 0) {
                              func_0x014388e4();
                            }
                            iVar7 = *(int *)(iVar9 + 0x14);
                            iVar13 = func_0x0152983c(iVar5,iVar6,
                                                     **(undefined4 **)(_UNK_0187af94 + 0x187aa90));
                            if (iVar13 == 0) {
                              func_0x014388e4();
                            }
                            uVar11 = *(undefined4 *)(iVar13 + 8);
                            if (iVar7 == 0) {
                              func_0x014388e4();
                            }
                            iVar13 = func_0x024f0540(iVar7,uVar11,
                                                     **(undefined4 **)(_UNK_0187af98 + 0x187aacc));
                            if (iVar13 == 0) {
                              iVar7 = **(int **)(**(int **)(_UNK_0187afa4 + 0x187ab40) + 0x5c);
                              iVar13 = func_0x0152983c(iVar5,uStackY_78,
                                                       **(undefined4 **)(_UNK_0187afa8 + 0x187ab50))
                              ;
                              if (iVar13 == 0) {
                                func_0x014388e4();
                              }
                              uVar11 = *(undefined4 *)(iVar13 + 8);
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              iVar13 = func_0x02e651cc(iVar7,uVar11,0);
                              if (iVar13 != 0) {
                                iVar13 = func_0x014388d4(**(undefined4 **)
                                                           (_UNK_0187afac + 0x187aba4));
                                func_0x024f0510(iVar13,**(undefined4 **)(_UNK_0187afb0 + 0x187abb8))
                                ;
                                iVar7 = *(int *)(iVar9 + 0x14);
                                if (iVar7 == 0) {
                                  func_0x014388e4();
                                }
                                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)
                                                                (_UNK_0187afb4 + 0x187abdc));
                                if (iVar7 == 0) {
                                  func_0x014388e4();
                                }
                                func_0x024f10ec(&uStackY_70,iVar7,
                                                **(undefined4 **)(_UNK_0187afb8 + 0x187ac08));
                                uVar11 = uStackY_64;
                                uStackY_60 = uStackY_70;
                                uStackY_5c = uStackY_6c;
                                while (iVar7 = func_0x0151455c(&uStackY_60,*puVar12), iVar7 != 0) {
                                  if (*(int *)(**(int **)(_UNK_0187afbc + 0x187ac3c) + 0x74) == 0) {
                                    func_0x014387a4();
                                  }
                                  iVar7 = func_0x014e9518(**(undefined4 **)
                                                            (_UNK_0187afc0 + 0x187ac5c));
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar7 = func_0x029a6fa8(iVar7,uVar11,0);
                                  if (iVar7 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                                    if (iVar13 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar7 = func_0x024f0f34(iVar13,uVar11,
                                                            **(undefined4 **)
                                                              (_UNK_0187afc4 + 0x187acb8));
                                    if (iVar7 == 0) {
                                      if (iVar13 == 0) {
                                        func_0x014388e4();
                                      }
                                      iVar7 = *(int *)(iVar13 + 8);
                                      uVar2 = *(uint *)(iVar13 + 0xc);
                                      piVar3 = *(int **)(_UNK_0187afc8 + 0x187acf8);
                                      *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
                                      iVar14 = *piVar3;
                                      if (iVar7 == 0) {
                                        func_0x014388e4();
                                      }
                                      if (uVar2 < *(uint *)(iVar7 + 0xc)) {
                                        *(uint *)(iVar13 + 0xc) = uVar2 + 1;
                                        *(undefined4 *)(iVar7 + uVar2 * 4 + 0x10) = uVar11;
                                      }
                                      else {
                                        func_0x024f0520(iVar13,uVar11,
                                                        *(undefined4 *)
                                                         (*(int *)(*(int *)(iVar14 + 0x10) + 0x60) +
                                                         0x38));
                                      }
                                    }
                                  }
                                }
                                func_0x024f10fc(&uStackY_60,
                                                **(undefined4 **)(_UNK_0187afcc + 0x187ad4c));
                                if (iVar13 == 0) {
                                  func_0x014388e4();
                                }
                                if (0 < *(int *)(iVar13 + 0xc)) {
                                  iVar7 = 0;
                                  while( true ) {
                                    if (iVar13 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (*(int *)(iVar13 + 0xc) <= iVar7) break;
                                    if (iVar9 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar14 = *(int *)(iVar9 + 0x14);
                                    uVar11 = func_0x024f0530(iVar13,iVar7,
                                                             **(undefined4 **)
                                                               (_UNK_0187afd8 + 0x187ada4));
                                    if (iVar14 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar14 = func_0x024f0540(iVar14,uVar11,
                                                             **(undefined4 **)
                                                               (_UNK_0187afdc + 0x187add0));
                                    if (iVar14 != 0) {
                                      iVar14 = *(int *)(iVar9 + 0x14);
                                      uVar11 = func_0x024f0530(iVar13,iVar7,
                                                               **(undefined4 **)
                                                                 (_UNK_0187afe0 + 0x187adf0));
                                      if (iVar14 == 0) {
                                        func_0x014388e4();
                                      }
                                      func_0x024f10d8(iVar14,uVar11,
                                                      **(undefined4 **)(_UNK_0187afe4 + 0x187ae1c));
                                    }
                                    iVar7 = iVar7 + 1;
                                  }
                                }
                              }
                            }
                            else {
                              iVar7 = *(int *)(iVar9 + 0x14);
                              iVar13 = func_0x0152983c(iVar5,iVar6,
                                                       **(undefined4 **)(_UNK_0187af9c + 0x187aaec))
                              ;
                              if (iVar13 == 0) {
                                func_0x014388e4();
                              }
                              uVar11 = *(undefined4 *)(iVar13 + 8);
                              if (iVar7 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10d8(iVar7,uVar11,
                                              **(undefined4 **)(_UNK_0187afa0 + 0x187ab28));
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < *(int *)(iVar5 + 0xc));
                        }
                        uStackY_78 = uStackY_78 - 1;
                      } while (uStackY_78 < 0x80000000);
                    }
                  }
                  else {
                    iVar1 = func_0x029540a4(0x93c9,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uStackY_78 = func_0x02869298(iVar1,(int)uVar17,iVar5,0);
                  }
                  return uStackY_78;
                }
                *puVar15 = (char)iVar1;
                    /* WARNING: Could not recover jumptable at 0x0187a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar2 = (**(code **)(*(int *)(_UNK_0187c8b8 + 0x3064) + 0x1414))();
                return uVar2;
              }
            }
            iVar1 = *(int *)(iVar5 + 0xc);
            iVar5 = *(int *)(iVar6 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x24);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0f34(iVar5,iVar1,**(undefined4 **)(iRam0187a670 + 0x1879f28));
            if (iVar5 != 0) {
              iVar5 = *(int *)(iVar9 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar5 + 9) != '\0') {
                iVar5 = *(int *)(iVar9 + 0x6c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x014e9698(iVar5,puVar15,*puVar12);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar5 + 0xd) == '\0') {
                  iVar5 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar9 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,puVar15,*puVar12);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= iVar5) break;
                    iVar1 = *(int *)(iVar9 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024f05a4(iVar1,iVar5,**(undefined4 **)(iRam0187a674 + 0x187a2f0)
                                            );
                    iVar1 = *(int *)(iVar9 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,iVar5,**(undefined4 **)(iRam0187a678 + 0x187a35c))
                    ;
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0187a67c + 0x187a374));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar8 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam0187a680 + 0x187a3c4);
                    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                    iVar13 = *piVar3;
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
                                       (*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
                    }
                    iVar5 = iVar5 + 1;
                    puVar12 = *(undefined4 **)(iRam0187a684 + 0x187a420);
                  }
                }
                iVar5 = *(int *)(iVar9 + 0x6c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x014e9698(iVar5,puVar15,*puVar12);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar5 + 0x28) == '\0') {
                  iVar5 = 0;
                  while( true ) {
                    iVar6 = *(int *)(iVar9 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x014e9698(iVar6,puVar15,*puVar12);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= iVar5) break;
                    iVar1 = *(int *)(iVar9 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x2c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar11 = func_0x024f05a4(iVar1,iVar5,**(undefined4 **)(iRam0187a688 + 0x187a4e0)
                                            );
                    iVar1 = *(int *)(iVar9 + 0x6c);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0xc);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x30);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar4 = func_0x024f05a4(iVar1,iVar5,**(undefined4 **)(iRam0187a68c + 0x187a54c))
                    ;
                    iVar1 = func_0x014388d4(**(undefined4 **)(iRam0187a690 + 0x187a564));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                    if (uVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar2 + 8);
                    uVar8 = *(uint *)(uVar2 + 0xc);
                    piVar3 = *(int **)(iRam0187a694 + 0x187a5b4);
                    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                    iVar13 = *piVar3;
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
                                       (*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
                    }
                    iVar5 = iVar5 + 1;
                    puVar12 = *(undefined4 **)(iRam0187a698 + 0x187a610);
                  }
                }
              }
              iVar5 = *(int *)(iVar9 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x014e9698(iVar5,puVar15,*puVar12);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar5 + 0xc) == '\0') {
                iVar5 = 0;
                while( true ) {
                  iVar6 = *(int *)(iVar9 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = func_0x014e9698(iVar6,puVar15,*puVar12);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= iVar5) break;
                  iVar1 = *(int *)(iVar9 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x1c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar11 = func_0x024f05a4(iVar1,iVar5,**(undefined4 **)(iRam0187a69c + 0x187a100));
                  iVar1 = *(int *)(iVar9 + 0x6c);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0xc);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e9698(iVar1,puVar15,*puVar12);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x20);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x024f05a4(iVar1,iVar5,**(undefined4 **)(iRam0187a6a0 + 0x187a16c));
                  iVar1 = func_0x014388d4(**(undefined4 **)(iRam0187a6a4 + 0x187a184));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar1,uVar11,uVar4,0);
                  if (uVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(uVar2 + 8);
                  uVar8 = *(uint *)(uVar2 + 0xc);
                  piVar3 = *(int **)(iRam0187a6a8 + 0x187a1d4);
                  *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
                  iVar13 = *piVar3;
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
                                    *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                  iVar5 = iVar5 + 1;
                  puVar12 = *(undefined4 **)(iRam0187a6ac + 0x187a230);
                }
              }
            }
            puVar15 = puVar15 + 1;
          }
        }
      }
    }
    return uVar2;
  }
  iVar1 = func_0x029540a4(0x1702,0);
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


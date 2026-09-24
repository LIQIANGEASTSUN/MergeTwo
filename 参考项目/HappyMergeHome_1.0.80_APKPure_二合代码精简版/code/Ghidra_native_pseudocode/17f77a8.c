
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_018077a8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int iVar19;
  int unaff_r10;
  undefined4 unaff_pc;
  bool bVar20;
  undefined8 uVar21;
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
  undefined4 *puStack_48;
  int *piStack_44;
  undefined4 *puStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar15 = (char *)(iRam01808198 + 0x18077c4);
  if (*pcVar15 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0180819c + 0x18077d8));
    func_0x01438628(*(undefined4 *)(iRam018081a0 + 0x18077e4));
    func_0x01438628(*(undefined4 *)(iRam018081a4 + 0x18077f0));
    func_0x01438628(*(undefined4 *)(iRam018081a8 + 0x18077fc));
    func_0x01438628(*(undefined4 *)(iRam018081ac + 0x1807808));
    func_0x01438628(*(undefined4 *)(iRam018081b0 + 0x1807814));
    func_0x01438628(*(undefined4 *)(iRam018081b4 + 0x1807820));
    func_0x01438628(*(undefined4 *)(iRam018081b8 + 0x180782c));
    func_0x01438628(*(undefined4 *)(iRam018081bc + 0x1807838));
    func_0x01438628(*(undefined4 *)(iRam018081c0 + 0x1807844));
    func_0x01438628(*(undefined4 *)(iRam018081c4 + 0x1807850));
    func_0x01438628(*(undefined4 *)(iRam018081c8 + 0x180785c));
    func_0x01438628(*(undefined4 *)(iRam018081cc + 0x1807868));
    func_0x01438628(*(undefined4 *)(iRam018081d0 + 0x1807874));
    *pcVar15 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13a2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(iRam018081d4 + 0x18078d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(iRam018081d8 + 0x18078f0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(iRam018081dc + 0x1807910));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar14 = *(int *)(iVar1 + 0x238);
    if (iVar14 == 0) {
      func_0x014388e4();
    }
    iVar14 = func_0x024eede4(iVar14,param_2,**(undefined4 **)(iRam018081e0 + 0x1807948));
    uVar7 = 0;
    if (iVar14 != 0) {
      piVar16 = *(int **)(iVar1 + 0x238);
      if (piVar16 == (int *)0x0) {
        func_0x014388e4();
      }
      uVar2 = func_0x024f04d4(piVar16,param_2,**(undefined4 **)(iRam018081e4 + 0x180797c));
      if (uVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(uVar2 + 0x6c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar1 + 8) != '\0') {
        iVar1 = *(int *)(uVar2 + 0x6c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar1 + 0x14) == '\0') {
          uVar7 = func_0x014388d4(**(undefined4 **)(iRam018081e8 + 0x18079e4));
          func_0x024eed9c(uVar7,**(undefined4 **)(iRam018081ec + 0x18079f8));
          iVar1 = 0;
          puVar18 = *(undefined4 **)(iRam018081f0 + 0x1807a10);
          while( true ) {
            iVar14 = *(int *)(uVar2 + 0x6c);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            iVar14 = *(int *)(iVar14 + 0xc);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar14 + 0xc) <= iVar1) break;
            iVar10 = *(int *)(uVar2 + 0x6c);
            iVar14 = iVar10;
            if (iVar10 == 0) {
              func_0x014388e4();
              iVar14 = *(int *)(uVar2 + 0x6c);
              bVar20 = iVar14 == 0;
              if (bVar20) {
                uVar21 = func_0x014388e4();
                iVar14 = (int)((ulonglong)uVar21 >> 0x20);
                pbVar3 = (byte *)uVar21;
                pbVar4 = pbVar3;
                if (bVar20) {
                  pbVar4 = pbVar3 + 0x4d2;
                  uVar2 = (uint)*pbVar3;
                  *piVar16 = iVar14;
                  *param_2 = unaff_pc;
                  param_2[0x3a8] = unaff_pc;
                  param_2[0x7a0] = unaff_pc;
                  piVar16[0x133] = (int)pbVar4;
                  param_2[0x806] = 0x1808198;
                  param_2[0xac4] = unaff_pc;
                  param_2[0xb22] = 0x1808198;
                  param_2[0xdaa] = 0x1808198;
                  param_2[0x1030] = unaff_pc;
                  piVar16[0x251] = iVar14;
                  piVar16[0x36a] = (int)pbVar4;
                  param_2[0x13c1] = 0x1808198;
                  param_2[0x16d6] = 0x1808198;
                  param_2[0x194f] = 0x1808198;
                  param_2[0x1bae] = 0x1808198;
                  param_2[0x1e05] = 0x1808198;
                  piVar16[0x474] = iVar14;
                  piVar8 = piVar16 + 0x619;
                  piVar16[0x54b] = iVar14;
                  param_2[0x2057] = 0x1808198;
                  param_2[0x2444] = 0x1808198;
                  piVar16 = piVar16 + 0x6b6;
                  *piVar8 = (int)pbVar4;
                  param_2[0x282b] = unaff_pc;
                  param_2[0x2b74] = 0x1808198;
                  param_2[0x2d06] = 0x1808198;
                  param_2[0x2e7d] = unaff_pc;
                  param_2[0x3061] = unaff_pc;
                  param_2[0x3230] = unaff_pc;
                  param_2[0x3568] = 0x1808198;
                  param_2[0x367e] = 0x1808198;
                  param_2[0x3779] = unaff_pc;
                  param_2[0x38e1] = unaff_pc;
                  param_2[0x3a34] = unaff_pc;
                  param_2[0x3cf0] = 0x1808198;
                  param_2[0x3efe] = 0x1808198;
                  param_2[0x40f1] = unaff_pc;
                  puVar13 = param_2 + 0x459c;
                  param_2[0x4351] = unaff_pc;
                  param_2 = param_2 + 0x4950;
                  *puVar13 = unaff_pc;
                }
                uStack_2c = 0x1808198;
                pcVar15 = (char *)(_UNK_01808a70 + 0x1808250);
                iStack_4c = iVar10;
                puStack_48 = param_2;
                piStack_44 = piVar16;
                puStack_40 = puVar18;
                uStack_3c = uVar2;
                iStack_38 = iVar1;
                iStack_34 = unaff_r10;
                uStack_30 = uVar7;
                if (*pcVar15 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_01808a74 + 0x1808264));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a78 + 0x1808270));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a7c + 0x180827c));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a80 + 0x1808288));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a84 + 0x1808294));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a88 + 0x18082a0));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a8c + 0x18082ac));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a90 + 0x18082b8));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a94 + 0x18082c4));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a98 + 0x18082d0));
                  func_0x01438628(*(undefined4 *)(_UNK_01808a9c + 0x18082dc));
                  func_0x01438628(*(undefined4 *)(_UNK_01808aa0 + 0x18082e8));
                  func_0x01438628(*(undefined4 *)(_UNK_01808aa4 + 0x18082f4));
                  func_0x01438628(*(undefined4 *)(_UNK_01808aa8 + 0x1808300));
                  func_0x01438628(*(undefined4 *)(_UNK_01808aac + 0x180830c));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ab0 + 0x1808318));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ab4 + 0x1808324));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ab8 + 0x1808330));
                  func_0x01438628(*(undefined4 *)(_UNK_01808abc + 0x180833c));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ac0 + 0x1808348));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ac4 + 0x1808354));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ac8 + 0x1808360));
                  func_0x01438628(*(undefined4 *)(_UNK_01808acc + 0x180836c));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ad0 + 0x1808378));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ad4 + 0x1808384));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ad8 + 0x1808390));
                  func_0x01438628(*(undefined4 *)(_UNK_01808adc + 0x180839c));
                  func_0x01438628(*(undefined4 *)(_UNK_01808ae0 + 0x18083a8));
                  *pcVar15 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar1 = func_0x02953fd4(0x90d1,0);
                if (iVar1 == 0) {
                  if (*(int *)(**(int **)(_UNK_01808ae4 + 0x1808410) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01808ae8 + 0x180842c));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01808aec + 0x180844c));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x238);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar17 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01808af0 + 0x1808480));
                  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01808af4 + 0x1808498));
                  func_0x024f108c(iVar1,uVar17,**(undefined4 **)(_UNK_01808af8 + 0x18084b0));
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = *(int *)(iVar1 + 0xc) - 1;
                  if (-1 < (int)uStack_78) {
                    puVar18 = *(undefined4 **)(_UNK_01808afc + 0x18084e0);
                    do {
                      if (*(int *)(**(int **)(_UNK_01808b00 + 0x18084ec) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_01808b04 + 0x1808508));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x036c7bec(iVar10,**(undefined4 **)(_UNK_01808b08 + 0x1808528));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = *(int *)(iVar10 + 0x238);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      uVar17 = func_0x0152983c(iVar1,uStack_78,
                                               **(undefined4 **)(_UNK_01808b0c + 0x180855c));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x024f04d4(iVar10,uVar17,
                                               **(undefined4 **)(_UNK_01808b10 + 0x1808588));
                      if (*(int *)(**(int **)(_UNK_01808b14 + 0x18085a0) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar5 = FUN_01806680(iVar10);
                      if ((iVar14 != 0 && iVar5 != 0) && (0 < *(int *)(iVar14 + 0xc))) {
                        iVar5 = 0;
                        do {
                          if (iVar10 == 0) {
                            func_0x014388e4();
                          }
                          iVar11 = *(int *)(iVar10 + 0x14);
                          iVar6 = func_0x0152983c(iVar14,iVar5,
                                                  **(undefined4 **)(_UNK_01808b18 + 0x1808614));
                          if (iVar6 == 0) {
                            func_0x014388e4();
                          }
                          uVar17 = *(undefined4 *)(iVar6 + 8);
                          if (iVar11 == 0) {
                            func_0x014388e4();
                          }
                          iVar6 = func_0x024f0540(iVar11,uVar17,
                                                  **(undefined4 **)(_UNK_01808b1c + 0x1808650));
                          if (iVar6 == 0) {
                            iVar11 = **(int **)(**(int **)(_UNK_01808b28 + 0x18086c4) + 0x5c);
                            iVar6 = func_0x0152983c(iVar14,uStack_78,
                                                    **(undefined4 **)(_UNK_01808b2c + 0x18086d4));
                            if (iVar6 == 0) {
                              func_0x014388e4();
                            }
                            uVar17 = *(undefined4 *)(iVar6 + 8);
                            if (iVar11 == 0) {
                              func_0x014388e4();
                            }
                            iVar6 = func_0x02e651cc(iVar11,uVar17,0);
                            if (iVar6 != 0) {
                              iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01808b30 + 0x1808728));
                              func_0x024f0510(iVar6,**(undefined4 **)(_UNK_01808b34 + 0x180873c));
                              iVar11 = *(int *)(iVar10 + 0x14);
                              if (iVar11 == 0) {
                                func_0x014388e4();
                              }
                              iVar11 = func_0x024f10dc(iVar11,**(undefined4 **)
                                                                (_UNK_01808b38 + 0x1808760));
                              if (iVar11 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar11,
                                              **(undefined4 **)(_UNK_01808b3c + 0x180878c));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar11 = func_0x0151455c(&uStack_60,*puVar18),
                                    uVar17 = uStack_54, iVar11 != 0) {
                                if (*(int *)(**(int **)(_UNK_01808b40 + 0x18087c0) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar11 = func_0x014e9518(**(undefined4 **)
                                                           (_UNK_01808b44 + 0x18087e0));
                                if (iVar11 == 0) {
                                  func_0x014388e4();
                                }
                                iVar11 = func_0x029a6fa8(iVar11,uVar17,0);
                                if (iVar11 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar11 + 0x1c) - 3U < 3) {
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar11 = func_0x024f0f34(iVar6,uVar17,
                                                           **(undefined4 **)
                                                             (_UNK_01808b48 + 0x180883c));
                                  if (iVar11 == 0) {
                                    if (iVar6 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar11 = *(int *)(iVar6 + 8);
                                    uVar7 = *(uint *)(iVar6 + 0xc);
                                    piVar16 = *(int **)(_UNK_01808b4c + 0x180887c);
                                    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
                                    iVar19 = *piVar16;
                                    if (iVar11 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar7 < *(uint *)(iVar11 + 0xc)) {
                                      *(uint *)(iVar6 + 0xc) = uVar7 + 1;
                                      *(undefined4 *)(iVar11 + uVar7 * 4 + 0x10) = uVar17;
                                    }
                                    else {
                                      func_0x024f0520(iVar6,uVar17,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar19 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_01808b50 + 0x18088d0));
                              if (iVar6 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar6 + 0xc)) {
                                iVar11 = 0;
                                while( true ) {
                                  if (iVar6 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar6 + 0xc) <= iVar11) break;
                                  if (iVar10 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar19 = *(int *)(iVar10 + 0x14);
                                  uVar17 = func_0x024f0530(iVar6,iVar11,
                                                           **(undefined4 **)
                                                             (_UNK_01808b5c + 0x1808928));
                                  if (iVar19 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar19 = func_0x024f0540(iVar19,uVar17,
                                                           **(undefined4 **)
                                                             (_UNK_01808b60 + 0x1808954));
                                  if (iVar19 != 0) {
                                    iVar19 = *(int *)(iVar10 + 0x14);
                                    uVar17 = func_0x024f0530(iVar6,iVar11,
                                                             **(undefined4 **)
                                                               (_UNK_01808b64 + 0x1808974));
                                    if (iVar19 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar19,uVar17,
                                                    **(undefined4 **)(_UNK_01808b68 + 0x18089a0));
                                  }
                                  iVar11 = iVar11 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar11 = *(int *)(iVar10 + 0x14);
                            iVar6 = func_0x0152983c(iVar14,iVar5,
                                                    **(undefined4 **)(_UNK_01808b20 + 0x1808670));
                            if (iVar6 == 0) {
                              func_0x014388e4();
                            }
                            uVar17 = *(undefined4 *)(iVar6 + 8);
                            if (iVar11 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar11,uVar17,
                                            **(undefined4 **)(_UNK_01808b24 + 0x18086ac));
                          }
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < *(int *)(iVar14 + 0xc));
                      }
                      uStack_78 = uStack_78 - 1;
                    } while (uStack_78 < 0x80000000);
                  }
                }
                else {
                  iVar1 = func_0x029540a4(0x90d1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = func_0x02869298(iVar1,pbVar4,iVar14,0);
                }
                return uStack_78;
              }
            }
            iVar14 = *(int *)(iVar14 + 0xc);
            param_2 = *(undefined4 **)(iVar10 + 0x10);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            piVar16 = *(int **)(iVar14 + 0x24);
            if (param_2 == (undefined4 *)0x0) {
              func_0x014388e4();
            }
            iVar14 = func_0x024f0f34(param_2,piVar16,**(undefined4 **)(iRam018081f4 + 0x1807aac));
            if (iVar14 != 0) {
              iVar14 = *(int *)(uVar2 + 0x6c);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar14 + 9) != '\0') {
                iVar14 = *(int *)(uVar2 + 0x6c);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                iVar14 = *(int *)(iVar14 + 0xc);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar14 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar14 = *(int *)(uVar2 + 0x6c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0xc);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0x14);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar14 + 0xc) <= unaff_r10) break;
                    iVar14 = *(int *)(uVar2 + 0x6c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0xc);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0x14);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    uVar17 = func_0x024f05a4(iVar14,unaff_r10,
                                             **(undefined4 **)(iRam018081f8 + 0x1807e74));
                    iVar14 = *(int *)(uVar2 + 0x6c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0xc);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0x18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    uVar9 = func_0x024f05a4(iVar14,unaff_r10,
                                            **(undefined4 **)(iRam018081fc + 0x1807ee0));
                    piVar16 = (int *)func_0x014388d4(**(undefined4 **)(iRam01808200 + 0x1807ef8));
                    uStack_28 = 0;
                    func_0x02ca3c70(piVar16,uVar17,uVar9,0);
                    if (uVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(uVar7 + 8);
                    uVar12 = *(uint *)(uVar7 + 0xc);
                    piVar8 = *(int **)(iRam01808204 + 0x1807f48);
                    *(int *)(uVar7 + 0x10) = *(int *)(uVar7 + 0x10) + 1;
                    iVar10 = *piVar8;
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar12 < *(uint *)(iVar14 + 0xc)) {
                      *(uint *)(uVar7 + 0xc) = uVar12 + 1;
                      puVar18 = (undefined4 *)(iVar14 + uVar12 * 4 + 0x10);
                      *puVar18 = piVar16;
                      func_0x014385cc(puVar18,piVar16);
                    }
                    else {
                      func_0x0152874c(uVar7,piVar16,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar18 = *(undefined4 **)(iRam01808208 + 0x1807fa4);
                  }
                }
                iVar14 = *(int *)(uVar2 + 0x6c);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                iVar14 = *(int *)(iVar14 + 0xc);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                if (iVar14 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar14 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar14 = *(int *)(uVar2 + 0x6c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0xc);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0x2c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar14 + 0xc) <= unaff_r10) break;
                    iVar14 = *(int *)(uVar2 + 0x6c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0xc);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0x2c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    uVar17 = func_0x024f05a4(iVar14,unaff_r10,
                                             **(undefined4 **)(iRam0180820c + 0x1808064));
                    iVar14 = *(int *)(uVar2 + 0x6c);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0xc);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(iVar14 + 0x30);
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    uVar9 = func_0x024f05a4(iVar14,unaff_r10,
                                            **(undefined4 **)(iRam01808210 + 0x18080d0));
                    piVar16 = (int *)func_0x014388d4(**(undefined4 **)(iRam01808214 + 0x18080e8));
                    uStack_28 = 0;
                    func_0x02ca3c70(piVar16,uVar17,uVar9,0);
                    if (uVar7 == 0) {
                      func_0x014388e4();
                    }
                    iVar14 = *(int *)(uVar7 + 8);
                    uVar12 = *(uint *)(uVar7 + 0xc);
                    piVar8 = *(int **)(iRam01808218 + 0x1808138);
                    *(int *)(uVar7 + 0x10) = *(int *)(uVar7 + 0x10) + 1;
                    iVar10 = *piVar8;
                    if (iVar14 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar12 < *(uint *)(iVar14 + 0xc)) {
                      *(uint *)(uVar7 + 0xc) = uVar12 + 1;
                      puVar18 = (undefined4 *)(iVar14 + uVar12 * 4 + 0x10);
                      *puVar18 = piVar16;
                      func_0x014385cc(puVar18,piVar16);
                    }
                    else {
                      func_0x0152874c(uVar7,piVar16,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar18 = *(undefined4 **)(iRam0180821c + 0x1808194);
                  }
                }
              }
              iVar14 = *(int *)(uVar2 + 0x6c);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              iVar14 = *(int *)(iVar14 + 0xc);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              param_2 = (undefined4 *)func_0x014e9698(iVar14,iVar1,*puVar18);
              if (param_2 == (undefined4 *)0x0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 3) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar14 = *(int *)(uVar2 + 0x6c);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = *(int *)(iVar14 + 0xc);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = (undefined4 *)func_0x014e9698(iVar14,iVar1,*puVar18);
                  if (param_2 == (undefined4 *)0x0) {
                    func_0x014388e4();
                  }
                  iVar14 = param_2[7];
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar14 + 0xc) <= unaff_r10) break;
                  iVar14 = *(int *)(uVar2 + 0x6c);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = *(int *)(iVar14 + 0xc);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = *(int *)(iVar14 + 0x1c);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  uVar17 = func_0x024f05a4(iVar14,unaff_r10,
                                           **(undefined4 **)(iRam01808220 + 0x1807c84));
                  iVar14 = *(int *)(uVar2 + 0x6c);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = *(int *)(iVar14 + 0xc);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = func_0x014e9698(iVar14,iVar1,*puVar18);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = *(int *)(iVar14 + 0x20);
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  uVar9 = func_0x024f05a4(iVar14,unaff_r10,
                                          **(undefined4 **)(iRam01808224 + 0x1807cf0));
                  piVar16 = (int *)func_0x014388d4(**(undefined4 **)(iRam01808228 + 0x1807d08));
                  uStack_28 = 0;
                  func_0x02ca3c70(piVar16,uVar17,uVar9,0);
                  if (uVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar14 = *(int *)(uVar7 + 8);
                  uVar12 = *(uint *)(uVar7 + 0xc);
                  piVar8 = *(int **)(iRam0180822c + 0x1807d58);
                  *(int *)(uVar7 + 0x10) = *(int *)(uVar7 + 0x10) + 1;
                  iVar10 = *piVar8;
                  if (iVar14 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar12 < *(uint *)(iVar14 + 0xc)) {
                    *(uint *)(uVar7 + 0xc) = uVar12 + 1;
                    puVar18 = (undefined4 *)(iVar14 + uVar12 * 4 + 0x10);
                    *puVar18 = piVar16;
                    func_0x014385cc(puVar18,piVar16);
                  }
                  else {
                    func_0x0152874c(uVar7,piVar16,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar18 = *(undefined4 **)(iRam01808230 + 0x1807db4);
                }
              }
            }
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
    return uVar7;
  }
  iVar1 = func_0x029540a4(0x13a2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar15 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar15 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar15 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  uStack_30 = (uint)puStack_48;
  uStack_2c = piStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar14 = *(int *)(iVar1 + 8);
  uVar17 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar14 == 0) {
    func_0x014388e4();
  }
  uVar9 = 3;
  if (iVar1 == 0) {
    uVar9 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar14,uVar17,&iStack_38,uVar9);
  uVar7 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return uVar7;
}


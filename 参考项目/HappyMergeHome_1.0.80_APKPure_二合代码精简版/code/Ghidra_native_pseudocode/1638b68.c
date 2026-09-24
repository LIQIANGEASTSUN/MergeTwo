
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01648b68(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int unaff_r10;
  int iVar16;
  undefined1 *extraout_r12;
  undefined1 unaff_pc;
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
  
  pcVar12 = (char *)(iRam01649558 + 0x1648b84);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0164955c + 0x1648b98));
    func_0x01438628(*(undefined4 *)(iRam01649560 + 0x1648ba4));
    func_0x01438628(*(undefined4 *)(iRam01649564 + 0x1648bb0));
    func_0x01438628(*(undefined4 *)(iRam01649568 + 0x1648bbc));
    func_0x01438628(*(undefined4 *)(iRam0164956c + 0x1648bc8));
    func_0x01438628(*(undefined4 *)(iRam01649570 + 0x1648bd4));
    func_0x01438628(*(undefined4 *)(iRam01649574 + 0x1648be0));
    func_0x01438628(*(undefined4 *)(iRam01649578 + 0x1648bec));
    func_0x01438628(*(undefined4 *)(iRam0164957c + 0x1648bf8));
    func_0x01438628(*(undefined4 *)(iRam01649580 + 0x1648c04));
    func_0x01438628(*(undefined4 *)(iRam01649584 + 0x1648c10));
    func_0x01438628(*(undefined4 *)(iRam01649588 + 0x1648c1c));
    func_0x01438628(*(undefined4 *)(iRam0164958c + 0x1648c28));
    func_0x01438628(*(undefined4 *)(iRam01649590 + 0x1648c34));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1671,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(iRam01649594 + 0x1648c94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(iRam01649598 + 0x1648cb0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f04cc(iVar2,**(undefined4 **)(iRam0164959c + 0x1648cd0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar11 = *(int *)(iVar2 + 0x3a4);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = func_0x024eede4(iVar11,param_2,**(undefined4 **)(iRam016495a0 + 0x1648d08));
    iVar16 = 0;
    if (iVar11 != 0) {
      iVar2 = *(int *)(iVar2 + 0x3a4);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x024f04d4(iVar2,param_2,**(undefined4 **)(iRam016495a4 + 0x1648d3c));
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar11 + 0x6c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar7 + 8) != '\0') {
        iVar7 = *(int *)(iVar11 + 0x6c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar7 + 0x14) == '\0') {
          iVar16 = func_0x014388d4(**(undefined4 **)(iRam016495a8 + 0x1648da4));
          func_0x024eed9c(iVar16,**(undefined4 **)(iRam016495ac + 0x1648db8));
          iVar7 = 0;
          puVar15 = *(undefined4 **)(iRam016495b0 + 0x1648dd0);
          while( true ) {
            iVar8 = *(int *)(iVar11 + 0x6c);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar8 + 0xc);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar8 + 0xc) <= iVar7) break;
            iVar9 = *(int *)(iVar11 + 0x6c);
            iVar8 = iVar9;
            if (iVar9 == 0) {
              func_0x014388e4();
              iVar8 = *(int *)(iVar11 + 0x6c);
              bVar17 = iVar8 == 0;
              if (bVar17) {
                uVar18 = func_0x014388e4();
                puVar5 = (undefined1 *)((ulonglong)uVar18 >> 0x20);
                uVar1 = SUB41(&uStack_28,0);
                if (bVar17) {
                  *extraout_r12 = (char)iVar2;
                  *puVar5 = 0x58;
                  puVar5[0xfc4] = 0x58;
                  puVar5[0x1aa4] = 0x58;
                  puVar5[0x26c4] = uVar1;
                  puVar5[0x349c] = unaff_pc;
                  puVar5[0x3554] = uVar1;
                  puVar5[0x3c8c] = uVar1;
                  puVar5[0x4a44] = uVar1;
                  puVar5[0x50a4] = uVar1;
                  puVar5[0x56fc] = 0x58;
                  puVar5[0x6180] = 0x58;
                  puVar5[0x70dc] = unaff_pc;
                  puVar5[0x7144] = uVar1;
                  puVar5[0x79d8] = uVar1;
                  puVar5[0x7ffc] = uVar1;
                  puVar5[0x85b8] = uVar1;
                  puVar5[0x8b54] = uVar1;
                  puVar5[0x90dc] = 0x58;
                  puVar5[0x9f30] = 0x58;
                  puVar5[0xad60] = uVar1;
                  puVar5[0xb954] = uVar1;
                  puVar5[0xc530] = 0x58;
                  puVar5[0xd3e4] = 0x58;
                  puVar5[0xdd48] = uVar1;
                  puVar5[0xdfd0] = uVar1;
                  puVar5[0xe1ec] = 0x58;
                  puVar5[0xe5bc] = 0x58;
                  puVar5[0xe938] = 0x58;
                  puVar5[0xf258] = uVar1;
                  puVar5[0xf2f0] = uVar1;
                  puVar5[0xf31c] = 0x58;
                  puVar5[0xf4fc] = 0x58;
                  puVar5[0xf688] = 0x58;
                  puVar5[0xfdb8] = uVar1;
                  puVar5[0x10230] = uVar1;
                  puVar5[0x1063c] = 0x58;
                  puVar4 = puVar5 + 0x11168;
                  puVar5[0x10bfc] = 0x58;
                  puVar5 = puVar5 + 0x11c78;
                  *puVar4 = 0x58;
                }
                uStack_2c = 0x1649558;
                pcVar12 = (char *)(_UNK_01649e2c + 0x1649610);
                iStack_4c = iVar9;
                iStack_48 = param_2;
                iStack_44 = iVar2;
                puStack_40 = puVar15;
                iStack_3c = iVar11;
                iStack_38 = iVar7;
                iStack_34 = unaff_r10;
                iStack_30 = iVar16;
                if (*pcVar12 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_01649e30 + 0x1649624));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e34 + 0x1649630));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e38 + 0x164963c));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e3c + 0x1649648));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e40 + 0x1649654));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e44 + 0x1649660));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e48 + 0x164966c));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e4c + 0x1649678));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e50 + 0x1649684));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e54 + 0x1649690));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e58 + 0x164969c));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e5c + 0x16496a8));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e60 + 0x16496b4));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e64 + 0x16496c0));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e68 + 0x16496cc));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e6c + 0x16496d8));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e70 + 0x16496e4));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e74 + 0x16496f0));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e78 + 0x16496fc));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e7c + 0x1649708));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e80 + 0x1649714));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e84 + 0x1649720));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e88 + 0x164972c));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e8c + 0x1649738));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e90 + 0x1649744));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e94 + 0x1649750));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e98 + 0x164975c));
                  func_0x01438628(*(undefined4 *)(_UNK_01649e9c + 0x1649768));
                  *pcVar12 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar2 = func_0x02953fd4(0x8625,0);
                if (iVar2 == 0) {
                  if (*(int *)(**(int **)(_UNK_01649ea0 + 0x16497d0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01649ea4 + 0x16497ec));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x024f04cc(iVar2,**(undefined4 **)(_UNK_01649ea8 + 0x164980c));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x3a4);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar14 = func_0x024ef08c(iVar2,**(undefined4 **)(_UNK_01649eac + 0x1649840));
                  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01649eb0 + 0x1649858));
                  func_0x024f108c(iVar2,uVar14,**(undefined4 **)(_UNK_01649eb4 + 0x1649870));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar11 = *(int *)(iVar2 + 0xc);
                  uVar10 = iVar11 - 1;
                  if (-1 < (int)uVar10) {
                    puVar15 = *(undefined4 **)(_UNK_01649eb8 + 0x164989c);
                    do {
                      if (*(int *)(**(int **)(_UNK_01649ebc + 0x16498a8) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar11 = func_0x014e9518(**(undefined4 **)(_UNK_01649ec0 + 0x16498c4));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      iVar11 = func_0x024f04cc(iVar11,**(undefined4 **)(_UNK_01649ec4 + 0x16498e4));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      iVar11 = *(int *)(iVar11 + 0x3a4);
                      if (iVar2 == 0) {
                        func_0x014388e4();
                      }
                      uVar14 = func_0x0152983c(iVar2,uVar10,
                                               **(undefined4 **)(_UNK_01649ec8 + 0x164991c));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      iVar16 = func_0x024f04d4(iVar11,uVar14,
                                               **(undefined4 **)(_UNK_01649ecc + 0x1649948));
                      if (*(int *)(**(int **)(_UNK_01649ed0 + 0x1649960) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar11 = FUN_01647a40(iVar16);
                      if ((puVar5 != (undefined1 *)0x0 && iVar11 != 0) &&
                         (iVar11 = *(int *)(puVar5 + 0xc), 0 < iVar11)) {
                        iVar7 = 0;
                        do {
                          if (iVar16 == 0) {
                            func_0x014388e4();
                          }
                          iVar8 = *(int *)(iVar16 + 0x14);
                          iVar11 = func_0x0152983c(puVar5,iVar7,
                                                   **(undefined4 **)(_UNK_01649ed4 + 0x16499d0));
                          if (iVar11 == 0) {
                            func_0x014388e4();
                          }
                          uVar14 = *(undefined4 *)(iVar11 + 8);
                          if (iVar8 == 0) {
                            func_0x014388e4();
                          }
                          iVar11 = func_0x024f0540(iVar8,uVar14,
                                                   **(undefined4 **)(_UNK_01649ed8 + 0x1649a0c));
                          if (iVar11 == 0) {
                            iVar8 = **(int **)(**(int **)(_UNK_01649ee4 + 0x1649a80) + 0x5c);
                            iVar11 = func_0x0152983c(puVar5,iVar7,
                                                     **(undefined4 **)(_UNK_01649ee8 + 0x1649a90));
                            if (iVar11 == 0) {
                              func_0x014388e4();
                            }
                            uVar14 = *(undefined4 *)(iVar11 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            iVar11 = func_0x02e651cc(iVar8,uVar14,0);
                            if (iVar11 != 0) {
                              iVar11 = func_0x014388d4(**(undefined4 **)(_UNK_01649eec + 0x1649ae4))
                              ;
                              func_0x024f0510(iVar11,**(undefined4 **)(_UNK_01649ef0 + 0x1649af8));
                              iVar8 = *(int *)(iVar16 + 0x14);
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              iVar8 = func_0x024f10dc(iVar8,**(undefined4 **)
                                                              (_UNK_01649ef4 + 0x1649b1c));
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              func_0x024f10ec(&uStack_70,iVar8,
                                              **(undefined4 **)(_UNK_01649ef8 + 0x1649b48));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar8 = func_0x0151455c(&uStack_60,*puVar15),
                                    uVar14 = uStack_54, iVar8 != 0) {
                                if (*(int *)(**(int **)(_UNK_01649efc + 0x1649b7c) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01649f00 + 0x1649b9c)
                                                       );
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                iVar8 = func_0x029a6fa8(iVar8,uVar14,0);
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar8 + 0x1c) - 3U < 3) {
                                  if (iVar11 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar8 = func_0x024f0f34(iVar11,uVar14,
                                                          **(undefined4 **)
                                                            (_UNK_01649f04 + 0x1649bf8));
                                  if (iVar8 == 0) {
                                    if (iVar11 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar8 = *(int *)(iVar11 + 8);
                                    uVar13 = *(uint *)(iVar11 + 0xc);
                                    piVar3 = *(int **)(_UNK_01649f08 + 0x1649c38);
                                    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
                                    iVar9 = *piVar3;
                                    if (iVar8 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar13 < *(uint *)(iVar8 + 0xc)) {
                                      *(uint *)(iVar11 + 0xc) = uVar13 + 1;
                                      *(undefined4 *)(iVar8 + uVar13 * 4 + 0x10) = uVar14;
                                    }
                                    else {
                                      func_0x024f0520(iVar11,uVar14,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar9 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x024f10fc(&uStack_60,
                                              **(undefined4 **)(_UNK_01649f0c + 0x1649c8c));
                              if (iVar11 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar11 + 0xc)) {
                                iVar8 = 0;
                                while( true ) {
                                  if (iVar11 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar11 + 0xc) <= iVar8) break;
                                  if (iVar16 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar9 = *(int *)(iVar16 + 0x14);
                                  uVar14 = func_0x024f0530(iVar11,iVar8,
                                                           **(undefined4 **)
                                                             (_UNK_01649f18 + 0x1649ce4));
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar9 = func_0x024f0540(iVar9,uVar14,
                                                          **(undefined4 **)
                                                            (_UNK_01649f1c + 0x1649d10));
                                  if (iVar9 != 0) {
                                    iVar9 = *(int *)(iVar16 + 0x14);
                                    uVar14 = func_0x024f0530(iVar11,iVar8,
                                                             **(undefined4 **)
                                                               (_UNK_01649f20 + 0x1649d30));
                                    if (iVar9 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x024f10d8(iVar9,uVar14,
                                                    **(undefined4 **)(_UNK_01649f24 + 0x1649d5c));
                                  }
                                  iVar8 = iVar8 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar8 = *(int *)(iVar16 + 0x14);
                            iVar11 = func_0x0152983c(puVar5,iVar7,
                                                     **(undefined4 **)(_UNK_01649edc + 0x1649a2c));
                            if (iVar11 == 0) {
                              func_0x014388e4();
                            }
                            uVar14 = *(undefined4 *)(iVar11 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            func_0x024f10d8(iVar8,uVar14,
                                            **(undefined4 **)(_UNK_01649ee0 + 0x1649a68));
                          }
                          iVar7 = iVar7 + 1;
                          iVar11 = *(int *)(puVar5 + 0xc);
                        } while (iVar7 < iVar11);
                      }
                      uVar10 = uVar10 - 1;
                    } while (uVar10 < 0x80000000);
                  }
                }
                else {
                  iVar2 = func_0x029540a4(0x8625,0);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar11 = func_0x02869298(iVar2,(int)uVar18,puVar5,0);
                }
                return iVar11;
              }
            }
            iVar2 = *(int *)(iVar8 + 0xc);
            param_2 = *(int *)(iVar9 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar8 = func_0x024f0f34(param_2,iVar2,**(undefined4 **)(iRam016495b4 + 0x1648e6c));
            if (iVar8 != 0) {
              iVar8 = *(int *)(iVar11 + 0x6c);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar8 + 9) != '\0') {
                iVar8 = *(int *)(iVar11 + 0x6c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar8 + 0xc);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x014e9698(iVar8,iVar7,*puVar15);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar8 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar8 = *(int *)(iVar11 + 0x6c);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = *(int *)(iVar8 + 0xc);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = func_0x014e9698(iVar8,iVar7,*puVar15);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = *(int *)(iVar8 + 0x14);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar8 + 0xc) <= unaff_r10) break;
                    iVar2 = *(int *)(iVar11 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x14);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar14 = func_0x024f05a4(iVar2,unaff_r10,
                                             **(undefined4 **)(iRam016495b8 + 0x1649234));
                    iVar2 = *(int *)(iVar11 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x18);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar6 = func_0x024f05a4(iVar2,unaff_r10,
                                            **(undefined4 **)(iRam016495bc + 0x16492a0));
                    iVar2 = func_0x014388d4(**(undefined4 **)(iRam016495c0 + 0x16492b8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar2,uVar14,uVar6,0);
                    if (iVar16 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = *(int *)(iVar16 + 8);
                    uVar10 = *(uint *)(iVar16 + 0xc);
                    piVar3 = *(int **)(iRam016495c4 + 0x1649308);
                    *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
                    iVar9 = *piVar3;
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar10 < *(uint *)(iVar8 + 0xc)) {
                      *(uint *)(iVar16 + 0xc) = uVar10 + 1;
                      piVar3 = (int *)(iVar8 + uVar10 * 4 + 0x10);
                      *piVar3 = iVar2;
                      func_0x014385cc(piVar3,iVar2);
                    }
                    else {
                      func_0x0152874c(iVar16,iVar2,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar15 = *(undefined4 **)(iRam016495c8 + 0x1649364);
                  }
                }
                iVar8 = *(int *)(iVar11 + 0x6c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar8 + 0xc);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x014e9698(iVar8,iVar7,*puVar15);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar8 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar8 = *(int *)(iVar11 + 0x6c);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = *(int *)(iVar8 + 0xc);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = func_0x014e9698(iVar8,iVar7,*puVar15);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = *(int *)(iVar8 + 0x2c);
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar8 + 0xc) <= unaff_r10) break;
                    iVar2 = *(int *)(iVar11 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x2c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar14 = func_0x024f05a4(iVar2,unaff_r10,
                                             **(undefined4 **)(iRam016495cc + 0x1649424));
                    iVar2 = *(int *)(iVar11 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x30);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar6 = func_0x024f05a4(iVar2,unaff_r10,
                                            **(undefined4 **)(iRam016495d0 + 0x1649490));
                    iVar2 = func_0x014388d4(**(undefined4 **)(iRam016495d4 + 0x16494a8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar2,uVar14,uVar6,0);
                    if (iVar16 == 0) {
                      func_0x014388e4();
                    }
                    iVar8 = *(int *)(iVar16 + 8);
                    uVar10 = *(uint *)(iVar16 + 0xc);
                    piVar3 = *(int **)(iRam016495d8 + 0x16494f8);
                    *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
                    iVar9 = *piVar3;
                    if (iVar8 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar10 < *(uint *)(iVar8 + 0xc)) {
                      *(uint *)(iVar16 + 0xc) = uVar10 + 1;
                      piVar3 = (int *)(iVar8 + uVar10 * 4 + 0x10);
                      *piVar3 = iVar2;
                      func_0x014385cc(piVar3,iVar2);
                    }
                    else {
                      func_0x0152874c(iVar16,iVar2,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar15 = *(undefined4 **)(iRam016495dc + 0x1649554);
                  }
                }
              }
              iVar8 = *(int *)(iVar11 + 0x6c);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              iVar8 = *(int *)(iVar8 + 0xc);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x014e9698(iVar8,iVar7,*puVar15);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar8 = *(int *)(iVar11 + 0x6c);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar8 + 0xc);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x014e9698(iVar8,iVar7,*puVar15);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(param_2 + 0x1c);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar8 + 0xc) <= unaff_r10) break;
                  iVar2 = *(int *)(iVar11 + 0x6c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0xc);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x1c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar14 = func_0x024f05a4(iVar2,unaff_r10,
                                           **(undefined4 **)(iRam016495e0 + 0x1649044));
                  iVar2 = *(int *)(iVar11 + 0x6c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0xc);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x014e9698(iVar2,iVar7,*puVar15);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x20);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f05a4(iVar2,unaff_r10,
                                          **(undefined4 **)(iRam016495e4 + 0x16490b0));
                  iVar2 = func_0x014388d4(**(undefined4 **)(iRam016495e8 + 0x16490c8));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar2,uVar14,uVar6,0);
                  if (iVar16 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar16 + 8);
                  uVar10 = *(uint *)(iVar16 + 0xc);
                  piVar3 = *(int **)(iRam016495ec + 0x1649118);
                  *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
                  iVar9 = *piVar3;
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar10 < *(uint *)(iVar8 + 0xc)) {
                    *(uint *)(iVar16 + 0xc) = uVar10 + 1;
                    piVar3 = (int *)(iVar8 + uVar10 * 4 + 0x10);
                    *piVar3 = iVar2;
                    func_0x014385cc(piVar3,iVar2);
                  }
                  else {
                    func_0x0152874c(iVar16,iVar2,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar15 = *(undefined4 **)(iRam016495f0 + 0x1649174);
                }
              }
            }
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    return iVar16;
  }
  iVar2 = func_0x029540a4(0x1671,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar12 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar12 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar11 = *(int *)(iVar2 + 8);
  uVar14 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar11,uVar14,&iStack_38,uVar6);
  iVar2 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return iVar2;
}


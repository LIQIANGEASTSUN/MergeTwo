
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c49b10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iStack_38;
  int iStack_34;
  
  pcVar6 = (char *)(_UNK_02c4a37c + 0x2c49b34);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4a380 + 0x2c49b48));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a384 + 0x2c49b54));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a388 + 0x2c49b60));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a38c + 0x2c49b6c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a390 + 0x2c49b78));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a394 + 0x2c49b84));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a398 + 0x2c49b90));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a39c + 0x2c49b9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a3a0 + 0x2c49ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a3a4 + 0x2c49bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a3a8 + 0x2c49bc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a3ac + 0x2c49bcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a3b0 + 0x2c49bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4a3b4 + 0x2c49be4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e1d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c4a3b8 + 0x2c49c4c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c4a3bc + 0x2c49c68));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bad204(iVar1,param_3,param_4,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(param_2 + 0x84) != 0) {
        puVar7 = *(undefined4 **)(_UNK_02c4a3c0 + 0x2c49cc0);
        iVar2 = func_0x014388d4(*puVar7);
        puVar10 = *(undefined4 **)(_UNK_02c4a3c4 + 0x2c49cd8);
        func_0x024f0510(iVar2,*puVar10);
        iVar3 = func_0x014388d4(*puVar7);
        func_0x024f0510(iVar3,*puVar10);
        iVar16 = 4;
        while( true ) {
          iVar8 = *(int *)(param_2 + 0x84);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar14 = iVar16 - 4;
          if (*(int *)(iVar8 + 0xc) <= (int)uVar14) break;
          iVar8 = *(int *)(param_2 + 0x84);
          iVar11 = *(int *)(iVar1 + 0x68);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar8 + 0xc) <= uVar14) {
            func_0x014388e8();
          }
          uVar13 = *(undefined4 *)(iVar8 + iVar16 * 4);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x046c26fc(iVar11,uVar13,**(undefined4 **)(_UNK_02c4a3c8 + 0x2c49d60));
          iVar11 = 0;
          if (iVar8 != 0) {
            iVar8 = *(int *)(param_2 + 0x84);
            iVar11 = *(int *)(iVar1 + 0x68);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar8 + 0xc) <= uVar14) {
              func_0x014388e8();
            }
            uVar13 = *(undefined4 *)(iVar8 + iVar16 * 4);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x03b70fac(iVar11,uVar13,**(undefined4 **)(_UNK_02c4a3cc + 0x2c49db8));
          }
          iVar8 = *(int *)(param_2 + 100);
          if (iVar8 == 0) {
LAB_02c49dec:
            iVar8 = *(int *)(param_2 + 0x84);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar8 + 0xc) <= uVar14) {
              func_0x014388e8();
            }
            uVar13 = *(undefined4 *)(iVar8 + iVar16 * 4);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar2 + 8);
            uVar12 = *(uint *)(iVar2 + 0xc);
            piVar4 = *(int **)(_UNK_02c4a3d0 + 0x2c49e3c);
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
            iVar11 = *piVar4;
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (uVar12 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar2 + 0xc) = uVar12 + 1;
              *(undefined4 *)(iVar8 + uVar12 * 4 + 0x10) = uVar13;
            }
            else {
              func_0x024f0520(iVar2,uVar13,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
            iVar8 = *(int *)(param_2 + 0x88);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar8 + 0xc) <= uVar14) {
              func_0x014388e8();
            }
            iVar11 = *(int *)(iVar8 + iVar16 * 4);
            iVar8 = *(int *)(param_2 + 0x84);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar8 + 0xc) <= uVar14) {
              func_0x014388e8();
            }
            iVar8 = FUN_02c48cc0(param_1,*(undefined4 *)(iVar8 + iVar16 * 4));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar3 + 8);
            uVar14 = *(uint *)(iVar3 + 0xc);
            piVar4 = *(int **)(_UNK_02c4a3d4 + 0x2c49f04);
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            iVar15 = *piVar4;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar8 = iVar8 + iVar11;
            if (uVar14 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar14 + 1;
              *(int *)(iVar9 + uVar14 * 4 + 0x10) = iVar8;
            }
            else {
              func_0x024f0520(iVar3,iVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
            }
          }
          else {
            if (*(uint *)(iVar8 + 0xc) <= uVar14) {
              func_0x014388e8();
            }
            if (*(int *)(iVar8 + iVar16 * 4) <= iVar11) goto LAB_02c49dec;
          }
          iVar16 = iVar16 + 1;
        }
        iVar16 = *(int *)(param_2 + 0x68);
        iVar1 = 0;
        if (iVar16 != 0) {
          iVar1 = *(int *)(iVar16 + 0xc);
        }
        if (iVar16 != 0 && iVar1 != 0) {
          uVar14 = 0;
          piVar4 = *(int **)(_UNK_02c4a3d8 + 0x2c49fe8);
          puVar7 = *(undefined4 **)(_UNK_02c4a3dc + 0x2c49ff0);
          iStack_34 = 0;
          iStack_38 = 0;
          while( true ) {
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(param_2 + 0x68);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 0xc) <= (int)uVar14) break;
            iVar1 = *(int *)(param_2 + 0x68);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar14) {
              func_0x014388e8();
            }
            iVar1 = func_0x02c4a404(param_1,*(undefined4 *)(iVar1 + uVar14 * 4 + 0x10));
            if (iVar1 != 0) {
              uVar12 = 0;
              do {
                iVar16 = *(int *)(iVar1 + 0x20);
                if (iVar16 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar16 + 0xc) <= (int)uVar12) goto LAB_02c4a140;
                if (*(int *)(*piVar4 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar16 = func_0x014e9518(*puVar7);
                iVar8 = *(int *)(iVar1 + 0x20);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar8 + 0xc) <= uVar12) {
                  func_0x014388e8();
                }
                uVar13 = *(undefined4 *)(iVar8 + uVar12 * 4 + 0x10);
                if (iVar16 == 0) {
                  func_0x014388e4();
                }
                iVar16 = func_0x02d102b4(iVar16,uVar13,1,0);
                uVar12 = uVar12 + 1;
              } while (iVar16 == 0);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(param_2 + 0x68);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar14) {
                func_0x014388e8();
              }
              iStack_38 = iStack_38 + 1;
              iStack_34 = *(int *)(iVar1 + uVar14 * 4 + 0x10);
            }
LAB_02c4a140:
            uVar14 = uVar14 + 1;
          }
          if (iStack_38 == 1) {
            iVar1 = 4;
            puVar7 = *(undefined4 **)(_UNK_02c4a3e0 + 0x2c4a164);
            while( true ) {
              iVar16 = *(int *)(param_2 + 0x68);
              if (iVar16 == 0) {
                func_0x014388e4();
              }
              uVar14 = iVar1 - 4;
              if (*(int *)(iVar16 + 0xc) <= (int)uVar14) break;
              iVar16 = *(int *)(param_2 + 0x68);
              if (iVar16 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar16 + 0xc) <= uVar14) {
                func_0x014388e8();
              }
              iVar16 = *(int *)(iVar16 + iVar1 * 4);
              iVar8 = *(int *)(param_2 + 0x68);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar8 + 0xc) <= uVar14) {
                func_0x014388e8();
              }
              uVar13 = *(undefined4 *)(iVar8 + iVar1 * 4);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar8 = func_0x024f0f34(iVar2,uVar13,*puVar7);
              if (iVar16 == iStack_34) {
                if (iVar8 != 0) {
                  iVar16 = *(int *)(param_2 + 0x68);
                  if (iVar16 == 0) {
                    func_0x014388e4();
                  }
                  if (*(uint *)(iVar16 + 0xc) <= uVar14) {
                    func_0x014388e8();
                  }
                  uVar13 = *(undefined4 *)(iVar16 + iVar1 * 4);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar13 = func_0x024f1bc0(iVar2,uVar13,**(undefined4 **)(_UNK_02c4a3e4 + 0x2c4a238)
                                          );
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar16 = func_0x024f0530(iVar3,uVar13,**(undefined4 **)(_UNK_02c4a3e8 + 0x2c4a264)
                                          );
                  iVar8 = *(int *)(param_2 + 0x6c);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = (int)((ulonglong)((longlong)(iVar8 * iVar16) * -0x51eb851f) >> 0x20);
                  iVar16 = ((iVar8 >> 5) - (iVar8 >> 0x1f)) + iVar16;
                  uVar5 = **(undefined4 **)(_UNK_02c4a3ec + 0x2c4a2a8);
LAB_02c4a36c:
                  func_0x024f1628(iVar3,uVar13,iVar16,uVar5);
                }
              }
              else if (iVar8 != 0) {
                iVar16 = *(int *)(param_2 + 0x68);
                if (iVar16 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar16 + 0xc) <= uVar14) {
                  func_0x014388e8();
                }
                uVar13 = *(undefined4 *)(iVar16 + iVar1 * 4);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uVar13 = func_0x024f1bc0(iVar2,uVar13,**(undefined4 **)(_UNK_02c4a3f0 + 0x2c4a2f8));
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar16 = func_0x024f0530(iVar3,uVar13,**(undefined4 **)(_UNK_02c4a3f4 + 0x2c4a324));
                iVar8 = *(int *)(param_2 + 0x6c);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar16 = ((iVar8 + 100) * iVar16) / 100;
                uVar5 = **(undefined4 **)(_UNK_02c4a3f8 + 0x2c4a368);
                goto LAB_02c4a36c;
              }
              iVar1 = iVar1 + 1;
            }
          }
        }
        if (*(int *)(**(int **)(_UNK_02c4a3fc + 0x2c49f80) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar13 = func_0x02aec084(iVar3,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f0530(iVar2,uVar13,**(undefined4 **)(_UNK_02c4a400 + 0x2c49fbc));
        if (iVar1 != 0) {
          return iVar1;
        }
        return -1;
      }
    }
    iVar1 = -1;
  }
  else {
    iVar1 = func_0x029540a4(0x5e1d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028fb794(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}


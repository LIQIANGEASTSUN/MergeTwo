
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bff25c(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc8;
  
  pcVar8 = (char *)(_UNK_02bff4f0 + 0x2bff274);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bff4f4 + 0x2bff288));
    func_0x01438628(*(undefined4 *)(_UNK_02bff4f8 + 0x2bff294));
    func_0x01438628(*(undefined4 *)(_UNK_02bff4fc + 0x2bff2a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bff500 + 0x2bff2ac));
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x5d4c,0);
  if (iVar5 == 0) {
    *(int *)(param_1 + 0xb8) = (int)param_2;
    func_0x014385cc((int *)(param_1 + 0xb8),param_2);
    piVar14 = (int *)0x0;
    if (param_2 != (int *)0x0) {
      uVar1 = (uint)*(byte *)(**(int **)(_UNK_02bff504 + 0x2bff324) + 0xb8);
      if ((uVar1 <= *(byte *)(*param_2 + 0xb8)) &&
         (piVar14 = param_2,
         *(int *)(*(int *)(*param_2 + 100) + uVar1 * 4 + -4) !=
         **(int **)(_UNK_02bff504 + 0x2bff324))) {
        piVar14 = (int *)0x0;
      }
    }
    param_2 = piVar14;
    piVar14 = *(int **)(_UNK_02bff508 + 0x2bff360);
    puVar10 = (undefined4 *)(param_1 + 0xbc);
    uVar9 = *puVar10;
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x024ef144(uVar9,0,0);
    if (iVar5 == 0) {
      uVar9 = func_0x02bff51c(param_1,param_2);
      *(undefined4 *)(param_1 + 0xbc) = uVar9;
      func_0x014385cc(puVar10,uVar9);
      iVar5 = *(int *)(param_1 + 0x14);
      uVar9 = *(undefined4 *)(param_1 + 0xbc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x014e94d8(iVar5,0);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x024eec50(uVar9,uVar6,0);
      if (iVar5 == 0) {
        piVar14 = *(int **)(_UNK_02bff50c + 0x2bff478);
        uVar9 = *puVar10;
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x014387a4();
        }
        pcVar8 = (char *)(_UNK_02bff510 + 0x2bff498);
        if (*pcVar8 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02bff514 + 0x2bff4ac));
          *pcVar8 = '\x01';
        }
        iVar5 = *piVar14;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
          iVar5 = *piVar14;
        }
        iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0xc);
        iVar7 = **(int **)(_UNK_02bff518 + 0x2bff4dc);
        if (*(int *)(iVar7 + 0x1c) == 0) {
          func_0x024f83cc(*(undefined4 *)(_UNK_0362c060 + 0x362bc58));
          func_0x024f83cc(*(undefined4 *)(_UNK_0362c064 + 0x362bc64));
          func_0x024f83cc(*(undefined4 *)(_UNK_0362c068 + 0x362bc70));
          func_0x024f83cc(*(undefined4 *)(_UNK_0362c06c + 0x362bc7c));
          func_0x024f83cc(*(undefined4 *)(_UNK_0362c070 + 0x362bc88));
          func_0x024f83cc(*(undefined4 *)(_UNK_0362c074 + 0x362bc94));
          if (*(int *)(iVar7 + 0x1c) == 0) {
            func_0x024f83f8(iVar7);
          }
        }
        if (*(int *)(**(int **)(_UNK_0362c078 + 0x362bcb8) + 0x74) == 0) {
          func_0x024f83d8();
        }
        iVar11 = func_0x04535360(**(undefined4 **)(_UNK_0362c07c + 0x362bcd4));
        if (*(int *)(**(int **)(_UNK_0362c080 + 0x362bce8) + 0x74) == 0) {
          func_0x024f83d8();
        }
        func_0x0362cbb8(uVar9,iVar11,**(undefined4 **)(iVar7 + 0x1c));
        if (iVar11 == 0) {
          func_0x024f83d4();
        }
        iVar12 = *(int *)(iVar11 + 0xc);
        if (0 < iVar12) {
          iVar13 = 0;
          do {
            if (iVar11 == 0) {
              func_0x024f83d4();
            }
            iVar16 = func_0x04cfd760(iVar11,iVar13,**(undefined4 **)(_UNK_0362c084 + 0x362bd44));
            iVar17 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
            if ((*(ushort *)(iVar17 + 0xbd) & 1) == 0) {
              iVar17 = func_0x024f83fc(iVar17);
            }
            iVar15 = 0;
            if ((iVar16 != 0) && (iVar15 = func_0x024f83e4(iVar16,iVar17), iVar15 == 0)) {
              func_0x024f84a0(iVar16,iVar17);
              iVar15 = 0;
            }
            if (iVar5 == 0) {
              func_0x024f83d4();
            }
            (**(code **)(iVar5 + 0xc))
                      (*(undefined4 *)(iVar5 + 0x20),iVar15,param_2,*(undefined4 *)(iVar5 + 0x14));
            iVar13 = iVar13 + 1;
          } while (iVar12 != iVar13);
        }
        if (iVar11 == 0) {
          func_0x024f83d4();
        }
        iVar5 = *(int *)(iVar11 + 0xc);
        if (*(int *)(**(int **)(_UNK_0362c0a0 + 0x362bfb8) + 0x74) == 0) {
          func_0x024f83d8();
        }
        func_0x045354d8(iVar11,**(undefined4 **)(_UNK_0362c0a4 + 0x362bfd8));
        return (uint)(0 < iVar5);
      }
      pcVar8 = (char *)(_UNK_02bfdde4 + 0x2bfd95c);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bfdde8 + 0x2bfd970));
        func_0x01438628(*(undefined4 *)(_UNK_02bfddec + 0x2bfd97c));
        func_0x01438628(*(undefined4 *)(_UNK_02bfddf0 + 0x2bfd988));
        *pcVar8 = '\x01';
      }
      iVar5 = func_0x02953fd4(0x5d54,0);
      if (iVar5 == 0) {
        iVar5 = func_0x024eecb8(param_1,0);
        if (param_2 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar12 = param_2[0x13];
        iVar7 = param_2[0x14];
        iVar11 = param_2[0x15];
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        fStack_44 = 0.0;
        fStack_48 = (float)iVar11;
        func_0x024efc6c(&stack0xffffffc0,iVar5,iVar12,iVar7);
        *(undefined8 *)(param_1 + 0x78) = in_stack_ffffffc0;
        *(undefined4 *)(param_1 + 0x80) = in_stack_ffffffc8;
        uVar2 = FUN_02becc6c(param_1,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c)
                            );
        uVar1 = uVar2;
        if (uVar2 != 0xffffffff) {
          iVar5 = *(int *)(param_1 + 0x44);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar5 + 0xc) <= uVar2) {
            func_0x014388e8();
          }
          iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar1 = func_0x02c3f4b4(iVar5,0);
          if (uVar1 != 0xffffffff) {
            fVar3 = (float)func_0x024ef5b8(0);
            iVar5 = *(int *)(param_1 + 0x44);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= uVar2) {
              func_0x014388e8();
            }
            uVar1 = iVar5 + uVar2 * 4;
            iVar5 = *(int *)(uVar1 + 0x10);
            if (iVar5 == 0) {
              uVar1 = func_0x014388e4();
            }
            if (*(float *)(iVar5 + 0x18) <= fVar3) {
              iVar5 = *(int *)(param_1 + 0x44);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar1 = *(uint *)(iVar5 + 0x14);
              if (uVar1 != 0xffffffff) {
                iVar5 = *(int *)(param_1 + 0x44);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar9 = *(undefined4 *)(iVar5 + 0xc);
                if (*(int *)(**(int **)(_UNK_02bfddf4 + 0x2bfdb84) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar5 = func_0x024ef144(uVar9,0,0);
                if (iVar5 != 0) {
                  iVar5 = *(int *)(param_1 + 0x44);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    func_0x014388e8();
                  }
                  iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  iVar5 = *(int *)(iVar5 + 0xc);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar5 + 0x1c) != 0) {
                    iVar5 = *(int *)(param_1 + 0x44);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                      func_0x014388e8();
                    }
                    iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0xc);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar5 = *(int *)(iVar5 + 0x1c);
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0x20) == 1) {
                      piVar14 = (int *)func_0x01ae369c(0);
                      if (piVar14 == (int *)0x0) {
                        func_0x014388e4();
                      }
                      iVar5 = (**(code **)(*piVar14 + 0x110))
                                        (piVar14,0,*(undefined4 *)(*piVar14 + 0x114));
                      if (iVar5 == 0) {
                        return 0;
                      }
                    }
                  }
                }
                iVar5 = *(int *)(param_1 + 0x44);
                *(undefined1 *)(param_1 + 0x84) = 1;
                *(uint *)(param_1 + 0xb0) = uVar2;
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar2 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x024eecb8(iVar5,0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x024f1154(iVar5,0);
                iVar5 = *(int *)(param_1 + 0x44);
                uVar1 = *(uint *)(param_1 + 0xb0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x02c2544c(iVar5,0);
                FUN_02bf06ec(param_1);
                FUN_02bee744(param_1,0xffffffff,1);
                if (*(int *)(**(int **)(_UNK_02bfddf8 + 0x2bfdd88) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar5 = func_0x03b2c734(**(undefined4 **)(_UNK_02bfddfc + 0x2bfdda4));
                uVar9 = *(undefined4 *)(param_1 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                fStack_48 = 0.0;
                uVar1 = func_0x02c3e4a4(iVar5,1,uVar9,1);
              }
            }
          }
        }
        return uVar1;
      }
      iVar5 = func_0x029540a4(0x5d54,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
      uVar9 = *(undefined4 *)(param_1 + 0xbc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x014e94d8(iVar5,0);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x024eec50(uVar9,uVar6,0);
      if (iVar5 == 0) {
        return 0;
      }
      pcVar8 = (char *)(_UNK_02bfe6c8 + 0x2bfde24);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bfe6cc + 0x2bfde38));
        func_0x01438628(*(undefined4 *)(_UNK_02bfe6d0 + 0x2bfde44));
        func_0x01438628(*(undefined4 *)(_UNK_02bfe6d4 + 0x2bfde50));
        func_0x01438628(*(undefined4 *)(_UNK_02bfe6d8 + 0x2bfde5c));
        func_0x01438628(*(undefined4 *)(_UNK_02bfe6dc + 0x2bfde68));
        *pcVar8 = '\x01';
      }
      iVar5 = func_0x02953fd4(0x5d4d,0);
      if (iVar5 == 0) {
        uVar1 = *(uint *)(param_1 + 0xb0);
        *(undefined1 *)(param_1 + 200) = 1;
        if (uVar1 != 0xffffffff) {
          iVar5 = FUN_02bfb30c(param_1);
          if (iVar5 == 0) {
            uVar1 = *(uint *)(param_1 + 0x9c);
            if ((uVar1 != *(uint *)(param_1 + 0xb0)) && (uVar1 = FUN_02bfb1f0(param_1), uVar1 == 0))
            {
              uVar1 = FUN_02bee8e8(param_1,*(undefined4 *)(param_1 + 0xb0),0,1,0);
            }
          }
          else {
            iVar5 = *(int *)(param_1 + 0x44);
            uVar1 = *(uint *)(param_1 + 0xb0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= uVar1) {
              func_0x014388e8();
            }
            iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            piVar14 = *(int **)(_UNK_02bfe6e0 + 0x2bfdf2c);
            uVar9 = *(undefined4 *)(iVar5 + 0xc);
            if (*(int *)(*piVar14 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x024ef144(uVar9,0,0);
            if (iVar5 != 0) {
              iVar5 = *(int *)(param_1 + 0x44);
              uVar1 = *(uint *)(param_1 + 0xb0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar5 + 0x1c) != 0) {
                iVar5 = *(int *)(param_1 + 0x44);
                uVar1 = *(uint *)(param_1 + 0xb0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0x1c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar5 + 0x20) == 1) {
                  piVar4 = (int *)func_0x01ae369c(0);
                  if (piVar4 == (int *)0x0) {
                    func_0x014388e4();
                  }
                  iVar5 = (**(code **)(*piVar4 + 0x110))(piVar4,0,*(undefined4 *)(*piVar4 + 0x114));
                  if (iVar5 == 0) {
                    return 0;
                  }
                }
              }
            }
            iVar5 = *(int *)(param_1 + 0x44);
            uVar1 = *(uint *)(param_1 + 0xb0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= uVar1) {
              func_0x014388e8();
            }
            iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar9 = *(undefined4 *)(iVar5 + 0xc);
            if (*(int *)(*piVar14 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x024ef144(uVar9,0,0);
            if (iVar5 != 0) {
              iVar5 = *(int *)(param_1 + 0x44);
              uVar1 = *(uint *)(param_1 + 0xb0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar5 + 0x1c) != 0) {
                iVar5 = *(int *)(param_1 + 0x44);
                uVar1 = *(uint *)(param_1 + 0xb0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0x1c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar5 + 0x1c) == 200) {
                  return 200;
                }
              }
            }
            if (param_2 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar16 = param_2[0x13];
            iVar11 = param_2[0x14];
            iVar7 = param_2[0x15];
            iVar13 = param_2[0x32];
            iVar12 = param_2[0x33];
            iVar5 = *(int *)(param_1 + 0x14);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024efc6c(&fStack_4c,iVar5,iVar16,iVar11,iVar7,0);
            if (*(byte *)(param_1 + 0x84) != 0) {
              if ((ABS(fStack_4c - *(float *)(param_1 + 0x78)) <
                   *(float *)(param_1 + 0x3c) * _UNK_02bfe394) &&
                 (ABS(fStack_48 - *(float *)(param_1 + 0x7c)) <
                  *(float *)(param_1 + 0x40) * _UNK_02bfe394)) {
                return (uint)*(byte *)(param_1 + 0x84);
              }
              *(undefined1 *)(param_1 + 0x84) = 0;
            }
            piVar4 = (int *)(param_1 + 0x98);
            if (*piVar4 != 0) {
              func_0x0333a0d0(*piVar4,0,0);
            }
            if ((1.0 <= ABS(fStack_44)) || (1.0 <= ABS(*(float *)(param_1 + 0x90)))) {
              iVar5 = *(int *)(param_1 + 0x44);
              uVar1 = *(uint *)(param_1 + 0xb0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar9 = *(undefined4 *)(iVar5 + 0xc);
              if (*(int *)(*piVar14 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024ef144(uVar9,0,0);
              if (iVar5 != 0) {
                iVar5 = *(int *)(param_1 + 0x44);
                uVar1 = *(uint *)(param_1 + 0xb0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x024eecb8(iVar5,0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x024ef1f8(iVar5,fStack_4c,fStack_48,fStack_44,0);
                piVar14 = *(int **)(_UNK_02bfe6e4 + 0x2bfe498);
              }
            }
            else {
              iVar5 = *(int *)(param_1 + 0x44);
              uVar1 = *(uint *)(param_1 + 0xb0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar9 = *(undefined4 *)(iVar5 + 0xc);
              if (*(int *)(*piVar14 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024ef144(uVar9,0,0);
              if (iVar5 != 0) {
                iVar5 = *(int *)(param_1 + 0x44);
                uVar1 = *(uint *)(param_1 + 0xb0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar9 = func_0x024eecb8(iVar5,0);
                uStack_50 = 0;
                iVar5 = func_0x03342888(uVar9,fStack_4c,fStack_48,fStack_44,0x3dcccccd,0);
                *piVar4 = iVar5;
                func_0x014385cc(piVar4,iVar5);
              }
            }
            piVar4 = *(int **)(_UNK_02bfe6e8 + 0x2bfe4a0);
            *(float *)(param_1 + 0x88) = fStack_4c;
            *(float *)(param_1 + 0x8c) = fStack_48;
            iVar5 = *piVar4;
            *(float *)(param_1 + 0x90) = fStack_44;
            if (*(int *)(iVar5 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02bfe6ec + 0x2bfe4c8));
            piVar4 = *(int **)(_UNK_02bfe6f0 + 0x2bfe4dc);
            iVar7 = *piVar4;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar4;
            }
            uVar9 = **(undefined4 **)(iVar7 + 0x5c);
            piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bfe6f4 + 0x2bfe500),1);
            iVar7 = FUN_02bfaf34(param_1,iVar13,iVar12);
            if (piVar4 == (int *)0x0) {
              func_0x014388e4();
            }
            if ((iVar7 != 0) &&
               (iVar11 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar4 + 0x20)), iVar11 == 0)) {
              uVar6 = func_0x01438904();
              func_0x01438790(uVar6,0);
            }
            if (piVar4[3] == 0) {
              func_0x014388e8();
            }
            piVar4[4] = iVar7;
            func_0x014385cc(piVar4 + 4,iVar7);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x02990414(iVar5,uVar9,piVar4,0);
            uVar9 = FUN_02bed260(param_1,fStack_4c,fStack_48,fStack_44,
                                 *(undefined4 *)(param_1 + 0xb0));
            FUN_02bfe6f8(param_1,uVar9);
            FUN_02bee8e8(param_1,0xffffffff,0,1,0);
            iVar5 = *(int *)(param_1 + 0x44);
            uVar1 = *(uint *)(param_1 + 0xb0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= uVar1) {
              func_0x014388e8();
            }
            iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar9 = *(undefined4 *)(iVar5 + 0xc);
            if (*(int *)(*piVar14 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x024ef144(uVar9,0,0);
            uVar1 = 0;
            if (iVar5 != 0) {
              iVar5 = *(int *)(param_1 + 0x44);
              uVar1 = *(uint *)(param_1 + 0xb0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                func_0x014388e8();
              }
              iVar5 = *(int *)(iVar5 + uVar1 * 4 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x024eecb8(iVar5,0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar1 = func_0x024f1154(iVar5,0);
            }
          }
        }
        return uVar1;
      }
      iVar5 = func_0x029540a4(0x5d4d,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x5d4c,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  func_0x024f56c0(&uStack_50,0,param_2,0);
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01523a6c(&stack0xffffffc8,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01523a6c(&stack0xffffffc8,param_1,0);
  func_0x01523a6c(&stack0xffffffc8,param_2,0);
  iVar7 = *(int *)(iVar5 + 8);
  uVar9 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar5 == 0) {
    uVar6 = 2;
  }
  uVar1 = func_0x024f56d0(iVar7,uVar9,&stack0xffffffc8,uVar6,0,0);
  return uVar1;
}


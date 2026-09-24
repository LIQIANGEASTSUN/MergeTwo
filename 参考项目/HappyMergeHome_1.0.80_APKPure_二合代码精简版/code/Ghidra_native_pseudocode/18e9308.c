
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_018f9308(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar11 = (char *)(_UNK_018f93f0 + 0x18f9328);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f93f4 + 0x18f933c));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9675,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9675,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x02871f94(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  func_0x02bf1544(param_1,param_2,param_3,0);
  if (*(int *)(**(int **)(_UNK_018f93f8 + 0x18f93b8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018f5b04();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x02953fd4(0x9676,0);
  if (iVar3 == 0) {
    pcVar11 = (char *)(_UNK_018ffd9c + 0x18ffa7c);
    uStack_1c = param_3;
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_018ffda0 + 0x18ffa90));
      func_0x01438628(*(undefined4 *)(_UNK_018ffda4 + 0x18ffa9c));
      func_0x01438628(*(undefined4 *)(_UNK_018ffda8 + 0x18ffaa8));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdac + 0x18ffab4));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdb0 + 0x18ffac0));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdb4 + 0x18ffacc));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdb8 + 0x18ffad8));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdbc + 0x18ffae4));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdc0 + 0x18ffaf0));
      func_0x01438628(*(undefined4 *)(_UNK_018ffdc4 + 0x18ffafc));
      *pcVar11 = '\x01';
    }
    iVar3 = func_0x02953fd4(0x9670,0);
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_018ffdc8 + 0x18ffb5c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018ffdcc + 0x18ffb78));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x029a6fa8(iVar3,param_3,0);
      if (iVar3 != 0) {
        iVar9 = func_0x018fa1d4(iVar1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar9 + 0x10) != 0) {
          iVar9 = func_0x018fa1d4(iVar1);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          uVar10 = *(undefined4 *)(iVar3 + 0x30);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(iVar9,uVar10,**(undefined4 **)(_UNK_018ffdd0 + 0x18ffc08));
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      iVar3 = func_0x018fa998(iVar1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f0540(iVar3,param_3,**(undefined4 **)(_UNK_018ffdd4 + 0x18ffc40));
      if (iVar3 == 0) {
        uVar10 = func_0x01524ffc(&uStack_1c,0);
        uVar10 = func_0x024eee28(**(undefined4 **)(_UNK_018ffdd8 + 0x18ffca4),uVar10,
                                 **(undefined4 **)(_UNK_018ffddc + 0x18ffcb0),0);
        if (*(int *)(**(int **)(_UNK_018ffde0 + 0x18ffcc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar2 = func_0x024ef174(uVar10,0);
      }
      else {
        iVar3 = func_0x018fa998(iVar1);
        if (iVar3 == 0) {
          func_0x014388e4();
          iVar9 = func_0x024f05d4(0,param_3,**(undefined4 **)(_UNK_018ffde8 + 0x18ffcf8));
          func_0x014388e4();
        }
        else {
          iVar9 = func_0x024f05d4(iVar3,param_3,**(undefined4 **)(_UNK_018ffde4 + 0x18ffc74));
        }
        func_0x024f10d4(iVar3,param_3,iVar9 + -1,**(undefined4 **)(_UNK_018ffdec + 0x18ffd1c));
        iVar3 = func_0x018fa998(iVar1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f05d4(iVar3,param_3,**(undefined4 **)(_UNK_018ffdf0 + 0x18ffd4c));
        if ((int)uVar2 < 1) {
          iVar1 = func_0x018fa998(iVar1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = **(int **)(_UNK_018ffdf4 + 0x18ffd8c);
          pcVar11 = (char *)(_UNK_03b70f90 + 0x3b70e80);
          if (*pcVar11 == '\0') {
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f94 + 0x3b70e94));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f98 + 0x3b70ea0));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f9c + 0x3b70eac));
            *pcVar11 = '\x01';
          }
          iVar12 = **(int **)(_UNK_03b70fa0 + 0x3b70ec0);
          iVar9 = *(int *)(iVar12 + 0x1c);
          if (iVar9 == 0) {
            func_0x024f83f8(iVar12);
            iVar9 = *(int *)(iVar12 + 0x1c);
          }
          iVar9 = *(int *)(iVar9 + 8);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x024f83fc();
          }
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar9 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
          if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
            iVar9 = func_0x024f83fc();
          }
          uVar10 = **(undefined4 **)(iVar9 + 0x5c);
          if (*(int *)(**(int **)(_UNK_03b70fa4 + 0x3b70f20) + 0x74) == 0) {
            func_0x024f83d8(**(int **)(_UNK_03b70fa4 + 0x3b70f20));
          }
          func_0x02679550(**(undefined4 **)(_UNK_03b70fa8 + 0x3b70f50),uVar10,0);
          func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x28));
          if (iVar1 == 0) {
            func_0x024f83d4();
          }
          iStack_34 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x30);
          if (*(int *)(iVar1 + 8) != 0) {
            piVar8 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            auStack_28[0] = param_3;
            if (piVar8 == (int *)0x0) {
              uVar2 = func_0x0515c4a8(auStack_28,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
            }
            else {
              iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x034a8ac8(iVar1);
              }
              iVar3 = *piVar8;
              uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 200);
                    goto LAB_046c3ca0;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar2 != 0);
              }
              puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar1,1);
LAB_046c3ca0:
              uVar2 = (*(code *)*puVar4)(piVar8,param_3,puVar4[1]);
              iVar1 = iStack_30;
            }
            iVar3 = *(int *)(iVar1 + 8);
            iVar1 = iVar3;
            if (iVar3 == 0) {
              func_0x034a8a64();
              iVar1 = *(int *)(iStack_30 + 8);
              if (iVar1 == 0) {
                uVar14 = func_0x034a8a64();
                uStack_3c = 0x46c3f38;
                uStack_40 = 0;
                uStack_48 = uVar2;
                iStack_44 = iVar1;
                uVar2 = func_0x046c2c44((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
                if ((int)uVar2 < 0) {
                  uVar10 = 0;
                }
                else {
                  iVar1 = *(int *)((int)uVar14 + 0xc);
                  if (iVar1 == 0) {
                    func_0x034a8a64();
                  }
                  if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    func_0x034a8c14();
                  }
                  uVar10 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
                }
                *extraout_r2 = uVar10;
                return ~uVar2 >> 0x1f;
              }
            }
            uStack_2c = uVar2 & 0x7fffffff;
            func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar3 + 0xc));
            if (*(uint *)(iVar1 + 0xc) <= extraout_r1) {
              func_0x034a8c14();
            }
            uVar2 = *(int *)(iVar1 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar2) {
              iVar1 = iStack_30;
              uVar13 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar5 = uVar2;
                iVar3 = *(int *)(iVar1 + 0xc);
                if (iVar3 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                  func_0x034a8c14();
                }
                uVar10 = auStack_28[0];
                iVar3 = iVar3 + uVar5 * 0x10;
                if (*(uint *)(iVar3 + 0x10) == uStack_2c) {
                  piVar8 = *(int **)(iVar1 + 0x20);
                  if (piVar8 == (int *)0x0) {
                    piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar10 = auStack_28[0];
                    uVar6 = *(undefined4 *)(iVar3 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64(0,uVar6);
                    }
                    iVar9 = (**(code **)(*piVar8 + 0x100))
                                      (piVar8,uVar6,uVar10,*(undefined4 *)(*piVar8 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar3 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64();
                    }
                    iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x034a8ac8(iVar1);
                    }
                    iVar9 = *piVar8;
                    uVar2 = (uint)*(ushort *)(iVar9 + 0xb6);
                    if (uVar2 != 0) {
                      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar1) {
                          puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                          goto LAB_046c3e4c;
                        }
                        uVar2 = uVar2 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar2 != 0);
                    }
                    puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar1,0);
LAB_046c3e4c:
                    iVar9 = (*(code *)*puVar4)(piVar8,uVar6,uVar10,puVar4[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar9 != 0) {
                    if ((int)uVar13 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar9 = *(int *)(iVar3 + 0x14);
                      if (iVar1 == 0) {
                        func_0x034a8a64();
                      }
                      uVar2 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x034a8c14();
                      }
                      *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar9 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x034a8a64();
                      }
                      uVar10 = *(undefined4 *)(iVar3 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar13) {
                        func_0x034a8c14();
                      }
                      *(undefined4 *)(iVar1 + uVar13 * 0x10 + 0x14) = uVar10;
                    }
                    *(uint *)(iVar3 + 0x10) = 0xffffffff;
                    uVar10 = *(undefined4 *)(iStack_30 + 0x14);
                    *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
                    *(uint *)(iStack_30 + 0x14) = uVar5;
                    *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
                    *(undefined4 *)(iVar3 + 0x14) = uVar10;
                    return 1;
                  }
                }
                uVar2 = *(uint *)(iVar3 + 0x14);
                uVar13 = uVar5;
              } while (*(uint *)(iVar3 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
      }
      return uVar2;
    }
    iVar3 = func_0x029540a4(0x9670,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0x9676,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  auStack_28[0] = 0;
  func_0x024f56c0(&uStack_50,0,param_3,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  uStack_2c = iStack_44;
  auStack_28[0] = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,iVar1,0);
  func_0x01523a2c(&uStack_38,param_3,0);
  iVar9 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  uVar2 = func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6,0,0);
  return uVar2;
}


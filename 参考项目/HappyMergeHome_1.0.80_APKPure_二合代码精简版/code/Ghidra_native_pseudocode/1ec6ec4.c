
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ed6ec4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01ed7e60 + 0x1ed6edc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ed7ee8 + 0x1ed6ef0));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7eec + 0x1ed6efc));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7ef0 + 0x1ed6f08));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7ef4 + 0x1ed6f14));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f18 + 0x1ed6f20));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f1c + 0x1ed6f2c));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f30 + 0x1ed6f38));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f38 + 0x1ed6f44));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f3c + 0x1ed6f50));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f40 + 0x1ed6f5c));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f44 + 0x1ed6f68));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f48 + 0x1ed6f74));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f4c + 0x1ed6f80));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f50 + 0x1ed6f8c));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f54 + 0x1ed6f98));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f58 + 0x1ed6fa4));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f5c + 0x1ed6fb0));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f60 + 0x1ed6fbc));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f64 + 0x1ed6fc8));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f68 + 0x1ed6fd4));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f6c + 0x1ed6fe0));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f70 + 0x1ed6fec));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f74 + 0x1ed6ff8));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f78 + 0x1ed7004));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f7c + 0x1ed7010));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f80 + 0x1ed701c));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f84 + 0x1ed7028));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f88 + 0x1ed7034));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f8c + 0x1ed7040));
    func_0x01438628(*(undefined4 *)(_UNK_01ed7f90 + 0x1ed704c));
    *pcVar7 = '\x01';
  }
  iVar4 = *param_1;
  iVar6 = param_1[6];
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  if (iVar4 == 0) {
    *param_1 = -1;
    iStack_2c = param_1[10];
    param_1[10] = 0;
LAB_01ed70d4:
    func_0x024f1028(&iStack_2c,0);
    if (*(int *)(**(int **)(_UNK_01ed7fc8 + 0x1ed70ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = FUN_01da6358(0);
    if (iVar4 != 0) {
      func_0x01ed8558();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_01da70cc(iVar6,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar4 + 0xc)) {
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01ed7fcc + 0x1ed7154));
      func_0x03bbd054(iVar4,**(undefined4 **)(_UNK_01ed7fd0 + 0x1ed7168));
      iVar11 = param_1[9];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_01daaacc(iVar6,iVar11,iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iStack_30 = func_0x03c87ba0(iVar4,**(undefined4 **)(_UNK_01ed7fd4 + 0x1ed71c0));
      iVar4 = func_0x03bbc0cc(&iStack_30,**(undefined4 **)(_UNK_01ed7fd8 + 0x1ed71d4));
      if (iVar4 == 0) {
        *param_1 = 1;
        param_1[0xb] = iStack_30;
        func_0x014385cc(param_1 + 0xb,0);
        func_0x0359e928(param_1 + 1,&iStack_30,param_1,**(undefined4 **)(_UNK_01ed7fdc + 0x1ed7b30))
        ;
        return;
      }
LAB_01ed71e8:
      func_0x03bbc140(&iStack_30,**(undefined4 **)(_UNK_01ed7fe0 + 0x1ed71f4));
    }
    iVar4 = param_1[8];
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0xc) < 1) goto LAB_01ed7ac8;
    if (*(int *)(**(int **)(_UNK_01ed7fe4 + 0x1ed7234) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = FUN_01da6358(0);
    if (iVar4 != 0) {
      func_0x01ed803c();
    }
    if (*(int *)(**(int **)(_UNK_01ed7fe8 + 0x1ed7264) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01ed7fec + 0x1ed7280));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02bb3638(iVar4,0,0);
    iVar4 = param_1[8];
    uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ed7ff0 + 0x1ed72b4));
    func_0x03bbd054(uVar1,**(undefined4 **)(_UNK_01ed7ff4 + 0x1ed72c8));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    puVar9 = (undefined4 *)(iVar4 + 0xc);
    *puVar9 = uVar1;
    func_0x014385cc(puVar9,uVar1);
    iVar4 = 0;
    puVar9 = *(undefined4 **)(_UNK_01ed7ff8 + 0x1ed7300);
    piVar10 = *(int **)(_UNK_01ed7ffc + 0x1ed7308);
    while( true ) {
      iVar6 = param_1[8];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar4) break;
      iVar6 = param_1[8];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x0152983c(iVar6,iVar4,*puVar9);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar11 = func_0x0202346c(0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar1 = func_0x01524ffc(iVar6 + 8,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01524ffc(iVar6 + 0xc,0);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar11,0x206,uVar1,uVar2,0,0,0);
      iVar4 = iVar4 + 1;
    }
    if (*(int *)(**(int **)(_UNK_01ed8000 + 0x1ed7410) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_01ed8004 + 0x1ed742c));
    iVar6 = param_1[8];
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar1 = *(undefined4 *)(iVar6 + 8);
    if (*(int *)(**(int **)(_UNK_01ed8008 + 0x1ed7450) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01ed800c + 0x1ed7470));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar11 = param_1[8];
    uVar3 = *(undefined4 *)(iVar6 + 0x10);
    uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01ed8010 + 0x1ed7498));
    func_0x0152e3ec(uVar2,iVar11,**(undefined4 **)(_UNK_01ed8014 + 0x1ed74ac),0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02b75870(iVar4,uVar1,uVar3,1,0x60,0,0,0,0,0,0,0,uVar2,0,0);
    iVar4 = param_1[8];
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iStack_30 = func_0x03c87ba0(iVar4,**(undefined4 **)(_UNK_01ed8018 + 0x1ed754c));
    iVar4 = func_0x03bbc0cc(&iStack_30,**(undefined4 **)(_UNK_01ed801c + 0x1ed7560));
    if (iVar4 == 0) {
      *param_1 = 2;
      param_1[0xb] = iStack_30;
      func_0x014385cc(param_1 + 0xb,0);
      func_0x0359e928(param_1 + 1,&iStack_30,param_1,**(undefined4 **)(_UNK_01ed8020 + 0x1ed79f4));
      return;
    }
  }
  else {
    if (iVar4 == 1) {
      *param_1 = -1;
      iStack_30 = param_1[0xb];
      param_1[0xb] = 0;
      goto LAB_01ed71e8;
    }
    if (iVar4 != 2) {
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01ed7f94 + 0x1ed7614));
      func_0x024eeca8(iVar4,0);
      piVar10 = param_1 + 8;
      *piVar10 = iVar4;
      func_0x014385cc(piVar10,iVar4);
      if (*(int *)(**(int **)(_UNK_01ed7f98 + 0x1ed7644) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01ed7f9c + 0x1ed7660));
      iVar11 = param_1[5];
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029a6fa8(iVar4,iVar11,0);
      piVar8 = param_1 + 9;
      *piVar8 = iVar4;
      func_0x014385cc(piVar8);
      if (*piVar8 == 0) goto LAB_01ed7ac8;
      iVar4 = *(int *)(*piVar8 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar11 = FUN_01da7580(iVar6,0);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      if (iVar4 != *(int *)(iVar11 + 0xc)) {
        iVar4 = param_1[5];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_01dac648(iVar6,iVar4,0);
        if (param_1[7] == 10) {
          iVar4 = *piVar8;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar4 + 0x48)) {
            iVar4 = *piVar8;
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar1 = *(undefined4 *)(iVar4 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_01dac7f4(iVar6,uVar1,0);
            iVar4 = *piVar8;
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar1 = *(undefined4 *)(iVar4 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_01dac7f4(iVar6,uVar1,0);
          }
        }
        goto LAB_01ed7ac8;
      }
      iVar4 = *piVar8;
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x2c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar11 = FUN_01da70cc(iVar6,0);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      if (iVar4 <= *(int *)(iVar11 + 0xc)) goto LAB_01ed7ac8;
      iVar4 = *piVar10;
      uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ed7fa0 + 0x1ed774c));
      func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_01ed7fa4 + 0x1ed7760));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      puVar9 = (undefined4 *)(iVar4 + 8);
      *puVar9 = uVar1;
      func_0x014385cc(puVar9,uVar1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_01da70cc(iVar6,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iStack_38 = *(int *)(iVar4 + 0xc);
      while( true ) {
        iVar4 = *piVar8;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iStack_38 = iStack_38 + 1;
        if (*(int *)(iVar4 + 0x2c) < iStack_38) break;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar4 = FUN_01da7a84(iVar6,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar11 = func_0x024f064c(iVar4,iStack_38,&iStack_28,
                                 **(undefined4 **)(_UNK_01ed7fb4 + 0x1ed7820));
        iVar4 = iStack_28;
        if (iVar11 != 0) {
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar4 + 0x10) != 0) {
            iVar4 = 0;
            while( true ) {
              iVar11 = iStack_28;
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar11 + 0x10);
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar11 + 0xc) <= iVar4) break;
              iVar11 = *piVar10;
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              iVar13 = iStack_28;
              iVar11 = *(int *)(iVar11 + 8);
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar13 = *(int *)(iVar13 + 0x10);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              uVar1 = func_0x024f0530(iVar13,iVar4,**(undefined4 **)(_UNK_01ed7fb8 + 0x1ed78c8));
              iVar13 = iStack_28;
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar13 = *(int *)(iVar13 + 0x14);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              uVar2 = func_0x024f0530(iVar13,iVar4,**(undefined4 **)(_UNK_01ed7fbc + 0x1ed7904));
              uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ed7fc0 + 0x1ed7920));
              func_0x02ca3c70(uVar3,uVar1,uVar2,0,0);
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              iVar14 = *(int *)(iVar11 + 8);
              uVar12 = *(uint *)(iVar11 + 0xc);
              piVar5 = *(int **)(_UNK_01ed7fc4 + 0x1ed7970);
              *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
              iVar13 = *piVar5;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              if (uVar12 < *(uint *)(iVar14 + 0xc)) {
                *(uint *)(iVar11 + 0xc) = uVar12 + 1;
                puVar9 = (undefined4 *)(iVar14 + uVar12 * 4 + 0x10);
                *puVar9 = uVar3;
                func_0x014385cc(puVar9,uVar3);
              }
              else {
                func_0x0152874c(iVar11,uVar3,
                                *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
              }
              iVar4 = iVar4 + 1;
            }
          }
        }
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_01da70cc(iVar6,0);
      iVar11 = *piVar8;
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(undefined4 *)(iVar11 + 0x2c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x026cd794(iVar4,uVar1,0);
      iVar4 = *piVar8;
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar4 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_01ed7fa8 + 0x1ed7bc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x0202346c(0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar4,0x205,0,0,0,0,0);
      }
      piVar10 = *(int **)(_UNK_01ed7fac + 0x1ed7c30);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = FUN_01da6358(0);
      if (iVar4 != 0) {
        func_0x01ed803c();
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = FUN_01da6358(0);
      if ((iVar4 == 0) || (iVar4 = func_0x01ed80a8(), iVar4 == 0)) {
        iVar4 = 0;
        func_0x014388e4();
      }
      iStack_2c = func_0x024f1008(iVar4,0);
      iVar4 = func_0x024f1018(&iStack_2c,0);
      if (iVar4 == 0) {
        *param_1 = 0;
        param_1[10] = iStack_2c;
        func_0x014385cc(param_1 + 10,0);
        func_0x035acbd8(param_1 + 1,&iStack_2c,param_1,**(undefined4 **)(_UNK_01ed7fb0 + 0x1ed7cdc))
        ;
        return;
      }
      goto LAB_01ed70d4;
    }
    *param_1 = -1;
    iStack_30 = param_1[0xb];
    param_1[0xb] = 0;
  }
  func_0x03bbc140(&iStack_30,**(undefined4 **)(_UNK_01ed8024 + 0x1ed7580));
  if (*(int *)(**(int **)(_UNK_01ed8028 + 0x1ed7594) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01ed802c + 0x1ed75b0));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar4,0xd,0);
  if (*(int *)(**(int **)(_UNK_01ed8030 + 0x1ed75e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = FUN_01da6358(0);
  if (iVar4 != 0) {
    func_0x01ed8558();
  }
LAB_01ed7ac8:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  param_1[9] = 0;
  func_0x014385cc(param_1 + 9,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}


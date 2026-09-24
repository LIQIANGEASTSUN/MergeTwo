
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032d1ecc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  pcVar11 = (char *)(_UNK_032d1fbc + 0x32d1eec);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d1fc0 + 0x32d1f00));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x839e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x839e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x02871f94(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  func_0x02bf1544(param_1,param_2,param_3,0);
  if (*(int *)(**(int **)(_UNK_032d1fc4 + 0x32d1f7c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x032d2dac(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_032d3930 + 0x32d3828);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d3934 + 0x32d383c),param_3,0);
    func_0x01438628(*(undefined4 *)(_UNK_032d3938 + 0x32d3848));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x839f,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_032d393c + 0x32d38a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032d3940 + 0x32d38c0));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029a6fa8(iVar3,param_3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(uint *)(iVar3 + 0x30);
    iVar3 = func_0x032d4ea8(iVar1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (uVar2 == *(uint *)(iVar3 + 0xc)) {
      return *(uint *)(iVar3 + 0xc);
    }
    pcVar11 = (char *)(_UNK_032dc74c + 0x32dc518);
    uStack_1c = param_3;
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032dc750 + 0x32dc52c));
      func_0x01438628(*(undefined4 *)(_UNK_032dc754 + 0x32dc538));
      func_0x01438628(*(undefined4 *)(_UNK_032dc758 + 0x32dc544));
      func_0x01438628(*(undefined4 *)(_UNK_032dc75c + 0x32dc550));
      func_0x01438628(*(undefined4 *)(_UNK_032dc760 + 0x32dc55c));
      func_0x01438628(*(undefined4 *)(_UNK_032dc764 + 0x32dc568));
      func_0x01438628(*(undefined4 *)(_UNK_032dc768 + 0x32dc574));
      *pcVar11 = '\x01';
    }
    iVar3 = func_0x02953fd4(0x8373,0);
    if (iVar3 == 0) {
      iVar3 = func_0x032d62b4(iVar1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x046c26fc(iVar3,param_3,**(undefined4 **)(_UNK_032dc76c + 0x32dc5f0));
      if (iVar3 == 0) {
        uVar10 = func_0x0515c4b0(&uStack_1c,0);
        uVar10 = func_0x04f6b198(**(undefined4 **)(_UNK_032dc770 + 0x32dc654),uVar10,
                                 **(undefined4 **)(_UNK_032dc774 + 0x32dc660),0);
        if (*(int *)(**(int **)(_UNK_032dc778 + 0x32dc674) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar2 = func_0x024ef174(uVar10,0);
      }
      else {
        iVar3 = func_0x032d62b4(iVar1);
        if (iVar3 == 0) {
          func_0x014388e4();
          iVar9 = func_0x03b70fac(0,param_3,**(undefined4 **)(_UNK_032dc780 + 0x32dc6a8));
          func_0x014388e4();
        }
        else {
          iVar9 = func_0x03b70fac(iVar3,param_3,**(undefined4 **)(_UNK_032dc77c + 0x32dc624));
        }
        func_0x03b70fe4(iVar3,param_3,iVar9 + -1,**(undefined4 **)(_UNK_032dc784 + 0x32dc6cc));
        iVar3 = func_0x032d62b4(iVar1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x03b70fac(iVar3,param_3,**(undefined4 **)(_UNK_032dc788 + 0x32dc6fc));
        if ((int)uVar2 < 1) {
          iVar1 = func_0x032d62b4(iVar1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = **(int **)(_UNK_032dc78c + 0x32dc73c);
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
    iVar3 = func_0x029540a4(0x8373,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0x839f,0);
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


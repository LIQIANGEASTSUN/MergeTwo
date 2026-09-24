
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03144a28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
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
  
  pcVar11 = (char *)(_UNK_03144b10 + 0x3144a48);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03144b14 + 0x3144a5c));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7a0a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x7a0a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar3 = func_0x02871f94(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  func_0x02bf1544(param_1,param_2,param_3,0);
  if (*(int *)(**(int **)(_UNK_03144b18 + 0x3144ad8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = FUN_0313e53c();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_03143bd8 + 0x3143ad0);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03143bdc + 0x3143ae4));
    func_0x01438628(*(undefined4 *)(_UNK_03143be0 + 0x3143af0));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a02,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03143be4 + 0x3143b4c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03143be8 + 0x3143b68));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar1,param_3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = *(uint *)(iVar1 + 0x30);
    iVar1 = func_0x03146010(iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (uVar3 == *(uint *)(iVar1 + 0xc)) {
      return *(uint *)(iVar1 + 0xc);
    }
    pcVar11 = (char *)(_UNK_0314d418 + 0x314d1e4);
    uStack_1c = param_3;
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0314d41c + 0x314d1f8));
      func_0x01438628(*(undefined4 *)(_UNK_0314d420 + 0x314d204));
      func_0x01438628(*(undefined4 *)(_UNK_0314d424 + 0x314d210));
      func_0x01438628(*(undefined4 *)(_UNK_0314d428 + 0x314d21c));
      func_0x01438628(*(undefined4 *)(_UNK_0314d42c + 0x314d228));
      func_0x01438628(*(undefined4 *)(_UNK_0314d430 + 0x314d234));
      func_0x01438628(*(undefined4 *)(_UNK_0314d434 + 0x314d240));
      *pcVar11 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x79e2,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0314741c(iVar2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x046c26fc(iVar1,param_3,**(undefined4 **)(_UNK_0314d438 + 0x314d2bc));
      if (iVar1 == 0) {
        uVar10 = func_0x01524ffc(&uStack_1c,0);
        uVar10 = func_0x04f6b198(**(undefined4 **)(_UNK_0314d43c + 0x314d320),uVar10,
                                 **(undefined4 **)(_UNK_0314d440 + 0x314d32c),0);
        if (*(int *)(**(int **)(_UNK_0314d444 + 0x314d340) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar3 = func_0x024ef174(uVar10,0);
      }
      else {
        iVar1 = func_0x0314741c(iVar2);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar9 = func_0x03b70fac(0,param_3,**(undefined4 **)(_UNK_0314d44c + 0x314d374));
          func_0x014388e4();
        }
        else {
          iVar9 = func_0x03b70fac(iVar1,param_3,**(undefined4 **)(_UNK_0314d448 + 0x314d2f0));
        }
        func_0x03b70fe4(iVar1,param_3,iVar9 + -1,**(undefined4 **)(_UNK_0314d450 + 0x314d398));
        iVar1 = func_0x0314741c(iVar2);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x03b70fac(iVar1,param_3,**(undefined4 **)(_UNK_0314d454 + 0x314d3c8));
        if ((int)uVar3 < 1) {
          iVar2 = func_0x0314741c(iVar2);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar1 = **(int **)(_UNK_0314d458 + 0x314d408);
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
          func_0x03b70bb0(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x28));
          if (iVar2 == 0) {
            func_0x024f83d4();
          }
          iStack_34 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x30);
          if (*(int *)(iVar2 + 8) != 0) {
            piVar8 = *(int **)(iVar2 + 0x20);
            iStack_30 = iVar2;
            auStack_28[0] = param_3;
            if (piVar8 == (int *)0x0) {
              uVar3 = func_0x0515c4a8(auStack_28,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
            }
            else {
              iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x034a8ac8(iVar2);
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar2) {
                    puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
                    goto LAB_046c3ca0;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar2,1);
LAB_046c3ca0:
              uVar3 = (*(code *)*puVar4)(piVar8,param_3,puVar4[1]);
              iVar2 = iStack_30;
            }
            iVar1 = *(int *)(iVar2 + 8);
            iVar2 = iVar1;
            if (iVar1 == 0) {
              func_0x034a8a64();
              iVar2 = *(int *)(iStack_30 + 8);
              if (iVar2 == 0) {
                uVar14 = func_0x034a8a64();
                uStack_3c = 0x46c3f38;
                uStack_40 = 0;
                uStack_48 = uVar3;
                iStack_44 = iVar2;
                uVar3 = func_0x046c2c44((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
                if ((int)uVar3 < 0) {
                  uVar10 = 0;
                }
                else {
                  iVar2 = *(int *)((int)uVar14 + 0xc);
                  if (iVar2 == 0) {
                    func_0x034a8a64();
                  }
                  if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                    func_0x034a8c14();
                  }
                  uVar10 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
                }
                *extraout_r2 = uVar10;
                return ~uVar3 >> 0x1f;
              }
            }
            uStack_2c = uVar3 & 0x7fffffff;
            func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar1 + 0xc));
            if (*(uint *)(iVar2 + 0xc) <= extraout_r1) {
              func_0x034a8c14();
            }
            uVar3 = *(int *)(iVar2 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar3) {
              iVar2 = iStack_30;
              uVar13 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar5 = uVar3;
                iVar1 = *(int *)(iVar2 + 0xc);
                if (iVar1 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                  func_0x034a8c14();
                }
                uVar10 = auStack_28[0];
                iVar1 = iVar1 + uVar5 * 0x10;
                if (*(uint *)(iVar1 + 0x10) == uStack_2c) {
                  piVar8 = *(int **)(iVar2 + 0x20);
                  if (piVar8 == (int *)0x0) {
                    piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar10 = auStack_28[0];
                    uVar6 = *(undefined4 *)(iVar1 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64(0,uVar6);
                    }
                    iVar9 = (**(code **)(*piVar8 + 0x100))
                                      (piVar8,uVar6,uVar10,*(undefined4 *)(*piVar8 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar1 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64();
                    }
                    iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                      iVar2 = func_0x034a8ac8(iVar2);
                    }
                    iVar9 = *piVar8;
                    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar2) {
                          puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                          goto LAB_046c3e4c;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar2,0);
LAB_046c3e4c:
                    iVar9 = (*(code *)*puVar4)(piVar8,uVar6,uVar10,puVar4[1]);
                  }
                  iVar2 = iStack_30;
                  if (iVar9 != 0) {
                    if ((int)uVar13 < 0) {
                      iVar2 = *(int *)(iStack_30 + 8);
                      iVar9 = *(int *)(iVar1 + 0x14);
                      if (iVar2 == 0) {
                        func_0x034a8a64();
                      }
                      uVar3 = uStack_38;
                      if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                        func_0x034a8c14();
                      }
                      *(int *)(iVar2 + uVar3 * 4 + 0x10) = iVar9 + 1;
                    }
                    else {
                      iVar2 = *(int *)(iStack_30 + 0xc);
                      if (iVar2 == 0) {
                        func_0x034a8a64();
                      }
                      uVar10 = *(undefined4 *)(iVar1 + 0x14);
                      if (*(uint *)(iVar2 + 0xc) <= uVar13) {
                        func_0x034a8c14();
                      }
                      *(undefined4 *)(iVar2 + uVar13 * 0x10 + 0x14) = uVar10;
                    }
                    *(uint *)(iVar1 + 0x10) = 0xffffffff;
                    uVar10 = *(undefined4 *)(iStack_30 + 0x14);
                    *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
                    *(uint *)(iStack_30 + 0x14) = uVar5;
                    *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
                    *(undefined4 *)(iVar1 + 0x14) = uVar10;
                    return 1;
                  }
                }
                uVar3 = *(uint *)(iVar1 + 0x14);
                uVar13 = uVar5;
              } while (*(uint *)(iVar1 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
      }
      return uVar3;
    }
    iVar1 = func_0x029540a4(0x79e2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7a02,0);
    if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,iVar2,0);
  func_0x01523a2c(&uStack_38,param_3,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  uVar3 = func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6,0,0);
  return uVar3;
}


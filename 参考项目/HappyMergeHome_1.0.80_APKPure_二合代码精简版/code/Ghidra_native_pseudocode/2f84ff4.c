
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f94ff4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
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
  undefined4 auStack_28 [3];
  undefined4 uStack_1c;
  
  pcVar11 = (char *)(_UNK_02f95114 + 0x2f9500c);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f95118 + 0x2f95020));
    func_0x01438628(*(undefined4 *)(_UNK_02f9511c + 0x2f9502c));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6f6f,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02f95120 + 0x2f95088) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f95124 + 0x2f950a4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_029a6fa8(iVar2,param_2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = *(uint *)(iVar2 + 0x30);
    iVar2 = func_0x02f967a0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (uVar1 == *(uint *)(iVar2 + 0xc)) {
      return *(uint *)(iVar2 + 0xc);
    }
    pcVar11 = (char *)(_UNK_02f9daa4 + 0x2f9d870);
    uStack_1c = param_2;
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f9daa8 + 0x2f9d884));
      func_0x01438628(*(undefined4 *)(_UNK_02f9daac + 0x2f9d890));
      func_0x01438628(*(undefined4 *)(_UNK_02f9dab0 + 0x2f9d89c));
      func_0x01438628(*(undefined4 *)(_UNK_02f9dab4 + 0x2f9d8a8));
      func_0x01438628(*(undefined4 *)(_UNK_02f9dab8 + 0x2f9d8b4));
      func_0x01438628(*(undefined4 *)(_UNK_02f9dabc + 0x2f9d8c0));
      func_0x01438628(*(undefined4 *)(_UNK_02f9dac0 + 0x2f9d8cc));
      *pcVar11 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x6f57,0);
    if (iVar2 == 0) {
      iVar2 = func_0x02f97bac(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046c26fc(iVar2,param_2,**(undefined4 **)(_UNK_02f9dac4 + 0x2f9d948));
      if (iVar2 == 0) {
        uVar10 = func_0x01524ffc(&uStack_1c,0);
        uVar10 = func_0x04f6b198(**(undefined4 **)(_UNK_02f9dac8 + 0x2f9d9ac),uVar10,
                                 **(undefined4 **)(_UNK_02f9dacc + 0x2f9d9b8),0);
        if (*(int *)(**(int **)(_UNK_02f9dad0 + 0x2f9d9cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar1 = func_0x024ef174(uVar10,0);
      }
      else {
        iVar2 = func_0x02f97bac(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
          iVar9 = func_0x03b70fac(0,param_2,**(undefined4 **)(_UNK_02f9dad8 + 0x2f9da00));
          func_0x014388e4();
        }
        else {
          iVar9 = func_0x03b70fac(iVar2,param_2,**(undefined4 **)(_UNK_02f9dad4 + 0x2f9d97c));
        }
        func_0x03b70fe4(iVar2,param_2,iVar9 + -1,**(undefined4 **)(_UNK_02f9dadc + 0x2f9da24));
        iVar2 = func_0x02f97bac(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar1 = func_0x03b70fac(iVar2,param_2,**(undefined4 **)(_UNK_02f9dae0 + 0x2f9da54));
        if ((int)uVar1 < 1) {
          iVar2 = func_0x02f97bac(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar9 = **(int **)(_UNK_02f9dae4 + 0x2f9da94);
          pcVar11 = (char *)(_UNK_03b70f90 + 0x3b70e80);
          if (*pcVar11 == '\0') {
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f94 + 0x3b70e94));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f98 + 0x3b70ea0));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f9c + 0x3b70eac));
            *pcVar11 = '\x01';
          }
          iVar12 = **(int **)(_UNK_03b70fa0 + 0x3b70ec0);
          iVar3 = *(int *)(iVar12 + 0x1c);
          if (iVar3 == 0) {
            func_0x024f83f8(iVar12);
            iVar3 = *(int *)(iVar12 + 0x1c);
          }
          iVar3 = *(int *)(iVar3 + 8);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = func_0x024f83fc();
          }
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar3 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = func_0x024f83fc();
          }
          uVar10 = **(undefined4 **)(iVar3 + 0x5c);
          if (*(int *)(**(int **)(_UNK_03b70fa4 + 0x3b70f20) + 0x74) == 0) {
            func_0x024f83d8(**(int **)(_UNK_03b70fa4 + 0x3b70f20));
          }
          func_0x02679550(**(undefined4 **)(_UNK_03b70fa8 + 0x3b70f50),uVar10,0);
          func_0x03b70bb0(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x28));
          if (iVar2 == 0) {
            func_0x024f83d4();
          }
          iStack_34 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x30);
          if (*(int *)(iVar2 + 8) != 0) {
            piVar8 = *(int **)(iVar2 + 0x20);
            iStack_30 = iVar2;
            auStack_28[0] = param_2;
            if (piVar8 == (int *)0x0) {
              uVar1 = func_0x0515c4a8(auStack_28,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
            }
            else {
              iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x034a8ac8(iVar2);
              }
              iVar9 = *piVar8;
              uVar1 = (uint)*(ushort *)(iVar9 + 0xb6);
              if (uVar1 != 0) {
                piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar2) {
                    puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 200);
                    goto LAB_046c3ca0;
                  }
                  uVar1 = uVar1 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar1 != 0);
              }
              puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar2,1);
LAB_046c3ca0:
              uVar1 = (*(code *)*puVar4)(piVar8,param_2,puVar4[1]);
              iVar2 = iStack_30;
            }
            iVar9 = *(int *)(iVar2 + 8);
            iVar2 = iVar9;
            if (iVar9 == 0) {
              func_0x034a8a64();
              iVar2 = *(int *)(iStack_30 + 8);
              if (iVar2 == 0) {
                uVar14 = func_0x034a8a64();
                uStack_3c = 0x46c3f38;
                uStack_40 = 0;
                uStack_48 = uVar1;
                iStack_44 = iVar2;
                uVar1 = func_0x046c2c44((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
                if ((int)uVar1 < 0) {
                  uVar10 = 0;
                }
                else {
                  iVar2 = *(int *)((int)uVar14 + 0xc);
                  if (iVar2 == 0) {
                    func_0x034a8a64();
                  }
                  if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                    func_0x034a8c14();
                  }
                  uVar10 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
                }
                *extraout_r2 = uVar10;
                return ~uVar1 >> 0x1f;
              }
            }
            uStack_2c = uVar1 & 0x7fffffff;
            func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar9 + 0xc));
            if (*(uint *)(iVar2 + 0xc) <= extraout_r1) {
              func_0x034a8c14();
            }
            uVar1 = *(int *)(iVar2 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar1) {
              iVar2 = iStack_30;
              uVar13 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar5 = uVar1;
                iVar9 = *(int *)(iVar2 + 0xc);
                if (iVar9 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar9 + 0xc) <= uVar5) {
                  func_0x034a8c14();
                }
                uVar10 = auStack_28[0];
                iVar9 = iVar9 + uVar5 * 0x10;
                if (*(uint *)(iVar9 + 0x10) == uStack_2c) {
                  piVar8 = *(int **)(iVar2 + 0x20);
                  if (piVar8 == (int *)0x0) {
                    piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar10 = auStack_28[0];
                    uVar6 = *(undefined4 *)(iVar9 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64(0,uVar6);
                    }
                    iVar3 = (**(code **)(*piVar8 + 0x100))
                                      (piVar8,uVar6,uVar10,*(undefined4 *)(*piVar8 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar9 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64();
                    }
                    iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                      iVar2 = func_0x034a8ac8(iVar2);
                    }
                    iVar3 = *piVar8;
                    uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar1 != 0) {
                      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar2) {
                          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                          goto LAB_046c3e4c;
                        }
                        uVar1 = uVar1 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar1 != 0);
                    }
                    puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar2,0);
LAB_046c3e4c:
                    iVar3 = (*(code *)*puVar4)(piVar8,uVar6,uVar10,puVar4[1]);
                  }
                  iVar2 = iStack_30;
                  if (iVar3 != 0) {
                    if ((int)uVar13 < 0) {
                      iVar2 = *(int *)(iStack_30 + 8);
                      iVar3 = *(int *)(iVar9 + 0x14);
                      if (iVar2 == 0) {
                        func_0x034a8a64();
                      }
                      uVar1 = uStack_38;
                      if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                        func_0x034a8c14();
                      }
                      *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar3 + 1;
                    }
                    else {
                      iVar2 = *(int *)(iStack_30 + 0xc);
                      if (iVar2 == 0) {
                        func_0x034a8a64();
                      }
                      uVar10 = *(undefined4 *)(iVar9 + 0x14);
                      if (*(uint *)(iVar2 + 0xc) <= uVar13) {
                        func_0x034a8c14();
                      }
                      *(undefined4 *)(iVar2 + uVar13 * 0x10 + 0x14) = uVar10;
                    }
                    *(uint *)(iVar9 + 0x10) = 0xffffffff;
                    uVar10 = *(undefined4 *)(iStack_30 + 0x14);
                    *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
                    *(uint *)(iStack_30 + 0x14) = uVar5;
                    *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
                    *(undefined4 *)(iVar9 + 0x14) = uVar10;
                    return 1;
                  }
                }
                uVar1 = *(uint *)(iVar9 + 0x14);
                uVar13 = uVar5;
              } while (*(uint *)(iVar9 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
      }
      return uVar1;
    }
    iVar2 = func_0x029540a4(0x6f57,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x6f6f,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  auStack_28[0] = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  uStack_2c = iStack_44;
  auStack_28[0] = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  uVar1 = func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6,0,0);
  return uVar1;
}


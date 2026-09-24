
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032a78bc(undefined4 param_1,undefined4 param_2)

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
  undefined4 unaff_r4;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = func_0x02953fd4(0x8277,0);
  if (iVar2 == 0) {
    pcVar11 = (char *)(_UNK_032ae254 + 0x32adf34);
    uStack_1c = param_2;
    uStack_18 = unaff_r4;
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032ae258 + 0x32adf48));
      func_0x01438628(*(undefined4 *)(_UNK_032ae25c + 0x32adf54));
      func_0x01438628(*(undefined4 *)(_UNK_032ae260 + 0x32adf60));
      func_0x01438628(*(undefined4 *)(_UNK_032ae264 + 0x32adf6c));
      func_0x01438628(*(undefined4 *)(_UNK_032ae268 + 0x32adf78));
      func_0x01438628(*(undefined4 *)(_UNK_032ae26c + 0x32adf84));
      func_0x01438628(*(undefined4 *)(_UNK_032ae270 + 0x32adf90));
      func_0x01438628(*(undefined4 *)(_UNK_032ae274 + 0x32adf9c));
      func_0x01438628(*(undefined4 *)(_UNK_032ae278 + 0x32adfa8));
      func_0x01438628(*(undefined4 *)(_UNK_032ae27c + 0x32adfb4));
      *pcVar11 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x8271,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_032ae280 + 0x32ae014) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032ae284 + 0x32ae030));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x029a6fa8(iVar2,param_2,0);
      if (iVar2 != 0) {
        iVar9 = func_0x032a8694(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar9 + 0x10) != 0) {
          iVar9 = func_0x032a8694(param_1);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          uVar10 = *(undefined4 *)(iVar2 + 0x30);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x04cd2d7c(iVar9,uVar10,**(undefined4 **)(_UNK_032ae288 + 0x32ae0c0));
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      iVar2 = func_0x032a8e58(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046c26fc(iVar2,param_2,**(undefined4 **)(_UNK_032ae28c + 0x32ae0f8));
      if (iVar2 == 0) {
        uVar10 = func_0x0515c4b0(&uStack_1c,0);
        uVar10 = func_0x04f6b198(**(undefined4 **)(_UNK_032ae290 + 0x32ae15c),uVar10,
                                 **(undefined4 **)(_UNK_032ae294 + 0x32ae168),0);
        if (*(int *)(**(int **)(_UNK_032ae298 + 0x32ae17c) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar1 = func_0x024ef174(uVar10,0);
      }
      else {
        iVar2 = func_0x032a8e58(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
          iVar9 = func_0x03b70fac(0,param_2,**(undefined4 **)(_UNK_032ae2a0 + 0x32ae1b0));
          func_0x014388e4();
        }
        else {
          iVar9 = func_0x03b70fac(iVar2,param_2,**(undefined4 **)(_UNK_032ae29c + 0x32ae12c));
        }
        func_0x03b70fe4(iVar2,param_2,iVar9 + -1,**(undefined4 **)(_UNK_032ae2a4 + 0x32ae1d4));
        iVar2 = func_0x032a8e58(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar1 = func_0x03b70fac(iVar2,param_2,**(undefined4 **)(_UNK_032ae2a8 + 0x32ae204));
        if ((int)uVar1 < 1) {
          iVar2 = func_0x032a8e58(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar9 = **(int **)(_UNK_032ae2ac + 0x32ae244);
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
          uStack_24 = uStack_18;
          if (*(int *)(iVar2 + 8) != 0) {
            piVar8 = *(int **)(iVar2 + 0x20);
            iStack_30 = iVar2;
            uStack_28 = param_2;
            if (piVar8 == (int *)0x0) {
              uVar1 = func_0x0515c4a8(&uStack_28,
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
                uVar10 = uStack_28;
                iVar9 = iVar9 + uVar5 * 0x10;
                if (*(uint *)(iVar9 + 0x10) == uStack_2c) {
                  piVar8 = *(int **)(iVar2 + 0x20);
                  if (piVar8 == (int *)0x0) {
                    piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar10 = uStack_28;
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
    iVar2 = func_0x029540a4(0x8271,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x8277,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  uStack_2c = iStack_44;
  uStack_28 = uStack_40;
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


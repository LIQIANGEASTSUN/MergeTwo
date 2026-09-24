
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0167b7b8(undefined4 param_1,undefined4 param_2)

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
  char *pcVar10;
  undefined4 uVar11;
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
  
  pcVar10 = (char *)(_UNK_0167b8d8 + 0x167b7d0);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167b8dc + 0x167b7e4));
    func_0x01438628(*(undefined4 *)(_UNK_0167b8e0 + 0x167b7f0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8786,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0167b8e4 + 0x167b84c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167b8e8 + 0x167b868));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar1,param_2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(uint *)(iVar1 + 0x30);
    iVar1 = func_0x0167cf64(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (uVar2 == *(uint *)(iVar1 + 0xc)) {
      return *(uint *)(iVar1 + 0xc);
    }
    pcVar10 = (char *)(_UNK_01684264 + 0x1684030);
    uStack_1c = param_2;
    if (*pcVar10 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01684268 + 0x1684044));
      func_0x01438628(*(undefined4 *)(_UNK_0168426c + 0x1684050));
      func_0x01438628(*(undefined4 *)(_UNK_01684270 + 0x168405c));
      func_0x01438628(*(undefined4 *)(_UNK_01684274 + 0x1684068));
      func_0x01438628(*(undefined4 *)(_UNK_01684278 + 0x1684074));
      func_0x01438628(*(undefined4 *)(_UNK_0168427c + 0x1684080));
      func_0x01438628(*(undefined4 *)(_UNK_01684280 + 0x168408c));
      *pcVar10 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x876e,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0167e370(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0540(iVar1,param_2,**(undefined4 **)(_UNK_01684284 + 0x1684108));
      if (iVar1 == 0) {
        uVar11 = func_0x01524ffc(&uStack_1c,0);
        uVar11 = func_0x024eee28(**(undefined4 **)(_UNK_01684288 + 0x168416c),uVar11,
                                 **(undefined4 **)(_UNK_0168428c + 0x1684178),0);
        if (*(int *)(**(int **)(_UNK_01684290 + 0x168418c) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar2 = func_0x024ef174(uVar11,0);
      }
      else {
        iVar1 = func_0x0167e370(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar9 = func_0x024f05d4(0,param_2,**(undefined4 **)(_UNK_01684298 + 0x16841c0));
          func_0x014388e4();
        }
        else {
          iVar9 = func_0x024f05d4(iVar1,param_2,**(undefined4 **)(_UNK_01684294 + 0x168413c));
        }
        func_0x024f10d4(iVar1,param_2,iVar9 + -1,**(undefined4 **)(_UNK_0168429c + 0x16841e4));
        iVar1 = func_0x0167e370(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f05d4(iVar1,param_2,**(undefined4 **)(_UNK_016842a0 + 0x1684214));
        if ((int)uVar2 < 1) {
          iVar1 = func_0x0167e370(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar9 = **(int **)(_UNK_016842a4 + 0x1684254);
          pcVar10 = (char *)(_UNK_03b70f90 + 0x3b70e80);
          if (*pcVar10 == '\0') {
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f94 + 0x3b70e94));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f98 + 0x3b70ea0));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b70f9c + 0x3b70eac));
            *pcVar10 = '\x01';
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
          uVar11 = **(undefined4 **)(iVar3 + 0x5c);
          if (*(int *)(**(int **)(_UNK_03b70fa4 + 0x3b70f20) + 0x74) == 0) {
            func_0x024f83d8(**(int **)(_UNK_03b70fa4 + 0x3b70f20));
          }
          func_0x02679550(**(undefined4 **)(_UNK_03b70fa8 + 0x3b70f50),uVar11,0);
          func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x28));
          if (iVar1 == 0) {
            func_0x024f83d4();
          }
          iStack_34 = *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x30);
          if (*(int *)(iVar1 + 8) != 0) {
            piVar8 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            auStack_28[0] = param_2;
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
              iVar9 = *piVar8;
              uVar2 = (uint)*(ushort *)(iVar9 + 0xb6);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 200);
                    goto LAB_046c3ca0;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar2 != 0);
              }
              puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar1,1);
LAB_046c3ca0:
              uVar2 = (*(code *)*puVar4)(piVar8,param_2,puVar4[1]);
              iVar1 = iStack_30;
            }
            iVar9 = *(int *)(iVar1 + 8);
            iVar1 = iVar9;
            if (iVar9 == 0) {
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
                  uVar11 = 0;
                }
                else {
                  iVar1 = *(int *)((int)uVar14 + 0xc);
                  if (iVar1 == 0) {
                    func_0x034a8a64();
                  }
                  if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    func_0x034a8c14();
                  }
                  uVar11 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
                }
                *extraout_r2 = uVar11;
                return ~uVar2 >> 0x1f;
              }
            }
            uStack_2c = uVar2 & 0x7fffffff;
            func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar9 + 0xc));
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
                iVar9 = *(int *)(iVar1 + 0xc);
                if (iVar9 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar9 + 0xc) <= uVar5) {
                  func_0x034a8c14();
                }
                uVar11 = auStack_28[0];
                iVar9 = iVar9 + uVar5 * 0x10;
                if (*(uint *)(iVar9 + 0x10) == uStack_2c) {
                  piVar8 = *(int **)(iVar1 + 0x20);
                  if (piVar8 == (int *)0x0) {
                    piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar11 = auStack_28[0];
                    uVar6 = *(undefined4 *)(iVar9 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64(0,uVar6);
                    }
                    iVar3 = (**(code **)(*piVar8 + 0x100))
                                      (piVar8,uVar6,uVar11,*(undefined4 *)(*piVar8 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar9 + 0x18);
                    if (piVar8 == (int *)0x0) {
                      func_0x034a8a64();
                    }
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
                          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                          goto LAB_046c3e4c;
                        }
                        uVar2 = uVar2 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar2 != 0);
                    }
                    puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar1,0);
LAB_046c3e4c:
                    iVar3 = (*(code *)*puVar4)(piVar8,uVar6,uVar11,puVar4[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar3 != 0) {
                    if ((int)uVar13 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar3 = *(int *)(iVar9 + 0x14);
                      if (iVar1 == 0) {
                        func_0x034a8a64();
                      }
                      uVar2 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x034a8c14();
                      }
                      *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar3 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x034a8a64();
                      }
                      uVar11 = *(undefined4 *)(iVar9 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar13) {
                        func_0x034a8c14();
                      }
                      *(undefined4 *)(iVar1 + uVar13 * 0x10 + 0x14) = uVar11;
                    }
                    *(uint *)(iVar9 + 0x10) = 0xffffffff;
                    uVar11 = *(undefined4 *)(iStack_30 + 0x14);
                    *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
                    *(uint *)(iStack_30 + 0x14) = uVar5;
                    *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
                    *(undefined4 *)(iVar9 + 0x14) = uVar11;
                    return 1;
                  }
                }
                uVar2 = *(uint *)(iVar9 + 0x14);
                uVar13 = uVar5;
              } while (*(uint *)(iVar9 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
      }
      return uVar2;
    }
    iVar1 = func_0x029540a4(0x876e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8786,0);
    if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  uVar2 = func_0x024f56d0(iVar9,uVar11,&uStack_38,uVar6,0,0);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02be2ab4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r1;
  int iVar8;
  undefined4 *extraout_r2;
  int *piVar9;
  int extraout_r3;
  int *piVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar12 = (char *)(_UNK_02be2bec + 0x2be2ad4);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be2bf0 + 0x2be2ae8));
    func_0x01438628(*(undefined4 *)(_UNK_02be2bf4 + 0x2be2af4));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d17,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x046c26fc(iVar1,param_2,**(undefined4 **)(_UNK_02be2bf8 + 0x2be2b88));
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = **(int **)(_UNK_02be2bfc + 0x2be2bd4);
      pcVar12 = (char *)(_UNK_03b70f90 + 0x3b70e80);
      if (*pcVar12 == '\0') {
        func_0x024f83cc(*(undefined4 *)(_UNK_03b70f94 + 0x3b70e94));
        func_0x024f83cc(*(undefined4 *)(_UNK_03b70f98 + 0x3b70ea0));
        func_0x024f83cc(*(undefined4 *)(_UNK_03b70f9c + 0x3b70eac));
        *pcVar12 = '\x01';
      }
      iVar13 = **(int **)(_UNK_03b70fa0 + 0x3b70ec0);
      iVar3 = *(int *)(iVar13 + 0x1c);
      if (iVar3 == 0) {
        func_0x024f83f8(iVar13);
        iVar3 = *(int *)(iVar13 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x024f83fc();
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar3 = *(int *)(*(int *)(iVar13 + 0x1c) + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x024f83fc();
      }
      uVar14 = **(undefined4 **)(iVar3 + 0x5c);
      if (*(int *)(**(int **)(_UNK_03b70fa4 + 0x3b70f20) + 0x74) == 0) {
        func_0x024f83d8(**(int **)(_UNK_03b70fa4 + 0x3b70f20));
      }
      func_0x02679550(**(undefined4 **)(_UNK_03b70fa8 + 0x3b70f50),uVar14,0);
      func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x28));
      if (iVar1 == 0) {
        func_0x024f83d4();
      }
      iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x30);
      if (*(int *)(iVar1 + 8) != 0) {
        piVar10 = *(int **)(iVar1 + 0x20);
        auStack_28[0] = param_2;
        if (piVar10 == (int *)0x0) {
          uVar2 = func_0x0515c4a8(auStack_28,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0xc4));
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = func_0x034a8ac8(iVar3);
          }
          iVar13 = *piVar10;
          uVar2 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if (piVar9[-1] == iVar3) {
                puVar4 = (undefined4 *)(iVar13 + *piVar9 * 8 + 200);
                goto LAB_046c3ca0;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined4 *)func_0x034a8a54(piVar10,iVar3,1);
LAB_046c3ca0:
          uVar2 = (*(code *)*puVar4)(piVar10,param_2,puVar4[1]);
        }
        iVar13 = *(int *)(iVar1 + 8);
        iVar3 = iVar13;
        if (iVar13 == 0) {
          func_0x034a8a64();
          iVar3 = *(int *)(iVar1 + 8);
          if (iVar3 == 0) {
            uVar16 = func_0x034a8a64();
            uVar2 = func_0x046c2c44((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
            if ((int)uVar2 < 0) {
              uVar14 = 0;
            }
            else {
              iVar1 = *(int *)((int)uVar16 + 0xc);
              if (iVar1 == 0) {
                func_0x034a8a64();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                func_0x034a8c14();
              }
              uVar14 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
            }
            *extraout_r2 = uVar14;
            return ~uVar2 >> 0x1f;
          }
        }
        func_0x034a8cc4(uVar2 & 0x7fffffff,*(undefined4 *)(iVar13 + 0xc));
        if (*(uint *)(iVar3 + 0xc) <= extraout_r1) {
          func_0x034a8c14();
        }
        uVar5 = *(int *)(iVar3 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar5) {
          uVar15 = 0xffffffff;
          do {
            uVar6 = uVar5;
            iVar3 = *(int *)(iVar1 + 0xc);
            if (iVar3 == 0) {
              func_0x034a8a64();
            }
            if (*(uint *)(iVar3 + 0xc) <= uVar6) {
              func_0x034a8c14();
            }
            uVar14 = auStack_28[0];
            iVar3 = iVar3 + uVar6 * 0x10;
            if (*(uint *)(iVar3 + 0x10) == (uVar2 & 0x7fffffff)) {
              piVar10 = *(int **)(iVar1 + 0x20);
              if (piVar10 == (int *)0x0) {
                piVar10 = (int *)func_0x035277c4(*(undefined4 *)
                                                  (*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0xc));
                uVar14 = auStack_28[0];
                uVar11 = *(undefined4 *)(iVar3 + 0x18);
                if (piVar10 == (int *)0x0) {
                  func_0x034a8a64(0,uVar11);
                }
                iVar13 = (**(code **)(*piVar10 + 0x100))
                                   (piVar10,uVar11,uVar14,*(undefined4 *)(*piVar10 + 0x104));
              }
              else {
                uVar11 = *(undefined4 *)(iVar3 + 0x18);
                if (piVar10 == (int *)0x0) {
                  func_0x034a8a64();
                }
                iVar13 = *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
                  iVar13 = func_0x034a8ac8(iVar13);
                }
                iVar7 = *piVar10;
                uVar5 = (uint)*(ushort *)(iVar7 + 0xb6);
                if (uVar5 != 0) {
                  piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                  do {
                    if (piVar9[-1] == iVar13) {
                      puVar4 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0xc0);
                      goto LAB_046c3e4c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar9 = piVar9 + 2;
                  } while (uVar5 != 0);
                }
                puVar4 = (undefined4 *)func_0x034a8a54(piVar10,iVar13,0);
LAB_046c3e4c:
                iVar13 = (*(code *)*puVar4)(piVar10,uVar11,uVar14,puVar4[1]);
              }
              if (iVar13 != 0) {
                if ((int)uVar15 < 0) {
                  iVar8 = *(int *)(iVar1 + 8);
                  iVar13 = *(int *)(iVar3 + 0x14);
                  if (iVar8 == 0) {
                    func_0x034a8a64();
                  }
                  if (*(uint *)(iVar8 + 0xc) <= extraout_r1) {
                    func_0x034a8c14();
                  }
                  *(int *)(iVar8 + extraout_r1 * 4 + 0x10) = iVar13 + 1;
                }
                else {
                  iVar8 = *(int *)(iVar1 + 0xc);
                  if (iVar8 == 0) {
                    func_0x034a8a64();
                  }
                  uVar14 = *(undefined4 *)(iVar3 + 0x14);
                  if (*(uint *)(iVar8 + 0xc) <= uVar15) {
                    func_0x034a8c14();
                  }
                  *(undefined4 *)(iVar8 + uVar15 * 0x10 + 0x14) = uVar14;
                }
                *(uint *)(iVar3 + 0x10) = 0xffffffff;
                uVar14 = *(undefined4 *)(iVar1 + 0x14);
                *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
                *(uint *)(iVar1 + 0x14) = uVar6;
                *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
                *(undefined4 *)(iVar3 + 0x14) = uVar14;
                return 1;
              }
            }
            uVar5 = *(uint *)(iVar3 + 0x14);
            uVar15 = uVar6;
          } while (*(uint *)(iVar3 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d17,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x028cf098(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}


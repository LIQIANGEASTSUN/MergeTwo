
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c5a470(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar5;
  int *piVar6;
  int extraout_r3;
  undefined4 unaff_r4;
  int iVar7;
  int iVar8;
  undefined4 unaff_r5;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  int *piStack_48;
  uint uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar9 = (char *)(_UNK_02c5a5c0 + 0x2c5a484);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5a5c4 + 0x2c5a498));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a5c8 + 0x2c5a4a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a5cc + 0x2c5a4b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a5d0 + 0x2c5a4bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a5d4 + 0x2c5a4c8));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f74,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5f74,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_30 = (int *)0x0;
    uStack_20 = 0;
    func_0x024f56c0(&piStack_48,0,0);
    piStack_30 = piStack_48;
    iStack_2c = uStack_44;
    uStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&piStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&piStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar11 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    uVar1 = func_0x024f56d0(iVar7,uVar11,&piStack_30,uVar5,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02c5a5d8 + 0x2c5a520) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c5a5dc + 0x2c5a53c));
  piVar12 = *(int **)(_UNK_02c5a5e0 + 0x2c5a550);
  iVar7 = *piVar12;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar12;
  }
  piVar12 = *(int **)(*(int *)(iVar7 + 0x5c) + 0x28);
  uVar11 = func_0x014388d4(**(undefined4 **)(_UNK_02c5a5e4 + 0x2c5a574));
  func_0x038ec9e8(uVar11,param_1,**(undefined4 **)(_UNK_02c5a5e8 + 0x2c5a594),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_02990188 + 0x298ffbc);
  uStack_20 = unaff_r4;
  uStack_1c = unaff_r5;
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0299018c + 0x298ffd0),piVar12,uVar11,0);
    func_0x01438628(*(undefined4 *)(_UNK_02990190 + 0x298ffdc));
    func_0x01438628(*(undefined4 *)(_UNK_02990194 + 0x298ffe8));
    func_0x01438628(*(undefined4 *)(_UNK_02990198 + 0x298fff4));
    func_0x01438628(*(undefined4 *)(_UNK_0299019c + 0x2990000));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x02953fd4(0x235c,0);
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar3 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x04753c80(iVar7,piVar12,**(undefined4 **)(_UNK_029901a0 + 0x2990078));
    uVar1 = 0;
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar3 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      puVar13 = *(undefined4 **)(_UNK_029901a4 + 0x29900ac);
      uVar5 = func_0x0475399c(iVar7,piVar12,*puVar13);
      iVar8 = 0;
      iVar2 = func_0x014e9618(uVar5,uVar11,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != 0) {
        uVar11 = **(undefined4 **)(_UNK_029901a8 + 0x29900e4);
        iVar8 = func_0x014387a8(iVar2,uVar11);
        if (iVar8 == 0) {
          func_0x01438ca8(iVar2,uVar11);
          iVar8 = 0;
        }
      }
      func_0x04753a0c(iVar7,piVar12,iVar8,**(undefined4 **)(_UNK_029901ac + 0x2990120));
      iVar7 = *(int *)(iVar3 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar1 = func_0x0475399c(iVar7,piVar12,*puVar13);
      if (uVar1 == 0) {
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uStack_24 = uStack_20;
        iStack_2c = **(int **)(_UNK_029901b0 + 0x2990178);
        uStack_20 = uStack_1c;
        if (piVar12 == (int *)0x0) {
          func_0x05174af8(5,0);
        }
        if (*(int *)(iVar3 + 8) != 0) {
          piVar10 = *(int **)(iVar3 + 0x20);
          if (piVar10 == (int *)0x0) {
            if (piVar12 == (int *)0x0) {
              func_0x034a8a64();
            }
            uVar1 = (**(code **)(*piVar12 + 0xd0))(piVar12,*(undefined4 *)(*piVar12 + 0xd4));
          }
          else {
            iVar7 = *(int *)(*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x034a8ac8(iVar7);
            }
            iVar2 = *piVar10;
            uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar6[-1] == iVar7) {
                  puVar13 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
                  goto LAB_04755384;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar1 != 0);
            }
            puVar13 = (undefined4 *)func_0x034a8a54(piVar10,iVar7,1);
LAB_04755384:
            uVar1 = (*(code *)*puVar13)(piVar10,piVar12,puVar13[1]);
          }
          iVar2 = *(int *)(iVar3 + 8);
          iVar7 = iVar2;
          if (iVar2 == 0) {
            func_0x034a8a64();
            iVar7 = *(int *)(iVar3 + 8);
            if (iVar7 == 0) {
              uVar15 = func_0x034a8a64();
              uStack_3c = 0x475561c;
              piStack_48 = piVar12;
              uStack_44 = uVar1;
              iStack_40 = iVar7;
              uVar1 = func_0x04754248((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
              if ((int)uVar1 < 0) {
                *extraout_r2 = 0;
              }
              else {
                iVar3 = *(int *)((int)uVar15 + 0xc);
                if (iVar3 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar3 + 0xc) <= uVar1) {
                  func_0x034a8c14();
                }
                *extraout_r2 = *(undefined4 *)(iVar3 + uVar1 * 0x10 + 0x1c);
                func_0x034a8ab8(extraout_r2);
              }
              return ~uVar1 >> 0x1f;
            }
          }
          uStack_28 = uVar1 & 0x7fffffff;
          func_0x034a8cc4(uStack_28,*(undefined4 *)(iVar2 + 0xc));
          if (*(uint *)(iVar7 + 0xc) <= extraout_r1) {
            func_0x034a8c14();
          }
          uVar1 = *(int *)(iVar7 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar1) {
            uVar14 = 0xffffffff;
            uStack_38 = extraout_r1;
            iStack_34 = iVar3;
            piStack_30 = piVar12;
            do {
              uVar4 = uVar1;
              iVar7 = *(int *)(iVar3 + 0xc);
              if (iVar7 == 0) {
                func_0x034a8a64();
              }
              if (*(uint *)(iVar7 + 0xc) <= uVar4) {
                func_0x034a8c14();
              }
              iVar7 = iVar7 + uVar4 * 0x10;
              if (*(uint *)(iVar7 + 0x10) == uStack_28) {
                piVar12 = *(int **)(iVar3 + 0x20);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)func_0x034a8d60(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) +
                                                    0xc));
                  uVar11 = *(undefined4 *)(iVar7 + 0x18);
                  if (piVar12 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar2 = (**(code **)(*piVar12 + 0x100))
                                    (piVar12,uVar11,piStack_30,*(undefined4 *)(*piVar12 + 0x104));
                  iVar3 = iStack_34;
                }
                else {
                  uVar11 = *(undefined4 *)(iVar7 + 0x18);
                  if (piVar12 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar2 = *(int *)(*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                    iVar2 = func_0x034a8ac8(iVar2);
                  }
                  iVar8 = *piVar12;
                  uVar1 = (uint)*(ushort *)(iVar8 + 0xb6);
                  if (uVar1 != 0) {
                    piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar2) {
                        puVar13 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
                        goto LAB_04755528;
                      }
                      uVar1 = uVar1 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar1 != 0);
                  }
                  puVar13 = (undefined4 *)func_0x034a8a54(piVar12,iVar2,0);
LAB_04755528:
                  iVar2 = (*(code *)*puVar13)(piVar12,uVar11,piStack_30,puVar13[1]);
                }
                if (iVar2 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar2 = *(int *)(iVar3 + 8);
                    iVar8 = *(int *)(iVar7 + 0x14);
                    if (iVar2 == 0) {
                      func_0x034a8a64();
                    }
                    uVar1 = uStack_38;
                    if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                      func_0x034a8c14();
                    }
                    *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar8 + 1;
                  }
                  else {
                    iVar2 = *(int *)(iVar3 + 0xc);
                    if (iVar2 == 0) {
                      func_0x034a8a64();
                    }
                    uVar11 = *(undefined4 *)(iVar7 + 0x14);
                    if (*(uint *)(iVar2 + 0xc) <= uVar14) {
                      func_0x034a8c14();
                    }
                    *(undefined4 *)(iVar2 + uVar14 * 0x10 + 0x14) = uVar11;
                  }
                  uVar11 = *(undefined4 *)(iVar3 + 0x14);
                  *(undefined4 *)(iVar7 + 0x18) = 0;
                  *(undefined4 *)(iVar7 + 0x1c) = 0;
                  iVar2 = *(int *)(iVar3 + 0x18);
                  iVar8 = *(int *)(iVar3 + 0x1c);
                  *(uint *)(iVar7 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar7 + 0x14) = uVar11;
                  *(uint *)(iVar3 + 0x14) = uVar4;
                  *(int *)(iVar3 + 0x18) = iVar2 + 1;
                  *(int *)(iVar3 + 0x1c) = iVar8 + 1;
                  return 1;
                }
              }
              uVar1 = *(uint *)(iVar7 + 0x14);
              uVar14 = uVar4;
            } while (*(uint *)(iVar7 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x235c,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    uVar1 = func_0x028691b4(iVar7,iVar3,piVar12,uVar11);
  }
  return uVar1;
}


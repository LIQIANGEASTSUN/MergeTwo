
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f1d148(undefined4 param_1)

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
  int iVar8;
  undefined4 unaff_r5;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar9 = (char *)(_UNK_02f1d274 + 0x2f1d15c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1d278 + 0x2f1d170));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d27c + 0x2f1d17c));
    func_0x01438628(*(undefined4 *)(_UNK_02f1d280 + 0x2f1d188));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x220b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x220b,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&piStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&piStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    uVar1 = func_0x024f56d0(iVar8,uVar12,&piStack_30,uVar6,0,0);
    return uVar1;
  }
  iVar2 = FUN_02f196e8(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_0268be6c(iVar2,0);
  if (*(int *)(**(int **)(_UNK_02f1d284 + 0x2f1d204) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02f1d288 + 0x2f1d220));
  piVar10 = *(int **)(_UNK_02f1d28c + 0x2f1d234);
  iVar8 = *piVar10;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
    iVar8 = *piVar10;
  }
  piVar10 = *(int **)(*(int *)(iVar8 + 0x5c) + 4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_02b76f74 + 0x2b76e9c);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b76f78 + 0x2b76eb0),0,piVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_02b76f7c + 0x2b76ebc));
    *pcVar9 = '\x01';
  }
  iVar8 = func_0x02953fd4(0x168,0);
  if (iVar8 == 0) {
    iVar2 = func_0x02b76afc(iVar2,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar8 = func_0x047505dc(iVar2,piVar10,**(undefined4 **)(_UNK_02b76f80 + 0x2b76f3c));
      uVar1 = 0;
      if (iVar8 != 0) {
        iVar8 = **(int **)(_UNK_02b76f84 + 0x2b76f5c);
        pcVar9 = (char *)(_UNK_03b7379c + 0x3b7368c);
        if (*pcVar9 == '\0') {
          func_0x024f83cc(*(undefined4 *)(_UNK_03b737a0 + 0x3b736a0));
          func_0x024f83cc(*(undefined4 *)(_UNK_03b737a4 + 0x3b736ac));
          func_0x024f83cc(*(undefined4 *)(_UNK_03b737a8 + 0x3b736b8));
          *pcVar9 = '\x01';
        }
        iVar13 = **(int **)(_UNK_03b737ac + 0x3b736cc);
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
        uVar12 = **(undefined4 **)(iVar3 + 0x5c);
        if (*(int *)(**(int **)(_UNK_03b737b0 + 0x3b7372c) + 0x74) == 0) {
          func_0x024f83d8(**(int **)(_UNK_03b737b0 + 0x3b7372c));
        }
        func_0x02679550(**(undefined4 **)(_UNK_03b737b4 + 0x3b7375c),uVar12,0);
        func_0x03b733a8(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x28));
        if (iVar2 == 0) {
          func_0x024f83d4();
        }
        iStack_2c = *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x30);
        uStack_20 = uStack_14;
        uStack_24 = uStack_18;
        if (piVar10 == (int *)0x0) {
          func_0x05174af8(5,0);
        }
        if (*(int *)(iVar2 + 8) != 0) {
          piVar11 = *(int **)(iVar2 + 0x20);
          if (piVar11 == (int *)0x0) {
            if (piVar10 == (int *)0x0) {
              func_0x034a8a64();
            }
            uVar1 = (**(code **)(*piVar10 + 0xd0))(piVar10,*(undefined4 *)(*piVar10 + 0xd4));
          }
          else {
            iVar8 = *(int *)(*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
              iVar8 = func_0x034a8ac8(iVar8);
            }
            iVar3 = *piVar11;
            uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar1 != 0) {
              piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar8) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 200);
                  goto LAB_04751cdc;
                }
                uVar1 = uVar1 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined4 *)func_0x034a8a54(piVar11,iVar8,1);
LAB_04751cdc:
            uVar1 = (*(code *)*puVar4)(piVar11,piVar10,puVar4[1]);
          }
          iVar3 = *(int *)(iVar2 + 8);
          iVar8 = iVar3;
          if (iVar3 == 0) {
            func_0x034a8a64();
            iVar8 = *(int *)(iVar2 + 8);
            if (iVar8 == 0) {
              uVar15 = func_0x034a8a64();
              uStack_3c = 0x4751f78;
              piStack_48 = piVar10;
              uStack_44 = uVar1;
              iStack_40 = iVar8;
              uVar1 = func_0x04750b68((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
              if ((int)uVar1 < 0) {
                extraout_r2[1] = 0;
                *extraout_r2 = 0;
              }
              else {
                iVar2 = *(int *)((int)uVar15 + 0xc);
                if (iVar2 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                  func_0x034a8c14();
                }
                iVar2 = iVar2 + uVar1 * 0x18;
                uVar12 = *(undefined4 *)(iVar2 + 0x24);
                *extraout_r2 = *(undefined4 *)(iVar2 + 0x20);
                extraout_r2[1] = uVar12;
              }
              return ~uVar1 >> 0x1f;
            }
          }
          uStack_28 = uVar1 & 0x7fffffff;
          func_0x034a8cc4(uStack_28,*(undefined4 *)(iVar3 + 0xc));
          if (*(uint *)(iVar8 + 0xc) <= extraout_r1) {
            func_0x034a8c14();
          }
          uVar1 = *(int *)(iVar8 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar1) {
            uVar14 = 0xffffffff;
            uStack_38 = extraout_r1;
            iStack_34 = iVar2;
            piStack_30 = piVar10;
            do {
              uVar5 = uVar1;
              iVar8 = *(int *)(iVar2 + 0xc);
              if (iVar8 == 0) {
                func_0x034a8a64();
              }
              if (*(uint *)(iVar8 + 0xc) <= uVar5) {
                func_0x034a8c14();
              }
              iVar8 = iVar8 + uVar5 * 0x18;
              if (*(uint *)(iVar8 + 0x10) == uStack_28) {
                piVar10 = *(int **)(iVar2 + 0x20);
                if (piVar10 == (int *)0x0) {
                  piVar10 = (int *)func_0x034a8d60(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) +
                                                    0xc));
                  uVar12 = *(undefined4 *)(iVar8 + 0x18);
                  if (piVar10 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar3 = (**(code **)(*piVar10 + 0x100))
                                    (piVar10,uVar12,piStack_30,*(undefined4 *)(*piVar10 + 0x104));
                  iVar2 = iStack_34;
                }
                else {
                  uVar12 = *(undefined4 *)(iVar8 + 0x18);
                  if (piVar10 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar3 = *(int *)(*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                    iVar3 = func_0x034a8ac8(iVar3);
                  }
                  iVar13 = *piVar10;
                  uVar1 = (uint)*(ushort *)(iVar13 + 0xb6);
                  if (uVar1 != 0) {
                    piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == iVar3) {
                        puVar4 = (undefined4 *)(iVar13 + *piVar11 * 8 + 0xc0);
                        goto LAB_04751e84;
                      }
                      uVar1 = uVar1 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar1 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x034a8a54(piVar10,iVar3,0);
LAB_04751e84:
                  iVar3 = (*(code *)*puVar4)(piVar10,uVar12,piStack_30,puVar4[1]);
                }
                if (iVar3 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar3 = *(int *)(iVar2 + 8);
                    iVar13 = *(int *)(iVar8 + 0x14);
                    if (iVar3 == 0) {
                      func_0x034a8a64();
                    }
                    uVar1 = uStack_38;
                    if (*(uint *)(iVar3 + 0xc) <= uStack_38) {
                      func_0x034a8c14();
                    }
                    *(int *)(iVar3 + uVar1 * 4 + 0x10) = iVar13 + 1;
                  }
                  else {
                    iVar3 = *(int *)(iVar2 + 0xc);
                    if (iVar3 == 0) {
                      func_0x034a8a64();
                    }
                    uVar12 = *(undefined4 *)(iVar8 + 0x14);
                    if (*(uint *)(iVar3 + 0xc) <= uVar14) {
                      func_0x034a8c14();
                    }
                    *(undefined4 *)(iVar3 + uVar14 * 0x18 + 0x14) = uVar12;
                  }
                  uVar12 = *(undefined4 *)(iVar2 + 0x14);
                  *(undefined4 *)(iVar8 + 0x18) = 0;
                  iVar3 = *(int *)(iVar2 + 0x18);
                  iVar13 = *(int *)(iVar2 + 0x1c);
                  *(uint *)(iVar8 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar8 + 0x14) = uVar12;
                  *(uint *)(iVar2 + 0x14) = uVar5;
                  *(int *)(iVar2 + 0x18) = iVar3 + 1;
                  *(int *)(iVar2 + 0x1c) = iVar13 + 1;
                  return 1;
                }
              }
              uVar1 = *(uint *)(iVar8 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar8 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
    }
  }
  else {
    iVar8 = func_0x029540a4(0x168,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar1 = func_0x0286de94(iVar8,iVar2,0,piVar10);
  }
  return uVar1;
}


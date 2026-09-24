
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c87ae8(int param_1)

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
  undefined4 unaff_r4;
  int *piVar8;
  undefined4 unaff_r5;
  char *pcVar9;
  int iVar10;
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
  
  pcVar9 = (char *)(_UNK_01c87bc0 + 0x1c87afc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c87bc4 + 0x1c87b10));
    func_0x01438628(*(undefined4 *)(_UNK_01c87bc8 + 0x1c87b1c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xadc,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&piStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&piStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    uVar2 = func_0x024f56d0(iVar10,uVar12,&piStack_30,uVar6,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01c87bcc + 0x1c87b74) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01c87bd0 + 0x1c87b90));
  piVar8 = *(int **)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_02b76f74 + 0x2b76e9c);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b76f78 + 0x2b76eb0),0,piVar8,0);
    func_0x01438628(*(undefined4 *)(_UNK_02b76f7c + 0x2b76ebc));
    *pcVar9 = '\x01';
  }
  iVar10 = func_0x02953fd4(0x168,0);
  if (iVar10 == 0) {
    iVar1 = func_0x02b76afc(iVar1,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar10 = func_0x047505dc(iVar1,piVar8,**(undefined4 **)(_UNK_02b76f80 + 0x2b76f3c));
      uVar2 = 0;
      if (iVar10 != 0) {
        iVar10 = **(int **)(_UNK_02b76f84 + 0x2b76f5c);
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
        func_0x03b733a8(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x28));
        if (iVar1 == 0) {
          func_0x024f83d4();
        }
        iStack_2c = *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x30);
        uStack_20 = uStack_14;
        uStack_24 = uStack_18;
        if (piVar8 == (int *)0x0) {
          func_0x05174af8(5,0);
        }
        if (*(int *)(iVar1 + 8) != 0) {
          piVar11 = *(int **)(iVar1 + 0x20);
          if (piVar11 == (int *)0x0) {
            if (piVar8 == (int *)0x0) {
              func_0x034a8a64();
            }
            uVar2 = (**(code **)(*piVar8 + 0xd0))(piVar8,*(undefined4 *)(*piVar8 + 0xd4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x034a8ac8(iVar10);
            }
            iVar3 = *piVar11;
            uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar10) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 200);
                  goto LAB_04751cdc;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined4 *)func_0x034a8a54(piVar11,iVar10,1);
LAB_04751cdc:
            uVar2 = (*(code *)*puVar4)(piVar11,piVar8,puVar4[1]);
          }
          iVar3 = *(int *)(iVar1 + 8);
          iVar10 = iVar3;
          if (iVar3 == 0) {
            func_0x034a8a64();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x034a8a64();
              uStack_3c = 0x4751f78;
              piStack_48 = piVar8;
              uStack_44 = uVar2;
              iStack_40 = iVar10;
              uVar2 = func_0x04750b68((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                extraout_r2[1] = 0;
                *extraout_r2 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x034a8a64();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x034a8c14();
                }
                iVar1 = iVar1 + uVar2 * 0x18;
                uVar12 = *(undefined4 *)(iVar1 + 0x24);
                *extraout_r2 = *(undefined4 *)(iVar1 + 0x20);
                extraout_r2[1] = uVar12;
              }
              return ~uVar2 >> 0x1f;
            }
          }
          uStack_28 = uVar2 & 0x7fffffff;
          func_0x034a8cc4(uStack_28,*(undefined4 *)(iVar3 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1) {
            func_0x034a8c14();
          }
          uVar2 = *(int *)(iVar10 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar2) {
            uVar14 = 0xffffffff;
            uStack_38 = extraout_r1;
            iStack_34 = iVar1;
            piStack_30 = piVar8;
            do {
              uVar5 = uVar2;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x034a8a64();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x034a8c14();
              }
              iVar10 = iVar10 + uVar5 * 0x18;
              if (*(uint *)(iVar10 + 0x10) == uStack_28) {
                piVar8 = *(int **)(iVar1 + 0x20);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)func_0x034a8d60(*(undefined4 *)
                                                   (*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) +
                                                   0xc));
                  uVar12 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar3 = (**(code **)(*piVar8 + 0x100))
                                    (piVar8,uVar12,piStack_30,*(undefined4 *)(*piVar8 + 0x104));
                  iVar1 = iStack_34;
                }
                else {
                  uVar12 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x034a8a64();
                  }
                  iVar3 = *(int *)(*(int *)(*(int *)(iStack_2c + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                    iVar3 = func_0x034a8ac8(iVar3);
                  }
                  iVar13 = *piVar8;
                  uVar2 = (uint)*(ushort *)(iVar13 + 0xb6);
                  if (uVar2 != 0) {
                    piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == iVar3) {
                        puVar4 = (undefined4 *)(iVar13 + *piVar11 * 8 + 0xc0);
                        goto LAB_04751e84;
                      }
                      uVar2 = uVar2 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar2 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar3,0);
LAB_04751e84:
                  iVar3 = (*(code *)*puVar4)(piVar8,uVar12,piStack_30,puVar4[1]);
                }
                if (iVar3 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar3 = *(int *)(iVar1 + 8);
                    iVar13 = *(int *)(iVar10 + 0x14);
                    if (iVar3 == 0) {
                      func_0x034a8a64();
                    }
                    uVar2 = uStack_38;
                    if (*(uint *)(iVar3 + 0xc) <= uStack_38) {
                      func_0x034a8c14();
                    }
                    *(int *)(iVar3 + uVar2 * 4 + 0x10) = iVar13 + 1;
                  }
                  else {
                    iVar3 = *(int *)(iVar1 + 0xc);
                    if (iVar3 == 0) {
                      func_0x034a8a64();
                    }
                    uVar12 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar3 + 0xc) <= uVar14) {
                      func_0x034a8c14();
                    }
                    *(undefined4 *)(iVar3 + uVar14 * 0x18 + 0x14) = uVar12;
                  }
                  uVar12 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x18) = 0;
                  iVar3 = *(int *)(iVar1 + 0x18);
                  iVar13 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar10 + 0x14) = uVar12;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar3 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar13 + 1;
                  return 1;
                }
              }
              uVar2 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
    }
  }
  else {
    iVar10 = func_0x029540a4(0x168,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x0286de94(iVar10,iVar1,0,piVar8);
  }
  return uVar2;
}


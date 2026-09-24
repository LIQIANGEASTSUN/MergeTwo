
/* WARNING: Possible PIC construction at 0x03312828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0331282c) */
/* WARNING: Removing unreachable block (ram,0x03312840) */
/* WARNING: Removing unreachable block (ram,0x03312844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_033126a8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  uint uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
  pcVar11 = (char *)(_UNK_03312858 + 0x33126bc);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0331285c + 0x33126d0));
    func_0x01438628(*(undefined4 *)(_UNK_03312860 + 0x33126dc));
    func_0x01438628(*(undefined4 *)(_UNK_03312864 + 0x33126e8));
    func_0x01438628(*(undefined4 *)(_UNK_03312868 + 0x33126f4));
    func_0x01438628(*(undefined4 *)(_UNK_0331286c + 0x3312700));
    func_0x01438628(*(undefined4 *)(_UNK_03312870 + 0x331270c));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x8535,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x8535,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_30 = (undefined4 *)0x0;
    func_0x024f56c0(&puStack_48,0,0);
    puStack_30 = puStack_48;
    puStack_2c = (undefined4 *)iStack_44;
    puStack_28 = (undefined4 *)iStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&puStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&puStack_30,param_1,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar13 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar1 = func_0x024f56d0(iVar10,uVar13,&puStack_30,uVar7);
    return uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24);
  if (uVar1 != 0) {
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_03312874 + 0x3312770) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03312878 + 0x331278c));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0331287c + 0x33127ac));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar3 + 0x270) != 0) {
    func_0x03b73ab8(*(int *)(iVar3 + 0x270),**(undefined4 **)(_UNK_03312880 + 0x33127dc));
  }
  if (*(int *)(**(int **)(_UNK_03312884 + 0x33127ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_03312888 + 0x3312808);
  puVar4 = (undefined4 *)func_0x04e4a028(*puVar12);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_02be82b0 + 0x2be8170);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be82b4 + 0x2be8184),0x16,0);
    func_0x01438628(*(undefined4 *)(_UNK_02be82b8 + 0x2be8190));
    func_0x01438628(*(undefined4 *)(_UNK_02be82bc + 0x2be819c));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c0 + 0x2be81a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c4 + 0x2be81b4));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x3f0a,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x3f0a,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_48 = (undefined4 *)0x0;
    uStack_38 = 0;
    puStack_30 = puVar4;
    puStack_2c = puVar12;
    func_0x024f56c0(&uStack_60,0,0x16,0);
    puStack_48 = (undefined4 *)uStack_60;
    iStack_44 = uStack_5c;
    iStack_40 = uStack_58;
    uStack_3c = iStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&puStack_48,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&puStack_48,puVar4,0);
    func_0x01523a2c(&puStack_48,0x16,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar13 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar7 = 3;
    if (iVar3 == 0) {
      uVar7 = 2;
    }
    uVar1 = func_0x024f56d0(iVar10,uVar13,&puStack_48,uVar7,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02be82c8 + 0x2be8210) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be82cc + 0x2be822c));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02be82d0 + 0x2be824c));
  uVar1 = uVar2;
  if (uVar2 == 0) {
    uVar1 = func_0x014388e4();
  }
  iVar3 = *(int *)(uVar2 + 8);
  if (iVar3 == 0) {
    return uVar1;
  }
  iVar10 = func_0x046ccb14(iVar3,0x16,**(undefined4 **)(_UNK_02be82d4 + 0x2be8280));
  if (iVar10 == 0) {
    return 0;
  }
  iVar10 = **(int **)(_UNK_02be82d8 + 0x2be82a0);
  pcVar11 = (char *)(_UNK_03b7212c + 0x3b7201c);
  puStack_28 = puVar4;
  if (*pcVar11 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72130 + 0x3b72030));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72134 + 0x3b7203c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72138 + 0x3b72048));
    *pcVar11 = '\x01';
  }
  iVar14 = **(int **)(_UNK_03b7213c + 0x3b7205c);
  iVar5 = *(int *)(iVar14 + 0x1c);
  if (iVar5 == 0) {
    func_0x024f83f8(iVar14);
    iVar5 = *(int *)(iVar14 + 0x1c);
  }
  iVar5 = *(int *)(iVar5 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x024f83fc();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar5 = *(int *)(*(int *)(iVar14 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x024f83fc();
  }
  uVar13 = **(undefined4 **)(iVar5 + 0x5c);
  if (*(int *)(**(int **)(_UNK_03b72140 + 0x3b720bc) + 0x74) == 0) {
    func_0x024f83d8(**(int **)(_UNK_03b72140 + 0x3b720bc));
  }
  func_0x02679550(**(undefined4 **)(_UNK_03b72144 + 0x3b720ec),uVar13,0);
  func_0x03b71d4c(iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x28));
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  iStack_44 = *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x30);
  puStack_34 = puStack_28;
  uStack_38 = 0x16;
  if (*(int *)(iVar3 + 8) != 0) {
    piVar9 = *(int **)(iVar3 + 0x20);
    iStack_40 = iVar3;
    puStack_30 = puVar12;
    if (piVar9 == (int *)0x0) {
      uVar1 = func_0x0515c4a8(&uStack_38,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x034a8ac8(iVar3);
      }
      iVar10 = *piVar9;
      uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar3) {
            puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_046ce140;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined4 *)func_0x034a8a54(piVar9,iVar3,1);
LAB_046ce140:
      uVar1 = (*(code *)*puVar4)(piVar9,0x16,puVar4[1]);
      iVar3 = iStack_40;
    }
    iVar10 = *(int *)(iVar3 + 8);
    iVar3 = iVar10;
    if (iVar10 == 0) {
      func_0x034a8a64();
      iVar3 = *(int *)(iStack_40 + 8);
      if (iVar3 == 0) {
        uVar15 = func_0x034a8a64();
        uStack_4c = 0x46ce3e4;
        uStack_50 = 0;
        uStack_58 = uVar1;
        iStack_54 = iVar3;
        uVar1 = func_0x046cd0dc((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
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
    uStack_3c = uVar1 & 0x7fffffff;
    func_0x034a8cc4(uStack_3c,*(undefined4 *)(iVar10 + 0xc));
    if (*(undefined4 **)(iVar3 + 0xc) <= extraout_r1) {
      func_0x034a8c14();
    }
    uVar1 = *(int *)(iVar3 + (int)extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar1) {
      iVar3 = iStack_40;
      uVar2 = 0xffffffff;
      puStack_48 = extraout_r1;
      do {
        uVar6 = uVar1;
        iVar10 = *(int *)(iVar3 + 0xc);
        if (iVar10 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar6) {
          func_0x034a8c14();
        }
        uVar13 = uStack_38;
        iVar10 = iVar10 + uVar6 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_3c) {
          piVar9 = *(int **)(iVar3 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x035277c4(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_38;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x034a8a64(0,uVar7);
            }
            iVar5 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar3 = *(int *)(*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
              iVar3 = func_0x034a8ac8(iVar3);
            }
            iVar5 = *piVar9;
            uVar1 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar1 != 0) {
              piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar3) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                  goto LAB_046ce2ec;
                }
                uVar1 = uVar1 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined4 *)func_0x034a8a54(piVar9,iVar3,0);
LAB_046ce2ec:
            iVar5 = (*(code *)*puVar4)(piVar9,uVar7,uVar13,puVar4[1]);
          }
          iVar3 = iStack_40;
          if (iVar5 != 0) {
            if ((int)uVar2 < 0) {
              iVar3 = *(int *)(iStack_40 + 8);
              iVar5 = *(int *)(iVar10 + 0x14);
              if (iVar3 == 0) {
                func_0x034a8a64();
              }
              puVar4 = puStack_48;
              if (*(undefined4 **)(iVar3 + 0xc) <= puStack_48) {
                func_0x034a8c14();
              }
              *(int *)(iVar3 + (int)puVar4 * 4 + 0x10) = iVar5 + 1;
            }
            else {
              iVar3 = *(int *)(iStack_40 + 0xc);
              if (iVar3 == 0) {
                func_0x034a8a64();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                func_0x034a8c14();
              }
              *(undefined4 *)(iVar3 + uVar2 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_40 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar3 = *(int *)(iStack_40 + 0x18);
            iVar5 = *(int *)(iStack_40 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_40 + 0x14) = uVar6;
            *(int *)(iStack_40 + 0x18) = iVar3 + 1;
            *(int *)(iStack_40 + 0x1c) = iVar5 + 1;
            return 1;
          }
        }
        uVar1 = *(uint *)(iVar10 + 0x14);
        uVar2 = uVar6;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}


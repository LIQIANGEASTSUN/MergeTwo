
/* WARNING: Possible PIC construction at 0x018776dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x018776e0) */
/* WARNING: Removing unreachable block (ram,0x018776f4) */
/* WARNING: Removing unreachable block (ram,0x018776f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0187755c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
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
  
  pcVar10 = (char *)(_UNK_0187770c + 0x1877570);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01877710 + 0x1877584));
    func_0x01438628(*(undefined4 *)(_UNK_01877714 + 0x1877590));
    func_0x01438628(*(undefined4 *)(_UNK_01877718 + 0x187759c));
    func_0x01438628(*(undefined4 *)(_UNK_0187771c + 0x18775a8));
    func_0x01438628(*(undefined4 *)(_UNK_01877720 + 0x18775b4));
    func_0x01438628(*(undefined4 *)(_UNK_01877724 + 0x18775c0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x93c5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x93c5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_30 = (undefined4 *)0x0;
    func_0x024f56c0(&puStack_48,0,0);
    puStack_30 = puStack_48;
    puStack_2c = (undefined4 *)iStack_44;
    puStack_28 = (undefined4 *)iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_30,param_1,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar3 = func_0x024f56d0(iVar12,uVar13,&puStack_30,uVar7);
    return uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24);
  if (uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_01877728 + 0x1877624) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187772c + 0x1877640));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01877730 + 0x1877660));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x2f0) != 0) {
    func_0x024f04d0(*(int *)(iVar1 + 0x2f0),**(undefined4 **)(_UNK_01877734 + 0x1877690));
  }
  if (*(int *)(**(int **)(_UNK_01877738 + 0x18776a0) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar11 = *(undefined4 **)(_UNK_0187773c + 0x18776bc);
  puVar2 = (undefined4 *)func_0x014e9518(*puVar11);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x014388e4();
  }
  pcVar10 = (char *)(_UNK_02be82b0 + 0x2be8170);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be82b4 + 0x2be8184),0x1c,0);
    func_0x01438628(*(undefined4 *)(_UNK_02be82b8 + 0x2be8190));
    func_0x01438628(*(undefined4 *)(_UNK_02be82bc + 0x2be819c));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c0 + 0x2be81a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c4 + 0x2be81b4));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3f0a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3f0a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_48 = (undefined4 *)0x0;
    uStack_38 = 0;
    puStack_30 = puVar2;
    puStack_2c = puVar11;
    func_0x024f56c0(&uStack_60,0,0x1c,0);
    puStack_48 = (undefined4 *)uStack_60;
    iStack_44 = uStack_5c;
    iStack_40 = uStack_58;
    uStack_3c = iStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_48,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_48,puVar2,0);
    func_0x01523a2c(&puStack_48,0x1c,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    uVar3 = func_0x024f56d0(iVar12,uVar13,&puStack_48,uVar7,0,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_02be82c8 + 0x2be8210) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be82cc + 0x2be822c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02be82d0 + 0x2be824c));
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = func_0x014388e4();
  }
  iVar1 = *(int *)(uVar4 + 8);
  if (iVar1 == 0) {
    return uVar3;
  }
  iVar12 = func_0x046ccb14(iVar1,0x1c,**(undefined4 **)(_UNK_02be82d4 + 0x2be8280));
  if (iVar12 == 0) {
    return 0;
  }
  iVar12 = **(int **)(_UNK_02be82d8 + 0x2be82a0);
  pcVar10 = (char *)(_UNK_03b7212c + 0x3b7201c);
  puStack_28 = puVar2;
  if (*pcVar10 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72130 + 0x3b72030));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72134 + 0x3b7203c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72138 + 0x3b72048));
    *pcVar10 = '\x01';
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
  func_0x03b71d4c(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x28));
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iStack_44 = *(int *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x30);
  puStack_34 = puStack_28;
  uStack_38 = 0x1c;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_40 = iVar1;
    puStack_30 = puVar11;
    if (piVar9 == (int *)0x0) {
      uVar3 = func_0x0515c4a8(&uStack_38,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x034a8ac8(iVar1);
      }
      iVar12 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar2 = (undefined4 *)(iVar12 + *piVar8 * 8 + 200);
            goto LAB_046ce140;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x034a8a54(piVar9,iVar1,1);
LAB_046ce140:
      uVar3 = (*(code *)*puVar2)(piVar9,0x1c,puVar2[1]);
      iVar1 = iStack_40;
    }
    iVar12 = *(int *)(iVar1 + 8);
    iVar1 = iVar12;
    if (iVar12 == 0) {
      func_0x034a8a64();
      iVar1 = *(int *)(iStack_40 + 8);
      if (iVar1 == 0) {
        uVar15 = func_0x034a8a64();
        uStack_4c = 0x46ce3e4;
        uStack_50 = 0;
        uStack_58 = uVar3;
        iStack_54 = iVar1;
        uVar3 = func_0x046cd0dc((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
        if ((int)uVar3 < 0) {
          *extraout_r2 = 0;
        }
        else {
          iVar1 = *(int *)((int)uVar15 + 0xc);
          if (iVar1 == 0) {
            func_0x034a8a64();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar3) {
            func_0x034a8c14();
          }
          *extraout_r2 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
          func_0x034a8ab8(extraout_r2);
        }
        return ~uVar3 >> 0x1f;
      }
    }
    uStack_3c = uVar3 & 0x7fffffff;
    func_0x034a8cc4(uStack_3c,*(undefined4 *)(iVar12 + 0xc));
    if (*(undefined4 **)(iVar1 + 0xc) <= extraout_r1) {
      func_0x034a8c14();
    }
    uVar3 = *(int *)(iVar1 + (int)extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar3) {
      iVar1 = iStack_40;
      uVar4 = 0xffffffff;
      puStack_48 = extraout_r1;
      do {
        uVar6 = uVar3;
        iVar12 = *(int *)(iVar1 + 0xc);
        if (iVar12 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar12 + 0xc) <= uVar6) {
          func_0x034a8c14();
        }
        uVar13 = uStack_38;
        iVar12 = iVar12 + uVar6 * 0x10;
        if (*(uint *)(iVar12 + 0x10) == uStack_3c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x035277c4(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_38;
            uVar7 = *(undefined4 *)(iVar12 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x034a8a64(0,uVar7);
            }
            iVar5 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar12 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_44 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x034a8ac8(iVar1);
            }
            iVar5 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar2 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                  goto LAB_046ce2ec;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)func_0x034a8a54(piVar9,iVar1,0);
LAB_046ce2ec:
            iVar5 = (*(code *)*puVar2)(piVar9,uVar7,uVar13,puVar2[1]);
          }
          iVar1 = iStack_40;
          if (iVar5 != 0) {
            if ((int)uVar4 < 0) {
              iVar1 = *(int *)(iStack_40 + 8);
              iVar5 = *(int *)(iVar12 + 0x14);
              if (iVar1 == 0) {
                func_0x034a8a64();
              }
              puVar2 = puStack_48;
              if (*(undefined4 **)(iVar1 + 0xc) <= puStack_48) {
                func_0x034a8c14();
              }
              *(int *)(iVar1 + (int)puVar2 * 4 + 0x10) = iVar5 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_40 + 0xc);
              if (iVar1 == 0) {
                func_0x034a8a64();
              }
              uVar13 = *(undefined4 *)(iVar12 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                func_0x034a8c14();
              }
              *(undefined4 *)(iVar1 + uVar4 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_40 + 0x14);
            *(undefined4 *)(iVar12 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_40 + 0x18);
            iVar5 = *(int *)(iStack_40 + 0x1c);
            *(uint *)(iVar12 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar12 + 0x14) = uVar13;
            *(uint *)(iStack_40 + 0x14) = uVar6;
            *(int *)(iStack_40 + 0x18) = iVar1 + 1;
            *(int *)(iStack_40 + 0x1c) = iVar5 + 1;
            return 1;
          }
        }
        uVar3 = *(uint *)(iVar12 + 0x14);
        uVar4 = uVar6;
      } while (*(uint *)(iVar12 + 0x14) < 0x80000000);
    }
  }
  return 0;
}


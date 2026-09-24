
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0300d97c(int param_1)

{
  uint uVar1;
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
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
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
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_18;
  
  pcVar11 = (char *)(_UNK_0300db04 + 0x300d990);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300db08 + 0x300d9a4));
    func_0x01438628(*(undefined4 *)(_UNK_0300db0c + 0x300d9b0));
    func_0x01438628(*(undefined4 *)(_UNK_0300db10 + 0x300d9bc));
    func_0x01438628(*(undefined4 *)(_UNK_0300db14 + 0x300d9c8));
    func_0x01438628(*(undefined4 *)(_UNK_0300db18 + 0x300d9d4));
    func_0x01438628(*(undefined4 *)(_UNK_0300db1c + 0x300d9e0));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x7287,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x7287,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar1 = func_0x024f56d0(iVar9,uVar12,&uStack_30,uVar6);
    return uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24);
  if (uVar1 != 0) {
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_0300db20 + 0x300da44) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0300db24 + 0x300da60));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0300db28 + 0x300da80));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar3 + 0x390) != 0) {
    func_0x03b73ab8(*(int *)(iVar3 + 0x390),**(undefined4 **)(_UNK_0300db2c + 0x300dab0));
  }
  if (*(int *)(**(int **)(_UNK_0300db30 + 0x300dac0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0300db34 + 0x300dadc));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)(_UNK_02be82b0 + 0x2be8170);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be82b4 + 0x2be8184),0x4a,0);
    func_0x01438628(*(undefined4 *)(_UNK_02be82b8 + 0x2be8190));
    func_0x01438628(*(undefined4 *)(_UNK_02be82bc + 0x2be819c));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c0 + 0x2be81a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c4 + 0x2be81b4));
    *pcVar11 = '\x01';
  }
  iVar9 = func_0x02953fd4(0x3f0a,0);
  if (iVar9 != 0) {
    iVar9 = func_0x029540a4(0x3f0a,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,0x4a,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar3,0);
    func_0x01523a2c(&uStack_38,0x4a,0);
    iVar10 = *(int *)(iVar9 + 8);
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    iVar3 = *(int *)(iVar9 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    uVar1 = func_0x024f56d0(iVar10,uVar12,&uStack_38,uVar6,0,0);
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
  uVar2 = *(uint *)(uVar2 + 8);
  if (uVar2 == 0) {
    return uVar1;
  }
  iVar3 = func_0x046ccb14(uVar2,0x4a,**(undefined4 **)(_UNK_02be82d4 + 0x2be8280));
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = **(int **)(_UNK_02be82d8 + 0x2be82a0);
  pcVar11 = (char *)(_UNK_03b7212c + 0x3b7201c);
  uStack_18 = unaff_r4;
  if (*pcVar11 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72130 + 0x3b72030));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72134 + 0x3b7203c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72138 + 0x3b72048));
    *pcVar11 = '\x01';
  }
  iVar10 = **(int **)(_UNK_03b7213c + 0x3b7205c);
  iVar9 = *(int *)(iVar10 + 0x1c);
  if (iVar9 == 0) {
    func_0x024f83f8(iVar10);
    iVar9 = *(int *)(iVar10 + 0x1c);
  }
  iVar9 = *(int *)(iVar9 + 8);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x024f83fc();
  }
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar9 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x024f83fc();
  }
  uVar12 = **(undefined4 **)(iVar9 + 0x5c);
  if (*(int *)(**(int **)(_UNK_03b72140 + 0x3b720bc) + 0x74) == 0) {
    func_0x024f83d8(**(int **)(_UNK_03b72140 + 0x3b720bc));
  }
  func_0x02679550(**(undefined4 **)(_UNK_03b72144 + 0x3b720ec),uVar12,0);
  func_0x03b71d4c(uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x28));
  if (uVar2 == 0) {
    func_0x024f83d4();
  }
  iStack_34 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x30);
  uStack_24 = uStack_18;
  uStack_28 = 0x4a;
  if (*(int *)(uVar2 + 8) != 0) {
    piVar8 = *(int **)(uVar2 + 0x20);
    uStack_30 = uVar2;
    if (piVar8 == (int *)0x0) {
      uVar1 = func_0x0515c4a8(&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x034a8ac8(iVar3);
      }
      iVar9 = *piVar8;
      uVar1 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar3) {
            puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 200);
            goto LAB_046ce140;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar3,1);
LAB_046ce140:
      uVar1 = (*(code *)*puVar4)(piVar8,0x4a,puVar4[1]);
      uVar2 = uStack_30;
    }
    iVar9 = *(int *)(uVar2 + 8);
    iVar3 = iVar9;
    if (iVar9 == 0) {
      func_0x034a8a64();
      iVar3 = *(int *)(uStack_30 + 8);
      if (iVar3 == 0) {
        uVar14 = func_0x034a8a64();
        uStack_3c = 0x46ce3e4;
        uStack_40 = 0;
        uStack_48 = uVar1;
        iStack_44 = iVar3;
        uVar1 = func_0x046cd0dc((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
        if ((int)uVar1 < 0) {
          *extraout_r2 = 0;
        }
        else {
          iVar3 = *(int *)((int)uVar14 + 0xc);
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
    uStack_2c = uVar1 & 0x7fffffff;
    func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar9 + 0xc));
    if (*(uint *)(iVar3 + 0xc) <= extraout_r1) {
      func_0x034a8c14();
    }
    uVar1 = *(int *)(iVar3 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar1) {
      uVar2 = uStack_30;
      uVar13 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar5 = uVar1;
        iVar3 = *(int *)(uVar2 + 0xc);
        if (iVar3 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar5) {
          func_0x034a8c14();
        }
        uVar12 = uStack_28;
        iVar3 = iVar3 + uVar5 * 0x10;
        if (*(uint *)(iVar3 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(uVar2 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar12 = uStack_28;
            uVar6 = *(undefined4 *)(iVar3 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x034a8a64(0,uVar6);
            }
            iVar9 = (**(code **)(*piVar8 + 0x100))
                              (piVar8,uVar6,uVar12,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar3 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar9 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x034a8ac8(iVar9);
            }
            iVar10 = *piVar8;
            uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar1 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar9) {
                  puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_046ce2ec;
                }
                uVar1 = uVar1 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar9,0);
LAB_046ce2ec:
            iVar9 = (*(code *)*puVar4)(piVar8,uVar6,uVar12,puVar4[1]);
          }
          uVar2 = uStack_30;
          if (iVar9 != 0) {
            if ((int)uVar13 < 0) {
              iVar9 = *(int *)(uStack_30 + 8);
              iVar10 = *(int *)(iVar3 + 0x14);
              if (iVar9 == 0) {
                func_0x034a8a64();
              }
              uVar1 = uStack_38;
              if (*(uint *)(iVar9 + 0xc) <= uStack_38) {
                func_0x034a8c14();
              }
              *(int *)(iVar9 + uVar1 * 4 + 0x10) = iVar10 + 1;
            }
            else {
              iVar9 = *(int *)(uStack_30 + 0xc);
              if (iVar9 == 0) {
                func_0x034a8a64();
              }
              uVar12 = *(undefined4 *)(iVar3 + 0x14);
              if (*(uint *)(iVar9 + 0xc) <= uVar13) {
                func_0x034a8c14();
              }
              *(undefined4 *)(iVar9 + uVar13 * 0x10 + 0x14) = uVar12;
            }
            uVar12 = *(undefined4 *)(uStack_30 + 0x14);
            *(undefined4 *)(iVar3 + 0x1c) = 0;
            iVar9 = *(int *)(uStack_30 + 0x18);
            iVar10 = *(int *)(uStack_30 + 0x1c);
            *(uint *)(iVar3 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x14) = uVar12;
            *(uint *)(uStack_30 + 0x14) = uVar5;
            *(int *)(uStack_30 + 0x18) = iVar9 + 1;
            *(int *)(uStack_30 + 0x1c) = iVar10 + 1;
            return 1;
          }
        }
        uVar1 = *(uint *)(iVar3 + 0x14);
        uVar13 = uVar5;
      } while (*(uint *)(iVar3 + 0x14) < 0x80000000);
    }
  }
  return 0;
}


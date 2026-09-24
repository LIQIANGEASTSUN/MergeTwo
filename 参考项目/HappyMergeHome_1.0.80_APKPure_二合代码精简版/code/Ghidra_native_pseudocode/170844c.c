
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0171844c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  undefined4 unaff_r4;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
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
  
  pcVar9 = (char *)(_UNK_017185d4 + 0x1718460);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017185d8 + 0x1718474));
    func_0x01438628(*(undefined4 *)(_UNK_017185dc + 0x1718480));
    func_0x01438628(*(undefined4 *)(_UNK_017185e0 + 0x171848c));
    func_0x01438628(*(undefined4 *)(_UNK_017185e4 + 0x1718498));
    func_0x01438628(*(undefined4 *)(_UNK_017185e8 + 0x17184a4));
    func_0x01438628(*(undefined4 *)(_UNK_017185ec + 0x17184b0));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8b82,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    uVar2 = func_0x024f56d0(iVar10,uVar12,&uStack_30,uVar6);
    return uVar2;
  }
  uVar2 = *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24);
  if (uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_017185f0 + 0x1718514) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017185f4 + 0x1718530));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017185f8 + 0x1718550));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x3a0) != 0) {
    func_0x024f04d0(*(int *)(iVar1 + 0x3a0),**(undefined4 **)(_UNK_017185fc + 0x1718580));
  }
  if (*(int *)(**(int **)(_UNK_01718600 + 0x1718590) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01718604 + 0x17185ac));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_02be82b0 + 0x2be8170);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be82b4 + 0x2be8184),0x54,0);
    func_0x01438628(*(undefined4 *)(_UNK_02be82b8 + 0x2be8190));
    func_0x01438628(*(undefined4 *)(_UNK_02be82bc + 0x2be819c));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c0 + 0x2be81a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c4 + 0x2be81b4));
    *pcVar9 = '\x01';
  }
  iVar10 = func_0x02953fd4(0x3f0a,0);
  if (iVar10 != 0) {
    iVar10 = func_0x029540a4(0x3f0a,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,0x54,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar1,0);
    func_0x01523a2c(&uStack_38,0x54,0);
    iVar11 = *(int *)(iVar10 + 8);
    uVar12 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = *(int *)(iVar10 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uVar2 = func_0x024f56d0(iVar11,uVar12,&uStack_38,uVar6,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_02be82c8 + 0x2be8210) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be82cc + 0x2be822c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02be82d0 + 0x2be824c));
  uVar2 = uVar3;
  if (uVar3 == 0) {
    uVar2 = func_0x014388e4();
  }
  uVar3 = *(uint *)(uVar3 + 8);
  if (uVar3 == 0) {
    return uVar2;
  }
  iVar1 = func_0x046ccb14(uVar3,0x54,**(undefined4 **)(_UNK_02be82d4 + 0x2be8280));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = **(int **)(_UNK_02be82d8 + 0x2be82a0);
  pcVar9 = (char *)(_UNK_03b7212c + 0x3b7201c);
  uStack_18 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72130 + 0x3b72030));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72134 + 0x3b7203c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72138 + 0x3b72048));
    *pcVar9 = '\x01';
  }
  iVar11 = **(int **)(_UNK_03b7213c + 0x3b7205c);
  iVar10 = *(int *)(iVar11 + 0x1c);
  if (iVar10 == 0) {
    func_0x024f83f8(iVar11);
    iVar10 = *(int *)(iVar11 + 0x1c);
  }
  iVar10 = *(int *)(iVar10 + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x024f83fc();
  }
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar10 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x024f83fc();
  }
  uVar12 = **(undefined4 **)(iVar10 + 0x5c);
  if (*(int *)(**(int **)(_UNK_03b72140 + 0x3b720bc) + 0x74) == 0) {
    func_0x024f83d8(**(int **)(_UNK_03b72140 + 0x3b720bc));
  }
  func_0x02679550(**(undefined4 **)(_UNK_03b72144 + 0x3b720ec),uVar12,0);
  func_0x03b71d4c(uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x28));
  if (uVar3 == 0) {
    func_0x024f83d4();
  }
  iStack_34 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x30);
  uStack_24 = uStack_18;
  uStack_28 = 0x54;
  if (*(int *)(uVar3 + 8) != 0) {
    piVar8 = *(int **)(uVar3 + 0x20);
    uStack_30 = uVar3;
    if (piVar8 == (int *)0x0) {
      uVar2 = func_0x0515c4a8(&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x034a8ac8(iVar1);
      }
      iVar10 = *piVar8;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
            goto LAB_046ce140;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar1,1);
LAB_046ce140:
      uVar2 = (*(code *)*puVar4)(piVar8,0x54,puVar4[1]);
      uVar3 = uStack_30;
    }
    iVar10 = *(int *)(uVar3 + 8);
    iVar1 = iVar10;
    if (iVar10 == 0) {
      func_0x034a8a64();
      iVar1 = *(int *)(uStack_30 + 8);
      if (iVar1 == 0) {
        uVar14 = func_0x034a8a64();
        uStack_3c = 0x46ce3e4;
        uStack_40 = 0;
        uStack_48 = uVar2;
        iStack_44 = iVar1;
        uVar2 = func_0x046cd0dc((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
        if ((int)uVar2 < 0) {
          *extraout_r2 = 0;
        }
        else {
          iVar1 = *(int *)((int)uVar14 + 0xc);
          if (iVar1 == 0) {
            func_0x034a8a64();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar2) {
            func_0x034a8c14();
          }
          *extraout_r2 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
          func_0x034a8ab8(extraout_r2);
        }
        return ~uVar2 >> 0x1f;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar10 + 0xc));
    if (*(uint *)(iVar1 + 0xc) <= extraout_r1) {
      func_0x034a8c14();
    }
    uVar2 = *(int *)(iVar1 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      uVar3 = uStack_30;
      uVar13 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar5 = uVar2;
        iVar1 = *(int *)(uVar3 + 0xc);
        if (iVar1 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar5) {
          func_0x034a8c14();
        }
        uVar12 = uStack_28;
        iVar1 = iVar1 + uVar5 * 0x10;
        if (*(uint *)(iVar1 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(uVar3 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x035277c4(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar12 = uStack_28;
            uVar6 = *(undefined4 *)(iVar1 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x034a8a64(0,uVar6);
            }
            iVar10 = (**(code **)(*piVar8 + 0x100))
                               (piVar8,uVar6,uVar12,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar1 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar10 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x034a8ac8(iVar10);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar10) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
                  goto LAB_046ce2ec;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined4 *)func_0x034a8a54(piVar8,iVar10,0);
LAB_046ce2ec:
            iVar10 = (*(code *)*puVar4)(piVar8,uVar6,uVar12,puVar4[1]);
          }
          uVar3 = uStack_30;
          if (iVar10 != 0) {
            if ((int)uVar13 < 0) {
              iVar10 = *(int *)(uStack_30 + 8);
              iVar11 = *(int *)(iVar1 + 0x14);
              if (iVar10 == 0) {
                func_0x034a8a64();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar10 + 0xc) <= uStack_38) {
                func_0x034a8c14();
              }
              *(int *)(iVar10 + uVar2 * 4 + 0x10) = iVar11 + 1;
            }
            else {
              iVar10 = *(int *)(uStack_30 + 0xc);
              if (iVar10 == 0) {
                func_0x034a8a64();
              }
              uVar12 = *(undefined4 *)(iVar1 + 0x14);
              if (*(uint *)(iVar10 + 0xc) <= uVar13) {
                func_0x034a8c14();
              }
              *(undefined4 *)(iVar10 + uVar13 * 0x10 + 0x14) = uVar12;
            }
            uVar12 = *(undefined4 *)(uStack_30 + 0x14);
            *(undefined4 *)(iVar1 + 0x1c) = 0;
            iVar10 = *(int *)(uStack_30 + 0x18);
            iVar11 = *(int *)(uStack_30 + 0x1c);
            *(uint *)(iVar1 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar1 + 0x14) = uVar12;
            *(uint *)(uStack_30 + 0x14) = uVar5;
            *(int *)(uStack_30 + 0x18) = iVar10 + 1;
            *(int *)(uStack_30 + 0x1c) = iVar11 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar1 + 0x14);
        uVar13 = uVar5;
      } while (*(uint *)(iVar1 + 0x14) < 0x80000000);
    }
  }
  return 0;
}


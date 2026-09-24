
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02be8158(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  undefined4 unaff_r4;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
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
  undefined4 uStack_18;
  
  pcVar12 = (char *)(_UNK_02be82b0 + 0x2be8170);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be82b4 + 0x2be8184));
    func_0x01438628(*(undefined4 *)(_UNK_02be82b8 + 0x2be8190));
    func_0x01438628(*(undefined4 *)(_UNK_02be82bc + 0x2be819c));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c0 + 0x2be81a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be82c4 + 0x2be81b4));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x3f0a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x3f0a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
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
    iVar10 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    uVar1 = func_0x024f56d0(iVar10,uVar11,&uStack_38,uVar7,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02be82c8 + 0x2be8210) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be82cc + 0x2be822c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_02be82d0 + 0x2be824c));
  uVar1 = uVar3;
  if (uVar3 == 0) {
    uVar1 = func_0x014388e4();
  }
  iVar2 = *(int *)(uVar3 + 8);
  if (iVar2 == 0) {
    return uVar1;
  }
  iVar10 = func_0x046ccb14(iVar2,param_2,**(undefined4 **)(_UNK_02be82d4 + 0x2be8280));
  if (iVar10 == 0) {
    return 0;
  }
  iVar10 = **(int **)(_UNK_02be82d8 + 0x2be82a0);
  pcVar12 = (char *)(_UNK_03b7212c + 0x3b7201c);
  uStack_18 = unaff_r4;
  if (*pcVar12 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72130 + 0x3b72030));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72134 + 0x3b7203c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b72138 + 0x3b72048));
    *pcVar12 = '\x01';
  }
  iVar13 = **(int **)(_UNK_03b7213c + 0x3b7205c);
  iVar4 = *(int *)(iVar13 + 0x1c);
  if (iVar4 == 0) {
    func_0x024f83f8(iVar13);
    iVar4 = *(int *)(iVar13 + 0x1c);
  }
  iVar4 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar4 = *(int *)(*(int *)(iVar13 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc();
  }
  uVar11 = **(undefined4 **)(iVar4 + 0x5c);
  if (*(int *)(**(int **)(_UNK_03b72140 + 0x3b720bc) + 0x74) == 0) {
    func_0x024f83d8(**(int **)(_UNK_03b72140 + 0x3b720bc));
  }
  func_0x02679550(**(undefined4 **)(_UNK_03b72144 + 0x3b720ec),uVar11,0);
  func_0x03b71d4c(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x28));
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  iStack_34 = *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x30);
  uStack_24 = uStack_18;
  if (*(int *)(iVar2 + 8) != 0) {
    piVar9 = *(int **)(iVar2 + 0x20);
    iStack_30 = iVar2;
    uStack_28 = param_2;
    if (piVar9 == (int *)0x0) {
      uVar1 = func_0x0515c4a8(&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x034a8ac8(iVar2);
      }
      iVar10 = *piVar9;
      uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar2) {
            puVar5 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_046ce140;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined4 *)func_0x034a8a54(piVar9,iVar2,1);
LAB_046ce140:
      uVar1 = (*(code *)*puVar5)(piVar9,param_2,puVar5[1]);
      iVar2 = iStack_30;
    }
    iVar10 = *(int *)(iVar2 + 8);
    iVar2 = iVar10;
    if (iVar10 == 0) {
      func_0x034a8a64();
      iVar2 = *(int *)(iStack_30 + 8);
      if (iVar2 == 0) {
        uVar14 = func_0x034a8a64();
        uStack_3c = 0x46ce3e4;
        uStack_40 = 0;
        uStack_48 = uVar1;
        iStack_44 = iVar2;
        uVar1 = func_0x046cd0dc((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x84));
        if ((int)uVar1 < 0) {
          *extraout_r2 = 0;
        }
        else {
          iVar2 = *(int *)((int)uVar14 + 0xc);
          if (iVar2 == 0) {
            func_0x034a8a64();
          }
          if (*(uint *)(iVar2 + 0xc) <= uVar1) {
            func_0x034a8c14();
          }
          *extraout_r2 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
          func_0x034a8ab8(extraout_r2);
        }
        return ~uVar1 >> 0x1f;
      }
    }
    uStack_2c = uVar1 & 0x7fffffff;
    func_0x034a8cc4(uStack_2c,*(undefined4 *)(iVar10 + 0xc));
    if (*(uint *)(iVar2 + 0xc) <= extraout_r1) {
      func_0x034a8c14();
    }
    uVar1 = *(int *)(iVar2 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar1) {
      iVar2 = iStack_30;
      uVar3 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar6 = uVar1;
        iVar10 = *(int *)(iVar2 + 0xc);
        if (iVar10 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar6) {
          func_0x034a8c14();
        }
        uVar11 = uStack_28;
        iVar10 = iVar10 + uVar6 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar2 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x035277c4(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar11 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x034a8a64(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar11,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x034a8a64();
            }
            iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x034a8ac8(iVar2);
            }
            iVar4 = *piVar9;
            uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar1 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_046ce2ec;
                }
                uVar1 = uVar1 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar1 != 0);
            }
            puVar5 = (undefined4 *)func_0x034a8a54(piVar9,iVar2,0);
LAB_046ce2ec:
            iVar4 = (*(code *)*puVar5)(piVar9,uVar7,uVar11,puVar5[1]);
          }
          iVar2 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar3 < 0) {
              iVar2 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar2 == 0) {
                func_0x034a8a64();
              }
              uVar1 = uStack_38;
              if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                func_0x034a8c14();
              }
              *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar2 = *(int *)(iStack_30 + 0xc);
              if (iVar2 == 0) {
                func_0x034a8a64();
              }
              uVar11 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                func_0x034a8c14();
              }
              *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x14) = uVar11;
            }
            uVar11 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar2 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar11;
            *(uint *)(iStack_30 + 0x14) = uVar6;
            *(int *)(iStack_30 + 0x18) = iVar2 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar1 = *(uint *)(iVar10 + 0x14);
        uVar3 = uVar6;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}


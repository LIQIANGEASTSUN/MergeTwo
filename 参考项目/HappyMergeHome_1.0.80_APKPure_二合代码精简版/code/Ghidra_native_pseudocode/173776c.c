
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0174776c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_017479ac + 0x1747780);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017479b0 + 0x1747794));
    func_0x01438628(*(undefined4 *)(_UNK_017479b4 + 0x17477a0));
    func_0x01438628(*(undefined4 *)(_UNK_017479b8 + 0x17477ac));
    func_0x01438628(*(undefined4 *)(_UNK_017479bc + 0x17477b8));
    func_0x01438628(*(undefined4 *)(_UNK_017479c0 + 0x17477c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(36000,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(36000,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x029f3fe4(param_1,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_017479c4 + 0x1747830) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x029f0e84(0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029f1214(iVar1,uVar6,0);
    if ((iVar1 != 0) && (uVar2 = func_0x0175022c(param_1,0), *(byte *)(param_1 + 0x51) != uVar2)) {
      iVar1 = **(int **)(**(int **)(_UNK_017479c8 + 0x174789c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_017479cc + 0x17478d0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017479d0 + 0x17478ec));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b0c7f8(iVar1,0);
        if (iVar1 != 0) {
          piVar7 = *(int **)(_UNK_017479d4 + 0x1747920);
          iVar1 = **(int **)(*piVar7 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b2f170(iVar1,0);
          if (iVar1 != 3) {
            iVar1 = **(int **)(*piVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02b2f170(iVar1,0);
            if (iVar1 != 4) {
              return;
            }
          }
          if (uVar2 == 0 && *(byte *)(param_1 + 0x51) != 0) {
            func_0x01752ef0(param_1);
          }
          else if ((~(uint)*(byte *)(param_1 + 0x51) & uVar2) != 0) {
            func_0x01752f48(param_1);
          }
          *(char *)(param_1 + 0x51) = (char)uVar2;
        }
      }
    }
  }
  return;
}


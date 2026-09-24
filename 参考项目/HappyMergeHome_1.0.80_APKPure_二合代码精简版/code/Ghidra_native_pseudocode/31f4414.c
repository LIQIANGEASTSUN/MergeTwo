
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03204414(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_03204654 + 0x3204428);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03204658 + 0x320443c));
    func_0x01438628(*(undefined4 *)(_UNK_0320465c + 0x3204448));
    func_0x01438628(*(undefined4 *)(_UNK_03204660 + 0x3204454));
    func_0x01438628(*(undefined4 *)(_UNK_03204664 + 0x3204460));
    func_0x01438628(*(undefined4 *)(_UNK_03204668 + 0x320446c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7e38,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x029f3fe4(param_1,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0320466c + 0x32044d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x029f0e84(0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029f1214(iVar1,uVar6,0);
    if ((iVar1 != 0) && (uVar2 = func_0x0320b9fc(param_1,0), *(byte *)(param_1 + 0x51) != uVar2)) {
      iVar1 = **(int **)(**(int **)(_UNK_03204670 + 0x3204544) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_03204674 + 0x3204578) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03204678 + 0x3204594));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b0c7f8(iVar1,0);
        if (iVar1 != 0) {
          piVar7 = *(int **)(_UNK_0320467c + 0x32045c8);
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
            func_0x0320e5d4(param_1);
          }
          else if ((~(uint)*(byte *)(param_1 + 0x51) & uVar2) != 0) {
            func_0x0320e62c(param_1);
          }
          *(char *)(param_1 + 0x51) = (char)uVar2;
        }
      }
    }
  }
  return;
}


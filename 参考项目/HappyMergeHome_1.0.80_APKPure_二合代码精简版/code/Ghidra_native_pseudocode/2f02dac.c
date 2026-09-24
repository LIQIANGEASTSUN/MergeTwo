
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f12dac(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02f12f38 + 0x2f12dc4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f12f3c + 0x2f12dd8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6ca8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6ca8,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_02f12f40 + 0x2f12e34);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = FUN_02e61f28(iVar1,0x3bf,0);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_02e62afc(iVar1,0x3bf,uVar5);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = FUN_02e61f28(iVar1,0x3c0,0);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_02e62afc(iVar1,0x3c0,uVar5);
  return;
}


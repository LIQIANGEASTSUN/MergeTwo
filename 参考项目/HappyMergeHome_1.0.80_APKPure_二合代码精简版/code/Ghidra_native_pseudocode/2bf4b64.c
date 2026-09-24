
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c04b64(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_20;
  
  pcVar6 = (char *)(_UNK_02c04cec + 0x2c04b80);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c04cf0 + 0x2c04b94));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d5c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d5c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  piVar7 = *(int **)(_UNK_02c04cf4 + 0x2c04bf4);
  iVar1 = **(int **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67c60(iVar1,0);
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = **(int **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67ce4(iVar1,0);
  if (iVar1 == param_2) {
    return 0;
  }
  iVar1 = FUN_02bfb1f0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_02bfb30c(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_02bfb30c(param_1);
      if ((iVar1 != 0) || (uVar2 = 1, *(char *)(param_1 + 0x84) == '\0')) goto LAB_02c04cb8;
    }
    else {
      uVar2 = (uint)(*(char *)(param_1 + 0x84) != '\0');
    }
    uStack_20 = uVar2;
    FUN_02bee8e8(param_1,*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0x94),1);
  }
LAB_02c04cb8:
  if (*(int *)(param_1 + 0xa0) != -1) {
    FUN_02bef26c(param_1);
  }
  func_0x02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  return 1;
}


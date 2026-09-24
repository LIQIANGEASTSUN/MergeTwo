
void FUN_01b20454(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x02953fd4(0x384a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x384a,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x029f3fe4(param_1,0);
  if (iVar1 != 0) {
    if ((((*(char *)(param_1 + 0x4c) != '\0') && (iVar1 = FUN_01b1e048(param_1,0), iVar1 != 0)) &&
        (iVar1 = FUN_01b18c14(param_1), iVar1 == 0)) && (iVar1 = FUN_01b1d650(param_1), iVar1 != 0))
    {
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
    iVar1 = FUN_01b188f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01b1aebc(iVar1);
    uVar3 = (uint)*(byte *)(param_1 + 0x5d);
    if (uVar3 == uVar2) {
      return;
    }
    if (uVar2 == 0 && uVar3 != 0) {
      iVar1 = FUN_01b188f4();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_01b1e798(iVar1);
    }
    else if ((~uVar3 & uVar2) != 0) {
      iVar1 = FUN_01b188f4();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_01b1ea68(iVar1);
    }
    *(char *)(param_1 + 0x5d) = (char)uVar2;
  }
  return;
}


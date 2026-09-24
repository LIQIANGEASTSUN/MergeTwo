
int FUN_02bd6714(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0xd79,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x98);
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + 0xc);
      }
      if (iVar1 != 0 && iVar4 != 0) {
        if (iVar4 == 1) {
          func_0x014388e8();
        }
        iVar4 = *(int *)(iVar1 + 0x14);
      }
    }
    return iVar4;
  }
  iVar4 = func_0x029540a4(0xd79,0);
  if (iVar4 == 0) {
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
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar1 = *(int *)(iVar4 + 8);
  uVar3 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar4 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar1,uVar3,&uStack_38,uVar2,0,0);
  iVar4 = func_0x024f56f0(&uStack_38,0,0);
  return iVar4;
}


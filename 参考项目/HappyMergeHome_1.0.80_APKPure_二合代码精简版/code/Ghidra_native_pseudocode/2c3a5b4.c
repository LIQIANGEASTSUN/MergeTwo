
int FUN_02c4a5b4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x02953fd4(0x5e13,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e13,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
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
    iVar1 = func_0x024f56f0(&uStack_38,0,0);
    return iVar1;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    uVar2 = func_0x02b53a3c(*(undefined4 *)(param_2 + 0xa0),0);
    iVar1 = *(int *)(param_2 + 0x9c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x014388e8();
    }
    iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}



uint FUN_02bad168(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x219a,0);
  if (iVar1 == 0) {
    if (-1 < param_2) {
      iVar3 = func_0x02bad204(param_1,param_2,param_3);
      iVar1 = func_0x02953fd4(0x219b,0);
      if (iVar1 != 0) {
        iVar1 = func_0x029540a4(0x219b,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x024f56c0(&uStack_50,0,iVar3,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01523a6c(&uStack_38,param_1,0);
        func_0x01523a6c(&uStack_38,iVar3,0);
        iVar3 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = 3;
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar4,0,0);
        uVar2 = func_0x024f56e0(&uStack_38,0,0);
        return uVar2;
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      return (uint)(*(int *)(iVar3 + 0xc) == 2);
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x219a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x02898004(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}


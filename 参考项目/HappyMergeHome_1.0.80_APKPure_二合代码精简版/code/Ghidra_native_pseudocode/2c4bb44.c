
void FUN_02c5bb44(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x5f75,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x3c) = param_3;
    FUN_02c5abf0(param_1);
    if (param_3 == 0x14) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02953fd4(0x5f76,0);
      if (iVar2 != 0) {
        iVar2 = func_0x029540a4(0x5f76,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_20 = 0;
        func_0x028fcd78(iVar2,iVar1,param_2,0x14);
        return;
      }
      *(undefined4 *)(iVar1 + 0x58) = 0x14;
      if (*(int *)(iVar1 + 0x2c) != 0) {
        iVar2 = func_0x014e94d8(*(int *)(iVar1 + 0x2c),0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar2,1,0);
      }
      if (*(int *)(iVar1 + 0x24) != 0) {
        iVar2 = func_0x014e94d8(*(int *)(iVar1 + 0x24),0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar2,0,0);
      }
      if (*(int *)(iVar1 + 0x30) != 0) {
        iVar2 = func_0x014e94d8(*(int *)(iVar1 + 0x30),0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar2,0,0);
      }
      iVar2 = func_0x02953fd4(0x5f77,0);
      if (iVar2 != 0) {
        iVar2 = func_0x029540a4(0x5f77,0);
        if (iVar2 == 0) {
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
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01523a6c(&uStack_38,iVar1,0);
        func_0x01523a2c(&uStack_38,param_2,0);
        iVar4 = *(int *)(iVar2 + 8);
        uVar5 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar3 = 3;
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
        return;
      }
      return;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5f75,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x028fcd78(iVar1,param_1,param_2,param_3);
  }
  return;
}



void FUN_02b4c560(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x02953fd4(0x2ee5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2ee5,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x029f2168(param_1,param_2,0);
  iVar1 = FUN_02b3ebc0(param_1);
  if (iVar1 != 0) {
    uVar6 = FUN_02b3ebc0(param_1);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      uVar4 = extraout_r1;
    }
    uStack_20 = 0;
    func_0x026a19c8((int)uVar6,uVar4,uVar2,uVar5);
    iVar1 = FUN_02b3ebc0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      iVar1 = FUN_02b3ebc0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar1 + 0x20);
      uVar6 = FUN_02b3ebc0(param_1);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      iVar1 = (int)uVar6;
      if (iVar1 == 0) {
        func_0x014388e4();
        uVar4 = extraout_r1_00;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x38);
      uVar5 = *(undefined4 *)(iVar1 + 0x3c);
      if (iVar3 == 0) {
        func_0x014388e4();
        uVar4 = extraout_r1_01;
      }
      uStack_20 = 0;
      func_0x026a250c(iVar3,uVar4,uVar2,uVar5);
    }
  }
  return;
}


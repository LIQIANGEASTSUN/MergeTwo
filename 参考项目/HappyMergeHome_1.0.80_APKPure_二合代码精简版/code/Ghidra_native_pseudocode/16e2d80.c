
void FUN_016f2d80(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x02953fd4(0x8aa6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8aa6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  func_0x029f225c(param_1,0);
  uVar6 = FUN_016ef2ac(param_1);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if ((int)uVar6 == 0) {
    func_0x014388e4();
    uVar4 = extraout_r1;
  }
  uStack_28 = 0;
  func_0x026f1a28((int)uVar6,uVar4,uVar2,uVar5);
  uVar6 = FUN_016ef2ac(param_1);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  if ((int)uVar6 == 0) {
    func_0x014388e4();
    uVar4 = extraout_r1_00;
  }
  uStack_28 = 0;
  func_0x026f1af8((int)uVar6,uVar4,uVar5,uVar2);
  return;
}


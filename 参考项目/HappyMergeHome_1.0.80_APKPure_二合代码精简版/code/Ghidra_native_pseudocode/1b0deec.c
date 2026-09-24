
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1deec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  pcVar4 = (char *)(_UNK_01b1e03c + 0x1b1df08);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1e040 + 0x1b1df1c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3827,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3827,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x029f2168(param_1,param_2,0);
  iVar1 = FUN_01b18c14(param_1);
  if (iVar1 != 0) {
    uVar7 = FUN_01b18c14(param_1);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    if ((int)uVar7 == 0) {
      func_0x014388e4();
      uVar5 = extraout_r1;
    }
    uStack_20 = 0;
    func_0x026c6ea0((int)uVar7,uVar5,uVar2,uVar6);
    if (*(int *)(**(int **)(_UNK_01b1e044 + 0x1b1dfd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x01b18728();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01b18b70(iVar1);
    if (iVar1 != 0) {
      uVar7 = FUN_01b18c14(param_1);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar3 = (int)uVar7;
      if (iVar3 == 0) {
        func_0x014388e4();
        uVar5 = extraout_r1_00;
      }
      uStack_20 = 0;
      func_0x026a8e5c(iVar1,uVar5,*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(iVar3 + 0x3c));
    }
  }
  return;
}


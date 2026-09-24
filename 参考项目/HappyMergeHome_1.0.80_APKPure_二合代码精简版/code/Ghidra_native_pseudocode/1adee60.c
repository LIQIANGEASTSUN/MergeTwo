
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aeee60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int aiStack_1c [2];
  
  pcVar6 = (char *)(_UNK_01aeeff8 + 0x1aeee78);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeeffc + 0x1aeee8c));
    func_0x01438628(*(undefined4 *)(_UNK_01aef000 + 0x1aeee98));
    func_0x01438628(*(undefined4 *)(_UNK_01aef004 + 0x1aeeea4));
    func_0x01438628(*(undefined4 *)(_UNK_01aef008 + 0x1aeeeb0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4ca,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01aebe90(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_01aebe90(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0540(iVar1,param_2,**(undefined4 **)(_UNK_01aef00c + 0x1aeef38));
  if (iVar1 == 0) {
    iVar1 = FUN_01aebe90(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f10d0(iVar1,param_2,0,**(undefined4 **)(_UNK_01aef010 + 0x1aeef74));
  }
  iVar1 = FUN_01aebe90(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar5 = func_0x024f05d4(0,param_2,**(undefined4 **)(_UNK_01aef018 + 0x1aeefc8));
    func_0x014388e4();
  }
  else {
    iVar5 = func_0x024f05d4(iVar1,param_2,**(undefined4 **)(_UNK_01aef014 + 0x1aeefa0));
  }
  iVar5 = iVar5 + 1;
  iVar3 = **(int **)(_UNK_01aef01c + 0x1aeefec);
  aiStack_1c[0] = iVar5;
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar1,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    uStack_20 = func_0x046c23f8(iVar1,param_2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x34));
    uVar7 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x20),
                            &uStack_20);
    iVar2 = func_0x0515c410(aiStack_1c,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
    iVar5 = aiStack_1c[0];
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar1,param_2,iVar5,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x40));
  func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x28));
  return;
}


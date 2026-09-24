
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0327d770(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_0327d8f4 + 0x327d788);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327d8f8 + 0x327d79c));
    func_0x01438628(*(undefined4 *)(_UNK_0327d8fc + 0x327d7a8));
    func_0x01438628(*(undefined4 *)(_UNK_0327d900 + 0x327d7b4));
    func_0x01438628(*(undefined4 *)(_UNK_0327d904 + 0x327d7c0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x812a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x812a,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_032777e8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046c26fc(iVar1,param_2,**(undefined4 **)(_UNK_0327d908 + 0x327d838));
  if (iVar1 == 0) {
    iVar1 = FUN_032777e8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b70cd0(iVar1,param_2,0,**(undefined4 **)(_UNK_0327d90c + 0x327d874));
  }
  iVar1 = FUN_032777e8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar5 = func_0x03b70fac(0,param_2,**(undefined4 **)(_UNK_0327d914 + 0x327d8c4));
    func_0x014388e4();
  }
  else {
    iVar5 = func_0x03b70fac(iVar1,param_2,**(undefined4 **)(_UNK_0327d910 + 0x327d8a0));
  }
  iVar5 = iVar5 + 1;
  iVar4 = **(int **)(_UNK_0327d918 + 0x327d8e8);
  aiStack_1c[0] = iVar5;
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar1,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    uStack_20 = func_0x046c23f8(iVar1,param_2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34));
    uVar6 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x20),
                            &uStack_20);
    iVar2 = func_0x0515c410(aiStack_1c,uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x3c));
    iVar5 = aiStack_1c[0];
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar1 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar1,param_2,iVar5,
                  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x40));
  func_0x03b70bb0(iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x28));
  return;
}


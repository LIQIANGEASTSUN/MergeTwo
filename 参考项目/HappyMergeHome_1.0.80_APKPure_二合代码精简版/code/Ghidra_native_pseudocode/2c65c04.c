
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c75c04(undefined4 param_1,undefined4 param_2)

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
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02c75e48 + 0x2c75c20);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c75e4c + 0x2c75c34));
    func_0x01438628(*(undefined4 *)(_UNK_02c75e50 + 0x2c75c40));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ffe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ffe,0);
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
  iVar1 = **(int **)(**(int **)(_UNK_02c75e54 + 0x2c75ca0) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02c3d868(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02beba7c(iVar1,param_2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02c23c20(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024ef308(iVar5,0);
  iVar4 = *(int *)(iVar1 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x024eecb8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x024eff78(iVar4,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x024efef8(iVar2,uVar6,0,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024ef308(iVar5,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024eecb8(iVar2,0);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02c23d08(&uStack_2c,iVar1,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_30 = 0;
  func_0x024ef0bc(iVar2,uStack_2c,uStack_28,uStack_24);
  if (*(int *)(**(int **)(_UNK_02c75e58 + 0x2c75e1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x024f5df0(iVar5,0x3e4ccccd,0);
  return;
}


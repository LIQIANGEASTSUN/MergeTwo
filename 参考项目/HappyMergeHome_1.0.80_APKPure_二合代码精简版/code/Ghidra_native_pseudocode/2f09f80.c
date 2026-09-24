
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f19f80(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02f1a020 + 0x2f19f94);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1a024 + 0x2f19fa8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6ccf,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6ccf,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02f1a028 + 0x2f1a000) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar5 = (char *)(_UNK_02c361b4 + 0x2c360b4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c361b8 + 0x2c360c8),0);
    func_0x01438628(*(undefined4 *)(_UNK_02c361bc + 0x2c360d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c361c0 + 0x2c360e0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2656,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2656,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a2c(&uStack_30,0x1f,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02c361c4 + 0x2c36138) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x02c35e3c(0x1f);
  if (*(int *)(**(int **)(_UNK_02c361c8 + 0x2c36160) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c361cc + 0x2c3617c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x029ca78c(iVar4,0);
  return (uint)(iVar2 + -2 <= iVar4);
}


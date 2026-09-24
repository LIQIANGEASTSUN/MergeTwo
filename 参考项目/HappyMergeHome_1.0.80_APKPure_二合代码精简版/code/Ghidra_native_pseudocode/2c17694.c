
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c27694(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02c2789c + 0x2c276ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c278a0 + 0x2c276c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c278a4 + 0x2c276cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c278a8 + 0x2c276d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5efd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5efd,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c278ac + 0x2c27738),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c278b0 + 0x2c27750),0);
  func_0x024f15c4(param_1,0);
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x04753c10(iVar1,**(undefined4 **)(_UNK_02c278b4 + 0x2c27780));
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,0,0);
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x84),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  *(undefined1 *)(param_1 + 0x15c) = 0;
  iVar1 = func_0x014e94d8(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024ef308(iVar1,0);
  pcVar4 = (char *)(_UNK_02c278b8 + 0x2c27838);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c278bc + 0x2c2784c));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_02c278c0 + 0x2c27864) + 0x5c);
  uVar5 = *(undefined4 *)(iVar3 + 0xc);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_20 = 0;
  func_0x024ef328(iVar1,uVar5,uVar2,uVar6);
  return;
}


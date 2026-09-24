
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6e9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02c6eb50 + 0x2c6e9c4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6eb54 + 0x2c6e9d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6eb58 + 0x2c6e9e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c6eb5c + 0x2c6e9f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6eb60 + 0x2c6e9fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c6eb64 + 0x2c6ea08));
    func_0x01438628(*(undefined4 *)(_UNK_02c6eb68 + 0x2c6ea14));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x594f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x594f,0);
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
  FUN_02c6da8c(param_1);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb6c + 0x2c6ea7c),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb70 + 0x2c6ea94),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb74 + 0x2c6eaac),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb78 + 0x2c6eac4),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb7c + 0x2c6eadc),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb80 + 0x2c6eaf4),0);
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  func_0x014385cc((undefined4 *)(param_1 + 0x8c),0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  func_0x014385cc((undefined4 *)(param_1 + 0x90),0);
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}


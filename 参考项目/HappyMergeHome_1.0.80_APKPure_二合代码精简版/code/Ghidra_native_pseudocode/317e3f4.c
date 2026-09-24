
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0318e3f4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_0318e4b0 + 0x318e408);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318e4b4 + 0x318e41c));
    func_0x01438628(*(undefined4 *)(_UNK_0318e4b8 + 0x318e428));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0318e4bc + 0x318e43c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0318e4c0 + 0x318e458));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar2,0x11,0);
  *(undefined1 *)(param_1 + 0x52) = 1;
  iVar2 = func_0x02b1cc10(0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02b1ed38 + 0x2b1ec78);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b1ed3c + 0x2b1ec8c),1,0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x66c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x66c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,iVar2,0);
    func_0x01523a1c(&uStack_38,1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x20);
  if (*(int *)(**(int **)(_UNK_02b1ed40 + 0x2b1ece8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar2,1,0);
  return;
}


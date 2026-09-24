
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b1c30c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01b1c4a8 + 0x1b1c320);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1c4ac + 0x1b1c334));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c4b0 + 0x1b1c340));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c4b4 + 0x1b1c34c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c4b8 + 0x1b1c358));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c4bc + 0x1b1c364));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c4c0 + 0x1b1c370));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1a01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a01,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_0287ab98 + 0x287aab8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287ab9c + 0x287aacc),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287aba0 + 0x287ab88));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1c4c4 + 0x1b1c3c8));
  func_0x024f0510(iVar1,**(undefined4 **)(_UNK_01b1c4c8 + 0x1b1c3dc));
  if (*(int *)(**(int **)(_UNK_01b1c4cc + 0x1b1c3f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01b1c4d0 + 0x1b1c40c));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01b1c4d4 + 0x1b1c42c));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x134);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x015fcde8(*(undefined4 *)(iVar5 + 0x24),0);
  if ((iVar2 == 0) && (iVar2 = func_0x01b1c4dc(iVar5), iVar2 != 0)) {
    uVar6 = *(undefined4 *)(iVar5 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f1618(iVar1,uVar6,**(undefined4 **)(_UNK_01b1c4d8 + 0x1b1c498));
  }
  return iVar1;
}


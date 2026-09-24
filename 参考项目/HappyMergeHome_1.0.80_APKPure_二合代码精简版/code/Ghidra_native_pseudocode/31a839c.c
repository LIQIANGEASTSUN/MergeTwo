
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031b839c(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_031b84b0 + 0x31b83b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b84b4 + 0x31b83c4));
    func_0x01438628(*(undefined4 *)(_UNK_031b84b8 + 0x31b83d0));
    func_0x01438628(*(undefined4 *)(_UNK_031b84bc + 0x31b83dc));
    func_0x01438628(*(undefined4 *)(_UNK_031b84c0 + 0x31b83e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x179f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x179f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028a926c + 0x28a918c);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a9270 + 0x28a91a0),param_1,0);
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
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a9274 + 0x28a925c));
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_031b84c4 + 0x31b8440) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b84c8 + 0x31b845c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036e4bd0(iVar1,**(undefined4 **)(_UNK_031b84cc + 0x31b847c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x05187824(0,0,**(undefined4 **)(_UNK_031b84d0 + 0x31b84a4));
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x034a8a64();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x034a8c14();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}


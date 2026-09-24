
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f967a0(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02f968b4 + 0x2f967b4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f968b8 + 0x2f967c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f968bc + 0x2f967d4));
    func_0x01438628(*(undefined4 *)(_UNK_02f968c0 + 0x2f967e0));
    func_0x01438628(*(undefined4 *)(_UNK_02f968c4 + 0x2f967ec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xf2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf2c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02896c88 + 0x2896ba8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02896c8c + 0x2896bbc),param_1,0);
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
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02896c90 + 0x2896c78));
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_02f968c8 + 0x2f96844) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f968cc + 0x2f96860));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x0370eb30(iVar1,**(undefined4 **)(_UNK_02f968d0 + 0x2f96880));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x05187824(0,0,**(undefined4 **)(_UNK_02f968d4 + 0x2f968a8));
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


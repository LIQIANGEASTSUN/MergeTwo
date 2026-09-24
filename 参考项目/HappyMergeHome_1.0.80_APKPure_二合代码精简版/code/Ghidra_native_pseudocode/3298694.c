
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032a8694(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_032a87a8 + 0x32a86a8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a87ac + 0x32a86bc));
    func_0x01438628(*(undefined4 *)(_UNK_032a87b0 + 0x32a86c8));
    func_0x01438628(*(undefined4 *)(_UNK_032a87b4 + 0x32a86d4));
    func_0x01438628(*(undefined4 *)(_UNK_032a87b8 + 0x32a86e0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x423,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x423,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02877124 + 0x2877044);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02877128 + 0x2877058),param_1,0);
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
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287712c + 0x2877114));
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_032a87bc + 0x32a8738) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032a87c0 + 0x32a8754));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036e2230(iVar1,**(undefined4 **)(_UNK_032a87c4 + 0x32a8774));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x05187824(0,0,**(undefined4 **)(_UNK_032a87c8 + 0x32a879c));
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


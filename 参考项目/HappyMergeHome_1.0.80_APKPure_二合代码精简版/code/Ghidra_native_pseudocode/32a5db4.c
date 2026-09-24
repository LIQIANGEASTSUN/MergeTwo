
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032b5db4(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_032b5eb4 + 0x32b5dc8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b5eb8 + 0x32b5ddc));
    func_0x01438628(*(undefined4 *)(_UNK_032b5ebc + 0x32b5de8));
    func_0x01438628(*(undefined4 *)(_UNK_032b5ec0 + 0x32b5df4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x82b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x82b2,0);
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
    iVar1 = func_0x024f56f0(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_032a8ec4(param_1,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_032b5ec4 + 0x32b5e60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b5ec8 + 0x32b5e7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + 0xc);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  return 1;
}


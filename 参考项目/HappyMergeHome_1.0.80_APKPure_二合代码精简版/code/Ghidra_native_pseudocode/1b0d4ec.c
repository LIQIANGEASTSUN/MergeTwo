
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b1d4ec(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_01b1d63c + 0x1b1d4fc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1d640 + 0x1b1d510));
    func_0x01438628(*(undefined4 *)(_UNK_01b1d644 + 0x1b1d51c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x381d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x381d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028784c0 + 0x28783f0);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028784c4 + 0x2878404),0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028784c8 + 0x28784b0));
    return iVar1;
  }
  iVar1 = func_0x01b207b4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x015fcde8(*(undefined4 *)(iVar1 + 0x24),0);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_01b1d648 + 0x1b1d59c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x01b18728();
    uVar5 = *(undefined4 *)(iVar1 + 0x24);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x02f7c754(iVar6,uVar5,0);
    iVar2 = func_0x01b1c550(iVar1);
    if (iVar6 != 0 && iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01b1d64c + 0x1b1d604) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x02f7c0dc(iVar6,0);
      if (iVar2 != 0) {
        if (*(char *)(iVar6 + 0x11) != '\0') {
          return 0;
        }
        return iVar1;
      }
    }
  }
  return 0;
}


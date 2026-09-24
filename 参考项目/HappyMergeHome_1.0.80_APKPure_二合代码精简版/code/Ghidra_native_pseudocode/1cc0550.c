
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd0550(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  pcVar3 = (char *)(_UNK_01cd0600 + 0x1cd0564);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd0604 + 0x1cd0578));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafd8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xafd8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02939b90 + 0x2939ab0);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02939b94 + 0x2939ac4),param_1,0);
      *pcVar3 = '\x01';
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02939b98 + 0x2939b80));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar5 = func_0x036150a4(*(undefined4 *)(param_1 + 0x3c),
                          **(undefined4 **)(_UNK_01cd0608 + 0x1cd05e0));
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  func_0x014385cc((int *)(param_1 + 0x54),uVar5);
  return *(int *)(param_1 + 0x54);
}


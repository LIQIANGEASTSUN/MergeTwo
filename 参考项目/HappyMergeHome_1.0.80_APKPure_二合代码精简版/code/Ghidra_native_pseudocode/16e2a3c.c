
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016f2a3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
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
  
  pcVar3 = (char *)(_UNK_016f2b78 + 0x16f2a50);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f2b7c + 0x16f2a64));
    func_0x01438628(*(undefined4 *)(_UNK_016f2b80 + 0x16f2a70));
    func_0x01438628(*(undefined4 *)(_UNK_016f2b84 + 0x16f2a7c));
    func_0x01438628(*(undefined4 *)(_UNK_016f2b88 + 0x16f2a88));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x8aa4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8aa4,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(**(int **)(_UNK_016f2b8c + 0x16f2af0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f2b90 + 0x16f2b0c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016f2b94 + 0x16f2b2c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 700) == 0) {
      uVar4 = 1;
    }
    else {
      iVar1 = func_0x024ef040(*(int *)(iVar1 + 700),**(undefined4 **)(_UNK_016f2b98 + 0x16f2b5c));
      uVar4 = (uint)(iVar1 == 0);
    }
  }
  return uVar4;
}


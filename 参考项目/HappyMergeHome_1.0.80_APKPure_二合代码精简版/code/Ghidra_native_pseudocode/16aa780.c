
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016ba780(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016ba8bc + 0x16ba794);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016ba8c0 + 0x16ba7a8));
    func_0x01438628(*(undefined4 *)(_UNK_016ba8c4 + 0x16ba7b4));
    func_0x01438628(*(undefined4 *)(_UNK_016ba8c8 + 0x16ba7c0));
    func_0x01438628(*(undefined4 *)(_UNK_016ba8cc + 0x16ba7cc));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x8924,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8924,0);
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
    if (*(int *)(**(int **)(_UNK_016ba8d0 + 0x16ba834) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016ba8d4 + 0x16ba850));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016ba8d8 + 0x16ba870));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x35c) == 0) {
      uVar4 = 1;
    }
    else {
      iVar1 = func_0x024ef040(*(int *)(iVar1 + 0x35c),**(undefined4 **)(_UNK_016ba8dc + 0x16ba8a0));
      uVar4 = (uint)(iVar1 == 0);
    }
  }
  return uVar4;
}


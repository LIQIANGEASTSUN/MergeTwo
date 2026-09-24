
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b67f8(undefined4 param_1)

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
  
  pcVar3 = (char *)(iRam016b68d8 + 0x16b680c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam016b68dc + 0x16b6820));
    func_0x01438628(*(undefined4 *)(iRam016b68e0 + 0x16b682c));
    func_0x01438628(*(undefined4 *)(iRam016b68e4 + 0x16b6838));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8914,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8914,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_029233ac + 0x29232cc);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029233b0 + 0x29232e0),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_029233b4 + 0x292339c));
    return;
  }
  if (*(int *)(**(int **)(iRam016b68e8 + 0x16b6890) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(iRam016b68ec + 0x16b68ac));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  thunk_FUN_036de7f8(iVar1,**(undefined4 **)(iRam016b68f0 + 0x16b68cc));
  return;
}


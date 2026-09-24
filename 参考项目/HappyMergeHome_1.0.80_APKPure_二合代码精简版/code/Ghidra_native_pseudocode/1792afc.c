
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a2afc(undefined4 param_1)

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
  
  pcVar3 = (char *)(iRam017a2bdc + 0x17a2b10);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam017a2be0 + 0x17a2b24));
    func_0x01438628(*(undefined4 *)(iRam017a2be4 + 0x17a2b30));
    func_0x01438628(*(undefined4 *)(iRam017a2be8 + 0x17a2b3c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1751,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1751,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028a8844 + 0x28a8764);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a8848 + 0x28a8778),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a884c + 0x28a8834));
    return;
  }
  if (*(int *)(**(int **)(iRam017a2bec + 0x17a2b94) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(iRam017a2bf0 + 0x17a2bb0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_036dbc78(iVar1,**(undefined4 **)(iRam017a2bf4 + 0x17a2bd0));
  return;
}


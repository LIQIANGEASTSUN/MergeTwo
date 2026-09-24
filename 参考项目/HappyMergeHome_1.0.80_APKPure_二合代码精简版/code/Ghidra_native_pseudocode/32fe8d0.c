
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0330e8d0(undefined4 param_1)

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
  
  pcVar4 = (char *)(iRam0330e9b0 + 0x330e8e4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0330e9b4 + 0x330e8f8));
    func_0x01438628(*(undefined4 *)(iRam0330e9b8 + 0x330e904));
    func_0x01438628(*(undefined4 *)(iRam0330e9bc + 0x330e910));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13e8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13e8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028a2714 + 0x28a2634);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a2718 + 0x28a2648),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a271c + 0x28a2704));
    return;
  }
  if (*(int *)(**(int **)(iRam0330e9c0 + 0x330e968) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(iRam0330e9c4 + 0x330e984));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_036e0bb0(iVar1,**(undefined4 **)(iRam0330e9c8 + 0x330e9a4));
  return;
}


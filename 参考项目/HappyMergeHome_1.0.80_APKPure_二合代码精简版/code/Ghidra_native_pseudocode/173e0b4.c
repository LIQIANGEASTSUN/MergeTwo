
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0174e0b4(undefined4 param_1)

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
  
  pcVar3 = (char *)(iRam0174e194 + 0x174e0c8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam0174e198 + 0x174e0dc));
    func_0x01438628(*(undefined4 *)(iRam0174e19c + 0x174e0e8));
    func_0x01438628(*(undefined4 *)(iRam0174e1a0 + 0x174e0f4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15d9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x15d9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028a6178 + 0x28a6098);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a617c + 0x28a60ac),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a6180 + 0x28a6168));
    return;
  }
  if (*(int *)(**(int **)(iRam0174e1a4 + 0x174e14c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(iRam0174e1a8 + 0x174e168));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_036dc6f8(iVar1,**(undefined4 **)(iRam0174e1ac + 0x174e188));
  return;
}


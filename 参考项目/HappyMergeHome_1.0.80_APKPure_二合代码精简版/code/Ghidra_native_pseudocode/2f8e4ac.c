
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9e4ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02f9e5c4 + 0x2f9e4c4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9e5c8 + 0x2f9e4d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e5cc + 0x2f9e4e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6f8c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6f8c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    iStack_20 = iStack_38;
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  func_0x02f9e5d8(&iStack_20,param_1,1);
  iVar3 = iStack_1c;
  iVar1 = iStack_20;
  func_0x02f9e5d8(&iStack_20,param_1,0);
  iStack_20 = iStack_20 + iVar1;
  puVar6 = *(undefined4 **)(_UNK_02f9e5d0 + 0x2f9e580);
  uVar5 = func_0x014387ac(*puVar6,&iStack_20);
  iStack_24 = iStack_1c + iVar3;
  uVar2 = func_0x014387ac(*puVar6,&iStack_24);
  func_0x04f6b974(**(undefined4 **)(_UNK_02f9e5d4 + 0x2f9e5b8),uVar5,uVar2,0);
  return;
}


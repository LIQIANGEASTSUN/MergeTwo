
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03043d2c(undefined4 param_1)

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
  
  pcVar4 = (char *)(iRam03043e0c + 0x3043d40);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam03043e10 + 0x3043d54));
    func_0x01438628(*(undefined4 *)(iRam03043e14 + 0x3043d60));
    func_0x01438628(*(undefined4 *)(iRam03043e18 + 0x3043d6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x740a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x740a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02917f08 + 0x2917e28);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02917f0c + 0x2917e3c),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02917f10 + 0x2917ef8));
    return;
  }
  if (*(int *)(**(int **)(iRam03043e1c + 0x3043dc4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(iRam03043e20 + 0x3043de0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_0370c788(iVar1,**(undefined4 **)(iRam03043e24 + 0x3043e00));
  return;
}


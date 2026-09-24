
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fd48c(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_029fd5a0 + 0x29fd4a0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fd5a4 + 0x29fd4b4));
    func_0x01438628(*(undefined4 *)(_UNK_029fd5a8 + 0x29fd4c0));
    func_0x01438628(*(undefined4 *)(_UNK_029fd5ac + 0x29fd4cc));
    func_0x01438628(*(undefined4 *)(_UNK_029fd5b0 + 0x29fd4d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7c3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02884174 + 0x2884094);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02884178 + 0x28840a8),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288417c + 0x2884164));
    return;
  }
  if (*(int *)(**(int **)(_UNK_029fd5b4 + 0x29fd530) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_029fd5b8 + 0x29fd54c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x035da018(iVar1,**(undefined4 **)(_UNK_029fd5bc + 0x29fd56c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfd760)(iVar1,0,**(undefined4 **)(_UNK_029fd5c0 + 0x29fd594));
  return;
}


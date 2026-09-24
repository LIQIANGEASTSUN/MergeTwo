
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c50a78(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c50b80 + 0x2c50a8c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c50b84 + 0x2c50aa0));
    func_0x01438628(*(undefined4 *)(_UNK_02c50b88 + 0x2c50aac));
    func_0x01438628(*(undefined4 *)(_UNK_02c50b8c + 0x2c50ab8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4a8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028714ac + 0x28713cc);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028714b0 + 0x28713e0),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028714b4 + 0x287149c));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (*(int *)(**(int **)(_UNK_02c50b90 + 0x2c50b10) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c50b94 + 0x2c50b30));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x024371a0(iVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)0x4cfd760)
            (iVar1,iVar3 - 1U & ~((int)(iVar3 - 1U) >> 0x1f),
             **(undefined4 **)(_UNK_02c50b98 + 0x2c50b74));
  return;
}


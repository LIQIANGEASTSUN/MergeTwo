
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da7580(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01da7694 + 0x1da7594);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da7698 + 0x1da75a8));
    func_0x01438628(*(undefined4 *)(_UNK_01da769c + 0x1da75b4));
    func_0x01438628(*(undefined4 *)(_UNK_01da76a0 + 0x1da75c0));
    func_0x01438628(*(undefined4 *)(_UNK_01da76a4 + 0x1da75cc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1005,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1005,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028988e4 + 0x2898804);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028988e8 + 0x2898818),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028988ec + 0x28988d4));
    return;
  }
  if (*(int *)(**(int **)(_UNK_01da76a8 + 0x1da7624) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da76ac + 0x1da7640));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036d6cb8(iVar1,**(undefined4 **)(_UNK_01da76b0 + 0x1da7660));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfd760)(iVar1,0,**(undefined4 **)(_UNK_01da76b4 + 0x1da7688));
  return;
}


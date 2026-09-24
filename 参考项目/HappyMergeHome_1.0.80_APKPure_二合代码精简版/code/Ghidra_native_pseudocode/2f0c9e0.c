
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f1c9e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
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
  
  pcVar4 = (char *)(_UNK_02f1cb6c + 0x2f1c9f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1cb70 + 0x2f1ca08));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cb74 + 0x2f1ca14));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cb78 + 0x2f1ca20));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cb7c + 0x2f1ca2c));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cb80 + 0x2f1ca38));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x496,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x496,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028714b4 + 0x287149c));
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02f1cb84 + 0x2f1ca90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1cb88 + 0x2f1caac));
  piVar5 = *(int **)(_UNK_02f1cb8c + 0x2f1cac0);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar5;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x484);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x0374c388(iVar1,uVar6,**(undefined4 **)(_UNK_02f1cb90 + 0x2f1caf8));
  if (*(int *)(**(int **)(_UNK_02f1cb94 + 0x2f1cb10) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024ef144(iVar1,0,0);
  if (iVar3 != 0) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = (*(code *)&UNK_05d3ad2c)(iVar1,0);
    return uVar6;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01bc63a8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01bc6534 + 0x1bc63bc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc6538 + 0x1bc63d0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc653c + 0x1bc63dc));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6540 + 0x1bc63e8));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6544 + 0x1bc63f4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6548 + 0x1bc6400));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa8db,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa8db,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028714ac + 0x28713cc);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028714b0 + 0x28713e0),param_1,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028714b4 + 0x287149c));
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_01bc654c + 0x1bc6458) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bc6550 + 0x1bc6474));
  piVar4 = *(int **)(_UNK_01bc6554 + 0x1bc6488);
  iVar5 = *piVar4;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar4;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xcfc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x0374c388(iVar1,uVar6,**(undefined4 **)(_UNK_01bc6558 + 0x1bc64c0));
  if (*(int *)(**(int **)(_UNK_01bc655c + 0x1bc64d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024ef144(iVar1,0,0);
  if (iVar5 != 0) {
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


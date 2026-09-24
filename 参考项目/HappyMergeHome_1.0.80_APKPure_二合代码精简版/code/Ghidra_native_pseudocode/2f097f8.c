
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f197f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02f1990c + 0x2f1980c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f19910 + 0x2f19820));
    func_0x01438628(*(undefined4 *)(_UNK_02f19914 + 0x2f1982c));
    func_0x01438628(*(undefined4 *)(_UNK_02f19918 + 0x2f19838));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x42ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x42ca,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028d7798 + 0x28d76b8);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028d779c + 0x28d76cc),param_1,0);
      *pcVar5 = '\x01';
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028d77a0 + 0x28d7788));
    return iVar1;
  }
  piVar3 = (int *)(param_1 + 0x3c);
  if (*piVar3 != 0) {
    return *piVar3;
  }
  if (*(int *)(**(int **)(_UNK_02f1991c + 0x2f1989c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f19920 + 0x2f198b8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x04cfd760(iVar1,0,**(undefined4 **)(_UNK_02f19924 + 0x2f198ec));
  *piVar3 = iVar1;
  func_0x014385cc(piVar3,iVar1);
  return *piVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0318a798(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_0318a8d8 + 0x318a7b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318a8dc + 0x318a7c4));
    func_0x01438628(*(undefined4 *)(_UNK_0318a8e0 + 0x318a7d0));
    func_0x01438628(*(undefined4 *)(_UNK_0318a8e4 + 0x318a7dc));
    func_0x01438628(*(undefined4 *)(_UNK_0318a8e8 + 0x318a7e8));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x7bc0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0318a8ec + 0x318a848) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0318a8f0 + 0x318a864));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x30);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_031896c0(param_1);
      iVar2 = FUN_0318a5f0(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_0318a8f4 + 0x318a8c4));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7bc0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291c5c0(iVar1,param_1,0);
  }
  return iVar2;
}


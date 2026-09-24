
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032e14cc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_032e160c + 0x32e14e4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e1610 + 0x32e14f8));
    func_0x01438628(*(undefined4 *)(_UNK_032e1614 + 0x32e1504));
    func_0x01438628(*(undefined4 *)(_UNK_032e1618 + 0x32e1510));
    func_0x01438628(*(undefined4 *)(_UNK_032e161c + 0x32e151c));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x83e0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032e1620 + 0x32e157c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032e1624 + 0x32e1598));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x38);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_032e03ec(param_1);
      iVar2 = FUN_032e1324(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_032e1628 + 0x32e15f8));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x83e0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02920a08(iVar1,param_1,0);
  }
  return iVar2;
}


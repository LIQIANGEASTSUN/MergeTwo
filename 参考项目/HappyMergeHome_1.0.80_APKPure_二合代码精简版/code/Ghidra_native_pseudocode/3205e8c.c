
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03215e8c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_03215fcc + 0x3215ea4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03215fd0 + 0x3215eb8));
    func_0x01438628(*(undefined4 *)(_UNK_03215fd4 + 0x3215ec4));
    func_0x01438628(*(undefined4 *)(_UNK_03215fd8 + 0x3215ed0));
    func_0x01438628(*(undefined4 *)(_UNK_03215fdc + 0x3215edc));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x7eaa,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03215fe0 + 0x3215f3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03215fe4 + 0x3215f58));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x3c);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_03214aac(param_1);
      iVar2 = FUN_03215ce4(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_03215fe8 + 0x3215fb8));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7eaa,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291e018(iVar1,param_1,0);
  }
  return iVar2;
}


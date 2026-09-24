
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031c3fa4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_031c40e4 + 0x31c3fbc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c40e8 + 0x31c3fd0));
    func_0x01438628(*(undefined4 *)(_UNK_031c40ec + 0x31c3fdc));
    func_0x01438628(*(undefined4 *)(_UNK_031c40f0 + 0x31c3fe8));
    func_0x01438628(*(undefined4 *)(_UNK_031c40f4 + 0x31c3ff4));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x7d3b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031c40f8 + 0x31c4054) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_031c40fc + 0x31c4070));
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
      uVar3 = FUN_031c3028(param_1);
      iVar2 = FUN_031c3dfc(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_031c4100 + 0x31c40d0));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7d3b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291d268(iVar1,param_1,0);
  }
  return iVar2;
}


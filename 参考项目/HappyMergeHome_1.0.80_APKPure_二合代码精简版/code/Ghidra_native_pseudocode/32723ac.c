
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032823ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_032824ec + 0x32823c4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032824f0 + 0x32823d8));
    func_0x01438628(*(undefined4 *)(_UNK_032824f4 + 0x32823e4));
    func_0x01438628(*(undefined4 *)(_UNK_032824f8 + 0x32823f0));
    func_0x01438628(*(undefined4 *)(_UNK_032824fc + 0x32823fc));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x8179,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03282500 + 0x328245c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03282504 + 0x3282478));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x2c);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_03280fcc(param_1);
      iVar2 = FUN_03282204(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_03282508 + 0x32824d8));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8179,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291f968(iVar1,param_1,0);
  }
  return iVar2;
}


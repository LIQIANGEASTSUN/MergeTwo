
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031184a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_031185e8 + 0x31184c0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031185ec + 0x31184d4));
    func_0x01438628(*(undefined4 *)(_UNK_031185f0 + 0x31184e0));
    func_0x01438628(*(undefined4 *)(_UNK_031185f4 + 0x31184ec));
    func_0x01438628(*(undefined4 *)(_UNK_031185f8 + 0x31184f8));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x78b6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031185fc + 0x3118558) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03118600 + 0x3118574));
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
      uVar3 = FUN_031170d0(param_1);
      iVar2 = FUN_03118300(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_03118604 + 0x31185d4));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x78b6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0291ab68(iVar1,param_1,0);
  }
  return iVar2;
}


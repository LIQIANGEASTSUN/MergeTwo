
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016886e8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_01688920 + 0x1688704);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01688924 + 0x1688718));
    func_0x01438628(*(undefined4 *)(_UNK_01688928 + 0x1688724));
    func_0x01438628(*(undefined4 *)(_UNK_0168892c + 0x1688730));
    func_0x01438628(*(undefined4 *)(_UNK_01688930 + 0x168873c));
    func_0x01438628(*(undefined4 *)(_UNK_01688934 + 0x1688748));
    func_0x01438628(*(undefined4 *)(_UNK_01688938 + 0x1688754));
    func_0x01438628(*(undefined4 *)(_UNK_0168893c + 0x1688760));
    func_0x01438628(*(undefined4 *)(_UNK_01688940 + 0x168876c));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x87b5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01688944 + 0x16887d4));
    func_0x0168d38c(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01688948 + 0x16887f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0168894c + 0x168880c));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x2c);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x01688960(param_1);
      }
      iVar4 = func_0x01688a1c(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01688950 + 0x16888a4));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_01688954 + 0x16888c4),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_01688958 + 0x16888dc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0168895c + 0x1688910));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x87b5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02922818(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


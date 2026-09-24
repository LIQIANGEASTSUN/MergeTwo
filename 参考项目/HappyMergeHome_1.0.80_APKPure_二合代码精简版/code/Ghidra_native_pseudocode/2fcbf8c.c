
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fdbf8c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_02fdc1c4 + 0x2fdbfa8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1c8 + 0x2fdbfbc));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1cc + 0x2fdbfc8));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1d0 + 0x2fdbfd4));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1d4 + 0x2fdbfe0));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1d8 + 0x2fdbfec));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1dc + 0x2fdbff8));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1e0 + 0x2fdc004));
    func_0x01438628(*(undefined4 *)(_UNK_02fdc1e4 + 0x2fdc010));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x7128,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fdc1e8 + 0x2fdc078));
    func_0x02fe0d44(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02fdc1ec + 0x2fdc094) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fdc1f0 + 0x2fdc0b0));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x38);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x02fdc204(param_1);
      }
      iVar4 = func_0x02fdc2c0(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fdc1f4 + 0x2fdc148));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_02fdc1f8 + 0x2fdc168),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_02fdc1fc + 0x2fdc180));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_02fdc200 + 0x2fdc1b4));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7128,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029164a8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


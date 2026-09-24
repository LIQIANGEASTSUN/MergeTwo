
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0308b6b4(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0308b8ec + 0x308b6d0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308b8f0 + 0x308b6e4));
    func_0x01438628(*(undefined4 *)(_UNK_0308b8f4 + 0x308b6f0));
    func_0x01438628(*(undefined4 *)(_UNK_0308b8f8 + 0x308b6fc));
    func_0x01438628(*(undefined4 *)(_UNK_0308b8fc + 0x308b708));
    func_0x01438628(*(undefined4 *)(_UNK_0308b900 + 0x308b714));
    func_0x01438628(*(undefined4 *)(_UNK_0308b904 + 0x308b720));
    func_0x01438628(*(undefined4 *)(_UNK_0308b908 + 0x308b72c));
    func_0x01438628(*(undefined4 *)(_UNK_0308b90c + 0x308b738));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x75c0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0308b910 + 0x308b7a0));
    func_0x0309046c(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0308b914 + 0x308b7bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0308b918 + 0x308b7d8));
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
        param_2 = func_0x0308b92c(param_1);
      }
      iVar4 = func_0x0308b9e8(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0308b91c + 0x308b870));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_0308b920 + 0x308b890),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_0308b924 + 0x308b8a8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0308b928 + 0x308b8dc));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x75c0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02918dcc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03281ec8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_03282100 + 0x3281ee4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03282104 + 0x3281ef8));
    func_0x01438628(*(undefined4 *)(_UNK_03282108 + 0x3281f04));
    func_0x01438628(*(undefined4 *)(_UNK_0328210c + 0x3281f10));
    func_0x01438628(*(undefined4 *)(_UNK_03282110 + 0x3281f1c));
    func_0x01438628(*(undefined4 *)(_UNK_03282114 + 0x3281f28));
    func_0x01438628(*(undefined4 *)(_UNK_03282118 + 0x3281f34));
    func_0x01438628(*(undefined4 *)(_UNK_0328211c + 0x3281f40));
    func_0x01438628(*(undefined4 *)(_UNK_03282120 + 0x3281f4c));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x8173,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03282124 + 0x3281fb4));
    func_0x051b0d14(iVar1,0);
    if (*(int *)(**(int **)(_UNK_03282128 + 0x3281fd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0328212c + 0x3281fec));
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
        param_2 = func_0x03282148(param_1);
      }
      iVar4 = func_0x03282204(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03282130 + 0x3282084));
        uVar2 = 0;
        func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_03282134 + 0x32820a4),0);
        iVar1 = func_0x04cfe1c0(iVar3,uVar5,**(undefined4 **)(_UNK_03282138 + 0x32820bc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x04cfd760(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0328213c + 0x32820f0));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8173,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291f624(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


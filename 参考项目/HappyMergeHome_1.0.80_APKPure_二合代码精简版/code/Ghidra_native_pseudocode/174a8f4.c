
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0175a8f4(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0175ab2c + 0x175a910);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0175ab30 + 0x175a924));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab34 + 0x175a930));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab38 + 0x175a93c));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab3c + 0x175a948));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab40 + 0x175a954));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab44 + 0x175a960));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab48 + 0x175a96c));
    func_0x01438628(*(undefined4 *)(_UNK_0175ab4c + 0x175a978));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x8d25,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0175ab50 + 0x175a9e0));
    func_0x0177a8d8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0175ab54 + 0x175a9fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0175ab58 + 0x175aa18));
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
        param_2 = func_0x0175ab6c(param_1);
      }
      iVar4 = func_0x0175ac28(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0175ab5c + 0x175aab0));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_0175ab60 + 0x175aad0),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0175ab64 + 0x175aae8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0175ab68 + 0x175ab1c));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8d25,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0292550c(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


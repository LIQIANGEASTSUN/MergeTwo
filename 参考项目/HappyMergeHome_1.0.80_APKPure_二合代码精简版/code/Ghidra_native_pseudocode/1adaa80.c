
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aeaa80(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_r8;
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_01aeac68 + 0x1aeaa9c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeac6c + 0x1aeaab0));
    func_0x01438628(*(undefined4 *)(_UNK_01aeac70 + 0x1aeaabc));
    func_0x01438628(*(undefined4 *)(_UNK_01aeac74 + 0x1aeaac8));
    func_0x01438628(*(undefined4 *)(_UNK_01aeac78 + 0x1aeaad4));
    func_0x01438628(*(undefined4 *)(_UNK_01aeac7c + 0x1aeaae0));
    func_0x01438628(*(undefined4 *)(_UNK_01aeac80 + 0x1aeaaec));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  uStack_19 = 0;
  iVar1 = func_0x02953fd4(0xa4ab,0);
  if (iVar1 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01aeac84 + 0x1aeab54));
    func_0x01af8764(iVar2,0);
    iVar3 = FUN_01ae9a14(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
      unaff_r8 = iVar3;
    }
    if (iVar3 != 0 && iVar1 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x01aeac98(param_1);
      }
      iVar1 = func_0x01aeacf0(param_1,param_2,&uStack_19);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar2 + 8);
      *piVar7 = iVar1;
      func_0x014385cc(piVar7,iVar1);
      if (*piVar7 != 0) {
        uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01aeac88 + 0x1aeabec));
        uVar6 = 0;
        func_0x03a062d0(uVar4,iVar2,**(undefined4 **)(_UNK_01aeac8c + 0x1aeac0c),0);
        iVar1 = func_0x024f0618(unaff_r8,uVar4,**(undefined4 **)(_UNK_01aeac90 + 0x1aeac24));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar6 = func_0x0152983c(unaff_r8,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_01aeac94 + 0x1aeac58));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa4ab,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02933840(iVar1,param_1,param_2,0);
  }
  return uVar6;
}


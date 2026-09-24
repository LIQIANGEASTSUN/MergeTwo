
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0187f0c4(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0187f2fc + 0x187f0e0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187f300 + 0x187f0f4));
    func_0x01438628(*(undefined4 *)(_UNK_0187f304 + 0x187f100));
    func_0x01438628(*(undefined4 *)(_UNK_0187f308 + 0x187f10c));
    func_0x01438628(*(undefined4 *)(_UNK_0187f30c + 0x187f118));
    func_0x01438628(*(undefined4 *)(_UNK_0187f310 + 0x187f124));
    func_0x01438628(*(undefined4 *)(_UNK_0187f314 + 0x187f130));
    func_0x01438628(*(undefined4 *)(_UNK_0187f318 + 0x187f13c));
    func_0x01438628(*(undefined4 *)(_UNK_0187f31c + 0x187f148));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x93dd,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0187f320 + 0x187f1b0));
    func_0x01883710(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0187f324 + 0x187f1cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0187f328 + 0x187f1e8));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x0187f33c(param_1);
      }
      iVar4 = func_0x0187f3f8(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0187f32c + 0x187f280));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_0187f330 + 0x187f2a0),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0187f334 + 0x187f2b8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x20) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x20) + -2,
                                  **(undefined4 **)(_UNK_0187f338 + 0x187f2ec));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x93dd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02928da0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


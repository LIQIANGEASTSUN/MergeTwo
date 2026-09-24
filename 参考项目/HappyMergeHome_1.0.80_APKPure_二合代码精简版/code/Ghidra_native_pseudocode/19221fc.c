
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019321fc(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_01932434 + 0x1932218);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01932438 + 0x193222c));
    func_0x01438628(*(undefined4 *)(_UNK_0193243c + 0x1932238));
    func_0x01438628(*(undefined4 *)(_UNK_01932440 + 0x1932244));
    func_0x01438628(*(undefined4 *)(_UNK_01932444 + 0x1932250));
    func_0x01438628(*(undefined4 *)(_UNK_01932448 + 0x193225c));
    func_0x01438628(*(undefined4 *)(_UNK_0193244c + 0x1932268));
    func_0x01438628(*(undefined4 *)(_UNK_01932450 + 0x1932274));
    func_0x01438628(*(undefined4 *)(_UNK_01932454 + 0x1932280));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x97b8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01932458 + 0x19322e8));
    func_0x01936ea0(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0193245c + 0x1932304) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01932460 + 0x1932320));
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
        param_2 = func_0x01932474(param_1);
      }
      iVar4 = func_0x01932530(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01932464 + 0x19323b8));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_01932468 + 0x19323d8),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0193246c + 0x19323f0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_01932470 + 0x1932424));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x97b8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0292abdc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


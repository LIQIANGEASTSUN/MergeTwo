
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0196c404(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0196c63c + 0x196c420);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196c640 + 0x196c434));
    func_0x01438628(*(undefined4 *)(_UNK_0196c644 + 0x196c440));
    func_0x01438628(*(undefined4 *)(_UNK_0196c648 + 0x196c44c));
    func_0x01438628(*(undefined4 *)(_UNK_0196c64c + 0x196c458));
    func_0x01438628(*(undefined4 *)(_UNK_0196c650 + 0x196c464));
    func_0x01438628(*(undefined4 *)(_UNK_0196c654 + 0x196c470));
    func_0x01438628(*(undefined4 *)(_UNK_0196c658 + 0x196c47c));
    func_0x01438628(*(undefined4 *)(_UNK_0196c65c + 0x196c488));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x9943,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0196c660 + 0x196c4f0));
    func_0x019711bc(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0196c664 + 0x196c50c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0196c668 + 0x196c528));
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
        param_2 = func_0x0196c67c(param_1);
      }
      iVar4 = func_0x0196c738(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0196c66c + 0x196c5c0));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_0196c670 + 0x196c5e0),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0196c674 + 0x196c5f8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0196c678 + 0x196c62c));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x9943,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0292b884(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


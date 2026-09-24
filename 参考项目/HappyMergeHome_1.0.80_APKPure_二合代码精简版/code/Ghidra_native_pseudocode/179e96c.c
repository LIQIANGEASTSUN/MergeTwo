
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017ae96c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_017aeba4 + 0x17ae988);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017aeba8 + 0x17ae99c));
    func_0x01438628(*(undefined4 *)(_UNK_017aebac + 0x17ae9a8));
    func_0x01438628(*(undefined4 *)(_UNK_017aebb0 + 0x17ae9b4));
    func_0x01438628(*(undefined4 *)(_UNK_017aebb4 + 0x17ae9c0));
    func_0x01438628(*(undefined4 *)(_UNK_017aebb8 + 0x17ae9cc));
    func_0x01438628(*(undefined4 *)(_UNK_017aebbc + 0x17ae9d8));
    func_0x01438628(*(undefined4 *)(_UNK_017aebc0 + 0x17ae9e4));
    func_0x01438628(*(undefined4 *)(_UNK_017aebc4 + 0x17ae9f0));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x8e9e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017aebc8 + 0x17aea58));
    func_0x024eeca8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_017aebcc + 0x17aea74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017aebd0 + 0x17aea90));
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
        param_2 = func_0x017aebec(param_1);
      }
      iVar4 = func_0x017aeca8(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017aebd4 + 0x17aeb28));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_017aebd8 + 0x17aeb48),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_017aebdc + 0x17aeb60));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x20) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x20) + -2,
                                  **(undefined4 **)(_UNK_017aebe0 + 0x17aeb94));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8e9e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029262bc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


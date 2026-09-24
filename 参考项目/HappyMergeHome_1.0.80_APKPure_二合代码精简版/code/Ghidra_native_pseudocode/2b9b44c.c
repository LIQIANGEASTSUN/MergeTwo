
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bab44c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02bab730 + 0x2bab468);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bab734 + 0x2bab47c));
    func_0x01438628(*(undefined4 *)(_UNK_02bab738 + 0x2bab488));
    func_0x01438628(*(undefined4 *)(_UNK_02bab73c + 0x2bab494));
    func_0x01438628(*(undefined4 *)(_UNK_02bab740 + 0x2bab4a0));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x02953fd4(0x5cb5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cb5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
    return;
  }
  piVar6 = *(int **)(_UNK_02bab744 + 0x2bab508);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,4,0,0);
  iVar4 = **(int **)(*piVar6 + 0x5c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar1 == 0) {
    func_0x02b6127c(iVar4,4,**(undefined4 **)(_UNK_02bab748 + 0x2bab570),0,0);
    iVar1 = func_0x02bab750(param_1,param_2);
    if (iVar1 != 0) {
      return;
    }
    func_0x02babb4c(param_1,param_2);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(param_2 + 0x50);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      iVar1 = func_0x02babc50(param_1);
      if (iVar1 == 0) {
        return;
      }
      iStack_20 = 0;
      iStack_1c = 0;
      iVar1 = func_0x02babd78(param_1,param_2,&iStack_1c,&iStack_20);
      if (iVar1 == 0) {
        return;
      }
      func_0x02babfe0(param_1,param_2,&iStack_1c,&iStack_20);
      func_0x02bac134(param_1,iStack_1c,iStack_20);
      iVar1 = iStack_1c;
      iVar4 = **(int **)(*piVar6 + 0x5c);
      if (iStack_1c == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)func_0x024eecb8(iVar1,0);
      iVar1 = iStack_20;
      if (iStack_20 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar2 = (int *)func_0x024eecb8(iVar1,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      piVar5 = (int *)0x0;
      if ((piVar6 != (int *)0x0) &&
         (piVar5 = piVar6, *piVar6 != **(int **)(_UNK_02bab74c + 0x2bab6d8))) {
        piVar5 = (int *)0x0;
      }
      piVar6 = (int *)0x0;
      if ((piVar2 != (int *)0x0) &&
         (piVar6 = piVar2, *piVar2 != **(int **)(_UNK_02bab74c + 0x2bab6d8))) {
        piVar6 = (int *)0x0;
      }
      func_0x02b647b4(iVar4,2,piVar5,piVar6,0,1,0,0);
      return;
    }
    iVar4 = **(int **)(*piVar6 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
  }
  func_0x02b649c0(iVar4,2,0);
  return;
}


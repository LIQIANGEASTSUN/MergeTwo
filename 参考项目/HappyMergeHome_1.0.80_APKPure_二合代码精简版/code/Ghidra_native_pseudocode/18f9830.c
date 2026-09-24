
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01909830(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_019098cc + 0x1909844);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019098d0 + 0x1909858));
    func_0x01438628(*(undefined4 *)(_UNK_019098d4 + 0x1909864));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    return *(int *)(param_1 + 8);
  }
  if (*(int *)(**(int **)(_UNK_019098d8 + 0x1909884) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019098dc + 0x19098a0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_02029ad0 + 0x20299ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02029ad4 + 0x20299c0),0x756,0,0);
    func_0x01438628(*(undefined4 *)(_UNK_02029ad8 + 0x20299cc));
    func_0x01438628(*(undefined4 *)(_UNK_02029adc + 0x20299d8));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x207,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02029ae0 + 0x2029a3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02029ae4 + 0x2029a58));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x029b4dd0(iVar2,0x756,0);
    if ((iVar2 != 0) &&
       (iVar3 = func_0x01523ccc(iVar2,**(undefined4 **)(_UNK_02029ae8 + 0x2029a98),0), iVar3 == 0))
    {
      pcVar4 = (char *)(_UNK_02029dbc + 0x2029b10);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02029dc0 + 0x2029b24));
        func_0x01438628(*(undefined4 *)(_UNK_02029dc4 + 0x2029b30));
        *pcVar4 = '\x01';
      }
      iVar3 = func_0x02953fd4(0x20a,0);
      if (iVar3 == 0) {
        iVar1 = func_0x02029674(iVar1,1,iVar2);
        if (*(int *)(**(int **)(_UNK_02029dc8 + 0x2029ba8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x024ef144(iVar1,0,0);
        iVar3 = -0x40800000;
        if (iVar2 != 0) {
          if (*(int *)(**(int **)(_UNK_02029dcc + 0x2029be0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x0283f180(iVar1,0,0);
          if (0 < iVar2) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f30c0(iVar1,0);
          }
        }
      }
      else {
        iVar3 = func_0x029540a4(0x20a,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x028710a0(iVar3,iVar1,iVar2,0,0);
      }
      return iVar3;
    }
    iVar1 = -0x40800000;
  }
  else {
    iVar2 = func_0x029540a4(0x207,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02871198(iVar2,iVar1,0x756,0,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032b8320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_032b83bc + 0x32b8334);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b83c0 + 0x32b8348));
    func_0x01438628(*(undefined4 *)(_UNK_032b83c4 + 0x32b8354));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    return *(int *)(param_1 + 8);
  }
  if (*(int *)(**(int **)(_UNK_032b83c8 + 0x32b8374) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032b83cc + 0x32b8390));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_02029ad0 + 0x20299ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02029ad4 + 0x20299c0),0x756,0,0);
    func_0x01438628(*(undefined4 *)(_UNK_02029ad8 + 0x20299cc));
    func_0x01438628(*(undefined4 *)(_UNK_02029adc + 0x20299d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x207,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02029ae0 + 0x2029a3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02029ae4 + 0x2029a58));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b4dd0(iVar1,0x756,0);
    if ((iVar1 != 0) &&
       (iVar2 = func_0x01523ccc(iVar1,**(undefined4 **)(_UNK_02029ae8 + 0x2029a98),0), iVar2 == 0))
    {
      pcVar4 = (char *)(_UNK_02029dbc + 0x2029b10);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02029dc0 + 0x2029b24));
        func_0x01438628(*(undefined4 *)(_UNK_02029dc4 + 0x2029b30));
        *pcVar4 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x20a,0);
      if (iVar2 == 0) {
        iVar3 = func_0x02029674(iVar3,1,iVar1);
        if (*(int *)(**(int **)(_UNK_02029dc8 + 0x2029ba8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(iVar3,0,0);
        iVar2 = -0x40800000;
        if (iVar1 != 0) {
          if (*(int *)(**(int **)(_UNK_02029dcc + 0x2029be0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x0283f180(iVar3,0,0);
          if (0 < iVar1) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024f30c0(iVar3,0);
          }
        }
      }
      else {
        iVar2 = func_0x029540a4(0x20a,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x028710a0(iVar2,iVar3,iVar1,0,0);
      }
      return iVar2;
    }
    iVar3 = -0x40800000;
  }
  else {
    iVar1 = func_0x029540a4(0x207,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02871198(iVar1,iVar3,0x756,0,0);
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3f860(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02c3f8ec + 0x2c3f870);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3f8f0 + 0x2c3f884));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f8f4 + 0x2c3f890));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c3f8f8 + 0x2c3f8a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c3f8fc + 0x2c3f8c0));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02029ad0 + 0x20299ac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02029ad4 + 0x20299c0),0xd,0,0);
    func_0x01438628(*(undefined4 *)(_UNK_02029ad8 + 0x20299cc));
    func_0x01438628(*(undefined4 *)(_UNK_02029adc + 0x20299d8));
    *pcVar5 = '\x01';
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
    iVar1 = func_0x029b4dd0(iVar1,0xd,0);
    if ((iVar1 != 0) &&
       (iVar3 = func_0x01523ccc(iVar1,**(undefined4 **)(_UNK_02029ae8 + 0x2029a98),0), iVar3 == 0))
    {
      pcVar5 = (char *)(_UNK_02029dbc + 0x2029b10);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02029dc0 + 0x2029b24));
        func_0x01438628(*(undefined4 *)(_UNK_02029dc4 + 0x2029b30));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x02953fd4(0x20a,0);
      if (iVar3 == 0) {
        iVar4 = func_0x02029674(iVar4,1,iVar1);
        if (*(int *)(**(int **)(_UNK_02029dc8 + 0x2029ba8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(iVar4,0,0);
        uVar2 = 0xbf800000;
        if (iVar1 != 0) {
          if (*(int *)(**(int **)(_UNK_02029dcc + 0x2029be0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x0283f180(iVar4,0,0);
          if (0 < iVar1) {
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x024f30c0(iVar4,0);
          }
        }
      }
      else {
        iVar3 = func_0x029540a4(0x20a,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x028710a0(iVar3,iVar4,iVar1,0,0);
      }
      return uVar2;
    }
    uVar2 = 0xbf800000;
  }
  else {
    iVar1 = func_0x029540a4(0x207,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02871198(iVar1,iVar4,0xd,0,0);
  }
  return uVar2;
}


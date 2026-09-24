
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c44358(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_02c4440c + 0x2c4436c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c44410 + 0x2c44380));
    func_0x01438628(*(undefined4 *)(_UNK_02c44414 + 0x2c4438c));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 8) + -1;
  if (iVar4 == iVar2) {
    if (*(int *)(**(int **)(_UNK_02c44418 + 0x2c443c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c4441c + 0x2c443e0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02029ad0 + 0x20299ac);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02029ad4 + 0x20299c0),0x756,0,0);
      func_0x01438628(*(undefined4 *)(_UNK_02029ad8 + 0x20299cc));
      func_0x01438628(*(undefined4 *)(_UNK_02029adc + 0x20299d8));
      *pcVar3 = '\x01';
    }
    iVar4 = func_0x02953fd4(0x207,0);
    if (iVar4 == 0) {
      if (*(int *)(**(int **)(_UNK_02029ae0 + 0x2029a3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02029ae4 + 0x2029a58));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029b4dd0(iVar4,0x756,0);
      if ((iVar4 != 0) &&
         (iVar1 = func_0x01523ccc(iVar4,**(undefined4 **)(_UNK_02029ae8 + 0x2029a98),0), iVar1 == 0)
         ) {
        pcVar3 = (char *)(_UNK_02029dbc + 0x2029b10);
        if (*pcVar3 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02029dc0 + 0x2029b24));
          func_0x01438628(*(undefined4 *)(_UNK_02029dc4 + 0x2029b30));
          *pcVar3 = '\x01';
        }
        iVar1 = func_0x02953fd4(0x20a,0);
        if (iVar1 == 0) {
          iVar2 = func_0x02029674(iVar2,1,iVar4);
          if (*(int *)(**(int **)(_UNK_02029dc8 + 0x2029ba8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x024ef144(iVar2,0,0);
          iVar1 = -0x40800000;
          if (iVar4 != 0) {
            if (*(int *)(**(int **)(_UNK_02029dcc + 0x2029be0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x0283f180(iVar2,0,0);
            if (0 < iVar4) {
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024f30c0(iVar2,0);
            }
          }
        }
        else {
          iVar1 = func_0x029540a4(0x20a,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x028710a0(iVar1,iVar2,iVar4,0,0);
        }
        return iVar1;
      }
      iVar2 = -0x40800000;
    }
    else {
      iVar4 = func_0x029540a4(0x207,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02871198(iVar4,iVar2,0x756,0,0);
    }
    return iVar2;
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c53008(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02c53120 + 0x2c53028);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c53124 + 0x2c5303c));
    func_0x01438628(*(undefined4 *)(_UNK_02c53128 + 0x2c53048));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f5b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0374edcc(param_1,param_2,0,**(undefined4 **)(_UNK_02c5312c + 0x2c530b4));
    if (*(int *)(**(int **)(_UNK_02c53130 + 0x2c530cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024eec50(iVar1,0,0);
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      (*(code *)&UNK_06012ce4)(iVar1,param_3,0);
      return;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5f5b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028834e8(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


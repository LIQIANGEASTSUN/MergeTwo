
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b3ebc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02b3ec94 + 0x2b3ebd8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b3ec98 + 0x2b3ebec));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x621,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = func_0x02b4ed88();
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0475561c(iVar1,uVar2,&uStack_14,**(undefined4 **)(_UNK_02b3ec9c + 0x2b3ec7c));
      uVar2 = uStack_14;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x621,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0287f28c(iVar1,param_1,0);
  }
  return uVar2;
}


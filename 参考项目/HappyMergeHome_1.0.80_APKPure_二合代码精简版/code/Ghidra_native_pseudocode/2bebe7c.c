
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bfbe7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02bfbf98 + 0x2bfbe9c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfbf9c + 0x2bfbeb4));
    func_0x01438628(*(undefined4 *)(_UNK_02bfbfa0 + 0x2bfbec0));
    func_0x01438628(*(undefined4 *)(_UNK_02bfbfa4 + 0x2bfbecc));
    func_0x01438628(*(undefined4 *)(_UNK_02bfbfa8 + 0x2bfbed8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ea0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bfbfac + 0x2bfbf3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfbfb0 + 0x2bfbf58));
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02bdd790(iVar1,param_2,uVar2,0,0);
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x5ea0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}


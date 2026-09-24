
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0269ec6c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0269ed0c + 0x269ec84);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0269ed10 + 0x269ec98));
    func_0x01438628(*(undefined4 *)(_UNK_0269ed14 + 0x269eca4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_0269ed18 + 0x269ecc4);
  *(int *)(param_1 + 0x40) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0269ed1c + 0x269ece4));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


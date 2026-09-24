
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f7770(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f7810 + 0x26f7788);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7814 + 0x26f779c));
    func_0x01438628(*(undefined4 *)(_UNK_026f7818 + 0x26f77a8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x6c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f781c + 0x26f77c8);
  *(int *)(param_1 + 0x6c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f7820 + 0x26f77e8));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


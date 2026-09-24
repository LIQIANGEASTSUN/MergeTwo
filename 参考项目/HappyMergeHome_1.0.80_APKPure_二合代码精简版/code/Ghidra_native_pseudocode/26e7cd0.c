
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f7cd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f7d70 + 0x26f7ce8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7d74 + 0x26f7cfc));
    func_0x01438628(*(undefined4 *)(_UNK_026f7d78 + 0x26f7d08));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x94) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f7d7c + 0x26f7d28);
  *(int *)(param_1 + 0x94) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f7d80 + 0x26f7d48));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


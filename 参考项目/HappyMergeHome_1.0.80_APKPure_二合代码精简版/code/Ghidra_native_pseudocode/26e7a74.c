
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f7a74(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f7b14 + 0x26f7a8c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f7b18 + 0x26f7aa0));
    func_0x01438628(*(undefined4 *)(_UNK_026f7b1c + 0x26f7aac));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x80) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f7b20 + 0x26f7acc);
  *(int *)(param_1 + 0x80) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f7b24 + 0x26f7aec));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


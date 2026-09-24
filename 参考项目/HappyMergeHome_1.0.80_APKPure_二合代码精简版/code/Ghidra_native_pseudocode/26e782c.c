
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f782c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f78cc + 0x26f7844);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f78d0 + 0x26f7858));
    func_0x01438628(*(undefined4 *)(_UNK_026f78d4 + 0x26f7864));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x70) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f78d8 + 0x26f7884);
  *(int *)(param_1 + 0x70) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f78dc + 0x26f78a4));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


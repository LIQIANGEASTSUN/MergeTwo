
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026cf058(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026cf0f8 + 0x26cf070);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026cf0fc + 0x26cf084));
    func_0x01438628(*(undefined4 *)(_UNK_026cf100 + 0x26cf090));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x40) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026cf104 + 0x26cf0b0);
  *(char *)(param_1 + 0x40) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026cf108 + 0x26cf0d0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


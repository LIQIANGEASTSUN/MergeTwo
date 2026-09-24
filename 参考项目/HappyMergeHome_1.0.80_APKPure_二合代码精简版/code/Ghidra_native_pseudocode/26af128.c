
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026bf128(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026bf1c8 + 0x26bf140);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026bf1cc + 0x26bf154));
    func_0x01438628(*(undefined4 *)(_UNK_026bf1d0 + 0x26bf160));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x2d) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026bf1d4 + 0x26bf180);
  *(char *)(param_1 + 0x2d) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026bf1d8 + 0x26bf1a0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


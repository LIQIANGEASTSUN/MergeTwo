
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026bf06c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026bf10c + 0x26bf084);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026bf110 + 0x26bf098));
    func_0x01438628(*(undefined4 *)(_UNK_026bf114 + 0x26bf0a4));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026bf118 + 0x26bf0c4);
  *(char *)(param_1 + 0x2c) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026bf11c + 0x26bf0e4));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


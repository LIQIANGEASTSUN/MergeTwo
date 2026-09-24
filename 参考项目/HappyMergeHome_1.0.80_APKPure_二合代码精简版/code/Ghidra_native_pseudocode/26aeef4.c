
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026beef4(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026bef94 + 0x26bef0c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026bef98 + 0x26bef20));
    func_0x01438628(*(undefined4 *)(_UNK_026bef9c + 0x26bef2c));
    *pcVar4 = '\x01';
  }
  if (*(byte *)(param_1 + 0x24) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026befa0 + 0x26bef4c);
  *(char *)(param_1 + 0x24) = (char)param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026befa4 + 0x26bef6c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


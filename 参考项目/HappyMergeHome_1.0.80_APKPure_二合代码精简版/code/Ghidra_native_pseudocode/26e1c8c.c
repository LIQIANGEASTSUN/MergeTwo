
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f1c8c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f1d2c + 0x26f1ca4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f1d30 + 0x26f1cb8));
    func_0x01438628(*(undefined4 *)(_UNK_026f1d34 + 0x26f1cc4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x38) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f1d38 + 0x26f1ce4);
  *(int *)(param_1 + 0x38) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f1d3c + 0x26f1d04));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026cdec8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026cdf68 + 0x26cdee0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026cdf6c + 0x26cdef4));
    func_0x01438628(*(undefined4 *)(_UNK_026cdf70 + 0x26cdf00));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026cdf74 + 0x26cdf20);
  *(int *)(param_1 + 0xc) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026cdf78 + 0x26cdf40));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026edb88(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026edc28 + 0x26edba0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026edc2c + 0x26edbb4));
    func_0x01438628(*(undefined4 *)(_UNK_026edc30 + 0x26edbc0));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x8c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026edc34 + 0x26edbe0);
  *(int *)(param_1 + 0x8c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026edc38 + 0x26edc00));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


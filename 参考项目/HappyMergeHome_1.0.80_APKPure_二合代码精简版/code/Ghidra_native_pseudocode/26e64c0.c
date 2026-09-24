
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f64c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f6560 + 0x26f64d8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f6564 + 0x26f64ec));
    func_0x01438628(*(undefined4 *)(_UNK_026f6568 + 0x26f64f8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x50) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f656c + 0x26f6518);
  *(int *)(param_1 + 0x50) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f6570 + 0x26f6538));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}


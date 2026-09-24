
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026f5f48(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_026f5fe8 + 0x26f5f60);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f5fec + 0x26f5f74));
    func_0x01438628(*(undefined4 *)(_UNK_026f5ff0 + 0x26f5f80));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f5ff4 + 0x26f5fa0);
  *(int *)(param_1 + 0xc) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_026f5ff8 + 0x26f5fc0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar3 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar3);
  return;
}

